/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10814cbe4; end: 10814cc07;  */

undefined8 FUN_10814cbe4(undefined8 param_1)

{
  FUN_10814bcec(param_1,0);
  return param_1;
}



/* Entry: 10814cc08; end: 10814cc1b;  */

long * FUN_10814cc08(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x40;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10814cc1c; end: 10814cc5b;  */

long * FUN_10814cc1c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x40;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10814cc5c; end: 10814cd2f;  */

void FUN_10814cc5c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010814cc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10814cd30; end: 10814d5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10814cd30(undefined8 *param_1,ulong param_2,byte *param_3,ulong param_4,uint *param_5,
             ulong param_6,int param_7)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  uint6 uVar7;
  uint6 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  unkbyte9 Var44;
  unkbyte9 Var45;
  byte *pbVar46;
  byte *pbVar47;
  int iVar48;
  code *pcVar49;
  undefined *puVar50;
  code *pcVar51;
  ulong uVar52;
  int iVar53;
  ulong uVar54;
  code *pcVar55;
  uint *puVar56;
  ulong uVar57;
  long lVar58;
  ulong uVar59;
  undefined1 (*pauVar60) [16];
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  uint3 uVar64;
  uint uVar65;
  undefined8 uVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  undefined1 auVar111 [16];
  uint5 uVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  byte bVar115;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  undefined1 auVar116 [16];
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  undefined8 uVar149;
  uint uVar154;
  byte bVar158;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  undefined8 uVar159;
  uint uVar164;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  undefined7 uVar66;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  Var44 = _UNK_10df02600;
  if ((param_2 & 0x30000) != 0) {
    return &UNK_10df02910;
  }
  uVar1 = *(int *)(&UNK_10df026bc + (param_2 >> 4 & 0xf) * 4) +
          *(int *)(&UNK_10df026bc + (param_2 & 0xf) * 4) +
          *(int *)(&UNK_10df026bc + (param_2 >> 8 & 0xf) * 4) +
          *(int *)(&UNK_10df026bc + (param_2 >> 0xc & 0xf) * 4);
  puVar50 = &UNK_10df02910;
  if (uVar1 == 0 || (uVar1 & 7) != 0) {
    return puVar50;
  }
  pcVar51 = (code *)0x0;
  pcVar49 = FUN_10814d600;
  if (param_7 != 1) {
    pcVar49 = (code *)0x0;
  }
  pcVar2 = FUN_10814d5cc;
  if (param_7 != 0) {
    pcVar2 = pcVar49;
  }
  iVar48 = (int)param_2;
  if (iVar48 < -0x7dfbfff8) {
    if (iVar48 < -0x7eff4445) {
      if (iVar48 == -0x7ffffa9b) {
        if (param_6 <= param_4) {
          param_4 = param_6;
        }
        uVar52 = param_4 >> 2;
        if (3 < param_4) {
          uVar54 = uVar52;
          if ((0x1f < param_4) &&
             (((byte *)((long)param_5 + (param_4 & 0xfffffffffffffffc)) <= param_3 ||
              (param_3 + (param_4 & 0xfffffffffffffffc) <= param_5)))) {
            if (param_4 < 0x40) {
              uVar57 = 0;
            }
            else {
              uVar57 = uVar52 & 0x3ffffffffffffff0;
              uVar54 = uVar57;
              pbVar47 = param_3;
              puVar56 = param_5;
              do {
                auVar3 = *(undefined1 (*) [16])(puVar56 + 8);
                auVar4 = *(undefined1 (*) [16])(puVar56 + 0xc);
                uVar6 = *(undefined8 *)(puVar56 + 2);
                uVar67 = *(undefined8 *)puVar56;
                uVar159 = *(undefined8 *)(puVar56 + 6);
                uVar149 = *(undefined8 *)(puVar56 + 4);
                uVar154 = (uint)((ulong)uVar149 >> 0x20);
                uVar164 = (uint)((ulong)uVar159 >> 0x20);
                uVar65 = (uint)((ulong)uVar67 >> 0x20);
                uVar43 = (uint)((ulong)uVar6 >> 0x20);
                uVar17 = (uint)uVar67 >> 5;
                uVar18 = uVar65 >> 5;
                uVar9 = (uint)uVar6 >> 5;
                uVar10 = uVar43 >> 5;
                uVar11 = (uint)uVar149 >> 5;
                bVar68 = (byte)(uVar11 >> 8);
                uVar12 = uVar154 >> 5;
                bVar69 = (byte)(uVar12 >> 8);
                uVar19 = (uint)uVar159 >> 5;
                uVar20 = uVar164 >> 5;
                uVar22 = auVar3._0_4_ >> 5;
                uVar23 = auVar3._4_4_ >> 5;
                uVar24 = auVar3._8_4_ >> 5;
                uVar25 = auVar3._12_4_ >> 5;
                uVar27 = auVar4._0_4_ >> 5;
                bVar168 = (byte)(uVar27 >> 8);
                uVar28 = auVar4._4_4_ >> 5;
                bVar169 = (byte)(uVar28 >> 8);
                uVar29 = auVar4._8_4_ >> 5;
                uVar30 = auVar4._12_4_ >> 5;
                auVar114[9] = 0x24;
                auVar114._0_9_ = Var44;
                auVar114[10] = 0x28;
                auVar114[0xb] = 0x2c;
                auVar114[0xc] = 0x30;
                auVar114[0xd] = 0x34;
                auVar114[0xe] = 0x38;
                auVar114[0xf] = 0x3c;
                auVar111._1_3_ = 0;
                auVar111[0] = (byte)((ulong)uVar67 >> 0x18);
                auVar111[4] = (char)((ulong)uVar67 >> 0x38);
                auVar111._5_3_ = 0;
                auVar111[8] = (char)((ulong)uVar6 >> 0x18);
                auVar111._9_3_ = 0;
                auVar111[0xc] = (char)((ulong)uVar6 >> 0x38);
                auVar111._13_3_ = 0;
                auVar116._1_3_ = 0;
                auVar116[0] = (byte)((ulong)uVar149 >> 0x18);
                auVar116[4] = (char)((ulong)uVar149 >> 0x38);
                auVar116._5_3_ = 0;
                auVar116[8] = (char)((ulong)uVar159 >> 0x18);
                auVar116._9_3_ = 0;
                auVar116[0xc] = (char)((ulong)uVar159 >> 0x38);
                auVar116._13_3_ = 0;
                auVar21._1_3_ = 0;
                auVar21[0] = auVar3[3];
                auVar21[4] = auVar3[7];
                auVar21._5_3_ = 0;
                auVar21[8] = auVar3[0xb];
                auVar21._9_3_ = 0;
                auVar21[0xc] = auVar3[0xf];
                auVar21._13_3_ = 0;
                auVar26._1_3_ = 0;
                auVar26[0] = auVar4[3];
                auVar26[4] = auVar4[7];
                auVar26._5_3_ = 0;
                auVar26[8] = auVar4[0xb];
                auVar26._9_3_ = 0;
                auVar26[0xc] = auVar4[0xf];
                auVar26._13_3_ = 0;
                auVar114 = a64_TBL(ZEXT816(0),auVar111,auVar116,auVar21,auVar26,auVar114);
                uVar8 = CONCAT15(bVar169,CONCAT14((byte)uVar28 & 0xe0 |
                                                  (byte)(auVar4._4_4_ >> 3) & 0x1f,
                                                  (uint)(CONCAT11(bVar168,(byte)uVar27 & 0xe0 |
                                                                          (byte)(auVar4._0_4_ >> 3)
                                                                          & 0x1f) & 0x7ff))) &
                        0x7ffffffffff;
                uVar7 = CONCAT15(bVar69,CONCAT14((byte)uVar12 & 0xe0 | (byte)(uVar154 >> 3) & 0x1f,
                                                 (uint)(CONCAT11(bVar68,(byte)uVar11 & 0xe0 |
                                                                        (byte)((uint)uVar149 >> 3) &
                                                                        0x1f) & 0x7ff))) &
                        0x7ffffffffff;
                *pbVar47 = (byte)uVar17 & 0xe0 | (byte)((uint)uVar67 >> 3) & 0x1f;
                pbVar47[1] = (byte)((ulong)uVar67 >> 0x10) & 0xf8 | (byte)(uVar17 >> 8) & 7;
                pbVar47[2] = 0;
                pbVar47[3] = auVar114[0];
                pbVar47[4] = (byte)uVar18 & 0xe0 | (byte)(uVar65 >> 3) & 0x1f;
                pbVar47[5] = (byte)((ulong)uVar67 >> 0x30) & 0xf8 | (byte)(uVar18 >> 8) & 7;
                pbVar47[6] = 0;
                pbVar47[7] = auVar114[1];
                pbVar47[8] = (byte)uVar9 & 0xe0 | (byte)((uint)uVar6 >> 3) & 0x1f;
                pbVar47[9] = (byte)((ulong)uVar6 >> 0x10) & 0xf8 | (byte)(uVar9 >> 8) & 7;
                pbVar47[10] = 0;
                pbVar47[0xb] = auVar114[2];
                pbVar47[0xc] = (byte)uVar10 & 0xe0 | (byte)(uVar43 >> 3) & 0x1f;
                pbVar47[0xd] = (byte)((ulong)uVar6 >> 0x30) & 0xf8 | (byte)(uVar10 >> 8) & 7;
                pbVar47[0xe] = 0;
                pbVar47[0xf] = auVar114[3];
                pbVar47[0x10] = (byte)uVar7;
                pbVar47[0x11] = (byte)((ulong)uVar149 >> 0x10) & 0xf8 | bVar68 & 7;
                pbVar47[0x12] = 0;
                pbVar47[0x13] = auVar114[4];
                pbVar47[0x14] = (byte)(uVar7 >> 0x20);
                pbVar47[0x15] = (byte)((ulong)uVar149 >> 0x30) & 0xf8 | bVar69 & 7;
                pbVar47[0x16] = 0;
                pbVar47[0x17] = auVar114[5];
                pbVar47[0x18] = (byte)uVar19 & 0xe0 | (byte)((uint)uVar159 >> 3) & 0x1f;
                pbVar47[0x19] = (byte)((ulong)uVar159 >> 0x10) & 0xf8 | (byte)(uVar19 >> 8) & 7;
                pbVar47[0x1a] = 0;
                pbVar47[0x1b] = auVar114[6];
                pbVar47[0x1c] = (byte)uVar20 & 0xe0 | (byte)(uVar164 >> 3) & 0x1f;
                pbVar47[0x1d] = (byte)((ulong)uVar159 >> 0x30) & 0xf8 | (byte)(uVar20 >> 8) & 7;
                pbVar47[0x1e] = 0;
                pbVar47[0x1f] = auVar114[7];
                pbVar47[0x20] = (byte)uVar22 & 0xe0 | (byte)(auVar3._0_4_ >> 3) & 0x1f;
                pbVar47[0x21] = auVar3[2] & 0xf8 | (byte)(uVar22 >> 8) & 7;
                pbVar47[0x22] = 0;
                pbVar47[0x23] = auVar114[8];
                pbVar47[0x24] = (byte)uVar23 & 0xe0 | (byte)(auVar3._4_4_ >> 3) & 0x1f;
                pbVar47[0x25] = auVar3[6] & 0xf8 | (byte)(uVar23 >> 8) & 7;
                pbVar47[0x26] = 0;
                pbVar47[0x27] = auVar114[9];
                pbVar47[0x28] = (byte)uVar24 & 0xe0 | (byte)(auVar3._8_4_ >> 3) & 0x1f;
                pbVar47[0x29] = auVar3[10] & 0xf8 | (byte)(uVar24 >> 8) & 7;
                pbVar47[0x2a] = 0;
                pbVar47[0x2b] = auVar114[10];
                pbVar47[0x2c] = (byte)uVar25 & 0xe0 | (byte)(auVar3._12_4_ >> 3) & 0x1f;
                pbVar47[0x2d] = auVar3[0xe] & 0xf8 | (byte)(uVar25 >> 8) & 7;
                pbVar47[0x2e] = 0;
                pbVar47[0x2f] = auVar114[0xb];
                pbVar47[0x30] = (byte)uVar8;
                pbVar47[0x31] = auVar4[2] & 0xf8 | bVar168 & 7;
                pbVar47[0x32] = 0;
                pbVar47[0x33] = auVar114[0xc];
                pbVar47[0x34] = (byte)(uVar8 >> 0x20);
                pbVar47[0x35] = auVar4[6] & 0xf8 | bVar169 & 7;
                pbVar47[0x36] = 0;
                pbVar47[0x37] = auVar114[0xd];
                pbVar47[0x38] = (byte)uVar29 & 0xe0 | (byte)(auVar4._8_4_ >> 3) & 0x1f;
                pbVar47[0x39] = auVar4[10] & 0xf8 | (byte)(uVar29 >> 8) & 7;
                pbVar47[0x3a] = 0;
                pbVar47[0x3b] = auVar114[0xe];
                pbVar47[0x3c] = (byte)uVar30 & 0xe0 | (byte)(auVar4._12_4_ >> 3) & 0x1f;
                pbVar47[0x3d] = auVar4[0xe] & 0xf8 | (byte)(uVar30 >> 8) & 7;
                pbVar47[0x3e] = 0;
                pbVar47[0x3f] = auVar114[0xf];
                pbVar47 = pbVar47 + 0x40;
                uVar54 = uVar54 - 0x10;
                puVar56 = puVar56 + 0x10;
              } while (uVar54 != 0);
              if (uVar52 == uVar57) goto LAB_10814d158;
              if (((uint)param_4 >> 5 & 1) == 0) {
                param_3 = param_3 + uVar57 * 4;
                param_5 = param_5 + uVar57;
                uVar54 = param_4 >> 2 & 0xf;
                goto LAB_10814d120;
              }
            }
            Var45 = _UNK_10df02610;
            Var44 = _UNK_10df02600;
            uVar59 = uVar52 & 0x3ffffffffffffff8;
            pbVar47 = param_3 + uVar57 * 4;
            lVar58 = uVar57 - uVar59;
            pauVar60 = (undefined1 (*) [16])(param_5 + uVar57);
            do {
              auVar114 = *pauVar60;
              uVar6 = *(undefined8 *)((long)pauVar60[1] + 8);
              uVar67 = *(undefined8 *)pauVar60[1];
              uVar65 = (uint)uVar67;
              uVar43 = (uint)((ulong)uVar67 >> 0x20);
              uVar17 = (uint)uVar6;
              uVar18 = (uint)((ulong)uVar6 >> 0x20);
              uVar112 = CONCAT14((char)(uVar43 >> 3),(uint)((byte)(uVar65 >> 3) & 0x1f)) &
                        0x1fffffffff;
              uVar9 = auVar114._0_4_ >> 5;
              bVar68 = (byte)(uVar9 >> 8);
              uVar10 = auVar114._4_4_ >> 5;
              bVar69 = (byte)(uVar10 >> 8);
              uVar11 = auVar114._8_4_ >> 5;
              uVar12 = auVar114._12_4_ >> 5;
              bVar70 = (byte)((uVar65 >> 5) >> 8);
              bVar71 = (byte)((uVar43 >> 5) >> 8);
              bVar170 = (byte)((uVar17 >> 5) >> 8) & 7;
              bVar171 = (byte)((uVar18 >> 5) >> 8) & 7;
              bVar168 = (byte)(uVar11 >> 8) & 7;
              bVar169 = (byte)(uVar12 >> 8) & 7;
              auVar113._0_4_ = uVar65 >> 0x18;
              auVar113._4_4_ = uVar43 >> 0x18;
              auVar113._8_4_ = uVar17 >> 0x18;
              auVar113._12_4_ = uVar18 >> 0x18;
              auVar3[9] = 0xff;
              auVar3._0_9_ = Var45;
              auVar3[10] = 0xff;
              auVar3[0xb] = 0xff;
              auVar3[0xc] = 0xff;
              auVar3[0xd] = 0xff;
              auVar3[0xe] = 0xff;
              auVar3[0xf] = 0xff;
              auVar5._1_3_ = 0;
              auVar5[0] = auVar114[3];
              auVar5[4] = auVar114[7];
              auVar5._5_3_ = 0;
              auVar5[8] = auVar114[0xb];
              auVar5._9_3_ = 0;
              auVar5[0xc] = auVar114[0xf];
              auVar5._13_3_ = 0;
              auVar111 = a64_TBL(ZEXT816(0),auVar5,auVar113,auVar3);
              auVar4[9] = 0x24;
              auVar4._0_9_ = Var44;
              auVar4[10] = 0x28;
              auVar4[0xb] = 0x2c;
              auVar4[0xc] = 0x30;
              auVar4[0xd] = 0x34;
              auVar4[0xe] = 0x38;
              auVar4[0xf] = 0x3c;
              auVar13._6_2_ = 0;
              auVar13._0_6_ =
                   CONCAT15(bVar69,CONCAT14((byte)uVar10 & 0xe0 | (byte)(auVar114._4_4_ >> 3) & 0x1f
                                            ,(uint)(CONCAT11(bVar68,(byte)uVar9 & 0xe0 |
                                                                    (byte)(auVar114._0_4_ >> 3) &
                                                                    0x1f) & 0x7ff))) & 0x7ffffffffff
              ;
              auVar13[8] = (byte)uVar11 & 0xe0 | (byte)(auVar114._8_4_ >> 3) & 0x1f;
              auVar13[9] = bVar168;
              auVar13._10_2_ = 0;
              auVar13[0xc] = (byte)uVar12 & 0xe0 | (byte)(auVar114._12_4_ >> 3) & 0x1f;
              auVar13[0xd] = bVar169;
              auVar13._14_2_ = 0;
              auVar14[8] = (byte)(uVar17 >> 5) & 0xe0 | (byte)(uVar17 >> 3) & 0x1f;
              auVar14._0_8_ =
                   (ulong)(CONCAT15(bVar71,CONCAT14((byte)(uVar43 >> 5) & 0xe0 |
                                                    (byte)(uVar112 >> 0x20),
                                                    (uint)CONCAT11(bVar70,(byte)(uVar65 >> 5) & 0xe0
                                                                          | (byte)uVar112))) &
                          0xffffffff07ff) & 0xffff07ffffffffff;
              auVar14[9] = bVar170;
              auVar14._10_2_ = 0;
              auVar14[0xc] = (byte)(uVar18 >> 5) & 0xe0 | (byte)(uVar18 >> 3) & 0x1f;
              auVar14[0xd] = bVar171;
              auVar14._14_2_ = 0;
              auVar15._1_3_ = 0;
              auVar15[0] = auVar114[2] & 0xf8 | bVar68 & 7;
              auVar15[4] = auVar114[6] & 0xf8 | bVar69 & 7;
              auVar15._5_3_ = 0;
              auVar15[8] = auVar114[10] & 0xf8 | bVar168;
              auVar15._9_3_ = 0;
              auVar15[0xc] = auVar114[0xe] & 0xf8 | bVar169;
              auVar15._13_3_ = 0;
              auVar16._1_3_ = 0;
              auVar16[0] = (byte)((ulong)uVar67 >> 0x10) & 0xf8 | bVar70 & 7;
              auVar16[4] = (byte)((ulong)uVar67 >> 0x30) & 0xf8 | bVar71 & 7;
              auVar16._5_3_ = 0;
              auVar16[8] = (byte)((ulong)uVar6 >> 0x10) & 0xf8 | bVar170;
              auVar16._9_3_ = 0;
              auVar16[0xc] = (byte)((ulong)uVar6 >> 0x30) & 0xf8 | bVar171;
              auVar16._13_3_ = 0;
              auVar114 = a64_TBL(ZEXT816(0),auVar13,auVar14,auVar15,auVar16,auVar4);
              auVar116 = NEON_ext(auVar114,auVar114,8,1);
              *pbVar47 = auVar114[0];
              pbVar47[1] = auVar116[0];
              pbVar47[2] = 0;
              pbVar47[3] = auVar111[0];
              pbVar47[4] = auVar114[1];
              pbVar47[5] = auVar116[1];
              pbVar47[6] = 0;
              pbVar47[7] = auVar111[1];
              pbVar47[8] = auVar114[2];
              pbVar47[9] = auVar116[2];
              pbVar47[10] = 0;
              pbVar47[0xb] = auVar111[2];
              pbVar47[0xc] = auVar114[3];
              pbVar47[0xd] = auVar116[3];
              pbVar47[0xe] = 0;
              pbVar47[0xf] = auVar111[3];
              pbVar47[0x10] = auVar114[4];
              pbVar47[0x11] = auVar116[4];
              pbVar47[0x12] = 0;
              pbVar47[0x13] = auVar111[4];
              pbVar47[0x14] = auVar114[5];
              pbVar47[0x15] = auVar116[5];
              pbVar47[0x16] = 0;
              pbVar47[0x17] = auVar111[5];
              pbVar47[0x18] = auVar114[6];
              pbVar47[0x19] = auVar116[6];
              pbVar47[0x1a] = 0;
              pbVar47[0x1b] = auVar111[6];
              pbVar47[0x1c] = auVar114[7];
              pbVar47[0x1d] = auVar116[7];
              pbVar47[0x1e] = 0;
              pbVar47[0x1f] = auVar111[7];
              pbVar47 = pbVar47 + 0x20;
              lVar58 = lVar58 + 8;
              pauVar60 = pauVar60 + 2;
            } while (lVar58 != 0);
            uVar54 = param_4 >> 2 & 7;
            param_3 = param_3 + uVar59 * 4;
            param_5 = param_5 + uVar59;
            if (uVar52 == uVar59) goto LAB_10814d158;
          }
LAB_10814d120:
          do {
            uVar65 = *param_5;
            *param_3 = (byte)(uVar65 >> 5) & 0xe0 | (byte)(uVar65 >> 3) & 0x1f;
            param_3[1] = (byte)(uVar65 >> 0x10) & 0xf8 | (byte)((uVar65 >> 5) >> 8) & 7;
            param_3[2] = 0;
            param_3[3] = (byte)(uVar65 >> 0x18);
            uVar54 = uVar54 - 1;
            param_3 = param_3 + 4;
            param_5 = param_5 + 1;
          } while (uVar54 != 0);
        }
LAB_10814d158:
        pcVar49 = (code *)0x108150750;
        if (param_7 != 1) {
          pcVar49 = (code *)0x0;
        }
        pcVar55 = FUN_1081504ec;
        goto LAB_10814d170;
      }
      if (iVar48 != -0x7ffff778) {
        if (iVar48 != -0x7eff7778) goto LAB_10814d1ec;
        goto LAB_10814cf70;
      }
      if (param_6 <= param_4) {
        param_4 = param_6;
      }
      if (param_4 == 0) goto LAB_10814d1d8;
      _memmove(param_3,param_5,param_4);
      if (param_4 == 0x400) {
        pcVar49 = (code *)0x1081507a4;
        if (param_7 != 1) {
          pcVar49 = (code *)0x0;
        }
        pcVar51 = (code *)0x10815058c;
        goto LAB_10814d1cc;
      }
LAB_10814d1e0:
      pcVar51 = (code *)0x0;
      goto LAB_10814d1ec;
    }
    if (iVar48 < -0x7dff7778) {
      if (iVar48 != -0x7eff4445) {
        iVar53 = -0x7efbfff8;
        goto LAB_10814ceb4;
      }
LAB_10814cf24:
      if (param_6 <= param_4) {
        param_4 = param_6;
      }
      if (param_4 == 0) goto LAB_10814d1d8;
      _memmove(param_3,param_5,param_4);
      if (param_4 != 0x400) goto LAB_10814d1e0;
      pcVar49 = (code *)0x1081509b8;
      if (param_7 != 1) {
        pcVar49 = (code *)0x0;
      }
      pcVar51 = (code *)0x1081506d4;
    }
    else {
      if (iVar48 != -0x7dff7778) {
        if (iVar48 != -0x7dff4445) goto LAB_10814d1ec;
        goto LAB_10814cf24;
      }
LAB_10814cf70:
      if (param_6 <= param_4) {
        param_4 = param_6;
      }
      if (param_4 == 0) goto LAB_10814d1d8;
      _memmove(param_3,param_5,param_4);
      if (param_4 != 0x400) goto LAB_10814d1e0;
      pcVar49 = (code *)0x1081508ec;
      if (param_7 != 1) {
        pcVar49 = (code *)0x0;
      }
      pcVar51 = (code *)0x108150648;
    }
LAB_10814d1cc:
    if (param_7 != 0) {
      pcVar51 = pcVar49;
    }
  }
  else {
    if (-0x5ffff779 < iVar48) {
      if (iVar48 < -0x5dff7778) {
        if (iVar48 == -0x5ffff778) {
          if (param_6 <= param_4) {
            param_4 = param_6;
          }
          uVar52 = param_4 >> 2;
          if (3 < param_4) {
            uVar54 = uVar52;
            if ((0x1f < param_4) &&
               (((byte *)((long)param_5 + (param_4 & 0xfffffffffffffffc)) <= param_3 ||
                (param_3 + (param_4 & 0xfffffffffffffffc) <= param_5)))) {
              if (param_4 < 0x80) {
                uVar57 = 0;
              }
              else {
                uVar57 = uVar52 & 0x3fffffffffffffe0;
                pbVar47 = param_3 + 0x40;
                puVar56 = param_5 + 0x10;
                uVar54 = uVar57;
                do {
                  uVar65 = puVar56[-0x10];
                  bVar68 = *(byte *)((long)puVar56 + -0x3f);
                  bVar87 = *(byte *)((long)puVar56 + -0x3d);
                  uVar43 = puVar56[-0xf];
                  bVar69 = *(byte *)((long)puVar56 + -0x3b);
                  bVar90 = *(byte *)((long)puVar56 + -0x3a);
                  bVar89 = *(byte *)((long)puVar56 + -0x39);
                  uVar17 = puVar56[-0xe];
                  bVar168 = *(byte *)((long)puVar56 + -0x37);
                  bVar92 = *(byte *)((long)puVar56 + -0x36);
                  bVar91 = *(byte *)((long)puVar56 + -0x35);
                  uVar18 = puVar56[-0xd];
                  bVar169 = *(byte *)((long)puVar56 + -0x33);
                  bVar94 = *(byte *)((long)puVar56 + -0x32);
                  bVar93 = *(byte *)((long)puVar56 + -0x31);
                  uVar9 = puVar56[-0xc];
                  bVar70 = *(byte *)((long)puVar56 + -0x2f);
                  bVar96 = *(byte *)((long)puVar56 + -0x2e);
                  bVar95 = *(byte *)((long)puVar56 + -0x2d);
                  uVar10 = puVar56[-0xb];
                  bVar71 = *(byte *)((long)puVar56 + -0x2b);
                  bVar98 = *(byte *)((long)puVar56 + -0x2a);
                  bVar97 = *(byte *)((long)puVar56 + -0x29);
                  uVar11 = puVar56[-10];
                  bVar170 = *(byte *)((long)puVar56 + -0x27);
                  bVar100 = *(byte *)((long)puVar56 + -0x26);
                  bVar99 = *(byte *)((long)puVar56 + -0x25);
                  uVar12 = puVar56[-9];
                  bVar171 = *(byte *)((long)puVar56 + -0x23);
                  bVar102 = *(byte *)((long)puVar56 + -0x22);
                  bVar101 = *(byte *)((long)puVar56 + -0x21);
                  uVar19 = puVar56[-8];
                  bVar72 = *(byte *)((long)puVar56 + -0x1f);
                  bVar79 = *(byte *)((long)puVar56 + -0x1e);
                  bVar103 = *(byte *)((long)puVar56 + -0x1d);
                  uVar20 = puVar56[-7];
                  bVar73 = *(byte *)((long)puVar56 + -0x1b);
                  bVar80 = *(byte *)((long)puVar56 + -0x1a);
                  bVar104 = *(byte *)((long)puVar56 + -0x19);
                  uVar22 = puVar56[-6];
                  bVar74 = *(byte *)((long)puVar56 + -0x17);
                  bVar81 = *(byte *)((long)puVar56 + -0x16);
                  bVar105 = *(byte *)((long)puVar56 + -0x15);
                  uVar23 = puVar56[-5];
                  bVar75 = *(byte *)((long)puVar56 + -0x13);
                  bVar82 = *(byte *)((long)puVar56 + -0x12);
                  bVar106 = *(byte *)((long)puVar56 + -0x11);
                  uVar24 = puVar56[-4];
                  bVar76 = *(byte *)((long)puVar56 + -0xf);
                  bVar83 = *(byte *)((long)puVar56 + -0xe);
                  bVar107 = *(byte *)((long)puVar56 + -0xd);
                  uVar25 = puVar56[-3];
                  bVar77 = *(byte *)((long)puVar56 + -0xb);
                  bVar84 = *(byte *)((long)puVar56 + -10);
                  bVar108 = *(byte *)((long)puVar56 + -9);
                  uVar27 = puVar56[-2];
                  bVar78 = *(byte *)((long)puVar56 + -7);
                  bVar85 = *(byte *)((long)puVar56 + -6);
                  bVar109 = *(byte *)((long)puVar56 + -5);
                  uVar28 = puVar56[-1];
                  bVar88 = *(byte *)((long)puVar56 + -3);
                  bVar86 = *(byte *)((long)puVar56 + -2);
                  bVar110 = *(byte *)((long)puVar56 + -1);
                  uVar29 = *puVar56;
                  bVar115 = *(byte *)((long)puVar56 + 1);
                  bVar132 = *(byte *)((long)puVar56 + 2);
                  bVar148 = *(byte *)((long)puVar56 + 3);
                  uVar30 = puVar56[1];
                  bVar117 = *(byte *)((long)puVar56 + 5);
                  bVar133 = *(byte *)((long)puVar56 + 6);
                  bVar150 = *(byte *)((long)puVar56 + 7);
                  uVar154 = puVar56[2];
                  bVar118 = *(byte *)((long)puVar56 + 9);
                  bVar134 = *(byte *)((long)puVar56 + 10);
                  bVar151 = *(byte *)((long)puVar56 + 0xb);
                  uVar164 = puVar56[3];
                  bVar119 = *(byte *)((long)puVar56 + 0xd);
                  bVar135 = *(byte *)((long)puVar56 + 0xe);
                  bVar152 = *(byte *)((long)puVar56 + 0xf);
                  uVar31 = puVar56[4];
                  bVar120 = *(byte *)((long)puVar56 + 0x11);
                  bVar136 = *(byte *)((long)puVar56 + 0x12);
                  bVar153 = *(byte *)((long)puVar56 + 0x13);
                  uVar32 = puVar56[5];
                  bVar121 = *(byte *)((long)puVar56 + 0x15);
                  bVar137 = *(byte *)((long)puVar56 + 0x16);
                  bVar155 = *(byte *)((long)puVar56 + 0x17);
                  uVar33 = puVar56[6];
                  bVar122 = *(byte *)((long)puVar56 + 0x19);
                  bVar138 = *(byte *)((long)puVar56 + 0x1a);
                  bVar156 = *(byte *)((long)puVar56 + 0x1b);
                  uVar34 = puVar56[7];
                  bVar123 = *(byte *)((long)puVar56 + 0x1d);
                  bVar139 = *(byte *)((long)puVar56 + 0x1e);
                  bVar157 = *(byte *)((long)puVar56 + 0x1f);
                  uVar35 = puVar56[8];
                  bVar124 = *(byte *)((long)puVar56 + 0x21);
                  bVar140 = *(byte *)((long)puVar56 + 0x22);
                  bVar158 = *(byte *)((long)puVar56 + 0x23);
                  uVar36 = puVar56[9];
                  bVar125 = *(byte *)((long)puVar56 + 0x25);
                  bVar141 = *(byte *)((long)puVar56 + 0x26);
                  bVar160 = *(byte *)((long)puVar56 + 0x27);
                  uVar37 = puVar56[10];
                  bVar126 = *(byte *)((long)puVar56 + 0x29);
                  bVar142 = *(byte *)((long)puVar56 + 0x2a);
                  bVar161 = *(byte *)((long)puVar56 + 0x2b);
                  uVar38 = puVar56[0xb];
                  bVar127 = *(byte *)((long)puVar56 + 0x2d);
                  bVar143 = *(byte *)((long)puVar56 + 0x2e);
                  bVar162 = *(byte *)((long)puVar56 + 0x2f);
                  uVar39 = puVar56[0xc];
                  bVar128 = *(byte *)((long)puVar56 + 0x31);
                  bVar144 = *(byte *)((long)puVar56 + 0x32);
                  bVar163 = *(byte *)((long)puVar56 + 0x33);
                  uVar40 = puVar56[0xd];
                  bVar129 = *(byte *)((long)puVar56 + 0x35);
                  bVar145 = *(byte *)((long)puVar56 + 0x36);
                  bVar165 = *(byte *)((long)puVar56 + 0x37);
                  uVar41 = puVar56[0xe];
                  bVar130 = *(byte *)((long)puVar56 + 0x39);
                  bVar146 = *(byte *)((long)puVar56 + 0x3a);
                  bVar166 = *(byte *)((long)puVar56 + 0x3b);
                  uVar42 = puVar56[0xf];
                  bVar131 = *(byte *)((long)puVar56 + 0x3d);
                  bVar147 = *(byte *)((long)puVar56 + 0x3e);
                  bVar167 = *(byte *)((long)puVar56 + 0x3f);
                  pbVar47[-0x40] = *(byte *)((long)puVar56 + -0x3e);
                  pbVar47[-0x3f] = bVar68;
                  pbVar47[-0x3e] = (byte)uVar65;
                  pbVar47[-0x3d] = bVar87;
                  pbVar47[-0x3c] = bVar90;
                  pbVar47[-0x3b] = bVar69;
                  pbVar47[-0x3a] = (byte)uVar43;
                  pbVar47[-0x39] = bVar89;
                  pbVar47[-0x38] = bVar92;
                  pbVar47[-0x37] = bVar168;
                  pbVar47[-0x36] = (byte)uVar17;
                  pbVar47[-0x35] = bVar91;
                  pbVar47[-0x34] = bVar94;
                  pbVar47[-0x33] = bVar169;
                  pbVar47[-0x32] = (byte)uVar18;
                  pbVar47[-0x31] = bVar93;
                  pbVar47[-0x30] = bVar96;
                  pbVar47[-0x2f] = bVar70;
                  pbVar47[-0x2e] = (byte)uVar9;
                  pbVar47[-0x2d] = bVar95;
                  pbVar47[-0x2c] = bVar98;
                  pbVar47[-0x2b] = bVar71;
                  pbVar47[-0x2a] = (byte)uVar10;
                  pbVar47[-0x29] = bVar97;
                  pbVar47[-0x28] = bVar100;
                  pbVar47[-0x27] = bVar170;
                  pbVar47[-0x26] = (byte)uVar11;
                  pbVar47[-0x25] = bVar99;
                  pbVar47[-0x24] = bVar102;
                  pbVar47[-0x23] = bVar171;
                  pbVar47[-0x22] = (byte)uVar12;
                  pbVar47[-0x21] = bVar101;
                  pbVar47[-0x20] = bVar79;
                  pbVar47[-0x1f] = bVar72;
                  pbVar47[-0x1e] = (byte)uVar19;
                  pbVar47[-0x1d] = bVar103;
                  pbVar47[-0x1c] = bVar80;
                  pbVar47[-0x1b] = bVar73;
                  pbVar47[-0x1a] = (byte)uVar20;
                  pbVar47[-0x19] = bVar104;
                  pbVar47[-0x18] = bVar81;
                  pbVar47[-0x17] = bVar74;
                  pbVar47[-0x16] = (byte)uVar22;
                  pbVar47[-0x15] = bVar105;
                  pbVar47[-0x14] = bVar82;
                  pbVar47[-0x13] = bVar75;
                  pbVar47[-0x12] = (byte)uVar23;
                  pbVar47[-0x11] = bVar106;
                  pbVar47[-0x10] = bVar83;
                  pbVar47[-0xf] = bVar76;
                  pbVar47[-0xe] = (byte)uVar24;
                  pbVar47[-0xd] = bVar107;
                  pbVar47[-0xc] = bVar84;
                  pbVar47[-0xb] = bVar77;
                  pbVar47[-10] = (byte)uVar25;
                  pbVar47[-9] = bVar108;
                  pbVar47[-8] = bVar85;
                  pbVar47[-7] = bVar78;
                  pbVar47[-6] = (byte)uVar27;
                  pbVar47[-5] = bVar109;
                  pbVar47[-4] = bVar86;
                  pbVar47[-3] = bVar88;
                  pbVar47[-2] = (byte)uVar28;
                  pbVar47[-1] = bVar110;
                  *pbVar47 = bVar132;
                  pbVar47[1] = bVar115;
                  pbVar47[2] = (byte)uVar29;
                  pbVar47[3] = bVar148;
                  pbVar47[4] = bVar133;
                  pbVar47[5] = bVar117;
                  pbVar47[6] = (byte)uVar30;
                  pbVar47[7] = bVar150;
                  pbVar47[8] = bVar134;
                  pbVar47[9] = bVar118;
                  pbVar47[10] = (byte)uVar154;
                  pbVar47[0xb] = bVar151;
                  pbVar47[0xc] = bVar135;
                  pbVar47[0xd] = bVar119;
                  pbVar47[0xe] = (byte)uVar164;
                  pbVar47[0xf] = bVar152;
                  pbVar47[0x10] = bVar136;
                  pbVar47[0x11] = bVar120;
                  pbVar47[0x12] = (byte)uVar31;
                  pbVar47[0x13] = bVar153;
                  pbVar47[0x14] = bVar137;
                  pbVar47[0x15] = bVar121;
                  pbVar47[0x16] = (byte)uVar32;
                  pbVar47[0x17] = bVar155;
                  pbVar47[0x18] = bVar138;
                  pbVar47[0x19] = bVar122;
                  pbVar47[0x1a] = (byte)uVar33;
                  pbVar47[0x1b] = bVar156;
                  pbVar47[0x1c] = bVar139;
                  pbVar47[0x1d] = bVar123;
                  pbVar47[0x1e] = (byte)uVar34;
                  pbVar47[0x1f] = bVar157;
                  pbVar47[0x20] = bVar140;
                  pbVar47[0x21] = bVar124;
                  pbVar47[0x22] = (byte)uVar35;
                  pbVar47[0x23] = bVar158;
                  pbVar47[0x24] = bVar141;
                  pbVar47[0x25] = bVar125;
                  pbVar47[0x26] = (byte)uVar36;
                  pbVar47[0x27] = bVar160;
                  pbVar47[0x28] = bVar142;
                  pbVar47[0x29] = bVar126;
                  pbVar47[0x2a] = (byte)uVar37;
                  pbVar47[0x2b] = bVar161;
                  pbVar47[0x2c] = bVar143;
                  pbVar47[0x2d] = bVar127;
                  pbVar47[0x2e] = (byte)uVar38;
                  pbVar47[0x2f] = bVar162;
                  pbVar47[0x30] = bVar144;
                  pbVar47[0x31] = bVar128;
                  pbVar47[0x32] = (byte)uVar39;
                  pbVar47[0x33] = bVar163;
                  pbVar47[0x34] = bVar145;
                  pbVar47[0x35] = bVar129;
                  pbVar47[0x36] = (byte)uVar40;
                  pbVar47[0x37] = bVar165;
                  pbVar47[0x38] = bVar146;
                  pbVar47[0x39] = bVar130;
                  pbVar47[0x3a] = (byte)uVar41;
                  pbVar47[0x3b] = bVar166;
                  pbVar47[0x3c] = bVar147;
                  pbVar47[0x3d] = bVar131;
                  pbVar47[0x3e] = (byte)uVar42;
                  pbVar47[0x3f] = bVar167;
                  puVar56 = puVar56 + 0x20;
                  pbVar47 = pbVar47 + 0x80;
                  uVar54 = uVar54 - 0x20;
                } while (uVar54 != 0);
                if (uVar52 == uVar57) goto LAB_10814d0c0;
                if ((param_4 & 0x60) == 0) {
                  param_3 = param_3 + uVar57 * 4;
                  param_5 = param_5 + uVar57;
                  uVar54 = param_4 >> 2 & 0x1f;
                  goto LAB_10814d0a0;
                }
              }
              uVar59 = uVar52 & 0x3ffffffffffffff8;
              puVar56 = param_5 + uVar57;
              pbVar47 = param_3 + uVar57 * 4;
              lVar58 = uVar57 - uVar59;
              do {
                uVar65 = *puVar56;
                bVar68 = *(byte *)((long)puVar56 + 1);
                pbVar46 = (byte *)((long)puVar56 + 2);
                bVar88 = *(byte *)((long)puVar56 + 3);
                uVar43 = puVar56[1];
                bVar69 = *(byte *)((long)puVar56 + 5);
                bVar72 = *(byte *)((long)puVar56 + 6);
                bVar90 = *(byte *)((long)puVar56 + 7);
                uVar17 = puVar56[2];
                bVar168 = *(byte *)((long)puVar56 + 9);
                bVar73 = *(byte *)((long)puVar56 + 10);
                bVar92 = *(byte *)((long)puVar56 + 0xb);
                uVar18 = puVar56[3];
                bVar169 = *(byte *)((long)puVar56 + 0xd);
                bVar74 = *(byte *)((long)puVar56 + 0xe);
                bVar94 = *(byte *)((long)puVar56 + 0xf);
                uVar9 = puVar56[4];
                bVar70 = *(byte *)((long)puVar56 + 0x11);
                bVar75 = *(byte *)((long)puVar56 + 0x12);
                bVar96 = *(byte *)((long)puVar56 + 0x13);
                uVar10 = puVar56[5];
                bVar71 = *(byte *)((long)puVar56 + 0x15);
                bVar76 = *(byte *)((long)puVar56 + 0x16);
                bVar98 = *(byte *)((long)puVar56 + 0x17);
                uVar11 = puVar56[6];
                bVar170 = *(byte *)((long)puVar56 + 0x19);
                bVar77 = *(byte *)((long)puVar56 + 0x1a);
                bVar100 = *(byte *)((long)puVar56 + 0x1b);
                uVar12 = puVar56[7];
                bVar171 = *(byte *)((long)puVar56 + 0x1d);
                bVar78 = *(byte *)((long)puVar56 + 0x1e);
                bVar102 = *(byte *)((long)puVar56 + 0x1f);
                puVar56 = puVar56 + 8;
                *pbVar47 = *pbVar46;
                pbVar47[1] = bVar68;
                pbVar47[2] = (byte)uVar65;
                pbVar47[3] = bVar88;
                pbVar47[4] = bVar72;
                pbVar47[5] = bVar69;
                pbVar47[6] = (byte)uVar43;
                pbVar47[7] = bVar90;
                pbVar47[8] = bVar73;
                pbVar47[9] = bVar168;
                pbVar47[10] = (byte)uVar17;
                pbVar47[0xb] = bVar92;
                pbVar47[0xc] = bVar74;
                pbVar47[0xd] = bVar169;
                pbVar47[0xe] = (byte)uVar18;
                pbVar47[0xf] = bVar94;
                pbVar47[0x10] = bVar75;
                pbVar47[0x11] = bVar70;
                pbVar47[0x12] = (byte)uVar9;
                pbVar47[0x13] = bVar96;
                pbVar47[0x14] = bVar76;
                pbVar47[0x15] = bVar71;
                pbVar47[0x16] = (byte)uVar10;
                pbVar47[0x17] = bVar98;
                pbVar47[0x18] = bVar77;
                pbVar47[0x19] = bVar170;
                pbVar47[0x1a] = (byte)uVar11;
                pbVar47[0x1b] = bVar100;
                pbVar47[0x1c] = bVar78;
                pbVar47[0x1d] = bVar171;
                pbVar47[0x1e] = (byte)uVar12;
                pbVar47[0x1f] = bVar102;
                pbVar47 = pbVar47 + 0x20;
                lVar58 = lVar58 + 8;
              } while (lVar58 != 0);
              uVar54 = param_4 >> 2 & 7;
              param_3 = param_3 + uVar59 * 4;
              param_5 = param_5 + uVar59;
              if (uVar52 == uVar59) goto LAB_10814d0c0;
            }
LAB_10814d0a0:
            do {
              uVar65 = *param_5;
              uVar61 = (undefined1)(uVar65 >> 8);
              uVar64 = CONCAT12(uVar61,(short)uVar65) & 0xff00ff;
              uVar62 = (undefined1)(uVar65 >> 0x10);
              uVar63 = (undefined1)(uVar65 >> 0x18);
              uVar66 = CONCAT16(uVar63,(uint6)CONCAT14(uVar62,(uint)uVar64));
              uVar67 = NEON_rev32(CONCAT17(uVar63,CONCAT16(uVar63,CONCAT15(uVar62,(int5)CONCAT34((
                                                  int3)((uint7)uVar66 >> 0x20),
                                                  CONCAT13(uVar61,(int3)CONCAT52((int5)((uint7)
                                                  uVar66 >> 0x10),
                                                  CONCAT11((char)uVar65,(char)uVar64))))))),2);
              uVar67 = NEON_ext(uVar67,uVar67,6,1);
              *(uint *)param_3 =
                   CONCAT13((char)((ulong)uVar67 >> 0x30),
                            CONCAT12((char)((ulong)uVar67 >> 0x20),
                                     CONCAT11((char)((ulong)uVar67 >> 0x10),(char)uVar67)));
              uVar54 = uVar54 - 1;
              param_3 = param_3 + 4;
              param_5 = param_5 + 1;
            } while (uVar54 != 0);
          }
LAB_10814d0c0:
          pcVar49 = (code *)0x1081507a4;
          if (param_7 != 1) {
            pcVar49 = (code *)0x0;
          }
          pcVar55 = (code *)0x10815058c;
          goto LAB_10814d170;
        }
        iVar53 = -0x5eff7778;
LAB_10814cfd4:
        if (iVar48 != iVar53) goto LAB_10814d1ec;
      }
      else if (iVar48 != -0x5dff7778) {
        iVar53 = -0x5cff7778;
        goto LAB_10814cfd4;
      }
      if (param_6 <= param_4) {
        param_4 = param_6;
      }
      uVar52 = param_4 >> 2;
      if (3 < param_4) {
        uVar54 = uVar52;
        if ((0x1f < param_4) &&
           (((byte *)((long)param_5 + (param_4 & 0xfffffffffffffffc)) <= param_3 ||
            (param_3 + (param_4 & 0xfffffffffffffffc) <= param_5)))) {
          if (param_4 < 0x80) {
            uVar57 = 0;
          }
          else {
            uVar57 = uVar52 & 0x3fffffffffffffe0;
            pbVar47 = param_3 + 0x40;
            puVar56 = param_5 + 0x10;
            uVar54 = uVar57;
            do {
              uVar65 = puVar56[-0x10];
              bVar68 = *(byte *)((long)puVar56 + -0x3f);
              bVar87 = *(byte *)((long)puVar56 + -0x3d);
              uVar43 = puVar56[-0xf];
              bVar69 = *(byte *)((long)puVar56 + -0x3b);
              bVar90 = *(byte *)((long)puVar56 + -0x3a);
              bVar89 = *(byte *)((long)puVar56 + -0x39);
              uVar17 = puVar56[-0xe];
              bVar168 = *(byte *)((long)puVar56 + -0x37);
              bVar92 = *(byte *)((long)puVar56 + -0x36);
              bVar91 = *(byte *)((long)puVar56 + -0x35);
              uVar18 = puVar56[-0xd];
              bVar169 = *(byte *)((long)puVar56 + -0x33);
              bVar94 = *(byte *)((long)puVar56 + -0x32);
              bVar93 = *(byte *)((long)puVar56 + -0x31);
              uVar9 = puVar56[-0xc];
              bVar70 = *(byte *)((long)puVar56 + -0x2f);
              bVar96 = *(byte *)((long)puVar56 + -0x2e);
              bVar95 = *(byte *)((long)puVar56 + -0x2d);
              uVar10 = puVar56[-0xb];
              bVar71 = *(byte *)((long)puVar56 + -0x2b);
              bVar98 = *(byte *)((long)puVar56 + -0x2a);
              bVar97 = *(byte *)((long)puVar56 + -0x29);
              uVar11 = puVar56[-10];
              bVar170 = *(byte *)((long)puVar56 + -0x27);
              bVar100 = *(byte *)((long)puVar56 + -0x26);
              bVar99 = *(byte *)((long)puVar56 + -0x25);
              uVar12 = puVar56[-9];
              bVar171 = *(byte *)((long)puVar56 + -0x23);
              bVar102 = *(byte *)((long)puVar56 + -0x22);
              bVar101 = *(byte *)((long)puVar56 + -0x21);
              uVar19 = puVar56[-8];
              bVar72 = *(byte *)((long)puVar56 + -0x1f);
              bVar79 = *(byte *)((long)puVar56 + -0x1e);
              bVar103 = *(byte *)((long)puVar56 + -0x1d);
              uVar20 = puVar56[-7];
              bVar73 = *(byte *)((long)puVar56 + -0x1b);
              bVar80 = *(byte *)((long)puVar56 + -0x1a);
              bVar104 = *(byte *)((long)puVar56 + -0x19);
              uVar22 = puVar56[-6];
              bVar74 = *(byte *)((long)puVar56 + -0x17);
              bVar81 = *(byte *)((long)puVar56 + -0x16);
              bVar105 = *(byte *)((long)puVar56 + -0x15);
              uVar23 = puVar56[-5];
              bVar75 = *(byte *)((long)puVar56 + -0x13);
              bVar82 = *(byte *)((long)puVar56 + -0x12);
              bVar106 = *(byte *)((long)puVar56 + -0x11);
              uVar24 = puVar56[-4];
              bVar76 = *(byte *)((long)puVar56 + -0xf);
              bVar83 = *(byte *)((long)puVar56 + -0xe);
              bVar107 = *(byte *)((long)puVar56 + -0xd);
              uVar25 = puVar56[-3];
              bVar77 = *(byte *)((long)puVar56 + -0xb);
              bVar84 = *(byte *)((long)puVar56 + -10);
              bVar108 = *(byte *)((long)puVar56 + -9);
              uVar27 = puVar56[-2];
              bVar78 = *(byte *)((long)puVar56 + -7);
              bVar85 = *(byte *)((long)puVar56 + -6);
              bVar109 = *(byte *)((long)puVar56 + -5);
              uVar28 = puVar56[-1];
              bVar88 = *(byte *)((long)puVar56 + -3);
              bVar86 = *(byte *)((long)puVar56 + -2);
              bVar110 = *(byte *)((long)puVar56 + -1);
              uVar29 = *puVar56;
              bVar115 = *(byte *)((long)puVar56 + 1);
              bVar132 = *(byte *)((long)puVar56 + 2);
              bVar148 = *(byte *)((long)puVar56 + 3);
              uVar30 = puVar56[1];
              bVar117 = *(byte *)((long)puVar56 + 5);
              bVar133 = *(byte *)((long)puVar56 + 6);
              bVar150 = *(byte *)((long)puVar56 + 7);
              uVar154 = puVar56[2];
              bVar118 = *(byte *)((long)puVar56 + 9);
              bVar134 = *(byte *)((long)puVar56 + 10);
              bVar151 = *(byte *)((long)puVar56 + 0xb);
              uVar164 = puVar56[3];
              bVar119 = *(byte *)((long)puVar56 + 0xd);
              bVar135 = *(byte *)((long)puVar56 + 0xe);
              bVar152 = *(byte *)((long)puVar56 + 0xf);
              uVar31 = puVar56[4];
              bVar120 = *(byte *)((long)puVar56 + 0x11);
              bVar136 = *(byte *)((long)puVar56 + 0x12);
              bVar153 = *(byte *)((long)puVar56 + 0x13);
              uVar32 = puVar56[5];
              bVar121 = *(byte *)((long)puVar56 + 0x15);
              bVar137 = *(byte *)((long)puVar56 + 0x16);
              bVar155 = *(byte *)((long)puVar56 + 0x17);
              uVar33 = puVar56[6];
              bVar122 = *(byte *)((long)puVar56 + 0x19);
              bVar138 = *(byte *)((long)puVar56 + 0x1a);
              bVar156 = *(byte *)((long)puVar56 + 0x1b);
              uVar34 = puVar56[7];
              bVar123 = *(byte *)((long)puVar56 + 0x1d);
              bVar139 = *(byte *)((long)puVar56 + 0x1e);
              bVar157 = *(byte *)((long)puVar56 + 0x1f);
              uVar35 = puVar56[8];
              bVar124 = *(byte *)((long)puVar56 + 0x21);
              bVar140 = *(byte *)((long)puVar56 + 0x22);
              bVar158 = *(byte *)((long)puVar56 + 0x23);
              uVar36 = puVar56[9];
              bVar125 = *(byte *)((long)puVar56 + 0x25);
              bVar141 = *(byte *)((long)puVar56 + 0x26);
              bVar160 = *(byte *)((long)puVar56 + 0x27);
              uVar37 = puVar56[10];
              bVar126 = *(byte *)((long)puVar56 + 0x29);
              bVar142 = *(byte *)((long)puVar56 + 0x2a);
              bVar161 = *(byte *)((long)puVar56 + 0x2b);
              uVar38 = puVar56[0xb];
              bVar127 = *(byte *)((long)puVar56 + 0x2d);
              bVar143 = *(byte *)((long)puVar56 + 0x2e);
              bVar162 = *(byte *)((long)puVar56 + 0x2f);
              uVar39 = puVar56[0xc];
              bVar128 = *(byte *)((long)puVar56 + 0x31);
              bVar144 = *(byte *)((long)puVar56 + 0x32);
              bVar163 = *(byte *)((long)puVar56 + 0x33);
              uVar40 = puVar56[0xd];
              bVar129 = *(byte *)((long)puVar56 + 0x35);
              bVar145 = *(byte *)((long)puVar56 + 0x36);
              bVar165 = *(byte *)((long)puVar56 + 0x37);
              uVar41 = puVar56[0xe];
              bVar130 = *(byte *)((long)puVar56 + 0x39);
              bVar146 = *(byte *)((long)puVar56 + 0x3a);
              bVar166 = *(byte *)((long)puVar56 + 0x3b);
              uVar42 = puVar56[0xf];
              bVar131 = *(byte *)((long)puVar56 + 0x3d);
              bVar147 = *(byte *)((long)puVar56 + 0x3e);
              bVar167 = *(byte *)((long)puVar56 + 0x3f);
              pbVar47[-0x40] = *(byte *)((long)puVar56 + -0x3e);
              pbVar47[-0x3f] = bVar68;
              pbVar47[-0x3e] = (byte)uVar65;
              pbVar47[-0x3d] = bVar87;
              pbVar47[-0x3c] = bVar90;
              pbVar47[-0x3b] = bVar69;
              pbVar47[-0x3a] = (byte)uVar43;
              pbVar47[-0x39] = bVar89;
              pbVar47[-0x38] = bVar92;
              pbVar47[-0x37] = bVar168;
              pbVar47[-0x36] = (byte)uVar17;
              pbVar47[-0x35] = bVar91;
              pbVar47[-0x34] = bVar94;
              pbVar47[-0x33] = bVar169;
              pbVar47[-0x32] = (byte)uVar18;
              pbVar47[-0x31] = bVar93;
              pbVar47[-0x30] = bVar96;
              pbVar47[-0x2f] = bVar70;
              pbVar47[-0x2e] = (byte)uVar9;
              pbVar47[-0x2d] = bVar95;
              pbVar47[-0x2c] = bVar98;
              pbVar47[-0x2b] = bVar71;
              pbVar47[-0x2a] = (byte)uVar10;
              pbVar47[-0x29] = bVar97;
              pbVar47[-0x28] = bVar100;
              pbVar47[-0x27] = bVar170;
              pbVar47[-0x26] = (byte)uVar11;
              pbVar47[-0x25] = bVar99;
              pbVar47[-0x24] = bVar102;
              pbVar47[-0x23] = bVar171;
              pbVar47[-0x22] = (byte)uVar12;
              pbVar47[-0x21] = bVar101;
              pbVar47[-0x20] = bVar79;
              pbVar47[-0x1f] = bVar72;
              pbVar47[-0x1e] = (byte)uVar19;
              pbVar47[-0x1d] = bVar103;
              pbVar47[-0x1c] = bVar80;
              pbVar47[-0x1b] = bVar73;
              pbVar47[-0x1a] = (byte)uVar20;
              pbVar47[-0x19] = bVar104;
              pbVar47[-0x18] = bVar81;
              pbVar47[-0x17] = bVar74;
              pbVar47[-0x16] = (byte)uVar22;
              pbVar47[-0x15] = bVar105;
              pbVar47[-0x14] = bVar82;
              pbVar47[-0x13] = bVar75;
              pbVar47[-0x12] = (byte)uVar23;
              pbVar47[-0x11] = bVar106;
              pbVar47[-0x10] = bVar83;
              pbVar47[-0xf] = bVar76;
              pbVar47[-0xe] = (byte)uVar24;
              pbVar47[-0xd] = bVar107;
              pbVar47[-0xc] = bVar84;
              pbVar47[-0xb] = bVar77;
              pbVar47[-10] = (byte)uVar25;
              pbVar47[-9] = bVar108;
              pbVar47[-8] = bVar85;
              pbVar47[-7] = bVar78;
              pbVar47[-6] = (byte)uVar27;
              pbVar47[-5] = bVar109;
              pbVar47[-4] = bVar86;
              pbVar47[-3] = bVar88;
              pbVar47[-2] = (byte)uVar28;
              pbVar47[-1] = bVar110;
              *pbVar47 = bVar132;
              pbVar47[1] = bVar115;
              pbVar47[2] = (byte)uVar29;
              pbVar47[3] = bVar148;
              pbVar47[4] = bVar133;
              pbVar47[5] = bVar117;
              pbVar47[6] = (byte)uVar30;
              pbVar47[7] = bVar150;
              pbVar47[8] = bVar134;
              pbVar47[9] = bVar118;
              pbVar47[10] = (byte)uVar154;
              pbVar47[0xb] = bVar151;
              pbVar47[0xc] = bVar135;
              pbVar47[0xd] = bVar119;
              pbVar47[0xe] = (byte)uVar164;
              pbVar47[0xf] = bVar152;
              pbVar47[0x10] = bVar136;
              pbVar47[0x11] = bVar120;
              pbVar47[0x12] = (byte)uVar31;
              pbVar47[0x13] = bVar153;
              pbVar47[0x14] = bVar137;
              pbVar47[0x15] = bVar121;
              pbVar47[0x16] = (byte)uVar32;
              pbVar47[0x17] = bVar155;
              pbVar47[0x18] = bVar138;
              pbVar47[0x19] = bVar122;
              pbVar47[0x1a] = (byte)uVar33;
              pbVar47[0x1b] = bVar156;
              pbVar47[0x1c] = bVar139;
              pbVar47[0x1d] = bVar123;
              pbVar47[0x1e] = (byte)uVar34;
              pbVar47[0x1f] = bVar157;
              pbVar47[0x20] = bVar140;
              pbVar47[0x21] = bVar124;
              pbVar47[0x22] = (byte)uVar35;
              pbVar47[0x23] = bVar158;
              pbVar47[0x24] = bVar141;
              pbVar47[0x25] = bVar125;
              pbVar47[0x26] = (byte)uVar36;
              pbVar47[0x27] = bVar160;
              pbVar47[0x28] = bVar142;
              pbVar47[0x29] = bVar126;
              pbVar47[0x2a] = (byte)uVar37;
              pbVar47[0x2b] = bVar161;
              pbVar47[0x2c] = bVar143;
              pbVar47[0x2d] = bVar127;
              pbVar47[0x2e] = (byte)uVar38;
              pbVar47[0x2f] = bVar162;
              pbVar47[0x30] = bVar144;
              pbVar47[0x31] = bVar128;
              pbVar47[0x32] = (byte)uVar39;
              pbVar47[0x33] = bVar163;
              pbVar47[0x34] = bVar145;
              pbVar47[0x35] = bVar129;
              pbVar47[0x36] = (byte)uVar40;
              pbVar47[0x37] = bVar165;
              pbVar47[0x38] = bVar146;
              pbVar47[0x39] = bVar130;
              pbVar47[0x3a] = (byte)uVar41;
              pbVar47[0x3b] = bVar166;
              pbVar47[0x3c] = bVar147;
              pbVar47[0x3d] = bVar131;
              pbVar47[0x3e] = (byte)uVar42;
              pbVar47[0x3f] = bVar167;
              puVar56 = puVar56 + 0x20;
              pbVar47 = pbVar47 + 0x80;
              uVar54 = uVar54 - 0x20;
            } while (uVar54 != 0);
            if (uVar52 == uVar57) goto LAB_10814d040;
            if ((param_4 & 0x60) == 0) {
              param_3 = param_3 + uVar57 * 4;
              param_5 = param_5 + uVar57;
              uVar54 = param_4 >> 2 & 0x1f;
              goto LAB_10814d020;
            }
          }
          uVar59 = uVar52 & 0x3ffffffffffffff8;
          puVar56 = param_5 + uVar57;
          pbVar47 = param_3 + uVar57 * 4;
          lVar58 = uVar57 - uVar59;
          do {
            uVar65 = *puVar56;
            bVar68 = *(byte *)((long)puVar56 + 1);
            pbVar46 = (byte *)((long)puVar56 + 2);
            bVar88 = *(byte *)((long)puVar56 + 3);
            uVar43 = puVar56[1];
            bVar69 = *(byte *)((long)puVar56 + 5);
            bVar72 = *(byte *)((long)puVar56 + 6);
            bVar90 = *(byte *)((long)puVar56 + 7);
            uVar17 = puVar56[2];
            bVar168 = *(byte *)((long)puVar56 + 9);
            bVar73 = *(byte *)((long)puVar56 + 10);
            bVar92 = *(byte *)((long)puVar56 + 0xb);
            uVar18 = puVar56[3];
            bVar169 = *(byte *)((long)puVar56 + 0xd);
            bVar74 = *(byte *)((long)puVar56 + 0xe);
            bVar94 = *(byte *)((long)puVar56 + 0xf);
            uVar9 = puVar56[4];
            bVar70 = *(byte *)((long)puVar56 + 0x11);
            bVar75 = *(byte *)((long)puVar56 + 0x12);
            bVar96 = *(byte *)((long)puVar56 + 0x13);
            uVar10 = puVar56[5];
            bVar71 = *(byte *)((long)puVar56 + 0x15);
            bVar76 = *(byte *)((long)puVar56 + 0x16);
            bVar98 = *(byte *)((long)puVar56 + 0x17);
            uVar11 = puVar56[6];
            bVar170 = *(byte *)((long)puVar56 + 0x19);
            bVar77 = *(byte *)((long)puVar56 + 0x1a);
            bVar100 = *(byte *)((long)puVar56 + 0x1b);
            uVar12 = puVar56[7];
            bVar171 = *(byte *)((long)puVar56 + 0x1d);
            bVar78 = *(byte *)((long)puVar56 + 0x1e);
            bVar102 = *(byte *)((long)puVar56 + 0x1f);
            puVar56 = puVar56 + 8;
            *pbVar47 = *pbVar46;
            pbVar47[1] = bVar68;
            pbVar47[2] = (byte)uVar65;
            pbVar47[3] = bVar88;
            pbVar47[4] = bVar72;
            pbVar47[5] = bVar69;
            pbVar47[6] = (byte)uVar43;
            pbVar47[7] = bVar90;
            pbVar47[8] = bVar73;
            pbVar47[9] = bVar168;
            pbVar47[10] = (byte)uVar17;
            pbVar47[0xb] = bVar92;
            pbVar47[0xc] = bVar74;
            pbVar47[0xd] = bVar169;
            pbVar47[0xe] = (byte)uVar18;
            pbVar47[0xf] = bVar94;
            pbVar47[0x10] = bVar75;
            pbVar47[0x11] = bVar70;
            pbVar47[0x12] = (byte)uVar9;
            pbVar47[0x13] = bVar96;
            pbVar47[0x14] = bVar76;
            pbVar47[0x15] = bVar71;
            pbVar47[0x16] = (byte)uVar10;
            pbVar47[0x17] = bVar98;
            pbVar47[0x18] = bVar77;
            pbVar47[0x19] = bVar170;
            pbVar47[0x1a] = (byte)uVar11;
            pbVar47[0x1b] = bVar100;
            pbVar47[0x1c] = bVar78;
            pbVar47[0x1d] = bVar171;
            pbVar47[0x1e] = (byte)uVar12;
            pbVar47[0x1f] = bVar102;
            pbVar47 = pbVar47 + 0x20;
            lVar58 = lVar58 + 8;
          } while (lVar58 != 0);
          uVar54 = param_4 >> 2 & 7;
          param_3 = param_3 + uVar59 * 4;
          param_5 = param_5 + uVar59;
          if (uVar52 == uVar59) goto LAB_10814d040;
        }
LAB_10814d020:
        do {
          uVar65 = *param_5;
          uVar61 = (undefined1)(uVar65 >> 8);
          uVar64 = CONCAT12(uVar61,(short)uVar65) & 0xff00ff;
          uVar62 = (undefined1)(uVar65 >> 0x10);
          uVar63 = (undefined1)(uVar65 >> 0x18);
          uVar66 = CONCAT16(uVar63,(uint6)CONCAT14(uVar62,(uint)uVar64));
          uVar67 = NEON_rev32(CONCAT17(uVar63,CONCAT16(uVar63,CONCAT15(uVar62,(int5)CONCAT34((int3)(
                                                  (uint7)uVar66 >> 0x20),
                                                  CONCAT13(uVar61,(int3)CONCAT52((int5)((uint7)
                                                  uVar66 >> 0x10),
                                                  CONCAT11((char)uVar65,(char)uVar64))))))),2);
          uVar67 = NEON_ext(uVar67,uVar67,6,1);
          *(uint *)param_3 =
               CONCAT13((char)((ulong)uVar67 >> 0x30),
                        CONCAT12((char)((ulong)uVar67 >> 0x20),
                                 CONCAT11((char)((ulong)uVar67 >> 0x10),(char)uVar67)));
          uVar54 = uVar54 - 1;
          param_3 = param_3 + 4;
          param_5 = param_5 + 1;
        } while (uVar54 != 0);
      }
LAB_10814d040:
      pcVar49 = (code *)0x1081508ec;
      if (param_7 != 1) {
        pcVar49 = (code *)0x0;
      }
      pcVar55 = (code *)0x108150648;
LAB_10814d170:
      if (param_7 != 0) {
        pcVar55 = pcVar49;
      }
      pcVar51 = (code *)0x0;
      if (uVar52 == 0x100) {
        pcVar51 = pcVar55;
      }
      goto LAB_10814d1ec;
    }
    if (iVar48 != -0x7dfbfff8) {
      if (iVar48 == -0x7cff7778) goto LAB_10814cf70;
      iVar53 = -0x7cfbfff8;
LAB_10814ceb4:
      if (iVar48 != iVar53) goto LAB_10814d1ec;
    }
    if (param_6 <= param_4) {
      param_4 = param_6;
    }
    if (param_4 != 0) {
      _memmove(param_3,param_5,param_4);
      pcVar51 = FUN_1081504b8;
      if (param_4 != 0x400 || param_7 != 0) {
        pcVar51 = (code *)0x0;
      }
      goto LAB_10814d1ec;
    }
LAB_10814d1d8:
    pcVar51 = (code *)0x0;
  }
LAB_10814d1ec:
  *param_1 = pcVar51;
  param_1[1] = pcVar2;
  *(uint *)(param_1 + 2) = uVar1 >> 3;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  if (pcVar51 != (code *)0x0) {
    puVar50 = (undefined *)0x0;
  }
                    /* WARNING: Read-only address (ram,0x00010df02600) is written */
                    /* WARNING: Read-only address (ram,0x00010df02610) is written */
  return puVar50;
}



/* Entry: 10814d5cc; end: 10814d5ff;  */

ulong FUN_10814d5cc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,uint param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_6;
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_2 / uVar2;
  }
  if (param_5 <= uVar1) {
    uVar1 = param_5;
  }
  _bzero(param_1,uVar1 * uVar2);
  return uVar1;
}



/* Entry: 10814d600; end: 10814d61b;  */

ulong FUN_10814d600(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,uint param_6)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((ulong)param_6 != 0) {
    uVar1 = param_2 / param_6;
  }
  if (param_5 <= uVar1) {
    uVar1 = param_5;
  }
  return uVar1;
}



/* Entry: 10814d61c; end: 10814dcef;  */

/* WARNING: Type propagation algorithm not settling */

char * FUN_10814d61c(int *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  byte *pbVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    if (*param_1 == 0x75ae3d2) {
      return "#base: disabled by previous error";
    }
    return "#base: initialize not called";
  }
  if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if (1 < (uint)param_1[1]) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  param_1[1] = 0;
  iVar22 = param_1[0x816];
  if (iVar22 == 2) {
LAB_10814d748:
    do {
      pbVar19 = (byte *)0x0;
      pbVar23 = (byte *)0x0;
      lVar8 = *param_3;
      if (lVar8 != 0) {
        pbVar19 = (byte *)(lVar8 + param_3[3]);
        pbVar23 = (byte *)(lVar8 + param_3[2]);
      }
      uVar2 = param_1[0xc];
      uVar3 = param_1[0xd];
      uVar7 = (ulong)(uint)param_1[0xe];
      uVar24 = (ulong)(uint)param_1[0xf];
      uVar13 = param_1[0x10];
      uVar10 = param_1[0x11];
      uVar12 = param_1[0x12];
      uVar16 = (ulong)(uint)param_1[0x14];
      pbVar20 = pbVar19;
      do {
        uVar18 = (uint)uVar24;
        uVar6 = (uint)uVar7;
        uVar15 = (uint)uVar16;
        if (uVar12 < uVar13) {
          if ((ulong)((long)pbVar23 - (long)pbVar20) < 4) {
            if (pbVar23 == pbVar20) {
              pbVar21 = pbVar20;
              if ((char)param_3[5] != '\x01') {
                iVar22 = 2;
                param_1[0x14] = uVar15;
                param_1[0x15] = 2;
                param_1[0xe] = uVar6;
                param_1[0xf] = uVar18;
                param_1[0x10] = uVar13;
                param_1[0x11] = uVar10;
                param_1[0x12] = uVar12;
                lVar8 = *param_3;
                goto joined_r0x00010814dce8;
              }
              iVar22 = 3;
              goto LAB_10814da74;
            }
            pbVar21 = pbVar20 + 1;
            uVar10 = (uint)*pbVar20 << (ulong)(uVar12 & 0x1f) | uVar10;
            uVar25 = uVar12 + 8;
            if (uVar25 < uVar13) {
              if (pbVar23 != pbVar21) {
                uVar10 = (uint)pbVar20[1] << (ulong)(uVar25 & 0x1f) | uVar10;
                pbVar20 = pbVar20 + 2;
                uVar12 = uVar12 + 0x10;
                if (uVar13 <= uVar12) goto LAB_10814d870;
                iVar22 = 5;
                pbVar21 = pbVar20;
                goto LAB_10814da74;
              }
              if ((char)param_3[5] != '\x01') {
                iVar22 = 2;
                param_1[0x14] = uVar15;
                param_1[0x15] = 2;
                param_1[0xe] = uVar6;
                param_1[0xf] = uVar18;
                param_1[0x10] = uVar13;
                param_1[0x11] = uVar10;
                param_1[0x12] = uVar25;
                lVar8 = *param_3;
                goto joined_r0x00010814dce8;
              }
              iVar22 = 3;
              param_1[0x15] = 3;
              goto LAB_10814da78;
            }
            uVar1 = *(uint *)(&UNK_10df0263c + (ulong)uVar13 * 4) & uVar10;
            uVar10 = uVar10 >> (ulong)(uVar13 & 0x1f);
            uVar12 = uVar25 - uVar13;
            pbVar20 = pbVar21;
          }
          else {
            uVar10 = *(int *)pbVar20 << (ulong)(uVar12 & 0x1f) | uVar10;
            pbVar20 = pbVar20 + (0x1f - uVar12 >> 3);
            uVar1 = *(uint *)(&UNK_10df0263c + (ulong)uVar13 * 4) & uVar10;
            uVar10 = uVar10 >> (ulong)(uVar13 & 0x1f);
            uVar12 = (uVar12 | 0x18) - uVar13;
          }
          uVar26 = (ulong)uVar1;
          pbVar21 = pbVar20;
          if (uVar1 < uVar2) goto LAB_10814d888;
LAB_10814d8f4:
          uVar25 = (uint)uVar26;
          pbVar20 = pbVar21;
          if (uVar3 < uVar25) {
            if (uVar25 <= uVar6) {
              if (uVar25 != uVar6) {
                uVar18 = uVar25;
              }
              uVar16 = (ulong)uVar18;
              uVar4 = *(ushort *)((long)param_1 + uVar16 * 2 + 0xa060);
              uVar27 = (ulong)(uVar15 + (uVar4 & 0x1ff8)) & 0x1fff;
              *(undefined8 *)((long)param_1 + uVar27 + 0xc060) =
                   *(undefined8 *)(param_1 + uVar16 * 2 + 0x818);
              if (uVar4 < 8) {
                uVar5 = (undefined1)param_1[uVar16 * 2 + 0x818];
              }
              else {
                uVar18 = (uint)(uVar4 >> 3);
                do {
                  uVar16 = (ulong)*(ushort *)((long)param_1 + uVar16 * 2 + 0x58);
                  uVar27 = (ulong)((int)uVar27 + 0x1ff8) & 0x1fff;
                  *(undefined8 *)((long)param_1 + uVar27 + 0xc060) =
                       *(undefined8 *)(param_1 + uVar16 * 2 + 0x818);
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
                uVar5 = (undefined1)param_1[uVar16 * 2 + 0x818];
              }
              uVar16 = (ulong)(uVar15 + uVar4 + 1) & 0x1fff;
              if (uVar25 == uVar6) {
                *(undefined1 *)((long)param_1 + uVar16 + 0xc060) = uVar5;
                uVar16 = (ulong)(uVar15 + uVar4 + 2 & 0x1fff);
              }
              if (0xfff < uVar6) goto LAB_10814d7d4;
              uVar18 = *(ushort *)((long)param_1 + uVar24 * 2 + 0xa060) + 1;
              *(ushort *)((long)param_1 + uVar7 * 2 + 0xa060) = (ushort)uVar18 & 0xfff;
              uVar18 = uVar18 & 7;
              if (uVar18 == 0) {
                *(short *)((long)param_1 + uVar7 * 2 + 0x58) = (short)uVar24;
                *(undefined1 *)(param_1 + uVar7 * 2 + 0x818) = uVar5;
              }
              else {
                *(undefined2 *)((long)param_1 + uVar7 * 2 + 0x58) =
                     *(undefined2 *)((long)param_1 + uVar24 * 2 + 0x58);
                *(undefined8 *)(param_1 + uVar7 * 2 + 0x818) =
                     *(undefined8 *)(param_1 + uVar24 * 2 + 0x818);
                *(undefined1 *)((long)(param_1 + uVar7 * 2 + 0x818) + (ulong)uVar18) = uVar5;
              }
              goto LAB_10814d7b8;
            }
            iVar22 = 4;
            goto LAB_10814da74;
          }
          if (uVar25 == uVar3) {
            iVar22 = 0;
            param_1[0x15] = 0;
            uVar25 = uVar12;
            goto LAB_10814da78;
          }
          uVar13 = param_1[0xb] + 1;
          uVar7 = (ulong)uVar3;
          uVar24 = (ulong)uVar3;
        }
        else {
LAB_10814d870:
          uVar25 = *(uint *)(&UNK_10df0263c + (ulong)uVar13 * 4) & uVar10;
          uVar26 = (ulong)uVar25;
          uVar10 = uVar10 >> (ulong)(uVar13 & 0x1f);
          uVar12 = uVar12 - uVar13;
          pbVar21 = pbVar20;
          if (uVar2 <= uVar25) goto LAB_10814d8f4;
LAB_10814d888:
          uVar5 = (undefined1)uVar26;
          *(undefined1 *)((long)param_1 + uVar16 + 0xc060) = uVar5;
          uVar16 = (ulong)(uVar15 + 1 & 0x1fff);
          if (uVar6 < 0x1000) {
            uVar18 = *(ushort *)((long)param_1 + uVar24 * 2 + 0xa060) + 1;
            *(ushort *)((long)param_1 + uVar7 * 2 + 0xa060) = (ushort)uVar18 & 0xfff;
            uVar18 = uVar18 & 7;
            if (uVar18 == 0) {
              *(short *)((long)param_1 + uVar7 * 2 + 0x58) = (short)uVar24;
              *(undefined1 *)(param_1 + uVar7 * 2 + 0x818) = uVar5;
            }
            else {
              *(undefined2 *)((long)param_1 + uVar7 * 2 + 0x58) =
                   *(undefined2 *)((long)param_1 + uVar24 * 2 + 0x58);
              *(undefined8 *)(param_1 + uVar7 * 2 + 0x818) =
                   *(undefined8 *)(param_1 + uVar24 * 2 + 0x818);
              *(undefined1 *)((long)(param_1 + uVar7 * 2 + 0x818) + (ulong)uVar18) = uVar5;
            }
LAB_10814d7b8:
            uVar18 = uVar6 + 1 >> (ulong)(uVar13 & 0x1f) & 1;
            if (0xb < uVar13) {
              uVar18 = 0;
            }
            uVar13 = uVar18 + uVar13;
            uVar7 = (ulong)(uVar6 + 1);
            uVar24 = uVar26;
          }
        }
LAB_10814d7d4:
        uVar18 = (uint)uVar24;
        uVar6 = (uint)uVar7;
        uVar15 = (uint)uVar16;
      } while (uVar15 < 0x1000);
      iVar22 = 1;
      pbVar21 = pbVar20;
LAB_10814da74:
      param_1[0x15] = iVar22;
      uVar25 = uVar12;
LAB_10814da78:
      if (7 < uVar25) {
        uVar24 = (ulong)(uVar25 - 8 >> 3);
        uVar7 = 0;
        if (pbVar19 <= pbVar21) {
          uVar7 = (long)pbVar21 - (long)pbVar19;
        }
        if (uVar7 <= uVar24) {
          uVar24 = uVar7;
        }
        if (1 < uVar24) {
          uVar24 = uVar24 & 0x1ffffffe;
          uVar25 = uVar25 + (int)uVar24 * -8;
          pbVar21 = pbVar21 + -uVar24;
          do {
            uVar24 = uVar24 - 2;
          } while (uVar24 != 0);
        }
        do {
          uVar25 = uVar25 - 8;
          if (pbVar21 <= pbVar19) {
            iVar22 = 5;
            param_1[0x15] = 5;
            break;
          }
          pbVar21 = pbVar21 + -1;
        } while (7 < uVar25);
      }
      param_1[0xe] = uVar6;
      param_1[0xf] = uVar18;
      param_1[0x10] = uVar13;
      param_1[0x11] = uVar10;
      param_1[0x12] = uVar25;
      param_1[0x14] = uVar15;
      lVar8 = *param_3;
joined_r0x00010814dce8:
      if (lVar8 != 0) {
        param_3[3] = (long)pbVar21 - lVar8;
      }
      if (uVar15 != 0) {
LAB_10814daf8:
        lVar8 = 0;
        lVar11 = *param_2;
        lVar17 = 0;
        if (lVar11 != 0) {
          lVar8 = lVar11 + param_2[2];
          lVar17 = lVar8;
          if ((char)param_2[5] == '\0') {
            lVar17 = lVar11 + param_2[1];
          }
        }
        if ((uint)param_1[0x817] < 2) {
          uVar12 = param_1[0x14];
          if (uVar12 == 0) goto LAB_10814dbbc;
          uVar7 = (ulong)(uint)param_1[0x13];
          pcVar9 = "#lzw: internal error: inconsistent I/O";
          if ((uint)param_1[0x13] <= uVar12) {
            uVar24 = 0;
            if (uVar7 <= uVar12) {
              uVar24 = uVar12 - uVar7;
            }
            uVar26 = lVar17 - lVar8;
            uVar16 = uVar24;
            if (uVar26 <= uVar24) {
              uVar16 = uVar26;
            }
            if (uVar16 == 0) {
              if (uVar26 < uVar24) goto LAB_10814db98;
LAB_10814dc3c:
              iVar22 = 0;
              pcVar9 = (char *)0x0;
              param_1[0x13] = 0;
              param_1[0x14] = 0;
            }
            else {
              _memmove(lVar8,(long)param_1 + uVar7 + 0xc060,uVar16);
              lVar8 = lVar8 + uVar16;
              if (uVar24 <= uVar26) goto LAB_10814dc3c;
LAB_10814db98:
              param_1[0x13] = param_1[0x13] + (int)uVar16 & 0x1fff;
              pcVar9 = "$base: short write";
              iVar22 = 1;
            }
            goto LAB_10814dbc4;
          }
        }
        else {
LAB_10814dbbc:
          pcVar9 = (char *)0x0;
          iVar22 = 0;
LAB_10814dbc4:
          param_1[0x817] = iVar22;
          lVar11 = *param_2;
        }
        if (lVar11 != 0) {
          param_2[2] = lVar8 - lVar11;
        }
        if (pcVar9 != (char *)0x0) {
          iVar22 = 1;
          goto LAB_10814dc6c;
        }
        iVar22 = param_1[0x15];
      }
    } while (iVar22 == 1);
    if (iVar22 < 3) {
      if (iVar22 == 0) goto LAB_10814dc08;
      if (iVar22 == 2) {
        pcVar9 = "$base: short read";
        iVar22 = 2;
LAB_10814dc6c:
        if (*pcVar9 != '$') {
          iVar22 = 0;
        }
        param_1[0x816] = iVar22;
        param_1[1] = (uint)(*pcVar9 == '$');
      }
      else {
LAB_10814dc50:
        pcVar9 = "#lzw: internal error: inconsistent I/O";
      }
    }
    else if (iVar22 == 3) {
      pcVar9 = "#lzw: truncated input";
    }
    else {
      if (iVar22 != 4) goto LAB_10814dc50;
      pcVar9 = "#lzw: bad code";
    }
    if (*pcVar9 == '#') {
      *param_1 = 0x75ae3d2;
    }
  }
  else {
    if (iVar22 == 1) goto LAB_10814daf8;
    if (iVar22 == 0) {
      uVar12 = 8;
      param_1[0xb] = 8;
      if (param_1[10] != 0) {
        uVar12 = param_1[10] - 1;
        param_1[0xb] = uVar12;
      }
      uVar7 = 0;
      uVar13 = 1 << (ulong)(uVar12 & 0x1f);
      iVar22 = uVar13 + 1;
      param_1[0xc] = uVar13;
      param_1[0xd] = iVar22;
      param_1[0xe] = iVar22;
      param_1[0xf] = iVar22;
      param_1[0x10] = uVar12 + 1;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      piVar14 = param_1 + 0x818;
      do {
        *(undefined2 *)((long)param_1 + uVar7 * 2 + 0xa060) = 0;
        *(char *)piVar14 = (char)uVar7;
        uVar7 = uVar7 + 1;
        piVar14 = piVar14 + 2;
      } while (uVar13 != uVar7);
      goto LAB_10814d748;
    }
LAB_10814dc08:
    pcVar9 = (char *)0x0;
    param_1[0x816] = 0;
  }
  return pcVar9;
}



/* Entry: 10814dcf0; end: 10814dcfb;  */

undefined1  [16] FUN_10814dcf0(void)

{
  return ZEXT816(0);
}



/* Entry: 10814dcfc; end: 10814edcb;  */

/* WARNING: Removing unreachable block (ram,0x00010814ed5c) */
/* WARNING: Type propagation algorithm not settling */

int * FUN_10814dcfc(int *param_1,uint *param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  int *piVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  byte *pbVar22;
  uint uVar23;
  uint *puVar24;
  byte *pbVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  byte *pbVar29;
  int *piVar30;
  uint uVar31;
  byte bVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  ulong *puVar36;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  if (param_1 == (int *)0x0) {
    return (int *)&UNK_10df027b4;
  }
  if (*param_1 != 0x3ccb6c71) {
    if (*param_1 == 0x75ae3d2) {
      return (int *)&UNK_10df02831;
    }
    return (int *)&UNK_10df02884;
  }
  if ((param_2 == (uint *)0x0) || (param_3 == (long *)0x0)) {
    *param_1 = 0x75ae3d2;
    return (int *)&UNK_10df02787;
  }
  if ((param_1[1] & 0xfffffffbU) != 0) {
    *param_1 = 0x75ae3d2;
    return (int *)&UNK_10df028a1;
  }
  param_1[1] = 0;
  if (1 < (uint)param_1[0x39]) {
    param_1[0x39] = 0;
    param_1[1] = 0;
    return (int *)0x0;
  }
  piVar30 = (int *)0x0;
  puVar2 = (ulong *)(param_1 + 0x3f6e);
  iVar14 = param_1[0x3a];
  if (iVar14 < 2) {
    if (iVar14 == 0) {
      if (*(byte *)(param_1 + 0xc) == 0x40) {
LAB_10814de44:
        if ((*(char *)((long)param_1 + 0x45) == '\x01') &&
           ((param_1[0x20] == param_1[0x22] || (param_1[0x21] == param_1[0x23])))) {
          piVar30 = (int *)&UNK_10df029df;
          cVar12 = '#';
          goto LAB_10814ed08;
        }
        goto LAB_10814de88;
      }
      if (*(byte *)(param_1 + 0xc) < 0x40) goto LAB_10814dd84;
      piVar30 = (int *)&UNK_10df026fc;
    }
    else if (iVar14 == 1) {
LAB_10814dd84:
      piVar30 = param_1;
      FUN_10814ff88(param_1,0,param_3);
      if (piVar30 == (int *)0x0) goto LAB_10814de44;
      iVar14 = 1;
      goto LAB_10814ec74;
    }
LAB_10814ecd0:
    param_1[0x3a] = 0;
LAB_10814ecd4:
    if (piVar30 == (int *)0x0) {
      param_1[0x39] = 0;
      return (int *)0x0;
    }
    cVar12 = (char)*piVar30;
    if (cVar12 != '$') goto LAB_10814ed08;
LAB_10814ece4:
    param_1[0x39] = 1;
    iVar14 = 4;
    if ((char)*piVar30 != '$') {
      iVar14 = 0;
    }
    param_1[1] = iVar14;
  }
  else {
    if (iVar14 == 2) {
LAB_10814de88:
      lVar15 = *param_3;
      if (lVar15 == 0) {
        pbVar25 = (byte *)0x0;
        pbVar22 = (byte *)0x0;
      }
      else {
        pbVar22 = (byte *)(lVar15 + param_3[3]);
        pbVar25 = (byte *)(lVar15 + param_3[2]);
      }
      iVar14 = param_1[0x43];
      if (iVar14 == 0) {
        bVar32 = 0;
        uVar31 = 0;
        uVar33 = 0;
LAB_10814dee8:
        if (pbVar22 != pbVar25) {
          pbVar29 = pbVar22 + 1;
          bVar32 = *pbVar22;
          *(byte *)((long)param_1 + 0x4b) = (byte)((ulong)(long)(char)bVar32 >> 4) & 4;
          if ((char)bVar32 < '\0') {
            uVar33 = 0;
            uVar31 = 2 << (ulong)(bVar32 & 7);
            bVar32 = 1;
            goto LAB_10814e898;
          }
          if ((*(char *)((long)param_1 + 0x46) != '\x01') ||
             (*(char *)((long)param_1 + 0x4a) == '\x01')) {
            if ((char)param_1[0x17] == '\x01') {
              _memmove(param_1 + 0x546,param_1 + 0x446,0x400);
              bVar32 = 1;
              cVar12 = (char)param_1[0x17];
            }
            else {
              bVar32 = 0;
              cVar12 = (char)param_1[0x17];
            }
            goto joined_r0x00010814df64;
          }
          piVar30 = (int *)&UNK_10df02a37;
          goto LAB_10814ea60;
        }
        iVar13 = 1;
LAB_10814ea50:
        piVar30 = (int *)&UNK_10df0275f;
        pbVar29 = pbVar25;
LAB_10814ea54:
        param_1[0x43] = iVar13;
        *(byte *)(param_1 + 0x3f78) = bVar32;
        param_1[0x3f79] = uVar31;
        param_1[0x3f7a] = uVar33;
      }
      else {
        iVar13 = 0;
        piVar30 = (int *)0x0;
        bVar32 = *(byte *)(param_1 + 0x3f78);
        uVar31 = param_1[0x3f79];
        uVar33 = param_1[0x3f7a];
        pbVar29 = pbVar22;
        if (2 < iVar14) {
          if (iVar14 == 3) goto LAB_10814e7fc;
          if (iVar14 == 4) goto LAB_10814e9f4;
          goto LAB_10814ea54;
        }
        if (iVar14 == 1) goto LAB_10814dee8;
        if (iVar14 != 2) goto LAB_10814ea54;
        do {
          if ((long)pbVar25 - (long)pbVar29 < 3) {
            param_1[0x3f7c] = 0;
            param_1[0x3f7d] = 0;
            pbVar22 = pbVar29;
LAB_10814e7fc:
            if (pbVar22 == pbVar25) {
              iVar13 = 3;
              goto LAB_10814ea50;
            }
            uVar34 = *(ulong *)(param_1 + 0x3f7c);
            while( true ) {
              *(ulong *)(param_1 + 0x3f7c) = uVar34 & 0xffffffffffffff00;
              pbVar29 = pbVar22 + 1;
              uVar23 = (uint)uVar34 & 0xff;
              uVar34 = (ulong)*pbVar22 << ((ulong)(0x38 - uVar23) & 0x3f) |
                       uVar34 & 0xffffffffffffff00;
              *(ulong *)(param_1 + 0x3f7c) = uVar34;
              if (uVar23 == 0x10) break;
              uVar34 = uVar34 | uVar23 + 8;
              *(ulong *)(param_1 + 0x3f7c) = uVar34;
              pbVar22 = pbVar29;
              if (pbVar29 == pbVar25) {
                iVar13 = 3;
                goto LAB_10814ea50;
              }
            }
            uVar23 = (uint)(uVar34 >> 0x28);
            pbVar29 = pbVar22 + 1;
          }
          else {
            uVar23 = (uint)*pbVar29 << 0x10 | (uint)pbVar29[1] << 8 | (uint)pbVar29[2];
            pbVar29 = pbVar29 + 3;
          }
          puVar3 = (undefined *)((long)param_1 + (ulong)(uVar33 << 2) + 0x1518);
          *puVar3 = (char)uVar23;
          puVar3[1] = (char)(uVar23 >> 8);
          puVar3[2] = (char)(uVar23 >> 0x10);
          puVar3[3] = 0xff;
          uVar33 = uVar33 + 1;
LAB_10814e898:
        } while (uVar33 < uVar31);
        if (0xff < uVar33) {
          cVar12 = (char)param_1[0x17];
          goto joined_r0x00010814df64;
        }
        uVar34 = (ulong)uVar33;
        uVar16 = 0x101 - (ulong)(uVar33 + 1);
        if (((uVar16 < 8) || (uVar17 = 0x100 - (ulong)(uVar33 + 1), -uVar33 - 2 < (uint)uVar17)) ||
           (uVar17 >> 0x20 != 0)) {
LAB_10814e8c4:
          piVar30 = param_1 + uVar34 + 0x546;
          do {
            uVar34 = uVar34 + 1;
            *piVar30 = -0x1000000;
            piVar30 = piVar30 + 1;
          } while ((int)uVar34 != 0x100);
        }
        else if (uVar16 < 0x20) {
          uVar19 = 0;
LAB_10814eaec:
          uVar17 = uVar16 & 0xfffffffffffffff8;
          lVar15 = uVar19 - uVar17;
          piVar30 = param_1 + uVar19 + uVar34 + 0x546;
          do {
            piVar30[2] = -0x1000000;
            piVar30[3] = -0x1000000;
            piVar30[0] = -0x1000000;
            piVar30[1] = -0x1000000;
            piVar30[6] = -0x1000000;
            piVar30[7] = -0x1000000;
            piVar30[4] = -0x1000000;
            piVar30[5] = -0x1000000;
            lVar15 = lVar15 + 8;
            piVar30 = piVar30 + 8;
          } while (lVar15 != 0);
          uVar34 = uVar17 + uVar34;
          if (uVar16 != uVar17) goto LAB_10814e8c4;
        }
        else {
          uVar19 = uVar16 & 0xffffffffffffffe0;
          piVar30 = param_1 + uVar34 + 0x556;
          uVar17 = uVar19;
          do {
            piVar30[-6] = -0x1000000;
            piVar30[-5] = -0x1000000;
            piVar30[-8] = -0x1000000;
            piVar30[-7] = -0x1000000;
            piVar30[-2] = -0x1000000;
            piVar30[-1] = -0x1000000;
            piVar30[-4] = -0x1000000;
            piVar30[-3] = -0x1000000;
            piVar30[-0xe] = -0x1000000;
            piVar30[-0xd] = -0x1000000;
            piVar30[-0x10] = -0x1000000;
            piVar30[-0xf] = -0x1000000;
            piVar30[-10] = -0x1000000;
            piVar30[-9] = -0x1000000;
            piVar30[-0xc] = -0x1000000;
            piVar30[-0xb] = -0x1000000;
            piVar30[10] = -0x1000000;
            piVar30[0xb] = -0x1000000;
            piVar30[8] = -0x1000000;
            piVar30[9] = -0x1000000;
            piVar30[0xe] = -0x1000000;
            piVar30[0xf] = -0x1000000;
            piVar30[0xc] = -0x1000000;
            piVar30[0xd] = -0x1000000;
            piVar30[2] = -0x1000000;
            piVar30[3] = -0x1000000;
            piVar30[0] = -0x1000000;
            piVar30[1] = -0x1000000;
            piVar30[6] = -0x1000000;
            piVar30[7] = -0x1000000;
            piVar30[4] = -0x1000000;
            piVar30[5] = -0x1000000;
            uVar17 = uVar17 - 0x20;
            piVar30 = piVar30 + 0x20;
          } while (uVar17 != 0);
          if (uVar16 != uVar19) {
            if ((uVar16 & 0x18) == 0) {
              uVar34 = uVar19 + uVar34;
              goto LAB_10814e8c4;
            }
            goto LAB_10814eaec;
          }
        }
        uVar33 = 0x100;
        cVar12 = (char)param_1[0x17];
joined_r0x00010814df64:
        if (cVar12 == '\x01') {
          param_1[(ulong)*(byte *)((long)param_1 + 0x5d) + 0x546] = 0;
          uVar23 = *param_2;
          if ((uVar23 >> 0x12 & 1) == 0) goto LAB_10814e908;
LAB_10814e938:
          piVar11 = param_1 + 0x646;
          if ((*(long *)(param_2 + 0x1e) == 0x400) && (*(long *)(param_2 + 0x20) == 1)) {
            piVar11 = *(int **)(param_2 + 0x1c);
          }
        }
        else {
          uVar23 = *param_2;
          if ((uVar23 >> 0x12 & 1) != 0) goto LAB_10814e938;
LAB_10814e908:
          piVar11 = param_1 + 0x646;
        }
        piVar30 = param_1 + 0x2c;
        FUN_10814cd30(piVar30,uVar23,piVar11,0x400,param_1 + (ulong)bVar32 * 0x100 + 0x446,0x400,
                      param_4);
        if (piVar30 == (int *)0x0) {
          pbVar22 = pbVar29;
          if ((char)param_1[0x12] == '\x01') {
            _bzero(param_1 + 0x746,0x2060);
            param_1[0x746] = 0x3ccb6c71;
            *(undefined **)(param_1 + 0x748) = &UNK_10df02970;
            *(undefined ***)(param_1 + 0x74a) = &PTR_DAT_110a27e90;
          }
LAB_10814e9f4:
          if (pbVar22 == pbVar25) {
            iVar13 = 4;
            goto LAB_10814ea50;
          }
          pbVar29 = pbVar22 + 1;
          if (*pbVar22 < 9) {
            if (param_1[0x746] == 0x3ccb6c71) {
              param_1[0x750] = *pbVar22 + 1;
            }
            piVar30 = (int *)0x0;
            *(undefined1 *)(param_1 + 0x12) = 1;
            goto LAB_10814ea34;
          }
          piVar30 = (int *)&UNK_10df02a1f;
        }
        else if ((char)*piVar30 != '#') {
          if ((char)*piVar30 == '$') {
            piVar30 = (int *)&UNK_10df0280f;
          }
          else {
LAB_10814ea34:
            param_1[0x43] = 0;
          }
        }
      }
LAB_10814ea60:
      lVar15 = *param_3;
      if (lVar15 != 0) {
        param_3[3] = (long)pbVar29 - lVar15;
      }
      if (piVar30 == (int *)0x0) goto LAB_10814dfd8;
      iVar14 = 2;
    }
    else {
      if (iVar14 != 3) goto LAB_10814ecd0;
      lVar15 = *param_3;
LAB_10814dfd8:
      uStack_7f = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_87 = 0;
      uStack_90 = 0;
      uStack_af = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_c8 = 0;
      puStack_d0 = (undefined *)0x0;
      uStack_b8 = 0;
      uStack_b7 = 0;
      lStack_c0 = 0;
      if (lVar15 == 0) {
        pbVar22 = (byte *)0x0;
        pbVar25 = (byte *)0x0;
      }
      else {
        pbVar22 = (byte *)(lVar15 + param_3[3]);
        pbVar25 = (byte *)(lVar15 + param_3[2]);
      }
      iVar14 = param_1[0x44];
      if (iVar14 == 0) {
        uVar34 = 0;
        bVar32 = 0;
        goto LAB_10814e05c;
      }
      iVar13 = 0;
      piVar30 = (int *)0x0;
      uVar34 = *(ulong *)(param_1 + 0x3f7e);
      bVar32 = *(byte *)(param_1 + 0x3f80);
      if (iVar14 < 4) {
        if (iVar14 == 1) goto LAB_10814e05c;
        if (iVar14 == 2) {
          if (pbVar25 != pbVar22) {
LAB_10814e074:
            puVar36 = (ulong *)(param_1 + 0x28);
            uVar16 = *(ulong *)(param_1 + 0x2a);
            if (*puVar36 == uVar16) {
              uVar16 = 0;
              *puVar36 = 0;
              param_1[0x2a] = 0;
              param_1[0x2b] = 0;
            }
            else if (0xf01 < uVar16) goto LAB_10814e114;
            do {
              uVar19 = (long)pbVar25 - (long)pbVar22;
              uVar17 = uVar34;
              if (uVar19 <= uVar34) {
                uVar17 = uVar19;
              }
              if (uVar17 == 0) break;
              uVar5 = 0x1000 - uVar16;
              if ((uVar17 & 0xffffffff) <= 0x1000 - uVar16) {
                uVar5 = uVar17 & 0xffffffff;
              }
              if (uVar19 <= uVar5) {
                uVar5 = uVar19;
              }
              pbVar29 = pbVar22;
              if (uVar5 != 0) {
                _memmove((undefined *)((long)param_1 + uVar16 + 0x118),pbVar22,uVar5);
                pbVar29 = pbVar22 + uVar5;
                uVar16 = *(ulong *)(param_1 + 0x2a);
              }
              bVar9 = CARRY8(uVar16,uVar5);
              uVar16 = uVar16 + uVar5;
              if (bVar9) {
                uVar16 = 0xffffffffffffffff;
              }
              *(ulong *)(param_1 + 0x2a) = uVar16;
              bVar9 = uVar5 <= uVar34;
              uVar34 = uVar34 - uVar5;
              pbVar22 = pbVar29;
              if (bVar9 && uVar34 != 0) break;
              if (pbVar25 == pbVar29) {
                uVar34 = 0;
                bVar32 = 1;
                break;
              }
              pbVar22 = pbVar29 + 1;
              uVar34 = (ulong)*pbVar29;
            } while (uVar16 < 0xf02);
LAB_10814e114:
            do {
              uVar16 = *(ulong *)(param_1 + 0x28);
              uVar17 = *(ulong *)(param_1 + 0x2a);
              lStack_c8 = uVar17 - uVar16;
              piVar30 = (int *)&UNK_10df02a5f;
              if ((uVar17 < uVar16) || (piVar30 = (int *)&UNK_10df02a5f, 0x1000 < uVar17))
              goto LAB_10814ec5c;
              puVar3 = (undefined *)((long)param_1 + uVar16 + 0x118);
              uStack_b8 = 0;
              uStack_b7 = 0;
              uStack_b0 = 0;
              uStack_af = 0;
              uStack_a8 = 0;
              piVar30 = param_1 + 0x746;
              puStack_d0 = puVar3;
              lStack_c0 = lStack_c8;
              FUN_10814d61c(piVar30,&uStack_a0,&puStack_d0);
              puVar4 = puStack_d0 + (CONCAT71(uStack_b7,uStack_b8) - (long)puVar3) + *puVar36;
              if (CARRY8(*puVar36,(ulong)(puStack_d0 +
                                         (CONCAT71(uStack_b7,uStack_b8) - (long)puVar3)))) {
                puVar4 = (undefined *)0xffffffffffffffff;
              }
              *puVar36 = (ulong)puVar4;
              if (param_1[0x746] == 0x3ccb6c71) {
                uVar33 = param_1[0x759];
                uVar17 = (ulong)uVar33;
                uVar31 = param_1[0x75a];
                uVar16 = 0;
                if (uVar17 <= uVar31) {
                  uVar16 = uVar31 - uVar17;
                }
                uVar19 = 0;
                if (uVar33 <= uVar31) {
                  uVar19 = uVar16;
                }
                puVar3 = (undefined *)0x0;
                if (uVar33 <= uVar31) {
                  puVar3 = (undefined *)((long)param_1 + uVar17 + 0xdd78);
                }
                param_1[0x759] = 0;
                param_1[0x75a] = 0;
                if (uVar19 != 0) {
                  uVar33 = *param_2;
                  if ((uVar33 & 0x30000) == 0) {
                    uVar33 = *(int *)(&UNK_10df026bc + ((ulong)(uVar33 >> 4) & 0xf) * 4) +
                             *(int *)(&UNK_10df026bc + ((ulong)uVar33 & 0xf) * 4) +
                             *(int *)(&UNK_10df026bc + (ulong)(uVar33 >> 8 & 0xf) * 4) +
                             *(int *)(&UNK_10df026bc + (ulong)(uVar33 >> 0xc & 0xf) * 4);
                    uVar16 = (ulong)uVar33;
                    piVar11 = (int *)&UNK_10df028f6;
                    if ((uVar33 & 7) != 0) {
LAB_10814e5bc:
                      if ((char)*piVar11 != '#') goto LAB_10814e5c8;
                      lVar15 = *param_3;
                      piVar30 = piVar11;
                      goto joined_r0x00010814e754;
                    }
                  }
                  else {
                    uVar16 = 0;
                  }
                  uVar17 = 0;
                  uVar16 = uVar16 >> 3;
                  uVar31 = param_1[10];
                  lVar15 = *(long *)(param_2 + 4);
                  uVar6 = *(ulong *)(param_2 + 6);
                  uVar5 = *(ulong *)(param_2 + 8);
                  lVar21 = *(long *)(param_2 + 10);
                  uVar33 = param_1[0x25];
                  do {
                    if ((uint)param_1[0x23] <= uVar33) {
                      piVar11 = (int *)&UNK_10df02939;
                      if ((*(byte *)((long)param_1 + 0x43) & 1) == 0) goto LAB_10814e5bc;
                      break;
                    }
                    uVar23 = param_1[0x24];
                    if (uVar33 < (uint)param_1[0xb]) {
                      lVar26 = lVar15 + lVar21 * (ulong)uVar33;
                      uVar28 = uVar6;
                      if (uVar5 <= uVar33) {
                        lVar26 = 0;
                        uVar28 = 0;
                      }
                      uVar27 = uVar31 * uVar16;
                      if (uVar28 <= uVar31 * uVar16) {
                        uVar27 = uVar28;
                      }
                      uVar28 = uVar23 * uVar16;
                      if (uVar28 < uVar27) {
                        if (*(code **)(param_1 + 0x2c) == (code *)0x0) {
                          uVar18 = 0;
                        }
                        else {
                          uVar20 = (uint)param_1[0x22] * uVar16;
                          uVar18 = uVar20;
                          if (uVar27 <= uVar20) {
                            uVar18 = uVar27;
                          }
                          if (uVar28 < uVar20 || uVar28 - uVar20 == 0) {
                            uVar27 = uVar18;
                          }
                          uVar18 = uVar28 + lVar26;
                          (**(code **)(param_1 + 0x2c))
                                    (uVar18,uVar27 - uVar28,param_1 + 0x646,0x400,puVar3 + uVar17,
                                     uVar19 - uVar17);
                          uVar23 = param_1[0x24];
                          uVar33 = param_1[0x25];
                        }
                        bVar9 = CARRY8(uVar17,uVar18);
                        uVar17 = uVar17 + uVar18;
                        if (bVar9) {
                          uVar17 = 0xffffffffffffffff;
                        }
                        bVar9 = CARRY4(uVar23,(uint)uVar18);
                        uVar23 = uVar23 + (uint)uVar18;
                        if (bVar9) {
                          uVar23 = 0xffffffff;
                        }
                        param_1[0x24] = uVar23;
                        uVar1 = uVar33 + 1;
                        if (uVar33 == 0xffffffff) {
                          uVar1 = 0xffffffff;
                        }
                        uVar8 = param_1[0x26];
                        if ((uint)param_1[0x26] <= uVar1) {
                          uVar8 = uVar1;
                        }
                        param_1[0x26] = uVar8;
                      }
                    }
                    uVar1 = param_1[0x22];
                    uVar8 = uVar1 - uVar23;
                    if (uVar1 < uVar23 || uVar8 == 0) {
                      param_1[0x24] = param_1[0x20];
                      bVar7 = *(byte *)((long)param_1 + 0x4b);
                      uVar28 = (ulong)bVar7;
                      if (bVar7 == 0) {
                        bVar9 = uVar33 == 0xffffffff;
                        uVar33 = uVar33 + 1;
                        if (bVar9) {
                          uVar33 = 0xffffffff;
                        }
                      }
                      else {
                        if (((*(long *)(param_1 + 0x1e) == 0) && (bVar7 != 1)) &&
                           ((*(byte *)(param_1 + 0x17) & 1) == 0)) {
                          uVar23 = uVar33 + 1;
                          if (uVar33 == 0xffffffff) {
                            uVar23 = 0xffffffff;
                          }
                          uVar1 = uVar33 + (byte)(&UNK_10df02ab4)[uVar28];
                          if (CARRY4(uVar33,(uint)(byte)(&UNK_10df02ab4)[uVar28])) {
                            uVar1 = 0xffffffff;
                          }
                          if ((uint)param_1[0x23] <= uVar1) {
                            uVar1 = param_1[0x23];
                          }
                          if (uVar23 < uVar1) {
                            bVar9 = false;
                            uVar27 = (ulong)uVar33;
                            if ((uVar6 != 0) && (uVar27 < uVar5)) {
                              lVar26 = lVar21 * uVar27;
                              if (0xfffffffd < uVar27) {
                                uVar27 = 0xfffffffe;
                              }
                              uVar27 = uVar27 + 1;
                              lVar35 = lVar15 + lVar21 * uVar27;
                              do {
                                if (uVar27 < uVar5) {
                                  _memmove(lVar35,lVar15 + lVar26,uVar6);
                                }
                                uVar27 = uVar27 + 1;
                                lVar35 = lVar35 + lVar21;
                              } while (uVar1 != uVar27);
                              uVar28 = (ulong)*(byte *)((long)param_1 + 0x4b);
                              bVar9 = uVar28 == 0;
                              uVar33 = param_1[0x25];
                            }
                          }
                          else {
                            bVar9 = false;
                          }
                          uVar23 = param_1[0x26];
                          if ((uint)param_1[0x26] <= uVar1) {
                            uVar23 = uVar1;
                          }
                          param_1[0x26] = uVar23;
                          bVar10 = CARRY4(uVar33,(uint)(byte)(&UNK_10df02ab9)[uVar28]);
                          uVar33 = uVar33 + (byte)(&UNK_10df02ab9)[uVar28];
                          if (bVar10) {
                            uVar33 = 0xffffffff;
                          }
                          if (bVar9) goto LAB_10814e244;
                        }
                        else {
                          bVar9 = CARRY4(uVar33,(uint)(byte)(&UNK_10df02ab9)[uVar28]);
                          uVar33 = uVar33 + (byte)(&UNK_10df02ab9)[uVar28];
                          if (bVar9) {
                            uVar33 = 0xffffffff;
                          }
                        }
                        puVar24 = (uint *)(&UNK_10df02ac0 + (ulong)(byte)((char)uVar28 - 1) * 4);
                        do {
                          uVar28 = uVar28 - 1;
                          if (uVar33 < (uint)param_1[0x23]) break;
                          uVar33 = param_1[0x21] + *puVar24;
                          if (CARRY4(param_1[0x21],*puVar24)) {
                            uVar33 = 0xffffffff;
                          }
                          *(char *)((long)param_1 + 0x4b) = (char)uVar28;
                          puVar24 = puVar24 + -1;
                        } while ((uVar28 & 0xff) != 0);
                      }
                    }
                    else {
                      uVar28 = uVar19 - uVar17;
                      if (uVar28 == 0) break;
                      piVar11 = (int *)&UNK_10df02a5f;
                      if (uVar19 < uVar17) goto LAB_10814e5bc;
                      uVar27 = (ulong)uVar8;
                      if (uVar28 <= uVar8) {
                        uVar27 = uVar28;
                      }
                      bVar9 = CARRY8(uVar17,uVar27);
                      uVar17 = uVar17 + uVar27;
                      if (bVar9) {
                        uVar17 = 0xffffffffffffffff;
                      }
                      uVar8 = uVar23 + (uint)uVar27;
                      if (CARRY4(uVar23,(uint)uVar27)) {
                        uVar8 = 0xffffffff;
                      }
                      param_1[0x24] = uVar8;
                      if (uVar8 < uVar1) {
                        if (uVar17 != uVar19) goto LAB_10814e5bc;
                        break;
                      }
                      param_1[0x24] = param_1[0x20];
                      uVar28 = (ulong)*(byte *)((long)param_1 + 0x4b);
                      bVar9 = CARRY4(uVar33,(uint)(byte)(&UNK_10df02ab9)[uVar28]);
                      uVar33 = uVar33 + (byte)(&UNK_10df02ab9)[uVar28];
                      if (bVar9) {
                        uVar33 = 0xffffffff;
                      }
                      if (uVar28 != 0) {
                        puVar24 = (uint *)(&UNK_10df02ac0 +
                                          (ulong)(byte)(*(byte *)((long)param_1 + 0x4b) - 1) * 4);
                        do {
                          uVar28 = uVar28 - 1;
                          if (uVar33 < (uint)param_1[0x23]) break;
                          uVar33 = param_1[0x21] + *puVar24;
                          if (CARRY4(param_1[0x21],*puVar24)) {
                            uVar33 = 0xffffffff;
                          }
                          *(char *)((long)param_1 + 0x4b) = (char)uVar28;
                          puVar24 = puVar24 + -1;
                        } while ((uVar28 & 0xff) != 0);
                      }
                    }
LAB_10814e244:
                    param_1[0x25] = uVar33;
                  } while (uVar17 < uVar19);
                }
              }
LAB_10814e5c8:
              if (piVar30 == (int *)0x0) {
                *(undefined1 *)(param_1 + 0x12) = 0;
                if ((bVar32 & 1) == 0 && uVar34 == 0) goto LAB_10814ec20;
                uVar16 = uVar34 & 0xffffffff;
                *(ulong *)(param_1 + 0x3f82) = uVar16;
                goto LAB_10814e680;
              }
              if (piVar30 == (int *)&UNK_10df0275f) goto LAB_10814e6a4;
              if (piVar30 != (int *)&UNK_10df02771) {
                if (((*(char *)((long)param_1 + 0x43) == '\x01') &&
                    ((uint)param_1[0x23] <= (uint)param_1[0x25])) &&
                   (*(char *)((long)param_1 + 0x4b) == '\0')) {
                  if ((bVar32 & 1) == 0 && uVar34 == 0) goto LAB_10814ec20;
                  uVar16 = uVar34 & 0xffffffff;
                  *(ulong *)(param_1 + 0x3f82) = uVar16;
                  lVar15 = uVar16 - ((long)pbVar25 - (long)pbVar22);
                  if ((ulong)((long)pbVar25 - (long)pbVar22) <= uVar16 && lVar15 != 0)
                  goto LAB_10814e6f0;
                  goto LAB_10814e780;
                }
                if ((char)*piVar30 == '#') goto LAB_10814ec5c;
                if ((char)*piVar30 != '$') goto LAB_10814ec54;
                piVar30 = (int *)&UNK_10df0280f;
                lVar15 = *param_3;
                goto joined_r0x00010814e754;
              }
            } while( true );
          }
LAB_10814e6d0:
          iVar13 = 2;
LAB_10814e6d4:
          piVar30 = (int *)&UNK_10df0275f;
          goto LAB_10814eb50;
        }
        if (iVar14 == 3) {
          uVar16 = *(ulong *)(param_1 + 0x3f82);
LAB_10814e680:
          lVar15 = uVar16 - ((long)pbVar25 - (long)pbVar22);
          if (uVar16 < (ulong)((long)pbVar25 - (long)pbVar22) || lVar15 == 0) {
            lVar15 = *param_3;
            param_3[3] = (long)(pbVar22 + (uVar16 - lVar15));
            goto LAB_10814e718;
          }
          *(long *)(param_1 + 0x3f82) = lVar15;
          iVar13 = 3;
          piVar30 = (int *)&UNK_10df0275f;
          goto LAB_10814eb50;
        }
LAB_10814eb34:
        param_1[0x44] = iVar13;
        *(ulong *)(param_1 + 0x3f7e) = uVar34;
        *(byte *)(param_1 + 0x3f80) = bVar32 & 1;
        lVar15 = *param_3;
      }
      else {
        if (iVar14 != 4) {
          if (iVar14 == 5) {
            uVar16 = *(ulong *)(param_1 + 0x3f82);
            lVar15 = uVar16 - ((long)pbVar25 - (long)pbVar22);
            if ((ulong)((long)pbVar25 - (long)pbVar22) <= uVar16 && lVar15 != 0) {
LAB_10814e6f0:
              *(long *)(param_1 + 0x3f82) = lVar15;
              iVar13 = 5;
              piVar30 = (int *)&UNK_10df0275f;
              goto LAB_10814eb50;
            }
LAB_10814e780:
            lVar15 = *param_3;
            param_3[3] = (long)(pbVar22 + (uVar16 - lVar15));
          }
          else if (iVar14 != 6) goto LAB_10814eb34;
          if (lVar15 == 0) {
            pbVar25 = (byte *)0x0;
            pbVar22 = (byte *)0x0;
          }
          else {
            pbVar22 = (byte *)(lVar15 + param_3[3]);
            pbVar25 = (byte *)(lVar15 + param_3[2]);
          }
          pbVar29 = pbVar22;
          if ((uint)param_1[0x3f] < 2) goto LAB_10814ed84;
          if (param_1[0x3f] == 2) {
            uVar16 = *puVar2;
            while (uVar17 = uVar16 - ((long)pbVar25 - (long)pbVar22),
                  uVar16 < (ulong)((long)pbVar25 - (long)pbVar22) || uVar17 == 0) {
              pbVar29 = pbVar22 + uVar16;
LAB_10814ed84:
              if (pbVar29 == pbVar25) {
                iVar14 = 1;
                goto LAB_10814edb0;
              }
              pbVar22 = pbVar29 + 1;
              uVar16 = (ulong)*pbVar29;
              if (uVar16 == 0) goto LAB_10814ebf0;
              *puVar2 = uVar16;
            }
            *puVar2 = uVar17;
            iVar14 = 2;
LAB_10814edb0:
            bVar9 = false;
            piVar30 = (int *)&UNK_10df0275f;
            pbVar22 = pbVar25;
          }
          else {
LAB_10814ebf0:
            piVar30 = (int *)0x0;
            iVar14 = 0;
            bVar9 = true;
          }
          param_1[0x3f] = iVar14;
          if (lVar15 == 0) {
            lVar21 = param_3[3];
          }
          else {
            lVar21 = (long)pbVar22 - lVar15;
            param_3[3] = lVar21;
          }
          pbVar25 = (byte *)(lVar15 + lVar21);
          pbVar22 = pbVar25;
          if (bVar9) goto LAB_10814ec20;
          iVar13 = 6;
LAB_10814eb50:
          pbVar22 = pbVar25;
          if ((char)*piVar30 != '$') {
            iVar13 = 0;
          }
          goto LAB_10814eb34;
        }
LAB_10814e718:
        if (lVar15 == 0) {
          pbVar25 = (byte *)0x0;
          pbVar22 = (byte *)0x0;
        }
        else {
          pbVar22 = (byte *)(lVar15 + param_3[3]);
          pbVar25 = (byte *)(lVar15 + param_3[2]);
        }
        pbVar29 = pbVar22;
        if ((uint)param_1[0x3f] < 2) goto LAB_10814eba8;
        if (param_1[0x3f] == 2) {
          uVar16 = *puVar2;
          while (uVar17 = uVar16 - ((long)pbVar25 - (long)pbVar22),
                uVar16 < (ulong)((long)pbVar25 - (long)pbVar22) || uVar17 == 0) {
            pbVar29 = pbVar22 + uVar16;
LAB_10814eba8:
            if (pbVar29 == pbVar25) {
              iVar14 = 1;
              goto LAB_10814ebd4;
            }
            pbVar22 = pbVar29 + 1;
            uVar16 = (ulong)*pbVar29;
            if (uVar16 == 0) goto LAB_10814eb6c;
            *puVar2 = uVar16;
          }
          *puVar2 = uVar17;
          iVar14 = 2;
LAB_10814ebd4:
          bVar9 = false;
          piVar30 = (int *)&UNK_10df0275f;
          pbVar22 = pbVar25;
        }
        else {
LAB_10814eb6c:
          piVar30 = (int *)0x0;
          iVar14 = 0;
          bVar9 = true;
        }
        param_1[0x3f] = iVar14;
        if (lVar15 == 0) {
          lVar21 = param_3[3];
        }
        else {
          lVar21 = (long)pbVar22 - lVar15;
          param_3[3] = lVar21;
        }
        pbVar25 = (byte *)(lVar15 + lVar21);
        pbVar22 = pbVar25;
        if (!bVar9) {
          iVar13 = 4;
          goto LAB_10814eb50;
        }
LAB_10814ec20:
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        if ((((uint)param_1[0x25] < (uint)param_1[0x23]) && (param_1[0x20] != param_1[0x22])) &&
           (param_1[0x21] != param_1[0x23])) {
          piVar30 = (int *)&UNK_10df028df;
          lVar15 = *param_3;
        }
        else {
          piVar30 = (int *)0x0;
LAB_10814ec54:
          param_1[0x44] = 0;
LAB_10814ec5c:
          lVar15 = *param_3;
        }
      }
joined_r0x00010814e754:
      if (lVar15 != 0) {
        param_3[3] = (long)pbVar22 - lVar15;
      }
      if (piVar30 == (int *)0x0) {
        lVar15 = *(long *)(param_1 + 0x1e) + 1;
        if (*(long *)(param_1 + 0x1e) == -1) {
          lVar15 = -1;
        }
        *(long *)(param_1 + 0x1e) = lVar15;
        *(undefined2 *)(param_1 + 0x17) = 0;
        *(undefined1 *)((long)param_1 + 0x5e) = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        *(undefined1 *)(param_1 + 0xc) = 0x20;
        goto LAB_10814ecd0;
      }
      iVar14 = 3;
    }
LAB_10814ec74:
    if ((char)*piVar30 != '$') {
      iVar14 = 0;
    }
    param_1[0x3a] = iVar14;
    if (piVar30 != (int *)&UNK_10df0275f) goto LAB_10814ecd4;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      piVar30 = (int *)&UNK_10df0275f;
      goto LAB_10814ece4;
    }
    piVar30 = (int *)&UNK_10df02a49;
  }
  cVar12 = (char)*piVar30;
LAB_10814ed08:
  if (cVar12 == '#') {
    *param_1 = 0x75ae3d2;
  }
  return piVar30;
LAB_10814e6a4:
  bVar7 = bVar32 & 1;
  bVar32 = 0;
  if (bVar7 != 0) {
LAB_10814e05c:
    if (pbVar22 == pbVar25) {
      iVar13 = 1;
      goto LAB_10814e6d4;
    }
    uVar34 = (ulong)*pbVar22;
    pbVar22 = pbVar22 + 1;
  }
  if (uVar34 == 0) goto LAB_10814ec20;
  if (pbVar25 == pbVar22) goto LAB_10814e6d0;
  goto LAB_10814e074;
}



/* Entry: 10814edcc; end: 10814f08f;  */

int * FUN_10814edcc(int *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return (int *)&UNK_10df027b4;
  }
  if (*param_1 != 0x3ccb6c71) {
    piVar2 = (int *)&UNK_10df02831;
    if (*param_1 != 0x75ae3d2) {
      piVar2 = (int *)&UNK_10df02884;
    }
    return piVar2;
  }
  if (param_3 == 0) {
    *param_1 = 0x75ae3d2;
    return (int *)&UNK_10df02787;
  }
  if ((param_1[1] != 0) && (param_1[1] != 3)) {
    *param_1 = 0x75ae3d2;
    return (int *)&UNK_10df028a1;
  }
  param_1[1] = 0;
  if (1 < (uint)param_1[0x36]) {
    param_1[0x36] = 0;
    param_1[1] = 0;
    return (int *)0x0;
  }
  piVar2 = param_1;
  FUN_10814ff88();
  if (piVar2 == (int *)&UNK_10df0275f) {
    if ((*(byte *)(param_3 + 0x28) & 1) == 0) goto LAB_10814eecc;
    piVar2 = (int *)&UNK_10df02a49;
  }
  else {
    if (piVar2 == (int *)0x0) {
      param_1[0x36] = 0;
      return (int *)0x0;
    }
LAB_10814eecc:
    cVar1 = (char)*piVar2;
    if (cVar1 != '$') goto LAB_10814ef14;
    param_1[0x36] = 1;
    iVar3 = 3;
    if ((char)*piVar2 != '$') {
      iVar3 = 0;
    }
    param_1[1] = iVar3;
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  cVar1 = (char)*piVar2;
LAB_10814ef14:
  if (cVar1 == '#') {
    *param_1 = 0x75ae3d2;
  }
  return piVar2;
}



/* Entry: 10814f090; end: 10814f5eb;  */

undefined1  [16] FUN_10814f090(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  if (param_1 == (int *)0x0) {
    return ZEXT816(0);
  }
  if (*param_1 == 0x3ccb6c71 || *param_1 == 0x75ae3d2) {
    uVar4 = param_1[10];
    uVar5 = param_1[0xb];
    uVar1 = param_1[0x20];
    if (uVar4 <= (uint)param_1[0x20]) {
      uVar1 = uVar4;
    }
    uVar2 = param_1[0x21];
    if (uVar5 <= (uint)param_1[0x21]) {
      uVar2 = uVar5;
    }
    uVar3 = param_1[0x22];
    if (uVar4 <= (uint)param_1[0x22]) {
      uVar3 = uVar4;
    }
    uVar4 = param_1[0x26];
    if (uVar5 <= (uint)param_1[0x26]) {
      uVar4 = uVar5;
    }
    auVar6._4_4_ = uVar2;
    auVar6._0_4_ = uVar1;
    auVar6._12_4_ = uVar4;
    auVar6._8_4_ = uVar3;
    return auVar6;
  }
  return ZEXT816(0);
}



/* Entry: 10814f5ec; end: 10814ff87;  */

undefined * FUN_10814f5ec(int *param_1,long param_2,ulong param_3,uint param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    return &UNK_10df027b4;
  }
  if (param_2 == 0xfe10) {
    if (param_3 >> 0x12 != 0) {
      return &UNK_10df027f6;
    }
    if ((param_4 & 1) == 0) {
      if ((param_4 >> 1 & 1) == 0) {
        _bzero(param_1,0xfe10);
        param_4 = param_4 | 1;
      }
      else {
        param_1[0x44] = 0;
        param_1[0x45] = 0;
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        param_1[0x34] = 0;
        param_1[0x35] = 0;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        param_1[0x38] = 0;
        param_1[0x39] = 0;
        param_1[0x2e] = 0;
        param_1[0x2f] = 0;
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        param_1[0x32] = 0;
        param_1[0x33] = 0;
        param_1[0x30] = 0;
        param_1[0x31] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[0] = 0;
        param_1[1] = 0;
      }
    }
    else if (*param_1 != 0) {
      return &UNK_10df02853;
    }
    if ((param_4 & 1) == 0) {
      uVar1 = 0xe068;
      if ((param_4 & 2) != 0) {
        uVar1 = 0x2060;
      }
      _bzero(param_1 + 0x746,uVar1);
    }
    else if (param_1[0x746] != 0) {
      return &UNK_10df02853;
    }
    param_1[0x746] = 0x3ccb6c71;
    *(undefined **)(param_1 + 0x748) = &UNK_10df02970;
    *(undefined ***)(param_1 + 0x74a) = &PTR_DAT_110a27e90;
    *param_1 = 0x3ccb6c71;
    *(undefined **)(param_1 + 2) = &UNK_10df0294e;
    *(undefined ***)(param_1 + 4) = &PTR_FUN_110a27ea8;
    return (undefined *)0x0;
  }
  return &UNK_10df027db;
}



/* Entry: 10814ff88; end: 1081504b7;  */

void FUN_10814ff88(char *param_1,undefined1 *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  unkbyte9 Var6;
  unkbyte9 Var7;
  bool bVar8;
  char *pcVar9;
  long lVar10;
  byte *pbVar11;
  char *pcVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  undefined4 uVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  ulong uVar31;
  
  lVar10 = *param_3;
  if (lVar10 == 0) {
    pcVar21 = (char *)0x0;
    lVar13 = 0;
    pcVar12 = (char *)0x0;
    iVar17 = *(int *)(param_1 + 0xdc);
    if (iVar17 != 0) goto LAB_10814ffc8;
LAB_108150058:
    param_1[0x98] = '\0';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    bVar3 = param_1[0x30];
    if ((bVar3 >> 4 & 1) != 0) goto LAB_108150378;
    if (bVar3 == 0x20) {
LAB_10815006c:
      uVar20 = 0;
      goto LAB_1081501f0;
    }
    if (bVar3 < 0x20) {
      uVar20 = 0;
      param_3[3] = (long)pcVar12 - lVar10;
      goto LAB_1081500d0;
    }
    if (bVar3 == 0x40) {
      uVar20 = 0;
      param_3[3] = (long)pcVar12 - lVar10;
      goto joined_r0x000108150184;
    }
    if (bVar3 == 0x28) {
      lVar1 = param_3[4] + ((long)pcVar12 - lVar13);
      if (CARRY8(param_3[4],(long)pcVar12 - lVar13)) {
        lVar1 = -1;
      }
      if (*(long *)(param_1 + 0x68) != lVar1) goto LAB_108150378;
      goto LAB_10815006c;
    }
LAB_108150240:
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
    goto LAB_108150378;
  }
  pcVar12 = (char *)(lVar10 + param_3[3]);
  pcVar21 = (char *)(lVar10 + param_3[2]);
  iVar17 = *(int *)(param_1 + 0xdc);
  lVar13 = lVar10;
  if (iVar17 == 0) goto LAB_108150058;
LAB_10814ffc8:
  uVar16 = 0;
  uVar20 = *(undefined4 *)(param_1 + 0xfd80);
  if (iVar17 < 3) {
    if (iVar17 == 1) {
LAB_1081500d0:
      pcVar9 = param_1;
      func_0x00010814f74c(param_1,0,param_3);
      lVar10 = *param_3;
      pcVar12 = (char *)(lVar10 + param_3[3]);
      if (pcVar9 == (char *)0x0) {
LAB_1081501f0:
        if ((*(long *)(param_1 + 0x70) != 0) || (param_1[0x30] == '(')) {
          param_3[3] = (long)pcVar12 - lVar10;
          goto LAB_108150210;
        }
LAB_108150254:
        if ((param_1[0x5c] & 1U) != 0) goto LAB_10815025c;
        uVar20 = *(undefined4 *)(param_1 + 0x54);
        if ((param_1[0x41] == '\x01') && (*(long *)(param_1 + 0x70) == 0)) goto LAB_108150084;
        goto LAB_10815027c;
      }
      uVar16 = 1;
      goto LAB_108150360;
    }
    if (iVar17 == 2) {
joined_r0x000108150184:
      if (lVar10 == 0) {
        pbVar15 = (byte *)0x0;
        pbVar11 = (byte *)0x0;
        uVar19 = *(uint *)(param_1 + 0xe0);
        pbVar14 = pbVar11;
        if ((int)uVar19 < 3) goto LAB_108150010;
LAB_1081501a4:
        uVar16 = 0;
        pcVar9 = (char *)0x0;
        if (uVar19 == 3) {
LAB_1081501b8:
          if (pbVar11 == pbVar15) {
            uVar16 = 3;
            pbVar11 = pbVar15;
            goto LAB_108150164;
          }
          if (*pbVar11 < 9) {
            param_3[3] = (long)(pbVar11 + 1) - lVar10;
            goto LAB_108150310;
          }
          pcVar9 = "#gif: bad literal width";
          pbVar11 = pbVar11 + 1;
          goto joined_r0x0001081501d4;
        }
        if (uVar19 != 4) goto LAB_1081503ac;
LAB_108150310:
        if (lVar10 == 0) {
          pbVar11 = (byte *)0x0;
          pbVar15 = (byte *)0x0;
          uVar19 = *(uint *)(param_1 + 0xfc);
        }
        else {
          pbVar15 = (byte *)(lVar10 + param_3[3]);
          pbVar11 = (byte *)(lVar10 + param_3[2]);
          uVar19 = *(uint *)(param_1 + 0xfc);
        }
        pbVar14 = pbVar15;
        if (uVar19 < 2) goto LAB_108150474;
        if (uVar19 == 2) {
          uVar18 = *(ulong *)(param_1 + 0xfdb8);
          while (lVar13 = uVar18 - ((long)pbVar11 - (long)pbVar15),
                uVar18 < (ulong)((long)pbVar11 - (long)pbVar15) || lVar13 == 0) {
            pbVar14 = pbVar15 + uVar18;
LAB_108150474:
            if (pbVar14 == pbVar11) {
              param_1[0xfc] = '\x01';
              param_1[0xfd] = '\0';
              param_1[0xfe] = '\0';
              param_1[0xff] = '\0';
              pbVar15 = pbVar11;
              goto joined_r0x000108150454;
            }
            pbVar15 = pbVar14 + 1;
            uVar18 = (ulong)*pbVar14;
            if (uVar18 == 0) goto LAB_1081503cc;
            *(ulong *)(param_1 + 0xfdb8) = uVar18;
          }
          *(long *)(param_1 + 0xfdb8) = lVar13;
          param_1[0xfc] = '\x02';
          param_1[0xfd] = '\0';
          param_1[0xfe] = '\0';
          param_1[0xff] = '\0';
          pbVar15 = pbVar11;
joined_r0x000108150454:
          bVar8 = false;
          pcVar9 = "$base: short read";
          if (lVar10 != 0) goto LAB_1081503e0;
LAB_108150458:
          lVar13 = param_3[3];
        }
        else {
LAB_1081503cc:
          pcVar9 = (char *)0x0;
          bVar8 = true;
          param_1[0xfc] = '\0';
          param_1[0xfd] = '\0';
          param_1[0xfe] = '\0';
          param_1[0xff] = '\0';
          if (lVar10 == 0) goto LAB_108150458;
LAB_1081503e0:
          lVar13 = (long)pbVar15 - lVar10;
          param_3[3] = lVar13;
        }
        pbVar11 = (byte *)(lVar10 + lVar13);
        if (!bVar8) {
          uVar16 = 4;
          goto LAB_108150398;
        }
        if (param_1[0x40] == '\x01') {
          param_1[0x47] = '\x01';
        }
        else {
          lVar13 = *(long *)(param_1 + 0x78) + 1;
          if (*(long *)(param_1 + 0x78) == -1) {
            lVar13 = -1;
          }
          *(long *)(param_1 + 0x78) = lVar13;
        }
        pcVar9 = (char *)0x0;
        param_1[0x5c] = '\0';
        param_1[0x5d] = '\0';
        param_1[0x5e] = '\0';
        param_1[0x60] = '\0';
        param_1[0x61] = '\0';
        param_1[0x62] = '\0';
        param_1[99] = '\0';
        param_1[100] = '\0';
        param_1[0x65] = '\0';
        param_1[0x66] = '\0';
        param_1[0x67] = '\0';
        param_1[0x30] = ' ';
        param_1[0xe0] = '\0';
        param_1[0xe1] = '\0';
        param_1[0xe2] = '\0';
        param_1[0xe3] = '\0';
        if (lVar10 == 0) goto LAB_1081501d8;
LAB_1081503b4:
        lVar13 = (long)pbVar11 - lVar10;
        param_3[3] = lVar13;
      }
      else {
        pbVar11 = (byte *)(lVar10 + param_3[3]);
        pbVar15 = (byte *)(lVar10 + param_3[2]);
        uVar19 = *(uint *)(param_1 + 0xe0);
        pbVar14 = pbVar11;
        if (2 < (int)uVar19) goto LAB_1081501a4;
LAB_108150010:
        uVar16 = 0;
        pcVar9 = (char *)0x0;
        if (uVar19 < 2) {
          if (pbVar14 == pbVar15) {
            uVar16 = 1;
            pbVar11 = pbVar15;
            goto LAB_108150164;
          }
          pbVar11 = pbVar14 + 1;
          if ((char)*pbVar14 < '\0') {
            uVar18 = 3L << (*pbVar14 & 7) + 1;
            *(ulong *)(param_1 + 0xfd88) = uVar18;
            pbVar14 = pbVar11;
            goto LAB_108150150;
          }
          goto LAB_1081501b8;
        }
        pbVar11 = pbVar14;
        if (uVar19 != 2) goto LAB_1081503ac;
        uVar18 = *(ulong *)(param_1 + 0xfd88);
LAB_108150150:
        lVar13 = uVar18 - ((long)pbVar15 - (long)pbVar14);
        if (uVar18 < (ulong)((long)pbVar15 - (long)pbVar14) || lVar13 == 0) {
          pbVar11 = pbVar14 + uVar18;
          goto LAB_1081501b8;
        }
        *(long *)(param_1 + 0xfd88) = lVar13;
        uVar16 = 2;
        pbVar11 = pbVar15;
LAB_108150164:
        pcVar9 = "$base: short read";
LAB_108150398:
        if (*pcVar9 != '$') {
          uVar16 = 0;
        }
LAB_1081503ac:
        *(undefined4 *)(param_1 + 0xe0) = uVar16;
joined_r0x0001081501d4:
        if (lVar10 != 0) goto LAB_1081503b4;
LAB_1081501d8:
        lVar13 = param_3[3];
      }
      pcVar12 = (char *)(lVar10 + lVar13);
      if (pcVar9 == (char *)0x0) {
        if (0x5f < (byte)param_1[0x30]) goto LAB_108150240;
        goto LAB_1081501f0;
      }
      uVar16 = 2;
      goto LAB_108150360;
    }
  }
  else {
    if (iVar17 == 3) {
LAB_108150210:
      pcVar9 = param_1;
      FUN_108150a44(param_1,param_3);
      lVar10 = *param_3;
      pcVar12 = (char *)(lVar10 + param_3[3]);
      if (pcVar9 == (char *)0x0) {
        if ((byte)param_1[0x30] < 0x60) goto LAB_108150254;
        goto LAB_108150240;
      }
      uVar16 = 3;
    }
    else {
      if (iVar17 != 4) goto LAB_108150370;
LAB_108150084:
      if (pcVar21 != pcVar12) {
        if (*pcVar12 < '\0') {
LAB_10815025c:
          uVar20 = *(undefined4 *)(param_1 + 0x58);
        }
LAB_10815027c:
        if (param_2 != (undefined1 *)0x0) {
          cVar2 = param_1[0x5e];
          bVar3 = param_1[0x5c];
          uVar16 = *(undefined4 *)(param_1 + 0x8c);
          uVar31 = NEON_umin(CONCAT44(*(undefined4 *)(param_1 + 0x88),
                                      *(undefined4 *)(param_1 + 0x80)),
                             CONCAT44(*(undefined4 *)(param_1 + 0x28),
                                      *(undefined4 *)(param_1 + 0x28)),4);
          uVar22 = NEON_umin(CONCAT17((char)((uint)uVar16 >> 0x18),
                                      CONCAT16((char)((uint)uVar16 >> 0x10),
                                               CONCAT15((char)((uint)uVar16 >> 8),
                                                        CONCAT14((char)uVar16,
                                                                 *(undefined4 *)(param_1 + 0x84)))))
                             ,CONCAT44(*(undefined4 *)(param_1 + 0x2c),
                                       *(undefined4 *)(param_1 + 0x2c)),4);
          uVar18 = uVar31 & 0xffffffff;
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x60);
          uVar5 = *(undefined8 *)(param_1 + 0x70);
          uVar24 = (undefined1)((ulong)uVar5 >> 8);
          uVar25 = (undefined1)((ulong)uVar5 >> 0x10);
          uVar26 = (undefined1)((ulong)uVar5 >> 0x18);
          uVar27 = (undefined1)((ulong)uVar5 >> 0x20);
          uVar28 = (undefined1)((ulong)uVar5 >> 0x28);
          uVar29 = (undefined1)((ulong)uVar5 >> 0x30);
          uVar30 = (undefined1)((ulong)uVar5 >> 0x38);
          Var7 = *(unkbyte9 *)(param_1 + 0x68);
          Var6 = *(unkbyte9 *)(param_1 + 0x68);
          param_2[8] = (char)(uVar31 >> 0x20);
          param_2[9] = (char)(uVar31 >> 0x28);
          param_2[10] = (char)(uVar31 >> 0x30);
          param_2[0xb] = (char)(uVar31 >> 0x38);
          param_2[0xc] = (char)((ulong)uVar22 >> 0x20);
          param_2[0xd] = (char)((ulong)uVar22 >> 0x28);
          param_2[0xe] = (char)((ulong)uVar22 >> 0x30);
          param_2[0xf] = (char)((ulong)uVar22 >> 0x38);
          *param_2 = (char)uVar18;
          param_2[1] = (char)(uVar18 >> 8);
          param_2[2] = (char)(uVar18 >> 0x10);
          param_2[3] = (char)(uVar18 >> 0x18);
          param_2[4] = (char)uVar22;
          param_2[5] = (char)((ulong)uVar22 >> 8);
          param_2[6] = (char)((ulong)uVar22 >> 0x10);
          param_2[7] = (char)((ulong)uVar22 >> 0x18);
          auVar23[9] = uVar24;
          auVar23._0_9_ = Var6;
          auVar23[10] = uVar25;
          auVar23[0xb] = uVar26;
          auVar23[0xc] = uVar27;
          auVar23[0xd] = uVar28;
          auVar23[0xe] = uVar29;
          auVar23[0xf] = uVar30;
          auVar4[9] = uVar24;
          auVar4._0_9_ = Var7;
          auVar4[10] = uVar25;
          auVar4[0xb] = uVar26;
          auVar4[0xc] = uVar27;
          auVar4[0xd] = uVar28;
          auVar4[0xe] = uVar29;
          auVar4[0xf] = uVar30;
          auVar23 = NEON_ext(auVar23,auVar4,8,1);
          *(long *)(param_2 + 0x20) = auVar23._8_8_;
          *(long *)(param_2 + 0x18) = auVar23._0_8_;
          param_2[0x28] = cVar2;
          param_2[0x29] = bVar3 ^ 1;
          param_2[0x2a] = 0;
          *(undefined4 *)(param_2 + 0x2c) = uVar20;
          lVar10 = *param_3;
        }
        lVar13 = *(long *)(param_1 + 0x70) + 1;
        if (*(long *)(param_1 + 0x70) == -1) {
          lVar13 = -1;
        }
        *(long *)(param_1 + 0x70) = lVar13;
        param_1[0x30] = '@';
        param_1[0xdc] = '\0';
        param_1[0xdd] = '\0';
        param_1[0xde] = '\0';
        param_1[0xdf] = '\0';
        goto LAB_108150378;
      }
      uVar16 = 4;
      pcVar9 = "$base: short read";
    }
LAB_108150360:
    if (*pcVar9 != '$') {
      uVar16 = 0;
    }
  }
LAB_108150370:
  *(undefined4 *)(param_1 + 0xdc) = uVar16;
  *(undefined4 *)(param_1 + 0xfd80) = uVar20;
LAB_108150378:
  if (lVar10 != 0) {
    param_3[3] = (long)pcVar12 - lVar10;
  }
  return;
}



/* Entry: 1081504b8; end: 1081504eb;  */

ulong FUN_1081504b8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,ulong param_6)

{
  if (param_6 <= param_2) {
    param_2 = param_6;
  }
  if (param_2 != 0) {
    _memmove(param_1,param_5,param_2);
  }
  return param_2;
}



/* Entry: 1081504ec; end: 108150a43;  */

ulong FUN_1081504ec(undefined2 *param_1,ulong param_2,long param_3,long param_4,byte *param_5,
                   ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_4 == 0x400) {
    uVar2 = param_2 >> 1;
    if (param_6 <= param_2 >> 1) {
      uVar2 = param_6;
    }
    uVar1 = uVar2;
    for (; 3 < uVar2; uVar2 = uVar2 - 4) {
      *param_1 = *(undefined2 *)(param_3 + (ulong)*param_5 * 4);
      param_1[1] = *(undefined2 *)(param_3 + (ulong)param_5[1] * 4);
      param_1[2] = *(undefined2 *)(param_3 + (ulong)param_5[2] * 4);
      param_1[3] = *(undefined2 *)(param_3 + (ulong)param_5[3] * 4);
      param_5 = param_5 + 4;
      param_1 = param_1 + 4;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = *(undefined2 *)(param_3 + (ulong)*param_5 * 4);
      param_5 = param_5 + 1;
      param_1 = param_1 + 1;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 108150a44; end: 108151897;  */

char * FUN_108150a44(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  char *pcVar11;
  byte bVar12;
  char *pcVar13;
  byte *pbVar14;
  ushort *puVar15;
  long lVar16;
  char *pcVar17;
  char *pcVar18;
  byte *pbVar19;
  byte *pbVar20;
  ushort *puVar21;
  undefined4 uVar22;
  ulong uVar23;
  long lVar24;
  byte bVar25;
  uint uVar26;
  char *pcVar27;
  ulong uVar28;
  ushort *puVar29;
  undefined4 uVar30;
  ushort *puVar31;
  undefined8 uVar32;
  
  lVar16 = *param_2;
  if (lVar16 == 0) {
    pcVar17 = (char *)0x0;
    pcVar27 = (char *)0x0;
    iVar10 = *(int *)(param_1 + 0xec);
    lVar24 = 0;
  }
  else {
    pcVar27 = (char *)(lVar16 + param_2[3]);
    pcVar17 = (char *)(lVar16 + param_2[2]);
    iVar10 = *(int *)(param_1 + 0xec);
    lVar24 = lVar16;
  }
  if (iVar10 < 2) {
    uVar22 = 0;
    pcVar13 = (char *)0x0;
    if (iVar10 == 0) {
      if ((*(long *)(param_1 + 0x68) != 0) && (*(long *)(param_1 + 0x70) == 0)) goto LAB_108150d34;
      lVar1 = param_2[4] + ((long)pcVar27 - lVar24);
      if (CARRY8(param_2[4],(long)pcVar27 - lVar24)) {
        lVar1 = -1;
      }
      *(long *)(param_1 + 0x68) = lVar1;
      goto LAB_108150d34;
    }
    if (iVar10 == 1) goto LAB_108150d34;
    goto LAB_1081517a0;
  }
  uVar22 = 0;
  pcVar13 = (char *)0x0;
  if (iVar10 == 2) {
    do {
      pcVar18 = (char *)0x0;
      pcVar27 = (char *)0x0;
      if (lVar16 != 0) {
        pcVar27 = (char *)(lVar16 + param_2[3]);
        pcVar18 = (char *)(lVar16 + param_2[2]);
      }
      uVar22 = 0;
      uVar26 = *(uint *)(param_1 + 0xf8);
      pcVar13 = (char *)0x0;
      if ((int)uVar26 < 3) {
        if (1 < uVar26) {
          pcVar18 = pcVar27;
          if (uVar26 != 2) goto LAB_10815175c;
LAB_108150f18:
          puVar15 = (ushort *)0x0;
          puVar21 = (ushort *)0x0;
          if (lVar16 != 0) {
            puVar21 = (ushort *)(lVar16 + param_2[3]);
            puVar15 = (ushort *)(lVar16 + param_2[2]);
          }
          pcVar11 = (char *)0x0;
          uVar22 = 0;
          uVar26 = *(uint *)(param_1 + 0x104);
          if ((int)uVar26 < 4) {
            if (1 < uVar26) {
              puVar29 = puVar21;
              if (uVar26 == 2) {
LAB_10815114c:
                uVar22 = 2;
                if (puVar29 == puVar15) goto LAB_1081515c8;
                puVar21 = (ushort *)((long)puVar29 + 1);
                uVar4 = *puVar29;
                *(byte *)(param_1 + 0x5c) = (byte)uVar4 & 1;
                uVar26 = (byte)((byte)uVar4 >> 2) & 7;
                if (uVar26 == 2) {
                  *(undefined1 *)(param_1 + 0x5e) = 1;
                }
                else if (uVar26 - 3 < 2) {
                  *(undefined1 *)(param_1 + 0x5e) = 2;
                }
                else {
                  *(undefined1 *)(param_1 + 0x5e) = 0;
                }
LAB_108151310:
                if (1 < (long)puVar15 - (long)puVar21) {
                  puVar31 = puVar21 + 1;
                  uVar23 = (ulong)*puVar21;
LAB_1081515d4:
                  *(ulong *)(param_1 + 0x60) = (uVar23 & 0xffff) * 0x6baa80;
                  puVar21 = puVar31;
                  goto LAB_1081515e8;
                }
                *(undefined8 *)(param_1 + 0xfdd0) = 0;
                goto LAB_108151564;
              }
              if (uVar26 == 3) goto LAB_108151310;
              goto LAB_10815164c;
            }
            uVar22 = 1;
            if (puVar21 == puVar15) goto LAB_1081515c8;
            puVar29 = (ushort *)((long)puVar21 + 1);
            if ((byte)*puVar21 == 4) goto LAB_10815114c;
LAB_10815163c:
            pcVar11 = "#gif: bad graphic control";
            if (lVar16 != 0) goto LAB_108151640;
LAB_108151658:
            lVar24 = param_2[3];
          }
          else {
            if (uVar26 == 4) {
LAB_108151564:
              uVar22 = 4;
              if (puVar21 != puVar15) {
                uVar28 = *(ulong *)(param_1 + 0xfdd0);
                do {
                  *(ulong *)(param_1 + 0xfdd0) = uVar28 & 0xffffffffffffff;
                  puVar31 = (ushort *)((long)puVar21 + 1);
                  uVar23 = (ulong)(byte)*puVar21 << (uVar28 >> 0x38 & 0x3f) |
                           uVar28 & 0xffffffffffffff;
                  *(ulong *)(param_1 + 0xfdd0) = uVar23;
                  if (uVar28 >> 0x38 == 8) {
                    puVar31 = (ushort *)((long)puVar21 + 1);
                    goto LAB_1081515d4;
                  }
                  uVar28 = uVar23 | (uVar28 & 0xff00000000000000) + 0x800000000000000;
                  *(ulong *)(param_1 + 0xfdd0) = uVar28;
                  puVar21 = puVar31;
                } while (puVar31 != puVar15);
                uVar22 = 4;
              }
LAB_1081515c8:
              pcVar11 = "$base: short read";
              puVar21 = puVar15;
            }
            else {
              if (uVar26 == 5) {
LAB_1081515e8:
                uVar22 = 5;
                if (puVar21 == puVar15) goto LAB_1081515c8;
                *(byte *)(param_1 + 0x5d) = (byte)*puVar21;
                puVar31 = (ushort *)((long)puVar21 + 1);
              }
              else {
                puVar31 = puVar21;
                if (uVar26 != 6) goto LAB_10815164c;
              }
              pcVar11 = "$base: short read";
              uVar22 = 6;
              puVar21 = puVar15;
              if (puVar31 != puVar15) {
                uVar22 = 0;
                pcVar11 = (char *)0x0;
                puVar29 = (ushort *)((long)puVar31 + 1);
                puVar21 = puVar29;
                if ((byte)*puVar31 != 0) goto LAB_10815163c;
              }
            }
LAB_10815164c:
            *(undefined4 *)(param_1 + 0x104) = uVar22;
            puVar29 = puVar21;
            if (lVar16 == 0) goto LAB_108151658;
LAB_108151640:
            lVar24 = (long)puVar29 - lVar16;
            param_2[3] = lVar24;
          }
          uVar30 = 2;
          goto joined_r0x000108151670;
        }
        pcVar11 = "$base: short read";
        uVar30 = 1;
        if (pcVar27 != pcVar18) {
          cVar3 = *pcVar27;
          param_2[3] = (long)(pcVar27 + (1 - lVar16));
          if (cVar3 == -1) goto LAB_108150e9c;
          if (cVar3 != -7) goto LAB_108150dc8;
          goto LAB_108150f18;
        }
        goto LAB_108151744;
      }
      if (uVar26 != 3) {
        pcVar18 = pcVar27;
        if (uVar26 == 4) {
LAB_108150dc8:
          pbVar14 = (byte *)0x0;
          pbVar19 = (byte *)0x0;
          if (lVar16 != 0) {
            pbVar19 = (byte *)(lVar16 + param_2[3]);
            pbVar14 = (byte *)(lVar16 + param_2[2]);
          }
          pbVar20 = pbVar19;
          if (*(uint *)(param_1 + 0xfc) < 2) goto LAB_108150e08;
          bVar6 = true;
          if (*(uint *)(param_1 + 0xfc) == 2) {
            uVar23 = *(ulong *)(param_1 + 0xfdb8);
            lVar24 = uVar23 - ((long)pbVar14 - (long)pbVar19);
            if (uVar23 < (ulong)((long)pbVar14 - (long)pbVar19) || lVar24 == 0) {
              do {
                pbVar20 = pbVar19 + uVar23;
LAB_108150e08:
                if (pbVar20 == pbVar14) {
                  bVar6 = false;
                  pcVar11 = "$base: short read";
                  *(undefined4 *)(param_1 + 0xfc) = 1;
                  goto joined_r0x000108151518;
                }
                pbVar19 = pbVar20 + 1;
                uVar23 = (ulong)*pbVar20;
                if (uVar23 == 0) {
                  pcVar11 = (char *)0x0;
                  bVar6 = true;
                  *(uint *)(param_1 + 0xfc) = (uint)*pbVar20;
                  pbVar14 = pbVar19;
                  goto joined_r0x000108151518;
                }
                *(ulong *)(param_1 + 0xfdb8) = uVar23;
                lVar24 = uVar23 - ((long)pbVar14 - (long)pbVar19);
              } while (uVar23 < (ulong)((long)pbVar14 - (long)pbVar19) || lVar24 == 0);
            }
            bVar6 = false;
            *(long *)(param_1 + 0xfdb8) = lVar24;
            pcVar11 = "$base: short read";
            *(undefined4 *)(param_1 + 0xfc) = 2;
          }
          else {
            pcVar11 = (char *)0x0;
            *(undefined4 *)(param_1 + 0xfc) = 0;
            pbVar14 = pbVar19;
          }
joined_r0x000108151518:
          if (lVar16 == 0) {
            lVar24 = param_2[3];
          }
          else {
            lVar24 = (long)pbVar14 - lVar16;
            param_2[3] = lVar24;
          }
          uVar22 = 0;
          pcVar18 = (char *)(lVar16 + lVar24);
          pcVar13 = (char *)0x0;
          uVar30 = 4;
          if (!bVar6) goto LAB_108151744;
        }
        goto LAB_10815175c;
      }
LAB_108150e9c:
      puVar21 = (ushort *)0x0;
      puVar15 = (ushort *)0x0;
      lVar24 = 0;
      if (lVar16 != 0) {
        puVar15 = (ushort *)(lVar16 + param_2[3]);
        puVar21 = (ushort *)(lVar16 + param_2[2]);
        lVar24 = lVar16;
      }
      if (*(int *)(param_1 + 0x100) == 0) {
        bVar12 = 0;
        bVar25 = 0;
        bVar8 = 0;
        bVar7 = 0;
        pcVar27 = "@base: metadata reported";
        bVar9 = 0;
        if (*(int *)(param_1 + 0x34) == 0) goto code_r0x000108150f9c;
        goto LAB_1081514a4;
      }
      bVar12 = *(byte *)(param_1 + 0xfdc0);
      bVar25 = *(byte *)(param_1 + 0xfdc1);
      bVar8 = *(byte *)(param_1 + 0xfdc2);
      bVar7 = *(byte *)(param_1 + 0xfdc3);
      bVar9 = *(byte *)(param_1 + 0xfdc4);
      puVar31 = puVar15;
      bVar5 = bVar12;
      switch(*(int *)(param_1 + 0x100)) {
      case 1:
code_r0x000108150f9c:
        uVar22 = 1;
        pcVar11 = "$base: short read";
        if (puVar15 == puVar21) break;
        puVar31 = (ushort *)((long)puVar15 + 1);
        bVar12 = (byte)*puVar15;
        uVar23 = (ulong)bVar12;
        puVar15 = puVar31;
        if (bVar12 != 0) {
          if (bVar12 != 0xb) {
            *(ulong *)(param_1 + 0xfdc8) = uVar23;
            lVar24 = uVar23 - ((long)puVar21 - (long)puVar31);
            if ((ulong)((long)puVar21 - (long)puVar31) <= uVar23 && lVar24 != 0)
            goto code_r0x0001081512f8;
            goto LAB_1081513d0;
          }
          bVar12 = 0;
          bVar9 = 1;
          bVar7 = 1;
          bVar8 = 1;
          bVar25 = 1;
          goto code_r0x0001081517d0;
        }
        *(undefined4 *)(param_1 + 0x100) = 0;
        pcVar11 = (char *)0x0;
        goto joined_r0x0001081510fc;
      case 2:
        uVar23 = *(ulong *)(param_1 + 0xfdc8);
        lVar24 = uVar23 - ((long)puVar21 - (long)puVar15);
        if ((ulong)((long)puVar21 - (long)puVar15) <= uVar23 && lVar24 != 0) {
code_r0x0001081512f8:
          *(long *)(param_1 + 0xfdc8) = lVar24;
          uVar22 = 2;
          goto LAB_108151300;
        }
LAB_1081513d0:
        puVar15 = (ushort *)((long)puVar15 + uVar23);
        goto LAB_1081513d4;
      case 3:
code_r0x0001081517d0:
        do {
          if (puVar31 == puVar21) {
            uVar22 = 3;
            goto LAB_108151300;
          }
          bVar6 = false;
          puVar15 = (ushort *)((long)puVar31 + 1);
          bVar5 = (byte)*puVar31;
          if ((bVar25 & 1) == 0) {
            if ((bVar8 & 1) != 0) goto LAB_108151838;
LAB_108151804:
            bVar8 = false;
            if ((bVar7 & 1) != 0) goto LAB_10815180c;
LAB_108151858:
            bVar7 = false;
            bVar25 = bVar6;
          }
          else {
            bVar6 = bVar5 == (&UNK_10df02a88)[bVar12];
            if ((bVar8 & 1) == 0) goto LAB_108151804;
LAB_108151838:
            bVar8 = bVar5 == (&UNK_10df02a93)[bVar12];
            if ((bVar7 & 1) == 0) goto LAB_108151858;
LAB_10815180c:
            bVar7 = bVar5 == (&UNK_10df02a9e)[bVar12];
            bVar25 = bVar6;
          }
          bVar2 = bVar9 & 1;
          bVar9 = false;
          if (bVar2 != 0) {
            bVar9 = bVar5 == (&UNK_10df02aa9)[bVar12];
          }
          bVar12 = bVar12 + 1;
          puVar31 = puVar15;
        } while (bVar12 < 0xb);
        if ((bool)bVar25 != false || (bool)bVar8 != false) goto code_r0x000108150ff4;
        if (*(byte *)(param_1 + 0x30) < 0x20) {
          if (((bool)bVar7 != false) && (uVar22 = 0x49434350, (*(byte *)(param_1 + 0x31) & 1) != 0))
          {
LAB_1081510d0:
            *(undefined4 *)(param_1 + 0x34) = uVar22;
            lVar1 = param_2[4] + ((long)puVar15 - lVar24);
            if (CARRY8(param_2[4],(long)puVar15 - lVar24)) {
              lVar1 = -1;
            }
            *(long *)(param_1 + 0x38) = lVar1;
            *(undefined1 *)(param_1 + 0x30) = 0x10;
            pcVar11 = "@base: metadata reported";
            *(undefined4 *)(param_1 + 0x100) = 0;
            goto joined_r0x0001081510fc;
          }
          if ((bool)bVar9 == false) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
            uVar22 = 0x584d5020;
            if ((*(byte *)(param_1 + 0x32) & 1) != 0) goto LAB_1081510d0;
          }
        }
        bVar8 = 0;
        bVar25 = 0;
        goto LAB_1081513d4;
      case 4:
code_r0x000108150ff4:
        uVar22 = 4;
        pcVar11 = "$base: short read";
        if (puVar15 != puVar21) {
          puVar31 = (ushort *)((long)puVar15 + 1);
          bVar12 = (byte)*puVar15;
          uVar23 = (ulong)bVar12;
          bVar5 = 3;
          if (uVar23 != 3) {
            *(ulong *)(param_1 + 0xfdc8) = uVar23;
            lVar24 = uVar23 - ((long)puVar21 - (long)puVar31);
            puVar15 = puVar31;
            if (uVar23 < (ulong)((long)puVar21 - (long)puVar31) || lVar24 == 0) goto LAB_1081513d0;
            goto code_r0x000108151098;
          }
          goto code_r0x000108151018;
        }
        break;
      case 5:
        uVar23 = *(ulong *)(param_1 + 0xfdc8);
        lVar24 = uVar23 - ((long)puVar21 - (long)puVar15);
        if (uVar23 < (ulong)((long)puVar21 - (long)puVar15) || lVar24 == 0) goto LAB_1081513d0;
code_r0x000108151098:
        *(long *)(param_1 + 0xfdc8) = lVar24;
        uVar22 = 5;
        goto LAB_108151300;
      case 6:
code_r0x000108151018:
        bVar12 = bVar5;
        uVar22 = 6;
        pcVar11 = "$base: short read";
        if (puVar31 != puVar21) {
          puVar15 = (ushort *)((long)puVar31 + 1);
          if ((byte)*puVar31 != 1) {
            uVar23 = 2;
            *(undefined8 *)(param_1 + 0xfdc8) = 2;
            lVar24 = 2 - ((long)puVar21 - (long)puVar15);
            if (2 < (ulong)((long)puVar21 - (long)puVar15) || lVar24 == 0) goto LAB_1081513d0;
            goto code_r0x000108151118;
          }
          goto code_r0x000108151038;
        }
        break;
      case 7:
        uVar23 = *(ulong *)(param_1 + 0xfdc8);
        lVar24 = uVar23 - ((long)puVar21 - (long)puVar15);
        if (uVar23 < (ulong)((long)puVar21 - (long)puVar15) || lVar24 == 0) goto LAB_1081513d0;
code_r0x000108151118:
        *(long *)(param_1 + 0xfdc8) = lVar24;
        uVar22 = 7;
LAB_108151300:
        pcVar11 = "$base: short read";
        break;
      case 8:
code_r0x000108151038:
        if ((long)puVar21 - (long)puVar15 < 2) {
          *(undefined8 *)(param_1 + 0xfdc8) = 0;
          goto code_r0x00010815167c;
        }
        puVar21 = puVar15 + 1;
        uVar28 = (ulong)*puVar15;
LAB_108151048:
        iVar10 = (int)uVar28;
        *(int *)(param_1 + 0x50) = iVar10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        puVar15 = puVar21;
        if (iVar10 - 1U < 0xffff) {
          *(int *)(param_1 + 0x50) = iVar10 + 1;
        }
LAB_1081513d4:
        param_2[3] = (long)puVar15 - lVar16;
code_r0x0001081513dc:
        pbVar14 = (byte *)0x0;
        pbVar19 = (byte *)0x0;
        if (lVar16 != 0) {
          pbVar19 = (byte *)(lVar16 + param_2[3]);
          pbVar14 = (byte *)(lVar16 + param_2[2]);
        }
        pbVar20 = pbVar19;
        if (*(uint *)(param_1 + 0xfc) < 2) goto LAB_10815141c;
        bVar6 = true;
        if (*(uint *)(param_1 + 0xfc) == 2) {
          uVar23 = *(ulong *)(param_1 + 0xfdb8);
          lVar24 = uVar23 - ((long)pbVar14 - (long)pbVar19);
          if (uVar23 < (ulong)((long)pbVar14 - (long)pbVar19) || lVar24 == 0) {
            do {
              pbVar20 = pbVar19 + uVar23;
LAB_10815141c:
              if (pbVar20 == pbVar14) {
                bVar6 = false;
                pcVar11 = "$base: short read";
                *(undefined4 *)(param_1 + 0xfc) = 1;
                pbVar19 = pbVar14;
                goto joined_r0x000108151534;
              }
              pbVar19 = pbVar20 + 1;
              uVar23 = (ulong)*pbVar20;
              if (uVar23 == 0) {
                bVar6 = true;
                *(undefined4 *)(param_1 + 0xfc) = 0;
                pcVar11 = (char *)0x0;
                goto joined_r0x000108151534;
              }
              *(ulong *)(param_1 + 0xfdb8) = uVar23;
              lVar24 = uVar23 - ((long)pbVar14 - (long)pbVar19);
            } while (uVar23 < (ulong)((long)pbVar14 - (long)pbVar19) || lVar24 == 0);
          }
          bVar6 = false;
          *(long *)(param_1 + 0xfdb8) = lVar24;
          pcVar11 = "$base: short read";
          *(undefined4 *)(param_1 + 0xfc) = 2;
          pbVar19 = pbVar14;
joined_r0x000108151534:
          if (lVar16 != 0) goto LAB_108151488;
LAB_108151458:
          lVar24 = param_2[3];
        }
        else {
          pcVar11 = (char *)0x0;
          *(undefined4 *)(param_1 + 0xfc) = 0;
          if (lVar16 == 0) goto LAB_108151458;
LAB_108151488:
          lVar24 = (long)pbVar19 - lVar16;
          param_2[3] = lVar24;
        }
        uVar22 = 10;
        puVar15 = (ushort *)(lVar16 + lVar24);
        pcVar27 = (char *)0x0;
        puVar21 = puVar15;
        if (!bVar6) break;
LAB_1081514a4:
        *(undefined4 *)(param_1 + 0x100) = 0;
        pcVar11 = pcVar27;
        goto joined_r0x0001081510fc;
      case 9:
code_r0x00010815167c:
        uVar22 = 9;
        pcVar11 = "$base: short read";
        if (puVar15 != puVar21) {
          uVar23 = *(ulong *)(param_1 + 0xfdc8);
          do {
            *(ulong *)(param_1 + 0xfdc8) = uVar23 & 0xffffffffffffff;
            puVar31 = (ushort *)((long)puVar15 + 1);
            uVar28 = (ulong)(byte)*puVar15 << (uVar23 >> 0x38 & 0x3f) | uVar23 & 0xffffffffffffff;
            *(ulong *)(param_1 + 0xfdc8) = uVar28;
            if (uVar23 >> 0x38 == 8) {
              puVar21 = (ushort *)((long)puVar15 + 1);
              goto LAB_108151048;
            }
            uVar23 = uVar28 | (uVar23 & 0xff00000000000000) + 0x800000000000000;
            *(ulong *)(param_1 + 0xfdc8) = uVar23;
            uVar22 = 9;
            puVar15 = puVar31;
          } while (puVar31 != puVar21);
        }
        break;
      case 10:
        goto code_r0x0001081513dc;
      default:
        uVar22 = 0;
        pcVar11 = (char *)0x0;
        goto LAB_1081516f4;
      }
      puVar15 = puVar21;
      if (*pcVar11 != '$') {
        uVar22 = 0;
      }
LAB_1081516f4:
      *(undefined4 *)(param_1 + 0x100) = uVar22;
      *(byte *)(param_1 + 0xfdc0) = bVar12;
      *(byte *)(param_1 + 0xfdc1) = bVar25 & 1;
      *(byte *)(param_1 + 0xfdc2) = bVar8 & 1;
      *(byte *)(param_1 + 0xfdc3) = bVar7 & 1;
      *(byte *)(param_1 + 0xfdc4) = bVar9 & 1;
joined_r0x0001081510fc:
      if (lVar16 == 0) {
        lVar24 = param_2[3];
        uVar30 = 3;
      }
      else {
        lVar24 = (long)puVar15 - lVar16;
        param_2[3] = lVar24;
        uVar30 = 3;
      }
joined_r0x000108151670:
      uVar22 = 0;
      pcVar18 = (char *)(lVar16 + lVar24);
      pcVar13 = (char *)0x0;
      if (pcVar11 != (char *)0x0) {
LAB_108151744:
        uVar22 = uVar30;
        pcVar13 = pcVar11;
        if (*pcVar11 != '$') {
          uVar22 = 0;
        }
      }
LAB_10815175c:
      *(undefined4 *)(param_1 + 0xf8) = uVar22;
      if (lVar16 == 0) {
        pcVar27 = (char *)param_2[3];
      }
      else {
        param_2[3] = (long)pcVar18 - lVar16;
        pcVar27 = (char *)(lVar16 + ((long)pcVar18 - lVar16));
      }
      if (pcVar13 != (char *)0x0) {
        uVar22 = 2;
        pcVar17 = pcVar27;
        goto LAB_10815178c;
      }
LAB_108150d34:
      if (pcVar27 == pcVar17) {
        uVar22 = 1;
        pcVar13 = "$base: short read";
        goto LAB_10815178c;
      }
      pcVar18 = pcVar27 + 1;
      if (*pcVar27 != '!') goto LAB_10815119c;
      param_2[3] = (long)pcVar18 - lVar16;
    } while( true );
  }
  if (iVar10 != 3) goto LAB_1081517a0;
  if (lVar16 != 0) goto LAB_108150ac0;
LAB_1081511d0:
  puVar31 = (ushort *)0x0;
  puVar15 = (ushort *)0x0;
  uVar26 = *(uint *)(param_1 + 0x108);
  puVar21 = puVar15;
  if (4 < (int)uVar26) goto LAB_1081511f0;
LAB_108150ae4:
  bVar6 = true;
  uVar22 = 0;
  pcVar13 = (char *)0x0;
  if (2 < (int)uVar26) {
    if (uVar26 != 3) {
      if (uVar26 != 4) goto LAB_108150c9c;
joined_r0x000108150b40:
      if (puVar15 == puVar31) {
        uVar22 = 4;
        goto LAB_108151550;
      }
      uVar28 = *(ulong *)(param_1 + 0xfdd8);
      pcVar13 = "$base: short read";
      do {
        *(ulong *)(param_1 + 0xfdd8) = uVar28 & 0xffffffffffffff;
        puVar21 = (ushort *)((long)puVar15 + 1);
        uVar23 = (ulong)(byte)*puVar15 << (uVar28 >> 0x38 & 0x3f) | uVar28 & 0xffffffffffffff;
        *(ulong *)(param_1 + 0xfdd8) = uVar23;
        if (uVar28 >> 0x38 == 8) {
          puVar21 = (ushort *)((long)puVar15 + 1);
          goto LAB_108150c3c;
        }
        uVar28 = uVar23 | (uVar28 & 0xff00000000000000) + 0x800000000000000;
        *(ulong *)(param_1 + 0xfdd8) = uVar28;
        puVar15 = puVar21;
      } while (puVar21 != puVar31);
      bVar6 = false;
      uVar22 = 4;
      puVar15 = puVar31;
      goto LAB_108150c9c;
    }
LAB_108150c2c:
    if ((long)puVar31 - (long)puVar15 < 2) {
      *(undefined8 *)(param_1 + 0xfdd8) = 0;
      goto joined_r0x000108150b40;
    }
    puVar21 = puVar15 + 1;
    uVar23 = (ulong)*puVar15;
LAB_108150c3c:
    *(int *)(param_1 + 0x84) = (int)uVar23;
    goto LAB_108150c40;
  }
  if (uVar26 < 2) {
    if (1 < (long)puVar31 - (long)puVar15) {
      puVar21 = puVar15 + 1;
      uVar23 = (ulong)*puVar15;
LAB_108150c28:
      *(int *)(param_1 + 0x80) = (int)uVar23;
      puVar15 = puVar21;
      goto LAB_108150c2c;
    }
    *(undefined8 *)(param_1 + 0xfdd8) = 0;
  }
  else if (uVar26 != 2) goto LAB_108150c9c;
  if (puVar15 != puVar31) {
    uVar28 = *(ulong *)(param_1 + 0xfdd8);
    pcVar13 = "$base: short read";
    do {
      *(ulong *)(param_1 + 0xfdd8) = uVar28 & 0xffffffffffffff;
      puVar21 = (ushort *)((long)puVar15 + 1);
      uVar23 = (ulong)(byte)*puVar15 << (uVar28 >> 0x38 & 0x3f) | uVar28 & 0xffffffffffffff;
      *(ulong *)(param_1 + 0xfdd8) = uVar23;
      if (uVar28 >> 0x38 == 8) {
        puVar21 = (ushort *)((long)puVar15 + 1);
        goto LAB_108150c28;
      }
      uVar28 = uVar23 | (uVar28 & 0xff00000000000000) + 0x800000000000000;
      *(ulong *)(param_1 + 0xfdd8) = uVar28;
      puVar15 = puVar21;
    } while (puVar21 != puVar31);
    bVar6 = false;
    uVar22 = 2;
    puVar15 = puVar31;
    goto LAB_108150c9c;
  }
  uVar22 = 2;
LAB_108151550:
  bVar6 = false;
  pcVar13 = "$base: short read";
  puVar15 = puVar31;
LAB_108150c9c:
  *(undefined4 *)(param_1 + 0x108) = uVar22;
  if (lVar16 == 0) {
    pcVar17 = (char *)param_2[3];
  }
  else {
    param_2[3] = (long)puVar15 - lVar16;
    pcVar17 = (char *)(lVar16 + ((long)puVar15 - lVar16));
  }
  if (bVar6) {
    pcVar13 = (char *)0x0;
    uVar22 = 0;
    pcVar27 = pcVar17;
  }
  else {
    uVar22 = 3;
LAB_10815178c:
    pcVar27 = pcVar17;
    if (*pcVar13 != '$') {
      uVar22 = 0;
    }
  }
LAB_1081517a0:
  *(undefined4 *)(param_1 + 0xec) = uVar22;
  if (lVar16 != 0) {
    param_2[3] = (long)pcVar27 - lVar16;
  }
  return pcVar13;
LAB_10815119c:
  if (*pcVar27 != ',') {
    if (*(char *)(param_1 + 0x47) == '\x01') {
      *(undefined1 *)(param_1 + 0x47) = 0;
      lVar24 = *(long *)(param_1 + 0x78) + 1;
      if (*(long *)(param_1 + 0x78) == -1) {
        lVar24 = -1;
      }
      *(long *)(param_1 + 0x78) = lVar24;
    }
    pcVar13 = (char *)0x0;
    uVar22 = 0;
    *(undefined1 *)(param_1 + 0x30) = 0x60;
    pcVar27 = pcVar18;
    goto LAB_1081517a0;
  }
  if (*(char *)(param_1 + 0x47) == '\x01') {
    *(undefined1 *)(param_1 + 0x47) = 0;
    lVar24 = *(long *)(param_1 + 0x78) + 1;
    if (*(long *)(param_1 + 0x78) == -1) {
      lVar24 = -1;
    }
    *(long *)(param_1 + 0x78) = lVar24;
  }
  param_2[3] = (long)pcVar18 - lVar16;
  if (lVar16 == 0) goto LAB_1081511d0;
LAB_108150ac0:
  puVar15 = (ushort *)(lVar16 + param_2[3]);
  puVar31 = (ushort *)(lVar16 + param_2[2]);
  uVar26 = *(uint *)(param_1 + 0x108);
  puVar21 = puVar15;
  if ((int)uVar26 < 5) goto LAB_108150ae4;
LAB_1081511f0:
  bVar6 = true;
  pcVar13 = (char *)0x0;
  uVar22 = 0;
  puVar15 = puVar21;
  if ((int)uVar26 < 7) {
    if (uVar26 == 5) {
LAB_108150c40:
      if (1 < (long)puVar31 - (long)puVar21) {
        puVar15 = puVar21 + 1;
        uVar23 = (ulong)*puVar21;
LAB_108150c50:
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x80) + (int)uVar23;
        puVar21 = puVar15;
        goto LAB_108150c5c;
      }
      *(undefined8 *)(param_1 + 0xfdd8) = 0;
    }
    else if (uVar26 != 6) goto LAB_108150c9c;
    if (puVar21 == puVar31) {
      uVar22 = 6;
      goto LAB_108151550;
    }
    uVar28 = *(ulong *)(param_1 + 0xfdd8);
    pcVar13 = "$base: short read";
    do {
      *(ulong *)(param_1 + 0xfdd8) = uVar28 & 0xffffffffffffff;
      puVar15 = (ushort *)((long)puVar21 + 1);
      uVar23 = (ulong)(byte)*puVar21 << (uVar28 >> 0x38 & 0x3f) | uVar28 & 0xffffffffffffff;
      *(ulong *)(param_1 + 0xfdd8) = uVar23;
      if (uVar28 >> 0x38 == 8) {
        puVar15 = (ushort *)((long)puVar21 + 1);
        goto LAB_108150c50;
      }
      uVar28 = uVar23 | (uVar28 & 0xff00000000000000) + 0x800000000000000;
      *(ulong *)(param_1 + 0xfdd8) = uVar28;
      puVar21 = puVar15;
    } while (puVar15 != puVar31);
    bVar6 = false;
    uVar22 = 6;
    puVar15 = puVar31;
  }
  else {
    if (uVar26 == 7) {
LAB_108150c5c:
      if (1 < (long)puVar31 - (long)puVar21) {
        puVar15 = puVar21 + 1;
        uVar23 = (ulong)*puVar21;
LAB_108150c6c:
        iVar10 = *(int *)(param_1 + 0x84) + (int)uVar23;
        *(int *)(param_1 + 0x8c) = iVar10;
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x80);
        if ((*(long *)(param_1 + 0x70) == 0) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) {
          uVar32 = NEON_umax(*(undefined8 *)(param_1 + 0x28),
                             CONCAT44(iVar10,*(undefined4 *)(param_1 + 0x88)),4);
          *(undefined8 *)(param_1 + 0x28) = uVar32;
        }
        uVar22 = 0;
        pcVar13 = (char *)0x0;
        bVar6 = true;
        goto LAB_108150c9c;
      }
      *(undefined8 *)(param_1 + 0xfdd8) = 0;
    }
    else if (uVar26 != 8) goto LAB_108150c9c;
    if (puVar21 == puVar31) {
      uVar22 = 8;
      goto LAB_108151550;
    }
    uVar28 = *(ulong *)(param_1 + 0xfdd8);
    pcVar13 = "$base: short read";
    do {
      *(ulong *)(param_1 + 0xfdd8) = uVar28 & 0xffffffffffffff;
      puVar15 = (ushort *)((long)puVar21 + 1);
      uVar23 = (ulong)(byte)*puVar21 << (uVar28 >> 0x38 & 0x3f) | uVar28 & 0xffffffffffffff;
      *(ulong *)(param_1 + 0xfdd8) = uVar23;
      if (uVar28 >> 0x38 == 8) {
        puVar15 = (ushort *)((long)puVar21 + 1);
        goto LAB_108150c6c;
      }
      uVar28 = uVar23 | (uVar28 & 0xff00000000000000) + 0x800000000000000;
      *(ulong *)(param_1 + 0xfdd8) = uVar28;
      puVar21 = puVar15;
    } while (puVar15 != puVar31);
    bVar6 = false;
    uVar22 = 8;
    puVar15 = puVar31;
  }
  goto LAB_108150c9c;
}



/* Entry: 108151898; end: 1081518ab;  */

void FUN_108151898(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  *plVar1 = (long)(plVar1 + 6);
  plVar1[1] = 0x400;
  return;
}



/* Entry: 1081518ac; end: 10815191f;  */

bool FUN_1081518ac(long *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[5];
  plVar2 = (long *)plVar4[5];
  (**(code **)(*plVar2 + 0x10))(plVar2,plVar4 + 6,0x400);
  bVar1 = ((ulong)plVar2 & 1) == 0;
  if (bVar1) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x25;
    (*(code *)*puVar3)(param_1);
  }
  else {
    *plVar4 = (long)(plVar4 + 6);
    plVar4[1] = 0x400;
  }
  return !bVar1;
}



/* Entry: 108151920; end: 1081519e7;  */

void FUN_108151920(long *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = param_1[5];
  if (*(long *)(lVar3 + 8) != 0x400) {
    plVar1 = *(long **)(lVar3 + 0x28);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3 + 0x30,0x400 - *(long *)(lVar3 + 8));
    if (((ulong)plVar1 & 1) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x25;
      UNRECOVERED_JUMPTABLE = (code *)*puVar2;
      goto LAB_108151984;
    }
  }
  param_1 = *(long **)(lVar3 + 0x28);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
LAB_108151984:
                    /* WARNING: Could not recover jumptable at 0x00010815198c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



/* Entry: 1081519e8; end: 1081519ff;  */

void FUN_1081519e8(long param_1,long *param_2,undefined4 *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  char cVar4;
  code *pcVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  long lVar9;
  undefined4 uVar10;
  int *piVar11;
  bool bVar12;
  long *plVar13;
  undefined4 uVar14;
  long *plStack_178;
  long *plStack_170;
  undefined1 auStack_168 [192];
  long *plStack_a8;
  int *piStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  int *piStack_88;
  long lStack_80;
  long lStack_78;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if (((((int)*(uint *)(param_2 + 4) < 1) ||
       (((int)*(uint *)((long)param_2 + 0x24) < 1 || *(uint *)(param_2 + 4) >> 0x1d != 0) ||
        *(uint *)((long)param_2 + 0x24) >> 0x1d != 0)) || ((int)param_2[3] == 0)) ||
     ((*(int *)((long)param_2 + 0x1c) == 0 || (*param_2 == 0)))) {
LAB_108151a50:
    *extraout_x8 = 0;
    return;
  }
  plVar13 = (long *)param_2[1];
  plVar6 = param_2 + 2;
  func_0x0001078bdb50();
  if (plVar13 < plVar6) goto LAB_108151a50;
  plVar13 = (long *)0x748;
  __Znwm();
  plVar6 = plVar13 + 0x41;
  _bzero(plVar13 + 0x42,0xc0);
  plVar13[0x5f] = param_1;
  plVar13[0x5c] = (long)FUN_108151898;
  plVar13[0x5d] = (long)FUN_1081518ac;
  plVar13[0x5e] = (long)FUN_108151920;
  *(undefined1 *)(plVar13 + 0xe0) = 0;
  *(undefined1 *)(plVar13 + 0xe3) = 0;
  *(undefined1 *)(plVar13 + 0xe4) = 0;
  *(undefined1 *)(plVar13 + 0xe7) = 0;
  *(undefined1 *)(plVar13 + 0xe8) = 0;
  FUN_1081d508c(plVar6);
  *plVar13 = (long)plVar6;
  plVar13[0x41] = 0x108151990;
  FUN_1081b0180(plVar13,0x3e,0x208);
  plVar13[5] = (long)(plVar13 + 0x5a);
  puVar7 = auStack_168;
  plVar13[0x59] = plVar13[0x58];
  plVar13[0x58] = plVar13[0x57];
  plVar13[0x57] = plVar13[0x56];
  plVar13[0x56] = (long)puVar7;
  plStack_170 = plVar6;
  plStack_a8 = plVar13;
  _setjmp();
  if ((int)puVar7 != 0) {
code_r0x000108151b70:
    *extraout_x8 = 0;
    goto LAB_108151e4c;
  }
  piStack_88 = (int *)0x0;
  lStack_80 = 0;
  lStack_78 = 0;
  *(undefined1 *)(plVar13 + 0xe8) = 0;
  iVar1 = (int)param_2[3];
  uVar2 = *(uint *)((long)param_2 + 0x1c);
  if (iVar1 == 5) {
    bVar12 = false;
    uVar10 = 4;
    uVar14 = 7;
  }
  else {
    bVar12 = param_3[2] != 1 || uVar2 != 3;
    if (iVar1 == 4 && bVar12) {
      uVar14 = 0xc;
    }
    else if (iVar1 == 6 && bVar12) {
      uVar14 = 0xd;
    }
    else {
      uVar14 = 1;
      uVar10 = 1;
      bVar12 = true;
      switch(iVar1) {
      case 0:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
        func_0x000108152bec();
        goto code_r0x000108151b70;
      case 1:
      case 0xe:
      case 0x1a:
        goto LAB_108151d48;
      case 2:
      case 9:
      case 10:
      case 0xb:
      case 0x11:
        uStack_90 = (ulong)*(uint *)(param_2 + 4) | 0x100000000;
        piStack_a0 = (int *)0x0;
        uStack_98 = 0x300000005;
        func_0x000108152bf4();
        func_0x000108152bbc();
        uVar14 = 7;
        break;
      case 3:
      case 4:
      case 6:
      case 7:
      case 8:
      case 0xc:
      case 0xd:
      case 0xf:
      case 0x10:
      case 0x12:
      case 0x18:
      case 0x19:
        uStack_98 = 0x200000004;
        if (param_3[2] != 1 || uVar2 != 3) {
          uStack_98 = (ulong)uVar2 << 0x20 | 4;
        }
        uStack_90 = (ulong)*(uint *)(param_2 + 4) | 0x100000000;
        piStack_a0 = (int *)0x0;
        func_0x000108152bf4();
        func_0x000108152bbc();
        uVar14 = 0xc;
        break;
      default:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x108151e60);
        (*pcVar5)();
      }
      *(undefined1 *)(plVar13 + 0xe8) = 1;
      uVar2 = *(uint *)(param_2 + 4);
      piVar11 = (int *)param_2[2];
      if (piVar11 != (int *)0x0) {
        do {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar12) {
            *piVar11 = *piVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_98 = param_2[3];
      uStack_90 = (ulong)uVar2 | 0x100000000;
      if ((char)plVar13[0xe3] == '\x01') {
        piStack_a0 = piVar11;
        func_0x0001078bddd4(plVar13 + 0xe0,&piStack_a0);
      }
      else {
        piStack_a0 = (int *)0x0;
        plVar13[0xe0] = (long)piVar11;
        plVar13[0xe1] = uStack_98;
        plVar13[0xe2] = uStack_90;
        *(undefined1 *)(plVar13 + 0xe3) = 1;
      }
      func_0x000108152bbc();
      if ((char)plVar13[0xe7] == '\x01') {
        func_0x000108152830(plVar13 + 0xe4,&piStack_88);
      }
      else {
        if (piStack_88 != (int *)0x0) {
          do {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piStack_88,0x10);
            if (bVar12) {
              *piStack_88 = *piStack_88 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar13[0xe4] = (long)piStack_88;
        plVar13[0xe6] = lStack_78;
        plVar13[0xe5] = lStack_80;
        *(undefined1 *)(plVar13 + 0xe7) = 1;
      }
    }
    uVar10 = 4;
    bVar12 = false;
  }
LAB_108151d48:
  plVar13[6] = param_2[4];
  *(undefined4 *)(plVar13 + 7) = uVar10;
  *(undefined4 *)((long)plVar13 + 0x3c) = uVar14;
  func_0x0001081c39ec(plVar13);
  if (!bVar12) {
    if (param_3[1] == 1) {
      uVar14 = 2;
    }
    else {
      if (param_3[1] != 2) goto LAB_108151d90;
      uVar14 = 1;
    }
    lVar9 = plVar13[0xb];
    *(undefined4 *)(lVar9 + 8) = uVar14;
    *(undefined4 *)(lVar9 + 0xc) = 1;
  }
LAB_108151d90:
  uVar14 = *param_3;
  *(undefined4 *)(plVar13 + 0x21) = 1;
  func_0x0001081c395c(plVar13,uVar14,1);
  FUN_1081b0510(plVar13,1);
  puVar3 = (undefined1 *)param_4[1];
  for (puVar7 = (undefined1 *)*param_4; puVar7 != puVar3; puVar7 = puVar7 + 0x10) {
    func_0x0001081b0474(plVar13,*puVar7,*(undefined8 *)(*(long *)(puVar7 + 8) + 0x18),
                        *(undefined4 *)(*(long *)(puVar7 + 8) + 0x20));
  }
  func_0x000108152bec();
  puVar8 = (undefined8 *)0x100;
  __Znwm();
  plStack_a8 = (long *)0x0;
  lVar9 = 0;
  if ((char)plVar13[0xe8] == '\x01') {
    lVar9 = (long)(int)param_2[4] * (long)(int)plVar13[7];
  }
  plStack_178 = plVar13;
  FUN_108151eb0(puVar8,param_2,lVar9);
  *puVar8 = &PTR_FUN_110a27f18;
  plStack_178 = (long *)0x0;
  puVar8[4] = plVar13;
  *(undefined1 *)(puVar8 + 5) = 0;
  *(undefined1 *)(puVar8 + 0x1f) = 0;
  *extraout_x8 = puVar8;
  FUN_1081527e8(&plStack_178);
LAB_108151e4c:
  FUN_108152b54();
  FUN_1081527e8(&plStack_a8);
  return;
}



/* Entry: 108151a00; end: 108151eaf;  */

void FUN_108151a00(undefined8 *param_1,long param_2,long *param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  char cVar4;
  code *pcVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uVar10;
  int *piVar11;
  bool bVar12;
  long *plVar13;
  undefined4 uVar14;
  long *plStack_168;
  long *plStack_160;
  undefined1 auStack_158 [192];
  long *plStack_98;
  int *piStack_90;
  ulong uStack_88;
  ulong uStack_80;
  int *piStack_78;
  long lStack_70;
  long lStack_68;
  
  if (((((int)*(uint *)(param_3 + 4) < 1) ||
       (((int)*(uint *)((long)param_3 + 0x24) < 1 || *(uint *)(param_3 + 4) >> 0x1d != 0) ||
        *(uint *)((long)param_3 + 0x24) >> 0x1d != 0)) || ((int)param_3[3] == 0)) ||
     ((*(int *)((long)param_3 + 0x1c) == 0 || (*param_3 == 0)))) {
LAB_108151a50:
    *param_1 = 0;
    return;
  }
  plVar13 = (long *)param_3[1];
  plVar6 = param_3 + 2;
  func_0x0001078bdb50();
  if (plVar13 < plVar6) goto LAB_108151a50;
  plVar13 = (long *)0x748;
  __Znwm();
  plVar6 = plVar13 + 0x41;
  _bzero(plVar13 + 0x42,0xc0);
  plVar13[0x5f] = param_2;
  plVar13[0x5c] = (long)FUN_108151898;
  plVar13[0x5d] = (long)FUN_1081518ac;
  plVar13[0x5e] = (long)FUN_108151920;
  *(undefined1 *)(plVar13 + 0xe0) = 0;
  *(undefined1 *)(plVar13 + 0xe3) = 0;
  *(undefined1 *)(plVar13 + 0xe4) = 0;
  *(undefined1 *)(plVar13 + 0xe7) = 0;
  *(undefined1 *)(plVar13 + 0xe8) = 0;
  FUN_1081d508c(plVar6);
  *plVar13 = (long)plVar6;
  plVar13[0x41] = 0x108151990;
  FUN_1081b0180(plVar13,0x3e,0x208);
  plVar13[5] = (long)(plVar13 + 0x5a);
  puVar7 = auStack_158;
  plVar13[0x59] = plVar13[0x58];
  plVar13[0x58] = plVar13[0x57];
  plVar13[0x57] = plVar13[0x56];
  plVar13[0x56] = (long)puVar7;
  plStack_160 = plVar6;
  plStack_98 = plVar13;
  _setjmp();
  if ((int)puVar7 != 0) {
code_r0x000108151b70:
    *param_1 = 0;
    goto LAB_108151e4c;
  }
  piStack_78 = (int *)0x0;
  lStack_70 = 0;
  lStack_68 = 0;
  *(undefined1 *)(plVar13 + 0xe8) = 0;
  iVar1 = (int)param_3[3];
  uVar2 = *(uint *)((long)param_3 + 0x1c);
  if (iVar1 == 5) {
    bVar12 = false;
    uVar10 = 4;
    uVar14 = 7;
  }
  else {
    bVar12 = param_4[2] != 1 || uVar2 != 3;
    if (iVar1 == 4 && bVar12) {
      uVar14 = 0xc;
    }
    else if (iVar1 == 6 && bVar12) {
      uVar14 = 0xd;
    }
    else {
      uVar14 = 1;
      uVar10 = 1;
      bVar12 = true;
      switch(iVar1) {
      case 0:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
        func_0x000108152bec();
        goto code_r0x000108151b70;
      case 1:
      case 0xe:
      case 0x1a:
        goto LAB_108151d48;
      case 2:
      case 9:
      case 10:
      case 0xb:
      case 0x11:
        uStack_80 = (ulong)*(uint *)(param_3 + 4) | 0x100000000;
        piStack_90 = (int *)0x0;
        uStack_88 = 0x300000005;
        func_0x000108152bf4();
        func_0x000108152bbc();
        uVar14 = 7;
        break;
      case 3:
      case 4:
      case 6:
      case 7:
      case 8:
      case 0xc:
      case 0xd:
      case 0xf:
      case 0x10:
      case 0x12:
      case 0x18:
      case 0x19:
        uStack_88 = 0x200000004;
        if (param_4[2] != 1 || uVar2 != 3) {
          uStack_88 = (ulong)uVar2 << 0x20 | 4;
        }
        uStack_80 = (ulong)*(uint *)(param_3 + 4) | 0x100000000;
        piStack_90 = (int *)0x0;
        func_0x000108152bf4();
        func_0x000108152bbc();
        uVar14 = 0xc;
        break;
      default:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x108151e60);
        (*pcVar5)();
      }
      *(undefined1 *)(plVar13 + 0xe8) = 1;
      uVar2 = *(uint *)(param_3 + 4);
      piVar11 = (int *)param_3[2];
      if (piVar11 != (int *)0x0) {
        do {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar12) {
            *piVar11 = *piVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_88 = param_3[3];
      uStack_80 = (ulong)uVar2 | 0x100000000;
      if ((char)plVar13[0xe3] == '\x01') {
        piStack_90 = piVar11;
        func_0x0001078bddd4(plVar13 + 0xe0,&piStack_90);
      }
      else {
        piStack_90 = (int *)0x0;
        plVar13[0xe0] = (long)piVar11;
        plVar13[0xe1] = uStack_88;
        plVar13[0xe2] = uStack_80;
        *(undefined1 *)(plVar13 + 0xe3) = 1;
      }
      func_0x000108152bbc();
      if ((char)plVar13[0xe7] == '\x01') {
        func_0x000108152830(plVar13 + 0xe4,&piStack_78);
      }
      else {
        if (piStack_78 != (int *)0x0) {
          do {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piStack_78,0x10);
            if (bVar12) {
              *piStack_78 = *piStack_78 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar13[0xe4] = (long)piStack_78;
        plVar13[0xe6] = lStack_68;
        plVar13[0xe5] = lStack_70;
        *(undefined1 *)(plVar13 + 0xe7) = 1;
      }
    }
    uVar10 = 4;
    bVar12 = false;
  }
LAB_108151d48:
  plVar13[6] = param_3[4];
  *(undefined4 *)(plVar13 + 7) = uVar10;
  *(undefined4 *)((long)plVar13 + 0x3c) = uVar14;
  func_0x0001081c39ec(plVar13);
  if (!bVar12) {
    if (param_4[1] == 1) {
      uVar14 = 2;
    }
    else {
      if (param_4[1] != 2) goto LAB_108151d90;
      uVar14 = 1;
    }
    lVar9 = plVar13[0xb];
    *(undefined4 *)(lVar9 + 8) = uVar14;
    *(undefined4 *)(lVar9 + 0xc) = 1;
  }
LAB_108151d90:
  uVar14 = *param_4;
  *(undefined4 *)(plVar13 + 0x21) = 1;
  func_0x0001081c395c(plVar13,uVar14,1);
  FUN_1081b0510(plVar13,1);
  puVar3 = (undefined1 *)param_5[1];
  for (puVar7 = (undefined1 *)*param_5; puVar7 != puVar3; puVar7 = puVar7 + 0x10) {
    func_0x0001081b0474(plVar13,*puVar7,*(undefined8 *)(*(long *)(puVar7 + 8) + 0x18),
                        *(undefined4 *)(*(long *)(puVar7 + 8) + 0x20));
  }
  func_0x000108152bec();
  puVar8 = (undefined8 *)0x100;
  __Znwm();
  plStack_98 = (long *)0x0;
  lVar9 = 0;
  if ((char)plVar13[0xe8] == '\x01') {
    lVar9 = (long)(int)param_3[4] * (long)(int)plVar13[7];
  }
  plStack_168 = plVar13;
  FUN_108151eb0(puVar8,param_3,lVar9);
  *puVar8 = &PTR_FUN_110a27f18;
  plStack_168 = (long *)0x0;
  puVar8[4] = plVar13;
  *(undefined1 *)(puVar8 + 5) = 0;
  *(undefined1 *)(puVar8 + 0x1f) = 0;
  *param_1 = puVar8;
  FUN_1081527e8(&plStack_168);
LAB_108151e4c:
  FUN_108152b54();
  FUN_1081527e8(&plStack_98);
  return;
}



/* Entry: 108151eb0; end: 108151f4b;  */

void FUN_108151eb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  
  func_0x000108152c0c();
  *param_1 = extraout_x8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_108152710(param_1 + 3,param_3);
  return;
}



/* Entry: 108151f4c; end: 108151f4f;  */

undefined8 FUN_108151f4c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_110a27f18;
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    FUN_1081527b0(param_1 + 5);
  }
  FUN_1081527e8(param_1 + 4);
  func_0x000108152c0c();
  *param_1 = extraout_x8;
  func_0x00010815277c(param_1 + 3);
  return unaff_x19;
}



/* Entry: 108151f50; end: 108151f63;  */

void FUN_108151f50(void)

{
  func_0x000108151f04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108151f64; end: 108152237;  */

void FUN_108151f64(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lStack_138;
  long lStack_130;
  undefined1 auStack_128 [200];
  
  lVar11 = *(long *)(param_1 + 0x20);
  lStack_130 = lVar11 + 0x208;
  puVar3 = auStack_128;
  *(undefined8 *)(lVar11 + 0x2c8) = *(undefined8 *)(lVar11 + 0x2c0);
  *(undefined8 *)(lVar11 + 0x2c0) = *(undefined8 *)(lVar11 + 0x2b8);
  *(undefined8 *)(lVar11 + 0x2b8) = *(undefined8 *)(lVar11 + 0x2b0);
  *(undefined1 **)(lVar11 + 0x2b0) = puVar3;
  _setjmp();
  if ((int)puVar3 == 0) {
    if (*(char *)(param_1 + 0xf8) == '\x01') {
      for (uVar16 = 0; uVar16 != (param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
          uVar16 = uVar16 + 1) {
        iVar1 = *(int *)(param_1 + 0x10);
        lVar11 = *(long *)(param_1 + 0x18);
        uVar14 = (ulong)(*(uint *)(param_1 + 0x48) &
                        ((int)*(uint *)(param_1 + 0x48) >> 0x1f ^ 0xffffffffU));
        if (*(int *)(param_1 + 0xd8) == 3) {
          func_0x000108152c00();
          puVar6 = puVar3;
          func_0x000108152b9c();
          puVar7 = puVar6;
          func_0x000108152be0();
          puVar12 = (undefined1 *)(lVar11 + 2);
          for (uVar13 = 0; uVar14 != uVar13; uVar13 = uVar13 + 1) {
            puVar12[-2] = puVar6[uVar13];
            iVar1 = 0;
            if ((int)puVar3 != 0) {
              iVar1 = (int)uVar13 / (int)puVar3;
            }
            puVar12[-1] = puVar7[(long)iVar1 * 2];
            *puVar12 = (puVar7 + (long)iVar1 * 2)[1];
            puVar12 = puVar12 + 3;
          }
        }
        else if (*(int *)(param_1 + 0xd8) == 1) {
          func_0x000108152c00();
          lVar15 = param_1 + 0xd0;
          FUN_1081527d8(lVar15,2);
          lVar8 = lVar15;
          func_0x000108152b9c();
          lVar9 = lVar8;
          func_0x000108152be0();
          iVar2 = 0;
          iVar10 = (int)((ulong)lVar15 >> 0x20);
          if (iVar10 != 0) {
            iVar2 = (int)(iVar1 + uVar16) / iVar10;
          }
          lVar5 = param_1 + 0x78;
          FUN_108152238(lVar5,0,iVar2);
          puVar6 = (undefined1 *)(lVar11 + 2);
          for (uVar13 = 0; uVar14 != uVar13; uVar13 = uVar13 + 1) {
            puVar6[-2] = *(undefined1 *)(lVar8 + uVar13);
            iVar1 = 0;
            if ((int)puVar3 != 0) {
              iVar1 = (int)uVar13 / (int)puVar3;
            }
            puVar6[-1] = *(undefined1 *)(lVar9 + iVar1);
            iVar1 = 0;
            if ((int)lVar15 != 0) {
              iVar1 = (int)uVar13 / (int)lVar15;
            }
            *puVar6 = *(undefined1 *)(lVar5 + iVar1);
            puVar6 = puVar6 + 3;
          }
        }
        lStack_138 = *(long *)(param_1 + 0x18);
        puVar3 = *(undefined1 **)(param_1 + 0x20);
        FUN_1081b05b8(puVar3,&lStack_138,1);
      }
    }
    else {
      lVar11 = *(long *)(param_1 + 8);
      FUN_10835c58c(*(undefined4 *)(lVar11 + 0x18));
      FUN_108152238(lVar11,0,*(undefined4 *)(param_1 + 0x10));
      for (uVar16 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU); uVar16 != 0; uVar16 = uVar16 - 1
          ) {
        lVar15 = *(long *)(param_1 + 0x20);
        lStack_138 = lVar11;
        if (*(char *)(lVar15 + 0x740) == '\x01') {
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          FUN_1081519e8(lVar15 + 0x720);
          lVar8 = lVar15 + 0x720;
          func_0x0001078bdb50(lVar8);
          FUN_1081519e8(lVar15 + 0x700);
          lVar9 = lVar15 + 0x700;
          func_0x0001078bdb50(lVar9);
          uVar14 = lVar15 + 0x720;
          FUN_108345950(uVar14,uVar4,lVar8,lVar15 + 0x700,lVar11,lVar9);
          if ((uVar14 & 1) == 0) goto LAB_108151fc0;
          lStack_138 = *(long *)(param_1 + 0x18);
          lVar15 = *(long *)(param_1 + 0x20);
        }
        FUN_1081b05b8(lVar15,&lStack_138,1);
        lVar11 = lVar11 + *(long *)(*(long *)(param_1 + 8) + 8);
      }
    }
    iVar1 = *(int *)(param_1 + 0x10) + param_2;
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == *(int *)(*(long *)(param_1 + 8) + 0x24)) {
      FUN_1081b02f8(*(undefined8 *)(param_1 + 0x20));
    }
    uVar4 = 1;
  }
  else {
LAB_108151fc0:
    uVar4 = 0;
  }
  FUN_108152b54(uVar4);
  return;
}



/* Entry: 108152238; end: 108152257;  */

long FUN_108152238(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = param_1 + 2;
  lVar1 = *param_1;
  FUN_10835c668(plVar2,param_2,param_3,param_1[1]);
  return lVar1 + (long)plVar2;
}



/* Entry: 108152258; end: 1081522bb;  */

long FUN_108152258(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  FUN_1081522bc(&lStack_28);
  if (lStack_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_28;
    FUN_10821b0a0(lStack_28,*(undefined4 *)(param_2 + 0x24));
    func_0x000108152b84();
  }
  return lVar1;
}



/* Entry: 1081522bc; end: 108152367;  */

void FUN_1081522bc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_108152368(&uStack_48,*(undefined8 *)(param_4 + 0x10));
  FUN_108152404(&uStack_48,param_4,*(undefined8 *)(param_3 + 0x10));
  if (*(char *)(param_4 + 0x2c) == '\x01') {
    puVar1 = (undefined4 *)(param_4 + 0x28);
    FUN_108152660();
    FUN_108152530(&uStack_48,*puVar1);
  }
  FUN_108151a00(param_1,param_2,param_3,param_4,&uStack_48);
  func_0x000108152854(&uStack_48);
  return;
}



/* Entry: 108152368; end: 108152403;  */

void FUN_108152368(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 != 0) {
    func_0x000108152bc4();
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1083a034c(auStack_40,&UNK_10df02b00,0x1d);
    FUN_1083a034c(auStack_40,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
    FUN_1083a05b4(auStack_48,auStack_40);
    func_0x000108152bd4();
    func_0x000108152b74();
    FUN_1083a02a4(auStack_40);
  }
  return;
}



/* Entry: 108152404; end: 10815252f;  */

void FUN_108152404(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (param_3 == 0) {
    lStack_78 = 0;
  }
  else {
    if (*(long *)(param_2 + 0x18) == 0) {
      uStack_48 = *(undefined8 *)(param_3 + 0x30);
      lStack_50 = *(long *)(param_3 + 0x28);
      uStack_38 = *(undefined8 *)(param_3 + 0x40);
      uStack_40 = *(undefined8 *)(param_3 + 0x38);
      uStack_30 = *(undefined4 *)(param_3 + 0x48);
      uStack_70 = *(undefined8 *)(param_3 + 0xc);
      uStack_68 = (undefined4)*(undefined8 *)(param_3 + 0x14);
      uStack_5c = *(undefined8 *)(param_3 + 0x20);
      uStack_64 = (undefined4)*(undefined8 *)(param_3 + 0x18);
      uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
      FUN_1082621ec(&lStack_78,&uStack_70,&lStack_50);
    }
    else {
      FUN_108260e80(&lStack_78,*(long *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
    }
    if (lStack_78 != 0) {
      func_0x000108152bc4();
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      lStack_50 = extraout_x8;
      FUN_1083a034c(&lStack_50,&UNK_10df02aef,0xc);
      uStack_70._0_1_ = 1;
      func_0x000108152bac(*(undefined8 *)(lStack_50 + 0x10));
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      func_0x000108152bac(*(undefined8 *)(lStack_50 + 0x10));
      FUN_1083a034c(&lStack_50,*(undefined8 *)(lStack_78 + 0x18),*(undefined8 *)(lStack_78 + 0x20));
      FUN_1083a05b4(&uStack_70,&lStack_50);
      FUN_108152678(param_1,&UNK_10df02afc,&uStack_70);
      func_0x000108152b94();
      FUN_1083a02a4(&lStack_50);
    }
  }
  func_0x000108152b74();
  return;
}



/* Entry: 108152530; end: 10815265f;  */

void FUN_108152530(undefined8 param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined8 uStack_58;
  uint5 uStack_50;
  uint5 uStack_48;
  uint5 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_28;
  
  if (param_2 - 9U < 0xfffffff8) {
    _vfprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47ce83,&stack0x00000000);
    return;
  }
  uVar4 = (ulong)_uStack_50 >> 0x28;
  uVar1 = (uint)_uStack_50;
  uStack_50 = (uint5)(uVar1 & 0xffffff00);
  _uStack_50 = CONCAT35((int3)uVar4,uStack_50);
  uVar4 = (ulong)_uStack_48 >> 0x18;
  uVar5 = (ulong)_uStack_48 >> 0x28;
  uVar2 = (ushort)_uStack_48;
  uStack_48._0_3_ = (uint3)(uVar2 & 0xff00);
  uVar3 = CONCAT53((int5)uVar4,(uint3)uStack_48);
  uStack_48 = (uint5)(uint)uVar3;
  _uStack_48 = CONCAT35((int3)uVar5,uStack_48);
  uVar4 = (ulong)_uStack_40 >> 0x28;
  uVar1 = (uint)_uStack_40;
  uStack_40 = (uint5)(uVar1 & 0xffffff00);
  _uStack_40 = CONCAT35((int3)uVar4,uStack_40);
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_58._0_5_ = CONCAT14(1,param_2);
  FUN_10821d9d8(&lStack_60,&uStack_58);
  if (lStack_60 != 0) {
    func_0x000108152bc4();
    _uStack_50 = 0;
    _uStack_48 = 0;
    _uStack_40 = 0;
    uStack_58 = extraout_x8;
    FUN_1083a034c(&uStack_58,&UNK_10df02b24,5);
    auStack_68[0] = 0;
    (**(code **)(uStack_58 + 0x10))(&uStack_58,auStack_68,1);
    FUN_1083a034c(&uStack_58,*(undefined8 *)(lStack_60 + 0x18),*(undefined8 *)(lStack_60 + 0x20));
    FUN_1083a05b4(auStack_68,&uStack_58);
    func_0x000108152bd4();
    func_0x000108152b74();
    FUN_1083a02a4(&uStack_58);
  }
  func_0x000108152b94();
  return;
}



/* Entry: 108152660; end: 108152677;  */

long FUN_108152660(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10815291c();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_108152960();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 108152678; end: 1081526b3;  */

long FUN_108152678(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10815291c();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_108152960();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 1081526b4; end: 1081526d3;  */

void FUN_1081526b4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10810a400();
  }
  return;
}



/* Entry: 1081526d4; end: 108152707;  */

long FUN_1081526d4(long param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  do {
    FUN_10810a400(param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return param_1;
}



/* Entry: 108152708; end: 10815270f;  */

void FUN_108152708(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10815270c);
  (*pcVar1)();
}



/* Entry: 108152710; end: 10815279f;  */

long * FUN_108152710(long *param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    FUN_10840ffdc(param_2,1);
  }
  *param_1 = param_2;
  return param_1;
}



/* Entry: 1081527a0; end: 1081527af;  */

void FUN_1081527a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 1081527b0; end: 1081527d7;  */

long FUN_1081527b0(long param_1)

{
  long lVar1;
  
  func_0x0001078bddf8(param_1 + 0xa0);
  lVar1 = 0x88;
  do {
    FUN_10810a400(param_1 + lVar1);
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != -0x18);
  return param_1;
}



/* Entry: 1081527d8; end: 1081527e7;  */

ulong FUN_1081527d8(long param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulong)*(uint *)(param_1 + 0xc);
  uVar3 = uVar1;
  FUN_1083aa9a4();
  uVar5 = 0;
  uVar6 = 0;
  if ((param_2 < 0) || (uVar3 == 0)) goto LAB_1083aa988;
  uVar3 = uVar1;
  FUN_1081a6298();
  if ((int)uVar3 < param_2) {
    uVar5 = 0;
    uVar6 = 0;
    goto LAB_1083aa988;
  }
  uVar5 = 0x100000001;
  if (uVar1 < 0xb) {
    uVar3 = 1 << (ulong)(uVar1 & 0x1f);
    if ((uVar3 & 0x186) == 0) {
      if ((uVar3 & 0x618) == 0) {
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1083aa9a4);
          (*pcVar2)();
        }
      }
      else if (param_2 == 1) goto LAB_1083aa978;
    }
    else if (param_2 - 1U < 2) {
LAB_1083aa978:
      func_0x0001083aa8bc(uVar4);
      uVar5 = uVar4;
    }
  }
  uVar6 = uVar5 & 0x300000000;
  uVar5 = uVar5 & 0xffffffff;
LAB_1083aa988:
  return uVar6 | uVar5;
}



/* Entry: 1081527e8; end: 1081528c7;  */

long * FUN_1081527e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1081b0270(lVar1);
    FUN_1081526b4(lVar1 + 0x720);
    FUN_1081526b4(lVar1 + 0x700);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1081528c8; end: 1081528cf;  */

void FUN_1081528c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    func_0x0001078bddf8(lVar2 + -8);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 1081528d0; end: 10815291b;  */

void FUN_1081528d0(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x10) {
    func_0x0001078bddf8(lVar1 + -8);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10815291c; end: 10815295f;  */

void FUN_10815291c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_108152ac0(param_1 + 0x10,lVar1,param_2,param_3);
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return;
}



/* Entry: 108152960; end: 108152abf;  */

long * FUN_108152960(long *param_1,undefined1 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined1 *puVar17;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar16 = param_1[1] - *param_1;
  uVar1 = (lVar16 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    plVar9 = param_1 + 2;
    uVar10 = *plVar9 - *param_1;
    uVar14 = (long)uVar10 >> 3;
    if (uVar14 <= uVar1) {
      uVar14 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar14 = 0xfffffffffffffff;
    }
    plStack_48 = plVar9;
    if (uVar14 == 0) {
      lVar8 = 0;
    }
    else {
      if (uVar14 >> 0x3c != 0) goto LAB_108152aac;
      lVar8 = uVar14 << 4;
      __Znwm();
    }
    lVar16 = lVar8 + lVar16;
    lVar2 = lVar8 + uVar14 * 0x10;
    lStack_68 = lVar8;
    lStack_60 = lVar16;
    lStack_58 = lVar16;
    lStack_50 = lVar2;
    FUN_108152ac0(plVar9,lVar16,param_2,param_3);
    puVar17 = (undefined1 *)*param_1;
    puVar4 = (undefined1 *)param_1[1];
    puVar3 = puVar17 + (lVar16 - (long)puVar4);
    puVar11 = puVar3;
    for (puVar12 = puVar17; puVar12 != puVar4; puVar12 = puVar12 + 0x10) {
      *puVar11 = *puVar12;
      piVar15 = *(int **)(puVar12 + 8);
      if (piVar15 != (int *)0x0) {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar7) {
            *piVar15 = *piVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      *(int **)(puVar11 + 8) = piVar15;
      puVar11 = puVar11 + 0x10;
    }
    for (; puVar17 != puVar4; puVar17 = puVar17 + 0x10) {
      func_0x0001078bddf8(puVar17 + 8);
    }
    lStack_68 = *param_1;
    *param_1 = (long)puVar3;
    param_1[1] = lVar16 + 0x10;
    lStack_50 = param_1[2];
    param_1[2] = lVar2;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    FUN_108152b08(&lStack_68);
    return (long *)(lVar16 + 0x10);
  }
  func_0x000108152af4();
LAB_108152aac:
  func_0x000104bd35f4();
  plVar9 = &lStack_68;
  FUN_108152b08(plVar9);
  func_0x000108152b7c();
  uVar5 = *param_3;
  uVar13 = *param_4;
  *param_4 = 0;
  *param_2 = (char)uVar5;
  *(undefined8 *)(param_2 + 8) = uVar13;
  func_0x000108152b74();
  return plVar9;
}



/* Entry: 108152ac0; end: 108152b07;  */

void FUN_108152ac0(undefined8 param_1,undefined1 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  uVar2 = *param_4;
  *param_4 = 0;
  *param_2 = (char)uVar1;
  *(undefined8 *)(param_2 + 8) = uVar2;
  func_0x000108152b74();
  return;
}



/* Entry: 108152b08; end: 108152b53;  */

long * FUN_108152b08(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x10;
    func_0x0001078bddf8(lVar1 + -8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108152b54; end: 108152c1f;  */

void FUN_108152b54(void)

{
  undefined8 uVar1;
  long in_stack_00000010;
  
  uVar1 = *(undefined8 *)(in_stack_00000010 + 0xb0);
  *(undefined8 *)(in_stack_00000010 + 0xb0) = *(undefined8 *)(in_stack_00000010 + 0xb8);
  *(undefined8 *)(in_stack_00000010 + 0xa8) = uVar1;
  *(undefined8 *)(in_stack_00000010 + 0xb8) = *(undefined8 *)(in_stack_00000010 + 0xc0);
  *(undefined8 *)(in_stack_00000010 + 0xc0) = 0;
  return;
}



/* Entry: 108152c20; end: 108152c9b;  */

void FUN_108152c20(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 in_x4;
  long extraout_x9;
  undefined8 extraout_x10;
  undefined1 uStack_dc;
  undefined1 auStack_db [43];
  
  FUN_10841076c(&UNK_10f47cea8);
  lVar5 = 0xc0;
  func_0x000109b62cf4(param_1,PTR__longjmp_11034c548);
  _longjmp();
  plVar3 = (long *)param_1[0x20];
  (**(code **)(*plVar3 + 0x10))();
  if (((ulong)plVar3 & 1) != 0) {
    return;
  }
  puVar4 = &UNK_10f47cec1;
  func_0x000109b6244c();
  iVar2 = (int)*param_1;
  FUN_108153df0();
  _setjmp();
  if (iVar2 == 0) {
    uVar1 = *(uint *)(puVar4 + 8);
    if (((uVar1 < 7) && ((99U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) &&
       (*(int *)(lVar5 + 8) - 1U < 0x12)) {
      func_0x000108153e48(auStack_db,&uStack_dc,0,1,in_x4,
                          *(undefined4 *)(&UNK_10df02b88 + (ulong)uVar1 * 4),8);
                    /* WARNING: Could not recover jumptable at 0x000108152d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10df02b50)[extraout_x9] * 4 + 0x108152d70))(extraout_x10);
      return;
    }
  }
  return;
}



/* Entry: 108152c9c; end: 108153113;  */

void FUN_108152c9c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  long extraout_x9;
  undefined8 extraout_x10;
  undefined1 uStack_8c;
  undefined1 auStack_8b [43];
  
  iVar2 = (int)*param_1;
  FUN_108153df0();
  _setjmp();
  if (iVar2 == 0) {
    uVar1 = *(uint *)(param_2 + 8);
    if (((uVar1 < 7) && ((99U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) &&
       (*(int *)(param_3 + 8) - 1U < 0x12)) {
      func_0x000108153e48(auStack_8b,&uStack_8c,0,1,param_5,
                          *(undefined4 *)(&UNK_10df02b88 + (ulong)uVar1 * 4),8);
                    /* WARNING: Could not recover jumptable at 0x000108152d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10df02b50)[extraout_x9] * 4 + 0x108152d70))(extraout_x10);
      return;
    }
  }
  return;
}



/* Entry: 108153114; end: 108153133;  */

void FUN_108153114(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_18 [8];
  
  func_0x000108346764(param_1,param_2,auStack_18);
  return;
}



/* Entry: 108153134; end: 108153247;  */

bool FUN_108153134(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  lVar3 = *param_1;
  FUN_108153df0();
  _setjmp();
  iVar2 = (int)lVar3;
  if (iVar2 != 0) goto LAB_108153228;
  lVar4 = *param_2;
  if (lVar4 == 0) {
LAB_1081531ac:
    lStack_98 = 0;
  }
  else {
    FUN_108343afc();
    if (lVar3 == lVar4) {
      func_0x000109b6ed74(*param_1,param_1[1],0);
      goto LAB_108153228;
    }
    lVar3 = *param_2;
    if (lVar3 == 0) goto LAB_1081531ac;
    lVar4 = *param_1;
    lVar1 = param_1[1];
    if (*(long *)(param_3 + 0x10) == 0) {
      uStack_68 = *(undefined8 *)(lVar3 + 0x30);
      uStack_70 = *(undefined8 *)(lVar3 + 0x28);
      uStack_58 = *(undefined8 *)(lVar3 + 0x40);
      uStack_60 = *(undefined8 *)(lVar3 + 0x38);
      uStack_50 = *(undefined4 *)(lVar3 + 0x48);
      uStack_90 = *(undefined8 *)(lVar3 + 0xc);
      uStack_7c = *(undefined8 *)(lVar3 + 0x20);
      uStack_80 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
      uStack_88 = (undefined4)*(undefined8 *)(lVar3 + 0x14);
      uStack_84 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x14) >> 0x20);
      FUN_1082621ec(&lStack_98,&uStack_90,&uStack_70);
    }
    else {
      FUN_108260e80(&lStack_98,*(long *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
    }
    if (lStack_98 != 0) {
      func_0x000109b6edb8(lVar4,lVar1,&UNK_10f47cee4,0,*(undefined8 *)(lStack_98 + 0x18),
                          *(undefined4 *)(lStack_98 + 0x20));
    }
  }
  func_0x0001078bddf8(&lStack_98);
LAB_108153228:
  return iVar2 == 0;
}



/* Entry: 108153248; end: 108153583;  */

undefined8 FUN_108153248(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  int *piVar6;
  long lVar7;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined4 uStack_190;
  undefined1 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  long lStack_170;
  int *piStack_168;
  undefined1 auStack_160 [8];
  uint uStack_158;
  char cStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [24];
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  int *piStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 *puStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  iVar3 = (int)*param_1;
  FUN_108153df0();
  _setjmp();
  if (iVar3 == 0) {
    if (param_2[5] == 0) {
      return 0;
    }
    if (param_2[4] == 0) {
      FUN_10821e110(&uStack_1b0);
      uStack_fc = 0;
      uStack_100 = 0x50416d67;
      uStack_f8 = *(undefined8 *)(CONCAT44(uStack_1ac,uStack_1b0) + 0x18);
      uStack_f0 = *(undefined8 *)(CONCAT44(uStack_1ac,uStack_1b0) + 0x20);
      uStack_e8 = 1;
      func_0x000109b6f818(*param_1,3,&UNK_10df02b62);
      func_0x000109b6f61c(*param_1,param_1[1],&uStack_100,1);
      func_0x0001078bddf8(&uStack_1b0);
    }
    else {
      FUN_10821e0a8(&lStack_48);
      ppuStack_68 = &PTR_FUN_110a403f8;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_98 = *param_2;
      lStack_90 = param_2[1];
      if (lStack_90 != 0) {
        piVar6 = (int *)(lStack_90 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_80 = param_2[3];
      uStack_88 = param_2[2];
      puStack_70 = (undefined4 *)param_2[5];
      uStack_78 = 0;
      lVar7 = param_2[5];
      _memcpy(&uStack_100,lVar7,0x60);
      piVar6 = *(int **)(lVar7 + 0x60);
      if (piVar6 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      piStack_a0 = piVar6;
      FUN_10814105c(auStack_128,param_2[4]);
      FUN_108153e54(auStack_160,auStack_118);
      if (cStack_130 == '\x01' && 1 < uStack_158) {
        piStack_168 = *(int **)(param_2[5] + 0x60);
        if (piStack_168 != (int *)0x0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piStack_168,0x10);
            if (bVar2) {
              *piStack_168 = *piStack_168 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_108384050(auStack_128,&piStack_168);
        FUN_1081539c8(piStack_168);
      }
      else {
        piStack_a0 = (int *)0x0;
        FUN_1081539c8(piVar6);
        puStack_70 = &uStack_100;
      }
      pppuVar5 = &ppuStack_68;
      FUN_108153584(pppuVar5,auStack_128,&uStack_98);
      if (((ulong)pppuVar5 & 1) != 0) {
        FUN_1083a05b4(&lStack_170,&ppuStack_68);
        uStack_1ac = uStack_1ac & 0xffffff00;
        uStack_1b0 = 0x50416d67;
        uStack_1a8 = *(undefined8 *)(lStack_48 + 0x18);
        uStack_1a0 = *(undefined8 *)(lStack_48 + 0x20);
        uStack_198 = 1;
        uStack_190 = 0x54416467;
        uStack_18c = 0;
        uStack_188 = *(undefined8 *)(lStack_170 + 0x18);
        uStack_180 = *(undefined8 *)(lStack_170 + 0x20);
        uStack_178 = 1;
        func_0x000109b6f818(*param_1,3,&UNK_10df02b6a,2);
        func_0x000109b6f61c(*param_1,param_1[1],&uStack_1b0,2);
        func_0x0001078bddf8(&lStack_170);
      }
      FUN_108153998(auStack_160);
      FUN_10810a400(auStack_118);
      FUN_1081539c8(piStack_a0);
      func_0x000108140fe4(&lStack_90);
      FUN_1083a02a4(&ppuStack_68);
      func_0x0001078bddf8(&lStack_48);
      if (((ulong)pppuVar5 & 1) == 0) goto LAB_108153278;
    }
    uVar4 = 1;
  }
  else {
LAB_108153278:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 108153584; end: 1081535e7;  */

long FUN_108153584(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  FUN_108153730(&lStack_28);
  if (lStack_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_28;
    FUN_10821b0a0(lStack_28,*(undefined4 *)(param_2 + 0x24));
    func_0x000108153e14();
  }
  return lVar1;
}



/* Entry: 1081535e8; end: 108153667;  */

bool FUN_1081535e8(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (int)*param_1;
  FUN_108153df0();
  _setjmp();
  if (iVar1 == 0) {
    func_0x000109b70368(*param_1,param_1[1]);
  }
  return iVar1 == 0;
}



/* Entry: 108153668; end: 10815366b;  */

undefined8 FUN_108153668(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  FUN_1081539d4(param_1 + 0xb);
  *param_1 = &PTR_FUN_110a27ff8;
  FUN_10814cacc(param_1 + 7);
  func_0x000108152c0c();
  *param_1 = extraout_x8;
  func_0x00010815277c(param_1 + 3);
  return unaff_x19;
}



/* Entry: 10815366c; end: 10815367f;  */

void FUN_10815366c(void)

{
  func_0x000108153628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108153680; end: 1081536e7;  */

bool FUN_108153680(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_38;
  
  iVar1 = (int)**(undefined8 **)(param_1 + 0x58);
  FUN_108153df0();
  _setjmp();
  if (iVar1 == 0) {
    uStack_38 = param_2;
    func_0x000109b70934(**(undefined8 **)(param_1 + 0x58),&uStack_38,1);
  }
  return iVar1 == 0;
}



/* Entry: 1081536e8; end: 10815372f;  */

bool FUN_1081536e8(long param_1)

{
  int iVar1;
  
  iVar1 = (int)**(undefined8 **)(param_1 + 0x58);
  FUN_108153df0();
  _setjmp();
  if (iVar1 == 0) {
    func_0x000109b70728(**(undefined8 **)(param_1 + 0x58),(*(undefined8 **)(param_1 + 0x58))[1]);
  }
  return iVar1 == 0;
}



/* Entry: 108153730; end: 108153997;  */

void FUN_108153730(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte bStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (((((int)*(uint *)(param_3 + 4) < 1) ||
       (((int)*(uint *)((long)param_3 + 0x24) < 1 || *(uint *)(param_3 + 4) >> 0x1d != 0) ||
        *(uint *)((long)param_3 + 0x24) >> 0x1d != 0)) || ((int)param_3[3] == 0)) ||
     ((*(int *)((long)param_3 + 0x1c) == 0 || (*param_3 == 0)))) {
LAB_108153778:
    *param_1 = 0;
    return;
  }
  plVar5 = (long *)param_3[1];
  plVar3 = param_3 + 2;
  func_0x0001078bdb50();
  if (plVar5 < plVar3) goto LAB_108153778;
  puVar1 = &UNK_10f47cea1;
  func_0x000109b70894(&UNK_10f47cea1,0,FUN_108152c20,0);
  puStack_e8 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000109b5f0b4();
    if (puVar2 != (undefined *)0x0) {
      func_0x000109b7023c(puVar1,param_2,0x108152c60,0);
      plVar3 = (long *)0x18;
      __Znwm();
      *plVar3 = (long)puVar1;
      plVar3[1] = (long)puVar2;
      plVar3[2] = 0;
      plStack_b0 = plVar3;
      FUN_108153e54(&puStack_e8,param_3 + 2);
      if ((((bStack_b8 & 1) == 0) ||
          (plVar5 = plVar3, FUN_108152c9c(plVar3,&puStack_e8,param_3 + 2,param_4),
          ((ulong)plVar5 & 1) == 0)) ||
         ((plVar5 = plVar3, FUN_108153134(plVar3,param_3 + 2,param_4), (int)plVar5 == 0 ||
          (((*(long *)(param_4 + 0x28) != 0 &&
            (plVar5 = plVar3, FUN_108153248(plVar3,param_4), (int)plVar5 == 0)) ||
           (plVar5 = plVar3, FUN_1081535e8(), (int)plVar5 == 0)))))) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)0x60;
        __Znwm();
        uStack_58 = uStack_d0;
        uStack_98 = uStack_e0;
        puStack_a0 = puStack_e8;
        uStack_90 = uStack_d8;
        uStack_d0 = 0;
        uStack_78 = uStack_c0;
        uStack_80 = uStack_c8;
        plStack_b0 = (long *)0x0;
        uStack_68 = uStack_e0;
        puStack_70 = puStack_e8;
        uStack_60 = uStack_d8;
        uStack_88 = 0;
        uStack_48 = uStack_c0;
        uStack_50 = uStack_c8;
        plStack_a8 = plVar3;
        FUN_108154578();
        FUN_10814cacc(&uStack_58);
        *puVar4 = &PTR_FUN_110a27fa8;
        plStack_a8 = (long *)0x0;
        puVar4[0xb] = plVar3;
        FUN_1081539d4(&plStack_a8);
        FUN_10814cacc(&uStack_88);
      }
      *param_1 = puVar4;
      FUN_108153998(&puStack_e8);
      goto LAB_108153940;
    }
    func_0x000109b70dd0(&puStack_e8,0);
  }
  plStack_b0 = (long *)0x0;
  *param_1 = 0;
LAB_108153940:
  FUN_1081539d4(&plStack_b0);
  return;
}



/* Entry: 108153998; end: 1081539c7;  */

long FUN_108153998(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10814cacc(param_1 + 0x18);
  }
  return param_1;
}



/* Entry: 1081539c8; end: 1081539d3;  */

void FUN_1081539c8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081539d4; end: 108153a0f;  */

long * FUN_1081539d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000109b70dd0(lVar1,lVar1 + 8);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 108153a10; end: 108153a1b;  */

undefined8 * FUN_108153a10(undefined8 *param_1)

{
  func_0x000108153e3c();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_108153a48(*param_1);
  }
  return param_1;
}



/* Entry: 108153a1c; end: 108153a47;  */

undefined8 * FUN_108153a1c(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_108153a48(*param_1);
  }
  return param_1;
}



/* Entry: 108153a48; end: 108153a5f;  */

void FUN_108153a48(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108153a60; end: 108153acf;  */

undefined8 FUN_108153a60(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108153a94(&uStack_28);
  return param_1;
}



/* Entry: 108153ad0; end: 108153ad7;  */

void FUN_108153ad0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    FUN_1083a3c7c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 108153ad8; end: 108153b0f;  */

void FUN_108153ad8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    FUN_1083a3c7c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 108153b10; end: 108153b17;  */

void FUN_108153b10(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x0001083a3dfc(param_1,param_2,(long)param_3);
  func_0x0001083a3d58();
  func_0x0001083a3cec();
  return;
}



/* Entry: 108153b18; end: 108153b57;  */

long * FUN_108153b18(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x1fffffffffffffff;
    }
    return plVar2;
  }
  FUN_108153bd8();
  plVar2 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_108153c24(plVar2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 108153b58; end: 108153bd7;  */

void FUN_108153b58(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_108153c24(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108153bd8; end: 108153be3;  */

void FUN_108153bd8(void)

{
  func_0x000108153e3c();
  FUN_108153c08();
  return;
}



/* Entry: 108153be4; end: 108153c07;  */

void FUN_108153be4(void)

{
  FUN_108153c08();
  return;
}



/* Entry: 108153c08; end: 108153c23;  */

void FUN_108153c08(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_60;
  long **pplStack_58;
  long **pplStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if ((ulong)param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  pplStack_58 = &plStack_40;
  pplStack_50 = &plStack_38;
  plStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0 && lVar4 != 0x1138270b0) {
      piVar1 = (int *)(lVar4 + 4);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plStack_38 = lVar4;
    plStack_38 = plStack_38 + 1;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  plStack_40 = param_4;
  FUN_108153cd4();
  FUN_108153d04(&uStack_60);
  return;
}



/* Entry: 108153c24; end: 108153cd3;  */

void FUN_108153c24(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  long **pplStack_48;
  long **pplStack_40;
  undefined1 uStack_38;
  long *plStack_30;
  long *plStack_28;
  
  pplStack_48 = &plStack_30;
  pplStack_40 = &plStack_28;
  plStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0 && lVar4 != 0x1138270b0) {
      piVar1 = (int *)(lVar4 + 4);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plStack_28 = lVar4;
    plStack_28 = plStack_28 + 1;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  plStack_30 = param_4;
  FUN_108153cd4();
  FUN_108153d04(&uStack_50);
  return;
}



/* Entry: 108153cd4; end: 108153d03;  */

void FUN_108153cd4(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_1083a3c7c();
  }
  return;
}



/* Entry: 108153d04; end: 108153d33;  */

long FUN_108153d04(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108153d34(param_1);
  }
  return param_1;
}



/* Entry: 108153d34; end: 108153d53;  */

void FUN_108153d34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    FUN_1083a3c7c();
  }
  return;
}



/* Entry: 108153d54; end: 108153daf;  */

void FUN_108153d54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    FUN_1083a3c7c();
  }
  return;
}



/* Entry: 108153db0; end: 108153db7;  */

void FUN_108153db0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    FUN_1083a3c7c();
  }
  return;
}



/* Entry: 108153db8; end: 108153def;  */

void FUN_108153db8(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    FUN_1083a3c7c();
  }
  return;
}



/* Entry: 108153df0; end: 108153e53;  */

/* WARNING: Removing unreachable block (ram,0x000109b62d68) */
/* WARNING: Removing unreachable block (ram,0x000109b62d7c) */

undefined *
FUN_108153df0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,uint *param_6)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined auStack_128 [192];
  long lStack_68;
  
  puVar5 = PTR__longjmp_11034c548;
  puVar6 = (undefined8 *)0xc0;
  puVar4 = param_1;
  if (param_1 != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + 200);
    if (puVar4 == (undefined *)0x0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined **)(param_1 + 200) = param_1;
      puVar4 = param_1;
    }
    else {
      lVar7 = *(long *)(param_1 + 0xd0);
      if (lVar7 == 0) {
        if (puVar4 != param_1) {
          puVar5 = &UNK_10f59f632;
          func_0x000109b6244c();
          lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar4 = param_1;
          if (param_1 != (undefined *)0x0) {
            puVar8 = *(undefined **)(param_1 + 200);
            if ((puVar8 != (undefined *)0x0) &&
               (puVar8 != param_1 && *(long *)(param_1 + 0xd0) != 0)) {
              puVar4 = auStack_128;
              _setjmp();
              if ((int)puVar4 == 0) {
                *(undefined8 *)(param_1 + 0xd0) = 0;
                *(undefined **)(param_1 + 0xc0) = PTR__longjmp_11034c548;
                *(undefined **)(param_1 + 200) = auStack_128;
                if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
                  puVar5 = puVar8;
                  _free();
                  puVar4 = puVar8;
                }
                else {
                  puVar4 = param_1;
                  (**(code **)(param_1 + 0x3f0))();
                  puVar5 = puVar8;
                }
              }
            }
            *(undefined8 *)(param_1 + 0xc0) = 0;
            *(undefined8 *)(param_1 + 200) = 0;
            *(undefined8 *)(param_1 + 0xd0) = 0;
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
            return puVar4;
          }
          ___stack_chk_fail();
          if (((puVar4 != (undefined *)0x0) &&
              (puVar1 = (undefined8 *)(puVar4 + 0xc0), (code *)*puVar1 != (code *)0x0)) &&
             (puVar4 = *(undefined **)(puVar4 + 200), puVar4 != (undefined *)0x0)) {
            (*(code *)*puVar1)();
          }
          _abort();
          puVar8 = (undefined *)0x0;
          if ((((puVar4 != (undefined *)0x0) && (puVar5 != (undefined *)0x0)) &&
              ((puVar8 = (undefined *)0x0, param_6 != (uint *)0x0 &&
               ((param_5 != (undefined8 *)0x0 && (puVar6 != (undefined8 *)0x0)))))) &&
             ((*(uint *)(puVar5 + 8) >> 0xc & 1) != 0)) {
            puVar2 = *(uint **)(puVar5 + 0x88);
            *puVar6 = *(undefined8 *)(puVar5 + 0x80);
            *param_5 = puVar2;
            uVar3 = *puVar2;
            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
            *param_6 = uVar3 >> 0x10 | uVar3 << 0x10;
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = 0;
            }
            puVar8 = (undefined *)0x1000;
          }
          return puVar8;
        }
        lVar7 = 0xc0;
      }
      if (lVar7 != 0xc0) {
        func_0x000109b62608(param_1,&UNK_10f59f651);
        return (undefined *)0x0;
      }
    }
    *(undefined **)(param_1 + 0xc0) = puVar5;
  }
  return puVar4;
}



/* Entry: 108153e54; end: 1081543ab;  */

void FUN_108153e54(undefined1 *param_1,long param_2)

{
  bool bVar1;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  undefined1 auStack_370 [32];
  undefined1 auStack_350 [32];
  undefined1 auStack_330 [32];
  undefined1 auStack_310 [32];
  undefined1 auStack_2f0 [32];
  undefined1 auStack_2d0 [32];
  undefined1 auStack_2b0 [32];
  undefined1 auStack_290 [32];
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  bVar1 = *(int *)(param_2 + 8) == 0x1a;
  switch(*(int *)(param_2 + 8)) {
  case 1:
    func_0x00010815485c(auStack_370);
    func_0x0001081547d4(auStack_370);
    func_0x000108154854();
    break;
  case 2:
    func_0x00010815485c(auStack_110);
    func_0x000108154460(auStack_110);
    func_0x000108154854();
    break;
  case 3:
    if (*(int *)(param_2 + 0xc) == 2) {
      func_0x00010815485c(auStack_170);
      func_0x000108154474(auStack_170);
      func_0x000108154854();
    }
    else {
      if (*(int *)(param_2 + 0xc) != 1) goto LAB_108153e90;
      func_0x00010815485c(auStack_150);
      func_0x000108154460(auStack_150);
      func_0x000108154854();
    }
    break;
  case 4:
    func_0x00010815488c();
    if (bVar1) {
      func_0x00010815485c(auStack_70);
      func_0x000108154474(auStack_70);
      func_0x000108154854();
    }
    else if (extraout_w8_01 == 2) {
      func_0x00010815485c(auStack_90);
      func_0x000108154474(auStack_90);
      func_0x000108154854();
    }
    else {
      if (extraout_w8_01 != 1) goto LAB_108153e90;
      func_0x00010815485c(auStack_50);
      func_0x000108154460(auStack_50);
      func_0x000108154854();
    }
    break;
  case 5:
    func_0x00010815485c(auStack_130);
    func_0x000108154460(auStack_130);
    func_0x000108154854();
    break;
  case 6:
    func_0x00010815488c();
    if (bVar1) {
      func_0x00010815485c(auStack_d0);
      func_0x000108154474(auStack_d0);
      func_0x000108154854();
    }
    else if (extraout_w8_00 == 2) {
      func_0x00010815485c(auStack_f0);
      func_0x000108154474(auStack_f0);
      func_0x000108154854();
    }
    else {
      if (extraout_w8_00 != 1) goto LAB_108153e90;
      func_0x00010815485c(auStack_b0);
      func_0x000108154460(auStack_b0);
      func_0x000108154854();
    }
    break;
  case 7:
    func_0x00010815488c();
    if (!bVar1) {
      if (extraout_w8_04 == 2) {
        func_0x00010815485c(auStack_270);
        func_0x0001081544cc(auStack_270);
        func_0x000108154854();
        break;
      }
      if (extraout_w8_04 != 1) goto LAB_108153e90;
    }
    func_0x00010815485c(auStack_250);
    func_0x0001081544cc(auStack_250);
    func_0x000108154854();
    break;
  case 8:
    func_0x00010815488c();
    if (!bVar1) {
      if (extraout_w8_02 == 2) {
        func_0x00010815485c(auStack_2b0);
        func_0x0001081544cc(auStack_2b0);
        func_0x000108154854();
        break;
      }
      if (extraout_w8_02 != 1) goto LAB_108153e90;
    }
    func_0x00010815485c(auStack_290);
    func_0x0001081544cc(auStack_290);
    func_0x000108154854();
    break;
  case 9:
    func_0x00010815485c(auStack_2d0);
    func_0x0001081544e8(auStack_2d0);
    func_0x000108154854();
    break;
  case 10:
    func_0x00010815485c(auStack_2f0);
    func_0x0001081544e8(auStack_2f0);
    func_0x000108154854();
    break;
  case 0xb:
    if (*(int *)(param_2 + 0xc) == 1) {
      func_0x00010815485c(auStack_310);
      func_0x0001081544e8(auStack_310);
      func_0x000108154854();
      break;
    }
  default:
LAB_108153e90:
    *param_1 = 0;
    param_1[0x30] = 0;
    return;
  case 0xc:
    func_0x00010815488c();
    if (!bVar1) {
      if (extraout_w8_03 == 2) {
        func_0x00010815485c(auStack_350);
        func_0x0001081544cc(auStack_350);
        func_0x000108154854();
        break;
      }
      if (extraout_w8_03 != 1) goto LAB_108153e90;
    }
    func_0x00010815485c(auStack_330);
    func_0x0001081544cc(auStack_330);
    func_0x000108154854();
    break;
  case 0xe:
    func_0x00010815485c(auStack_190);
    func_0x0001081547d4(auStack_190);
    func_0x000108154854();
    break;
  case 0xf:
  case 0x10:
    func_0x00010815488c();
    if (!bVar1) {
      if (extraout_w8 == 2) {
        func_0x00010815485c(auStack_1d0);
        func_0x0001081544cc(auStack_1d0);
        func_0x000108154854();
        break;
      }
      if (extraout_w8 != 1) goto LAB_108153e90;
    }
    func_0x00010815485c(auStack_1b0);
    func_0x0001081544cc(auStack_1b0);
    func_0x000108154854();
    break;
  case 0x11:
    func_0x00010815485c(auStack_1f0);
    func_0x0001081544e8(auStack_1f0);
    func_0x000108154854();
    break;
  case 0x12:
    func_0x00010815488c();
    if (!bVar1) {
      if (extraout_w8_05 == 2) {
        func_0x00010815485c(auStack_230);
        func_0x0001081544cc(auStack_230);
        func_0x000108154854();
        break;
      }
      if (extraout_w8_05 != 1) goto LAB_108153e90;
    }
    func_0x00010815485c(auStack_210);
    func_0x0001081544cc(auStack_210);
    func_0x000108154854();
  }
  FUN_10814cacc();
  return;
}



/* Entry: 1081543ac; end: 10815445f;  */

void FUN_1081543ac(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  byte bStack_31;
  
  piVar3 = param_2;
  func_0x000108154708(param_2);
  bStack_31 = (byte)(*param_2 >> 0x1f) >> 7 ^ 1;
  pbVar4 = &bStack_31;
  func_0x000108154764(pbVar4,(long)*param_2,(ulong)piVar3 >> 3 & 0x1fffffff);
  bVar1 = (bStack_31 & 1) == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar6 = *(undefined8 *)param_2;
    iVar2 = param_2[4];
    uVar5 = *(undefined8 *)(param_2 + 6);
    param_2[6] = 0;
    param_2[7] = 0;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar6;
    *(short *)(param_1 + 2) = (short)iVar2;
    uStack_58 = 0;
    param_1[3] = uVar5;
    param_1[5] = pbVar4;
    param_1[4] = param_3;
    uStack_50 = param_3;
    pbStack_48 = pbVar4;
    FUN_10814cacc(&uStack_58);
  }
  *(bool *)(param_1 + 6) = !bVar1;
  return;
}



/* Entry: 108154460; end: 108154577;  */

void FUN_108154460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  FUN_10814ca50(param_1,param_2,param_3,5,0,8,&uStack_28);
  func_0x00010814cca0();
  return;
}



/* Entry: 108154578; end: 1081545d7;  */

void FUN_108154578(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_108151eb0(param_1,param_3,param_2[5]);
  *param_1 = &PTR_FUN_110a27ff8;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 2);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[7] = uVar1;
  uVar1 = param_2[4];
  param_1[9] = param_2[5];
  param_1[8] = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}



/* Entry: 1081545d8; end: 1081546ff;  */

long * FUN_1081545d8(long *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar3 = param_1[1];
  plVar5 = (long *)(ulong)*(uint *)(lVar3 + 0x20);
  if (((*(uint *)(lVar3 + 0x20) != 0) && (plVar5 = (long *)0x0, -1 < param_2)) &&
     (iVar6 = *(int *)(lVar3 + 0x24), iVar6 != 0)) {
    iVar1 = (int)param_1[2];
    while (0 < param_2) {
      if (iVar1 == iVar6) {
        return (long *)0x0;
      }
      FUN_108152238(lVar3,0);
      lVar8 = param_1[1];
      func_0x00010835c644(lVar8 + 0x10);
      pcVar9 = (code *)param_1[8];
      lVar7 = param_1[3];
      uVar2 = *(undefined4 *)(lVar8 + 0x20);
      uVar4 = (ulong)*(uint *)(lVar8 + 0x18);
      FUN_10835c58c(uVar4);
      (*pcVar9)(lVar7,lVar3,uVar2,uVar4);
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x18))(param_1,param_1[3],param_1[9]);
      if ((int)plVar5 == 0) {
        return (long *)0x0;
      }
      iVar1 = (int)param_1[2] + 1;
      *(int *)(param_1 + 2) = iVar1;
      lVar3 = param_1[1];
      iVar6 = *(int *)(lVar3 + 0x24);
      param_2 = param_2 + -1;
    }
    if (iVar1 == iVar6) {
      plVar5 = (long *)0x1;
      if ((*(byte *)(param_1 + 10) & 1) == 0) {
        *(undefined1 *)(param_1 + 10) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001081546dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x20))(param_1);
        return param_1;
      }
    }
    else {
      plVar5 = (long *)0x1;
    }
  }
  return plVar5;
}



/* Entry: 108154700; end: 1081547f7;  */

void FUN_108154700(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108154704);
  (*pcVar1)();
}



/* Entry: 1081547f8; end: 10815483b;  */

void FUN_1081547f8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1084092dc(param_2,param_4,param_5,0,param_1,param_6,1,0,(long)param_3);
  return;
}



/* Entry: 10815483c; end: 108154897;  */

void FUN_10815483c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  FUN_1084092dc(param_2,param_4,2,0,param_1,0x18,1,0,(long)param_3);
  return;
}



/* Entry: 108154898; end: 108154b1b;  */

void FUN_108154898(undefined8 *param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 auStack_130 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 auStack_e8 [20];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_3;
  FUN_108154b58(param_3,&UNK_10f47cee9);
  auStack_e8[0] = 0;
  FUN_108154b1c();
  if (uVar3 != 0) {
    if (uVar3 < 0x11) {
      FUN_108333b64(&lStack_140,*(undefined4 *)(&UNK_10df02be0 + uVar3 * 4));
      while( true ) {
        lVar1 = lStack_140;
        if (lStack_140 != 0) {
          *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 1;
          uStack_148 = *param_4;
          *param_4 = 0;
          lStack_140 = 0;
          lStack_150 = lVar1;
          FUN_10818c218(auStack_e8,&uStack_148,&lStack_150);
          uVar4 = auStack_e8[0];
          auStack_e8[0] = 0;
          FUN_108154d4c(param_4,uVar4);
          FUN_108154d04(auStack_e8);
          FUN_108154c6c(&lStack_150);
          FUN_108154cb4(&uStack_148);
        }
LAB_1081549d0:
        FUN_108154c6c(&lStack_140);
        uVar4 = *param_4;
        *param_4 = 0;
        *param_1 = uVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
        ___stack_chk_fail();
LAB_108154a18:
        iVar2 = 0x13729d28;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _memcpy(auStack_e8,&UNK_10f47cf08,0x9a);
          FUN_1083a3348(&uStack_138,auStack_e8);
          FUN_1083a33c4(&uStack_f0,&uStack_138);
          uStack_100 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          FUN_1083942b8(auStack_130,&uStack_f0,&uStack_120);
          FUN_1083a3ca0(uStack_f0);
          FUN_1083a3ca0(uStack_138);
          uVar4 = auStack_130[0];
          auStack_130[0] = 0;
          FUN_108154bd8(auStack_130);
          uRam0000000113729d20 = uVar4;
          ___cxa_guard_release(0x113729d28);
        }
LAB_108154928:
        auStack_e8[0] = 0;
        FUN_108394928(&lStack_140,uRam0000000113729d20,auStack_e8,0,0);
        FUN_108154c48(auStack_e8);
      }
      return;
    }
    if (uVar3 == 0x11) {
      if ((bRam0000000113729d28 & 1) == 0) goto LAB_108154a18;
      goto LAB_108154928;
    }
    FUN_108159fb8(param_2,0,param_3,&UNK_10f47ceec);
  }
  lStack_140 = 0;
  goto LAB_1081549d0;
}



/* Entry: 108154b1c; end: 108154b57;  */

undefined8 FUN_108154b1c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x00010815c80c(param_1,&uStack_28);
  puVar1 = &uStack_28;
  if ((int)param_1 == 0) {
    puVar1 = param_2;
  }
  return *puVar1;
}



/* Entry: 108154b58; end: 108154bd7;  */

long FUN_108154b58(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  if ((bRam0000000113254308 & 1) == 0) {
    iVar2 = 0x13254308;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam0000000113254300 = 1;
      ___cxa_guard_release(0x113254308,param_2);
    }
  }
  func_0x00010818584c(param_1,param_2);
  lVar1 = 0x113254300;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 108154bd8; end: 108154bff;  */

undefined8 FUN_108154bd8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 unaff_x19;
  
  FUN_1083a3c7c(param_1 + 1);
  func_0x000108154d64();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return unaff_x19;
}



/* Entry: 108154c00; end: 108154c47;  */

void FUN_108154c00(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x000108154d64();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 108154c48; end: 108154c6b;  */

void FUN_108154c48(long param_1)

{
  func_0x000108154d64();
  if (param_1 != 0) {
    func_0x000106f47128();
  }
  return;
}



/* Entry: 108154c6c; end: 108154cb3;  */

void FUN_108154c6c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x000108154d64();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 108154cb4; end: 108154cd7;  */

void FUN_108154cb4(void)

{
  func_0x000108154d64();
  FUN_108154cd8();
  return;
}


