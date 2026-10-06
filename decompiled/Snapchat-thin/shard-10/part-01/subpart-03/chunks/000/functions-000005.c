/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10779cd78; end: 10779cdb7;  */

undefined8 * FUN_10779cd78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073e6950(&uStack_30);
  return param_1;
}



/* Entry: 10779d010; end: 10779d1f3;  */

void FUN_10779d010(void)

{
  return;
}



/* Entry: 10779d3cc; end: 10779d3ff;  */

void FUN_10779d3cc(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077a0e04(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077a2fe4();
  return;
}



/* Entry: 10779db5c; end: 10779df9b;  */

ulong FUN_10779db5c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  ulong uVar23;
  
  lVar1 = param_1;
  func_0x00010778f398();
  lVar2 = param_1 + 0x38;
  func_0x000107798754();
  lVar3 = param_1 + 0x80;
  func_0x0001077859c4();
  lVar4 = param_1 + 0xb8;
  func_0x0001077859c4();
  lVar5 = param_1 + 0xf0;
  func_0x000107798754();
  lVar6 = param_1 + 0x138;
  func_0x00010778f398();
  lVar7 = param_1 + 0x170;
  func_0x00010778f398();
  lVar8 = param_1 + 0x1a8;
  func_0x00010778f398();
  lVar9 = param_1 + 0x1e0;
  func_0x00010778f398();
  if (*(int *)(param_1 + 0x248) != 0) {
    func_0x0001077a3268();
    func_0x0001073f687c(param_1 + 0x218);
    func_0x0001077a325c();
    func_0x0001077a2ef8(*(undefined4 *)(param_1 + 0x248));
    func_0x0001077a3228();
    (*extraout_x8)();
  }
  lVar10 = param_1 + 0x250;
  func_0x00010778f398();
  lVar11 = param_1 + 0x288;
  func_0x0001077859c4();
  lVar12 = param_1 + 0x2c0;
  func_0x0001077a1e68();
  lVar13 = param_1 + 0x2f8;
  func_0x0001077859c4();
  lVar14 = param_1 + 0x330;
  func_0x0001077859c4();
  lVar15 = param_1 + 0x368;
  func_0x0001077a1ed0();
  lVar16 = param_1 + 0x408;
  func_0x00010778bd00();
  lVar17 = param_1 + 0x480;
  func_0x0001077a1f08();
  lVar18 = param_1 + 0x4c0;
  func_0x00010778bd00(lVar18);
  lVar19 = param_1 + 0x538;
  func_0x0001077a1e68(lVar19);
  lVar20 = param_1 + 0x570;
  func_0x00010778f398(lVar20);
  lVar21 = param_1 + 0x5a8;
  func_0x00010778f398(lVar21);
  lVar22 = param_1 + 0x5e0;
  func_0x0001077859c4(lVar22);
  if (*(int *)(param_1 + 0x648) != 0) {
    func_0x0001077a3268();
    func_0x0001073f7090(param_1 + 0x618);
    func_0x0001077a325c();
    func_0x0001077a2ef8(*(undefined4 *)(param_1 + 0x648));
    func_0x0001077a3228();
    (*extraout_x8_00)();
  }
  if (*(int *)(param_1 + 0x680) != 0) {
    func_0x0001077a3268();
    func_0x0001073f71c0(param_1 + 0x650);
    func_0x0001077a325c();
    func_0x0001077a2ef8(*(undefined4 *)(param_1 + 0x680));
    func_0x0001077a3228();
    (*extraout_x8_01)();
  }
  if (*(int *)(param_1 + 0x6b8) != 0) {
    func_0x0001077a3268();
    func_0x0001073f72f4(param_1 + 0x688);
    func_0x0001077a325c();
    func_0x0001077a2ef8(*(undefined4 *)(param_1 + 0x6b8));
    func_0x0001077a3228();
    (*extraout_x8_02)();
  }
  uVar23 = lVar1 + 0x9e3779b97f4a7c15;
  uVar23 = lVar2 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar3 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar4 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar5 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar6 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar7 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar8 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar9 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = (uVar23 >> 4) + uVar23 * 0x1000 + 0x9e3779b97f4a7c15 ^ uVar23;
  uVar23 = lVar10 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar11 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar12 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar13 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar14 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar15 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar16 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar17 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar18 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar19 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar20 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar21 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = lVar22 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
  uVar23 = (uVar23 >> 4) + uVar23 * 0x1000 + 0x9e3779b97f4a7c15 ^ uVar23;
  uVar23 = (uVar23 >> 4) + uVar23 * 0x1000 + 0x9e3779b97f4a7c15 ^ uVar23;
  uVar23 = (uVar23 >> 4) + uVar23 * 0x1000 + 0x9e3779b97f4a7c15 ^ uVar23;
  param_1 = param_1 + 0x6c0;
  func_0x00010778f398(param_1);
  return param_1 + -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
}



/* Entry: 10779e1f0; end: 10779e3c3;  */

/* WARNING: Possible PIC construction at 0x00010779e284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077a0900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010779f188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010779e288) */
/* WARNING: Removing unreachable block (ram,0x00010779e290) */
/* WARNING: Removing unreachable block (ram,0x00010779e2f8) */
/* WARNING: Removing unreachable block (ram,0x00010779e318) */
/* WARNING: Removing unreachable block (ram,0x00010779f18c) */

undefined **
FUN_10779e1f0(undefined *param_1,undefined *param_2,undefined **param_3,undefined **param_4,
             undefined **param_5,undefined **param_6,undefined **param_7,undefined8 *param_8)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  char extraout_w8;
  char extraout_w8_00;
  char cVar16;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 uVar17;
  undefined8 extraout_x8;
  undefined8 uVar18;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  undefined8 extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  long extraout_x8_49;
  long extraout_x8_50;
  long extraout_x8_51;
  long extraout_x8_52;
  long extraout_x8_53;
  long extraout_x8_54;
  long extraout_x8_55;
  long extraout_x8_56;
  long extraout_x8_57;
  long extraout_x8_58;
  long extraout_x8_59;
  long extraout_x8_60;
  long extraout_x8_61;
  long extraout_x8_62;
  long extraout_x8_63;
  long extraout_x8_64;
  long extraout_x8_65;
  long extraout_x8_66;
  long extraout_x8_67;
  long extraout_x8_68;
  long extraout_x8_69;
  long extraout_x8_70;
  long extraout_x8_71;
  long extraout_x8_72;
  long extraout_x8_73;
  long extraout_x8_74;
  long extraout_x8_75;
  long extraout_x8_76;
  long extraout_x8_77;
  long extraout_x8_78;
  long extraout_x8_79;
  long extraout_x8_80;
  long extraout_x8_81;
  long extraout_x8_82;
  long extraout_x8_83;
  long extraout_x8_84;
  long extraout_x8_85;
  long extraout_x8_86;
  long extraout_x8_87;
  long extraout_x8_88;
  long extraout_x8_89;
  long extraout_x8_90;
  long extraout_x8_91;
  long extraout_x8_92;
  long extraout_x8_93;
  long extraout_x8_94;
  long extraout_x8_95;
  long extraout_x8_96;
  long extraout_x8_97;
  long extraout_x8_98;
  long extraout_x8_99;
  long extraout_x8_x00100;
  long extraout_x8_x00101;
  long extraout_x8_x00102;
  long extraout_x8_x00103;
  long extraout_x8_x00104;
  long extraout_x8_x00105;
  long extraout_x8_x00106;
  long extraout_x8_x00107;
  long extraout_x8_x00108;
  long extraout_x8_x00109;
  long extraout_x8_x00110;
  long extraout_x8_x00111;
  long extraout_x8_x00112;
  long extraout_x8_x00113;
  long extraout_x8_x00114;
  long extraout_x8_x00115;
  long extraout_x8_x00116;
  long extraout_x8_x00117;
  long extraout_x8_x00118;
  long extraout_x8_x00119;
  long extraout_x8_x00120;
  long extraout_x8_x00121;
  long extraout_x8_x00122;
  long extraout_x8_x00123;
  long extraout_x8_x00124;
  long extraout_x8_x00125;
  long extraout_x8_x00126;
  long extraout_x8_x00127;
  long extraout_x8_x00128;
  long extraout_x8_x00129;
  long extraout_x8_x00130;
  undefined **extraout_x8_x00131;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  undefined1 extraout_w9_01;
  undefined1 extraout_w9_02;
  undefined1 extraout_w9_03;
  undefined1 extraout_w9_04;
  undefined1 extraout_w9_05;
  undefined1 extraout_w9_06;
  undefined1 extraout_w9_07;
  undefined1 extraout_w9_08;
  undefined1 extraout_w9_09;
  undefined1 extraout_w9_10;
  undefined1 extraout_w9_11;
  undefined1 extraout_w9_12;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  long lVar19;
  undefined1 extraout_w10;
  undefined1 extraout_w10_00;
  undefined1 extraout_w10_01;
  undefined1 extraout_w10_02;
  undefined1 extraout_w10_03;
  undefined1 extraout_w10_04;
  undefined1 extraout_w10_05;
  undefined1 extraout_w10_06;
  undefined1 extraout_w10_07;
  undefined1 extraout_w10_08;
  undefined1 extraout_w10_09;
  undefined1 extraout_w10_10;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x22;
  uint uVar20;
  uint uVar21;
  undefined **unaff_x23;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **unaff_x25;
  undefined1 *puVar24;
  undefined *puVar25;
  undefined *in_register_00005008;
  undefined *in_register_00005028;
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [72];
  undefined *apuStack_b8 [9];
  undefined8 uStack_70;
  
  puVar24 = &stack0xfffffffffffffff0;
  func_0x0001077a312c();
  func_0x0001077a2d10();
  uStack_70 = extraout_x8;
  func_0x000107781de4();
  for (ppuVar23 = (undefined **)0x0; bVar5 = ppuVar23 == (undefined **)0x3f0,
      ppuVar22 = (undefined **)"/", !bVar5; ppuVar23 = ppuVar23 + 3) {
    unaff_x22 = (undefined **)0x0;
    uVar10 = (*(long *)(unaff_x20[1] + 0xfd0) - *(long *)(unaff_x20[1] + 0xfc8)) / 0xe98;
    unaff_x25 = (undefined **)(ulong)((uint)uVar10 & 0xffff);
    if ((uVar10 & 0xffff) != 0) {
      param_6 = (undefined **)(ulong)*(byte *)(ppuVar23 + 0x2213b36e);
      ppuVar7 = apuStack_b8;
      param_5 = (undefined **)0x0;
      puVar25 = (undefined *)0x10779e288;
      puVar3 = auStack_130;
      param_4 = unaff_x20;
      unaff_x23 = param_6;
      goto code_r0x00010779e3c4;
    }
  }
  func_0x0001077a2ae8(uStack_70);
  if (bVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  func_0x000104c3323c(apuStack_b8);
  ppuVar7 = unaff_x19;
  func_0x000104c3323c();
  puVar25 = &SUB_10779e3c4;
  func_0x0001077a2f98();
  puVar3 = auStack_130;
  unaff_x20 = param_3;
code_r0x00010779e3c4:
  do {
    *(undefined ***)(puVar3 + -0x20) = unaff_x20;
    *(undefined ***)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar24;
    *(undefined **)(puVar3 + -8) = puVar25;
    ppuVar8 = ppuVar7;
    func_0x0001077a2c5c();
    uVar6 = (int)param_6 == 0x29;
    ppuVar11 = param_5;
    switch((ulong)param_6 & 0xffffffff) {
    case 0:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        ppuVar8 = ppuVar8 + 0x131;
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        func_0x000107784c0c(ppuVar7,ppuVar8,puVar3 + -0x11);
        return ppuVar8;
      }
      break;
    case 1:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x13f;
code_r0x00010779e714:
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        func_0x000107784e48(ppuVar7);
        return param_4;
      }
      break;
    case 2:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x14b;
code_r0x00010779e764:
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        func_0x000107784cb8(ppuVar7);
        return param_4;
      }
      break;
    case 3:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x158;
        goto code_r0x00010779e714;
      }
      break;
    case 4:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x164;
        goto code_r0x00010779e714;
      }
      break;
    case 5:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x170;
        goto code_r0x00010779e764;
      }
      break;
    case 6:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x17d;
        goto code_r0x00010779e714;
      }
      break;
    case 7:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x189;
        goto code_r0x00010779e764;
      }
      break;
    case 8:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x196;
        goto code_r0x00010779e714;
      }
      break;
    case 9:
      func_0x00010779e164(param_4);
      func_0x0001077a2a5c();
      puVar15 = param_8;
      if ((bool)uVar6) goto code_r0x00010779e714;
      break;
    case 10:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x1ae;
        goto code_r0x00010779e764;
      }
      break;
    case 0xb:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x1bb;
        goto code_r0x00010779e714;
      }
      break;
    case 0xc:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0x1c7;
        goto code_r0x00010779e714;
      }
      break;
    case 0xd:
      func_0x0001077a2ad8();
      in_register_00005008 = ppuVar8[0x13b];
      param_1 = ppuVar8[0x13a];
      in_register_00005028 = ppuVar8[0x13d];
      param_2 = ppuVar8[0x13c];
      *(undefined **)(puVar3 + -0x68) = in_register_00005008;
      *(undefined **)(puVar3 + -0x70) = param_1;
      *(undefined **)(puVar3 + -0x58) = in_register_00005028;
      *(undefined **)(puVar3 + -0x60) = param_2;
      *(undefined **)(puVar3 + -0x50) = ppuVar8[0x13e];
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0xe:
      func_0x0001077a2ad8();
      in_register_00005008 = ppuVar8[0x147];
      param_1 = ppuVar8[0x146];
      in_register_00005028 = ppuVar8[0x149];
      param_2 = ppuVar8[0x148];
      *(undefined **)(puVar3 + -0x68) = in_register_00005008;
      *(undefined **)(puVar3 + -0x70) = param_1;
      *(undefined **)(puVar3 + -0x58) = in_register_00005028;
      *(undefined **)(puVar3 + -0x60) = param_2;
      *(undefined **)(puVar3 + -0x50) = ppuVar8[0x14a];
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0xf:
      func_0x0001077a2ad8();
      func_0x0001077a2e40(ppuVar8 + 0x153);
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x10:
      func_0x0001077a2ad8();
      func_0x0001077a2e40(ppuVar8 + 0x15f);
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x11:
      func_0x0001077a2ad8();
      func_0x0001077a2e40(ppuVar8 + 0x16b);
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x12:
      func_0x0001077a2ad8();
      in_register_00005008 = ppuVar8[0x179];
      param_1 = ppuVar8[0x178];
      in_register_00005028 = ppuVar8[0x17b];
      param_2 = ppuVar8[0x17a];
      *(undefined **)(puVar3 + -0x68) = in_register_00005008;
      *(undefined **)(puVar3 + -0x70) = param_1;
      *(undefined **)(puVar3 + -0x58) = in_register_00005028;
      *(undefined **)(puVar3 + -0x60) = param_2;
      *(undefined **)(puVar3 + -0x50) = ppuVar8[0x17c];
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x13:
      func_0x0001077a2ad8();
      in_register_00005008 = ppuVar8[0x185];
      param_1 = ppuVar8[0x184];
      in_register_00005028 = ppuVar8[0x187];
      param_2 = ppuVar8[0x186];
      *(undefined **)(puVar3 + -0x68) = in_register_00005008;
      *(undefined **)(puVar3 + -0x70) = param_1;
      *(undefined **)(puVar3 + -0x58) = in_register_00005028;
      *(undefined **)(puVar3 + -0x60) = param_2;
      *(undefined **)(puVar3 + -0x50) = ppuVar8[0x188];
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x14:
      func_0x0001077a2ad8();
      func_0x0001077a2e40(ppuVar8 + 0x191);
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x15:
      func_0x0001077a2ad8();
      func_0x0001077a2e40(ppuVar8 + 0x19d);
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x16:
      func_0x0001077a2ad8();
      func_0x0001077a2e40(ppuVar8 + 0x1a9);
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x17:
      func_0x0001077a2ad8();
      in_register_00005008 = ppuVar8[0x1b7];
      param_1 = ppuVar8[0x1b6];
      in_register_00005028 = ppuVar8[0x1b9];
      param_2 = ppuVar8[0x1b8];
      *(undefined **)(puVar3 + -0x68) = in_register_00005008;
      *(undefined **)(puVar3 + -0x70) = param_1;
      *(undefined **)(puVar3 + -0x58) = in_register_00005028;
      *(undefined **)(puVar3 + -0x60) = param_2;
      *(undefined **)(puVar3 + -0x50) = ppuVar8[0x1ba];
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x18:
      func_0x0001077a2ad8();
      in_register_00005008 = ppuVar8[0x1c3];
      param_1 = ppuVar8[0x1c2];
      in_register_00005028 = ppuVar8[0x1c5];
      param_2 = ppuVar8[0x1c4];
      *(undefined **)(puVar3 + -0x68) = in_register_00005008;
      *(undefined **)(puVar3 + -0x70) = param_1;
      *(undefined **)(puVar3 + -0x58) = in_register_00005028;
      *(undefined **)(puVar3 + -0x60) = param_2;
      *(undefined **)(puVar3 + -0x50) = ppuVar8[0x1c6];
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x19:
      func_0x0001077a2ad8();
      in_register_00005008 = ppuVar8[0x1cf];
      param_1 = ppuVar8[0x1ce];
      in_register_00005028 = ppuVar8[0x1d1];
      param_2 = ppuVar8[0x1d0];
      *(undefined **)(puVar3 + -0x68) = in_register_00005008;
      *(undefined **)(puVar3 + -0x70) = param_1;
      *(undefined **)(puVar3 + -0x58) = in_register_00005028;
      *(undefined **)(puVar3 + -0x60) = param_2;
      *(undefined **)(puVar3 + -0x50) = ppuVar8[0x1d2];
      func_0x0001077a2c50();
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x1a:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        ppuVar8 = ppuVar8 + 0x58;
code_r0x00010779e878:
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        func_0x000107785298(ppuVar7,ppuVar8,puVar3 + -0x11);
        return ppuVar8;
      }
      break;
    case 0x1b:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        ppuVar8 = ppuVar8 + 0x5f;
code_r0x00010779e484:
        uVar6 = 1;
        unaff_x20 = *(undefined ***)(puVar3 + -0x20);
        puVar4 = puVar3 + -0x70;
        *(undefined ***)(puVar3 + -0x20) = unaff_x20;
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        puVar24 = puVar3 + -0x10;
        ppuVar23 = ppuVar7;
        func_0x0001077a2c5c();
        if (*(int *)(ppuVar8 + 6) == 0) {
          func_0x0001077a2d50();
        }
        else {
          uVar6 = *(int *)(ppuVar8 + 6) == 1;
          if ((bool)uVar6) {
            uVar10 = (ulong)*(byte *)ppuVar8;
            FUN_1077f2d98(uVar10);
            ppuVar23 = (undefined **)(puVar3 + -0x68);
            func_0x00010724ae4c(ppuVar23,uVar10);
            func_0x0001077a318c();
            cVar16 = '\x01';
          }
          else {
            ppuVar23 = (undefined **)*ppuVar8;
            func_0x0001077a2f18(ppuVar23);
            func_0x0001077a2f24();
            func_0x0001077a318c();
            cVar16 = '\x02';
          }
          *(char *)(ppuVar7 + 8) = cVar16;
          func_0x0001077a2e7c();
        }
        func_0x0001077a2a5c();
        if ((bool)uVar6) {
          return ppuVar23;
        }
        ___stack_chk_fail();
        puVar25 = &UNK_1077a0d68;
        __Unwind_Resume();
        goto code_r0x0001077a0d68;
      }
      break;
    case 0x1c:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        ppuVar8 = ppuVar8 + 0x66;
        goto code_r0x00010779e878;
      }
      break;
    case 0x1d:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        ppuVar8 = ppuVar8 + 0x6d;
        goto code_r0x00010779e878;
      }
      break;
    case 0x1e:
      func_0x00010779dfcc(param_4);
      func_0x0001077a2a5c();
      puVar15 = param_8;
      if ((bool)uVar6) {
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        FUN_107784f0c(ppuVar7);
        return param_4;
      }
      break;
    case 0x1f:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        ppuVar8 = ppuVar8 + 0x88;
code_r0x00010779e618:
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        func_0x00010778b36c(ppuVar7,ppuVar8,puVar3 + -0x11);
        return ppuVar8;
      }
      break;
    case 0x20:
      func_0x00010779e058(param_4);
      func_0x0001077a2a5c();
      puVar15 = param_8;
      if ((bool)uVar6) goto code_r0x00010779e764;
      break;
    case 0x21:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        ppuVar8 = ppuVar8 + 0x9f;
        goto code_r0x00010779e618;
      }
      break;
    case 0x22:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        ppuVar8 = ppuVar8 + 0xae;
        goto code_r0x00010779e484;
      }
      break;
    case 0x23:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0xb5;
        goto code_r0x00010779e714;
      }
      break;
    case 0x24:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0xbc;
        goto code_r0x00010779e714;
      }
      break;
    case 0x25:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        ppuVar8 = ppuVar8 + 0xc3;
        goto code_r0x00010779e878;
      }
      break;
    case 0x26:
      func_0x0001077a2ad8();
      if (*(int *)(ppuVar8 + 0xd0) == 0) goto code_r0x00010779e860;
      uVar6 = *(int *)(ppuVar8 + 0xd0) == 1;
      if ((bool)uVar6) {
        ppuVar8 = (undefined **)(ulong)*(byte *)(ppuVar8 + 0xca);
        func_0x0001077f2a50();
        param_4 = ppuVar8;
        func_0x0001077a307c();
        goto code_r0x00010779e854;
      }
      ppuVar8 = (undefined **)ppuVar8[0xca];
      func_0x0001077a2f18(ppuVar8);
      func_0x0001077a30a0();
code_r0x00010779e8b8:
      func_0x0001077a2ea8();
      uVar18 = 2;
code_r0x00010779e8c0:
      func_0x0001077a31f0(uVar18);
      ppuVar11 = param_5;
      goto code_r0x00010779e8c4;
    case 0x27:
      func_0x0001077a2ad8();
      if (*(int *)(ppuVar8 + 0xd7) != 0) {
        uVar6 = *(int *)(ppuVar8 + 0xd7) == 1;
        if (!(bool)uVar6) {
          ppuVar8 = (undefined **)ppuVar8[0xd1];
          func_0x0001077a2f18(ppuVar8);
          func_0x0001077a30a0();
          goto code_r0x00010779e8b8;
        }
        uVar6 = *(char *)(ppuVar8 + 0xd1) == '\0';
        param_4 = (undefined **)&DAT_10f42a790;
        if ((bool)uVar6) {
          param_4 = (undefined **)&DAT_10f42a788;
        }
        func_0x0001077a307c();
code_r0x00010779e854:
        func_0x0001077a2ea8();
        uVar18 = 1;
        goto code_r0x00010779e8c0;
      }
    default:
code_r0x00010779e860:
      func_0x0001077a2d50();
      ppuVar11 = param_5;
code_r0x00010779e8c4:
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        return ppuVar8;
      }
      break;
    case 0x28:
      func_0x0001077a2ad8();
      if (*(int *)(ppuVar8 + 0xde) != 0) {
        uVar6 = *(int *)(ppuVar8 + 0xde) == 1;
        if (!(bool)uVar6) {
          ppuVar8 = (undefined **)ppuVar8[0xd8];
          func_0x0001077a2f18(ppuVar8);
          func_0x0001077a30a0();
          goto code_r0x00010779e8b8;
        }
        ppuVar8 = (undefined **)(ulong)*(byte *)(ppuVar8 + 0xd8);
        func_0x0001077f2978();
        param_4 = ppuVar8;
        func_0x0001077a307c();
        goto code_r0x00010779e854;
      }
      goto code_r0x00010779e860;
    case 0x29:
      func_0x0001077a2ad8();
      ppuVar11 = param_5;
      func_0x0001077a2a5c();
      param_5 = param_4;
      puVar15 = param_8;
      if ((bool)uVar6) {
        param_4 = ppuVar8 + 0xdf;
        goto code_r0x00010779e714;
      }
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    puVar4 = puVar3 + -0x170;
    *(undefined ***)(puVar3 + -0xb0) = ppuVar23;
    *(undefined ***)(puVar3 + -0xa8) = unaff_x23;
    *(undefined ***)(puVar3 + -0xa0) = unaff_x22;
    *(undefined ***)(puVar3 + -0x98) = ppuVar22;
    *(undefined ***)(puVar3 + -0x90) = unaff_x20;
    *(undefined ***)(puVar3 + -0x88) = ppuVar7;
    *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x78) = &DAT_10779e8dc;
    puVar24 = puVar3 + -0x80;
    ppuVar13 = param_6;
    ppuVar14 = param_7;
    func_0x0001077a312c();
    func_0x0001077a2d10();
    *(undefined8 *)(puVar3 + -0xb8) = extraout_x8_00;
    *(undefined ***)(puVar3 + -0x140) = param_5;
    *(undefined ***)(puVar3 + -0x138) = ppuVar11;
    ppuVar22 = &PTR_DAT_1109d9f58;
    puVar9 = puVar3 + -0x140;
    ppuVar8 = ppuVar22;
    func_0x00010778ebd4();
    if (ppuVar8 == &PTR_DAT_1109da180) {
      *(char *)ppuVar7 = '\0';
      *(char *)(ppuVar7 + 3) = '\0';
      uVar6 = 1;
      ppuVar7 = &PTR_DAT_1109da180;
      goto code_r0x00010779f2cc;
    }
    bVar1 = *(byte *)(ppuVar8 + 1);
    ppuVar22 = (undefined **)(ulong)bVar1;
    uVar6 = bVar1 == 0x16;
    uVar20 = (uint)bVar1;
    if (bVar1 < 0x17) {
      uVar21 = (uint)bVar1;
      switch(ppuVar22) {
      default:
        func_0x0001077a2b44();
        func_0x0001077a2cbc();
        func_0x00010733b904();
        if ((puVar3[-0xd0] & 1) == 0) {
          func_0x0001077a2ca4();
          if (extraout_x8_02 != 0) {
            func_0x0001077a2d00();
            func_0x0001077a2c80();
            func_0x0001077a2b34();
            func_0x0001077a2c98();
            func_0x0001077a2e6c();
          }
          func_0x0001077a2a08();
        }
        else {
          uVar6 = uVar21 - 0xc == 10;
          switch(uVar21 - 0xc) {
          case 0:
            func_0x0001077a2edc();
            uVar10 = 0;
            puVar9 = (undefined1 *)(extraout_x8_01 + 0x168);
            func_0x000107786038();
            if ((uVar10 & 1) == 0) {
              if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a2e8c(*(long *)(puVar3 + -0x130) + 0x168);
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2e8c(*param_7 + 0x168);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
            break;
          case 1:
          case 2:
          case 3:
          case 4:
          case 9:
code_r0x00010779ea54:
            func_0x00010727e950(puVar3 + -0x108);
            func_0x0001077a2ecc();
            uVar6 = uVar20 - 2 == 0x13;
            switch(uVar20 - 2) {
            case 0:
            case 1:
            case 3:
              goto code_r0x00010779ea84;
            case 0xb:
            case 0xe:
              goto code_r0x00010779eaf4;
            case 0xc:
              goto code_r0x00010779efa4;
            case 0xd:
              goto code_r0x00010779eed0;
            case 0x13:
              goto code_r0x00010779eb7c;
            }
            goto code_r0x00010779ef30;
          case 5:
            func_0x0001077a2edc();
            uVar10 = 0;
            puVar9 = (undefined1 *)(extraout_x8_13 + 0x2a0);
            func_0x000107786038();
            if ((uVar10 & 1) == 0) {
              if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a2e8c(*(long *)(puVar3 + -0x130) + 0x2a0);
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2e8c(*param_7 + 0x2a0);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
            break;
          case 6:
            func_0x0001077a2edc();
            uVar10 = 0;
            puVar9 = (undefined1 *)(extraout_x8_12 + 0x2d8);
            func_0x000107786038();
            if ((uVar10 & 1) == 0) {
              if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a2e8c(*(long *)(puVar3 + -0x130) + 0x2d8);
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2e8c(*param_7 + 0x2d8);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
            break;
          case 7:
            func_0x0001077a2edc();
            uVar10 = 0;
            puVar9 = (undefined1 *)(extraout_x8_11 + 0x310);
            func_0x000107786038();
            if ((uVar10 & 1) == 0) {
              if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a2e8c(*(long *)(puVar3 + -0x130) + 0x310);
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2e8c(*param_7 + 0x310);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
            break;
          case 8:
            func_0x0001077a2edc();
            uVar10 = 0;
            puVar9 = (undefined1 *)(extraout_x8_10 + 0x348);
            func_0x000107786038();
            if ((uVar10 & 1) == 0) {
              if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a2e8c(*(long *)(puVar3 + -0x130) + 0x348);
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2e8c(*param_7 + 0x348);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
            break;
          case 10:
            func_0x0001077a2edc();
            uVar10 = 0;
            puVar9 = (undefined1 *)(extraout_x8_14 + 0x3b8);
            func_0x000107786038();
            if ((uVar10 & 1) == 0) {
              if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a2e8c(*(long *)(puVar3 + -0x130) + 0x3b8);
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2e8c(*param_7 + 0x3b8);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
            break;
          default:
            uVar6 = uVar21 == 4;
            if ((bool)uVar6) {
              func_0x0001077a2edc();
              uVar10 = 0;
              puVar9 = (undefined1 *)(extraout_x8_18 + 0x9f0);
              func_0x000107786038();
              if ((uVar10 & 1) == 0) {
                if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                  func_0x0001077a2e0c(*param_7);
                  func_0x0001077a2fa0(*(long *)(puVar3 + -0x130) + 0x9f0);
                  func_0x0001077a2c8c();
                  func_0x0001077a2de4();
                }
                else {
                  func_0x0001077a2fa0(*param_7 + 0x9f0);
                }
                func_0x0001077a2c28();
                func_0x0001077a2e14();
              }
            }
            else {
              uVar6 = uVar21 == 1;
              if ((bool)uVar6) {
                func_0x0001077a2edc();
                uVar10 = 0;
                puVar9 = (undefined1 *)(extraout_x8_17 + 0x8c0);
                func_0x000107786038();
                if ((uVar10 & 1) == 0) {
                  if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                    func_0x0001077a2e0c(*param_7);
                    func_0x0001077a2fa0(*(long *)(puVar3 + -0x130) + 0x8c0);
                    func_0x0001077a2c8c();
                    func_0x0001077a2de4();
                  }
                  else {
                    func_0x0001077a2fa0(*param_7 + 0x8c0);
                  }
                  func_0x0001077a2c28();
                  func_0x0001077a2e14();
                }
              }
              else {
                if (uVar21 != 0) goto code_r0x00010779ea54;
                func_0x0001077a2edc();
                uVar10 = 0;
                puVar9 = (undefined1 *)(extraout_x8_03 + 0x860);
                func_0x000107786038();
                if ((uVar10 & 1) == 0) {
                  if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                    func_0x0001077a2e0c(*param_7);
                    func_0x0001077a2fa0(*(long *)(puVar3 + -0x130) + 0x860);
                    func_0x0001077a2c8c();
                    func_0x0001077a2de4();
                  }
                  else {
                    func_0x0001077a2fa0(*param_7 + 0x860);
                  }
                  func_0x0001077a2c28();
                  func_0x0001077a2e14();
                }
              }
            }
          }
          func_0x0001077a2eb4();
        }
        func_0x0001077a3120();
        func_0x00010727e950();
        break;
      case (undefined **)0x2:
      case (undefined **)0x3:
      case (undefined **)0x5:
code_r0x00010779ea84:
        func_0x0001077a2b44();
        func_0x0001077a2cbc();
        func_0x0001073398b8();
        if ((puVar3[-200] & 1) == 0) {
          func_0x0001077a2ca4();
          if (extraout_x8_06 != 0) {
            func_0x0001077a2d00();
            func_0x0001077a2c80();
            func_0x0001077a2b34();
            func_0x0001077a2c98();
            func_0x0001077a2e6c();
          }
          func_0x0001077a2a08();
        }
        else {
          uVar6 = uVar21 == 5;
          if ((bool)uVar6) {
            func_0x0001077a2edc();
            uVar10 = 0;
            puVar9 = (undefined1 *)(extraout_x8_16 + 0xa50);
            func_0x000107785dfc();
            if ((uVar10 & 1) == 0) {
              if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a2fa8(*(long *)(puVar3 + -0x130) + 0xa50);
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2fa8(*param_7 + 0xa50);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
          }
          else {
            uVar6 = uVar21 == 3;
            if ((bool)uVar6) {
              func_0x0001077a2edc();
              uVar10 = 0;
              puVar9 = (undefined1 *)(extraout_x8_15 + 0x988);
              func_0x000107785dfc();
              if ((uVar10 & 1) == 0) {
                if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                  func_0x0001077a2e0c(*param_7);
                  func_0x0001077a2fa8(*(long *)(puVar3 + -0x130) + 0x988);
                  func_0x0001077a2c8c();
                  func_0x0001077a2de4();
                }
                else {
                  func_0x0001077a2fa8(*param_7 + 0x988);
                }
                func_0x0001077a2c28();
                func_0x0001077a2e14();
              }
            }
            else {
              uVar6 = uVar21 == 2;
              if (!(bool)uVar6) {
                func_0x000107339974(puVar3 + -0x108);
                func_0x0001077a2ecc();
                goto code_r0x00010779ef30;
              }
              func_0x0001077a2edc();
              uVar10 = 0;
              puVar9 = (undefined1 *)(extraout_x8_04 + 0x920);
              func_0x000107785dfc();
              if ((uVar10 & 1) == 0) {
                if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                  func_0x0001077a2e0c(*param_7);
                  func_0x0001077a2fa8(*(long *)(puVar3 + -0x130) + 0x920);
                  func_0x0001077a2c8c();
                  func_0x0001077a2de4();
                }
                else {
                  func_0x0001077a2fa8(*param_7 + 0x920);
                }
                func_0x0001077a2c28();
                func_0x0001077a2e14();
              }
            }
          }
          func_0x0001077a2eb4();
        }
        func_0x0001077a3120();
        func_0x000107339974();
        break;
      case (undefined **)0x6:
      case (undefined **)0x7:
      case (undefined **)0x8:
      case (undefined **)0x9:
      case (undefined **)0xa:
      case (undefined **)0xb:
        goto code_r0x00010779ef30;
      case (undefined **)0xd:
      case (undefined **)0x10:
code_r0x00010779eaf4:
        func_0x0001077a2b44();
        func_0x0001077a2cbc();
        func_0x00010733d400();
        if ((puVar3[-0xc0] & 1) == 0) {
          func_0x0001077a2ca4();
          if (extraout_x8_08 != 0) {
            func_0x0001077a2d00();
            func_0x0001077a2c80();
            func_0x0001077a2b34();
            func_0x0001077a2c98();
            func_0x0001077a2e6c();
          }
          func_0x0001077a2a08();
        }
        else {
          uVar6 = uVar20 == 0x10;
          if ((bool)uVar6) {
            puVar9 = puVar3 + -0x108;
            func_0x00010779e0e4(unaff_x20);
          }
          else {
            uVar6 = uVar21 == 0xd;
            if (!(bool)uVar6) {
              func_0x00010733d41c(puVar3 + -0x108);
              func_0x0001077a2ecc();
              uVar6 = true;
              if (uVar21 == 0xe) goto code_r0x00010779efa4;
              uVar6 = uVar21 == 0xf;
              if ((bool)uVar6) goto code_r0x00010779eed0;
              goto code_r0x00010779ef30;
            }
            func_0x0001077a2edc();
            uVar10 = 0;
            puVar9 = (undefined1 *)(extraout_x8_05 + 0x1a0);
            func_0x000107798a18();
            if ((uVar10 & 1) == 0) {
              if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a31bc(*(undefined8 *)(puVar3 + -0x130));
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a31bc(*param_7);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
          }
          func_0x0001077a2eb4();
        }
        func_0x0001077a3120();
        func_0x00010733d41c();
        break;
      case (undefined **)0xe:
code_r0x00010779efa4:
        func_0x0001077a2b44();
        func_0x0001077a2cbc();
        func_0x00010733e5bc();
        if ((puVar3[-0xd0] & 1) == 0) {
          func_0x0001077a2ca4();
          if (extraout_x8_21 != 0) {
            func_0x0001077a2d00();
            func_0x0001077a2c80();
            func_0x0001077a2b34();
            goto code_r0x00010779f030;
          }
          goto code_r0x00010779f038;
        }
        func_0x0001077a2edc();
        uVar10 = 0;
        puVar9 = (undefined1 *)(extraout_x8_20 + 0x1e8);
        func_0x000107785b50();
        if ((uVar10 & 1) == 0) {
          if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
            func_0x0001077a2e0c(*param_7);
            func_0x0001077a305c(*(long *)(puVar3 + -0x130) + 0x1e8);
            func_0x0001077a2c8c();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a305c(*param_7 + 0x1e8);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
code_r0x00010779f160:
        func_0x0001077a2eb4();
        goto code_r0x00010779f164;
      case (undefined **)0xf:
code_r0x00010779eed0:
        func_0x0001077a2ec0();
        puVar3[-0x130] = 0;
        puVar3[-0x170] = 0;
        func_0x0001077a2cbc();
        func_0x00010733e5bc();
        if ((puVar3[-0xd0] & 1) != 0) {
          func_0x0001077a2edc();
          uVar10 = 0;
          puVar9 = (undefined1 *)(extraout_x8_19 + 0x220);
          func_0x000107785b50();
          if ((uVar10 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*param_7);
              func_0x0001077a305c(*(long *)(puVar3 + -0x130) + 0x220);
              func_0x0001077a2c8c();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a305c(*param_7 + 0x220);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          goto code_r0x00010779f160;
        }
        func_0x0001077a2ca4();
        if (extraout_x8_22 != 0) {
          func_0x0001077a2d00();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
code_r0x00010779f030:
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
code_r0x00010779f038:
        func_0x0001077a2a08();
code_r0x00010779f164:
        func_0x0001077a3120();
        func_0x00010733e5d8();
        break;
      case (undefined **)0x15:
code_r0x00010779eb7c:
        func_0x0001077a2ec0();
        func_0x00010755a164(puVar3 + -0x108,puVar3 + -0x130,param_6,puVar3 + -0x158,param_7,0,0);
        if ((puVar3[-0xd0] & 1) == 0) {
          func_0x0001077a2ca4();
          if (extraout_x8_09 != 0) {
            func_0x0001077a2d00();
            func_0x0001077a2c80();
            func_0x0001077a2b34();
            func_0x0001077a2c98();
            func_0x0001077a2e6c();
          }
          func_0x0001077a2a08();
        }
        else {
          func_0x0001077a2edc();
          puVar9 = puVar3 + -0x108;
          func_0x0001077a2750(puVar9,extraout_x8_07 + 0x380);
          if (((ulong)puVar9 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*param_7);
              func_0x0001077a31a4(*(undefined8 *)(puVar3 + -0x130));
              func_0x0001077a2c8c();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a31a4(*param_7);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          func_0x0001077a2eb4();
        }
        func_0x0001077a3120();
        puVar25 = &UNK_10779f18c;
code_r0x0001077a0d68:
        *(undefined ***)(puVar4 + -0x20) = unaff_x20;
        *(undefined ***)(puVar4 + -0x18) = ppuVar7;
        *(undefined1 **)(puVar4 + -0x10) = puVar24;
        *(undefined **)(puVar4 + -8) = puVar25;
        func_0x0001077a2ff4();
        if ((bool)uVar6) {
          func_0x0001077a3214();
        }
        return ppuVar7;
      }
      ppuVar7 = (undefined **)(puVar3 + -0x158);
      goto code_r0x00010779f2c8;
    }
code_r0x00010779ef30:
    *(undefined8 *)(puVar3 + -0x130) = 0;
    *(undefined8 *)(puVar3 + -0x128) = 0;
    *(undefined8 *)(puVar3 + -0x120) = 0;
    puVar9 = puVar3 + -0x130;
    ppuVar11 = param_7;
    func_0x00010754bb48(puVar3 + -0x108,param_6);
    if ((puVar3[-0xe0] & 1) == 0) {
      func_0x0001077a300c();
      cVar16 = extraout_w8;
      goto code_r0x00010779f100;
    }
    uVar6 = uVar20 - 6 == 5;
    switch(uVar20 - 6) {
    case 0:
      if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
        func_0x0001077a2e38(unaff_x20[1]);
        *(undefined1 *)(*(long *)(puVar3 + -0x158) + 0x8b8) = puVar3[-0xe8];
        goto code_r0x00010779f0e8;
      }
      unaff_x20[1][0x8b8] = puVar3[-0xe8];
code_r0x00010779f36c:
      func_0x0001077a3048();
      extraout_x9_00[1] = in_register_00005008;
      *extraout_x9_00 = param_1;
      extraout_x9_00[3] = in_register_00005028;
      extraout_x9_00[2] = param_2;
      break;
    case 1:
      if ((unaff_x20[2] != (undefined *)0x0) && (*(long *)(unaff_x20[2] + 8) == 0)) {
        unaff_x20[1][0x918] = puVar3[-0xe8];
        goto code_r0x00010779f36c;
      }
      func_0x0001077a2e38(unaff_x20[1]);
      *(undefined1 *)(*(long *)(puVar3 + -0x158) + 0x918) = puVar3[-0xe8];
      goto code_r0x00010779f0e8;
    case 2:
      if ((unaff_x20[2] != (undefined *)0x0) && (*(long *)(unaff_x20[2] + 8) == 0)) {
        func_0x0001077a3048(unaff_x20[1]);
        func_0x0001077a3248();
        break;
      }
      func_0x0001077a2e38(unaff_x20[1]);
      func_0x0001077a3048(*(undefined8 *)(puVar3 + -0x158));
      func_0x0001077a3248();
      goto code_r0x00010779f0f0;
    case 3:
      if ((unaff_x20[2] != (undefined *)0x0) && (*(long *)(unaff_x20[2] + 8) == 0)) {
        unaff_x20[1][0x9e8] = puVar3[-0xe8];
        goto code_r0x00010779f36c;
      }
      func_0x0001077a2e38(unaff_x20[1]);
      *(undefined1 *)(*(long *)(puVar3 + -0x158) + 0x9e8) = puVar3[-0xe8];
      goto code_r0x00010779f0e8;
    case 4:
      if ((unaff_x20[2] != (undefined *)0x0) && (*(long *)(unaff_x20[2] + 8) == 0)) {
        unaff_x20[1][0xa48] = puVar3[-0xe8];
        goto code_r0x00010779f36c;
      }
      func_0x0001077a2e38(unaff_x20[1]);
      *(undefined1 *)(*(long *)(puVar3 + -0x158) + 0xa48) = puVar3[-0xe8];
code_r0x00010779f0e8:
      func_0x0001077a3048();
      extraout_x9[1] = in_register_00005008;
      *extraout_x9 = param_1;
      extraout_x9[3] = in_register_00005028;
      extraout_x9[2] = param_2;
code_r0x00010779f0f0:
      func_0x0001077a3180();
      func_0x0001077a0ca8(puVar3 + -0x158);
      break;
    case 5:
      if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
        func_0x0001077a2e38(unaff_x20[1]);
        func_0x0001077a3048(*(undefined8 *)(puVar3 + -0x158));
        func_0x0001077a3234();
        goto code_r0x00010779f0f0;
      }
      func_0x0001077a3048(unaff_x20[1]);
      func_0x0001077a3234();
    }
    func_0x0001077a2eb4();
    cVar16 = extraout_w8_00;
code_r0x00010779f100:
    *(char *)(ppuVar7 + 3) = cVar16;
    ppuVar7 = (undefined **)(puVar3 + -0x130);
code_r0x00010779f2c8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
code_r0x00010779f2cc:
    func_0x0001077a2ae8(*(undefined8 *)(puVar3 + -0xb8));
    if ((bool)uVar6) {
      return ppuVar7;
    }
    ___stack_chk_fail();
    func_0x0001077a2de4();
    func_0x00010727e950(puVar3 + -0x108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3 + -0x158);
    func_0x0001077a2e74();
    *(undefined8 *)(puVar3 + -0x1c0) = 0xe98;
    *(undefined ***)(puVar3 + -0x1b8) = unaff_x25;
    *(undefined ***)(puVar3 + -0x1b0) = ppuVar23;
    *(undefined ***)(puVar3 + -0x1a8) = ppuVar22;
    *(undefined ***)(puVar3 + -0x1a0) = param_6;
    *(undefined ***)(puVar3 + -0x198) = param_7;
    *(undefined ***)(puVar3 + -400) = unaff_x20;
    *(undefined ***)(puVar3 + -0x188) = ppuVar7;
    *(undefined1 **)(puVar3 + -0x180) = puVar24;
    *(undefined **)(puVar3 + -0x178) = &DAT_10779f44c;
    param_7 = ppuVar14;
    param_8 = puVar15;
    func_0x0001077a312c();
    func_0x0001077a2d10();
    *(undefined8 *)(puVar3 + -0x1c8) = extraout_x8_23;
    *(undefined ***)(puVar3 + -0x2a0) = ppuVar11;
    *(undefined ***)(puVar3 + -0x298) = ppuVar13;
    func_0x00010772d2fc(puVar3 + -0x270,puVar3 + -0x2a0);
    ppuVar22 = &PTR_DAT_1109d9b68;
    unaff_x25 = &PTR_DAT_1109d9f58;
    puVar12 = (undefined8 *)(puVar3 + -0x270);
    param_5 = unaff_x25;
    func_0x000107785358();
    uVar6 = ppuVar22 == &PTR_DAT_1109d9f58;
    ppuVar8 = ppuVar22;
    if ((bool)uVar6) {
code_r0x00010779f4c4:
      *(undefined1 *)ppuVar7 = 0;
      *(undefined1 *)(ppuVar7 + 3) = 0;
      goto code_r0x0001077a0254;
    }
    ppuVar8 = (undefined **)(puVar3 + -0x270);
    param_5 = ppuVar22;
    func_0x000107785400();
    ppuVar23 = ppuVar22;
    if ((int)ppuVar8 != 0) goto code_r0x00010779f4c4;
    bVar1 = *(byte *)(ppuVar22 + 1);
    ppuVar23 = (undefined **)(ulong)bVar1;
    uVar6 = bVar1 == 0;
    if ((bool)uVar6) {
      func_0x0001077a2b44();
      func_0x0001077a2b74();
      FUN_1077848c0();
      if ((puVar3[-0x228] & 1) == 0) {
        func_0x0001077a2b5c();
        if (extraout_x8_28 != 0) {
          func_0x0001077a2bf0();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        param_5 = (undefined **)(extraout_x8_26 + 0x988);
        func_0x000107785bfc();
        if (((ulong)ppuVar8 & 1) == 0) {
          if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
            func_0x0001077a2e0c(*puVar15);
            func_0x0001077a2b0c();
            func_0x0001077a3198();
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a3198();
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a2f58();
      func_0x00010754e888();
      goto code_r0x0001077a024c;
    }
    bVar2 = (bVar1 & 0xf7) - 3;
    uVar6 = bVar2 == 2;
    uVar20 = (uint)bVar1;
    if (bVar2 < 2) {
code_r0x00010779f518:
      func_0x0001077a2b44();
      func_0x0001077a2b74();
      func_0x00010733b904();
      if ((puVar3[-0x238] & 1) == 0) {
        func_0x0001077a2b5c();
        if (extraout_x8_27 != 0) {
          func_0x0001077a2bf0();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        uVar6 = uVar20 - 1 == 0xb;
        switch(uVar20 - 1) {
        case 0:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_24 + 0x9f8);
          func_0x000107786038();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2e30(extraout_x8_25 + 0x9f8);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2e30(extraout_x8_86 + 0x9f8);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 1:
        case 4:
        case 6:
        case 9:
code_r0x00010779f6bc:
          ppuVar8 = (undefined **)0x0;
          func_0x00010727e950();
          func_0x0001077a2ecc();
          uVar6 = uVar20 - 2 == 0x26;
          switch(uVar20 - 2) {
          case 0:
          case 3:
          case 5:
          case 8:
          case 0x1e:
            goto code_r0x00010779f6f0;
          case 0x18:
          case 0x1b:
            goto code_r0x00010779fbac;
          case 0x19:
          case 0x20:
            goto code_r0x00010779fd78;
          case 0x1a:
          case 0x23:
            goto code_r0x00010779fe88;
          case 0x1c:
            goto code_r0x0001077a0008;
          case 0x1d:
          case 0x1f:
            goto code_r0x00010779ff94;
          case 0x24:
            goto code_r0x00010779f9e4;
          case 0x25:
            goto code_r0x00010779fa40;
          case 0x26:
            goto code_r0x00010779fa9c;
          }
          goto code_r0x0001077a00d4;
        case 2:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_36 + 0xac0);
          func_0x000107786038();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2e30(extraout_x8_37 + 0xac0);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2e30(extraout_x8_85 + 0xac0);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 3:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_40 + 0xb20);
          func_0x000107786038();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2e30(extraout_x8_41 + 0xb20);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2e30(extraout_x8_88 + 0xb20);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 5:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_42 + 0xbe8);
          func_0x000107786038();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2e30(extraout_x8_43 + 0xbe8);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2e30(extraout_x8_89 + 0xbe8);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 7:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_34 + 0xcb0);
          func_0x000107786038();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2e30(extraout_x8_35 + 0xcb0);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2e30(extraout_x8_84 + 0xcb0);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 8:
          func_0x0001077a30d0();
          func_0x00010779e184();
          break;
        case 10:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_44 + 0xdd8);
          func_0x000107786038();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2e30(extraout_x8_45 + 0xdd8);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2e30(extraout_x8_90 + 0xdd8);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 0xb:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_38 + 0xe38);
          func_0x000107786038();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2e30(extraout_x8_39 + 0xe38);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2e30(extraout_x8_87 + 0xe38);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        default:
          uVar6 = uVar20 == 0x23;
          if ((bool)uVar6) {
            func_0x0001077a2c70();
            func_0x0001077a2c44();
            func_0x0001077a2e60();
            param_5 = (undefined **)(extraout_x8_46 + 0x5a8);
            func_0x000107786038();
            if (((ulong)ppuVar8 & 1) == 0) {
              if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                func_0x0001077a2e0c(*puVar15);
                func_0x0001077a2b0c();
                func_0x0001077a2e30(extraout_x8_47 + 0x5a8);
                func_0x0001077a2c38();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2b20();
                func_0x0001077a2e30(extraout_x8_92 + 0x5a8);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
          }
          else {
            uVar6 = uVar20 == 0x24;
            if ((bool)uVar6) {
              func_0x0001077a2c70();
              func_0x0001077a2c44();
              func_0x0001077a2e60();
              param_5 = (undefined **)(extraout_x8_48 + 0x5e0);
              func_0x000107786038();
              if (((ulong)ppuVar8 & 1) == 0) {
                if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                  func_0x0001077a2e0c(*puVar15);
                  func_0x0001077a2b0c();
                  func_0x0001077a2e30(extraout_x8_49 + 0x5e0);
                  func_0x0001077a2c38();
                  func_0x0001077a2de4();
                }
                else {
                  func_0x0001077a2b20();
                  func_0x0001077a2e30(extraout_x8_93 + 0x5e0);
                }
                func_0x0001077a2c28();
                func_0x0001077a2e14();
              }
            }
            else {
              uVar6 = uVar20 == 0x29;
              if (!(bool)uVar6) goto code_r0x00010779f6bc;
              func_0x0001077a2c70();
              func_0x0001077a2c44();
              func_0x0001077a2e60();
              param_5 = (undefined **)(extraout_x8_29 + 0x6f8);
              func_0x000107786038();
              if (((ulong)ppuVar8 & 1) == 0) {
                if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
                  func_0x0001077a2e0c(*puVar15);
                  func_0x0001077a2b0c();
                  func_0x0001077a2e30(extraout_x8_30 + 0x6f8);
                  func_0x0001077a2c38();
                  func_0x0001077a2de4();
                }
                else {
                  func_0x0001077a2b20();
                  func_0x0001077a2e30(extraout_x8_91 + 0x6f8);
                }
                func_0x0001077a2c28();
                func_0x0001077a2e14();
              }
            }
          }
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a2f58();
      func_0x00010727e950();
      goto code_r0x0001077a024c;
    }
    uVar6 = uVar20 - 1 == 0x28;
    switch(uVar20 - 1) {
    case 0:
    case 5:
    case 7:
    case 8:
    case 0x22:
    case 0x23:
    case 0x28:
      goto code_r0x00010779f518;
    case 1:
    case 4:
    case 6:
    case 9:
    case 0x1f:
code_r0x00010779f6f0:
      func_0x0001077a2b44();
      func_0x0001077a2b74();
      func_0x0001073398b8();
      if ((puVar3[-0x230] & 1) == 0) {
        func_0x0001077a2b5c();
        if (extraout_x8_33 != 0) {
          func_0x0001077a2bf0();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        uVar6 = uVar20 - 2 == 8;
        switch(uVar20 - 2) {
        case 0:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_31 + 0xa58);
          func_0x000107785dfc();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2f34(extraout_x8_32 + 0xa58);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2f34(extraout_x8_x00107 + 0xa58);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 1:
        case 2:
        case 4:
        case 6:
        case 7:
code_r0x00010779fb78:
          ppuVar8 = (undefined **)0x0;
          func_0x000107339974();
          func_0x0001077a2ecc();
          uVar6 = bVar1 - 0x1a == 5;
          switch(bVar1 - 0x1a) {
          case 0:
          case 3:
            goto code_r0x00010779fbac;
          case 1:
            goto code_r0x00010779fd78;
          case 2:
            goto code_r0x00010779fe88;
          case 4:
            goto code_r0x0001077a0008;
          case 5:
            goto code_r0x00010779ff94;
          }
          goto code_r0x0001077a00d4;
        case 3:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_63 + 0xb80);
          func_0x000107785dfc();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2f34(extraout_x8_64 + 0xb80);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2f34(extraout_x8_x00109 + 0xb80);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 5:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_59 + 0xc48);
          func_0x000107785dfc();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2f34(extraout_x8_60 + 0xc48);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2f34(extraout_x8_x00106 + 0xc48);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 8:
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_61 + 0xd70);
          func_0x000107785dfc();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2f34(extraout_x8_62 + 0xd70);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2f34(extraout_x8_x00108 + 0xd70);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        default:
          uVar6 = uVar20 == 0x20;
          if (!(bool)uVar6) goto code_r0x00010779fb78;
          func_0x0001077a30d0();
          func_0x00010779e078();
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a2f58();
      func_0x000107339974();
      break;
    default:
code_r0x0001077a00d4:
      *(undefined8 *)(puVar3 + -0x290) = 0;
      *(undefined8 *)(puVar3 + -0x288) = 0;
      *(undefined8 *)(puVar3 + -0x280) = 0;
      param_5 = (undefined **)(puVar3 + -0x290);
      puVar12 = puVar15;
      func_0x00010754bb48(puVar3 + -0x270,ppuVar14);
      if ((puVar3[-0x248] & 1) == 0) {
        func_0x0001077a300c();
        uVar17 = extraout_w8_01;
        goto code_r0x0001077a04a4;
      }
      uVar6 = uVar20 - 0xd == 0xc;
      switch(uVar20 - 0xd) {
      case 0:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2bac();
          *(undefined **)(extraout_x8_83 + 0x9e8) = in_register_00005028;
          *(undefined **)(extraout_x8_83 + 0x9e0) = param_2;
          *(undefined1 *)(extraout_x8_83 + 0x9f0) = extraout_w9;
          *(undefined **)(extraout_x8_83 + 0x9d8) = in_register_00005008;
          *(undefined **)(extraout_x8_83 + 0x9d0) = param_1;
code_r0x0001077a0494:
          func_0x0001077a3180();
          func_0x0001077a0ca8(puVar3 + -0x2b8);
        }
        else {
          func_0x0001077a2b90();
          *(undefined1 *)(extraout_x8_x00125 + 0x9f0) = extraout_w9_08;
          *(undefined **)(extraout_x8_x00125 + 0x9e8) = in_register_00005028;
          *(undefined **)(extraout_x8_x00125 + 0x9e0) = param_2;
          *(undefined **)(extraout_x8_x00125 + 0x9d8) = in_register_00005008;
          *(undefined **)(extraout_x8_x00125 + 0x9d0) = param_1;
        }
        break;
      case 1:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2bac();
          *(undefined **)(extraout_x8_x00101 + 0xa48) = in_register_00005028;
          *(undefined **)(extraout_x8_x00101 + 0xa40) = param_2;
          *(undefined1 *)(extraout_x8_x00101 + 0xa50) = extraout_w9_02;
          *(undefined **)(extraout_x8_x00101 + 0xa38) = in_register_00005008;
          *(undefined **)(extraout_x8_x00101 + 0xa30) = param_1;
          goto code_r0x0001077a0494;
        }
        func_0x0001077a2b90();
        *(undefined1 *)(extraout_x8_x00126 + 0xa50) = extraout_w9_09;
        *(undefined **)(extraout_x8_x00126 + 0xa48) = in_register_00005028;
        *(undefined **)(extraout_x8_x00126 + 0xa40) = param_2;
        *(undefined **)(extraout_x8_x00126 + 0xa38) = in_register_00005008;
        *(undefined **)(extraout_x8_x00126 + 0xa30) = param_1;
        break;
      case 2:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2c14();
          func_0x0001077a2f0c();
          *(undefined1 *)(extraout_x8_98 + 0xab8) = extraout_w10_01;
          lVar19 = extraout_x9_03;
code_r0x0001077a03ac:
          *(undefined **)(lVar19 + 0x48) = in_register_00005008;
          *(undefined **)(lVar19 + 0x40) = param_1;
          *(undefined **)(lVar19 + 0x58) = in_register_00005028;
          *(undefined **)(lVar19 + 0x50) = param_2;
          goto code_r0x0001077a0494;
        }
        func_0x0001077a2c00();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_x00122 + 0xab8) = extraout_w10_07;
        lVar19 = extraout_x9_09;
        goto code_r0x0001077a06fc;
      case 3:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2c14();
          func_0x0001077a2f0c();
          *(undefined1 *)(extraout_x8_99 + 0xb18) = extraout_w10_02;
          lVar19 = extraout_x9_04;
code_r0x0001077a048c:
          *(undefined **)(lVar19 + 0x50) = in_register_00005028;
          *(undefined **)(lVar19 + 0x48) = param_2;
          *(undefined **)(lVar19 + 0x40) = in_register_00005008;
          *(undefined **)(lVar19 + 0x38) = param_1;
          goto code_r0x0001077a0494;
        }
        func_0x0001077a2c00();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_x00123 + 0xb18) = extraout_w10_08;
        lVar19 = extraout_x9_10;
        goto code_r0x0001077a0778;
      case 4:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2c14();
          func_0x0001077a2f0c();
          *(undefined1 *)(extraout_x8_95 + 0xb78) = extraout_w10;
          lVar19 = extraout_x9_01;
          goto code_r0x0001077a048c;
        }
        func_0x0001077a2c00();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_x00119 + 0xb78) = extraout_w10_05;
        lVar19 = extraout_x9_07;
        goto code_r0x0001077a0778;
      case 5:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2bac();
          *(undefined **)(extraout_x8_x00102 + 0xbd8) = in_register_00005028;
          *(undefined **)(extraout_x8_x00102 + 0xbd0) = param_2;
          *(undefined1 *)(extraout_x8_x00102 + 0xbe0) = extraout_w9_03;
          *(undefined **)(extraout_x8_x00102 + 0xbc8) = in_register_00005008;
          *(undefined **)(extraout_x8_x00102 + 0xbc0) = param_1;
          goto code_r0x0001077a0494;
        }
        func_0x0001077a2b90();
        *(undefined1 *)(extraout_x8_x00127 + 0xbe0) = extraout_w9_10;
        *(undefined **)(extraout_x8_x00127 + 0xbd8) = in_register_00005028;
        *(undefined **)(extraout_x8_x00127 + 0xbd0) = param_2;
        *(undefined **)(extraout_x8_x00127 + 0xbc8) = in_register_00005008;
        *(undefined **)(extraout_x8_x00127 + 0xbc0) = param_1;
        break;
      case 6:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2bac();
          *(undefined **)(extraout_x8_x00103 + 0xc38) = in_register_00005028;
          *(undefined **)(extraout_x8_x00103 + 0xc30) = param_2;
          *(undefined1 *)(extraout_x8_x00103 + 0xc40) = extraout_w9_04;
          *(undefined **)(extraout_x8_x00103 + 0xc28) = in_register_00005008;
          *(undefined **)(extraout_x8_x00103 + 0xc20) = param_1;
          goto code_r0x0001077a0494;
        }
        func_0x0001077a2b90();
        *(undefined1 *)(extraout_x8_x00128 + 0xc40) = extraout_w9_11;
        *(undefined **)(extraout_x8_x00128 + 0xc38) = in_register_00005028;
        *(undefined **)(extraout_x8_x00128 + 0xc30) = param_2;
        *(undefined **)(extraout_x8_x00128 + 0xc28) = in_register_00005008;
        *(undefined **)(extraout_x8_x00128 + 0xc20) = param_1;
        break;
      case 7:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2c14();
          func_0x0001077a2f0c();
          *(undefined1 *)(extraout_x8_x00100 + 0xca8) = extraout_w10_03;
          lVar19 = extraout_x9_05;
          goto code_r0x0001077a03ac;
        }
        func_0x0001077a2c00();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_x00124 + 0xca8) = extraout_w10_09;
        lVar19 = extraout_x9_11;
code_r0x0001077a06fc:
        *(undefined **)(lVar19 + 0x48) = in_register_00005008;
        *(undefined **)(lVar19 + 0x40) = param_1;
        *(undefined **)(lVar19 + 0x58) = in_register_00005028;
        *(undefined **)(lVar19 + 0x50) = param_2;
        break;
      case 8:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2c14();
          func_0x0001077a2f0c();
          *(undefined1 *)(extraout_x8_x00105 + 0xd08) = extraout_w10_04;
          lVar19 = extraout_x9_06;
          goto code_r0x0001077a048c;
        }
        func_0x0001077a2c00();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_x00130 + 0xd08) = extraout_w10_10;
        lVar19 = extraout_x9_12;
        goto code_r0x0001077a0778;
      case 9:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2c14();
          func_0x0001077a2f0c();
          *(undefined1 *)(extraout_x8_97 + 0xd68) = extraout_w10_00;
          lVar19 = extraout_x9_02;
          goto code_r0x0001077a048c;
        }
        func_0x0001077a2c00();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_x00121 + 0xd68) = extraout_w10_06;
        lVar19 = extraout_x9_08;
code_r0x0001077a0778:
        *(undefined **)(lVar19 + 0x50) = in_register_00005028;
        *(undefined **)(lVar19 + 0x48) = param_2;
        *(undefined **)(lVar19 + 0x40) = in_register_00005008;
        *(undefined **)(lVar19 + 0x38) = param_1;
        break;
      case 10:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2bac();
          *(undefined **)(extraout_x8_x00104 + 0xdc8) = in_register_00005028;
          *(undefined **)(extraout_x8_x00104 + 0xdc0) = param_2;
          *(undefined1 *)(extraout_x8_x00104 + 0xdd0) = extraout_w9_05;
          *(undefined **)(extraout_x8_x00104 + 0xdb8) = in_register_00005008;
          *(undefined **)(extraout_x8_x00104 + 0xdb0) = param_1;
          goto code_r0x0001077a0494;
        }
        func_0x0001077a2b90();
        *(undefined1 *)(extraout_x8_x00129 + 0xdd0) = extraout_w9_12;
        *(undefined **)(extraout_x8_x00129 + 0xdc8) = in_register_00005028;
        *(undefined **)(extraout_x8_x00129 + 0xdc0) = param_2;
        *(undefined **)(extraout_x8_x00129 + 0xdb8) = in_register_00005008;
        *(undefined **)(extraout_x8_x00129 + 0xdb0) = param_1;
        break;
      case 0xb:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2bac();
          *(undefined **)(extraout_x8_94 + 0xe28) = in_register_00005028;
          *(undefined **)(extraout_x8_94 + 0xe20) = param_2;
          *(undefined1 *)(extraout_x8_94 + 0xe30) = extraout_w9_00;
          *(undefined **)(extraout_x8_94 + 0xe18) = in_register_00005008;
          *(undefined **)(extraout_x8_94 + 0xe10) = param_1;
          goto code_r0x0001077a0494;
        }
        func_0x0001077a2b90();
        *(undefined1 *)(extraout_x8_x00118 + 0xe30) = extraout_w9_06;
        *(undefined **)(extraout_x8_x00118 + 0xe28) = in_register_00005028;
        *(undefined **)(extraout_x8_x00118 + 0xe20) = param_2;
        *(undefined **)(extraout_x8_x00118 + 0xe18) = in_register_00005008;
        *(undefined **)(extraout_x8_x00118 + 0xe10) = param_1;
        break;
      case 0xc:
        if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
          func_0x0001077a2e38(unaff_x20[1]);
          func_0x0001077a2bac();
          *(undefined **)(extraout_x8_96 + 0xe88) = in_register_00005028;
          *(undefined **)(extraout_x8_96 + 0xe80) = param_2;
          *(undefined1 *)(extraout_x8_96 + 0xe90) = extraout_w9_01;
          *(undefined **)(extraout_x8_96 + 0xe78) = in_register_00005008;
          *(undefined **)(extraout_x8_96 + 0xe70) = param_1;
          goto code_r0x0001077a0494;
        }
        func_0x0001077a2b90();
        *(undefined1 *)(extraout_x8_x00120 + 0xe90) = extraout_w9_07;
        *(undefined **)(extraout_x8_x00120 + 0xe88) = in_register_00005028;
        *(undefined **)(extraout_x8_x00120 + 0xe80) = param_2;
        *(undefined **)(extraout_x8_x00120 + 0xe78) = in_register_00005008;
        *(undefined **)(extraout_x8_x00120 + 0xe70) = param_1;
      }
      func_0x0001077a2eb4();
      uVar17 = extraout_w8_02;
code_r0x0001077a04a4:
      *(undefined1 *)(ppuVar7 + 3) = uVar17;
      ppuVar8 = (undefined **)(puVar3 + -0x290);
      goto code_r0x0001077a0250;
    case 0x19:
    case 0x1c:
code_r0x00010779fbac:
      func_0x0001077a2b44();
      func_0x0001077a2b74();
      func_0x00010733e5bc();
      if ((puVar3[-0x238] & 1) == 0) {
        func_0x0001077a2b5c();
        if (extraout_x8_58 != 0) {
          func_0x0001077a2bf0();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          goto code_r0x00010779ff14;
        }
        goto code_r0x00010779ff1c;
      }
      uVar6 = bVar1 == 0x1d;
      if ((bool)uVar6) {
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        param_5 = (undefined **)(extraout_x8_65 + 0x368);
        func_0x000107785b50();
        if (((ulong)ppuVar8 & 1) == 0) {
          if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
            func_0x0001077a2e0c(*puVar15);
            func_0x0001077a2b0c();
            func_0x0001077a2f2c(extraout_x8_66 + 0x368);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2f2c(extraout_x8_x00117 + 0x368);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
      }
      else {
        uVar6 = bVar1 == 0x1a;
        if (!(bool)uVar6) {
          ppuVar8 = (undefined **)0x0;
          func_0x00010733e5d8();
          func_0x0001077a2ecc();
          uVar6 = true;
          if (bVar1 == 0x1b) goto code_r0x00010779fd78;
          uVar6 = bVar1 == 0x1c;
          if ((bool)uVar6) goto code_r0x00010779fe88;
          goto code_r0x0001077a00d4;
        }
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        param_5 = (undefined **)(extraout_x8_56 + 0x2c0);
        func_0x000107785b50();
        if (((ulong)ppuVar8 & 1) == 0) {
          if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
            func_0x0001077a2e0c(*puVar15);
            func_0x0001077a2b0c();
            func_0x0001077a2f2c(extraout_x8_57 + 0x2c0);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2f2c(extraout_x8_x00116 + 0x2c0);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
      }
code_r0x0001077a0664:
      func_0x0001077a2eb4();
      goto code_r0x0001077a0668;
    case 0x1a:
    case 0x21:
code_r0x00010779fd78:
      func_0x0001077a2b44();
      func_0x0001077a2b74();
      func_0x00010733ba0c();
      if ((puVar3[-0x238] & 1) == 0) {
        func_0x0001077a2b5c();
        if (extraout_x8_69 != 0) {
          func_0x0001077a2bf0();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        uVar6 = bVar1 == 0x22;
        if ((bool)uVar6) {
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_70 + 0x570);
          func_0x0001077a21dc();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a3084(extraout_x8_71 + 0x570);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a3084(extraout_x8_x00115 + 0x570);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
        }
        else {
          uVar6 = bVar1 == 0x1b;
          if (!(bool)uVar6) {
            ppuVar8 = (undefined **)0x0;
            func_0x00010733bad0();
            func_0x0001077a2ecc();
            uVar6 = bVar1 - 0x1c == 5;
            switch(bVar1 - 0x1c) {
            case 0:
              goto code_r0x00010779fe88;
            case 2:
              goto code_r0x0001077a0008;
            case 3:
            case 5:
              goto code_r0x00010779ff94;
            }
            goto code_r0x0001077a00d4;
          }
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_67 + 0x2f8);
          func_0x0001077a21dc();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a3084(extraout_x8_68 + 0x2f8);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a3084(extraout_x8_x00114 + 0x2f8);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a2f58();
      func_0x00010733bad0();
      break;
    case 0x1b:
    case 0x24:
code_r0x00010779fe88:
      func_0x0001077a2ec0();
      puVar3[-0x290] = 0;
      puVar3[-0x2d0] = 0;
      func_0x0001077a2b74();
      func_0x00010733e5bc();
      if ((puVar3[-0x238] & 1) != 0) {
        uVar6 = bVar1 == 0x25;
        if ((bool)uVar6) {
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_75 + 0x618);
          func_0x000107785b50();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2f2c(extraout_x8_76 + 0x618);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2f2c(extraout_x8_x00113 + 0x618);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
        }
        else {
          uVar6 = bVar1 == 0x1c;
          if (!(bool)uVar6) {
            ppuVar8 = (undefined **)0x0;
            func_0x00010733e5d8();
            func_0x0001077a2ecc();
            uVar6 = true;
            if (bVar1 == 0x1e) goto code_r0x0001077a0008;
            uVar6 = true;
            if ((bVar1 == 0x1f) || (uVar6 = bVar1 == 0x21, (bool)uVar6)) goto code_r0x00010779ff94;
            goto code_r0x0001077a00d4;
          }
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_72 + 0x330);
          func_0x000107785b50();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a2f2c(extraout_x8_73 + 0x330);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2f2c(extraout_x8_x00112 + 0x330);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
        }
        goto code_r0x0001077a0664;
      }
      func_0x0001077a2b5c();
      if (extraout_x8_74 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
code_r0x00010779ff14:
        func_0x0001077a2c98();
        func_0x0001077a2e6c();
      }
code_r0x00010779ff1c:
      func_0x0001077a2a08();
code_r0x0001077a0668:
      func_0x0001077a2f58();
      func_0x00010733e5d8();
      break;
    case 0x1d:
code_r0x0001077a0008:
      func_0x0001077a2b44();
      func_0x0001077a2b74();
      func_0x0001077848dc();
      if ((puVar3[-0x1d0] & 1) == 0) {
        func_0x0001077a2b5c();
        if (extraout_x8_80 != 0) {
          func_0x0001077a2bf0();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        func_0x0001077a30d0();
        func_0x00010779dfec();
        func_0x0001077a2eb4();
      }
      func_0x0001077a2f58();
      func_0x00010754f474();
      break;
    case 0x1e:
    case 0x20:
code_r0x00010779ff94:
      func_0x0001077a2b44();
      func_0x0001077a2b74();
      func_0x000107323db4();
      if ((puVar3[-0x1f8] & 1) == 0) {
        func_0x0001077a2b5c();
        if (extraout_x8_79 != 0) {
          func_0x0001077a2bf0();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        uVar6 = bVar1 == 0x21;
        if ((bool)uVar6) {
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_81 + 0x4f8);
          func_0x00010778be7c();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a3054(extraout_x8_82 + 0x500);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a3054(extraout_x8_x00111 + 0x500);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
        }
        else {
          uVar6 = bVar1 == 0x1f;
          if (!(bool)uVar6) {
            func_0x00010732493c(puVar3 + -0x270);
            func_0x0001077a2ecc();
            goto code_r0x0001077a00d4;
          }
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          param_5 = (undefined **)(extraout_x8_77 + 0x440);
          func_0x00010778be7c();
          if (((ulong)ppuVar8 & 1) == 0) {
            if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
              func_0x0001077a2e0c(*puVar15);
              func_0x0001077a2b0c();
              func_0x0001077a3054(extraout_x8_78 + 0x448);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a3054(extraout_x8_x00110 + 0x448);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a2f58();
      func_0x00010732493c();
      break;
    case 0x25:
code_r0x00010779f9e4:
      func_0x0001077a2ec0();
      func_0x0001077a2dec();
      func_0x00010755a524();
      if ((puVar3[-0x238] & 1) == 0) {
        func_0x0001077a2b5c();
        if (extraout_x8_53 != 0) {
          func_0x0001077a2bf0();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        func_0x0001077a3110();
        func_0x0001077a2ddc();
        func_0x0001077a2e60();
        param_5 = (undefined **)(extraout_x8_50 + 0x650);
        func_0x0001077a2360();
        if (((ulong)ppuVar8 & 1) == 0) {
          if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
            func_0x0001077a2e0c(*puVar15);
            func_0x0001077a2e50(*(undefined8 *)(puVar3 + -0x290));
            func_0x0001077a23ac();
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2e50(*puVar15);
            func_0x0001077a23ac();
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a2f58();
      func_0x0001077a0d8c();
      break;
    case 0x26:
code_r0x00010779fa40:
      func_0x0001077a2ec0();
      func_0x0001077a2dec();
      func_0x00010755a340();
      if ((puVar3[-0x238] & 1) == 0) {
        func_0x0001077a2b5c();
        if (extraout_x8_54 != 0) {
          func_0x0001077a2bf0();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        func_0x0001077a3110();
        func_0x0001077a2ddc();
        func_0x0001077a2e60();
        param_5 = (undefined **)(extraout_x8_51 + 0x688);
        func_0x0001077a24b0();
        if (((ulong)ppuVar8 & 1) == 0) {
          if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
            func_0x0001077a2e0c(*puVar15);
            func_0x0001077a2e50(*(undefined8 *)(puVar3 + -0x290));
            FUN_1077a24fc();
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2e50(*puVar15);
            FUN_1077a24fc();
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a2f58();
      func_0x0001077a0db4();
      break;
    case 0x27:
code_r0x00010779fa9c:
      func_0x0001077a2ec0();
      func_0x0001077a2dec();
      func_0x00010755a700();
      if ((puVar3[-0x238] & 1) == 0) {
        func_0x0001077a2b5c();
        if (extraout_x8_55 != 0) {
          func_0x0001077a2bf0();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        func_0x0001077a3110();
        func_0x0001077a2ddc();
        func_0x0001077a2e60();
        param_5 = (undefined **)(extraout_x8_52 + 0x6c0);
        func_0x0001077a2600();
        if (((ulong)ppuVar8 & 1) == 0) {
          if ((unaff_x20[2] == (undefined *)0x0) || (*(long *)(unaff_x20[2] + 8) != 0)) {
            func_0x0001077a2e0c(*puVar15);
            func_0x0001077a2e50(*(undefined8 *)(puVar3 + -0x290));
            func_0x0001077a264c();
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2e50(*puVar15);
            func_0x0001077a264c();
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a2f58();
      func_0x0001077a0ddc();
    }
code_r0x0001077a024c:
    ppuVar8 = (undefined **)(puVar3 + -0x2b8);
code_r0x0001077a0250:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar8);
code_r0x0001077a0254:
    func_0x0001077a2ae8(*(undefined8 *)(puVar3 + -0x1c8));
    if ((bool)uVar6) {
      return ppuVar8;
    }
    ___stack_chk_fail();
    func_0x0001077a2f70();
    func_0x00010754f474();
    param_4 = (undefined **)(puVar3 + -0x2b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001077a2e74();
    *(undefined ***)(puVar3 + -0x310) = ppuVar23;
    *(undefined ***)(puVar3 + -0x308) = ppuVar14;
    *(undefined8 **)(puVar3 + -0x300) = puVar15;
    *(undefined1 **)(puVar3 + -0x2f8) = puVar9;
    *(undefined ***)(puVar3 + -0x2f0) = unaff_x20;
    *(undefined ***)(puVar3 + -0x2e8) = ppuVar7;
    *(undefined1 **)(puVar3 + -0x2e0) = puVar3 + -0x180;
    *(undefined **)(puVar3 + -0x2d8) = &DAT_1077a0870;
    puVar24 = puVar3 + -0x2e0;
    puVar15 = (undefined8 *)*puVar12;
    if (-1 < *(char *)((long)puVar12 + 0x17)) {
      puVar15 = puVar12;
    }
    *(undefined8 **)(puVar3 + -0x328) = puVar15;
    func_0x00010750c5d0(puVar3 + -800,puVar3 + -0x328);
    unaff_x22 = &PTR_DAT_1109d9b68;
    unaff_x23 = &PTR_DAT_1109d9f58;
    func_0x000107785358(&PTR_DAT_1109d9b68,&PTR_DAT_1109d9f58,puVar3 + -800);
    ppuVar22 = unaff_x22;
    if (unaff_x22 == &PTR_DAT_1109d9f58) {
code_r0x0001077a08e8:
      func_0x0001077a2d50();
      return ppuVar22;
    }
    ppuVar22 = (undefined **)(puVar3 + -800);
    func_0x000107785400(ppuVar22,unaff_x22);
    if ((int)ppuVar22 != 0) goto code_r0x0001077a08e8;
    param_6 = (undefined **)(ulong)*(byte *)(unaff_x22 + 1);
    puVar25 = &UNK_1077a0904;
    puVar3 = puVar3 + -0x330;
    ppuVar7 = extraout_x8_x00131;
    unaff_x19 = extraout_x8_x00131;
    unaff_x20 = param_5;
    ppuVar22 = param_4;
  } while( true );
}



/* Entry: 1077a0cd0; end: 1077a0ce3;  */

undefined * FUN_1077a0cd0(undefined8 param_1,byte *param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined auStack_78 [72];
  
  puVar1 = &UNK_10f4291e0;
  func_0x000104c03f28();
  puVar3 = puVar1;
  func_0x0001077a2c5c();
  if (*(int *)(param_2 + 0x30) == 0) {
    func_0x0001077a2d50();
  }
  else {
    in_ZR = *(int *)(param_2 + 0x30) == 1;
    if ((bool)in_ZR) {
      uVar2 = (ulong)*param_2;
      FUN_1077f2d98(uVar2);
      puVar3 = auStack_78;
      func_0x00010724ae4c(puVar3,uVar2);
      func_0x0001077a318c();
      uVar4 = 1;
    }
    else {
      puVar3 = *(undefined **)param_2;
      func_0x0001077a2f18(puVar3);
      func_0x0001077a2f24();
      func_0x0001077a318c();
      uVar4 = 2;
    }
    puVar1[0x40] = uVar4;
    func_0x0001077a2e7c();
  }
  func_0x0001077a2a5c();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001077a2ff4();
  if ((bool)in_ZR) {
    func_0x0001077a3214();
  }
  return puVar1;
}



/* Entry: 1077a0f30; end: 1077a0f33;  */

void FUN_1077a0f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109da3e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077a1098; end: 1077a10bf;  */

void FUN_1077a1098(void)

{
  func_0x0001077a30a8();
  func_0x0001077a10c0();
  return;
}



/* Entry: 1077a12c0; end: 1077a1303;  */

void FUN_1077a12c0(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x118ab083902bdb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe98);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077a1304();
  return;
}



/* Entry: 1077a151c; end: 1077a1563;  */

void FUN_1077a151c(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x0001077a1564(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1077a1a28; end: 1077a1a6f;  */

void FUN_1077a1a28(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x0001073f6a54(param_2);
  func_0x0001077a3168();
  func_0x0001077a2ef8(*(undefined4 *)(param_2 + 0x30));
  func_0x0001077a2f4c();
  (*extraout_x8)();
  return;
}



/* Entry: 1077a1b84; end: 1077a1bd3;  */

void FUN_1077a1b84(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  func_0x0001077a2c5c();
  uVar1 = *param_2;
  func_0x0001077a2f18();
  func_0x0001077a2f24();
  func_0x0001077a2d7c();
  func_0x0001077a2e7c();
  func_0x0001077a2a5c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077a2da0();
  func_0x0001077a2e74();
  puStack_78 = &UNK_1077a1bd4;
  uStack_88 = uVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001077a1bf4(&uStack_88);
  return;
}



/* Entry: 1077a1d04; end: 1077a1d07;  */

undefined8 FUN_1077a1d04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077a1e24; end: 1077a1e67;  */

long FUN_1077a1e24(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *plStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  
  func_0x0001077a2bc8();
  func_0x0001077a2f24();
  func_0x0001077a2d7c();
  func_0x0001077a2e7c();
  func_0x0001077a2a5c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077a2da0();
  func_0x0001077a2e74();
  lStack_a0 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    lStack_a0 = 0;
  }
  else {
    plStack_a8 = &lStack_a0;
    func_0x0001073f6a54();
    ppuStack_98 = &plStack_a8;
    func_0x0001077a2ef8(*(undefined4 *)(param_1 + 0x30));
    (*(code *)(&PTR_DAT_1109da240)[extraout_x8])(&ppuStack_98,param_1);
  }
  return lStack_a0;
}



/* Entry: 1077a1fe0; end: 1077a200f;  */

void FUN_1077a1fe0(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077a2100; end: 1077a211b;  */

void FUN_1077a2100(void)

{
  func_0x0001077a2d2c();
  func_0x0001077a2a74();
  return;
}



/* Entry: 1077a2280; end: 1077a231f;  */

void FUN_1077a2280(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077a3144();
  if (extraout_w8 != 0) {
    func_0x00010733ad98();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077a24fc; end: 1077a255f;  */

void FUN_1077a24fc(undefined8 param_1,long param_2)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x10;
  
  func_0x0001077a30e0();
  if (*(int *)(extraout_x10 + 0x6b8) != -1 || *(int *)(param_2 + 0x30) != -1) {
    bVar1 = *(int *)(param_2 + 0x30) == -1;
    if (bVar1) {
      func_0x0001074c8ae4(param_2,extraout_x10 + 0x688);
      if (!bVar1) {
        func_0x0001074c8828((&PTR_DAT_1109b4e48)[extraout_x8]);
      }
      func_0x0001074c90d0();
      return;
    }
    func_0x0001077a2f8c();
  }
  return;
}



/* Entry: 1077a279c; end: 1077a27ef;  */

void FUN_1077a279c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001077a329c();
  if (!(bool)in_ZR || (int)extraout_x8 != -1) {
    if ((int)extraout_x8 == -1) {
      func_0x0001077a3214();
    }
    else {
      func_0x0001077a31b0((&PTR_DAT_1109da3a8)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 1077a32b0; end: 1077a374b;  */

undefined1 FUN_1077a32b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong uVar22;
  undefined1 uStack_61;
  
  uVar22 = param_1 + 0xd0;
  func_0x00010778cf84(uVar22,param_2 + 0xd0);
  if ((uVar22 & 1) == 0) {
    lVar1 = param_1 + 0x140;
    func_0x000107781d84(lVar1,param_2 + 0x140);
    if (((int)lVar1 != 0) &&
       (lVar20 = *(long *)(param_1 + 0xfd0) - *(long *)(param_1 + 0xfc8),
       lVar20 == *(long *)(param_2 + 0xfd0) - *(long *)(param_2 + 0xfc8))) {
      func_0x00010785f1f4();
      uStack_61 = 0;
      uVar22 = lVar1 + 0xa90;
      func_0x00010724e2c8(uVar22,&uStack_61);
      lVar1 = 0;
      while( true ) {
        if ((lVar20 / 0xe98 & 0xffffU) * 0xe98 + 0xe98 == lVar1 + 0xe98) {
          return 0;
        }
        if ((int)uVar22 == 0) {
          lVar21 = *(long *)(param_2 + 0xfc8);
          lVar19 = lVar21;
        }
        else {
          lVar21 = *(long *)(param_2 + 0xfc8);
          lVar19 = *(long *)(param_1 + 0xfc8);
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x38;
        func_0x000107786038(lVar2,unaff_x26 + 0x38);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x70;
        func_0x000107798a18(lVar2,unaff_x26 + 0x70);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0xb8;
        func_0x000107785b50(lVar2,unaff_x26 + 0xb8);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0xf0;
        func_0x000107785b50(lVar2,unaff_x26 + 0xf0);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x128;
        func_0x000107798a18(lVar2,unaff_x26 + 0x128);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x170;
        func_0x000107786038(lVar2,unaff_x26 + 0x170);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x1a8;
        func_0x000107786038(lVar2,unaff_x26 + 0x1a8);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x1e0;
        func_0x000107786038(lVar2,unaff_x26 + 0x1e0);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x218;
        func_0x000107786038(lVar2,unaff_x26 + 0x218);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x250;
        func_0x0001077a2750(lVar2,unaff_x26 + 0x250);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x288;
        func_0x000107786038(lVar2,unaff_x26 + 0x288);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x2c0;
        func_0x000107785b50(lVar2,unaff_x26 + 0x2c0);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x2f8;
        func_0x0001077a21dc(lVar2,unaff_x26 + 0x2f8);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x330;
        func_0x000107785b50(lVar2,unaff_x26 + 0x330);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x368;
        func_0x000107785b50(lVar2,unaff_x26 + 0x368);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x3a0;
        func_0x0001077860a0(lVar2,unaff_x26 + 0x3a0);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x440;
        func_0x00010778be7c(lVar2,unaff_x26 + 0x440);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x4b8;
        func_0x000107785dfc(lVar2,unaff_x26 + 0x4b8);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x4f8;
        func_0x00010778be7c(lVar2,unaff_x26 + 0x4f8);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x570;
        func_0x0001077a21dc(lVar2,unaff_x26 + 0x570);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x5a8;
        func_0x000107786038(lVar2,unaff_x26 + 0x5a8);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x5e0;
        func_0x000107786038(lVar2,unaff_x26 + 0x5e0);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x618;
        func_0x000107785b50(lVar2,unaff_x26 + 0x618);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x650;
        func_0x0001077a2360(lVar2,unaff_x26 + 0x650);
        if ((int)lVar2 == 0) {
          return 1;
        }
        func_0x0001077a3fcc();
        lVar2 = unaff_x25 + 0x688;
        func_0x0001077a24b0(lVar2,unaff_x26 + 0x688);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar2 = unaff_x25 + 0x6c0;
        func_0x0001077a2600(lVar2,unaff_x26 + 0x6c0);
        if ((int)lVar2 == 0) {
          return 1;
        }
        lVar19 = lVar19 + lVar1;
        lVar21 = lVar21 + lVar1;
        lVar2 = lVar19 + 0x6f8;
        func_0x000107786038(lVar2,lVar21 + 0x6f8);
        if ((int)lVar2 == 0) {
          return 1;
        }
        uVar3 = lVar19 + 0x730;
        func_0x00010778d01c(uVar3,lVar21 + 0x730);
        uVar4 = lVar19 + 0x790;
        func_0x00010778d01c(uVar4,lVar21 + 0x790);
        uVar5 = lVar19 + 0x7f0;
        func_0x00010778d09c(uVar5,lVar21 + 0x7f0);
        uVar6 = lVar19 + 0x858;
        func_0x00010778d09c(uVar6,lVar21 + 0x858);
        uVar7 = lVar19 + 0x8c0;
        func_0x00010778d01c(uVar7,lVar21 + 0x8c0);
        uVar8 = lVar19 + 0x920;
        func_0x00010778d09c(uVar8,lVar21 + 0x920);
        uVar9 = lVar19 + 0x988;
        func_0x00010778d05c(uVar9,lVar21 + 0x988);
        uVar10 = lVar19 + 0x9f8;
        func_0x00010778d01c(uVar10,lVar21 + 0x9f8);
        uVar11 = lVar19 + 0xa58;
        func_0x00010778d09c(uVar11,lVar21 + 0xa58);
        uVar12 = lVar19 + 0xac0;
        func_0x00010778d01c(uVar12,lVar21 + 0xac0);
        uVar13 = lVar19 + 0xb20;
        func_0x00010778d01c(uVar13,lVar21 + 0xb20);
        uVar14 = lVar19 + 0xb80;
        func_0x00010778d09c(uVar14,lVar21 + 0xb80);
        uVar15 = lVar19 + 0xbe8;
        func_0x00010778d01c(uVar15,lVar21 + 0xbe8);
        uVar16 = lVar19 + 0xc48;
        func_0x00010778d09c(uVar16,lVar21 + 0xc48);
        uVar17 = lVar19 + 0xcb0;
        func_0x00010778d01c(uVar17,lVar21 + 0xcb0);
        uVar18 = lVar19 + 0xd10;
        func_0x00010778d01c(uVar18,lVar21 + 0xd10);
        unaff_x25 = lVar19 + 0xd70;
        func_0x00010778d09c(unaff_x25,lVar21 + 0xd70);
        unaff_x26 = lVar19 + 0xdd8;
        func_0x00010778d01c(unaff_x26,lVar21 + 0xdd8);
        lVar19 = lVar19 + 0xe38;
        func_0x00010778d01c(lVar19,lVar21 + 0xe38);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        uVar22 = uVar22 & 0xffffffff;
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        if ((uVar6 & 1) != 0) break;
        if ((uVar7 & 1) != 0) {
          return 1;
        }
        if ((uVar8 & 1) != 0) {
          return 1;
        }
        if ((uVar9 & 1) != 0) {
          return 1;
        }
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        if ((uVar11 & 1) != 0) {
          return 1;
        }
        if ((uVar12 & 1) != 0) {
          return 1;
        }
        if ((uVar13 & 1) != 0) {
          return 1;
        }
        if ((uVar14 & 1) != 0) {
          return 1;
        }
        if ((uVar15 & 1) != 0) {
          return 1;
        }
        if ((uVar16 & 1) != 0) {
          return 1;
        }
        if ((uVar17 & 1) != 0) {
          return 1;
        }
        if ((uVar18 & 1) != 0) {
          return 1;
        }
        if ((unaff_x25 & 1) != 0) {
          return 1;
        }
        if ((unaff_x26 & 1) != 0) {
          return 1;
        }
        lVar1 = lVar1 + 0xe98;
        if ((int)lVar19 != 0) {
          return 1;
        }
      }
      return 1;
    }
  }
  return 1;
}



/* Entry: 1077a399c; end: 1077a3a43;  */

long FUN_1077a399c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x0001077a3d48(param_1,(param_1[1] - *param_1) / 0xe98 + 1);
  func_0x0001077a3e2c(auStack_58,plVar1,(param_1[1] - *param_1) / 0xe98,param_1 + 2);
  func_0x0001077a3a44(lStack_48,param_2);
  lStack_48 = lStack_48 + 0xe98;
  func_0x0001077a3da8(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x0001077a3f10(auStack_58);
  return lVar2;
}



/* Entry: 1077a3f44; end: 1077a3fcb;  */

void FUN_1077a3f44(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0xe98;
    func_0x0001074c49a8();
  }
  return;
}



/* Entry: 1077a4328; end: 1077a439b;  */

undefined8 * FUN_1077a4328(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x0001077a439c(auStack_40,param_2,param_3);
  func_0x0001077a96c0(auStack_30,auStack_40);
  func_0x000107781b94(param_1,auStack_30);
  func_0x0001073ad4c4(auStack_30);
  func_0x0001077acb74();
  *param_1 = &PTR_DAT_1109da518;
  return param_1;
}



/* Entry: 1077a5658; end: 1077a58bf;  */

void FUN_1077a5658(void)

{
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 uStack_40;
  
  func_0x0001077ac9ec();
  func_0x0001077ab4ac();
  if ((unaff_x21 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x19 + 0x10) + 8) != 0)) {
      func_0x0001077aca38();
      func_0x0001077acd68(uStack_40 + 0x1a0);
      func_0x0001077aca44();
      func_0x0001077acb74();
    }
    else {
      func_0x0001077acd68(*unaff_x20 + 0x1a0);
    }
    func_0x0001077ac848();
  }
  return;
}



/* Entry: 1077a9158; end: 1077a91d7;  */

/* WARNING: Possible PIC construction at 0x0001077a9188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077a9220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077a92a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077a9224) */
/* WARNING: Removing unreachable block (ram,0x0001077a918c) */
/* WARNING: Removing unreachable block (ram,0x0001077a92ac) */

undefined1 *
FUN_1077a9158(undefined1 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int extraout_w8;
  undefined8 extraout_x8;
  long extraout_x9;
  long extraout_x10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar6;
  undefined *puVar7;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [64];
  undefined8 uStack_108;
  undefined8 ******ppppppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [64];
  undefined8 uStack_98;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  puVar2 = auStack_70;
  pppppppuVar6 = (undefined8 *******)&stack0xfffffffffffffff0;
  puVar3 = param_1;
  func_0x0001077ac834();
  if (*(int *)(param_2 + 0x30) == 0) {
    func_0x0001077ac93c();
LAB_1077a91bc:
    func_0x0001077ac76c(uStack_28);
    if ((bool)in_ZR) {
      return puVar3;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    puStack_78 = &UNK_1077a91d8;
    param_1 = puVar3;
    ppppppuStack_80 = pppppppuVar6;
    func_0x0001077ac834();
    if (*(int *)(param_2 + 0x30) == 0) {
      func_0x0001077ac93c();
    }
    else {
      in_ZR = *(int *)(param_2 + 0x30) == 1;
      if ((bool)in_ZR) {
        func_0x0001077acfe8(*param_2);
        in_ZR = extraout_w8 == 0;
        lVar1 = extraout_x9;
        if (!(bool)in_ZR) {
          lVar1 = extraout_x10;
        }
        param_2 = *(byte **)(lVar1 + 8);
        puVar4 = auStack_d8;
        puVar7 = &UNK_1077a9224;
        puVar2 = auStack_e0;
        param_1 = puVar3;
        pppppppuVar6 = &ppppppuStack_80;
        goto code_r0x00010724ae4c;
      }
      param_1 = *(undefined1 **)param_2;
      func_0x0001077acb18();
      func_0x0001077acb30();
      func_0x0001077aca60();
      puVar3[0x40] = 2;
      func_0x0001077acad0();
    }
    func_0x0001077ac76c(uStack_98);
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    puVar2 = auStack_150;
    puStack_e8 = &UNK_1077a9270;
    pppppppuVar6 = &ppppppuStack_f0;
    puVar4 = param_1;
    ppppppuStack_f0 = &ppppppuStack_80;
    func_0x0001077ac834();
    if (*(int *)(param_2 + 0x30) == 0) {
      func_0x0001077ac93c();
    }
    else {
      in_ZR = *(int *)(param_2 + 0x30) == 1;
      if ((bool)in_ZR) {
        param_2 = (byte *)(ulong)*param_2;
        func_0x0001077f2c38(param_2);
        puVar4 = auStack_148;
        puVar7 = &UNK_1077a92ac;
        puVar2 = auStack_150;
        goto code_r0x00010724ae4c;
      }
      puVar4 = *(undefined1 **)param_2;
      func_0x0001077acb18();
      func_0x0001077acb30();
      func_0x0001077aca60();
      param_1[0x40] = 2;
      func_0x0001077acad0();
    }
    func_0x0001077ac76c(uStack_108);
    if ((bool)in_ZR) {
      return puVar4;
    }
    ___stack_chk_fail();
    puVar7 = &SUB_1077a92f8;
    __Unwind_Resume();
  }
  else {
    in_ZR = *(int *)(param_2 + 0x30) == 1;
    if (!(bool)in_ZR) {
      puVar3 = *(undefined1 **)param_2;
      func_0x0001077acb18();
      func_0x0001077acb30();
      func_0x0001077aca60();
      param_1[0x40] = 2;
      func_0x0001077acad0();
      goto LAB_1077a91bc;
    }
    param_2 = (byte *)(ulong)*param_2;
    puVar4 = auStack_68;
    puVar7 = (undefined *)0x1077a918c;
  }
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar2 + -0x18) = param_1;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar6;
  *(undefined **)(puVar2 + -8) = puVar7;
  func_0x0001077f27dc(param_2);
  pppppppuVar6 = *(undefined8 ********)(puVar2 + -0x10);
  puVar7 = *(undefined **)(puVar2 + -8);
  unaff_x20 = *(undefined8 *)(puVar2 + -0x20);
  param_1 = *(undefined1 **)(puVar2 + -0x18);
code_r0x00010724ae4c:
  uVar5 = SUB81(puVar2 + -0x60,0);
  puVar3 = puVar2 + -0x60;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar2 + -0x18) = param_1;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar6;
  *(undefined **)(puVar2 + -8) = puVar7;
  func_0x00010724cc70(puVar4,param_2);
  *(undefined8 *)(puVar2 + -0x28) = extraout_x8;
  func_0x000100060964(puVar2 + -0x60);
  func_0x000104c33004(puVar4);
  func_0x000104c2f714();
  func_0x00010724cc40(*(undefined8 *)(puVar2 + -0x28));
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
  *(undefined1 **)(puVar2 + -0x78) = puVar4;
  *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x68) = &SUB_10724aea8;
  *puVar3 = uVar5;
  puVar3[1] = param_5;
  *(undefined2 *)(puVar3 + 2) = 0;
  func_0x000104c2fe00(puVar3 + 8,param_3);
  puVar3[0x40] = 0;
  puVar3[0x78] = 0;
  func_0x00010724af54(puVar3 + 0x80,param_4);
  func_0x00010724afdc(puVar3 + 0xd0,param_6);
  puVar3[0x110] = 0;
  puVar3[0x118] = 0;
  puVar3[0x120] = 0;
  puVar3[0x128] = 0;
  puVar3[0x130] = 0;
  puVar3[0x148] = 0;
  puVar3[0x170] = 0;
  puVar3[0x1a8] = 0;
  *(undefined2 *)(puVar3 + 0x1b0) = 0;
  *(undefined8 *)(puVar3 + 0x158) = 0;
  *(undefined8 *)(puVar3 + 0x160) = 0;
  *(undefined8 *)(puVar3 + 0x150) = 0;
  puVar3[0x168] = 0;
  *(undefined8 *)(puVar3 + 0x1c0) = 0;
  *(undefined8 *)(puVar3 + 0x1b8) = 0;
  *(undefined8 *)(puVar3 + 0x1d0) = 0;
  *(undefined8 *)(puVar3 + 0x1c8) = 0;
  *(undefined8 *)(puVar3 + 0x1e0) = 0;
  *(undefined8 *)(puVar3 + 0x1d8) = 0;
  *(undefined8 *)(puVar3 + 0x1e8) = 0;
  *(undefined4 *)(puVar3 + 0x1f0) = 0x3f800000;
  return puVar3;
}



/* Entry: 1077a9610; end: 1077a963b;  */

void FUN_1077a9610(void)

{
  func_0x0001077ace44();
  func_0x0001077a9664();
  return;
}



/* Entry: 1077a9718; end: 1077a9787;  */

/* WARNING: Possible PIC construction at 0x0001077a9744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077a9748) */
/* WARNING: Removing unreachable block (ram,0x0001077a9770) */
/* WARNING: Removing unreachable block (ram,0x0001077a9784) */
/* WARNING: Removing unreachable block (ram,0x0001077a9768) */
/* WARNING: Removing unreachable block (ram,0x0001077acf34) */

undefined8 FUN_1077a9718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  
  func_0x0001077ac8ec();
  func_0x0001077acf40();
  func_0x0001077ace44(uStack_30,param_3);
  func_0x0001077a97b4();
  return param_1;
}



/* Entry: 1077aa38c; end: 1077aa3e7;  */

void FUN_1077aa38c(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077acbe0();
  func_0x00010755e654();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    func_0x0001077aca94((&PTR_DAT_1109daec8)[uVar1],&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1077aa45c; end: 1077aa477;  */

void FUN_1077aa45c(void)

{
  func_0x0001077aca20();
  func_0x0001077acd10();
  return;
}



/* Entry: 1077aa53c; end: 1077aa56b;  */

void FUN_1077aa53c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077acd80();
  func_0x00010754335c(unaff_x19 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 1077aa9d8; end: 1077aa9db;  */

undefined8 FUN_1077aa9d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077aab0c; end: 1077aab2f;  */

void FUN_1077aab0c(void)

{
  func_0x0001077acab8();
  func_0x0001077f2cc0();
  func_0x0001077ac894();
  return;
}



/* Entry: 1077aac88; end: 1077aac8b;  */

undefined8 FUN_1077aac88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077aada4; end: 1077aadeb;  */

undefined8 * FUN_1077aada4(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined8 uStack_28;
  
  func_0x0001077ac6d8();
  func_0x0001077acb30();
  func_0x0001077ac958();
  func_0x0001077acad0();
  func_0x0001077ac76c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077ac994();
  func_0x0001077acae8();
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return (undefined8 *)0x1;
}



/* Entry: 1077aaedc; end: 1077aaf23;  */

undefined8 * FUN_1077aaedc(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined8 uStack_28;
  
  func_0x0001077ac6d8();
  func_0x0001077acb30();
  func_0x0001077ac958();
  func_0x0001077acad0();
  func_0x0001077ac76c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077ac994();
  func_0x0001077acae8();
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return (undefined8 *)0x1;
}



/* Entry: 1077ab18c; end: 1077ab193;  */

void FUN_1077ab18c(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077ab21c; end: 1077ab22b;  */

void FUN_1077ab21c(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077ab2dc; end: 1077ab2e3;  */

void FUN_1077ab2dc(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077ab374; end: 1077ab3b7;  */

void FUN_1077ab374(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077ab574; end: 1077ab60b;  */

void FUN_1077ab574(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077accc4();
  if (extraout_w8 != 0) {
    func_0x0001072ca7a0();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077ab7d8; end: 1077ab86b;  */

void FUN_1077ab7d8(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077accc4();
  if (extraout_w8 != 0) {
    func_0x0001077acd98();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077aba38; end: 1077abacb;  */

void FUN_1077aba38(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077accc4();
  if (extraout_w8 != 0) {
    func_0x0001077acf78();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077abc6c; end: 1077abcc3;  */

void FUN_1077abc6c(long param_1,long param_2)

{
  code *extraout_x8;
  
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x0001072ce6fc((&PTR_DAT_11099aee0)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    func_0x0001077acbc0();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1077abeec; end: 1077abf47;  */

long FUN_1077abeec(long param_1,long param_2)

{
  long extraout_x8;
  
  if (*(int *)(param_1 + 0x48) != -1 || *(int *)(param_2 + 0x48) != -1) {
    if (*(int *)(param_2 + 0x48) == -1) {
      func_0x0001077acf60();
    }
    else {
      func_0x0001077acc7c();
      func_0x0001077ac9e0((&PTR_DAT_1109db408)[extraout_x8]);
    }
  }
  return param_1;
}



/* Entry: 1077ac19c; end: 1077ac1eb;  */

void FUN_1077ac19c(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x8;
  
  func_0x0001077ac9b4();
  if (!(bool)in_ZR || extraout_w8 != -1) {
    if (extraout_w8 == -1) {
      func_0x0001077acf70();
    }
    else {
      func_0x0001077acc7c();
      func_0x0001077ac9e0((&PTR_DAT_1109db468)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 1077ac45c; end: 1077ac4a7;  */

void FUN_1077ac45c(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != -1 && *(int *)(param_2 + 0x40) == iVar1) {
    func_0x0001077acc28(*(int *)(param_2 + 0x40) == iVar1,param_1);
    func_0x0001077ac9c8();
  }
  return;
}



/* Entry: 1077ad6bc; end: 1077ad6c7;  */

undefined8 FUN_1077ad6bc(long param_1)

{
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(int *)(param_1 + 0x12c0) == 0) {
    uStack_18 = 0;
  }
  else {
    puStack_20 = &uStack_18;
    func_0x00010778f440(&puStack_20,param_1 + 0x1290);
  }
  return uStack_18;
}



/* Entry: 1077adc40; end: 1077adc53;  */

void FUN_1077adc40(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar5 = *plVar2;
  lVar1 = plVar2[1];
  lVar6 = param_2[1] + ((lVar1 - lVar5) / -0x18) * 0x18;
  lVar3 = lVar6;
  for (lVar4 = lVar5; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    func_0x0001072ca5c0(lVar3,lVar4);
    lVar3 = lVar3 + 0x18;
  }
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
    func_0x00010726b07c(lVar5);
  }
  param_2[1] = lVar6;
  lVar4 = *plVar2;
  *plVar2 = lVar6;
  plVar2[1] = lVar4;
  param_2[1] = lVar4;
  lVar4 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1077adfac; end: 1077adfbf;  */

void FUN_1077adfac(void)

{
  func_0x0001077adf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077ae254; end: 1077ae293;  */

void FUN_1077ae254(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x8b8);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae454; end: 1077ae493;  */

void FUN_1077ae454(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x6f8);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae658; end: 1077ae69b;  */

void FUN_1077ae658(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x00010748312c(uStack_30 + 0x518,unaff_x19 + 8);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae878; end: 1077ae8bb;  */

void FUN_1077ae878(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x9c8) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x9c0) = param_2;
  *(undefined8 *)(extraout_x8 + 0x9d8) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x9d0) = param_1;
  *(undefined1 *)(extraout_x8 + 0x9e0) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aea90; end: 1077aeacf;  */

void FUN_1077aea90(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x188) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x180) = param_2;
  *(undefined8 *)(extraout_x8 + 0x198) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 400) = param_1;
  *(undefined1 *)(extraout_x8 + 0x1a0) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aecb0; end: 1077aecf3;  */

void FUN_1077aecb0(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x5b8) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x5b0) = param_2;
  *(undefined8 *)(extraout_x8 + 0x5c8) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x5c0) = param_1;
  *(undefined1 *)(extraout_x8 + 0x5d0) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aeec8; end: 1077af19f;  */

long FUN_1077aeec8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x0001074e808c();
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(lVar1 + 0x50) = uVar5;
  *(undefined8 *)(lVar1 + 0x48) = uVar4;
  *(undefined8 *)(lVar1 + 0x40) = uVar3;
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  func_0x0001074e813c(lVar1 + 0x60,param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_1 + 200) = uVar5;
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  func_0x0001074c4884(param_1 + 0xd8,param_2 + 0xd8);
  func_0x0001074c4824(param_1 + 0x148,param_2 + 0x148);
  func_0x0001074c4824(param_1 + 0x1a8,param_2 + 0x1a8);
  func_0x0001074c4824(param_1 + 0x208,param_2 + 0x208);
  func_0x0001074c4824(param_1 + 0x268,param_2 + 0x268);
  func_0x0001074c4824(param_1 + 0x2c8,param_2 + 0x2c8);
  func_0x0001074c4824(param_1 + 0x328,param_2 + 0x328);
  func_0x0001074c4824(param_1 + 0x388,param_2 + 0x388);
  func_0x0001077857d8(param_1 + 1000,param_2 + 1000);
  func_0x0001074c4824(param_1 + 0x4b0,param_2 + 0x4b0);
  func_0x0001077857d8(param_1 + 0x510,param_2 + 0x510);
  func_0x0001074c4824(param_1 + 0x5d8,param_2 + 0x5d8);
  func_0x0001074c4824(param_1 + 0x638,param_2 + 0x638);
  func_0x00010778b718(param_1 + 0x698,param_2 + 0x698);
  func_0x0001074c4824(param_1 + 0x6f8,param_2 + 0x6f8);
  func_0x0001074c4824(param_1 + 0x758,param_2 + 0x758);
  func_0x0001074c4824(param_1 + 0x7b8,param_2 + 0x7b8);
  func_0x0001077981dc(param_1 + 0x818,param_2 + 0x818);
  func_0x0001074c4824(param_1 + 0x8b8,param_2 + 0x8b8);
  func_0x0001074c4884(param_1 + 0x918,param_2 + 0x918);
  func_0x0001074c4824(param_1 + 0x988,param_2 + 0x988);
  func_0x0001074c4824(param_1 + 0x9e8,param_2 + 0x9e8);
  return param_1;
}



/* Entry: 1077af8ec; end: 1077af96b;  */

void FUN_1077af8ec(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077afc8c(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077b00b4();
  return;
}



/* Entry: 1077afd84; end: 1077afd87;  */

void FUN_1077afd84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109db5f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077afedc; end: 1077afeff;  */

void FUN_1077afedc(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001077aff00(&uStack_11,param_1);
  return;
}



/* Entry: 1077b02c8; end: 1077b0393;  */

/* WARNING: Possible PIC construction at 0x0001077b05e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b09bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b09dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b0a78) */
/* WARNING: Removing unreachable block (ram,0x0001077b0a50) */
/* WARNING: Removing unreachable block (ram,0x0001077b09e0) */
/* WARNING: Removing unreachable block (ram,0x0001077b09c0) */
/* WARNING: Removing unreachable block (ram,0x0001077b05e8) */
/* WARNING: Removing unreachable block (ram,0x0001077b095c) */

undefined **
FUN_1077b02c8(undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  char *pcVar11;
  undefined1 uVar12;
  undefined8 extraout_x8;
  undefined **extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined **extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **ppuVar13;
  undefined **unaff_x21;
  long lVar14;
  undefined **unaff_x24;
  undefined8 ******ppppppuVar15;
  undefined8 *****pppppuVar16;
  undefined *puVar17;
  float fVar18;
  undefined1 auStack_6f0 [328];
  undefined *apuStack_5a8 [7];
  undefined *apuStack_570 [9];
  undefined8 uStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined8 *****pppppuStack_510;
  undefined *puStack_508;
  undefined1 auStack_500 [8];
  undefined *apuStack_4f8 [4];
  undefined *apuStack_4d8 [6];
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 auStack_488 [56];
  undefined1 auStack_450 [72];
  undefined8 uStack_408;
  undefined8 ****ppppuStack_3e0;
  undefined *puStack_3d8;
  undefined1 auStack_3d0 [6];
  undefined2 uStack_3ca;
  undefined *puStack_3c8;
  undefined *apuStack_3c0 [5];
  undefined4 uStack_398;
  undefined4 uStack_390;
  byte bStack_388;
  byte bStack_2e0;
  byte bStack_2a8;
  byte bStack_2a0;
  undefined *puStack_298;
  undefined *apuStack_290 [5];
  undefined4 uStack_268;
  undefined4 auStack_260 [2];
  undefined1 auStack_258 [40];
  undefined4 uStack_230;
  undefined1 auStack_220 [24];
  undefined4 uStack_208;
  undefined4 uStack_1f0;
  undefined1 auStack_1e8 [48];
  undefined4 uStack_1b8;
  undefined4 auStack_1b0 [12];
  undefined4 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_168;
  undefined *apuStack_160 [2];
  char cStack_150;
  undefined8 uStack_128;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined *apuStack_b8 [11];
  byte bStack_60;
  undefined1 auStack_51 [17];
  char cStack_40;
  undefined8 uStack_38;
  undefined1 *puVar2;
  
  func_0x0001077b0e08();
  uStack_38 = extraout_x8;
  if (((ulong)param_2[2] & 1) == 0) {
    auStack_51[1] = 0;
    cStack_40 = '\0';
LAB_1077b0354:
    unaff_x20 = param_4;
    unaff_x21 = param_3;
    ppuVar13 = (undefined **)0x1;
  }
  else {
    func_0x0001077b0eec();
    func_0x0001077b0e7c();
    in_ZR = cStack_40 == '\x01';
    if (!(bool)in_ZR) goto LAB_1077b0354;
    param_1 = (undefined **)auStack_51;
    param_2 = (undefined **)(auStack_51 + 1);
    func_0x000107555b80(apuStack_b8);
    ppuVar13 = (undefined **)(ulong)bStack_60;
    if ((bStack_60 & 1) != 0) {
      param_2 = apuStack_b8;
      func_0x00010779b470();
      in_ZR = bStack_60 == 1;
      param_1 = unaff_x19;
      if ((bool)in_ZR) {
        param_1 = apuStack_b8;
        func_0x0001073e6484();
      }
    }
  }
  func_0x0001077b0e3c();
  func_0x0001077b0de4(uStack_38);
  if ((bool)in_ZR) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  func_0x0001077b0e30();
  func_0x0001077b0e28();
  puStack_c8 = &UNK_1077b0394;
  pppppuVar16 = (undefined8 *****)&pppuStack_d0;
  puVar3 = auStack_3d0;
  ppuVar13 = param_1;
  ppuVar7 = param_2;
  pcVar11 = (char *)unaff_x21;
  pppuStack_d0 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x0001077b0e08();
  iVar5 = (int)ppuVar13;
  uStack_128 = extraout_x8_01;
  uVar4 = *(char *)(ppuVar7 + 2) == '\x01';
  if ((bool)uVar4) {
    ppuVar13 = param_2 + 1;
    (**(code **)(*param_2 + 0x30))();
    iVar5 = (int)ppuVar13;
    if (((ulong)ppuVar13 & 1) != 0) goto code_r0x0001077b03f0;
    ppuVar13 = (undefined **)&UNK_10f42a235;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
code_r0x0001077b084c:
    *(undefined1 *)extraout_x8_00 = 0;
    *(undefined1 *)(extraout_x8_00 + 0x27) = 0;
  }
  else {
code_r0x0001077b03f0:
    unaff_x24 = &puStack_298;
    func_0x0001077b0eac();
    if (iVar5 == 0) {
      ppuVar13 = (undefined **)&UNK_10f415ce6;
      func_0x0001077b0eac();
      if (iVar5 == 0) {
        func_0x0001077b0eac();
        if (iVar5 != 0) {
          uStack_168 = 3;
          ppuVar7 = &puStack_298;
          ppuVar13 = &puStack_298;
          puVar17 = &UNK_1077b05e8;
          ppuVar9 = extraout_x8_00;
          ppuVar8 = extraout_x8_00;
          goto code_r0x0001077b0db0;
        }
        func_0x0001077b0eac();
        if (iVar5 == 0) {
          func_0x00010002b838(apuStack_160,&UNK_10f42a254);
          func_0x000100610910(&puStack_3c8);
          func_0x00010048a6c8(&puStack_298,&puStack_3c8,&DAT_10f3b3c06);
          ppuVar13 = &puStack_298;
          func_0x000100066230(unaff_x21);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_298);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3c8);
          unaff_x21 = apuStack_160;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          goto code_r0x0001077b084c;
        }
        uStack_268 = 0;
        uStack_230 = 0;
        uStack_1b8 = 0;
        uStack_180 = 0;
        puStack_3c8._0_4_ = 0x3eb33333;
        uStack_398 = 1;
        param_1 = &puStack_298;
        func_0x0001077b0e54(&puStack_298);
        func_0x0001077b0e4c();
        puStack_3c8._0_4_ = 0;
        uStack_398 = 1;
        func_0x0001077b0e54(auStack_260);
        func_0x0001077b0e4c();
        func_0x0001077b0e64();
        func_0x0001077b0f20();
        ppuVar13 = apuStack_3c0;
        func_0x000107383540(auStack_220);
        func_0x00010732442c(apuStack_3c0);
        func_0x000104c2f714(apuStack_160);
        puStack_3c8 = (undefined *)CONCAT44(puStack_3c8._4_4_,0x3eb33333);
        uStack_398 = 1;
        func_0x0001077b0e54(auStack_1b0);
        func_0x0001077b0e4c();
        pcVar11 = "bottom";
        uVar6 = 0;
        func_0x0001077b0df8();
        if ((uVar6 & 1) == 0) {
code_r0x0001077b07a8:
          puStack_3c8 = (undefined *)((ulong)puStack_3c8 & 0xffffffffffffff00);
          bStack_2a8 = 0;
        }
        else {
          pcVar11 = &UNK_10f42a22d;
          uVar6 = 0;
          func_0x0001077b0df8();
          if ((uVar6 & 1) == 0) goto code_r0x0001077b07a8;
          uVar6 = 0;
          func_0x0001077b0e9c();
          if ((uVar6 & 1) == 0) goto code_r0x0001077b07a8;
          pcVar11 = "top";
          uVar6 = 0;
          func_0x0001077b0df8();
          if ((uVar6 & 1) == 0) goto code_r0x0001077b07a8;
          ppuVar13 = &puStack_298;
          func_0x0001074e157c(&puStack_3c8);
          bStack_2a8 = 1;
        }
        unaff_x21 = &puStack_298;
        func_0x0001073e652c();
        if ((bStack_2a8 & 1) == 0) goto code_r0x0001077b084c;
        unaff_x21 = apuStack_290;
        ppuVar13 = &puStack_3c8;
        func_0x0001074e157c();
        func_0x0001077b0e18(4);
        func_0x0001077b0e74();
        uVar4 = bStack_2a8 == 1;
        if ((bool)uVar4) {
          unaff_x21 = &puStack_3c8;
          func_0x0001073e652c();
        }
      }
      else {
        auStack_260[0] = 0;
        uStack_208 = 0;
        auStack_1b0[0] = 0;
        uStack_178 = 0;
        puStack_3c8 = (undefined *)0x0;
        apuStack_3c0[0]._0_4_ = 0;
        uStack_390 = 1;
        func_0x0001077b0f0c();
        func_0x0001073e64d8(&puStack_3c8);
        if (((ulong)param_2[2] & 1) == 0) {
          apuStack_160[0]._0_1_ = 0;
          cStack_150 = '\0';
code_r0x0001077b05f8:
          func_0x0001077b0f04();
          pcVar11 = &UNK_10f42a1ef;
          uVar6 = 0;
          func_0x0001077b0e8c();
          if ((uVar6 & 1) == 0) goto code_r0x0001077b0800;
          pcVar11 = &UNK_10f42a1ff;
          uVar6 = 0;
          func_0x0001077b0e8c();
          if ((uVar6 & 1) == 0) goto code_r0x0001077b0800;
          pcVar11 = &UNK_10f42a20f;
          uVar6 = 0;
          func_0x0001077b0df8();
          if ((uVar6 & 1) == 0) goto code_r0x0001077b0800;
          ppuVar13 = &puStack_298;
          func_0x0001074e1490(&puStack_3c8);
          bStack_2a0 = 1;
        }
        else {
          ppuVar13 = (undefined **)&UNK_10f42a1e2;
          (**(code **)(*param_2 + 0x38))(apuStack_160,param_2 + 1);
          uVar4 = cStack_150 == '\x01';
          if (!(bool)uVar4) goto code_r0x0001077b05f8;
          uStack_3ca = 0;
          pcVar11 = (char *)unaff_x20;
          FUN_107797a58(&puStack_3c8,apuStack_160,unaff_x21,unaff_x20,(long)&uStack_3ca + 1,
                        &uStack_3ca);
          if ((bStack_388 & 1) != 0) {
            func_0x0001077b0f0c();
            func_0x000107554964(&puStack_3c8);
            ppuVar13 = unaff_x21;
            goto code_r0x0001077b05f8;
          }
          func_0x000107554964(&puStack_3c8);
          func_0x0001077b0f04();
          ppuVar13 = unaff_x21;
code_r0x0001077b0800:
          puStack_3c8 = (undefined *)((ulong)puStack_3c8 & 0xffffffffffffff00);
          bStack_2a0 = 0;
        }
        unaff_x21 = &puStack_298;
        func_0x0001073e6448();
        if ((bStack_2a0 & 1) == 0) goto code_r0x0001077b084c;
        unaff_x21 = apuStack_290;
        ppuVar13 = &puStack_3c8;
        func_0x0001074e1490();
        func_0x0001077b0e18(2);
        func_0x0001077b0e74();
        uVar4 = bStack_2a0 == 1;
        if ((bool)uVar4) {
          unaff_x21 = &puStack_3c8;
          func_0x0001073e6448();
        }
      }
    }
    else {
      uStack_268 = 0;
      uStack_1f0 = 0;
      uStack_1b8 = 0;
      puStack_3c8._0_4_ = 0x3f800000;
      uStack_398 = 1;
      param_1 = &puStack_298;
      func_0x0001077b0e54(&puStack_298);
      func_0x0001077b0e4c();
      func_0x0001077b0e64();
      func_0x0001077b0f20();
      ppuVar13 = apuStack_3c0;
      func_0x000107383540(auStack_258);
      func_0x00010732442c(apuStack_3c0);
      func_0x000104c2f714(apuStack_160);
      puStack_3c8 = (undefined *)CONCAT44(puStack_3c8._4_4_,0x3f400000);
      uStack_398 = 1;
      func_0x0001077b0e54(auStack_1e8);
      func_0x0001077b0e4c();
      pcVar11 = &DAT_10f4154b4;
      uVar6 = 0;
      func_0x0001077b0df8();
      if ((uVar6 & 1) == 0) {
code_r0x0001077b0560:
        puStack_3c8 = (undefined *)((ulong)puStack_3c8 & 0xffffffffffffff00);
        bStack_2e0 = 0;
      }
      else {
        uVar6 = 0;
        func_0x0001077b0e9c();
        if ((uVar6 & 1) == 0) goto code_r0x0001077b0560;
        pcVar11 = &DAT_10f2e8c7d;
        uVar6 = 0;
        func_0x0001077b0df8();
        if ((uVar6 & 1) == 0) goto code_r0x0001077b0560;
        ppuVar13 = &puStack_298;
        func_0x0001074e1450(&puStack_3c8);
        bStack_2e0 = 1;
      }
      unaff_x21 = &puStack_298;
      func_0x0001073e6414();
      if ((bStack_2e0 & 1) == 0) goto code_r0x0001077b084c;
      unaff_x21 = apuStack_290;
      ppuVar13 = &puStack_3c8;
      func_0x0001074e1450();
      func_0x0001077b0e18(1);
      func_0x0001077b0e74();
      uVar4 = bStack_2e0 == 1;
      if ((bool)uVar4) {
        unaff_x21 = &puStack_3c8;
        func_0x0001073e6414();
      }
    }
  }
  func_0x0001077b0de4(uStack_128);
  if ((bool)uVar4) {
    return unaff_x21;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3c8);
  ppuVar7 = apuStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001077b0e28();
  puVar1 = auStack_500;
  puVar2 = auStack_500;
  puStack_3d8 = &UNK_1077b08e8;
  ppppppuVar15 = (undefined8 ******)&ppppuStack_3e0;
  ppppuStack_3e0 = pppppuVar16;
  func_0x0001077b0e08();
  puStack_4a8 = &UNK_10e52b660;
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_490 = 0;
  uVar4 = *(int *)(ppuVar7 + 0x26) + -1 == 3;
  uStack_408 = extraout_x8_03;
  switch(*(int *)(ppuVar7 + 0x26) + -1) {
  case 0:
    func_0x0001077b0f34();
    ppuVar13 = &puStack_4a8;
    ppuVar10 = ppuVar7 + 8;
    puVar17 = &UNK_1077b095c;
    ppuVar9 = extraout_x8_02;
    goto code_r0x0001077b0bac;
  case 1:
    if (*(int *)(ppuVar7 + 8) != 0) {
      func_0x000107797c64(auStack_450,ppuVar7 + 1);
      func_0x000100060964(auStack_488,&UNK_10f42a1e2);
      func_0x000107267f10(&puStack_4a8,auStack_488);
      func_0x0001072d80fc();
      func_0x0001077b0eb4();
      func_0x000104c3323c(auStack_450);
    }
    ppuVar10 = (undefined **)&UNK_10f42a1ef;
    ppuVar8 = &puStack_4a8;
    pcVar11 = (char *)(ppuVar7 + 9);
    puVar17 = &UNK_1077b0a50;
    ppuVar9 = extraout_x8_02;
    goto code_r0x0001077b0c3c;
  case 2:
    ppuVar7 = apuStack_4d8;
    func_0x0001077b0e44(apuStack_4d8);
    func_0x0001077b0ee0();
    apuStack_4f8[0] = apuStack_4d8[0];
    break;
  case 3:
    func_0x0001077b0f34();
    ppuVar13 = (undefined **)&UNK_10f42a22d;
    ppuVar9 = &puStack_4a8;
    pcVar11 = (char *)(ppuVar7 + 8);
    puVar17 = &UNK_1077b09c0;
    ppuVar8 = extraout_x8_02;
    goto code_r0x0001077b0b1c;
  default:
    ppuVar7 = apuStack_4f8;
    func_0x0001077b0e44(apuStack_4f8);
    func_0x0001077b0ee0();
  }
  extraout_x8_02[1] = apuStack_4f8[0];
  extraout_x8_02[2] = ppuVar7[1];
  *ppuVar7 = (undefined *)0x0;
  ppuVar7[1] = (undefined *)0x0;
  func_0x000104c335c0(ppuVar7);
  ppuVar8 = &puStack_4a8;
  func_0x000104c33548();
  func_0x0001077b0de4(uStack_408);
  if ((bool)uVar4) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  func_0x000104c3323c(auStack_450);
  ppuVar9 = &puStack_4a8;
  func_0x000104c33548();
  puVar17 = &UNK_1077b0b1c;
  func_0x0001077b0e28();
code_r0x0001077b0b1c:
  puVar2 = auStack_6f0 + 0x140;
  ppuStack_520 = ppuVar7;
  ppuStack_518 = ppuVar8;
  pppppuStack_510 = ppppppuVar15;
  puStack_508 = puVar17;
  func_0x0001077b0e08();
  uStack_528 = extraout_x8_04;
  ppuVar10 = ppuVar13;
  if (*(int *)((long)pcVar11 + 0x30) != 0) {
    func_0x000107784b60(apuStack_570,pcVar11);
    ppuVar9 = (undefined **)(auStack_6f0 + 0x148);
    func_0x000100060964(ppuVar9,ppuVar13);
    func_0x0001077b0f2c();
    ppuVar10 = apuStack_570;
    func_0x0001072d80fc();
    func_0x0001077b0ebc();
    func_0x0001077b0e5c();
    ppuVar7 = ppuVar13;
  }
  func_0x0001077b0de4(uStack_528);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    ppuVar13 = ppuVar9;
    func_0x0001077b0e5c();
    puVar17 = &UNK_1077b0bac;
    func_0x0001077b0e28();
    ppppppuVar15 = &pppppuStack_510;
code_r0x0001077b0bac:
    puVar1 = puVar2 + -0xb0;
    *(undefined ***)(puVar2 + -0x20) = ppuVar7;
    *(undefined ***)(puVar2 + -0x18) = ppuVar9;
    *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar15;
    *(undefined **)(puVar2 + -8) = puVar17;
    ppppppuVar15 = (undefined8 ******)(puVar2 + -0x10);
    func_0x0001077b0e08();
    *(undefined8 *)(puVar2 + -0x28) = extraout_x8_05;
    ppuVar9 = ppuVar13;
    if (*(int *)(ppuVar10 + 0xe) != 0) {
      func_0x00010778b104(puVar2 + -0x70,ppuVar10);
      ppuVar9 = (undefined **)(puVar2 + -0xa8);
      func_0x000100060964(ppuVar9,"source");
      func_0x0001077b0f2c();
      ppuVar10 = (undefined **)(puVar2 + -0x70);
      func_0x0001072d80fc();
      func_0x0001077b0ebc();
      func_0x0001077b0e5c();
    }
    func_0x0001077b0de4(*(undefined8 *)(puVar2 + -0x28));
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      ppuVar8 = ppuVar9;
      func_0x0001077b0e5c();
      puVar17 = &UNK_1077b0c3c;
      func_0x0001077b0e28();
code_r0x0001077b0c3c:
      puVar3 = puVar1 + -0x100;
      *(undefined ***)(puVar1 + -0x40) = unaff_x24;
      *(undefined ***)(puVar1 + -0x38) = param_1;
      *(undefined ***)(puVar1 + -0x30) = param_2;
      *(undefined ***)(puVar1 + -0x28) = unaff_x20;
      *(undefined ***)(puVar1 + -0x20) = ppuVar7;
      *(undefined ***)(puVar1 + -0x18) = ppuVar9;
      *(undefined8 *******)(puVar1 + -0x10) = ppppppuVar15;
      *(undefined **)(puVar1 + -8) = puVar17;
      pppppuVar16 = (undefined8 *****)(puVar1 + -0x10);
      func_0x0001077b0e08();
      *(undefined8 *)(puVar1 + -0x48) = extraout_x8_06;
      ppuVar13 = ppuVar10;
      if (*(int *)((long)pcVar11 + 0x50) != 0) {
        uVar4 = *(int *)((long)pcVar11 + 0x50) == 1;
        if ((bool)uVar4) {
          *(undefined8 *)(puVar1 + -0xe8) = 0;
          *(undefined8 *)(puVar1 + -0xe0) = 0;
          *(undefined8 *)(puVar1 + -0xd8) = 0;
          func_0x0001072ac134(puVar1 + -0xe8,9);
          for (lVar14 = 0; uVar4 = lVar14 == 0x24, !(bool)uVar4; lVar14 = lVar14 + 4) {
            fVar18 = *(float *)((long)pcVar11 + lVar14);
            *(undefined4 *)(puVar1 + -0x88) = 3;
            *(double *)(puVar1 + -0x80) = (double)fVar18;
            func_0x0001072aad1c(puVar1 + -0xe8,puVar1 + -0x88);
            func_0x0001077b0f18();
          }
          func_0x000107327958(puVar1 + -0x100,puVar1 + -0xe8);
          *(undefined4 *)(puVar1 + -0x88) = 0;
          *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0xf8);
          *(undefined8 *)(puVar1 + -0x80) = *(undefined8 *)(puVar1 + -0x100);
          *(undefined8 *)(puVar1 + -0x100) = 0;
          *(undefined8 *)(puVar1 + -0xf8) = 0;
          func_0x000104c33108(puVar1 + -0x100);
          func_0x000107269124(puVar1 + -0xe8);
          func_0x0001077b0f40();
          uVar12 = 1;
        }
        else {
          (**(code **)(**(long **)pcVar11 + 0x28))(puVar1 + -0x88);
          func_0x0001077b0f40();
          uVar12 = 2;
        }
        puVar1[-0x90] = uVar12;
        func_0x0001077b0f18();
        func_0x000100060964(puVar1 + -0x88,ppuVar10);
        func_0x0001077b0f2c();
        ppuVar13 = (undefined **)(puVar1 + -0xd0);
        func_0x0001072d80fc();
        func_0x0001077b0eb4();
        ppuVar8 = (undefined **)(puVar1 + -0xd0);
        func_0x000104c3323c();
        ppuVar7 = ppuVar10;
      }
      func_0x0001077b0de4(*(undefined8 *)(puVar1 + -0x48));
      if ((bool)uVar4) {
        return ppuVar8;
      }
      ___stack_chk_fail();
      puVar17 = &UNK_1077b0db0;
      ppuVar9 = ppuVar8;
      func_0x0001077b0e28();
code_r0x0001077b0db0:
      *(undefined ***)(puVar3 + -0x20) = ppuVar7;
      *(undefined ***)(puVar3 + -0x18) = ppuVar8;
      *(undefined8 ******)(puVar3 + -0x10) = pppppuVar16;
      *(undefined **)(puVar3 + -8) = puVar17;
      func_0x0001074e13c8(ppuVar9 + 1,ppuVar13 + 1);
      *(undefined1 *)(ppuVar9 + 0x27) = 1;
      return ppuVar9;
    }
  }
  return ppuVar9;
}



/* Entry: 1077b0f58; end: 1077b108f;  */

void FUN_1077b0f58(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077b1750();
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x000107757268(auStack_80,*param_1);
  lStack_68 = unaff_x19[1];
  lStack_70 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    plVar1 = (long *)(unaff_x19[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_60 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077b135c(unaff_x19 + 3,auStack_80);
  FUN_1077b12e8(&lStack_70);
  func_0x000107266acc(&uStack_90);
  lVar4 = *unaff_x19;
  if (*(char *)(lVar4 + 0x21) == '\x01') {
    *(byte *)(unaff_x19 + 2) = *(byte *)(unaff_x19 + 2) | 1;
  }
  if (*(char *)(lVar4 + 0x20) == '\x01') {
    *(byte *)(unaff_x19 + 2) = *(byte *)(unaff_x19 + 2) | 2;
  }
  if (*(char *)(lVar4 + 0x24) == '\x01') {
    *(byte *)(unaff_x19 + 2) = *(byte *)(unaff_x19 + 2) | 4;
  }
  if (*(char *)(lVar4 + 0x22) == '\x01') {
    *(byte *)(unaff_x19 + 2) = *(byte *)(unaff_x19 + 2) | 8;
  }
  if (*(char *)(lVar4 + 0x23) == '\x01') {
    *(byte *)(unaff_x19 + 2) = *(byte *)(unaff_x19 + 2) | 0x10;
  }
  return;
}



/* Entry: 1077b12e8; end: 1077b130f;  */

undefined8 FUN_1077b12e8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001077b1310(param_1 + 0x10);
  func_0x000107274970();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1077b1498; end: 1077b149b;  */

void FUN_1077b1498(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109db640;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077b1608; end: 1077b16ef;  */

void FUN_1077b1608(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [400];
  undefined1 uStack_1d8;
  undefined1 auStack_1d0 [400];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)**(undefined8 **)*param_1;
  auStack_1d0[0] = 0;
  uStack_40 = 0;
  FUN_1077503b0(auStack_398,*puVar3,auStack_1d0);
  auStack_368[0] = 0;
  uStack_1d8 = 0;
  func_0x000107750418(auStack_380,*puVar3,auStack_368);
  func_0x0001074332fc(auStack_368);
  func_0x0001074332fc(auStack_1d0);
  uVar1 = *(char *)(puVar3 + 8) == '\x01';
  if ((bool)uVar1) {
    func_0x0001077b1330(puVar3 + 2);
    *(undefined1 *)(puVar3 + 8) = 0;
  }
  func_0x0001077b1570(puVar3 + 2,auStack_398);
  puVar2 = auStack_398;
  func_0x0001077b1330();
  func_0x0001077b173c(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074332fc(auStack_368);
  func_0x0001077b1720();
  func_0x0001074332fc(auStack_1d0);
  __Unwind_Resume();
  func_0x0001073dd510();
  *(undefined4 *)(puVar2 + 0x10) = 2;
  return;
}



/* Entry: 1077b1aa0; end: 1077b1acf;  */

void FUN_1077b1aa0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *unaff_x21;
  ulong *unaff_x22;
  long lVar13;
  ulong *unaff_x23;
  long lVar14;
  ulong *unaff_x24;
  long *plVar15;
  ulong *unaff_x25;
  long lVar16;
  ulong unaff_x26;
  ulong *unaff_x27;
  long lVar17;
  ulong *unaff_x28;
  ulong *puVar18;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  long lStack_300;
  long lStack_2f0;
  long lStack_2e8;
  ulong *puStack_2e0;
  ulong *puStack_2d8;
  ulong uStack_2d0;
  ulong *puStack_2c8;
  ulong *puStack_2c0;
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong *puStack_298;
  undefined1 **ppuStack_290;
  undefined *puStack_288;
  undefined1 *puStack_278;
  ulong *puStack_270;
  char cStack_261;
  long alStack_260 [29];
  ulong auStack_178 [29];
  undefined8 uStack_90;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((param_1[4] & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((param_1[3] & 1) != 0) {
    return;
  }
  uStack_18 = 0x1077b1ab8;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104bdc2c8();
  puStack_28 = &SUB_1077b1ad0;
  puVar4 = param_1;
  puStack_278 = extraout_x8;
  puStack_30 = (undefined1 *)&puStack_20;
  func_0x0001077b3d14();
  cStack_261 = '\0';
  uVar11 = *puVar4;
  uVar10 = puVar4[1];
  uStack_90 = extraout_x8_00;
  if (uVar11 == uVar10) {
    uVar2 = param_1[3] == param_1[4];
    if (!(bool)uVar2) {
      func_0x0001077b3e24();
      uVar11 = *param_1;
      uVar10 = param_1[1];
      goto code_r0x0001077b1b24;
    }
  }
  else {
code_r0x0001077b1b24:
    uVar2 = uVar11 == uVar10;
    if (!(bool)uVar2) {
      if (((char)param_1[0x16] == '\x01') &&
         (__ZNSt3__16chrono12steady_clock3nowEv(),
         (long)param_1[0x19] < (long)((long)puVar4 - param_1[0x17]) / 1000000)) {
        func_0x0001077b3e24();
      }
      if (cStack_261 == '\x01') {
        puVar4 = param_1;
        func_0x0001077b216c(param_1,*param_1,param_1[1]);
        uVar11 = *param_1;
        if (0xe8 < (long)(param_1[1] - uVar11)) {
          unaff_x24 = (ulong *)((long)(param_1[1] - uVar11) / 0xe8);
          unaff_x25 = (ulong *)((long)unaff_x24 - 2U >> 1);
          puStack_270 = (ulong *)(uVar11 + 0xe8);
          unaff_x27 = (ulong *)0xe8;
          unaff_x28 = unaff_x25;
          do {
            if ((long)unaff_x28 <= (long)unaff_x25) {
              uVar1 = ((ulong)unaff_x28 & 0x3fffffffffffffff) << 1 | 1;
              unaff_x21 = (ulong *)(uVar1 * 0xe8 + uVar11);
              uVar10 = (long)unaff_x28 * 2 + 2;
              unaff_x26 = uVar1;
              if ((long)uVar10 < (long)unaff_x24) {
                func_0x0001077b3d40();
                bVar3 = (int)puVar4 == 0;
                lVar9 = 0xe8;
                if (bVar3) {
                  lVar9 = 0;
                }
                unaff_x21 = (ulong *)((long)unaff_x21 + lVar9);
                unaff_x26 = uVar10;
                if (bVar3) {
                  unaff_x26 = uVar1;
                }
              }
              unaff_x22 = (ulong *)(uVar11 + (long)unaff_x28 * 0xe8);
              puVar4 = param_1;
              func_0x0001077b2e30(param_1,unaff_x21,unaff_x22);
              if (((ulong)puVar4 & 1) == 0) {
                func_0x0001077b3de0();
                do {
                  puVar4 = unaff_x22;
                  unaff_x22 = unaff_x21;
                  func_0x0001077b3658(puVar4,unaff_x22);
                  unaff_x21 = unaff_x22;
                  if ((long)unaff_x25 < (long)unaff_x26) break;
                  uVar1 = (unaff_x26 & 0x3fffffffffffffff) << 1 | 1;
                  unaff_x21 = (ulong *)(uVar1 * 0xe8 + uVar11);
                  uVar10 = unaff_x26 * 2 + 2;
                  unaff_x26 = uVar1;
                  if ((long)uVar10 < (long)unaff_x24) {
                    func_0x0001077b3d40();
                    bVar3 = (int)puVar4 == 0;
                    lVar9 = 0xe8;
                    if (bVar3) {
                      lVar9 = 0;
                    }
                    unaff_x21 = (ulong *)((long)unaff_x21 + lVar9);
                    unaff_x26 = uVar10;
                    if (bVar3) {
                      unaff_x26 = uVar1;
                    }
                  }
                  func_0x0001077b3d40();
                } while ((int)puVar4 == 0);
                func_0x0001077b3e58();
                func_0x0001077b3d8c();
              }
            }
            unaff_x28 = (ulong *)((long)unaff_x28 + -1);
          } while (-1 < (long)unaff_x28);
        }
        *(undefined1 *)(param_1 + 0x16) = 0;
        __ZNSt3__16chrono12steady_clock3nowEv();
        param_1[0x17] = (ulong)puVar4;
      }
      else if (((char)param_1[0x1a] == '\x01') &&
              (unaff_x21 = param_1 + 3, *unaff_x21 != param_1[4])) {
        func_0x0001077b216c(param_1);
        puVar4 = (ulong *)param_1[4];
        unaff_x26 = 0xe8;
        for (unaff_x22 = (ulong *)param_1[3]; unaff_x22 != puVar4; unaff_x22 = unaff_x22 + 0x1d) {
          func_0x0001077b3124(param_1,unaff_x22);
          unaff_x27 = (ulong *)*param_1;
          uVar11 = param_1[1] - (long)unaff_x27;
          if (0xe8 < (long)uVar11) {
            puVar18 = (ulong *)(uVar11 / 0xe8 - 2 >> 1);
            unaff_x25 = (ulong *)(param_1[1] - 0xe8);
            puVar5 = param_1;
            func_0x0001077b2e30(param_1,unaff_x27 + (long)puVar18 * 0x1d,unaff_x25);
            unaff_x28 = puVar18;
            if ((int)puVar5 != 0) {
              FUN_1077b3230(auStack_178,unaff_x25);
              puVar5 = unaff_x27 + (long)puVar18 * 0x1d;
              do {
                unaff_x24 = puVar5;
                puVar6 = unaff_x25;
                func_0x0001077b3658(unaff_x25,unaff_x24);
                unaff_x28 = (ulong *)0x0;
                if (puVar18 == (ulong *)0x0) break;
                puVar18 = (ulong *)((long)puVar18 - 1U >> 1);
                func_0x0001077b3d9c();
                puVar5 = unaff_x27 + (long)puVar18 * 0x1d;
                unaff_x25 = unaff_x24;
                unaff_x28 = puVar18;
              } while (((ulong)puVar6 & 1) != 0);
              func_0x0001077b3e8c();
              func_0x0001077b3d8c();
            }
          }
        }
        func_0x0001077b2e04(unaff_x21);
      }
      unaff_x23 = (ulong *)*param_1;
      uVar11 = param_1[1];
      lVar9 = uVar11 - (long)unaff_x23;
      uVar2 = lVar9 == 0xe9;
      if (0xe8 < lVar9) {
        unaff_x24 = (ulong *)(lVar9 / 0xe8);
        func_0x0001077b3e78(alStack_260);
        unaff_x27 = (ulong *)0x0;
        unaff_x25 = (ulong *)((long)unaff_x24 - 2U >> 1);
        unaff_x26 = 0xe8;
        puStack_270 = unaff_x23;
        do {
          unaff_x28 = unaff_x23 + (long)unaff_x27 * 0x1d;
          puVar4 = unaff_x28 + 0x1d;
          puVar5 = (ulong *)((long)unaff_x27 << 1 | 1);
          unaff_x21 = (ulong *)((long)unaff_x27 * 2 + 2);
          unaff_x22 = puVar4;
          unaff_x27 = puVar5;
          if ((long)unaff_x21 < (long)unaff_x24) {
            puVar18 = param_1;
            func_0x0001077b2e30(param_1,puVar4,unaff_x28 + 0x3a);
            unaff_x22 = unaff_x28 + 0x3a;
            unaff_x27 = unaff_x21;
            if ((int)puVar18 == 0) {
              unaff_x22 = puVar4;
              unaff_x27 = puVar5;
            }
          }
          func_0x0001077b3658(unaff_x23,unaff_x22);
          unaff_x23 = unaff_x22;
        } while ((long)unaff_x27 <= (long)unaff_x25);
        unaff_x23 = (ulong *)(uVar11 - 0xe8);
        uVar2 = unaff_x22 == unaff_x23;
        if ((bool)uVar2) {
          func_0x0001077b3e58();
        }
        else {
          func_0x0001077b3e60();
          func_0x0001077b3658(unaff_x23,alStack_260);
          unaff_x21 = puStack_270;
          uVar11 = (long)unaff_x22 + (0xe8 - (long)puStack_270);
          uVar2 = uVar11 == 0xe9;
          if (0xe8 < (long)uVar11) {
            uVar11 = uVar11 / 0xe8 - 2 >> 1;
            unaff_x23 = puStack_270 + uVar11 * 0x1d;
            puVar4 = param_1;
            func_0x0001077b2e30(param_1,unaff_x23,unaff_x22);
            if ((int)puVar4 != 0) {
              func_0x0001077b3de0();
              unaff_x25 = (ulong *)0xe8;
              do {
                unaff_x24 = unaff_x23;
                func_0x0001077b3e60();
                unaff_x23 = unaff_x24;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1 >> 1;
                unaff_x23 = unaff_x21 + uVar11 * 0x1d;
                func_0x0001077b3d9c();
                unaff_x22 = unaff_x24;
              } while (((ulong)puVar4 & 1) != 0);
              func_0x0001077b3e8c();
              func_0x0001077b3d8c();
            }
          }
        }
        func_0x0001077b356c(alStack_260);
        uVar11 = param_1[1];
      }
      func_0x0001077b3538(auStack_178,uVar11 - 0xe8);
      func_0x0001077b3940(param_1,param_1[1] - 0xe8);
      param_2 = auStack_178;
      func_0x0001077b3538();
      puStack_278[0xd0] = 1;
      puVar4 = auStack_178;
      func_0x000107273efc();
      goto code_r0x0001077b1edc;
    }
  }
  *puStack_278 = 0;
  puStack_278[0xd0] = 0;
code_r0x0001077b1edc:
  func_0x0001077b3cec(uStack_90);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    plVar7 = alStack_260;
    func_0x0001077b356c();
    func_0x0001077b3d2c();
    puStack_288 = &UNK_1077b1f48;
    lVar14 = plVar7[3];
    lVar12 = plVar7[4];
    lVar9 = lVar12 - lVar14;
    puStack_2e0 = unaff_x28;
    puStack_2d8 = unaff_x27;
    uStack_2d0 = unaff_x26;
    puStack_2c8 = unaff_x25;
    puStack_2c0 = unaff_x24;
    puStack_2b8 = unaff_x23;
    puStack_2b0 = unaff_x22;
    puStack_2a8 = unaff_x21;
    puStack_2a0 = param_1;
    puStack_298 = puVar4;
    ppuStack_290 = &puStack_30;
    if (0 < lVar9) {
      lVar13 = *plVar7;
      plVar15 = plVar7 + 2;
      lVar16 = plVar7[1];
      lVar17 = lVar9 / 0xe8;
      if (*plVar15 - lVar16 < lVar9) {
        plVar8 = plVar7;
        func_0x0001077b3260(plVar7,(lVar16 - lVar13) / 0xe8 + lVar17);
        func_0x0001077b3354(&plStack_318,plVar8,(lVar13 - *plVar7) / 0xe8,plVar15);
        lVar12 = (long)plStack_308 + lVar9;
        for (; lVar9 != 0; lVar9 = lVar9 + -0xe8) {
          func_0x0001077b3e78(plStack_308);
          plStack_308 = plStack_308 + 0x1d;
        }
        plStack_308 = (long *)lVar12;
        func_0x0001077b33f4(plVar15,lVar13,plVar7[1],lVar12);
        lVar9 = *plVar7;
        plStack_308 = (long *)((long)plStack_308 + (plVar7[1] - lVar13));
        plVar7[1] = lVar13;
        func_0x0001077b33f4(plVar15,lVar9,lVar13,plStack_310 + ((lVar13 - lVar9) / -0xe8) * 0x1d);
        plStack_318 = (long *)*plVar7;
        *plVar7 = (long)(plStack_310 + ((lVar13 - lVar9) / -0xe8) * 0x1d);
        lVar9 = plVar7[2];
        plVar7[2] = lStack_300;
        plVar7[1] = (long)plStack_308;
        plStack_310 = plStack_318;
        plStack_308 = plStack_318;
        lStack_300 = lVar9;
        func_0x0001077b34d0(&plStack_318);
      }
      else {
        lVar9 = lVar16 - lVar13;
        if (lVar9 / 0xe8 < lVar17) {
          plStack_310 = &lStack_2f0;
          plStack_308 = &lStack_2e8;
          plStack_318 = plVar15;
          lStack_2f0 = lVar16;
          for (lVar17 = lVar9 + lVar14; lStack_2e8 = lVar16, lVar17 != lVar12;
              lVar17 = lVar17 + 0xe8) {
            FUN_1077b3230(lVar16,lVar17);
            lVar16 = lStack_2e8 + 0xe8;
          }
          lStack_300 = CONCAT71(lStack_300._1_7_,1);
          func_0x0001077b348c(&plStack_318);
          plVar7[1] = lVar16;
          if (0 < lVar9) {
            func_0x0001077b3d58();
            func_0x0001077b38f8(lVar14,lVar9 / 0xe8,lVar13);
          }
        }
        else {
          func_0x0001077b3d58();
          func_0x0001077b38f8(lVar14,lVar17,lVar13);
        }
      }
    }
    func_0x0001077b2e04(plVar7 + 3);
    *(undefined1 *)param_2 = 1;
    return;
  }
  return;
}



/* Entry: 1077b300c; end: 1077b3073;  */

undefined8 FUN_1077b300c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001077b3038(&uStack_28);
  return param_1;
}



/* Entry: 1077b3230; end: 1077b325f;  */

void FUN_1077b3230(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001077b3538();
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  return;
}



/* Entry: 1077b34fc; end: 1077b3503;  */

void FUN_1077b34fc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077b3d80(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xe8;
    func_0x0001077b356c();
  }
  return;
}



/* Entry: 1077b3784; end: 1077b37a7;  */

undefined8 FUN_1077b3784(undefined8 param_1)

{
  func_0x0001077b37a8();
  return param_1;
}



/* Entry: 1077b3a24; end: 1077b3a43;  */

void FUN_1077b3a24(void)

{
  undefined1 uStack_11;
  
  func_0x0001077b3a44(&uStack_11);
  return;
}



/* Entry: 1077b3c44; end: 1077b3c5b;  */

void FUN_1077b3c44(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077b45c0; end: 1077b4687;  */

void FUN_1077b45c0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001077b4688(param_1,(*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0)) / 0x38);
  func_0x000107752094(param_2 + 0x50);
  for (uVar2 = 0; uVar2 < (ulong)((*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0)) / 0x38);
      uVar2 = (ulong)((int)uVar2 + 1)) {
    lVar1 = param_2;
    func_0x0001077b4390(param_2,uVar2,param_3);
    uStack_48 = (undefined4)lVar1;
    uStack_44 = (undefined1)((ulong)lVar1 >> 0x20);
    func_0x0001077b4cac(param_1,&uStack_48);
  }
  return;
}



/* Entry: 1077b48cc; end: 1077b490f;  */

void FUN_1077b48cc(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077b4910();
  return;
}



/* Entry: 1077b4c5c; end: 1077b4c87;  */

long * FUN_1077b4c5c(long *param_1)

{
  func_0x0001077b4c88();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077b50b0; end: 1077b50cf;  */

void FUN_1077b50b0(void)

{
  undefined1 uStack_11;
  
  func_0x0001077b50d0(&uStack_11);
  return;
}



/* Entry: 1077b51f8; end: 1077b51fb;  */

void FUN_1077b51f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077b53e4; end: 1077b541f;  */

undefined8 * FUN_1077b53e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107410b3c(&uStack_30);
  return param_1;
}



/* Entry: 1077b5694; end: 1077b5717;  */

void FUN_1077b5694(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lStack_40;
  
  uVar3 = (uint)((ulong)param_2 >> 0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x4c);
  uVar2 = uVar1 >> 0x10 & 0xff;
  if ((uVar2 == (uVar3 & 0xff)) && ((uVar1 >> 0x10 & 1) != 0)) {
    if ((uVar1 & 0xffff) == ((uint)param_2 & 0xffff)) {
      return;
    }
  }
  else if (uVar2 == (uVar3 & 0xff)) {
    return;
  }
  func_0x0001077b5860();
  *(char *)(lStack_40 + 0x4e) = (char)((ulong)param_2 >> 0x10);
  *(short *)(lStack_40 + 0x4c) = (short)param_2;
  func_0x0001077b5874();
  func_0x0001077b5834();
  func_0x0001077b5858();
  func_0x0001077b5844();
  return;
}



/* Entry: 1077b5904; end: 1077b590b;  */

void FUN_1077b5904(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1077b5908);
  (*pcVar1)();
}



/* Entry: 1077b5ed0; end: 1077b5ee3;  */

void FUN_1077b5ed0(void)

{
  func_0x0001077b5e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077b6378; end: 1077b644f;  */

void FUN_1077b6378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_3;
  uStack_48 = param_4;
  if (*(int *)(param_1 + 0x58) == 0) {
    func_0x0001077b6850(param_1 + 0x48);
    func_0x0001077b7178();
    if (extraout_x8 != 0) {
      do {
        func_0x0001077b7198();
      } while (extraout_w10 != 0);
    }
    func_0x0001077b6450(auStack_68,&SUB_107566894,0,param_2,&uStack_50);
    func_0x00010724ae28(auStack_60);
  }
  else {
    lVar1 = param_1;
    func_0x00010785f1f4();
    auStack_68[0] = 0;
    lVar1 = lVar1 + 0xb50;
    func_0x00010724e2c8(lVar1,auStack_68);
    puVar2 = (undefined8 *)(param_1 + 0x48);
    func_0x0001077b6868();
    if ((int)lVar1 == 0) {
      param_3 = 0;
      param_4 = 0;
    }
    func_0x000107566894(*puVar2,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1077b6754; end: 1077b6763;  */

undefined8 FUN_1077b6754(undefined8 param_1,undefined8 param_2)

{
  func_0x0001077b6780(param_2,0);
  return param_2;
}



/* Entry: 1077b68bc; end: 1077b692f;  */

undefined8 FUN_1077b68bc(undefined8 param_1)

{
  func_0x0001077b6780(param_1,0);
  return param_1;
}



/* Entry: 1077b6ab8; end: 1077b6b3f;  */

void FUN_1077b6ab8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_50 = *param_5;
  uStack_48 = *(undefined4 *)(param_5 + 1);
  lStack_40 = *param_6;
  *param_6 = 0;
  uStack_38 = *param_7;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x0001077b6b40(&uStack_58,param_2,&uStack_30,&uStack_50);
  lVar1 = lStack_40;
  *param_1 = uStack_58;
  lStack_40 = 0;
  if (lVar1 != 0) {
    func_0x0001077b716c();
  }
  return;
}



/* Entry: 1077b6d6c; end: 1077b6dcb;  */

undefined8 * FUN_1077b6d6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  func_0x000107568744(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1077b6f2c; end: 1077b6f47;  */

void FUN_1077b6f2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1077b7048; end: 1077b706b;  */

void FUN_1077b7048(void)

{
  return;
}



/* Entry: 1077b73d8; end: 1077b740f;  */

void FUN_1077b73d8(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077b75f4(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  func_0x0001077b777c();
  return;
}



/* Entry: 1077b7580; end: 1077b75b3;  */

void FUN_1077b7580(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Entry: 1077b7728; end: 1077b77a7;  */

void FUN_1077b7728(void)

{
  return;
}



/* Entry: 1077b7a80; end: 1077b7acb;  */

void FUN_1077b7a80(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  func_0x0001077b7b38(auStack_30,param_2,*(undefined8 *)(param_1 + 8));
  func_0x0001077b7acc(param_1,auStack_30);
  func_0x0001077b8d08();
  return;
}



/* Entry: 1077b7ed4; end: 1077b7efb;  */

long FUN_1077b7ed4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077b80d8; end: 1077b8107;  */

void FUN_1077b80d8(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x1642c8590b21643) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb8);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077b8d78();
  func_0x0001077b8158();
  return;
}



/* Entry: 1077b81e4; end: 1077b8207;  */

void FUN_1077b81e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x0001077b8208(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1077b836c; end: 1077b85eb;  */

void FUN_1077b836c(long param_1,undefined *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar5;
  long *plVar6;
  long *unaff_x21;
  long lStack_188;
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_120 [96];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [48];
  undefined auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001077b8c7c();
  lVar5 = *(long *)(param_1 + 8);
  uStack_38 = extraout_x8;
  if (*(long *)(param_2 + 0x10) == 0) {
    if ((param_2[0x19] & 1) != 0) goto LAB_1077b8554;
    in_ZR = param_2[0x18] == '\x01';
    if (!(bool)in_ZR) {
      lStack_158 = *(long *)(lVar5 + 0x10);
      uStack_160 = *(undefined8 *)(lVar5 + 8);
      if (*(long *)(lVar5 + 0x10) != 0) {
        do {
          func_0x0001077b8c98();
        } while (extraout_w10 != 0);
      }
      lStack_148 = *(long *)(param_2 + 0x28);
      uStack_150 = *(undefined8 *)(param_2 + 0x20);
      if (*(long *)(param_2 + 0x28) != 0) {
        do {
          func_0x0001077b8c98();
        } while (extraout_w10_00 != 0);
      }
      unaff_x21 = &lStack_188;
      plVar6 = (long *)(lVar5 + 0x90);
      lStack_188 = lVar5;
      func_0x000107326958(auStack_180);
      uStack_168 = *(undefined8 *)(lVar5 + 0x78);
      plVar1 = *(long **)(lVar5 + 0x80);
      func_0x0001073af260();
      (**(code **)(*plVar6 + 0x20))(&uStack_140);
      uStack_b8 = uStack_138;
      uStack_c0 = uStack_140;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_b0 = uStack_130;
      lStack_a0 = lStack_158;
      uStack_a8 = uStack_160;
      if (lStack_158 != 0) {
        plVar6 = (long *)(lStack_158 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_90 = lStack_148;
      uStack_98 = uStack_150;
      if (lStack_148 != 0) {
        do {
          func_0x0001077b8c98();
        } while (extraout_w10_01 != 0);
      }
      func_0x0001077b8698(auStack_88,&lStack_188);
      func_0x0001077b86cc(auStack_120,&uStack_c0);
      puStack_40 = (undefined8 *)0x0;
      puVar4 = (undefined8 *)0x68;
      __Znwm();
      *puVar4 = &PTR_DAT_1109dbba8;
      func_0x0001077b86cc(puVar4 + 1,auStack_120);
      param_2 = auStack_58;
      puStack_40 = puVar4;
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      func_0x0001006393ec(auStack_58);
      func_0x0001077b8718(auStack_120);
      func_0x0001077b8718(&uStack_c0);
      func_0x00010725b1d4(&uStack_140);
      func_0x00010725b1d4(auStack_180);
      func_0x0001077b8624();
      goto LAB_1077b8554;
    }
    plVar6 = *(long **)(lVar5 + 0x18);
    param_2 = &UNK_10f42a2c0;
    __ZNSt13runtime_errorC1EPKc(&uStack_c0,&UNK_10f42a2c0);
    func_0x0001052b2bd0(auStack_120);
    func_0x0001077b8d28(*(undefined8 *)(*plVar6 + 0x20));
  }
  else {
    plVar6 = *(long **)(lVar5 + 0x18);
    param_2 = (undefined *)(*(long *)(param_2 + 0x10) + 8);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (&uStack_c0,param_2);
    func_0x0001052b2bd0(auStack_120);
    func_0x0001077b8d28(*(undefined8 *)(*plVar6 + 0x20));
  }
  __ZNSt13exception_ptrD1Ev(auStack_120);
  __ZNSt13runtime_errorD1Ev();
LAB_1077b8554:
  func_0x0001077b8c5c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001006393ec(auStack_58);
    func_0x0001077b8718(auStack_120);
    func_0x0001077b8718(&uStack_c0);
    func_0x00010725b1d4(&uStack_140);
    func_0x00010725b1d4(unaff_x21 + 1);
    func_0x0001077b8624(&uStack_160);
    func_0x0001077b8cb0();
    func_0x0001077b8da4(param_2);
    func_0x0001077b8d48();
    return;
  }
  return;
}



/* Entry: 1077b87b0; end: 1077b87d3;  */

undefined8 * FUN_1077b87b0(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dbba8;
  func_0x000107283e34(param_2 + 1);
  func_0x0001077b864c(param_2 + 4,param_1 + 0x20);
  func_0x0001077b8698(param_2 + 8,param_1 + 0x40);
  return param_2;
}



/* Entry: 1077b8b28; end: 1077b8b4b;  */

long FUN_1077b8b28(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  func_0x0001077b8d68();
  func_0x0001077b8698();
  lVar1 = *(long *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001077b8c98();
    } while (extraout_w10 != 0);
  }
  return param_2;
}



/* Entry: 1077b9df4; end: 1077b9df7;  */

undefined8 FUN_1077b9df4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  func_0x00010750c6cc(param_1 + 0x12);
  func_0x000107563d0c(param_1 + 0x10);
  func_0x0001077b732c();
  *param_1 = extraout_x8;
  func_0x0001072c9240(param_1 + 0xd);
  func_0x000104c2f714(param_1 + 2);
  return unaff_x19;
}



/* Entry: 1077b9ed8; end: 1077ba053;  */

void FUN_1077b9ed8(long param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  uint *puStack_a0;
  uint *puStack_98;
  undefined4 *puStack_90;
  undefined1 *puStack_88;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  
  bVar2 = *param_2;
  uVar1 = *(uint *)(param_2 + 4);
  uStack_74 = *(undefined4 *)(param_2 + 8);
  func_0x0001072c8f9c(auStack_c0);
  uVar4 = (uint)*(byte *)(param_1 + 0x18);
  if ((uint)*(byte *)(param_1 + 0x18) <= (uint)bVar2) {
    uVar4 = (uint)bVar2;
    if (*(byte *)(param_1 + 0x19) + 1 < (uint)bVar2) {
      uVar4 = *(byte *)(param_1 + 0x19) + 1;
    }
  }
  lVar3 = param_1 + 0x70;
  func_0x0001077bb658(lVar3,uVar4);
  dVar5 = 1.0;
  _ldexp(bVar2);
  uStack_78 = (uint)dVar5;
  dVar5 = (double)NEON_ucvtf((ulong)*(ushort *)(param_1 + 0x1a));
  dVar6 = (double)NEON_ucvtf((ulong)*(ushort *)(param_1 + 0x1c));
  dVar5 = dVar5 / dVar6;
  puStack_a0 = &uStack_78;
  puStack_98 = &uStack_7c;
  puStack_90 = &uStack_74;
  dVar6 = (double)uStack_78;
  lStack_b0 = param_1 + 8;
  lStack_a8 = lVar3 + 0x18;
  puStack_88 = auStack_c0;
  uStack_7c = uVar1;
  func_0x0001077be8b0(((double)(int)uVar1 - dVar5) / dVar6,dVar6,
                      (dVar5 + (double)(int)(uVar1 + 1)) / dVar6);
  if (uVar1 == 0) {
    uStack_7c = uStack_78;
    func_0x0001077be8b0(1.0 - dVar5 / (double)uStack_78,0x3ff0000000000000,0x3ff0000000000000);
  }
  if (uVar1 == uStack_78 - 1) {
    uStack_7c = 0xffffffff;
    func_0x0001077be8b0(0);
  }
  func_0x0001077bb620(*(undefined8 *)(param_3 + 0x18),auStack_c0);
  func_0x0001077beb10();
  return;
}



/* Entry: 1077ba74c; end: 1077ba763;  */

void FUN_1077ba74c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


