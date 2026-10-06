/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00231fd8; end: 002326af;  */

void FUN_00231fd8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 byte *param_4,uint param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [11];
  undefined1 auVar9 [11];
  uint6 uVar10;
  uint6 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined1 (*pauVar21) [16];
  byte *pbVar22;
  undefined1 (*pauVar23) [16];
  undefined4 *puVar24;
  byte *pbVar25;
  undefined1 (*pauVar26) [16];
  undefined4 *puVar27;
  undefined4 *puVar28;
  byte bVar29;
  uint5 uVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint5 uVar34;
  uint5 uVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint5 uVar39;
  uint5 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint5 uVar45;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  undefined1 auVar46 [16];
  int iVar53;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar54;
  int iVar55;
  uint5 uVar56;
  int iVar59;
  int iVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar61;
  uint uVar62;
  int iVar63;
  int iVar64;
  uint uVar65;
  int iVar66;
  int iVar67;
  uint uVar68;
  int iVar69;
  int iVar70;
  uint uVar71;
  int iVar72;
  int iVar73;
  uint uVar74;
  int iVar75;
  uint uVar76;
  int iVar77;
  uint uVar78;
  int iVar79;
  int iVar80;
  uint uVar81;
  int iVar82;
  int iVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined1 auVar101 [16];
  undefined4 uVar102;
  uint uVar103;
  uint uVar105;
  uint uVar106;
  undefined1 auVar104 [16];
  uint uVar107;
  undefined4 uVar108;
  uint uVar109;
  int iVar110;
  undefined4 uVar111;
  uint uVar112;
  uint uVar115;
  uint uVar118;
  undefined1 auVar113 [16];
  int iVar116;
  uint uVar117;
  int iVar119;
  uint uVar120;
  uint uVar121;
  int iVar122;
  uint uVar123;
  undefined1 auVar114 [16];
  int iVar124;
  uint uVar125;
  uint uVar130;
  uint uVar135;
  uint uVar140;
  undefined1 auVar128 [16];
  uint uVar126;
  uint uVar127;
  uint uVar131;
  uint uVar132;
  uint uVar133;
  int iVar134;
  uint uVar136;
  uint uVar137;
  uint uVar138;
  int iVar139;
  uint uVar141;
  uint uVar142;
  uint uVar143;
  int iVar144;
  undefined1 auVar129 [16];
  byte bVar145;
  byte bVar148;
  undefined8 uVar146;
  byte bVar149;
  byte bVar150;
  undefined1 auVar147 [16];
  byte bVar151;
  byte bVar152;
  uint uVar153;
  uint uVar154;
  uint uVar155;
  uint uVar156;
  uint uVar157;
  uint uVar159;
  uint uVar160;
  undefined1 auVar158 [16];
  uint uVar161;
  
  if ((int)param_5 < 1) {
    return;
  }
  uVar16 = (ulong)param_5;
  if (param_5 < 4) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    pauVar21 = (undefined1 (*) [16])(param_4 + uVar16 * 2);
    if (((pauVar21 <= param_1 || *param_1 + uVar16 <= param_4) &&
        (*param_2 + uVar16 <= param_4 || pauVar21 <= param_2)) &&
       (*param_3 + uVar16 <= param_4 || pauVar21 <= param_3)) {
      if (param_5 < 0x10) {
        uVar19 = 0;
      }
      else {
        uVar18 = uVar16 & 0x7ffffff0;
        pauVar21 = param_1;
        pauVar23 = param_2;
        pauVar26 = param_3;
        pbVar15 = param_4;
        uVar19 = uVar18;
        do {
          uVar36 = CONCAT17(0,CONCAT16((*pauVar21)[0xb],
                                       (uint6)CONCAT14((*pauVar21)[10],
                                                       (uint)CONCAT12((*pauVar21)[9],
                                                                      (ushort)(byte)(*pauVar21)[8]))
                                      ));
          auVar8[8] = (*pauVar21)[0xc];
          auVar8._0_8_ = uVar36;
          auVar8[9] = 0;
          auVar8[10] = (*pauVar21)[0xd];
          uVar31 = CONCAT17(0,CONCAT16((*pauVar21)[3],
                                       (uint6)CONCAT14((*pauVar21)[2],
                                                       (uint)CONCAT12((*pauVar21)[1],
                                                                      (ushort)(byte)(*pauVar21)[0]))
                                      ));
          auVar9[8] = (*pauVar21)[4];
          auVar9._0_8_ = uVar31;
          auVar9[9] = 0;
          auVar9[10] = (*pauVar21)[5];
          auVar104 = *pauVar23;
          auVar13._8_8_ = 0xffffff0bffffff0a;
          auVar13._0_8_ = 0xffffff09ffffff08;
          auVar14._8_8_ = 0xffffff0fffffff0e;
          auVar14._0_8_ = 0xffffff0dffffff0c;
          auVar46 = a64_TBL(ZEXT816(0),auVar104,auVar14);
          auVar57 = a64_TBL(ZEXT816(0),auVar104,auVar13);
          auVar58[8] = 2;
          auVar58._0_8_ = 0xffffff01ffffff00;
          auVar147[8] = 2;
          auVar147._0_8_ = 0xffffff01ffffff00;
          auVar12._8_8_ = 0xffffff07ffffff06;
          auVar12._0_8_ = 0xffffff05ffffff04;
          auVar113 = a64_TBL(ZEXT816(0),auVar104,auVar12);
          auVar147[9] = 0xff;
          auVar147[10] = 0xff;
          auVar147[0xb] = 0xff;
          auVar147[0xc] = 3;
          auVar147[0xd] = 0xff;
          auVar147[0xe] = 0xff;
          auVar147[0xf] = 0xff;
          auVar41 = a64_TBL(ZEXT816(0),auVar104,auVar147);
          uVar102 = CONCAT22(auVar113._4_2_,auVar113._0_2_);
          auVar104 = *pauVar26;
          uVar93 = CONCAT26(auVar57._12_2_,
                            CONCAT24(auVar57._8_2_,CONCAT22(auVar57._4_2_,auVar57._0_2_)));
          uVar99 = CONCAT26(auVar46._12_2_,
                            CONCAT24(auVar46._8_2_,CONCAT22(auVar46._4_2_,auVar46._0_2_)));
          auVar58[9] = 0xff;
          auVar58[10] = 0xff;
          auVar58[0xb] = 0xff;
          auVar58[0xc] = 3;
          auVar58[0xd] = 0xff;
          auVar58[0xe] = 0xff;
          auVar58[0xf] = 0xff;
          auVar147 = a64_TBL(ZEXT816(0),auVar104,auVar58);
          auVar58 = a64_TBL(ZEXT816(0),auVar104,auVar12);
          auVar46 = a64_TBL(ZEXT816(0),auVar104,auVar13);
          auVar104 = a64_TBL(ZEXT816(0),auVar104,auVar14);
          uVar146 = CONCAT26(auVar104._12_2_,
                             CONCAT24(auVar104._8_2_,CONCAT22(auVar104._4_2_,auVar104._0_2_)));
          uVar100 = CONCAT26(auVar46._12_2_,
                             CONCAT24(auVar46._8_2_,CONCAT22(auVar46._4_2_,auVar46._0_2_)));
          uVar98 = CONCAT26(auVar58._12_2_,
                            CONCAT24(auVar58._8_2_,CONCAT22(auVar58._4_2_,auVar58._0_2_)));
          uVar92 = CONCAT26(auVar147._12_2_,
                            CONCAT24(auVar147._8_2_,CONCAT22(auVar147._4_2_,auVar147._0_2_)));
          auVar57 = NEON_umull(uVar31,0x4a854a854a854a85,2);
          uVar84 = (auVar9._8_3_ & 0xffff) * 0x4a85;
          uVar85 = (uint)(byte)(*pauVar21)[5] * 0x4a85;
          uVar86 = (uint)(byte)(*pauVar21)[6] * 0x4a85;
          uVar87 = (uint)(byte)(*pauVar21)[7] * 0x4a85;
          auVar158 = NEON_umull(uVar36,0x4a854a854a854a85,2);
          uVar153 = (auVar8._8_3_ & 0xffff) * 0x4a85;
          uVar154 = (uint)(byte)(*pauVar21)[0xd] * 0x4a85;
          uVar155 = (uint)(byte)(*pauVar21)[0xe] * 0x4a85;
          uVar156 = (uint)(byte)(*pauVar21)[0xf] * 0x4a85;
          auVar104 = NEON_umull(uVar92,0x6625662566256625,2);
          auVar147 = NEON_umull(uVar98,0x6625662566256625,2);
          auVar58 = NEON_umull(uVar100,0x6625662566256625,2);
          auVar46 = NEON_umull(uVar146,0x6625662566256625,2);
          uVar88 = auVar57._0_4_;
          uVar89 = auVar57._4_4_;
          uVar90 = auVar57._8_4_;
          uVar91 = auVar57._12_4_;
          uVar62 = (auVar104._0_4_ >> 8) + (uVar88 >> 8);
          uVar65 = (auVar104._4_4_ >> 8) + (uVar89 >> 8);
          uVar68 = (auVar104._8_4_ >> 8) + (uVar90 >> 8);
          uVar71 = (auVar104._12_4_ >> 8) + (uVar91 >> 8);
          uVar109 = (auVar147._0_4_ >> 8) + ((uint)(CONCAT44(uVar85,uVar84) >> 8) & 0xffffff);
          uVar115 = (auVar147._4_4_ >> 8) + (uVar85 >> 8);
          uVar118 = (auVar147._8_4_ >> 8) + (uVar86 >> 8);
          uVar121 = (auVar147._12_4_ >> 8) + (uVar87 >> 8);
          uVar157 = auVar158._0_4_;
          uVar159 = auVar158._4_4_;
          uVar160 = auVar158._8_4_;
          uVar161 = auVar158._12_4_;
          uVar127 = (auVar58._0_4_ >> 8) + (uVar157 >> 8);
          uVar133 = (auVar58._4_4_ >> 8) + (uVar159 >> 8);
          uVar138 = (auVar58._8_4_ >> 8) + (uVar160 >> 8);
          uVar143 = (auVar58._12_4_ >> 8) + (uVar161 >> 8);
          uVar112 = (auVar46._0_4_ >> 8) + (uVar153 >> 8);
          uVar117 = (auVar46._4_4_ >> 8) + (uVar154 >> 8);
          uVar120 = (auVar46._8_4_ >> 8) + (uVar155 >> 8);
          uVar123 = (auVar46._12_4_ >> 8) + (uVar156 >> 8);
          uVar103 = uVar112 - 0x379a;
          uVar105 = uVar117 - 0x379a;
          uVar106 = uVar120 - 0x379a;
          uVar107 = uVar123 - 0x379a;
          uVar94 = uVar127 - 0x379a;
          uVar95 = uVar133 - 0x379a;
          uVar96 = uVar138 - 0x379a;
          uVar97 = uVar143 - 0x379a;
          uVar125 = uVar109 - 0x379a;
          uVar130 = uVar115 - 0x379a;
          uVar135 = uVar118 - 0x379a;
          uVar140 = uVar121 - 0x379a;
          uVar74 = uVar62 - 0x379a;
          uVar76 = uVar65 - 0x379a;
          uVar78 = uVar68 - 0x379a;
          uVar81 = uVar71 - 0x379a;
          auVar37._0_4_ = -(uint)(uVar74 < 0x4000);
          auVar37._4_4_ = -(uint)(uVar76 < 0x4000);
          auVar37._8_4_ = -(uint)(uVar78 < 0x4000);
          auVar37._12_4_ = -(uint)(uVar81 < 0x4000);
          auVar32._0_4_ = -(uint)(uVar125 < 0x4000);
          auVar32._4_4_ = -(uint)(uVar130 < 0x4000);
          auVar32._8_4_ = -(uint)(uVar135 < 0x4000);
          auVar32._12_4_ = -(uint)(uVar140 < 0x4000);
          auVar101._0_4_ = -(uint)(uVar103 < 0x4000);
          auVar101._4_4_ = -(uint)(uVar105 < 0x4000);
          auVar101._8_4_ = -(uint)(uVar106 < 0x4000);
          auVar101._12_4_ = -(uint)(uVar107 < 0x4000);
          auVar42._0_4_ = uVar103 >> 6;
          auVar42._4_4_ = uVar105 >> 6;
          auVar42._8_4_ = uVar106 >> 6;
          auVar42._12_4_ = uVar107 >> 6;
          iVar49 = -(uint)(uVar117 < 0x379a);
          iVar51 = -(uint)(uVar120 < 0x379a);
          iVar53 = -(uint)(uVar123 < 0x379a);
          auVar47[0] = ~-(uVar112 < 0x379a);
          auVar47._1_3_ = 0;
          auVar47[4] = ~(byte)iVar49;
          auVar47._5_2_ = 0;
          auVar47[7] = ~(byte)((uint)iVar49 >> 0x18);
          auVar47[8] = ~(byte)iVar51;
          auVar47[9] = ~(byte)((uint)iVar51 >> 8);
          auVar47[10] = ~(byte)((uint)iVar51 >> 0x10);
          auVar47[0xb] = ~(byte)((uint)iVar51 >> 0x18);
          auVar47[0xc] = ~(byte)iVar53;
          auVar47[0xd] = ~(byte)((uint)iVar53 >> 8);
          auVar47[0xe] = ~(byte)((uint)iVar53 >> 0x10);
          auVar47[0xf] = ~(byte)((uint)iVar53 >> 0x18);
          auVar42 = auVar42 ^ (auVar42 ^ auVar47) & ~auVar101;
          auVar43._0_4_ = -(uint)(uVar94 < 0x4000);
          auVar43._4_4_ = -(uint)(uVar95 < 0x4000);
          auVar43._8_4_ = -(uint)(uVar96 < 0x4000);
          auVar43._12_4_ = -(uint)(uVar97 < 0x4000);
          auVar48._0_4_ = uVar74 >> 6;
          auVar48._4_4_ = uVar76 >> 6;
          auVar48._8_4_ = uVar78 >> 6;
          auVar48._12_4_ = uVar81 >> 6;
          auVar128._0_4_ = uVar125 >> 6;
          auVar128._4_4_ = uVar130 >> 6;
          auVar128._8_4_ = uVar135 >> 6;
          auVar128._12_4_ = uVar140 >> 6;
          iVar124 = -(uint)(uVar133 < 0x379a);
          iVar79 = -(uint)(uVar138 < 0x379a);
          iVar82 = -(uint)(uVar143 < 0x379a);
          iVar49 = -(uint)(uVar115 < 0x379a);
          iVar51 = -(uint)(uVar118 < 0x379a);
          iVar53 = -(uint)(uVar121 < 0x379a);
          iVar134 = -(uint)(uVar65 < 0x379a);
          iVar139 = -(uint)(uVar68 < 0x379a);
          iVar144 = -(uint)(uVar71 < 0x379a);
          auVar38[0] = ~-(uVar62 < 0x379a);
          auVar38._1_3_ = 0;
          auVar38[4] = ~(byte)iVar134;
          auVar38._5_2_ = 0;
          auVar38[7] = ~(byte)((uint)iVar134 >> 0x18);
          auVar38[8] = ~(byte)iVar139;
          auVar38[9] = ~(byte)((uint)iVar139 >> 8);
          auVar38[10] = ~(byte)((uint)iVar139 >> 0x10);
          auVar38[0xb] = ~(byte)((uint)iVar139 >> 0x18);
          auVar38[0xc] = ~(byte)iVar144;
          auVar38[0xd] = ~(byte)((uint)iVar144 >> 8);
          auVar38[0xe] = ~(byte)((uint)iVar144 >> 0x10);
          auVar38[0xf] = ~(byte)((uint)iVar144 >> 0x18);
          auVar33[0] = ~-(uVar109 < 0x379a);
          auVar33._1_3_ = 0;
          auVar33[4] = ~(byte)iVar49;
          auVar33._5_2_ = 0;
          auVar33[7] = ~(byte)((uint)iVar49 >> 0x18);
          auVar33[8] = ~(byte)iVar51;
          auVar33[9] = ~(byte)((uint)iVar51 >> 8);
          auVar33[10] = ~(byte)((uint)iVar51 >> 0x10);
          auVar33[0xb] = ~(byte)((uint)iVar51 >> 0x18);
          auVar33[0xc] = ~(byte)iVar53;
          auVar33[0xd] = ~(byte)((uint)iVar53 >> 8);
          auVar33[0xe] = ~(byte)((uint)iVar53 >> 0x10);
          auVar33[0xf] = ~(byte)((uint)iVar53 >> 0x18);
          auVar44[0] = ~-(uVar127 < 0x379a);
          auVar44._1_3_ = 0;
          auVar44[4] = ~(byte)iVar124;
          auVar44._5_2_ = 0;
          auVar44[7] = ~(byte)((uint)iVar124 >> 0x18);
          auVar44[8] = ~(byte)iVar79;
          auVar44[9] = ~(byte)((uint)iVar79 >> 8);
          auVar44[10] = ~(byte)((uint)iVar79 >> 0x10);
          auVar44[0xb] = ~(byte)((uint)iVar79 >> 0x18);
          auVar44[0xc] = ~(byte)iVar82;
          auVar44[0xd] = ~(byte)((uint)iVar82 >> 8);
          auVar44[0xe] = ~(byte)((uint)iVar82 >> 0x10);
          auVar44[0xf] = ~(byte)((uint)iVar82 >> 0x18);
          auVar147 = NEON_umull(uVar99,0x811a811a811a811a,2);
          auVar104._4_4_ = uVar95 >> 6;
          auVar104._0_4_ = uVar94 >> 6;
          auVar104._8_4_ = uVar96 >> 6;
          auVar104._12_4_ = uVar97 >> 6;
          auVar44 = auVar44 ^ (auVar44 ^ auVar104) & auVar43;
          auVar104 = NEON_umull(uVar93,0x811a811a811a811a,2);
          auVar58 = NEON_umull(CONCAT26(auVar113._12_2_,CONCAT24(auVar113._8_2_,uVar102)),
                               0x811a811a811a811a,2);
          auVar33 = auVar33 ^ (auVar33 ^ auVar128) & auVar32;
          uVar106 = (auVar147._0_4_ >> 8) + (uVar153 >> 8);
          uVar107 = (auVar147._4_4_ >> 8) + (uVar154 >> 8);
          uVar121 = (auVar147._8_4_ >> 8) + (uVar155 >> 8);
          uVar125 = (auVar147._12_4_ >> 8) + (uVar156 >> 8);
          uVar103 = (auVar104._0_4_ >> 8) + (uVar157 >> 8);
          uVar105 = (auVar104._4_4_ >> 8) + (uVar159 >> 8);
          uVar115 = (auVar104._8_4_ >> 8) + (uVar160 >> 8);
          uVar118 = (auVar104._12_4_ >> 8) + (uVar161 >> 8);
          uVar120 = (auVar58._0_4_ >> 8) + (uVar84 >> 8);
          uVar123 = (auVar58._4_4_ >> 8) + (uVar85 >> 8);
          uVar130 = (auVar58._8_4_ >> 8) + (uVar86 >> 8);
          uVar135 = (auVar58._12_4_ >> 8) + (uVar87 >> 8);
          uVar68 = uVar103 - 0x4515;
          uVar76 = uVar105 - 0x4515;
          uVar94 = uVar115 - 0x4515;
          uVar97 = uVar118 - 0x4515;
          uVar140 = uVar106 - 0x4515;
          uVar131 = uVar107 - 0x4515;
          uVar136 = uVar121 - 0x4515;
          uVar141 = uVar125 - 0x4515;
          auVar38 = auVar38 ^ (auVar38 ^ auVar48) & auVar37;
          iVar49 = -(uint)(uVar140 < 0x4000);
          iVar51 = -(uint)(uVar131 < 0x4000);
          iVar53 = -(uint)(uVar136 < 0x4000);
          iVar134 = -(uint)(uVar141 < 0x4000);
          iVar110 = -(uint)(uVar68 < 0x4000);
          iVar116 = -(uint)(uVar76 < 0x4000);
          iVar119 = -(uint)(uVar94 < 0x4000);
          iVar122 = -(uint)(uVar97 < 0x4000);
          uVar71 = uVar68 >> 6;
          uVar78 = uVar76 >> 6;
          uVar95 = uVar94 >> 6;
          uVar126 = uVar140 >> 6;
          uVar132 = uVar131 >> 6;
          uVar137 = uVar136 >> 6;
          uVar142 = uVar141 >> 6;
          uVar39 = CONCAT14(~-(uVar107 < 0x4515) & ~(byte)iVar51,
                            (uint)(~-(uVar106 < 0x4515) & ~(byte)iVar49 & 0xf0)) & 0xf0ffffffff;
          uVar30 = CONCAT14(~-(uVar105 < 0x4515) & ~(byte)iVar116,
                            (uint)(~-(uVar103 < 0x4515) & ~(byte)iVar110 & 0xf0)) & 0xf0ffffffff;
          uVar103 = uVar120 - 0x4515;
          uVar112 = uVar123 - 0x4515;
          uVar127 = uVar130 - 0x4515;
          uVar62 = uVar135 - 0x4515;
          iVar139 = -(uint)(uVar103 < 0x4000);
          iVar144 = -(uint)(uVar112 < 0x4000);
          iVar124 = -(uint)(uVar127 < 0x4000);
          iVar79 = -(uint)(uVar62 < 0x4000);
          uVar105 = uVar103 >> 6;
          uVar117 = uVar112 >> 6;
          uVar133 = uVar127 >> 6;
          auVar104 = NEON_umull(CONCAT17(auVar41[0xd],
                                         CONCAT16(auVar41[0xc],
                                                  CONCAT15(auVar41[9],
                                                           CONCAT14(auVar41[8],
                                                                    CONCAT13(auVar41[5],
                                                                             CONCAT12(auVar41[4],
                                                                                      auVar41._0_2_)
                                                                            ))))),0x811a811a811a811a
                                ,2);
          uVar74 = (auVar104._0_4_ >> 8) + (uVar88 >> 8);
          uVar81 = (auVar104._4_4_ >> 8) + (uVar89 >> 8);
          uVar96 = (auVar104._8_4_ >> 8) + (uVar90 >> 8);
          uVar109 = (auVar104._12_4_ >> 8) + (uVar91 >> 8);
          uVar35 = CONCAT14(~-(uVar123 < 0x4515) & ~(byte)iVar144,
                            (uint)(~-(uVar120 < 0x4515) & ~(byte)iVar139 & 0xf0)) & 0xf0ffffffff;
          uVar106 = uVar74 - 0x4515;
          uVar120 = uVar81 - 0x4515;
          uVar138 = uVar96 - 0x4515;
          uVar65 = uVar109 - 0x4515;
          iVar63 = -(uint)(uVar106 < 0x4000);
          iVar66 = -(uint)(uVar120 < 0x4000);
          iVar69 = -(uint)(uVar138 < 0x4000);
          iVar72 = -(uint)(uVar65 < 0x4000);
          uVar107 = uVar106 >> 6;
          uVar123 = uVar120 >> 6;
          uVar143 = uVar138 >> 6;
          uVar34 = CONCAT14(~-(uVar81 < 0x4515) & ~(byte)iVar66,
                            (uint)(~-(uVar74 < 0x4515) & ~(byte)iVar63 & 0xf0)) & 0xf0ffffffff;
          auVar104 = NEON_umull(uVar99,0x1913191319131913,2);
          auVar147 = NEON_umull(uVar146,0x3408340834083408,2);
          auVar58 = NEON_umull(uVar93,0x1913191319131913,2);
          auVar46 = NEON_umull(uVar100,0x3408340834083408,2);
          auVar57 = NEON_umull(CONCAT26(auVar113._12_2_,CONCAT24(auVar113._8_2_,uVar102)),
                               0x1913191319131913,2);
          auVar113 = NEON_umull(uVar98,0x3408340834083408,2);
          auVar41 = NEON_umull(CONCAT17(auVar41[0xd],
                                        CONCAT16(auVar41[0xc],
                                                 CONCAT15(auVar41[9],
                                                          CONCAT14(auVar41[8],
                                                                   CONCAT13(auVar41[5],
                                                                            CONCAT12(auVar41[4],
                                                                                     auVar41._0_2_))
                                                                  )))),0x1913191319131913,2);
          auVar158 = NEON_umull(uVar92,0x3408340834083408,2);
          iVar75 = (uVar88 >> 8) - ((auVar41._0_4_ >> 8) + (auVar158._0_4_ >> 8));
          iVar77 = (uVar89 >> 8) - ((auVar41._4_4_ >> 8) + (auVar158._4_4_ >> 8));
          iVar80 = (uVar90 >> 8) - ((auVar41._8_4_ >> 8) + (auVar158._8_4_ >> 8));
          iVar83 = (uVar91 >> 8) - ((auVar41._12_4_ >> 8) + (auVar158._12_4_ >> 8));
          iVar64 = (uVar84 >> 8) - ((auVar57._0_4_ >> 8) + (auVar113._0_4_ >> 8));
          iVar67 = (uVar85 >> 8) - ((auVar57._4_4_ >> 8) + (auVar113._4_4_ >> 8));
          iVar70 = (uVar86 >> 8) - ((auVar57._8_4_ >> 8) + (auVar113._8_4_ >> 8));
          iVar73 = (uVar87 >> 8) - ((auVar57._12_4_ >> 8) + (auVar113._12_4_ >> 8));
          iVar55 = (uVar157 >> 8) - ((auVar58._0_4_ >> 8) + (auVar46._0_4_ >> 8));
          iVar59 = (uVar159 >> 8) - ((auVar58._4_4_ >> 8) + (auVar46._4_4_ >> 8));
          iVar60 = (uVar160 >> 8) - ((auVar58._8_4_ >> 8) + (auVar46._8_4_ >> 8));
          iVar61 = (uVar161 >> 8) - ((auVar58._12_4_ >> 8) + (auVar46._12_4_ >> 8));
          iVar82 = (uVar153 >> 8) - ((auVar104._0_4_ >> 8) + (auVar147._0_4_ >> 8));
          iVar50 = (uVar154 >> 8) - ((auVar104._4_4_ >> 8) + (auVar147._4_4_ >> 8));
          iVar52 = (uVar155 >> 8) - ((auVar104._8_4_ >> 8) + (auVar147._8_4_ >> 8));
          iVar54 = (uVar156 >> 8) - ((auVar104._12_4_ >> 8) + (auVar147._12_4_ >> 8));
          auVar7[8] = 0x20;
          auVar7._0_8_ = 0x1c1814100c080400;
          auVar6[8] = 0x20;
          auVar6._0_8_ = 0x1c1814100c080400;
          auVar41[1] = (byte)(uVar107 >> 8) & (byte)((uint)iVar63 >> 8);
          auVar41[0] = (byte)uVar107 & (byte)iVar63 | (byte)uVar34;
          auVar41[2] = (byte)(uVar107 >> 0x10) & (byte)((uint)iVar63 >> 0x10);
          auVar41[3] = (byte)(uVar106 >> 0x1e) & (byte)((uint)iVar63 >> 0x18);
          auVar41[4] = (byte)uVar123 & (byte)iVar66 | (byte)(uVar34 >> 0x20);
          auVar41[5] = (byte)(uVar123 >> 8) & (byte)((uint)iVar66 >> 8);
          auVar41[6] = (byte)(uVar123 >> 0x10) & (byte)((uint)iVar66 >> 0x10);
          auVar41[7] = (byte)(uVar120 >> 0x1e) & (byte)((uint)iVar66 >> 0x18);
          auVar41[8] = (byte)uVar143 & (byte)iVar69 | ~-(uVar96 < 0x4515) & ~(byte)iVar69 & 0xf0;
          auVar41[9] = (byte)(uVar143 >> 8) & (byte)((uint)iVar69 >> 8);
          auVar41[10] = (byte)(uVar143 >> 0x10) & (byte)((uint)iVar69 >> 0x10);
          auVar41[0xb] = (byte)(uVar138 >> 0x1e) & (byte)((uint)iVar69 >> 0x18);
          auVar41[0xc] = (byte)(uVar65 >> 6) & (byte)iVar72 |
                         ~-(uVar109 < 0x4515) & ~(byte)iVar72 & 0xf0;
          auVar41[0xd] = (byte)((uVar65 >> 6) >> 8) & (byte)((uint)iVar72 >> 8);
          auVar41[0xe] = (byte)((uint3)(uVar65 >> 0xe) >> 8) & (byte)((uint)iVar72 >> 0x10);
          auVar41[0xf] = (byte)(uVar65 >> 0x1e) & (byte)((uint)iVar72 >> 0x18);
          auVar57[1] = (byte)(uVar105 >> 8) & (byte)((uint)iVar139 >> 8);
          auVar57[0] = (byte)uVar105 & (byte)iVar139 | (byte)uVar35;
          auVar57[2] = (byte)(uVar105 >> 0x10) & (byte)((uint)iVar139 >> 0x10);
          auVar57[3] = (byte)(uVar103 >> 0x1e) & (byte)((uint)iVar139 >> 0x18);
          auVar57[4] = (byte)uVar117 & (byte)iVar144 | (byte)(uVar35 >> 0x20);
          auVar57[5] = (byte)(uVar117 >> 8) & (byte)((uint)iVar144 >> 8);
          auVar57[6] = (byte)(uVar117 >> 0x10) & (byte)((uint)iVar144 >> 0x10);
          auVar57[7] = (byte)(uVar112 >> 0x1e) & (byte)((uint)iVar144 >> 0x18);
          auVar57[8] = (byte)uVar133 & (byte)iVar124 | ~-(uVar130 < 0x4515) & ~(byte)iVar124 & 0xf0;
          auVar57[9] = (byte)(uVar133 >> 8) & (byte)((uint)iVar124 >> 8);
          auVar57[10] = (byte)(uVar133 >> 0x10) & (byte)((uint)iVar124 >> 0x10);
          auVar57[0xb] = (byte)(uVar127 >> 0x1e) & (byte)((uint)iVar124 >> 0x18);
          auVar57[0xc] = (byte)(uVar62 >> 6) & (byte)iVar79 |
                         ~-(uVar135 < 0x4515) & ~(byte)iVar79 & 0xf0;
          auVar57[0xd] = (byte)((uVar62 >> 6) >> 8) & (byte)((uint)iVar79 >> 8);
          auVar57[0xe] = (byte)((uint3)(uVar62 >> 0xe) >> 8) & (byte)((uint)iVar79 >> 0x10);
          auVar57[0xf] = (byte)(uVar62 >> 0x1e) & (byte)((uint)iVar79 >> 0x18);
          auVar158[1] = (byte)(uVar71 >> 8) & (byte)((uint)iVar110 >> 8);
          auVar158[0] = (byte)uVar71 & (byte)iVar110 | (byte)uVar30;
          auVar158[2] = (byte)(uVar71 >> 0x10) & (byte)((uint)iVar110 >> 0x10);
          auVar158[3] = (byte)(uVar68 >> 0x1e) & (byte)((uint)iVar110 >> 0x18);
          auVar158[4] = (byte)uVar78 & (byte)iVar116 | (byte)(uVar30 >> 0x20);
          auVar158[5] = (byte)(uVar78 >> 8) & (byte)((uint)iVar116 >> 8);
          auVar158[6] = (byte)(uVar78 >> 0x10) & (byte)((uint)iVar116 >> 0x10);
          auVar158[7] = (byte)(uVar76 >> 0x1e) & (byte)((uint)iVar116 >> 0x18);
          auVar158[8] = (byte)uVar95 & (byte)iVar119 | ~-(uVar115 < 0x4515) & ~(byte)iVar119 & 0xf0;
          auVar158[9] = (byte)(uVar95 >> 8) & (byte)((uint)iVar119 >> 8);
          auVar158[10] = (byte)(uVar95 >> 0x10) & (byte)((uint)iVar119 >> 0x10);
          auVar158[0xb] = (byte)(uVar94 >> 0x1e) & (byte)((uint)iVar119 >> 0x18);
          auVar158[0xc] =
               (byte)(uVar97 >> 6) & (byte)iVar122 | ~-(uVar118 < 0x4515) & ~(byte)iVar122 & 0xf0;
          auVar158[0xd] = (byte)((uVar97 >> 6) >> 8) & (byte)((uint)iVar122 >> 8);
          auVar158[0xe] = (byte)((uint3)(uVar97 >> 0xe) >> 8) & (byte)((uint)iVar122 >> 0x10);
          auVar158[0xf] = (byte)(uVar97 >> 0x1e) & (byte)((uint)iVar122 >> 0x18);
          auVar3[1] = (byte)(uVar126 >> 8) & (byte)((uint)iVar49 >> 8);
          auVar3[0] = (byte)uVar126 & (byte)iVar49 | (byte)uVar39;
          auVar3[2] = (byte)(uVar126 >> 0x10) & (byte)((uint)iVar49 >> 0x10);
          auVar3[3] = (byte)(uVar140 >> 0x1e) & (byte)((uint)iVar49 >> 0x18);
          auVar3[4] = (byte)uVar132 & (byte)iVar51 | (byte)(uVar39 >> 0x20);
          auVar3[5] = (byte)(uVar132 >> 8) & (byte)((uint)iVar51 >> 8);
          auVar3[6] = (byte)(uVar132 >> 0x10) & (byte)((uint)iVar51 >> 0x10);
          auVar3[7] = (byte)(uVar131 >> 0x1e) & (byte)((uint)iVar51 >> 0x18);
          auVar3[8] = (byte)uVar137 & (byte)iVar53 | ~-(uVar121 < 0x4515) & ~(byte)iVar53 & 0xf0;
          auVar3[9] = (byte)(uVar137 >> 8) & (byte)((uint)iVar53 >> 8);
          auVar3[10] = (byte)(uVar137 >> 0x10) & (byte)((uint)iVar53 >> 0x10);
          auVar3[0xb] = (byte)(uVar136 >> 0x1e) & (byte)((uint)iVar53 >> 0x18);
          auVar3[0xc] = (byte)uVar142 & (byte)iVar134 | ~-(uVar125 < 0x4515) & ~(byte)iVar134 & 0xf0
          ;
          auVar3[0xd] = (byte)(uVar142 >> 8) & (byte)((uint)iVar134 >> 8);
          auVar3[0xe] = (byte)(uVar142 >> 0x10) & (byte)((uint)iVar134 >> 0x10);
          auVar3[0xf] = (byte)(uVar141 >> 0x1e) & (byte)((uint)iVar134 >> 0x18);
          auVar6[9] = 0x24;
          auVar6[10] = 0x28;
          auVar6[0xb] = 0x2c;
          auVar6[0xc] = 0x30;
          auVar6[0xd] = 0x34;
          auVar6[0xe] = 0x38;
          auVar6[0xf] = 0x3c;
          auVar147 = a64_TBL(ZEXT816(0),auVar41,auVar57,auVar158,auVar3,auVar6);
          uVar103 = iVar82 + 0x2204;
          uVar105 = iVar50 + 0x2204;
          uVar106 = iVar52 + 0x2204;
          uVar107 = iVar54 + 0x2204;
          uVar112 = iVar55 + 0x2204;
          uVar117 = iVar59 + 0x2204;
          uVar120 = iVar60 + 0x2204;
          uVar123 = iVar61 + 0x2204;
          iVar49 = -(uint)(uVar112 < 0x4000);
          iVar53 = -(uint)(uVar117 < 0x4000);
          iVar139 = -(uint)(uVar120 < 0x4000);
          iVar124 = -(uint)(uVar123 < 0x4000);
          iVar51 = -(uint)(uVar103 < 0x4000);
          iVar134 = -(uint)(uVar105 < 0x4000);
          iVar144 = -(uint)(uVar106 < 0x4000);
          iVar79 = -(uint)(uVar107 < 0x4000);
          uVar56 = CONCAT14(~-(iVar59 < -0x2204) & ~(byte)iVar53,
                            (uint)(~-(iVar55 < -0x2204) & ~(byte)iVar49 & 0xf)) & 0xfffffffff;
          uVar45 = CONCAT14(~-(iVar50 < -0x2204) & ~(byte)iVar134,
                            (uint)(~-(iVar82 < -0x2204) & ~(byte)iVar51 & 0xf)) & 0xfffffffff;
          uVar39 = CONCAT14(auVar44[4],(uint)(auVar44[0] & 0xf0)) & 0xf0ffffffff;
          uVar62 = iVar64 + 0x2204;
          uVar65 = iVar67 + 0x2204;
          uVar68 = iVar70 + 0x2204;
          uVar71 = iVar73 + 0x2204;
          iVar63 = -(uint)(uVar62 < 0x4000);
          iVar66 = -(uint)(uVar65 < 0x4000);
          iVar69 = -(uint)(uVar68 < 0x4000);
          iVar72 = -(uint)(uVar71 < 0x4000);
          uVar30 = CONCAT14(auVar33[4],(uint)(auVar33[0] & 0xf0)) & 0xf0ffffffff;
          uVar40 = CONCAT14(~-(iVar67 < -0x2204) & ~(byte)iVar66,
                            (uint)(~-(iVar64 < -0x2204) & ~(byte)iVar63 & 0xf)) & 0xfffffffff;
          uVar127 = iVar75 + 0x2204;
          uVar133 = iVar77 + 0x2204;
          uVar138 = iVar80 + 0x2204;
          uVar143 = iVar83 + 0x2204;
          iVar82 = -(uint)(uVar127 < 0x4000);
          iVar50 = -(uint)(uVar133 < 0x4000);
          iVar55 = -(uint)(uVar138 < 0x4000);
          iVar59 = -(uint)(uVar143 < 0x4000);
          uVar34 = CONCAT14(auVar38[4],(uint)(auVar38[0] & 0xf0)) & 0xf0ffffffff;
          uVar35 = CONCAT14(~-(iVar77 < -0x2204) & ~(byte)iVar50,
                            (uint)(~-(iVar75 < -0x2204) & ~(byte)iVar82 & 0xf)) & 0xfffffffff;
          uVar11 = auVar147._0_6_ | 0xf0f0000;
          uVar10 = auVar147._0_6_ | 0xf0f0f0f0000;
          auVar46[1] = (byte)((uVar127 >> 10) >> 8) & (byte)((uint)iVar82 >> 8);
          auVar46[0] = (byte)uVar34 | (byte)(uVar127 >> 10) & (byte)iVar82 | (byte)uVar35;
          auVar46[2] = (byte)(uVar127 >> 0x1a) & (byte)((uint)iVar82 >> 0x10);
          auVar46[3] = 0;
          auVar46[4] = (byte)(uVar34 >> 0x20) | (byte)(uVar133 >> 10) & (byte)iVar50 |
                       (byte)(uVar35 >> 0x20);
          auVar46[5] = (byte)((uVar133 >> 10) >> 8) & (byte)((uint)iVar50 >> 8);
          auVar46[6] = (byte)(uVar133 >> 0x1a) & (byte)((uint)iVar50 >> 0x10);
          auVar46[7] = 0;
          auVar46[8] = auVar38[8] & 0xf0 | (byte)(uVar138 >> 10) & (byte)iVar55 |
                       ~-(iVar80 < -0x2204) & ~(byte)iVar55 & 0xf;
          auVar46[9] = (byte)((uVar138 >> 10) >> 8) & (byte)((uint)iVar55 >> 8);
          auVar46[10] = (byte)(uVar138 >> 0x1a) & (byte)((uint)iVar55 >> 0x10);
          auVar46[0xb] = 0;
          auVar46[0xc] = auVar38[0xc] & 0xf0 | (byte)(uVar143 >> 10) & (byte)iVar59 |
                         ~-(iVar83 < -0x2204) & ~(byte)iVar59 & 0xf;
          auVar46[0xd] = (byte)((uVar143 >> 10) >> 8) & (byte)((uint)iVar59 >> 8);
          auVar46[0xe] = (byte)(uVar143 >> 0x1a) & (byte)((uint)iVar59 >> 0x10);
          auVar46[0xf] = 0;
          auVar113[1] = (byte)((uVar62 >> 10) >> 8) & (byte)((uint)iVar63 >> 8);
          auVar113[0] = (byte)uVar30 | (byte)(uVar62 >> 10) & (byte)iVar63 | (byte)uVar40;
          auVar113[2] = (byte)(uVar62 >> 0x1a) & (byte)((uint)iVar63 >> 0x10);
          auVar113[3] = 0;
          auVar113[4] = (byte)(uVar30 >> 0x20) | (byte)(uVar65 >> 10) & (byte)iVar66 |
                        (byte)(uVar40 >> 0x20);
          auVar113[5] = (byte)((uVar65 >> 10) >> 8) & (byte)((uint)iVar66 >> 8);
          auVar113[6] = (byte)(uVar65 >> 0x1a) & (byte)((uint)iVar66 >> 0x10);
          auVar113[7] = 0;
          auVar113[8] = auVar33[8] & 0xf0 | (byte)(uVar68 >> 10) & (byte)iVar69 |
                        ~-(iVar70 < -0x2204) & ~(byte)iVar69 & 0xf;
          auVar113[9] = (byte)((uVar68 >> 10) >> 8) & (byte)((uint)iVar69 >> 8);
          auVar113[10] = (byte)(uVar68 >> 0x1a) & (byte)((uint)iVar69 >> 0x10);
          auVar113[0xb] = 0;
          auVar113[0xc] =
               auVar33[0xc] & 0xf0 | (byte)(uVar71 >> 10) & (byte)iVar72 |
               ~-(iVar73 < -0x2204) & ~(byte)iVar72 & 0xf;
          auVar113[0xd] = (byte)((uVar71 >> 10) >> 8) & (byte)((uint)iVar72 >> 8);
          auVar113[0xe] = (byte)(uVar71 >> 0x1a) & (byte)((uint)iVar72 >> 0x10);
          auVar113[0xf] = 0;
          auVar2[1] = (byte)((uVar112 >> 10) >> 8) & (byte)((uint)iVar49 >> 8);
          auVar2[0] = (byte)uVar39 | (byte)(uVar112 >> 10) & (byte)iVar49 | (byte)uVar56;
          auVar2[2] = (byte)(uVar112 >> 0x1a) & (byte)((uint)iVar49 >> 0x10);
          auVar2[3] = 0;
          auVar2[4] = (byte)(uVar39 >> 0x20) | (byte)(uVar117 >> 10) & (byte)iVar53 |
                      (byte)(uVar56 >> 0x20);
          auVar2[5] = (byte)((uVar117 >> 10) >> 8) & (byte)((uint)iVar53 >> 8);
          auVar2[6] = (byte)(uVar117 >> 0x1a) & (byte)((uint)iVar53 >> 0x10);
          auVar2[7] = 0;
          auVar2[8] = auVar44[8] & 0xf0 | (byte)(uVar120 >> 10) & (byte)iVar139 |
                      ~-(iVar60 < -0x2204) & ~(byte)iVar139 & 0xf;
          auVar2[9] = (byte)((uVar120 >> 10) >> 8) & (byte)((uint)iVar139 >> 8);
          auVar2[10] = (byte)(uVar120 >> 0x1a) & (byte)((uint)iVar139 >> 0x10);
          auVar2[0xb] = 0;
          auVar2[0xc] = auVar44[0xc] & 0xf0 | (byte)(uVar123 >> 10) & (byte)iVar124 |
                        ~-(iVar61 < -0x2204) & ~(byte)iVar124 & 0xf;
          auVar2[0xd] = (byte)((uVar123 >> 10) >> 8) & (byte)((uint)iVar124 >> 8);
          auVar2[0xe] = (byte)(uVar123 >> 0x1a) & (byte)((uint)iVar124 >> 0x10);
          auVar2[0xf] = 0;
          auVar4[1] = (byte)((uVar103 >> 10) >> 8) & (byte)((uint)iVar51 >> 8);
          auVar4[0] = auVar42[0] & 0xf0 | (byte)(uVar103 >> 10) & (byte)iVar51 | (byte)uVar45;
          auVar4[2] = (byte)(uVar103 >> 0x1a) & (byte)((uint)iVar51 >> 0x10);
          auVar4[3] = 0;
          auVar4[4] = auVar42[4] & 0xf0 | (byte)(uVar105 >> 10) & (byte)iVar134 |
                      (byte)(uVar45 >> 0x20);
          auVar4[5] = (byte)((uVar105 >> 10) >> 8) & (byte)((uint)iVar134 >> 8);
          auVar4[6] = (byte)(uVar105 >> 0x1a) & (byte)((uint)iVar134 >> 0x10);
          auVar4[7] = 0;
          auVar4[8] = auVar42[8] & 0xf0 | (byte)(uVar106 >> 10) & (byte)iVar144 |
                      ~-(iVar52 < -0x2204) & ~(byte)iVar144 & 0xf;
          auVar4[9] = (byte)((uVar106 >> 10) >> 8) & (byte)((uint)iVar144 >> 8);
          auVar4[10] = (byte)(uVar106 >> 0x1a) & (byte)((uint)iVar144 >> 0x10);
          auVar4[0xb] = 0;
          auVar4[0xc] = auVar42[0xc] & 0xf0 | (byte)(uVar107 >> 10) & (byte)iVar79 |
                        ~-(iVar54 < -0x2204) & ~(byte)iVar79 & 0xf;
          auVar4[0xd] = (byte)((uVar107 >> 10) >> 8) & (byte)((uint)iVar79 >> 8);
          auVar4[0xe] = (byte)(uVar107 >> 0x1a) & (byte)((uint)iVar79 >> 0x10);
          auVar4[0xf] = 0;
          auVar7[9] = 0x24;
          auVar7[10] = 0x28;
          auVar7[0xb] = 0x2c;
          auVar7[0xc] = 0x30;
          auVar7[0xd] = 0x34;
          auVar7[0xe] = 0x38;
          auVar7[0xf] = 0x3c;
          auVar104 = a64_TBL(ZEXT816(0),auVar46,auVar113,auVar2,auVar4,auVar7);
          *pbVar15 = auVar147[0] | 0xf;
          pbVar15[1] = auVar104[0];
          pbVar15[2] = auVar147[1] | 0xf;
          pbVar15[3] = auVar104[1];
          pbVar15[4] = (byte)(uVar11 >> 0x10);
          pbVar15[5] = auVar104[2];
          pbVar15[6] = (byte)(uVar11 >> 0x18);
          pbVar15[7] = auVar104[3];
          pbVar15[8] = (byte)(uVar10 >> 0x20);
          pbVar15[9] = auVar104[4];
          pbVar15[10] = (byte)(uVar10 >> 0x28);
          pbVar15[0xb] = auVar104[5];
          pbVar15[0xc] = auVar147[6] | 0xf;
          pbVar15[0xd] = auVar104[6];
          pbVar15[0xe] = auVar147[7] | 0xf;
          pbVar15[0xf] = auVar104[7];
          pbVar15[0x10] = auVar147[8] | 0xf;
          pbVar15[0x11] = auVar104[8];
          pbVar15[0x12] = auVar147[9] | 0xf;
          pbVar15[0x13] = auVar104[9];
          pbVar15[0x14] = auVar147[10] | 0xf;
          pbVar15[0x15] = auVar104[10];
          pbVar15[0x16] = auVar147[0xb] | 0xf;
          pbVar15[0x17] = auVar104[0xb];
          pbVar15[0x18] = auVar147[0xc] | 0xf;
          pbVar15[0x19] = auVar104[0xc];
          pbVar15[0x1a] = auVar147[0xd] | 0xf;
          pbVar15[0x1b] = auVar104[0xd];
          pbVar15[0x1c] = auVar147[0xe] | 0xf;
          pbVar15[0x1d] = auVar104[0xe];
          pbVar15[0x1e] = auVar147[0xf] | 0xf;
          pbVar15[0x1f] = auVar104[0xf];
          pbVar15 = pbVar15 + 0x20;
          uVar19 = uVar19 - 0x10;
          pauVar21 = pauVar21 + 1;
          pauVar23 = pauVar23 + 1;
          pauVar26 = pauVar26 + 1;
        } while (uVar19 != 0);
        if (uVar18 == uVar16) {
          return;
        }
        uVar19 = uVar18;
        if ((param_5 & 0xc) == 0) goto LAB_00232014;
      }
      uVar18 = uVar16 & 0x7ffffffc;
      lVar17 = uVar19 - uVar18;
      puVar24 = (undefined4 *)(*param_3 + uVar19);
      puVar27 = (undefined4 *)(*param_2 + uVar19);
      puVar28 = (undefined4 *)(*param_1 + uVar19);
      pbVar15 = param_4 + uVar19 * 2;
      do {
        uVar102 = *puVar28;
        uVar108 = *puVar27;
        uVar111 = *puVar24;
        auVar104 = NEON_umull((ulong)CONCAT16((char)((uint)uVar102 >> 0x18),
                                              (uint6)CONCAT14((char)((uint)uVar102 >> 0x10),
                                                              (uint)CONCAT12((char)((uint)uVar102 >>
                                                                                   8),(ushort)(byte)
                                                  uVar102))),0x4a854a854a854a85,2);
        uVar103 = auVar104._0_4_;
        uVar105 = auVar104._4_4_;
        uVar106 = auVar104._8_4_;
        uVar107 = auVar104._12_4_;
        uVar31 = (ulong)CONCAT16((char)((uint)uVar111 >> 0x18),
                                 (uint6)CONCAT14((char)((uint)uVar111 >> 0x10),
                                                 (uint)CONCAT12((char)((uint)uVar111 >> 8),
                                                                (ushort)(byte)uVar111)));
        auVar104 = NEON_umull(uVar31,0x6625662566256625,2);
        uVar127 = (auVar104._0_4_ >> 8) + (uVar103 >> 8);
        uVar133 = (auVar104._4_4_ >> 8) + (uVar105 >> 8);
        uVar138 = (auVar104._8_4_ >> 8) + (uVar106 >> 8);
        uVar143 = (auVar104._12_4_ >> 8) + (uVar107 >> 8);
        uVar19 = (ulong)CONCAT16((char)((uint)uVar108 >> 0x18),
                                 (uint6)CONCAT14((char)((uint)uVar108 >> 0x10),
                                                 (uint)CONCAT12((char)((uint)uVar108 >> 8),
                                                                (ushort)(byte)uVar108)));
        auVar147 = NEON_umull(uVar19,0x1913191319131913,2);
        auVar104 = NEON_umull(uVar31,0x3408340834083408,2);
        uVar112 = uVar127 - 0x379a;
        uVar117 = uVar133 - 0x379a;
        uVar120 = uVar138 - 0x379a;
        uVar123 = uVar143 - 0x379a;
        iVar49 = -(uint)(uVar117 < 0x4000);
        iVar51 = -(uint)(uVar120 < 0x4000);
        iVar53 = -(uint)(uVar123 < 0x4000);
        auVar114._0_4_ = uVar112 >> 6;
        auVar114._4_4_ = uVar117 >> 6;
        auVar114._8_4_ = uVar120 >> 6;
        auVar114._12_4_ = uVar123 >> 6;
        iVar134 = -(uint)(uVar133 < 0x379a);
        iVar139 = -(uint)(uVar138 < 0x379a);
        iVar144 = -(uint)(uVar143 < 0x379a);
        auVar129[0] = ~-(uVar127 < 0x379a);
        auVar129._1_3_ = 0;
        auVar129[4] = ~(byte)iVar134;
        auVar129._5_2_ = 0;
        auVar129[7] = ~(byte)((uint)iVar134 >> 0x18);
        auVar129[8] = ~(byte)iVar139;
        auVar129[9] = ~(byte)((uint)iVar139 >> 8);
        auVar129[10] = ~(byte)((uint)iVar139 >> 0x10);
        auVar129[0xb] = ~(byte)((uint)iVar139 >> 0x18);
        auVar129[0xc] = ~(byte)iVar144;
        auVar129[0xd] = ~(byte)((uint)iVar144 >> 8);
        auVar129[0xe] = ~(byte)((uint)iVar144 >> 0x10);
        auVar129[0xf] = ~(byte)((uint)iVar144 >> 0x18);
        iVar134 = (uVar103 >> 8) - ((auVar147._0_4_ >> 8) + (auVar104._0_4_ >> 8));
        iVar139 = (uVar105 >> 8) - ((auVar147._4_4_ >> 8) + (auVar104._4_4_ >> 8));
        iVar144 = (uVar106 >> 8) - ((auVar147._8_4_ >> 8) + (auVar104._8_4_ >> 8));
        iVar124 = (uVar107 >> 8) - ((auVar147._12_4_ >> 8) + (auVar104._12_4_ >> 8));
        auVar5._1_3_ = 0;
        auVar5[0] = -(uVar112 < 0x4000);
        auVar5[4] = (char)iVar49;
        auVar5._5_2_ = 0;
        auVar5[7] = (char)((uint)iVar49 >> 0x18);
        auVar5[8] = (char)iVar51;
        auVar5[9] = (char)((uint)iVar51 >> 8);
        auVar5[10] = (char)((uint)iVar51 >> 0x10);
        auVar5[0xb] = (char)((uint)iVar51 >> 0x18);
        auVar5[0xc] = (char)iVar53;
        auVar5[0xd] = (char)((uint)iVar53 >> 8);
        auVar5[0xe] = (char)((uint)iVar53 >> 0x10);
        auVar5[0xf] = (char)((uint)iVar53 >> 0x18);
        auVar114 = auVar114 ^ (auVar114 ^ auVar129) & ~auVar5;
        uVar127 = iVar134 + 0x2204;
        uVar133 = iVar139 + 0x2204;
        uVar138 = iVar144 + 0x2204;
        uVar143 = iVar124 + 0x2204;
        bVar145 = -(uVar127 < 0x4000);
        bVar148 = -(uVar133 < 0x4000);
        bVar149 = -(uVar138 < 0x4000);
        bVar150 = -(uVar143 < 0x4000);
        auVar104 = NEON_umull(uVar19,0x811a811a811a811a,2);
        uVar112 = (auVar104._0_4_ >> 8) + (uVar103 >> 8);
        uVar117 = (auVar104._4_4_ >> 8) + (uVar105 >> 8);
        uVar120 = (auVar104._8_4_ >> 8) + (uVar106 >> 8);
        uVar123 = (auVar104._12_4_ >> 8) + (uVar107 >> 8);
        uVar103 = uVar112 - 0x4515;
        uVar105 = uVar117 - 0x4515;
        uVar106 = uVar120 - 0x4515;
        uVar107 = uVar123 - 0x4515;
        bVar151 = -(uVar103 < 0x4000);
        bVar152 = -(uVar105 < 0x4000);
        bVar29 = -(uVar106 < 0x4000);
        bVar1 = -(uVar107 < 0x4000);
        uVar30 = CONCAT14(~-(uVar117 < 0x4515) & ~bVar152,
                          (uint)(~-(uVar112 < 0x4515) & ~bVar151 & 0xf0)) & 0xf0ffffffff;
        uVar34 = CONCAT14(auVar114[4],(uint)(auVar114[0] & 0xf0)) & 0xf0ffffffff;
        uVar19 = (ulong)CONCAT16((byte)(uVar107 >> 6) & bVar1 | ~-(uVar123 < 0x4515) & ~bVar1 & 0xf0
                                 ,(uint6)CONCAT14((byte)(uVar106 >> 6) & bVar29 |
                                                  ~-(uVar120 < 0x4515) & ~bVar29 & 0xf0,
                                                  (uint)CONCAT12((byte)(uVar105 >> 6) & bVar152 |
                                                                 (byte)(uVar30 >> 0x20),
                                                                 (ushort)(byte)((byte)(uVar103 >> 6)
                                                                                & bVar151 |
                                                                               (byte)uVar30)))) |
                 0xf000f000f000f;
        *(ulong *)pbVar15 =
             CONCAT17(auVar114[0xc] & 0xf0 | (byte)(uVar143 >> 10) & bVar150 |
                      ~-(iVar124 < -0x2204) & ~bVar150 & 0xf,
                      (int7)CONCAT26((short)(uVar19 >> 0x30),
                                     CONCAT15(auVar114[8] & 0xf0 | (byte)(uVar138 >> 10) & bVar149 |
                                              ~-(iVar144 < -0x2204) & ~bVar149 & 0xf,
                                              (int5)CONCAT44((int)(uVar19 >> 0x20),
                                                             CONCAT13((byte)(uVar34 >> 0x20) |
                                                                      (byte)(uVar133 >> 10) &
                                                                      bVar148 | ~-(iVar139 < -0x2204
                                                                                  ) & ~bVar148 & 0xf
                                                                      ,(int3)CONCAT62((int6)(uVar19 
                                                  >> 0x10),CONCAT11((byte)uVar34 |
                                                                    (byte)(uVar127 >> 10) & bVar145
                                                                    | ~-(iVar134 < -0x2204) &
                                                                      ~bVar145 & 0xf,(char)uVar19)))
                                                  ))));
        lVar17 = lVar17 + 4;
        puVar24 = puVar24 + 1;
        puVar27 = puVar27 + 1;
        puVar28 = puVar28 + 1;
        pbVar15 = pbVar15 + 8;
      } while (lVar17 != 0);
      if (uVar18 == uVar16) {
        return;
      }
    }
  }
LAB_00232014:
  lVar17 = uVar16 - uVar18;
  pbVar15 = *param_1 + uVar18;
  pbVar20 = param_4 + uVar18 * 2 + 1;
  pbVar22 = *param_3 + uVar18;
  pbVar25 = *param_2 + uVar18;
  do {
    uVar106 = (uint)*pbVar15 * 0x4a85 >> 8;
    uVar103 = uVar106 + ((uint)*pbVar22 * 0x6625 >> 8);
    uVar105 = uVar103 - 0x379a;
    bVar29 = 0;
    if (0x3799 < uVar103) {
      bVar29 = 0xf0;
    }
    bVar1 = (byte)(uVar105 >> 6);
    if (0x3fff < uVar105) {
      bVar1 = bVar29;
    }
    iVar49 = uVar106 - (((uint)*pbVar25 * 0x1913 >> 8) + ((uint)*pbVar22 * 0x3408 >> 8));
    uVar103 = iVar49 + 0x2204;
    bVar29 = 0;
    if (-0x2205 < iVar49) {
      bVar29 = 0xf;
    }
    bVar145 = (byte)(uVar103 >> 10);
    if (0x3fff < uVar103) {
      bVar145 = bVar29;
    }
    uVar106 = uVar106 + ((uint)*pbVar25 * 0x811a >> 8);
    uVar103 = uVar106 - 0x4515;
    bVar29 = 0;
    if (0x4514 < uVar106) {
      bVar29 = 0xf0;
    }
    bVar148 = (byte)(uVar103 >> 6);
    if (0x3fff < uVar103) {
      bVar148 = bVar29;
    }
    pbVar20[-1] = bVar148 | 0xf;
    *pbVar20 = bVar1 & 0xf0 | bVar145;
    lVar17 = lVar17 + -1;
    pbVar15 = pbVar15 + 1;
    pbVar20 = pbVar20 + 2;
    pbVar22 = pbVar22 + 1;
    pbVar25 = pbVar25 + 1;
  } while (lVar17 != 0);
  return;
}



/* Entry: 002326b0; end: 00232ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002326b0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 *param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  uint3 uVar5;
  uint3 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 (*pauVar14) [16];
  byte *pbVar15;
  undefined1 (*pauVar16) [16];
  undefined4 *puVar17;
  byte *pbVar18;
  undefined1 (*pauVar19) [16];
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  uint5 uVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  uint5 uVar27;
  undefined1 auVar28 [12];
  uint5 uVar30;
  uint5 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  uint uVar45;
  uint uVar46;
  undefined1 auVar44 [16];
  int iVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar52;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar53 [16];
  uint uVar57;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  undefined1 auVar58 [16];
  int iVar62;
  undefined8 uVar63;
  int iVar67;
  undefined1 auVar64 [16];
  int iVar66;
  int iVar68;
  undefined1 auVar65 [16];
  int iVar69;
  int iVar72;
  int iVar73;
  undefined1 auVar70 [16];
  int iVar74;
  undefined1 auVar71 [16];
  int iVar75;
  undefined8 uVar76;
  int iVar83;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  int iVar82;
  int iVar84;
  undefined1 auVar81 [16];
  undefined8 uVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined4 uVar90;
  uint uVar91;
  uint uVar93;
  uint uVar94;
  undefined1 auVar92 [15];
  uint uVar95;
  undefined4 uVar96;
  undefined1 auVar97 [15];
  undefined1 auVar98 [16];
  byte bVar99;
  undefined4 uVar100;
  int iVar101;
  ulong uVar102;
  int iVar108;
  undefined1 auVar104 [16];
  int iVar107;
  int iVar109;
  undefined1 auVar106 [16];
  uint uVar110;
  uint uVar118;
  uint uVar120;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  uint uVar119;
  uint uVar121;
  uint uVar122;
  undefined1 auVar115 [16];
  uint uVar123;
  uint5 uVar124;
  undefined8 uVar125;
  uint uVar127;
  int iVar128;
  uint uVar129;
  uint uVar130;
  int iVar131;
  uint uVar132;
  uint uVar133;
  int iVar134;
  undefined1 auVar126 [16];
  uint uVar135;
  uint uVar136;
  int iVar137;
  undefined8 uVar138;
  uint uVar140;
  int iVar141;
  uint uVar142;
  int iVar143;
  uint uVar144;
  uint uVar145;
  undefined1 auVar139 [16];
  int iVar146;
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar35 [16];
  undefined1 auVar103 [12];
  undefined1 auVar105 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  
  if ((int)param_5 < 1) {
    return;
  }
  uVar8 = (ulong)param_5;
  if (param_5 < 4) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    pauVar14 = (undefined1 (*) [16])(param_4 + uVar8 * 2);
    if (((pauVar14 <= param_1 || *param_1 + uVar8 <= param_4) &&
        (*param_2 + uVar8 <= param_4 || pauVar14 <= param_2)) &&
       (*param_3 + uVar8 <= param_4 || pauVar14 <= param_3)) {
      if (param_5 < 0x10) {
        uVar12 = 0;
      }
      else {
        uVar10 = uVar8 & 0x7ffffff0;
        pauVar14 = param_1;
        pauVar16 = param_2;
        pauVar19 = param_3;
        puVar7 = param_4;
        uVar12 = uVar10;
        do {
          auVar77 = *pauVar16;
          auVar87._8_8_ = 0xffffff07ffffff06;
          auVar87._0_8_ = 0xffffff05ffffff04;
          auVar104[8] = 2;
          auVar104._0_8_ = 0xffffff01ffffff00;
          auVar98[8] = 2;
          auVar98._0_8_ = 0xffffff01ffffff00;
          auVar98[9] = 0xff;
          auVar98[10] = 0xff;
          auVar98[0xb] = 0xff;
          auVar98[0xc] = 3;
          auVar98[0xd] = 0xff;
          auVar98[0xe] = 0xff;
          auVar98[0xf] = 0xff;
          auVar34 = a64_TBL(ZEXT816(0),auVar77,auVar98);
          auVar64 = a64_TBL(ZEXT816(0),auVar77,auVar87);
          auVar79._8_8_ = 0xffffff0fffffff0e;
          auVar79._0_8_ = 0xffffff0dffffff0c;
          auVar86._8_8_ = 0xffffff0bffffff0a;
          auVar86._0_8_ = 0xffffff09ffffff08;
          auVar70 = a64_TBL(ZEXT816(0),auVar77,auVar86);
          auVar98 = a64_TBL(ZEXT816(0),auVar77,auVar79);
          uVar125 = CONCAT26(auVar98._12_2_,
                             CONCAT24(auVar98._8_2_,CONCAT22(auVar98._4_2_,auVar98._0_2_)));
          uVar138 = CONCAT26(auVar70._12_2_,
                             CONCAT24(auVar70._8_2_,CONCAT22(auVar70._4_2_,auVar70._0_2_)));
          auVar98 = *pauVar19;
          auVar104[9] = 0xff;
          auVar104[10] = 0xff;
          auVar104[0xb] = 0xff;
          auVar104[0xc] = 3;
          auVar104[0xd] = 0xff;
          auVar104[0xe] = 0xff;
          auVar104[0xf] = 0xff;
          auVar104 = a64_TBL(ZEXT816(0),auVar98,auVar104);
          auVar70 = a64_TBL(ZEXT816(0),auVar98,auVar87);
          auVar77 = a64_TBL(ZEXT816(0),auVar98,auVar86);
          auVar98 = a64_TBL(ZEXT816(0),auVar98,auVar79);
          uVar63 = CONCAT26(auVar98._12_2_,
                            CONCAT24(auVar98._8_2_,CONCAT22(auVar98._4_2_,auVar98._0_2_)));
          uVar76 = CONCAT26(auVar77._12_2_,
                            CONCAT24(auVar77._8_2_,CONCAT22(auVar77._4_2_,auVar77._0_2_)));
          uVar85 = CONCAT26(auVar70._12_2_,
                            CONCAT24(auVar70._8_2_,CONCAT22(auVar70._4_2_,auVar70._0_2_)));
          uVar32 = CONCAT26(auVar104._12_2_,
                            CONCAT24(auVar104._8_2_,CONCAT22(auVar104._4_2_,auVar104._0_2_)));
          uVar122 = (uint)(byte)(*pauVar14)[0xc] * 0x4a85;
          uVar136 = (uint)(byte)(*pauVar14)[0xd] * 0x4a85;
          uVar45 = (uint)(byte)(*pauVar14)[0xe] * 0x4a85;
          uVar46 = (uint)(byte)(*pauVar14)[0xf] * 0x4a85;
          auVar98 = NEON_umull((ulong)CONCAT16((*pauVar14)[0xb],
                                               (uint6)CONCAT14((*pauVar14)[10],
                                                               (uint)CONCAT12((*pauVar14)[9],
                                                                              (ushort)(byte)(*
                                                  pauVar14)[8]))),0x4a854a854a854a85,2);
          uVar91 = (uint)(byte)(*pauVar14)[4] * 0x4a85;
          uVar93 = (uint)(byte)(*pauVar14)[5] * 0x4a85;
          uVar94 = (uint)(byte)(*pauVar14)[6] * 0x4a85;
          uVar95 = (uint)(byte)(*pauVar14)[7] * 0x4a85;
          auVar104 = NEON_umull((ulong)CONCAT16((*pauVar14)[3],
                                                (uint6)CONCAT14((*pauVar14)[2],
                                                                (uint)CONCAT12((*pauVar14)[1],
                                                                               (ushort)(byte)(*
                                                  pauVar14)[0]))),0x4a854a854a854a85,2);
          uVar120 = auVar104._0_4_;
          uVar121 = auVar104._4_4_;
          uVar110 = auVar104._8_4_;
          uVar118 = auVar104._12_4_;
          uVar135 = auVar98._0_4_;
          uVar129 = auVar98._4_4_;
          uVar132 = auVar98._8_4_;
          uVar144 = auVar98._12_4_;
          auVar98 = NEON_umull(uVar85,0x6625662566256625,2);
          auVar104 = NEON_umull(uVar76,0x6625662566256625,2);
          auVar77 = NEON_umull(uVar63,0x6625662566256625,2);
          uVar57 = (auVar98._0_4_ >> 8) + (uVar91 >> 8);
          uVar59 = (auVar98._4_4_ >> 8) + (uVar93 >> 8);
          uVar60 = (auVar98._8_4_ >> 8) + (uVar94 >> 8);
          uVar61 = (auVar98._12_4_ >> 8) + (uVar95 >> 8);
          uVar140 = (auVar104._0_4_ >> 8) + (uVar135 >> 8);
          uVar142 = (auVar104._4_4_ >> 8) + (uVar129 >> 8);
          uVar145 = (auVar104._8_4_ >> 8) + (uVar132 >> 8);
          uVar119 = (auVar104._12_4_ >> 8) + (uVar144 >> 8);
          uVar52 = (auVar77._0_4_ >> 8) + (uVar122 >> 8);
          uVar54 = (auVar77._4_4_ >> 8) + (uVar136 >> 8);
          uVar55 = (auVar77._8_4_ >> 8) + (uVar45 >> 8);
          uVar56 = (auVar77._12_4_ >> 8) + (uVar46 >> 8);
          uVar123 = uVar52 - 0x379a;
          uVar127 = uVar54 - 0x379a;
          uVar130 = uVar55 - 0x379a;
          uVar133 = uVar56 - 0x379a;
          auVar111._0_4_ = -(uint)(uVar123 < 0x4000);
          auVar111._4_4_ = -(uint)(uVar127 < 0x4000);
          auVar111._8_4_ = -(uint)(uVar130 < 0x4000);
          auVar111._12_4_ = -(uint)(uVar133 < 0x4000);
          auVar114._0_4_ = uVar123 >> 6;
          auVar114._4_4_ = uVar127 >> 6;
          auVar114._8_4_ = uVar130 >> 6;
          auVar114._12_4_ = uVar133 >> 6;
          iVar137 = -(uint)(uVar54 < 0x379a);
          iVar141 = -(uint)(uVar55 < 0x379a);
          iVar143 = -(uint)(uVar56 < 0x379a);
          auVar53[0] = ~-(uVar52 < 0x379a);
          auVar53._1_3_ = 0;
          auVar53[4] = ~(byte)iVar137;
          auVar53._5_2_ = 0;
          auVar53[7] = ~(byte)((uint)iVar137 >> 0x18);
          auVar53[8] = ~(byte)iVar141;
          auVar53[9] = ~(byte)((uint)iVar141 >> 8);
          auVar53[10] = ~(byte)((uint)iVar141 >> 0x10);
          auVar53[0xb] = ~(byte)((uint)iVar141 >> 0x18);
          auVar53[0xc] = ~(byte)iVar143;
          auVar53[0xd] = ~(byte)((uint)iVar143 >> 8);
          auVar53[0xe] = ~(byte)((uint)iVar143 >> 0x10);
          auVar53[0xf] = ~(byte)((uint)iVar143 >> 0x18);
          auVar53 = auVar53 ^ (auVar53 ^ auVar114) & auVar111;
          uVar123 = uVar140 - 0x379a;
          uVar127 = uVar142 - 0x379a;
          uVar130 = uVar145 - 0x379a;
          uVar133 = uVar119 - 0x379a;
          auVar112._0_4_ = -(uint)(uVar123 < 0x4000);
          auVar112._4_4_ = -(uint)(uVar127 < 0x4000);
          auVar112._8_4_ = -(uint)(uVar130 < 0x4000);
          auVar112._12_4_ = -(uint)(uVar133 < 0x4000);
          auVar25._0_4_ = uVar123 >> 6;
          auVar25._4_4_ = uVar127 >> 6;
          auVar25._8_4_ = uVar130 >> 6;
          auVar25._12_4_ = uVar133 >> 6;
          iVar137 = -(uint)(uVar142 < 0x379a);
          iVar141 = -(uint)(uVar145 < 0x379a);
          iVar143 = -(uint)(uVar119 < 0x379a);
          auVar49[0] = ~-(uVar140 < 0x379a);
          auVar49._1_3_ = 0;
          auVar49[4] = ~(byte)iVar137;
          auVar49._5_2_ = 0;
          auVar49[7] = ~(byte)((uint)iVar137 >> 0x18);
          auVar49[8] = ~(byte)iVar141;
          auVar49[9] = ~(byte)((uint)iVar141 >> 8);
          auVar49[10] = ~(byte)((uint)iVar141 >> 0x10);
          auVar49[0xb] = ~(byte)((uint)iVar141 >> 0x18);
          auVar49[0xc] = ~(byte)iVar143;
          auVar49[0xd] = ~(byte)((uint)iVar143 >> 8);
          auVar49[0xe] = ~(byte)((uint)iVar143 >> 0x10);
          auVar49[0xf] = ~(byte)((uint)iVar143 >> 0x18);
          auVar25 = auVar25 ^ (auVar25 ^ auVar49) & ~auVar112;
          uVar123 = uVar57 - 0x379a;
          uVar127 = uVar59 - 0x379a;
          uVar130 = uVar60 - 0x379a;
          uVar133 = uVar61 - 0x379a;
          auVar50._0_4_ = -(uint)(uVar123 < 0x4000);
          auVar50._4_4_ = -(uint)(uVar127 < 0x4000);
          auVar50._8_4_ = -(uint)(uVar130 < 0x4000);
          auVar50._12_4_ = -(uint)(uVar133 < 0x4000);
          auVar113._0_4_ = uVar123 >> 6;
          auVar113._4_4_ = uVar127 >> 6;
          auVar113._8_4_ = uVar130 >> 6;
          auVar113._12_4_ = uVar133 >> 6;
          iVar137 = -(uint)(uVar59 < 0x379a);
          iVar141 = -(uint)(uVar60 < 0x379a);
          iVar143 = -(uint)(uVar61 < 0x379a);
          auVar51[0] = ~-(uVar57 < 0x379a);
          auVar51._1_3_ = 0;
          auVar51[4] = ~(byte)iVar137;
          auVar51._5_2_ = 0;
          auVar51[7] = ~(byte)((uint)iVar137 >> 0x18);
          auVar51[8] = ~(byte)iVar141;
          auVar51[9] = ~(byte)((uint)iVar141 >> 8);
          auVar51[10] = ~(byte)((uint)iVar141 >> 0x10);
          auVar51[0xb] = ~(byte)((uint)iVar141 >> 0x18);
          auVar51[0xc] = ~(byte)iVar143;
          auVar51[0xd] = ~(byte)((uint)iVar143 >> 8);
          auVar51[0xe] = ~(byte)((uint)iVar143 >> 0x10);
          auVar51[0xf] = ~(byte)((uint)iVar143 >> 0x18);
          auVar51 = auVar51 ^ (auVar51 ^ auVar113) & auVar50;
          auVar114 = NEON_umull(CONCAT17(auVar34[0xd],
                                         CONCAT16(auVar34[0xc],
                                                  CONCAT15(auVar34[9],
                                                           CONCAT14(auVar34[8],
                                                                    CONCAT13(auVar34[5],
                                                                             CONCAT12(auVar34[4],
                                                                                      auVar34._0_2_)
                                                                            ))))),0x1913191319131913
                                ,2);
          auVar104 = NEON_umull(uVar32,0x3408340834083408,2);
          auVar77 = NEON_umull(CONCAT17(auVar64[0xd],
                                        CONCAT16(auVar64[0xc],
                                                 CONCAT15(auVar64[9],
                                                          CONCAT14(auVar64[8],
                                                                   CONCAT13(auVar64[5],
                                                                            CONCAT12(auVar64[4],
                                                                                     auVar64._0_2_))
                                                                  )))),0x1913191319131913,2);
          auVar86 = NEON_umull(uVar85,0x3408340834083408,2);
          auVar87 = NEON_umull(uVar138,0x1913191319131913,2);
          auVar78 = NEON_umull(uVar76,0x3408340834083408,2);
          auVar79 = NEON_umull(uVar125,0x1913191319131913,2);
          auVar70 = NEON_umull(uVar63,0x3408340834083408,2);
          auVar98 = NEON_umull(uVar32,0x6625662566256625,2);
          uVar123 = (auVar98._0_4_ >> 8) + (uVar120 >> 8);
          uVar127 = (auVar98._4_4_ >> 8) + (uVar121 >> 8);
          uVar130 = (auVar98._8_4_ >> 8) + (uVar110 >> 8);
          uVar133 = (auVar98._12_4_ >> 8) + (uVar118 >> 8);
          iVar62 = (uVar122 >> 8) - ((auVar79._0_4_ >> 8) + (auVar70._0_4_ >> 8));
          iVar66 = (uVar136 >> 8) - ((auVar79._4_4_ >> 8) + (auVar70._4_4_ >> 8));
          iVar67 = (uVar45 >> 8) - ((auVar79._8_4_ >> 8) + (auVar70._8_4_ >> 8));
          iVar68 = (uVar46 >> 8) - ((auVar79._12_4_ >> 8) + (auVar70._12_4_ >> 8));
          uVar140 = uVar123 - 0x379a;
          uVar142 = uVar127 - 0x379a;
          uVar145 = uVar130 - 0x379a;
          uVar119 = uVar133 - 0x379a;
          iVar69 = (uVar135 >> 8) - ((auVar87._0_4_ >> 8) + (auVar78._0_4_ >> 8));
          iVar72 = (uVar129 >> 8) - ((auVar87._4_4_ >> 8) + (auVar78._4_4_ >> 8));
          iVar73 = (uVar132 >> 8) - ((auVar87._8_4_ >> 8) + (auVar78._8_4_ >> 8));
          iVar74 = (uVar144 >> 8) - ((auVar87._12_4_ >> 8) + (auVar78._12_4_ >> 8));
          auVar88._0_8_ = CONCAT44(-(uint)(uVar142 < 0x4000),-(uint)(uVar140 < 0x4000));
          auVar88._8_4_ = -(uint)(uVar145 < 0x4000);
          auVar88._12_4_ = -(uint)(uVar119 < 0x4000);
          iVar137 = -(uint)(uVar127 < 0x379a);
          iVar141 = -(uint)(uVar130 < 0x379a);
          iVar143 = -(uint)(uVar133 < 0x379a);
          auVar80._0_4_ = uVar140 >> 6;
          auVar80._4_4_ = uVar142 >> 6;
          auVar80._8_4_ = uVar145 >> 6;
          auVar80._12_4_ = uVar119 >> 6;
          bVar99 = ~-(uVar123 < 0x379a);
          bVar36 = ~(byte)iVar137;
          bVar37 = ~(byte)((uint)iVar137 >> 0x18);
          bVar38 = ~(byte)((uint)iVar141 >> 8);
          bVar39 = ~(byte)((uint)iVar141 >> 0x10);
          bVar40 = ~(byte)((uint)iVar141 >> 0x18);
          bVar41 = ~(byte)((uint)iVar143 >> 8);
          bVar42 = ~(byte)((uint)iVar143 >> 0x10);
          bVar43 = ~(byte)((uint)iVar143 >> 0x18);
          iVar107 = (uVar91 >> 8) - ((auVar77._0_4_ >> 8) + (auVar86._0_4_ >> 8));
          iVar108 = (uVar93 >> 8) - ((auVar77._4_4_ >> 8) + (auVar86._4_4_ >> 8));
          iVar109 = (uVar94 >> 8) - ((auVar77._8_4_ >> 8) + (auVar86._8_4_ >> 8));
          iVar146 = (uVar95 >> 8) - ((auVar77._12_4_ >> 8) + (auVar86._12_4_ >> 8));
          iVar131 = (uVar120 >> 8) - ((auVar114._0_4_ >> 8) + (auVar104._0_4_ >> 8));
          iVar134 = (uVar121 >> 8) - ((auVar114._4_4_ >> 8) + (auVar104._4_4_ >> 8));
          iVar47 = (uVar110 >> 8) - ((auVar114._8_4_ >> 8) + (auVar104._8_4_ >> 8));
          iVar101 = (uVar118 >> 8) - ((auVar114._12_4_ >> 8) + (auVar104._12_4_ >> 8));
          uVar123 = iVar69 + 0x2204;
          uVar130 = iVar72 + 0x2204;
          uVar133 = iVar73 + 0x2204;
          uVar140 = iVar74 + 0x2204;
          uVar57 = iVar62 + 0x2204;
          uVar59 = iVar66 + 0x2204;
          uVar60 = iVar67 + 0x2204;
          uVar61 = iVar68 + 0x2204;
          auVar58._8_8_ = auVar88._8_8_;
          auVar58._0_8_ = auVar88._0_8_;
          auVar77._1_3_ = 0;
          auVar77[0] = bVar99;
          auVar77[4] = bVar36;
          auVar77._5_2_ = 0;
          auVar77[7] = bVar37;
          auVar77[8] = ~(byte)iVar141;
          auVar77[9] = bVar38;
          auVar77[10] = bVar39;
          auVar77[0xb] = bVar40;
          auVar77[0xc] = ~(byte)iVar143;
          auVar77[0xd] = bVar41;
          auVar77[0xe] = bVar42;
          auVar77[0xf] = bVar43;
          auVar70._1_3_ = 0;
          auVar70[0] = bVar99;
          auVar70[4] = bVar36;
          auVar70._5_2_ = 0;
          auVar70[7] = bVar37;
          auVar70[8] = ~(byte)iVar141;
          auVar70[9] = bVar38;
          auVar70[10] = bVar39;
          auVar70[0xb] = bVar40;
          auVar70[0xc] = ~(byte)iVar143;
          auVar70[0xd] = bVar41;
          auVar70[0xe] = bVar42;
          auVar70[0xf] = bVar43;
          auVar70 = auVar70 ^ (auVar77 ^ auVar80) & auVar58;
          iVar137 = -(uint)(uVar57 < 0x4000);
          iVar141 = -(uint)(uVar59 < 0x4000);
          iVar143 = -(uint)(uVar60 < 0x4000);
          iVar128 = -(uint)(uVar61 < 0x4000);
          iVar75 = -(uint)(uVar123 < 0x4000);
          iVar82 = -(uint)(uVar130 < 0x4000);
          iVar83 = -(uint)(uVar133 < 0x4000);
          iVar84 = -(uint)(uVar140 < 0x4000);
          uVar52 = uVar123 >> 6;
          uVar54 = uVar130 >> 6;
          uVar55 = uVar133 >> 6;
          uVar56 = uVar140 >> 6;
          uVar127 = uVar57 >> 6;
          uVar142 = uVar59 >> 6;
          uVar145 = uVar60 >> 6;
          uVar119 = uVar61 >> 6;
          bVar36 = (byte)uVar127 & (byte)iVar137 | ~-(iVar62 < -0x2204) & ~(byte)iVar137;
          uVar127 = CONCAT13((byte)(uVar57 >> 0x1e) & (byte)((uint)iVar137 >> 0x18),
                             CONCAT12((byte)(uVar127 >> 0x10) & (byte)((uint)iVar137 >> 0x10),
                                      CONCAT11((byte)(uVar127 >> 8) & (byte)((uint)iVar137 >> 8),
                                               bVar36)));
          auVar28._0_8_ =
               CONCAT17((byte)(uVar59 >> 0x1e) & (byte)((uint)iVar141 >> 0x18),
                        CONCAT16((byte)(uVar142 >> 0x10) & (byte)((uint)iVar141 >> 0x10),
                                 CONCAT15((byte)(uVar142 >> 8) & (byte)((uint)iVar141 >> 8),
                                          CONCAT14((byte)uVar142 & (byte)iVar141 |
                                                   ~-(iVar66 < -0x2204) & ~(byte)iVar141,uVar127))))
          ;
          auVar28[8] = (byte)uVar145 & (byte)iVar143 | ~-(iVar67 < -0x2204) & ~(byte)iVar143;
          auVar28[9] = (byte)(uVar145 >> 8) & (byte)((uint)iVar143 >> 8);
          auVar28[10] = (byte)(uVar145 >> 0x10) & (byte)((uint)iVar143 >> 0x10);
          auVar28[0xb] = (byte)(uVar60 >> 0x1e) & (byte)((uint)iVar143 >> 0x18);
          auVar29[0xc] = (byte)uVar119 & (byte)iVar128 | ~-(iVar68 < -0x2204) & ~(byte)iVar128;
          auVar29._0_12_ = auVar28;
          auVar29[0xd] = (byte)(uVar119 >> 8) & (byte)((uint)iVar128 >> 8);
          auVar29[0xe] = (byte)(uVar119 >> 0x10) & (byte)((uint)iVar128 >> 0x10);
          auVar29[0xf] = (byte)(uVar61 >> 0x1e) & (byte)((uint)iVar128 >> 0x18);
          uVar23 = CONCAT14(auVar25[4],(uint)(auVar25[0] & 0xf8)) & 0xf8ffffffff;
          uVar27 = CONCAT14(auVar53[4],(uint)(auVar53[0] & 0xf8)) & 0xf8ffffffff;
          bVar38 = (byte)uVar52 & (byte)iVar75 | ~-(iVar69 < -0x2204) & ~(byte)iVar75;
          bVar39 = (byte)uVar54 & (byte)iVar82 | ~-(iVar72 < -0x2204) & ~(byte)iVar82;
          bVar40 = (byte)uVar55 & (byte)iVar83 | ~-(iVar73 < -0x2204) & ~(byte)iVar83;
          bVar41 = (byte)uVar56 & (byte)iVar84 | ~-(iVar74 < -0x2204) & ~(byte)iVar84;
          uVar142 = CONCAT13((byte)(uVar123 >> 0x1e) & (byte)((uint)iVar75 >> 0x18),
                             CONCAT12((byte)(uVar52 >> 0x10) & (byte)((uint)iVar75 >> 0x10),
                                      CONCAT11((byte)(uVar52 >> 8) & (byte)((uint)iVar75 >> 8),
                                               bVar38))) >> 5;
          uVar145 = CONCAT13((byte)(uVar130 >> 0x1e) & (byte)((uint)iVar82 >> 0x18),
                             CONCAT12((byte)(uVar54 >> 0x10) & (byte)((uint)iVar82 >> 0x10),
                                      CONCAT11((byte)(uVar54 >> 8) & (byte)((uint)iVar82 >> 8),
                                               bVar39))) >> 5;
          uVar52 = CONCAT13((byte)(uVar133 >> 0x1e) & (byte)((uint)iVar83 >> 0x18),
                            CONCAT12((byte)(uVar55 >> 0x10) & (byte)((uint)iVar83 >> 0x10),
                                     CONCAT11((byte)(uVar55 >> 8) & (byte)((uint)iVar83 >> 8),bVar40
                                             ))) >> 5;
          uVar140 = CONCAT13((byte)(uVar140 >> 0x1e) & (byte)((uint)iVar84 >> 0x18),
                             CONCAT12((byte)(uVar56 >> 0x10) & (byte)((uint)iVar84 >> 0x10),
                                      CONCAT11((byte)(uVar56 >> 8) & (byte)((uint)iVar84 >> 8),
                                               bVar41))) >> 5;
          uVar127 = uVar127 >> 5;
          uVar119 = (uint)((ulong)auVar28._0_8_ >> 0x20);
          uVar123 = uVar119 >> 5;
          uVar130 = auVar28._8_4_ >> 5;
          uVar133 = auVar29._12_4_ >> 5;
          auVar89[0] = (byte)uVar27 | (byte)uVar127;
          auVar89[1] = (char)(uVar127 >> 8);
          auVar89[2] = (char)(uVar127 >> 0x10);
          auVar89[3] = 0;
          auVar89[4] = (byte)(uVar27 >> 0x20) | (byte)uVar123;
          auVar89[5] = (char)(uVar123 >> 8);
          auVar89[6] = (char)(uVar123 >> 0x10);
          auVar89[7] = 0;
          auVar89[8] = auVar53[8] & 0xf8 | (byte)uVar130;
          auVar89[9] = (char)(uVar130 >> 8);
          auVar89[10] = (char)(uVar130 >> 0x10);
          auVar89[0xb] = 0;
          auVar89[0xc] = auVar53[0xc] & 0xf8 | (byte)uVar133;
          auVar89[0xd] = (char)(uVar133 >> 8);
          auVar89[0xe] = (char)(uVar133 >> 0x10);
          auVar89[0xf] = 0;
          auVar81[0] = (byte)uVar23 | (byte)uVar142;
          auVar81[1] = (char)(uVar142 >> 8);
          auVar81[2] = (char)(uVar142 >> 0x10);
          auVar81[3] = 0;
          auVar81[4] = (byte)(uVar23 >> 0x20) | (byte)uVar145;
          auVar81[5] = (char)(uVar145 >> 8);
          auVar81[6] = (char)(uVar145 >> 0x10);
          auVar81[7] = 0;
          auVar81[8] = auVar25[8] & 0xf8 | (byte)uVar52;
          auVar81[9] = (char)(uVar52 >> 8);
          auVar81[10] = (char)(uVar52 >> 0x10);
          auVar81[0xb] = 0;
          auVar81[0xc] = auVar25[0xc] & 0xf8 | (byte)uVar140;
          auVar81[0xd] = (char)(uVar140 >> 8);
          auVar81[0xe] = (char)(uVar140 >> 0x10);
          auVar81[0xf] = 0;
          uVar123 = iVar107 + 0x2204;
          uVar130 = iVar108 + 0x2204;
          uVar140 = iVar109 + 0x2204;
          uVar145 = iVar146 + 0x2204;
          iVar137 = -(uint)(uVar123 < 0x4000);
          iVar141 = -(uint)(uVar130 < 0x4000);
          iVar143 = -(uint)(uVar140 < 0x4000);
          iVar128 = -(uint)(uVar145 < 0x4000);
          uVar127 = uVar123 >> 6;
          uVar133 = uVar130 >> 6;
          uVar142 = uVar140 >> 6;
          uVar52 = iVar131 + 0x2204;
          uVar54 = iVar134 + 0x2204;
          uVar55 = iVar47 + 0x2204;
          uVar56 = iVar101 + 0x2204;
          bVar37 = (byte)uVar127 & (byte)iVar137 | ~-(iVar107 < -0x2204) & ~(byte)iVar137;
          uVar127 = CONCAT13((byte)(uVar123 >> 0x1e) & (byte)((uint)iVar137 >> 0x18),
                             CONCAT12((byte)(uVar127 >> 0x10) & (byte)((uint)iVar137 >> 0x10),
                                      CONCAT11((byte)(uVar127 >> 8) & (byte)((uint)iVar137 >> 8),
                                               bVar37)));
          auVar33._0_8_ =
               CONCAT17((byte)(uVar130 >> 0x1e) & (byte)((uint)iVar141 >> 0x18),
                        CONCAT16((byte)(uVar133 >> 0x10) & (byte)((uint)iVar141 >> 0x10),
                                 CONCAT15((byte)(uVar133 >> 8) & (byte)((uint)iVar141 >> 8),
                                          CONCAT14((byte)uVar133 & (byte)iVar141 |
                                                   ~-(iVar108 < -0x2204) & ~(byte)iVar141,uVar127)))
                       );
          auVar33[8] = (byte)uVar142 & (byte)iVar143 | ~-(iVar109 < -0x2204) & ~(byte)iVar143;
          auVar33[9] = (byte)(uVar142 >> 8) & (byte)((uint)iVar143 >> 8);
          auVar33[10] = (byte)(uVar142 >> 0x10) & (byte)((uint)iVar143 >> 0x10);
          auVar33[0xb] = (byte)(uVar140 >> 0x1e) & (byte)((uint)iVar143 >> 0x18);
          auVar35[0xc] = (byte)(uVar145 >> 6) & (byte)iVar128 |
                         ~-(iVar146 < -0x2204) & ~(byte)iVar128;
          auVar35._0_12_ = auVar33;
          auVar35[0xd] = (byte)((uVar145 >> 6) >> 8) & (byte)((uint)iVar128 >> 8);
          auVar35[0xe] = (byte)((uint3)(uVar145 >> 0xe) >> 8) & (byte)((uint)iVar128 >> 0x10);
          auVar35[0xf] = (byte)(uVar145 >> 0x1e) & (byte)((uint)iVar128 >> 0x18);
          iVar137 = -(uint)(uVar52 < 0x4000);
          iVar141 = -(uint)(uVar54 < 0x4000);
          iVar143 = -(uint)(uVar55 < 0x4000);
          iVar128 = -(uint)(uVar56 < 0x4000);
          uVar123 = uVar52 >> 6;
          uVar130 = uVar54 >> 6;
          uVar133 = uVar55 >> 6;
          uVar140 = uVar56 >> 6;
          auVar24[9] = (byte)(uVar133 >> 8) & (byte)((uint)iVar143 >> 8);
          auVar24[10] = (byte)(uVar133 >> 0x10) & (byte)((uint)iVar143 >> 0x10);
          auVar24[0xb] = (byte)(uVar55 >> 0x1e) & (byte)((uint)iVar143 >> 0x18);
          auVar26[0xd] = (byte)(uVar140 >> 8) & (byte)((uint)iVar128 >> 8);
          auVar26[0xe] = (byte)(uVar140 >> 0x10) & (byte)((uint)iVar128 >> 0x10);
          auVar26[0xf] = (byte)(uVar56 >> 0x1e) & (byte)((uint)iVar128 >> 0x18);
          bVar99 = (byte)uVar123 & (byte)iVar137 | ~-(iVar131 < -0x2204) & ~(byte)iVar137;
          uVar123 = CONCAT13((byte)(uVar52 >> 0x1e) & (byte)((uint)iVar137 >> 0x18),
                             CONCAT12((byte)(uVar123 >> 0x10) & (byte)((uint)iVar137 >> 0x10),
                                      CONCAT11((byte)(uVar123 >> 8) & (byte)((uint)iVar137 >> 8),
                                               bVar99)));
          auVar24._0_8_ =
               CONCAT17((byte)(uVar54 >> 0x1e) & (byte)((uint)iVar141 >> 0x18),
                        CONCAT16((byte)(uVar130 >> 0x10) & (byte)((uint)iVar141 >> 0x10),
                                 CONCAT15((byte)(uVar130 >> 8) & (byte)((uint)iVar141 >> 8),
                                          CONCAT14((byte)uVar130 & (byte)iVar141 |
                                                   ~-(iVar134 < -0x2204) & ~(byte)iVar141,uVar123)))
                       );
          auVar24[8] = (byte)uVar133 & (byte)iVar143 | ~-(iVar47 < -0x2204) & ~(byte)iVar143;
          auVar26[0xc] = (byte)uVar140 & (byte)iVar128 | ~-(iVar101 < -0x2204) & ~(byte)iVar128;
          auVar26._0_12_ = auVar24;
          auVar98 = NEON_umull(CONCAT17(auVar34[0xd],
                                        CONCAT16(auVar34[0xc],
                                                 CONCAT15(auVar34[9],
                                                          CONCAT14(auVar34[8],
                                                                   CONCAT13(auVar34[5],
                                                                            CONCAT12(auVar34[4],
                                                                                     auVar34._0_2_))
                                                                  )))),0x811a811a811a811a,2);
          uVar142 = (auVar98._0_4_ >> 8) + (uVar120 >> 8);
          uVar145 = (auVar98._4_4_ >> 8) + (uVar121 >> 8);
          uVar120 = (auVar98._8_4_ >> 8) + (uVar110 >> 8);
          uVar121 = (auVar98._12_4_ >> 8) + (uVar118 >> 8);
          auVar98 = NEON_umull(CONCAT17(auVar64[0xd],
                                        CONCAT16(auVar64[0xc],
                                                 CONCAT15(auVar64[9],
                                                          CONCAT14(auVar64[8],
                                                                   CONCAT13(auVar64[5],
                                                                            CONCAT12(auVar64[4],
                                                                                     auVar64._0_2_))
                                                                  )))),0x811a811a811a811a,2);
          uVar110 = (auVar98._0_4_ >> 8) + (uVar91 >> 8);
          uVar118 = (auVar98._4_4_ >> 8) + (uVar93 >> 8);
          uVar52 = (auVar98._8_4_ >> 8) + (uVar94 >> 8);
          uVar54 = (auVar98._12_4_ >> 8) + (uVar95 >> 8);
          auVar98 = NEON_umull(uVar138,0x811a811a811a811a,2);
          uVar135 = (auVar98._0_4_ >> 8) + (uVar135 >> 8);
          uVar55 = (auVar98._4_4_ >> 8) + (uVar129 >> 8);
          uVar56 = (auVar98._8_4_ >> 8) + (uVar132 >> 8);
          uVar144 = (auVar98._12_4_ >> 8) + (uVar144 >> 8);
          auVar98 = NEON_umull(uVar125,0x811a811a811a811a,2);
          uVar133 = (auVar98._0_4_ >> 8) + (uVar122 >> 8);
          uVar140 = (auVar98._4_4_ >> 8) + (uVar136 >> 8);
          uVar129 = (auVar98._8_4_ >> 8) + (uVar45 >> 8);
          uVar132 = (auVar98._12_4_ >> 8) + (uVar46 >> 8);
          uVar127 = uVar127 >> 5;
          uVar130 = (uint)((ulong)auVar33._0_8_ >> 0x20);
          uVar91 = uVar130 >> 5;
          uVar93 = auVar33._8_4_ >> 5;
          uVar94 = auVar35._12_4_ >> 5;
          auVar71[0] = auVar51[0] & 0xf8 | (byte)uVar127;
          auVar71[1] = (char)(uVar127 >> 8);
          auVar71[2] = (char)(uVar127 >> 0x10);
          auVar71[3] = 0;
          auVar71[4] = auVar51[4] & 0xf8 | (byte)uVar91;
          auVar71[5] = (char)(uVar91 >> 8);
          auVar71[6] = (char)(uVar91 >> 0x10);
          auVar71[7] = 0;
          auVar71[8] = auVar51[8] & 0xf8 | (byte)uVar93;
          auVar71[9] = (char)(uVar93 >> 8);
          auVar71[10] = (char)(uVar93 >> 0x10);
          auVar71[0xb] = 0;
          auVar71[0xc] = auVar51[0xc] & 0xf8 | (byte)uVar94;
          auVar71[0xd] = (char)(uVar94 >> 8);
          auVar71[0xe] = (char)(uVar94 >> 0x10);
          auVar71[0xf] = 0;
          uVar91 = uVar135 - 0x4515;
          uVar93 = uVar55 - 0x4515;
          uVar94 = uVar56 - 0x4515;
          uVar95 = uVar144 - 0x4515;
          iVar137 = -(uint)(uVar91 < 0x4000);
          iVar141 = -(uint)(uVar93 < 0x4000);
          iVar143 = -(uint)(uVar94 < 0x4000);
          iVar128 = -(uint)(uVar95 < 0x4000);
          uVar122 = uVar133 - 0x4515;
          uVar136 = uVar140 - 0x4515;
          uVar45 = uVar129 - 0x4515;
          uVar46 = uVar132 - 0x4515;
          uVar23 = CONCAT14(~-(uVar55 < 0x4515) & ~(byte)iVar141,
                            (uint)(~-(uVar135 < 0x4515) & ~(byte)iVar137 & 0x1f)) & 0x1fffffffff;
          iVar131 = -(uint)(uVar122 < 0x4000);
          iVar134 = -(uint)(uVar136 < 0x4000);
          iVar47 = -(uint)(uVar45 < 0x4000);
          iVar101 = -(uint)(uVar46 < 0x4000);
          uVar124 = CONCAT14(~-(uVar140 < 0x4515) & ~(byte)iVar134,
                             (uint)(~-(uVar133 < 0x4515) & ~(byte)iVar131 & 0x1f)) & 0x1fffffffff;
          uVar123 = uVar123 >> 5;
          uVar127 = (uint)((ulong)auVar24._0_8_ >> 0x20);
          uVar133 = uVar127 >> 5;
          uVar140 = auVar24._8_4_ >> 5;
          uVar135 = auVar26._12_4_ >> 5;
          auVar65[0] = auVar70[0] & 0xf8 | (byte)uVar123;
          auVar65[1] = (char)(uVar123 >> 8);
          auVar65[2] = (char)(uVar123 >> 0x10);
          auVar65[3] = 0;
          auVar65[4] = auVar70[4] & 0xf8 | (byte)uVar133;
          auVar65[5] = (char)(uVar133 >> 8);
          auVar65[6] = (char)(uVar133 >> 0x10);
          auVar65[7] = 0;
          auVar65[8] = auVar70[8] & 0xf8 | (byte)uVar140;
          auVar65[9] = (char)(uVar140 >> 8);
          auVar65[10] = (char)(uVar140 >> 0x10);
          auVar65[0xb] = 0;
          auVar65[0xc] = auVar70[0xc] & 0xf8 | (byte)uVar135;
          auVar65[0xd] = (char)(uVar135 >> 8);
          auVar65[0xe] = (char)(uVar135 >> 0x10);
          auVar65[0xf] = 0;
          uVar27 = CONCAT14((char)(uVar119 << 3),(uint)(byte)((bVar36 & 0x1c) << 3)) & 0xe0ffffffff;
          auVar48[0] = (bVar38 & 0x1c) << 3 | (byte)(uVar91 >> 9) & (byte)iVar137 | (byte)uVar23;
          auVar48[1] = (byte)((uVar91 >> 9) >> 8) & (byte)((uint)iVar137 >> 8);
          auVar48[2] = (byte)(uVar91 >> 0x19) & (byte)((uint)iVar137 >> 0x10);
          auVar48[3] = 0;
          auVar48[4] = (bVar39 & 0x1c) << 3 |
                       (byte)(uVar93 >> 9) & (byte)iVar141 | (byte)(uVar23 >> 0x20);
          auVar48[5] = (byte)((uVar93 >> 9) >> 8) & (byte)((uint)iVar141 >> 8);
          auVar48[6] = (byte)(uVar93 >> 0x19) & (byte)((uint)iVar141 >> 0x10);
          auVar48[7] = 0;
          auVar48[8] = (bVar40 & 0x1c) << 3 |
                       (byte)(uVar94 >> 9) & (byte)iVar143 |
                       ~-(uVar56 < 0x4515) & ~(byte)iVar143 & 0x1f;
          auVar48[9] = (byte)((uVar94 >> 9) >> 8) & (byte)((uint)iVar143 >> 8);
          auVar48[10] = (byte)(uVar94 >> 0x19) & (byte)((uint)iVar143 >> 0x10);
          auVar48[0xb] = 0;
          auVar48[0xc] = (bVar41 & 0x1c) << 3 |
                         (byte)(uVar95 >> 9) & (byte)iVar128 |
                         ~-(uVar144 < 0x4515) & ~(byte)iVar128 & 0x1f;
          auVar48[0xd] = (byte)((uVar95 >> 9) >> 8) & (byte)((uint)iVar128 >> 8);
          auVar48[0xe] = (byte)(uVar95 >> 0x19) & (byte)((uint)iVar128 >> 0x10);
          auVar48[0xf] = 0;
          uVar91 = uVar110 - 0x4515;
          uVar94 = uVar118 - 0x4515;
          uVar123 = uVar52 - 0x4515;
          uVar133 = uVar54 - 0x4515;
          iVar137 = -(uint)(uVar91 < 0x4000);
          iVar141 = -(uint)(uVar94 < 0x4000);
          iVar143 = -(uint)(uVar123 < 0x4000);
          iVar128 = -(uint)(uVar133 < 0x4000);
          uVar31 = CONCAT14((char)(uVar130 << 3),(uint)(byte)((bVar37 & 0x1c) << 3)) & 0xe0ffffffff;
          uVar93 = uVar142 - 0x4515;
          uVar95 = uVar145 - 0x4515;
          uVar130 = uVar120 - 0x4515;
          uVar140 = uVar121 - 0x4515;
          iVar107 = -(uint)(uVar93 < 0x4000);
          iVar108 = -(uint)(uVar95 < 0x4000);
          iVar109 = -(uint)(uVar130 < 0x4000);
          iVar146 = -(uint)(uVar140 < 0x4000);
          uVar30 = CONCAT14(~-(uVar145 < 0x4515) & ~(byte)iVar108,
                            (uint)(~-(uVar142 < 0x4515) & ~(byte)iVar107 & 0x1f)) & 0x1fffffffff;
          uVar23 = CONCAT14((char)(uVar127 << 3),(uint)(byte)((bVar99 & 0x1c) << 3)) & 0xe0ffffffff;
          auVar44[0] = (byte)uVar23 | (byte)(uVar93 >> 9) & (byte)iVar107 | (byte)uVar30;
          auVar44[1] = (byte)((uVar93 >> 9) >> 8) & (byte)((uint)iVar107 >> 8);
          auVar44[2] = (byte)(uVar93 >> 0x19) & (byte)((uint)iVar107 >> 0x10);
          auVar44[3] = 0;
          auVar44[4] = (byte)(uVar23 >> 0x20) |
                       (byte)(uVar95 >> 9) & (byte)iVar108 | (byte)(uVar30 >> 0x20);
          auVar44[5] = (byte)((uVar95 >> 9) >> 8) & (byte)((uint)iVar108 >> 8);
          auVar44[6] = (byte)(uVar95 >> 0x19) & (byte)((uint)iVar108 >> 0x10);
          auVar44[7] = 0;
          auVar44[8] = (byte)(auVar24._8_4_ << 3) & 0xe0 |
                       (byte)(uVar130 >> 9) & (byte)iVar109 |
                       ~-(uVar120 < 0x4515) & ~(byte)iVar109 & 0x1f;
          auVar44[9] = (byte)((uVar130 >> 9) >> 8) & (byte)((uint)iVar109 >> 8);
          auVar44[10] = (byte)(uVar130 >> 0x19) & (byte)((uint)iVar109 >> 0x10);
          auVar44[0xb] = 0;
          auVar44[0xc] = (byte)(auVar26._12_4_ << 3) & 0xe0 |
                         (byte)(uVar140 >> 9) & (byte)iVar146 |
                         ~-(uVar121 < 0x4515) & ~(byte)iVar146 & 0x1f;
          auVar44[0xd] = (byte)((uVar140 >> 9) >> 8) & (byte)((uint)iVar146 >> 8);
          auVar44[0xe] = (byte)(uVar140 >> 0x19) & (byte)((uint)iVar146 >> 0x10);
          auVar44[0xf] = 0;
          auVar78._8_8_ = 0x3c3834302c282420;
          auVar78._0_8_ = 0x1c1814100c080400;
          auVar34[1] = (byte)((uVar91 >> 9) >> 8) & (byte)((uint)iVar137 >> 8);
          auVar34[0] = (byte)uVar31 |
                       (byte)(uVar91 >> 9) & (byte)iVar137 |
                       ~-(uVar110 < 0x4515) & ~(byte)iVar137 & 0x1f;
          auVar34[2] = (byte)(uVar91 >> 0x19) & (byte)((uint)iVar137 >> 0x10);
          auVar34[3] = 0;
          auVar34[4] = (byte)(uVar31 >> 0x20) |
                       (byte)(uVar94 >> 9) & (byte)iVar141 |
                       ~-(uVar118 < 0x4515) & ~(byte)iVar141 & 0x1f;
          auVar34[5] = (byte)((uVar94 >> 9) >> 8) & (byte)((uint)iVar141 >> 8);
          auVar34[6] = (byte)(uVar94 >> 0x19) & (byte)((uint)iVar141 >> 0x10);
          auVar34[7] = 0;
          auVar34[8] = (byte)(auVar33._8_4_ << 3) & 0xe0 |
                       (byte)(uVar123 >> 9) & (byte)iVar143 |
                       ~-(uVar52 < 0x4515) & ~(byte)iVar143 & 0x1f;
          auVar34[9] = (byte)((uVar123 >> 9) >> 8) & (byte)((uint)iVar143 >> 8);
          auVar34[10] = (byte)(uVar123 >> 0x19) & (byte)((uint)iVar143 >> 0x10);
          auVar34[0xb] = 0;
          auVar34[0xc] = (byte)(auVar35._12_4_ << 3) & 0xe0 |
                         (byte)(uVar133 >> 9) & (byte)iVar128 |
                         ~-(uVar54 < 0x4515) & ~(byte)iVar128 & 0x1f;
          auVar34[0xd] = (byte)((uVar133 >> 9) >> 8) & (byte)((uint)iVar128 >> 8);
          auVar34[0xe] = (byte)(uVar133 >> 0x19) & (byte)((uint)iVar128 >> 0x10);
          auVar34[0xf] = 0;
          auVar64[1] = (byte)((uVar122 >> 9) >> 8) & (byte)((uint)iVar131 >> 8);
          auVar64[0] = (byte)uVar27 | (byte)(uVar122 >> 9) & (byte)iVar131 | (byte)uVar124;
          auVar64[2] = (byte)(uVar122 >> 0x19) & (byte)((uint)iVar131 >> 0x10);
          auVar64[3] = 0;
          auVar64[4] = (byte)(uVar27 >> 0x20) |
                       (byte)(uVar136 >> 9) & (byte)iVar134 | (byte)(uVar124 >> 0x20);
          auVar64[5] = (byte)((uVar136 >> 9) >> 8) & (byte)((uint)iVar134 >> 8);
          auVar64[6] = (byte)(uVar136 >> 0x19) & (byte)((uint)iVar134 >> 0x10);
          auVar64[7] = 0;
          auVar64[8] = (byte)(auVar28._8_4_ << 3) & 0xe0 |
                       (byte)(uVar45 >> 9) & (byte)iVar47 |
                       ~-(uVar129 < 0x4515) & ~(byte)iVar47 & 0x1f;
          auVar64[9] = (byte)((uVar45 >> 9) >> 8) & (byte)((uint)iVar47 >> 8);
          auVar64[10] = (byte)(uVar45 >> 0x19) & (byte)((uint)iVar47 >> 0x10);
          auVar64[0xb] = 0;
          auVar64[0xc] = (byte)(auVar29._12_4_ << 3) & 0xe0 |
                         (byte)(uVar46 >> 9) & (byte)iVar101 |
                         ~-(uVar132 < 0x4515) & ~(byte)iVar101 & 0x1f;
          auVar64[0xd] = (byte)((uVar46 >> 9) >> 8) & (byte)((uint)iVar101 >> 8);
          auVar64[0xe] = (byte)(uVar46 >> 0x19) & (byte)((uint)iVar101 >> 0x10);
          auVar64[0xf] = 0;
          auVar98 = a64_TBL(ZEXT816(0),auVar44,auVar34,auVar48,auVar64,auVar78);
          auVar104 = a64_TBL(ZEXT816(0),auVar65,auVar71,auVar81,auVar89,auVar78);
          *puVar7 = auVar98[0];
          puVar7[1] = auVar104[0];
          puVar7[2] = auVar98[1];
          puVar7[3] = auVar104[1];
          puVar7[4] = auVar98[2];
          puVar7[5] = auVar104[2];
          puVar7[6] = auVar98[3];
          puVar7[7] = auVar104[3];
          puVar7[8] = auVar98[4];
          puVar7[9] = auVar104[4];
          puVar7[10] = auVar98[5];
          puVar7[0xb] = auVar104[5];
          puVar7[0xc] = auVar98[6];
          puVar7[0xd] = auVar104[6];
          puVar7[0xe] = auVar98[7];
          puVar7[0xf] = auVar104[7];
          puVar7[0x10] = auVar98[8];
          puVar7[0x11] = auVar104[8];
          puVar7[0x12] = auVar98[9];
          puVar7[0x13] = auVar104[9];
          puVar7[0x14] = auVar98[10];
          puVar7[0x15] = auVar104[10];
          puVar7[0x16] = auVar98[0xb];
          puVar7[0x17] = auVar104[0xb];
          puVar7[0x18] = auVar98[0xc];
          puVar7[0x19] = auVar104[0xc];
          puVar7[0x1a] = auVar98[0xd];
          puVar7[0x1b] = auVar104[0xd];
          puVar7[0x1c] = auVar98[0xe];
          puVar7[0x1d] = auVar104[0xe];
          puVar7[0x1e] = auVar98[0xf];
          puVar7[0x1f] = auVar104[0xf];
          puVar7 = puVar7 + 0x20;
          uVar12 = uVar12 - 0x10;
          pauVar14 = pauVar14 + 1;
          pauVar16 = pauVar16 + 1;
          pauVar19 = pauVar19 + 1;
        } while (uVar12 != 0);
        if (uVar10 == uVar8) {
          return;
        }
        uVar12 = uVar10;
        if ((param_5 & 0xc) == 0) goto LAB_002326ec;
      }
      auVar24 = _UNK_007eeb80;
      uVar10 = uVar8 & 0x7ffffffc;
      lVar9 = uVar12 - uVar10;
      puVar17 = (undefined4 *)(*param_3 + uVar12);
      puVar20 = (undefined4 *)(*param_2 + uVar12);
      puVar21 = (undefined4 *)(*param_1 + uVar12);
      puVar22 = (undefined8 *)(param_4 + uVar12 * 2);
      do {
        uVar90 = *puVar20;
        uVar96 = *puVar21;
        uVar100 = *puVar17;
        auVar98 = NEON_umull((ulong)CONCAT16((char)((uint)uVar96 >> 0x18),
                                             (uint6)CONCAT14((char)((uint)uVar96 >> 0x10),
                                                             (uint)CONCAT12((char)((uint)uVar96 >> 8
                                                                                  ),(ushort)(byte)
                                                  uVar96))),0x4a854a854a854a85,2);
        uVar91 = auVar98._0_4_;
        uVar93 = auVar98._4_4_;
        uVar94 = auVar98._8_4_;
        uVar95 = auVar98._12_4_;
        uVar102 = (ulong)CONCAT16((char)((uint)uVar100 >> 0x18),
                                  (uint6)CONCAT14((char)((uint)uVar100 >> 0x10),
                                                  (uint)CONCAT12((char)((uint)uVar100 >> 8),
                                                                 (ushort)(byte)uVar100)));
        auVar98 = NEON_umull(uVar102,0x6625662566256625,2);
        uVar123 = (auVar98._0_4_ >> 8) + (uVar91 >> 8);
        uVar127 = (auVar98._4_4_ >> 8) + (uVar93 >> 8);
        uVar130 = (auVar98._8_4_ >> 8) + (uVar94 >> 8);
        uVar133 = (auVar98._12_4_ >> 8) + (uVar95 >> 8);
        uVar136 = uVar123 - 0x379a;
        uVar140 = uVar127 - 0x379a;
        uVar142 = uVar130 - 0x379a;
        uVar145 = uVar133 - 0x379a;
        iVar137 = -(uint)(uVar140 < 0x4000);
        iVar141 = -(uint)(uVar142 < 0x4000);
        iVar143 = -(uint)(uVar145 < 0x4000);
        auVar139._0_4_ = uVar136 >> 6;
        auVar139._4_4_ = uVar140 >> 6;
        auVar139._8_4_ = uVar142 >> 6;
        auVar139._12_4_ = uVar145 >> 6;
        iVar128 = -(uint)(uVar127 < 0x379a);
        iVar131 = -(uint)(uVar130 < 0x379a);
        iVar134 = -(uint)(uVar133 < 0x379a);
        uVar12 = (ulong)CONCAT16((char)((uint)uVar90 >> 0x18),
                                 (uint6)CONCAT14((char)((uint)uVar90 >> 0x10),
                                                 (uint)CONCAT12((char)((uint)uVar90 >> 8),
                                                                (ushort)(byte)uVar90)));
        auVar98 = NEON_umull(uVar12,0x1913191319131913,2);
        auVar104 = NEON_umull(uVar102,0x3408340834083408,2);
        auVar126[0] = ~-(uVar123 < 0x379a);
        auVar126._1_3_ = 0;
        auVar126[4] = ~(byte)iVar128;
        auVar126._5_2_ = 0;
        auVar126[7] = ~(byte)((uint)iVar128 >> 0x18);
        auVar126[8] = ~(byte)iVar131;
        auVar126[9] = ~(byte)((uint)iVar131 >> 8);
        auVar126[10] = ~(byte)((uint)iVar131 >> 0x10);
        auVar126[0xb] = ~(byte)((uint)iVar131 >> 0x18);
        auVar126[0xc] = ~(byte)iVar134;
        auVar126[0xd] = ~(byte)((uint)iVar134 >> 8);
        auVar126[0xe] = ~(byte)((uint)iVar134 >> 0x10);
        auVar126[0xf] = ~(byte)((uint)iVar134 >> 0x18);
        iVar101 = (uVar91 >> 8) - ((auVar98._0_4_ >> 8) + (auVar104._0_4_ >> 8));
        iVar107 = (uVar93 >> 8) - ((auVar98._4_4_ >> 8) + (auVar104._4_4_ >> 8));
        iVar108 = (uVar94 >> 8) - ((auVar98._8_4_ >> 8) + (auVar104._8_4_ >> 8));
        iVar109 = (uVar95 >> 8) - ((auVar98._12_4_ >> 8) + (auVar104._12_4_ >> 8));
        uVar140 = iVar101 + 0x2204;
        uVar145 = iVar107 + 0x2204;
        uVar120 = iVar108 + 0x2204;
        uVar122 = iVar109 + 0x2204;
        iVar128 = -(uint)(uVar140 < 0x4000);
        iVar131 = -(uint)(uVar145 < 0x4000);
        iVar134 = -(uint)(uVar120 < 0x4000);
        iVar47 = -(uint)(uVar122 < 0x4000);
        uVar142 = uVar140 >> 6;
        uVar119 = uVar145 >> 6;
        uVar121 = uVar120 >> 6;
        auVar2[4] = (char)iVar137;
        auVar2._0_4_ = -(uint)(uVar136 < 0x4000);
        auVar2._5_2_ = 0;
        auVar2[7] = (char)((uint)iVar137 >> 0x18);
        auVar2[8] = (char)iVar141;
        auVar2[9] = (char)((uint)iVar141 >> 8);
        auVar2[10] = (char)((uint)iVar141 >> 0x10);
        auVar2[0xb] = (char)((uint)iVar141 >> 0x18);
        auVar2[0xc] = (char)iVar143;
        auVar2[0xd] = (char)((uint)iVar143 >> 8);
        auVar2[0xe] = (char)((uint)iVar143 >> 0x10);
        auVar2[0xf] = (char)((uint)iVar143 >> 0x18);
        auVar126 = auVar126 ^ (auVar126 ^ auVar139) & auVar2;
        auVar98 = NEON_umull(uVar12,0x811a811a811a811a,2);
        uVar91 = (auVar98._0_4_ >> 8) + (uVar91 >> 8);
        uVar93 = (auVar98._4_4_ >> 8) + (uVar93 >> 8);
        uVar94 = (auVar98._8_4_ >> 8) + (uVar94 >> 8);
        uVar95 = (auVar98._12_4_ >> 8) + (uVar95 >> 8);
        uVar123 = uVar91 - 0x4515;
        uVar127 = uVar93 - 0x4515;
        uVar130 = uVar94 - 0x4515;
        uVar133 = uVar95 - 0x4515;
        iVar137 = -(uint)(uVar123 < 0x4000);
        iVar141 = -(uint)(uVar127 < 0x4000);
        iVar143 = -(uint)(uVar130 < 0x4000);
        iVar146 = -(uint)(uVar133 < 0x4000);
        bVar99 = (byte)uVar142 & (byte)iVar128 | ~-(iVar101 < -0x2204) & ~(byte)iVar128;
        uVar140 = CONCAT13((byte)(uVar140 >> 0x1e) & (byte)((uint)iVar128 >> 0x18),
                           CONCAT12((byte)(uVar142 >> 0x10) & (byte)((uint)iVar128 >> 0x10),
                                    CONCAT11((byte)(uVar142 >> 8) & (byte)((uint)iVar128 >> 8),
                                             bVar99)));
        auVar103._0_8_ =
             CONCAT17((byte)(uVar145 >> 0x1e) & (byte)((uint)iVar131 >> 0x18),
                      CONCAT16((byte)(uVar119 >> 0x10) & (byte)((uint)iVar131 >> 0x10),
                               CONCAT15((byte)(uVar119 >> 8) & (byte)((uint)iVar131 >> 8),
                                        CONCAT14((byte)uVar119 & (byte)iVar131 |
                                                 ~-(iVar107 < -0x2204) & ~(byte)iVar131,uVar140))));
        auVar103[8] = (byte)uVar121 & (byte)iVar134 | ~-(iVar108 < -0x2204) & ~(byte)iVar134;
        auVar103[9] = (byte)(uVar121 >> 8) & (byte)((uint)iVar134 >> 8);
        auVar103[10] = (byte)(uVar121 >> 0x10) & (byte)((uint)iVar134 >> 0x10);
        auVar103[0xb] = (byte)(uVar120 >> 0x1e) & (byte)((uint)iVar134 >> 0x18);
        auVar105[0xc] = (byte)(uVar122 >> 6) & (byte)iVar47 | ~-(iVar109 < -0x2204) & ~(byte)iVar47;
        auVar105._0_12_ = auVar103;
        auVar105[0xd] = (byte)((uVar122 >> 6) >> 8) & (byte)((uint)iVar47 >> 8);
        auVar105[0xe] = (byte)((uint3)(uVar122 >> 0xe) >> 8) & (byte)((uint)iVar47 >> 0x10);
        auVar105[0xf] = (byte)(uVar122 >> 0x1e) & (byte)((uint)iVar47 >> 0x18);
        uVar23 = CONCAT14(~-(uVar93 < 0x4515) & ~(byte)iVar141,
                          (uint)(~-(uVar91 < 0x4515) & ~(byte)iVar137 & 0x1f)) & 0x1fffffffff;
        uVar27 = CONCAT14(auVar126[4],(uint)(auVar126[0] & 0xf8)) & 0xf8ffffffff;
        uVar140 = uVar140 >> 5;
        uVar91 = (uint)((ulong)auVar103._0_8_ >> 0x20);
        uVar93 = uVar91 >> 5;
        uVar142 = auVar103._8_4_ >> 5;
        auVar116._12_4_ = auVar105._12_4_ >> 5;
        auVar4[5] = (char)(uVar140 >> 8);
        auVar4[4] = (byte)uVar27 | (byte)uVar140;
        auVar4[6] = (char)(uVar140 >> 0x10);
        auVar106[0xd] = (char)(uVar93 >> 8);
        auVar106[0xc] = (byte)(uVar27 >> 0x20) | (byte)uVar93;
        auVar106[0xe] = (char)(uVar93 >> 0x10);
        uVar6 = CONCAT12((char)(uVar142 >> 0x10),
                         CONCAT11((char)(uVar142 >> 8),auVar126[8] & 0xf8 | (byte)uVar142));
        auVar97._0_12_ = ZEXT312(uVar6) << 0x40;
        auVar97[0xc] = auVar126[0xc] & 0xf8 | (byte)auVar116._12_4_;
        auVar97[0xd] = (char)(auVar116._12_4_ >> 8);
        auVar97[0xe] = (char)(auVar116._12_4_ >> 0x10);
        uVar27 = CONCAT14((char)(uVar91 << 3),(uint)(byte)((bVar99 & 0x1c) << 3)) & 0xe0ffffffff;
        bVar99 = (byte)(auVar105._12_4_ << 3) & 0xe0;
        uVar91 = CONCAT13(0,CONCAT12((byte)(uVar123 >> 0x19) & (byte)((uint)iVar137 >> 0x10),
                                     CONCAT11((byte)((uVar123 >> 9) >> 8) &
                                              (byte)((uint)iVar137 >> 8),
                                              (byte)uVar27 |
                                              (byte)(uVar123 >> 9) & (byte)iVar137 | (byte)uVar23)))
        ;
        uVar5 = CONCAT12((byte)(uVar130 >> 0x19) & (byte)((uint)iVar143 >> 0x10),
                         CONCAT11((byte)((uVar130 >> 9) >> 8) & (byte)((uint)iVar143 >> 8),
                                  (byte)(auVar103._8_4_ << 3) & 0xe0 |
                                  (byte)(uVar130 >> 9) & (byte)iVar143 |
                                  ~-(uVar94 < 0x4515) & ~(byte)iVar143 & 0x1f));
        auVar92._0_12_ = ZEXT312(uVar5) << 0x40;
        auVar92[0xc] = bVar99 | (byte)(uVar133 >> 9) & (byte)iVar146 |
                                ~-(uVar95 < 0x4515) & ~(byte)iVar146 & 0x1f;
        auVar92[0xd] = (byte)((uVar133 >> 9) >> 8) & (byte)((uint)iVar146 >> 8);
        auVar92[0xe] = (byte)(uVar133 >> 0x19) & (byte)((uint)iVar146 >> 0x10);
        auVar115[3] = 0;
        auVar115._0_3_ = uVar5;
        auVar116._0_12_ = ZEXT312(auVar92._12_3_) << 0x40;
        auVar115._8_8_ = auVar116._8_8_;
        auVar115._4_3_ = uVar6;
        auVar115[7] = 0;
        auVar117._0_12_ = auVar115._0_12_;
        auVar117._12_3_ = auVar97._12_3_;
        auVar117[0xf] = 0;
        auVar3[0xc] = bVar99;
        auVar3._0_12_ =
             ZEXT312((uint3)(CONCAT16((byte)(uVar127 >> 0x19) & (byte)((uint)iVar141 >> 0x10),
                                      CONCAT15((byte)((uVar127 >> 9) >> 8) &
                                               (byte)((uint)iVar141 >> 8),
                                               CONCAT14((byte)(uVar27 >> 0x20) |
                                                        (byte)(uVar127 >> 9) & (byte)iVar141 |
                                                        (byte)(uVar23 >> 0x20),uVar91))) >> 0x20))
             << 0x40;
        auVar4._0_4_ = uVar91;
        auVar4[7] = 0;
        auVar4._8_5_ = auVar3._8_5_;
        auVar106._0_12_ = auVar4._0_12_;
        auVar106[0xf] = 0;
        auVar1._12_4_ = 0xffffffff;
        auVar1._0_12_ = auVar24;
        auVar98 = a64_TBL(ZEXT816(0),auVar106,auVar117,auVar1);
        *puVar22 = auVar98._0_8_;
        lVar9 = lVar9 + 4;
        puVar17 = puVar17 + 1;
        puVar20 = puVar20 + 1;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      } while (lVar9 != 0);
      if (uVar10 == uVar8) {
        return;
      }
    }
  }
LAB_002326ec:
  lVar9 = uVar8 - uVar10;
  pbVar11 = *param_1 + uVar10;
  pbVar13 = param_4 + uVar10 * 2 + 1;
  pbVar15 = *param_3 + uVar10;
  pbVar18 = *param_2 + uVar10;
  do {
    uVar94 = (uint)*pbVar11 * 0x4a85 >> 8;
    uVar91 = uVar94 + ((uint)*pbVar15 * 0x6625 >> 8);
    uVar93 = uVar91 - 0x379a;
    bVar99 = 0;
    if (0x3799 < uVar91) {
      bVar99 = 0xf8;
    }
    bVar36 = (byte)(uVar93 >> 6);
    if (0x3fff < uVar93) {
      bVar36 = bVar99;
    }
    iVar137 = uVar94 - (((uint)*pbVar18 * 0x1913 >> 8) + ((uint)*pbVar15 * 0x3408 >> 8));
    uVar91 = iVar137 + 0x2204;
    uVar93 = 0;
    if (-0x2205 < iVar137) {
      uVar93 = 0xff;
    }
    uVar95 = uVar91 >> 6;
    if (0x3fff < uVar91) {
      uVar95 = uVar93;
    }
    uVar94 = uVar94 + ((uint)*pbVar18 * 0x811a >> 8);
    uVar91 = uVar94 - 0x4515;
    bVar99 = 0;
    if (0x4514 < uVar94) {
      bVar99 = 0x1f;
    }
    bVar37 = (byte)(uVar91 >> 9);
    if (0x3fff < uVar91) {
      bVar37 = bVar99;
    }
    pbVar13[-1] = (byte)((uVar95 & 0x1c) << 3) | bVar37;
    *pbVar13 = bVar36 & 0xf8 | (byte)(uVar95 >> 5);
    lVar9 = lVar9 + -1;
    pbVar11 = pbVar11 + 1;
    pbVar13 = pbVar13 + 2;
    pbVar15 = pbVar15 + 1;
    pbVar18 = pbVar18 + 1;
  } while (lVar9 != 0);
                    /* WARNING: Read-only address (ram,0x007eeb80) is written */
  return;
}



/* Entry: 00232ddc; end: 00232e83;  */

void FUN_00232ddc(void)

{
  int iVar1;
  
  iVar1 = 0xaf8550;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_00af8540 != PTR_DAT_00af8418) {
    pcRam0000000000b6d310 = FUN_00230a3c;
    pcRam0000000000b6d318 = FUN_0022fb9c;
    pcRam0000000000b6d320 = FUN_0023115c;
    uRam0000000000b6d328 = 0x2302ec;
    pcRam0000000000b6d330 = FUN_00231878;
    pcRam0000000000b6d338 = FUN_00231fd8;
    pcRam0000000000b6d340 = FUN_002326b0;
    pcRam0000000000b6d348 = FUN_0022fb9c;
    uRam0000000000b6d350 = 0x2302ec;
    pcRam0000000000b6d358 = FUN_00231878;
    pcRam0000000000b6d360 = FUN_00231fd8;
  }
  PTR_LOOP_00af8540 = PTR_DAT_00af8418;
                    /* WARNING: Could not recover jumptable at 0x0077ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_0099a598)(0xaf8550);
  return;
}



/* Entry: 00232e84; end: 00232f3f;  */

void FUN_00232e84(long param_1,int param_2,long param_3,long param_4,uint param_5,long param_6,
                 int param_7,undefined8 param_8,uint param_9,undefined4 param_10,code *param_11)

{
  long lVar1;
  uint uVar2;
  
  if (0 < (int)param_9) {
    uVar2 = 0;
    do {
      (*param_11)(param_1,param_3,param_4,param_6,param_8);
      param_1 = param_1 + param_2;
      lVar1 = (long)(int)(-(uVar2 & 1) & param_5);
      param_4 = param_4 + lVar1;
      param_3 = param_3 + lVar1;
      param_6 = param_6 + param_7;
      uVar2 = uVar2 + 1;
    } while (param_9 != uVar2);
  }
  return;
}



/* Entry: 00232f40; end: 00232fe7;  */

void FUN_00232f40(void)

{
  int iVar1;
  
  iVar1 = 0xaf85e0;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_00af85d0 != PTR_DAT_00af8418) {
    pcRam0000000000b6d3a0 = FUN_00233e28;
    pcRam0000000000b6d3a8 = FUN_0023483c;
    pcRam0000000000b6d3b0 = FUN_00235494;
    pcRam0000000000b6d3b8 = FUN_00235ea0;
    pcRam0000000000b6d3c0 = FUN_00236a60;
    pcRam0000000000b6d3c8 = FUN_002375d8;
    uRam0000000000b6d3d0 = 0x237f78;
    pcRam0000000000b6d3d8 = FUN_0023483c;
    pcRam0000000000b6d3e0 = FUN_00235ea0;
    pcRam0000000000b6d3e8 = FUN_00236a60;
    pcRam0000000000b6d3f0 = FUN_002375d8;
  }
  PTR_LOOP_00af85d0 = PTR_DAT_00af8418;
                    /* WARNING: Could not recover jumptable at 0x0077ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_0099a598)(0xaf85e0);
  return;
}



/* Entry: 00232fe8; end: 002339f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00232fe8(uint *param_1,uint *param_2,uint *param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [14];
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [14];
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [14];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined1 auVar23 [16];
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar27 [14];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  ushort uVar43;
  ushort uVar44;
  byte *pbVar45;
  byte *pbVar46;
  uint uVar47;
  ulong uVar48;
  ulong uVar49;
  uint *puVar50;
  ulong uVar51;
  long lVar52;
  uint *puVar53;
  uint *puVar54;
  int iVar55;
  uint6 uVar56;
  undefined8 uVar57;
  int iVar65;
  int iVar66;
  undefined1 auVar59 [14];
  undefined1 auVar60 [14];
  uint uVar67;
  uint uVar68;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  uint uVar75;
  int iVar76;
  int iVar77;
  uint uVar78;
  int iVar79;
  int iVar80;
  uint uVar81;
  int iVar82;
  int iVar83;
  uint uVar84;
  int iVar85;
  int iVar86;
  uint uVar87;
  int iVar88;
  int iVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar107;
  uint uVar110;
  undefined1 auVar99 [14];
  undefined1 auVar102 [14];
  uint uVar113;
  undefined1 auVar103 [16];
  uint uVar97;
  int iVar98;
  uint uVar108;
  uint uVar111;
  undefined1 auVar100 [14];
  int iVar109;
  int iVar112;
  undefined1 auVar101 [14];
  uint uVar114;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  uint uVar115;
  uint uVar116;
  undefined4 uVar117;
  uint6 uVar118;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  undefined1 auVar120 [14];
  uint uVar125;
  uint uVar126;
  uint uVar127;
  int iVar128;
  uint uVar129;
  uint uVar130;
  uint uVar138;
  uint uVar142;
  undefined1 auVar131 [14];
  int iVar139;
  uint uVar140;
  int iVar143;
  uint uVar144;
  undefined1 auVar132 [14];
  uint uVar141;
  undefined1 auVar133 [14];
  undefined1 auVar134 [14];
  uint uVar145;
  uint uVar146;
  uint uVar147;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  uint uVar148;
  uint uVar149;
  int iVar150;
  int iVar151;
  int iVar152;
  int iVar153;
  uint uVar154;
  uint uVar155;
  uint uVar156;
  undefined1 auVar58 [14];
  undefined1 auVar119 [14];
  
  auVar106 = _UNK_007eeb70;
  uVar47 = (int)param_4 >> 1;
  uVar48 = (ulong)uVar47;
  if ((int)uVar47 < 1) {
    uVar47 = 0;
    goto LAB_002331a0;
  }
  if (param_5 == 0) {
    if (uVar47 < 4) {
      uVar49 = 0;
    }
    else {
      uVar49 = 0;
      if ((((uint *)((long)param_2 + uVar48) <= param_3 ||
            (uint *)((long)param_3 + uVar48) <= param_2) &&
          (param_1 + uVar48 * 2 <= param_2 || (uint *)((long)param_2 + uVar48) <= param_1)) &&
         (param_1 + uVar48 * 2 <= param_3 || (uint *)((long)param_3 + uVar48) <= param_1)) {
        if (uVar47 < 0x10) {
          uVar51 = 0;
        }
        else {
          uVar49 = uVar48 & 0x7ffffff0;
          puVar50 = param_1;
          puVar53 = param_2;
          puVar54 = param_3;
          uVar51 = uVar49;
          do {
            uVar130 = *puVar50;
            uVar67 = puVar50[1];
            uVar141 = puVar50[2];
            uVar97 = puVar50[3];
            uVar127 = puVar50[4];
            uVar108 = puVar50[5];
            uVar138 = puVar50[6];
            uVar111 = puVar50[7];
            uVar114 = puVar50[0x10];
            uVar17 = puVar50[0x11];
            uVar116 = puVar50[0x12];
            uVar8 = puVar50[0x13];
            uVar122 = puVar50[0x14];
            uVar19 = puVar50[0x15];
            uVar126 = puVar50[0x16];
            uVar21 = puVar50[0x17];
            uVar113 = puVar50[0x18];
            uVar125 = puVar50[0x19];
            uVar115 = puVar50[0x1a];
            uVar129 = puVar50[0x1b];
            uVar121 = puVar50[0x1c];
            uVar142 = puVar50[0x1d];
            uVar123 = puVar50[0x1e];
            uVar145 = puVar50[0x1f];
            uVar156 = puVar50[8];
            uVar30 = puVar50[9];
            uVar29 = puVar50[10];
            uVar96 = puVar50[0xb];
            uVar155 = puVar50[0xc];
            uVar107 = puVar50[0xd];
            uVar68 = puVar50[0xe];
            uVar110 = puVar50[0xf];
            uVar118 = CONCAT15((char)((uVar115 >> 0xf) >> 8),
                               CONCAT14((char)(uVar115 >> 0xf),
                                        (uint)((ushort)(uVar113 >> 0xf) & 0x1fe))) & 0x1feffffffff;
            uVar43 = (ushort)(uVar121 >> 0xf) & 0x1fe;
            auVar120._0_12_ = ZEXT212(uVar43) << 0x40;
            auVar120[0xc] = (byte)(uVar123 >> 0xf) & 0xfe;
            auVar120[0xd] = (byte)((uVar123 >> 0xf) >> 8) & 1;
            uVar56 = CONCAT15((char)((uVar141 >> 0xf) >> 8),
                              CONCAT14((char)(uVar141 >> 0xf),
                                       (uint)((ushort)(uVar130 >> 0xf) & 0x1fe))) & 0x1feffffffff;
            uVar44 = (ushort)(uVar127 >> 0xf) & 0x1fe;
            auVar101._0_12_ = ZEXT212(uVar44) << 0x40;
            auVar101[0xc] = (byte)(uVar138 >> 0xf) & 0xfe;
            auVar101[0xd] = (byte)((uVar138 >> 0xf) >> 8) & 1;
            iVar55 = (uint)((ushort)(uVar67 >> 0xf) & 0x1fe) + (int)uVar56;
            iVar65 = (uint)((ushort)(uVar97 >> 0xf) & 0x1fe) + (uint)(ushort)(uVar56 >> 0x20);
            iVar66 = (uint)((ushort)(uVar108 >> 0xf) & 0x1fe) + (uint)uVar44;
            uVar124 = (uint)((ushort)(uVar111 >> 0xf) & 0x1fe) + (uint)auVar101._12_2_;
            iVar74 = (uint)((ushort)(uVar125 >> 0xf) & 0x1fe) + (int)uVar118;
            iVar76 = (uint)((ushort)(uVar129 >> 0xf) & 0x1fe) + (uint)(ushort)(uVar118 >> 0x20);
            iVar77 = (uint)((ushort)(uVar142 >> 0xf) & 0x1fe) + (uint)uVar43;
            uVar140 = (uint)((ushort)(uVar145 >> 0xf) & 0x1fe) + (uint)auVar120._12_2_;
            iVar150 = (uint)(CONCAT11((char)(uint3)(uVar17 >> 0x17),(char)(uVar17 >> 0xf)) & 0x1fe)
                      + (uint)((ushort)(uVar114 >> 0xf) & 0x1fe);
            iVar151 = (uint)(CONCAT11((char)(uint3)(uVar8 >> 0x17),(char)(uVar8 >> 0xf)) & 0x1fe) +
                      (uint)((ushort)(uVar116 >> 0xf) & 0x1fe);
            iVar152 = (uint)(CONCAT11((char)(uint3)(uVar19 >> 0x17),(char)(uVar19 >> 0xf)) & 0x1fe)
                      + (uint)((ushort)(uVar122 >> 0xf) & 0x1fe);
            iVar153 = (uint)(CONCAT11((char)(uint3)(uVar21 >> 0x17),(char)(uVar21 >> 0xf)) & 0x1fe)
                      + (uint)((ushort)(uVar126 >> 0xf) & 0x1fe);
            uVar148 = (uint)((ushort)(uVar107 >> 0xf) & 0x1fe);
            uVar78 = (uint)((ushort)(uVar130 >> 7) & 0x1fe);
            uVar81 = (uint)((ushort)(uVar127 >> 7) & 0x1fe);
            uVar144 = (uint)((ushort)(uVar113 >> 7) & 0x1fe);
            uVar146 = (uint)((ushort)(uVar121 >> 7) & 0x1fe);
            uVar147 = (uint)((ushort)(uVar156 >> 7) & 0x1fe);
            uVar75 = (uint)((ushort)(uVar155 >> 7) & 0x1fe);
            uVar94 = (uint)((ushort)(uVar67 >> 7) & 0x1fe);
            uVar95 = (uint)((ushort)(uVar108 >> 7) & 0x1fe);
            uVar90 = (uint)((ushort)(uVar125 >> 7) & 0x1fe);
            uVar91 = (uint)((ushort)(uVar142 >> 7) & 0x1fe);
            uVar92 = (uint)((ushort)(uVar30 >> 7) & 0x1fe);
            uVar93 = (uint)((ushort)(uVar107 >> 7) & 0x1fe);
            uVar84 = (uint)((ushort)(uVar17 >> 7) & 0x1fe);
            uVar87 = (uint)((ushort)(uVar19 >> 7) & 0x1fe);
            iVar40 = uVar84 + ((ushort)(uVar114 >> 7) & 0x1fe);
            iVar41 = (uint)((ushort)(CONCAT15((char)((uVar8 >> 7) >> 8),
                                              CONCAT14((char)(uVar8 >> 7),uVar84)) >> 0x20) & 0x1fe)
                     + (uint)((ushort)(uVar116 >> 7) & 0x1fe);
            iVar42 = uVar87 + ((ushort)(uVar122 >> 7) & 0x1fe);
            iVar69 = (uint)((ushort)(CONCAT15((char)((uVar21 >> 7) >> 8),
                                              CONCAT14((char)(uVar21 >> 7),uVar87)) >> 0x20) & 0x1fe
                           ) + (uint)((ushort)(uVar126 >> 7) & 0x1fe);
            iVar83 = uVar90 + uVar144;
            iVar85 = (uint)((ushort)(CONCAT15((char)((uVar129 >> 7) >> 8),
                                              CONCAT14((char)(uVar129 >> 7),uVar90)) >> 0x20) &
                           0x1fe) +
                     (uint)((ushort)(CONCAT15((char)((uVar115 >> 7) >> 8),
                                              CONCAT14((char)(uVar115 >> 7),uVar144)) >> 0x20) &
                           0x1fe);
            iVar86 = uVar91 + uVar146;
            iVar88 = (uint)((ushort)(CONCAT15((char)((uVar145 >> 7) >> 8),
                                              CONCAT14((char)(uVar145 >> 7),uVar91)) >> 0x20) &
                           0x1fe) +
                     (uint)((ushort)(CONCAT15((char)((uVar123 >> 7) >> 8),
                                              CONCAT14((char)(uVar123 >> 7),uVar146)) >> 0x20) &
                           0x1fe);
            iVar89 = uVar94 + uVar78;
            iVar128 = (uint)((ushort)(CONCAT15((char)((uVar97 >> 7) >> 8),
                                               CONCAT14((char)(uVar97 >> 7),uVar94)) >> 0x20) &
                            0x1fe) +
                      (uint)((ushort)(CONCAT15((char)((uVar141 >> 7) >> 8),
                                               CONCAT14((char)(uVar141 >> 7),uVar78)) >> 0x20) &
                            0x1fe);
            iVar139 = uVar95 + uVar81;
            iVar143 = (uint)((ushort)(CONCAT15((char)((uVar111 >> 7) >> 8),
                                               CONCAT14((char)(uVar111 >> 7),uVar95)) >> 0x20) &
                            0x1fe) +
                      (uint)((ushort)(CONCAT15((char)((uVar138 >> 7) >> 8),
                                               CONCAT14((char)(uVar138 >> 7),uVar81)) >> 0x20) &
                            0x1fe);
            uVar56 = CONCAT15((char)(uVar141 * 2 >> 8),
                              CONCAT14((char)(uVar141 * 2),(uint)((short)uVar130 * 2 & 0x1fe))) &
                     0x1feffffffff;
            uVar43 = (short)uVar127 * 2 & 0x1ff;
            auVar59._0_12_ = ZEXT212(uVar43) << 0x40;
            auVar59[0xc] = (undefined1)(uVar138 * 2);
            auVar59[0xd] = (byte)(uVar138 * 2 >> 8) & 1;
            uVar144 = (uint)((short)uVar156 * 2 & 0x1fe);
            uVar146 = (uint)((short)uVar155 * 2 & 0x1fe);
            iVar70 = (uint)(CONCAT11((char)(uint3)(uVar30 >> 0x17),(char)(uVar30 >> 0xf)) & 0x1fe) +
                     (uint)((ushort)(uVar156 >> 0xf) & 0x1fe);
            iVar71 = (uint)(CONCAT11((char)(uint3)(uVar96 >> 0x17),(char)(uVar96 >> 0xf)) & 0x1fe) +
                     (uint)((ushort)(uVar29 >> 0xf) & 0x1fe);
            iVar72 = uVar148 + ((ushort)(uVar155 >> 0xf) & 0x1fe);
            iVar73 = (uint)((ushort)(CONCAT15((char)((uVar110 >> 0xf) >> 8),
                                              CONCAT14((char)(uVar110 >> 0xf),uVar148)) >> 0x20) &
                           0x1fe) + (uint)((ushort)(uVar68 >> 0xf) & 0x1fe);
            uVar156 = (uint)((short)uVar121 * 2 & 0x1fe);
            uVar114 = (uint)((short)uVar114 * 2 & 0x1fe);
            uVar122 = (uint)((short)uVar122 * 2 & 0x1fe);
            iVar24 = uVar92 + uVar147;
            iVar25 = (uint)((ushort)(CONCAT15((char)((uVar96 >> 7) >> 8),
                                              CONCAT14((char)(uVar96 >> 7),uVar92)) >> 0x20) & 0x1fe
                           ) + (uint)((ushort)(CONCAT15((char)((uVar29 >> 7) >> 8),
                                                        CONCAT14((char)(uVar29 >> 7),uVar147)) >>
                                              0x20) & 0x1fe);
            iVar26 = uVar93 + uVar75;
            iVar39 = (uint)((ushort)(CONCAT15((char)((uVar110 >> 7) >> 8),
                                              CONCAT14((char)(uVar110 >> 7),uVar93)) >> 0x20) &
                           0x1fe) +
                     (uint)((ushort)(CONCAT15((char)((uVar68 >> 7) >> 8),
                                              CONCAT14((char)(uVar68 >> 7),uVar75)) >> 0x20) & 0x1fe
                           );
            uVar118 = CONCAT15((char)(uVar97 * 2 >> 8),
                               CONCAT14((char)(uVar97 * 2),(uint)((short)uVar67 * 2 & 0x1fe))) &
                      0x1feffffffff;
            uVar44 = (short)uVar108 * 2 & 0x1ff;
            auVar133._0_12_ = ZEXT212(uVar44) << 0x40;
            auVar133[0xc] = (undefined1)(uVar111 * 2);
            auVar133[0xd] = (byte)(uVar111 * 2 >> 8) & 1;
            iVar98 = ((short)uVar17 * 2 & 0x1fe) + uVar114;
            iVar109 = (uint)((short)uVar8 * 2 & 0x1fe) +
                      (uint)((ushort)(CONCAT15((char)(uVar116 * 2 >> 8),
                                               CONCAT14((char)(uVar116 * 2),uVar114)) >> 0x20) &
                            0x1fe);
            iVar112 = ((short)uVar19 * 2 & 0x1fe) + uVar122;
            iVar13 = (uint)((short)uVar21 * 2 & 0x1fe) +
                     (uint)((ushort)(CONCAT15((char)(uVar126 * 2 >> 8),
                                              CONCAT14((char)(uVar126 * 2),uVar122)) >> 0x20) &
                           0x1fe);
            iVar16 = (uint)((short)uVar125 * 2 & 0x1fe) + (uint)((short)uVar113 * 2 & 0x1fe);
            iVar18 = (uint)((short)uVar129 * 2 & 0x1fe) + (uint)((short)uVar115 * 2 & 0x1fe);
            iVar20 = ((short)uVar142 * 2 & 0x1fe) + uVar156;
            iVar22 = (uint)((short)uVar145 * 2 & 0x1fe) +
                     (uint)((ushort)(CONCAT15((char)(uVar123 * 2 >> 8),
                                              CONCAT14((char)(uVar123 * 2),uVar156)) >> 0x20) &
                           0x1fe);
            iVar1 = ((short)uVar30 * 2 & 0x1fe) + uVar144;
            iVar2 = (uint)((short)uVar96 * 2 & 0x1fe) +
                    (uint)((ushort)(CONCAT15((char)(uVar29 * 2 >> 8),
                                             CONCAT14((char)(uVar29 * 2),uVar144)) >> 0x20) & 0x1fe)
            ;
            iVar3 = ((short)uVar107 * 2 & 0x1fe) + uVar146;
            iVar5 = (uint)((short)uVar110 * 2 & 0x1fe) +
                    (uint)((ushort)(CONCAT15((char)(uVar68 * 2 >> 8),
                                             CONCAT14((char)(uVar68 * 2),uVar146)) >> 0x20) & 0x1fe)
            ;
            iVar79 = (int)uVar118 + (int)uVar56;
            iVar80 = (uint)(ushort)(uVar118 >> 0x20) + (uint)(ushort)(uVar56 >> 0x20);
            iVar82 = (uint)uVar44 + (uint)uVar43;
            uVar68 = (uint)auVar133._12_2_ + (uint)auVar59._12_2_;
            uVar114 = iVar83 * -0x4a89 + iVar74 * -0x25f7 + iVar16 * 0x7080 + 0x2020000;
            uVar116 = iVar85 * -0x4a89 + iVar76 * -0x25f7 + iVar18 * 0x7080 + 0x2020000;
            uVar122 = iVar86 * -0x4a89 + iVar77 * -0x25f7 + iVar20 * 0x7080 + 0x2020000;
            uVar126 = iVar88 * -0x4a89 + uVar140 * -0x25f7 + iVar22 * 0x7080 + 0x2020000;
            uVar21 = iVar89 * -0x4a89 + iVar55 * -0x25f7 + iVar79 * 0x7080 + 0x2020000;
            uVar156 = iVar128 * -0x4a89 + iVar65 * -0x25f7 + iVar80 * 0x7080 + 0x2020000;
            uVar29 = iVar139 * -0x4a89 + iVar66 * -0x25f7 + iVar82 * 0x7080 + 0x2020000;
            uVar155 = iVar143 * -0x4a89 + uVar124 * -0x25f7 + (uVar68 & 0xffff) * 0x7080 + 0x2020000
            ;
            uVar67 = iVar24 * -0x5e34 + iVar70 * 0x7080 + iVar1 * -0x124c + 0x2020000;
            uVar97 = iVar25 * -0x5e34 + iVar71 * 0x7080 + iVar2 * -0x124c + 0x2020000;
            uVar108 = iVar26 * -0x5e34 + iVar72 * 0x7080 + iVar3 * -0x124c + 0x2020000;
            uVar111 = iVar39 * -0x5e34 + iVar73 * 0x7080 + iVar5 * -0x124c + 0x2020000;
            uVar17 = iVar89 * -0x5e34 + iVar55 * 0x7080 + iVar79 * -0x124c + 0x2020000;
            uVar8 = iVar128 * -0x5e34 + iVar65 * 0x7080 + iVar80 * -0x124c + 0x2020000;
            uVar19 = iVar139 * -0x5e34 + iVar66 * 0x7080 + iVar82 * -0x124c + 0x2020000;
            uVar124 = iVar143 * -0x5e34 + (uVar124 & 0xffff) * 0x7080 + uVar68 * -0x124c + 0x2020000
            ;
            uVar12 = *(undefined8 *)(puVar53 + 2);
            uVar57 = *(undefined8 *)puVar53;
            auVar135[9] = (byte)(uVar114 >> 0x1a);
            auVar135[8] = (char)(uVar114 >> 0x12);
            auVar135[0xb] = (byte)(uVar116 >> 0x1a);
            auVar135[10] = (char)(uVar116 >> 0x12);
            uVar43 = CONCAT11((byte)(uVar122 >> 0x1a),(char)(uVar122 >> 0x12));
            auVar7[0xc] = (char)(uVar126 >> 0x12);
            auVar7._0_12_ = ZEXT212(uVar43) << 0x40;
            auVar7[0xd] = (byte)(uVar126 >> 0x1a);
            auVar135._2_2_ =
                 (ushort)((uint)(iVar41 * -0x4a89 + iVar151 * -0x25f7 + iVar109 * 0x7080 + 0x2020000
                                ) >> 0x12);
            auVar135._0_2_ =
                 (ushort)((uint)(iVar40 * -0x4a89 + iVar150 * -0x25f7 + iVar98 * 0x7080 + 0x2020000)
                         >> 0x12);
            auVar135._4_2_ =
                 (ushort)((uint)(iVar42 * -0x4a89 + iVar152 * -0x25f7 + iVar112 * 0x7080 + 0x2020000
                                ) >> 0x12);
            auVar135._6_2_ =
                 (ushort)((uint)(iVar69 * -0x4a89 + iVar153 * -0x25f7 + iVar13 * 0x7080 + 0x2020000)
                         >> 0x12);
            auVar135._12_2_ = uVar43;
            auVar135._14_2_ = auVar7._12_2_;
            auVar62[1] = 0;
            auVar62[0] = (byte)uVar12;
            auVar62[2] = (char)((ulong)uVar12 >> 8);
            auVar62[3] = 0;
            auVar62[4] = (char)((ulong)uVar12 >> 0x10);
            auVar62[5] = 0;
            auVar62[6] = (char)((ulong)uVar12 >> 0x18);
            auVar62[7] = 0;
            auVar62[8] = (char)((ulong)uVar12 >> 0x20);
            auVar62[9] = 0;
            auVar62[10] = (char)((ulong)uVar12 >> 0x28);
            auVar62[0xb] = 0;
            auVar62[0xc] = (char)((ulong)uVar12 >> 0x30);
            auVar62[0xd] = 0;
            auVar62[0xe] = (char)((ulong)uVar12 >> 0x38);
            auVar62[0xf] = 0;
            auVar136 = NEON_urhadd(auVar135,auVar62,2);
            auVar61[1] = (byte)(uVar21 >> 0x1a);
            auVar61[0] = (char)(uVar21 >> 0x12);
            auVar61[3] = (byte)(uVar156 >> 0x1a);
            auVar61[2] = (char)(uVar156 >> 0x12);
            uVar43 = CONCAT11((byte)(uVar29 >> 0x1a),(char)(uVar29 >> 0x12));
            auVar27[0xc] = (char)(uVar155 >> 0x12);
            auVar27._0_12_ = ZEXT212(uVar43) << 0x40;
            auVar27[0xd] = (byte)(uVar155 >> 0x1a);
            auVar61._4_2_ = uVar43;
            auVar61._6_2_ = auVar27._12_2_;
            auVar61._8_2_ =
                 (ushort)((uint)(iVar24 * -0x4a89 + iVar70 * -0x25f7 + iVar1 * 0x7080 + 0x2020000)
                         >> 0x12);
            auVar61._10_2_ =
                 (ushort)((uint)(iVar25 * -0x4a89 + iVar71 * -0x25f7 + iVar2 * 0x7080 + 0x2020000)
                         >> 0x12);
            auVar61._12_2_ =
                 (ushort)((uint)(iVar26 * -0x4a89 + iVar72 * -0x25f7 + iVar3 * 0x7080 + 0x2020000)
                         >> 0x12);
            auVar61._14_2_ =
                 (ushort)((uint)(iVar39 * -0x4a89 + iVar73 * -0x25f7 + iVar5 * 0x7080 + 0x2020000)
                         >> 0x12);
            auVar64[1] = 0;
            auVar64[0] = (byte)uVar57;
            auVar64[2] = (char)((ulong)uVar57 >> 8);
            auVar64[3] = 0;
            auVar64[4] = (char)((ulong)uVar57 >> 0x10);
            auVar64[5] = 0;
            auVar64[6] = (char)((ulong)uVar57 >> 0x18);
            auVar64[7] = 0;
            auVar64[8] = (char)((ulong)uVar57 >> 0x20);
            auVar64[9] = 0;
            auVar64[10] = (char)((ulong)uVar57 >> 0x28);
            auVar64[0xb] = 0;
            auVar64[0xc] = (char)((ulong)uVar57 >> 0x30);
            auVar64[0xd] = 0;
            auVar64[0xe] = (char)((ulong)uVar57 >> 0x38);
            auVar64[0xf] = 0;
            auVar62 = NEON_urhadd(auVar61,auVar64,2);
            auVar63._2_2_ =
                 (ushort)((uint)(iVar41 * -0x5e34 + iVar151 * 0x7080 + iVar109 * -0x124c + 0x2020000
                                ) >> 0x12);
            auVar63._0_2_ =
                 (ushort)((uint)(iVar40 * -0x5e34 + iVar150 * 0x7080 + iVar98 * -0x124c + 0x2020000)
                         >> 0x12);
            auVar63._4_2_ =
                 (ushort)((uint)(iVar42 * -0x5e34 + iVar152 * 0x7080 + iVar112 * -0x124c + 0x2020000
                                ) >> 0x12);
            auVar63._6_2_ =
                 (ushort)((uint)(iVar69 * -0x5e34 + iVar153 * 0x7080 + iVar13 * -0x124c + 0x2020000)
                         >> 0x12);
            auVar63._8_2_ =
                 (ushort)((uint)(iVar83 * -0x5e34 + iVar74 * 0x7080 + iVar16 * -0x124c + 0x2020000)
                         >> 0x12);
            auVar63._10_2_ =
                 (ushort)((uint)(iVar85 * -0x5e34 + iVar76 * 0x7080 + iVar18 * -0x124c + 0x2020000)
                         >> 0x12);
            auVar63._12_2_ =
                 (ushort)((uint)(iVar86 * -0x5e34 + iVar77 * 0x7080 + iVar20 * -0x124c + 0x2020000)
                         >> 0x12);
            auVar63._14_2_ =
                 (ushort)(iVar88 * -0x5e34 + (uVar140 & 0xffff) * 0x7080 + iVar22 * -0x124c +
                          0x2020000 >> 0x12);
            auVar104[1] = 0;
            auVar104[0] = (byte)puVar54[2];
            auVar104[2] = *(byte *)((long)puVar54 + 9);
            auVar104[3] = 0;
            auVar104[4] = *(byte *)((long)puVar54 + 10);
            auVar104[5] = 0;
            auVar104[6] = *(byte *)((long)puVar54 + 0xb);
            auVar104[7] = 0;
            auVar104[8] = (byte)puVar54[3];
            auVar104[9] = 0;
            auVar104[10] = *(byte *)((long)puVar54 + 0xd);
            auVar104[0xb] = 0;
            auVar104[0xc] = *(byte *)((long)puVar54 + 0xe);
            auVar104[0xd] = 0;
            auVar104[0xe] = *(byte *)((long)puVar54 + 0xf);
            auVar104[0xf] = 0;
            auVar64 = NEON_urhadd(auVar63,auVar104,2);
            auVar105[9] = (byte)(uVar67 >> 0x1a);
            auVar105[8] = (char)(uVar67 >> 0x12);
            auVar105[0xb] = (byte)(uVar97 >> 0x1a);
            auVar105[10] = (char)(uVar97 >> 0x12);
            uVar43 = CONCAT11((byte)(uVar108 >> 0x1a),(char)(uVar108 >> 0x12));
            auVar4[0xc] = (char)(uVar111 >> 0x12);
            auVar4._0_12_ = ZEXT212(uVar43) << 0x40;
            auVar4[0xd] = (byte)(uVar111 >> 0x1a);
            auVar105[1] = (byte)(uVar17 >> 0x1a);
            auVar105[0] = (char)(uVar17 >> 0x12);
            auVar105[3] = (byte)(uVar8 >> 0x1a);
            auVar105[2] = (char)(uVar8 >> 0x12);
            uVar44 = CONCAT11((byte)(uVar19 >> 0x1a),(char)(uVar19 >> 0x12));
            auVar10[0xc] = (char)(uVar124 >> 0x12);
            auVar10._0_12_ = ZEXT212(uVar44) << 0x40;
            auVar10[0xd] = (byte)(uVar124 >> 0x1a);
            auVar105._4_2_ = uVar44;
            auVar105._6_2_ = auVar10._12_2_;
            auVar105._12_2_ = uVar43;
            auVar105._14_2_ = auVar4._12_2_;
            auVar103[8] = 0x20;
            auVar103._0_8_ = 0x1c1814100c080400;
            auVar106[8] = 0x20;
            auVar106._0_8_ = 0x1c1814100c080400;
            auVar106[9] = 0x24;
            auVar106[10] = 0x28;
            auVar106[0xb] = 0x2c;
            auVar106[0xc] = 0x30;
            auVar106[0xd] = 0x34;
            auVar106[0xe] = 0x38;
            auVar106[0xf] = 0x3c;
            auVar32._2_2_ = 0;
            auVar32._0_2_ = auVar62._0_2_;
            auVar32._4_2_ = auVar62._2_2_;
            auVar32._6_2_ = 0;
            auVar32._8_2_ = auVar62._4_2_;
            auVar32._10_2_ = 0;
            auVar32._12_2_ = auVar62._6_2_;
            auVar32._14_2_ = 0;
            auVar34._2_2_ = 0;
            auVar34._0_2_ = auVar62._8_2_;
            auVar34[4] = auVar62[10];
            auVar34[5] = auVar62[0xb];
            auVar34._6_2_ = 0;
            auVar34[8] = auVar62[0xc];
            auVar34[9] = auVar62[0xd];
            auVar34._10_2_ = 0;
            auVar34[0xc] = auVar62[0xe];
            auVar34[0xd] = auVar62[0xf];
            auVar34._14_2_ = 0;
            auVar36._2_2_ = 0;
            auVar36._0_2_ = auVar136._0_2_;
            auVar36[4] = auVar136[2];
            auVar36[5] = auVar136[3];
            auVar36._6_2_ = 0;
            auVar36[8] = auVar136[4];
            auVar36[9] = auVar136[5];
            auVar36._10_2_ = 0;
            auVar36[0xc] = auVar136[6];
            auVar36[0xd] = auVar136[7];
            auVar36._14_2_ = 0;
            auVar38._2_2_ = 0;
            auVar38._0_2_ = auVar136._8_2_;
            auVar38[4] = auVar136[10];
            auVar38[5] = auVar136[0xb];
            auVar38._6_2_ = 0;
            auVar38[8] = auVar136[0xc];
            auVar38[9] = auVar136[0xd];
            auVar38._10_2_ = 0;
            auVar38[0xc] = auVar136[0xe];
            auVar38[0xd] = auVar136[0xf];
            auVar38._14_2_ = 0;
            auVar62 = a64_TBL(ZEXT816(0),auVar32,auVar34,auVar36,auVar38,auVar106);
            auVar137[1] = 0;
            auVar137[0] = (byte)*puVar54;
            auVar137[2] = *(byte *)((long)puVar54 + 1);
            auVar137[3] = 0;
            auVar137[4] = *(byte *)((long)puVar54 + 2);
            auVar137[5] = 0;
            auVar137[6] = *(byte *)((long)puVar54 + 3);
            auVar137[7] = 0;
            auVar137[8] = (byte)puVar54[1];
            auVar137[9] = 0;
            auVar137[10] = *(byte *)((long)puVar54 + 5);
            auVar137[0xb] = 0;
            auVar137[0xc] = *(byte *)((long)puVar54 + 6);
            auVar137[0xd] = 0;
            auVar137[0xe] = *(byte *)((long)puVar54 + 7);
            auVar137[0xf] = 0;
            auVar106 = NEON_urhadd(auVar105,auVar137,2);
            *(long *)(puVar53 + 2) = auVar62._8_8_;
            *(long *)puVar53 = auVar62._0_8_;
            auVar103[9] = 0x24;
            auVar103[10] = 0x28;
            auVar103[0xb] = 0x2c;
            auVar103[0xc] = 0x30;
            auVar103[0xd] = 0x34;
            auVar103[0xe] = 0x38;
            auVar103[0xf] = 0x3c;
            auVar136._2_2_ = 0;
            auVar136._0_2_ = auVar106._0_2_;
            auVar136[4] = auVar106[2];
            auVar136[5] = auVar106[3];
            auVar136._6_2_ = 0;
            auVar136[8] = auVar106[4];
            auVar136[9] = auVar106[5];
            auVar136._10_2_ = 0;
            auVar136[0xc] = auVar106[6];
            auVar136[0xd] = auVar106[7];
            auVar136._14_2_ = 0;
            auVar15._2_2_ = 0;
            auVar15._0_2_ = auVar106._8_2_;
            auVar15[4] = auVar106[10];
            auVar15[5] = auVar106[0xb];
            auVar15._6_2_ = 0;
            auVar15[8] = auVar106[0xc];
            auVar15[9] = auVar106[0xd];
            auVar15._10_2_ = 0;
            auVar15[0xc] = auVar106[0xe];
            auVar15[0xd] = auVar106[0xf];
            auVar15._14_2_ = 0;
            auVar23._2_2_ = 0;
            auVar23._0_2_ = auVar64._0_2_;
            auVar23[4] = auVar64[2];
            auVar23[5] = auVar64[3];
            auVar23._6_2_ = 0;
            auVar23[8] = auVar64[4];
            auVar23[9] = auVar64[5];
            auVar23._10_2_ = 0;
            auVar23[0xc] = auVar64[6];
            auVar23[0xd] = auVar64[7];
            auVar23._14_2_ = 0;
            auVar28._2_2_ = 0;
            auVar28._0_2_ = auVar64._8_2_;
            auVar28[4] = auVar64[10];
            auVar28[5] = auVar64[0xb];
            auVar28._6_2_ = 0;
            auVar28[8] = auVar64[0xc];
            auVar28[9] = auVar64[0xd];
            auVar28._10_2_ = 0;
            auVar28[0xc] = auVar64[0xe];
            auVar28[0xd] = auVar64[0xf];
            auVar28._14_2_ = 0;
            auVar106 = a64_TBL(ZEXT816(0),auVar136,auVar15,auVar23,auVar28,auVar103);
            *(long *)(puVar54 + 2) = auVar106._8_8_;
            *(long *)puVar54 = auVar106._0_8_;
            puVar50 = puVar50 + 0x20;
            uVar51 = uVar51 - 0x10;
            puVar53 = puVar53 + 4;
            puVar54 = puVar54 + 4;
          } while (uVar51 != 0);
          if (uVar49 == uVar48) goto LAB_002331a0;
          uVar51 = uVar49;
          if ((uVar47 & 0xc) == 0) goto LAB_002330e8;
        }
        uVar49 = uVar48 & 0x7ffffffc;
        lVar52 = uVar51 - uVar49;
        pbVar46 = (byte *)((long)param_3 + uVar51);
        pbVar45 = (byte *)((long)param_2 + uVar51);
        puVar50 = param_1 + uVar51 * 2;
        do {
          uVar97 = *puVar50;
          uVar116 = puVar50[1];
          uVar108 = puVar50[2];
          uVar122 = puVar50[3];
          uVar111 = puVar50[4];
          uVar124 = puVar50[5];
          uVar114 = puVar50[6];
          uVar126 = puVar50[7];
          puVar50 = puVar50 + 8;
          uVar56 = CONCAT15((char)((uVar108 >> 0xf) >> 8),
                            CONCAT14((char)(uVar108 >> 0xf),(uint)((ushort)(uVar97 >> 0xf) & 0x1fe))
                           ) & 0x1feffffffff;
          uVar43 = (ushort)(uVar111 >> 0xf) & 0x1fe;
          auVar60._0_12_ = ZEXT212(uVar43) << 0x40;
          auVar60[0xc] = (byte)(uVar114 >> 0xf) & 0xfe;
          auVar60[0xd] = (byte)((uVar114 >> 0xf) >> 8) & 1;
          uVar118 = CONCAT15((char)((uVar122 >> 0xf) >> 8),
                             CONCAT14((char)(uVar122 >> 0xf),
                                      (uint)((ushort)(uVar116 >> 0xf) & 0x1fe))) & 0x1feffffffff;
          uVar44 = (ushort)(uVar124 >> 0xf) & 0x1fe;
          auVar134._0_12_ = ZEXT212(uVar44) << 0x40;
          auVar134[0xc] = (byte)(uVar126 >> 0xf) & 0xfe;
          auVar134[0xd] = (byte)((uVar126 >> 0xf) >> 8) & 1;
          iVar55 = (int)uVar118 + (int)uVar56;
          iVar65 = (uint)(ushort)(uVar118 >> 0x20) + (uint)(ushort)(uVar56 >> 0x20);
          iVar66 = (uint)uVar44 + (uint)uVar43;
          uVar67 = (uint)auVar134._12_2_ + (uint)auVar60._12_2_;
          iVar1 = (uint)((ushort)(uVar116 >> 7) & 0x1fe) + (uint)((ushort)(uVar97 >> 7) & 0x1fe);
          iVar2 = (uint)((ushort)(uVar122 >> 7) & 0x1fe) + (uint)((ushort)(uVar108 >> 7) & 0x1fe);
          iVar3 = (uint)((ushort)(uVar124 >> 7) & 0x1fe) + (uint)((ushort)(uVar111 >> 7) & 0x1fe);
          iVar5 = (uint)((ushort)(uVar126 >> 7) & 0x1fe) + (uint)((ushort)(uVar114 >> 7) & 0x1fe);
          uVar56 = CONCAT15((char)(uVar122 * 2 >> 8),
                            CONCAT14((char)(uVar122 * 2),(uint)((short)uVar116 * 2 & 0x1fe))) &
                   0x1feffffffff;
          uVar43 = (short)uVar124 * 2 & 0x1ff;
          auVar102._0_12_ = ZEXT212(uVar43) << 0x40;
          auVar102[0xc] = (undefined1)(uVar126 * 2);
          auVar102[0xd] = (byte)(uVar126 * 2 >> 8) & 1;
          iVar98 = (int)uVar56 + (uint)((short)uVar97 * 2 & 0x1fe);
          iVar109 = (uint)(ushort)(uVar56 >> 0x20) + (uint)((short)uVar108 * 2 & 0x1fe);
          iVar112 = (uint)uVar43 + (uint)((short)uVar111 * 2 & 0x1fe);
          uVar97 = (uint)auVar102._12_2_ + (uint)((short)uVar114 * 2 & 0x1fe);
          uVar117 = *(undefined4 *)pbVar45;
          uVar57 = NEON_urhadd(CONCAT26((ushort)(iVar5 * -0x4a89 + uVar67 * -0x25f7 +
                                                 (uVar97 & 0xffff) * 0x7080 + 0x2020000 >> 0x12),
                                        CONCAT24((ushort)((uint)(iVar3 * -0x4a89 + iVar66 * -0x25f7
                                                                 + iVar112 * 0x7080 + 0x2020000) >>
                                                         0x12),
                                                 CONCAT22((ushort)((uint)(iVar2 * -0x4a89 +
                                                                          iVar65 * -0x25f7 +
                                                                          iVar109 * 0x7080 +
                                                                         0x2020000) >> 0x12),
                                                          (ushort)((uint)(iVar1 * -0x4a89 +
                                                                          iVar55 * -0x25f7 +
                                                                          iVar98 * 0x7080 +
                                                                         0x2020000) >> 0x12)))),
                               (ulong)CONCAT16((char)((uint)uVar117 >> 0x18),
                                               (uint6)CONCAT14((char)((uint)uVar117 >> 0x10),
                                                               (uint)CONCAT12((char)((uint)uVar117
                                                                                    >> 8),
                                                                              (ushort)(byte)uVar117)
                                                              )),2);
          *(uint *)pbVar45 =
               CONCAT13((char)((ulong)uVar57 >> 0x30),
                        CONCAT12((char)((ulong)uVar57 >> 0x20),
                                 CONCAT11((char)((ulong)uVar57 >> 0x10),(char)uVar57)));
          pbVar45 = pbVar45 + 4;
          uVar117 = *(undefined4 *)pbVar46;
          uVar57 = NEON_urhadd(CONCAT26((ushort)(iVar5 * -0x5e34 + (uVar67 & 0xffff) * 0x7080 +
                                                 uVar97 * -0x124c + 0x2020000 >> 0x12),
                                        CONCAT24((ushort)((uint)(iVar3 * -0x5e34 + iVar66 * 0x7080 +
                                                                 iVar112 * -0x124c + 0x2020000) >>
                                                         0x12),
                                                 CONCAT22((ushort)((uint)(iVar2 * -0x5e34 +
                                                                          iVar65 * 0x7080 +
                                                                          iVar109 * -0x124c +
                                                                         0x2020000) >> 0x12),
                                                          (ushort)((uint)(iVar1 * -0x5e34 +
                                                                          iVar55 * 0x7080 +
                                                                          iVar98 * -0x124c +
                                                                         0x2020000) >> 0x12)))),
                               (ulong)CONCAT16((char)((uint)uVar117 >> 0x18),
                                               (uint6)CONCAT14((char)((uint)uVar117 >> 0x10),
                                                               (uint)CONCAT12((char)((uint)uVar117
                                                                                    >> 8),
                                                                              (ushort)(byte)uVar117)
                                                              )),2);
          *(uint *)pbVar46 =
               CONCAT13((char)((ulong)uVar57 >> 0x30),
                        CONCAT12((char)((ulong)uVar57 >> 0x20),
                                 CONCAT11((char)((ulong)uVar57 >> 0x10),(char)uVar57)));
          pbVar46 = pbVar46 + 4;
          lVar52 = lVar52 + 4;
        } while (lVar52 != 0);
        if (uVar49 == uVar48) goto LAB_002331a0;
      }
    }
LAB_002330e8:
    lVar52 = uVar48 - uVar49;
    puVar50 = param_1 + uVar49 * 2 + 1;
    pbVar46 = (byte *)((long)param_3 + uVar49);
    pbVar45 = (byte *)((long)param_2 + uVar49);
    do {
      uVar67 = puVar50[-1];
      uVar97 = *puVar50;
      iVar1 = (uVar97 >> 0xf & 0x1fe) + (uVar67 >> 0xf & 0x1fe);
      iVar2 = (uVar97 >> 7 & 0x1fe) + (uVar67 >> 7 & 0x1fe);
      iVar3 = (uVar97 & 0xff) * 2 + (uVar67 & 0xff) * 2;
      *pbVar45 = (byte)((uint)*pbVar45 +
                        (iVar2 * -0x4a89 + iVar1 * -0x25f7 + iVar3 * 0x7080 + 0x2020000U >> 0x12) +
                        1 >> 1);
      *pbVar46 = (byte)((uint)*pbVar46 +
                        (iVar2 * -0x5e34 + iVar1 * 0x7080 + iVar3 * -0x124c + 0x2020000U >> 0x12) +
                        1 >> 1);
      puVar50 = puVar50 + 2;
      lVar52 = lVar52 + -1;
      pbVar46 = pbVar46 + 1;
      pbVar45 = pbVar45 + 1;
    } while (lVar52 != 0);
    goto LAB_002331a0;
  }
  if (uVar47 < 4) {
    uVar49 = 0;
  }
  else {
    uVar49 = 0;
    if ((((uint *)((long)param_2 + uVar48) <= param_3 || (uint *)((long)param_3 + uVar48) <= param_2
         ) && (param_1 + uVar48 * 2 <= param_2 || (uint *)((long)param_2 + uVar48) <= param_1)) &&
       (param_1 + uVar48 * 2 <= param_3 || (uint *)((long)param_3 + uVar48) <= param_1)) {
      if (uVar47 < 0x10) {
        uVar51 = 0;
      }
      else {
        uVar49 = uVar48 & 0x7ffffff0;
        puVar50 = param_1;
        puVar53 = param_2;
        puVar54 = param_3;
        uVar51 = uVar49;
        do {
          uVar127 = *puVar50;
          uVar67 = puVar50[1];
          uVar138 = puVar50[2];
          uVar97 = puVar50[3];
          uVar142 = puVar50[4];
          uVar108 = puVar50[5];
          uVar145 = puVar50[6];
          uVar111 = puVar50[7];
          uVar114 = puVar50[0x10];
          uVar126 = puVar50[0x11];
          uVar116 = puVar50[0x12];
          uVar17 = puVar50[0x13];
          uVar122 = puVar50[0x14];
          uVar19 = puVar50[0x15];
          uVar124 = puVar50[0x16];
          uVar21 = puVar50[0x17];
          uVar110 = puVar50[8];
          uVar123 = puVar50[9];
          uVar113 = puVar50[10];
          uVar125 = puVar50[0xb];
          uVar115 = puVar50[0xc];
          uVar129 = puVar50[0xd];
          uVar121 = puVar50[0xe];
          uVar140 = puVar50[0xf];
          uVar156 = puVar50[0x18];
          uVar96 = puVar50[0x19];
          uVar29 = puVar50[0x1a];
          uVar107 = puVar50[0x1b];
          uVar155 = puVar50[0x1c];
          uVar148 = puVar50[0x1d];
          uVar30 = puVar50[0x1e];
          uVar149 = puVar50[0x1f];
          uVar118 = CONCAT15((char)((uVar29 >> 0xf) >> 8),
                             CONCAT14((char)(uVar29 >> 0xf),(uint)((ushort)(uVar156 >> 0xf) & 0x1fe)
                                     )) & 0x1feffffffff;
          uVar43 = (ushort)(uVar155 >> 0xf) & 0x1fe;
          auVar119._0_12_ = ZEXT212(uVar43) << 0x40;
          auVar119[0xc] = (byte)(uVar30 >> 0xf) & 0xfe;
          auVar119[0xd] = (byte)((uVar30 >> 0xf) >> 8) & 1;
          uVar56 = CONCAT15((char)((uVar138 >> 0xf) >> 8),
                            CONCAT14((char)(uVar138 >> 0xf),(uint)((ushort)(uVar127 >> 0xf) & 0x1fe)
                                    )) & 0x1feffffffff;
          uVar44 = (ushort)(uVar142 >> 0xf) & 0x1fe;
          auVar99._0_12_ = ZEXT212(uVar44) << 0x40;
          auVar99[0xc] = (byte)(uVar145 >> 0xf) & 0xfe;
          auVar99[0xd] = (byte)((uVar145 >> 0xf) >> 8) & 1;
          iVar55 = (uint)((ushort)(uVar67 >> 0xf) & 0x1fe) + (int)uVar56;
          iVar65 = (uint)((ushort)(uVar97 >> 0xf) & 0x1fe) + (uint)(ushort)(uVar56 >> 0x20);
          iVar66 = (uint)((ushort)(uVar108 >> 0xf) & 0x1fe) + (uint)uVar44;
          uVar8 = (uint)((ushort)(uVar111 >> 0xf) & 0x1fe) + (uint)auVar99._12_2_;
          iVar24 = (uint)((ushort)(uVar96 >> 0xf) & 0x1fe) + (int)uVar118;
          iVar25 = (uint)((ushort)(uVar107 >> 0xf) & 0x1fe) + (uint)(ushort)(uVar118 >> 0x20);
          iVar26 = (uint)((ushort)(uVar148 >> 0xf) & 0x1fe) + (uint)uVar43;
          uVar68 = (uint)((ushort)(uVar149 >> 0xf) & 0x1fe) + (uint)auVar119._12_2_;
          iVar150 = (uint)(CONCAT11((char)(uint3)(uVar126 >> 0x17),(char)(uVar126 >> 0xf)) & 0x1fe)
                    + (uint)((ushort)(uVar114 >> 0xf) & 0x1fe);
          iVar151 = (uint)(CONCAT11((char)(uint3)(uVar17 >> 0x17),(char)(uVar17 >> 0xf)) & 0x1fe) +
                    (uint)((ushort)(uVar116 >> 0xf) & 0x1fe);
          iVar152 = (uint)(CONCAT11((char)(uint3)(uVar19 >> 0x17),(char)(uVar19 >> 0xf)) & 0x1fe) +
                    (uint)((ushort)(uVar122 >> 0xf) & 0x1fe);
          iVar153 = (uint)(CONCAT11((char)(uint3)(uVar21 >> 0x17),(char)(uVar21 >> 0xf)) & 0x1fe) +
                    (uint)((ushort)(uVar124 >> 0xf) & 0x1fe);
          uVar78 = (uint)((ushort)(uVar127 >> 7) & 0x1fe);
          uVar81 = (uint)((ushort)(uVar142 >> 7) & 0x1fe);
          uVar154 = (uint)((ushort)(uVar129 >> 0xf) & 0x1fe);
          uVar147 = (uint)((ushort)(uVar156 >> 7) & 0x1fe);
          uVar75 = (uint)((ushort)(uVar155 >> 7) & 0x1fe);
          uVar144 = (uint)((ushort)(uVar114 >> 7) & 0x1fe);
          uVar146 = (uint)((ushort)(uVar122 >> 7) & 0x1fe);
          uVar94 = (uint)((ushort)(uVar110 >> 7) & 0x1fe);
          uVar95 = (uint)((ushort)(uVar115 >> 7) & 0x1fe);
          uVar130 = (uint)((ushort)(uVar67 >> 7) & 0x1fe);
          uVar141 = (uint)((ushort)(uVar108 >> 7) & 0x1fe);
          uVar92 = (uint)((ushort)(uVar96 >> 7) & 0x1fe);
          uVar93 = (uint)((ushort)(uVar148 >> 7) & 0x1fe);
          uVar90 = (uint)((ushort)(uVar126 >> 7) & 0x1fe);
          uVar91 = (uint)((ushort)(uVar19 >> 7) & 0x1fe);
          uVar84 = (uint)((ushort)(uVar123 >> 7) & 0x1fe);
          uVar87 = (uint)((ushort)(uVar129 >> 7) & 0x1fe);
          iVar69 = uVar90 + uVar144;
          iVar70 = (uint)((ushort)(CONCAT15((char)((uVar17 >> 7) >> 8),
                                            CONCAT14((char)(uVar17 >> 7),uVar90)) >> 0x20) & 0x1fe)
                   + (uint)((ushort)(CONCAT15((char)((uVar116 >> 7) >> 8),
                                              CONCAT14((char)(uVar116 >> 7),uVar144)) >> 0x20) &
                           0x1fe);
          iVar71 = uVar91 + uVar146;
          iVar72 = (uint)((ushort)(CONCAT15((char)((uVar21 >> 7) >> 8),
                                            CONCAT14((char)(uVar21 >> 7),uVar91)) >> 0x20) & 0x1fe)
                   + (uint)((ushort)(CONCAT15((char)((uVar124 >> 7) >> 8),
                                              CONCAT14((char)(uVar124 >> 7),uVar146)) >> 0x20) &
                           0x1fe);
          iVar73 = uVar92 + uVar147;
          iVar74 = (uint)((ushort)(CONCAT15((char)((uVar107 >> 7) >> 8),
                                            CONCAT14((char)(uVar107 >> 7),uVar92)) >> 0x20) & 0x1fe)
                   + (uint)((ushort)(CONCAT15((char)((uVar29 >> 7) >> 8),
                                              CONCAT14((char)(uVar29 >> 7),uVar147)) >> 0x20) &
                           0x1fe);
          iVar76 = uVar93 + uVar75;
          iVar77 = (uint)((ushort)(CONCAT15((char)((uVar149 >> 7) >> 8),
                                            CONCAT14((char)(uVar149 >> 7),uVar93)) >> 0x20) & 0x1fe)
                   + (uint)((ushort)(CONCAT15((char)((uVar30 >> 7) >> 8),
                                              CONCAT14((char)(uVar30 >> 7),uVar75)) >> 0x20) & 0x1fe
                           );
          iVar79 = uVar130 + uVar78;
          iVar80 = (uint)((ushort)(CONCAT15((char)((uVar97 >> 7) >> 8),
                                            CONCAT14((char)(uVar97 >> 7),uVar130)) >> 0x20) & 0x1fe)
                   + (uint)((ushort)(CONCAT15((char)((uVar138 >> 7) >> 8),
                                              CONCAT14((char)(uVar138 >> 7),uVar78)) >> 0x20) &
                           0x1fe);
          iVar82 = uVar141 + uVar81;
          iVar83 = (uint)((ushort)(CONCAT15((char)((uVar111 >> 7) >> 8),
                                            CONCAT14((char)(uVar111 >> 7),uVar141)) >> 0x20) & 0x1fe
                         ) + (uint)((ushort)(CONCAT15((char)((uVar145 >> 7) >> 8),
                                                      CONCAT14((char)(uVar145 >> 7),uVar81)) >> 0x20
                                            ) & 0x1fe);
          iVar39 = (uint)(CONCAT11((char)(uint3)(uVar123 >> 0x17),(char)(uVar123 >> 0xf)) & 0x1fe) +
                   (uint)((ushort)(uVar110 >> 0xf) & 0x1fe);
          iVar40 = (uint)(CONCAT11((char)(uint3)(uVar125 >> 0x17),(char)(uVar125 >> 0xf)) & 0x1fe) +
                   (uint)((ushort)(uVar113 >> 0xf) & 0x1fe);
          iVar41 = uVar154 + ((ushort)(uVar115 >> 0xf) & 0x1fe);
          iVar42 = (uint)((ushort)(CONCAT15((char)((uVar140 >> 0xf) >> 8),
                                            CONCAT14((char)(uVar140 >> 0xf),uVar154)) >> 0x20) &
                         0x1fe) + (uint)((ushort)(uVar121 >> 0xf) & 0x1fe);
          uVar144 = (uint)((short)uVar127 * 2 & 0x1fe);
          uVar146 = (uint)((short)uVar142 * 2 & 0x1fe);
          uVar155 = (uint)((short)uVar155 * 2 & 0x1fe);
          uVar114 = (uint)((short)uVar114 * 2 & 0x1fe);
          uVar122 = (uint)((short)uVar122 * 2 & 0x1fe);
          iVar85 = uVar84 + uVar94;
          iVar86 = (uint)((ushort)(CONCAT15((char)((uVar125 >> 7) >> 8),
                                            CONCAT14((char)(uVar125 >> 7),uVar84)) >> 0x20) & 0x1fe)
                   + (uint)((ushort)(CONCAT15((char)((uVar113 >> 7) >> 8),
                                              CONCAT14((char)(uVar113 >> 7),uVar94)) >> 0x20) &
                           0x1fe);
          iVar88 = uVar87 + uVar95;
          iVar89 = (uint)((ushort)(CONCAT15((char)((uVar140 >> 7) >> 8),
                                            CONCAT14((char)(uVar140 >> 7),uVar87)) >> 0x20) & 0x1fe)
                   + (uint)((ushort)(CONCAT15((char)((uVar121 >> 7) >> 8),
                                              CONCAT14((char)(uVar121 >> 7),uVar95)) >> 0x20) &
                           0x1fe);
          uVar56 = CONCAT15((char)(uVar97 * 2 >> 8),
                            CONCAT14((char)(uVar97 * 2),(uint)((short)uVar67 * 2 & 0x1fe))) &
                   0x1feffffffff;
          uVar43 = (short)uVar108 * 2 & 0x1ff;
          auVar131._0_12_ = ZEXT212(uVar43) << 0x40;
          auVar131[0xc] = (undefined1)(uVar111 * 2);
          auVar131[0xd] = (byte)(uVar111 * 2 >> 8) & 1;
          iVar1 = (uint)((short)uVar123 * 2 & 0x1fe) + (uint)((short)uVar110 * 2 & 0x1fe);
          iVar2 = (uint)((short)uVar125 * 2 & 0x1fe) + (uint)((short)uVar113 * 2 & 0x1fe);
          iVar3 = (uint)((short)uVar129 * 2 & 0x1fe) + (uint)((short)uVar115 * 2 & 0x1fe);
          iVar5 = (uint)((short)uVar140 * 2 & 0x1fe) + (uint)((short)uVar121 * 2 & 0x1fe);
          iVar98 = ((short)uVar126 * 2 & 0x1fe) + uVar114;
          iVar109 = (uint)((short)uVar17 * 2 & 0x1fe) +
                    (uint)((ushort)(CONCAT15((char)(uVar116 * 2 >> 8),
                                             CONCAT14((char)(uVar116 * 2),uVar114)) >> 0x20) & 0x1fe
                          );
          iVar112 = ((short)uVar19 * 2 & 0x1fe) + uVar122;
          iVar13 = (uint)((short)uVar21 * 2 & 0x1fe) +
                   (uint)((ushort)(CONCAT15((char)(uVar124 * 2 >> 8),
                                            CONCAT14((char)(uVar124 * 2),uVar122)) >> 0x20) & 0x1fe)
          ;
          iVar16 = (uint)((short)uVar96 * 2 & 0x1fe) + (uint)((short)uVar156 * 2 & 0x1fe);
          iVar18 = (uint)((short)uVar107 * 2 & 0x1fe) + (uint)((short)uVar29 * 2 & 0x1fe);
          iVar20 = ((short)uVar148 * 2 & 0x1fe) + uVar155;
          iVar22 = (uint)((short)uVar149 * 2 & 0x1fe) +
                   (uint)((ushort)(CONCAT15((char)(uVar30 * 2 >> 8),
                                            CONCAT14((char)(uVar30 * 2),uVar155)) >> 0x20) & 0x1fe);
          iVar128 = (int)uVar56 + uVar144;
          iVar139 = (uint)(ushort)(uVar56 >> 0x20) +
                    (uint)((ushort)(CONCAT15((char)(uVar138 * 2 >> 8),
                                             CONCAT14((char)(uVar138 * 2),uVar144)) >> 0x20) & 0x1fe
                          );
          iVar143 = uVar43 + uVar146;
          uVar146 = (uint)auVar131._12_2_ +
                    (uint)((ushort)(CONCAT15((char)(uVar145 * 2 >> 8),
                                             CONCAT14((char)(uVar145 * 2),uVar146)) >> 0x20) & 0x1fe
                          );
          uVar114 = iVar69 * 0x3ffb577 + iVar150 * 0x3ffda09 + iVar98 * 0x7080 + 0x2020000;
          uVar122 = iVar70 * 0x3ffb577 + iVar151 * 0x3ffda09 + iVar109 * 0x7080 + 0x2020000;
          uVar126 = iVar71 * 0x3ffb577 + iVar152 * 0x3ffda09 + iVar112 * 0x7080 + 0x2020000;
          uVar19 = iVar72 * 0x3ffb577 + iVar153 * 0x3ffda09 + iVar13 * 0x7080 + 0x2020000;
          uVar156 = iVar73 * 0x3ffb577 + iVar24 * 0x3ffda09 + iVar16 * 0x7080 + 0x2020000;
          uVar29 = iVar74 * 0x3ffb577 + iVar25 * 0x3ffda09 + iVar18 * 0x7080 + 0x2020000;
          uVar155 = iVar76 * 0x3ffb577 + iVar26 * 0x3ffda09 + iVar20 * 0x7080 + 0x2020000;
          uVar30 = iVar77 * 0x3ffb577 + uVar68 * 0x3ffda09 + iVar22 * 0x7080 + 0x2020000;
          uVar96 = iVar85 * 0x3ffb577 + iVar39 * 0x3ffda09 + iVar1 * 0x7080 + 0x2020000;
          uVar107 = iVar86 * 0x3ffb577 + iVar40 * 0x3ffda09 + iVar2 * 0x7080 + 0x2020000;
          uVar110 = iVar88 * 0x3ffb577 + iVar41 * 0x3ffda09 + iVar3 * 0x7080 + 0x2020000;
          uVar113 = iVar89 * 0x3ffb577 + iVar42 * 0x3ffda09 + iVar5 * 0x7080 + 0x2020000;
          uVar115 = iVar85 * 0x3ffa1cc + iVar39 * 0x7080 + iVar1 * 0x3ffedb4 + 0x2020000;
          uVar121 = iVar86 * 0x3ffa1cc + iVar40 * 0x7080 + iVar2 * 0x3ffedb4 + 0x2020000;
          uVar123 = iVar88 * 0x3ffa1cc + iVar41 * 0x7080 + iVar3 * 0x3ffedb4 + 0x2020000;
          uVar125 = iVar89 * 0x3ffa1cc + iVar42 * 0x7080 + iVar5 * 0x3ffedb4 + 0x2020000;
          uVar129 = iVar69 * 0x3ffa1cc + iVar150 * 0x7080 + iVar98 * 0x3ffedb4 + 0x2020000;
          uVar140 = iVar70 * 0x3ffa1cc + iVar151 * 0x7080 + iVar109 * 0x3ffedb4 + 0x2020000;
          uVar144 = iVar71 * 0x3ffa1cc + iVar152 * 0x7080 + iVar112 * 0x3ffedb4 + 0x2020000;
          uVar147 = iVar72 * 0x3ffa1cc + iVar153 * 0x7080 + iVar13 * 0x3ffedb4 + 0x2020000;
          uVar67 = iVar73 * 0x3ffa1cc + iVar24 * 0x7080 + iVar16 * 0x3ffedb4 + 0x2020000;
          uVar97 = iVar74 * 0x3ffa1cc + iVar25 * 0x7080 + iVar18 * 0x3ffedb4 + 0x2020000;
          uVar108 = iVar76 * 0x3ffa1cc + iVar26 * 0x7080 + iVar20 * 0x3ffedb4 + 0x2020000;
          uVar111 = iVar77 * 0x3ffa1cc + (uVar68 & 0xffff) * 0x7080 + iVar22 * 0x3ffedb4 + 0x2020000
          ;
          uVar116 = iVar79 * 0x3ffa1cc + iVar55 * 0x7080 + iVar128 * 0x3ffedb4 + 0x2020000;
          uVar124 = iVar80 * 0x3ffa1cc + iVar65 * 0x7080 + iVar139 * 0x3ffedb4 + 0x2020000;
          uVar17 = iVar82 * 0x3ffa1cc + iVar66 * 0x7080 + iVar143 * 0x3ffedb4 + 0x2020000;
          uVar21 = iVar83 * 0x3ffa1cc + (uVar8 & 0xffff) * 0x7080 + uVar146 * 0x3ffedb4 + 0x2020000;
          auVar31._4_2_ =
               (ushort)((uint)(iVar80 * 0x3ffb577 + iVar65 * 0x3ffda09 + iVar139 * 0x7080 +
                              0x2020000) >> 0x12);
          auVar31._0_4_ =
               iVar79 * 0x3ffb577 + iVar55 * 0x3ffda09 + iVar128 * 0x7080 + 0x2020000U >> 0x12;
          auVar31._6_2_ = 0;
          auVar31._8_4_ =
               iVar82 * 0x3ffb577 + iVar66 * 0x3ffda09 + iVar143 * 0x7080 + 0x2020000U >> 0x12;
          auVar31._12_4_ =
               iVar83 * 0x3ffb577 + uVar8 * 0x3ffda09 + (uVar146 & 0xffff) * 0x7080 + 0x2020000 >>
               0x12;
          auVar33[1] = (byte)(uVar96 >> 0x1a);
          auVar33[0] = (char)(uVar96 >> 0x12);
          auVar33._2_2_ = 0;
          auVar33[4] = (char)(uVar107 >> 0x12);
          auVar33[5] = (byte)(uVar107 >> 0x1a);
          auVar33._6_2_ = 0;
          auVar33[8] = (char)(uVar110 >> 0x12);
          auVar33[9] = (byte)(uVar110 >> 0x1a);
          auVar33._10_2_ = 0;
          auVar33[0xc] = (char)(uVar113 >> 0x12);
          auVar33[0xd] = (byte)(uVar113 >> 0x1a);
          auVar33._14_2_ = 0;
          auVar35[1] = (byte)(uVar114 >> 0x1a);
          auVar35[0] = (char)(uVar114 >> 0x12);
          auVar35._2_2_ = 0;
          auVar35[4] = (char)(uVar122 >> 0x12);
          auVar35[5] = (byte)(uVar122 >> 0x1a);
          auVar35._6_2_ = 0;
          auVar35[8] = (char)(uVar126 >> 0x12);
          auVar35[9] = (byte)(uVar126 >> 0x1a);
          auVar35._10_2_ = 0;
          auVar35[0xc] = (char)(uVar19 >> 0x12);
          auVar35[0xd] = (byte)(uVar19 >> 0x1a);
          auVar35._14_2_ = 0;
          auVar37[1] = (byte)(uVar156 >> 0x1a);
          auVar37[0] = (char)(uVar156 >> 0x12);
          auVar37._2_2_ = 0;
          auVar37[4] = (char)(uVar29 >> 0x12);
          auVar37[5] = (byte)(uVar29 >> 0x1a);
          auVar37._6_2_ = 0;
          auVar37[8] = (char)(uVar155 >> 0x12);
          auVar37[9] = (byte)(uVar155 >> 0x1a);
          auVar37._10_2_ = 0;
          auVar37[0xc] = (char)(uVar30 >> 0x12);
          auVar37[0xd] = (byte)(uVar30 >> 0x1a);
          auVar37._14_2_ = 0;
          auVar103 = a64_TBL(ZEXT816(0),auVar31,auVar33,auVar35,auVar37,auVar106);
          *(long *)(puVar53 + 2) = auVar103._8_8_;
          *(long *)puVar53 = auVar103._0_8_;
          auVar6[1] = (byte)(uVar116 >> 0x1a);
          auVar6[0] = (char)(uVar116 >> 0x12);
          auVar6._2_2_ = 0;
          auVar6[4] = (char)(uVar124 >> 0x12);
          auVar6[5] = (byte)(uVar124 >> 0x1a);
          auVar6._6_2_ = 0;
          auVar6[8] = (char)(uVar17 >> 0x12);
          auVar6[9] = (byte)(uVar17 >> 0x1a);
          auVar6._10_2_ = 0;
          auVar6[0xc] = (char)(uVar21 >> 0x12);
          auVar6[0xd] = (byte)(uVar21 >> 0x1a);
          auVar6._14_2_ = 0;
          auVar9[1] = (byte)(uVar115 >> 0x1a);
          auVar9[0] = (char)(uVar115 >> 0x12);
          auVar9._2_2_ = 0;
          auVar9[4] = (char)(uVar121 >> 0x12);
          auVar9[5] = (byte)(uVar121 >> 0x1a);
          auVar9._6_2_ = 0;
          auVar9[8] = (char)(uVar123 >> 0x12);
          auVar9[9] = (byte)(uVar123 >> 0x1a);
          auVar9._10_2_ = 0;
          auVar9[0xc] = (char)(uVar125 >> 0x12);
          auVar9[0xd] = (byte)(uVar125 >> 0x1a);
          auVar9._14_2_ = 0;
          auVar11[1] = (byte)(uVar129 >> 0x1a);
          auVar11[0] = (char)(uVar129 >> 0x12);
          auVar11._2_2_ = 0;
          auVar11[4] = (char)(uVar140 >> 0x12);
          auVar11[5] = (byte)(uVar140 >> 0x1a);
          auVar11._6_2_ = 0;
          auVar11[8] = (char)(uVar144 >> 0x12);
          auVar11[9] = (byte)(uVar144 >> 0x1a);
          auVar11._10_2_ = 0;
          auVar11[0xc] = (char)(uVar147 >> 0x12);
          auVar11[0xd] = (byte)(uVar147 >> 0x1a);
          auVar11._14_2_ = 0;
          auVar14[1] = (byte)(uVar67 >> 0x1a);
          auVar14[0] = (char)(uVar67 >> 0x12);
          auVar14._2_2_ = 0;
          auVar14[4] = (char)(uVar97 >> 0x12);
          auVar14[5] = (byte)(uVar97 >> 0x1a);
          auVar14._6_2_ = 0;
          auVar14[8] = (char)(uVar108 >> 0x12);
          auVar14[9] = (byte)(uVar108 >> 0x1a);
          auVar14._10_2_ = 0;
          auVar14[0xc] = (char)(uVar111 >> 0x12);
          auVar14[0xd] = (byte)(uVar111 >> 0x1a);
          auVar14._14_2_ = 0;
          auVar103 = a64_TBL(ZEXT816(0),auVar6,auVar9,auVar11,auVar14,auVar106);
          *(long *)(puVar54 + 2) = auVar103._8_8_;
          *(long *)puVar54 = auVar103._0_8_;
          puVar50 = puVar50 + 0x20;
          uVar51 = uVar51 - 0x10;
          puVar53 = puVar53 + 4;
          puVar54 = puVar54 + 4;
        } while (uVar51 != 0);
        if (uVar49 == uVar48) goto LAB_002331a0;
        uVar51 = uVar49;
        if ((uVar47 & 0xc) == 0) goto LAB_00233020;
      }
      uVar49 = uVar48 & 0x7ffffffc;
      lVar52 = uVar51 - uVar49;
      pbVar46 = (byte *)((long)param_3 + uVar51);
      pbVar45 = (byte *)((long)param_2 + uVar51);
      puVar50 = param_1 + uVar51 * 2;
      do {
        uVar97 = *puVar50;
        uVar116 = puVar50[1];
        uVar108 = puVar50[2];
        uVar122 = puVar50[3];
        uVar111 = puVar50[4];
        uVar124 = puVar50[5];
        uVar114 = puVar50[6];
        uVar126 = puVar50[7];
        puVar50 = puVar50 + 8;
        uVar56 = CONCAT15((char)((uVar108 >> 0xf) >> 8),
                          CONCAT14((char)(uVar108 >> 0xf),(uint)((ushort)(uVar97 >> 0xf) & 0x1fe)))
                 & 0x1feffffffff;
        uVar43 = (ushort)(uVar111 >> 0xf) & 0x1fe;
        auVar58._0_12_ = ZEXT212(uVar43) << 0x40;
        auVar58[0xc] = (byte)(uVar114 >> 0xf) & 0xfe;
        auVar58[0xd] = (byte)((uVar114 >> 0xf) >> 8) & 1;
        uVar118 = CONCAT15((char)((uVar122 >> 0xf) >> 8),
                           CONCAT14((char)(uVar122 >> 0xf),(uint)((ushort)(uVar116 >> 0xf) & 0x1fe))
                          ) & 0x1feffffffff;
        uVar44 = (ushort)(uVar124 >> 0xf) & 0x1fe;
        auVar132._0_12_ = ZEXT212(uVar44) << 0x40;
        auVar132[0xc] = (byte)(uVar126 >> 0xf) & 0xfe;
        auVar132[0xd] = (byte)((uVar126 >> 0xf) >> 8) & 1;
        iVar55 = (int)uVar118 + (int)uVar56;
        iVar65 = (uint)(ushort)(uVar118 >> 0x20) + (uint)(ushort)(uVar56 >> 0x20);
        iVar66 = (uint)uVar44 + (uint)uVar43;
        uVar67 = (uint)auVar132._12_2_ + (uint)auVar58._12_2_;
        iVar1 = (uint)((ushort)(uVar116 >> 7) & 0x1fe) + (uint)((ushort)(uVar97 >> 7) & 0x1fe);
        iVar2 = (uint)((ushort)(uVar122 >> 7) & 0x1fe) + (uint)((ushort)(uVar108 >> 7) & 0x1fe);
        iVar3 = (uint)((ushort)(uVar124 >> 7) & 0x1fe) + (uint)((ushort)(uVar111 >> 7) & 0x1fe);
        iVar5 = (uint)((ushort)(uVar126 >> 7) & 0x1fe) + (uint)((ushort)(uVar114 >> 7) & 0x1fe);
        uVar56 = CONCAT15((char)(uVar122 * 2 >> 8),
                          CONCAT14((char)(uVar122 * 2),(uint)((short)uVar116 * 2 & 0x1fe))) &
                 0x1feffffffff;
        uVar43 = (short)uVar124 * 2 & 0x1ff;
        auVar100._0_12_ = ZEXT212(uVar43) << 0x40;
        auVar100[0xc] = (undefined1)(uVar126 * 2);
        auVar100[0xd] = (byte)(uVar126 * 2 >> 8) & 1;
        iVar98 = (int)uVar56 + (uint)((short)uVar97 * 2 & 0x1fe);
        iVar109 = (uint)(ushort)(uVar56 >> 0x20) + (uint)((short)uVar108 * 2 & 0x1fe);
        iVar112 = (uint)uVar43 + (uint)((short)uVar111 * 2 & 0x1fe);
        uVar97 = (uint)auVar100._12_2_ + (uint)((short)uVar114 * 2 & 0x1fe);
        *(uint *)pbVar45 =
             CONCAT13((char)(ushort)(iVar5 * 0x3ffb577 + uVar67 * 0x3ffda09 +
                                     (uVar97 & 0xffff) * 0x7080 + 0x2020000 >> 0x12),
                      CONCAT12((char)(ushort)((uint)(iVar3 * 0x3ffb577 + iVar66 * 0x3ffda09 +
                                                     iVar112 * 0x7080 + 0x2020000) >> 0x12),
                               CONCAT11((char)(ushort)((uint)(iVar2 * 0x3ffb577 + iVar65 * 0x3ffda09
                                                              + iVar109 * 0x7080 + 0x2020000) >>
                                                      0x12),
                                        (char)(ushort)((uint)(iVar1 * 0x3ffb577 + iVar55 * 0x3ffda09
                                                              + iVar98 * 0x7080 + 0x2020000) >> 0x12
                                                      ))));
        pbVar45 = pbVar45 + 4;
        *(uint *)pbVar46 =
             CONCAT13((char)(ushort)(iVar5 * 0x3ffa1cc + (uVar67 & 0xffff) * 0x7080 +
                                     uVar97 * 0x3ffedb4 + 0x2020000 >> 0x12),
                      CONCAT12((char)(ushort)((uint)(iVar3 * 0x3ffa1cc + iVar66 * 0x7080 +
                                                     iVar112 * 0x3ffedb4 + 0x2020000) >> 0x12),
                               CONCAT11((char)(ushort)((uint)(iVar2 * 0x3ffa1cc + iVar65 * 0x7080 +
                                                              iVar109 * 0x3ffedb4 + 0x2020000) >>
                                                      0x12),
                                        (char)(ushort)((uint)(iVar1 * 0x3ffa1cc + iVar55 * 0x7080 +
                                                              iVar98 * 0x3ffedb4 + 0x2020000) >>
                                                      0x12))));
        pbVar46 = pbVar46 + 4;
        lVar52 = lVar52 + 4;
      } while (lVar52 != 0);
      if (uVar49 == uVar48) goto LAB_002331a0;
    }
  }
LAB_00233020:
  lVar52 = uVar48 - uVar49;
  puVar50 = param_1 + uVar49 * 2 + 1;
  pbVar46 = (byte *)((long)param_3 + uVar49);
  pbVar45 = (byte *)((long)param_2 + uVar49);
  do {
    uVar67 = puVar50[-1];
    uVar97 = *puVar50;
    iVar1 = (uVar97 >> 0xf & 0x1fe) + (uVar67 >> 0xf & 0x1fe);
    iVar2 = (uVar97 >> 7 & 0x1fe) + (uVar67 >> 7 & 0x1fe);
    iVar3 = (uVar97 & 0xff) * 2 + (uVar67 & 0xff) * 2;
    *pbVar45 = (byte)(iVar2 * 0x3ffb577 + iVar1 * 0x3ffda09 + iVar3 * 0x7080 + 0x2020000U >> 0x12);
    *pbVar46 = (byte)(iVar2 * 0x3ffa1cc + iVar1 * 0x7080 + iVar3 * 0x3ffedb4 + 0x2020000U >> 0x12);
    puVar50 = puVar50 + 2;
    lVar52 = lVar52 + -1;
    pbVar46 = pbVar46 + 1;
    pbVar45 = pbVar45 + 1;
  } while (lVar52 != 0);
LAB_002331a0:
  if ((param_4 & 1) != 0) {
    uVar108 = param_1[uVar47 << 1];
    uVar67 = uVar108 >> 0xe & 0x3fc;
    uVar97 = uVar108 >> 6 & 0x3fc;
    uVar111 = uVar97 * -0x4a89 + uVar67 * -0x25f7 + (uVar108 & 0xff) * 0x1c200 + 0x2020000 >> 0x12;
    uVar67 = uVar97 * -0x5e34 + uVar67 * 0x7080 + (uVar108 & 0xff) * -0x4930 + 0x2020000 >> 0x12;
    if (param_5 == 0) {
      *(byte *)((long)param_2 + (ulong)uVar47) =
           (byte)(uVar111 + *(byte *)((long)param_2 + (ulong)uVar47) + 1 >> 1);
      *(byte *)((long)param_3 + (ulong)uVar47) =
           (byte)(uVar67 + *(byte *)((long)param_3 + (ulong)uVar47) + 1 >> 1);
    }
    else {
      *(byte *)((long)param_2 + (ulong)uVar47) = (byte)uVar111;
      *(byte *)((long)param_3 + (ulong)uVar47) = (byte)uVar67;
    }
  }
  return;
}



/* Entry: 002339f8; end: 00233d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002339f8(ushort *param_1,ushort *param_2,ushort *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  ushort *puVar17;
  undefined4 *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ushort uVar23;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  undefined1 auVar24 [16];
  ushort uVar28;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ushort uVar35;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ushort uVar46;
  ushort uVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  undefined1 auVar63 [16];
  
  auVar10 = _UNK_007eeb70;
  if ((int)param_4 < 1) {
    return;
  }
  uVar11 = (ulong)param_4;
  if (param_4 < 5) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if ((((ushort *)((long)param_2 + uVar11) <= param_3 ||
          (ushort *)((long)param_3 + uVar11) <= param_2) &&
        (param_1 + uVar11 * 4 + -1 <= param_2 || (ushort *)((long)param_2 + uVar11) <= param_1)) &&
       (param_1 + uVar11 * 4 + -1 <= param_3 || (ushort *)((long)param_3 + uVar11) <= param_1)) {
      if (param_4 < 0x11) {
        lVar13 = 0;
      }
      else {
        uVar3 = 0x10;
        if ((param_4 & 0xf) != 0) {
          uVar3 = uVar11 & 0xf;
        }
        lVar13 = uVar11 - uVar3;
        puVar17 = param_1;
        puVar19 = param_2;
        puVar20 = param_3;
        lVar12 = lVar13;
        do {
          uVar50 = *puVar17;
          uVar54 = puVar17[1];
          uVar58 = puVar17[2];
          uVar51 = puVar17[4];
          uVar55 = puVar17[5];
          uVar59 = puVar17[6];
          uVar52 = puVar17[8];
          uVar56 = puVar17[9];
          uVar60 = puVar17[10];
          uVar53 = puVar17[0xc];
          uVar57 = puVar17[0xd];
          uVar61 = puVar17[0xe];
          uVar62 = puVar17[0x16];
          uVar23 = puVar17[0x20];
          uVar32 = puVar17[0x21];
          uVar40 = puVar17[0x22];
          uVar25 = puVar17[0x24];
          uVar33 = puVar17[0x25];
          uVar41 = puVar17[0x26];
          uVar26 = puVar17[0x28];
          uVar34 = puVar17[0x29];
          uVar42 = puVar17[0x2a];
          uVar27 = puVar17[0x2c];
          uVar35 = puVar17[0x2d];
          uVar46 = puVar17[0x2e];
          uVar28 = puVar17[0x34];
          uVar47 = puVar17[0x36];
          auVar43._0_4_ =
               (int)((uint)puVar17[0x11] * -0x4a89 + (uint)puVar17[0x10] * -0x25f7 +
                     ((uint)(CONCAT24(uVar62,CONCAT22(puVar17[0x12],uVar61)) >> 0x10) & 0xffff) *
                     0x7080 + 0x2020000) >> 0x12;
          auVar43._4_4_ =
               (int)((uint)puVar17[0x15] * -0x4a89 + (uint)puVar17[0x14] * -0x25f7 +
                     (uint)uVar62 * 0x7080 + 0x2020000) >> 0x12;
          auVar43._8_4_ =
               (int)((uint)puVar17[0x19] * -0x4a89 + (uint)puVar17[0x18] * -0x25f7 +
                     (uint)puVar17[0x1a] * 0x7080 + 0x2020000) >> 0x12;
          auVar43._12_4_ =
               (int)((uint)puVar17[0x1d] * -0x4a89 + (uint)puVar17[0x1c] * -0x25f7 +
                     (uint)puVar17[0x1e] * 0x7080 + 0x2020000) >> 0x12;
          auVar36._0_4_ =
               (int)((uint)puVar17[0x31] * -0x4a89 + (uint)puVar17[0x30] * -0x25f7 +
                     ((uint)(CONCAT24(uVar47,CONCAT22(puVar17[0x32],uVar46)) >> 0x10) & 0xffff) *
                     0x7080 + 0x2020000) >> 0x12;
          auVar36._4_4_ =
               (int)((uint)puVar17[0x35] * -0x4a89 + (uint)uVar28 * -0x25f7 + (uint)uVar47 * 0x7080
                    + 0x2020000) >> 0x12;
          auVar36._8_4_ =
               (int)((uint)puVar17[0x39] * -0x4a89 + (uint)puVar17[0x38] * -0x25f7 +
                     (uint)puVar17[0x3a] * 0x7080 + 0x2020000) >> 0x12;
          auVar36._12_4_ =
               (int)((uint)puVar17[0x3d] * -0x4a89 + (uint)puVar17[0x3c] * -0x25f7 +
                     (uint)puVar17[0x3e] * 0x7080 + 0x2020000) >> 0x12;
          auVar44 = NEON_smax(auVar43,ZEXT216(0),4);
          auVar49._8_8_ = 0xff000000ff;
          auVar49._0_8_ = 0xff000000ff;
          auVar21 = NEON_smin(auVar44,auVar49,4);
          auVar49 = NEON_smax(auVar36,ZEXT216(0),4);
          auVar44._8_8_ = 0xff000000ff;
          auVar44._0_8_ = 0xff000000ff;
          auVar22 = NEON_smin(auVar49,auVar44,4);
          auVar37._0_4_ =
               (int)((uint)uVar54 * -0x4a89 + (uint)uVar50 * -0x25f7 + (uint)uVar58 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar37._4_4_ =
               (int)((uint)uVar55 * -0x4a89 + (uint)uVar51 * -0x25f7 + (uint)uVar59 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar37._8_4_ =
               (int)((uint)uVar56 * -0x4a89 + (uint)uVar52 * -0x25f7 + (uint)uVar60 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar37._12_4_ =
               (int)((uint)uVar57 * -0x4a89 + (uint)uVar53 * -0x25f7 + (uint)uVar61 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar49 = NEON_smax(auVar37,ZEXT216(0),4);
          auVar45._8_8_ = 0xff000000ff;
          auVar45._0_8_ = 0xff000000ff;
          auVar49 = NEON_smin(auVar49,auVar45,4);
          auVar38._0_4_ =
               (int)((uint)uVar32 * -0x4a89 + (uint)uVar23 * -0x25f7 + (uint)uVar40 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar38._4_4_ =
               (int)((uint)uVar33 * -0x4a89 + (uint)uVar25 * -0x25f7 + (uint)uVar41 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar38._8_4_ =
               (int)((uint)uVar34 * -0x4a89 + (uint)uVar26 * -0x25f7 + (uint)uVar42 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar38._12_4_ =
               (int)((uint)uVar35 * -0x4a89 + (uint)uVar27 * -0x25f7 + (uint)uVar46 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar44 = NEON_smax(auVar38,ZEXT216(0),4);
          auVar63._8_8_ = 0xff000000ff;
          auVar63._0_8_ = 0xff000000ff;
          auVar44 = NEON_smin(auVar44,auVar63,4);
          auVar39._0_4_ =
               (int)((uint)puVar17[0x11] * -0x5e34 + (uint)puVar17[0x10] * 0x7080 +
                     (uint)puVar17[0x12] * -0x124c + 0x2020000) >> 0x12;
          auVar39._4_4_ =
               (int)((uint)puVar17[0x15] * -0x5e34 + (uint)puVar17[0x14] * 0x7080 +
                     (uint)uVar62 * -0x124c + 0x2020000) >> 0x12;
          auVar39._8_4_ =
               (int)((uint)puVar17[0x19] * -0x5e34 + (uint)puVar17[0x18] * 0x7080 +
                     (uint)puVar17[0x1a] * -0x124c + 0x2020000) >> 0x12;
          auVar39._12_4_ =
               (int)((uint)puVar17[0x1d] * -0x5e34 + (uint)puVar17[0x1c] * 0x7080 +
                     (uint)puVar17[0x1e] * -0x124c + 0x2020000) >> 0x12;
          auVar29._0_4_ =
               (int)((uint)puVar17[0x31] * -0x5e34 +
                     ((uint)(CONCAT24(uVar28,CONCAT22(puVar17[0x30],uVar27)) >> 0x10) & 0xffff) *
                     0x7080 + (uint)puVar17[0x32] * -0x124c + 0x2020000) >> 0x12;
          auVar29._4_4_ =
               (int)((uint)puVar17[0x35] * -0x5e34 + (uint)uVar28 * 0x7080 + (uint)uVar47 * -0x124c
                    + 0x2020000) >> 0x12;
          auVar29._8_4_ =
               (int)((uint)puVar17[0x39] * -0x5e34 + (uint)puVar17[0x38] * 0x7080 +
                     (uint)puVar17[0x3a] * -0x124c + 0x2020000) >> 0x12;
          auVar29._12_4_ =
               (int)((uint)puVar17[0x3d] * -0x5e34 + (uint)puVar17[0x3c] * 0x7080 +
                     (uint)puVar17[0x3e] * -0x124c + 0x2020000) >> 0x12;
          auVar8._12_4_ = 0x3c383430;
          auVar8._0_12_ = auVar10;
          auVar45 = a64_TBL(ZEXT816(0),auVar49,auVar21,auVar44,auVar22,auVar8);
          auVar49 = NEON_smax(auVar29,ZEXT216(0),4);
          auVar44 = NEON_smax(auVar39,ZEXT216(0),4);
          auVar21._8_8_ = 0xff000000ff;
          auVar21._0_8_ = 0xff000000ff;
          auVar63 = NEON_smin(auVar44,auVar21,4);
          auVar22._8_8_ = 0xff000000ff;
          auVar22._0_8_ = 0xff000000ff;
          auVar21 = NEON_smin(auVar49,auVar22,4);
          *(long *)(puVar19 + 4) = auVar45._8_8_;
          *(long *)puVar19 = auVar45._0_8_;
          auVar30._0_4_ =
               (int)((uint)uVar54 * -0x5e34 + (uint)uVar50 * 0x7080 + (uint)uVar58 * -0x124c +
                    0x2020000) >> 0x12;
          auVar30._4_4_ =
               (int)((uint)uVar55 * -0x5e34 + (uint)uVar51 * 0x7080 + (uint)uVar59 * -0x124c +
                    0x2020000) >> 0x12;
          auVar30._8_4_ =
               (int)((uint)uVar56 * -0x5e34 + (uint)uVar52 * 0x7080 + (uint)uVar60 * -0x124c +
                    0x2020000) >> 0x12;
          auVar30._12_4_ =
               (int)((uint)uVar57 * -0x5e34 + (uint)uVar53 * 0x7080 + (uint)uVar61 * -0x124c +
                    0x2020000) >> 0x12;
          auVar49 = NEON_smax(auVar30,ZEXT216(0),4);
          auVar6._8_8_ = 0xff000000ff;
          auVar6._0_8_ = 0xff000000ff;
          auVar44 = NEON_smin(auVar49,auVar6,4);
          auVar31._0_4_ =
               (int)((uint)uVar32 * -0x5e34 + (uint)uVar23 * 0x7080 + (uint)uVar40 * -0x124c +
                    0x2020000) >> 0x12;
          auVar31._4_4_ =
               (int)((uint)uVar33 * -0x5e34 + (uint)uVar25 * 0x7080 + (uint)uVar41 * -0x124c +
                    0x2020000) >> 0x12;
          auVar31._8_4_ =
               (int)((uint)uVar34 * -0x5e34 + (uint)uVar26 * 0x7080 + (uint)uVar42 * -0x124c +
                    0x2020000) >> 0x12;
          auVar31._12_4_ =
               (int)((uint)uVar35 * -0x5e34 + (uint)uVar27 * 0x7080 + (uint)uVar46 * -0x124c +
                    0x2020000) >> 0x12;
          auVar49 = NEON_smax(auVar31,ZEXT216(0),4);
          auVar7._8_8_ = 0xff000000ff;
          auVar7._0_8_ = 0xff000000ff;
          auVar49 = NEON_smin(auVar49,auVar7,4);
          auVar9._12_4_ = 0x3c383430;
          auVar9._0_12_ = auVar10;
          auVar49 = a64_TBL(ZEXT816(0),auVar44,auVar63,auVar49,auVar21,auVar9);
          *(long *)(puVar20 + 4) = auVar49._8_8_;
          *(long *)puVar20 = auVar49._0_8_;
          lVar12 = lVar12 + -0x10;
          puVar17 = puVar17 + 0x40;
          puVar19 = puVar19 + 8;
          puVar20 = puVar20 + 8;
        } while (lVar12 != 0);
        if (uVar3 < 5) {
          param_1 = param_1 + lVar13 * 4;
          goto LAB_00233cdc;
        }
      }
      uVar3 = 4;
      if ((param_4 & 3) != 0) {
        uVar3 = uVar11 & 3;
      }
      lVar12 = uVar3 + lVar13;
      puVar15 = (undefined4 *)((long)param_3 + lVar13);
      puVar18 = (undefined4 *)((long)param_2 + lVar13);
      puVar17 = param_1 + lVar13 * 4;
      lVar13 = uVar11 - uVar3;
      lVar12 = lVar12 - uVar11;
      param_1 = param_1 + lVar13 * 4;
      do {
        uVar23 = *puVar17;
        uVar28 = puVar17[1];
        uVar35 = puVar17[2];
        uVar25 = puVar17[4];
        uVar32 = puVar17[5];
        uVar40 = puVar17[6];
        uVar26 = puVar17[8];
        uVar33 = puVar17[9];
        uVar41 = puVar17[10];
        uVar27 = puVar17[0xc];
        uVar34 = puVar17[0xd];
        uVar42 = puVar17[0xe];
        puVar17 = puVar17 + 0x10;
        auVar48._0_4_ =
             (int)((uint)uVar28 * -0x4a89 + (uint)uVar23 * -0x25f7 + (uint)uVar35 * 0x7080 +
                  0x2020000) >> 0x12;
        auVar48._4_4_ =
             (int)((uint)uVar32 * -0x4a89 + (uint)uVar25 * -0x25f7 + (uint)uVar40 * 0x7080 +
                  0x2020000) >> 0x12;
        auVar48._8_4_ =
             (int)((uint)uVar33 * -0x4a89 + (uint)uVar26 * -0x25f7 + (uint)uVar41 * 0x7080 +
                  0x2020000) >> 0x12;
        auVar48._12_4_ =
             (int)((uint)uVar34 * -0x4a89 + (uint)uVar27 * -0x25f7 + (uint)uVar42 * 0x7080 +
                  0x2020000) >> 0x12;
        auVar49 = NEON_smax(auVar48,ZEXT216(0),4);
        auVar4._8_8_ = 0xff000000ff;
        auVar4._0_8_ = 0xff000000ff;
        auVar49 = NEON_smin(auVar49,auVar4,4);
        *puVar18 = CONCAT13(auVar49[0xc],CONCAT12(auVar49[8],CONCAT11(auVar49[4],auVar49[0])));
        puVar18 = puVar18 + 1;
        auVar24._0_4_ =
             (int)((uint)uVar28 * -0x5e34 + (uint)uVar23 * 0x7080 + (uint)uVar35 * -0x124c +
                  0x2020000) >> 0x12;
        auVar24._4_4_ =
             (int)((uint)uVar32 * -0x5e34 + (uint)uVar25 * 0x7080 + (uint)uVar40 * -0x124c +
                  0x2020000) >> 0x12;
        auVar24._8_4_ =
             (int)((uint)uVar33 * -0x5e34 + (uint)uVar26 * 0x7080 + (uint)uVar41 * -0x124c +
                  0x2020000) >> 0x12;
        auVar24._12_4_ =
             (int)((uint)uVar34 * -0x5e34 + (uint)uVar27 * 0x7080 + (uint)uVar42 * -0x124c +
                  0x2020000) >> 0x12;
        auVar49 = NEON_smax(auVar24,ZEXT216(0),4);
        auVar5._8_8_ = 0xff000000ff;
        auVar5._0_8_ = 0xff000000ff;
        auVar49 = NEON_smin(auVar49,auVar5,4);
        *puVar15 = CONCAT13(auVar49[0xc],CONCAT12(auVar49[8],CONCAT11(auVar49[4],auVar49[0])));
        puVar15 = puVar15 + 1;
        lVar12 = lVar12 + 4;
      } while (lVar12 != 0);
    }
  }
LAB_00233cdc:
  lVar12 = uVar11 - lVar13;
  puVar14 = (undefined1 *)((long)param_2 + lVar13);
  puVar16 = (undefined1 *)((long)param_3 + lVar13);
  do {
    uVar23 = *param_1;
    uVar25 = param_1[1];
    uVar26 = param_1[2];
    iVar1 = (uint)uVar25 * -0x4a89 + (uint)uVar23 * -0x25f7 + (uint)uVar26 * 0x7080 + 0x2020000;
    uVar2 = iVar1 >> 0x12 & (iVar1 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar2) {
      uVar2 = 0xff;
    }
    *puVar14 = (char)uVar2;
    iVar1 = (uint)uVar25 * -0x5e34 + (uint)uVar23 * 0x7080 + (uint)uVar26 * -0x124c + 0x2020000;
    uVar2 = iVar1 >> 0x12 & (iVar1 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar2) {
      uVar2 = 0xff;
    }
    *puVar16 = (char)uVar2;
    param_1 = param_1 + 4;
    lVar12 = lVar12 + -1;
    puVar14 = puVar14 + 1;
    puVar16 = puVar16 + 1;
  } while (lVar12 != 0);
                    /* WARNING: Read-only address (ram,0x007eeb70) is written */
  return;
}



/* Entry: 00233d70; end: 00233e27;  */

void FUN_00233d70(void)

{
  int iVar1;
  
  iVar1 = 0xaf8620;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_00af85d8 != PTR_DAT_00af8418) {
    pcRam0000000000b6d380 = FUN_002389e0;
    pcRam0000000000b6d378 = FUN_00232fe8;
    uRam0000000000b6d390 = 0x238c2c;
    uRam0000000000b6d388 = 0x238e24;
    pcRam0000000000b6d398 = FUN_002339f8;
    FUN_00248e38();
    FUN_00249c20();
  }
  PTR_LOOP_00af85d8 = PTR_DAT_00af8418;
                    /* WARNING: Could not recover jumptable at 0x0077ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_0099a598)(0xaf8620);
  return;
}



/* Entry: 00233e28; end: 0023483b;  */

void FUN_00233e28(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined8 *param_4,uint param_5)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [16];
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  undefined1 (*pauVar49) [16];
  undefined8 *puVar50;
  long lVar51;
  ulong uVar52;
  ulong uVar53;
  undefined1 uVar54;
  undefined1 uVar56;
  undefined4 uVar55;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  int iVar71;
  undefined8 uVar72;
  int iVar77;
  undefined1 auVar73 [16];
  int iVar76;
  int iVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  uint uVar79;
  undefined8 uVar81;
  uint uVar87;
  undefined1 auVar82 [16];
  int iVar80;
  uint uVar85;
  int iVar86;
  int iVar88;
  uint uVar89;
  int iVar90;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uVar91;
  int iVar92;
  undefined8 uVar93;
  uint uVar97;
  int iVar98;
  uint uVar99;
  int iVar100;
  uint uVar101;
  int iVar102;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  uint uVar103;
  undefined8 uVar106;
  uint uVar114;
  undefined1 auVar107 [16];
  uint uVar104;
  uint uVar105;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  uint uVar120;
  uint uVar125;
  uint uVar127;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  uint uVar121;
  uint uVar126;
  uint uVar128;
  uint uVar129;
  undefined1 auVar124 [16];
  uint uVar130;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  undefined1 auVar131 [16];
  int iVar135;
  int iVar139;
  int iVar140;
  int iVar141;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined8 uVar142;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  int iVar147;
  int iVar148;
  int iVar149;
  int iVar150;
  int iVar151;
  int iVar152;
  int iVar153;
  int iVar154;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  uint uVar157;
  uint uVar158;
  uint uVar159;
  uint uVar160;
  uint uVar161;
  uint uVar164;
  uint uVar165;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  uint uVar166;
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  int iVar169;
  int iVar175;
  int iVar176;
  int iVar177;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  uint uVar178;
  uint uVar183;
  uint uVar184;
  uint uVar185;
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined8 uVar186;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  uint uVar196;
  uint uVar206;
  uint uVar208;
  uint uVar209;
  uint uVar211;
  uint uVar212;
  undefined1 auVar198 [16];
  uint uVar197;
  uint uVar207;
  uint uVar210;
  uint uVar213;
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  uint uVar214;
  uint uVar223;
  uint uVar224;
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  uint uVar225;
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  uint uVar226;
  uint uVar227;
  uint uVar234;
  uint uVar235;
  uint uVar236;
  uint uVar237;
  uint uVar238;
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  uint uVar241;
  uint uVar242;
  uint uVar243;
  uint uVar244;
  uint uVar245;
  uint uVar246;
  uint uVar247;
  uint uVar248;
  int iVar249;
  int iVar252;
  int iVar253;
  int iVar254;
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  int iVar255;
  int iVar258;
  int iVar259;
  int iVar260;
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  int iVar261;
  int iVar263;
  int iVar264;
  int iVar265;
  undefined1 auVar262 [16];
  
  pauVar2 = param_1;
  pauVar48 = param_2;
  pauVar49 = param_3;
  puVar3 = param_4;
  if ((param_5 & 0xfffffffe) != 0) {
    lVar51 = (long)(int)((param_5 & 0xfffffffe) * 3);
    puVar3 = (undefined8 *)((long)param_4 + lVar51);
    uVar52 = lVar51 - 6;
    if (0x59 < uVar52) {
      uVar52 = uVar52 / 6;
      uVar1 = uVar52 + 1;
      pauVar2 = (undefined1 (*) [16])((long)param_4 + uVar52 * 6 + 6);
      if (((pauVar2 <= param_1 || *param_1 + uVar52 * 2 + 2 <= param_4) &&
          (*param_2 + uVar1 <= param_4 || pauVar2 <= param_2)) &&
         (*param_3 + uVar1 <= param_4 || pauVar2 <= param_3)) {
        uVar53 = uVar1 & 0x7ffffffffffffff0;
        pauVar48 = (undefined1 (*) [16])(*param_2 + uVar53);
        pauVar2 = (undefined1 (*) [16])(*param_1 + uVar53 * 2);
        pauVar49 = (undefined1 (*) [16])(*param_3 + uVar53);
        puVar50 = param_4;
        uVar52 = uVar53;
        do {
          puVar16 = *param_1;
          puVar17 = *param_1;
          puVar18 = *param_1;
          puVar19 = *param_1;
          puVar20 = *param_1;
          puVar21 = *param_1;
          puVar22 = *param_1;
          puVar23 = *param_1;
          puVar24 = *param_1;
          puVar25 = *param_1;
          puVar26 = *param_1;
          puVar27 = *param_1;
          puVar28 = *param_1;
          puVar29 = *param_1;
          puVar30 = *param_1;
          puVar31 = *param_1;
          pauVar47 = param_1 + 1;
          pauVar32 = param_1 + 1;
          pauVar33 = param_1 + 1;
          pauVar34 = param_1 + 1;
          pauVar35 = param_1 + 1;
          pauVar36 = param_1 + 1;
          pauVar37 = param_1 + 1;
          pauVar38 = param_1 + 1;
          pauVar39 = param_1 + 1;
          pauVar40 = param_1 + 1;
          pauVar41 = param_1 + 1;
          pauVar42 = param_1 + 1;
          pauVar43 = param_1 + 1;
          pauVar44 = param_1 + 1;
          pauVar45 = param_1 + 1;
          pauVar46 = param_1 + 1;
          param_1 = param_1 + 2;
          auVar73 = *param_2;
          auVar14._8_8_ = 0xffffff03ffffff02;
          auVar14._0_8_ = 0xffffff01ffffff00;
          auVar15._8_8_ = 0xffffff07ffffff06;
          auVar15._0_8_ = 0xffffff05ffffff04;
          auVar107 = a64_TBL(ZEXT816(0),auVar73,auVar15);
          auVar82 = a64_TBL(ZEXT816(0),auVar73,auVar14);
          auVar222._8_8_ = 0xffffff0bffffff0a;
          auVar222._0_8_ = 0xffffff09ffffff08;
          auVar13._8_8_ = 0xffffff0fffffff0e;
          auVar13._0_8_ = 0xffffff0dffffff0c;
          auVar122 = a64_TBL(ZEXT816(0),auVar73,auVar13);
          auVar73 = a64_TBL(ZEXT816(0),auVar73,auVar222);
          uVar93 = CONCAT26(auVar73._12_2_,
                            CONCAT24(auVar73._8_2_,CONCAT22(auVar73._4_2_,auVar73._0_2_)));
          uVar72 = CONCAT26(auVar122._12_2_,
                            CONCAT24(auVar122._8_2_,CONCAT22(auVar122._4_2_,auVar122._0_2_)));
          uVar81 = CONCAT26(auVar82._12_2_,
                            CONCAT24(auVar82._8_2_,CONCAT22(auVar82._4_2_,auVar82._0_2_)));
          auVar73 = *param_3;
          uVar106 = CONCAT26(auVar107._12_2_,
                             CONCAT24(auVar107._8_2_,CONCAT22(auVar107._4_2_,auVar107._0_2_)));
          auVar82 = a64_TBL(ZEXT816(0),auVar73,auVar222);
          auVar107 = a64_TBL(ZEXT816(0),auVar73,auVar13);
          auVar122 = a64_TBL(ZEXT816(0),auVar73,auVar14);
          auVar123 = a64_TBL(ZEXT816(0),auVar73,auVar15);
          uVar55 = CONCAT22(auVar123._4_2_,auVar123._0_2_);
          uVar6 = CONCAT26(auVar122._12_2_,
                           CONCAT24(auVar122._8_2_,CONCAT22(auVar122._4_2_,auVar122._0_2_)));
          uVar186 = CONCAT26(auVar107._12_2_,
                             CONCAT24(auVar107._8_2_,CONCAT22(auVar107._4_2_,auVar107._0_2_)));
          uVar142 = CONCAT26(auVar82._12_2_,
                             CONCAT24(auVar82._8_2_,CONCAT22(auVar82._4_2_,auVar82._0_2_)));
          auVar73 = NEON_umull(uVar106,0x1913191319131913,2);
          auVar107 = NEON_umull(uVar81,0x1913191319131913,2);
          auVar162 = NEON_umull(uVar72,0x1913191319131913,2);
          auVar167 = NEON_umull(uVar93,0x1913191319131913,2);
          auVar168 = NEON_umull(uVar142,0x3408340834083408,2);
          auVar122 = NEON_umull(uVar186,0x3408340834083408,2);
          auVar82 = NEON_umull(uVar6,0x3408340834083408,2);
          auVar163 = NEON_umull(CONCAT26(auVar123._12_2_,CONCAT24(auVar123._8_2_,uVar55)),
                                0x3408340834083408,2);
          iVar261 = (auVar73._0_4_ >> 8) + (auVar163._0_4_ >> 8);
          iVar263 = (auVar73._4_4_ >> 8) + (auVar163._4_4_ >> 8);
          iVar264 = (auVar73._8_4_ >> 8) + (auVar163._8_4_ >> 8);
          iVar265 = (auVar73._12_4_ >> 8) + (auVar163._12_4_ >> 8);
          iVar255 = (auVar107._0_4_ >> 8) + (auVar82._0_4_ >> 8);
          iVar258 = (auVar107._4_4_ >> 8) + (auVar82._4_4_ >> 8);
          iVar259 = (auVar107._8_4_ >> 8) + (auVar82._8_4_ >> 8);
          iVar260 = (auVar107._12_4_ >> 8) + (auVar82._12_4_ >> 8);
          auVar107 = NEON_umull(uVar93,0x811a811a811a811a,2);
          iVar169 = (auVar162._0_4_ >> 8) + (auVar122._0_4_ >> 8);
          iVar175 = (auVar162._4_4_ >> 8) + (auVar122._4_4_ >> 8);
          iVar176 = (auVar162._8_4_ >> 8) + (auVar122._8_4_ >> 8);
          iVar177 = (auVar162._12_4_ >> 8) + (auVar122._12_4_ >> 8);
          auVar73 = NEON_umull(uVar72,0x811a811a811a811a,2);
          auVar82 = NEON_umull(uVar81,0x811a811a811a811a,2);
          auVar122 = NEON_umull(uVar106,0x811a811a811a811a,2);
          uVar161 = auVar122._0_4_ >> 8;
          uVar164 = auVar122._4_4_ >> 8;
          uVar165 = auVar122._8_4_ >> 8;
          uVar166 = auVar122._12_4_ >> 8;
          uVar130 = auVar82._0_4_ >> 8;
          uVar132 = auVar82._4_4_ >> 8;
          uVar133 = auVar82._8_4_ >> 8;
          uVar134 = auVar82._12_4_ >> 8;
          iVar249 = (auVar167._0_4_ >> 8) + (auVar168._0_4_ >> 8);
          iVar252 = (auVar167._4_4_ >> 8) + (auVar168._4_4_ >> 8);
          iVar253 = (auVar167._8_4_ >> 8) + (auVar168._8_4_ >> 8);
          iVar254 = (auVar167._12_4_ >> 8) + (auVar168._12_4_ >> 8);
          uVar196 = auVar73._0_4_ >> 8;
          uVar206 = auVar73._4_4_ >> 8;
          uVar208 = auVar73._8_4_ >> 8;
          uVar211 = auVar73._12_4_ >> 8;
          uVar241 = auVar107._0_4_ >> 8;
          uVar243 = auVar107._4_4_ >> 8;
          uVar245 = auVar107._8_4_ >> 8;
          uVar247 = auVar107._12_4_ >> 8;
          uVar103 = (uint)(byte)(*pauVar40)[9] * 0x4a85;
          uVar111 = (uint)(byte)(*pauVar42)[0xb] * 0x4a85;
          uVar114 = (uint)(byte)(*pauVar44)[0xd] * 0x4a85;
          uVar117 = (uint)(byte)(*pauVar46)[0xf] * 0x4a85;
          auVar73 = NEON_umull((ulong)CONCAT16((*pauVar38)[7],
                                               (uint6)CONCAT14((*pauVar36)[5],
                                                               (uint)CONCAT12((*pauVar34)[3],
                                                                              (ushort)(byte)(*
                                                  pauVar32)[1]))),0x4a854a854a854a85,2);
          uVar79 = (uint)(byte)puVar25[9] * 0x4a85;
          uVar85 = (uint)(byte)puVar27[0xb] * 0x4a85;
          uVar87 = (uint)(byte)puVar29[0xd] * 0x4a85;
          uVar89 = (uint)(byte)puVar31[0xf] * 0x4a85;
          uVar91 = auVar73._0_4_;
          uVar97 = auVar73._4_4_;
          uVar99 = auVar73._8_4_;
          uVar101 = auVar73._12_4_;
          iVar92 = (uVar103 >> 8) - iVar169;
          iVar98 = (uVar111 >> 8) - iVar175;
          iVar100 = (uVar114 >> 8) - iVar176;
          iVar102 = (uVar117 >> 8) - iVar177;
          iVar80 = (uVar91 >> 8) - iVar249;
          iVar86 = (uVar97 >> 8) - iVar252;
          iVar88 = (uVar99 >> 8) - iVar253;
          iVar90 = (uVar101 >> 8) - iVar254;
          iVar71 = (uVar79 >> 8) - iVar261;
          iVar76 = (uVar85 >> 8) - iVar263;
          iVar77 = (uVar87 >> 8) - iVar264;
          iVar78 = (uVar89 >> 8) - iVar265;
          uVar104 = iVar71 + 0x2204;
          uVar112 = iVar76 + 0x2204;
          uVar115 = iVar77 + 0x2204;
          uVar118 = iVar78 + 0x2204;
          uVar120 = iVar80 + 0x2204;
          uVar125 = iVar86 + 0x2204;
          uVar127 = iVar88 + 0x2204;
          uVar129 = iVar90 + 0x2204;
          uVar226 = iVar92 + 0x2204;
          uVar234 = iVar98 + 0x2204;
          uVar236 = iVar100 + 0x2204;
          uVar238 = iVar102 + 0x2204;
          iVar147 = -(uint)(uVar226 < 0x4000);
          iVar149 = -(uint)(uVar234 < 0x4000);
          iVar151 = -(uint)(uVar236 < 0x4000);
          iVar153 = -(uint)(uVar238 < 0x4000);
          iVar135 = -(uint)(uVar120 < 0x4000);
          iVar139 = -(uint)(uVar125 < 0x4000);
          iVar140 = -(uint)(uVar127 < 0x4000);
          iVar141 = -(uint)(uVar129 < 0x4000);
          uVar227 = uVar226 >> 6;
          uVar235 = uVar234 >> 6;
          uVar237 = uVar236 >> 6;
          iVar148 = -(uint)(uVar104 < 0x4000);
          iVar150 = -(uint)(uVar112 < 0x4000);
          iVar152 = -(uint)(uVar115 < 0x4000);
          iVar154 = -(uint)(uVar118 < 0x4000);
          uVar105 = uVar104 >> 6;
          uVar113 = uVar112 >> 6;
          uVar116 = uVar115 >> 6;
          uVar119 = uVar118 >> 6;
          uVar121 = uVar120 >> 6;
          uVar126 = uVar125 >> 6;
          uVar128 = uVar127 >> 6;
          auVar108[0] = (byte)uVar227 & (byte)iVar147 | ~-(iVar92 < -0x2204) & ~(byte)iVar147;
          auVar108[1] = (byte)(uVar227 >> 8) & (byte)((uint)iVar147 >> 8);
          auVar108[2] = (byte)(uVar227 >> 0x10) & (byte)((uint)iVar147 >> 0x10);
          auVar108[3] = (byte)(uVar226 >> 0x1e) & (byte)((uint)iVar147 >> 0x18);
          auVar108[4] = (byte)uVar235 & (byte)iVar149 | ~-(iVar98 < -0x2204) & ~(byte)iVar149;
          auVar108[5] = (byte)(uVar235 >> 8) & (byte)((uint)iVar149 >> 8);
          auVar108[6] = (byte)(uVar235 >> 0x10) & (byte)((uint)iVar149 >> 0x10);
          auVar108[7] = (byte)(uVar234 >> 0x1e) & (byte)((uint)iVar149 >> 0x18);
          auVar108[8] = (byte)uVar237 & (byte)iVar151 | ~-(iVar100 < -0x2204) & ~(byte)iVar151;
          auVar108[9] = (byte)(uVar237 >> 8) & (byte)((uint)iVar151 >> 8);
          auVar108[10] = (byte)(uVar237 >> 0x10) & (byte)((uint)iVar151 >> 0x10);
          auVar108[0xb] = (byte)(uVar236 >> 0x1e) & (byte)((uint)iVar151 >> 0x18);
          auVar108[0xc] =
               (byte)(uVar238 >> 6) & (byte)iVar153 | ~-(iVar102 < -0x2204) & ~(byte)iVar153;
          auVar108[0xd] = (byte)((uVar238 >> 6) >> 8) & (byte)((uint)iVar153 >> 8);
          auVar108[0xe] = (byte)((uint3)(uVar238 >> 0xe) >> 8) & (byte)((uint)iVar153 >> 0x10);
          auVar108[0xf] = (byte)(uVar238 >> 0x1e) & (byte)((uint)iVar153 >> 0x18);
          auVar94[0] = (byte)uVar121 & (byte)iVar135 | ~-(iVar80 < -0x2204) & ~(byte)iVar135;
          auVar94[1] = (byte)(uVar121 >> 8) & (byte)((uint)iVar135 >> 8);
          auVar94[2] = (byte)(uVar121 >> 0x10) & (byte)((uint)iVar135 >> 0x10);
          auVar94[3] = (byte)(uVar120 >> 0x1e) & (byte)((uint)iVar135 >> 0x18);
          auVar94[4] = (byte)uVar126 & (byte)iVar139 | ~-(iVar86 < -0x2204) & ~(byte)iVar139;
          auVar94[5] = (byte)(uVar126 >> 8) & (byte)((uint)iVar139 >> 8);
          auVar94[6] = (byte)(uVar126 >> 0x10) & (byte)((uint)iVar139 >> 0x10);
          auVar94[7] = (byte)(uVar125 >> 0x1e) & (byte)((uint)iVar139 >> 0x18);
          auVar94[8] = (byte)uVar128 & (byte)iVar140 | ~-(iVar88 < -0x2204) & ~(byte)iVar140;
          auVar94[9] = (byte)(uVar128 >> 8) & (byte)((uint)iVar140 >> 8);
          auVar94[10] = (byte)(uVar128 >> 0x10) & (byte)((uint)iVar140 >> 0x10);
          auVar94[0xb] = (byte)(uVar127 >> 0x1e) & (byte)((uint)iVar140 >> 0x18);
          auVar94[0xc] = (byte)(uVar129 >> 6) & (byte)iVar141 |
                         ~-(iVar90 < -0x2204) & ~(byte)iVar141;
          auVar94[0xd] = (byte)((uVar129 >> 6) >> 8) & (byte)((uint)iVar141 >> 8);
          auVar94[0xe] = (byte)((uint3)(uVar129 >> 0xe) >> 8) & (byte)((uint)iVar141 >> 0x10);
          auVar94[0xf] = (byte)(uVar129 >> 0x1e) & (byte)((uint)iVar141 >> 0x18);
          uVar237 = uVar196 + (uVar103 >> 8);
          uVar238 = uVar206 + (uVar111 >> 8);
          uVar209 = uVar208 + (uVar114 >> 8);
          uVar212 = uVar211 + (uVar117 >> 8);
          uVar242 = uVar241 + (uVar91 >> 8);
          uVar244 = uVar243 + (uVar97 >> 8);
          uVar246 = uVar245 + (uVar99 >> 8);
          uVar248 = uVar247 + (uVar101 >> 8);
          uVar127 = uVar161 + (uVar79 >> 8);
          uVar128 = uVar164 + (uVar85 >> 8);
          uVar129 = uVar165 + (uVar87 >> 8);
          uVar226 = uVar166 + (uVar89 >> 8);
          uVar120 = uVar242 - 0x4515;
          uVar121 = uVar244 - 0x4515;
          uVar125 = uVar246 - 0x4515;
          uVar126 = uVar248 - 0x4515;
          uVar227 = uVar237 - 0x4515;
          uVar234 = uVar238 - 0x4515;
          uVar235 = uVar209 - 0x4515;
          uVar236 = uVar212 - 0x4515;
          auVar83[0] = (byte)uVar105 & (byte)iVar148 | ~-(iVar71 < -0x2204) & ~(byte)iVar148;
          auVar83[1] = (byte)(uVar105 >> 8) & (byte)((uint)iVar148 >> 8);
          auVar83[2] = (byte)(uVar105 >> 0x10) & (byte)((uint)iVar148 >> 0x10);
          auVar83[3] = (byte)(uVar104 >> 0x1e) & (byte)((uint)iVar148 >> 0x18);
          auVar83[4] = (byte)uVar113 & (byte)iVar150 | ~-(iVar76 < -0x2204) & ~(byte)iVar150;
          auVar83[5] = (byte)(uVar113 >> 8) & (byte)((uint)iVar150 >> 8);
          auVar83[6] = (byte)(uVar113 >> 0x10) & (byte)((uint)iVar150 >> 0x10);
          auVar83[7] = (byte)(uVar112 >> 0x1e) & (byte)((uint)iVar150 >> 0x18);
          auVar83[8] = (byte)uVar116 & (byte)iVar152 | ~-(iVar77 < -0x2204) & ~(byte)iVar152;
          auVar83[9] = (byte)(uVar116 >> 8) & (byte)((uint)iVar152 >> 8);
          auVar83[10] = (byte)(uVar116 >> 0x10) & (byte)((uint)iVar152 >> 0x10);
          auVar83[0xb] = (byte)(uVar115 >> 0x1e) & (byte)((uint)iVar152 >> 0x18);
          auVar83[0xc] = (byte)uVar119 & (byte)iVar154 | ~-(iVar78 < -0x2204) & ~(byte)iVar154;
          auVar83[0xd] = (byte)(uVar119 >> 8) & (byte)((uint)iVar154 >> 8);
          auVar83[0xe] = (byte)(uVar119 >> 0x10) & (byte)((uint)iVar154 >> 0x10);
          auVar83[0xf] = (byte)(uVar118 >> 0x1e) & (byte)((uint)iVar154 >> 0x18);
          iVar71 = -(uint)(uVar227 < 0x4000);
          iVar76 = -(uint)(uVar234 < 0x4000);
          iVar77 = -(uint)(uVar235 < 0x4000);
          iVar78 = -(uint)(uVar236 < 0x4000);
          iVar80 = -(uint)(uVar120 < 0x4000);
          iVar86 = -(uint)(uVar121 < 0x4000);
          iVar88 = -(uint)(uVar125 < 0x4000);
          iVar90 = -(uint)(uVar126 < 0x4000);
          uVar104 = uVar120 >> 6;
          uVar105 = uVar121 >> 6;
          uVar112 = uVar125 >> 6;
          uVar113 = uVar227 >> 6;
          uVar115 = uVar234 >> 6;
          uVar116 = uVar235 >> 6;
          uVar118 = uVar236 >> 6;
          auVar228[0] = (byte)uVar113 & (byte)iVar71 | ~-(uVar237 < 0x4515) & ~(byte)iVar71;
          auVar228[1] = (byte)(uVar113 >> 8) & (byte)((uint)iVar71 >> 8);
          auVar228[2] = (byte)(uVar113 >> 0x10) & (byte)((uint)iVar71 >> 0x10);
          auVar228[3] = (byte)(uVar227 >> 0x1e) & (byte)((uint)iVar71 >> 0x18);
          auVar228[4] = (byte)uVar115 & (byte)iVar76 | ~-(uVar238 < 0x4515) & ~(byte)iVar76;
          auVar228[5] = (byte)(uVar115 >> 8) & (byte)((uint)iVar76 >> 8);
          auVar228[6] = (byte)(uVar115 >> 0x10) & (byte)((uint)iVar76 >> 0x10);
          auVar228[7] = (byte)(uVar234 >> 0x1e) & (byte)((uint)iVar76 >> 0x18);
          auVar228[8] = (byte)uVar116 & (byte)iVar77 | ~-(uVar209 < 0x4515) & ~(byte)iVar77;
          auVar228[9] = (byte)(uVar116 >> 8) & (byte)((uint)iVar77 >> 8);
          auVar228[10] = (byte)(uVar116 >> 0x10) & (byte)((uint)iVar77 >> 0x10);
          auVar228[0xb] = (byte)(uVar235 >> 0x1e) & (byte)((uint)iVar77 >> 0x18);
          auVar228[0xc] = (byte)uVar118 & (byte)iVar78 | ~-(uVar212 < 0x4515) & ~(byte)iVar78;
          auVar228[0xd] = (byte)(uVar118 >> 8) & (byte)((uint)iVar78 >> 8);
          auVar228[0xe] = (byte)(uVar118 >> 0x10) & (byte)((uint)iVar78 >> 0x10);
          auVar228[0xf] = (byte)(uVar236 >> 0x1e) & (byte)((uint)iVar78 >> 0x18);
          auVar215[0] = (byte)uVar104 & (byte)iVar80 | ~-(uVar242 < 0x4515) & ~(byte)iVar80;
          auVar215[1] = (byte)(uVar104 >> 8) & (byte)((uint)iVar80 >> 8);
          auVar215[2] = (byte)(uVar104 >> 0x10) & (byte)((uint)iVar80 >> 0x10);
          auVar215[3] = (byte)(uVar120 >> 0x1e) & (byte)((uint)iVar80 >> 0x18);
          auVar215[4] = (byte)uVar105 & (byte)iVar86 | ~-(uVar244 < 0x4515) & ~(byte)iVar86;
          auVar215[5] = (byte)(uVar105 >> 8) & (byte)((uint)iVar86 >> 8);
          auVar215[6] = (byte)(uVar105 >> 0x10) & (byte)((uint)iVar86 >> 0x10);
          auVar215[7] = (byte)(uVar121 >> 0x1e) & (byte)((uint)iVar86 >> 0x18);
          auVar215[8] = (byte)uVar112 & (byte)iVar88 | ~-(uVar246 < 0x4515) & ~(byte)iVar88;
          auVar215[9] = (byte)(uVar112 >> 8) & (byte)((uint)iVar88 >> 8);
          auVar215[10] = (byte)(uVar112 >> 0x10) & (byte)((uint)iVar88 >> 0x10);
          auVar215[0xb] = (byte)(uVar125 >> 0x1e) & (byte)((uint)iVar88 >> 0x18);
          auVar215[0xc] = (byte)(uVar126 >> 6) & (byte)iVar90 | ~-(uVar248 < 0x4515) & ~(byte)iVar90
          ;
          auVar215[0xd] = (byte)((uVar126 >> 6) >> 8) & (byte)((uint)iVar90 >> 8);
          auVar215[0xe] = (byte)((uint3)(uVar126 >> 0xe) >> 8) & (byte)((uint)iVar90 >> 0x10);
          auVar215[0xf] = (byte)(uVar126 >> 0x1e) & (byte)((uint)iVar90 >> 0x18);
          uVar104 = uVar127 - 0x4515;
          uVar112 = uVar128 - 0x4515;
          uVar115 = uVar129 - 0x4515;
          uVar118 = uVar226 - 0x4515;
          iVar71 = -(uint)(uVar104 < 0x4000);
          iVar76 = -(uint)(uVar112 < 0x4000);
          iVar77 = -(uint)(uVar115 < 0x4000);
          iVar78 = -(uint)(uVar118 < 0x4000);
          uVar105 = uVar104 >> 6;
          uVar113 = uVar112 >> 6;
          uVar116 = uVar115 >> 6;
          auVar73 = NEON_umull((ulong)CONCAT16(puVar23[7],
                                               (uint6)CONCAT14(puVar21[5],
                                                               (uint)CONCAT12(puVar19[3],
                                                                              (ushort)(byte)puVar17[
                                                  1]))),0x4a854a854a854a85,2);
          uVar237 = auVar73._0_4_;
          uVar238 = auVar73._4_4_;
          uVar209 = auVar73._8_4_;
          uVar212 = auVar73._12_4_;
          uVar119 = uVar130 + (uVar237 >> 8);
          uVar120 = uVar132 + (uVar238 >> 8);
          uVar121 = uVar133 + (uVar209 >> 8);
          uVar125 = uVar134 + (uVar212 >> 8);
          auVar198[0] = (byte)uVar105 & (byte)iVar71 | ~-(uVar127 < 0x4515) & ~(byte)iVar71;
          auVar198[1] = (byte)(uVar105 >> 8) & (byte)((uint)iVar71 >> 8);
          auVar198[2] = (byte)(uVar105 >> 0x10) & (byte)((uint)iVar71 >> 0x10);
          auVar198[3] = (byte)(uVar104 >> 0x1e) & (byte)((uint)iVar71 >> 0x18);
          auVar198[4] = (byte)uVar113 & (byte)iVar76 | ~-(uVar128 < 0x4515) & ~(byte)iVar76;
          auVar198[5] = (byte)(uVar113 >> 8) & (byte)((uint)iVar76 >> 8);
          auVar198[6] = (byte)(uVar113 >> 0x10) & (byte)((uint)iVar76 >> 0x10);
          auVar198[7] = (byte)(uVar112 >> 0x1e) & (byte)((uint)iVar76 >> 0x18);
          auVar198[8] = (byte)uVar116 & (byte)iVar77 | ~-(uVar129 < 0x4515) & ~(byte)iVar77;
          auVar198[9] = (byte)(uVar116 >> 8) & (byte)((uint)iVar77 >> 8);
          auVar198[10] = (byte)(uVar116 >> 0x10) & (byte)((uint)iVar77 >> 0x10);
          auVar198[0xb] = (byte)(uVar115 >> 0x1e) & (byte)((uint)iVar77 >> 0x18);
          auVar198[0xc] = (byte)(uVar118 >> 6) & (byte)iVar78 | ~-(uVar226 < 0x4515) & ~(byte)iVar78
          ;
          auVar198[0xd] = (byte)((uVar118 >> 6) >> 8) & (byte)((uint)iVar78 >> 8);
          auVar198[0xe] = (byte)((uint3)(uVar118 >> 0xe) >> 8) & (byte)((uint)iVar78 >> 0x10);
          auVar198[0xf] = (byte)(uVar118 >> 0x1e) & (byte)((uint)iVar78 >> 0x18);
          uVar104 = uVar119 - 0x4515;
          uVar112 = uVar120 - 0x4515;
          uVar115 = uVar121 - 0x4515;
          uVar118 = uVar125 - 0x4515;
          iVar71 = -(uint)(uVar104 < 0x4000);
          iVar76 = -(uint)(uVar112 < 0x4000);
          iVar77 = -(uint)(uVar115 < 0x4000);
          iVar78 = -(uint)(uVar118 < 0x4000);
          uVar105 = uVar104 >> 6;
          uVar113 = uVar112 >> 6;
          uVar116 = uVar115 >> 6;
          iVar80 = (uVar237 >> 8) - iVar255;
          iVar86 = (uVar238 >> 8) - iVar258;
          iVar88 = (uVar209 >> 8) - iVar259;
          iVar90 = (uVar212 >> 8) - iVar260;
          auVar187[0] = (byte)uVar105 & (byte)iVar71 | ~-(uVar119 < 0x4515) & ~(byte)iVar71;
          auVar187[1] = (byte)(uVar105 >> 8) & (byte)((uint)iVar71 >> 8);
          auVar187[2] = (byte)(uVar105 >> 0x10) & (byte)((uint)iVar71 >> 0x10);
          auVar187[3] = (byte)(uVar104 >> 0x1e) & (byte)((uint)iVar71 >> 0x18);
          auVar187[4] = (byte)uVar113 & (byte)iVar76 | ~-(uVar120 < 0x4515) & ~(byte)iVar76;
          auVar187[5] = (byte)(uVar113 >> 8) & (byte)((uint)iVar76 >> 8);
          auVar187[6] = (byte)(uVar113 >> 0x10) & (byte)((uint)iVar76 >> 0x10);
          auVar187[7] = (byte)(uVar112 >> 0x1e) & (byte)((uint)iVar76 >> 0x18);
          auVar187[8] = (byte)uVar116 & (byte)iVar77 | ~-(uVar121 < 0x4515) & ~(byte)iVar77;
          auVar187[9] = (byte)(uVar116 >> 8) & (byte)((uint)iVar77 >> 8);
          auVar187[10] = (byte)(uVar116 >> 0x10) & (byte)((uint)iVar77 >> 0x10);
          auVar187[0xb] = (byte)(uVar115 >> 0x1e) & (byte)((uint)iVar77 >> 0x18);
          auVar187[0xc] = (byte)(uVar118 >> 6) & (byte)iVar78 | ~-(uVar125 < 0x4515) & ~(byte)iVar78
          ;
          auVar187[0xd] = (byte)((uVar118 >> 6) >> 8) & (byte)((uint)iVar78 >> 8);
          auVar187[0xe] = (byte)((uint3)(uVar118 >> 0xe) >> 8) & (byte)((uint)iVar78 >> 0x10);
          auVar187[0xf] = (byte)(uVar118 >> 0x1e) & (byte)((uint)iVar78 >> 0x18);
          uVar104 = iVar80 + 0x2204;
          uVar112 = iVar86 + 0x2204;
          uVar115 = iVar88 + 0x2204;
          uVar118 = iVar90 + 0x2204;
          iVar71 = -(uint)(uVar104 < 0x4000);
          iVar76 = -(uint)(uVar112 < 0x4000);
          iVar77 = -(uint)(uVar115 < 0x4000);
          iVar78 = -(uint)(uVar118 < 0x4000);
          uVar105 = uVar104 >> 6;
          uVar113 = uVar112 >> 6;
          uVar116 = uVar115 >> 6;
          auVar74[0] = (byte)uVar105 & (byte)iVar71 | ~-(iVar80 < -0x2204) & ~(byte)iVar71;
          auVar74[1] = (byte)(uVar105 >> 8) & (byte)((uint)iVar71 >> 8);
          auVar74[2] = (byte)(uVar105 >> 0x10) & (byte)((uint)iVar71 >> 0x10);
          auVar74[3] = (byte)(uVar104 >> 0x1e) & (byte)((uint)iVar71 >> 0x18);
          auVar74[4] = (byte)uVar113 & (byte)iVar76 | ~-(iVar86 < -0x2204) & ~(byte)iVar76;
          auVar74[5] = (byte)(uVar113 >> 8) & (byte)((uint)iVar76 >> 8);
          auVar74[6] = (byte)(uVar113 >> 0x10) & (byte)((uint)iVar76 >> 0x10);
          auVar74[7] = (byte)(uVar112 >> 0x1e) & (byte)((uint)iVar76 >> 0x18);
          auVar74[8] = (byte)uVar116 & (byte)iVar77 | ~-(iVar88 < -0x2204) & ~(byte)iVar77;
          auVar74[9] = (byte)(uVar116 >> 8) & (byte)((uint)iVar77 >> 8);
          auVar74[10] = (byte)(uVar116 >> 0x10) & (byte)((uint)iVar77 >> 0x10);
          auVar74[0xb] = (byte)(uVar115 >> 0x1e) & (byte)((uint)iVar77 >> 0x18);
          auVar74[0xc] = (byte)(uVar118 >> 6) & (byte)iVar78 | ~-(iVar90 < -0x2204) & ~(byte)iVar78;
          auVar74[0xd] = (byte)((uVar118 >> 6) >> 8) & (byte)((uint)iVar78 >> 8);
          auVar74[0xe] = (byte)((uint3)(uVar118 >> 0xe) >> 8) & (byte)((uint)iVar78 >> 0x10);
          auVar74[0xf] = (byte)(uVar118 >> 0x1e) & (byte)((uint)iVar78 >> 0x18);
          auVar73 = NEON_umull((ulong)CONCAT16((*pauVar37)[6],
                                               (uint6)CONCAT14((*pauVar35)[4],
                                                               (uint)CONCAT12((*pauVar33)[2],
                                                                              (ushort)(byte)(*
                                                  pauVar47)[0]))),0x4a854a854a854a85,2);
          uVar127 = (uint)(byte)(*pauVar39)[8] * 0x4a85;
          uVar128 = (uint)(byte)(*pauVar41)[10] * 0x4a85;
          uVar129 = (uint)(byte)(*pauVar43)[0xc] * 0x4a85;
          uVar226 = (uint)(byte)(*pauVar45)[0xe] * 0x4a85;
          auVar82 = NEON_umull((ulong)CONCAT16(puVar22[6],
                                               (uint6)CONCAT14(puVar20[4],
                                                               (uint)CONCAT12(puVar18[2],
                                                                              (ushort)(byte)*puVar16
                                                                             ))),0x4a854a854a854a85,
                               2);
          uVar178 = (uint)(byte)puVar24[8] * 0x4a85;
          uVar183 = (uint)(byte)puVar26[10] * 0x4a85;
          uVar184 = (uint)(byte)puVar28[0xc] * 0x4a85;
          uVar185 = (uint)(byte)puVar30[0xe] * 0x4a85;
          auVar205._8_8_ = 0x3c3834302c282420;
          auVar205._0_8_ = 0x1c1814100c080400;
          auVar122 = a64_TBL(ZEXT816(0),auVar74,auVar83,auVar94,auVar108,auVar205);
          auVar162 = a64_TBL(ZEXT816(0),auVar187,auVar198,auVar215,auVar228,auVar205);
          uVar242 = auVar82._0_4_;
          uVar244 = auVar82._4_4_;
          uVar246 = auVar82._8_4_;
          uVar248 = auVar82._12_4_;
          uVar227 = auVar73._0_4_;
          uVar234 = auVar73._4_4_;
          uVar235 = auVar73._8_4_;
          uVar236 = auVar73._12_4_;
          auVar73 = NEON_umull(uVar186,0x6625662566256625,2);
          auVar82 = NEON_umull(uVar6,0x6625662566256625,2);
          auVar107 = NEON_umull(CONCAT26(auVar123._12_2_,CONCAT24(auVar123._8_2_,uVar55)),
                                0x6625662566256625,2);
          uVar157 = auVar107._0_4_ >> 8;
          uVar158 = auVar107._4_4_ >> 8;
          uVar159 = auVar107._8_4_ >> 8;
          uVar160 = auVar107._12_4_ >> 8;
          uVar115 = auVar82._0_4_ >> 8;
          uVar116 = auVar82._4_4_ >> 8;
          uVar118 = auVar82._8_4_ >> 8;
          uVar119 = auVar82._12_4_ >> 8;
          uVar104 = auVar73._0_4_ >> 8;
          uVar105 = auVar73._4_4_ >> 8;
          uVar112 = auVar73._8_4_ >> 8;
          uVar113 = auVar73._12_4_ >> 8;
          uVar197 = uVar157 + (uVar178 >> 8);
          uVar207 = uVar158 + (uVar183 >> 8);
          uVar210 = uVar159 + (uVar184 >> 8);
          uVar213 = uVar160 + (uVar185 >> 8);
          iVar255 = (uVar242 >> 8) - iVar255;
          iVar258 = (uVar244 >> 8) - iVar258;
          iVar259 = (uVar246 >> 8) - iVar259;
          iVar260 = (uVar248 >> 8) - iVar260;
          iVar261 = (uVar178 >> 8) - iVar261;
          iVar263 = (uVar183 >> 8) - iVar263;
          iVar264 = (uVar184 >> 8) - iVar264;
          iVar265 = (uVar185 >> 8) - iVar265;
          uVar120 = iVar261 + 0x2204;
          uVar121 = iVar263 + 0x2204;
          uVar125 = iVar264 + 0x2204;
          uVar126 = iVar265 + 0x2204;
          iVar71 = -(uint)(iVar263 < -0x2204);
          iVar76 = -(uint)(iVar264 < -0x2204);
          iVar77 = -(uint)(iVar265 < -0x2204);
          auVar229._0_8_ = CONCAT44(-(uint)(uVar121 < 0x4000),-(uint)(uVar120 < 0x4000));
          auVar229._8_4_ = -(uint)(uVar125 < 0x4000);
          auVar229._12_4_ = -(uint)(uVar126 < 0x4000);
          auVar216._0_4_ = uVar120 >> 6;
          auVar216._4_4_ = uVar121 >> 6;
          auVar216._8_4_ = uVar125 >> 6;
          auVar216._12_4_ = uVar126 >> 6;
          auVar156[0] = ~-(iVar261 < -0x2204);
          auVar156._1_3_ = 0;
          auVar156[4] = ~(byte)iVar71;
          auVar156._5_2_ = 0;
          auVar156[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar156[8] = ~(byte)iVar76;
          auVar156[9] = ~(byte)((uint)iVar76 >> 8);
          auVar156[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar156[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar156[0xc] = ~(byte)iVar77;
          auVar156[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar156[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar156[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar155._8_8_ = auVar229._8_8_;
          auVar155._0_8_ = auVar229._0_8_;
          auVar156 = auVar156 ^ (auVar156 ^ auVar216) & auVar155;
          uVar120 = iVar255 + 0x2204;
          uVar121 = iVar258 + 0x2204;
          uVar125 = iVar259 + 0x2204;
          uVar126 = iVar260 + 0x2204;
          iVar71 = -(uint)(iVar258 < -0x2204);
          iVar76 = -(uint)(iVar259 < -0x2204);
          iVar77 = -(uint)(iVar260 < -0x2204);
          auVar230._0_8_ = CONCAT44(-(uint)(uVar121 < 0x4000),-(uint)(uVar120 < 0x4000));
          auVar230._8_4_ = -(uint)(uVar125 < 0x4000);
          auVar230._12_4_ = -(uint)(uVar126 < 0x4000);
          auVar217._0_4_ = uVar120 >> 6;
          auVar217._4_4_ = uVar121 >> 6;
          auVar217._8_4_ = uVar125 >> 6;
          auVar217._12_4_ = uVar126 >> 6;
          auVar257[0] = ~-(iVar255 < -0x2204);
          auVar257._1_3_ = 0;
          auVar257[4] = ~(byte)iVar71;
          auVar257._5_2_ = 0;
          auVar257[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar257[8] = ~(byte)iVar76;
          auVar257[9] = ~(byte)((uint)iVar76 >> 8);
          auVar257[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar257[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar257[0xc] = ~(byte)iVar77;
          auVar257[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar257[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar257[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar256._8_8_ = auVar230._8_8_;
          auVar256._0_8_ = auVar230._0_8_;
          auVar257 = auVar257 ^ (auVar257 ^ auVar217) & auVar256;
          uVar120 = uVar197 - 0x379a;
          uVar121 = uVar207 - 0x379a;
          uVar125 = uVar210 - 0x379a;
          uVar126 = uVar213 - 0x379a;
          iVar71 = -(uint)(uVar207 < 0x379a);
          iVar76 = -(uint)(uVar210 < 0x379a);
          iVar77 = -(uint)(uVar213 < 0x379a);
          auVar218._0_4_ = -(uint)(uVar120 < 0x4000);
          auVar218._4_4_ = -(uint)(uVar121 < 0x4000);
          auVar218._8_4_ = -(uint)(uVar125 < 0x4000);
          auVar218._12_4_ = -(uint)(uVar126 < 0x4000);
          auVar109._0_4_ = uVar120 >> 6;
          auVar109._4_4_ = uVar121 >> 6;
          auVar109._8_4_ = uVar125 >> 6;
          auVar109._12_4_ = uVar126 >> 6;
          auVar262[0] = ~-(uVar197 < 0x379a);
          auVar262._1_3_ = 0;
          auVar262[4] = ~(byte)iVar71;
          auVar262._5_2_ = 0;
          auVar262[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar262[8] = ~(byte)iVar76;
          auVar262[9] = ~(byte)((uint)iVar76 >> 8);
          auVar262[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar262[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar262[0xc] = ~(byte)iVar77;
          auVar262[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar262[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar262[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar262 = auVar262 ^ (auVar262 ^ auVar109) & auVar218;
          uVar120 = uVar104 + (uVar127 >> 8);
          uVar121 = uVar105 + (uVar128 >> 8);
          uVar125 = uVar112 + (uVar129 >> 8);
          uVar126 = uVar113 + (uVar226 >> 8);
          uVar197 = uVar115 + (uVar242 >> 8);
          uVar207 = uVar116 + (uVar244 >> 8);
          uVar210 = uVar118 + (uVar246 >> 8);
          uVar213 = uVar119 + (uVar248 >> 8);
          iVar249 = (uVar227 >> 8) - iVar249;
          iVar252 = (uVar234 >> 8) - iVar252;
          iVar253 = (uVar235 >> 8) - iVar253;
          iVar254 = (uVar236 >> 8) - iVar254;
          uVar214 = uVar197 - 0x379a;
          uVar223 = uVar207 - 0x379a;
          uVar224 = uVar210 - 0x379a;
          uVar225 = uVar213 - 0x379a;
          iVar71 = -(uint)(uVar207 < 0x379a);
          iVar76 = -(uint)(uVar210 < 0x379a);
          iVar77 = -(uint)(uVar213 < 0x379a);
          iVar169 = (uVar127 >> 8) - iVar169;
          iVar175 = (uVar128 >> 8) - iVar175;
          iVar176 = (uVar129 >> 8) - iVar176;
          iVar177 = (uVar226 >> 8) - iVar177;
          auVar231._0_4_ = -(uint)(uVar214 < 0x4000);
          auVar231._4_4_ = -(uint)(uVar223 < 0x4000);
          auVar231._8_4_ = -(uint)(uVar224 < 0x4000);
          auVar231._12_4_ = -(uint)(uVar225 < 0x4000);
          auVar219._0_4_ = uVar214 >> 6;
          auVar219._4_4_ = uVar223 >> 6;
          auVar219._8_4_ = uVar224 >> 6;
          auVar219._12_4_ = uVar225 >> 6;
          auVar232[0] = ~-(uVar197 < 0x379a);
          auVar232._1_3_ = 0;
          auVar232[4] = ~(byte)iVar71;
          auVar232._5_2_ = 0;
          auVar232[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar232[8] = ~(byte)iVar76;
          auVar232[9] = ~(byte)((uint)iVar76 >> 8);
          auVar232[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar232[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar232[0xc] = ~(byte)iVar77;
          auVar232[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar232[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar232[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar232 = auVar232 ^ (auVar232 ^ auVar219) & auVar231;
          uVar197 = iVar169 + 0x2204;
          uVar207 = iVar175 + 0x2204;
          uVar210 = iVar176 + 0x2204;
          uVar213 = iVar177 + 0x2204;
          iVar71 = -(uint)(iVar175 < -0x2204);
          iVar76 = -(uint)(iVar176 < -0x2204);
          iVar77 = -(uint)(iVar177 < -0x2204);
          auVar220._0_4_ = -(uint)(uVar197 < 0x4000);
          auVar220._4_4_ = -(uint)(uVar207 < 0x4000);
          auVar220._8_4_ = -(uint)(uVar210 < 0x4000);
          auVar220._12_4_ = -(uint)(uVar213 < 0x4000);
          auVar199._0_4_ = uVar197 >> 6;
          auVar199._4_4_ = uVar207 >> 6;
          auVar199._8_4_ = uVar210 >> 6;
          auVar199._12_4_ = uVar213 >> 6;
          auVar221[0] = ~-(iVar169 < -0x2204);
          auVar221._1_3_ = 0;
          auVar221[4] = ~(byte)iVar71;
          auVar221._5_2_ = 0;
          auVar221[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar221[8] = ~(byte)iVar76;
          auVar221[9] = ~(byte)((uint)iVar76 >> 8);
          auVar221[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar221[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar221[0xc] = ~(byte)iVar77;
          auVar221[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar221[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar221[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar221 = auVar221 ^ (auVar221 ^ auVar199) & auVar220;
          uVar197 = iVar249 + 0x2204;
          uVar207 = iVar252 + 0x2204;
          uVar210 = iVar253 + 0x2204;
          uVar213 = iVar254 + 0x2204;
          iVar71 = -(uint)(iVar252 < -0x2204);
          iVar76 = -(uint)(iVar253 < -0x2204);
          iVar77 = -(uint)(iVar254 < -0x2204);
          auVar200._0_8_ = CONCAT44(-(uint)(uVar207 < 0x4000),-(uint)(uVar197 < 0x4000));
          auVar200._8_4_ = -(uint)(uVar210 < 0x4000);
          auVar200._12_4_ = -(uint)(uVar213 < 0x4000);
          auVar170._0_4_ = uVar197 >> 6;
          auVar170._4_4_ = uVar207 >> 6;
          auVar170._8_4_ = uVar210 >> 6;
          auVar170._12_4_ = uVar213 >> 6;
          auVar240[0] = ~-(iVar249 < -0x2204);
          auVar240._1_3_ = 0;
          auVar240[4] = ~(byte)iVar71;
          auVar240._5_2_ = 0;
          auVar240[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar240[8] = ~(byte)iVar76;
          auVar240[9] = ~(byte)((uint)iVar76 >> 8);
          auVar240[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar240[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar240[0xc] = ~(byte)iVar77;
          auVar240[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar240[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar240[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar239._8_8_ = auVar200._8_8_;
          auVar239._0_8_ = auVar200._0_8_;
          auVar240 = auVar240 ^ (auVar240 ^ auVar170) & auVar239;
          uVar197 = uVar120 - 0x379a;
          uVar207 = uVar121 - 0x379a;
          uVar210 = uVar125 - 0x379a;
          uVar213 = uVar126 - 0x379a;
          iVar71 = -(uint)(uVar121 < 0x379a);
          iVar76 = -(uint)(uVar125 < 0x379a);
          iVar77 = -(uint)(uVar126 < 0x379a);
          auVar188._0_8_ = CONCAT44(-(uint)(uVar207 < 0x4000),-(uint)(uVar197 < 0x4000));
          auVar188._8_4_ = -(uint)(uVar210 < 0x4000);
          auVar188._12_4_ = -(uint)(uVar213 < 0x4000);
          auVar171._0_4_ = uVar197 >> 6;
          auVar171._4_4_ = uVar207 >> 6;
          auVar171._8_4_ = uVar210 >> 6;
          auVar171._12_4_ = uVar213 >> 6;
          auVar251[0] = ~-(uVar120 < 0x379a);
          auVar251._1_3_ = 0;
          auVar251[4] = ~(byte)iVar71;
          auVar251._5_2_ = 0;
          auVar251[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar251[8] = ~(byte)iVar76;
          auVar251[9] = ~(byte)((uint)iVar76 >> 8);
          auVar251[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar251[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar251[0xc] = ~(byte)iVar77;
          auVar251[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar251[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar251[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar250._8_8_ = auVar188._8_8_;
          auVar250._0_8_ = auVar188._0_8_;
          auVar251 = auVar251 ^ (auVar251 ^ auVar171) & auVar250;
          uVar196 = uVar196 + (uVar127 >> 8);
          uVar206 = uVar206 + (uVar128 >> 8);
          uVar208 = uVar208 + (uVar129 >> 8);
          uVar211 = uVar211 + (uVar226 >> 8);
          uVar130 = uVar130 + (uVar242 >> 8);
          uVar132 = uVar132 + (uVar244 >> 8);
          uVar133 = uVar133 + (uVar246 >> 8);
          uVar134 = uVar134 + (uVar248 >> 8);
          auVar73 = NEON_umull(uVar142,0x6625662566256625,2);
          uVar120 = auVar73._0_4_ >> 8;
          uVar121 = auVar73._4_4_ >> 8;
          uVar125 = auVar73._8_4_ >> 8;
          uVar126 = auVar73._12_4_ >> 8;
          uVar161 = uVar161 + (uVar178 >> 8);
          uVar164 = uVar164 + (uVar183 >> 8);
          uVar165 = uVar165 + (uVar184 >> 8);
          uVar166 = uVar166 + (uVar185 >> 8);
          uVar127 = uVar120 + (uVar227 >> 8);
          uVar128 = uVar121 + (uVar234 >> 8);
          uVar129 = uVar125 + (uVar235 >> 8);
          uVar226 = uVar126 + (uVar236 >> 8);
          uVar115 = uVar115 + (uVar237 >> 8);
          uVar116 = uVar116 + (uVar238 >> 8);
          uVar118 = uVar118 + (uVar209 >> 8);
          uVar119 = uVar119 + (uVar212 >> 8);
          uVar237 = uVar127 - 0x379a;
          uVar238 = uVar128 - 0x379a;
          uVar209 = uVar129 - 0x379a;
          uVar212 = uVar226 - 0x379a;
          iVar71 = -(uint)(uVar128 < 0x379a);
          iVar76 = -(uint)(uVar129 < 0x379a);
          iVar77 = -(uint)(uVar226 < 0x379a);
          uVar157 = uVar157 + (uVar79 >> 8);
          uVar158 = uVar158 + (uVar85 >> 8);
          uVar159 = uVar159 + (uVar87 >> 8);
          uVar160 = uVar160 + (uVar89 >> 8);
          auVar143._0_4_ = -(uint)(uVar237 < 0x4000);
          auVar143._4_4_ = -(uint)(uVar238 < 0x4000);
          auVar143._8_4_ = -(uint)(uVar209 < 0x4000);
          auVar143._12_4_ = -(uint)(uVar212 < 0x4000);
          auVar136._0_4_ = uVar237 >> 6;
          auVar136._4_4_ = uVar238 >> 6;
          auVar136._8_4_ = uVar209 >> 6;
          auVar136._12_4_ = uVar212 >> 6;
          auVar124[0] = ~-(uVar127 < 0x379a);
          auVar124._1_3_ = 0;
          auVar124[4] = ~(byte)iVar71;
          auVar124._5_2_ = 0;
          auVar124[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar124[8] = ~(byte)iVar76;
          auVar124[9] = ~(byte)((uint)iVar76 >> 8);
          auVar124[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar124[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar124[0xc] = ~(byte)iVar77;
          auVar124[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar124[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar124[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar124 = auVar124 ^ (auVar124 ^ auVar136) & auVar143;
          uVar79 = uVar161 - 0x4515;
          uVar85 = uVar164 - 0x4515;
          uVar87 = uVar165 - 0x4515;
          uVar89 = uVar166 - 0x4515;
          auVar144._0_4_ = -(uint)(uVar79 < 0x4000);
          auVar144._4_4_ = -(uint)(uVar85 < 0x4000);
          auVar144._8_4_ = -(uint)(uVar87 < 0x4000);
          auVar144._12_4_ = -(uint)(uVar89 < 0x4000);
          auVar137._0_4_ = uVar79 >> 6;
          auVar137._4_4_ = uVar85 >> 6;
          auVar137._8_4_ = uVar87 >> 6;
          auVar137._12_4_ = uVar89 >> 6;
          iVar71 = -(uint)(uVar164 < 0x4515);
          iVar76 = -(uint)(uVar165 < 0x4515);
          iVar77 = -(uint)(uVar166 < 0x4515);
          auVar172[0] = ~-(uVar161 < 0x4515);
          auVar172._1_3_ = 0;
          auVar172[4] = ~(byte)iVar71;
          auVar172._5_2_ = 0;
          auVar172[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar172[8] = ~(byte)iVar76;
          auVar172[9] = ~(byte)((uint)iVar76 >> 8);
          auVar172[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar172[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar172[0xc] = ~(byte)iVar77;
          auVar172[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar172[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar172[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar137 = auVar137 ^ (auVar137 ^ auVar172) & ~auVar144;
          uVar79 = uVar130 - 0x4515;
          uVar85 = uVar132 - 0x4515;
          uVar87 = uVar133 - 0x4515;
          uVar89 = uVar134 - 0x4515;
          auVar173._0_4_ = -(uint)(uVar79 < 0x4000);
          auVar173._4_4_ = -(uint)(uVar85 < 0x4000);
          auVar173._8_4_ = -(uint)(uVar87 < 0x4000);
          auVar173._12_4_ = -(uint)(uVar89 < 0x4000);
          auVar145._0_4_ = uVar79 >> 6;
          auVar145._4_4_ = uVar85 >> 6;
          auVar145._8_4_ = uVar87 >> 6;
          auVar145._12_4_ = uVar89 >> 6;
          iVar71 = -(uint)(uVar132 < 0x4515);
          iVar76 = -(uint)(uVar133 < 0x4515);
          iVar77 = -(uint)(uVar134 < 0x4515);
          auVar179[0] = ~-(uVar130 < 0x4515);
          auVar179._1_3_ = 0;
          auVar179[4] = ~(byte)iVar71;
          auVar179._5_2_ = 0;
          auVar179[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar179[8] = ~(byte)iVar76;
          auVar179[9] = ~(byte)((uint)iVar76 >> 8);
          auVar179[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar179[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar179[0xc] = ~(byte)iVar77;
          auVar179[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar179[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar179[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar145 = auVar145 ^ (auVar145 ^ auVar179) & ~auVar173;
          uVar79 = uVar157 - 0x379a;
          uVar85 = uVar158 - 0x379a;
          uVar87 = uVar159 - 0x379a;
          uVar89 = uVar160 - 0x379a;
          auVar180._0_4_ = -(uint)(uVar79 < 0x4000);
          auVar180._4_4_ = -(uint)(uVar85 < 0x4000);
          auVar180._8_4_ = -(uint)(uVar87 < 0x4000);
          auVar180._12_4_ = -(uint)(uVar89 < 0x4000);
          auVar174._0_4_ = uVar79 >> 6;
          auVar174._4_4_ = uVar85 >> 6;
          auVar174._8_4_ = uVar87 >> 6;
          auVar174._12_4_ = uVar89 >> 6;
          iVar71 = -(uint)(uVar158 < 0x379a);
          iVar76 = -(uint)(uVar159 < 0x379a);
          iVar77 = -(uint)(uVar160 < 0x379a);
          auVar189[0] = ~-(uVar157 < 0x379a);
          auVar189._1_3_ = 0;
          auVar189[4] = ~(byte)iVar71;
          auVar189._5_2_ = 0;
          auVar189[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar189[8] = ~(byte)iVar76;
          auVar189[9] = ~(byte)((uint)iVar76 >> 8);
          auVar189[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar189[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar189[0xc] = ~(byte)iVar77;
          auVar189[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar189[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar189[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar174 = auVar174 ^ (auVar174 ^ auVar189) & ~auVar180;
          uVar79 = uVar115 - 0x379a;
          uVar85 = uVar116 - 0x379a;
          uVar87 = uVar118 - 0x379a;
          uVar89 = uVar119 - 0x379a;
          auVar190._0_4_ = -(uint)(uVar79 < 0x4000);
          auVar190._4_4_ = -(uint)(uVar85 < 0x4000);
          auVar190._8_4_ = -(uint)(uVar87 < 0x4000);
          auVar190._12_4_ = -(uint)(uVar89 < 0x4000);
          auVar181._0_4_ = uVar79 >> 6;
          auVar181._4_4_ = uVar85 >> 6;
          auVar181._8_4_ = uVar87 >> 6;
          auVar181._12_4_ = uVar89 >> 6;
          iVar71 = -(uint)(uVar116 < 0x379a);
          iVar76 = -(uint)(uVar118 < 0x379a);
          iVar77 = -(uint)(uVar119 < 0x379a);
          auVar95[0] = ~-(uVar115 < 0x379a);
          auVar95._1_3_ = 0;
          auVar95[4] = ~(byte)iVar71;
          auVar95._5_2_ = 0;
          auVar95[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar95[8] = ~(byte)iVar76;
          auVar95[9] = ~(byte)((uint)iVar76 >> 8);
          auVar95[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar95[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar95[0xc] = ~(byte)iVar77;
          auVar95[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar95[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar95[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar95 = auVar95 ^ (auVar95 ^ auVar181) & auVar190;
          uVar79 = uVar196 - 0x4515;
          uVar85 = uVar206 - 0x4515;
          uVar87 = uVar208 - 0x4515;
          uVar89 = uVar211 - 0x4515;
          auVar191._0_4_ = -(uint)(uVar79 < 0x4000);
          auVar191._4_4_ = -(uint)(uVar85 < 0x4000);
          auVar191._8_4_ = -(uint)(uVar87 < 0x4000);
          auVar191._12_4_ = -(uint)(uVar89 < 0x4000);
          auVar182._0_4_ = uVar79 >> 6;
          auVar182._4_4_ = uVar85 >> 6;
          auVar182._8_4_ = uVar87 >> 6;
          auVar182._12_4_ = uVar89 >> 6;
          iVar71 = -(uint)(uVar206 < 0x4515);
          iVar76 = -(uint)(uVar208 < 0x4515);
          iVar77 = -(uint)(uVar211 < 0x4515);
          auVar201[0] = ~-(uVar196 < 0x4515);
          auVar201._1_3_ = 0;
          auVar201[4] = ~(byte)iVar71;
          auVar201._5_2_ = 0;
          auVar201[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar201[8] = ~(byte)iVar76;
          auVar201[9] = ~(byte)((uint)iVar76 >> 8);
          auVar201[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar201[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar201[0xc] = ~(byte)iVar77;
          auVar201[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar201[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar201[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar182 = auVar182 ^ (auVar182 ^ auVar201) & ~auVar191;
          uVar241 = uVar241 + (uVar227 >> 8);
          uVar243 = uVar243 + (uVar234 >> 8);
          uVar245 = uVar245 + (uVar235 >> 8);
          uVar247 = uVar247 + (uVar236 >> 8);
          uVar120 = uVar120 + (uVar91 >> 8);
          uVar121 = uVar121 + (uVar97 >> 8);
          uVar125 = uVar125 + (uVar99 >> 8);
          uVar126 = uVar126 + (uVar101 >> 8);
          uVar79 = uVar241 - 0x4515;
          uVar85 = uVar243 - 0x4515;
          uVar87 = uVar245 - 0x4515;
          uVar89 = uVar247 - 0x4515;
          uVar104 = uVar104 + (uVar103 >> 8);
          uVar105 = uVar105 + (uVar111 >> 8);
          uVar112 = uVar112 + (uVar114 >> 8);
          uVar113 = uVar113 + (uVar117 >> 8);
          auVar192._0_4_ = -(uint)(uVar79 < 0x4000);
          auVar192._4_4_ = -(uint)(uVar85 < 0x4000);
          auVar192._8_4_ = -(uint)(uVar87 < 0x4000);
          auVar192._12_4_ = -(uint)(uVar89 < 0x4000);
          iVar71 = -(uint)(uVar243 < 0x4515);
          iVar76 = -(uint)(uVar245 < 0x4515);
          iVar77 = -(uint)(uVar247 < 0x4515);
          auVar131._0_4_ = uVar79 >> 6;
          auVar131._4_4_ = uVar85 >> 6;
          auVar131._8_4_ = uVar87 >> 6;
          auVar131._12_4_ = uVar89 >> 6;
          auVar202[0] = ~-(uVar241 < 0x4515);
          auVar202._1_3_ = 0;
          auVar202[4] = ~(byte)iVar71;
          auVar202._5_2_ = 0;
          auVar202[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar202[8] = ~(byte)iVar76;
          auVar202[9] = ~(byte)((uint)iVar76 >> 8);
          auVar202[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar202[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar202[0xc] = ~(byte)iVar77;
          auVar202[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar202[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar202[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar131 = auVar131 ^ (auVar131 ^ auVar202) & ~auVar192;
          uVar241 = uVar104 - 0x379a;
          uVar243 = uVar105 - 0x379a;
          uVar79 = uVar112 - 0x379a;
          uVar85 = uVar113 - 0x379a;
          auVar203._0_4_ = -(uint)(uVar241 < 0x4000);
          auVar203._4_4_ = -(uint)(uVar243 < 0x4000);
          auVar203._8_4_ = -(uint)(uVar79 < 0x4000);
          auVar203._12_4_ = -(uint)(uVar85 < 0x4000);
          iVar71 = -(uint)(uVar105 < 0x379a);
          iVar76 = -(uint)(uVar112 < 0x379a);
          iVar77 = -(uint)(uVar113 < 0x379a);
          auVar193._0_4_ = uVar241 >> 6;
          auVar193._4_4_ = uVar243 >> 6;
          auVar193._8_4_ = uVar79 >> 6;
          auVar193._12_4_ = uVar85 >> 6;
          auVar75[0] = ~-(uVar104 < 0x379a);
          auVar75._1_3_ = 0;
          auVar75[4] = ~(byte)iVar71;
          auVar75._5_2_ = 0;
          auVar75[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar75[8] = ~(byte)iVar76;
          auVar75[9] = ~(byte)((uint)iVar76 >> 8);
          auVar75[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar75[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar75[0xc] = ~(byte)iVar77;
          auVar75[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar75[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar75[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar75 = auVar75 ^ (auVar75 ^ auVar193) & auVar203;
          uVar241 = uVar120 - 0x379a;
          uVar243 = uVar121 - 0x379a;
          uVar104 = uVar125 - 0x379a;
          uVar105 = uVar126 - 0x379a;
          auVar204._0_4_ = -(uint)(uVar241 < 0x4000);
          auVar204._4_4_ = -(uint)(uVar243 < 0x4000);
          auVar204._8_4_ = -(uint)(uVar104 < 0x4000);
          auVar204._12_4_ = -(uint)(uVar105 < 0x4000);
          iVar71 = -(uint)(uVar121 < 0x379a);
          iVar76 = -(uint)(uVar125 < 0x379a);
          iVar77 = -(uint)(uVar126 < 0x379a);
          auVar194._0_4_ = uVar241 >> 6;
          auVar194._4_4_ = uVar243 >> 6;
          auVar194._8_4_ = uVar104 >> 6;
          auVar194._12_4_ = uVar105 >> 6;
          auVar110[0] = ~-(uVar120 < 0x379a);
          auVar110._1_3_ = 0;
          auVar110[4] = ~(byte)iVar71;
          auVar110._5_2_ = 0;
          auVar110[7] = ~(byte)((uint)iVar71 >> 0x18);
          auVar110[8] = ~(byte)iVar76;
          auVar110[9] = ~(byte)((uint)iVar76 >> 8);
          auVar110[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar110[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar110[0xc] = ~(byte)iVar77;
          auVar110[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar110[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar110[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar110 = auVar110 ^ (auVar110 ^ auVar194) & auVar204;
          auVar146[1] = auVar145[4];
          auVar146[0] = auVar145[0];
          auVar146[2] = auVar145[8];
          auVar146[3] = auVar145[0xc];
          auVar146[4] = auVar137[0];
          auVar146[5] = auVar137[4];
          auVar146[6] = auVar137[8];
          auVar146[7] = auVar137[0xc];
          auVar146[8] = auVar95[0];
          auVar146[9] = auVar95[4];
          auVar146[10] = auVar95[8];
          auVar146[0xb] = auVar95[0xc];
          auVar146[0xc] = auVar174[0];
          auVar146[0xd] = auVar174[4];
          auVar146[0xe] = auVar174[8];
          auVar146[0xf] = auVar174[0xc];
          auVar12._8_8_ = 0x1a120a02ffff1911;
          auVar12._0_8_ = 0x901ffff18100800;
          auVar96._8_8_ = 0xffffffff1101ffff;
          auVar96._0_8_ = 0xffff1000ffffffff;
          auVar222 = a64_TBL(ZEXT816(0),auVar122,auVar162,auVar96);
          auVar138[1] = auVar232[4];
          auVar138[0] = auVar232[0];
          auVar138[2] = auVar232[8];
          auVar138[3] = auVar232[0xc];
          auVar138[4] = auVar262[0];
          auVar138[5] = auVar262[4];
          auVar138[6] = auVar262[8];
          auVar138[7] = auVar262[0xc];
          auVar138[8] = auVar257[0];
          auVar138[9] = auVar257[4];
          auVar138[10] = auVar257[8];
          auVar138[0xb] = auVar257[0xc];
          auVar138[0xc] = auVar156[0];
          auVar138[0xd] = auVar156[4];
          auVar138[0xe] = auVar156[8];
          auVar138[0xf] = auVar156[0xc];
          auVar205 = a64_TBL(ZEXT816(0),auVar138,auVar146,auVar12);
          auVar82._8_4_ = 0x1c140c04;
          auVar82._0_8_ = 0xffff1b130b03ffff;
          auVar73._8_4_ = 0x1c140c04;
          auVar73._0_8_ = 0xffff1b130b03ffff;
          auVar84._8_8_ = 0xffff1404ffffffff;
          auVar84._0_8_ = 0x1303ffffffff1202;
          auVar96 = a64_TBL(ZEXT816(0),auVar122,auVar162,auVar84);
          auVar73._12_4_ = 0xd05ffff;
          auVar84 = a64_TBL(ZEXT816(0),auVar138,auVar146,auVar73);
          auVar8._8_8_ = 0xff170d0c0b0aff16;
          auVar8._0_8_ = 0x7060504ff150100;
          auVar9._8_8_ = 0xffff1f170f07ffff;
          auVar9._0_8_ = 0x1e160e06ffff1d15;
          auVar73 = a64_TBL(ZEXT816(0),auVar138,auVar146,auVar9);
          auVar73 = a64_TBL(ZEXT816(0),auVar73,auVar122,auVar8);
          uVar54 = auVar131[0];
          uVar56 = auVar131[4];
          uVar57 = auVar131[8];
          uVar58 = auVar131[0xc];
          uVar59 = auVar182[0];
          uVar60 = auVar182[4];
          uVar61 = auVar182[8];
          uVar62 = auVar182[0xc];
          uVar63 = auVar110[0];
          uVar64 = auVar110[4];
          uVar65 = auVar110[8];
          uVar66 = auVar110[0xc];
          uVar67 = auVar75[0];
          uVar68 = auVar75[4];
          uVar69 = auVar75[8];
          uVar70 = auVar75[0xc];
          auVar233[1] = auVar124[4];
          auVar233[0] = auVar124[0];
          auVar233[2] = auVar124[8];
          auVar233[3] = auVar124[0xc];
          auVar233[4] = auVar251[0];
          auVar233[5] = auVar251[4];
          auVar233[6] = auVar251[8];
          auVar233[7] = auVar251[0xc];
          auVar233[8] = auVar240[0];
          auVar233[9] = auVar240[4];
          auVar233[10] = auVar240[8];
          auVar233[0xb] = auVar240[0xc];
          auVar233[0xc] = auVar221[0];
          auVar233[0xd] = auVar221[4];
          auVar233[0xe] = auVar221[8];
          auVar233[0xf] = auVar221[0xc];
          auVar107[1] = uVar56;
          auVar107[0] = uVar54;
          auVar107[2] = uVar57;
          auVar107[3] = uVar58;
          auVar107[4] = uVar59;
          auVar107[5] = uVar60;
          auVar107[6] = uVar61;
          auVar107[7] = uVar62;
          auVar107[8] = uVar63;
          auVar107[9] = uVar64;
          auVar107[10] = uVar65;
          auVar107[0xb] = uVar66;
          auVar107[0xc] = uVar67;
          auVar107[0xd] = uVar68;
          auVar107[0xe] = uVar69;
          auVar107[0xf] = uVar70;
          auVar107 = a64_TBL(ZEXT816(0),auVar233,auVar107,auVar12);
          auVar195._8_8_ = 0xf0e0d0cff190908;
          auVar195._0_8_ = 0x706ff1803020100;
          auVar107 = a64_TBL(ZEXT816(0),auVar107,auVar122,auVar195);
          auVar163._8_8_ = 0x1f0fffffffff1e0e;
          auVar163._0_8_ = 0xffffffff1d0dffff;
          auVar167._8_8_ = 0xffff1c0cffffffff;
          auVar167._0_8_ = 0x1b0bffffffff1a0a;
          auVar195 = a64_TBL(ZEXT816(0),auVar122,auVar162,auVar167);
          auVar163 = a64_TBL(ZEXT816(0),auVar122,auVar162,auVar163);
          auVar82._12_4_ = 0xd05ffff;
          auVar122[1] = uVar56;
          auVar122[0] = uVar54;
          auVar122[2] = uVar57;
          auVar122[3] = uVar58;
          auVar122[4] = uVar59;
          auVar122[5] = uVar60;
          auVar122[6] = uVar61;
          auVar122[7] = uVar62;
          auVar122[8] = uVar63;
          auVar122[9] = uVar64;
          auVar122[10] = uVar65;
          auVar122[0xb] = uVar66;
          auVar122[0xc] = uVar67;
          auVar122[0xd] = uVar68;
          auVar122[0xe] = uVar69;
          auVar122[0xf] = uVar70;
          auVar167 = a64_TBL(ZEXT816(0),auVar233,auVar122,auVar82);
          auVar123[1] = uVar56;
          auVar123[0] = uVar54;
          auVar123[2] = uVar57;
          auVar123[3] = uVar58;
          auVar123[4] = uVar59;
          auVar123[5] = uVar60;
          auVar123[6] = uVar61;
          auVar123[7] = uVar62;
          auVar123[8] = uVar63;
          auVar123[9] = uVar64;
          auVar123[10] = uVar65;
          auVar123[0xb] = uVar66;
          auVar123[0xc] = uVar67;
          auVar123[0xd] = uVar68;
          auVar123[0xe] = uVar69;
          auVar123[0xf] = uVar70;
          auVar122 = a64_TBL(ZEXT816(0),auVar233,auVar123,auVar9);
          auVar7._8_8_ = 0x170e0d0c0b0a1608;
          auVar7._0_8_ = 0x706050415020100;
          auVar73 = a64_TBL(ZEXT816(0),auVar73,auVar162,auVar7);
          auVar168._8_8_ = 0xf0e0d0c190a0908;
          auVar168._0_8_ = 0x706180403020100;
          auVar82 = a64_TBL(ZEXT816(0),auVar107,auVar162,auVar168);
          puVar50[5] = auVar73._8_8_;
          puVar50[4] = auVar73._0_8_;
          puVar50[7] = auVar82._8_8_;
          puVar50[6] = auVar82._0_8_;
          auVar10._8_8_ = 0xf0e1d1c0b0a0908;
          auVar10._0_8_ = 0x1716050403021110;
          auVar73 = a64_TBL(ZEXT816(0),auVar167,auVar195,auVar10);
          auVar162._8_8_ = 0x1f1e0d0c0b0a1918;
          auVar162._0_8_ = 0x706050413120100;
          auVar82 = a64_TBL(ZEXT816(0),auVar122,auVar163,auVar162);
          puVar50[9] = auVar73._8_8_;
          puVar50[8] = auVar73._0_8_;
          puVar50[0xb] = auVar82._8_8_;
          puVar50[10] = auVar82._0_8_;
          auVar11._8_8_ = 0xf0e0d0c1b1a0908;
          auVar11._0_8_ = 0x706151403020100;
          auVar73 = a64_TBL(ZEXT816(0),auVar205,auVar222,auVar11);
          auVar82 = a64_TBL(ZEXT816(0),auVar84,auVar96,auVar10);
          puVar50[1] = auVar73._8_8_;
          *puVar50 = auVar73._0_8_;
          puVar50[3] = auVar82._8_8_;
          puVar50[2] = auVar82._0_8_;
          uVar52 = uVar52 - 0x10;
          param_2 = param_2 + 1;
          param_3 = param_3 + 1;
          puVar50 = puVar50 + 0xc;
        } while (uVar52 != 0);
        param_1 = pauVar2;
        param_2 = pauVar48;
        param_3 = pauVar49;
        param_4 = (undefined8 *)((long)param_4 + uVar53 * 6);
        if (uVar1 == uVar53) goto joined_r0x00233fe4;
      }
    }
    do {
      bVar4 = (*param_2)[0];
      bVar5 = (*param_3)[0];
      uVar104 = (uint)(byte)(*param_1)[0] * 0x4a85 >> 8;
      uVar241 = uVar104 + ((uint)bVar5 * 0x6625 >> 8);
      uVar243 = uVar241 - 0x379a;
      uVar56 = 0xff;
      uVar54 = 0;
      if (0x3799 < uVar241) {
        uVar54 = 0xff;
      }
      uVar57 = (char)(uVar243 >> 6);
      if (0x3fff < uVar243) {
        uVar57 = uVar54;
      }
      *(undefined1 *)param_4 = uVar57;
      iVar71 = uVar104 - (((uint)bVar4 * 0x1913 >> 8) + ((uint)bVar5 * 0x3408 >> 8));
      uVar241 = iVar71 + 0x2204;
      uVar54 = 0;
      if (-0x2205 < iVar71) {
        uVar54 = uVar56;
      }
      uVar57 = (char)(uVar241 >> 6);
      if (0x3fff < uVar241) {
        uVar57 = uVar54;
      }
      *(undefined1 *)((long)param_4 + 1) = uVar57;
      uVar104 = uVar104 + ((uint)bVar4 * 0x811a >> 8);
      uVar241 = uVar104 - 0x4515;
      uVar54 = 0;
      if (0x4514 < uVar104) {
        uVar54 = uVar56;
      }
      uVar57 = (char)(uVar241 >> 6);
      if (0x3fff < uVar241) {
        uVar57 = uVar54;
      }
      *(undefined1 *)((long)param_4 + 2) = uVar57;
      pauVar48 = (undefined1 (*) [16])(*param_2 + 1);
      bVar4 = (*param_2)[0];
      pauVar49 = (undefined1 (*) [16])(*param_3 + 1);
      bVar5 = (*param_3)[0];
      uVar104 = (uint)(byte)(*param_1)[1] * 0x4a85 >> 8;
      uVar241 = uVar104 + ((uint)bVar5 * 0x6625 >> 8);
      uVar243 = uVar241 - 0x379a;
      uVar54 = 0;
      if (0x3799 < uVar241) {
        uVar54 = uVar56;
      }
      uVar56 = (char)(uVar243 >> 6);
      if (0x3fff < uVar243) {
        uVar56 = uVar54;
      }
      *(undefined1 *)((long)param_4 + 3) = uVar56;
      iVar71 = uVar104 - (((uint)bVar4 * 0x1913 >> 8) + ((uint)bVar5 * 0x3408 >> 8));
      uVar241 = iVar71 + 0x2204;
      uVar54 = 0;
      if (-0x2205 < iVar71) {
        uVar54 = 0xff;
      }
      uVar56 = (char)(uVar241 >> 6);
      if (0x3fff < uVar241) {
        uVar56 = uVar54;
      }
      *(undefined1 *)((long)param_4 + 4) = uVar56;
      uVar104 = uVar104 + ((uint)bVar4 * 0x811a >> 8);
      uVar241 = uVar104 - 0x4515;
      uVar54 = 0;
      if (0x4514 < uVar104) {
        uVar54 = 0xff;
      }
      uVar56 = (char)(uVar241 >> 6);
      if (0x3fff < uVar241) {
        uVar56 = uVar54;
      }
      *(undefined1 *)((long)param_4 + 5) = uVar56;
      pauVar2 = (undefined1 (*) [16])(*param_1 + 2);
      param_4 = (undefined8 *)((long)param_4 + 6);
      param_1 = pauVar2;
      param_2 = pauVar48;
      param_3 = pauVar49;
    } while (param_4 != puVar3);
  }
joined_r0x00233fe4:
  if ((param_5 & 1) != 0) {
    bVar4 = (*pauVar48)[0];
    bVar5 = (*pauVar49)[0];
    uVar104 = (uint)(byte)(*pauVar2)[0] * 0x4a85 >> 8;
    uVar241 = uVar104 + ((uint)bVar5 * 0x6625 >> 8);
    uVar243 = uVar241 - 0x379a;
    uVar54 = 0;
    if (0x3799 < uVar241) {
      uVar54 = 0xff;
    }
    uVar56 = (char)(uVar243 >> 6);
    if (0x3fff < uVar243) {
      uVar56 = uVar54;
    }
    *(undefined1 *)puVar3 = uVar56;
    iVar71 = uVar104 - (((uint)bVar4 * 0x1913 >> 8) + ((uint)bVar5 * 0x3408 >> 8));
    uVar241 = iVar71 + 0x2204;
    uVar54 = 0;
    if (-0x2205 < iVar71) {
      uVar54 = 0xff;
    }
    uVar56 = (char)(uVar241 >> 6);
    if (0x3fff < uVar241) {
      uVar56 = uVar54;
    }
    *(undefined1 *)((long)puVar3 + 1) = uVar56;
    uVar104 = uVar104 + ((uint)bVar4 * 0x811a >> 8);
    uVar241 = uVar104 - 0x4515;
    uVar54 = 0;
    if (0x4514 < uVar104) {
      uVar54 = 0xff;
    }
    uVar56 = (char)(uVar241 >> 6);
    if (0x3fff < uVar241) {
      uVar56 = uVar54;
    }
    *(undefined1 *)((long)puVar3 + 2) = uVar56;
  }
  return;
}



/* Entry: 0023483c; end: 00235493;  */

void FUN_0023483c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],uint param_5)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 *puVar49;
  undefined1 *puVar50;
  undefined1 *puVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  undefined1 *puVar54;
  undefined1 *puVar55;
  undefined1 *puVar56;
  undefined1 *puVar57;
  undefined1 *puVar58;
  undefined1 *puVar59;
  undefined1 *puVar60;
  undefined1 *puVar61;
  undefined1 *puVar62;
  undefined1 *puVar63;
  undefined1 *puVar64;
  undefined1 (*pauVar65) [16];
  undefined1 (*pauVar66) [16];
  undefined1 (*pauVar67) [16];
  undefined1 (*pauVar68) [16];
  undefined1 (*pauVar69) [16];
  undefined1 (*pauVar70) [16];
  undefined1 (*pauVar71) [16];
  undefined1 (*pauVar72) [16];
  undefined1 (*pauVar73) [16];
  undefined1 (*pauVar74) [16];
  undefined1 (*pauVar75) [16];
  undefined1 (*pauVar76) [16];
  undefined1 (*pauVar77) [16];
  undefined1 (*pauVar78) [16];
  undefined1 (*pauVar79) [16];
  undefined1 (*pauVar80) [16];
  undefined1 (*pauVar81) [16];
  undefined1 (*pauVar82) [16];
  undefined1 (*pauVar83) [16];
  long lVar84;
  ulong uVar85;
  ulong uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  undefined1 auVar99 [16];
  undefined1 auVar103 [16];
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  uint uVar127;
  uint uVar128;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  uint uVar129;
  undefined8 uVar130;
  uint uVar134;
  undefined1 auVar131 [16];
  uint uVar133;
  uint uVar135;
  undefined1 auVar132 [16];
  uint uVar136;
  undefined8 uVar137;
  uint uVar144;
  undefined1 auVar138 [16];
  uint uVar143;
  uint uVar145;
  undefined1 auVar139 [16];
  uint uVar146;
  uint uVar147;
  uint uVar150;
  uint uVar151;
  uint uVar152;
  uint uVar153;
  uint uVar154;
  uint uVar155;
  uint uVar156;
  uint uVar157;
  uint uVar158;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  int iVar159;
  uint uVar160;
  uint uVar161;
  uint uVar162;
  undefined8 uVar163;
  int iVar172;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  int iVar176;
  uint uVar177;
  uint uVar178;
  uint uVar179;
  int iVar180;
  uint uVar181;
  uint uVar182;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  uint uVar183;
  uint uVar187;
  uint uVar189;
  undefined1 auVar185 [16];
  uint uVar184;
  uint uVar188;
  uint uVar190;
  uint uVar191;
  uint uVar192;
  undefined1 auVar186 [16];
  uint uVar193;
  undefined8 uVar195;
  uint uVar207;
  undefined1 auVar196 [16];
  uint uVar194;
  uint uVar205;
  uint uVar206;
  uint uVar208;
  uint uVar209;
  uint uVar210;
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined8 uVar218;
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  uint uVar223;
  undefined8 uVar229;
  uint uVar245;
  undefined1 auVar230 [16];
  uint uVar224;
  int iVar225;
  uint uVar226;
  uint uVar227;
  int iVar228;
  uint uVar239;
  uint uVar240;
  int iVar241;
  uint uVar242;
  uint uVar243;
  int iVar244;
  uint uVar246;
  int iVar247;
  uint uVar248;
  uint uVar249;
  int iVar250;
  uint uVar251;
  int iVar252;
  uint uVar253;
  int iVar254;
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  int iVar255;
  uint uVar256;
  uint uVar257;
  int iVar266;
  uint uVar267;
  uint uVar268;
  int iVar269;
  uint uVar270;
  uint uVar271;
  int iVar272;
  uint uVar273;
  uint uVar274;
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  int iVar275;
  int iVar276;
  int iVar277;
  int iVar278;
  int iVar287;
  int iVar288;
  int iVar289;
  int iVar290;
  int iVar291;
  int iVar292;
  int iVar293;
  int iVar294;
  int iVar295;
  int iVar296;
  int iVar297;
  int iVar298;
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  uint uVar299;
  int iVar300;
  uint uVar303;
  int iVar304;
  uint uVar305;
  int iVar306;
  uint uVar307;
  int iVar308;
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  int iVar309;
  int iVar310;
  int iVar311;
  int iVar318;
  int iVar320;
  int iVar322;
  int iVar323;
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  int iVar319;
  int iVar321;
  int iVar324;
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  uint uVar328;
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined8 uVar329;
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  uint uVar335;
  uint uVar339;
  int iVar340;
  uint uVar341;
  int iVar342;
  uint uVar343;
  int iVar344;
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  uint uVar345;
  uint uVar348;
  uint uVar349;
  uint uVar350;
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  uint uVar351;
  uint uVar352;
  uint uVar353;
  uint uVar357;
  uint uVar358;
  uint uVar359;
  uint uVar360;
  uint uVar361;
  uint uVar362;
  uint uVar363;
  uint uVar364;
  uint uVar365;
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  uint uVar366;
  undefined8 uVar367;
  uint uVar373;
  uint uVar374;
  uint uVar375;
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 uStack_1a0;
  undefined1 uStack_19c;
  undefined1 uStack_198;
  undefined1 uStack_194;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  
  pauVar1 = param_1;
  pauVar81 = param_2;
  pauVar82 = param_3;
  pauVar3 = param_4;
  if ((param_5 & 0x3ffffffe) != 0) {
    lVar84 = (long)(int)((param_5 & 0x3ffffffe) << 2);
    pauVar3 = (undefined1 (*) [16])(*param_4 + lVar84);
    uVar85 = lVar84 - 8;
    if (0x77 < uVar85) {
      uVar2 = (uVar85 >> 3) + 1;
      if (((pauVar3 <= param_1 || (undefined1 (*) [16])(*param_1 + (uVar85 >> 2) + 2) <= param_4) &&
          ((undefined1 (*) [16])(*param_2 + uVar2) <= param_4 || pauVar3 <= param_2)) &&
         ((undefined1 (*) [16])(*param_3 + uVar2) <= param_4 || pauVar3 <= param_3)) {
        uVar86 = uVar2 & 0x3ffffffffffffff0;
        pauVar1 = (undefined1 (*) [16])(*param_1 + uVar86 * 2);
        pauVar81 = (undefined1 (*) [16])(*param_2 + uVar86);
        pauVar82 = (undefined1 (*) [16])(*param_3 + uVar86);
        pauVar83 = param_4;
        uVar85 = uVar86;
        do {
          puVar49 = *param_1;
          puVar50 = *param_1;
          puVar51 = *param_1;
          puVar52 = *param_1;
          puVar53 = *param_1;
          puVar54 = *param_1;
          puVar55 = *param_1;
          puVar56 = *param_1;
          puVar57 = *param_1;
          puVar58 = *param_1;
          puVar59 = *param_1;
          puVar60 = *param_1;
          puVar61 = *param_1;
          puVar62 = *param_1;
          puVar63 = *param_1;
          puVar64 = *param_1;
          pauVar80 = param_1 + 1;
          pauVar65 = param_1 + 1;
          pauVar66 = param_1 + 1;
          pauVar67 = param_1 + 1;
          pauVar68 = param_1 + 1;
          pauVar69 = param_1 + 1;
          pauVar70 = param_1 + 1;
          pauVar71 = param_1 + 1;
          pauVar72 = param_1 + 1;
          pauVar73 = param_1 + 1;
          pauVar74 = param_1 + 1;
          pauVar75 = param_1 + 1;
          pauVar76 = param_1 + 1;
          pauVar77 = param_1 + 1;
          pauVar78 = param_1 + 1;
          pauVar79 = param_1 + 1;
          param_1 = param_1 + 2;
          auVar131 = *param_2;
          auVar40._8_8_ = 0xffffff0fffffff0e;
          auVar40._0_8_ = 0xffffff0dffffff0c;
          auVar138 = a64_TBL(ZEXT816(0),auVar131,auVar40);
          auVar39._8_8_ = 0xffffff0bffffff0a;
          auVar39._0_8_ = 0xffffff09ffffff08;
          auVar185 = a64_TBL(ZEXT816(0),auVar131,auVar39);
          auVar38._8_8_ = 0xffffff07ffffff06;
          auVar38._0_8_ = 0xffffff05ffffff04;
          auVar196 = a64_TBL(ZEXT816(0),auVar131,auVar38);
          auVar230 = *param_3;
          auVar37._8_8_ = 0xffffff03ffffff02;
          auVar37._0_8_ = 0xffffff01ffffff00;
          auVar131 = a64_TBL(ZEXT816(0),auVar131,auVar37);
          uVar329 = CONCAT26(auVar131._12_2_,
                             CONCAT24(auVar131._8_2_,CONCAT22(auVar131._4_2_,auVar131._0_2_)));
          uVar218 = CONCAT26(auVar196._12_2_,
                             CONCAT24(auVar196._8_2_,CONCAT22(auVar196._4_2_,auVar196._0_2_)));
          uVar130 = CONCAT26(auVar185._12_2_,
                             CONCAT24(auVar185._8_2_,CONCAT22(auVar185._4_2_,auVar185._0_2_)));
          auVar131 = a64_TBL(ZEXT816(0),auVar230,auVar37);
          auVar185 = a64_TBL(ZEXT816(0),auVar230,auVar38);
          auVar196 = a64_TBL(ZEXT816(0),auVar230,auVar39);
          auVar230 = a64_TBL(ZEXT816(0),auVar230,auVar40);
          uVar137 = CONCAT26(auVar138._12_2_,
                             CONCAT24(auVar138._8_2_,CONCAT22(auVar138._4_2_,auVar138._0_2_)));
          uVar229 = CONCAT26(auVar230._12_2_,
                             CONCAT24(auVar230._8_2_,CONCAT22(auVar230._4_2_,auVar230._0_2_)));
          uVar367 = CONCAT26(auVar196._12_2_,
                             CONCAT24(auVar196._8_2_,CONCAT22(auVar196._4_2_,auVar196._0_2_)));
          uVar195 = CONCAT26(auVar185._12_2_,
                             CONCAT24(auVar185._8_2_,CONCAT22(auVar185._4_2_,auVar185._0_2_)));
          auVar196 = NEON_umull((ulong)CONCAT16(puVar55[6],
                                                (uint6)CONCAT14(puVar53[4],
                                                                (uint)CONCAT12(puVar51[2],
                                                                               (ushort)(byte)*
                                                  puVar49))),0x4a854a854a854a85,2);
          uVar299 = (uint)(byte)puVar57[8] * 0x4a85;
          uVar303 = (uint)(byte)puVar59[10] * 0x4a85;
          uVar305 = (uint)(byte)puVar61[0xc] * 0x4a85;
          uVar307 = (uint)(byte)puVar63[0xe] * 0x4a85;
          uVar163 = CONCAT26(auVar131._12_2_,
                             CONCAT24(auVar131._8_2_,CONCAT22(auVar131._4_2_,auVar131._0_2_)));
          auVar325 = NEON_umull((ulong)CONCAT16((*pauVar70)[6],
                                                (uint6)CONCAT14((*pauVar68)[4],
                                                                (uint)CONCAT12((*pauVar66)[2],
                                                                               (ushort)(byte)(*
                                                  pauVar80)[0]))),0x4a854a854a854a85,2);
          uVar146 = (uint)(byte)(*pauVar72)[8] * 0x4a85;
          uVar150 = (uint)(byte)(*pauVar74)[10] * 0x4a85;
          uVar153 = (uint)(byte)(*pauVar76)[0xc] * 0x4a85;
          uVar156 = (uint)(byte)(*pauVar78)[0xe] * 0x4a85;
          auVar131 = NEON_umull(uVar229,0x6625662566256625,2);
          uVar351 = auVar131._0_4_ >> 8;
          uVar357 = auVar131._4_4_ >> 8;
          uVar360 = auVar131._8_4_ >> 8;
          uVar363 = auVar131._12_4_ >> 8;
          auVar131 = NEON_umull(uVar137,0x1913191319131913,2);
          auVar230 = NEON_umull(uVar130,0x1913191319131913,2);
          auVar138 = NEON_umull(uVar367,0x3408340834083408,2);
          auVar185 = NEON_umull(uVar229,0x3408340834083408,2);
          iVar159 = (auVar131._0_4_ >> 8) + (auVar185._0_4_ >> 8);
          iVar172 = (auVar131._4_4_ >> 8) + (auVar185._4_4_ >> 8);
          iVar176 = (auVar131._8_4_ >> 8) + (auVar185._8_4_ >> 8);
          iVar180 = (auVar131._12_4_ >> 8) + (auVar185._12_4_ >> 8);
          iVar255 = (auVar230._0_4_ >> 8) + (auVar138._0_4_ >> 8);
          iVar266 = (auVar230._4_4_ >> 8) + (auVar138._4_4_ >> 8);
          iVar269 = (auVar230._8_4_ >> 8) + (auVar138._8_4_ >> 8);
          iVar272 = (auVar230._12_4_ >> 8) + (auVar138._12_4_ >> 8);
          auVar230 = NEON_umull(uVar137,0x811a811a811a811a,2);
          auVar131 = NEON_umull(uVar130,0x811a811a811a811a,2);
          auVar138 = NEON_umull(uVar218,0x811a811a811a811a,2);
          auVar185 = NEON_umull(uVar329,0x811a811a811a811a,2);
          uVar193 = auVar185._0_4_ >> 8;
          uVar205 = auVar185._4_4_ >> 8;
          uVar207 = auVar185._8_4_ >> 8;
          uVar209 = auVar185._12_4_ >> 8;
          uVar256 = auVar138._0_4_ >> 8;
          uVar267 = auVar138._4_4_ >> 8;
          uVar270 = auVar138._8_4_ >> 8;
          uVar273 = auVar138._12_4_ >> 8;
          uVar129 = auVar131._0_4_ >> 8;
          uVar133 = auVar131._4_4_ >> 8;
          uVar134 = auVar131._8_4_ >> 8;
          uVar135 = auVar131._12_4_ >> 8;
          uVar136 = auVar230._0_4_ >> 8;
          uVar143 = auVar230._4_4_ >> 8;
          uVar144 = auVar230._8_4_ >> 8;
          uVar145 = auVar230._12_4_ >> 8;
          uVar352 = uVar351 + (uVar146 >> 8);
          uVar358 = uVar357 + (uVar150 >> 8);
          uVar361 = uVar360 + (uVar153 >> 8);
          uVar364 = uVar363 + (uVar156 >> 8);
          uVar160 = uVar136 + (uVar146 >> 8);
          uVar173 = uVar143 + (uVar150 >> 8);
          uVar177 = uVar144 + (uVar153 >> 8);
          uVar181 = uVar145 + (uVar156 >> 8);
          uVar147 = uVar129 + (auVar325._0_4_ >> 8);
          uVar151 = uVar133 + (auVar325._4_4_ >> 8);
          uVar154 = uVar134 + (auVar325._8_4_ >> 8);
          uVar157 = uVar135 + (auVar325._12_4_ >> 8);
          uVar183 = uVar147 - 0x4515;
          uVar187 = uVar151 - 0x4515;
          uVar189 = uVar154 - 0x4515;
          uVar191 = uVar157 - 0x4515;
          uVar223 = uVar160 - 0x4515;
          uVar239 = uVar173 - 0x4515;
          uVar245 = uVar177 - 0x4515;
          uVar251 = uVar181 - 0x4515;
          iVar275 = -(uint)(uVar223 < 0x4000);
          iVar287 = -(uint)(uVar239 < 0x4000);
          iVar291 = -(uint)(uVar245 < 0x4000);
          iVar295 = -(uint)(uVar251 < 0x4000);
          iVar309 = -(uint)(uVar183 < 0x4000);
          iVar318 = -(uint)(uVar187 < 0x4000);
          iVar320 = -(uint)(uVar189 < 0x4000);
          iVar322 = -(uint)(uVar191 < 0x4000);
          uVar184 = uVar183 >> 6;
          uVar188 = uVar187 >> 6;
          uVar190 = uVar189 >> 6;
          uVar192 = uVar191 >> 6;
          uVar224 = uVar223 >> 6;
          uVar240 = uVar239 >> 6;
          uVar246 = uVar245 >> 6;
          auVar149[1] = (byte)(uVar224 >> 8) & (byte)((uint)iVar275 >> 8);
          auVar149[0] = (byte)uVar224 & (byte)iVar275 | ~-(uVar160 < 0x4515) & ~(byte)iVar275;
          auVar149[2] = (byte)(uVar224 >> 0x10) & (byte)((uint)iVar275 >> 0x10);
          auVar149[3] = (byte)(uVar223 >> 0x1e) & (byte)((uint)iVar275 >> 0x18);
          auVar149[4] = (byte)uVar240 & (byte)iVar287 | ~-(uVar173 < 0x4515) & ~(byte)iVar287;
          auVar149[5] = (byte)(uVar240 >> 8) & (byte)((uint)iVar287 >> 8);
          auVar149[6] = (byte)(uVar240 >> 0x10) & (byte)((uint)iVar287 >> 0x10);
          auVar149[7] = (byte)(uVar239 >> 0x1e) & (byte)((uint)iVar287 >> 0x18);
          auVar131 = NEON_umull((ulong)CONCAT16((*pauVar71)[7],
                                                (uint6)CONCAT14((*pauVar69)[5],
                                                                (uint)CONCAT12((*pauVar67)[3],
                                                                               (ushort)(byte)(*
                                                  pauVar65)[1]))),0x4a854a854a854a85,2);
          uVar113 = (uint)(byte)(*pauVar73)[9] * 0x4a85;
          uVar121 = (uint)(byte)(*pauVar75)[0xb] * 0x4a85;
          uVar124 = (uint)(byte)(*pauVar77)[0xd] * 0x4a85;
          uVar127 = (uint)(byte)(*pauVar79)[0xf] * 0x4a85;
          uVar160 = (uint)(byte)puVar58[9] * 0x4a85;
          uVar224 = (uint)(byte)puVar60[0xb] * 0x4a85;
          uVar107 = (uint)(byte)puVar62[0xd] * 0x4a85;
          uVar110 = (uint)(byte)puVar64[0xf] * 0x4a85;
          uVar136 = uVar136 + (uVar113 >> 8);
          uVar143 = uVar143 + (uVar121 >> 8);
          uVar144 = uVar144 + (uVar124 >> 8);
          uVar145 = uVar145 + (uVar127 >> 8);
          uVar328 = auVar131._0_4_;
          uVar152 = auVar131._4_4_;
          uVar155 = auVar131._8_4_;
          uVar158 = auVar131._12_4_;
          uVar129 = uVar129 + (uVar328 >> 8);
          uVar133 = uVar133 + (uVar152 >> 8);
          uVar134 = uVar134 + (uVar155 >> 8);
          uVar135 = uVar135 + (uVar158 >> 8);
          uVar257 = uVar256 + (uVar160 >> 8);
          uVar268 = uVar267 + (uVar224 >> 8);
          uVar271 = uVar270 + (uVar107 >> 8);
          uVar274 = uVar273 + (uVar110 >> 8);
          uVar173 = uVar129 - 0x4515;
          uVar239 = uVar133 - 0x4515;
          uVar108 = uVar134 - 0x4515;
          uVar111 = uVar135 - 0x4515;
          uVar114 = uVar136 - 0x4515;
          uVar122 = uVar143 - 0x4515;
          uVar125 = uVar144 - 0x4515;
          uVar128 = uVar145 - 0x4515;
          iVar225 = -(uint)(uVar114 < 0x4000);
          iVar241 = -(uint)(uVar122 < 0x4000);
          iVar247 = -(uint)(uVar125 < 0x4000);
          iVar252 = -(uint)(uVar128 < 0x4000);
          iVar276 = -(uint)(uVar173 < 0x4000);
          iVar288 = -(uint)(uVar239 < 0x4000);
          iVar292 = -(uint)(uVar108 < 0x4000);
          iVar296 = -(uint)(uVar111 < 0x4000);
          uVar223 = uVar173 >> 6;
          uVar240 = uVar239 >> 6;
          uVar109 = uVar108 >> 6;
          uVar112 = uVar111 >> 6;
          uVar115 = uVar114 >> 6;
          uVar123 = uVar122 >> 6;
          uVar126 = uVar125 >> 6;
          uVar226 = uVar257 - 0x4515;
          uVar242 = uVar268 - 0x4515;
          uVar248 = uVar271 - 0x4515;
          uVar253 = uVar274 - 0x4515;
          iVar277 = -(uint)(uVar226 < 0x4000);
          iVar289 = -(uint)(uVar242 < 0x4000);
          iVar293 = -(uint)(uVar248 < 0x4000);
          iVar297 = -(uint)(uVar253 < 0x4000);
          uVar227 = uVar226 >> 6;
          uVar243 = uVar242 >> 6;
          uVar249 = uVar248 >> 6;
          auVar131 = NEON_umull((ulong)CONCAT16(puVar56[7],
                                                (uint6)CONCAT14(puVar54[5],
                                                                (uint)CONCAT12(puVar52[3],
                                                                               (ushort)(byte)puVar50
                                                  [1]))),0x4a854a854a854a85,2);
          uVar345 = auVar131._0_4_;
          uVar348 = auVar131._4_4_;
          uVar349 = auVar131._8_4_;
          uVar350 = auVar131._12_4_;
          uVar194 = uVar193 + (uVar345 >> 8);
          uVar206 = uVar205 + (uVar348 >> 8);
          uVar208 = uVar207 + (uVar349 >> 8);
          uVar210 = uVar209 + (uVar350 >> 8);
          uVar161 = uVar194 - 0x4515;
          uVar174 = uVar206 - 0x4515;
          uVar178 = uVar208 - 0x4515;
          uVar182 = uVar210 - 0x4515;
          iVar228 = -(uint)(uVar161 < 0x4000);
          iVar244 = -(uint)(uVar174 < 0x4000);
          iVar250 = -(uint)(uVar178 < 0x4000);
          iVar254 = -(uint)(uVar182 < 0x4000);
          uVar162 = uVar161 >> 6;
          uVar175 = uVar174 >> 6;
          uVar179 = uVar178 >> 6;
          iVar278 = (uint)auVar325._1_3_ - iVar255;
          iVar290 = (uint)auVar325._5_3_ - iVar266;
          iVar294 = (uint)auVar325._9_3_ - iVar269;
          iVar298 = (uint)auVar325._13_3_ - iVar272;
          iVar310 = (uVar146 >> 8) - iVar159;
          iVar275 = (uVar150 >> 8) - iVar172;
          iVar287 = (uVar153 >> 8) - iVar176;
          iVar323 = (uVar156 >> 8) - iVar180;
          uVar146 = iVar310 + 0x2204;
          uVar150 = iVar275 + 0x2204;
          uVar153 = iVar287 + 0x2204;
          uVar156 = iVar323 + 0x2204;
          iVar275 = -(uint)(iVar275 < -0x2204);
          iVar287 = -(uint)(iVar287 < -0x2204);
          iVar323 = -(uint)(iVar323 < -0x2204);
          auVar312._0_8_ = CONCAT44(-(uint)(uVar150 < 0x4000),-(uint)(uVar146 < 0x4000));
          auVar312._8_4_ = -(uint)(uVar153 < 0x4000);
          auVar312._12_4_ = -(uint)(uVar156 < 0x4000);
          auVar164._0_4_ = uVar146 >> 6;
          auVar164._4_4_ = uVar150 >> 6;
          auVar164._8_4_ = uVar153 >> 6;
          auVar164._12_4_ = uVar156 >> 6;
          auVar117[0] = ~-(iVar310 < -0x2204);
          auVar117._1_3_ = 0;
          auVar117[4] = ~(byte)iVar275;
          auVar117._5_2_ = 0;
          auVar117[7] = ~(byte)((uint)iVar275 >> 0x18);
          auVar117[8] = ~(byte)iVar287;
          auVar117[9] = ~(byte)((uint)iVar287 >> 8);
          auVar117[10] = ~(byte)((uint)iVar287 >> 0x10);
          auVar117[0xb] = ~(byte)((uint)iVar287 >> 0x18);
          auVar117[0xc] = ~(byte)iVar323;
          auVar117[0xd] = ~(byte)((uint)iVar323 >> 8);
          auVar117[0xe] = ~(byte)((uint)iVar323 >> 0x10);
          auVar117[0xf] = ~(byte)((uint)iVar323 >> 0x18);
          auVar116._8_8_ = auVar312._8_8_;
          auVar116._0_8_ = auVar312._0_8_;
          auVar117 = auVar117 ^ (auVar117 ^ auVar164) & auVar116;
          uVar146 = iVar278 + 0x2204;
          uVar150 = iVar290 + 0x2204;
          uVar153 = iVar294 + 0x2204;
          uVar156 = iVar298 + 0x2204;
          iVar275 = -(uint)(iVar290 < -0x2204);
          iVar287 = -(uint)(iVar294 < -0x2204);
          iVar323 = -(uint)(iVar298 < -0x2204);
          auVar313._0_8_ = CONCAT44(-(uint)(uVar150 < 0x4000),-(uint)(uVar146 < 0x4000));
          auVar313._8_4_ = -(uint)(uVar153 < 0x4000);
          auVar313._12_4_ = -(uint)(uVar156 < 0x4000);
          auVar165._0_4_ = uVar146 >> 6;
          auVar165._4_4_ = uVar150 >> 6;
          auVar165._8_4_ = uVar153 >> 6;
          auVar165._12_4_ = uVar156 >> 6;
          auVar198[0] = ~-(iVar278 < -0x2204);
          auVar198._1_3_ = 0;
          auVar198[4] = ~(byte)iVar275;
          auVar198._5_2_ = 0;
          auVar198[7] = ~(byte)((uint)iVar275 >> 0x18);
          auVar198[8] = ~(byte)iVar287;
          auVar198[9] = ~(byte)((uint)iVar287 >> 8);
          auVar198[10] = ~(byte)((uint)iVar287 >> 0x10);
          auVar198[0xb] = ~(byte)((uint)iVar287 >> 0x18);
          auVar198[0xc] = ~(byte)iVar323;
          auVar198[0xd] = ~(byte)((uint)iVar323 >> 8);
          auVar198[0xe] = ~(byte)((uint)iVar323 >> 0x10);
          auVar198[0xf] = ~(byte)((uint)iVar323 >> 0x18);
          auVar197._8_8_ = auVar313._8_8_;
          auVar197._0_8_ = auVar313._0_8_;
          auVar198 = auVar198 ^ (auVar198 ^ auVar165) & auVar197;
          uVar146 = uVar352 - 0x379a;
          uVar150 = uVar358 - 0x379a;
          uVar153 = uVar361 - 0x379a;
          uVar156 = uVar364 - 0x379a;
          iVar275 = -(uint)(uVar358 < 0x379a);
          iVar287 = -(uint)(uVar361 < 0x379a);
          iVar323 = -(uint)(uVar364 < 0x379a);
          uVar256 = uVar256 + (uVar299 >> 8);
          uVar267 = uVar267 + (uVar303 >> 8);
          uVar270 = uVar270 + (uVar305 >> 8);
          uVar273 = uVar273 + (uVar307 >> 8);
          auVar330._0_8_ = CONCAT44(-(uint)(uVar150 < 0x4000),-(uint)(uVar146 < 0x4000));
          auVar330._8_4_ = -(uint)(uVar153 < 0x4000);
          auVar330._12_4_ = -(uint)(uVar156 < 0x4000);
          auVar279._0_4_ = uVar146 >> 6;
          auVar279._4_4_ = uVar150 >> 6;
          auVar279._8_4_ = uVar153 >> 6;
          auVar279._12_4_ = uVar156 >> 6;
          auVar167[0] = ~-(uVar352 < 0x379a);
          auVar167._1_3_ = 0;
          auVar167[4] = ~(byte)iVar275;
          auVar167._5_2_ = 0;
          auVar167[7] = ~(byte)((uint)iVar275 >> 0x18);
          auVar167[8] = ~(byte)iVar287;
          auVar167[9] = ~(byte)((uint)iVar287 >> 8);
          auVar167[10] = ~(byte)((uint)iVar287 >> 0x10);
          auVar167[0xb] = ~(byte)((uint)iVar287 >> 0x18);
          auVar167[0xc] = ~(byte)iVar323;
          auVar167[0xd] = ~(byte)((uint)iVar323 >> 8);
          auVar167[0xe] = ~(byte)((uint)iVar323 >> 0x10);
          auVar167[0xf] = ~(byte)((uint)iVar323 >> 0x18);
          auVar166._8_8_ = auVar330._8_8_;
          auVar166._0_8_ = auVar330._0_8_;
          auVar167 = auVar167 ^ (auVar167 ^ auVar279) & auVar166;
          uVar146 = uVar256 - 0x4515;
          uVar153 = uVar267 - 0x4515;
          uVar352 = uVar270 - 0x4515;
          uVar361 = uVar273 - 0x4515;
          iVar275 = -(uint)(uVar146 < 0x4000);
          iVar287 = -(uint)(uVar153 < 0x4000);
          iVar323 = -(uint)(uVar352 < 0x4000);
          iVar278 = -(uint)(uVar361 < 0x4000);
          uVar150 = uVar146 >> 6;
          uVar156 = uVar153 >> 6;
          uVar358 = uVar352 >> 6;
          uStack_f0 = auVar196._0_4_;
          uStack_ec = auVar196._4_4_;
          uStack_e8 = auVar196._8_4_;
          uStack_e4 = auVar196._12_4_;
          auVar41[1] = (byte)(uVar150 >> 8) & (byte)((uint)iVar275 >> 8);
          auVar41[0] = (byte)uVar150 & (byte)iVar275 | ~-(uVar256 < 0x4515) & ~(byte)iVar275;
          auVar41[2] = (byte)(uVar150 >> 0x10) & (byte)((uint)iVar275 >> 0x10);
          auVar41[3] = (byte)(uVar146 >> 0x1e) & (byte)((uint)iVar275 >> 0x18);
          auVar41[4] = (byte)uVar156 & (byte)iVar287 | ~-(uVar267 < 0x4515) & ~(byte)iVar287;
          auVar41[5] = (byte)(uVar156 >> 8) & (byte)((uint)iVar287 >> 8);
          auVar41[6] = (byte)(uVar156 >> 0x10) & (byte)((uint)iVar287 >> 0x10);
          auVar41[7] = (byte)(uVar153 >> 0x1e) & (byte)((uint)iVar287 >> 0x18);
          auVar41[9] = (byte)(uVar358 >> 8) & (byte)((uint)iVar323 >> 8);
          auVar41[8] = (byte)uVar358 & (byte)iVar323 | ~-(uVar270 < 0x4515) & ~(byte)iVar323;
          auVar41[10] = (byte)(uVar358 >> 0x10) & (byte)((uint)iVar323 >> 0x10);
          auVar41[0xb] = (byte)(uVar352 >> 0x1e) & (byte)((uint)iVar323 >> 0x18);
          auVar41[0xc] = (byte)(uVar361 >> 6) & (byte)iVar278 |
                         ~-(uVar273 < 0x4515) & ~(byte)iVar278;
          auVar41[0xd] = (byte)((uVar361 >> 6) >> 8) & (byte)((uint)iVar278 >> 8);
          auVar41[0xe] = (byte)((uint3)(uVar361 >> 0xe) >> 8) & (byte)((uint)iVar278 >> 0x10);
          auVar41[0xf] = (byte)(uVar361 >> 0x1e) & (byte)((uint)iVar278 >> 0x18);
          auVar230 = NEON_umull(uVar195,0x6625662566256625,2);
          auVar131 = NEON_umull(uVar367,0x6625662566256625,2);
          uVar256 = auVar131._0_4_ >> 8;
          uVar267 = auVar131._4_4_ >> 8;
          uVar270 = auVar131._8_4_ >> 8;
          uVar273 = auVar131._12_4_ >> 8;
          uVar366 = auVar230._0_4_ >> 8;
          uVar373 = auVar230._4_4_ >> 8;
          uVar374 = auVar230._8_4_ >> 8;
          uVar375 = auVar230._12_4_ >> 8;
          uVar353 = uVar366 + (uVar299 >> 8);
          uVar359 = uVar373 + (uVar303 >> 8);
          uVar362 = uVar374 + (uVar305 >> 8);
          uVar365 = uVar375 + (uVar307 >> 8);
          uVar335 = uVar256 + (auVar325._0_4_ >> 8);
          uVar339 = uVar267 + (auVar325._4_4_ >> 8);
          uVar341 = uVar270 + (auVar325._8_4_ >> 8);
          uVar343 = uVar273 + (auVar325._12_4_ >> 8);
          auVar131 = NEON_umull(uVar163,0x6625662566256625,2);
          uVar352 = auVar131._0_4_ >> 8;
          uVar358 = auVar131._4_4_ >> 8;
          uVar361 = auVar131._8_4_ >> 8;
          uVar364 = auVar131._12_4_ >> 8;
          auVar131 = NEON_umull(uVar218,0x1913191319131913,2);
          auVar230 = NEON_umull(uVar195,0x3408340834083408,2);
          iVar300 = (auVar131._0_4_ >> 8) + (auVar230._0_4_ >> 8);
          iVar304 = (auVar131._4_4_ >> 8) + (auVar230._4_4_ >> 8);
          iVar306 = (auVar131._8_4_ >> 8) + (auVar230._8_4_ >> 8);
          iVar308 = (auVar131._12_4_ >> 8) + (auVar230._12_4_ >> 8);
          uVar146 = uVar335 - 0x379a;
          uVar150 = uVar339 - 0x379a;
          uVar153 = uVar341 - 0x379a;
          uVar156 = uVar343 - 0x379a;
          auVar230 = NEON_umull(uVar329,0x1913191319131913,2);
          iVar340 = -(uint)(uVar339 < 0x379a);
          iVar342 = -(uint)(uVar341 < 0x379a);
          iVar344 = -(uint)(uVar343 < 0x379a);
          auVar131 = NEON_umull(uVar163,0x3408340834083408,2);
          iVar290 = (auVar230._0_4_ >> 8) + (auVar131._0_4_ >> 8);
          iVar294 = (auVar230._4_4_ >> 8) + (auVar131._4_4_ >> 8);
          iVar298 = (auVar230._8_4_ >> 8) + (auVar131._8_4_ >> 8);
          iVar310 = (auVar230._12_4_ >> 8) + (auVar131._12_4_ >> 8);
          iVar311 = (uStack_f0 >> 8) - iVar290;
          iVar319 = (uStack_ec >> 8) - iVar294;
          iVar321 = (uStack_e8 >> 8) - iVar298;
          iVar324 = (uStack_e4 >> 8) - iVar310;
          iVar275 = (uVar299 >> 8) - iVar300;
          iVar287 = (uVar303 >> 8) - iVar304;
          iVar323 = (uVar305 >> 8) - iVar306;
          iVar278 = (uVar307 >> 8) - iVar308;
          auVar211._0_8_ = CONCAT44(-(uint)(uVar150 < 0x4000),-(uint)(uVar146 < 0x4000));
          auVar211._8_4_ = -(uint)(uVar153 < 0x4000);
          auVar211._12_4_ = -(uint)(uVar156 < 0x4000);
          auVar219._0_4_ = uVar146 >> 6;
          auVar219._4_4_ = uVar150 >> 6;
          auVar219._8_4_ = uVar153 >> 6;
          auVar219._12_4_ = uVar156 >> 6;
          auVar119[0] = ~-(uVar335 < 0x379a);
          auVar119._1_3_ = 0;
          auVar119[4] = ~(byte)iVar340;
          auVar119._5_2_ = 0;
          auVar119[7] = ~(byte)((uint)iVar340 >> 0x18);
          auVar119[8] = ~(byte)iVar342;
          auVar119[9] = ~(byte)((uint)iVar342 >> 8);
          auVar119[10] = ~(byte)((uint)iVar342 >> 0x10);
          auVar119[0xb] = ~(byte)((uint)iVar342 >> 0x18);
          auVar119[0xc] = ~(byte)iVar344;
          auVar119[0xd] = ~(byte)((uint)iVar344 >> 8);
          auVar119[0xe] = ~(byte)((uint)iVar344 >> 0x10);
          auVar119[0xf] = ~(byte)((uint)iVar344 >> 0x18);
          auVar118._8_8_ = auVar211._8_8_;
          auVar118._0_8_ = auVar211._0_8_;
          auVar119 = auVar119 ^ (auVar119 ^ auVar219) & auVar118;
          uVar146 = iVar275 + 0x2204;
          uVar150 = iVar287 + 0x2204;
          uVar153 = iVar323 + 0x2204;
          uVar156 = iVar278 + 0x2204;
          iVar287 = -(uint)(iVar287 < -0x2204);
          iVar323 = -(uint)(iVar323 < -0x2204);
          iVar278 = -(uint)(iVar278 < -0x2204);
          auVar212._0_4_ = -(uint)(uVar146 < 0x4000);
          auVar212._4_4_ = -(uint)(uVar150 < 0x4000);
          auVar212._8_4_ = -(uint)(uVar153 < 0x4000);
          auVar212._12_4_ = -(uint)(uVar156 < 0x4000);
          auVar336._0_4_ = uVar146 >> 6;
          auVar336._4_4_ = uVar150 >> 6;
          auVar336._8_4_ = uVar153 >> 6;
          auVar336._12_4_ = uVar156 >> 6;
          auVar231[0] = ~-(iVar275 < -0x2204);
          auVar231._1_3_ = 0;
          auVar231[4] = ~(byte)iVar287;
          auVar231._5_2_ = 0;
          auVar231[7] = ~(byte)((uint)iVar287 >> 0x18);
          auVar231[8] = ~(byte)iVar323;
          auVar231[9] = ~(byte)((uint)iVar323 >> 8);
          auVar231[10] = ~(byte)((uint)iVar323 >> 0x10);
          auVar231[0xb] = ~(byte)((uint)iVar323 >> 0x18);
          auVar231[0xc] = ~(byte)iVar278;
          auVar231[0xd] = ~(byte)((uint)iVar278 >> 8);
          auVar231[0xe] = ~(byte)((uint)iVar278 >> 0x10);
          auVar231[0xf] = ~(byte)((uint)iVar278 >> 0x18);
          auVar336 = auVar336 ^ (auVar336 ^ auVar231) & ~auVar212;
          uVar146 = iVar311 + 0x2204;
          uVar150 = iVar319 + 0x2204;
          uVar153 = iVar321 + 0x2204;
          uVar156 = iVar324 + 0x2204;
          iVar275 = -(uint)(iVar319 < -0x2204);
          iVar287 = -(uint)(iVar321 < -0x2204);
          iVar323 = -(uint)(iVar324 < -0x2204);
          auVar213._0_4_ = -(uint)(uVar146 < 0x4000);
          auVar213._4_4_ = -(uint)(uVar150 < 0x4000);
          auVar213._8_4_ = -(uint)(uVar153 < 0x4000);
          auVar213._12_4_ = -(uint)(uVar156 < 0x4000);
          auVar232._0_4_ = uVar146 >> 6;
          auVar232._4_4_ = uVar150 >> 6;
          auVar232._8_4_ = uVar153 >> 6;
          auVar232._12_4_ = uVar156 >> 6;
          auVar314[0] = ~-(iVar311 < -0x2204);
          auVar314._1_3_ = 0;
          auVar314[4] = ~(byte)iVar275;
          auVar314._5_2_ = 0;
          auVar314[7] = ~(byte)((uint)iVar275 >> 0x18);
          auVar314[8] = ~(byte)iVar287;
          auVar314[9] = ~(byte)((uint)iVar287 >> 8);
          auVar314[10] = ~(byte)((uint)iVar287 >> 0x10);
          auVar314[0xb] = ~(byte)((uint)iVar287 >> 0x18);
          auVar314[0xc] = ~(byte)iVar323;
          auVar314[0xd] = ~(byte)((uint)iVar323 >> 8);
          auVar314[0xe] = ~(byte)((uint)iVar323 >> 0x10);
          auVar314[0xf] = ~(byte)((uint)iVar323 >> 0x18);
          auVar232 = auVar232 ^ (auVar232 ^ auVar314) & ~auVar213;
          uVar146 = uVar353 - 0x379a;
          uVar150 = uVar359 - 0x379a;
          uVar153 = uVar362 - 0x379a;
          uVar156 = uVar365 - 0x379a;
          iVar275 = -(uint)(uVar359 < 0x379a);
          iVar287 = -(uint)(uVar362 < 0x379a);
          iVar323 = -(uint)(uVar365 < 0x379a);
          auVar214._0_4_ = -(uint)(uVar146 < 0x4000);
          auVar214._4_4_ = -(uint)(uVar150 < 0x4000);
          auVar214._8_4_ = -(uint)(uVar153 < 0x4000);
          auVar214._12_4_ = -(uint)(uVar156 < 0x4000);
          auVar315._0_4_ = uVar146 >> 6;
          auVar315._4_4_ = uVar150 >> 6;
          auVar315._8_4_ = uVar153 >> 6;
          auVar315._12_4_ = uVar156 >> 6;
          auVar354[0] = ~-(uVar353 < 0x379a);
          auVar354._1_3_ = 0;
          auVar354[4] = ~(byte)iVar275;
          auVar354._5_2_ = 0;
          auVar354[7] = ~(byte)((uint)iVar275 >> 0x18);
          auVar354[8] = ~(byte)iVar287;
          auVar354[9] = ~(byte)((uint)iVar287 >> 8);
          auVar354[10] = ~(byte)((uint)iVar287 >> 0x10);
          auVar354[0xb] = ~(byte)((uint)iVar287 >> 0x18);
          auVar354[0xc] = ~(byte)iVar323;
          auVar354[0xd] = ~(byte)((uint)iVar323 >> 8);
          auVar354[0xe] = ~(byte)((uint)iVar323 >> 0x10);
          auVar354[0xf] = ~(byte)((uint)iVar323 >> 0x18);
          auVar315 = auVar315 ^ (auVar315 ^ auVar354) & ~auVar214;
          uVar299 = uVar352 + (uStack_f0 >> 8);
          uVar303 = uVar358 + (uStack_ec >> 8);
          uVar305 = uVar361 + (uStack_e8 >> 8);
          uVar307 = uVar364 + (uStack_e4 >> 8);
          uVar146 = uVar299 - 0x379a;
          uVar150 = uVar303 - 0x379a;
          uVar153 = uVar305 - 0x379a;
          uVar156 = uVar307 - 0x379a;
          iVar323 = -(uint)(uVar303 < 0x379a);
          iVar278 = -(uint)(uVar305 < 0x379a);
          iVar311 = -(uint)(uVar307 < 0x379a);
          uVar193 = uVar193 + (uStack_f0 >> 8);
          uVar205 = uVar205 + (uStack_ec >> 8);
          uVar207 = uVar207 + (uStack_e8 >> 8);
          uVar209 = uVar209 + (uStack_e4 >> 8);
          uVar256 = uVar256 + (uVar328 >> 8);
          uVar267 = uVar267 + (uVar152 >> 8);
          uVar270 = uVar270 + (uVar155 >> 8);
          uVar273 = uVar273 + (uVar158 >> 8);
          uVar351 = uVar351 + (uVar113 >> 8);
          uVar357 = uVar357 + (uVar121 >> 8);
          uVar360 = uVar360 + (uVar124 >> 8);
          uVar363 = uVar363 + (uVar127 >> 8);
          uVar352 = uVar352 + (uVar345 >> 8);
          uVar358 = uVar358 + (uVar348 >> 8);
          uVar361 = uVar361 + (uVar349 >> 8);
          uVar364 = uVar364 + (uVar350 >> 8);
          uVar366 = uVar366 + (uVar160 >> 8);
          uVar373 = uVar373 + (uVar224 >> 8);
          uVar374 = uVar374 + (uVar107 >> 8);
          uVar375 = uVar375 + (uVar110 >> 8);
          iVar275 = -(uint)(uVar150 < 0x4000);
          iVar287 = -(uint)(uVar156 < 0x4000);
          auVar215._0_4_ = uVar146 >> 6;
          auVar215._4_4_ = uVar150 >> 6;
          auVar215._8_4_ = uVar153 >> 6;
          auVar215._12_4_ = uVar156 >> 6;
          auVar222[0] = ~-(uVar299 < 0x379a);
          auVar222._1_3_ = 0;
          auVar222[4] = ~(byte)iVar323;
          auVar222._5_2_ = 0;
          auVar222[7] = ~(byte)((uint)iVar323 >> 0x18);
          auVar222[8] = ~(byte)iVar278;
          auVar222[9] = ~(byte)((uint)iVar278 >> 8);
          auVar222[10] = ~(byte)((uint)iVar278 >> 0x10);
          auVar222[0xb] = ~(byte)((uint)iVar278 >> 0x18);
          auVar222[0xc] = ~(byte)iVar311;
          auVar222[0xd] = ~(byte)((uint)iVar311 >> 8);
          auVar222[0xe] = ~(byte)((uint)iVar311 >> 0x10);
          auVar222[0xf] = ~(byte)((uint)iVar311 >> 0x18);
          auVar221[0xc] = (char)iVar287;
          auVar221._8_4_ = -(uint)(uVar153 < 0x4000);
          auVar221[0xd] = (char)((uint)iVar287 >> 8);
          auVar221[0xe] = (char)((uint)iVar287 >> 0x10);
          auVar221[0xf] = (char)((uint)iVar287 >> 0x18);
          auVar221._1_3_ = 0;
          auVar221[0] = -(uVar146 < 0x4000);
          auVar221[4] = (char)iVar275;
          auVar221._5_2_ = 0;
          auVar221[7] = (char)((uint)iVar275 >> 0x18);
          auVar222 = auVar222 ^ (auVar222 ^ auVar215) & auVar221;
          uVar146 = uVar366 - 0x379a;
          uVar150 = uVar373 - 0x379a;
          uVar153 = uVar374 - 0x379a;
          uVar156 = uVar375 - 0x379a;
          iVar278 = -(uint)(uVar373 < 0x379a);
          iVar311 = -(uint)(uVar374 < 0x379a);
          iVar319 = -(uint)(uVar375 < 0x379a);
          iVar275 = -(uint)(uVar150 < 0x4000);
          iVar287 = -(uint)(uVar153 < 0x4000);
          iVar323 = -(uint)(uVar156 < 0x4000);
          auVar355._0_4_ = uVar146 >> 6;
          auVar355._4_4_ = uVar150 >> 6;
          auVar355._8_4_ = uVar153 >> 6;
          auVar355._12_4_ = uVar156 >> 6;
          auVar368[0] = ~-(uVar366 < 0x379a);
          auVar368._1_3_ = 0;
          auVar368[4] = ~(byte)iVar278;
          auVar368._5_2_ = 0;
          auVar368[7] = ~(byte)((uint)iVar278 >> 0x18);
          auVar368[8] = ~(byte)iVar311;
          auVar368[9] = ~(byte)((uint)iVar311 >> 8);
          auVar368[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar368[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar368[0xc] = ~(byte)iVar319;
          auVar368[0xd] = ~(byte)((uint)iVar319 >> 8);
          auVar368[0xe] = ~(byte)((uint)iVar319 >> 0x10);
          auVar368[0xf] = ~(byte)((uint)iVar319 >> 0x18);
          auVar131[6] = 0;
          auVar131._0_6_ = (uint6)CONCAT14((char)iVar275,-(uint)(uVar146 < 0x4000)) & 0xffff0000ffff
          ;
          auVar131[7] = (char)((uint)iVar275 >> 0x18);
          auVar131[8] = (char)iVar287;
          auVar131[9] = (char)((uint)iVar287 >> 8);
          auVar131[10] = (char)((uint)iVar287 >> 0x10);
          auVar131[0xb] = (char)((uint)iVar287 >> 0x18);
          auVar131[0xc] = (char)iVar323;
          auVar131[0xd] = (char)((uint)iVar323 >> 8);
          auVar131[0xe] = (char)((uint)iVar323 >> 0x10);
          auVar131[0xf] = (char)((uint)iVar323 >> 0x18);
          auVar355 = auVar355 ^ (auVar355 ^ auVar368) & ~auVar131;
          uVar146 = uVar352 - 0x379a;
          uVar150 = uVar358 - 0x379a;
          uVar153 = uVar361 - 0x379a;
          uVar156 = uVar364 - 0x379a;
          iVar278 = -(uint)(uVar358 < 0x379a);
          iVar311 = -(uint)(uVar361 < 0x379a);
          iVar319 = -(uint)(uVar364 < 0x379a);
          iVar275 = -(uint)(uVar150 < 0x4000);
          iVar287 = -(uint)(uVar153 < 0x4000);
          iVar323 = -(uint)(uVar156 < 0x4000);
          auVar369._0_4_ = uVar146 >> 6;
          auVar369._4_4_ = uVar150 >> 6;
          auVar369._8_4_ = uVar153 >> 6;
          auVar369._12_4_ = uVar156 >> 6;
          auVar331[0] = ~-(uVar352 < 0x379a);
          auVar331._1_3_ = 0;
          auVar331[4] = ~(byte)iVar278;
          auVar331._5_2_ = 0;
          auVar331[7] = ~(byte)((uint)iVar278 >> 0x18);
          auVar331[8] = ~(byte)iVar311;
          auVar331[9] = ~(byte)((uint)iVar311 >> 8);
          auVar331[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar331[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar331[0xc] = ~(byte)iVar319;
          auVar331[0xd] = ~(byte)((uint)iVar319 >> 8);
          auVar331[0xe] = ~(byte)((uint)iVar319 >> 0x10);
          auVar331[0xf] = ~(byte)((uint)iVar319 >> 0x18);
          auVar230._1_3_ = 0;
          auVar230[0] = -(uVar146 < 0x4000);
          auVar230[4] = (char)iVar275;
          auVar230._5_2_ = 0;
          auVar230[7] = (char)((uint)iVar275 >> 0x18);
          auVar230[8] = (char)iVar287;
          auVar230[9] = (char)((uint)iVar287 >> 8);
          auVar230[10] = (char)((uint)iVar287 >> 0x10);
          auVar230[0xb] = (char)((uint)iVar287 >> 0x18);
          auVar230[0xc] = (char)iVar323;
          auVar230[0xd] = (char)((uint)iVar323 >> 8);
          auVar230[0xe] = (char)((uint)iVar323 >> 0x10);
          auVar230[0xf] = (char)((uint)iVar323 >> 0x18);
          auVar331 = auVar331 ^ (auVar331 ^ auVar369) & auVar230;
          uVar146 = uVar351 - 0x379a;
          uVar150 = uVar357 - 0x379a;
          uVar153 = uVar360 - 0x379a;
          uVar156 = uVar363 - 0x379a;
          iVar278 = -(uint)(uVar357 < 0x379a);
          iVar311 = -(uint)(uVar360 < 0x379a);
          iVar319 = -(uint)(uVar363 < 0x379a);
          iVar275 = -(uint)(uVar150 < 0x4000);
          iVar287 = -(uint)(uVar153 < 0x4000);
          iVar323 = -(uint)(uVar156 < 0x4000);
          auVar370._0_4_ = uVar146 >> 6;
          auVar370._4_4_ = uVar150 >> 6;
          auVar370._8_4_ = uVar153 >> 6;
          auVar370._12_4_ = uVar156 >> 6;
          auVar376[0] = ~-(uVar351 < 0x379a);
          auVar376._1_3_ = 0;
          auVar376[4] = ~(byte)iVar278;
          auVar376._5_2_ = 0;
          auVar376[7] = ~(byte)((uint)iVar278 >> 0x18);
          auVar376[8] = ~(byte)iVar311;
          auVar376[9] = ~(byte)((uint)iVar311 >> 8);
          auVar376[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar376[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar376[0xc] = ~(byte)iVar319;
          auVar376[0xd] = ~(byte)((uint)iVar319 >> 8);
          auVar376[0xe] = ~(byte)((uint)iVar319 >> 0x10);
          auVar376[0xf] = ~(byte)((uint)iVar319 >> 0x18);
          auVar138[6] = 0;
          auVar138._0_6_ = (uint6)CONCAT14((char)iVar275,-(uint)(uVar146 < 0x4000)) & 0xffff0000ffff
          ;
          auVar138[7] = (char)((uint)iVar275 >> 0x18);
          auVar138[8] = (char)iVar287;
          auVar138[9] = (char)((uint)iVar287 >> 8);
          auVar138[10] = (char)((uint)iVar287 >> 0x10);
          auVar138[0xb] = (char)((uint)iVar287 >> 0x18);
          auVar138[0xc] = (char)iVar323;
          auVar138[0xd] = (char)((uint)iVar323 >> 8);
          auVar138[0xe] = (char)((uint)iVar323 >> 0x10);
          auVar138[0xf] = (char)((uint)iVar323 >> 0x18);
          auVar370 = auVar370 ^ (auVar370 ^ auVar376) & ~auVar138;
          uVar351 = uVar256 - 0x379a;
          uVar357 = uVar267 - 0x379a;
          uVar360 = uVar270 - 0x379a;
          uVar363 = uVar273 - 0x379a;
          iVar278 = -(uint)(uVar267 < 0x379a);
          iVar311 = -(uint)(uVar270 < 0x379a);
          iVar319 = -(uint)(uVar273 < 0x379a);
          iVar275 = -(uint)(uVar357 < 0x4000);
          iVar287 = -(uint)(uVar360 < 0x4000);
          iVar323 = -(uint)(uVar363 < 0x4000);
          auVar377._0_4_ = uVar351 >> 6;
          auVar377._4_4_ = uVar357 >> 6;
          auVar377._8_4_ = uVar360 >> 6;
          auVar377._12_4_ = uVar363 >> 6;
          auVar280[0] = ~-(uVar256 < 0x379a);
          auVar280._1_3_ = 0;
          auVar280[4] = ~(byte)iVar278;
          auVar280._5_2_ = 0;
          auVar280[7] = ~(byte)((uint)iVar278 >> 0x18);
          auVar280[8] = ~(byte)iVar311;
          auVar280[9] = ~(byte)((uint)iVar311 >> 8);
          auVar280[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar280[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar280[0xc] = ~(byte)iVar319;
          auVar280[0xd] = ~(byte)((uint)iVar319 >> 8);
          auVar280[0xe] = ~(byte)((uint)iVar319 >> 0x10);
          auVar280[0xf] = ~(byte)((uint)iVar319 >> 0x18);
          auVar185._1_3_ = 0;
          auVar185[0] = -(uVar351 < 0x4000);
          auVar185[4] = (char)iVar275;
          auVar185._5_2_ = 0;
          auVar185[7] = (char)((uint)iVar275 >> 0x18);
          auVar185[8] = (char)iVar287;
          auVar185[9] = (char)((uint)iVar287 >> 8);
          auVar185[10] = (char)((uint)iVar287 >> 0x10);
          auVar185[0xb] = (char)((uint)iVar287 >> 0x18);
          auVar185[0xc] = (char)iVar323;
          auVar185[0xd] = (char)((uint)iVar323 >> 8);
          auVar185[0xe] = (char)((uint)iVar323 >> 0x10);
          auVar185[0xf] = (char)((uint)iVar323 >> 0x18);
          auVar377 = auVar377 ^ (auVar377 ^ auVar280) & ~auVar185;
          uVar351 = uVar193 - 0x4515;
          uVar360 = uVar205 - 0x4515;
          uVar146 = uVar207 - 0x4515;
          uVar153 = uVar209 - 0x4515;
          iVar275 = -(uint)(uVar351 < 0x4000);
          iVar287 = -(uint)(uVar360 < 0x4000);
          iVar323 = -(uint)(uVar146 < 0x4000);
          iVar278 = -(uint)(uVar153 < 0x4000);
          uVar357 = uVar351 >> 6;
          uVar363 = uVar360 >> 6;
          uVar150 = uVar146 >> 6;
          auVar48[8] = 0xff;
          auVar48._0_8_ = 0xffffffffffffffff;
          auVar48._9_7_ = 0xffffffffffffff;
          auVar47[8] = 0xff;
          auVar47._0_8_ = 0xffffffffffffffff;
          auVar47._9_7_ = 0xffffffffffffff;
          auVar7[8] = 0xff;
          auVar7._0_8_ = 0xffffffffffffffff;
          auVar6[8] = 0xff;
          auVar6._0_8_ = 0xffffffffffffffff;
          auVar325[8] = 0xff;
          auVar325._0_8_ = 0xffffffffffffffff;
          auVar196[8] = 0xff;
          auVar196._0_8_ = 0xffffffffffffffff;
          auVar42[1] = (byte)(uVar184 >> 8) & (byte)((uint)iVar309 >> 8);
          auVar42[0] = (byte)uVar184 & (byte)iVar309 | ~-(uVar147 < 0x4515) & ~(byte)iVar309;
          auVar42[2] = (byte)(uVar184 >> 0x10) & (byte)((uint)iVar309 >> 0x10);
          auVar42[3] = (byte)(uVar183 >> 0x1e) & (byte)((uint)iVar309 >> 0x18);
          auVar42[4] = (byte)uVar188 & (byte)iVar318 | ~-(uVar151 < 0x4515) & ~(byte)iVar318;
          auVar42[5] = (byte)(uVar188 >> 8) & (byte)((uint)iVar318 >> 8);
          auVar42[6] = (byte)(uVar188 >> 0x10) & (byte)((uint)iVar318 >> 0x10);
          auVar42[7] = (byte)(uVar187 >> 0x1e) & (byte)((uint)iVar318 >> 0x18);
          auVar42[8] = (byte)uVar190 & (byte)iVar320 | ~-(uVar154 < 0x4515) & ~(byte)iVar320;
          auVar42[9] = (byte)(uVar190 >> 8) & (byte)((uint)iVar320 >> 8);
          auVar42[10] = (byte)(uVar190 >> 0x10) & (byte)((uint)iVar320 >> 0x10);
          auVar42[0xb] = (byte)(uVar189 >> 0x1e) & (byte)((uint)iVar320 >> 0x18);
          auVar42[0xc] = (byte)uVar192 & (byte)iVar322 | ~-(uVar157 < 0x4515) & ~(byte)iVar322;
          auVar42[0xd] = (byte)(uVar192 >> 8) & (byte)((uint)iVar322 >> 8);
          auVar42[0xe] = (byte)(uVar192 >> 0x10) & (byte)((uint)iVar322 >> 0x10);
          auVar42[0xf] = (byte)(uVar191 >> 0x1e) & (byte)((uint)iVar322 >> 0x18);
          auVar149[8] = (byte)uVar246 & (byte)iVar291 | ~-(uVar177 < 0x4515) & ~(byte)iVar291;
          auVar216[0] = (byte)uVar357 & (byte)iVar275 | ~-(uVar193 < 0x4515) & ~(byte)iVar275;
          auVar216[1] = (byte)(uVar357 >> 8) & (byte)((uint)iVar275 >> 8);
          auVar216[2] = (byte)(uVar357 >> 0x10) & (byte)((uint)iVar275 >> 0x10);
          auVar216[3] = (byte)(uVar351 >> 0x1e) & (byte)((uint)iVar275 >> 0x18);
          auVar216[4] = (byte)uVar363 & (byte)iVar287 | ~-(uVar205 < 0x4515) & ~(byte)iVar287;
          auVar216[5] = (byte)(uVar363 >> 8) & (byte)((uint)iVar287 >> 8);
          auVar216[6] = (byte)(uVar363 >> 0x10) & (byte)((uint)iVar287 >> 0x10);
          auVar216[7] = (byte)(uVar360 >> 0x1e) & (byte)((uint)iVar287 >> 0x18);
          auVar216[8] = (byte)uVar150 & (byte)iVar323 | ~-(uVar207 < 0x4515) & ~(byte)iVar323;
          auVar216[9] = (byte)(uVar150 >> 8) & (byte)((uint)iVar323 >> 8);
          auVar216[10] = (byte)(uVar150 >> 0x10) & (byte)((uint)iVar323 >> 0x10);
          auVar216[0xb] = (byte)(uVar146 >> 0x1e) & (byte)((uint)iVar323 >> 0x18);
          auVar216[0xc] =
               (byte)(uVar153 >> 6) & (byte)iVar278 | ~-(uVar209 < 0x4515) & ~(byte)iVar278;
          auVar216[0xd] = (byte)((uVar153 >> 6) >> 8) & (byte)((uint)iVar278 >> 8);
          auVar216[0xe] = (byte)((uint3)(uVar153 >> 0xe) >> 8) & (byte)((uint)iVar278 >> 0x10);
          auVar216[0xf] = (byte)(uVar153 >> 0x1e) & (byte)((uint)iVar278 >> 0x18);
          iVar255 = (uVar328 >> 8) - iVar255;
          iVar266 = (uVar152 >> 8) - iVar266;
          iVar269 = (uVar155 >> 8) - iVar269;
          iVar272 = (uVar158 >> 8) - iVar272;
          iVar159 = (uVar113 >> 8) - iVar159;
          iVar172 = (uVar121 >> 8) - iVar172;
          iVar176 = (uVar124 >> 8) - iVar176;
          iVar180 = (uVar127 >> 8) - iVar180;
          iVar290 = (uVar345 >> 8) - iVar290;
          iVar294 = (uVar348 >> 8) - iVar294;
          iVar298 = (uVar349 >> 8) - iVar298;
          iVar310 = (uVar350 >> 8) - iVar310;
          iVar300 = (uVar160 >> 8) - iVar300;
          iVar304 = (uVar224 >> 8) - iVar304;
          iVar306 = (uVar107 >> 8) - iVar306;
          iVar308 = (uVar110 >> 8) - iVar308;
          uStack_1a0 = auVar117[0];
          uStack_19c = auVar117[4];
          uStack_198 = auVar117[8];
          uStack_194 = auVar117[0xc];
          uVar113 = iVar300 + 0x2204;
          uVar121 = iVar304 + 0x2204;
          uVar124 = iVar306 + 0x2204;
          uVar127 = iVar308 + 0x2204;
          uVar87 = auVar119[0];
          uVar88 = auVar119[4];
          uVar89 = auVar119[8];
          uVar90 = auVar119[0xc];
          uVar91 = auVar167[0];
          uVar92 = auVar167[4];
          uVar93 = auVar167[8];
          uVar94 = auVar167[0xc];
          uVar95 = auVar198[0];
          uVar96 = auVar198[4];
          uVar97 = auVar198[8];
          uVar98 = auVar198[0xc];
          uVar160 = iVar290 + 0x2204;
          uVar224 = iVar294 + 0x2204;
          uVar107 = iVar298 + 0x2204;
          uVar110 = iVar310 + 0x2204;
          uVar146 = iVar159 + 0x2204;
          uVar147 = iVar172 + 0x2204;
          uVar328 = iVar176 + 0x2204;
          uVar150 = iVar180 + 0x2204;
          uVar351 = iVar255 + 0x2204;
          uVar357 = iVar266 + 0x2204;
          uVar360 = iVar269 + 0x2204;
          uVar363 = iVar272 + 0x2204;
          iVar304 = -(uint)(iVar304 < -0x2204);
          iVar311 = -(uint)(iVar306 < -0x2204);
          iVar306 = -(uint)(iVar308 < -0x2204);
          iVar278 = -(uint)(iVar294 < -0x2204);
          iVar294 = -(uint)(iVar298 < -0x2204);
          iVar298 = -(uint)(iVar310 < -0x2204);
          iVar172 = -(uint)(iVar172 < -0x2204);
          iVar176 = -(uint)(iVar176 < -0x2204);
          iVar180 = -(uint)(iVar180 < -0x2204);
          iVar275 = -(uint)(iVar266 < -0x2204);
          iVar287 = -(uint)(iVar269 < -0x2204);
          iVar323 = -(uint)(iVar272 < -0x2204);
          auVar301[1] = auVar222[4];
          auVar301[0] = auVar222[0];
          auVar301[2] = auVar222[8];
          auVar301[3] = auVar222[0xc];
          auVar301[4] = auVar315[0];
          auVar301[5] = auVar315[4];
          auVar301[6] = auVar315[8];
          auVar301[7] = auVar315[0xc];
          auVar301[8] = auVar232[0];
          auVar301[9] = auVar232[4];
          auVar301[10] = auVar232[8];
          auVar301[0xb] = auVar232[0xc];
          auVar301[0xc] = auVar336[0];
          auVar301[0xd] = auVar336[4];
          auVar301[0xe] = auVar336[8];
          auVar301[0xf] = auVar336[0xc];
          auVar281._8_4_ = 0x2c282420;
          auVar281._0_8_ = 0x1c1814100c080400;
          auVar261._8_4_ = 0x2c282420;
          auVar261._0_8_ = 0x1c1814100c080400;
          auVar43[1] = (byte)(uVar162 >> 8) & (byte)((uint)iVar228 >> 8);
          auVar43[0] = (byte)uVar162 & (byte)iVar228 | ~-(uVar194 < 0x4515) & ~(byte)iVar228;
          auVar43[2] = (byte)(uVar162 >> 0x10) & (byte)((uint)iVar228 >> 0x10);
          auVar43[3] = (byte)(uVar161 >> 0x1e) & (byte)((uint)iVar228 >> 0x18);
          auVar43[4] = (byte)uVar175 & (byte)iVar244 | ~-(uVar206 < 0x4515) & ~(byte)iVar244;
          auVar43[5] = (byte)(uVar175 >> 8) & (byte)((uint)iVar244 >> 8);
          auVar43[6] = (byte)(uVar175 >> 0x10) & (byte)((uint)iVar244 >> 0x10);
          auVar43[7] = (byte)(uVar174 >> 0x1e) & (byte)((uint)iVar244 >> 0x18);
          auVar43[8] = (byte)uVar179 & (byte)iVar250 | ~-(uVar208 < 0x4515) & ~(byte)iVar250;
          auVar43[9] = (byte)(uVar179 >> 8) & (byte)((uint)iVar250 >> 8);
          auVar43[10] = (byte)(uVar179 >> 0x10) & (byte)((uint)iVar250 >> 0x10);
          auVar43[0xb] = (byte)(uVar178 >> 0x1e) & (byte)((uint)iVar250 >> 0x18);
          auVar43[0xc] = (byte)(uVar182 >> 6) & (byte)iVar254 |
                         ~-(uVar210 < 0x4515) & ~(byte)iVar254;
          auVar43[0xd] = (byte)((uVar182 >> 6) >> 8) & (byte)((uint)iVar254 >> 8);
          auVar43[0xe] = (byte)((uint3)(uVar182 >> 0xe) >> 8) & (byte)((uint)iVar254 >> 0x10);
          auVar43[0xf] = (byte)(uVar182 >> 0x1e) & (byte)((uint)iVar254 >> 0x18);
          auVar44[1] = (byte)(uVar227 >> 8) & (byte)((uint)iVar277 >> 8);
          auVar44[0] = (byte)uVar227 & (byte)iVar277 | ~-(uVar257 < 0x4515) & ~(byte)iVar277;
          auVar44[2] = (byte)(uVar227 >> 0x10) & (byte)((uint)iVar277 >> 0x10);
          auVar44[3] = (byte)(uVar226 >> 0x1e) & (byte)((uint)iVar277 >> 0x18);
          auVar44[4] = (byte)uVar243 & (byte)iVar289 | ~-(uVar268 < 0x4515) & ~(byte)iVar289;
          auVar44[5] = (byte)(uVar243 >> 8) & (byte)((uint)iVar289 >> 8);
          auVar44[6] = (byte)(uVar243 >> 0x10) & (byte)((uint)iVar289 >> 0x10);
          auVar44[7] = (byte)(uVar242 >> 0x1e) & (byte)((uint)iVar289 >> 0x18);
          auVar44[8] = (byte)uVar249 & (byte)iVar293 | ~-(uVar271 < 0x4515) & ~(byte)iVar293;
          auVar44[9] = (byte)(uVar249 >> 8) & (byte)((uint)iVar293 >> 8);
          auVar44[10] = (byte)(uVar249 >> 0x10) & (byte)((uint)iVar293 >> 0x10);
          auVar44[0xb] = (byte)(uVar248 >> 0x1e) & (byte)((uint)iVar293 >> 0x18);
          auVar44[0xc] = (byte)(uVar253 >> 6) & (byte)iVar297 |
                         ~-(uVar274 < 0x4515) & ~(byte)iVar297;
          auVar44[0xd] = (byte)((uVar253 >> 6) >> 8) & (byte)((uint)iVar297 >> 8);
          auVar44[0xe] = (byte)((uint3)(uVar253 >> 0xe) >> 8) & (byte)((uint)iVar297 >> 0x10);
          auVar44[0xf] = (byte)(uVar253 >> 0x1e) & (byte)((uint)iVar297 >> 0x18);
          auVar45[1] = (byte)(uVar223 >> 8) & (byte)((uint)iVar276 >> 8);
          auVar45[0] = (byte)uVar223 & (byte)iVar276 | ~-(uVar129 < 0x4515) & ~(byte)iVar276;
          auVar45[2] = (byte)(uVar223 >> 0x10) & (byte)((uint)iVar276 >> 0x10);
          auVar45[3] = (byte)(uVar173 >> 0x1e) & (byte)((uint)iVar276 >> 0x18);
          auVar45[4] = (byte)uVar240 & (byte)iVar288 | ~-(uVar133 < 0x4515) & ~(byte)iVar288;
          auVar45[5] = (byte)(uVar240 >> 8) & (byte)((uint)iVar288 >> 8);
          auVar45[6] = (byte)(uVar240 >> 0x10) & (byte)((uint)iVar288 >> 0x10);
          auVar45[7] = (byte)(uVar239 >> 0x1e) & (byte)((uint)iVar288 >> 0x18);
          auVar45[8] = (byte)uVar109 & (byte)iVar292 | ~-(uVar134 < 0x4515) & ~(byte)iVar292;
          auVar45[9] = (byte)(uVar109 >> 8) & (byte)((uint)iVar292 >> 8);
          auVar45[10] = (byte)(uVar109 >> 0x10) & (byte)((uint)iVar292 >> 0x10);
          auVar45[0xb] = (byte)(uVar108 >> 0x1e) & (byte)((uint)iVar292 >> 0x18);
          auVar45[0xc] = (byte)uVar112 & (byte)iVar296 | ~-(uVar135 < 0x4515) & ~(byte)iVar296;
          auVar45[0xd] = (byte)(uVar112 >> 8) & (byte)((uint)iVar296 >> 8);
          auVar45[0xe] = (byte)(uVar112 >> 0x10) & (byte)((uint)iVar296 >> 0x10);
          auVar45[0xf] = (byte)(uVar111 >> 0x1e) & (byte)((uint)iVar296 >> 0x18);
          auVar46[1] = (byte)(uVar115 >> 8) & (byte)((uint)iVar225 >> 8);
          auVar46[0] = (byte)uVar115 & (byte)iVar225 | ~-(uVar136 < 0x4515) & ~(byte)iVar225;
          auVar46[2] = (byte)(uVar115 >> 0x10) & (byte)((uint)iVar225 >> 0x10);
          auVar46[3] = (byte)(uVar114 >> 0x1e) & (byte)((uint)iVar225 >> 0x18);
          auVar46[4] = (byte)uVar123 & (byte)iVar241 | ~-(uVar143 < 0x4515) & ~(byte)iVar241;
          auVar46[5] = (byte)(uVar123 >> 8) & (byte)((uint)iVar241 >> 8);
          auVar46[6] = (byte)(uVar123 >> 0x10) & (byte)((uint)iVar241 >> 0x10);
          auVar46[7] = (byte)(uVar122 >> 0x1e) & (byte)((uint)iVar241 >> 0x18);
          auVar46[8] = (byte)uVar126 & (byte)iVar247 | ~-(uVar144 < 0x4515) & ~(byte)iVar247;
          auVar46[9] = (byte)(uVar126 >> 8) & (byte)((uint)iVar247 >> 8);
          auVar46[10] = (byte)(uVar126 >> 0x10) & (byte)((uint)iVar247 >> 0x10);
          auVar46[0xb] = (byte)(uVar125 >> 0x1e) & (byte)((uint)iVar247 >> 0x18);
          auVar46[0xc] = (byte)(uVar128 >> 6) & (byte)iVar252 |
                         ~-(uVar145 < 0x4515) & ~(byte)iVar252;
          auVar46[0xd] = (byte)((uVar128 >> 6) >> 8) & (byte)((uint)iVar252 >> 8);
          auVar46[0xe] = (byte)((uint3)(uVar128 >> 0xe) >> 8) & (byte)((uint)iVar252 >> 0x10);
          auVar46[0xf] = (byte)(uVar128 >> 0x1e) & (byte)((uint)iVar252 >> 0x18);
          auVar261._12_4_ = 0x3c383430;
          auVar138 = a64_TBL(ZEXT816(0),auVar43,auVar44,auVar45,auVar46,auVar261);
          auVar233._0_4_ = -(uint)(uVar351 < 0x4000);
          auVar233._4_4_ = -(uint)(uVar357 < 0x4000);
          auVar233._8_4_ = -(uint)(uVar360 < 0x4000);
          auVar233._12_4_ = -(uint)(uVar363 < 0x4000);
          auVar337._0_4_ = -(uint)(uVar146 < 0x4000);
          auVar337._4_4_ = -(uint)(uVar147 < 0x4000);
          auVar337._8_4_ = -(uint)(uVar328 < 0x4000);
          auVar337._12_4_ = -(uint)(uVar150 < 0x4000);
          auVar120._0_8_ = CONCAT44(-(uint)(uVar224 < 0x4000),-(uint)(uVar160 < 0x4000));
          auVar120._8_4_ = -(uint)(uVar107 < 0x4000);
          auVar120._12_4_ = -(uint)(uVar110 < 0x4000);
          auVar371._0_4_ = -(uint)(uVar113 < 0x4000);
          auVar371._4_4_ = -(uint)(uVar121 < 0x4000);
          auVar371._8_4_ = -(uint)(uVar124 < 0x4000);
          auVar371._12_4_ = -(uint)(uVar127 < 0x4000);
          auVar316._0_4_ = uVar351 >> 6;
          auVar316._4_4_ = uVar357 >> 6;
          auVar316._8_4_ = uVar360 >> 6;
          auVar316._12_4_ = uVar363 >> 6;
          auVar326._0_4_ = uVar146 >> 6;
          auVar326._4_4_ = uVar147 >> 6;
          auVar326._8_4_ = uVar328 >> 6;
          auVar326._12_4_ = uVar150 >> 6;
          auVar332._0_4_ = uVar160 >> 6;
          auVar332._4_4_ = uVar224 >> 6;
          auVar332._8_4_ = uVar107 >> 6;
          auVar332._12_4_ = uVar110 >> 6;
          auVar199._0_4_ = uVar113 >> 6;
          auVar199._4_4_ = uVar121 >> 6;
          auVar199._8_4_ = uVar124 >> 6;
          auVar199._12_4_ = uVar127 >> 6;
          auVar148[0] = ~-(iVar255 < -0x2204);
          auVar148._1_3_ = 0;
          auVar148[4] = ~(byte)iVar275;
          auVar148._5_2_ = 0;
          auVar148[7] = ~(byte)((uint)iVar275 >> 0x18);
          auVar148[8] = ~(byte)iVar287;
          auVar148[9] = ~(byte)((uint)iVar287 >> 8);
          auVar148[10] = ~(byte)((uint)iVar287 >> 0x10);
          auVar148[0xb] = ~(byte)((uint)iVar287 >> 0x18);
          auVar148[0xc] = ~(byte)iVar323;
          auVar148[0xd] = ~(byte)((uint)iVar323 >> 8);
          auVar148[0xe] = ~(byte)((uint)iVar323 >> 0x10);
          auVar148[0xf] = ~(byte)((uint)iVar323 >> 0x18);
          auVar186[1] = auVar331[4];
          auVar186[0] = auVar331[0];
          auVar186[2] = auVar331[8];
          auVar186[3] = auVar331[0xc];
          auVar186[4] = auVar355[0];
          auVar186[5] = auVar355[4];
          auVar186[6] = auVar355[8];
          auVar186[7] = auVar355[0xc];
          auVar186[8] = auVar377[0];
          auVar186[9] = auVar377[4];
          auVar186[10] = auVar377[8];
          auVar186[0xb] = auVar377[0xc];
          auVar186[0xc] = auVar370[0];
          auVar186[0xd] = auVar370[4];
          auVar186[0xe] = auVar370[8];
          auVar186[0xf] = auVar370[0xc];
          auVar346[0] = ~-(iVar159 < -0x2204);
          auVar346._1_3_ = 0;
          auVar346[4] = ~(byte)iVar172;
          auVar346._5_2_ = 0;
          auVar346[7] = ~(byte)((uint)iVar172 >> 0x18);
          auVar346[8] = ~(byte)iVar176;
          auVar346[9] = ~(byte)((uint)iVar176 >> 8);
          auVar346[10] = ~(byte)((uint)iVar176 >> 0x10);
          auVar346[0xb] = ~(byte)((uint)iVar176 >> 0x18);
          auVar346[0xc] = ~(byte)iVar180;
          auVar346[0xd] = ~(byte)((uint)iVar180 >> 8);
          auVar346[0xe] = ~(byte)((uint)iVar180 >> 0x10);
          auVar346[0xf] = ~(byte)((uint)iVar180 >> 0x18);
          auVar260[0] = ~-(iVar290 < -0x2204);
          auVar260._1_3_ = 0;
          auVar260[4] = ~(byte)iVar278;
          auVar260._5_2_ = 0;
          auVar260[7] = ~(byte)((uint)iVar278 >> 0x18);
          auVar260[8] = ~(byte)iVar294;
          auVar260[9] = ~(byte)((uint)iVar294 >> 8);
          auVar260[10] = ~(byte)((uint)iVar294 >> 0x10);
          auVar260[0xb] = ~(byte)((uint)iVar294 >> 0x18);
          auVar260[0xc] = ~(byte)iVar298;
          auVar260[0xd] = ~(byte)((uint)iVar298 >> 8);
          auVar260[0xe] = ~(byte)((uint)iVar298 >> 0x10);
          auVar260[0xf] = ~(byte)((uint)iVar298 >> 0x18);
          auVar258[0] = ~-(iVar300 < -0x2204);
          auVar258._1_3_ = 0;
          auVar258[4] = ~(byte)iVar304;
          auVar258._5_2_ = 0;
          auVar258[7] = ~(byte)((uint)iVar304 >> 0x18);
          auVar258[8] = ~(byte)iVar311;
          auVar258[9] = ~(byte)((uint)iVar311 >> 8);
          auVar258[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar258[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar258[0xc] = ~(byte)iVar306;
          auVar258[0xd] = ~(byte)((uint)iVar306 >> 8);
          auVar258[0xe] = ~(byte)((uint)iVar306 >> 0x10);
          auVar258[0xf] = ~(byte)((uint)iVar306 >> 0x18);
          auVar199 = auVar199 ^ (auVar199 ^ auVar258) & ~auVar371;
          auVar259._8_8_ = auVar120._8_8_;
          auVar259._0_8_ = auVar120._0_8_;
          auVar260 = auVar260 ^ (auVar260 ^ auVar332) & auVar259;
          auVar149[9] = (byte)(uVar246 >> 8) & (byte)((uint)iVar291 >> 8);
          auVar149[10] = (byte)(uVar246 >> 0x10) & (byte)((uint)iVar291 >> 0x10);
          auVar149[0xb] = (byte)(uVar245 >> 0x1e) & (byte)((uint)iVar291 >> 0x18);
          auVar149[0xc] =
               (byte)(uVar251 >> 6) & (byte)iVar295 | ~-(uVar181 < 0x4515) & ~(byte)iVar295;
          auVar149[0xd] = (byte)((uVar251 >> 6) >> 8) & (byte)((uint)iVar295 >> 8);
          auVar149[0xe] = (byte)((uint3)(uVar251 >> 0xe) >> 8) & (byte)((uint)iVar295 >> 0x10);
          auVar149[0xf] = (byte)(uVar251 >> 0x1e) & (byte)((uint)iVar295 >> 0x18);
          auVar281._12_4_ = 0x3c383430;
          auVar230 = a64_TBL(ZEXT816(0),auVar216,auVar41,auVar42,auVar149,auVar281);
          auVar326 = auVar326 ^ (auVar326 ^ auVar346) & ~auVar337;
          auVar148 = auVar148 ^ (auVar148 ^ auVar316) & auVar233;
          auVar132[1] = auVar260[4];
          auVar132[0] = auVar260[0];
          auVar132[2] = auVar260[8];
          auVar132[3] = auVar260[0xc];
          auVar132[4] = auVar199[0];
          auVar132[5] = auVar199[4];
          auVar132[6] = auVar199[8];
          auVar132[7] = auVar199[0xc];
          auVar132[8] = auVar148[0];
          auVar132[9] = auVar148[4];
          auVar132[10] = auVar148[8];
          auVar132[0xb] = auVar148[0xc];
          auVar132[0xc] = auVar326[0];
          auVar132[0xd] = auVar326[4];
          auVar132[0xe] = auVar326[8];
          auVar132[0xf] = auVar326[0xc];
          auVar35._8_8_ = 0x1ffff11ffffffff;
          auVar35._0_8_ = 0xffff10ffffffff;
          auVar36._8_8_ = 0xff1101ffffffffff;
          auVar36._0_8_ = 0xff1000ffffffffff;
          auVar261 = a64_TBL(ZEXT816(0),auVar132,auVar138,auVar36);
          auVar234 = a64_TBL(ZEXT816(0),auVar48,auVar186,auVar35);
          auVar34._8_8_ = 0xffffffff01ff1911;
          auVar34._0_8_ = 0xffffffff00ff1810;
          auVar131 = a64_TBL(ZEXT816(0),auVar47,auVar301,auVar34);
          auVar31._8_8_ = 0x3ffff13ffffffff;
          auVar31._0_8_ = 0x2ffff12ffffffff;
          auVar32._8_8_ = 0xff1303ffffffffff;
          auVar32._0_8_ = 0xff1202ffffffffff;
          auVar327 = a64_TBL(ZEXT816(0),auVar132,auVar138,auVar32);
          auVar317 = a64_TBL(ZEXT816(0),auVar48,auVar186,auVar31);
          auVar33._8_8_ = 0xffffffff0b110908;
          auVar33._0_8_ = 0xffffffff03100100;
          auVar200 = a64_TBL(ZEXT816(0),auVar131,auVar230,auVar33);
          auVar30._8_8_ = 0xffffffff03ff1b13;
          auVar30._0_8_ = 0xffffffff02ff1a12;
          auVar131 = a64_TBL(ZEXT816(0),auVar47,auVar301,auVar30);
          auVar28._8_8_ = 0xff1505ffffffffff;
          auVar28._0_8_ = 0xff1404ffffffffff;
          auVar29._8_8_ = 0xffffffff0b130908;
          auVar29._0_8_ = 0xffffffff03120100;
          auVar149 = a64_TBL(ZEXT816(0),auVar131,auVar230,auVar29);
          auVar334 = a64_TBL(ZEXT816(0),auVar132,auVar138,auVar28);
          auVar26._8_8_ = 0xffffffff05ff1d15;
          auVar26._0_8_ = 0xffffffff04ff1c14;
          auVar27._8_8_ = 0x5ffff15ffffffff;
          auVar27._0_8_ = 0x4ffff14ffffffff;
          auVar333 = a64_TBL(ZEXT816(0),auVar48,auVar186,auVar27);
          auVar131 = a64_TBL(ZEXT816(0),auVar47,auVar301,auVar26);
          auVar24._8_8_ = 0xff1707ffffffffff;
          auVar24._0_8_ = 0xff1606ffffffffff;
          auVar25._8_8_ = 0xffffffff0b150908;
          auVar25._0_8_ = 0xffffffff03140100;
          auVar338 = a64_TBL(ZEXT816(0),auVar131,auVar230,auVar25);
          auVar356 = a64_TBL(ZEXT816(0),auVar132,auVar138,auVar24);
          auVar22._8_8_ = 0xffffffff07ff1f17;
          auVar22._0_8_ = 0xffffffff06ff1e16;
          auVar23._8_8_ = 0x7ffff17ffffffff;
          auVar23._0_8_ = 0x6ffff16ffffffff;
          auVar347 = a64_TBL(ZEXT816(0),auVar48,auVar186,auVar23);
          auVar131 = a64_TBL(ZEXT816(0),auVar47,auVar301,auVar22);
          auVar378._8_8_ = 0x9ffff19ffffffff;
          auVar378._0_8_ = 0x8ffff18ffffffff;
          auVar20._8_8_ = 0xff1909ffffffffff;
          auVar20._0_8_ = 0xff1808ffffffffff;
          auVar302 = a64_TBL(ZEXT816(0),auVar132,auVar138,auVar20);
          auVar281 = a64_TBL(ZEXT816(0),auVar48,auVar186,auVar378);
          auVar282._8_4_ = 0xffffffff;
          auVar282._0_8_ = 0xaffff1affffffff;
          auVar372._8_8_ = 0xff1b0bffffffffff;
          auVar372._0_8_ = 0xff1a0affffffffff;
          auVar378 = a64_TBL(ZEXT816(0),auVar132,auVar138,auVar372);
          auVar282._12_4_ = 0xbffff1b;
          auVar372 = a64_TBL(ZEXT816(0),auVar48,auVar186,auVar282);
          auVar8._8_4_ = 0xffffffff;
          auVar8._0_8_ = 0xcffff1cffffffff;
          auVar18._8_4_ = 0xffffffff;
          auVar18._0_8_ = 0xff1c0cffffffffff;
          auVar18._12_4_ = 0xff1d0dff;
          auVar220 = a64_TBL(ZEXT816(0),auVar132,auVar138,auVar18);
          auVar8._12_4_ = 0xdffff1d;
          auVar217 = a64_TBL(ZEXT816(0),auVar48,auVar186,auVar8);
          auVar9._8_4_ = 0xffffffff;
          auVar9._0_8_ = 0xeffff1effffffff;
          auVar19._8_4_ = 0xffffffff;
          auVar19._0_8_ = 0xff1e0effffffffff;
          auVar19._12_4_ = 0xff1f0fff;
          auVar185 = a64_TBL(ZEXT816(0),auVar132,auVar138,auVar19);
          auVar9._12_4_ = 0xfffff1f;
          auVar138 = a64_TBL(ZEXT816(0),auVar48,auVar186,auVar9);
          auVar17._8_4_ = 0xffffffff;
          auVar17._0_8_ = 0x7161504ffffffff;
          auVar16._8_4_ = 0xffffffff;
          auVar16._0_8_ = 0x7161504ffffffff;
          auVar15._8_4_ = 0xffffffff;
          auVar15._0_8_ = 0x7161504ffffffff;
          auVar14._8_4_ = 0xffffffff;
          auVar14._0_8_ = 0x7161504ffffffff;
          auVar13._8_4_ = 0xffffffff;
          auVar13._0_8_ = 0x7161504ffffffff;
          auVar12._8_4_ = 0xffffffff;
          auVar12._0_8_ = 0x7161504ffffffff;
          auVar11._8_4_ = 0xffffffff;
          auVar11._0_8_ = 0x7161504ffffffff;
          auVar10._8_4_ = 0xffffffff;
          auVar10._0_8_ = 0x7161504ffffffff;
          auVar10._12_4_ = 0xf1e1d0c;
          auVar234 = a64_TBL(ZEXT816(0),auVar234,auVar261,auVar10);
          auVar200 = NEON_rev64(auVar200,4);
          auVar168._4_12_ = auVar234._4_12_;
          auVar168._0_4_ = auVar200._4_4_;
          auVar170._12_4_ = auVar234._12_4_;
          auVar170._0_8_ = auVar168._0_8_;
          auVar170._8_4_ = auVar200._12_4_;
          auVar169._8_8_ = auVar170._8_8_;
          auVar169._0_8_ = CONCAT44(auVar234._4_4_,auVar200._4_4_);
          auVar171._0_12_ = auVar169._0_12_;
          auVar171._12_4_ = auVar170._12_4_;
          auVar11._12_4_ = 0xf1e1d0c;
          auVar261 = a64_TBL(ZEXT816(0),auVar317,auVar327,auVar11);
          auVar12._12_4_ = 0xf1e1d0c;
          auVar234 = a64_TBL(ZEXT816(0),auVar333,auVar334,auVar12);
          auVar200 = NEON_rev64(auVar338,4);
          auVar201._4_12_ = auVar234._4_12_;
          auVar201._0_4_ = auVar200._4_4_;
          auVar203._12_4_ = auVar234._12_4_;
          auVar203._0_8_ = auVar201._0_8_;
          auVar203._8_4_ = auVar200._12_4_;
          auVar202._8_8_ = auVar203._8_8_;
          auVar202._0_8_ = CONCAT44(auVar234._4_4_,auVar200._4_4_);
          auVar204._0_12_ = auVar202._0_12_;
          auVar204._12_4_ = auVar203._12_4_;
          auVar13._12_4_ = 0xf1e1d0c;
          auVar200 = a64_TBL(ZEXT816(0),auVar347,auVar356,auVar13);
          auVar14._12_4_ = 0xf1e1d0c;
          auVar281 = a64_TBL(ZEXT816(0),auVar281,auVar302,auVar14);
          auVar21._8_8_ = 0xffffffff0b170908;
          auVar21._0_8_ = 0xffffffff03160100;
          auVar131 = a64_TBL(ZEXT816(0),auVar131,auVar230,auVar21);
          auVar282 = NEON_rev64(auVar131,4);
          auVar356._8_8_ = 0xffffffff09ff1911;
          auVar356._0_8_ = 0xffffffff08ff1810;
          auVar196[9] = 0xff;
          auVar196[10] = 0xff;
          auVar196[0xb] = 0xff;
          auVar196[0xc] = 0xff;
          auVar196[0xd] = 0xff;
          auVar196[0xe] = 0xff;
          auVar196[0xf] = 0xff;
          auVar234[1] = uVar88;
          auVar234[0] = uVar87;
          auVar234[2] = uVar89;
          auVar234[3] = uVar90;
          auVar234[4] = uVar91;
          auVar234[5] = uVar92;
          auVar234[6] = uVar93;
          auVar234[7] = uVar94;
          auVar234[8] = uVar95;
          auVar234[9] = uVar96;
          auVar234[10] = uVar97;
          auVar234[0xb] = uVar98;
          auVar234[0xc] = uStack_1a0;
          auVar234[0xd] = uStack_19c;
          auVar234[0xe] = uStack_198;
          auVar234[0xf] = uStack_194;
          auVar131 = a64_TBL(ZEXT816(0),auVar196,auVar234,auVar356);
          auVar235._4_12_ = auVar200._4_12_;
          auVar235._0_4_ = auVar282._4_4_;
          auVar237._12_4_ = auVar200._12_4_;
          auVar237._0_8_ = auVar235._0_8_;
          auVar237._8_4_ = auVar282._12_4_;
          auVar236._8_8_ = auVar237._8_8_;
          auVar236._0_8_ = CONCAT44(auVar200._4_4_,auVar282._4_4_);
          auVar238._0_12_ = auVar236._0_12_;
          auVar238._12_4_ = auVar237._12_4_;
          auVar347._8_8_ = 0xffffffff0b190908;
          auVar347._0_8_ = 0xffffffff03180100;
          auVar131 = a64_TBL(ZEXT816(0),auVar131,auVar230,auVar347);
          auVar131 = NEON_rev64(auVar131,4);
          auVar262._4_12_ = auVar281._4_12_;
          auVar262._0_4_ = auVar131._4_4_;
          auVar264._12_4_ = auVar281._12_4_;
          auVar264._0_8_ = auVar262._0_8_;
          auVar264._8_4_ = auVar131._12_4_;
          auVar263._8_8_ = auVar264._8_8_;
          auVar263._0_8_ = CONCAT44(auVar281._4_4_,auVar131._4_4_);
          auVar265._0_12_ = auVar263._0_12_;
          auVar265._12_4_ = auVar264._12_4_;
          auVar15._12_4_ = 0xf1e1d0c;
          auVar196 = a64_TBL(ZEXT816(0),auVar372,auVar378,auVar15);
          auVar334._8_8_ = 0xffffffff0b1b0908;
          auVar334._0_8_ = 0xffffffff031a0100;
          auVar338._8_8_ = 0xffffffff0bff1b13;
          auVar338._0_8_ = 0xffffffff0aff1a12;
          auVar325[9] = 0xff;
          auVar325[10] = 0xff;
          auVar325[0xb] = 0xff;
          auVar325[0xc] = 0xff;
          auVar325[0xd] = 0xff;
          auVar325[0xe] = 0xff;
          auVar325[0xf] = 0xff;
          auVar200[1] = uVar88;
          auVar200[0] = uVar87;
          auVar200[2] = uVar89;
          auVar200[3] = uVar90;
          auVar200[4] = uVar91;
          auVar200[5] = uVar92;
          auVar200[6] = uVar93;
          auVar200[7] = uVar94;
          auVar200[8] = uVar95;
          auVar200[9] = uVar96;
          auVar200[10] = uVar97;
          auVar200[0xb] = uVar98;
          auVar200[0xc] = uStack_1a0;
          auVar200[0xd] = uStack_19c;
          auVar200[0xe] = uStack_198;
          auVar200[0xf] = uStack_194;
          auVar131 = a64_TBL(ZEXT816(0),auVar325,auVar200,auVar338);
          auVar131 = a64_TBL(ZEXT816(0),auVar131,auVar230,auVar334);
          auVar131 = NEON_rev64(auVar131,4);
          auVar283._4_12_ = auVar196._4_12_;
          auVar283._0_4_ = auVar131._4_4_;
          auVar285._12_4_ = auVar196._12_4_;
          auVar285._0_8_ = auVar283._0_8_;
          auVar285._8_4_ = auVar131._12_4_;
          auVar284._8_8_ = auVar285._8_8_;
          auVar284._0_8_ = CONCAT44(auVar196._4_4_,auVar131._4_4_);
          auVar286._0_12_ = auVar284._0_12_;
          auVar286._12_4_ = auVar285._12_4_;
          auVar16._12_4_ = 0xf1e1d0c;
          auVar196 = a64_TBL(ZEXT816(0),auVar217,auVar220,auVar16);
          auVar17._12_4_ = 0xf1e1d0c;
          auVar138 = a64_TBL(ZEXT816(0),auVar138,auVar185,auVar17);
          *(long *)(pauVar83[4] + 8) = auVar265._8_8_;
          *(undefined8 *)pauVar83[4] = auVar263._0_8_;
          *(long *)(pauVar83[5] + 8) = auVar286._8_8_;
          *(undefined8 *)pauVar83[5] = auVar284._0_8_;
          *(long *)(pauVar83[2] + 8) = auVar204._8_8_;
          *(undefined8 *)pauVar83[2] = auVar202._0_8_;
          *(long *)(pauVar83[3] + 8) = auVar238._8_8_;
          *(undefined8 *)pauVar83[3] = auVar236._0_8_;
          auVar327._8_8_ = 0xffffffff0b1d0908;
          auVar327._0_8_ = 0xffffffff031c0100;
          auVar333._8_8_ = 0xffffffff0dff1d15;
          auVar333._0_8_ = 0xffffffff0cff1c14;
          auVar6[9] = 0xff;
          auVar6[10] = 0xff;
          auVar6[0xb] = 0xff;
          auVar6[0xc] = 0xff;
          auVar6[0xd] = 0xff;
          auVar6[0xe] = 0xff;
          auVar6[0xf] = 0xff;
          auVar217[1] = uVar88;
          auVar217[0] = uVar87;
          auVar217[2] = uVar89;
          auVar217[3] = uVar90;
          auVar217[4] = uVar91;
          auVar217[5] = uVar92;
          auVar217[6] = uVar93;
          auVar217[7] = uVar94;
          auVar217[8] = uVar95;
          auVar217[9] = uVar96;
          auVar217[10] = uVar97;
          auVar217[0xb] = uVar98;
          auVar217[0xc] = uStack_1a0;
          auVar217[0xd] = uStack_19c;
          auVar217[0xe] = uStack_198;
          auVar217[0xf] = uStack_194;
          auVar131 = a64_TBL(ZEXT816(0),auVar6,auVar217,auVar333);
          auVar131 = a64_TBL(ZEXT816(0),auVar131,auVar230,auVar327);
          auVar131 = NEON_rev64(auVar131,4);
          auVar139._4_12_ = auVar131._4_12_;
          auVar139._0_4_ = auVar131._4_4_;
          auVar141._0_8_ = auVar139._0_8_;
          auVar141._8_4_ = auVar131._12_4_;
          auVar141._12_4_ = auVar131._12_4_;
          auVar140._8_8_ = auVar141._8_8_;
          auVar140._0_8_ = CONCAT44(auVar196._4_4_,auVar131._4_4_);
          auVar142._0_12_ = auVar140._0_12_;
          auVar142._12_4_ = auVar196._12_4_;
          auVar317._8_8_ = 0xffffffff0fff1f17;
          auVar317._0_8_ = 0xffffffff0eff1e16;
          auVar7[9] = 0xff;
          auVar7[10] = 0xff;
          auVar7[0xb] = 0xff;
          auVar7[0xc] = 0xff;
          auVar7[0xd] = 0xff;
          auVar7[0xe] = 0xff;
          auVar7[0xf] = 0xff;
          auVar220[1] = uVar88;
          auVar220[0] = uVar87;
          auVar220[2] = uVar89;
          auVar220[3] = uVar90;
          auVar220[4] = uVar91;
          auVar220[5] = uVar92;
          auVar220[6] = uVar93;
          auVar220[7] = uVar94;
          auVar220[8] = uVar95;
          auVar220[9] = uVar96;
          auVar220[10] = uVar97;
          auVar220[0xb] = uVar98;
          auVar220[0xc] = uStack_1a0;
          auVar220[0xd] = uStack_19c;
          auVar220[0xe] = uStack_198;
          auVar220[0xf] = uStack_194;
          auVar131 = a64_TBL(ZEXT816(0),auVar7,auVar220,auVar317);
          auVar302._8_8_ = 0xffffffff0b1f0908;
          auVar302._0_8_ = 0xffffffff031e0100;
          auVar131 = a64_TBL(ZEXT816(0),auVar131,auVar230,auVar302);
          auVar131 = NEON_rev64(auVar131,4);
          auVar99._4_12_ = auVar131._4_12_;
          auVar99._0_4_ = auVar131._4_4_;
          auVar101._0_8_ = auVar99._0_8_;
          auVar101._8_4_ = auVar131._12_4_;
          auVar101._12_4_ = auVar131._12_4_;
          auVar100._8_8_ = auVar101._8_8_;
          auVar100._0_8_ = CONCAT44(auVar138._4_4_,auVar131._4_4_);
          auVar102._0_12_ = auVar100._0_12_;
          auVar102._12_4_ = auVar138._12_4_;
          *(long *)(pauVar83[6] + 8) = auVar142._8_8_;
          *(undefined8 *)pauVar83[6] = auVar140._0_8_;
          *(long *)(pauVar83[7] + 8) = auVar102._8_8_;
          *(undefined8 *)pauVar83[7] = auVar100._0_8_;
          auVar131 = NEON_rev64(auVar149,4);
          auVar103._4_12_ = auVar131._4_12_;
          auVar103._0_4_ = auVar131._4_4_;
          auVar105._0_8_ = auVar103._0_8_;
          auVar105._8_4_ = auVar131._12_4_;
          auVar105._12_4_ = auVar131._12_4_;
          auVar104._8_8_ = auVar105._8_8_;
          auVar104._0_8_ = CONCAT44(auVar261._4_4_,auVar131._4_4_);
          auVar106._0_12_ = auVar104._0_12_;
          auVar106._12_4_ = auVar261._12_4_;
          *(long *)(*pauVar83 + 8) = auVar171._8_8_;
          *(undefined8 *)*pauVar83 = auVar169._0_8_;
          *(long *)(pauVar83[1] + 8) = auVar106._8_8_;
          *(undefined8 *)pauVar83[1] = auVar104._0_8_;
          uVar85 = uVar85 - 0x10;
          param_2 = param_2 + 1;
          param_3 = param_3 + 1;
          pauVar83 = pauVar83 + 8;
        } while (uVar85 != 0);
        param_1 = pauVar1;
        param_2 = pauVar81;
        param_3 = pauVar82;
        param_4 = (undefined1 (*) [16])(*param_4 + uVar86 * 8);
        if (uVar2 == uVar86) goto joined_r0x00234a08;
      }
    }
    do {
      bVar4 = (*param_2)[0];
      bVar5 = (*param_3)[0];
      uVar223 = (uint)(byte)(*param_1)[0] * 0x4a85 >> 8;
      uVar160 = uVar223 + ((uint)bVar5 * 0x6625 >> 8);
      uVar173 = uVar160 - 0x379a;
      uVar87 = 0;
      if (0x3799 < uVar160) {
        uVar87 = 0xff;
      }
      uVar88 = (char)(uVar173 >> 6);
      if (0x3fff < uVar173) {
        uVar88 = uVar87;
      }
      (*param_4)[0] = uVar88;
      iVar275 = uVar223 - (((uint)bVar4 * 0x1913 >> 8) + ((uint)bVar5 * 0x3408 >> 8));
      uVar160 = iVar275 + 0x2204;
      uVar87 = 0;
      if (-0x2205 < iVar275) {
        uVar87 = 0xff;
      }
      uVar88 = (char)(uVar160 >> 6);
      if (0x3fff < uVar160) {
        uVar88 = uVar87;
      }
      (*param_4)[1] = uVar88;
      uVar223 = uVar223 + ((uint)bVar4 * 0x811a >> 8);
      uVar160 = uVar223 - 0x4515;
      uVar87 = 0;
      if (0x4514 < uVar223) {
        uVar87 = 0xff;
      }
      uVar88 = (char)(uVar160 >> 6);
      if (0x3fff < uVar160) {
        uVar88 = uVar87;
      }
      (*param_4)[2] = uVar88;
      (*param_4)[3] = 0xff;
      pauVar81 = (undefined1 (*) [16])(*param_2 + 1);
      bVar4 = (*param_2)[0];
      pauVar82 = (undefined1 (*) [16])(*param_3 + 1);
      bVar5 = (*param_3)[0];
      uVar223 = (uint)(byte)(*param_1)[1] * 0x4a85 >> 8;
      uVar160 = uVar223 + ((uint)bVar5 * 0x6625 >> 8);
      uVar173 = uVar160 - 0x379a;
      uVar87 = 0;
      if (0x3799 < uVar160) {
        uVar87 = 0xff;
      }
      uVar88 = (char)(uVar173 >> 6);
      if (0x3fff < uVar173) {
        uVar88 = uVar87;
      }
      (*param_4)[4] = uVar88;
      iVar275 = uVar223 - (((uint)bVar4 * 0x1913 >> 8) + ((uint)bVar5 * 0x3408 >> 8));
      uVar160 = iVar275 + 0x2204;
      uVar87 = 0;
      if (-0x2205 < iVar275) {
        uVar87 = 0xff;
      }
      uVar88 = (char)(uVar160 >> 6);
      if (0x3fff < uVar160) {
        uVar88 = uVar87;
      }
      (*param_4)[5] = uVar88;
      uVar223 = uVar223 + ((uint)bVar4 * 0x811a >> 8);
      uVar160 = uVar223 - 0x4515;
      uVar87 = 0;
      if (0x4514 < uVar223) {
        uVar87 = 0xff;
      }
      uVar88 = (char)(uVar160 >> 6);
      if (0x3fff < uVar160) {
        uVar88 = uVar87;
      }
      (*param_4)[6] = uVar88;
      (*param_4)[7] = 0xff;
      pauVar1 = (undefined1 (*) [16])(*param_1 + 2);
      puVar49 = *param_4;
      param_1 = pauVar1;
      param_2 = pauVar81;
      param_3 = pauVar82;
      param_4 = (undefined1 (*) [16])(puVar49 + 8);
    } while ((undefined1 (*) [16])(puVar49 + 8) != pauVar3);
  }
joined_r0x00234a08:
  if ((param_5 & 1) != 0) {
    bVar4 = (*pauVar81)[0];
    bVar5 = (*pauVar82)[0];
    uVar223 = (uint)(byte)(*pauVar1)[0] * 0x4a85 >> 8;
    uVar160 = uVar223 + ((uint)bVar5 * 0x6625 >> 8);
    uVar173 = uVar160 - 0x379a;
    uVar87 = 0;
    if (0x3799 < uVar160) {
      uVar87 = 0xff;
    }
    uVar88 = (char)(uVar173 >> 6);
    if (0x3fff < uVar173) {
      uVar88 = uVar87;
    }
    (*pauVar3)[0] = uVar88;
    iVar275 = uVar223 - (((uint)bVar4 * 0x1913 >> 8) + ((uint)bVar5 * 0x3408 >> 8));
    uVar160 = iVar275 + 0x2204;
    uVar87 = 0;
    if (-0x2205 < iVar275) {
      uVar87 = 0xff;
    }
    uVar88 = (char)(uVar160 >> 6);
    if (0x3fff < uVar160) {
      uVar88 = uVar87;
    }
    (*pauVar3)[1] = uVar88;
    uVar223 = uVar223 + ((uint)bVar4 * 0x811a >> 8);
    uVar160 = uVar223 - 0x4515;
    uVar87 = 0;
    if (0x4514 < uVar223) {
      uVar87 = 0xff;
    }
    uVar88 = (char)(uVar160 >> 6);
    if (0x3fff < uVar160) {
      uVar88 = uVar87;
    }
    (*pauVar3)[2] = uVar88;
    (*pauVar3)[3] = 0xff;
  }
  return;
}



/* Entry: 00235494; end: 00235e9f;  */

void FUN_00235494(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined8 *param_4,uint param_5)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  uint3 uVar8;
  uint3 uVar9;
  int iVar10;
  int iVar11;
  uint3 uVar12;
  uint3 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  undefined1 (*pauVar49) [16];
  undefined1 (*pauVar50) [16];
  undefined1 (*pauVar51) [16];
  undefined1 (*pauVar52) [16];
  undefined1 (*pauVar53) [16];
  undefined1 (*pauVar54) [16];
  undefined1 (*pauVar55) [16];
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  undefined1 (*pauVar58) [16];
  undefined1 (*pauVar59) [16];
  undefined1 (*pauVar60) [16];
  undefined1 (*pauVar61) [16];
  undefined8 *puVar62;
  long lVar63;
  ulong uVar64;
  ulong uVar65;
  undefined1 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  uint uVar69;
  uint uVar75;
  uint uVar77;
  undefined1 auVar71 [16];
  uint uVar70;
  uint uVar76;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint uVar81;
  undefined8 uVar82;
  uint uVar91;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uVar90;
  uint uVar92;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  uint uVar93;
  uint uVar99;
  uint uVar100;
  undefined1 auVar94 [16];
  uint uVar101;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined8 uVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  uint uVar110;
  undefined8 uVar111;
  uint uVar115;
  undefined1 auVar112 [16];
  uint uVar114;
  uint uVar116;
  undefined1 auVar113 [16];
  int iVar117;
  int iVar125;
  int iVar126;
  int iVar127;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  int iVar139;
  uint uVar140;
  uint uVar141;
  uint uVar143;
  uint uVar144;
  uint uVar145;
  uint uVar146;
  uint uVar147;
  undefined1 auVar142 [16];
  uint uVar148;
  uint uVar149;
  uint uVar153;
  uint uVar154;
  uint uVar155;
  uint uVar156;
  uint uVar157;
  uint uVar158;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  uint uVar159;
  uint uVar160;
  uint uVar164;
  uint uVar165;
  uint uVar166;
  uint uVar167;
  uint uVar168;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  uint uVar169;
  uint uVar170;
  undefined8 uVar171;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  uint uVar176;
  undefined1 auVar172 [16];
  uint uVar177;
  uint uVar178;
  undefined1 auVar179 [16];
  int iVar180;
  int iVar185;
  int iVar186;
  undefined1 auVar181 [16];
  int iVar187;
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  uint uVar188;
  undefined8 uVar190;
  uint uVar200;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  uint uVar189;
  uint uVar198;
  uint uVar199;
  uint uVar201;
  uint uVar202;
  uint uVar203;
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  int iVar204;
  int iVar212;
  int iVar214;
  undefined1 auVar206 [16];
  uint uVar205;
  uint uVar213;
  uint uVar215;
  int iVar216;
  uint uVar217;
  uint uVar218;
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar219 [16];
  uint uVar220;
  uint uVar221;
  uint uVar224;
  uint uVar225;
  int iVar226;
  uint uVar227;
  uint uVar228;
  uint uVar229;
  uint uVar230;
  int iVar231;
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  int iVar232;
  int iVar237;
  int iVar238;
  int iVar239;
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  int iVar240;
  int iVar244;
  int iVar245;
  int iVar246;
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  int iVar247;
  int iVar251;
  int iVar252;
  int iVar253;
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  
  pauVar2 = param_1;
  pauVar60 = param_2;
  pauVar61 = param_3;
  puVar3 = param_4;
  if ((param_5 & 0xfffffffe) != 0) {
    lVar63 = (long)(int)((param_5 & 0xfffffffe) * 3);
    puVar3 = (undefined8 *)((long)param_4 + lVar63);
    uVar64 = lVar63 - 6;
    if (0x59 < uVar64) {
      uVar64 = uVar64 / 6;
      uVar1 = uVar64 + 1;
      pauVar2 = (undefined1 (*) [16])((long)param_4 + uVar64 * 6 + 6);
      if (((pauVar2 <= param_1 || *param_1 + uVar64 * 2 + 2 <= param_4) &&
          (*param_2 + uVar1 <= param_4 || pauVar2 <= param_2)) &&
         (*param_3 + uVar1 <= param_4 || pauVar2 <= param_3)) {
        uVar65 = uVar1 & 0x7ffffffffffffff0;
        pauVar60 = (undefined1 (*) [16])(*param_2 + uVar65);
        pauVar2 = (undefined1 (*) [16])(*param_1 + uVar65 * 2);
        pauVar61 = (undefined1 (*) [16])(*param_3 + uVar65);
        puVar62 = param_4;
        uVar64 = uVar65;
        do {
          puVar28 = *param_1;
          puVar29 = *param_1;
          puVar30 = *param_1;
          puVar31 = *param_1;
          puVar32 = *param_1;
          puVar33 = *param_1;
          puVar34 = *param_1;
          puVar35 = *param_1;
          puVar36 = *param_1;
          puVar37 = *param_1;
          puVar38 = *param_1;
          puVar39 = *param_1;
          puVar40 = *param_1;
          puVar41 = *param_1;
          puVar42 = *param_1;
          puVar43 = *param_1;
          pauVar59 = param_1 + 1;
          pauVar44 = param_1 + 1;
          pauVar45 = param_1 + 1;
          pauVar46 = param_1 + 1;
          pauVar47 = param_1 + 1;
          pauVar48 = param_1 + 1;
          pauVar49 = param_1 + 1;
          pauVar50 = param_1 + 1;
          pauVar51 = param_1 + 1;
          pauVar52 = param_1 + 1;
          pauVar53 = param_1 + 1;
          pauVar54 = param_1 + 1;
          pauVar55 = param_1 + 1;
          pauVar56 = param_1 + 1;
          pauVar57 = param_1 + 1;
          pauVar58 = param_1 + 1;
          param_1 = param_1 + 2;
          auVar84 = *param_2;
          auVar26._8_8_ = 0xffffff0fffffff0e;
          auVar26._0_8_ = 0xffffff0dffffff0c;
          auVar27._8_8_ = 0xffffff0bffffff0a;
          auVar27._0_8_ = 0xffffff09ffffff08;
          auVar83 = a64_TBL(ZEXT816(0),auVar84,auVar27);
          auVar94 = a64_TBL(ZEXT816(0),auVar84,auVar26);
          auVar219._8_8_ = 0xffffff07ffffff06;
          auVar219._0_8_ = 0xffffff05ffffff04;
          auVar25._8_8_ = 0xffffff03ffffff02;
          auVar25._0_8_ = 0xffffff01ffffff00;
          auVar103 = a64_TBL(ZEXT816(0),auVar84,auVar25);
          auVar71 = a64_TBL(ZEXT816(0),auVar84,auVar219);
          uVar67 = CONCAT22(auVar71._4_2_,auVar71._0_2_);
          uVar190 = CONCAT26(auVar94._12_2_,
                             CONCAT24(auVar94._8_2_,CONCAT22(auVar94._4_2_,auVar94._0_2_)));
          auVar84 = *param_3;
          uVar68 = CONCAT22(auVar83._4_2_,auVar83._0_2_);
          auVar172 = a64_TBL(ZEXT816(0),auVar84,auVar27);
          auVar112 = a64_TBL(ZEXT816(0),auVar84,auVar26);
          auVar94 = a64_TBL(ZEXT816(0),auVar84,auVar25);
          auVar84 = a64_TBL(ZEXT816(0),auVar84,auVar219);
          uVar82 = CONCAT26(auVar84._12_2_,
                            CONCAT24(auVar84._8_2_,CONCAT22(auVar84._4_2_,auVar84._0_2_)));
          uVar102 = CONCAT26(auVar94._12_2_,
                             CONCAT24(auVar94._8_2_,CONCAT22(auVar94._4_2_,auVar94._0_2_)));
          uVar111 = CONCAT26(auVar112._12_2_,
                             CONCAT24(auVar112._8_2_,CONCAT22(auVar112._4_2_,auVar112._0_2_)));
          uVar171 = CONCAT26(auVar172._12_2_,
                             CONCAT24(auVar172._8_2_,CONCAT22(auVar172._4_2_,auVar172._0_2_)));
          auVar84 = NEON_umull(CONCAT26(auVar71._12_2_,CONCAT24(auVar71._8_2_,uVar67)),
                               0x1913191319131913,2);
          auVar172 = NEON_umull(CONCAT17(auVar103[0xd],
                                         CONCAT16(auVar103[0xc],
                                                  CONCAT15(auVar103[9],
                                                           CONCAT14(auVar103[8],
                                                                    CONCAT13(auVar103[5],
                                                                             CONCAT12(auVar103[4],
                                                                                      auVar103._0_2_
                                                                                     )))))),
                                0x1913191319131913,2);
          auVar191 = NEON_umull(uVar190,0x1913191319131913,2);
          auVar94 = NEON_umull(CONCAT26(auVar83._12_2_,CONCAT24(auVar83._8_2_,uVar68)),
                               0x1913191319131913,2);
          auVar181 = NEON_umull(uVar171,0x3408340834083408,2);
          auVar192 = NEON_umull(uVar111,0x3408340834083408,2);
          auVar112 = NEON_umull(uVar102,0x3408340834083408,2);
          auVar206 = NEON_umull(uVar82,0x3408340834083408,2);
          iVar247 = (auVar84._0_4_ >> 8) + (auVar206._0_4_ >> 8);
          iVar251 = (auVar84._4_4_ >> 8) + (auVar206._4_4_ >> 8);
          iVar252 = (auVar84._8_4_ >> 8) + (auVar206._8_4_ >> 8);
          iVar253 = (auVar84._12_4_ >> 8) + (auVar206._12_4_ >> 8);
          iVar240 = (auVar172._0_4_ >> 8) + (auVar112._0_4_ >> 8);
          iVar244 = (auVar172._4_4_ >> 8) + (auVar112._4_4_ >> 8);
          iVar245 = (auVar172._8_4_ >> 8) + (auVar112._8_4_ >> 8);
          iVar246 = (auVar172._12_4_ >> 8) + (auVar112._12_4_ >> 8);
          auVar172 = NEON_umull(uVar171,0x6625662566256625,2);
          iVar232 = (auVar191._0_4_ >> 8) + (auVar192._0_4_ >> 8);
          iVar237 = (auVar191._4_4_ >> 8) + (auVar192._4_4_ >> 8);
          iVar238 = (auVar191._8_4_ >> 8) + (auVar192._8_4_ >> 8);
          iVar239 = (auVar191._12_4_ >> 8) + (auVar192._12_4_ >> 8);
          auVar191 = NEON_umull(uVar111,0x6625662566256625,2);
          auVar112 = NEON_umull(uVar102,0x6625662566256625,2);
          auVar84 = NEON_umull(uVar82,0x6625662566256625,2);
          uVar169 = auVar84._0_4_ >> 8;
          uVar173 = auVar84._4_4_ >> 8;
          uVar175 = auVar84._8_4_ >> 8;
          uVar177 = auVar84._12_4_ >> 8;
          uVar110 = auVar112._0_4_ >> 8;
          uVar114 = auVar112._4_4_ >> 8;
          uVar115 = auVar112._8_4_ >> 8;
          uVar116 = auVar112._12_4_ >> 8;
          iVar117 = (auVar94._0_4_ >> 8) + (auVar181._0_4_ >> 8);
          iVar125 = (auVar94._4_4_ >> 8) + (auVar181._4_4_ >> 8);
          iVar126 = (auVar94._8_4_ >> 8) + (auVar181._8_4_ >> 8);
          iVar127 = (auVar94._12_4_ >> 8) + (auVar181._12_4_ >> 8);
          uVar188 = auVar191._0_4_ >> 8;
          uVar198 = auVar191._4_4_ >> 8;
          uVar200 = auVar191._8_4_ >> 8;
          uVar202 = auVar191._12_4_ >> 8;
          uVar220 = auVar172._0_4_ >> 8;
          uVar224 = auVar172._4_4_ >> 8;
          uVar227 = auVar172._8_4_ >> 8;
          uVar229 = auVar172._12_4_ >> 8;
          uVar69 = (uint)(byte)(*pauVar52)[9] * 0x4a85;
          uVar75 = (uint)(byte)(*pauVar54)[0xb] * 0x4a85;
          uVar77 = (uint)(byte)(*pauVar56)[0xd] * 0x4a85;
          uVar79 = (uint)(byte)(*pauVar58)[0xf] * 0x4a85;
          auVar84 = NEON_umull((ulong)CONCAT16((*pauVar50)[7],
                                               (uint6)CONCAT14((*pauVar48)[5],
                                                               (uint)CONCAT12((*pauVar46)[3],
                                                                              (ushort)(byte)(*
                                                  pauVar44)[1]))),0x4a854a854a854a85,2);
          uVar93 = (uint)(byte)puVar37[9] * 0x4a85;
          uVar99 = (uint)(byte)puVar39[0xb] * 0x4a85;
          uVar100 = (uint)(byte)puVar41[0xd] * 0x4a85;
          uVar101 = (uint)(byte)puVar43[0xf] * 0x4a85;
          uVar81 = auVar84._0_4_;
          uVar90 = auVar84._4_4_;
          uVar91 = auVar84._8_4_;
          uVar92 = auVar84._12_4_;
          iVar132 = (uVar69 >> 8) - iVar232;
          iVar134 = (uVar75 >> 8) - iVar237;
          iVar136 = (uVar77 >> 8) - iVar238;
          iVar138 = (uVar79 >> 8) - iVar239;
          iVar204 = (uVar81 >> 8) - iVar117;
          iVar212 = (uVar90 >> 8) - iVar125;
          iVar214 = (uVar91 >> 8) - iVar126;
          iVar216 = (uVar92 >> 8) - iVar127;
          iVar180 = (uVar93 >> 8) - iVar247;
          iVar185 = (uVar99 >> 8) - iVar251;
          iVar186 = (uVar100 >> 8) - iVar252;
          iVar187 = (uVar101 >> 8) - iVar253;
          uVar140 = iVar180 + 0x2204;
          uVar143 = iVar185 + 0x2204;
          uVar145 = iVar186 + 0x2204;
          uVar147 = iVar187 + 0x2204;
          uVar148 = iVar204 + 0x2204;
          uVar153 = iVar212 + 0x2204;
          uVar155 = iVar214 + 0x2204;
          uVar157 = iVar216 + 0x2204;
          uVar159 = iVar132 + 0x2204;
          uVar164 = iVar134 + 0x2204;
          uVar166 = iVar136 + 0x2204;
          uVar168 = iVar138 + 0x2204;
          iVar226 = -(uint)(uVar159 < 0x4000);
          iVar231 = -(uint)(uVar164 < 0x4000);
          iVar10 = -(uint)(uVar166 < 0x4000);
          iVar11 = -(uint)(uVar168 < 0x4000);
          iVar14 = -(uint)(uVar148 < 0x4000);
          iVar15 = -(uint)(uVar153 < 0x4000);
          iVar16 = -(uint)(uVar155 < 0x4000);
          iVar17 = -(uint)(uVar157 < 0x4000);
          uVar160 = uVar159 >> 6;
          uVar165 = uVar164 >> 6;
          uVar167 = uVar166 >> 6;
          iVar133 = -(uint)(uVar140 < 0x4000);
          iVar135 = -(uint)(uVar143 < 0x4000);
          iVar137 = -(uint)(uVar145 < 0x4000);
          iVar139 = -(uint)(uVar147 < 0x4000);
          uVar141 = uVar140 >> 6;
          uVar144 = uVar143 >> 6;
          uVar146 = uVar145 >> 6;
          uVar149 = uVar148 >> 6;
          uVar154 = uVar153 >> 6;
          uVar156 = uVar155 >> 6;
          uVar158 = uVar157 >> 6;
          uVar189 = uVar188 + (uVar69 >> 8);
          uVar199 = uVar198 + (uVar75 >> 8);
          uVar201 = uVar200 + (uVar77 >> 8);
          uVar203 = uVar202 + (uVar79 >> 8);
          uVar221 = uVar220 + (uVar81 >> 8);
          uVar225 = uVar224 + (uVar90 >> 8);
          uVar228 = uVar227 + (uVar91 >> 8);
          uVar230 = uVar229 + (uVar92 >> 8);
          uVar170 = uVar169 + (uVar93 >> 8);
          uVar174 = uVar173 + (uVar99 >> 8);
          uVar176 = uVar175 + (uVar100 >> 8);
          uVar178 = uVar177 + (uVar101 >> 8);
          uVar70 = uVar221 - 0x379a;
          uVar76 = uVar225 - 0x379a;
          uVar78 = uVar228 - 0x379a;
          uVar80 = uVar230 - 0x379a;
          uVar205 = uVar189 - 0x379a;
          uVar213 = uVar199 - 0x379a;
          uVar215 = uVar201 - 0x379a;
          uVar217 = uVar203 - 0x379a;
          auVar161[0] = (byte)uVar141 & (byte)iVar133 | ~-(iVar180 < -0x2204) & ~(byte)iVar133;
          auVar161[1] = (byte)(uVar141 >> 8) & (byte)((uint)iVar133 >> 8);
          auVar161[2] = (byte)(uVar141 >> 0x10) & (byte)((uint)iVar133 >> 0x10);
          auVar161[3] = (byte)(uVar140 >> 0x1e) & (byte)((uint)iVar133 >> 0x18);
          auVar161[4] = (byte)uVar144 & (byte)iVar135 | ~-(iVar185 < -0x2204) & ~(byte)iVar135;
          auVar161[5] = (byte)(uVar144 >> 8) & (byte)((uint)iVar135 >> 8);
          auVar161[6] = (byte)(uVar144 >> 0x10) & (byte)((uint)iVar135 >> 0x10);
          auVar161[7] = (byte)(uVar143 >> 0x1e) & (byte)((uint)iVar135 >> 0x18);
          auVar161[8] = (byte)uVar146 & (byte)iVar137 | ~-(iVar186 < -0x2204) & ~(byte)iVar137;
          auVar161[9] = (byte)(uVar146 >> 8) & (byte)((uint)iVar137 >> 8);
          auVar161[10] = (byte)(uVar146 >> 0x10) & (byte)((uint)iVar137 >> 0x10);
          auVar161[0xb] = (byte)(uVar145 >> 0x1e) & (byte)((uint)iVar137 >> 0x18);
          auVar161[0xc] =
               (byte)(uVar147 >> 6) & (byte)iVar139 | ~-(iVar187 < -0x2204) & ~(byte)iVar139;
          auVar161[0xd] = (byte)((uVar147 >> 6) >> 8) & (byte)((uint)iVar139 >> 8);
          auVar161[0xe] = (byte)((uint3)(uVar147 >> 0xe) >> 8) & (byte)((uint)iVar139 >> 0x10);
          auVar161[0xf] = (byte)(uVar147 >> 0x1e) & (byte)((uint)iVar139 >> 0x18);
          iVar180 = -(uint)(uVar205 < 0x4000);
          iVar185 = -(uint)(uVar213 < 0x4000);
          iVar186 = -(uint)(uVar215 < 0x4000);
          iVar187 = -(uint)(uVar217 < 0x4000);
          iVar133 = -(uint)(uVar70 < 0x4000);
          iVar135 = -(uint)(uVar76 < 0x4000);
          iVar137 = -(uint)(uVar78 < 0x4000);
          iVar139 = -(uint)(uVar80 < 0x4000);
          uVar140 = uVar70 >> 6;
          uVar141 = uVar76 >> 6;
          uVar143 = uVar78 >> 6;
          uVar144 = uVar80 >> 6;
          uVar145 = uVar205 >> 6;
          uVar146 = uVar213 >> 6;
          uVar147 = uVar215 >> 6;
          uVar218 = uVar217 >> 6;
          auVar104[0] = (byte)uVar145 & (byte)iVar180 | ~-(uVar189 < 0x379a) & ~(byte)iVar180;
          auVar104[1] = (byte)(uVar145 >> 8) & (byte)((uint)iVar180 >> 8);
          auVar104[2] = (byte)(uVar145 >> 0x10) & (byte)((uint)iVar180 >> 0x10);
          auVar104[3] = (byte)(uVar205 >> 0x1e) & (byte)((uint)iVar180 >> 0x18);
          auVar104[4] = (byte)uVar146 & (byte)iVar185 | ~-(uVar199 < 0x379a) & ~(byte)iVar185;
          auVar104[5] = (byte)(uVar146 >> 8) & (byte)((uint)iVar185 >> 8);
          auVar104[6] = (byte)(uVar146 >> 0x10) & (byte)((uint)iVar185 >> 0x10);
          auVar104[7] = (byte)(uVar213 >> 0x1e) & (byte)((uint)iVar185 >> 0x18);
          auVar104[8] = (byte)uVar147 & (byte)iVar186 | ~-(uVar201 < 0x379a) & ~(byte)iVar186;
          auVar104[9] = (byte)(uVar147 >> 8) & (byte)((uint)iVar186 >> 8);
          auVar104[10] = (byte)(uVar147 >> 0x10) & (byte)((uint)iVar186 >> 0x10);
          auVar104[0xb] = (byte)(uVar215 >> 0x1e) & (byte)((uint)iVar186 >> 0x18);
          auVar104[0xc] = (byte)uVar218 & (byte)iVar187 | ~-(uVar203 < 0x379a) & ~(byte)iVar187;
          auVar104[0xd] = (byte)(uVar218 >> 8) & (byte)((uint)iVar187 >> 8);
          auVar104[0xe] = (byte)(uVar218 >> 0x10) & (byte)((uint)iVar187 >> 0x10);
          auVar104[0xf] = (byte)(uVar217 >> 0x1e) & (byte)((uint)iVar187 >> 0x18);
          auVar95[0] = (byte)uVar140 & (byte)iVar133 | ~-(uVar221 < 0x379a) & ~(byte)iVar133;
          auVar95[1] = (byte)(uVar140 >> 8) & (byte)((uint)iVar133 >> 8);
          auVar95[2] = (byte)(uVar140 >> 0x10) & (byte)((uint)iVar133 >> 0x10);
          auVar95[3] = (byte)(uVar70 >> 0x1e) & (byte)((uint)iVar133 >> 0x18);
          auVar95[4] = (byte)uVar141 & (byte)iVar135 | ~-(uVar225 < 0x379a) & ~(byte)iVar135;
          auVar95[5] = (byte)(uVar141 >> 8) & (byte)((uint)iVar135 >> 8);
          auVar95[6] = (byte)(uVar141 >> 0x10) & (byte)((uint)iVar135 >> 0x10);
          auVar95[7] = (byte)(uVar76 >> 0x1e) & (byte)((uint)iVar135 >> 0x18);
          auVar95[8] = (byte)uVar143 & (byte)iVar137 | ~-(uVar228 < 0x379a) & ~(byte)iVar137;
          auVar95[9] = (byte)(uVar143 >> 8) & (byte)((uint)iVar137 >> 8);
          auVar95[10] = (byte)(uVar143 >> 0x10) & (byte)((uint)iVar137 >> 0x10);
          auVar95[0xb] = (byte)(uVar78 >> 0x1e) & (byte)((uint)iVar137 >> 0x18);
          auVar95[0xc] = (byte)uVar144 & (byte)iVar139 | ~-(uVar230 < 0x379a) & ~(byte)iVar139;
          auVar95[0xd] = (byte)(uVar144 >> 8) & (byte)((uint)iVar139 >> 8);
          auVar95[0xe] = (byte)(uVar144 >> 0x10) & (byte)((uint)iVar139 >> 0x10);
          auVar95[0xf] = (byte)(uVar80 >> 0x1e) & (byte)((uint)iVar139 >> 0x18);
          uVar78 = uVar170 - 0x379a;
          uVar80 = uVar174 - 0x379a;
          uVar145 = uVar176 - 0x379a;
          uVar147 = uVar178 - 0x379a;
          iVar133 = -(uint)(uVar78 < 0x4000);
          iVar135 = -(uint)(uVar80 < 0x4000);
          iVar137 = -(uint)(uVar145 < 0x4000);
          iVar139 = -(uint)(uVar147 < 0x4000);
          uVar143 = uVar78 >> 6;
          uVar144 = uVar80 >> 6;
          uVar146 = uVar145 >> 6;
          auVar84 = NEON_umull((ulong)CONCAT16(puVar35[7],
                                               (uint6)CONCAT14(puVar33[5],
                                                               (uint)CONCAT12(puVar31[3],
                                                                              (ushort)(byte)puVar29[
                                                  1]))),0x4a854a854a854a85,2);
          uVar205 = auVar84._0_4_;
          uVar213 = auVar84._4_4_;
          uVar215 = auVar84._8_4_;
          uVar217 = auVar84._12_4_;
          uVar70 = uVar110 + (uVar205 >> 8);
          uVar140 = uVar114 + (uVar213 >> 8);
          uVar76 = uVar115 + (uVar215 >> 8);
          uVar141 = uVar116 + (uVar217 >> 8);
          auVar85[0] = (byte)uVar143 & (byte)iVar133 | ~-(uVar170 < 0x379a) & ~(byte)iVar133;
          auVar85[1] = (byte)(uVar143 >> 8) & (byte)((uint)iVar133 >> 8);
          auVar85[2] = (byte)(uVar143 >> 0x10) & (byte)((uint)iVar133 >> 0x10);
          auVar85[3] = (byte)(uVar78 >> 0x1e) & (byte)((uint)iVar133 >> 0x18);
          auVar85[4] = (byte)uVar144 & (byte)iVar135 | ~-(uVar174 < 0x379a) & ~(byte)iVar135;
          auVar85[5] = (byte)(uVar144 >> 8) & (byte)((uint)iVar135 >> 8);
          auVar85[6] = (byte)(uVar144 >> 0x10) & (byte)((uint)iVar135 >> 0x10);
          auVar85[7] = (byte)(uVar80 >> 0x1e) & (byte)((uint)iVar135 >> 0x18);
          auVar85[8] = (byte)uVar146 & (byte)iVar137 | ~-(uVar176 < 0x379a) & ~(byte)iVar137;
          auVar85[9] = (byte)(uVar146 >> 8) & (byte)((uint)iVar137 >> 8);
          auVar85[10] = (byte)(uVar146 >> 0x10) & (byte)((uint)iVar137 >> 0x10);
          auVar85[0xb] = (byte)(uVar145 >> 0x1e) & (byte)((uint)iVar137 >> 0x18);
          auVar85[0xc] = (byte)(uVar147 >> 6) & (byte)iVar139 |
                         ~-(uVar178 < 0x379a) & ~(byte)iVar139;
          auVar85[0xd] = (byte)((uVar147 >> 6) >> 8) & (byte)((uint)iVar139 >> 8);
          auVar85[0xe] = (byte)((uint3)(uVar147 >> 0xe) >> 8) & (byte)((uint)iVar139 >> 0x10);
          auVar85[0xf] = (byte)(uVar147 >> 0x1e) & (byte)((uint)iVar139 >> 0x18);
          uVar78 = uVar70 - 0x379a;
          uVar80 = uVar140 - 0x379a;
          uVar145 = uVar76 - 0x379a;
          uVar147 = uVar141 - 0x379a;
          iVar133 = -(uint)(uVar78 < 0x4000);
          iVar135 = -(uint)(uVar80 < 0x4000);
          iVar137 = -(uint)(uVar145 < 0x4000);
          iVar139 = -(uint)(uVar147 < 0x4000);
          uVar143 = uVar78 >> 6;
          uVar144 = uVar80 >> 6;
          uVar146 = uVar145 >> 6;
          iVar180 = (uVar205 >> 8) - iVar240;
          iVar185 = (uVar213 >> 8) - iVar244;
          iVar186 = (uVar215 >> 8) - iVar245;
          iVar187 = (uVar217 >> 8) - iVar246;
          auVar72[0] = (byte)uVar143 & (byte)iVar133 | ~-(uVar70 < 0x379a) & ~(byte)iVar133;
          auVar72[1] = (byte)(uVar143 >> 8) & (byte)((uint)iVar133 >> 8);
          auVar72[2] = (byte)(uVar143 >> 0x10) & (byte)((uint)iVar133 >> 0x10);
          auVar72[3] = (byte)(uVar78 >> 0x1e) & (byte)((uint)iVar133 >> 0x18);
          auVar72[4] = (byte)uVar144 & (byte)iVar135 | ~-(uVar140 < 0x379a) & ~(byte)iVar135;
          auVar72[5] = (byte)(uVar144 >> 8) & (byte)((uint)iVar135 >> 8);
          auVar72[6] = (byte)(uVar144 >> 0x10) & (byte)((uint)iVar135 >> 0x10);
          auVar72[7] = (byte)(uVar80 >> 0x1e) & (byte)((uint)iVar135 >> 0x18);
          auVar72[8] = (byte)uVar146 & (byte)iVar137 | ~-(uVar76 < 0x379a) & ~(byte)iVar137;
          auVar72[9] = (byte)(uVar146 >> 8) & (byte)((uint)iVar137 >> 8);
          auVar72[10] = (byte)(uVar146 >> 0x10) & (byte)((uint)iVar137 >> 0x10);
          auVar72[0xb] = (byte)(uVar145 >> 0x1e) & (byte)((uint)iVar137 >> 0x18);
          auVar72[0xc] = (byte)(uVar147 >> 6) & (byte)iVar139 |
                         ~-(uVar141 < 0x379a) & ~(byte)iVar139;
          auVar72[0xd] = (byte)((uVar147 >> 6) >> 8) & (byte)((uint)iVar139 >> 8);
          auVar72[0xe] = (byte)((uint3)(uVar147 >> 0xe) >> 8) & (byte)((uint)iVar139 >> 0x10);
          auVar72[0xf] = (byte)(uVar147 >> 0x1e) & (byte)((uint)iVar139 >> 0x18);
          uVar70 = iVar180 + 0x2204;
          uVar76 = iVar185 + 0x2204;
          uVar78 = iVar186 + 0x2204;
          uVar80 = iVar187 + 0x2204;
          iVar133 = -(uint)(uVar70 < 0x4000);
          iVar135 = -(uint)(uVar76 < 0x4000);
          iVar137 = -(uint)(uVar78 < 0x4000);
          iVar139 = -(uint)(uVar80 < 0x4000);
          uVar140 = uVar70 >> 6;
          uVar141 = uVar76 >> 6;
          uVar143 = uVar78 >> 6;
          auVar150[0] = (byte)uVar140 & (byte)iVar133 | ~-(iVar180 < -0x2204) & ~(byte)iVar133;
          auVar150[1] = (byte)(uVar140 >> 8) & (byte)((uint)iVar133 >> 8);
          auVar150[2] = (byte)(uVar140 >> 0x10) & (byte)((uint)iVar133 >> 0x10);
          auVar150[3] = (byte)(uVar70 >> 0x1e) & (byte)((uint)iVar133 >> 0x18);
          auVar150[4] = (byte)uVar141 & (byte)iVar135 | ~-(iVar185 < -0x2204) & ~(byte)iVar135;
          auVar150[5] = (byte)(uVar141 >> 8) & (byte)((uint)iVar135 >> 8);
          auVar150[6] = (byte)(uVar141 >> 0x10) & (byte)((uint)iVar135 >> 0x10);
          auVar150[7] = (byte)(uVar76 >> 0x1e) & (byte)((uint)iVar135 >> 0x18);
          auVar150[8] = (byte)uVar143 & (byte)iVar137 | ~-(iVar186 < -0x2204) & ~(byte)iVar137;
          auVar150[9] = (byte)(uVar143 >> 8) & (byte)((uint)iVar137 >> 8);
          auVar150[10] = (byte)(uVar143 >> 0x10) & (byte)((uint)iVar137 >> 0x10);
          auVar150[0xb] = (byte)(uVar78 >> 0x1e) & (byte)((uint)iVar137 >> 0x18);
          auVar150[0xc] =
               (byte)(uVar80 >> 6) & (byte)iVar139 | ~-(iVar187 < -0x2204) & ~(byte)iVar139;
          auVar150[0xd] = (byte)((uVar80 >> 6) >> 8) & (byte)((uint)iVar139 >> 8);
          auVar150[0xe] = (byte)((uint3)(uVar80 >> 0xe) >> 8) & (byte)((uint)iVar139 >> 0x10);
          auVar150[0xf] = (byte)(uVar80 >> 0x1e) & (byte)((uint)iVar139 >> 0x18);
          auVar181 = NEON_umull((ulong)CONCAT16((*pauVar49)[6],
                                                (uint6)CONCAT14((*pauVar47)[4],
                                                                (uint)CONCAT12((*pauVar45)[2],
                                                                               (ushort)(byte)(*
                                                  pauVar59)[0]))),0x4a854a854a854a85,2);
          uVar170 = (uint)(byte)(*pauVar51)[8] * 0x4a85;
          uVar174 = (uint)(byte)(*pauVar53)[10] * 0x4a85;
          uVar176 = (uint)(byte)(*pauVar55)[0xc] * 0x4a85;
          uVar178 = (uint)(byte)(*pauVar57)[0xe] * 0x4a85;
          auVar191 = NEON_umull((ulong)CONCAT16(puVar34[6],
                                                (uint6)CONCAT14(puVar32[4],
                                                                (uint)CONCAT12(puVar30[2],
                                                                               (ushort)(byte)*
                                                  puVar28))),0x4a854a854a854a85,2);
          uVar189 = (uint)(byte)puVar36[8] * 0x4a85;
          uVar199 = (uint)(byte)puVar38[10] * 0x4a85;
          uVar201 = (uint)(byte)puVar40[0xc] * 0x4a85;
          uVar203 = (uint)(byte)puVar42[0xe] * 0x4a85;
          auVar172._8_4_ = 0x2c282420;
          auVar172._0_8_ = 0x1c1814100c080400;
          auVar112._8_4_ = 0x2c282420;
          auVar112._0_8_ = 0x1c1814100c080400;
          auVar84[1] = (byte)(uVar149 >> 8) & (byte)((uint)iVar14 >> 8);
          auVar84[0] = (byte)uVar149 & (byte)iVar14 | ~-(iVar204 < -0x2204) & ~(byte)iVar14;
          auVar84[2] = (byte)(uVar149 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
          auVar84[3] = (byte)(uVar148 >> 0x1e) & (byte)((uint)iVar14 >> 0x18);
          auVar84[4] = (byte)uVar154 & (byte)iVar15 | ~-(iVar212 < -0x2204) & ~(byte)iVar15;
          auVar84[5] = (byte)(uVar154 >> 8) & (byte)((uint)iVar15 >> 8);
          auVar84[6] = (byte)(uVar154 >> 0x10) & (byte)((uint)iVar15 >> 0x10);
          auVar84[7] = (byte)(uVar153 >> 0x1e) & (byte)((uint)iVar15 >> 0x18);
          auVar84[8] = (byte)uVar156 & (byte)iVar16 | ~-(iVar214 < -0x2204) & ~(byte)iVar16;
          auVar84[9] = (byte)(uVar156 >> 8) & (byte)((uint)iVar16 >> 8);
          auVar84[10] = (byte)(uVar156 >> 0x10) & (byte)((uint)iVar16 >> 0x10);
          auVar84[0xb] = (byte)(uVar155 >> 0x1e) & (byte)((uint)iVar16 >> 0x18);
          auVar84[0xc] = (byte)uVar158 & (byte)iVar17 | ~-(iVar216 < -0x2204) & ~(byte)iVar17;
          auVar84[0xd] = (byte)(uVar158 >> 8) & (byte)((uint)iVar17 >> 8);
          auVar84[0xe] = (byte)(uVar158 >> 0x10) & (byte)((uint)iVar17 >> 0x10);
          auVar84[0xf] = (byte)(uVar157 >> 0x1e) & (byte)((uint)iVar17 >> 0x18);
          auVar94[1] = (byte)(uVar160 >> 8) & (byte)((uint)iVar226 >> 8);
          auVar94[0] = (byte)uVar160 & (byte)iVar226 | ~-(iVar132 < -0x2204) & ~(byte)iVar226;
          auVar94[2] = (byte)(uVar160 >> 0x10) & (byte)((uint)iVar226 >> 0x10);
          auVar94[3] = (byte)(uVar159 >> 0x1e) & (byte)((uint)iVar226 >> 0x18);
          auVar94[4] = (byte)uVar165 & (byte)iVar231 | ~-(iVar134 < -0x2204) & ~(byte)iVar231;
          auVar94[5] = (byte)(uVar165 >> 8) & (byte)((uint)iVar231 >> 8);
          auVar94[6] = (byte)(uVar165 >> 0x10) & (byte)((uint)iVar231 >> 0x10);
          auVar94[7] = (byte)(uVar164 >> 0x1e) & (byte)((uint)iVar231 >> 0x18);
          auVar94[8] = (byte)uVar167 & (byte)iVar10 | ~-(iVar136 < -0x2204) & ~(byte)iVar10;
          auVar94[9] = (byte)(uVar167 >> 8) & (byte)((uint)iVar10 >> 8);
          auVar94[10] = (byte)(uVar167 >> 0x10) & (byte)((uint)iVar10 >> 0x10);
          auVar94[0xb] = (byte)(uVar166 >> 0x1e) & (byte)((uint)iVar10 >> 0x18);
          auVar94[0xc] = (byte)(uVar168 >> 6) & (byte)iVar11 | ~-(iVar138 < -0x2204) & ~(byte)iVar11
          ;
          auVar94[0xd] = (byte)((uVar168 >> 6) >> 8) & (byte)((uint)iVar11 >> 8);
          auVar94[0xe] = (byte)((uint3)(uVar168 >> 0xe) >> 8) & (byte)((uint)iVar11 >> 0x10);
          auVar94[0xf] = (byte)(uVar168 >> 0x1e) & (byte)((uint)iVar11 >> 0x18);
          auVar112._12_4_ = 0x3c383430;
          auVar206 = a64_TBL(ZEXT816(0),auVar150,auVar161,auVar84,auVar94,auVar112);
          auVar172._12_4_ = 0x3c383430;
          auVar179 = a64_TBL(ZEXT816(0),auVar72,auVar85,auVar95,auVar104,auVar172);
          uVar149 = auVar191._0_4_;
          uVar153 = auVar191._4_4_;
          uVar154 = auVar191._8_4_;
          uVar155 = auVar191._12_4_;
          uVar157 = auVar181._0_4_;
          uVar158 = auVar181._4_4_;
          uVar159 = auVar181._8_4_;
          uVar160 = auVar181._12_4_;
          auVar84 = NEON_umull(uVar190,0x811a811a811a811a,2);
          auVar94 = NEON_umull(CONCAT17(auVar103[0xd],
                                        CONCAT16(auVar103[0xc],
                                                 CONCAT15(auVar103[9],
                                                          CONCAT14(auVar103[8],
                                                                   CONCAT13(auVar103[5],
                                                                            CONCAT12(auVar103[4],
                                                                                     auVar103._0_2_)
                                                                           ))))),0x811a811a811a811a,
                               2);
          auVar112 = NEON_umull(CONCAT26(auVar71._12_2_,CONCAT24(auVar71._8_2_,uVar67)),
                                0x811a811a811a811a,2);
          uVar145 = auVar84._0_4_ >> 8;
          uVar146 = auVar84._4_4_ >> 8;
          uVar147 = auVar84._8_4_ >> 8;
          uVar148 = auVar84._12_4_ >> 8;
          uVar13 = auVar112._9_3_;
          uVar12 = auVar112._1_3_;
          uVar78 = (uint)uVar12 + (uVar189 >> 8);
          uVar143 = (uint)(uint3)(CONCAT16(auVar112[7],
                                           CONCAT15(auVar112[6],CONCAT14(auVar112[5],(uint)uVar12)))
                                 >> 0x20) + (uVar199 >> 8);
          uVar80 = (uint)uVar13 + (uVar201 >> 8);
          uVar144 = (uint)(uint3)(CONCAT16(auVar112[0xf],
                                           CONCAT15(auVar112[0xe],
                                                    CONCAT14(auVar112[0xd],(uint)uVar13))) >> 0x20)
                    + (uVar203 >> 8);
          iVar240 = (uVar149 >> 8) - iVar240;
          iVar244 = (uVar153 >> 8) - iVar244;
          iVar245 = (uVar154 >> 8) - iVar245;
          iVar246 = (uVar155 >> 8) - iVar246;
          iVar247 = (uVar189 >> 8) - iVar247;
          iVar251 = (uVar199 >> 8) - iVar251;
          iVar252 = (uVar201 >> 8) - iVar252;
          iVar253 = (uVar203 >> 8) - iVar253;
          uVar70 = iVar247 + 0x2204;
          uVar140 = iVar251 + 0x2204;
          uVar76 = iVar252 + 0x2204;
          uVar141 = iVar253 + 0x2204;
          iVar226 = -(uint)(iVar251 < -0x2204);
          iVar133 = -(uint)(iVar252 < -0x2204);
          iVar231 = -(uint)(iVar253 < -0x2204);
          auVar248._0_4_ = -(uint)(uVar70 < 0x4000);
          auVar248._4_4_ = -(uint)(uVar140 < 0x4000);
          auVar248._8_4_ = -(uint)(uVar76 < 0x4000);
          auVar248._12_4_ = -(uint)(uVar141 < 0x4000);
          auVar241._0_4_ = uVar70 >> 6;
          auVar241._4_4_ = uVar140 >> 6;
          auVar241._8_4_ = uVar76 >> 6;
          auVar241._12_4_ = uVar141 >> 6;
          auVar142[0] = ~-(iVar247 < -0x2204);
          auVar142._1_3_ = 0;
          auVar142[4] = ~(byte)iVar226;
          auVar142._5_2_ = 0;
          auVar142[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar142[8] = ~(byte)iVar133;
          auVar142[9] = ~(byte)((uint)iVar133 >> 8);
          auVar142[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar142[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar142[0xc] = ~(byte)iVar231;
          auVar142[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar142[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar142[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar142 = auVar142 ^ (auVar142 ^ auVar241) & auVar248;
          uVar70 = iVar240 + 0x2204;
          uVar140 = iVar244 + 0x2204;
          uVar76 = iVar245 + 0x2204;
          uVar141 = iVar246 + 0x2204;
          iVar226 = -(uint)(iVar244 < -0x2204);
          iVar133 = -(uint)(iVar245 < -0x2204);
          iVar231 = -(uint)(iVar246 < -0x2204);
          auVar242._0_4_ = -(uint)(uVar70 < 0x4000);
          auVar242._4_4_ = -(uint)(uVar140 < 0x4000);
          auVar242._8_4_ = -(uint)(uVar76 < 0x4000);
          auVar242._12_4_ = -(uint)(uVar141 < 0x4000);
          auVar222._0_4_ = uVar70 >> 6;
          auVar222._4_4_ = uVar140 >> 6;
          auVar222._8_4_ = uVar76 >> 6;
          auVar222._12_4_ = uVar141 >> 6;
          auVar243[0] = ~-(iVar240 < -0x2204);
          auVar243._1_3_ = 0;
          auVar243[4] = ~(byte)iVar226;
          auVar243._5_2_ = 0;
          auVar243[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar243[8] = ~(byte)iVar133;
          auVar243[9] = ~(byte)((uint)iVar133 >> 8);
          auVar243[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar243[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar243[0xc] = ~(byte)iVar231;
          auVar243[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar243[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar243[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar243 = auVar243 ^ (auVar243 ^ auVar222) & auVar242;
          uVar70 = uVar78 - 0x4515;
          uVar140 = uVar143 - 0x4515;
          uVar76 = uVar80 - 0x4515;
          uVar141 = uVar144 - 0x4515;
          iVar226 = -(uint)(uVar143 < 0x4515);
          iVar133 = -(uint)(uVar80 < 0x4515);
          iVar231 = -(uint)(uVar144 < 0x4515);
          auVar249._0_4_ = -(uint)(uVar70 < 0x4000);
          auVar249._4_4_ = -(uint)(uVar140 < 0x4000);
          auVar249._8_4_ = -(uint)(uVar76 < 0x4000);
          auVar249._12_4_ = -(uint)(uVar141 < 0x4000);
          auVar86._0_4_ = uVar70 >> 6;
          auVar86._4_4_ = uVar140 >> 6;
          auVar86._8_4_ = uVar76 >> 6;
          auVar86._12_4_ = uVar141 >> 6;
          auVar250[0] = ~-(uVar78 < 0x4515);
          auVar250._1_3_ = 0;
          auVar250[4] = ~(byte)iVar226;
          auVar250._5_2_ = 0;
          auVar250[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar250[8] = ~(byte)iVar133;
          auVar250[9] = ~(byte)((uint)iVar133 >> 8);
          auVar250[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar250[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar250[0xc] = ~(byte)iVar231;
          auVar250[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar250[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar250[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar250 = auVar250 ^ (auVar250 ^ auVar86) & auVar249;
          uVar70 = uVar145 + (uVar170 >> 8);
          uVar140 = uVar146 + (uVar174 >> 8);
          uVar76 = uVar147 + (uVar176 >> 8);
          uVar141 = uVar148 + (uVar178 >> 8);
          uVar9 = auVar94._9_3_;
          uVar8 = auVar94._1_3_;
          uVar156 = (uint)uVar8 + (uVar149 >> 8);
          uVar164 = (uint)(uint3)(CONCAT16(auVar94[7],
                                           CONCAT15(auVar94[6],CONCAT14(auVar94[5],(uint)uVar8))) >>
                                 0x20) + (uVar153 >> 8);
          uVar165 = (uint)uVar9 + (uVar154 >> 8);
          uVar166 = (uint)(uint3)(CONCAT16(auVar94[0xf],
                                           CONCAT15(auVar94[0xe],CONCAT14(auVar94[0xd],(uint)uVar9))
                                          ) >> 0x20) + (uVar155 >> 8);
          iVar117 = (uVar157 >> 8) - iVar117;
          iVar125 = (uVar158 >> 8) - iVar125;
          iVar126 = (uVar159 >> 8) - iVar126;
          iVar127 = (uVar160 >> 8) - iVar127;
          uVar78 = uVar156 - 0x4515;
          uVar143 = uVar164 - 0x4515;
          uVar80 = uVar165 - 0x4515;
          uVar144 = uVar166 - 0x4515;
          iVar226 = -(uint)(uVar164 < 0x4515);
          iVar133 = -(uint)(uVar165 < 0x4515);
          iVar231 = -(uint)(uVar166 < 0x4515);
          iVar232 = (uVar170 >> 8) - iVar232;
          iVar237 = (uVar174 >> 8) - iVar237;
          iVar238 = (uVar176 >> 8) - iVar238;
          iVar239 = (uVar178 >> 8) - iVar239;
          auVar233._0_4_ = -(uint)(uVar78 < 0x4000);
          auVar233._4_4_ = -(uint)(uVar143 < 0x4000);
          auVar233._8_4_ = -(uint)(uVar80 < 0x4000);
          auVar233._12_4_ = -(uint)(uVar144 < 0x4000);
          auVar118._0_4_ = uVar78 >> 6;
          auVar118._4_4_ = uVar143 >> 6;
          auVar118._8_4_ = uVar80 >> 6;
          auVar118._12_4_ = uVar144 >> 6;
          auVar223[0] = ~-(uVar156 < 0x4515);
          auVar223._1_3_ = 0;
          auVar223[4] = ~(byte)iVar226;
          auVar223._5_2_ = 0;
          auVar223[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar223[8] = ~(byte)iVar133;
          auVar223[9] = ~(byte)((uint)iVar133 >> 8);
          auVar223[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar223[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar223[0xc] = ~(byte)iVar231;
          auVar223[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar223[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar223[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar223 = auVar223 ^ (auVar223 ^ auVar118) & auVar233;
          uVar78 = iVar232 + 0x2204;
          uVar143 = iVar237 + 0x2204;
          uVar80 = iVar238 + 0x2204;
          uVar144 = iVar239 + 0x2204;
          iVar226 = -(uint)(iVar237 < -0x2204);
          iVar133 = -(uint)(iVar238 < -0x2204);
          iVar231 = -(uint)(iVar239 < -0x2204);
          auVar234._0_8_ = CONCAT44(-(uint)(uVar143 < 0x4000),-(uint)(uVar78 < 0x4000));
          auVar234._8_4_ = -(uint)(uVar80 < 0x4000);
          auVar234._12_4_ = -(uint)(uVar144 < 0x4000);
          auVar119._0_4_ = uVar78 >> 6;
          auVar119._4_4_ = uVar143 >> 6;
          auVar119._8_4_ = uVar80 >> 6;
          auVar119._12_4_ = uVar144 >> 6;
          auVar152[0] = ~-(iVar232 < -0x2204);
          auVar152._1_3_ = 0;
          auVar152[4] = ~(byte)iVar226;
          auVar152._5_2_ = 0;
          auVar152[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar152[8] = ~(byte)iVar133;
          auVar152[9] = ~(byte)((uint)iVar133 >> 8);
          auVar152[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar152[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar152[0xc] = ~(byte)iVar231;
          auVar152[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar152[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar152[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar151._8_8_ = auVar234._8_8_;
          auVar151._0_8_ = auVar234._0_8_;
          auVar152 = auVar152 ^ (auVar152 ^ auVar119) & auVar151;
          uVar78 = iVar117 + 0x2204;
          uVar143 = iVar125 + 0x2204;
          uVar80 = iVar126 + 0x2204;
          uVar144 = iVar127 + 0x2204;
          iVar226 = -(uint)(iVar125 < -0x2204);
          iVar133 = -(uint)(iVar126 < -0x2204);
          iVar231 = -(uint)(iVar127 < -0x2204);
          auVar120._0_8_ = CONCAT44(-(uint)(uVar143 < 0x4000),-(uint)(uVar78 < 0x4000));
          auVar120._8_4_ = -(uint)(uVar80 < 0x4000);
          auVar120._12_4_ = -(uint)(uVar144 < 0x4000);
          auVar96._0_4_ = uVar78 >> 6;
          auVar96._4_4_ = uVar143 >> 6;
          auVar96._8_4_ = uVar80 >> 6;
          auVar96._12_4_ = uVar144 >> 6;
          auVar163[0] = ~-(iVar117 < -0x2204);
          auVar163._1_3_ = 0;
          auVar163[4] = ~(byte)iVar226;
          auVar163._5_2_ = 0;
          auVar163[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar163[8] = ~(byte)iVar133;
          auVar163[9] = ~(byte)((uint)iVar133 >> 8);
          auVar163[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar163[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar163[0xc] = ~(byte)iVar231;
          auVar163[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar163[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar163[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar162._8_8_ = auVar120._8_8_;
          auVar162._0_8_ = auVar120._0_8_;
          auVar163 = auVar163 ^ (auVar163 ^ auVar96) & auVar162;
          uVar78 = uVar70 - 0x4515;
          uVar143 = uVar140 - 0x4515;
          uVar80 = uVar76 - 0x4515;
          uVar144 = uVar141 - 0x4515;
          iVar226 = -(uint)(uVar140 < 0x4515);
          iVar133 = -(uint)(uVar76 < 0x4515);
          iVar231 = -(uint)(uVar141 < 0x4515);
          auVar105._0_8_ = CONCAT44(-(uint)(uVar143 < 0x4000),-(uint)(uVar78 < 0x4000));
          auVar105._8_4_ = -(uint)(uVar80 < 0x4000);
          auVar105._12_4_ = -(uint)(uVar144 < 0x4000);
          auVar97._0_4_ = uVar78 >> 6;
          auVar97._4_4_ = uVar143 >> 6;
          auVar97._8_4_ = uVar80 >> 6;
          auVar97._12_4_ = uVar144 >> 6;
          auVar236[0] = ~-(uVar70 < 0x4515);
          auVar236._1_3_ = 0;
          auVar236[4] = ~(byte)iVar226;
          auVar236._5_2_ = 0;
          auVar236[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar236[8] = ~(byte)iVar133;
          auVar236[9] = ~(byte)((uint)iVar133 >> 8);
          auVar236[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar236[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar236[0xc] = ~(byte)iVar231;
          auVar236[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar236[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar236[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar235._8_8_ = auVar105._8_8_;
          auVar235._0_8_ = auVar105._0_8_;
          auVar236 = auVar236 ^ (auVar236 ^ auVar97) & auVar235;
          uVar188 = uVar188 + (uVar170 >> 8);
          uVar198 = uVar198 + (uVar174 >> 8);
          uVar200 = uVar200 + (uVar176 >> 8);
          uVar202 = uVar202 + (uVar178 >> 8);
          uVar110 = uVar110 + (uVar149 >> 8);
          uVar114 = uVar114 + (uVar153 >> 8);
          uVar115 = uVar115 + (uVar154 >> 8);
          uVar116 = uVar116 + (uVar155 >> 8);
          auVar84 = NEON_umull(CONCAT26(auVar83._12_2_,CONCAT24(auVar83._8_2_,uVar68)),
                               0x811a811a811a811a,2);
          uVar174 = auVar84._0_4_ >> 8;
          uVar176 = auVar84._4_4_ >> 8;
          uVar178 = auVar84._8_4_ >> 8;
          uVar149 = auVar84._12_4_ >> 8;
          uVar169 = uVar169 + (uVar189 >> 8);
          uVar173 = uVar173 + (uVar199 >> 8);
          uVar175 = uVar175 + (uVar201 >> 8);
          uVar177 = uVar177 + (uVar203 >> 8);
          uVar170 = uVar174 + (uVar157 >> 8);
          uVar78 = uVar176 + (uVar158 >> 8);
          uVar143 = uVar178 + (uVar159 >> 8);
          uVar80 = uVar149 + (uVar160 >> 8);
          uVar70 = (uint)uVar8 + (uVar205 >> 8);
          uVar140 = (uint)auVar94._5_3_ + (uVar213 >> 8);
          uVar76 = (uint)uVar9 + (uVar215 >> 8);
          uVar141 = (uint)auVar94._13_3_ + (uVar217 >> 8);
          uVar153 = uVar170 - 0x4515;
          uVar154 = uVar78 - 0x4515;
          uVar155 = uVar143 - 0x4515;
          uVar156 = uVar80 - 0x4515;
          iVar226 = -(uint)(uVar78 < 0x4515);
          iVar133 = -(uint)(uVar143 < 0x4515);
          iVar231 = -(uint)(uVar80 < 0x4515);
          uVar78 = (uint)uVar12 + (uVar93 >> 8);
          uVar143 = (uint)auVar112._5_3_ + (uVar99 >> 8);
          uVar80 = (uint)uVar13 + (uVar100 >> 8);
          uVar144 = (uint)auVar112._13_3_ + (uVar101 >> 8);
          auVar107._0_4_ = -(uint)(uVar153 < 0x4000);
          auVar107._4_4_ = -(uint)(uVar154 < 0x4000);
          auVar107._8_4_ = -(uint)(uVar155 < 0x4000);
          auVar107._12_4_ = -(uint)(uVar156 < 0x4000);
          auVar106._0_4_ = uVar153 >> 6;
          auVar106._4_4_ = uVar154 >> 6;
          auVar106._8_4_ = uVar155 >> 6;
          auVar106._12_4_ = uVar156 >> 6;
          auVar87[0] = ~-(uVar170 < 0x4515);
          auVar87._1_3_ = 0;
          auVar87[4] = ~(byte)iVar226;
          auVar87._5_2_ = 0;
          auVar87[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar87[8] = ~(byte)iVar133;
          auVar87[9] = ~(byte)((uint)iVar133 >> 8);
          auVar87[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar87[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar87[0xc] = ~(byte)iVar231;
          auVar87[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar87[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar87[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar106 = auVar106 ^ (auVar106 ^ auVar87) & ~auVar107;
          uVar170 = uVar169 - 0x379a;
          uVar93 = uVar173 - 0x379a;
          uVar99 = uVar175 - 0x379a;
          uVar100 = uVar177 - 0x379a;
          auVar108._0_4_ = -(uint)(uVar170 < 0x4000);
          auVar108._4_4_ = -(uint)(uVar93 < 0x4000);
          auVar108._8_4_ = -(uint)(uVar99 < 0x4000);
          auVar108._12_4_ = -(uint)(uVar100 < 0x4000);
          auVar88._0_4_ = uVar170 >> 6;
          auVar88._4_4_ = uVar93 >> 6;
          auVar88._8_4_ = uVar99 >> 6;
          auVar88._12_4_ = uVar100 >> 6;
          iVar226 = -(uint)(uVar173 < 0x379a);
          iVar133 = -(uint)(uVar175 < 0x379a);
          iVar231 = -(uint)(uVar177 < 0x379a);
          auVar121[0] = ~-(uVar169 < 0x379a);
          auVar121._1_3_ = 0;
          auVar121[4] = ~(byte)iVar226;
          auVar121._5_2_ = 0;
          auVar121[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar121[8] = ~(byte)iVar133;
          auVar121[9] = ~(byte)((uint)iVar133 >> 8);
          auVar121[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar121[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar121[0xc] = ~(byte)iVar231;
          auVar121[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar121[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar121[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar88 = auVar88 ^ (auVar88 ^ auVar121) & ~auVar108;
          uVar170 = uVar110 - 0x379a;
          uVar93 = uVar114 - 0x379a;
          uVar99 = uVar115 - 0x379a;
          uVar100 = uVar116 - 0x379a;
          auVar122._0_4_ = -(uint)(uVar170 < 0x4000);
          auVar122._4_4_ = -(uint)(uVar93 < 0x4000);
          auVar122._8_4_ = -(uint)(uVar99 < 0x4000);
          auVar122._12_4_ = -(uint)(uVar100 < 0x4000);
          auVar109._0_4_ = uVar170 >> 6;
          auVar109._4_4_ = uVar93 >> 6;
          auVar109._8_4_ = uVar99 >> 6;
          auVar109._12_4_ = uVar100 >> 6;
          iVar226 = -(uint)(uVar114 < 0x379a);
          iVar133 = -(uint)(uVar115 < 0x379a);
          iVar231 = -(uint)(uVar116 < 0x379a);
          auVar128[0] = ~-(uVar110 < 0x379a);
          auVar128._1_3_ = 0;
          auVar128[4] = ~(byte)iVar226;
          auVar128._5_2_ = 0;
          auVar128[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar128[8] = ~(byte)iVar133;
          auVar128[9] = ~(byte)((uint)iVar133 >> 8);
          auVar128[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar128[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar128[0xc] = ~(byte)iVar231;
          auVar128[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar128[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar128[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar109 = auVar109 ^ (auVar109 ^ auVar128) & ~auVar122;
          uVar170 = uVar78 - 0x4515;
          uVar93 = uVar143 - 0x4515;
          uVar99 = uVar80 - 0x4515;
          uVar100 = uVar144 - 0x4515;
          auVar129._0_4_ = -(uint)(uVar170 < 0x4000);
          auVar129._4_4_ = -(uint)(uVar93 < 0x4000);
          auVar129._8_4_ = -(uint)(uVar99 < 0x4000);
          auVar129._12_4_ = -(uint)(uVar100 < 0x4000);
          auVar123._0_4_ = uVar170 >> 6;
          auVar123._4_4_ = uVar93 >> 6;
          auVar123._8_4_ = uVar99 >> 6;
          auVar123._12_4_ = uVar100 >> 6;
          iVar226 = -(uint)(uVar143 < 0x4515);
          iVar133 = -(uint)(uVar80 < 0x4515);
          iVar231 = -(uint)(uVar144 < 0x4515);
          auVar182[0] = ~-(uVar78 < 0x4515);
          auVar182._1_3_ = 0;
          auVar182[4] = ~(byte)iVar226;
          auVar182._5_2_ = 0;
          auVar182[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar182[8] = ~(byte)iVar133;
          auVar182[9] = ~(byte)((uint)iVar133 >> 8);
          auVar182[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar182[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar182[0xc] = ~(byte)iVar231;
          auVar182[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar182[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar182[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar123 = auVar123 ^ (auVar123 ^ auVar182) & ~auVar129;
          uVar78 = uVar70 - 0x4515;
          uVar143 = uVar140 - 0x4515;
          uVar80 = uVar76 - 0x4515;
          uVar144 = uVar141 - 0x4515;
          auVar183._0_4_ = -(uint)(uVar78 < 0x4000);
          auVar183._4_4_ = -(uint)(uVar143 < 0x4000);
          auVar183._8_4_ = -(uint)(uVar80 < 0x4000);
          auVar183._12_4_ = -(uint)(uVar144 < 0x4000);
          auVar130._0_4_ = uVar78 >> 6;
          auVar130._4_4_ = uVar143 >> 6;
          auVar130._8_4_ = uVar80 >> 6;
          auVar130._12_4_ = uVar144 >> 6;
          iVar226 = -(uint)(uVar140 < 0x4515);
          iVar133 = -(uint)(uVar76 < 0x4515);
          iVar231 = -(uint)(uVar141 < 0x4515);
          auVar193[0] = ~-(uVar70 < 0x4515);
          auVar193._1_3_ = 0;
          auVar193[4] = ~(byte)iVar226;
          auVar193._5_2_ = 0;
          auVar193[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar193[8] = ~(byte)iVar133;
          auVar193[9] = ~(byte)((uint)iVar133 >> 8);
          auVar193[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar193[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar193[0xc] = ~(byte)iVar231;
          auVar193[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar193[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar193[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar130 = auVar130 ^ (auVar130 ^ auVar193) & ~auVar183;
          uVar70 = uVar188 - 0x379a;
          uVar140 = uVar198 - 0x379a;
          uVar76 = uVar200 - 0x379a;
          uVar141 = uVar202 - 0x379a;
          auVar194._0_4_ = -(uint)(uVar70 < 0x4000);
          auVar194._4_4_ = -(uint)(uVar140 < 0x4000);
          auVar194._8_4_ = -(uint)(uVar76 < 0x4000);
          auVar194._12_4_ = -(uint)(uVar141 < 0x4000);
          auVar184._0_4_ = uVar70 >> 6;
          auVar184._4_4_ = uVar140 >> 6;
          auVar184._8_4_ = uVar76 >> 6;
          auVar184._12_4_ = uVar141 >> 6;
          iVar226 = -(uint)(uVar198 < 0x379a);
          iVar133 = -(uint)(uVar200 < 0x379a);
          iVar231 = -(uint)(uVar202 < 0x379a);
          auVar207[0] = ~-(uVar188 < 0x379a);
          auVar207._1_3_ = 0;
          auVar207[4] = ~(byte)iVar226;
          auVar207._5_2_ = 0;
          auVar207[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar207[8] = ~(byte)iVar133;
          auVar207[9] = ~(byte)((uint)iVar133 >> 8);
          auVar207[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar207[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar207[0xc] = ~(byte)iVar231;
          auVar207[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar207[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar207[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar184 = auVar184 ^ (auVar184 ^ auVar207) & ~auVar194;
          uVar220 = uVar220 + (uVar157 >> 8);
          uVar224 = uVar224 + (uVar158 >> 8);
          uVar227 = uVar227 + (uVar159 >> 8);
          uVar229 = uVar229 + (uVar160 >> 8);
          uVar174 = uVar174 + (uVar81 >> 8);
          uVar176 = uVar176 + (uVar90 >> 8);
          uVar178 = uVar178 + (uVar91 >> 8);
          uVar149 = uVar149 + (uVar92 >> 8);
          uVar70 = uVar220 - 0x379a;
          uVar140 = uVar224 - 0x379a;
          uVar76 = uVar227 - 0x379a;
          uVar141 = uVar229 - 0x379a;
          uVar145 = uVar145 + (uVar69 >> 8);
          uVar146 = uVar146 + (uVar75 >> 8);
          uVar147 = uVar147 + (uVar77 >> 8);
          uVar148 = uVar148 + (uVar79 >> 8);
          auVar195._0_4_ = -(uint)(uVar70 < 0x4000);
          auVar195._4_4_ = -(uint)(uVar140 < 0x4000);
          auVar195._8_4_ = -(uint)(uVar76 < 0x4000);
          auVar195._12_4_ = -(uint)(uVar141 < 0x4000);
          iVar226 = -(uint)(uVar224 < 0x379a);
          iVar133 = -(uint)(uVar227 < 0x379a);
          iVar231 = -(uint)(uVar229 < 0x379a);
          auVar113._0_4_ = uVar70 >> 6;
          auVar113._4_4_ = uVar140 >> 6;
          auVar113._8_4_ = uVar76 >> 6;
          auVar113._12_4_ = uVar141 >> 6;
          auVar208[0] = ~-(uVar220 < 0x379a);
          auVar208._1_3_ = 0;
          auVar208[4] = ~(byte)iVar226;
          auVar208._5_2_ = 0;
          auVar208[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar208[8] = ~(byte)iVar133;
          auVar208[9] = ~(byte)((uint)iVar133 >> 8);
          auVar208[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar208[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar208[0xc] = ~(byte)iVar231;
          auVar208[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar208[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar208[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar113 = auVar113 ^ (auVar113 ^ auVar208) & ~auVar195;
          uVar70 = uVar145 - 0x4515;
          uVar140 = uVar146 - 0x4515;
          uVar76 = uVar147 - 0x4515;
          uVar141 = uVar148 - 0x4515;
          auVar209._0_4_ = -(uint)(uVar70 < 0x4000);
          auVar209._4_4_ = -(uint)(uVar140 < 0x4000);
          auVar209._8_4_ = -(uint)(uVar76 < 0x4000);
          auVar209._12_4_ = -(uint)(uVar141 < 0x4000);
          iVar226 = -(uint)(uVar146 < 0x4515);
          iVar133 = -(uint)(uVar147 < 0x4515);
          iVar231 = -(uint)(uVar148 < 0x4515);
          auVar196._0_4_ = uVar70 >> 6;
          auVar196._4_4_ = uVar140 >> 6;
          auVar196._8_4_ = uVar76 >> 6;
          auVar196._12_4_ = uVar141 >> 6;
          auVar73[0] = ~-(uVar145 < 0x4515);
          auVar73._1_3_ = 0;
          auVar73[4] = ~(byte)iVar226;
          auVar73._5_2_ = 0;
          auVar73[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar73[8] = ~(byte)iVar133;
          auVar73[9] = ~(byte)((uint)iVar133 >> 8);
          auVar73[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar73[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar73[0xc] = ~(byte)iVar231;
          auVar73[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar73[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar73[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar73 = auVar73 ^ (auVar73 ^ auVar196) & auVar209;
          uVar70 = uVar174 - 0x4515;
          uVar140 = uVar176 - 0x4515;
          uVar76 = uVar178 - 0x4515;
          uVar141 = uVar149 - 0x4515;
          auVar210._0_4_ = -(uint)(uVar70 < 0x4000);
          auVar210._4_4_ = -(uint)(uVar140 < 0x4000);
          auVar210._8_4_ = -(uint)(uVar76 < 0x4000);
          auVar210._12_4_ = -(uint)(uVar141 < 0x4000);
          iVar226 = -(uint)(uVar176 < 0x4515);
          iVar133 = -(uint)(uVar178 < 0x4515);
          iVar231 = -(uint)(uVar149 < 0x4515);
          auVar197._0_4_ = uVar70 >> 6;
          auVar197._4_4_ = uVar140 >> 6;
          auVar197._8_4_ = uVar76 >> 6;
          auVar197._12_4_ = uVar141 >> 6;
          auVar98[0] = ~-(uVar174 < 0x4515);
          auVar98._1_3_ = 0;
          auVar98[4] = ~(byte)iVar226;
          auVar98._5_2_ = 0;
          auVar98[7] = ~(byte)((uint)iVar226 >> 0x18);
          auVar98[8] = ~(byte)iVar133;
          auVar98[9] = ~(byte)((uint)iVar133 >> 8);
          auVar98[10] = ~(byte)((uint)iVar133 >> 0x10);
          auVar98[0xb] = ~(byte)((uint)iVar133 >> 0x18);
          auVar98[0xc] = ~(byte)iVar231;
          auVar98[0xd] = ~(byte)((uint)iVar231 >> 8);
          auVar98[0xe] = ~(byte)((uint)iVar231 >> 0x10);
          auVar98[0xf] = ~(byte)((uint)iVar231 >> 0x18);
          auVar98 = auVar98 ^ (auVar98 ^ auVar197) & auVar210;
          auVar131[1] = auVar109[4];
          auVar131[0] = auVar109[0];
          auVar131[2] = auVar109[8];
          auVar131[3] = auVar109[0xc];
          auVar131[4] = auVar88[0];
          auVar131[5] = auVar88[4];
          auVar131[6] = auVar88[8];
          auVar131[7] = auVar88[0xc];
          auVar131[8] = auVar130[0];
          auVar131[9] = auVar130[4];
          auVar131[10] = auVar130[8];
          auVar131[0xb] = auVar130[0xc];
          auVar131[0xc] = auVar123[0];
          auVar131[0xd] = auVar123[4];
          auVar131[0xe] = auVar123[8];
          auVar131[0xf] = auVar123[0xc];
          auVar83._8_4_ = 0xffff1911;
          auVar83._0_8_ = 0x901ffff18100800;
          auVar71._8_4_ = 0xffff1911;
          auVar71._0_8_ = 0x901ffff18100800;
          auVar211._8_8_ = 0xffffffff1101ffff;
          auVar211._0_8_ = 0xffff1000ffffffff;
          auVar219 = a64_TBL(ZEXT816(0),auVar206,auVar179,auVar211);
          auVar124[1] = auVar223[4];
          auVar124[0] = auVar223[0];
          auVar124[2] = auVar223[8];
          auVar124[3] = auVar223[0xc];
          auVar124[4] = auVar250[0];
          auVar124[5] = auVar250[4];
          auVar124[6] = auVar250[8];
          auVar124[7] = auVar250[0xc];
          auVar124[8] = auVar243[0];
          auVar124[9] = auVar243[4];
          auVar124[10] = auVar243[8];
          auVar124[0xb] = auVar243[0xc];
          auVar124[0xc] = auVar142[0];
          auVar124[0xd] = auVar142[4];
          auVar124[0xe] = auVar142[8];
          auVar124[0xf] = auVar142[0xc];
          auVar71._12_4_ = 0x1a120a02;
          auVar211 = a64_TBL(ZEXT816(0),auVar124,auVar131,auVar71);
          auVar191[8] = 4;
          auVar191._0_8_ = 0xffff1b130b03ffff;
          auVar181[8] = 4;
          auVar181._0_8_ = 0xffff1b130b03ffff;
          auVar23._8_8_ = 0xffff1404ffffffff;
          auVar23._0_8_ = 0x1303ffffffff1202;
          auVar172 = a64_TBL(ZEXT816(0),auVar206,auVar179,auVar23);
          auVar181[9] = 0xc;
          auVar181[10] = 0x14;
          auVar181[0xb] = 0x1c;
          auVar181[0xc] = 0xff;
          auVar181[0xd] = 0xff;
          auVar181[0xe] = 5;
          auVar181[0xf] = 0xd;
          auVar112 = a64_TBL(ZEXT816(0),auVar124,auVar131,auVar181);
          auVar21._8_8_ = 0xff170d0c0b0aff16;
          auVar21._0_8_ = 0x7060504ff150100;
          auVar22._8_8_ = 0xffff1f170f07ffff;
          auVar22._0_8_ = 0x1e160e06ffff1d15;
          auVar84 = a64_TBL(ZEXT816(0),auVar124,auVar131,auVar22);
          auVar84 = a64_TBL(ZEXT816(0),auVar84,auVar206,auVar21);
          auVar89[1] = auVar113[4];
          auVar89[0] = auVar113[0];
          auVar89[2] = auVar113[8];
          auVar89[3] = auVar113[0xc];
          auVar89[4] = auVar184[0];
          auVar89[5] = auVar184[4];
          auVar89[6] = auVar184[8];
          auVar89[7] = auVar184[0xc];
          auVar89[8] = auVar98[0];
          auVar89[9] = auVar98[4];
          auVar89[10] = auVar98[8];
          auVar89[0xb] = auVar98[0xc];
          auVar89[0xc] = auVar73[0];
          auVar89[0xd] = auVar73[4];
          auVar89[0xe] = auVar73[8];
          auVar89[0xf] = auVar73[0xc];
          auVar74[1] = auVar106[4];
          auVar74[0] = auVar106[0];
          auVar74[2] = auVar106[8];
          auVar74[3] = auVar106[0xc];
          auVar74[4] = auVar236[0];
          auVar74[5] = auVar236[4];
          auVar74[6] = auVar236[8];
          auVar74[7] = auVar236[0xc];
          auVar74[8] = auVar163[0];
          auVar74[9] = auVar163[4];
          auVar74[10] = auVar163[8];
          auVar74[0xb] = auVar163[0xc];
          auVar74[0xc] = auVar152[0];
          auVar74[0xd] = auVar152[4];
          auVar74[0xe] = auVar152[8];
          auVar74[0xf] = auVar152[0xc];
          auVar83._12_4_ = 0x1a120a02;
          auVar94 = a64_TBL(ZEXT816(0),auVar74,auVar89,auVar83);
          auVar19._8_8_ = 0xf0e0d0cff190908;
          auVar19._0_8_ = 0x706ff1803020100;
          auVar94 = a64_TBL(ZEXT816(0),auVar94,auVar206,auVar19);
          auVar103._8_4_ = 0xffff1e0e;
          auVar103._0_8_ = 0xffffffff1d0dffff;
          auVar192._8_4_ = 0xffffffff;
          auVar192._0_8_ = 0x1b0bffffffff1a0a;
          auVar192._12_4_ = 0xffff1c0c;
          auVar181 = a64_TBL(ZEXT816(0),auVar206,auVar179,auVar192);
          auVar103._12_4_ = 0x1f0fffff;
          auVar83 = a64_TBL(ZEXT816(0),auVar206,auVar179,auVar103);
          auVar191[9] = 0xc;
          auVar191[10] = 0x14;
          auVar191[0xb] = 0x1c;
          auVar191[0xc] = 0xff;
          auVar191[0xd] = 0xff;
          auVar191[0xe] = 5;
          auVar191[0xf] = 0xd;
          auVar103 = a64_TBL(ZEXT816(0),auVar74,auVar89,auVar191);
          auVar71 = a64_TBL(ZEXT816(0),auVar74,auVar89,auVar22);
          auVar20._8_8_ = 0x170e0d0c0b0a1608;
          auVar20._0_8_ = 0x706050415020100;
          auVar84 = a64_TBL(ZEXT816(0),auVar84,auVar179,auVar20);
          auVar18._8_8_ = 0xf0e0d0c190a0908;
          auVar18._0_8_ = 0x706180403020100;
          auVar94 = a64_TBL(ZEXT816(0),auVar94,auVar179,auVar18);
          puVar62[5] = auVar84._8_8_;
          puVar62[4] = auVar84._0_8_;
          puVar62[7] = auVar94._8_8_;
          puVar62[6] = auVar94._0_8_;
          auVar179._8_8_ = 0xf0e1d1c0b0a0908;
          auVar179._0_8_ = 0x1716050403021110;
          auVar84 = a64_TBL(ZEXT816(0),auVar103,auVar181,auVar179);
          auVar206._8_8_ = 0x1f1e0d0c0b0a1918;
          auVar206._0_8_ = 0x706050413120100;
          auVar94 = a64_TBL(ZEXT816(0),auVar71,auVar83,auVar206);
          puVar62[9] = auVar84._8_8_;
          puVar62[8] = auVar84._0_8_;
          puVar62[0xb] = auVar94._8_8_;
          puVar62[10] = auVar94._0_8_;
          auVar24._8_8_ = 0xf0e0d0c1b1a0908;
          auVar24._0_8_ = 0x706151403020100;
          auVar84 = a64_TBL(ZEXT816(0),auVar211,auVar219,auVar24);
          auVar94 = a64_TBL(ZEXT816(0),auVar112,auVar172,auVar179);
          puVar62[1] = auVar84._8_8_;
          *puVar62 = auVar84._0_8_;
          puVar62[3] = auVar94._8_8_;
          puVar62[2] = auVar94._0_8_;
          uVar64 = uVar64 - 0x10;
          param_2 = param_2 + 1;
          param_3 = param_3 + 1;
          puVar62 = puVar62 + 0xc;
        } while (uVar64 != 0);
        param_1 = pauVar2;
        param_2 = pauVar60;
        param_3 = pauVar61;
        param_4 = (undefined8 *)((long)param_4 + uVar65 * 6);
        if (uVar1 == uVar65) goto joined_r0x00235650;
      }
    }
    do {
      bVar6 = (*param_2)[0];
      bVar7 = (*param_3)[0];
      uVar76 = (uint)(byte)(*param_1)[0] * 0x4a85 >> 8;
      uVar70 = uVar76 + ((uint)bVar6 * 0x811a >> 8);
      uVar140 = uVar70 - 0x4515;
      uVar66 = 0xff;
      uVar4 = 0;
      if (0x4514 < uVar70) {
        uVar4 = 0xff;
      }
      uVar5 = (char)(uVar140 >> 6);
      if (0x3fff < uVar140) {
        uVar5 = uVar4;
      }
      *(undefined1 *)param_4 = uVar5;
      iVar226 = uVar76 - (((uint)bVar6 * 0x1913 >> 8) + ((uint)bVar7 * 0x3408 >> 8));
      uVar70 = iVar226 + 0x2204;
      uVar4 = 0;
      if (-0x2205 < iVar226) {
        uVar4 = uVar66;
      }
      uVar5 = (char)(uVar70 >> 6);
      if (0x3fff < uVar70) {
        uVar5 = uVar4;
      }
      *(undefined1 *)((long)param_4 + 1) = uVar5;
      uVar76 = uVar76 + ((uint)bVar7 * 0x6625 >> 8);
      uVar70 = uVar76 - 0x379a;
      uVar4 = 0;
      if (0x3799 < uVar76) {
        uVar4 = uVar66;
      }
      uVar5 = (char)(uVar70 >> 6);
      if (0x3fff < uVar70) {
        uVar5 = uVar4;
      }
      *(undefined1 *)((long)param_4 + 2) = uVar5;
      pauVar60 = (undefined1 (*) [16])(*param_2 + 1);
      bVar6 = (*param_2)[0];
      pauVar61 = (undefined1 (*) [16])(*param_3 + 1);
      bVar7 = (*param_3)[0];
      uVar76 = (uint)(byte)(*param_1)[1] * 0x4a85 >> 8;
      uVar70 = uVar76 + ((uint)bVar6 * 0x811a >> 8);
      uVar140 = uVar70 - 0x4515;
      uVar4 = 0;
      if (0x4514 < uVar70) {
        uVar4 = uVar66;
      }
      uVar66 = (char)(uVar140 >> 6);
      if (0x3fff < uVar140) {
        uVar66 = uVar4;
      }
      *(undefined1 *)((long)param_4 + 3) = uVar66;
      iVar226 = uVar76 - (((uint)bVar6 * 0x1913 >> 8) + ((uint)bVar7 * 0x3408 >> 8));
      uVar70 = iVar226 + 0x2204;
      uVar4 = 0;
      if (-0x2205 < iVar226) {
        uVar4 = 0xff;
      }
      uVar66 = (char)(uVar70 >> 6);
      if (0x3fff < uVar70) {
        uVar66 = uVar4;
      }
      *(undefined1 *)((long)param_4 + 4) = uVar66;
      uVar76 = uVar76 + ((uint)bVar7 * 0x6625 >> 8);
      uVar70 = uVar76 - 0x379a;
      uVar4 = 0;
      if (0x3799 < uVar76) {
        uVar4 = 0xff;
      }
      uVar66 = (char)(uVar70 >> 6);
      if (0x3fff < uVar70) {
        uVar66 = uVar4;
      }
      *(undefined1 *)((long)param_4 + 5) = uVar66;
      pauVar2 = (undefined1 (*) [16])(*param_1 + 2);
      param_4 = (undefined8 *)((long)param_4 + 6);
      param_1 = pauVar2;
      param_2 = pauVar60;
      param_3 = pauVar61;
    } while (param_4 != puVar3);
  }
joined_r0x00235650:
  if ((param_5 & 1) != 0) {
    bVar6 = (*pauVar60)[0];
    bVar7 = (*pauVar61)[0];
    uVar76 = (uint)(byte)(*pauVar2)[0] * 0x4a85 >> 8;
    uVar70 = uVar76 + ((uint)bVar6 * 0x811a >> 8);
    uVar140 = uVar70 - 0x4515;
    uVar4 = 0;
    if (0x4514 < uVar70) {
      uVar4 = 0xff;
    }
    uVar66 = (char)(uVar140 >> 6);
    if (0x3fff < uVar140) {
      uVar66 = uVar4;
    }
    *(undefined1 *)puVar3 = uVar66;
    iVar226 = uVar76 - (((uint)bVar6 * 0x1913 >> 8) + ((uint)bVar7 * 0x3408 >> 8));
    uVar70 = iVar226 + 0x2204;
    uVar4 = 0;
    if (-0x2205 < iVar226) {
      uVar4 = 0xff;
    }
    uVar66 = (char)(uVar70 >> 6);
    if (0x3fff < uVar70) {
      uVar66 = uVar4;
    }
    *(undefined1 *)((long)puVar3 + 1) = uVar66;
    uVar76 = uVar76 + ((uint)bVar7 * 0x6625 >> 8);
    uVar70 = uVar76 - 0x379a;
    uVar4 = 0;
    if (0x3799 < uVar76) {
      uVar4 = 0xff;
    }
    uVar66 = (char)(uVar70 >> 6);
    if (0x3fff < uVar70) {
      uVar66 = uVar4;
    }
    *(undefined1 *)((long)puVar3 + 2) = uVar66;
  }
  return;
}



/* Entry: 00235ea0; end: 00236a5f;  */

void FUN_00235ea0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],uint param_5)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 *puVar47;
  undefined1 *puVar48;
  undefined1 *puVar49;
  undefined1 *puVar50;
  undefined1 *puVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  undefined1 *puVar54;
  undefined1 *puVar55;
  undefined1 *puVar56;
  undefined1 *puVar57;
  undefined1 *puVar58;
  undefined1 *puVar59;
  undefined1 *puVar60;
  undefined1 *puVar61;
  undefined1 *puVar62;
  undefined1 (*pauVar63) [16];
  undefined1 (*pauVar64) [16];
  undefined1 (*pauVar65) [16];
  undefined1 (*pauVar66) [16];
  undefined1 (*pauVar67) [16];
  undefined1 (*pauVar68) [16];
  undefined1 (*pauVar69) [16];
  undefined1 (*pauVar70) [16];
  undefined1 (*pauVar71) [16];
  undefined1 (*pauVar72) [16];
  undefined1 (*pauVar73) [16];
  undefined1 (*pauVar74) [16];
  undefined1 (*pauVar75) [16];
  undefined1 (*pauVar76) [16];
  undefined1 (*pauVar77) [16];
  undefined1 (*pauVar78) [16];
  undefined1 (*pauVar79) [16];
  undefined1 (*pauVar80) [16];
  undefined1 (*pauVar81) [16];
  long lVar82;
  ulong uVar83;
  ulong uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  uint uVar101;
  uint uVar102;
  int iVar103;
  uint uVar112;
  uint uVar113;
  int iVar114;
  uint uVar115;
  uint uVar116;
  int iVar117;
  uint uVar118;
  uint uVar119;
  int iVar120;
  undefined1 auVar104 [16];
  undefined1 auVar108 [16];
  uint uVar121;
  undefined8 uVar122;
  uint uVar128;
  undefined1 auVar125 [16];
  undefined8 uVar123;
  undefined8 uVar124;
  uint uVar127;
  uint uVar129;
  undefined1 auVar126 [16];
  uint uVar130;
  undefined8 uVar131;
  uint uVar136;
  undefined1 auVar132 [16];
  uint uVar135;
  uint uVar137;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  uint uVar138;
  uint uVar142;
  uint uVar143;
  undefined1 auVar139 [16];
  uint uVar144;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  uint uVar145;
  uint uVar157;
  uint uVar159;
  undefined1 auVar147 [16];
  uint uVar161;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  int iVar146;
  int iVar158;
  int iVar160;
  int iVar162;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  uint uVar163;
  undefined8 uVar165;
  uint uVar179;
  undefined1 auVar166 [16];
  uint uVar164;
  uint uVar177;
  uint uVar178;
  uint uVar180;
  uint uVar181;
  uint uVar182;
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar173 [16];
  uint uVar183;
  uint uVar184;
  uint uVar185;
  uint uVar186;
  undefined8 uVar187;
  uint uVar198;
  uint uVar199;
  uint uVar200;
  uint uVar201;
  uint uVar202;
  uint uVar203;
  uint uVar204;
  uint uVar205;
  uint uVar206;
  uint uVar207;
  uint uVar208;
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  uint uVar209;
  uint uVar210;
  int iVar211;
  undefined8 uVar212;
  uint uVar222;
  uint uVar223;
  int iVar224;
  uint uVar225;
  uint uVar226;
  int iVar227;
  int iVar228;
  int iVar229;
  uint uVar230;
  int iVar231;
  int iVar232;
  int iVar233;
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  uint uVar236;
  uint uVar239;
  uint uVar240;
  uint uVar241;
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  int iVar242;
  int iVar243;
  int iVar244;
  int iVar245;
  uint uVar246;
  uint uVar250;
  uint uVar251;
  uint uVar252;
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  uint uVar253;
  uint uVar254;
  int iVar255;
  uint uVar256;
  int iVar257;
  uint uVar258;
  int iVar259;
  int iVar260;
  int iVar261;
  int iVar262;
  int iVar263;
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  uint uVar266;
  uint uVar273;
  uint uVar274;
  uint uVar275;
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  uint uVar279;
  uint uVar280;
  uint uVar281;
  uint uVar282;
  uint uVar283;
  int iVar284;
  uint uVar292;
  uint uVar293;
  uint uVar294;
  uint uVar295;
  uint uVar296;
  int iVar297;
  uint uVar298;
  uint uVar299;
  uint uVar300;
  uint uVar301;
  uint uVar302;
  int iVar303;
  uint uVar304;
  uint uVar305;
  uint uVar306;
  int iVar307;
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  int iVar308;
  int iVar317;
  int iVar318;
  int iVar319;
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  int iVar320;
  int iVar321;
  uint uVar322;
  int iVar323;
  int iVar324;
  uint uVar325;
  int iVar326;
  int iVar327;
  uint uVar328;
  int iVar329;
  int iVar330;
  uint uVar331;
  uint uVar332;
  undefined8 uVar333;
  uint uVar336;
  uint uVar337;
  uint uVar338;
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  uint uVar339;
  uint uVar345;
  uint uVar346;
  uint uVar347;
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  int iVar348;
  int iVar351;
  int iVar352;
  int iVar353;
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  uint uVar354;
  uint uVar355;
  uint uVar357;
  uint uVar358;
  uint uVar359;
  uint uVar360;
  uint uVar361;
  uint uVar362;
  undefined1 auVar356 [16];
  uint uVar363;
  uint uVar364;
  uint uVar365;
  uint uVar366;
  uint uVar367;
  uint uVar368;
  uint uVar369;
  uint uVar370;
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  uint uVar373;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar107 [16];
  undefined1 auVar111 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar172 [16];
  undefined1 auVar176 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  
  pauVar1 = param_1;
  pauVar79 = param_2;
  pauVar80 = param_3;
  pauVar3 = param_4;
  if ((param_5 & 0x3ffffffe) != 0) {
    lVar82 = (long)(int)((param_5 & 0x3ffffffe) << 2);
    pauVar3 = (undefined1 (*) [16])(*param_4 + lVar82);
    uVar83 = lVar82 - 8;
    if (0x77 < uVar83) {
      uVar2 = (uVar83 >> 3) + 1;
      if (((pauVar3 <= param_1 || (undefined1 (*) [16])(*param_1 + (uVar83 >> 2) + 2) <= param_4) &&
          ((undefined1 (*) [16])(*param_2 + uVar2) <= param_4 || pauVar3 <= param_2)) &&
         ((undefined1 (*) [16])(*param_3 + uVar2) <= param_4 || pauVar3 <= param_3)) {
        uVar84 = uVar2 & 0x3ffffffffffffff0;
        pauVar79 = (undefined1 (*) [16])(*param_2 + uVar84);
        pauVar1 = (undefined1 (*) [16])(*param_1 + uVar84 * 2);
        pauVar80 = (undefined1 (*) [16])(*param_3 + uVar84);
        pauVar81 = param_4;
        uVar83 = uVar84;
        do {
          puVar47 = *param_1;
          puVar48 = *param_1;
          puVar49 = *param_1;
          puVar50 = *param_1;
          puVar51 = *param_1;
          puVar52 = *param_1;
          puVar53 = *param_1;
          puVar54 = *param_1;
          puVar55 = *param_1;
          puVar56 = *param_1;
          puVar57 = *param_1;
          puVar58 = *param_1;
          puVar59 = *param_1;
          puVar60 = *param_1;
          puVar61 = *param_1;
          puVar62 = *param_1;
          pauVar78 = param_1 + 1;
          pauVar63 = param_1 + 1;
          pauVar64 = param_1 + 1;
          pauVar65 = param_1 + 1;
          pauVar66 = param_1 + 1;
          pauVar67 = param_1 + 1;
          pauVar68 = param_1 + 1;
          pauVar69 = param_1 + 1;
          pauVar70 = param_1 + 1;
          pauVar71 = param_1 + 1;
          pauVar72 = param_1 + 1;
          pauVar73 = param_1 + 1;
          pauVar74 = param_1 + 1;
          pauVar75 = param_1 + 1;
          pauVar76 = param_1 + 1;
          pauVar77 = param_1 + 1;
          param_1 = param_1 + 2;
          auVar125 = *param_2;
          auVar40._8_8_ = 0xffffff07ffffff06;
          auVar40._0_8_ = 0xffffff05ffffff04;
          auVar41._8_8_ = 0xffffff03ffffff02;
          auVar41._0_8_ = 0xffffff01ffffff00;
          auVar132 = a64_TBL(ZEXT816(0),auVar125,auVar41);
          auVar147 = a64_TBL(ZEXT816(0),auVar125,auVar40);
          auVar38._8_8_ = 0xffffff0fffffff0e;
          auVar38._0_8_ = 0xffffff0dffffff0c;
          auVar39._8_8_ = 0xffffff0bffffff0a;
          auVar39._0_8_ = 0xffffff09ffffff08;
          auVar166 = a64_TBL(ZEXT816(0),auVar125,auVar39);
          auVar139 = *param_3;
          auVar125 = a64_TBL(ZEXT816(0),auVar125,auVar38);
          uVar212 = CONCAT26(auVar125._12_2_,
                             CONCAT24(auVar125._8_2_,CONCAT22(auVar125._4_2_,auVar125._0_2_)));
          uVar333 = CONCAT26(auVar166._12_2_,
                             CONCAT24(auVar166._8_2_,CONCAT22(auVar166._4_2_,auVar166._0_2_)));
          uVar122 = CONCAT26(auVar147._12_2_,
                             CONCAT24(auVar147._8_2_,CONCAT22(auVar147._4_2_,auVar147._0_2_)));
          auVar147 = a64_TBL(ZEXT816(0),auVar139,auVar41);
          auVar166 = a64_TBL(ZEXT816(0),auVar139,auVar40);
          auVar276 = a64_TBL(ZEXT816(0),auVar139,auVar39);
          uVar123 = CONCAT26(auVar132._12_2_,
                             CONCAT24(auVar132._8_2_,CONCAT22(auVar132._4_2_,auVar132._0_2_)));
          auVar125 = a64_TBL(ZEXT816(0),auVar139,auVar38);
          uVar124 = CONCAT26(auVar125._12_2_,
                             CONCAT24(auVar125._8_2_,CONCAT22(auVar125._4_2_,auVar125._0_2_)));
          uVar131 = CONCAT26(auVar276._12_2_,
                             CONCAT24(auVar276._8_2_,CONCAT22(auVar276._4_2_,auVar276._0_2_)));
          uVar187 = CONCAT26(auVar166._12_2_,
                             CONCAT24(auVar166._8_2_,CONCAT22(auVar166._4_2_,auVar166._0_2_)));
          auVar166 = NEON_umull((ulong)CONCAT16(puVar53[6],
                                                (uint6)CONCAT14(puVar51[4],
                                                                (uint)CONCAT12(puVar49[2],
                                                                               (ushort)(byte)*
                                                  puVar47))),0x4a854a854a854a85,2);
          uVar165 = CONCAT26(auVar147._12_2_,
                             CONCAT24(auVar147._8_2_,CONCAT22(auVar147._4_2_,auVar147._0_2_)));
          uVar236 = (uint)(byte)puVar55[8] * 0x4a85;
          uVar239 = (uint)(byte)puVar57[10] * 0x4a85;
          uVar240 = (uint)(byte)puVar59[0xc] * 0x4a85;
          uVar241 = (uint)(byte)puVar61[0xe] * 0x4a85;
          auVar125 = NEON_umull((ulong)CONCAT16((*pauVar68)[6],
                                                (uint6)CONCAT14((*pauVar66)[4],
                                                                (uint)CONCAT12((*pauVar64)[2],
                                                                               (ushort)(byte)(*
                                                  pauVar78)[0]))),0x4a854a854a854a85,2);
          uVar101 = (uint)(byte)(*pauVar70)[8] * 0x4a85;
          uVar112 = (uint)(byte)(*pauVar72)[10] * 0x4a85;
          uVar115 = (uint)(byte)(*pauVar74)[0xc] * 0x4a85;
          uVar118 = (uint)(byte)(*pauVar76)[0xe] * 0x4a85;
          uVar253 = auVar125._0_4_;
          uVar254 = auVar125._4_4_;
          uVar256 = auVar125._8_4_;
          uVar258 = auVar125._12_4_;
          auVar125 = NEON_umull(uVar212,0x811a811a811a811a,2);
          uVar363 = auVar125._0_4_ >> 8;
          uVar365 = auVar125._4_4_ >> 8;
          uVar367 = auVar125._8_4_ >> 8;
          uVar369 = auVar125._12_4_ >> 8;
          auVar125 = NEON_umull(uVar212,0x1913191319131913,2);
          auVar132 = NEON_umull(uVar333,0x1913191319131913,2);
          auVar147 = NEON_umull(uVar131,0x3408340834083408,2);
          auVar139 = NEON_umull(uVar124,0x3408340834083408,2);
          iVar242 = (auVar125._0_4_ >> 8) + (auVar139._0_4_ >> 8);
          iVar243 = (auVar125._4_4_ >> 8) + (auVar139._4_4_ >> 8);
          iVar244 = (auVar125._8_4_ >> 8) + (auVar139._8_4_ >> 8);
          iVar245 = (auVar125._12_4_ >> 8) + (auVar139._12_4_ >> 8);
          iVar146 = (uint)auVar132._1_3_ + (auVar147._0_4_ >> 8);
          iVar158 = (uint)auVar132._5_3_ + (auVar147._4_4_ >> 8);
          iVar160 = (uint)auVar132._9_3_ + (auVar147._8_4_ >> 8);
          iVar162 = (uint)auVar132._13_3_ + (auVar147._12_4_ >> 8);
          auVar125 = NEON_umull(uVar124,0x6625662566256625,2);
          auVar139 = NEON_umull(uVar131,0x6625662566256625,2);
          auVar132 = NEON_umull(uVar187,0x6625662566256625,2);
          auVar147 = NEON_umull(uVar165,0x6625662566256625,2);
          uVar145 = auVar147._0_4_ >> 8;
          uVar157 = auVar147._4_4_ >> 8;
          uVar159 = auVar147._8_4_ >> 8;
          uVar161 = auVar147._12_4_ >> 8;
          uVar354 = auVar132._0_4_ >> 8;
          uVar357 = auVar132._4_4_ >> 8;
          uVar359 = auVar132._8_4_ >> 8;
          uVar361 = auVar132._12_4_ >> 8;
          uVar332 = auVar139._0_4_ >> 8;
          uVar336 = auVar139._4_4_ >> 8;
          uVar337 = auVar139._8_4_ >> 8;
          uVar338 = auVar139._12_4_ >> 8;
          uVar364 = uVar363 + (uVar101 >> 8);
          uVar366 = uVar365 + (uVar112 >> 8);
          uVar368 = uVar367 + (uVar115 >> 8);
          uVar370 = uVar369 + (uVar118 >> 8);
          uVar339 = auVar125._0_4_ >> 8;
          uVar345 = auVar125._4_4_ >> 8;
          uVar346 = auVar125._8_4_ >> 8;
          uVar347 = auVar125._12_4_ >> 8;
          uVar121 = uVar339 + (uVar101 >> 8);
          uVar127 = uVar345 + (uVar112 >> 8);
          uVar128 = uVar346 + (uVar115 >> 8);
          uVar129 = uVar347 + (uVar118 >> 8);
          uVar102 = uVar332 + (uVar253 >> 8);
          uVar113 = uVar336 + (uVar254 >> 8);
          uVar116 = uVar337 + (uVar256 >> 8);
          uVar119 = uVar338 + (uVar258 >> 8);
          uVar130 = uVar354 + (uVar236 >> 8);
          uVar135 = uVar357 + (uVar239 >> 8);
          uVar136 = uVar359 + (uVar240 >> 8);
          uVar137 = uVar361 + (uVar241 >> 8);
          uVar246 = auVar166._0_4_;
          uVar250 = auVar166._4_4_;
          uVar251 = auVar166._8_4_;
          uVar252 = auVar166._12_4_;
          uVar138 = uVar145 + (uVar246 >> 8);
          uVar142 = uVar157 + (uVar250 >> 8);
          uVar143 = uVar159 + (uVar251 >> 8);
          uVar144 = uVar161 + (uVar252 >> 8);
          uVar163 = uVar138 - 0x379a;
          uVar177 = uVar142 - 0x379a;
          uVar179 = uVar143 - 0x379a;
          uVar181 = uVar144 - 0x379a;
          uVar183 = uVar130 - 0x379a;
          uVar198 = uVar135 - 0x379a;
          uVar202 = uVar136 - 0x379a;
          uVar206 = uVar137 - 0x379a;
          uVar209 = uVar102 - 0x379a;
          uVar222 = uVar113 - 0x379a;
          uVar225 = uVar116 - 0x379a;
          uVar230 = uVar119 - 0x379a;
          uVar279 = uVar121 - 0x379a;
          uVar292 = uVar127 - 0x379a;
          uVar298 = uVar128 - 0x379a;
          uVar304 = uVar129 - 0x379a;
          iVar320 = -(uint)(uVar279 < 0x4000);
          iVar323 = -(uint)(uVar292 < 0x4000);
          iVar326 = -(uint)(uVar298 < 0x4000);
          iVar329 = -(uint)(uVar304 < 0x4000);
          iVar348 = -(uint)(uVar209 < 0x4000);
          iVar351 = -(uint)(uVar222 < 0x4000);
          iVar352 = -(uint)(uVar225 < 0x4000);
          iVar353 = -(uint)(uVar230 < 0x4000);
          uVar280 = uVar279 >> 6;
          uVar293 = uVar292 >> 6;
          uVar299 = uVar298 >> 6;
          iVar321 = -(uint)(uVar183 < 0x4000);
          iVar324 = -(uint)(uVar198 < 0x4000);
          iVar327 = -(uint)(uVar202 < 0x4000);
          iVar330 = -(uint)(uVar206 < 0x4000);
          uVar210 = uVar209 >> 6;
          uVar223 = uVar222 >> 6;
          uVar226 = uVar225 >> 6;
          iVar103 = -(uint)(uVar163 < 0x4000);
          iVar114 = -(uint)(uVar177 < 0x4000);
          iVar117 = -(uint)(uVar179 < 0x4000);
          iVar120 = -(uint)(uVar181 < 0x4000);
          uVar164 = uVar163 >> 6;
          uVar178 = uVar177 >> 6;
          uVar180 = uVar179 >> 6;
          uVar182 = uVar181 >> 6;
          uVar184 = uVar183 >> 6;
          uVar199 = uVar198 >> 6;
          uVar203 = uVar202 >> 6;
          uVar207 = uVar206 >> 6;
          auVar125 = NEON_umull((ulong)CONCAT16((*pauVar69)[7],
                                                (uint6)CONCAT14((*pauVar67)[5],
                                                                (uint)CONCAT12((*pauVar65)[3],
                                                                               (ushort)(byte)(*
                                                  pauVar63)[1]))),0x4a854a854a854a85,2);
          uVar322 = (uint)(byte)(*pauVar71)[9] * 0x4a85;
          uVar325 = (uint)(byte)(*pauVar73)[0xb] * 0x4a85;
          uVar328 = (uint)(byte)(*pauVar75)[0xd] * 0x4a85;
          uVar331 = (uint)(byte)(*pauVar77)[0xf] * 0x4a85;
          uVar281 = (uint)(byte)puVar56[9] * 0x4a85;
          uVar294 = (uint)(byte)puVar58[0xb] * 0x4a85;
          uVar300 = (uint)(byte)puVar60[0xd] * 0x4a85;
          uVar305 = (uint)(byte)puVar62[0xf] * 0x4a85;
          uVar339 = uVar339 + (uVar322 >> 8);
          uVar345 = uVar345 + (uVar325 >> 8);
          uVar346 = uVar346 + (uVar328 >> 8);
          uVar347 = uVar347 + (uVar331 >> 8);
          uVar266 = auVar125._0_4_;
          uVar273 = auVar125._4_4_;
          uVar274 = auVar125._8_4_;
          uVar275 = auVar125._12_4_;
          uVar332 = uVar332 + (uVar266 >> 8);
          uVar336 = uVar336 + (uVar273 >> 8);
          uVar337 = uVar337 + (uVar274 >> 8);
          uVar338 = uVar338 + (uVar275 >> 8);
          uVar354 = uVar354 + (uVar281 >> 8);
          uVar357 = uVar357 + (uVar294 >> 8);
          uVar359 = uVar359 + (uVar300 >> 8);
          uVar361 = uVar361 + (uVar305 >> 8);
          uVar282 = uVar332 - 0x379a;
          uVar295 = uVar336 - 0x379a;
          uVar301 = uVar337 - 0x379a;
          uVar306 = uVar338 - 0x379a;
          uVar185 = uVar339 - 0x379a;
          uVar200 = uVar345 - 0x379a;
          uVar204 = uVar346 - 0x379a;
          uVar208 = uVar347 - 0x379a;
          iVar211 = -(uint)(uVar185 < 0x4000);
          iVar224 = -(uint)(uVar200 < 0x4000);
          iVar227 = -(uint)(uVar204 < 0x4000);
          iVar231 = -(uint)(uVar208 < 0x4000);
          iVar308 = -(uint)(uVar282 < 0x4000);
          iVar317 = -(uint)(uVar295 < 0x4000);
          iVar318 = -(uint)(uVar301 < 0x4000);
          iVar319 = -(uint)(uVar306 < 0x4000);
          uVar283 = uVar282 >> 6;
          uVar296 = uVar295 >> 6;
          uVar302 = uVar301 >> 6;
          uVar186 = uVar185 >> 6;
          uVar201 = uVar200 >> 6;
          uVar205 = uVar204 >> 6;
          auVar349[0] = (byte)uVar283 & (byte)iVar308 | ~-(uVar332 < 0x379a) & ~(byte)iVar308;
          auVar349[1] = (byte)(uVar283 >> 8) & (byte)((uint)iVar308 >> 8);
          auVar349[2] = (byte)(uVar283 >> 0x10) & (byte)((uint)iVar308 >> 0x10);
          auVar349[3] = (byte)(uVar282 >> 0x1e) & (byte)((uint)iVar308 >> 0x18);
          auVar349[4] = (byte)uVar296 & (byte)iVar317 | ~-(uVar336 < 0x379a) & ~(byte)iVar317;
          auVar349[5] = (byte)(uVar296 >> 8) & (byte)((uint)iVar317 >> 8);
          auVar349[6] = (byte)(uVar296 >> 0x10) & (byte)((uint)iVar317 >> 0x10);
          auVar349[7] = (byte)(uVar295 >> 0x1e) & (byte)((uint)iVar317 >> 0x18);
          auVar349[8] = (byte)uVar302 & (byte)iVar318 | ~-(uVar337 < 0x379a) & ~(byte)iVar318;
          auVar349[9] = (byte)(uVar302 >> 8) & (byte)((uint)iVar318 >> 8);
          auVar349[10] = (byte)(uVar302 >> 0x10) & (byte)((uint)iVar318 >> 0x10);
          auVar349[0xb] = (byte)(uVar301 >> 0x1e) & (byte)((uint)iVar318 >> 0x18);
          auVar349[0xc] =
               (byte)(uVar306 >> 6) & (byte)iVar319 | ~-(uVar338 < 0x379a) & ~(byte)iVar319;
          auVar349[0xd] = (byte)((uVar306 >> 6) >> 8) & (byte)((uint)iVar319 >> 8);
          auVar349[0xe] = (byte)((uint3)(uVar306 >> 0xe) >> 8) & (byte)((uint)iVar319 >> 0x10);
          auVar349[0xf] = (byte)(uVar306 >> 0x1e) & (byte)((uint)iVar319 >> 0x18);
          uVar282 = uVar354 - 0x379a;
          uVar295 = uVar357 - 0x379a;
          uVar301 = uVar359 - 0x379a;
          uVar306 = uVar361 - 0x379a;
          iVar308 = -(uint)(uVar282 < 0x4000);
          iVar317 = -(uint)(uVar295 < 0x4000);
          iVar318 = -(uint)(uVar301 < 0x4000);
          iVar319 = -(uint)(uVar306 < 0x4000);
          uVar283 = uVar282 >> 6;
          uVar296 = uVar295 >> 6;
          uVar302 = uVar301 >> 6;
          uVar332 = uVar306 >> 6;
          auVar125 = NEON_umull((ulong)CONCAT16(puVar54[7],
                                                (uint6)CONCAT14(puVar52[5],
                                                                (uint)CONCAT12(puVar50[3],
                                                                               (ushort)(byte)puVar48
                                                  [1]))),0x4a854a854a854a85,2);
          uVar355 = auVar125._0_4_;
          uVar358 = auVar125._4_4_;
          uVar360 = auVar125._8_4_;
          uVar362 = auVar125._12_4_;
          uVar145 = uVar145 + (uVar355 >> 8);
          uVar157 = uVar157 + (uVar358 >> 8);
          uVar159 = uVar159 + (uVar360 >> 8);
          uVar161 = uVar161 + (uVar362 >> 8);
          auVar340[0] = (byte)uVar283 & (byte)iVar308 | ~-(uVar354 < 0x379a) & ~(byte)iVar308;
          auVar340[1] = (byte)(uVar283 >> 8) & (byte)((uint)iVar308 >> 8);
          auVar340[2] = (byte)(uVar283 >> 0x10) & (byte)((uint)iVar308 >> 0x10);
          auVar340[3] = (byte)(uVar282 >> 0x1e) & (byte)((uint)iVar308 >> 0x18);
          auVar340[4] = (byte)uVar296 & (byte)iVar317 | ~-(uVar357 < 0x379a) & ~(byte)iVar317;
          auVar340[5] = (byte)(uVar296 >> 8) & (byte)((uint)iVar317 >> 8);
          auVar340[6] = (byte)(uVar296 >> 0x10) & (byte)((uint)iVar317 >> 0x10);
          auVar340[7] = (byte)(uVar295 >> 0x1e) & (byte)((uint)iVar317 >> 0x18);
          auVar340[8] = (byte)uVar302 & (byte)iVar318 | ~-(uVar359 < 0x379a) & ~(byte)iVar318;
          auVar340[9] = (byte)(uVar302 >> 8) & (byte)((uint)iVar318 >> 8);
          auVar340[10] = (byte)(uVar302 >> 0x10) & (byte)((uint)iVar318 >> 0x10);
          auVar340[0xb] = (byte)(uVar301 >> 0x1e) & (byte)((uint)iVar318 >> 0x18);
          auVar340[0xc] = (byte)uVar332 & (byte)iVar319 | ~-(uVar361 < 0x379a) & ~(byte)iVar319;
          auVar340[0xd] = (byte)(uVar332 >> 8) & (byte)((uint)iVar319 >> 8);
          auVar340[0xe] = (byte)(uVar332 >> 0x10) & (byte)((uint)iVar319 >> 0x10);
          auVar340[0xf] = (byte)(uVar306 >> 0x1e) & (byte)((uint)iVar319 >> 0x18);
          uVar282 = uVar145 - 0x379a;
          uVar295 = uVar157 - 0x379a;
          uVar301 = uVar159 - 0x379a;
          uVar306 = uVar161 - 0x379a;
          iVar308 = -(uint)(uVar282 < 0x4000);
          iVar317 = -(uint)(uVar295 < 0x4000);
          iVar228 = -(uint)(uVar301 < 0x4000);
          iVar232 = -(uint)(uVar306 < 0x4000);
          uVar283 = uVar282 >> 6;
          uVar296 = uVar295 >> 6;
          uVar302 = uVar301 >> 6;
          auVar132 = NEON_umull(uVar123,0x811a811a811a811a,2);
          iVar284 = (uVar253 >> 8) - iVar146;
          iVar297 = (uVar254 >> 8) - iVar158;
          iVar303 = (uVar256 >> 8) - iVar160;
          iVar307 = (uVar258 >> 8) - iVar162;
          iVar319 = (uVar101 >> 8) - iVar242;
          iVar318 = (uVar112 >> 8) - iVar243;
          iVar229 = (uVar115 >> 8) - iVar244;
          iVar233 = (uVar118 >> 8) - iVar245;
          auVar334[0] = (byte)uVar283 & (byte)iVar308 | ~-(uVar145 < 0x379a) & ~(byte)iVar308;
          auVar334[1] = (byte)(uVar283 >> 8) & (byte)((uint)iVar308 >> 8);
          auVar334[2] = (byte)(uVar283 >> 0x10) & (byte)((uint)iVar308 >> 0x10);
          auVar334[3] = (byte)(uVar282 >> 0x1e) & (byte)((uint)iVar308 >> 0x18);
          auVar334[4] = (byte)uVar296 & (byte)iVar317 | ~-(uVar157 < 0x379a) & ~(byte)iVar317;
          auVar334[5] = (byte)(uVar296 >> 8) & (byte)((uint)iVar317 >> 8);
          auVar334[6] = (byte)(uVar296 >> 0x10) & (byte)((uint)iVar317 >> 0x10);
          auVar334[7] = (byte)(uVar295 >> 0x1e) & (byte)((uint)iVar317 >> 0x18);
          auVar334[8] = (byte)uVar302 & (byte)iVar228 | ~-(uVar159 < 0x379a) & ~(byte)iVar228;
          auVar334[9] = (byte)(uVar302 >> 8) & (byte)((uint)iVar228 >> 8);
          auVar334[10] = (byte)(uVar302 >> 0x10) & (byte)((uint)iVar228 >> 0x10);
          auVar334[0xb] = (byte)(uVar301 >> 0x1e) & (byte)((uint)iVar228 >> 0x18);
          auVar334[0xc] =
               (byte)(uVar306 >> 6) & (byte)iVar232 | ~-(uVar161 < 0x379a) & ~(byte)iVar232;
          auVar334[0xd] = (byte)((uVar306 >> 6) >> 8) & (byte)((uint)iVar232 >> 8);
          auVar334[0xe] = (byte)((uint3)(uVar306 >> 0xe) >> 8) & (byte)((uint)iVar232 >> 0x10);
          auVar334[0xf] = (byte)(uVar306 >> 0x1e) & (byte)((uint)iVar232 >> 0x18);
          uVar101 = iVar319 + 0x2204;
          uVar112 = iVar318 + 0x2204;
          uVar115 = iVar229 + 0x2204;
          uVar118 = iVar233 + 0x2204;
          iVar308 = -(uint)(iVar318 < -0x2204);
          iVar317 = -(uint)(iVar229 < -0x2204);
          iVar318 = -(uint)(iVar233 < -0x2204);
          auVar213._0_4_ = -(uint)(uVar101 < 0x4000);
          auVar213._4_4_ = -(uint)(uVar112 < 0x4000);
          auVar213._8_4_ = -(uint)(uVar115 < 0x4000);
          auVar213._12_4_ = -(uint)(uVar118 < 0x4000);
          auVar148._0_4_ = uVar101 >> 6;
          auVar148._4_4_ = uVar112 >> 6;
          auVar148._8_4_ = uVar115 >> 6;
          auVar148._12_4_ = uVar118 >> 6;
          auVar214[0] = ~-(iVar319 < -0x2204);
          auVar214._1_3_ = 0;
          auVar214[4] = ~(byte)iVar308;
          auVar214._5_2_ = 0;
          auVar214[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar214[8] = ~(byte)iVar317;
          auVar214[9] = ~(byte)((uint)iVar317 >> 8);
          auVar214[10] = ~(byte)((uint)iVar317 >> 0x10);
          auVar214[0xb] = ~(byte)((uint)iVar317 >> 0x18);
          auVar214[0xc] = ~(byte)iVar318;
          auVar214[0xd] = ~(byte)((uint)iVar318 >> 8);
          auVar214[0xe] = ~(byte)((uint)iVar318 >> 0x10);
          auVar214[0xf] = ~(byte)((uint)iVar318 >> 0x18);
          auVar214 = auVar214 ^ (auVar214 ^ auVar148) & auVar213;
          uVar101 = iVar284 + 0x2204;
          uVar112 = iVar297 + 0x2204;
          uVar115 = iVar303 + 0x2204;
          uVar118 = iVar307 + 0x2204;
          iVar308 = -(uint)(iVar297 < -0x2204);
          iVar317 = -(uint)(iVar303 < -0x2204);
          iVar318 = -(uint)(iVar307 < -0x2204);
          auVar285._0_4_ = -(uint)(uVar101 < 0x4000);
          auVar285._4_4_ = -(uint)(uVar112 < 0x4000);
          auVar285._8_4_ = -(uint)(uVar115 < 0x4000);
          auVar285._12_4_ = -(uint)(uVar118 < 0x4000);
          auVar149._0_4_ = uVar101 >> 6;
          auVar149._4_4_ = uVar112 >> 6;
          auVar149._8_4_ = uVar115 >> 6;
          auVar149._12_4_ = uVar118 >> 6;
          auVar286[0] = ~-(iVar284 < -0x2204);
          auVar286._1_3_ = 0;
          auVar286[4] = ~(byte)iVar308;
          auVar286._5_2_ = 0;
          auVar286[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar286[8] = ~(byte)iVar317;
          auVar286[9] = ~(byte)((uint)iVar317 >> 8);
          auVar286[10] = ~(byte)((uint)iVar317 >> 0x10);
          auVar286[0xb] = ~(byte)((uint)iVar317 >> 0x18);
          auVar286[0xc] = ~(byte)iVar318;
          auVar286[0xd] = ~(byte)((uint)iVar318 >> 8);
          auVar286[0xe] = ~(byte)((uint)iVar318 >> 0x10);
          auVar286[0xf] = ~(byte)((uint)iVar318 >> 0x18);
          auVar286 = auVar286 ^ (auVar286 ^ auVar149) & auVar285;
          uVar101 = uVar364 - 0x4515;
          uVar112 = uVar366 - 0x4515;
          uVar115 = uVar368 - 0x4515;
          uVar118 = uVar370 - 0x4515;
          iVar308 = -(uint)(uVar366 < 0x4515);
          iVar317 = -(uint)(uVar368 < 0x4515);
          iVar318 = -(uint)(uVar370 < 0x4515);
          auVar150._0_4_ = uVar101 >> 6;
          auVar150._4_4_ = uVar112 >> 6;
          auVar150._8_4_ = uVar115 >> 6;
          auVar150._12_4_ = uVar118 >> 6;
          auVar372[0] = ~-(uVar364 < 0x4515);
          auVar372._1_3_ = 0;
          auVar372[4] = ~(byte)iVar308;
          auVar372._5_2_ = 0;
          auVar372[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar372[8] = ~(byte)iVar317;
          auVar372[9] = ~(byte)((uint)iVar317 >> 8);
          auVar372[10] = ~(byte)((uint)iVar317 >> 0x10);
          auVar372[0xb] = ~(byte)((uint)iVar317 >> 0x18);
          auVar372[0xc] = ~(byte)iVar318;
          auVar372[0xd] = ~(byte)((uint)iVar318 >> 8);
          auVar372[0xe] = ~(byte)((uint)iVar318 >> 0x10);
          auVar372[0xf] = ~(byte)((uint)iVar318 >> 0x18);
          auVar371._12_4_ = -(uint)(uVar118 < 0x4000);
          auVar371._8_4_ = -(uint)(uVar115 < 0x4000);
          auVar371._4_4_ = -(uint)(uVar112 < 0x4000);
          auVar371._0_4_ = -(uint)(uVar101 < 0x4000);
          auVar372 = auVar372 ^ (auVar372 ^ auVar150) & auVar371;
          auVar125 = NEON_umull(uVar122,0x811a811a811a811a,2);
          auVar139 = NEON_umull(uVar333,0x811a811a811a811a,2);
          uVar145 = auVar139._0_4_ >> 8;
          uVar157 = auVar139._4_4_ >> 8;
          uVar159 = auVar139._8_4_ >> 8;
          uVar161 = auVar139._12_4_ >> 8;
          uVar357 = auVar125._0_4_ >> 8;
          uVar359 = auVar125._4_4_ >> 8;
          uVar361 = auVar125._8_4_ >> 8;
          uVar364 = auVar125._12_4_ >> 8;
          uVar366 = auVar132._0_4_ >> 8;
          uVar368 = auVar132._4_4_ >> 8;
          uVar370 = auVar132._8_4_ >> 8;
          uVar373 = auVar132._12_4_ >> 8;
          uVar336 = uVar357 + (uVar236 >> 8);
          uVar337 = uVar359 + (uVar239 >> 8);
          uVar338 = uVar361 + (uVar240 >> 8);
          uVar354 = uVar364 + (uVar241 >> 8);
          uVar301 = uVar145 + (uVar253 >> 8);
          uVar302 = uVar157 + (uVar254 >> 8);
          uVar306 = uVar159 + (uVar256 >> 8);
          uVar332 = uVar161 + (uVar258 >> 8);
          uVar101 = uVar366 + (uVar246 >> 8);
          uVar112 = uVar368 + (uVar250 >> 8);
          uVar115 = uVar370 + (uVar251 >> 8);
          uVar118 = uVar373 + (uVar252 >> 8);
          auVar139 = NEON_umull(uVar122,0x1913191319131913,2);
          auVar125 = NEON_umull(uVar187,0x3408340834083408,2);
          iVar307 = (auVar139._0_4_ >> 8) + (auVar125._0_4_ >> 8);
          iVar255 = (auVar139._4_4_ >> 8) + (auVar125._4_4_ >> 8);
          iVar257 = (auVar139._8_4_ >> 8) + (auVar125._8_4_ >> 8);
          iVar259 = (auVar139._12_4_ >> 8) + (auVar125._12_4_ >> 8);
          uVar282 = uVar301 - 0x4515;
          uVar283 = uVar302 - 0x4515;
          uVar295 = uVar306 - 0x4515;
          uVar296 = uVar332 - 0x4515;
          auVar125 = NEON_umull(uVar123,0x1913191319131913,2);
          iVar228 = -(uint)(uVar302 < 0x4515);
          iVar229 = -(uint)(uVar306 < 0x4515);
          iVar232 = -(uint)(uVar332 < 0x4515);
          auVar139 = NEON_umull(uVar165,0x3408340834083408,2);
          iVar260 = (auVar125._0_4_ >> 8) + (auVar139._0_4_ >> 8);
          iVar261 = (auVar125._4_4_ >> 8) + (auVar139._4_4_ >> 8);
          iVar262 = (auVar125._8_4_ >> 8) + (auVar139._8_4_ >> 8);
          iVar263 = (auVar125._12_4_ >> 8) + (auVar139._12_4_ >> 8);
          iVar233 = (uVar246 >> 8) - iVar260;
          iVar284 = (uVar250 >> 8) - iVar261;
          iVar297 = (uVar251 >> 8) - iVar262;
          iVar303 = (uVar252 >> 8) - iVar263;
          iVar308 = (uVar236 >> 8) - iVar307;
          iVar317 = (uVar239 >> 8) - iVar255;
          iVar318 = (uVar240 >> 8) - iVar257;
          iVar319 = (uVar241 >> 8) - iVar259;
          auVar264._0_4_ = -(uint)(uVar282 < 0x4000);
          auVar264._4_4_ = -(uint)(uVar283 < 0x4000);
          auVar264._8_4_ = -(uint)(uVar295 < 0x4000);
          auVar264._12_4_ = -(uint)(uVar296 < 0x4000);
          auVar234._0_4_ = uVar282 >> 6;
          auVar234._4_4_ = uVar283 >> 6;
          auVar234._8_4_ = uVar295 >> 6;
          auVar234._12_4_ = uVar296 >> 6;
          auVar265[0] = ~-(uVar301 < 0x4515);
          auVar265._1_3_ = 0;
          auVar265[4] = ~(byte)iVar228;
          auVar265._5_2_ = 0;
          auVar265[7] = ~(byte)((uint)iVar228 >> 0x18);
          auVar265[8] = ~(byte)iVar229;
          auVar265[9] = ~(byte)((uint)iVar229 >> 8);
          auVar265[10] = ~(byte)((uint)iVar229 >> 0x10);
          auVar265[0xb] = ~(byte)((uint)iVar229 >> 0x18);
          auVar265[0xc] = ~(byte)iVar232;
          auVar265[0xd] = ~(byte)((uint)iVar232 >> 8);
          auVar265[0xe] = ~(byte)((uint)iVar232 >> 0x10);
          auVar265[0xf] = ~(byte)((uint)iVar232 >> 0x18);
          auVar265 = auVar265 ^ (auVar265 ^ auVar234) & auVar264;
          uVar282 = iVar308 + 0x2204;
          uVar283 = iVar317 + 0x2204;
          uVar295 = iVar318 + 0x2204;
          uVar296 = iVar319 + 0x2204;
          iVar317 = -(uint)(iVar317 < -0x2204);
          iVar318 = -(uint)(iVar318 < -0x2204);
          iVar319 = -(uint)(iVar319 < -0x2204);
          auVar237._0_4_ = -(uint)(uVar282 < 0x4000);
          auVar237._4_4_ = -(uint)(uVar283 < 0x4000);
          auVar237._8_4_ = -(uint)(uVar295 < 0x4000);
          auVar237._12_4_ = -(uint)(uVar296 < 0x4000);
          auVar235._0_4_ = uVar282 >> 6;
          auVar235._4_4_ = uVar283 >> 6;
          auVar235._8_4_ = uVar295 >> 6;
          auVar235._12_4_ = uVar296 >> 6;
          auVar188[0] = ~-(iVar308 < -0x2204);
          auVar188._1_3_ = 0;
          auVar188[4] = ~(byte)iVar317;
          auVar188._5_2_ = 0;
          auVar188[7] = ~(byte)((uint)iVar317 >> 0x18);
          auVar188[8] = ~(byte)iVar318;
          auVar188[9] = ~(byte)((uint)iVar318 >> 8);
          auVar188[10] = ~(byte)((uint)iVar318 >> 0x10);
          auVar188[0xb] = ~(byte)((uint)iVar318 >> 0x18);
          auVar188[0xc] = ~(byte)iVar319;
          auVar188[0xd] = ~(byte)((uint)iVar319 >> 8);
          auVar188[0xe] = ~(byte)((uint)iVar319 >> 0x10);
          auVar188[0xf] = ~(byte)((uint)iVar319 >> 0x18);
          auVar235 = auVar235 ^ (auVar235 ^ auVar188) & ~auVar237;
          uVar282 = iVar233 + 0x2204;
          uVar283 = iVar284 + 0x2204;
          uVar295 = iVar297 + 0x2204;
          uVar296 = iVar303 + 0x2204;
          iVar308 = -(uint)(iVar284 < -0x2204);
          iVar317 = -(uint)(iVar297 < -0x2204);
          iVar318 = -(uint)(iVar303 < -0x2204);
          auVar247._0_4_ = -(uint)(uVar282 < 0x4000);
          auVar247._4_4_ = -(uint)(uVar283 < 0x4000);
          auVar247._8_4_ = -(uint)(uVar295 < 0x4000);
          auVar247._12_4_ = -(uint)(uVar296 < 0x4000);
          auVar189._0_4_ = uVar282 >> 6;
          auVar189._4_4_ = uVar283 >> 6;
          auVar189._8_4_ = uVar295 >> 6;
          auVar189._12_4_ = uVar296 >> 6;
          auVar238[0] = ~-(iVar233 < -0x2204);
          auVar238._1_3_ = 0;
          auVar238[4] = ~(byte)iVar308;
          auVar238._5_2_ = 0;
          auVar238[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar238[8] = ~(byte)iVar317;
          auVar238[9] = ~(byte)((uint)iVar317 >> 8);
          auVar238[10] = ~(byte)((uint)iVar317 >> 0x10);
          auVar238[0xb] = ~(byte)((uint)iVar317 >> 0x18);
          auVar238[0xc] = ~(byte)iVar318;
          auVar238[0xd] = ~(byte)((uint)iVar318 >> 8);
          auVar238[0xe] = ~(byte)((uint)iVar318 >> 0x10);
          auVar238[0xf] = ~(byte)((uint)iVar318 >> 0x18);
          auVar238 = auVar238 ^ (auVar238 ^ auVar189) & auVar247;
          uVar282 = uVar336 - 0x4515;
          uVar283 = uVar337 - 0x4515;
          uVar295 = uVar338 - 0x4515;
          uVar296 = uVar354 - 0x4515;
          iVar308 = -(uint)(uVar337 < 0x4515);
          iVar317 = -(uint)(uVar338 < 0x4515);
          iVar318 = -(uint)(uVar354 < 0x4515);
          auVar248._0_4_ = -(uint)(uVar282 < 0x4000);
          auVar248._4_4_ = -(uint)(uVar283 < 0x4000);
          auVar248._8_4_ = -(uint)(uVar295 < 0x4000);
          auVar248._12_4_ = -(uint)(uVar296 < 0x4000);
          auVar190._0_4_ = uVar282 >> 6;
          auVar190._4_4_ = uVar283 >> 6;
          auVar190._8_4_ = uVar295 >> 6;
          auVar190._12_4_ = uVar296 >> 6;
          auVar249[0] = ~-(uVar336 < 0x4515);
          auVar249._1_3_ = 0;
          auVar249[4] = ~(byte)iVar308;
          auVar249._5_2_ = 0;
          auVar249[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar249[8] = ~(byte)iVar317;
          auVar249[9] = ~(byte)((uint)iVar317 >> 8);
          auVar249[10] = ~(byte)((uint)iVar317 >> 0x10);
          auVar249[0xb] = ~(byte)((uint)iVar317 >> 0x18);
          auVar249[0xc] = ~(byte)iVar318;
          auVar249[0xd] = ~(byte)((uint)iVar318 >> 8);
          auVar249[0xe] = ~(byte)((uint)iVar318 >> 0x10);
          auVar249[0xf] = ~(byte)((uint)iVar318 >> 0x18);
          auVar249 = auVar249 ^ (auVar249 ^ auVar190) & auVar248;
          uVar282 = uVar101 - 0x4515;
          uVar283 = uVar112 - 0x4515;
          uVar295 = uVar115 - 0x4515;
          uVar296 = uVar118 - 0x4515;
          iVar308 = -(uint)(uVar112 < 0x4515);
          iVar317 = -(uint)(uVar115 < 0x4515);
          iVar318 = -(uint)(uVar118 < 0x4515);
          auVar309._0_4_ = -(uint)(uVar282 < 0x4000);
          auVar309._4_4_ = -(uint)(uVar283 < 0x4000);
          auVar309._8_4_ = -(uint)(uVar295 < 0x4000);
          auVar309._12_4_ = -(uint)(uVar296 < 0x4000);
          auVar191._0_4_ = uVar282 >> 6;
          auVar191._4_4_ = uVar283 >> 6;
          auVar191._8_4_ = uVar295 >> 6;
          auVar191._12_4_ = uVar296 >> 6;
          auVar151[0] = ~-(uVar101 < 0x4515);
          auVar151._1_3_ = 0;
          auVar151[4] = ~(byte)iVar308;
          auVar151._5_2_ = 0;
          auVar151[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar151[8] = ~(byte)iVar317;
          auVar151[9] = ~(byte)((uint)iVar317 >> 8);
          auVar151[10] = ~(byte)((uint)iVar317 >> 0x10);
          auVar151[0xb] = ~(byte)((uint)iVar317 >> 0x18);
          auVar151[0xc] = ~(byte)iVar318;
          auVar151[0xd] = ~(byte)((uint)iVar318 >> 8);
          auVar151[0xe] = ~(byte)((uint)iVar318 >> 0x10);
          auVar151[0xf] = ~(byte)((uint)iVar318 >> 0x18);
          auVar191 = auVar191 ^ (auVar191 ^ auVar151) & ~auVar309;
          iVar146 = (uVar266 >> 8) - iVar146;
          iVar158 = (uVar273 >> 8) - iVar158;
          iVar160 = (uVar274 >> 8) - iVar160;
          iVar162 = (uVar275 >> 8) - iVar162;
          uVar363 = uVar363 + (uVar322 >> 8);
          uVar365 = uVar365 + (uVar325 >> 8);
          uVar367 = uVar367 + (uVar328 >> 8);
          uVar369 = uVar369 + (uVar331 >> 8);
          iVar242 = (uVar322 >> 8) - iVar242;
          iVar243 = (uVar325 >> 8) - iVar243;
          iVar244 = (uVar328 >> 8) - iVar244;
          iVar245 = (uVar331 >> 8) - iVar245;
          auVar46._8_4_ = 0xffffffff;
          auVar46._0_8_ = 0xffffffffffffffff;
          auVar46._12_4_ = 0xffffffff;
          auVar45._8_4_ = 0xffffffff;
          auVar45._0_8_ = 0xffffffffffffffff;
          auVar45._12_4_ = 0xffffffff;
          auVar166[8] = 0xff;
          auVar166._0_8_ = 0xffffffffffffffff;
          auVar147[8] = 0xff;
          auVar147._0_8_ = 0xffffffffffffffff;
          auVar132[8] = 0xff;
          auVar132._0_8_ = 0xffffffffffffffff;
          auVar139[8] = 0xff;
          auVar139._0_8_ = 0xffffffffffffffff;
          auVar10._8_4_ = 0xffffffff;
          auVar10._0_8_ = 0xffffffffffffffff;
          auVar9._8_4_ = 0xffffffff;
          auVar9._0_8_ = 0xffffffffffffffff;
          auVar8._8_4_ = 0xffffffff;
          auVar8._0_8_ = 0xffffffffffffffff;
          auVar7._8_4_ = 0xffffffff;
          auVar7._0_8_ = 0xffffffffffffffff;
          uVar85 = auVar265[0];
          uVar86 = auVar265[4];
          uVar87 = auVar265[8];
          uVar88 = auVar265[0xc];
          uVar89 = auVar372[0];
          uVar90 = auVar372[4];
          uVar91 = auVar372[8];
          uVar92 = auVar372[0xc];
          uVar93 = auVar286[0];
          uVar94 = auVar286[4];
          uVar95 = auVar286[8];
          uVar96 = auVar286[0xc];
          uVar97 = auVar214[0];
          uVar98 = auVar214[4];
          uVar99 = auVar214[8];
          uVar100 = auVar214[0xc];
          uVar101 = iVar242 + 0x2204;
          uVar112 = iVar243 + 0x2204;
          uVar115 = iVar244 + 0x2204;
          uVar118 = iVar245 + 0x2204;
          iVar308 = -(uint)(iVar243 < -0x2204);
          iVar317 = -(uint)(iVar244 < -0x2204);
          iVar318 = -(uint)(iVar245 < -0x2204);
          auVar310._0_4_ = -(uint)(uVar101 < 0x4000);
          auVar310._4_4_ = -(uint)(uVar112 < 0x4000);
          auVar310._8_4_ = -(uint)(uVar115 < 0x4000);
          auVar310._12_4_ = -(uint)(uVar118 < 0x4000);
          auVar215._0_4_ = uVar101 >> 6;
          auVar215._4_4_ = uVar112 >> 6;
          auVar215._8_4_ = uVar115 >> 6;
          auVar215._12_4_ = uVar118 >> 6;
          auVar287[0] = ~-(iVar242 < -0x2204);
          auVar287._1_3_ = 0;
          auVar287[4] = ~(byte)iVar308;
          auVar287._5_2_ = 0;
          auVar287[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar287[8] = ~(byte)iVar317;
          auVar287[9] = ~(byte)((uint)iVar317 >> 8);
          auVar287[10] = ~(byte)((uint)iVar317 >> 0x10);
          auVar287[0xb] = ~(byte)((uint)iVar317 >> 0x18);
          auVar287[0xc] = ~(byte)iVar318;
          auVar287[0xd] = ~(byte)((uint)iVar318 >> 8);
          auVar287[0xe] = ~(byte)((uint)iVar318 >> 0x10);
          auVar287[0xf] = ~(byte)((uint)iVar318 >> 0x18);
          auVar215 = auVar215 ^ (auVar215 ^ auVar287) & ~auVar310;
          uVar101 = iVar146 + 0x2204;
          uVar112 = iVar158 + 0x2204;
          uVar115 = iVar160 + 0x2204;
          uVar118 = iVar162 + 0x2204;
          iVar158 = -(uint)(iVar158 < -0x2204);
          iVar160 = -(uint)(iVar160 < -0x2204);
          iVar162 = -(uint)(iVar162 < -0x2204);
          auVar311._0_4_ = -(uint)(uVar101 < 0x4000);
          auVar311._4_4_ = -(uint)(uVar112 < 0x4000);
          auVar311._8_4_ = -(uint)(uVar115 < 0x4000);
          auVar311._12_4_ = -(uint)(uVar118 < 0x4000);
          auVar288._0_4_ = uVar101 >> 6;
          auVar288._4_4_ = uVar112 >> 6;
          auVar288._8_4_ = uVar115 >> 6;
          auVar288._12_4_ = uVar118 >> 6;
          auVar152[0] = ~-(iVar146 < -0x2204);
          auVar152._1_3_ = 0;
          auVar152[4] = ~(byte)iVar158;
          auVar152._5_2_ = 0;
          auVar152[7] = ~(byte)((uint)iVar158 >> 0x18);
          auVar152[8] = ~(byte)iVar160;
          auVar152[9] = ~(byte)((uint)iVar160 >> 8);
          auVar152[10] = ~(byte)((uint)iVar160 >> 0x10);
          auVar152[0xb] = ~(byte)((uint)iVar160 >> 0x18);
          auVar152[0xc] = ~(byte)iVar162;
          auVar152[0xd] = ~(byte)((uint)iVar162 >> 8);
          auVar152[0xe] = ~(byte)((uint)iVar162 >> 0x10);
          auVar152[0xf] = ~(byte)((uint)iVar162 >> 0x18);
          auVar152 = auVar152 ^ (auVar152 ^ auVar288) & auVar311;
          uVar101 = uVar363 - 0x4515;
          uVar112 = uVar365 - 0x4515;
          uVar115 = uVar367 - 0x4515;
          uVar118 = uVar369 - 0x4515;
          iVar146 = -(uint)(uVar365 < 0x4515);
          iVar158 = -(uint)(uVar367 < 0x4515);
          iVar160 = -(uint)(uVar369 < 0x4515);
          auVar312._0_4_ = -(uint)(uVar101 < 0x4000);
          auVar312._4_4_ = -(uint)(uVar112 < 0x4000);
          auVar312._8_4_ = -(uint)(uVar115 < 0x4000);
          auVar312._12_4_ = -(uint)(uVar118 < 0x4000);
          auVar289._0_4_ = uVar101 >> 6;
          auVar289._4_4_ = uVar112 >> 6;
          auVar289._8_4_ = uVar115 >> 6;
          auVar289._12_4_ = uVar118 >> 6;
          auVar277[0] = ~-(uVar363 < 0x4515);
          auVar277._1_3_ = 0;
          auVar277[4] = ~(byte)iVar146;
          auVar277._5_2_ = 0;
          auVar277[7] = ~(byte)((uint)iVar146 >> 0x18);
          auVar277[8] = ~(byte)iVar158;
          auVar277[9] = ~(byte)((uint)iVar158 >> 8);
          auVar277[10] = ~(byte)((uint)iVar158 >> 0x10);
          auVar277[0xb] = ~(byte)((uint)iVar158 >> 0x18);
          auVar277[0xc] = ~(byte)iVar160;
          auVar277[0xd] = ~(byte)((uint)iVar160 >> 8);
          auVar277[0xe] = ~(byte)((uint)iVar160 >> 0x10);
          auVar277[0xf] = ~(byte)((uint)iVar160 >> 0x18);
          auVar277 = auVar277 ^ (auVar277 ^ auVar289) & auVar312;
          auVar37._8_8_ = 0x3c3834302c282420;
          auVar37._0_8_ = 0x1c1814100c080400;
          auVar125[1] = (byte)(uVar186 >> 8) & (byte)((uint)iVar211 >> 8);
          auVar125[0] = (byte)uVar186 & (byte)iVar211 | ~-(uVar339 < 0x379a) & ~(byte)iVar211;
          auVar125[2] = (byte)(uVar186 >> 0x10) & (byte)((uint)iVar211 >> 0x10);
          auVar125[3] = (byte)(uVar185 >> 0x1e) & (byte)((uint)iVar211 >> 0x18);
          auVar125[4] = (byte)uVar201 & (byte)iVar224 | ~-(uVar345 < 0x379a) & ~(byte)iVar224;
          auVar125[5] = (byte)(uVar201 >> 8) & (byte)((uint)iVar224 >> 8);
          auVar125[6] = (byte)(uVar201 >> 0x10) & (byte)((uint)iVar224 >> 0x10);
          auVar125[7] = (byte)(uVar200 >> 0x1e) & (byte)((uint)iVar224 >> 0x18);
          auVar125[8] = (byte)uVar205 & (byte)iVar227 | ~-(uVar346 < 0x379a) & ~(byte)iVar227;
          auVar125[9] = (byte)(uVar205 >> 8) & (byte)((uint)iVar227 >> 8);
          auVar125[10] = (byte)(uVar205 >> 0x10) & (byte)((uint)iVar227 >> 0x10);
          auVar125[0xb] = (byte)(uVar204 >> 0x1e) & (byte)((uint)iVar227 >> 0x18);
          auVar125[0xc] =
               (byte)(uVar208 >> 6) & (byte)iVar231 | ~-(uVar347 < 0x379a) & ~(byte)iVar231;
          auVar125[0xd] = (byte)((uVar208 >> 6) >> 8) & (byte)((uint)iVar231 >> 8);
          auVar125[0xe] = (byte)((uint3)(uVar208 >> 0xe) >> 8) & (byte)((uint)iVar231 >> 0x10);
          auVar125[0xf] = (byte)(uVar208 >> 0x1e) & (byte)((uint)iVar231 >> 0x18);
          auVar335 = a64_TBL(ZEXT816(0),auVar334,auVar340,auVar349,auVar125,auVar37);
          uVar145 = uVar145 + (uVar266 >> 8);
          uVar157 = uVar157 + (uVar273 >> 8);
          uVar159 = uVar159 + (uVar274 >> 8);
          uVar161 = uVar161 + (uVar275 >> 8);
          iVar260 = (uVar355 >> 8) - iVar260;
          iVar261 = (uVar358 >> 8) - iVar261;
          iVar262 = (uVar360 >> 8) - iVar262;
          iVar263 = (uVar362 >> 8) - iVar263;
          uVar101 = uVar145 - 0x4515;
          uVar112 = uVar157 - 0x4515;
          uVar115 = uVar159 - 0x4515;
          uVar118 = uVar161 - 0x4515;
          iVar146 = -(uint)(uVar157 < 0x4515);
          iVar158 = -(uint)(uVar159 < 0x4515);
          iVar160 = -(uint)(uVar161 < 0x4515);
          iVar307 = (uVar281 >> 8) - iVar307;
          iVar255 = (uVar294 >> 8) - iVar255;
          iVar257 = (uVar300 >> 8) - iVar257;
          iVar259 = (uVar305 >> 8) - iVar259;
          auVar341._0_4_ = -(uint)(uVar101 < 0x4000);
          auVar341._4_4_ = -(uint)(uVar112 < 0x4000);
          auVar341._8_4_ = -(uint)(uVar115 < 0x4000);
          auVar341._12_4_ = -(uint)(uVar118 < 0x4000);
          auVar313._0_4_ = uVar101 >> 6;
          auVar313._4_4_ = uVar112 >> 6;
          auVar313._8_4_ = uVar115 >> 6;
          auVar313._12_4_ = uVar118 >> 6;
          auVar167[0] = ~-(uVar145 < 0x4515);
          auVar167._1_3_ = 0;
          auVar167[4] = ~(byte)iVar146;
          auVar167._5_2_ = 0;
          auVar167[7] = ~(byte)((uint)iVar146 >> 0x18);
          auVar167[8] = ~(byte)iVar158;
          auVar167[9] = ~(byte)((uint)iVar158 >> 8);
          auVar167[10] = ~(byte)((uint)iVar158 >> 0x10);
          auVar167[0xb] = ~(byte)((uint)iVar158 >> 0x18);
          auVar167[0xc] = ~(byte)iVar160;
          auVar167[0xd] = ~(byte)((uint)iVar160 >> 8);
          auVar167[0xe] = ~(byte)((uint)iVar160 >> 0x10);
          auVar167[0xf] = ~(byte)((uint)iVar160 >> 0x18);
          auVar167 = auVar167 ^ (auVar167 ^ auVar313) & auVar341;
          uVar101 = iVar307 + 0x2204;
          uVar112 = iVar255 + 0x2204;
          uVar115 = iVar257 + 0x2204;
          uVar118 = iVar259 + 0x2204;
          iVar146 = -(uint)(iVar255 < -0x2204);
          iVar158 = -(uint)(iVar257 < -0x2204);
          iVar160 = -(uint)(iVar259 < -0x2204);
          auVar342._0_4_ = -(uint)(uVar101 < 0x4000);
          auVar342._4_4_ = -(uint)(uVar112 < 0x4000);
          auVar342._8_4_ = -(uint)(uVar115 < 0x4000);
          auVar342._12_4_ = -(uint)(uVar118 < 0x4000);
          auVar314._0_4_ = uVar101 >> 6;
          auVar314._4_4_ = uVar112 >> 6;
          auVar314._8_4_ = uVar115 >> 6;
          auVar314._12_4_ = uVar118 >> 6;
          auVar290[0] = ~-(iVar307 < -0x2204);
          auVar290._1_3_ = 0;
          auVar290[4] = ~(byte)iVar146;
          auVar290._5_2_ = 0;
          auVar290[7] = ~(byte)((uint)iVar146 >> 0x18);
          auVar290[8] = ~(byte)iVar158;
          auVar290[9] = ~(byte)((uint)iVar158 >> 8);
          auVar290[10] = ~(byte)((uint)iVar158 >> 0x10);
          auVar290[0xb] = ~(byte)((uint)iVar158 >> 0x18);
          auVar290[0xc] = ~(byte)iVar160;
          auVar290[0xd] = ~(byte)((uint)iVar160 >> 8);
          auVar290[0xe] = ~(byte)((uint)iVar160 >> 0x10);
          auVar290[0xf] = ~(byte)((uint)iVar160 >> 0x18);
          auVar290 = auVar290 ^ (auVar290 ^ auVar314) & auVar342;
          uVar101 = iVar260 + 0x2204;
          uVar112 = iVar261 + 0x2204;
          uVar115 = iVar262 + 0x2204;
          uVar118 = iVar263 + 0x2204;
          iVar146 = -(uint)(iVar261 < -0x2204);
          iVar158 = -(uint)(iVar262 < -0x2204);
          iVar160 = -(uint)(iVar263 < -0x2204);
          auVar343._0_4_ = -(uint)(uVar101 < 0x4000);
          auVar343._4_4_ = -(uint)(uVar112 < 0x4000);
          auVar343._8_4_ = -(uint)(uVar115 < 0x4000);
          auVar343._12_4_ = -(uint)(uVar118 < 0x4000);
          auVar315._0_4_ = uVar101 >> 6;
          auVar315._4_4_ = uVar112 >> 6;
          auVar315._8_4_ = uVar115 >> 6;
          auVar315._12_4_ = uVar118 >> 6;
          auVar267[0] = ~-(iVar260 < -0x2204);
          auVar267._1_3_ = 0;
          auVar267[4] = ~(byte)iVar146;
          auVar267._5_2_ = 0;
          auVar267[7] = ~(byte)((uint)iVar146 >> 0x18);
          auVar267[8] = ~(byte)iVar158;
          auVar267[9] = ~(byte)((uint)iVar158 >> 8);
          auVar267[10] = ~(byte)((uint)iVar158 >> 0x10);
          auVar267[0xb] = ~(byte)((uint)iVar158 >> 0x18);
          auVar267[0xc] = ~(byte)iVar160;
          auVar267[0xd] = ~(byte)((uint)iVar160 >> 8);
          auVar267[0xe] = ~(byte)((uint)iVar160 >> 0x10);
          auVar267[0xf] = ~(byte)((uint)iVar160 >> 0x18);
          auVar267 = auVar267 ^ (auVar267 ^ auVar315) & auVar343;
          uVar366 = uVar366 + (uVar355 >> 8);
          uVar368 = uVar368 + (uVar358 >> 8);
          uVar370 = uVar370 + (uVar360 >> 8);
          uVar373 = uVar373 + (uVar362 >> 8);
          uVar357 = uVar357 + (uVar281 >> 8);
          uVar359 = uVar359 + (uVar294 >> 8);
          uVar361 = uVar361 + (uVar300 >> 8);
          uVar364 = uVar364 + (uVar305 >> 8);
          uVar363 = uVar357 - 0x4515;
          uVar365 = uVar359 - 0x4515;
          uVar367 = uVar361 - 0x4515;
          uVar369 = uVar364 - 0x4515;
          uVar101 = uVar366 - 0x4515;
          uVar112 = uVar368 - 0x4515;
          uVar115 = uVar370 - 0x4515;
          uVar118 = uVar373 - 0x4515;
          iVar146 = -(uint)(uVar359 < 0x4515);
          iVar158 = -(uint)(uVar361 < 0x4515);
          iVar160 = -(uint)(uVar364 < 0x4515);
          iVar162 = -(uint)(uVar368 < 0x4515);
          iVar308 = -(uint)(uVar370 < 0x4515);
          iVar317 = -(uint)(uVar373 < 0x4515);
          auVar168[1] = auVar167[4];
          auVar168[0] = auVar167[0];
          auVar168[2] = auVar167[8];
          auVar168[3] = auVar167[0xc];
          auVar168[4] = auVar277[0];
          auVar168[5] = auVar277[4];
          auVar168[6] = auVar277[8];
          auVar168[7] = auVar277[0xc];
          auVar168[8] = auVar152[0];
          auVar168[9] = auVar152[4];
          auVar168[10] = auVar152[8];
          auVar168[0xb] = auVar152[0xc];
          auVar168[0xc] = auVar215[0];
          auVar168[0xd] = auVar215[4];
          auVar168[0xe] = auVar215[8];
          auVar168[0xf] = auVar215[0xc];
          auVar356[1] = auVar191[4];
          auVar356[0] = auVar191[0];
          auVar356[2] = auVar191[8];
          auVar356[3] = auVar191[0xc];
          auVar356[4] = auVar249[0];
          auVar356[5] = auVar249[4];
          auVar356[6] = auVar249[8];
          auVar356[7] = auVar249[0xc];
          auVar356[8] = auVar238[0];
          auVar356[9] = auVar238[4];
          auVar356[10] = auVar238[8];
          auVar356[0xb] = auVar238[0xc];
          auVar356[0xc] = auVar235[0];
          auVar356[0xd] = auVar235[4];
          auVar356[0xe] = auVar235[8];
          auVar356[0xf] = auVar235[0xc];
          auVar126[0xd] = (byte)(uVar182 >> 8) & (byte)((uint)iVar120 >> 8);
          auVar126[0xc] = (byte)uVar182 & (byte)iVar120 | ~-(uVar144 < 0x379a) & ~(byte)iVar120;
          auVar126[0xe] = (byte)(uVar182 >> 0x10) & (byte)((uint)iVar120 >> 0x10);
          auVar126[0xf] = (byte)(uVar181 >> 0x1e) & (byte)((uint)iVar120 >> 0x18);
          auVar126[1] = (byte)(uVar164 >> 8) & (byte)((uint)iVar103 >> 8);
          auVar126[0] = (byte)uVar164 & (byte)iVar103 | ~-(uVar138 < 0x379a) & ~(byte)iVar103;
          auVar126[2] = (byte)(uVar164 >> 0x10) & (byte)((uint)iVar103 >> 0x10);
          auVar126[3] = (byte)(uVar163 >> 0x1e) & (byte)((uint)iVar103 >> 0x18);
          auVar126[4] = (byte)uVar178 & (byte)iVar114 | ~-(uVar142 < 0x379a) & ~(byte)iVar114;
          auVar126[5] = (byte)(uVar178 >> 8) & (byte)((uint)iVar114 >> 8);
          auVar126[6] = (byte)(uVar178 >> 0x10) & (byte)((uint)iVar114 >> 0x10);
          auVar126[7] = (byte)(uVar177 >> 0x1e) & (byte)((uint)iVar114 >> 0x18);
          auVar126[8] = (byte)uVar180 & (byte)iVar117 | ~-(uVar143 < 0x379a) & ~(byte)iVar117;
          auVar126[9] = (byte)(uVar180 >> 8) & (byte)((uint)iVar117 >> 8);
          auVar126[10] = (byte)(uVar180 >> 0x10) & (byte)((uint)iVar117 >> 0x10);
          auVar126[0xb] = (byte)(uVar179 >> 0x1e) & (byte)((uint)iVar117 >> 0x18);
          auVar42[1] = (byte)(uVar184 >> 8) & (byte)((uint)iVar321 >> 8);
          auVar42[0] = (byte)uVar184 & (byte)iVar321 | ~-(uVar130 < 0x379a) & ~(byte)iVar321;
          auVar42[2] = (byte)(uVar184 >> 0x10) & (byte)((uint)iVar321 >> 0x10);
          auVar42[3] = (byte)(uVar183 >> 0x1e) & (byte)((uint)iVar321 >> 0x18);
          auVar42[4] = (byte)uVar199 & (byte)iVar324 | ~-(uVar135 < 0x379a) & ~(byte)iVar324;
          auVar42[5] = (byte)(uVar199 >> 8) & (byte)((uint)iVar324 >> 8);
          auVar42[6] = (byte)(uVar199 >> 0x10) & (byte)((uint)iVar324 >> 0x10);
          auVar42[7] = (byte)(uVar198 >> 0x1e) & (byte)((uint)iVar324 >> 0x18);
          auVar42[8] = (byte)uVar203 & (byte)iVar327 | ~-(uVar136 < 0x379a) & ~(byte)iVar327;
          auVar42[9] = (byte)(uVar203 >> 8) & (byte)((uint)iVar327 >> 8);
          auVar42[10] = (byte)(uVar203 >> 0x10) & (byte)((uint)iVar327 >> 0x10);
          auVar42[0xb] = (byte)(uVar202 >> 0x1e) & (byte)((uint)iVar327 >> 0x18);
          auVar42[0xc] = (byte)uVar207 & (byte)iVar330 | ~-(uVar137 < 0x379a) & ~(byte)iVar330;
          auVar42[0xd] = (byte)(uVar207 >> 8) & (byte)((uint)iVar330 >> 8);
          auVar42[0xe] = (byte)(uVar207 >> 0x10) & (byte)((uint)iVar330 >> 0x10);
          auVar42[0xf] = (byte)(uVar206 >> 0x1e) & (byte)((uint)iVar330 >> 0x18);
          auVar43[1] = (byte)(uVar210 >> 8) & (byte)((uint)iVar348 >> 8);
          auVar43[0] = (byte)uVar210 & (byte)iVar348 | ~-(uVar102 < 0x379a) & ~(byte)iVar348;
          auVar43[2] = (byte)(uVar210 >> 0x10) & (byte)((uint)iVar348 >> 0x10);
          auVar43[3] = (byte)(uVar209 >> 0x1e) & (byte)((uint)iVar348 >> 0x18);
          auVar43[4] = (byte)uVar223 & (byte)iVar351 | ~-(uVar113 < 0x379a) & ~(byte)iVar351;
          auVar43[5] = (byte)(uVar223 >> 8) & (byte)((uint)iVar351 >> 8);
          auVar43[6] = (byte)(uVar223 >> 0x10) & (byte)((uint)iVar351 >> 0x10);
          auVar43[7] = (byte)(uVar222 >> 0x1e) & (byte)((uint)iVar351 >> 0x18);
          auVar43[8] = (byte)uVar226 & (byte)iVar352 | ~-(uVar116 < 0x379a) & ~(byte)iVar352;
          auVar43[9] = (byte)(uVar226 >> 8) & (byte)((uint)iVar352 >> 8);
          auVar43[10] = (byte)(uVar226 >> 0x10) & (byte)((uint)iVar352 >> 0x10);
          auVar43[0xb] = (byte)(uVar225 >> 0x1e) & (byte)((uint)iVar352 >> 0x18);
          auVar43[0xc] = (byte)(uVar230 >> 6) & (byte)iVar353 |
                         ~-(uVar119 < 0x379a) & ~(byte)iVar353;
          auVar43[0xd] = (byte)((uVar230 >> 6) >> 8) & (byte)((uint)iVar353 >> 8);
          auVar43[0xe] = (byte)((uint3)(uVar230 >> 0xe) >> 8) & (byte)((uint)iVar353 >> 0x10);
          auVar43[0xf] = (byte)(uVar230 >> 0x1e) & (byte)((uint)iVar353 >> 0x18);
          auVar44[1] = (byte)(uVar280 >> 8) & (byte)((uint)iVar320 >> 8);
          auVar44[0] = (byte)uVar280 & (byte)iVar320 | ~-(uVar121 < 0x379a) & ~(byte)iVar320;
          auVar44[2] = (byte)(uVar280 >> 0x10) & (byte)((uint)iVar320 >> 0x10);
          auVar44[3] = (byte)(uVar279 >> 0x1e) & (byte)((uint)iVar320 >> 0x18);
          auVar44[4] = (byte)uVar293 & (byte)iVar323 | ~-(uVar127 < 0x379a) & ~(byte)iVar323;
          auVar44[5] = (byte)(uVar293 >> 8) & (byte)((uint)iVar323 >> 8);
          auVar44[6] = (byte)(uVar293 >> 0x10) & (byte)((uint)iVar323 >> 0x10);
          auVar44[7] = (byte)(uVar292 >> 0x1e) & (byte)((uint)iVar323 >> 0x18);
          auVar44[8] = (byte)uVar299 & (byte)iVar326 | ~-(uVar128 < 0x379a) & ~(byte)iVar326;
          auVar44[9] = (byte)(uVar299 >> 8) & (byte)((uint)iVar326 >> 8);
          auVar44[10] = (byte)(uVar299 >> 0x10) & (byte)((uint)iVar326 >> 0x10);
          auVar44[0xb] = (byte)(uVar298 >> 0x1e) & (byte)((uint)iVar326 >> 0x18);
          auVar44[0xc] = (byte)(uVar304 >> 6) & (byte)iVar329 |
                         ~-(uVar129 < 0x379a) & ~(byte)iVar329;
          auVar44[0xd] = (byte)((uVar304 >> 6) >> 8) & (byte)((uint)iVar329 >> 8);
          auVar44[0xe] = (byte)((uint3)(uVar304 >> 0xe) >> 8) & (byte)((uint)iVar329 >> 0x10);
          auVar44[0xf] = (byte)(uVar304 >> 0x1e) & (byte)((uint)iVar329 >> 0x18);
          auVar126 = a64_TBL(ZEXT816(0),auVar126,auVar42,auVar43,auVar44,auVar37);
          auVar133._0_4_ = -(uint)(uVar101 < 0x4000);
          auVar133._4_4_ = -(uint)(uVar112 < 0x4000);
          auVar133._8_4_ = -(uint)(uVar115 < 0x4000);
          auVar133._12_4_ = -(uint)(uVar118 < 0x4000);
          auVar140._0_4_ = -(uint)(uVar363 < 0x4000);
          auVar140._4_4_ = -(uint)(uVar365 < 0x4000);
          auVar140._8_4_ = -(uint)(uVar367 < 0x4000);
          auVar140._12_4_ = -(uint)(uVar369 < 0x4000);
          auVar192._0_4_ = uVar101 >> 6;
          auVar192._4_4_ = uVar112 >> 6;
          auVar192._8_4_ = uVar115 >> 6;
          auVar192._12_4_ = uVar118 >> 6;
          auVar216._0_4_ = uVar363 >> 6;
          auVar216._4_4_ = uVar365 >> 6;
          auVar216._8_4_ = uVar367 >> 6;
          auVar216._12_4_ = uVar369 >> 6;
          auVar134[0] = ~-(uVar366 < 0x4515);
          auVar134._1_3_ = 0;
          auVar134[4] = ~(byte)iVar162;
          auVar134._5_2_ = 0;
          auVar134[7] = ~(byte)((uint)iVar162 >> 0x18);
          auVar134[8] = ~(byte)iVar308;
          auVar134[9] = ~(byte)((uint)iVar308 >> 8);
          auVar134[10] = ~(byte)((uint)iVar308 >> 0x10);
          auVar134[0xb] = ~(byte)((uint)iVar308 >> 0x18);
          auVar134[0xc] = ~(byte)iVar317;
          auVar134[0xd] = ~(byte)((uint)iVar317 >> 8);
          auVar134[0xe] = ~(byte)((uint)iVar317 >> 0x10);
          auVar134[0xf] = ~(byte)((uint)iVar317 >> 0x18);
          auVar141[0] = ~-(uVar357 < 0x4515);
          auVar141._1_3_ = 0;
          auVar141[4] = ~(byte)iVar146;
          auVar141._5_2_ = 0;
          auVar141[7] = ~(byte)((uint)iVar146 >> 0x18);
          auVar141[8] = ~(byte)iVar158;
          auVar141[9] = ~(byte)((uint)iVar158 >> 8);
          auVar141[10] = ~(byte)((uint)iVar158 >> 0x10);
          auVar141[0xb] = ~(byte)((uint)iVar158 >> 0x18);
          auVar141[0xc] = ~(byte)iVar160;
          auVar141[0xd] = ~(byte)((uint)iVar160 >> 8);
          auVar141[0xe] = ~(byte)((uint)iVar160 >> 0x10);
          auVar141[0xf] = ~(byte)((uint)iVar160 >> 0x18);
          auVar141 = auVar141 ^ (auVar141 ^ auVar216) & auVar140;
          auVar134 = auVar134 ^ (auVar134 ^ auVar192) & auVar133;
          auVar278[1] = auVar134[4];
          auVar278[0] = auVar134[0];
          auVar278[2] = auVar134[8];
          auVar278[3] = auVar134[0xc];
          auVar278[4] = auVar141[0];
          auVar278[5] = auVar141[4];
          auVar278[6] = auVar141[8];
          auVar278[7] = auVar141[0xc];
          auVar278[8] = auVar267[0];
          auVar278[9] = auVar267[4];
          auVar278[10] = auVar267[8];
          auVar278[0xb] = auVar267[0xc];
          auVar278[0xc] = auVar290[0];
          auVar278[0xd] = auVar290[4];
          auVar278[0xe] = auVar290[8];
          auVar278[0xf] = auVar290[0xc];
          auVar35._8_8_ = 0xf110d0cffffffff;
          auVar35._0_8_ = 0x7100504ffffffff;
          auVar36._8_8_ = 0x1ff1911ffffffff;
          auVar36._0_8_ = 0xff1810ffffffff;
          auVar125 = a64_TBL(ZEXT816(0),auVar46,auVar278,auVar36);
          auVar193 = a64_TBL(ZEXT816(0),auVar125,auVar335,auVar35);
          auVar33._8_8_ = 0xffffffff0b110908;
          auVar33._0_8_ = 0xffffffff03100100;
          auVar34._8_8_ = 0xffffffff01ff1911;
          auVar34._0_8_ = 0xffffffff00ff1810;
          auVar139[9] = 0xff;
          auVar139[10] = 0xff;
          auVar139[0xb] = 0xff;
          auVar139[0xc] = 0xff;
          auVar139[0xd] = 0xff;
          auVar139[0xe] = 0xff;
          auVar139[0xf] = 0xff;
          auVar125 = a64_TBL(ZEXT816(0),auVar139,auVar356,auVar34);
          auVar217 = a64_TBL(ZEXT816(0),auVar125,auVar126,auVar33);
          auVar31._8_8_ = 0xf130d0cffffffff;
          auVar31._0_8_ = 0x7120504ffffffff;
          auVar32._8_8_ = 0x3ff1b13ffffffff;
          auVar32._0_8_ = 0x2ff1a12ffffffff;
          auVar125 = a64_TBL(ZEXT816(0),auVar46,auVar278,auVar32);
          auVar139 = a64_TBL(ZEXT816(0),auVar125,auVar335,auVar31);
          auVar30._8_8_ = 0xffffffff03ff1b13;
          auVar30._0_8_ = 0xffffffff02ff1a12;
          auVar132[9] = 0xff;
          auVar132[10] = 0xff;
          auVar132[0xb] = 0xff;
          auVar132[0xc] = 0xff;
          auVar132[0xd] = 0xff;
          auVar132[0xe] = 0xff;
          auVar132[0xf] = 0xff;
          auVar125 = a64_TBL(ZEXT816(0),auVar132,auVar356,auVar30);
          auVar28._8_8_ = 0x5ff1d15ffffffff;
          auVar28._0_8_ = 0x4ff1c14ffffffff;
          auVar29._8_8_ = 0xffffffff0b130908;
          auVar29._0_8_ = 0xffffffff03120100;
          auVar132 = a64_TBL(ZEXT816(0),auVar125,auVar126,auVar29);
          auVar125 = a64_TBL(ZEXT816(0),auVar46,auVar278,auVar28);
          auVar26._8_8_ = 0xffffffff05ff1d15;
          auVar26._0_8_ = 0xffffffff04ff1c14;
          auVar27._8_8_ = 0xf150d0cffffffff;
          auVar27._0_8_ = 0x7140504ffffffff;
          auVar291 = a64_TBL(ZEXT816(0),auVar125,auVar335,auVar27);
          auVar147[9] = 0xff;
          auVar147[10] = 0xff;
          auVar147[0xb] = 0xff;
          auVar147[0xc] = 0xff;
          auVar147[0xd] = 0xff;
          auVar147[0xe] = 0xff;
          auVar147[0xf] = 0xff;
          auVar125 = a64_TBL(ZEXT816(0),auVar147,auVar356,auVar26);
          auVar24._8_8_ = 0x7ff1f17ffffffff;
          auVar24._0_8_ = 0x6ff1e16ffffffff;
          auVar25._8_8_ = 0xffffffff0b150908;
          auVar25._0_8_ = 0xffffffff03140100;
          auVar316 = a64_TBL(ZEXT816(0),auVar125,auVar126,auVar25);
          auVar125 = a64_TBL(ZEXT816(0),auVar46,auVar278,auVar24);
          auVar22._8_8_ = 0xffffffff07ff1f17;
          auVar22._0_8_ = 0xffffffff06ff1e16;
          auVar23._8_8_ = 0xf170d0cffffffff;
          auVar23._0_8_ = 0x7160504ffffffff;
          auVar268 = a64_TBL(ZEXT816(0),auVar125,auVar335,auVar23);
          auVar166[9] = 0xff;
          auVar166[10] = 0xff;
          auVar166[0xb] = 0xff;
          auVar166[0xc] = 0xff;
          auVar166[0xd] = 0xff;
          auVar166[0xe] = 0xff;
          auVar166[0xf] = 0xff;
          auVar125 = a64_TBL(ZEXT816(0),auVar166,auVar356,auVar22);
          auVar19._8_8_ = 0xf190d0cffffffff;
          auVar19._0_8_ = 0x7180504ffffffff;
          auVar20._8_8_ = 0x9ff1911ffffffff;
          auVar20._0_8_ = 0x8ff1810ffffffff;
          auVar147 = a64_TBL(ZEXT816(0),auVar45,auVar168,auVar20);
          auVar166 = a64_TBL(ZEXT816(0),auVar147,auVar335,auVar19);
          auVar15._8_8_ = 0xf1b0d0cffffffff;
          auVar15._0_8_ = 0x71a0504ffffffff;
          auVar16._8_8_ = 0xbff1b13ffffffff;
          auVar16._0_8_ = 0xaff1a12ffffffff;
          auVar147 = a64_TBL(ZEXT816(0),auVar45,auVar168,auVar16);
          auVar344 = a64_TBL(ZEXT816(0),auVar147,auVar335,auVar15);
          auVar350._8_8_ = 0xf1d0d0cffffffff;
          auVar350._0_8_ = 0x71c0504ffffffff;
          auVar276[8] = 0xff;
          auVar276._0_8_ = 0xcff1c14ffffffff;
          auVar276[9] = 0xff;
          auVar276[10] = 0xff;
          auVar276[0xb] = 0xff;
          auVar276[0xc] = 0x15;
          auVar276[0xd] = 0x1d;
          auVar276[0xe] = 0xff;
          auVar276[0xf] = 0xd;
          auVar147 = a64_TBL(ZEXT816(0),auVar45,auVar168,auVar276);
          auVar350 = a64_TBL(ZEXT816(0),auVar147,auVar335,auVar350);
          auVar6[8] = 0xff;
          auVar6._0_8_ = 0xeff1e16ffffffff;
          auVar6[9] = 0xff;
          auVar6[10] = 0xff;
          auVar6[0xb] = 0xff;
          auVar6[0xc] = 0x17;
          auVar6[0xd] = 0x1f;
          auVar6[0xe] = 0xff;
          auVar6[0xf] = 0xf;
          auVar276 = a64_TBL(ZEXT816(0),auVar45,auVar168,auVar6);
          auVar147 = NEON_rev64(auVar217,4);
          auVar153._4_12_ = auVar147._4_12_;
          auVar153._0_4_ = auVar147._4_4_;
          auVar155._0_8_ = auVar153._0_8_;
          auVar155._8_4_ = auVar147._12_4_;
          auVar155._12_4_ = auVar147._12_4_;
          auVar154._8_8_ = auVar155._8_8_;
          auVar154._0_8_ = CONCAT44(auVar193._4_4_,auVar147._4_4_);
          auVar156._0_12_ = auVar154._0_12_;
          auVar156._12_4_ = auVar193._12_4_;
          auVar147 = NEON_rev64(auVar316,4);
          auVar169._4_12_ = auVar147._4_12_;
          auVar169._0_4_ = auVar147._4_4_;
          auVar171._0_8_ = auVar169._0_8_;
          auVar171._8_4_ = auVar147._12_4_;
          auVar171._12_4_ = auVar147._12_4_;
          auVar170._8_8_ = auVar171._8_8_;
          auVar170._0_8_ = CONCAT44(auVar291._4_4_,auVar147._4_4_);
          auVar172._0_12_ = auVar170._0_12_;
          auVar172._12_4_ = auVar291._12_4_;
          auVar21._8_8_ = 0xffffffff0b170908;
          auVar21._0_8_ = 0xffffffff03160100;
          auVar125 = a64_TBL(ZEXT816(0),auVar125,auVar126,auVar21);
          auVar125 = NEON_rev64(auVar125,4);
          auVar194._4_12_ = auVar125._4_12_;
          auVar194._0_4_ = auVar125._4_4_;
          auVar196._0_8_ = auVar194._0_8_;
          auVar196._8_4_ = auVar125._12_4_;
          auVar196._12_4_ = auVar125._12_4_;
          auVar195._8_8_ = auVar196._8_8_;
          auVar195._0_8_ = CONCAT44(auVar268._4_4_,auVar125._4_4_);
          auVar197._0_12_ = auVar195._0_12_;
          auVar197._12_4_ = auVar268._12_4_;
          auVar18._8_8_ = 0xffffffff09ff1911;
          auVar18._0_8_ = 0xffffffff08ff1810;
          auVar7._12_4_ = 0xffffffff;
          auVar193[1] = uVar86;
          auVar193[0] = uVar85;
          auVar193[2] = uVar87;
          auVar193[3] = uVar88;
          auVar193[4] = uVar89;
          auVar193[5] = uVar90;
          auVar193[6] = uVar91;
          auVar193[7] = uVar92;
          auVar193[8] = uVar93;
          auVar193[9] = uVar94;
          auVar193[10] = uVar95;
          auVar193[0xb] = uVar96;
          auVar193[0xc] = uVar97;
          auVar193[0xd] = uVar98;
          auVar193[0xe] = uVar99;
          auVar193[0xf] = uVar100;
          auVar125 = a64_TBL(ZEXT816(0),auVar7,auVar193,auVar18);
          auVar17._8_8_ = 0xffffffff0b190908;
          auVar17._0_8_ = 0xffffffff03180100;
          auVar125 = a64_TBL(ZEXT816(0),auVar125,auVar126,auVar17);
          auVar147 = NEON_rev64(auVar125,4);
          auVar13._8_8_ = 0xffffffff0b1b0908;
          auVar13._0_8_ = 0xffffffff031a0100;
          auVar14._8_8_ = 0xffffffff0bff1b13;
          auVar14._0_8_ = 0xffffffff0aff1a12;
          auVar8._12_4_ = 0xffffffff;
          auVar217[1] = uVar86;
          auVar217[0] = uVar85;
          auVar217[2] = uVar87;
          auVar217[3] = uVar88;
          auVar217[4] = uVar89;
          auVar217[5] = uVar90;
          auVar217[6] = uVar91;
          auVar217[7] = uVar92;
          auVar217[8] = uVar93;
          auVar217[9] = uVar94;
          auVar217[10] = uVar95;
          auVar217[0xb] = uVar96;
          auVar217[0xc] = uVar97;
          auVar217[0xd] = uVar98;
          auVar217[0xe] = uVar99;
          auVar217[0xf] = uVar100;
          auVar125 = a64_TBL(ZEXT816(0),auVar8,auVar217,auVar14);
          auVar218._4_12_ = auVar147._4_12_;
          auVar218._0_4_ = auVar147._4_4_;
          auVar220._0_8_ = auVar218._0_8_;
          auVar220._8_4_ = auVar147._12_4_;
          auVar220._12_4_ = auVar147._12_4_;
          auVar219._8_8_ = auVar220._8_8_;
          auVar219._0_8_ = CONCAT44(auVar166._4_4_,auVar147._4_4_);
          auVar221._0_12_ = auVar219._0_12_;
          auVar221._12_4_ = auVar166._12_4_;
          auVar125 = a64_TBL(ZEXT816(0),auVar125,auVar126,auVar13);
          auVar125 = NEON_rev64(auVar125,4);
          auVar269._4_12_ = auVar125._4_12_;
          auVar269._0_4_ = auVar125._4_4_;
          auVar271._0_8_ = auVar269._0_8_;
          auVar271._8_4_ = auVar125._12_4_;
          auVar271._12_4_ = auVar125._12_4_;
          auVar270._8_8_ = auVar271._8_8_;
          auVar270._0_8_ = CONCAT44(auVar344._4_4_,auVar125._4_4_);
          auVar272._0_12_ = auVar270._0_12_;
          auVar272._12_4_ = auVar344._12_4_;
          auVar344._8_8_ = 0xf1f0d0cffffffff;
          auVar344._0_8_ = 0x71e0504ffffffff;
          auVar147 = a64_TBL(ZEXT816(0),auVar276,auVar335,auVar344);
          *(long *)(pauVar81[4] + 8) = auVar221._8_8_;
          *(undefined8 *)pauVar81[4] = auVar219._0_8_;
          *(long *)(pauVar81[5] + 8) = auVar272._8_8_;
          *(undefined8 *)pauVar81[5] = auVar270._0_8_;
          *(long *)(pauVar81[2] + 8) = auVar172._8_8_;
          *(undefined8 *)pauVar81[2] = auVar170._0_8_;
          *(long *)(pauVar81[3] + 8) = auVar197._8_8_;
          *(undefined8 *)pauVar81[3] = auVar195._0_8_;
          auVar11._8_8_ = 0xffffffff0b1d0908;
          auVar11._0_8_ = 0xffffffff031c0100;
          auVar12._8_8_ = 0xffffffff0dff1d15;
          auVar12._0_8_ = 0xffffffff0cff1c14;
          auVar9._12_4_ = 0xffffffff;
          auVar268[1] = uVar86;
          auVar268[0] = uVar85;
          auVar268[2] = uVar87;
          auVar268[3] = uVar88;
          auVar268[4] = uVar89;
          auVar268[5] = uVar90;
          auVar268[6] = uVar91;
          auVar268[7] = uVar92;
          auVar268[8] = uVar93;
          auVar268[9] = uVar94;
          auVar268[10] = uVar95;
          auVar268[0xb] = uVar96;
          auVar268[0xc] = uVar97;
          auVar268[0xd] = uVar98;
          auVar268[0xe] = uVar99;
          auVar268[0xf] = uVar100;
          auVar125 = a64_TBL(ZEXT816(0),auVar9,auVar268,auVar12);
          auVar125 = a64_TBL(ZEXT816(0),auVar125,auVar126,auVar11);
          auVar125 = NEON_rev64(auVar125,4);
          auVar173._4_12_ = auVar125._4_12_;
          auVar173._0_4_ = auVar125._4_4_;
          auVar175._0_8_ = auVar173._0_8_;
          auVar175._8_4_ = auVar125._12_4_;
          auVar175._12_4_ = auVar125._12_4_;
          auVar174._8_8_ = auVar175._8_8_;
          auVar174._0_8_ = CONCAT44(auVar350._4_4_,auVar125._4_4_);
          auVar176._0_12_ = auVar174._0_12_;
          auVar176._12_4_ = auVar350._12_4_;
          auVar335._8_8_ = 0xffffffff0fff1f17;
          auVar335._0_8_ = 0xffffffff0eff1e16;
          auVar10._12_4_ = 0xffffffff;
          auVar291[1] = uVar86;
          auVar291[0] = uVar85;
          auVar291[2] = uVar87;
          auVar291[3] = uVar88;
          auVar291[4] = uVar89;
          auVar291[5] = uVar90;
          auVar291[6] = uVar91;
          auVar291[7] = uVar92;
          auVar291[8] = uVar93;
          auVar291[9] = uVar94;
          auVar291[10] = uVar95;
          auVar291[0xb] = uVar96;
          auVar291[0xc] = uVar97;
          auVar291[0xd] = uVar98;
          auVar291[0xe] = uVar99;
          auVar291[0xf] = uVar100;
          auVar125 = a64_TBL(ZEXT816(0),auVar10,auVar291,auVar335);
          auVar316._8_8_ = 0xffffffff0b1f0908;
          auVar316._0_8_ = 0xffffffff031e0100;
          auVar125 = a64_TBL(ZEXT816(0),auVar125,auVar126,auVar316);
          auVar125 = NEON_rev64(auVar125,4);
          auVar104._4_12_ = auVar125._4_12_;
          auVar104._0_4_ = auVar125._4_4_;
          auVar106._0_8_ = auVar104._0_8_;
          auVar106._8_4_ = auVar125._12_4_;
          auVar106._12_4_ = auVar125._12_4_;
          auVar105._8_8_ = auVar106._8_8_;
          auVar105._0_8_ = CONCAT44(auVar147._4_4_,auVar125._4_4_);
          auVar107._0_12_ = auVar105._0_12_;
          auVar107._12_4_ = auVar147._12_4_;
          *(long *)(pauVar81[6] + 8) = auVar176._8_8_;
          *(undefined8 *)pauVar81[6] = auVar174._0_8_;
          *(long *)(pauVar81[7] + 8) = auVar107._8_8_;
          *(undefined8 *)pauVar81[7] = auVar105._0_8_;
          auVar125 = NEON_rev64(auVar132,4);
          auVar108._4_12_ = auVar125._4_12_;
          auVar108._0_4_ = auVar125._4_4_;
          auVar110._0_8_ = auVar108._0_8_;
          auVar110._8_4_ = auVar125._12_4_;
          auVar110._12_4_ = auVar125._12_4_;
          auVar109._8_8_ = auVar110._8_8_;
          auVar109._0_8_ = CONCAT44(auVar139._4_4_,auVar125._4_4_);
          auVar111._0_12_ = auVar109._0_12_;
          auVar111._12_4_ = auVar139._12_4_;
          *(long *)(*pauVar81 + 8) = auVar156._8_8_;
          *(undefined8 *)*pauVar81 = auVar154._0_8_;
          *(long *)(pauVar81[1] + 8) = auVar111._8_8_;
          *(undefined8 *)pauVar81[1] = auVar109._0_8_;
          uVar83 = uVar83 - 0x10;
          param_2 = param_2 + 1;
          param_3 = param_3 + 1;
          pauVar81 = pauVar81 + 8;
        } while (uVar83 != 0);
        param_1 = pauVar1;
        param_2 = pauVar79;
        param_3 = pauVar80;
        param_4 = (undefined1 (*) [16])(*param_4 + uVar84 * 8);
        if (uVar2 == uVar84) goto joined_r0x0023606c;
      }
    }
    do {
      bVar4 = (*param_2)[0];
      bVar5 = (*param_3)[0];
      uVar112 = (uint)(byte)(*param_1)[0] * 0x4a85 >> 8;
      uVar101 = uVar112 + ((uint)bVar4 * 0x811a >> 8);
      uVar102 = uVar101 - 0x4515;
      uVar85 = 0;
      if (0x4514 < uVar101) {
        uVar85 = 0xff;
      }
      uVar86 = (char)(uVar102 >> 6);
      if (0x3fff < uVar102) {
        uVar86 = uVar85;
      }
      (*param_4)[0] = uVar86;
      iVar146 = uVar112 - (((uint)bVar4 * 0x1913 >> 8) + ((uint)bVar5 * 0x3408 >> 8));
      uVar101 = iVar146 + 0x2204;
      uVar85 = 0;
      if (-0x2205 < iVar146) {
        uVar85 = 0xff;
      }
      uVar86 = (char)(uVar101 >> 6);
      if (0x3fff < uVar101) {
        uVar86 = uVar85;
      }
      (*param_4)[1] = uVar86;
      uVar112 = uVar112 + ((uint)bVar5 * 0x6625 >> 8);
      uVar101 = uVar112 - 0x379a;
      uVar85 = 0;
      if (0x3799 < uVar112) {
        uVar85 = 0xff;
      }
      uVar86 = (char)(uVar101 >> 6);
      if (0x3fff < uVar101) {
        uVar86 = uVar85;
      }
      (*param_4)[2] = uVar86;
      (*param_4)[3] = 0xff;
      pauVar79 = (undefined1 (*) [16])(*param_2 + 1);
      bVar4 = (*param_2)[0];
      pauVar80 = (undefined1 (*) [16])(*param_3 + 1);
      bVar5 = (*param_3)[0];
      uVar112 = (uint)(byte)(*param_1)[1] * 0x4a85 >> 8;
      uVar101 = uVar112 + ((uint)bVar4 * 0x811a >> 8);
      uVar102 = uVar101 - 0x4515;
      uVar85 = 0;
      if (0x4514 < uVar101) {
        uVar85 = 0xff;
      }
      uVar86 = (char)(uVar102 >> 6);
      if (0x3fff < uVar102) {
        uVar86 = uVar85;
      }
      (*param_4)[4] = uVar86;
      iVar146 = uVar112 - (((uint)bVar4 * 0x1913 >> 8) + ((uint)bVar5 * 0x3408 >> 8));
      uVar101 = iVar146 + 0x2204;
      uVar85 = 0;
      if (-0x2205 < iVar146) {
        uVar85 = 0xff;
      }
      uVar86 = (char)(uVar101 >> 6);
      if (0x3fff < uVar101) {
        uVar86 = uVar85;
      }
      (*param_4)[5] = uVar86;
      uVar112 = uVar112 + ((uint)bVar5 * 0x6625 >> 8);
      uVar101 = uVar112 - 0x379a;
      uVar85 = 0;
      if (0x3799 < uVar112) {
        uVar85 = 0xff;
      }
      uVar86 = (char)(uVar101 >> 6);
      if (0x3fff < uVar101) {
        uVar86 = uVar85;
      }
      (*param_4)[6] = uVar86;
      (*param_4)[7] = 0xff;
      pauVar1 = (undefined1 (*) [16])(*param_1 + 2);
      puVar47 = *param_4;
      param_1 = pauVar1;
      param_2 = pauVar79;
      param_3 = pauVar80;
      param_4 = (undefined1 (*) [16])(puVar47 + 8);
    } while ((undefined1 (*) [16])(puVar47 + 8) != pauVar3);
  }
joined_r0x0023606c:
  if ((param_5 & 1) != 0) {
    bVar4 = (*pauVar79)[0];
    bVar5 = (*pauVar80)[0];
    uVar112 = (uint)(byte)(*pauVar1)[0] * 0x4a85 >> 8;
    uVar101 = uVar112 + ((uint)bVar4 * 0x811a >> 8);
    uVar102 = uVar101 - 0x4515;
    uVar85 = 0;
    if (0x4514 < uVar101) {
      uVar85 = 0xff;
    }
    uVar86 = (char)(uVar102 >> 6);
    if (0x3fff < uVar102) {
      uVar86 = uVar85;
    }
    (*pauVar3)[0] = uVar86;
    iVar146 = uVar112 - (((uint)bVar4 * 0x1913 >> 8) + ((uint)bVar5 * 0x3408 >> 8));
    uVar101 = iVar146 + 0x2204;
    uVar85 = 0;
    if (-0x2205 < iVar146) {
      uVar85 = 0xff;
    }
    uVar86 = (char)(uVar101 >> 6);
    if (0x3fff < uVar101) {
      uVar86 = uVar85;
    }
    (*pauVar3)[1] = uVar86;
    uVar112 = uVar112 + ((uint)bVar5 * 0x6625 >> 8);
    uVar101 = uVar112 - 0x379a;
    uVar85 = 0;
    if (0x3799 < uVar112) {
      uVar85 = 0xff;
    }
    uVar86 = (char)(uVar101 >> 6);
    if (0x3fff < uVar101) {
      uVar86 = uVar85;
    }
    (*pauVar3)[2] = uVar86;
    (*pauVar3)[3] = 0xff;
  }
  return;
}



/* Entry: 00236a60; end: 002375d7;  */

void FUN_00236a60(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],uint param_5)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint3 uVar9;
  undefined1 auVar10 [15];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint3 uVar47;
  undefined1 *puVar48;
  undefined1 *puVar49;
  undefined1 *puVar50;
  undefined1 *puVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  undefined1 *puVar54;
  undefined1 *puVar55;
  undefined1 *puVar56;
  undefined1 *puVar57;
  undefined1 *puVar58;
  undefined1 *puVar59;
  undefined1 *puVar60;
  undefined1 *puVar61;
  undefined1 *puVar62;
  undefined1 *puVar63;
  undefined1 (*pauVar64) [16];
  undefined1 (*pauVar65) [16];
  undefined1 (*pauVar66) [16];
  undefined1 (*pauVar67) [16];
  undefined1 (*pauVar68) [16];
  undefined1 (*pauVar69) [16];
  undefined1 (*pauVar70) [16];
  undefined1 (*pauVar71) [16];
  undefined1 (*pauVar72) [16];
  undefined1 (*pauVar73) [16];
  undefined1 (*pauVar74) [16];
  undefined1 (*pauVar75) [16];
  undefined1 (*pauVar76) [16];
  undefined1 (*pauVar77) [16];
  undefined1 (*pauVar78) [16];
  undefined1 (*pauVar79) [16];
  undefined1 (*pauVar80) [16];
  undefined1 (*pauVar81) [16];
  undefined1 (*pauVar82) [16];
  long lVar83;
  ulong uVar84;
  undefined1 uVar85;
  ulong uVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  uint uVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar111;
  uint uVar112;
  undefined1 auVar109 [16];
  uint uVar113;
  undefined1 auVar110 [16];
  uint uVar114;
  uint uVar127;
  uint uVar128;
  uint uVar130;
  undefined1 auVar115 [16];
  uint uVar129;
  uint uVar131;
  uint uVar132;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar123 [16];
  uint uVar133;
  uint uVar144;
  uint uVar147;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  uint uVar150;
  undefined1 auVar138 [16];
  int iVar134;
  int iVar135;
  int iVar145;
  int iVar146;
  int iVar148;
  int iVar149;
  int iVar151;
  int iVar152;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  uint uVar153;
  uint uVar165;
  uint uVar169;
  undefined1 auVar157 [16];
  uint uVar154;
  uint uVar155;
  uint uVar166;
  uint uVar167;
  uint uVar170;
  uint uVar171;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  undefined1 auVar158 [16];
  int iVar156;
  int iVar168;
  int iVar172;
  int iVar176;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  uint uVar177;
  uint uVar187;
  uint uVar190;
  undefined1 auVar180 [16];
  uint uVar178;
  uint uVar188;
  uint uVar191;
  uint uVar193;
  uint uVar194;
  undefined1 auVar181 [16];
  int iVar179;
  int iVar189;
  int iVar192;
  int iVar195;
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  uint uVar196;
  uint uVar208;
  uint uVar210;
  uint uVar212;
  undefined1 auVar198 [16];
  uint uVar197;
  uint uVar209;
  uint uVar211;
  uint uVar213;
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined8 uVar216;
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  uint uVar221;
  uint uVar222;
  uint uVar223;
  uint uVar224;
  uint uVar225;
  uint uVar226;
  uint uVar227;
  uint uVar228;
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  int iVar235;
  int iVar240;
  int iVar241;
  int iVar242;
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  int iVar243;
  undefined8 uVar244;
  int iVar247;
  int iVar248;
  int iVar249;
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  uint uVar250;
  undefined8 uVar251;
  uint uVar260;
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  uint uVar259;
  uint uVar261;
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  uint uVar262;
  undefined8 uVar263;
  uint uVar265;
  uint uVar266;
  uint uVar267;
  undefined1 auVar264 [16];
  int iVar268;
  undefined8 uVar269;
  int iVar272;
  int iVar273;
  int iVar274;
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  uint uVar275;
  uint uVar278;
  uint uVar279;
  uint uVar280;
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  int iVar281;
  undefined8 uVar282;
  int iVar283;
  int iVar284;
  int iVar285;
  uint uVar286;
  uint uVar295;
  uint uVar296;
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  uint uVar297;
  uint uVar298;
  uint uVar302;
  uint uVar303;
  uint uVar304;
  uint uVar305;
  uint uVar306;
  uint uVar307;
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  int iVar308;
  int iVar311;
  int iVar312;
  int iVar313;
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  int iVar314;
  int iVar315;
  int iVar317;
  int iVar318;
  int iVar319;
  int iVar320;
  int iVar321;
  int iVar322;
  undefined1 auVar316 [16];
  undefined1 uStack_e0;
  undefined1 uStack_dc;
  undefined1 uStack_d8;
  undefined1 uStack_d4;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar91 [16];
  undefined1 auVar95 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar122 [16];
  undefined1 auVar126 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  
  pauVar1 = param_1;
  pauVar80 = param_2;
  pauVar81 = param_3;
  pauVar3 = param_4;
  if ((param_5 & 0x3ffffffe) != 0) {
    lVar83 = (long)(int)((param_5 & 0x3ffffffe) << 2);
    pauVar3 = (undefined1 (*) [16])(*param_4 + lVar83);
    uVar84 = lVar83 - 8;
    if (0x77 < uVar84) {
      uVar2 = (uVar84 >> 3) + 1;
      if (((pauVar3 <= param_1 || (undefined1 (*) [16])(*param_1 + (uVar84 >> 2) + 2) <= param_4) &&
          ((undefined1 (*) [16])(*param_2 + uVar2) <= param_4 || pauVar3 <= param_2)) &&
         ((undefined1 (*) [16])(*param_3 + uVar2) <= param_4 || pauVar3 <= param_3)) {
        uVar86 = uVar2 & 0x3ffffffffffffff0;
        pauVar1 = (undefined1 (*) [16])(*param_1 + uVar86 * 2);
        pauVar80 = (undefined1 (*) [16])(*param_2 + uVar86);
        pauVar81 = (undefined1 (*) [16])(*param_3 + uVar86);
        pauVar82 = param_4;
        uVar84 = uVar86;
        do {
          puVar48 = *param_1;
          puVar49 = *param_1;
          puVar50 = *param_1;
          puVar51 = *param_1;
          puVar52 = *param_1;
          puVar53 = *param_1;
          puVar54 = *param_1;
          puVar55 = *param_1;
          puVar56 = *param_1;
          puVar57 = *param_1;
          puVar58 = *param_1;
          puVar59 = *param_1;
          puVar60 = *param_1;
          puVar61 = *param_1;
          puVar62 = *param_1;
          puVar63 = *param_1;
          pauVar79 = param_1 + 1;
          pauVar64 = param_1 + 1;
          pauVar65 = param_1 + 1;
          pauVar66 = param_1 + 1;
          pauVar67 = param_1 + 1;
          pauVar68 = param_1 + 1;
          pauVar69 = param_1 + 1;
          pauVar70 = param_1 + 1;
          pauVar71 = param_1 + 1;
          pauVar72 = param_1 + 1;
          pauVar73 = param_1 + 1;
          pauVar74 = param_1 + 1;
          pauVar75 = param_1 + 1;
          pauVar76 = param_1 + 1;
          pauVar77 = param_1 + 1;
          pauVar78 = param_1 + 1;
          param_1 = param_1 + 2;
          auVar109 = *param_2;
          auVar137._8_4_ = 0xffffff06;
          auVar137._0_8_ = 0xffffff05ffffff04;
          auVar136._8_4_ = 0xffffff06;
          auVar136._0_8_ = 0xffffff05ffffff04;
          auVar136._12_4_ = 0xffffff07;
          auVar136 = a64_TBL(ZEXT816(0),auVar109,auVar136);
          auVar40._8_8_ = 0xffffff03ffffff02;
          auVar40._0_8_ = 0xffffff01ffffff00;
          auVar157 = a64_TBL(ZEXT816(0),auVar109,auVar40);
          auVar180 = *param_3;
          auVar39._8_8_ = 0xffffff0fffffff0e;
          auVar39._0_8_ = 0xffffff0dffffff0c;
          auVar229 = a64_TBL(ZEXT816(0),auVar109,auVar39);
          auVar14[8] = 10;
          auVar14._0_8_ = 0xffffff09ffffff08;
          auVar160[8] = 10;
          auVar160._0_8_ = 0xffffff09ffffff08;
          auVar160[9] = 0xff;
          auVar160[10] = 0xff;
          auVar160[0xb] = 0xff;
          auVar160[0xc] = 0xb;
          auVar160[0xd] = 0xff;
          auVar160[0xe] = 0xff;
          auVar160[0xf] = 0xff;
          auVar109 = a64_TBL(ZEXT816(0),auVar109,auVar160);
          uVar251 = CONCAT26(auVar109._12_2_,
                             CONCAT24(auVar109._8_2_,CONCAT22(auVar109._4_2_,auVar109._0_2_)));
          uVar29 = CONCAT26(auVar229._12_2_,
                            CONCAT24(auVar229._8_2_,CONCAT22(auVar229._4_2_,auVar229._0_2_)));
          uVar263 = CONCAT26(auVar157._12_2_,
                             CONCAT24(auVar157._8_2_,CONCAT22(auVar157._4_2_,auVar157._0_2_)));
          auVar109 = a64_TBL(ZEXT816(0),auVar180,auVar39);
          uVar216 = CONCAT26(auVar136._12_2_,
                             CONCAT24(auVar136._8_2_,CONCAT22(auVar136._4_2_,auVar136._0_2_)));
          auVar14[9] = 0xff;
          auVar14[10] = 0xff;
          auVar14[0xb] = 0xff;
          auVar14[0xc] = 0xb;
          auVar14[0xd] = 0xff;
          auVar14[0xe] = 0xff;
          auVar14[0xf] = 0xff;
          auVar157 = a64_TBL(ZEXT816(0),auVar180,auVar14);
          auVar137._12_4_ = 0xffffff07;
          auVar136 = a64_TBL(ZEXT816(0),auVar180,auVar137);
          auVar180 = a64_TBL(ZEXT816(0),auVar180,auVar40);
          uVar269 = CONCAT26(auVar180._12_2_,
                             CONCAT24(auVar180._8_2_,CONCAT22(auVar180._4_2_,auVar180._0_2_)));
          uVar244 = CONCAT26(auVar136._12_2_,
                             CONCAT24(auVar136._8_2_,CONCAT22(auVar136._4_2_,auVar136._0_2_)));
          uVar282 = CONCAT26(auVar109._12_2_,
                             CONCAT24(auVar109._8_2_,CONCAT22(auVar109._4_2_,auVar109._0_2_)));
          auVar229 = NEON_umull((ulong)CONCAT16((*pauVar69)[6],
                                                (uint6)CONCAT14((*pauVar67)[4],
                                                                (uint)CONCAT12((*pauVar65)[2],
                                                                               (ushort)(byte)(*
                                                  pauVar79)[0]))),0x4a854a854a854a85,2);
          uVar153 = (uint)(byte)(*pauVar71)[8] * 0x4a85;
          uVar165 = (uint)(byte)(*pauVar73)[10] * 0x4a85;
          uVar169 = (uint)(byte)(*pauVar75)[0xc] * 0x4a85;
          uVar173 = (uint)(byte)(*pauVar77)[0xe] * 0x4a85;
          auVar109 = NEON_umull((ulong)CONCAT16(puVar54[6],
                                                (uint6)CONCAT14(puVar52[4],
                                                                (uint)CONCAT12(puVar50[2],
                                                                               (ushort)(byte)*
                                                  puVar48))),0x4a854a854a854a85,2);
          uVar100 = (uint)(byte)puVar56[8] * 0x4a85;
          uVar102 = (uint)(byte)puVar58[10] * 0x4a85;
          uVar104 = (uint)(byte)puVar60[0xc] * 0x4a85;
          uVar106 = (uint)(byte)puVar62[0xe] * 0x4a85;
          uVar262 = auVar109._0_4_;
          uVar265 = auVar109._4_4_;
          uVar266 = auVar109._8_4_;
          uVar267 = auVar109._12_4_;
          auVar180 = NEON_umull(uVar282,0x6625662566256625,2);
          auVar109 = NEON_umull(CONCAT17(auVar157[0xd],
                                         CONCAT16(auVar157[0xc],
                                                  CONCAT15(auVar157[9],
                                                           CONCAT14(auVar157[8],
                                                                    CONCAT13(auVar157[5],
                                                                             CONCAT12(auVar157[4],
                                                                                      auVar157._0_2_
                                                                                     )))))),
                                0x6625662566256625,2);
          auVar136 = NEON_umull(uVar244,0x6625662566256625,2);
          auVar137 = NEON_umull(uVar269,0x6625662566256625,2);
          uVar221 = auVar136._0_4_ >> 8;
          uVar223 = auVar136._4_4_ >> 8;
          uVar225 = auVar136._8_4_ >> 8;
          uVar227 = auVar136._12_4_ >> 8;
          uVar101 = auVar109._0_4_ >> 8;
          uVar103 = auVar109._4_4_ >> 8;
          uVar105 = auVar109._8_4_ >> 8;
          uVar107 = auVar109._12_4_ >> 8;
          uVar108 = auVar180._0_4_ >> 8;
          uVar111 = auVar180._4_4_ >> 8;
          uVar112 = auVar180._8_4_ >> 8;
          uVar113 = auVar180._12_4_ >> 8;
          uVar114 = uVar108 + (uVar153 >> 8);
          uVar127 = uVar111 + (uVar165 >> 8);
          uVar128 = uVar112 + (uVar169 >> 8);
          uVar130 = uVar113 + (uVar173 >> 8);
          uVar250 = auVar229._0_4_;
          uVar259 = auVar229._4_4_;
          uVar260 = auVar229._8_4_;
          uVar261 = auVar229._12_4_;
          uVar133 = uVar101 + (uVar250 >> 8);
          uVar144 = uVar103 + (uVar259 >> 8);
          uVar147 = uVar105 + (uVar260 >> 8);
          uVar150 = uVar107 + (uVar261 >> 8);
          uVar297 = uVar221 + (uVar100 >> 8);
          uVar302 = uVar223 + (uVar102 >> 8);
          uVar304 = uVar225 + (uVar104 >> 8);
          uVar306 = uVar227 + (uVar106 >> 8);
          uVar154 = uVar133 - 0x379a;
          uVar166 = uVar144 - 0x379a;
          uVar170 = uVar147 - 0x379a;
          uVar174 = uVar150 - 0x379a;
          uVar177 = uVar114 - 0x379a;
          uVar187 = uVar127 - 0x379a;
          uVar190 = uVar128 - 0x379a;
          uVar193 = uVar130 - 0x379a;
          iVar308 = -(uint)(uVar177 < 0x4000);
          iVar311 = -(uint)(uVar187 < 0x4000);
          iVar312 = -(uint)(uVar190 < 0x4000);
          iVar313 = -(uint)(uVar193 < 0x4000);
          iVar314 = -(uint)(uVar154 < 0x4000);
          iVar317 = -(uint)(uVar166 < 0x4000);
          iVar319 = -(uint)(uVar170 < 0x4000);
          iVar321 = -(uint)(uVar174 < 0x4000);
          uVar155 = uVar154 >> 6;
          uVar167 = uVar166 >> 6;
          uVar171 = uVar170 >> 6;
          uVar175 = uVar174 >> 6;
          uVar178 = uVar177 >> 6;
          uVar188 = uVar187 >> 6;
          uVar191 = uVar190 >> 6;
          uVar194 = uVar193 >> 6;
          auVar181[0] = (byte)uVar178 & (byte)iVar308 | ~-(uVar114 < 0x379a) & ~(byte)iVar308;
          auVar181[1] = (byte)(uVar178 >> 8) & (byte)((uint)iVar308 >> 8);
          auVar181[2] = (byte)(uVar178 >> 0x10) & (byte)((uint)iVar308 >> 0x10);
          auVar181[3] = (byte)(uVar177 >> 0x1e) & (byte)((uint)iVar308 >> 0x18);
          auVar181[4] = (byte)uVar188 & (byte)iVar311 | ~-(uVar127 < 0x379a) & ~(byte)iVar311;
          auVar181[5] = (byte)(uVar188 >> 8) & (byte)((uint)iVar311 >> 8);
          auVar181[6] = (byte)(uVar188 >> 0x10) & (byte)((uint)iVar311 >> 0x10);
          auVar181[7] = (byte)(uVar187 >> 0x1e) & (byte)((uint)iVar311 >> 0x18);
          auVar181[8] = (byte)uVar191 & (byte)iVar312 | ~-(uVar128 < 0x379a) & ~(byte)iVar312;
          auVar181[9] = (byte)(uVar191 >> 8) & (byte)((uint)iVar312 >> 8);
          auVar181[10] = (byte)(uVar191 >> 0x10) & (byte)((uint)iVar312 >> 0x10);
          auVar181[0xb] = (byte)(uVar190 >> 0x1e) & (byte)((uint)iVar312 >> 0x18);
          auVar181[0xc] = (byte)uVar194 & (byte)iVar313 | ~-(uVar130 < 0x379a) & ~(byte)iVar313;
          auVar181[0xd] = (byte)(uVar194 >> 8) & (byte)((uint)iVar313 >> 8);
          auVar181[0xe] = (byte)(uVar194 >> 0x10) & (byte)((uint)iVar313 >> 0x10);
          auVar181[0xf] = (byte)(uVar193 >> 0x1e) & (byte)((uint)iVar313 >> 0x18);
          auVar158[0] = (byte)uVar155 & (byte)iVar314 | ~-(uVar133 < 0x379a) & ~(byte)iVar314;
          auVar158[1] = (byte)(uVar155 >> 8) & (byte)((uint)iVar314 >> 8);
          auVar158[2] = (byte)(uVar155 >> 0x10) & (byte)((uint)iVar314 >> 0x10);
          auVar158[3] = (byte)(uVar154 >> 0x1e) & (byte)((uint)iVar314 >> 0x18);
          auVar158[4] = (byte)uVar167 & (byte)iVar317 | ~-(uVar144 < 0x379a) & ~(byte)iVar317;
          auVar158[5] = (byte)(uVar167 >> 8) & (byte)((uint)iVar317 >> 8);
          auVar158[6] = (byte)(uVar167 >> 0x10) & (byte)((uint)iVar317 >> 0x10);
          auVar158[7] = (byte)(uVar166 >> 0x1e) & (byte)((uint)iVar317 >> 0x18);
          auVar158[8] = (byte)uVar171 & (byte)iVar319 | ~-(uVar147 < 0x379a) & ~(byte)iVar319;
          auVar158[9] = (byte)(uVar171 >> 8) & (byte)((uint)iVar319 >> 8);
          auVar158[10] = (byte)(uVar171 >> 0x10) & (byte)((uint)iVar319 >> 0x10);
          auVar158[0xb] = (byte)(uVar170 >> 0x1e) & (byte)((uint)iVar319 >> 0x18);
          auVar158[0xc] = (byte)uVar175 & (byte)iVar321 | ~-(uVar150 < 0x379a) & ~(byte)iVar321;
          auVar158[0xd] = (byte)(uVar175 >> 8) & (byte)((uint)iVar321 >> 8);
          auVar158[0xe] = (byte)(uVar175 >> 0x10) & (byte)((uint)iVar321 >> 0x10);
          auVar158[0xf] = (byte)(uVar174 >> 0x1e) & (byte)((uint)iVar321 >> 0x18);
          uVar114 = uVar297 - 0x379a;
          uVar128 = uVar302 - 0x379a;
          uVar133 = uVar304 - 0x379a;
          uVar147 = uVar306 - 0x379a;
          iVar308 = -(uint)(uVar114 < 0x4000);
          iVar311 = -(uint)(uVar128 < 0x4000);
          iVar312 = -(uint)(uVar133 < 0x4000);
          iVar313 = -(uint)(uVar147 < 0x4000);
          uVar127 = uVar114 >> 6;
          uVar130 = uVar128 >> 6;
          uVar144 = uVar133 >> 6;
          uVar9 = auVar137._1_3_;
          uVar47 = auVar137._9_3_;
          auVar10[0xc] = auVar137[0xd];
          auVar10._0_12_ = ZEXT312(uVar47) << 0x40;
          auVar10[0xd] = auVar137[0xe];
          auVar10[0xe] = auVar137[0xf];
          uVar154 = (uint)uVar9 + (uVar262 >> 8);
          uVar155 = (uint)(uint3)(CONCAT16(auVar137[7],
                                           CONCAT15(auVar137[6],CONCAT14(auVar137[5],(uint)uVar9)))
                                 >> 0x20) + (uVar265 >> 8);
          uVar166 = (uint)uVar47 + (uVar266 >> 8);
          uVar167 = (uint)auVar10._12_3_ + (uVar267 >> 8);
          auVar138[0] = (byte)uVar127 & (byte)iVar308 | ~-(uVar297 < 0x379a) & ~(byte)iVar308;
          auVar138[1] = (byte)(uVar127 >> 8) & (byte)((uint)iVar308 >> 8);
          auVar138[2] = (byte)(uVar127 >> 0x10) & (byte)((uint)iVar308 >> 0x10);
          auVar138[3] = (byte)(uVar114 >> 0x1e) & (byte)((uint)iVar308 >> 0x18);
          auVar138[4] = (byte)uVar130 & (byte)iVar311 | ~-(uVar302 < 0x379a) & ~(byte)iVar311;
          auVar138[5] = (byte)(uVar130 >> 8) & (byte)((uint)iVar311 >> 8);
          auVar138[6] = (byte)(uVar130 >> 0x10) & (byte)((uint)iVar311 >> 0x10);
          auVar138[7] = (byte)(uVar128 >> 0x1e) & (byte)((uint)iVar311 >> 0x18);
          auVar138[8] = (byte)uVar144 & (byte)iVar312 | ~-(uVar304 < 0x379a) & ~(byte)iVar312;
          auVar138[9] = (byte)(uVar144 >> 8) & (byte)((uint)iVar312 >> 8);
          auVar138[10] = (byte)(uVar144 >> 0x10) & (byte)((uint)iVar312 >> 0x10);
          auVar138[0xb] = (byte)(uVar133 >> 0x1e) & (byte)((uint)iVar312 >> 0x18);
          auVar138[0xc] =
               (byte)(uVar147 >> 6) & (byte)iVar313 | ~-(uVar306 < 0x379a) & ~(byte)iVar313;
          auVar138[0xd] = (byte)((uVar147 >> 6) >> 8) & (byte)((uint)iVar313 >> 8);
          auVar138[0xe] = (byte)((uint3)(uVar147 >> 0xe) >> 8) & (byte)((uint)iVar313 >> 0x10);
          auVar138[0xf] = (byte)(uVar147 >> 0x1e) & (byte)((uint)iVar313 >> 0x18);
          uVar133 = uVar154 - 0x379a;
          uVar144 = uVar155 - 0x379a;
          uVar147 = uVar166 - 0x379a;
          uVar150 = uVar167 - 0x379a;
          iVar308 = -(uint)(uVar133 < 0x4000);
          iVar311 = -(uint)(uVar144 < 0x4000);
          iVar312 = -(uint)(uVar147 < 0x4000);
          iVar313 = -(uint)(uVar150 < 0x4000);
          uVar114 = uVar133 >> 6;
          uVar127 = uVar144 >> 6;
          uVar128 = uVar147 >> 6;
          uVar130 = uVar150 >> 6;
          auVar180 = NEON_umull(uVar216,0x1913191319131913,2);
          auVar109 = NEON_umull(uVar244,0x3408340834083408,2);
          iVar315 = (auVar180._0_4_ >> 8) + (auVar109._0_4_ >> 8);
          iVar318 = (auVar180._4_4_ >> 8) + (auVar109._4_4_ >> 8);
          iVar320 = (auVar180._8_4_ >> 8) + (auVar109._8_4_ >> 8);
          iVar322 = (auVar180._12_4_ >> 8) + (auVar109._12_4_ >> 8);
          auVar109 = NEON_umull(uVar263,0x1913191319131913,2);
          auVar180 = NEON_umull(uVar269,0x3408340834083408,2);
          iVar243 = (auVar109._0_4_ >> 8) + (auVar180._0_4_ >> 8);
          iVar247 = (auVar109._4_4_ >> 8) + (auVar180._4_4_ >> 8);
          iVar248 = (auVar109._8_4_ >> 8) + (auVar180._8_4_ >> 8);
          iVar249 = (auVar109._12_4_ >> 8) + (auVar180._12_4_ >> 8);
          auVar109 = NEON_umull(uVar29,0x1913191319131913,2);
          auVar180 = NEON_umull(uVar282,0x3408340834083408,2);
          iVar268 = (auVar109._0_4_ >> 8) + (auVar180._0_4_ >> 8);
          iVar272 = (auVar109._4_4_ >> 8) + (auVar180._4_4_ >> 8);
          iVar273 = (auVar109._8_4_ >> 8) + (auVar180._8_4_ >> 8);
          iVar274 = (auVar109._12_4_ >> 8) + (auVar180._12_4_ >> 8);
          auVar109 = NEON_umull(uVar251,0x1913191319131913,2);
          auVar180 = NEON_umull(CONCAT17(auVar157[0xd],
                                         CONCAT16(auVar157[0xc],
                                                  CONCAT15(auVar157[9],
                                                           CONCAT14(auVar157[8],
                                                                    CONCAT13(auVar157[5],
                                                                             CONCAT12(auVar157[4],
                                                                                      auVar157._0_2_
                                                                                     )))))),
                                0x3408340834083408,2);
          iVar281 = (auVar109._0_4_ >> 8) + (auVar180._0_4_ >> 8);
          iVar283 = (auVar109._4_4_ >> 8) + (auVar180._4_4_ >> 8);
          iVar284 = (auVar109._8_4_ >> 8) + (auVar180._8_4_ >> 8);
          iVar285 = (auVar109._12_4_ >> 8) + (auVar180._12_4_ >> 8);
          auVar115[0] = (byte)uVar114 & (byte)iVar308 | ~-(uVar154 < 0x379a) & ~(byte)iVar308;
          auVar115[1] = (byte)(uVar114 >> 8) & (byte)((uint)iVar308 >> 8);
          auVar115[2] = (byte)(uVar114 >> 0x10) & (byte)((uint)iVar308 >> 0x10);
          auVar115[3] = (byte)(uVar133 >> 0x1e) & (byte)((uint)iVar308 >> 0x18);
          auVar115[4] = (byte)uVar127 & (byte)iVar311 | ~-(uVar155 < 0x379a) & ~(byte)iVar311;
          auVar115[5] = (byte)(uVar127 >> 8) & (byte)((uint)iVar311 >> 8);
          auVar115[6] = (byte)(uVar127 >> 0x10) & (byte)((uint)iVar311 >> 0x10);
          auVar115[7] = (byte)(uVar144 >> 0x1e) & (byte)((uint)iVar311 >> 0x18);
          auVar115[8] = (byte)uVar128 & (byte)iVar312 | ~-(uVar166 < 0x379a) & ~(byte)iVar312;
          auVar115[9] = (byte)(uVar128 >> 8) & (byte)((uint)iVar312 >> 8);
          auVar115[10] = (byte)(uVar128 >> 0x10) & (byte)((uint)iVar312 >> 0x10);
          auVar115[0xb] = (byte)(uVar147 >> 0x1e) & (byte)((uint)iVar312 >> 0x18);
          auVar115[0xc] = (byte)uVar130 & (byte)iVar313 | ~-(uVar167 < 0x379a) & ~(byte)iVar313;
          auVar115[0xd] = (byte)(uVar130 >> 8) & (byte)((uint)iVar313 >> 8);
          auVar115[0xe] = (byte)(uVar130 >> 0x10) & (byte)((uint)iVar313 >> 0x10);
          auVar115[0xf] = (byte)(uVar150 >> 0x1e) & (byte)((uint)iVar313 >> 0x18);
          auVar109 = NEON_umull((ulong)CONCAT16((*pauVar70)[7],
                                                (uint6)CONCAT14((*pauVar68)[5],
                                                                (uint)CONCAT12((*pauVar66)[3],
                                                                               (ushort)(byte)(*
                                                  pauVar64)[1]))),0x4a854a854a854a85,2);
          uVar298 = (uint)(byte)(*pauVar72)[9] * 0x4a85;
          uVar303 = (uint)(byte)(*pauVar74)[0xb] * 0x4a85;
          uVar305 = (uint)(byte)(*pauVar76)[0xd] * 0x4a85;
          uVar307 = (uint)(byte)(*pauVar78)[0xf] * 0x4a85;
          uVar114 = (uint)(byte)puVar57[9] * 0x4a85;
          uVar127 = (uint)(byte)puVar59[0xb] * 0x4a85;
          uVar128 = (uint)(byte)puVar61[0xd] * 0x4a85;
          uVar130 = (uint)(byte)puVar63[0xf] * 0x4a85;
          uVar108 = uVar108 + (uVar298 >> 8);
          uVar111 = uVar111 + (uVar303 >> 8);
          uVar112 = uVar112 + (uVar305 >> 8);
          uVar113 = uVar113 + (uVar307 >> 8);
          uVar170 = auVar109._0_4_;
          uVar175 = auVar109._4_4_;
          uVar187 = auVar109._8_4_;
          uVar191 = auVar109._12_4_;
          uVar101 = uVar101 + (uVar170 >> 8);
          uVar103 = uVar103 + (uVar175 >> 8);
          uVar105 = uVar105 + (uVar187 >> 8);
          uVar107 = uVar107 + (uVar191 >> 8);
          auVar43._8_8_ = 0x3c3834302c282420;
          auVar43._0_8_ = 0x1c1814100c080400;
          auVar136 = a64_TBL(ZEXT816(0),auVar115,auVar138,auVar158,auVar181,auVar43);
          uVar221 = uVar221 + (uVar114 >> 8);
          uVar223 = uVar223 + (uVar127 >> 8);
          uVar225 = uVar225 + (uVar128 >> 8);
          uVar227 = uVar227 + (uVar130 >> 8);
          uVar133 = uVar101 - 0x379a;
          uVar147 = uVar103 - 0x379a;
          uVar154 = uVar105 - 0x379a;
          uVar166 = uVar107 - 0x379a;
          uVar171 = uVar108 - 0x379a;
          uVar177 = uVar111 - 0x379a;
          uVar188 = uVar112 - 0x379a;
          uVar193 = uVar113 - 0x379a;
          iVar308 = -(uint)(uVar171 < 0x4000);
          iVar312 = -(uint)(uVar177 < 0x4000);
          iVar314 = -(uint)(uVar188 < 0x4000);
          iVar319 = -(uint)(uVar193 < 0x4000);
          iVar134 = -(uint)(uVar133 < 0x4000);
          iVar145 = -(uint)(uVar147 < 0x4000);
          iVar148 = -(uint)(uVar154 < 0x4000);
          iVar151 = -(uint)(uVar166 < 0x4000);
          uVar144 = uVar133 >> 6;
          uVar150 = uVar147 >> 6;
          uVar155 = uVar154 >> 6;
          uVar167 = uVar166 >> 6;
          uVar174 = uVar171 >> 6;
          uVar178 = uVar177 >> 6;
          uVar190 = uVar188 >> 6;
          uVar194 = uVar221 - 0x379a;
          uVar302 = uVar223 - 0x379a;
          uVar306 = uVar225 - 0x379a;
          uVar131 = uVar227 - 0x379a;
          iVar135 = -(uint)(uVar194 < 0x4000);
          iVar146 = -(uint)(uVar302 < 0x4000);
          iVar149 = -(uint)(uVar306 < 0x4000);
          iVar152 = -(uint)(uVar131 < 0x4000);
          uVar297 = uVar194 >> 6;
          uVar304 = uVar302 >> 6;
          uVar129 = uVar306 >> 6;
          uVar132 = uVar131 >> 6;
          iVar156 = (uVar250 >> 8) - iVar281;
          iVar168 = (uVar259 >> 8) - iVar283;
          iVar172 = (uVar260 >> 8) - iVar284;
          iVar176 = (uVar261 >> 8) - iVar285;
          iVar179 = (uVar153 >> 8) - iVar268;
          iVar189 = (uVar165 >> 8) - iVar272;
          iVar192 = (uVar169 >> 8) - iVar273;
          iVar195 = (uVar173 >> 8) - iVar274;
          iVar311 = (uVar262 >> 8) - iVar243;
          iVar313 = (uVar265 >> 8) - iVar247;
          iVar317 = (uVar266 >> 8) - iVar248;
          iVar321 = (uVar267 >> 8) - iVar249;
          iVar235 = (uVar100 >> 8) - iVar315;
          iVar240 = (uVar102 >> 8) - iVar318;
          iVar241 = (uVar104 >> 8) - iVar320;
          iVar242 = (uVar106 >> 8) - iVar322;
          uVar196 = iVar235 + 0x2204;
          uVar208 = iVar240 + 0x2204;
          uVar210 = iVar241 + 0x2204;
          uVar212 = iVar242 + 0x2204;
          auVar180 = NEON_umull(uVar263,0x811a811a811a811a,2);
          iVar240 = -(uint)(iVar240 < -0x2204);
          iVar241 = -(uint)(iVar241 < -0x2204);
          iVar242 = -(uint)(iVar242 < -0x2204);
          auVar109 = NEON_umull(uVar216,0x811a811a811a811a,2);
          auVar217._0_8_ = CONCAT44(-(uint)(uVar208 < 0x4000),-(uint)(uVar196 < 0x4000));
          auVar217._8_4_ = -(uint)(uVar210 < 0x4000);
          auVar217._12_4_ = -(uint)(uVar212 < 0x4000);
          auVar198._0_4_ = uVar196 >> 6;
          auVar198._4_4_ = uVar208 >> 6;
          auVar198._8_4_ = uVar210 >> 6;
          auVar198._12_4_ = uVar212 >> 6;
          auVar97[0] = ~-(iVar235 < -0x2204);
          auVar97._1_3_ = 0;
          auVar97[4] = ~(byte)iVar240;
          auVar97._5_2_ = 0;
          auVar97[7] = ~(byte)((uint)iVar240 >> 0x18);
          auVar97[8] = ~(byte)iVar241;
          auVar97[9] = ~(byte)((uint)iVar241 >> 8);
          auVar97[10] = ~(byte)((uint)iVar241 >> 0x10);
          auVar97[0xb] = ~(byte)((uint)iVar241 >> 0x18);
          auVar97[0xc] = ~(byte)iVar242;
          auVar97[0xd] = ~(byte)((uint)iVar242 >> 8);
          auVar97[0xe] = ~(byte)((uint)iVar242 >> 0x10);
          auVar97[0xf] = ~(byte)((uint)iVar242 >> 0x18);
          auVar96._8_8_ = auVar217._8_8_;
          auVar96._0_8_ = auVar217._0_8_;
          auVar97 = auVar97 ^ (auVar97 ^ auVar198) & auVar96;
          uVar197 = iVar311 + 0x2204;
          uVar209 = iVar313 + 0x2204;
          uVar211 = iVar317 + 0x2204;
          uVar213 = iVar321 + 0x2204;
          uVar196 = auVar109._0_4_ >> 8;
          uVar208 = auVar109._4_4_ >> 8;
          uVar210 = auVar109._8_4_ >> 8;
          uVar212 = auVar109._12_4_ >> 8;
          uVar222 = auVar180._0_4_ >> 8;
          uVar224 = auVar180._4_4_ >> 8;
          uVar226 = auVar180._8_4_ >> 8;
          uVar228 = auVar180._12_4_ >> 8;
          uVar275 = uVar222 + (uVar262 >> 8);
          uVar278 = uVar224 + (uVar265 >> 8);
          uVar279 = uVar226 + (uVar266 >> 8);
          uVar280 = uVar228 + (uVar267 >> 8);
          iVar313 = -(uint)(iVar313 < -0x2204);
          iVar317 = -(uint)(iVar317 < -0x2204);
          iVar321 = -(uint)(iVar321 < -0x2204);
          uVar262 = uVar196 + (uVar100 >> 8);
          uVar265 = uVar208 + (uVar102 >> 8);
          uVar266 = uVar210 + (uVar104 >> 8);
          uVar267 = uVar212 + (uVar106 >> 8);
          auVar252._0_8_ = CONCAT44(-(uint)(uVar209 < 0x4000),-(uint)(uVar197 < 0x4000));
          auVar252._8_4_ = -(uint)(uVar211 < 0x4000);
          auVar252._12_4_ = -(uint)(uVar213 < 0x4000);
          auVar199._0_4_ = uVar197 >> 6;
          auVar199._4_4_ = uVar209 >> 6;
          auVar199._8_4_ = uVar211 >> 6;
          auVar199._12_4_ = uVar213 >> 6;
          auVar237[0] = ~-(iVar311 < -0x2204);
          auVar237._1_3_ = 0;
          auVar237[4] = ~(byte)iVar313;
          auVar237._5_2_ = 0;
          auVar237[7] = ~(byte)((uint)iVar313 >> 0x18);
          auVar237[8] = ~(byte)iVar317;
          auVar237[9] = ~(byte)((uint)iVar317 >> 8);
          auVar237[10] = ~(byte)((uint)iVar317 >> 0x10);
          auVar237[0xb] = ~(byte)((uint)iVar317 >> 0x18);
          auVar237[0xc] = ~(byte)iVar321;
          auVar237[0xd] = ~(byte)((uint)iVar321 >> 8);
          auVar237[0xe] = ~(byte)((uint)iVar321 >> 0x10);
          auVar237[0xf] = ~(byte)((uint)iVar321 >> 0x18);
          auVar236._8_8_ = auVar252._8_8_;
          auVar236._0_8_ = auVar252._0_8_;
          auVar237 = auVar237 ^ (auVar237 ^ auVar199) & auVar236;
          uVar100 = uVar262 - 0x4515;
          uVar102 = uVar265 - 0x4515;
          uVar104 = uVar266 - 0x4515;
          uVar106 = uVar267 - 0x4515;
          iVar311 = -(uint)(uVar265 < 0x4515);
          iVar313 = -(uint)(uVar266 < 0x4515);
          iVar317 = -(uint)(uVar267 < 0x4515);
          auVar200._0_8_ = CONCAT44(-(uint)(uVar102 < 0x4000),-(uint)(uVar100 < 0x4000));
          auVar200._8_4_ = -(uint)(uVar104 < 0x4000);
          auVar200._12_4_ = -(uint)(uVar106 < 0x4000);
          auVar253._0_4_ = uVar100 >> 6;
          auVar253._4_4_ = uVar102 >> 6;
          auVar253._8_4_ = uVar104 >> 6;
          auVar253._12_4_ = uVar106 >> 6;
          auVar117[0] = ~-(uVar262 < 0x4515);
          auVar117._1_3_ = 0;
          auVar117[4] = ~(byte)iVar311;
          auVar117._5_2_ = 0;
          auVar117[7] = ~(byte)((uint)iVar311 >> 0x18);
          auVar117[8] = ~(byte)iVar313;
          auVar117[9] = ~(byte)((uint)iVar313 >> 8);
          auVar117[10] = ~(byte)((uint)iVar313 >> 0x10);
          auVar117[0xb] = ~(byte)((uint)iVar313 >> 0x18);
          auVar117[0xc] = ~(byte)iVar317;
          auVar117[0xd] = ~(byte)((uint)iVar317 >> 8);
          auVar117[0xe] = ~(byte)((uint)iVar317 >> 0x10);
          auVar117[0xf] = ~(byte)((uint)iVar317 >> 0x18);
          auVar116._8_8_ = auVar200._8_8_;
          auVar116._0_8_ = auVar200._0_8_;
          auVar117 = auVar117 ^ (auVar117 ^ auVar253) & auVar116;
          uVar100 = uVar275 - 0x4515;
          uVar102 = uVar278 - 0x4515;
          uVar104 = uVar279 - 0x4515;
          uVar106 = uVar280 - 0x4515;
          iVar311 = -(uint)(uVar278 < 0x4515);
          iVar313 = -(uint)(uVar279 < 0x4515);
          iVar317 = -(uint)(uVar280 < 0x4515);
          auVar201._0_4_ = -(uint)(uVar100 < 0x4000);
          auVar201._4_4_ = -(uint)(uVar102 < 0x4000);
          auVar201._8_4_ = -(uint)(uVar104 < 0x4000);
          auVar201._12_4_ = -(uint)(uVar106 < 0x4000);
          auVar254._0_4_ = uVar100 >> 6;
          auVar254._4_4_ = uVar102 >> 6;
          auVar254._8_4_ = uVar104 >> 6;
          auVar254._12_4_ = uVar106 >> 6;
          auVar276[0] = ~-(uVar275 < 0x4515);
          auVar276._1_3_ = 0;
          auVar276[4] = ~(byte)iVar311;
          auVar276._5_2_ = 0;
          auVar276[7] = ~(byte)((uint)iVar311 >> 0x18);
          auVar276[8] = ~(byte)iVar313;
          auVar276[9] = ~(byte)((uint)iVar313 >> 8);
          auVar276[10] = ~(byte)((uint)iVar313 >> 0x10);
          auVar276[0xb] = ~(byte)((uint)iVar313 >> 0x18);
          auVar276[0xc] = ~(byte)iVar317;
          auVar276[0xd] = ~(byte)((uint)iVar317 >> 8);
          auVar276[0xe] = ~(byte)((uint)iVar317 >> 0x10);
          auVar276[0xf] = ~(byte)((uint)iVar317 >> 0x18);
          auVar276 = auVar276 ^ (auVar276 ^ auVar254) & auVar201;
          uVar100 = iVar179 + 0x2204;
          uVar102 = iVar189 + 0x2204;
          uVar104 = iVar192 + 0x2204;
          uVar106 = iVar195 + 0x2204;
          iVar311 = -(uint)(iVar189 < -0x2204);
          iVar313 = -(uint)(iVar192 < -0x2204);
          iVar317 = -(uint)(iVar195 < -0x2204);
          auVar202._0_8_ = CONCAT44(-(uint)(uVar102 < 0x4000),-(uint)(uVar100 < 0x4000));
          auVar202._8_4_ = -(uint)(uVar104 < 0x4000);
          auVar202._12_4_ = -(uint)(uVar106 < 0x4000);
          auVar255._0_4_ = uVar100 >> 6;
          auVar255._4_4_ = uVar102 >> 6;
          auVar255._8_4_ = uVar104 >> 6;
          auVar255._12_4_ = uVar106 >> 6;
          auVar219[0] = ~-(iVar179 < -0x2204);
          auVar219._1_3_ = 0;
          auVar219[4] = ~(byte)iVar311;
          auVar219._5_2_ = 0;
          auVar219[7] = ~(byte)((uint)iVar311 >> 0x18);
          auVar219[8] = ~(byte)iVar313;
          auVar219[9] = ~(byte)((uint)iVar313 >> 8);
          auVar219[10] = ~(byte)((uint)iVar313 >> 0x10);
          auVar219[0xb] = ~(byte)((uint)iVar313 >> 0x18);
          auVar219[0xc] = ~(byte)iVar317;
          auVar219[0xd] = ~(byte)((uint)iVar317 >> 8);
          auVar219[0xe] = ~(byte)((uint)iVar317 >> 0x10);
          auVar219[0xf] = ~(byte)((uint)iVar317 >> 0x18);
          auVar218._8_8_ = auVar202._8_8_;
          auVar218._0_8_ = auVar202._0_8_;
          auVar219 = auVar219 ^ (auVar219 ^ auVar255) & auVar218;
          uVar100 = iVar156 + 0x2204;
          uVar102 = iVar168 + 0x2204;
          uVar104 = iVar172 + 0x2204;
          uVar106 = iVar176 + 0x2204;
          auVar180 = NEON_umull(uVar251,0x811a811a811a811a,2);
          auVar109 = NEON_umull(uVar29,0x811a811a811a811a,2);
          uVar197 = auVar109._0_4_ >> 8;
          uVar209 = auVar109._4_4_ >> 8;
          uVar211 = auVar109._8_4_ >> 8;
          uVar213 = auVar109._12_4_ >> 8;
          uVar275 = auVar180._0_4_ >> 8;
          uVar278 = auVar180._4_4_ >> 8;
          uVar279 = auVar180._8_4_ >> 8;
          uVar280 = auVar180._12_4_ >> 8;
          iVar311 = -(uint)(iVar168 < -0x2204);
          iVar313 = -(uint)(iVar172 < -0x2204);
          iVar317 = -(uint)(iVar176 < -0x2204);
          uVar262 = uVar275 + (uVar250 >> 8);
          uVar265 = uVar278 + (uVar259 >> 8);
          uVar266 = uVar279 + (uVar260 >> 8);
          uVar267 = uVar280 + (uVar261 >> 8);
          uVar286 = uVar197 + (uVar153 >> 8);
          uVar153 = uVar209 + (uVar165 >> 8);
          uVar165 = uVar211 + (uVar169 >> 8);
          uVar169 = uVar213 + (uVar173 >> 8);
          auVar220._0_4_ = -(uint)(uVar100 < 0x4000);
          auVar220._4_4_ = -(uint)(uVar102 < 0x4000);
          auVar220._8_4_ = -(uint)(uVar104 < 0x4000);
          auVar220._12_4_ = -(uint)(uVar106 < 0x4000);
          auVar256._0_4_ = uVar100 >> 6;
          auVar256._4_4_ = uVar102 >> 6;
          auVar256._8_4_ = uVar104 >> 6;
          auVar256._12_4_ = uVar106 >> 6;
          auVar159[0] = ~-(iVar156 < -0x2204);
          auVar159._1_3_ = 0;
          auVar159[4] = ~(byte)iVar311;
          auVar159._5_2_ = 0;
          auVar159[7] = ~(byte)((uint)iVar311 >> 0x18);
          auVar159[8] = ~(byte)iVar313;
          auVar159[9] = ~(byte)((uint)iVar313 >> 8);
          auVar159[10] = ~(byte)((uint)iVar313 >> 0x10);
          auVar159[0xb] = ~(byte)((uint)iVar313 >> 0x18);
          auVar159[0xc] = ~(byte)iVar317;
          auVar159[0xd] = ~(byte)((uint)iVar317 >> 8);
          auVar159[0xe] = ~(byte)((uint)iVar317 >> 0x10);
          auVar159[0xf] = ~(byte)((uint)iVar317 >> 0x18);
          auVar159 = auVar159 ^ (auVar159 ^ auVar256) & auVar220;
          uVar250 = uVar286 - 0x4515;
          uVar259 = uVar153 - 0x4515;
          uVar260 = uVar165 - 0x4515;
          uVar261 = uVar169 - 0x4515;
          iVar311 = -(uint)(uVar153 < 0x4515);
          iVar313 = -(uint)(uVar165 < 0x4515);
          iVar317 = -(uint)(uVar169 < 0x4515);
          auVar109 = NEON_umull((ulong)CONCAT16(puVar55[7],
                                                (uint6)CONCAT14(puVar53[5],
                                                                (uint)CONCAT12(puVar51[3],
                                                                               (ushort)(byte)puVar49
                                                  [1]))),0x4a854a854a854a85,2);
          uVar153 = auVar109._0_4_;
          uVar165 = auVar109._4_4_;
          uVar169 = auVar109._8_4_;
          uVar173 = auVar109._12_4_;
          uVar100 = (uint)uVar9 + (uVar153 >> 8);
          uVar102 = (uint)auVar137._5_3_ + (uVar165 >> 8);
          uVar104 = (uint)uVar47 + (uVar169 >> 8);
          uVar106 = (uint)auVar137._13_3_ + (uVar173 >> 8);
          auVar309._0_8_ = CONCAT44(-(uint)(uVar259 < 0x4000),-(uint)(uVar250 < 0x4000));
          auVar309._8_4_ = -(uint)(uVar260 < 0x4000);
          auVar309._12_4_ = -(uint)(uVar261 < 0x4000);
          auVar257._0_4_ = uVar250 >> 6;
          auVar257._4_4_ = uVar259 >> 6;
          auVar257._8_4_ = uVar260 >> 6;
          auVar257._12_4_ = uVar261 >> 6;
          auVar215[0] = ~-(uVar286 < 0x4515);
          auVar215._1_3_ = 0;
          auVar215[4] = ~(byte)iVar311;
          auVar215._5_2_ = 0;
          auVar215[7] = ~(byte)((uint)iVar311 >> 0x18);
          auVar215[8] = ~(byte)iVar313;
          auVar215[9] = ~(byte)((uint)iVar313 >> 8);
          auVar215[10] = ~(byte)((uint)iVar313 >> 0x10);
          auVar215[0xb] = ~(byte)((uint)iVar313 >> 0x18);
          auVar215[0xc] = ~(byte)iVar317;
          auVar215[0xd] = ~(byte)((uint)iVar317 >> 8);
          auVar215[0xe] = ~(byte)((uint)iVar317 >> 0x10);
          auVar215[0xf] = ~(byte)((uint)iVar317 >> 0x18);
          auVar214._8_8_ = auVar309._8_8_;
          auVar214._0_8_ = auVar309._0_8_;
          auVar215 = auVar215 ^ (auVar215 ^ auVar257) & auVar214;
          uVar250 = uVar100 - 0x379a;
          uVar260 = uVar102 - 0x379a;
          uVar286 = uVar104 - 0x379a;
          uVar296 = uVar106 - 0x379a;
          iVar321 = -(uint)(uVar250 < 0x4000);
          iVar156 = -(uint)(uVar260 < 0x4000);
          iVar168 = -(uint)(uVar286 < 0x4000);
          iVar172 = -(uint)(uVar296 < 0x4000);
          uVar259 = uVar250 >> 6;
          uVar261 = uVar260 >> 6;
          uVar295 = uVar286 >> 6;
          auVar41[1] = (byte)(uVar297 >> 8) & (byte)((uint)iVar135 >> 8);
          auVar41[0] = (byte)uVar297 & (byte)iVar135 | ~-(uVar221 < 0x379a) & ~(byte)iVar135;
          auVar41[2] = (byte)(uVar297 >> 0x10) & (byte)((uint)iVar135 >> 0x10);
          auVar41[3] = (byte)(uVar194 >> 0x1e) & (byte)((uint)iVar135 >> 0x18);
          auVar41[4] = (byte)uVar304 & (byte)iVar146 | ~-(uVar223 < 0x379a) & ~(byte)iVar146;
          auVar41[5] = (byte)(uVar304 >> 8) & (byte)((uint)iVar146 >> 8);
          auVar41[6] = (byte)(uVar304 >> 0x10) & (byte)((uint)iVar146 >> 0x10);
          auVar41[7] = (byte)(uVar302 >> 0x1e) & (byte)((uint)iVar146 >> 0x18);
          auVar41[8] = (byte)uVar129 & (byte)iVar149 | ~-(uVar225 < 0x379a) & ~(byte)iVar149;
          auVar41[9] = (byte)(uVar129 >> 8) & (byte)((uint)iVar149 >> 8);
          auVar41[10] = (byte)(uVar129 >> 0x10) & (byte)((uint)iVar149 >> 0x10);
          auVar41[0xb] = (byte)(uVar306 >> 0x1e) & (byte)((uint)iVar149 >> 0x18);
          auVar41[0xc] = (byte)uVar132 & (byte)iVar152 | ~-(uVar227 < 0x379a) & ~(byte)iVar152;
          auVar41[0xd] = (byte)(uVar132 >> 8) & (byte)((uint)iVar152 >> 8);
          auVar41[0xe] = (byte)(uVar132 >> 0x10) & (byte)((uint)iVar152 >> 0x10);
          auVar41[0xf] = (byte)(uVar131 >> 0x1e) & (byte)((uint)iVar152 >> 0x18);
          auVar42[1] = (byte)(uVar144 >> 8) & (byte)((uint)iVar134 >> 8);
          auVar42[0] = (byte)uVar144 & (byte)iVar134 | ~-(uVar101 < 0x379a) & ~(byte)iVar134;
          auVar42[2] = (byte)(uVar144 >> 0x10) & (byte)((uint)iVar134 >> 0x10);
          auVar42[3] = (byte)(uVar133 >> 0x1e) & (byte)((uint)iVar134 >> 0x18);
          auVar42[4] = (byte)uVar150 & (byte)iVar145 | ~-(uVar103 < 0x379a) & ~(byte)iVar145;
          auVar42[5] = (byte)(uVar150 >> 8) & (byte)((uint)iVar145 >> 8);
          auVar42[6] = (byte)(uVar150 >> 0x10) & (byte)((uint)iVar145 >> 0x10);
          auVar42[7] = (byte)(uVar147 >> 0x1e) & (byte)((uint)iVar145 >> 0x18);
          auVar42[8] = (byte)uVar155 & (byte)iVar148 | ~-(uVar105 < 0x379a) & ~(byte)iVar148;
          auVar42[9] = (byte)(uVar155 >> 8) & (byte)((uint)iVar148 >> 8);
          auVar42[10] = (byte)(uVar155 >> 0x10) & (byte)((uint)iVar148 >> 0x10);
          auVar42[0xb] = (byte)(uVar154 >> 0x1e) & (byte)((uint)iVar148 >> 0x18);
          auVar42[0xc] = (byte)uVar167 & (byte)iVar151 | ~-(uVar107 < 0x379a) & ~(byte)iVar151;
          auVar42[0xd] = (byte)(uVar167 >> 8) & (byte)((uint)iVar151 >> 8);
          auVar42[0xe] = (byte)(uVar167 >> 0x10) & (byte)((uint)iVar151 >> 0x10);
          auVar42[0xf] = (byte)(uVar166 >> 0x1e) & (byte)((uint)iVar151 >> 0x18);
          auVar28[0xd] = (byte)((uVar193 >> 6) >> 8) & (byte)((uint)iVar319 >> 8);
          auVar28[0xc] = (byte)(uVar193 >> 6) & (byte)iVar319 |
                         ~-(uVar113 < 0x379a) & ~(byte)iVar319;
          auVar28[0xe] = (byte)((uint3)(uVar193 >> 0xe) >> 8) & (byte)((uint)iVar319 >> 0x10);
          auVar28[0xf] = (byte)(uVar193 >> 0x1e) & (byte)((uint)iVar319 >> 0x18);
          auVar28[1] = (byte)(uVar174 >> 8) & (byte)((uint)iVar308 >> 8);
          auVar28[0] = (byte)uVar174 & (byte)iVar308 | ~-(uVar108 < 0x379a) & ~(byte)iVar308;
          auVar28[2] = (byte)(uVar174 >> 0x10) & (byte)((uint)iVar308 >> 0x10);
          auVar28[3] = (byte)(uVar171 >> 0x1e) & (byte)((uint)iVar308 >> 0x18);
          auVar28[4] = (byte)uVar178 & (byte)iVar312 | ~-(uVar111 < 0x379a) & ~(byte)iVar312;
          auVar28[5] = (byte)(uVar178 >> 8) & (byte)((uint)iVar312 >> 8);
          auVar28[6] = (byte)(uVar178 >> 0x10) & (byte)((uint)iVar312 >> 0x10);
          auVar28[7] = (byte)(uVar177 >> 0x1e) & (byte)((uint)iVar312 >> 0x18);
          auVar28[8] = (byte)uVar190 & (byte)iVar314 | ~-(uVar112 < 0x379a) & ~(byte)iVar314;
          auVar28[9] = (byte)(uVar190 >> 8) & (byte)((uint)iVar314 >> 8);
          auVar28[10] = (byte)(uVar190 >> 0x10) & (byte)((uint)iVar314 >> 0x10);
          auVar28[0xb] = (byte)(uVar188 >> 0x1e) & (byte)((uint)iVar314 >> 0x18);
          uVar133 = uVar262 - 0x4515;
          uVar144 = uVar265 - 0x4515;
          uVar147 = uVar266 - 0x4515;
          uVar150 = uVar267 - 0x4515;
          iVar308 = -(uint)(uVar265 < 0x4515);
          iVar311 = -(uint)(uVar266 < 0x4515);
          iVar312 = -(uint)(uVar267 < 0x4515);
          iVar315 = (uVar114 >> 8) - iVar315;
          iVar318 = (uVar127 >> 8) - iVar318;
          iVar320 = (uVar128 >> 8) - iVar320;
          iVar322 = (uVar130 >> 8) - iVar322;
          auVar203._0_4_ = -(uint)(uVar133 < 0x4000);
          auVar203._4_4_ = -(uint)(uVar144 < 0x4000);
          auVar203._8_4_ = -(uint)(uVar147 < 0x4000);
          auVar203._12_4_ = -(uint)(uVar150 < 0x4000);
          auVar287._0_4_ = uVar133 >> 6;
          auVar287._4_4_ = uVar144 >> 6;
          auVar287._8_4_ = uVar147 >> 6;
          auVar287._12_4_ = uVar150 >> 6;
          auVar310[0] = ~-(uVar262 < 0x4515);
          auVar310._1_3_ = 0;
          auVar310[4] = ~(byte)iVar308;
          auVar310._5_2_ = 0;
          auVar310[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar310[8] = ~(byte)iVar311;
          auVar310[9] = ~(byte)((uint)iVar311 >> 8);
          auVar310[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar310[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar310[0xc] = ~(byte)iVar312;
          auVar310[0xd] = ~(byte)((uint)iVar312 >> 8);
          auVar310[0xe] = ~(byte)((uint)iVar312 >> 0x10);
          auVar310[0xf] = ~(byte)((uint)iVar312 >> 0x18);
          auVar310 = auVar310 ^ (auVar310 ^ auVar287) & auVar203;
          uVar133 = iVar315 + 0x2204;
          uVar144 = iVar318 + 0x2204;
          uVar147 = iVar320 + 0x2204;
          uVar150 = iVar322 + 0x2204;
          iVar308 = -(uint)(iVar318 < -0x2204);
          iVar311 = -(uint)(iVar320 < -0x2204);
          iVar312 = -(uint)(iVar322 < -0x2204);
          auVar204._0_4_ = -(uint)(uVar133 < 0x4000);
          auVar204._4_4_ = -(uint)(uVar144 < 0x4000);
          auVar204._8_4_ = -(uint)(uVar147 < 0x4000);
          auVar204._12_4_ = -(uint)(uVar150 < 0x4000);
          auVar288._0_4_ = uVar133 >> 6;
          auVar288._4_4_ = uVar144 >> 6;
          auVar288._8_4_ = uVar147 >> 6;
          auVar288._12_4_ = uVar150 >> 6;
          auVar316[0] = ~-(iVar315 < -0x2204);
          auVar316._1_3_ = 0;
          auVar316[4] = ~(byte)iVar308;
          auVar316._5_2_ = 0;
          auVar316[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar316[8] = ~(byte)iVar311;
          auVar316[9] = ~(byte)((uint)iVar311 >> 8);
          auVar316[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar316[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar316[0xc] = ~(byte)iVar312;
          auVar316[0xd] = ~(byte)((uint)iVar312 >> 8);
          auVar316[0xe] = ~(byte)((uint)iVar312 >> 0x10);
          auVar316[0xf] = ~(byte)((uint)iVar312 >> 0x18);
          auVar316 = auVar316 ^ (auVar316 ^ auVar288) & auVar204;
          iVar268 = (uVar298 >> 8) - iVar268;
          iVar272 = (uVar303 >> 8) - iVar272;
          iVar273 = (uVar305 >> 8) - iVar273;
          iVar274 = (uVar307 >> 8) - iVar274;
          iVar243 = (uVar153 >> 8) - iVar243;
          iVar247 = (uVar165 >> 8) - iVar247;
          iVar248 = (uVar169 >> 8) - iVar248;
          iVar249 = (uVar173 >> 8) - iVar249;
          uVar222 = uVar222 + (uVar153 >> 8);
          uVar224 = uVar224 + (uVar165 >> 8);
          uVar226 = uVar226 + (uVar169 >> 8);
          uVar228 = uVar228 + (uVar173 >> 8);
          uVar133 = iVar243 + 0x2204;
          uVar144 = iVar247 + 0x2204;
          uVar147 = iVar248 + 0x2204;
          uVar150 = iVar249 + 0x2204;
          iVar308 = -(uint)(iVar247 < -0x2204);
          iVar311 = -(uint)(iVar248 < -0x2204);
          iVar312 = -(uint)(iVar249 < -0x2204);
          uVar196 = uVar196 + (uVar114 >> 8);
          uVar208 = uVar208 + (uVar127 >> 8);
          uVar210 = uVar210 + (uVar128 >> 8);
          uVar212 = uVar212 + (uVar130 >> 8);
          auVar205._0_4_ = -(uint)(uVar133 < 0x4000);
          auVar205._4_4_ = -(uint)(uVar144 < 0x4000);
          auVar205._8_4_ = -(uint)(uVar147 < 0x4000);
          auVar205._12_4_ = -(uint)(uVar150 < 0x4000);
          auVar289._0_4_ = uVar133 >> 6;
          auVar289._4_4_ = uVar144 >> 6;
          auVar289._8_4_ = uVar147 >> 6;
          auVar289._12_4_ = uVar150 >> 6;
          auVar245[0] = ~-(iVar243 < -0x2204);
          auVar245._1_3_ = 0;
          auVar245[4] = ~(byte)iVar308;
          auVar245._5_2_ = 0;
          auVar245[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar245[8] = ~(byte)iVar311;
          auVar245[9] = ~(byte)((uint)iVar311 >> 8);
          auVar245[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar245[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar245[0xc] = ~(byte)iVar312;
          auVar245[0xd] = ~(byte)((uint)iVar312 >> 8);
          auVar245[0xe] = ~(byte)((uint)iVar312 >> 0x10);
          auVar245[0xf] = ~(byte)((uint)iVar312 >> 0x18);
          auVar245 = auVar245 ^ (auVar245 ^ auVar289) & auVar205;
          uVar114 = uVar196 - 0x4515;
          uVar127 = uVar208 - 0x4515;
          uVar128 = uVar210 - 0x4515;
          uVar130 = uVar212 - 0x4515;
          iVar308 = -(uint)(uVar208 < 0x4515);
          iVar311 = -(uint)(uVar210 < 0x4515);
          iVar312 = -(uint)(uVar212 < 0x4515);
          auVar206._0_4_ = -(uint)(uVar114 < 0x4000);
          auVar206._4_4_ = -(uint)(uVar127 < 0x4000);
          auVar206._8_4_ = -(uint)(uVar128 < 0x4000);
          auVar206._12_4_ = -(uint)(uVar130 < 0x4000);
          auVar290._0_4_ = uVar114 >> 6;
          auVar290._4_4_ = uVar127 >> 6;
          auVar290._8_4_ = uVar128 >> 6;
          auVar290._12_4_ = uVar130 >> 6;
          auVar139[0] = ~-(uVar196 < 0x4515);
          auVar139._1_3_ = 0;
          auVar139[4] = ~(byte)iVar308;
          auVar139._5_2_ = 0;
          auVar139[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar139[8] = ~(byte)iVar311;
          auVar139[9] = ~(byte)((uint)iVar311 >> 8);
          auVar139[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar139[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar139[0xc] = ~(byte)iVar312;
          auVar139[0xd] = ~(byte)((uint)iVar312 >> 8);
          auVar139[0xe] = ~(byte)((uint)iVar312 >> 0x10);
          auVar139[0xf] = ~(byte)((uint)iVar312 >> 0x18);
          auVar139 = auVar139 ^ (auVar139 ^ auVar290) & auVar206;
          uVar114 = uVar222 - 0x4515;
          uVar127 = uVar224 - 0x4515;
          uVar128 = uVar226 - 0x4515;
          uVar130 = uVar228 - 0x4515;
          iVar313 = -(uint)(uVar224 < 0x4515);
          iVar314 = -(uint)(uVar226 < 0x4515);
          iVar317 = -(uint)(uVar228 < 0x4515);
          iVar308 = -(uint)(uVar127 < 0x4000);
          iVar311 = -(uint)(uVar128 < 0x4000);
          iVar312 = -(uint)(uVar130 < 0x4000);
          auVar291._0_4_ = uVar114 >> 6;
          auVar291._4_4_ = uVar127 >> 6;
          auVar291._8_4_ = uVar128 >> 6;
          auVar291._12_4_ = uVar130 >> 6;
          auVar207[0] = ~-(uVar222 < 0x4515);
          auVar207._1_3_ = 0;
          auVar207[4] = ~(byte)iVar313;
          auVar207._5_2_ = 0;
          auVar207[7] = ~(byte)((uint)iVar313 >> 0x18);
          auVar207[8] = ~(byte)iVar314;
          auVar207[9] = ~(byte)((uint)iVar314 >> 8);
          auVar207[10] = ~(byte)((uint)iVar314 >> 0x10);
          auVar207[0xb] = ~(byte)((uint)iVar314 >> 0x18);
          auVar207[0xc] = ~(byte)iVar317;
          auVar207[0xd] = ~(byte)((uint)iVar317 >> 8);
          auVar207[0xe] = ~(byte)((uint)iVar317 >> 0x10);
          auVar207[0xf] = ~(byte)((uint)iVar317 >> 0x18);
          auVar109._1_3_ = 0;
          auVar109[0] = -(uVar114 < 0x4000);
          auVar109[4] = (char)iVar308;
          auVar109._5_2_ = 0;
          auVar109[7] = (char)((uint)iVar308 >> 0x18);
          auVar109[8] = (char)iVar311;
          auVar109[9] = (char)((uint)iVar311 >> 8);
          auVar109[10] = (char)((uint)iVar311 >> 0x10);
          auVar109[0xb] = (char)((uint)iVar311 >> 0x18);
          auVar109[0xc] = (char)iVar312;
          auVar109[0xd] = (char)((uint)iVar312 >> 8);
          auVar109[0xe] = (char)((uint)iVar312 >> 0x10);
          auVar109[0xf] = (char)((uint)iVar312 >> 0x18);
          auVar207 = auVar207 ^ (auVar207 ^ auVar291) & auVar109;
          uVar114 = iVar268 + 0x2204;
          uVar127 = iVar272 + 0x2204;
          uVar128 = iVar273 + 0x2204;
          uVar130 = iVar274 + 0x2204;
          iVar313 = -(uint)(iVar272 < -0x2204);
          iVar314 = -(uint)(iVar273 < -0x2204);
          iVar317 = -(uint)(iVar274 < -0x2204);
          iVar308 = -(uint)(uVar127 < 0x4000);
          iVar311 = -(uint)(uVar128 < 0x4000);
          iVar312 = -(uint)(uVar130 < 0x4000);
          auVar292._0_4_ = uVar114 >> 6;
          auVar292._4_4_ = uVar127 >> 6;
          auVar292._8_4_ = uVar128 >> 6;
          auVar292._12_4_ = uVar130 >> 6;
          auVar270[0] = ~-(iVar268 < -0x2204);
          auVar270._1_3_ = 0;
          auVar270[4] = ~(byte)iVar313;
          auVar270._5_2_ = 0;
          auVar270[7] = ~(byte)((uint)iVar313 >> 0x18);
          auVar270[8] = ~(byte)iVar314;
          auVar270[9] = ~(byte)((uint)iVar314 >> 8);
          auVar270[10] = ~(byte)((uint)iVar314 >> 0x10);
          auVar270[0xb] = ~(byte)((uint)iVar314 >> 0x18);
          auVar270[0xc] = ~(byte)iVar317;
          auVar270[0xd] = ~(byte)((uint)iVar317 >> 8);
          auVar270[0xe] = ~(byte)((uint)iVar317 >> 0x10);
          auVar270[0xf] = ~(byte)((uint)iVar317 >> 0x18);
          auVar180[6] = 0;
          auVar180._0_6_ = (uint6)CONCAT14((char)iVar308,-(uint)(uVar114 < 0x4000)) & 0xffff0000ffff
          ;
          auVar180[7] = (char)((uint)iVar308 >> 0x18);
          auVar180[8] = (char)iVar311;
          auVar180[9] = (char)((uint)iVar311 >> 8);
          auVar180[10] = (char)((uint)iVar311 >> 0x10);
          auVar180[0xb] = (char)((uint)iVar311 >> 0x18);
          auVar180[0xc] = (char)iVar312;
          auVar180[0xd] = (char)((uint)iVar312 >> 8);
          auVar180[0xe] = (char)((uint)iVar312 >> 0x10);
          auVar180[0xf] = (char)((uint)iVar312 >> 0x18);
          auVar270 = auVar270 ^ (auVar270 ^ auVar292) & auVar180;
          iVar281 = (uVar170 >> 8) - iVar281;
          iVar283 = (uVar175 >> 8) - iVar283;
          iVar284 = (uVar187 >> 8) - iVar284;
          iVar285 = (uVar191 >> 8) - iVar285;
          uVar114 = iVar281 + 0x2204;
          uVar127 = iVar283 + 0x2204;
          uVar128 = iVar284 + 0x2204;
          uVar130 = iVar285 + 0x2204;
          iVar308 = -(uint)(iVar283 < -0x2204);
          iVar311 = -(uint)(iVar284 < -0x2204);
          iVar312 = -(uint)(iVar285 < -0x2204);
          uVar197 = uVar197 + (uVar298 >> 8);
          uVar209 = uVar209 + (uVar303 >> 8);
          uVar211 = uVar211 + (uVar305 >> 8);
          uVar213 = uVar213 + (uVar307 >> 8);
          auVar299._0_4_ = -(uint)(uVar114 < 0x4000);
          auVar299._4_4_ = -(uint)(uVar127 < 0x4000);
          auVar299._8_4_ = -(uint)(uVar128 < 0x4000);
          auVar299._12_4_ = -(uint)(uVar130 < 0x4000);
          auVar293._0_4_ = uVar114 >> 6;
          auVar293._4_4_ = uVar127 >> 6;
          auVar293._8_4_ = uVar128 >> 6;
          auVar293._12_4_ = uVar130 >> 6;
          auVar230[0] = ~-(iVar281 < -0x2204);
          auVar230._1_3_ = 0;
          auVar230[4] = ~(byte)iVar308;
          auVar230._5_2_ = 0;
          auVar230[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar230[8] = ~(byte)iVar311;
          auVar230[9] = ~(byte)((uint)iVar311 >> 8);
          auVar230[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar230[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar230[0xc] = ~(byte)iVar312;
          auVar230[0xd] = ~(byte)((uint)iVar312 >> 8);
          auVar230[0xe] = ~(byte)((uint)iVar312 >> 0x10);
          auVar230[0xf] = ~(byte)((uint)iVar312 >> 0x18);
          auVar230 = auVar230 ^ (auVar230 ^ auVar293) & auVar299;
          uVar114 = uVar197 - 0x4515;
          uVar127 = uVar209 - 0x4515;
          uVar128 = uVar211 - 0x4515;
          uVar130 = uVar213 - 0x4515;
          iVar308 = -(uint)(uVar209 < 0x4515);
          iVar311 = -(uint)(uVar211 < 0x4515);
          iVar312 = -(uint)(uVar213 < 0x4515);
          auVar300._0_4_ = -(uint)(uVar114 < 0x4000);
          auVar300._4_4_ = -(uint)(uVar127 < 0x4000);
          auVar300._8_4_ = -(uint)(uVar128 < 0x4000);
          auVar300._12_4_ = -(uint)(uVar130 < 0x4000);
          auVar294._0_4_ = uVar114 >> 6;
          auVar294._4_4_ = uVar127 >> 6;
          auVar294._8_4_ = uVar128 >> 6;
          auVar294._12_4_ = uVar130 >> 6;
          auVar182[0] = ~-(uVar197 < 0x4515);
          auVar182._1_3_ = 0;
          auVar182[4] = ~(byte)iVar308;
          auVar182._5_2_ = 0;
          auVar182[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar182[8] = ~(byte)iVar311;
          auVar182[9] = ~(byte)((uint)iVar311 >> 8);
          auVar182[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar182[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar182[0xc] = ~(byte)iVar312;
          auVar182[0xd] = ~(byte)((uint)iVar312 >> 8);
          auVar182[0xe] = ~(byte)((uint)iVar312 >> 0x10);
          auVar182[0xf] = ~(byte)((uint)iVar312 >> 0x18);
          auVar182 = auVar182 ^ (auVar182 ^ auVar294) & auVar300;
          auVar44._8_8_ = 0x3c3834302c282420;
          auVar44._0_8_ = 0x1c1814100c080400;
          auVar21[1] = (byte)(uVar259 >> 8) & (byte)((uint)iVar321 >> 8);
          auVar21[0] = (byte)uVar259 & (byte)iVar321 | ~-(uVar100 < 0x379a) & ~(byte)iVar321;
          auVar21[2] = (byte)(uVar259 >> 0x10) & (byte)((uint)iVar321 >> 0x10);
          auVar21[3] = (byte)(uVar250 >> 0x1e) & (byte)((uint)iVar321 >> 0x18);
          auVar21[4] = (byte)uVar261 & (byte)iVar156 | ~-(uVar102 < 0x379a) & ~(byte)iVar156;
          auVar21[5] = (byte)(uVar261 >> 8) & (byte)((uint)iVar156 >> 8);
          auVar21[6] = (byte)(uVar261 >> 0x10) & (byte)((uint)iVar156 >> 0x10);
          auVar21[7] = (byte)(uVar260 >> 0x1e) & (byte)((uint)iVar156 >> 0x18);
          auVar21[8] = (byte)uVar295 & (byte)iVar168 | ~-(uVar104 < 0x379a) & ~(byte)iVar168;
          auVar21[9] = (byte)(uVar295 >> 8) & (byte)((uint)iVar168 >> 8);
          auVar21[10] = (byte)(uVar295 >> 0x10) & (byte)((uint)iVar168 >> 0x10);
          auVar21[0xb] = (byte)(uVar286 >> 0x1e) & (byte)((uint)iVar168 >> 0x18);
          auVar21[0xc] = (byte)(uVar296 >> 6) & (byte)iVar172 |
                         ~-(uVar106 < 0x379a) & ~(byte)iVar172;
          auVar21[0xd] = (byte)((uVar296 >> 6) >> 8) & (byte)((uint)iVar172 >> 8);
          auVar21[0xe] = (byte)((uint3)(uVar296 >> 0xe) >> 8) & (byte)((uint)iVar172 >> 0x10);
          auVar21[0xf] = (byte)(uVar296 >> 0x1e) & (byte)((uint)iVar172 >> 0x18);
          auVar301 = a64_TBL(ZEXT816(0),auVar21,auVar41,auVar42,auVar28,auVar44);
          uVar275 = uVar275 + (uVar170 >> 8);
          uVar278 = uVar278 + (uVar175 >> 8);
          uVar279 = uVar279 + (uVar187 >> 8);
          uVar280 = uVar280 + (uVar191 >> 8);
          uVar114 = uVar275 - 0x4515;
          uVar127 = uVar278 - 0x4515;
          uVar128 = uVar279 - 0x4515;
          uVar130 = uVar280 - 0x4515;
          iVar308 = -(uint)(uVar278 < 0x4515);
          iVar311 = -(uint)(uVar279 < 0x4515);
          iVar312 = -(uint)(uVar280 < 0x4515);
          uStack_e0 = auVar97[0];
          uStack_dc = auVar97[4];
          uStack_d8 = auVar97[8];
          uStack_d4 = auVar97[0xc];
          auVar110._0_4_ = -(uint)(uVar114 < 0x4000);
          auVar110._4_4_ = -(uint)(uVar127 < 0x4000);
          auVar110._8_4_ = -(uint)(uVar128 < 0x4000);
          auVar110._12_4_ = -(uint)(uVar130 < 0x4000);
          auVar87._0_4_ = uVar114 >> 6;
          auVar87._4_4_ = uVar127 >> 6;
          auVar87._8_4_ = uVar128 >> 6;
          auVar87._12_4_ = uVar130 >> 6;
          auVar98[0] = ~-(uVar275 < 0x4515);
          auVar98._1_3_ = 0;
          auVar98[4] = ~(byte)iVar308;
          auVar98._5_2_ = 0;
          auVar98[7] = ~(byte)((uint)iVar308 >> 0x18);
          auVar98[8] = ~(byte)iVar311;
          auVar98[9] = ~(byte)((uint)iVar311 >> 8);
          auVar98[10] = ~(byte)((uint)iVar311 >> 0x10);
          auVar98[0xb] = ~(byte)((uint)iVar311 >> 0x18);
          auVar98[0xc] = ~(byte)iVar312;
          auVar98[0xd] = ~(byte)((uint)iVar312 >> 8);
          auVar98[0xe] = ~(byte)((uint)iVar312 >> 0x10);
          auVar98[0xf] = ~(byte)((uint)iVar312 >> 0x18);
          auVar87 = auVar87 ^ (auVar87 ^ auVar98) & ~auVar110;
          auVar46[8] = 0xff;
          auVar46._0_8_ = 0xffffffffffffffff;
          auVar46._9_7_ = 0xffffffffffffff;
          auVar45[8] = 0xff;
          auVar45._0_8_ = 0xffffffffffffffff;
          auVar45._9_7_ = 0xffffffffffffff;
          auVar15[8] = 0xff;
          auVar15._0_8_ = 0xffffffffffffffff;
          auVar229._8_4_ = 0xffffffff;
          auVar229._0_8_ = 0x18100504ffffffff;
          auVar157._8_4_ = 0xffffffff;
          auVar157._0_8_ = 0x18100504ffffffff;
          auVar38._8_8_ = 0xffff1101ffffffff;
          auVar38._0_8_ = 0xffff1000ffffffff;
          auVar109 = a64_TBL(ZEXT816(0),auVar45,auVar301,auVar38);
          auVar118[1] = auVar245[4];
          auVar118[0] = auVar245[0];
          auVar118[2] = auVar245[8];
          auVar118[3] = auVar245[0xc];
          auVar118[4] = auVar316[0];
          auVar118[5] = auVar316[4];
          auVar118[6] = auVar316[8];
          auVar118[7] = auVar316[0xc];
          auVar118[8] = auVar207[0];
          auVar118[9] = auVar207[4];
          auVar118[10] = auVar207[8];
          auVar118[0xb] = auVar207[0xc];
          auVar118[0xc] = auVar139[0];
          auVar118[0xd] = auVar139[4];
          auVar118[0xe] = auVar139[8];
          auVar118[0xf] = auVar139[0xc];
          auVar157._12_4_ = 0x19110d0c;
          auVar157 = a64_TBL(ZEXT816(0),auVar109,auVar118,auVar157);
          auVar37._8_8_ = 0xffffffffffff1101;
          auVar37._0_8_ = 0xffffffffffff1000;
          auVar15[9] = 0xff;
          auVar15[10] = 0xff;
          auVar15[0xb] = 0xff;
          auVar15[0xc] = 0xff;
          auVar15[0xd] = 0xff;
          auVar15[0xe] = 0xff;
          auVar15[0xf] = 0xff;
          auVar109 = a64_TBL(ZEXT816(0),auVar15,auVar136,auVar37);
          auVar99[1] = auVar237[4];
          auVar99[0] = auVar237[0];
          auVar99[2] = auVar237[8];
          auVar99[3] = auVar237[0xc];
          auVar99[4] = uStack_e0;
          auVar99[5] = uStack_dc;
          auVar99[6] = uStack_d8;
          auVar99[7] = uStack_d4;
          auVar99[8] = auVar276[0];
          auVar99[9] = auVar276[4];
          auVar99[10] = auVar276[8];
          auVar99[0xb] = auVar276[0xc];
          auVar99[0xc] = auVar117[0];
          auVar99[0xd] = auVar117[4];
          auVar99[0xe] = auVar117[8];
          auVar99[0xf] = auVar117[0xc];
          auVar17[8] = 0xff;
          auVar17._0_8_ = 0x1a120504ffffffff;
          auVar16[8] = 0xff;
          auVar16._0_8_ = 0x1a120504ffffffff;
          auVar36._8_8_ = 0xffff1303ffffffff;
          auVar36._0_8_ = 0xffff1202ffffffff;
          auVar180 = a64_TBL(ZEXT816(0),auVar45,auVar301,auVar36);
          auVar16[9] = 0xff;
          auVar16[10] = 0xff;
          auVar16[0xb] = 0xff;
          auVar16[0xc] = 0xc;
          auVar16[0xd] = 0xd;
          auVar16[0xe] = 0x13;
          auVar16[0xf] = 0x1b;
          auVar180 = a64_TBL(ZEXT816(0),auVar180,auVar118,auVar16);
          auVar23[8] = 0xff;
          auVar23._0_8_ = 0x1c140504ffffffff;
          auVar22[8] = 0xff;
          auVar22._0_8_ = 0x1c140504ffffffff;
          auVar35._8_8_ = 0xffff1505ffffffff;
          auVar35._0_8_ = 0xffff1404ffffffff;
          auVar137 = a64_TBL(ZEXT816(0),auVar45,auVar301,auVar35);
          auVar22[9] = 0xff;
          auVar22[10] = 0xff;
          auVar22[0xb] = 0xff;
          auVar22[0xc] = 0xc;
          auVar22[0xd] = 0xd;
          auVar22[0xe] = 0x15;
          auVar22[0xf] = 0x1d;
          auVar160 = a64_TBL(ZEXT816(0),auVar137,auVar118,auVar22);
          auVar32._8_8_ = 0xffff1909ffffffff;
          auVar32._0_8_ = 0xffff1808ffffffff;
          auVar137 = a64_TBL(ZEXT816(0),auVar45,auVar301,auVar32);
          auVar246[1] = auVar230[4];
          auVar246[0] = auVar230[0];
          auVar246[2] = auVar230[8];
          auVar246[3] = auVar230[0xc];
          auVar246[4] = auVar270[0];
          auVar246[5] = auVar270[4];
          auVar246[6] = auVar270[8];
          auVar246[7] = auVar270[0xc];
          auVar246[8] = auVar87[0];
          auVar246[9] = auVar87[4];
          auVar246[10] = auVar87[8];
          auVar246[0xb] = auVar87[0xc];
          auVar246[0xc] = auVar182[0];
          auVar246[0xd] = auVar182[4];
          auVar246[0xe] = auVar182[8];
          auVar246[0xf] = auVar182[0xc];
          auVar229._12_4_ = 0x19110d0c;
          auVar229 = a64_TBL(ZEXT816(0),auVar137,auVar246,auVar229);
          auVar238._8_4_ = 0xffff1909;
          auVar238._0_8_ = 0xffffffffffff1808;
          auVar238._12_4_ = 0xffffffff;
          auVar271 = a64_TBL(ZEXT816(0),auVar46,auVar136,auVar238);
          auVar239._8_4_ = 0xffffffff;
          auVar239._0_8_ = 0xffff1606ffffffff;
          auVar239._12_4_ = 0xffff1707;
          auVar137 = a64_TBL(ZEXT816(0),auVar45,auVar301,auVar239);
          auVar277[1] = auVar159[4];
          auVar277[0] = auVar159[0];
          auVar277[2] = auVar159[8];
          auVar277[3] = auVar159[0xc];
          auVar277[4] = auVar219[0];
          auVar277[5] = auVar219[4];
          auVar277[6] = auVar219[8];
          auVar277[7] = auVar219[0xc];
          auVar277[8] = auVar310[0];
          auVar277[9] = auVar310[4];
          auVar277[10] = auVar310[8];
          auVar277[0xb] = auVar310[0xc];
          auVar277[0xc] = auVar215[0];
          auVar277[0xd] = auVar215[4];
          auVar277[0xe] = auVar215[8];
          auVar277[0xf] = auVar215[0xc];
          auVar258._8_4_ = 0xffffffff;
          auVar258._0_8_ = 0xffff1a0affffffff;
          auVar258._12_4_ = 0xffff1b0b;
          auVar238 = a64_TBL(ZEXT816(0),auVar45,auVar301,auVar258);
          auVar17[9] = 0xff;
          auVar17[10] = 0xff;
          auVar17[0xb] = 0xff;
          auVar17[0xc] = 0xc;
          auVar17[0xd] = 0xd;
          auVar17[0xe] = 0x13;
          auVar17[0xf] = 0x1b;
          auVar238 = a64_TBL(ZEXT816(0),auVar238,auVar246,auVar17);
          auVar264._8_4_ = 0xffffffff;
          auVar264._0_8_ = 0xffff1c0cffffffff;
          auVar264._12_4_ = 0xffff1d0d;
          auVar239 = a64_TBL(ZEXT816(0),auVar45,auVar301,auVar264);
          auVar23[9] = 0xff;
          auVar23[10] = 0xff;
          auVar23[0xb] = 0xff;
          auVar23[0xc] = 0xc;
          auVar23[0xd] = 0xd;
          auVar23[0xe] = 0x15;
          auVar23[0xf] = 0x1d;
          auVar258 = a64_TBL(ZEXT816(0),auVar239,auVar246,auVar23);
          auVar11._8_4_ = 0xffffffff;
          auVar11._0_8_ = 0xffff1e0effffffff;
          auVar11._12_4_ = 0xffff1f0f;
          auVar239 = a64_TBL(ZEXT816(0),auVar45,auVar301,auVar11);
          auVar12._8_4_ = 0x19110908;
          auVar12._0_8_ = 0xffffffff18100100;
          auVar301._8_4_ = 0x19110908;
          auVar301._0_8_ = 0xffffffff18100100;
          auVar301._12_4_ = 0xffffffff;
          auVar109 = a64_TBL(ZEXT816(0),auVar109,auVar99,auVar301);
          auVar109 = NEON_rev64(auVar109,4);
          auVar140._4_12_ = auVar157._4_12_;
          auVar140._0_4_ = auVar109._4_4_;
          auVar142._12_4_ = auVar157._12_4_;
          auVar142._0_8_ = auVar140._0_8_;
          auVar142._8_4_ = auVar109._12_4_;
          auVar141._8_8_ = auVar142._8_8_;
          auVar141._0_8_ = CONCAT44(auVar157._4_4_,auVar109._4_4_);
          auVar143._0_12_ = auVar141._0_12_;
          auVar143._12_4_ = auVar142._12_4_;
          auVar19[8] = 8;
          auVar19._0_8_ = 0xffffffff1a120100;
          auVar18[8] = 8;
          auVar18._0_8_ = 0xffffffff1a120100;
          auVar24[8] = 3;
          auVar24._0_8_ = 0xffffffffffff1202;
          auVar24[9] = 0x13;
          auVar24[10] = 0xff;
          auVar24[0xb] = 0xff;
          auVar24[0xc] = 0xff;
          auVar24[0xd] = 0xff;
          auVar24[0xe] = 0xff;
          auVar24[0xf] = 0xff;
          auVar109 = a64_TBL(ZEXT816(0),auVar46,auVar136,auVar24);
          auVar18[9] = 9;
          auVar18[10] = 0x13;
          auVar18[0xb] = 0x1b;
          auVar18[0xc] = 0xff;
          auVar18[0xd] = 0xff;
          auVar18[0xe] = 0xff;
          auVar18[0xf] = 0xff;
          auVar264 = a64_TBL(ZEXT816(0),auVar109,auVar99,auVar18);
          auVar25[8] = 5;
          auVar25._0_8_ = 0xffffffffffff1404;
          auVar25[9] = 0x15;
          auVar25[10] = 0xff;
          auVar25[0xb] = 0xff;
          auVar25[0xc] = 0xff;
          auVar25[0xd] = 0xff;
          auVar25[0xe] = 0xff;
          auVar25[0xf] = 0xff;
          auVar109 = a64_TBL(ZEXT816(0),auVar46,auVar136,auVar25);
          auVar27[8] = 0xff;
          auVar27._0_8_ = 0x1e160504ffffffff;
          auVar26[8] = 0xff;
          auVar26._0_8_ = 0x1e160504ffffffff;
          auVar26[9] = 0xff;
          auVar26[10] = 0xff;
          auVar26[0xb] = 0xff;
          auVar26[0xc] = 0xc;
          auVar26[0xd] = 0xd;
          auVar26[0xe] = 0x17;
          auVar26[0xf] = 0x1f;
          auVar137 = a64_TBL(ZEXT816(0),auVar137,auVar118,auVar26);
          auVar12._12_4_ = 0xffffffff;
          auVar157 = a64_TBL(ZEXT816(0),auVar271,auVar277,auVar12);
          auVar157 = NEON_rev64(auVar157,4);
          auVar119._4_12_ = auVar157._4_12_;
          auVar119._0_4_ = auVar157._4_4_;
          auVar121._0_8_ = auVar119._0_8_;
          auVar121._8_4_ = auVar157._12_4_;
          auVar121._12_4_ = auVar157._12_4_;
          auVar120._8_8_ = auVar121._8_8_;
          auVar120._0_8_ = CONCAT44(auVar229._4_4_,auVar157._4_4_);
          auVar122._0_12_ = auVar120._0_12_;
          auVar122._12_4_ = auVar229._12_4_;
          auVar31._8_8_ = 0xffffffffffff1b0b;
          auVar31._0_8_ = 0xffffffffffff1a0a;
          auVar157 = a64_TBL(ZEXT816(0),auVar46,auVar136,auVar31);
          auVar19[9] = 9;
          auVar19[10] = 0x13;
          auVar19[0xb] = 0x1b;
          auVar19[0xc] = 0xff;
          auVar19[0xd] = 0xff;
          auVar19[0xe] = 0xff;
          auVar19[0xf] = 0xff;
          auVar157 = a64_TBL(ZEXT816(0),auVar157,auVar277,auVar19);
          auVar157 = NEON_rev64(auVar157,4);
          auVar183._4_12_ = auVar157._4_12_;
          auVar183._0_4_ = auVar157._4_4_;
          auVar185._0_8_ = auVar183._0_8_;
          auVar185._8_4_ = auVar157._12_4_;
          auVar185._12_4_ = auVar157._12_4_;
          auVar184._8_8_ = auVar185._8_8_;
          auVar184._0_8_ = CONCAT44(auVar238._4_4_,auVar157._4_4_);
          auVar186._0_12_ = auVar184._0_12_;
          auVar186._12_4_ = auVar238._12_4_;
          auVar13._8_4_ = 0x1d150908;
          auVar13._0_8_ = 0xffffffff1c140100;
          auVar271._8_4_ = 0x1d150908;
          auVar271._0_8_ = 0xffffffff1c140100;
          auVar271._12_4_ = 0xffffffff;
          auVar109 = a64_TBL(ZEXT816(0),auVar109,auVar99,auVar271);
          auVar109 = NEON_rev64(auVar109,4);
          auVar20[8] = 0xd;
          auVar20._0_8_ = 0xffffffffffff1c0c;
          auVar20[9] = 0x1d;
          auVar20[10] = 0xff;
          auVar20[0xb] = 0xff;
          auVar20[0xc] = 0xff;
          auVar20[0xd] = 0xff;
          auVar20[0xe] = 0xff;
          auVar20[0xf] = 0xff;
          auVar157 = a64_TBL(ZEXT816(0),auVar46,auVar136,auVar20);
          auVar161._4_12_ = auVar160._4_12_;
          auVar161._0_4_ = auVar109._4_4_;
          auVar163._12_4_ = auVar160._12_4_;
          auVar163._0_8_ = auVar161._0_8_;
          auVar163._8_4_ = auVar109._12_4_;
          auVar162._8_8_ = auVar163._8_8_;
          auVar162._0_8_ = CONCAT44(auVar160._4_4_,auVar109._4_4_);
          auVar164._0_12_ = auVar162._0_12_;
          auVar164._12_4_ = auVar163._12_4_;
          auVar13._12_4_ = 0xffffffff;
          auVar109 = a64_TBL(ZEXT816(0),auVar157,auVar277,auVar13);
          auVar109 = NEON_rev64(auVar109,4);
          auVar231._4_12_ = auVar109._4_12_;
          auVar231._0_4_ = auVar109._4_4_;
          auVar233._0_8_ = auVar231._0_8_;
          auVar233._8_4_ = auVar109._12_4_;
          auVar233._12_4_ = auVar109._12_4_;
          auVar232._8_8_ = auVar233._8_8_;
          auVar232._0_8_ = CONCAT44(auVar258._4_4_,auVar109._4_4_);
          auVar234._0_12_ = auVar232._0_12_;
          auVar234._12_4_ = auVar258._12_4_;
          auVar27[9] = 0xff;
          auVar27[10] = 0xff;
          auVar27[0xb] = 0xff;
          auVar27[0xc] = 0xc;
          auVar27[0xd] = 0xd;
          auVar27[0xe] = 0x17;
          auVar27[0xf] = 0x1f;
          auVar157 = a64_TBL(ZEXT816(0),auVar239,auVar246,auVar27);
          *(long *)(pauVar82[4] + 8) = auVar122._8_8_;
          *(undefined8 *)pauVar82[4] = auVar120._0_8_;
          *(long *)(pauVar82[5] + 8) = auVar186._8_8_;
          *(undefined8 *)pauVar82[5] = auVar184._0_8_;
          auVar30._8_8_ = 0xffffffffffff1f0f;
          auVar30._0_8_ = 0xffffffffffff1e0e;
          auVar109 = a64_TBL(ZEXT816(0),auVar46,auVar136,auVar30);
          auVar33._8_8_ = 0xffffffff1f170908;
          auVar33._0_8_ = 0xffffffff1e160100;
          auVar109 = a64_TBL(ZEXT816(0),auVar109,auVar277,auVar33);
          auVar109 = NEON_rev64(auVar109,4);
          auVar123._4_12_ = auVar109._4_12_;
          auVar123._0_4_ = auVar109._4_4_;
          auVar125._0_8_ = auVar123._0_8_;
          auVar125._8_4_ = auVar109._12_4_;
          auVar125._12_4_ = auVar109._12_4_;
          auVar124._8_8_ = auVar125._8_8_;
          auVar124._0_8_ = CONCAT44(auVar157._4_4_,auVar109._4_4_);
          auVar126._0_12_ = auVar124._0_12_;
          auVar126._12_4_ = auVar157._12_4_;
          *(long *)(pauVar82[6] + 8) = auVar234._8_8_;
          *(undefined8 *)pauVar82[6] = auVar232._0_8_;
          *(long *)(pauVar82[7] + 8) = auVar126._8_8_;
          *(undefined8 *)pauVar82[7] = auVar124._0_8_;
          auVar34._8_8_ = 0xffffffffffff1707;
          auVar34._0_8_ = 0xffffffffffff1606;
          auVar109 = a64_TBL(ZEXT816(0),auVar46,auVar136,auVar34);
          auVar109 = a64_TBL(ZEXT816(0),auVar109,auVar99,auVar33);
          auVar109 = NEON_rev64(auVar109,4);
          auVar88._4_12_ = auVar109._4_12_;
          auVar88._0_4_ = auVar109._4_4_;
          auVar90._0_8_ = auVar88._0_8_;
          auVar90._8_4_ = auVar109._12_4_;
          auVar90._12_4_ = auVar109._12_4_;
          auVar89._8_8_ = auVar90._8_8_;
          auVar89._0_8_ = CONCAT44(auVar137._4_4_,auVar109._4_4_);
          auVar91._0_12_ = auVar89._0_12_;
          auVar91._12_4_ = auVar137._12_4_;
          *(long *)(pauVar82[2] + 8) = auVar164._8_8_;
          *(undefined8 *)pauVar82[2] = auVar162._0_8_;
          *(long *)(pauVar82[3] + 8) = auVar91._8_8_;
          *(undefined8 *)pauVar82[3] = auVar89._0_8_;
          auVar109 = NEON_rev64(auVar264,4);
          auVar92._4_12_ = auVar109._4_12_;
          auVar92._0_4_ = auVar109._4_4_;
          auVar94._0_8_ = auVar92._0_8_;
          auVar94._8_4_ = auVar109._12_4_;
          auVar94._12_4_ = auVar109._12_4_;
          auVar93._8_8_ = auVar94._8_8_;
          auVar93._0_8_ = CONCAT44(auVar180._4_4_,auVar109._4_4_);
          auVar95._0_12_ = auVar93._0_12_;
          auVar95._12_4_ = auVar180._12_4_;
          *(long *)(*pauVar82 + 8) = auVar143._8_8_;
          *(undefined8 *)*pauVar82 = auVar141._0_8_;
          *(long *)(pauVar82[1] + 8) = auVar95._8_8_;
          *(undefined8 *)pauVar82[1] = auVar93._0_8_;
          uVar84 = uVar84 - 0x10;
          param_2 = param_2 + 1;
          param_3 = param_3 + 1;
          pauVar82 = pauVar82 + 8;
        } while (uVar84 != 0);
        param_1 = pauVar1;
        param_2 = pauVar80;
        param_3 = pauVar81;
        param_4 = (undefined1 (*) [16])(*param_4 + uVar86 * 8);
        if (uVar2 == uVar86) goto joined_r0x00236c24;
      }
    }
    do {
      bVar6 = (*param_1)[0];
      bVar7 = (*param_2)[0];
      bVar8 = (*param_3)[0];
      (*param_4)[0] = 0xff;
      uVar128 = (uint)bVar6 * 0x4a85 >> 8;
      uVar114 = uVar128 + ((uint)bVar8 * 0x6625 >> 8);
      uVar127 = uVar114 - 0x379a;
      uVar4 = 0;
      if (0x3799 < uVar114) {
        uVar4 = 0xff;
      }
      uVar85 = (char)(uVar127 >> 6);
      if (0x3fff < uVar127) {
        uVar85 = uVar4;
      }
      (*param_4)[1] = uVar85;
      iVar308 = uVar128 - (((uint)bVar7 * 0x1913 >> 8) + ((uint)bVar8 * 0x3408 >> 8));
      uVar114 = iVar308 + 0x2204;
      uVar85 = 0xff;
      uVar4 = 0;
      if (-0x2205 < iVar308) {
        uVar4 = 0xff;
      }
      uVar5 = (char)(uVar114 >> 6);
      if (0x3fff < uVar114) {
        uVar5 = uVar4;
      }
      (*param_4)[2] = uVar5;
      uVar128 = uVar128 + ((uint)bVar7 * 0x811a >> 8);
      uVar114 = uVar128 - 0x4515;
      uVar4 = 0;
      if (0x4514 < uVar128) {
        uVar4 = uVar85;
      }
      uVar5 = (char)(uVar114 >> 6);
      if (0x3fff < uVar114) {
        uVar5 = uVar4;
      }
      (*param_4)[3] = uVar5;
      bVar8 = (*param_1)[1];
      pauVar80 = (undefined1 (*) [16])(*param_2 + 1);
      bVar6 = (*param_2)[0];
      pauVar81 = (undefined1 (*) [16])(*param_3 + 1);
      bVar7 = (*param_3)[0];
      (*param_4)[4] = 0xff;
      uVar128 = (uint)bVar8 * 0x4a85 >> 8;
      uVar114 = uVar128 + ((uint)bVar7 * 0x6625 >> 8);
      uVar127 = uVar114 - 0x379a;
      uVar4 = 0;
      if (0x3799 < uVar114) {
        uVar4 = uVar85;
      }
      uVar5 = (char)(uVar127 >> 6);
      if (0x3fff < uVar127) {
        uVar5 = uVar4;
      }
      (*param_4)[5] = uVar5;
      iVar308 = uVar128 - (((uint)bVar6 * 0x1913 >> 8) + ((uint)bVar7 * 0x3408 >> 8));
      uVar114 = iVar308 + 0x2204;
      uVar4 = 0;
      if (-0x2205 < iVar308) {
        uVar4 = uVar85;
      }
      uVar5 = (char)(uVar114 >> 6);
      if (0x3fff < uVar114) {
        uVar5 = uVar4;
      }
      (*param_4)[6] = uVar5;
      uVar128 = uVar128 + ((uint)bVar6 * 0x811a >> 8);
      uVar114 = uVar128 - 0x4515;
      uVar4 = 0;
      if (0x4514 < uVar128) {
        uVar4 = uVar85;
      }
      uVar85 = (char)(uVar114 >> 6);
      if (0x3fff < uVar114) {
        uVar85 = uVar4;
      }
      (*param_4)[7] = uVar85;
      pauVar1 = (undefined1 (*) [16])(*param_1 + 2);
      puVar48 = *param_4;
      param_1 = pauVar1;
      param_2 = pauVar80;
      param_3 = pauVar81;
      param_4 = (undefined1 (*) [16])(puVar48 + 8);
    } while ((undefined1 (*) [16])(puVar48 + 8) != pauVar3);
  }
joined_r0x00236c24:
  if ((param_5 & 1) != 0) {
    bVar6 = (*pauVar1)[0];
    bVar7 = (*pauVar80)[0];
    bVar8 = (*pauVar81)[0];
    (*pauVar3)[0] = 0xff;
    uVar128 = (uint)bVar6 * 0x4a85 >> 8;
    uVar114 = uVar128 + ((uint)bVar8 * 0x6625 >> 8);
    uVar127 = uVar114 - 0x379a;
    uVar4 = 0;
    if (0x3799 < uVar114) {
      uVar4 = 0xff;
    }
    uVar85 = (char)(uVar127 >> 6);
    if (0x3fff < uVar127) {
      uVar85 = uVar4;
    }
    (*pauVar3)[1] = uVar85;
    iVar308 = uVar128 - (((uint)bVar7 * 0x1913 >> 8) + ((uint)bVar8 * 0x3408 >> 8));
    uVar114 = iVar308 + 0x2204;
    uVar4 = 0;
    if (-0x2205 < iVar308) {
      uVar4 = 0xff;
    }
    uVar85 = (char)(uVar114 >> 6);
    if (0x3fff < uVar114) {
      uVar85 = uVar4;
    }
    (*pauVar3)[2] = uVar85;
    uVar128 = uVar128 + ((uint)bVar7 * 0x811a >> 8);
    uVar114 = uVar128 - 0x4515;
    uVar4 = 0;
    if (0x4514 < uVar128) {
      uVar4 = 0xff;
    }
    uVar85 = (char)(uVar114 >> 6);
    if (0x3fff < uVar114) {
      uVar85 = uVar4;
    }
    (*pauVar3)[3] = uVar85;
  }
  return;
}



/* Entry: 002375d8; end: 002389df;  */

void FUN_002375d8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],uint param_5)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint3 uVar8;
  uint3 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [16];
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  undefined1 (*pauVar49) [16];
  undefined1 (*pauVar50) [16];
  undefined1 (*pauVar51) [16];
  undefined1 (*pauVar52) [16];
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  uint5 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar60;
  uint5 uVar61;
  uint uVar69;
  int iVar70;
  uint uVar71;
  int iVar72;
  uint uVar73;
  int iVar74;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  uint5 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  uint uVar80;
  undefined8 uVar81;
  uint uVar88;
  undefined1 auVar82 [16];
  uint uVar89;
  uint uVar91;
  uint uVar92;
  undefined1 auVar83 [16];
  uint uVar87;
  uint uVar90;
  uint uVar93;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar94;
  uint5 uVar95;
  uint uVar97;
  uint uVar98;
  undefined1 auVar96 [16];
  uint uVar99;
  int iVar100;
  int iVar101;
  undefined8 uVar102;
  int iVar104;
  int iVar105;
  undefined1 auVar103 [16];
  int iVar106;
  undefined8 uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar127;
  int iVar128;
  undefined1 auVar124 [16];
  int iVar129;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  uint uVar130;
  uint uVar131;
  uint uVar132;
  uint uVar133;
  int iVar134;
  uint5 uVar135;
  undefined8 uVar136;
  int iVar140;
  int iVar141;
  int iVar142;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  uint uVar143;
  uint uVar144;
  int iVar145;
  uint uVar146;
  int iVar147;
  uint uVar148;
  int iVar149;
  uint uVar150;
  int iVar151;
  undefined8 uVar152;
  uint uVar153;
  int iVar154;
  uint uVar160;
  int iVar161;
  uint uVar164;
  int iVar165;
  uint uVar167;
  int iVar168;
  undefined1 auVar158 [16];
  uint uVar155;
  uint uVar156;
  int iVar157;
  uint uVar162;
  uint uVar163;
  int iVar166;
  int iVar169;
  undefined1 auVar159 [16];
  uint uVar170;
  uint5 uVar171;
  uint uVar174;
  uint uVar175;
  int iVar176;
  uint uVar177;
  int iVar178;
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  byte bVar183;
  byte bVar184;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  int iVar188;
  int iVar191;
  int iVar192;
  int iVar193;
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  uint uVar194;
  uint uVar201;
  uint uVar202;
  undefined1 auVar195 [16];
  uint uVar203;
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  uint uVar204;
  uint uVar205;
  uint uVar207;
  uint uVar208;
  uint uVar209;
  uint uVar210;
  uint uVar211;
  uint uVar212;
  undefined1 auVar206 [16];
  undefined8 uVar213;
  uint uVar214;
  uint uVar215;
  uint uVar216;
  uint uVar217;
  uint uVar218;
  uint uVar219;
  uint uVar220;
  uint uVar221;
  byte bStack_140;
  undefined1 uStack_13c;
  byte bStack_138;
  byte bStack_134;
  byte bStack_c0;
  undefined1 uStack_bc;
  byte bStack_b8;
  byte bStack_b4;
  
  pauVar1 = param_1;
  pauVar51 = param_2;
  pauVar52 = param_3;
  pauVar3 = param_4;
  if ((param_5 & 0x7ffffffe) != 0) {
    lVar53 = (long)(int)((param_5 & 0x7ffffffe) << 1);
    pauVar3 = (undefined1 (*) [16])(*param_4 + lVar53);
    uVar54 = lVar53 - 4;
    if (0x3b < uVar54) {
      uVar2 = (uVar54 >> 2) + 1;
      if (((pauVar3 <= param_1 || (undefined1 (*) [16])(*param_1 + (uVar54 >> 1) + 2) <= param_4) &&
          ((undefined1 (*) [16])(*param_2 + uVar2) <= param_4 || pauVar3 <= param_2)) &&
         ((undefined1 (*) [16])(*param_3 + uVar2) <= param_4 || pauVar3 <= param_3)) {
        uVar55 = uVar2 & 0x7ffffffffffffff0;
        pauVar51 = (undefined1 (*) [16])(*param_2 + uVar55);
        pauVar52 = (undefined1 (*) [16])(*param_3 + uVar55);
        pauVar1 = (undefined1 (*) [16])(*param_1 + uVar55 * 2);
        puVar18 = *param_4;
        uVar54 = uVar55;
        do {
          puVar19 = *param_1;
          puVar20 = *param_1;
          puVar21 = *param_1;
          puVar22 = *param_1;
          puVar23 = *param_1;
          puVar24 = *param_1;
          puVar25 = *param_1;
          puVar26 = *param_1;
          puVar27 = *param_1;
          puVar28 = *param_1;
          puVar29 = *param_1;
          puVar30 = *param_1;
          puVar31 = *param_1;
          puVar32 = *param_1;
          puVar33 = *param_1;
          puVar34 = *param_1;
          pauVar50 = param_1 + 1;
          pauVar35 = param_1 + 1;
          pauVar36 = param_1 + 1;
          pauVar37 = param_1 + 1;
          pauVar38 = param_1 + 1;
          pauVar39 = param_1 + 1;
          pauVar40 = param_1 + 1;
          pauVar41 = param_1 + 1;
          pauVar42 = param_1 + 1;
          pauVar43 = param_1 + 1;
          pauVar44 = param_1 + 1;
          pauVar45 = param_1 + 1;
          pauVar46 = param_1 + 1;
          pauVar47 = param_1 + 1;
          pauVar48 = param_1 + 1;
          pauVar49 = param_1 + 1;
          param_1 = param_1 + 2;
          auVar58 = *param_2;
          auVar16._8_8_ = 0xffffff0bffffff0a;
          auVar16._0_8_ = 0xffffff09ffffff08;
          auVar17._8_8_ = 0xffffff0fffffff0e;
          auVar17._0_8_ = 0xffffff0dffffff0c;
          auVar82 = a64_TBL(ZEXT816(0),auVar58,auVar17);
          auVar96 = a64_TBL(ZEXT816(0),auVar58,auVar16);
          auVar15._8_8_ = 0xffffff07ffffff06;
          auVar15._0_8_ = 0xffffff05ffffff04;
          auVar103 = a64_TBL(ZEXT816(0),auVar58,auVar15);
          auVar14._8_8_ = 0xffffff03ffffff02;
          auVar14._0_8_ = 0xffffff01ffffff00;
          auVar58 = a64_TBL(ZEXT816(0),auVar58,auVar14);
          uVar57 = CONCAT26(auVar58._12_2_,
                            CONCAT24(auVar58._8_2_,CONCAT22(auVar58._4_2_,auVar58._0_2_)));
          uVar152 = CONCAT26(auVar103._12_2_,
                             CONCAT24(auVar103._8_2_,CONCAT22(auVar103._4_2_,auVar103._0_2_)));
          auVar58 = *param_3;
          uVar94 = CONCAT26(auVar96._12_2_,
                            CONCAT24(auVar96._8_2_,CONCAT22(auVar96._4_2_,auVar96._0_2_)));
          uVar107 = CONCAT26(auVar82._12_2_,
                             CONCAT24(auVar82._8_2_,CONCAT22(auVar82._4_2_,auVar82._0_2_)));
          auVar82 = a64_TBL(ZEXT816(0),auVar58,auVar14);
          auVar96 = a64_TBL(ZEXT816(0),auVar58,auVar15);
          auVar103 = a64_TBL(ZEXT816(0),auVar58,auVar16);
          auVar58 = a64_TBL(ZEXT816(0),auVar58,auVar17);
          uVar213 = CONCAT26(auVar58._12_2_,
                             CONCAT24(auVar58._8_2_,CONCAT22(auVar58._4_2_,auVar58._0_2_)));
          uVar136 = CONCAT26(auVar103._12_2_,
                             CONCAT24(auVar103._8_2_,CONCAT22(auVar103._4_2_,auVar103._0_2_)));
          uVar102 = CONCAT26(auVar96._12_2_,
                             CONCAT24(auVar96._8_2_,CONCAT22(auVar96._4_2_,auVar96._0_2_)));
          auVar96 = NEON_umull((ulong)CONCAT16(puVar25[6],
                                               (uint6)CONCAT14(puVar23[4],
                                                               (uint)CONCAT12(puVar21[2],
                                                                              (ushort)(byte)*puVar19
                                                                             ))),0x4a854a854a854a85,
                               2);
          uVar80 = (uint)(byte)puVar27[8] * 0x4a85;
          uVar87 = (uint)(byte)puVar29[10] * 0x4a85;
          uVar90 = (uint)(byte)puVar31[0xc] * 0x4a85;
          uVar93 = (uint)(byte)puVar33[0xe] * 0x4a85;
          auVar58 = NEON_umull((ulong)CONCAT16((*pauVar40)[6],
                                               (uint6)CONCAT14((*pauVar38)[4],
                                                               (uint)CONCAT12((*pauVar36)[2],
                                                                              (ushort)(byte)(*
                                                  pauVar50)[0]))),0x4a854a854a854a85,2);
          uVar81 = CONCAT26(auVar82._12_2_,
                            CONCAT24(auVar82._8_2_,CONCAT22(auVar82._4_2_,auVar82._0_2_)));
          uVar155 = (uint)(byte)(*pauVar42)[8] * 0x4a85;
          uVar156 = (uint)(byte)(*pauVar44)[10] * 0x4a85;
          uVar162 = (uint)(byte)(*pauVar46)[0xc] * 0x4a85;
          uVar163 = (uint)(byte)(*pauVar48)[0xe] * 0x4a85;
          uVar88 = auVar58._0_4_;
          uVar89 = auVar58._4_4_;
          uVar91 = auVar58._8_4_;
          uVar92 = auVar58._12_4_;
          auVar58 = NEON_umull(uVar81,0x6625662566256625,2);
          auVar82 = NEON_umull(uVar102,0x6625662566256625,2);
          auVar103 = NEON_umull(uVar136,0x6625662566256625,2);
          auVar195 = NEON_umull(uVar213,0x6625662566256625,2);
          uVar108 = auVar195._0_4_ >> 8;
          uVar109 = auVar195._4_4_ >> 8;
          uVar110 = auVar195._8_4_ >> 8;
          uVar111 = auVar195._12_4_ >> 8;
          uVar112 = auVar103._0_4_ >> 8;
          uVar113 = auVar103._4_4_ >> 8;
          uVar114 = auVar103._8_4_ >> 8;
          uVar115 = auVar103._12_4_ >> 8;
          uVar116 = auVar82._0_4_ >> 8;
          uVar117 = auVar82._4_4_ >> 8;
          uVar118 = auVar82._8_4_ >> 8;
          uVar119 = auVar82._12_4_ >> 8;
          uVar204 = auVar58._0_4_ >> 8;
          uVar207 = auVar58._4_4_ >> 8;
          uVar209 = auVar58._8_4_ >> 8;
          uVar211 = auVar58._12_4_ >> 8;
          uVar143 = auVar96._0_4_;
          uVar97 = auVar96._4_4_;
          uVar98 = auVar96._8_4_;
          uVar99 = auVar96._12_4_;
          uVar205 = uVar204 + (uVar143 >> 8);
          uVar208 = uVar207 + (uVar97 >> 8);
          uVar210 = uVar209 + (uVar98 >> 8);
          uVar212 = uVar211 + (uVar99 >> 8);
          uVar144 = uVar116 + (uVar80 >> 8);
          uVar146 = uVar117 + (uVar87 >> 8);
          uVar148 = uVar118 + (uVar90 >> 8);
          uVar150 = uVar119 + (uVar93 >> 8);
          uVar170 = uVar112 + (uVar88 >> 8);
          uVar174 = uVar113 + (uVar89 >> 8);
          uVar175 = uVar114 + (uVar91 >> 8);
          uVar177 = uVar115 + (uVar92 >> 8);
          uVar60 = uVar108 + (uVar155 >> 8);
          uVar69 = uVar109 + (uVar156 >> 8);
          uVar71 = uVar110 + (uVar162 >> 8);
          uVar73 = uVar111 + (uVar163 >> 8);
          uVar194 = uVar60 - 0x379a;
          uVar201 = uVar69 - 0x379a;
          uVar202 = uVar71 - 0x379a;
          uVar203 = uVar73 - 0x379a;
          uVar214 = uVar170 - 0x379a;
          uVar216 = uVar174 - 0x379a;
          uVar218 = uVar175 - 0x379a;
          uVar220 = uVar177 - 0x379a;
          uVar130 = uVar144 - 0x379a;
          uVar131 = uVar146 - 0x379a;
          uVar132 = uVar148 - 0x379a;
          uVar133 = uVar150 - 0x379a;
          uVar153 = uVar205 - 0x379a;
          uVar160 = uVar208 - 0x379a;
          uVar164 = uVar210 - 0x379a;
          uVar167 = uVar212 - 0x379a;
          auVar124._0_4_ = -(uint)(uVar194 < 0x4000);
          auVar124._4_4_ = -(uint)(uVar201 < 0x4000);
          auVar124._8_4_ = -(uint)(uVar202 < 0x4000);
          auVar124._12_4_ = -(uint)(uVar203 < 0x4000);
          auVar196._0_4_ = uVar194 >> 6;
          auVar196._4_4_ = uVar201 >> 6;
          auVar196._8_4_ = uVar202 >> 6;
          auVar196._12_4_ = uVar203 >> 6;
          iVar70 = -(uint)(uVar69 < 0x379a);
          iVar72 = -(uint)(uVar71 < 0x379a);
          iVar74 = -(uint)(uVar73 < 0x379a);
          auVar62[0] = ~-(uVar60 < 0x379a);
          auVar62._1_3_ = 0;
          auVar62[4] = ~(byte)iVar70;
          auVar62._5_2_ = 0;
          auVar62[7] = ~(byte)((uint)iVar70 >> 0x18);
          auVar62[8] = ~(byte)iVar72;
          auVar62[9] = ~(byte)((uint)iVar72 >> 8);
          auVar62[10] = ~(byte)((uint)iVar72 >> 0x10);
          auVar62[0xb] = ~(byte)((uint)iVar72 >> 0x18);
          auVar62[0xc] = ~(byte)iVar74;
          auVar62[0xd] = ~(byte)((uint)iVar74 >> 8);
          auVar62[0xe] = ~(byte)((uint)iVar74 >> 0x10);
          auVar62[0xf] = ~(byte)((uint)iVar74 >> 0x18);
          auVar62 = auVar62 ^ (auVar62 ^ auVar196) & auVar124;
          auVar63._0_4_ = -(uint)(uVar153 < 0x4000);
          auVar63._4_4_ = -(uint)(uVar160 < 0x4000);
          auVar63._8_4_ = -(uint)(uVar164 < 0x4000);
          auVar63._12_4_ = -(uint)(uVar167 < 0x4000);
          iVar70 = -(uint)(uVar216 < 0x4000);
          iVar72 = -(uint)(uVar220 < 0x4000);
          iVar74 = -(uint)(uVar174 < 0x379a);
          iVar176 = -(uint)(uVar175 < 0x379a);
          iVar178 = -(uint)(uVar177 < 0x379a);
          iVar127 = -(uint)(uVar146 < 0x379a);
          iVar128 = -(uint)(uVar148 < 0x379a);
          iVar129 = -(uint)(uVar150 < 0x379a);
          auVar198[0] = ~-(uVar170 < 0x379a);
          auVar198._1_3_ = 0;
          auVar198[4] = ~(byte)iVar74;
          auVar198._5_2_ = 0;
          auVar198[7] = ~(byte)((uint)iVar74 >> 0x18);
          auVar198[8] = ~(byte)iVar176;
          auVar198[9] = ~(byte)((uint)iVar176 >> 8);
          auVar198[10] = ~(byte)((uint)iVar176 >> 0x10);
          auVar198[0xb] = ~(byte)((uint)iVar176 >> 0x18);
          auVar198[0xc] = ~(byte)iVar178;
          auVar198[0xd] = ~(byte)((uint)iVar178 >> 8);
          auVar198[0xe] = ~(byte)((uint)iVar178 >> 0x10);
          auVar198[0xf] = ~(byte)((uint)iVar178 >> 0x18);
          auVar197[0xc] = (char)iVar72;
          auVar197._8_4_ = -(uint)(uVar218 < 0x4000);
          auVar197[0xd] = (char)((uint)iVar72 >> 8);
          auVar197[0xe] = (char)((uint)iVar72 >> 0x10);
          auVar197[0xf] = (char)((uint)iVar72 >> 0x18);
          auVar197[4] = (char)iVar70;
          auVar197._0_4_ = -(uint)(uVar214 < 0x4000);
          auVar197._5_2_ = 0;
          auVar197[7] = (char)((uint)iVar70 >> 0x18);
          auVar7._4_4_ = uVar216 >> 6;
          auVar7._0_4_ = uVar214 >> 6;
          auVar7._8_4_ = uVar218 >> 6;
          auVar7._12_4_ = uVar220 >> 6;
          auVar198 = auVar198 ^ (auVar198 ^ auVar7) & auVar197;
          auVar172._0_8_ = CONCAT44(-(uint)(uVar131 < 0x4000),-(uint)(uVar130 < 0x4000));
          auVar172._8_4_ = -(uint)(uVar132 < 0x4000);
          auVar172._12_4_ = -(uint)(uVar133 < 0x4000);
          iVar70 = -(uint)(uVar208 < 0x379a);
          iVar72 = -(uint)(uVar210 < 0x379a);
          iVar74 = -(uint)(uVar212 < 0x379a);
          auVar58 = NEON_umull(uVar107,0x1913191319131913,2);
          auVar82 = NEON_umull(uVar213,0x3408340834083408,2);
          iVar120 = (auVar58._0_4_ >> 8) + (auVar82._0_4_ >> 8);
          iVar121 = (auVar58._4_4_ >> 8) + (auVar82._4_4_ >> 8);
          iVar122 = (auVar58._8_4_ >> 8) + (auVar82._8_4_ >> 8);
          iVar123 = (auVar58._12_4_ >> 8) + (auVar82._12_4_ >> 8);
          auVar206._0_4_ = uVar153 >> 6;
          auVar206._4_4_ = uVar160 >> 6;
          auVar206._8_4_ = uVar164 >> 6;
          auVar206._12_4_ = uVar167 >> 6;
          auVar82 = NEON_umull(uVar94,0x1913191319131913,2);
          auVar58 = NEON_umull(uVar136,0x3408340834083408,2);
          iVar154 = (auVar82._0_4_ >> 8) + (auVar58._0_4_ >> 8);
          iVar161 = (auVar82._4_4_ >> 8) + (auVar58._4_4_ >> 8);
          iVar165 = (auVar82._8_4_ >> 8) + (auVar58._8_4_ >> 8);
          iVar168 = (auVar82._12_4_ >> 8) + (auVar58._12_4_ >> 8);
          auVar82 = NEON_umull(uVar152,0x1913191319131913,2);
          auVar158._0_4_ = uVar130 >> 6;
          auVar158._4_4_ = uVar131 >> 6;
          auVar158._8_4_ = uVar132 >> 6;
          auVar158._12_4_ = uVar133 >> 6;
          auVar58 = NEON_umull(uVar102,0x3408340834083408,2);
          iVar145 = (auVar82._0_4_ >> 8) + (auVar58._0_4_ >> 8);
          iVar147 = (auVar82._4_4_ >> 8) + (auVar58._4_4_ >> 8);
          iVar149 = (auVar82._8_4_ >> 8) + (auVar58._8_4_ >> 8);
          iVar151 = (auVar82._12_4_ >> 8) + (auVar58._12_4_ >> 8);
          auVar82 = NEON_umull(uVar57,0x1913191319131913,2);
          bVar179 = ~-(uVar205 < 0x379a);
          bVar180 = ~(byte)iVar70;
          bVar181 = ~(byte)((uint)iVar70 >> 0x18);
          bVar182 = ~(byte)((uint)iVar72 >> 8);
          bVar183 = ~(byte)((uint)iVar72 >> 0x10);
          bVar184 = ~(byte)((uint)iVar72 >> 0x18);
          bVar185 = ~(byte)((uint)iVar74 >> 8);
          bVar186 = ~(byte)((uint)iVar74 >> 0x10);
          bVar187 = ~(byte)((uint)iVar74 >> 0x18);
          auVar58 = NEON_umull(uVar81,0x3408340834083408,2);
          iVar101 = (auVar82._0_4_ >> 8) + (auVar58._0_4_ >> 8);
          iVar104 = (auVar82._4_4_ >> 8) + (auVar58._4_4_ >> 8);
          iVar105 = (auVar82._8_4_ >> 8) + (auVar58._8_4_ >> 8);
          iVar106 = (auVar82._12_4_ >> 8) + (auVar58._12_4_ >> 8);
          iVar134 = (uVar88 >> 8) - iVar154;
          iVar140 = (uVar89 >> 8) - iVar161;
          iVar141 = (uVar91 >> 8) - iVar165;
          iVar142 = (uVar92 >> 8) - iVar168;
          auVar58 = NEON_umull(uVar107,0x811a811a811a811a,2);
          auVar82 = NEON_umull(uVar94,0x811a811a811a811a,2);
          auVar126[0] = ~-(uVar144 < 0x379a);
          auVar126._1_3_ = 0;
          auVar126[4] = ~(byte)iVar127;
          auVar126._5_2_ = 0;
          auVar126[7] = ~(byte)((uint)iVar127 >> 0x18);
          auVar126[8] = ~(byte)iVar128;
          auVar126[9] = ~(byte)((uint)iVar128 >> 8);
          auVar126[10] = ~(byte)((uint)iVar128 >> 0x10);
          auVar126[0xb] = ~(byte)((uint)iVar128 >> 0x18);
          auVar126[0xc] = ~(byte)iVar129;
          auVar126[0xd] = ~(byte)((uint)iVar129 >> 8);
          auVar126[0xe] = ~(byte)((uint)iVar129 >> 0x10);
          auVar126[0xf] = ~(byte)((uint)iVar129 >> 0x18);
          auVar103 = NEON_umull(uVar152,0x811a811a811a811a,2);
          auVar96 = NEON_umull(uVar57,0x811a811a811a811a,2);
          uVar205 = auVar103._0_4_ >> 8;
          uVar208 = auVar103._4_4_ >> 8;
          uVar210 = auVar103._8_4_ >> 8;
          uVar212 = auVar103._12_4_ >> 8;
          uVar215 = auVar82._0_4_ >> 8;
          uVar217 = auVar82._4_4_ >> 8;
          uVar219 = auVar82._8_4_ >> 8;
          uVar221 = auVar82._12_4_ >> 8;
          auVar125._8_8_ = auVar172._8_8_;
          auVar125._0_8_ = auVar172._0_8_;
          auVar126 = auVar126 ^ (auVar126 ^ auVar158) & auVar125;
          uVar194 = auVar58._0_4_ >> 8;
          uVar201 = auVar58._4_4_ >> 8;
          uVar202 = auVar58._8_4_ >> 8;
          uVar203 = auVar58._12_4_ >> 8;
          uVar60 = uVar194 + (uVar155 >> 8);
          uVar69 = uVar201 + (uVar156 >> 8);
          uVar71 = uVar202 + (uVar162 >> 8);
          uVar73 = uVar203 + (uVar163 >> 8);
          uVar153 = uVar215 + (uVar88 >> 8);
          uVar160 = uVar217 + (uVar89 >> 8);
          uVar164 = uVar219 + (uVar91 >> 8);
          uVar167 = uVar221 + (uVar92 >> 8);
          auVar58._1_3_ = 0;
          auVar58[0] = bVar179;
          auVar58[4] = bVar180;
          auVar58._5_2_ = 0;
          auVar58[7] = bVar181;
          auVar58[8] = ~(byte)iVar72;
          auVar58[9] = bVar182;
          auVar58[10] = bVar183;
          auVar58[0xb] = bVar184;
          auVar58[0xc] = ~(byte)iVar74;
          auVar58[0xd] = bVar185;
          auVar58[0xe] = bVar186;
          auVar58[0xf] = bVar187;
          auVar82._1_3_ = 0;
          auVar82[0] = bVar179;
          auVar82[4] = bVar180;
          auVar82._5_2_ = 0;
          auVar82[7] = bVar181;
          auVar82[8] = ~(byte)iVar72;
          auVar82[9] = bVar182;
          auVar82[10] = bVar183;
          auVar82[0xb] = bVar184;
          auVar82[0xc] = ~(byte)iVar74;
          auVar82[0xd] = bVar185;
          auVar82[0xe] = bVar186;
          auVar82[0xf] = bVar187;
          auVar82 = auVar82 ^ (auVar58 ^ auVar206) & auVar63;
          uVar214 = uVar205 + (uVar80 >> 8);
          uVar216 = uVar208 + (uVar87 >> 8);
          uVar218 = uVar210 + (uVar90 >> 8);
          uVar220 = uVar212 + (uVar93 >> 8);
          uVar130 = uVar153 - 0x4515;
          uVar132 = uVar160 - 0x4515;
          uVar144 = uVar164 - 0x4515;
          uVar148 = uVar167 - 0x4515;
          uVar170 = uVar60 - 0x4515;
          uVar175 = uVar69 - 0x4515;
          uVar88 = uVar71 - 0x4515;
          uVar91 = uVar73 - 0x4515;
          iVar128 = -(uint)(uVar170 < 0x4000);
          iVar129 = -(uint)(uVar175 < 0x4000);
          iVar176 = -(uint)(uVar88 < 0x4000);
          iVar178 = -(uint)(uVar91 < 0x4000);
          iVar70 = -(uint)(uVar130 < 0x4000);
          iVar72 = -(uint)(uVar132 < 0x4000);
          iVar74 = -(uint)(uVar144 < 0x4000);
          iVar127 = -(uint)(uVar148 < 0x4000);
          uVar131 = uVar130 >> 6;
          uVar133 = uVar132 >> 6;
          uVar146 = uVar144 >> 6;
          uVar150 = uVar148 >> 6;
          uVar174 = uVar170 >> 6;
          uVar177 = uVar175 >> 6;
          uVar89 = uVar88 >> 6;
          uVar92 = uVar91 >> 6;
          uVar56 = CONCAT14(~-(uVar69 < 0x4515) & ~(byte)iVar129,
                            (uint)(~-(uVar60 < 0x4515) & ~(byte)iVar128 & 0xf0)) & 0xf0ffffffff;
          auVar83[0] = (byte)uVar174 & (byte)iVar128 | (byte)uVar56;
          auVar83[1] = (byte)(uVar174 >> 8) & (byte)((uint)iVar128 >> 8);
          auVar83[2] = (byte)(uVar174 >> 0x10) & (byte)((uint)iVar128 >> 0x10);
          auVar83[3] = (byte)(uVar170 >> 0x1e) & (byte)((uint)iVar128 >> 0x18);
          auVar83[4] = (byte)uVar177 & (byte)iVar129 | (byte)(uVar56 >> 0x20);
          auVar83[5] = (byte)(uVar177 >> 8) & (byte)((uint)iVar129 >> 8);
          auVar83[6] = (byte)(uVar177 >> 0x10) & (byte)((uint)iVar129 >> 0x10);
          auVar83[7] = (byte)(uVar175 >> 0x1e) & (byte)((uint)iVar129 >> 0x18);
          auVar83[8] = (byte)uVar89 & (byte)iVar176 | ~-(uVar71 < 0x4515) & ~(byte)iVar176 & 0xf0;
          auVar83[9] = (byte)(uVar89 >> 8) & (byte)((uint)iVar176 >> 8);
          auVar83[10] = (byte)(uVar89 >> 0x10) & (byte)((uint)iVar176 >> 0x10);
          auVar83[0xb] = (byte)(uVar88 >> 0x1e) & (byte)((uint)iVar176 >> 0x18);
          auVar83[0xc] = (byte)uVar92 & (byte)iVar178 | ~-(uVar73 < 0x4515) & ~(byte)iVar178 & 0xf0;
          auVar83[0xd] = (byte)(uVar92 >> 8) & (byte)((uint)iVar178 >> 8);
          auVar83[0xe] = (byte)(uVar92 >> 0x10) & (byte)((uint)iVar178 >> 0x10);
          auVar83[0xf] = (byte)(uVar91 >> 0x1e) & (byte)((uint)iVar178 >> 0x18);
          auVar76[0] = (byte)uVar131 & (byte)iVar70 | ~-(uVar153 < 0x4515) & ~(byte)iVar70 & 0xf0;
          auVar76[1] = (byte)(uVar131 >> 8) & (byte)((uint)iVar70 >> 8);
          auVar76[2] = (byte)(uVar131 >> 0x10) & (byte)((uint)iVar70 >> 0x10);
          auVar76[3] = (byte)(uVar130 >> 0x1e) & (byte)((uint)iVar70 >> 0x18);
          auVar76[4] = (byte)uVar133 & (byte)iVar72 | ~-(uVar160 < 0x4515) & ~(byte)iVar72 & 0xf0;
          auVar76[5] = (byte)(uVar133 >> 8) & (byte)((uint)iVar72 >> 8);
          auVar76[6] = (byte)(uVar133 >> 0x10) & (byte)((uint)iVar72 >> 0x10);
          auVar76[7] = (byte)(uVar132 >> 0x1e) & (byte)((uint)iVar72 >> 0x18);
          auVar76[8] = (byte)uVar146 & (byte)iVar74 | ~-(uVar164 < 0x4515) & ~(byte)iVar74 & 0xf0;
          auVar76[9] = (byte)(uVar146 >> 8) & (byte)((uint)iVar74 >> 8);
          auVar76[10] = (byte)(uVar146 >> 0x10) & (byte)((uint)iVar74 >> 0x10);
          auVar76[0xb] = (byte)(uVar144 >> 0x1e) & (byte)((uint)iVar74 >> 0x18);
          auVar76[0xc] = (byte)uVar150 & (byte)iVar127 |
                         ~-(uVar167 < 0x4515) & ~(byte)iVar127 & 0xf0;
          auVar76[0xd] = (byte)(uVar150 >> 8) & (byte)((uint)iVar127 >> 8);
          auVar76[0xe] = (byte)(uVar150 >> 0x10) & (byte)((uint)iVar127 >> 0x10);
          auVar76[0xf] = (byte)(uVar148 >> 0x1e) & (byte)((uint)iVar127 >> 0x18);
          uVar130 = uVar214 - 0x4515;
          uVar132 = uVar216 - 0x4515;
          uVar144 = uVar218 - 0x4515;
          uVar148 = uVar220 - 0x4515;
          iVar70 = -(uint)(uVar130 < 0x4000);
          iVar72 = -(uint)(uVar132 < 0x4000);
          iVar74 = -(uint)(uVar144 < 0x4000);
          iVar127 = -(uint)(uVar148 < 0x4000);
          uVar131 = uVar130 >> 6;
          uVar133 = uVar132 >> 6;
          uVar146 = uVar144 >> 6;
          uVar60 = (uint)auVar96._1_3_ + (uVar143 >> 8);
          uVar69 = (uint)auVar96._5_3_ + (uVar97 >> 8);
          uVar71 = (uint)auVar96._9_3_ + (uVar98 >> 8);
          uVar73 = (uint)auVar96._13_3_ + (uVar99 >> 8);
          iVar188 = (uVar155 >> 8) - iVar120;
          iVar191 = (uVar156 >> 8) - iVar121;
          iVar192 = (uVar162 >> 8) - iVar122;
          iVar193 = (uVar163 >> 8) - iVar123;
          uVar56 = CONCAT14(~-(uVar216 < 0x4515) & ~(byte)iVar72,
                            (uint)(~-(uVar214 < 0x4515) & ~(byte)iVar70 & 0xf0)) & 0xf0ffffffff;
          auVar64[0] = (byte)uVar131 & (byte)iVar70 | (byte)uVar56;
          auVar64[1] = (byte)(uVar131 >> 8) & (byte)((uint)iVar70 >> 8);
          auVar64[2] = (byte)(uVar131 >> 0x10) & (byte)((uint)iVar70 >> 0x10);
          auVar64[3] = (byte)(uVar130 >> 0x1e) & (byte)((uint)iVar70 >> 0x18);
          auVar64[4] = (byte)uVar133 & (byte)iVar72 | (byte)(uVar56 >> 0x20);
          auVar64[5] = (byte)(uVar133 >> 8) & (byte)((uint)iVar72 >> 8);
          auVar64[6] = (byte)(uVar133 >> 0x10) & (byte)((uint)iVar72 >> 0x10);
          auVar64[7] = (byte)(uVar132 >> 0x1e) & (byte)((uint)iVar72 >> 0x18);
          auVar64[8] = (byte)uVar146 & (byte)iVar74 | ~-(uVar218 < 0x4515) & ~(byte)iVar74 & 0xf0;
          auVar64[9] = (byte)(uVar146 >> 8) & (byte)((uint)iVar74 >> 8);
          auVar64[10] = (byte)(uVar146 >> 0x10) & (byte)((uint)iVar74 >> 0x10);
          auVar64[0xb] = (byte)(uVar144 >> 0x1e) & (byte)((uint)iVar74 >> 0x18);
          auVar64[0xc] = (byte)(uVar148 >> 6) & (byte)iVar127 |
                         ~-(uVar220 < 0x4515) & ~(byte)iVar127 & 0xf0;
          auVar64[0xd] = (byte)((uVar148 >> 6) >> 8) & (byte)((uint)iVar127 >> 8);
          auVar64[0xe] = (byte)((uint3)(uVar148 >> 0xe) >> 8) & (byte)((uint)iVar127 >> 0x10);
          auVar64[0xf] = (byte)(uVar148 >> 0x1e) & (byte)((uint)iVar127 >> 0x18);
          uVar155 = uVar60 - 0x4515;
          uVar162 = uVar69 - 0x4515;
          uVar130 = uVar71 - 0x4515;
          uVar132 = uVar73 - 0x4515;
          iVar70 = -(uint)(uVar155 < 0x4000);
          iVar72 = -(uint)(uVar162 < 0x4000);
          iVar74 = -(uint)(uVar130 < 0x4000);
          iVar127 = -(uint)(uVar132 < 0x4000);
          uVar156 = uVar155 >> 6;
          uVar163 = uVar162 >> 6;
          uVar131 = uVar130 >> 6;
          uVar175 = iVar188 + 0x2204;
          uVar177 = iVar191 + 0x2204;
          uVar88 = iVar192 + 0x2204;
          uVar89 = iVar193 + 0x2204;
          auVar59[0] = (byte)uVar156 & (byte)iVar70 | ~-(uVar60 < 0x4515) & ~(byte)iVar70 & 0xf0;
          auVar59[1] = (byte)(uVar156 >> 8) & (byte)((uint)iVar70 >> 8);
          auVar59[2] = (byte)(uVar156 >> 0x10) & (byte)((uint)iVar70 >> 0x10);
          auVar59[3] = (byte)(uVar155 >> 0x1e) & (byte)((uint)iVar70 >> 0x18);
          auVar59[4] = (byte)uVar163 & (byte)iVar72 | ~-(uVar69 < 0x4515) & ~(byte)iVar72 & 0xf0;
          auVar59[5] = (byte)(uVar163 >> 8) & (byte)((uint)iVar72 >> 8);
          auVar59[6] = (byte)(uVar163 >> 0x10) & (byte)((uint)iVar72 >> 0x10);
          auVar59[7] = (byte)(uVar162 >> 0x1e) & (byte)((uint)iVar72 >> 0x18);
          auVar59[8] = (byte)uVar131 & (byte)iVar74 | ~-(uVar71 < 0x4515) & ~(byte)iVar74 & 0xf0;
          auVar59[9] = (byte)(uVar131 >> 8) & (byte)((uint)iVar74 >> 8);
          auVar59[10] = (byte)(uVar131 >> 0x10) & (byte)((uint)iVar74 >> 0x10);
          auVar59[0xb] = (byte)(uVar130 >> 0x1e) & (byte)((uint)iVar74 >> 0x18);
          auVar59[0xc] = (byte)(uVar132 >> 6) & (byte)iVar127 |
                         ~-(uVar73 < 0x4515) & ~(byte)iVar127 & 0xf0;
          auVar59[0xd] = (byte)((uVar132 >> 6) >> 8) & (byte)((uint)iVar127 >> 8);
          auVar59[0xe] = (byte)((uint3)(uVar132 >> 0xe) >> 8) & (byte)((uint)iVar127 >> 0x10);
          auVar59[0xf] = (byte)(uVar132 >> 0x1e) & (byte)((uint)iVar127 >> 0x18);
          uVar60 = iVar134 + 0x2204;
          uVar69 = iVar140 + 0x2204;
          uVar71 = iVar141 + 0x2204;
          uVar73 = iVar142 + 0x2204;
          iVar70 = -(uint)(uVar60 < 0x4000);
          iVar127 = -(uint)(uVar69 < 0x4000);
          iVar176 = -(uint)(uVar71 < 0x4000);
          iVar100 = -(uint)(uVar73 < 0x4000);
          iVar72 = -(uint)(uVar175 < 0x4000);
          iVar128 = -(uint)(uVar177 < 0x4000);
          iVar178 = -(uint)(uVar88 < 0x4000);
          iVar166 = -(uint)(uVar89 < 0x4000);
          iVar74 = (uVar80 >> 8) - iVar145;
          iVar129 = (uVar87 >> 8) - iVar147;
          iVar157 = (uVar90 >> 8) - iVar149;
          iVar169 = (uVar93 >> 8) - iVar151;
          uVar56 = CONCAT14(~-(iVar140 < -0x2204) & ~(byte)iVar127,
                            (uint)(~-(iVar134 < -0x2204) & ~(byte)iVar70 & 0xf)) & 0xfffffffff;
          uVar135 = CONCAT14(~-(iVar191 < -0x2204) & ~(byte)iVar128,
                             (uint)(~-(iVar188 < -0x2204) & ~(byte)iVar72 & 0xf)) & 0xfffffffff;
          uVar61 = CONCAT14(auVar198[4],(uint)(auVar198[0] & 0xf0)) & 0xf0ffffffff;
          auVar199[0] = (byte)uVar61 | (byte)(uVar60 >> 10) & (byte)iVar70 | (byte)uVar56;
          auVar199[1] = (byte)((uVar60 >> 10) >> 8) & (byte)((uint)iVar70 >> 8);
          auVar199[2] = (byte)(uVar60 >> 0x1a) & (byte)((uint)iVar70 >> 0x10);
          auVar199[3] = 0;
          auVar199[4] = (byte)(uVar61 >> 0x20) | (byte)(uVar69 >> 10) & (byte)iVar127 |
                        (byte)(uVar56 >> 0x20);
          auVar199[5] = (byte)((uVar69 >> 10) >> 8) & (byte)((uint)iVar127 >> 8);
          auVar199[6] = (byte)(uVar69 >> 0x1a) & (byte)((uint)iVar127 >> 0x10);
          auVar199[7] = 0;
          auVar199[8] = auVar198[8] & 0xf0 | (byte)(uVar71 >> 10) & (byte)iVar176 |
                        ~-(iVar141 < -0x2204) & ~(byte)iVar176 & 0xf;
          auVar199[9] = (byte)((uVar71 >> 10) >> 8) & (byte)((uint)iVar176 >> 8);
          auVar199[10] = (byte)(uVar71 >> 0x1a) & (byte)((uint)iVar176 >> 0x10);
          auVar199[0xb] = 0;
          auVar199[0xc] =
               auVar198[0xc] & 0xf0 | (byte)(uVar73 >> 10) & (byte)iVar100 |
               ~-(iVar142 < -0x2204) & ~(byte)iVar100 & 0xf;
          auVar199[0xd] = (byte)((uVar73 >> 10) >> 8) & (byte)((uint)iVar100 >> 8);
          auVar199[0xe] = (byte)(uVar73 >> 0x1a) & (byte)((uint)iVar100 >> 0x10);
          auVar199[0xf] = 0;
          uVar155 = iVar74 + 0x2204;
          uVar156 = iVar129 + 0x2204;
          uVar162 = iVar157 + 0x2204;
          uVar163 = iVar169 + 0x2204;
          iVar134 = -(uint)(uVar155 < 0x4000);
          iVar140 = -(uint)(uVar156 < 0x4000);
          iVar141 = -(uint)(uVar162 < 0x4000);
          iVar188 = -(uint)(uVar163 < 0x4000);
          uVar61 = CONCAT14(auVar126[4],(uint)(auVar126[0] & 0xf0)) & 0xf0ffffffff;
          iVar70 = (uVar143 >> 8) - iVar101;
          iVar127 = (uVar97 >> 8) - iVar104;
          iVar176 = (uVar98 >> 8) - iVar105;
          iVar100 = (uVar99 >> 8) - iVar106;
          uVar75 = CONCAT14(~-(iVar129 < -0x2204) & ~(byte)iVar140,
                            (uint)(~-(iVar74 < -0x2204) & ~(byte)iVar134 & 0xf)) & 0xfffffffff;
          uVar60 = iVar70 + 0x2204;
          uVar69 = iVar127 + 0x2204;
          uVar71 = iVar176 + 0x2204;
          uVar73 = iVar100 + 0x2204;
          iVar74 = -(uint)(uVar60 < 0x4000);
          iVar129 = -(uint)(uVar69 < 0x4000);
          iVar142 = -(uint)(uVar71 < 0x4000);
          iVar191 = -(uint)(uVar73 < 0x4000);
          bStack_140 = auVar82[0];
          uStack_13c = auVar82[4];
          bStack_138 = auVar82[8];
          bStack_134 = auVar82[0xc];
          uVar95 = CONCAT14(uStack_13c,(uint)(bStack_140 & 0xf0)) & 0xf0ffffffff;
          uVar56 = CONCAT14(~-(iVar127 < -0x2204) & ~(byte)iVar129,
                            (uint)(~-(iVar70 < -0x2204) & ~(byte)iVar74 & 0xf)) & 0xfffffffff;
          auVar189[0] = (byte)uVar95 | (byte)(uVar60 >> 10) & (byte)iVar74 | (byte)uVar56;
          auVar189[1] = (byte)((uVar60 >> 10) >> 8) & (byte)((uint)iVar74 >> 8);
          auVar189[2] = (byte)(uVar60 >> 0x1a) & (byte)((uint)iVar74 >> 0x10);
          auVar189[3] = 0;
          auVar189[4] = (byte)(uVar95 >> 0x20) | (byte)(uVar69 >> 10) & (byte)iVar129 |
                        (byte)(uVar56 >> 0x20);
          auVar189[5] = (byte)((uVar69 >> 10) >> 8) & (byte)((uint)iVar129 >> 8);
          auVar189[6] = (byte)(uVar69 >> 0x1a) & (byte)((uint)iVar129 >> 0x10);
          auVar189[7] = 0;
          auVar189[8] = bStack_138 & 0xf0 | (byte)(uVar71 >> 10) & (byte)iVar142 |
                        ~-(iVar176 < -0x2204) & ~(byte)iVar142 & 0xf;
          auVar189[9] = (byte)((uVar71 >> 10) >> 8) & (byte)((uint)iVar142 >> 8);
          auVar189[10] = (byte)(uVar71 >> 0x1a) & (byte)((uint)iVar142 >> 0x10);
          auVar189[0xb] = 0;
          auVar189[0xc] =
               bStack_134 & 0xf0 | (byte)(uVar73 >> 10) & (byte)iVar191 |
               ~-(iVar100 < -0x2204) & ~(byte)iVar191 & 0xf;
          auVar189[0xd] = (byte)((uVar73 >> 10) >> 8) & (byte)((uint)iVar191 >> 8);
          auVar189[0xe] = (byte)(uVar73 >> 0x1a) & (byte)((uint)iVar191 >> 0x10);
          auVar189[0xf] = 0;
          auVar103 = NEON_umull((ulong)CONCAT16(puVar26[7],
                                                (uint6)CONCAT14(puVar24[5],
                                                                (uint)CONCAT12(puVar22[3],
                                                                               (ushort)(byte)puVar20
                                                  [1]))),0x4a854a854a854a85,2);
          uVar132 = (uint)(byte)puVar28[9] * 0x4a85;
          uVar133 = (uint)(byte)puVar30[0xb] * 0x4a85;
          uVar144 = (uint)(byte)puVar32[0xd] * 0x4a85;
          uVar146 = (uint)(byte)puVar34[0xf] * 0x4a85;
          auVar82 = NEON_umull((ulong)CONCAT16((*pauVar41)[7],
                                               (uint6)CONCAT14((*pauVar39)[5],
                                                               (uint)CONCAT12((*pauVar37)[3],
                                                                              (ushort)(byte)(*
                                                  pauVar35)[1]))),0x4a854a854a854a85,2);
          uVar148 = (uint)(byte)(*pauVar43)[9] * 0x4a85;
          uVar150 = (uint)(byte)(*pauVar45)[0xb] * 0x4a85;
          uVar153 = (uint)(byte)(*pauVar47)[0xd] * 0x4a85;
          uVar160 = (uint)(byte)(*pauVar49)[0xf] * 0x4a85;
          auVar13._8_8_ = 0x3c3834302c282420;
          auVar13._0_8_ = 0x1c1814100c080400;
          auVar12._8_8_ = 0x3c3834302c282420;
          auVar12._0_8_ = 0x1c1814100c080400;
          auVar11._8_8_ = 0x3c3834302c282420;
          auVar11._0_8_ = 0x1c1814100c080400;
          auVar10._8_8_ = 0x3c3834302c282420;
          auVar10._0_8_ = 0x1c1814100c080400;
          auVar58 = a64_TBL(ZEXT816(0),auVar59,auVar64,auVar76,auVar83,auVar10);
          uVar97 = auVar103._0_4_;
          uVar98 = auVar103._4_4_;
          uVar99 = auVar103._8_4_;
          uVar214 = auVar103._12_4_;
          uVar204 = uVar204 + (uVar97 >> 8);
          uVar207 = uVar207 + (uVar98 >> 8);
          uVar209 = uVar209 + (uVar99 >> 8);
          uVar211 = uVar211 + (uVar214 >> 8);
          uVar116 = uVar116 + ((uint)(CONCAT44(uVar133,uVar132) >> 8) & 0xffffff);
          uVar117 = uVar117 + (uVar133 >> 8);
          uVar118 = uVar118 + (uVar144 >> 8);
          uVar119 = uVar119 + (uVar146 >> 8);
          uVar164 = auVar82._0_4_;
          uVar167 = auVar82._4_4_;
          uVar170 = auVar82._8_4_;
          uVar174 = auVar82._12_4_;
          uVar112 = uVar112 + (uVar164 >> 8);
          uVar113 = uVar113 + (uVar167 >> 8);
          uVar114 = uVar114 + (uVar170 >> 8);
          uVar115 = uVar115 + (uVar174 >> 8);
          uVar108 = uVar108 + (uVar148 >> 8);
          uVar109 = uVar109 + (uVar150 >> 8);
          uVar110 = uVar110 + (uVar153 >> 8);
          uVar111 = uVar111 + (uVar160 >> 8);
          uVar60 = uVar108 - 0x379a;
          uVar69 = uVar109 - 0x379a;
          uVar71 = uVar110 - 0x379a;
          uVar73 = uVar111 - 0x379a;
          uVar80 = uVar112 - 0x379a;
          uVar87 = uVar113 - 0x379a;
          uVar90 = uVar114 - 0x379a;
          uVar93 = uVar115 - 0x379a;
          auVar77._0_4_ = -(uint)(uVar60 < 0x4000);
          auVar77._4_4_ = -(uint)(uVar69 < 0x4000);
          auVar77._8_4_ = -(uint)(uVar71 < 0x4000);
          auVar77._12_4_ = -(uint)(uVar73 < 0x4000);
          auVar65._0_4_ = uVar60 >> 6;
          auVar65._4_4_ = uVar69 >> 6;
          auVar65._8_4_ = uVar71 >> 6;
          auVar65._12_4_ = uVar73 >> 6;
          iVar70 = -(uint)(uVar109 < 0x379a);
          iVar74 = -(uint)(uVar110 < 0x379a);
          iVar127 = -(uint)(uVar111 < 0x379a);
          auVar137[0] = ~-(uVar108 < 0x379a);
          auVar137._1_3_ = 0;
          auVar137[4] = ~(byte)iVar70;
          auVar137._5_2_ = 0;
          auVar137[7] = ~(byte)((uint)iVar70 >> 0x18);
          auVar137[8] = ~(byte)iVar74;
          auVar137[9] = ~(byte)((uint)iVar74 >> 8);
          auVar137[10] = ~(byte)((uint)iVar74 >> 0x10);
          auVar137[0xb] = ~(byte)((uint)iVar74 >> 0x18);
          auVar137[0xc] = ~(byte)iVar127;
          auVar137[0xd] = ~(byte)((uint)iVar127 >> 8);
          auVar137[0xe] = ~(byte)((uint)iVar127 >> 0x10);
          auVar137[0xf] = ~(byte)((uint)iVar127 >> 0x18);
          auVar65 = auVar65 ^ (auVar65 ^ auVar137) & ~auVar77;
          uVar60 = uVar116 - 0x379a;
          uVar69 = uVar117 - 0x379a;
          uVar71 = uVar118 - 0x379a;
          uVar73 = uVar119 - 0x379a;
          auVar138._0_8_ = CONCAT44(-(uint)(uVar87 < 0x4000),-(uint)(uVar80 < 0x4000));
          auVar138._8_4_ = -(uint)(uVar90 < 0x4000);
          auVar138._12_4_ = -(uint)(uVar93 < 0x4000);
          auVar84._0_4_ = uVar80 >> 6;
          auVar84._4_4_ = uVar87 >> 6;
          auVar84._8_4_ = uVar90 >> 6;
          auVar84._12_4_ = uVar93 >> 6;
          iVar70 = -(uint)(uVar113 < 0x379a);
          iVar74 = -(uint)(uVar114 < 0x379a);
          iVar127 = -(uint)(uVar115 < 0x379a);
          auVar79[0] = ~-(uVar112 < 0x379a);
          auVar79._1_3_ = 0;
          auVar79[4] = ~(byte)iVar70;
          auVar79._5_2_ = 0;
          auVar79[7] = ~(byte)((uint)iVar70 >> 0x18);
          auVar79[8] = ~(byte)iVar74;
          auVar79[9] = ~(byte)((uint)iVar74 >> 8);
          auVar79[10] = ~(byte)((uint)iVar74 >> 0x10);
          auVar79[0xb] = ~(byte)((uint)iVar74 >> 0x18);
          auVar79[0xc] = ~(byte)iVar127;
          auVar79[0xd] = ~(byte)((uint)iVar127 >> 8);
          auVar79[0xe] = ~(byte)((uint)iVar127 >> 0x10);
          auVar79[0xf] = ~(byte)((uint)iVar127 >> 0x18);
          auVar78._8_8_ = auVar138._8_8_;
          auVar78._0_8_ = auVar138._0_8_;
          auVar79 = auVar79 ^ (auVar79 ^ auVar84) & auVar78;
          uVar80 = uVar204 - 0x379a;
          uVar87 = uVar207 - 0x379a;
          uVar90 = uVar209 - 0x379a;
          uVar93 = uVar211 - 0x379a;
          auVar85._0_4_ = -(uint)(uVar60 < 0x4000);
          auVar85._4_4_ = -(uint)(uVar69 < 0x4000);
          auVar85._8_4_ = -(uint)(uVar71 < 0x4000);
          auVar85._12_4_ = -(uint)(uVar73 < 0x4000);
          auVar66._0_4_ = uVar60 >> 6;
          auVar66._4_4_ = uVar69 >> 6;
          auVar66._8_4_ = uVar71 >> 6;
          auVar66._12_4_ = uVar73 >> 6;
          iVar70 = -(uint)(uVar117 < 0x379a);
          iVar74 = -(uint)(uVar118 < 0x379a);
          iVar127 = -(uint)(uVar119 < 0x379a);
          auVar86[0] = ~-(uVar116 < 0x379a);
          auVar86._1_3_ = 0;
          auVar86[4] = ~(byte)iVar70;
          auVar86._5_2_ = 0;
          auVar86[7] = ~(byte)((uint)iVar70 >> 0x18);
          auVar86[8] = ~(byte)iVar74;
          auVar86[9] = ~(byte)((uint)iVar74 >> 8);
          auVar86[10] = ~(byte)((uint)iVar74 >> 0x10);
          auVar86[0xb] = ~(byte)((uint)iVar74 >> 0x18);
          auVar86[0xc] = ~(byte)iVar127;
          auVar86[0xd] = ~(byte)((uint)iVar127 >> 8);
          auVar86[0xe] = ~(byte)((uint)iVar127 >> 0x10);
          auVar86[0xf] = ~(byte)((uint)iVar127 >> 0x18);
          auVar86 = auVar86 ^ (auVar86 ^ auVar66) & auVar85;
          auVar67._0_4_ = -(uint)(uVar80 < 0x4000);
          auVar67._4_4_ = -(uint)(uVar87 < 0x4000);
          auVar67._8_4_ = -(uint)(uVar90 < 0x4000);
          auVar67._12_4_ = -(uint)(uVar93 < 0x4000);
          auVar139._0_4_ = uVar80 >> 6;
          auVar139._4_4_ = uVar87 >> 6;
          auVar139._8_4_ = uVar90 >> 6;
          auVar139._12_4_ = uVar93 >> 6;
          iVar70 = -(uint)(uVar207 < 0x379a);
          iVar74 = -(uint)(uVar209 < 0x379a);
          iVar127 = -(uint)(uVar211 < 0x379a);
          auVar68[0] = ~-(uVar204 < 0x379a);
          auVar68._1_3_ = 0;
          auVar68[4] = ~(byte)iVar70;
          auVar68._5_2_ = 0;
          auVar68[7] = ~(byte)((uint)iVar70 >> 0x18);
          auVar68[8] = ~(byte)iVar74;
          auVar68[9] = ~(byte)((uint)iVar74 >> 8);
          auVar68[10] = ~(byte)((uint)iVar74 >> 0x10);
          auVar68[0xb] = ~(byte)((uint)iVar74 >> 0x18);
          auVar68[0xc] = ~(byte)iVar127;
          auVar68[0xd] = ~(byte)((uint)iVar127 >> 8);
          auVar68[0xe] = ~(byte)((uint)iVar127 >> 0x10);
          auVar68[0xf] = ~(byte)((uint)iVar127 >> 0x18);
          auVar68 = auVar68 ^ (auVar68 ^ auVar139) & auVar67;
          auVar195[1] = (byte)((uVar155 >> 10) >> 8) & (byte)((uint)iVar134 >> 8);
          auVar195[0] = (byte)uVar61 | (byte)(uVar155 >> 10) & (byte)iVar134 | (byte)uVar75;
          auVar195[2] = (byte)(uVar155 >> 0x1a) & (byte)((uint)iVar134 >> 0x10);
          auVar195[3] = 0;
          auVar195[4] = (byte)(uVar61 >> 0x20) | (byte)(uVar156 >> 10) & (byte)iVar140 |
                        (byte)(uVar75 >> 0x20);
          auVar195[5] = (byte)((uVar156 >> 10) >> 8) & (byte)((uint)iVar140 >> 8);
          auVar195[6] = (byte)(uVar156 >> 0x1a) & (byte)((uint)iVar140 >> 0x10);
          auVar195[7] = 0;
          auVar195[8] = auVar126[8] & 0xf0 | (byte)(uVar162 >> 10) & (byte)iVar141 |
                        ~-(iVar157 < -0x2204) & ~(byte)iVar141 & 0xf;
          auVar195[9] = (byte)((uVar162 >> 10) >> 8) & (byte)((uint)iVar141 >> 8);
          auVar195[10] = (byte)(uVar162 >> 0x1a) & (byte)((uint)iVar141 >> 0x10);
          auVar195[0xb] = 0;
          auVar195[0xc] =
               auVar126[0xc] & 0xf0 | (byte)(uVar163 >> 10) & (byte)iVar188 |
               ~-(iVar169 < -0x2204) & ~(byte)iVar188 & 0xf;
          auVar195[0xd] = (byte)((uVar163 >> 10) >> 8) & (byte)((uint)iVar188 >> 8);
          auVar195[0xe] = (byte)(uVar163 >> 0x1a) & (byte)((uint)iVar188 >> 0x10);
          auVar195[0xf] = 0;
          auVar5[1] = (byte)((uVar175 >> 10) >> 8) & (byte)((uint)iVar72 >> 8);
          auVar5[0] = auVar62[0] & 0xf0 | (byte)(uVar175 >> 10) & (byte)iVar72 | (byte)uVar135;
          auVar5[2] = (byte)(uVar175 >> 0x1a) & (byte)((uint)iVar72 >> 0x10);
          auVar5[3] = 0;
          auVar5[4] = auVar62[4] & 0xf0 | (byte)(uVar177 >> 10) & (byte)iVar128 |
                      (byte)(uVar135 >> 0x20);
          auVar5[5] = (byte)((uVar177 >> 10) >> 8) & (byte)((uint)iVar128 >> 8);
          auVar5[6] = (byte)(uVar177 >> 0x1a) & (byte)((uint)iVar128 >> 0x10);
          auVar5[7] = 0;
          auVar5[8] = auVar62[8] & 0xf0 | (byte)(uVar88 >> 10) & (byte)iVar178 |
                      ~-(iVar192 < -0x2204) & ~(byte)iVar178 & 0xf;
          auVar5[9] = (byte)((uVar88 >> 10) >> 8) & (byte)((uint)iVar178 >> 8);
          auVar5[10] = (byte)(uVar88 >> 0x1a) & (byte)((uint)iVar178 >> 0x10);
          auVar5[0xb] = 0;
          auVar5[0xc] = auVar62[0xc] & 0xf0 | (byte)(uVar89 >> 10) & (byte)iVar166 |
                        ~-(iVar193 < -0x2204) & ~(byte)iVar166 & 0xf;
          auVar5[0xd] = (byte)((uVar89 >> 10) >> 8) & (byte)((uint)iVar166 >> 8);
          auVar5[0xe] = (byte)(uVar89 >> 0x1a) & (byte)((uint)iVar166 >> 0x10);
          auVar5[0xf] = 0;
          auVar82 = a64_TBL(ZEXT816(0),auVar189,auVar195,auVar199,auVar5,auVar11);
          uVar194 = uVar194 + (uVar148 >> 8);
          uVar201 = uVar201 + (uVar150 >> 8);
          uVar202 = uVar202 + (uVar153 >> 8);
          uVar203 = uVar203 + (uVar160 >> 8);
          uVar215 = uVar215 + (uVar164 >> 8);
          uVar217 = uVar217 + (uVar167 >> 8);
          uVar219 = uVar219 + (uVar170 >> 8);
          uVar221 = uVar221 + (uVar174 >> 8);
          uVar205 = uVar205 + (uVar132 >> 8);
          uVar208 = uVar208 + (uVar133 >> 8);
          uVar210 = uVar210 + (uVar144 >> 8);
          uVar212 = uVar212 + (uVar146 >> 8);
          uVar60 = uVar215 - 0x4515;
          uVar71 = uVar217 - 0x4515;
          uVar80 = uVar219 - 0x4515;
          uVar90 = uVar221 - 0x4515;
          uVar175 = uVar194 - 0x4515;
          uVar88 = uVar201 - 0x4515;
          uVar91 = uVar202 - 0x4515;
          uVar143 = uVar203 - 0x4515;
          iVar157 = -(uint)(uVar175 < 0x4000);
          iVar100 = -(uint)(uVar88 < 0x4000);
          iVar166 = -(uint)(uVar91 < 0x4000);
          iVar169 = -(uint)(uVar143 < 0x4000);
          iVar70 = -(uint)(uVar60 < 0x4000);
          iVar72 = -(uint)(uVar71 < 0x4000);
          iVar74 = -(uint)(uVar80 < 0x4000);
          iVar127 = -(uint)(uVar90 < 0x4000);
          uVar69 = uVar60 >> 6;
          uVar73 = uVar71 >> 6;
          uVar87 = uVar80 >> 6;
          uVar177 = uVar175 >> 6;
          uVar89 = uVar88 >> 6;
          uVar92 = uVar91 >> 6;
          uVar56 = CONCAT14(~-(uVar201 < 0x4515) & ~(byte)iVar100,
                            (uint)(~-(uVar194 < 0x4515) & ~(byte)iVar157 & 0xf0)) & 0xf0ffffffff;
          uVar61 = CONCAT14(~-(uVar217 < 0x4515) & ~(byte)iVar72,
                            (uint)(~-(uVar215 < 0x4515) & ~(byte)iVar70 & 0xf0)) & 0xf0ffffffff;
          auVar200[0] = (byte)uVar69 & (byte)iVar70 | (byte)uVar61;
          auVar200[1] = (byte)(uVar69 >> 8) & (byte)((uint)iVar70 >> 8);
          auVar200[2] = (byte)(uVar69 >> 0x10) & (byte)((uint)iVar70 >> 0x10);
          auVar200[3] = (byte)(uVar60 >> 0x1e) & (byte)((uint)iVar70 >> 0x18);
          auVar200[4] = (byte)uVar73 & (byte)iVar72 | (byte)(uVar61 >> 0x20);
          auVar200[5] = (byte)(uVar73 >> 8) & (byte)((uint)iVar72 >> 8);
          auVar200[6] = (byte)(uVar73 >> 0x10) & (byte)((uint)iVar72 >> 0x10);
          auVar200[7] = (byte)(uVar71 >> 0x1e) & (byte)((uint)iVar72 >> 0x18);
          auVar200[8] = (byte)uVar87 & (byte)iVar74 | ~-(uVar219 < 0x4515) & ~(byte)iVar74 & 0xf0;
          auVar200[9] = (byte)(uVar87 >> 8) & (byte)((uint)iVar74 >> 8);
          auVar200[10] = (byte)(uVar87 >> 0x10) & (byte)((uint)iVar74 >> 0x10);
          auVar200[0xb] = (byte)(uVar80 >> 0x1e) & (byte)((uint)iVar74 >> 0x18);
          auVar200[0xc] =
               (byte)(uVar90 >> 6) & (byte)iVar127 | ~-(uVar221 < 0x4515) & ~(byte)iVar127 & 0xf0;
          auVar200[0xd] = (byte)((uVar90 >> 6) >> 8) & (byte)((uint)iVar127 >> 8);
          auVar200[0xe] = (byte)((uint3)(uVar90 >> 0xe) >> 8) & (byte)((uint)iVar127 >> 0x10);
          auVar200[0xf] = (byte)(uVar90 >> 0x1e) & (byte)((uint)iVar127 >> 0x18);
          uVar60 = uVar205 - 0x4515;
          uVar80 = uVar208 - 0x4515;
          uVar155 = uVar210 - 0x4515;
          uVar130 = uVar212 - 0x4515;
          iVar70 = -(uint)(uVar60 < 0x4000);
          iVar74 = -(uint)(uVar80 < 0x4000);
          iVar128 = -(uint)(uVar155 < 0x4000);
          iVar176 = -(uint)(uVar130 < 0x4000);
          uVar69 = uVar60 >> 6;
          uVar87 = uVar80 >> 6;
          uVar156 = uVar155 >> 6;
          uVar194 = (auVar96._0_4_ >> 8) + (uVar97 >> 8);
          uVar201 = (auVar96._4_4_ >> 8) + (uVar98 >> 8);
          uVar108 = (auVar96._8_4_ >> 8) + (uVar99 >> 8);
          uVar109 = (auVar96._12_4_ >> 8) + (uVar214 >> 8);
          uVar61 = CONCAT14(~-(uVar208 < 0x4515) & ~(byte)iVar74,
                            (uint)(~-(uVar205 < 0x4515) & ~(byte)iVar70 & 0xf0)) & 0xf0ffffffff;
          uVar71 = uVar194 - 0x4515;
          uVar90 = uVar201 - 0x4515;
          uVar162 = uVar108 - 0x4515;
          uVar131 = uVar109 - 0x4515;
          iVar72 = -(uint)(uVar71 < 0x4000);
          iVar127 = -(uint)(uVar90 < 0x4000);
          iVar129 = -(uint)(uVar162 < 0x4000);
          iVar178 = -(uint)(uVar131 < 0x4000);
          uVar73 = uVar71 >> 6;
          uVar93 = uVar90 >> 6;
          uVar163 = uVar162 >> 6;
          uVar75 = CONCAT14(~-(uVar201 < 0x4515) & ~(byte)iVar127,
                            (uint)(~-(uVar194 < 0x4515) & ~(byte)iVar72 & 0xf0)) & 0xf0ffffffff;
          auVar190[0] = (byte)uVar73 & (byte)iVar72 | (byte)uVar75;
          auVar190[1] = (byte)(uVar73 >> 8) & (byte)((uint)iVar72 >> 8);
          auVar190[2] = (byte)(uVar73 >> 0x10) & (byte)((uint)iVar72 >> 0x10);
          auVar190[3] = (byte)(uVar71 >> 0x1e) & (byte)((uint)iVar72 >> 0x18);
          auVar190[4] = (byte)uVar93 & (byte)iVar127 | (byte)(uVar75 >> 0x20);
          auVar190[5] = (byte)(uVar93 >> 8) & (byte)((uint)iVar127 >> 8);
          auVar190[6] = (byte)(uVar93 >> 0x10) & (byte)((uint)iVar127 >> 0x10);
          auVar190[7] = (byte)(uVar90 >> 0x1e) & (byte)((uint)iVar127 >> 0x18);
          auVar190[8] = (byte)uVar163 & (byte)iVar129 | ~-(uVar108 < 0x4515) & ~(byte)iVar129 & 0xf0
          ;
          auVar190[9] = (byte)(uVar163 >> 8) & (byte)((uint)iVar129 >> 8);
          auVar190[10] = (byte)(uVar163 >> 0x10) & (byte)((uint)iVar129 >> 0x10);
          auVar190[0xb] = (byte)(uVar162 >> 0x1e) & (byte)((uint)iVar129 >> 0x18);
          auVar190[0xc] =
               (byte)(uVar131 >> 6) & (byte)iVar178 | ~-(uVar109 < 0x4515) & ~(byte)iVar178 & 0xf0;
          auVar190[0xd] = (byte)((uVar131 >> 6) >> 8) & (byte)((uint)iVar178 >> 8);
          auVar190[0xe] = (byte)((uint3)(uVar131 >> 0xe) >> 8) & (byte)((uint)iVar178 >> 0x10);
          auVar190[0xf] = (byte)(uVar131 >> 0x1e) & (byte)((uint)iVar178 >> 0x18);
          iVar101 = (uVar97 >> 8) - iVar101;
          iVar104 = (uVar98 >> 8) - iVar104;
          iVar105 = (uVar99 >> 8) - iVar105;
          iVar106 = (uVar214 >> 8) - iVar106;
          iVar145 = (uVar132 >> 8) - iVar145;
          iVar147 = (uVar133 >> 8) - iVar147;
          iVar149 = (uVar144 >> 8) - iVar149;
          iVar151 = (uVar146 >> 8) - iVar151;
          iVar154 = (uVar164 >> 8) - iVar154;
          iVar161 = (uVar167 >> 8) - iVar161;
          iVar165 = (uVar170 >> 8) - iVar165;
          iVar168 = (uVar174 >> 8) - iVar168;
          iVar120 = (uVar148 >> 8) - iVar120;
          iVar121 = (uVar150 >> 8) - iVar121;
          iVar122 = (uVar153 >> 8) - iVar122;
          iVar123 = (uVar160 >> 8) - iVar123;
          auVar4[1] = (byte)(uVar69 >> 8) & (byte)((uint)iVar70 >> 8);
          auVar4[0] = (byte)uVar69 & (byte)iVar70 | (byte)uVar61;
          auVar4[2] = (byte)(uVar69 >> 0x10) & (byte)((uint)iVar70 >> 0x10);
          auVar4[3] = (byte)(uVar60 >> 0x1e) & (byte)((uint)iVar70 >> 0x18);
          auVar4[4] = (byte)uVar87 & (byte)iVar74 | (byte)(uVar61 >> 0x20);
          auVar4[5] = (byte)(uVar87 >> 8) & (byte)((uint)iVar74 >> 8);
          auVar4[6] = (byte)(uVar87 >> 0x10) & (byte)((uint)iVar74 >> 0x10);
          auVar4[7] = (byte)(uVar80 >> 0x1e) & (byte)((uint)iVar74 >> 0x18);
          auVar4[8] = (byte)uVar156 & (byte)iVar128 | ~-(uVar210 < 0x4515) & ~(byte)iVar128 & 0xf0;
          auVar4[9] = (byte)(uVar156 >> 8) & (byte)((uint)iVar128 >> 8);
          auVar4[10] = (byte)(uVar156 >> 0x10) & (byte)((uint)iVar128 >> 0x10);
          auVar4[0xb] = (byte)(uVar155 >> 0x1e) & (byte)((uint)iVar128 >> 0x18);
          auVar4[0xc] = (byte)(uVar130 >> 6) & (byte)iVar176 |
                        ~-(uVar212 < 0x4515) & ~(byte)iVar176 & 0xf0;
          auVar4[0xd] = (byte)((uVar130 >> 6) >> 8) & (byte)((uint)iVar176 >> 8);
          auVar4[0xe] = (byte)((uint3)(uVar130 >> 0xe) >> 8) & (byte)((uint)iVar176 >> 0x10);
          auVar4[0xf] = (byte)(uVar130 >> 0x1e) & (byte)((uint)iVar176 >> 0x18);
          auVar6[1] = (byte)(uVar177 >> 8) & (byte)((uint)iVar157 >> 8);
          auVar6[0] = (byte)uVar177 & (byte)iVar157 | (byte)uVar56;
          auVar6[2] = (byte)(uVar177 >> 0x10) & (byte)((uint)iVar157 >> 0x10);
          auVar6[3] = (byte)(uVar175 >> 0x1e) & (byte)((uint)iVar157 >> 0x18);
          auVar6[4] = (byte)uVar89 & (byte)iVar100 | (byte)(uVar56 >> 0x20);
          auVar6[5] = (byte)(uVar89 >> 8) & (byte)((uint)iVar100 >> 8);
          auVar6[6] = (byte)(uVar89 >> 0x10) & (byte)((uint)iVar100 >> 0x10);
          auVar6[7] = (byte)(uVar88 >> 0x1e) & (byte)((uint)iVar100 >> 0x18);
          auVar6[8] = (byte)uVar92 & (byte)iVar166 | ~-(uVar202 < 0x4515) & ~(byte)iVar166 & 0xf0;
          auVar6[9] = (byte)(uVar92 >> 8) & (byte)((uint)iVar166 >> 8);
          auVar6[10] = (byte)(uVar92 >> 0x10) & (byte)((uint)iVar166 >> 0x10);
          auVar6[0xb] = (byte)(uVar91 >> 0x1e) & (byte)((uint)iVar166 >> 0x18);
          auVar6[0xc] = (byte)(uVar143 >> 6) & (byte)iVar169 |
                        ~-(uVar203 < 0x4515) & ~(byte)iVar169 & 0xf0;
          auVar6[0xd] = (byte)((uVar143 >> 6) >> 8) & (byte)((uint)iVar169 >> 8);
          auVar6[0xe] = (byte)((uint3)(uVar143 >> 0xe) >> 8) & (byte)((uint)iVar169 >> 0x10);
          auVar6[0xf] = (byte)(uVar143 >> 0x1e) & (byte)((uint)iVar169 >> 0x18);
          auVar195 = a64_TBL(ZEXT816(0),auVar190,auVar4,auVar200,auVar6,auVar12);
          uVar80 = iVar120 + 0x2204;
          uVar87 = iVar121 + 0x2204;
          uVar90 = iVar122 + 0x2204;
          uVar93 = iVar123 + 0x2204;
          uVar155 = iVar154 + 0x2204;
          uVar156 = iVar161 + 0x2204;
          uVar162 = iVar165 + 0x2204;
          uVar163 = iVar168 + 0x2204;
          iVar128 = -(uint)(uVar155 < 0x4000);
          iVar176 = -(uint)(uVar156 < 0x4000);
          iVar157 = -(uint)(uVar162 < 0x4000);
          iVar166 = -(uint)(uVar163 < 0x4000);
          iVar129 = -(uint)(uVar80 < 0x4000);
          iVar178 = -(uint)(uVar87 < 0x4000);
          iVar100 = -(uint)(uVar90 < 0x4000);
          iVar169 = -(uint)(uVar93 < 0x4000);
          uVar135 = CONCAT14(~-(iVar161 < -0x2204) & ~(byte)iVar176,
                             (uint)(~-(iVar154 < -0x2204) & ~(byte)iVar128 & 0xf)) & 0xfffffffff;
          uVar171 = CONCAT14(auVar79[4],(uint)(auVar79[0] & 0xf0)) & 0xf0ffffffff;
          uVar95 = CONCAT14(~-(iVar121 < -0x2204) & ~(byte)iVar178,
                            (uint)(~-(iVar120 < -0x2204) & ~(byte)iVar129 & 0xf)) & 0xfffffffff;
          bStack_c0 = auVar65[0];
          uStack_bc = auVar65[4];
          bStack_b8 = auVar65[8];
          bStack_b4 = auVar65[0xc];
          uVar75 = CONCAT14(uStack_bc,(uint)(bStack_c0 & 0xf0)) & 0xf0ffffffff;
          uVar60 = iVar145 + 0x2204;
          uVar69 = iVar147 + 0x2204;
          uVar71 = iVar149 + 0x2204;
          uVar73 = iVar151 + 0x2204;
          iVar70 = -(uint)(uVar60 < 0x4000);
          iVar72 = -(uint)(uVar69 < 0x4000);
          iVar74 = -(uint)(uVar71 < 0x4000);
          iVar127 = -(uint)(uVar73 < 0x4000);
          uVar56 = CONCAT14(auVar86[4],(uint)(auVar86[0] & 0xf0)) & 0xf0ffffffff;
          uVar61 = CONCAT14(~-(iVar147 < -0x2204) & ~(byte)iVar72,
                            (uint)(~-(iVar145 < -0x2204) & ~(byte)iVar70 & 0xf)) & 0xfffffffff;
          auVar173[0] = (byte)uVar56 | (byte)(uVar60 >> 10) & (byte)iVar70 | (byte)uVar61;
          auVar173[1] = (byte)((uVar60 >> 10) >> 8) & (byte)((uint)iVar70 >> 8);
          auVar173[2] = (byte)(uVar60 >> 0x1a) & (byte)((uint)iVar70 >> 0x10);
          auVar173[3] = 0;
          auVar173[4] = (byte)(uVar56 >> 0x20) | (byte)(uVar69 >> 10) & (byte)iVar72 |
                        (byte)(uVar61 >> 0x20);
          auVar173[5] = (byte)((uVar69 >> 10) >> 8) & (byte)((uint)iVar72 >> 8);
          auVar173[6] = (byte)(uVar69 >> 0x1a) & (byte)((uint)iVar72 >> 0x10);
          auVar173[7] = 0;
          auVar173[8] = auVar86[8] & 0xf0 | (byte)(uVar71 >> 10) & (byte)iVar74 |
                        ~-(iVar149 < -0x2204) & ~(byte)iVar74 & 0xf;
          auVar173[9] = (byte)((uVar71 >> 10) >> 8) & (byte)((uint)iVar74 >> 8);
          auVar173[10] = (byte)(uVar71 >> 0x1a) & (byte)((uint)iVar74 >> 0x10);
          auVar173[0xb] = 0;
          auVar173[0xc] =
               auVar86[0xc] & 0xf0 | (byte)(uVar73 >> 10) & (byte)iVar127 |
               ~-(iVar151 < -0x2204) & ~(byte)iVar127 & 0xf;
          auVar173[0xd] = (byte)((uVar73 >> 10) >> 8) & (byte)((uint)iVar127 >> 8);
          auVar173[0xe] = (byte)(uVar73 >> 0x1a) & (byte)((uint)iVar127 >> 0x10);
          auVar173[0xf] = 0;
          uVar60 = iVar101 + 0x2204;
          uVar69 = iVar104 + 0x2204;
          uVar71 = iVar105 + 0x2204;
          uVar73 = iVar106 + 0x2204;
          iVar70 = -(uint)(uVar60 < 0x4000);
          iVar72 = -(uint)(uVar69 < 0x4000);
          iVar74 = -(uint)(uVar71 < 0x4000);
          iVar127 = -(uint)(uVar73 < 0x4000);
          uVar61 = CONCAT14(auVar68[4],(uint)(auVar68[0] & 0xf0)) & 0xf0ffffffff;
          uVar56 = CONCAT14(~-(iVar104 < -0x2204) & ~(byte)iVar72,
                            (uint)(~-(iVar101 < -0x2204) & ~(byte)iVar70 & 0xf)) & 0xfffffffff;
          auVar159[0] = (byte)uVar61 | (byte)(uVar60 >> 10) & (byte)iVar70 | (byte)uVar56;
          auVar159[1] = (byte)((uVar60 >> 10) >> 8) & (byte)((uint)iVar70 >> 8);
          auVar159[2] = (byte)(uVar60 >> 0x1a) & (byte)((uint)iVar70 >> 0x10);
          auVar159[3] = 0;
          auVar159[4] = (byte)(uVar61 >> 0x20) | (byte)(uVar69 >> 10) & (byte)iVar72 |
                        (byte)(uVar56 >> 0x20);
          auVar159[5] = (byte)((uVar69 >> 10) >> 8) & (byte)((uint)iVar72 >> 8);
          auVar159[6] = (byte)(uVar69 >> 0x1a) & (byte)((uint)iVar72 >> 0x10);
          auVar159[7] = 0;
          auVar159[8] = auVar68[8] & 0xf0 | (byte)(uVar71 >> 10) & (byte)iVar74 |
                        ~-(iVar105 < -0x2204) & ~(byte)iVar74 & 0xf;
          auVar159[9] = (byte)((uVar71 >> 10) >> 8) & (byte)((uint)iVar74 >> 8);
          auVar159[10] = (byte)(uVar71 >> 0x1a) & (byte)((uint)iVar74 >> 0x10);
          auVar159[0xb] = 0;
          auVar159[0xc] =
               auVar68[0xc] & 0xf0 | (byte)(uVar73 >> 10) & (byte)iVar127 |
               ~-(iVar106 < -0x2204) & ~(byte)iVar127 & 0xf;
          auVar159[0xd] = (byte)((uVar73 >> 10) >> 8) & (byte)((uint)iVar127 >> 8);
          auVar159[0xe] = (byte)(uVar73 >> 0x1a) & (byte)((uint)iVar127 >> 0x10);
          auVar159[0xf] = 0;
          uVar8 = auVar195._0_3_ | 0xf0f;
          uVar9 = auVar195._8_3_ | 0xf0f;
          auVar96[1] = (byte)((uVar155 >> 10) >> 8) & (byte)((uint)iVar128 >> 8);
          auVar96[0] = (byte)uVar171 | (byte)(uVar155 >> 10) & (byte)iVar128 | (byte)uVar135;
          auVar96[2] = (byte)(uVar155 >> 0x1a) & (byte)((uint)iVar128 >> 0x10);
          auVar96[3] = 0;
          auVar96[4] = (byte)(uVar171 >> 0x20) | (byte)(uVar156 >> 10) & (byte)iVar176 |
                       (byte)(uVar135 >> 0x20);
          auVar96[5] = (byte)((uVar156 >> 10) >> 8) & (byte)((uint)iVar176 >> 8);
          auVar96[6] = (byte)(uVar156 >> 0x1a) & (byte)((uint)iVar176 >> 0x10);
          auVar96[7] = 0;
          auVar96[8] = auVar79[8] & 0xf0 | (byte)(uVar162 >> 10) & (byte)iVar157 |
                       ~-(iVar165 < -0x2204) & ~(byte)iVar157 & 0xf;
          auVar96[9] = (byte)((uVar162 >> 10) >> 8) & (byte)((uint)iVar157 >> 8);
          auVar96[10] = (byte)(uVar162 >> 0x1a) & (byte)((uint)iVar157 >> 0x10);
          auVar96[0xb] = 0;
          auVar96[0xc] = auVar79[0xc] & 0xf0 | (byte)(uVar163 >> 10) & (byte)iVar166 |
                         ~-(iVar168 < -0x2204) & ~(byte)iVar166 & 0xf;
          auVar96[0xd] = (byte)((uVar163 >> 10) >> 8) & (byte)((uint)iVar166 >> 8);
          auVar96[0xe] = (byte)(uVar163 >> 0x1a) & (byte)((uint)iVar166 >> 0x10);
          auVar96[0xf] = 0;
          auVar103[1] = (byte)((uVar80 >> 10) >> 8) & (byte)((uint)iVar129 >> 8);
          auVar103[0] = (byte)uVar75 | (byte)(uVar80 >> 10) & (byte)iVar129 | (byte)uVar95;
          auVar103[2] = (byte)(uVar80 >> 0x1a) & (byte)((uint)iVar129 >> 0x10);
          auVar103[3] = 0;
          auVar103[4] = (byte)(uVar75 >> 0x20) | (byte)(uVar87 >> 10) & (byte)iVar178 |
                        (byte)(uVar95 >> 0x20);
          auVar103[5] = (byte)((uVar87 >> 10) >> 8) & (byte)((uint)iVar178 >> 8);
          auVar103[6] = (byte)(uVar87 >> 0x1a) & (byte)((uint)iVar178 >> 0x10);
          auVar103[7] = 0;
          auVar103[8] = bStack_b8 & 0xf0 | (byte)(uVar90 >> 10) & (byte)iVar100 |
                        ~-(iVar122 < -0x2204) & ~(byte)iVar100 & 0xf;
          auVar103[9] = (byte)((uVar90 >> 10) >> 8) & (byte)((uint)iVar100 >> 8);
          auVar103[10] = (byte)(uVar90 >> 0x1a) & (byte)((uint)iVar100 >> 0x10);
          auVar103[0xb] = 0;
          auVar103[0xc] =
               bStack_b4 & 0xf0 | (byte)(uVar93 >> 10) & (byte)iVar169 |
               ~-(iVar123 < -0x2204) & ~(byte)iVar169 & 0xf;
          auVar103[0xd] = (byte)((uVar93 >> 10) >> 8) & (byte)((uint)iVar169 >> 8);
          auVar103[0xe] = (byte)(uVar93 >> 0x1a) & (byte)((uint)iVar169 >> 0x10);
          auVar103[0xf] = 0;
          auVar96 = a64_TBL(ZEXT816(0),auVar159,auVar173,auVar96,auVar103,auVar13);
          (*param_4)[0] = auVar58[0] | 0xf;
          (*param_4)[1] = auVar82[0];
          (*param_4)[2] = (char)uVar8;
          (*param_4)[3] = auVar96[0];
          (*param_4)[4] = auVar58[1] | 0xf;
          (*param_4)[5] = auVar82[1];
          (*param_4)[6] = (char)(uVar8 >> 8);
          (*param_4)[7] = auVar96[1];
          (*param_4)[8] = auVar58[2] | 0xf;
          (*param_4)[9] = auVar82[2];
          (*param_4)[10] = auVar195[2] | 0xf;
          (*param_4)[0xb] = auVar96[2];
          (*param_4)[0xc] = auVar58[3] | 0xf;
          (*param_4)[0xd] = auVar82[3];
          (*param_4)[0xe] = auVar195[3] | 0xf;
          (*param_4)[0xf] = auVar96[3];
          param_4[1][0] = auVar58[4] | 0xf;
          param_4[1][1] = auVar82[4];
          param_4[1][2] = auVar195[4] | 0xf;
          param_4[1][3] = auVar96[4];
          param_4[1][4] = auVar58[5] | 0xf;
          param_4[1][5] = auVar82[5];
          param_4[1][6] = auVar195[5] | 0xf;
          param_4[1][7] = auVar96[5];
          param_4[1][8] = auVar58[6] | 0xf;
          param_4[1][9] = auVar82[6];
          param_4[1][10] = auVar195[6] | 0xf;
          param_4[1][0xb] = auVar96[6];
          param_4[1][0xc] = auVar58[7] | 0xf;
          param_4[1][0xd] = auVar82[7];
          param_4[1][0xe] = auVar195[7] | 0xf;
          param_4[1][0xf] = auVar96[7];
          param_4[2][0] = auVar58[8] | 0xf;
          param_4[2][1] = auVar82[8];
          param_4[2][2] = (char)uVar9;
          param_4[2][3] = auVar96[8];
          param_4[2][4] = auVar58[9] | 0xf;
          param_4[2][5] = auVar82[9];
          param_4[2][6] = (char)(uVar9 >> 8);
          param_4[2][7] = auVar96[9];
          param_4[2][8] = auVar58[10] | 0xf;
          param_4[2][9] = auVar82[10];
          param_4[2][10] = auVar195[10] | 0xf;
          param_4[2][0xb] = auVar96[10];
          param_4[2][0xc] = auVar58[0xb] | 0xf;
          param_4[2][0xd] = auVar82[0xb];
          param_4[2][0xe] = auVar195[0xb] | 0xf;
          param_4[2][0xf] = auVar96[0xb];
          param_4[3][0] = auVar58[0xc] | 0xf;
          param_4[3][1] = auVar82[0xc];
          param_4[3][2] = auVar195[0xc] | 0xf;
          param_4[3][3] = auVar96[0xc];
          param_4[3][4] = auVar58[0xd] | 0xf;
          param_4[3][5] = auVar82[0xd];
          param_4[3][6] = auVar195[0xd] | 0xf;
          param_4[3][7] = auVar96[0xd];
          param_4[3][8] = auVar58[0xe] | 0xf;
          param_4[3][9] = auVar82[0xe];
          param_4[3][10] = auVar195[0xe] | 0xf;
          param_4[3][0xb] = auVar96[0xe];
          param_4[3][0xc] = auVar58[0xf] | 0xf;
          param_4[3][0xd] = auVar82[0xf];
          param_4[3][0xe] = auVar195[0xf] | 0xf;
          param_4[3][0xf] = auVar96[0xf];
          param_4 = param_4 + 4;
          uVar54 = uVar54 - 0x10;
          param_2 = param_2 + 1;
          param_3 = param_3 + 1;
        } while (uVar54 != 0);
        param_1 = pauVar1;
        param_2 = pauVar51;
        param_3 = pauVar52;
        param_4 = (undefined1 (*) [16])(puVar18 + uVar55 * 4);
        if (uVar2 == uVar55) goto joined_r0x002377b0;
      }
    }
    do {
      uVar71 = (uint)(byte)(*param_1)[0] * 0x4a85 >> 8;
      uVar60 = uVar71 + ((uint)(byte)(*param_3)[0] * 0x6625 >> 8);
      uVar69 = uVar60 - 0x379a;
      bVar179 = 0;
      if (0x3799 < uVar60) {
        bVar179 = 0xf0;
      }
      bVar180 = (byte)(uVar69 >> 6);
      if (0x3fff < uVar69) {
        bVar180 = bVar179;
      }
      iVar70 = uVar71 - (((uint)(byte)(*param_2)[0] * 0x1913 >> 8) +
                        ((uint)(byte)(*param_3)[0] * 0x3408 >> 8));
      uVar60 = iVar70 + 0x2204;
      bVar179 = 0;
      if (-0x2205 < iVar70) {
        bVar179 = 0xf;
      }
      bVar181 = (byte)(uVar60 >> 10);
      if (0x3fff < uVar60) {
        bVar181 = bVar179;
      }
      uVar71 = uVar71 + ((uint)(byte)(*param_2)[0] * 0x811a >> 8);
      uVar60 = uVar71 - 0x4515;
      bVar179 = 0;
      if (0x4514 < uVar71) {
        bVar179 = 0xf0;
      }
      bVar182 = (byte)(uVar60 >> 6);
      if (0x3fff < uVar60) {
        bVar182 = bVar179;
      }
      (*param_4)[0] = bVar182 | 0xf;
      (*param_4)[1] = bVar180 & 0xf0 | bVar181;
      pauVar51 = (undefined1 (*) [16])(*param_2 + 1);
      pauVar52 = (undefined1 (*) [16])(*param_3 + 1);
      uVar71 = (uint)(byte)(*param_1)[1] * 0x4a85 >> 8;
      uVar60 = uVar71 + ((uint)(byte)(*param_3)[0] * 0x6625 >> 8);
      uVar69 = uVar60 - 0x379a;
      bVar179 = 0;
      if (0x3799 < uVar60) {
        bVar179 = 0xf0;
      }
      bVar180 = (byte)(uVar69 >> 6);
      if (0x3fff < uVar69) {
        bVar180 = bVar179;
      }
      iVar70 = uVar71 - (((uint)(byte)(*param_2)[0] * 0x1913 >> 8) +
                        ((uint)(byte)(*param_3)[0] * 0x3408 >> 8));
      uVar60 = iVar70 + 0x2204;
      bVar179 = 0;
      if (-0x2205 < iVar70) {
        bVar179 = 0xf;
      }
      bVar181 = (byte)(uVar60 >> 10);
      if (0x3fff < uVar60) {
        bVar181 = bVar179;
      }
      uVar71 = uVar71 + ((uint)(byte)(*param_2)[0] * 0x811a >> 8);
      uVar60 = uVar71 - 0x4515;
      bVar179 = 0;
      if (0x4514 < uVar71) {
        bVar179 = 0xf0;
      }
      bVar182 = (byte)(uVar60 >> 6);
      if (0x3fff < uVar60) {
        bVar182 = bVar179;
      }
      (*param_4)[2] = bVar182 | 0xf;
      (*param_4)[3] = bVar180 & 0xf0 | bVar181;
      pauVar1 = (undefined1 (*) [16])(*param_1 + 2);
      puVar18 = *param_4;
      param_1 = pauVar1;
      param_2 = pauVar51;
      param_3 = pauVar52;
      param_4 = (undefined1 (*) [16])(puVar18 + 4);
    } while ((undefined1 (*) [16])(puVar18 + 4) != pauVar3);
  }
joined_r0x002377b0:
  if ((param_5 & 1) != 0) {
    uVar71 = (uint)(byte)(*pauVar1)[0] * 0x4a85 >> 8;
    uVar60 = uVar71 + ((uint)(byte)(*pauVar52)[0] * 0x6625 >> 8);
    uVar69 = uVar60 - 0x379a;
    bVar179 = 0;
    if (0x3799 < uVar60) {
      bVar179 = 0xf0;
    }
    bVar180 = (byte)(uVar69 >> 6);
    if (0x3fff < uVar69) {
      bVar180 = bVar179;
    }
    iVar70 = uVar71 - (((uint)(byte)(*pauVar51)[0] * 0x1913 >> 8) +
                      ((uint)(byte)(*pauVar52)[0] * 0x3408 >> 8));
    uVar60 = iVar70 + 0x2204;
    bVar179 = 0;
    if (-0x2205 < iVar70) {
      bVar179 = 0xf;
    }
    bVar181 = (byte)(uVar60 >> 10);
    if (0x3fff < uVar60) {
      bVar181 = bVar179;
    }
    uVar71 = uVar71 + ((uint)(byte)(*pauVar51)[0] * 0x811a >> 8);
    uVar60 = uVar71 - 0x4515;
    bVar179 = 0;
    if (0x4514 < uVar71) {
      bVar179 = 0xf0;
    }
    bVar182 = (byte)(uVar60 >> 6);
    if (0x3fff < uVar60) {
      bVar182 = bVar179;
    }
    (*pauVar3)[0] = bVar182 | 0xf;
    (*pauVar3)[1] = bVar180 & 0xf0 | bVar181;
  }
  return;
}



/* Entry: 002389e0; end: 0023967b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002389e0(undefined1 (*param_1) [16],undefined8 *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  auVar7 = _UNK_007eeb70;
  if ((int)param_3 < 1) {
    return;
  }
  uVar8 = (ulong)param_3;
  if ((param_3 < 4) ||
     (bVar1 = *param_1 + uVar8 * 4 <= param_2,
     (!bVar1 && param_1 <= (undefined1 (*) [16])((long)param_2 + uVar8)) &&
     (bVar1 || (undefined1 (*) [16])((long)param_2 + uVar8) != param_1))) {
    uVar11 = 0;
  }
  else {
    if (param_3 < 0x10) {
      uVar10 = 0;
    }
    else {
      uVar11 = uVar8 & 0x7ffffff0;
      pauVar13 = param_1;
      puVar15 = param_2;
      uVar10 = uVar11;
      do {
        auVar5 = pauVar13[2];
        auVar6 = pauVar13[3];
        auVar3 = *pauVar13;
        auVar4 = pauVar13[1];
        auVar18 = NEON_umull((ulong)CONCAT16(auVar6[0xc],
                                             (uint6)CONCAT14(auVar6[8],
                                                             (uint)CONCAT12(auVar6[4],
                                                                            (ushort)auVar6[0]))),
                             0x1914191419141914,2);
        auVar19 = NEON_umull((ulong)CONCAT16(auVar5[0xc],
                                             (uint6)CONCAT14(auVar5[8],
                                                             (uint)CONCAT12(auVar5[4],
                                                                            (ushort)auVar5[0]))),
                             0x1914191419141914,2);
        auVar20 = NEON_umull((ulong)CONCAT16(auVar4[0xc],
                                             (uint6)CONCAT14(auVar4[8],
                                                             (uint)CONCAT12(auVar4[4],
                                                                            (ushort)auVar4[0]))),
                             0x1914191419141914,2);
        auVar21 = NEON_umull((ulong)CONCAT16(auVar3[0xc],
                                             (uint6)CONCAT14(auVar3[8],
                                                             (uint)CONCAT12(auVar3[4],
                                                                            (ushort)auVar3[0]))),
                             0x1914191419141914,2);
        auVar17._4_2_ =
             (short)(auVar21._4_4_ +
                     ((CONCAT22(auVar3._6_2_,auVar3._2_2_) & 0xff00ff) >> 0x10) * 0x41c7 +
                     (uint)auVar3[5] * 0x8123 + 0x108000 >> 0x10);
        auVar17._0_4_ =
             auVar21._0_4_ + (auVar3._2_2_ & 0xff) * 0x41c7 +
             (CONCAT12(auVar3[5],(ushort)auVar3[1]) & 0xffff) * 0x8123 + 0x108000 >> 0x10;
        auVar17._6_2_ = 0;
        auVar17._8_2_ =
             (short)(auVar21._8_4_ + (uint)(auVar3._10_2_ & 0xff) * 0x41c7 +
                     (uint)auVar3[9] * 0x8123 + 0x108000 >> 0x10);
        auVar17._10_2_ = 0;
        auVar17._12_2_ =
             (short)(auVar21._12_4_ + (uint)(auVar3._14_2_ & 0xff) * 0x41c7 +
                     (uint)auVar3[0xd] * 0x8123 + 0x108000 >> 0x10);
        auVar17._14_2_ = 0;
        auVar3._4_2_ = (short)(auVar20._4_4_ +
                               ((CONCAT22(auVar4._6_2_,auVar4._2_2_) & 0xff00ff) >> 0x10) * 0x41c7 +
                               (uint)auVar4[5] * 0x8123 + 0x108000 >> 0x10);
        auVar3._0_4_ = auVar20._0_4_ + (auVar4._2_2_ & 0xff) * 0x41c7 +
                       (CONCAT12(auVar4[5],(ushort)auVar4[1]) & 0xffff) * 0x8123 + 0x108000 >> 0x10;
        auVar3._6_2_ = 0;
        auVar3._8_2_ = (short)(auVar20._8_4_ + (uint)(auVar4._10_2_ & 0xff) * 0x41c7 +
                               (uint)auVar4[9] * 0x8123 + 0x108000 >> 0x10);
        auVar3._10_2_ = 0;
        auVar3._12_2_ =
             (short)(auVar20._12_4_ + (uint)(auVar4._14_2_ & 0xff) * 0x41c7 +
                     (uint)auVar4[0xd] * 0x8123 + 0x108000 >> 0x10);
        auVar3._14_2_ = 0;
        auVar4._4_2_ = (short)(auVar19._4_4_ +
                               ((CONCAT22(auVar5._6_2_,auVar5._2_2_) & 0xff00ff) >> 0x10) * 0x41c7 +
                               (uint)auVar5[5] * 0x8123 + 0x108000 >> 0x10);
        auVar4._0_4_ = auVar19._0_4_ + (auVar5._2_2_ & 0xff) * 0x41c7 +
                       (CONCAT12(auVar5[5],(ushort)auVar5[1]) & 0xffff) * 0x8123 + 0x108000 >> 0x10;
        auVar4._6_2_ = 0;
        auVar4._8_2_ = (short)(auVar19._8_4_ + (uint)(auVar5._10_2_ & 0xff) * 0x41c7 +
                               (uint)auVar5[9] * 0x8123 + 0x108000 >> 0x10);
        auVar4._10_2_ = 0;
        auVar4._12_2_ =
             (short)(auVar19._12_4_ + (uint)(auVar5._14_2_ & 0xff) * 0x41c7 +
                     (uint)auVar5[0xd] * 0x8123 + 0x108000 >> 0x10);
        auVar4._14_2_ = 0;
        auVar5._4_2_ = (short)(auVar18._4_4_ +
                               ((CONCAT22(auVar6._6_2_,auVar6._2_2_) & 0xff00ff) >> 0x10) * 0x41c7 +
                               (uint)auVar6[5] * 0x8123 + 0x108000 >> 0x10);
        auVar5._0_4_ = auVar18._0_4_ + (auVar6._2_2_ & 0xff) * 0x41c7 +
                       (CONCAT12(auVar6[5],(ushort)auVar6[1]) & 0xffff) * 0x8123 + 0x108000 >> 0x10;
        auVar5._6_2_ = 0;
        auVar5._8_2_ = (short)(auVar18._8_4_ + (uint)(auVar6._10_2_ & 0xff) * 0x41c7 +
                               (uint)auVar6[9] * 0x8123 + 0x108000 >> 0x10);
        auVar5._10_2_ = 0;
        auVar5._12_2_ =
             (short)(auVar18._12_4_ + (uint)(auVar6._14_2_ & 0xff) * 0x41c7 +
                     (uint)auVar6[0xd] * 0x8123 + 0x108000 >> 0x10);
        auVar5._14_2_ = 0;
        auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar3,auVar4,auVar5,auVar7);
        puVar15[1] = auVar17._8_8_;
        *puVar15 = auVar17._0_8_;
        uVar10 = uVar10 - 0x10;
        pauVar13 = pauVar13 + 4;
        puVar15 = puVar15 + 2;
      } while (uVar10 != 0);
      if (uVar11 == uVar8) {
        return;
      }
      uVar10 = uVar11;
      if ((param_3 & 0xc) == 0) goto LAB_00238a1c;
    }
    uVar11 = uVar8 & 0x7ffffffc;
    lVar14 = uVar10 - uVar11;
    puVar16 = (undefined4 *)((long)param_2 + uVar10);
    pauVar13 = (undefined1 (*) [16])(*param_1 + uVar10 * 4);
    do {
      auVar7 = *pauVar13;
      uVar10 = CONCAT44(auVar7._4_4_ >> 0x10,auVar7._0_4_ >> 0x10) & 0xffff00ffffff00ff;
      auVar17 = NEON_umull((ulong)CONCAT16(auVar7[0xc],
                                           (uint6)CONCAT14(auVar7[8],
                                                           (uint)CONCAT12(auVar7[4],
                                                                          (ushort)auVar7[0]))),
                           0x1914191419141914,2);
      *puVar16 = CONCAT13((char)(auVar17._12_4_ + (auVar7._12_4_ >> 0x10 & 0xff) * 0x41c7 +
                                 (uint)auVar7[0xd] * 0x8123 + 0x108000 >> 0x10),
                          CONCAT12((char)(auVar17._8_4_ + (auVar7._8_4_ >> 0x10 & 0xff) * 0x41c7 +
                                          (uint)auVar7[9] * 0x8123 + 0x108000 >> 0x10),
                                   CONCAT11((char)(auVar17._4_4_ +
                                                   (uint)(ushort)(uVar10 >> 0x20) * 0x41c7 +
                                                   (uint)auVar7[5] * 0x8123 + 0x108000 >> 0x10),
                                            (char)(auVar17._0_4_ + (uint)(ushort)uVar10 * 0x41c7 +
                                                   (uint)auVar7[1] * 0x8123 + 0x108000 >> 0x10))));
      puVar16 = puVar16 + 1;
      lVar14 = lVar14 + 4;
      pauVar13 = pauVar13 + 1;
    } while (lVar14 != 0);
    if (uVar11 == uVar8) {
      return;
    }
  }
LAB_00238a1c:
  lVar14 = uVar8 - uVar11;
  puVar9 = (uint *)(*param_1 + uVar11 * 4);
  puVar12 = (undefined1 *)((long)param_2 + uVar11);
  do {
    uVar2 = *puVar9;
    *puVar12 = (char)((uVar2 >> 0x10 & 0xff) * 0x41c7 + (uVar2 & 0xff) * 0x1914 +
                      (uVar2 >> 8 & 0xff) * 0x8123 + 0x108000 >> 0x10);
    lVar14 = lVar14 + -1;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  } while (lVar14 != 0);
                    /* WARNING: Read-only address (ram,0x007eeb70) is written */
  return;
}



/* Entry: 0023967c; end: 00239a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0023967c(long param_1,uint param_2,uint param_3,int param_4,undefined1 *param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  unkbyte9 Var4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 (*pauVar10) [16];
  int *piVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  int iVar23;
  undefined1 (*pauVar24) [16];
  uint *puVar25;
  byte bVar26;
  undefined8 uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  auVar7 = _UNK_007edcd0;
  auVar6 = _UNK_007edcc0;
  auVar5 = _UNK_007edcb0;
  Var4 = _UNK_007edca0;
  if (0 < param_4) {
    lVar12 = (long)(int)param_2;
    lVar20 = (long)(int)param_6;
    if ((int)param_3 < 8) {
      if (0 < (int)param_3) {
        piVar11 = (int *)(param_5 + 0xc);
        pbVar16 = (byte *)(param_1 + 3);
        do {
          piVar11[-3] = (uint)pbVar16[-3] << 8;
          if ((((param_3 != 1) && (piVar11[-2] = (uint)pbVar16[-2] << 8, param_3 != 2)) &&
              (piVar11[-1] = (uint)pbVar16[-1] << 8, param_3 != 3)) &&
             (((*piVar11 = (uint)*pbVar16 << 8, param_3 != 4 &&
               (piVar11[1] = (uint)pbVar16[1] << 8, param_3 != 5)) &&
              (piVar11[2] = (uint)pbVar16[2] << 8, param_3 != 6)))) {
            piVar11[3] = (uint)pbVar16[3] << 8;
          }
          piVar11 = piVar11 + lVar20;
          pbVar16 = pbVar16 + lVar12;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else {
      uVar13 = (ulong)param_3;
      uVar1 = param_3 & 0x7ffffff8;
      uVar15 = (ulong)uVar1;
      uVar2 = (param_3 & 7) - 1;
      uVar17 = (ulong)uVar2;
      if (uVar1 == param_3) {
        iVar14 = 0;
        do {
          lVar18 = 0;
          puVar8 = param_5;
          do {
            uVar27 = *(undefined8 *)(param_1 + lVar18);
            *puVar8 = 0;
            puVar8[1] = (char)uVar27;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8[4] = 0;
            puVar8[5] = (char)((ulong)uVar27 >> 8);
            puVar8[6] = 0;
            puVar8[7] = 0;
            puVar8[8] = 0;
            puVar8[9] = (char)((ulong)uVar27 >> 0x10);
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            puVar8[0xc] = 0;
            puVar8[0xd] = (char)((ulong)uVar27 >> 0x18);
            puVar8[0xe] = 0;
            puVar8[0xf] = 0;
            puVar8[0x10] = 0;
            puVar8[0x11] = (char)((ulong)uVar27 >> 0x20);
            puVar8[0x12] = 0;
            puVar8[0x13] = 0;
            puVar8[0x14] = 0;
            puVar8[0x15] = (char)((ulong)uVar27 >> 0x28);
            puVar8[0x16] = 0;
            puVar8[0x17] = 0;
            puVar8[0x18] = 0;
            puVar8[0x19] = (char)((ulong)uVar27 >> 0x30);
            puVar8[0x1a] = 0;
            puVar8[0x1b] = 0;
            puVar8[0x1c] = 0;
            puVar8[0x1d] = (char)((ulong)uVar27 >> 0x38);
            puVar8[0x1e] = 0;
            puVar8[0x1f] = 0;
            puVar8 = puVar8 + 0x20;
            uVar17 = lVar18 + 0x10;
            lVar18 = lVar18 + 8;
          } while (uVar17 <= uVar13);
          param_1 = param_1 + lVar12;
          iVar14 = iVar14 + 1;
          param_5 = param_5 + lVar20 * 4;
        } while (iVar14 != param_4);
      }
      else if (uVar2 < 3) {
        iVar14 = 0;
        do {
          lVar18 = 0;
          puVar8 = param_5;
          do {
            uVar27 = *(undefined8 *)(param_1 + lVar18);
            *puVar8 = 0;
            puVar8[1] = (char)uVar27;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8[4] = 0;
            puVar8[5] = (char)((ulong)uVar27 >> 8);
            puVar8[6] = 0;
            puVar8[7] = 0;
            puVar8[8] = 0;
            puVar8[9] = (char)((ulong)uVar27 >> 0x10);
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            puVar8[0xc] = 0;
            puVar8[0xd] = (char)((ulong)uVar27 >> 0x18);
            puVar8[0xe] = 0;
            puVar8[0xf] = 0;
            puVar8[0x10] = 0;
            puVar8[0x11] = (char)((ulong)uVar27 >> 0x20);
            puVar8[0x12] = 0;
            puVar8[0x13] = 0;
            puVar8[0x14] = 0;
            puVar8[0x15] = (char)((ulong)uVar27 >> 0x28);
            puVar8[0x16] = 0;
            puVar8[0x17] = 0;
            puVar8[0x18] = 0;
            puVar8[0x19] = (char)((ulong)uVar27 >> 0x30);
            puVar8[0x1a] = 0;
            puVar8[0x1b] = 0;
            puVar8[0x1c] = 0;
            puVar8[0x1d] = (char)((ulong)uVar27 >> 0x38);
            puVar8[0x1e] = 0;
            puVar8[0x1f] = 0;
            puVar8 = puVar8 + 0x20;
            uVar17 = lVar18 + 0x10;
            lVar18 = lVar18 + 8;
            uVar19 = uVar15;
          } while (uVar17 <= uVar13);
          do {
            *(uint *)(param_5 + uVar19 * 4) = (uint)*(byte *)(param_1 + uVar19) << 8;
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < (int)param_3);
          param_1 = param_1 + lVar12;
          iVar14 = iVar14 + 1;
          param_5 = param_5 + lVar20 * 4;
        } while (iVar14 != param_4);
      }
      else if (param_5 + uVar15 * 4 <
               (undefined1 *)(param_1 + lVar12 * (ulong)(param_4 - 1) + uVar17 + uVar15 + 1) &&
               (undefined1 *)(param_1 + uVar15) <
               param_5 + (uVar17 + lVar20 * (ulong)(param_4 - 1) + uVar15) * 4 + 4 ||
               (int)(param_6 | param_2) < 0) {
        iVar14 = 0;
        do {
          lVar18 = 0;
          puVar8 = param_5;
          do {
            uVar27 = *(undefined8 *)(param_1 + lVar18);
            *puVar8 = 0;
            puVar8[1] = (char)uVar27;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8[4] = 0;
            puVar8[5] = (char)((ulong)uVar27 >> 8);
            puVar8[6] = 0;
            puVar8[7] = 0;
            puVar8[8] = 0;
            puVar8[9] = (char)((ulong)uVar27 >> 0x10);
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            puVar8[0xc] = 0;
            puVar8[0xd] = (char)((ulong)uVar27 >> 0x18);
            puVar8[0xe] = 0;
            puVar8[0xf] = 0;
            puVar8[0x10] = 0;
            puVar8[0x11] = (char)((ulong)uVar27 >> 0x20);
            puVar8[0x12] = 0;
            puVar8[0x13] = 0;
            puVar8[0x14] = 0;
            puVar8[0x15] = (char)((ulong)uVar27 >> 0x28);
            puVar8[0x16] = 0;
            puVar8[0x17] = 0;
            puVar8[0x18] = 0;
            puVar8[0x19] = (char)((ulong)uVar27 >> 0x30);
            puVar8[0x1a] = 0;
            puVar8[0x1b] = 0;
            puVar8[0x1c] = 0;
            puVar8[0x1d] = (char)((ulong)uVar27 >> 0x38);
            puVar8[0x1e] = 0;
            puVar8[0x1f] = 0;
            puVar8 = puVar8 + 0x20;
            uVar17 = lVar18 + 0x10;
            lVar18 = lVar18 + 8;
            uVar19 = uVar15;
          } while (uVar17 <= uVar13);
          do {
            *(uint *)(param_5 + uVar19 * 4) = (uint)*(byte *)(param_1 + uVar19) << 8;
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < (int)param_3);
          param_1 = param_1 + lVar12;
          iVar14 = iVar14 + 1;
          param_5 = param_5 + lVar20 * 4;
        } while (iVar14 != param_4);
      }
      else {
        iVar14 = 0;
        uVar17 = uVar17 + 1;
        uVar19 = uVar17 & 0x1ffffffe0;
        lVar18 = param_1 + uVar15;
        pauVar10 = (undefined1 (*) [16])(lVar18 + 0x10);
        puVar8 = param_5 + (((ulong)param_3 & 0x7ffffff8) >> 3) * 0x20;
        piVar11 = (int *)(puVar8 + 0x40);
        do {
          lVar21 = 0;
          puVar9 = param_5;
          do {
            uVar27 = *(undefined8 *)(param_1 + lVar21);
            *puVar9 = 0;
            puVar9[1] = (char)uVar27;
            puVar9[2] = 0;
            puVar9[3] = 0;
            puVar9[4] = 0;
            puVar9[5] = (char)((ulong)uVar27 >> 8);
            puVar9[6] = 0;
            puVar9[7] = 0;
            puVar9[8] = 0;
            puVar9[9] = (char)((ulong)uVar27 >> 0x10);
            puVar9[10] = 0;
            puVar9[0xb] = 0;
            puVar9[0xc] = 0;
            puVar9[0xd] = (char)((ulong)uVar27 >> 0x18);
            puVar9[0xe] = 0;
            puVar9[0xf] = 0;
            puVar9[0x10] = 0;
            puVar9[0x11] = (char)((ulong)uVar27 >> 0x20);
            puVar9[0x12] = 0;
            puVar9[0x13] = 0;
            puVar9[0x14] = 0;
            puVar9[0x15] = (char)((ulong)uVar27 >> 0x28);
            puVar9[0x16] = 0;
            puVar9[0x17] = 0;
            puVar9[0x18] = 0;
            puVar9[0x19] = (char)((ulong)uVar27 >> 0x30);
            puVar9[0x1a] = 0;
            puVar9[0x1b] = 0;
            puVar9[0x1c] = 0;
            puVar9[0x1d] = (char)((ulong)uVar27 >> 0x38);
            puVar9[0x1e] = 0;
            puVar9[0x1f] = 0;
            puVar9 = puVar9 + 0x20;
            uVar15 = lVar21 + 0x10;
            lVar21 = lVar21 + 8;
          } while (uVar15 <= uVar13);
          piVar22 = piVar11;
          pauVar24 = pauVar10;
          uVar15 = uVar19;
          if (uVar2 < 0x1f) {
            uVar15 = 0;
LAB_00239a08:
            lVar21 = uVar15 - (uVar17 & 0x1fffffffc);
            piVar22 = (int *)(puVar8 + uVar15 * 4);
            puVar25 = (uint *)(lVar18 + uVar15);
            do {
              uVar28 = *puVar25;
              bVar26 = (byte)(uVar28 >> 8);
              piVar22[2] = (uVar28 >> 0x10 & 0xff) << 8;
              piVar22[3] = (uVar28 >> 0x18) << 8;
              *piVar22 = (CONCAT12(bVar26,(ushort)(byte)uVar28) & 0xffff) << 8;
              piVar22[1] = (uint)bVar26 << 8;
              lVar21 = lVar21 + 4;
              piVar22 = piVar22 + 4;
              puVar25 = puVar25 + 1;
            } while (lVar21 != 0);
            uVar15 = uVar17 & 0x1fffffffc;
            if (uVar17 != (uVar17 & 0x1fffffffc)) {
LAB_00239a38:
              iVar23 = uVar1 + (int)uVar15;
              do {
                *(uint *)(puVar8 + uVar15 * 4) = (uint)*(byte *)(lVar18 + uVar15) << 8;
                iVar23 = iVar23 + 1;
                uVar15 = uVar15 + 1;
              } while (iVar23 < (int)param_3);
            }
          }
          else {
            do {
              auVar30 = pauVar24[-1];
              auVar3 = *pauVar24;
              auVar29[9] = 0xff;
              auVar29._0_9_ = Var4;
              auVar29[10] = 0xff;
              auVar29[0xb] = 0xff;
              auVar29[0xc] = 0xf;
              auVar29[0xd] = 0xff;
              auVar29[0xe] = 0xff;
              auVar29[0xf] = 0xff;
              auVar31 = a64_TBL(ZEXT816(0),auVar30,auVar29);
              auVar32 = a64_TBL(ZEXT816(0),auVar30,auVar7);
              auVar33 = a64_TBL(ZEXT816(0),auVar30,auVar6);
              auVar29 = a64_TBL(ZEXT816(0),auVar30,auVar5);
              auVar30[9] = 0xff;
              auVar30._0_9_ = Var4;
              auVar30[10] = 0xff;
              auVar30[0xb] = 0xff;
              auVar30[0xc] = 0xf;
              auVar30[0xd] = 0xff;
              auVar30[0xe] = 0xff;
              auVar30[0xf] = 0xff;
              auVar34 = a64_TBL(ZEXT816(0),auVar3,auVar30);
              auVar35 = a64_TBL(ZEXT816(0),auVar3,auVar7);
              auVar36 = a64_TBL(ZEXT816(0),auVar3,auVar6);
              piVar22[-6] = auVar32._8_4_ << 8;
              piVar22[-5] = auVar32._12_4_ << 8;
              piVar22[-8] = auVar32._0_4_ << 8;
              piVar22[-7] = auVar32._4_4_ << 8;
              piVar22[-2] = auVar31._8_4_ << 8;
              piVar22[-1] = auVar31._12_4_ << 8;
              piVar22[-4] = auVar31._0_4_ << 8;
              piVar22[-3] = auVar31._4_4_ << 8;
              auVar30 = a64_TBL(ZEXT816(0),auVar3,auVar5);
              piVar22[-0xe] = auVar29._8_4_ << 8;
              piVar22[-0xd] = auVar29._12_4_ << 8;
              piVar22[-0x10] = auVar29._0_4_ << 8;
              piVar22[-0xf] = auVar29._4_4_ << 8;
              piVar22[-10] = auVar33._8_4_ << 8;
              piVar22[-9] = auVar33._12_4_ << 8;
              piVar22[-0xc] = auVar33._0_4_ << 8;
              piVar22[-0xb] = auVar33._4_4_ << 8;
              piVar22[10] = auVar35._8_4_ << 8;
              piVar22[0xb] = auVar35._12_4_ << 8;
              piVar22[8] = auVar35._0_4_ << 8;
              piVar22[9] = auVar35._4_4_ << 8;
              piVar22[0xe] = auVar34._8_4_ << 8;
              piVar22[0xf] = auVar34._12_4_ << 8;
              piVar22[0xc] = auVar34._0_4_ << 8;
              piVar22[0xd] = auVar34._4_4_ << 8;
              piVar22[2] = auVar30._8_4_ << 8;
              piVar22[3] = auVar30._12_4_ << 8;
              *piVar22 = auVar30._0_4_ << 8;
              piVar22[1] = auVar30._4_4_ << 8;
              piVar22[6] = auVar36._8_4_ << 8;
              piVar22[7] = auVar36._12_4_ << 8;
              piVar22[4] = auVar36._0_4_ << 8;
              piVar22[5] = auVar36._4_4_ << 8;
              uVar15 = uVar15 - 0x20;
              piVar22 = piVar22 + 0x20;
              pauVar24 = pauVar24 + 2;
            } while (uVar15 != 0);
            if (uVar17 != uVar19) {
              uVar15 = uVar19;
              if ((uVar17 & 0x1c) != 0) goto LAB_00239a08;
              goto LAB_00239a38;
            }
          }
          param_1 = param_1 + lVar12;
          iVar14 = iVar14 + 1;
          param_5 = param_5 + lVar20 * 4;
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + lVar12);
          piVar11 = piVar11 + lVar20;
          puVar8 = puVar8 + lVar20 * 4;
          lVar18 = lVar18 + lVar12;
        } while (iVar14 != param_4);
      }
    }
  }
  return;
}



/* Entry: 00239a5c; end: 0023accf;  */

bool FUN_00239a5c(undefined1 *param_1,int param_2,uint param_3,int param_4,long param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  
  if (0 < param_4) {
    lVar8 = (long)param_6;
    if (8 < (int)param_3) {
      iVar10 = 0;
      uVar1 = (param_3 - 9 & 0xfffffff8) + 8;
      uVar13 = (ulong)uVar1;
      pbVar11 = (byte *)(param_5 + uVar13);
      uVar15 = 0xffffffffffffffff;
      uVar9 = 0xff;
      do {
        lVar14 = 0;
        puVar7 = param_1;
        do {
          uVar16 = *puVar7;
          uVar17 = puVar7[4];
          uVar18 = puVar7[8];
          uVar19 = puVar7[0xc];
          uVar20 = puVar7[0x10];
          uVar21 = puVar7[0x14];
          uVar22 = puVar7[0x18];
          uVar23 = puVar7[0x1c];
          puVar7 = puVar7 + 0x20;
          *(ulong *)(param_5 + lVar14) =
               CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(uVar19,
                                                  CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))));
          uVar15 = CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(uVar19,
                                                  CONCAT12(uVar18,CONCAT11(uVar17,uVar16))))))) &
                   uVar15;
          uVar3 = lVar14 + 0x10;
          lVar14 = lVar14 + 8;
          uVar5 = uVar13;
          uVar6 = uVar13 << 2;
          pbVar12 = pbVar11;
          uVar2 = uVar1;
        } while (uVar3 < param_3);
        while ((int)uVar2 < (int)param_3) {
          bVar4 = param_1[uVar6 & 0xfffffffc];
          *pbVar12 = bVar4;
          uVar9 = uVar9 & bVar4;
          uVar2 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar2;
          uVar6 = uVar6 + 4;
          pbVar12 = pbVar12 + 1;
        }
        param_1 = param_1 + param_2;
        param_5 = param_5 + lVar8;
        iVar10 = iVar10 + 1;
        pbVar11 = pbVar11 + lVar8;
      } while (iVar10 != param_4);
      goto LAB_00239be0;
    }
    if (0 < (int)param_3) {
      pbVar11 = (byte *)(param_5 + 3);
      pbVar12 = param_1 + 0x10;
      uVar9 = 0xff;
      do {
        bVar4 = pbVar12[-0x10];
        pbVar11[-3] = bVar4;
        uVar9 = uVar9 & bVar4;
        if (param_3 != 1) {
          bVar4 = pbVar12[-0xc];
          pbVar11[-2] = bVar4;
          uVar9 = uVar9 & bVar4;
          if (param_3 != 2) {
            bVar4 = pbVar12[-8];
            pbVar11[-1] = bVar4;
            uVar9 = uVar9 & bVar4;
            if (param_3 != 3) {
              bVar4 = pbVar12[-4];
              *pbVar11 = bVar4;
              uVar9 = uVar9 & bVar4;
              if (param_3 != 4) {
                bVar4 = *pbVar12;
                pbVar11[1] = bVar4;
                uVar9 = uVar9 & bVar4;
                if (param_3 != 5) {
                  bVar4 = pbVar12[4];
                  pbVar11[2] = bVar4;
                  uVar9 = uVar9 & bVar4;
                  if (param_3 != 6) {
                    bVar4 = pbVar12[8];
                    pbVar11[3] = bVar4;
                    uVar9 = uVar9 & bVar4;
                    if (param_3 != 7) {
                      bVar4 = pbVar12[0xc];
                      pbVar11[4] = bVar4;
                      uVar9 = uVar9 & bVar4;
                    }
                  }
                }
              }
            }
          }
        }
        pbVar11 = pbVar11 + lVar8;
        pbVar12 = pbVar12 + param_2;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      uVar15 = 0xffffffffffffffff;
      goto LAB_00239be0;
    }
  }
  uVar15 = 0xffffffffffffffff;
  uVar9 = 0xff;
LAB_00239be0:
  return (uVar9 * 0x1010101 & (uint)uVar15 & (uint)(uVar15 >> 0x20)) == 0xffffffff;
}



/* Entry: 0023acd0; end: 0023b0ef;  */

void FUN_0023acd0(undefined1 *param_1,int param_2,byte param_3,byte param_4,byte param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar43 [16];
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  undefined1 auVar99 [16];
  byte bVar108;
  undefined1 auVar100 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  
  lVar25 = 0;
  lVar26 = (long)param_2;
  lVar24 = (long)(param_2 * 8);
  auVar95[0] = param_1[2];
  auVar110[0] = param_1[3];
  puVar1 = param_1 + lVar26;
  auVar94[1] = *puVar1;
  auVar94[0] = *param_1;
  auVar99[1] = puVar1[1];
  auVar99[0] = param_1[1];
  auVar95[1] = puVar1[2];
  auVar110[1] = puVar1[3];
  lVar28 = (long)(param_2 * 2);
  puVar2 = param_1 + lVar28;
  auVar94[2] = *puVar2;
  auVar99[2] = puVar2[1];
  auVar95[2] = puVar2[2];
  auVar110[2] = puVar2[3];
  puVar3 = param_1 + param_2 * 3;
  auVar94[3] = *puVar3;
  auVar99[3] = puVar3[1];
  auVar95[3] = puVar3[2];
  auVar110[3] = puVar3[3];
  lVar29 = (long)(param_2 * 4);
  puVar4 = param_1 + lVar29;
  auVar94[4] = *puVar4;
  auVar99[4] = puVar4[1];
  auVar95[4] = puVar4[2];
  auVar110[4] = puVar4[3];
  puVar5 = param_1 + param_2 * 5;
  auVar94[5] = *puVar5;
  auVar99[5] = puVar5[1];
  auVar95[5] = puVar5[2];
  auVar110[5] = puVar5[3];
  puVar6 = param_1 + param_2 * 6;
  auVar94[6] = *puVar6;
  auVar99[6] = puVar6[1];
  auVar95[6] = puVar6[2];
  auVar110[6] = puVar6[3];
  lVar27 = (long)(param_2 * 7);
  puVar7 = param_1 + lVar27;
  auVar94[7] = *puVar7;
  auVar99[7] = puVar7[1];
  auVar95[7] = puVar7[2];
  auVar110[7] = puVar7[3];
  puVar8 = param_1 + lVar24;
  puVar30 = puVar8 + lVar27;
  puVar9 = puVar8 + lVar26;
  auVar94[9] = *puVar9;
  auVar94[8] = *puVar8;
  auVar99[9] = puVar9[1];
  auVar99[8] = puVar8[1];
  auVar95[9] = puVar9[2];
  auVar95[8] = puVar8[2];
  auVar110[9] = puVar9[3];
  auVar110[8] = puVar8[3];
  puVar9 = puVar8 + lVar28;
  auVar94[10] = *puVar9;
  auVar99[10] = puVar9[1];
  auVar95[10] = puVar9[2];
  auVar110[10] = puVar9[3];
  puVar9 = puVar8 + param_2 * 3;
  auVar94[0xb] = *puVar9;
  auVar99[0xb] = puVar9[1];
  auVar95[0xb] = puVar9[2];
  auVar110[0xb] = puVar9[3];
  puVar10 = puVar8 + lVar29;
  auVar94[0xc] = *puVar10;
  auVar99[0xc] = puVar10[1];
  auVar95[0xc] = puVar10[2];
  auVar110[0xc] = puVar10[3];
  puVar10 = puVar8 + param_2 * 5;
  auVar94[0xd] = *puVar10;
  auVar99[0xd] = puVar10[1];
  auVar95[0xd] = puVar10[2];
  auVar110[0xd] = puVar10[3];
  puVar11 = puVar8 + param_2 * 6;
  auVar94[0xe] = *puVar11;
  auVar99[0xe] = puVar11[1];
  auVar95[0xe] = puVar11[2];
  auVar110[0xe] = puVar11[3];
  auVar94[0xf] = *puVar30;
  auVar99[0xf] = puVar30[1];
  auVar95[0xf] = puVar30[2];
  auVar110[0xf] = puVar30[3];
  do {
    uVar62 = param_1[lVar25 + 4];
    uVar70 = param_1[lVar25 + 5];
    uVar78 = param_1[lVar25 + 6];
    uVar86 = param_1[lVar25 + 7];
    uVar63 = puVar1[lVar25 + 4];
    uVar71 = puVar1[lVar25 + 5];
    uVar79 = puVar1[lVar25 + 6];
    uVar87 = puVar1[lVar25 + 7];
    uVar64 = puVar2[lVar25 + 4];
    uVar72 = puVar2[lVar25 + 5];
    uVar80 = puVar2[lVar25 + 6];
    uVar88 = puVar2[lVar25 + 7];
    uVar65 = puVar3[lVar25 + 4];
    uVar73 = puVar3[lVar25 + 5];
    uVar81 = puVar3[lVar25 + 6];
    uVar89 = puVar3[lVar25 + 7];
    uVar66 = puVar4[lVar25 + 4];
    uVar74 = puVar4[lVar25 + 5];
    uVar82 = puVar4[lVar25 + 6];
    uVar90 = puVar4[lVar25 + 7];
    uVar67 = puVar5[lVar25 + 4];
    uVar75 = puVar5[lVar25 + 5];
    uVar83 = puVar5[lVar25 + 6];
    uVar91 = puVar5[lVar25 + 7];
    uVar68 = puVar6[lVar25 + 4];
    uVar76 = puVar6[lVar25 + 5];
    uVar84 = puVar6[lVar25 + 6];
    uVar92 = puVar6[lVar25 + 7];
    uVar69 = puVar7[lVar25 + 4];
    uVar77 = puVar7[lVar25 + 5];
    uVar85 = puVar7[lVar25 + 6];
    uVar93 = puVar7[lVar25 + 7];
    lVar20 = lVar25 + lVar26 + lVar24;
    bVar44 = puVar8[lVar25 + 4];
    bVar52 = puVar8[lVar25 + 5];
    bVar45 = param_1[lVar20 + 4];
    bVar53 = param_1[lVar20 + 5];
    lVar23 = lVar25 + lVar24 + lVar28;
    bVar46 = param_1[lVar23 + 4];
    bVar54 = param_1[lVar23 + 5];
    bVar47 = puVar9[lVar25 + 4];
    bVar55 = puVar9[lVar25 + 5];
    lVar22 = lVar25 + lVar24 + lVar29;
    bVar48 = param_1[lVar22 + 4];
    bVar56 = param_1[lVar22 + 5];
    bVar49 = puVar10[lVar25 + 4];
    bVar57 = puVar10[lVar25 + 5];
    lVar21 = lVar25 + lVar27;
    bVar50 = puVar11[lVar25 + 4];
    bVar58 = puVar11[lVar25 + 5];
    bVar51 = puVar8[lVar21 + 4];
    bVar59 = puVar8[lVar21 + 5];
    uVar60 = CONCAT17(puVar8[lVar21 + 6],
                      CONCAT16(puVar11[lVar25 + 6],
                               CONCAT15(puVar10[lVar25 + 6],
                                        CONCAT14(param_1[lVar22 + 6],
                                                 CONCAT13(puVar9[lVar25 + 6],
                                                          CONCAT12(param_1[lVar23 + 6],
                                                                   CONCAT11(param_1[lVar20 + 6],
                                                                            puVar8[lVar25 + 6]))))))
                     );
    uVar61 = CONCAT17(puVar8[lVar21 + 7],
                      CONCAT16(puVar11[lVar25 + 7],
                               CONCAT15(puVar10[lVar25 + 7],
                                        CONCAT14(param_1[lVar22 + 7],
                                                 CONCAT13(puVar9[lVar25 + 7],
                                                          CONCAT12(param_1[lVar23 + 7],
                                                                   CONCAT11(param_1[lVar20 + 7],
                                                                            puVar8[lVar25 + 7]))))))
                     );
    auVar114 = NEON_uabd(auVar94,auVar99,1);
    auVar94 = NEON_uabd(auVar99,auVar95,1);
    auVar99 = NEON_uabd(auVar95,auVar110,1);
    auVar17[1] = uVar79;
    auVar17[0] = uVar78;
    auVar17[2] = uVar80;
    auVar17[3] = uVar81;
    auVar17[4] = uVar82;
    auVar17[5] = uVar83;
    auVar17[6] = uVar84;
    auVar17[7] = uVar85;
    auVar17._8_8_ = uVar60;
    auVar19[1] = uVar87;
    auVar19[0] = uVar86;
    auVar19[2] = uVar88;
    auVar19[3] = uVar89;
    auVar19[4] = uVar90;
    auVar19[5] = uVar91;
    auVar19[6] = uVar92;
    auVar19[7] = uVar93;
    auVar19._8_8_ = uVar61;
    auVar109 = NEON_uabd(auVar19,auVar17,1);
    auVar14[1] = uVar71;
    auVar14[0] = uVar70;
    auVar14[2] = uVar72;
    auVar14[3] = uVar73;
    auVar14[4] = uVar74;
    auVar14[5] = uVar75;
    auVar14[6] = uVar76;
    auVar14[7] = uVar77;
    auVar14[8] = bVar52;
    auVar14[9] = bVar53;
    auVar14[10] = bVar54;
    auVar14[0xb] = bVar55;
    auVar14[0xc] = bVar56;
    auVar14[0xd] = bVar57;
    auVar14[0xe] = bVar58;
    auVar14[0xf] = bVar59;
    auVar18[1] = uVar79;
    auVar18[0] = uVar78;
    auVar18[2] = uVar80;
    auVar18[3] = uVar81;
    auVar18[4] = uVar82;
    auVar18[5] = uVar83;
    auVar18[6] = uVar84;
    auVar18[7] = uVar85;
    auVar18._8_8_ = uVar60;
    auVar112 = NEON_uabd(auVar18,auVar14,1);
    auVar12[1] = uVar63;
    auVar12[0] = uVar62;
    auVar12[2] = uVar64;
    auVar12[3] = uVar65;
    auVar12[4] = uVar66;
    auVar12[5] = uVar67;
    auVar12[6] = uVar68;
    auVar12[7] = uVar69;
    auVar12[8] = bVar44;
    auVar12[9] = bVar45;
    auVar12[10] = bVar46;
    auVar12[0xb] = bVar47;
    auVar12[0xc] = bVar48;
    auVar12[0xd] = bVar49;
    auVar12[0xe] = bVar50;
    auVar12[0xf] = bVar51;
    auVar15[1] = uVar71;
    auVar15[0] = uVar70;
    auVar15[2] = uVar72;
    auVar15[3] = uVar73;
    auVar15[4] = uVar74;
    auVar15[5] = uVar75;
    auVar15[6] = uVar76;
    auVar15[7] = uVar77;
    auVar15[8] = bVar52;
    auVar15[9] = bVar53;
    auVar15[10] = bVar54;
    auVar15[0xb] = bVar55;
    auVar15[0xc] = bVar56;
    auVar15[0xd] = bVar57;
    auVar15[0xe] = bVar58;
    auVar15[0xf] = bVar59;
    auVar116 = NEON_uabd(auVar15,auVar12,1);
    auVar94 = NEON_umax(auVar114,auVar94,1);
    auVar109 = NEON_umax(auVar99,auVar109,1);
    auVar112 = NEON_umax(auVar112,auVar116,1);
    auVar94 = NEON_umax(auVar94,auVar109,1);
    auVar13[1] = uVar63;
    auVar13[0] = uVar62;
    auVar13[2] = uVar64;
    auVar13[3] = uVar65;
    auVar13[4] = uVar66;
    auVar13[5] = uVar67;
    auVar13[6] = uVar68;
    auVar13[7] = uVar69;
    auVar13[8] = bVar44;
    auVar13[9] = bVar45;
    auVar13[10] = bVar46;
    auVar13[0xb] = bVar47;
    auVar13[0xc] = bVar48;
    auVar13[0xd] = bVar49;
    auVar13[0xe] = bVar50;
    auVar13[0xf] = bVar51;
    auVar109 = NEON_uabd(auVar110,auVar13,1);
    auVar94 = NEON_umax(auVar94,auVar112,1);
    auVar16[1] = uVar71;
    auVar16[0] = uVar70;
    auVar16[2] = uVar72;
    auVar16[3] = uVar73;
    auVar16[4] = uVar74;
    auVar16[5] = uVar75;
    auVar16[6] = uVar76;
    auVar16[7] = uVar77;
    auVar16[8] = bVar52;
    auVar16[9] = bVar53;
    auVar16[10] = bVar54;
    auVar16[0xb] = bVar55;
    auVar16[0xc] = bVar56;
    auVar16[0xd] = bVar57;
    auVar16[0xe] = bVar58;
    auVar16[0xf] = bVar59;
    auVar112 = NEON_uabd(auVar95,auVar16,1);
    auVar109 = NEON_uqadd(auVar109,auVar109,1);
    auVar113[0] = auVar112[0] >> 1;
    auVar113[1] = auVar112[1] >> 1;
    auVar113[2] = auVar112[2] >> 1;
    auVar113[3] = auVar112[3] >> 1;
    auVar113[4] = auVar112[4] >> 1;
    auVar113[5] = auVar112[5] >> 1;
    auVar113[6] = auVar112[6] >> 1;
    auVar113[7] = auVar112[7] >> 1;
    auVar113[8] = auVar112[8] >> 1;
    auVar113[9] = auVar112[9] >> 1;
    auVar113[10] = auVar112[10] >> 1;
    auVar113[0xb] = auVar112[0xb] >> 1;
    auVar113[0xc] = auVar112[0xc] >> 1;
    auVar113[0xd] = auVar112[0xd] >> 1;
    auVar113[0xe] = auVar112[0xe] >> 1;
    auVar113[0xf] = auVar112[0xf] >> 1;
    auVar109 = NEON_uqadd(auVar109,auVar113,1);
    auVar99 = NEON_umax(auVar99,auVar116,1);
    auVar115._0_8_ = auVar95._0_8_ ^ 0x8080808080808080;
    auVar115[8] = auVar95[8] ^ 0x80;
    auVar115[9] = auVar95[9] ^ 0x80;
    auVar115[10] = auVar95[10] ^ 0x80;
    auVar115[0xb] = auVar95[0xb] ^ 0x80;
    auVar115[0xc] = auVar95[0xc] ^ 0x80;
    auVar115[0xd] = auVar95[0xd] ^ 0x80;
    auVar115[0xe] = auVar95[0xe] ^ 0x80;
    auVar115[0xf] = auVar95[0xf] ^ 0x80;
    auVar31._0_8_ = auVar110._0_8_ ^ 0x8080808080808080;
    auVar31[8] = auVar110[8] ^ 0x80;
    auVar31[9] = auVar110[9] ^ 0x80;
    auVar31[10] = auVar110[10] ^ 0x80;
    auVar31[0xb] = auVar110[0xb] ^ 0x80;
    auVar31[0xc] = auVar110[0xc] ^ 0x80;
    auVar31[0xd] = auVar110[0xd] ^ 0x80;
    auVar31[0xe] = auVar110[0xe] ^ 0x80;
    auVar31[0xf] = auVar110[0xf] ^ 0x80;
    auVar32._0_8_ =
         CONCAT17(uVar69,CONCAT16(uVar68,CONCAT15(uVar67,CONCAT14(uVar66,CONCAT13(uVar65,CONCAT12(
                                                  uVar64,CONCAT11(uVar63,uVar62))))))) ^
         0x8080808080808080;
    auVar32[8] = bVar44 ^ 0x80;
    auVar32[9] = bVar45 ^ 0x80;
    auVar32[10] = bVar46 ^ 0x80;
    auVar32[0xb] = bVar47 ^ 0x80;
    auVar32[0xc] = bVar48 ^ 0x80;
    auVar32[0xd] = bVar49 ^ 0x80;
    auVar32[0xe] = bVar50 ^ 0x80;
    auVar32[0xf] = bVar51 ^ 0x80;
    bVar44 = -(auVar109[0] <= param_3) & -(auVar94[0] <= param_4);
    bVar45 = -(auVar109[1] <= param_3) & -(auVar94[1] <= param_4);
    bVar46 = -(auVar109[2] <= param_3) & -(auVar94[2] <= param_4);
    bVar47 = -(auVar109[3] <= param_3) & -(auVar94[3] <= param_4);
    bVar48 = -(auVar109[4] <= param_3) & -(auVar94[4] <= param_4);
    bVar49 = -(auVar109[5] <= param_3) & -(auVar94[5] <= param_4);
    bVar50 = -(auVar109[6] <= param_3) & -(auVar94[6] <= param_4);
    bVar51 = -(auVar109[7] <= param_3) & -(auVar94[7] <= param_4);
    bVar35 = -(auVar109[8] <= param_3) & -(auVar94[8] <= param_4);
    bVar36 = -(auVar109[9] <= param_3) & -(auVar94[9] <= param_4);
    bVar37 = -(auVar109[10] <= param_3) & -(auVar94[10] <= param_4);
    bVar38 = -(auVar109[0xb] <= param_3) & -(auVar94[0xb] <= param_4);
    bVar39 = -(auVar109[0xc] <= param_3) & -(auVar94[0xc] <= param_4);
    bVar40 = -(auVar109[0xd] <= param_3) & -(auVar94[0xd] <= param_4);
    bVar41 = -(auVar109[0xe] <= param_3) & -(auVar94[0xe] <= param_4);
    bVar42 = -(auVar109[0xf] <= param_3) & -(auVar94[0xf] <= param_4);
    auVar43._0_8_ =
         CONCAT17(uVar77,CONCAT16(uVar76,CONCAT15(uVar75,CONCAT14(uVar74,CONCAT13(uVar73,CONCAT12(
                                                  uVar72,CONCAT11(uVar71,uVar70))))))) ^
         0x8080808080808080;
    auVar43[8] = bVar52 ^ 0x80;
    auVar43[9] = bVar53 ^ 0x80;
    auVar43[10] = bVar54 ^ 0x80;
    auVar43[0xb] = bVar55 ^ 0x80;
    auVar43[0xc] = bVar56 ^ 0x80;
    auVar43[0xd] = bVar57 ^ 0x80;
    auVar43[0xe] = bVar58 ^ 0x80;
    auVar43[0xf] = bVar59 ^ 0x80;
    auVar95 = NEON_sqsub(auVar32,auVar31,1);
    auVar110 = NEON_sqsub(auVar115,auVar43,1);
    auVar110 = NEON_sqadd(auVar110,auVar95,1);
    auVar110 = NEON_sqadd(auVar95,auVar110,1);
    bVar52 = -(param_5 < auVar99[0]) & bVar44;
    bVar53 = -(param_5 < auVar99[1]) & bVar45;
    bVar54 = -(param_5 < auVar99[2]) & bVar46;
    bVar55 = -(param_5 < auVar99[3]) & bVar47;
    bVar56 = -(param_5 < auVar99[4]) & bVar48;
    bVar57 = -(param_5 < auVar99[5]) & bVar49;
    bVar58 = -(param_5 < auVar99[6]) & bVar50;
    bVar59 = -(param_5 < auVar99[7]) & bVar51;
    bVar101 = -(param_5 < auVar99[8]) & bVar35;
    bVar102 = -(param_5 < auVar99[9]) & bVar36;
    bVar103 = -(param_5 < auVar99[10]) & bVar37;
    bVar104 = -(param_5 < auVar99[0xb]) & bVar38;
    bVar105 = -(param_5 < auVar99[0xc]) & bVar39;
    bVar106 = -(param_5 < auVar99[0xd]) & bVar40;
    bVar107 = -(param_5 < auVar99[0xe]) & bVar41;
    bVar108 = -(param_5 < auVar99[0xf]) & bVar42;
    auVar95 = NEON_sqadd(auVar95,auVar110,1);
    auVar96[0] = auVar95[0] & bVar52;
    auVar96[1] = auVar95[1] & bVar53;
    auVar96[2] = auVar95[2] & bVar54;
    auVar96[3] = auVar95[3] & bVar55;
    auVar96[4] = auVar95[4] & bVar56;
    auVar96[5] = auVar95[5] & bVar57;
    auVar96[6] = auVar95[6] & bVar58;
    auVar96[7] = auVar95[7] & bVar59;
    auVar96[8] = auVar95[8] & bVar101;
    auVar96[9] = auVar95[9] & bVar102;
    auVar96[10] = auVar95[10] & bVar103;
    auVar96[0xb] = auVar95[0xb] & bVar104;
    auVar96[0xc] = auVar95[0xc] & bVar105;
    auVar96[0xd] = auVar95[0xd] & bVar106;
    auVar96[0xe] = auVar95[0xe] & bVar107;
    auVar96[0xf] = auVar95[0xf] & bVar108;
    auVar109[8] = 3;
    auVar109._0_8_ = 0x303030303030303;
    auVar109[9] = 3;
    auVar109[10] = 3;
    auVar109[0xb] = 3;
    auVar109[0xc] = 3;
    auVar109[0xd] = 3;
    auVar109[0xe] = 3;
    auVar109[0xf] = 3;
    auVar110 = NEON_sqadd(auVar96,auVar109,1);
    auVar114[8] = 4;
    auVar114._0_8_ = 0x404040404040404;
    auVar114[9] = 4;
    auVar114[10] = 4;
    auVar114[0xb] = 4;
    auVar114[0xc] = 4;
    auVar114[0xd] = 4;
    auVar114[0xe] = 4;
    auVar114[0xf] = 4;
    auVar95 = NEON_sqadd(auVar96,auVar114,1);
    auVar111[0] = auVar110[0] >> 3;
    auVar111[1] = auVar110[1] >> 3;
    auVar111[2] = auVar110[2] >> 3;
    auVar111[3] = auVar110[3] >> 3;
    auVar111[4] = auVar110[4] >> 3;
    auVar111[5] = auVar110[5] >> 3;
    auVar111[6] = auVar110[6] >> 3;
    auVar111[7] = auVar110[7] >> 3;
    auVar111[8] = auVar110[8] >> 3;
    auVar111[9] = auVar110[9] >> 3;
    auVar111[10] = auVar110[10] >> 3;
    auVar111[0xb] = auVar110[0xb] >> 3;
    auVar111[0xc] = auVar110[0xc] >> 3;
    auVar111[0xd] = auVar110[0xd] >> 3;
    auVar111[0xe] = auVar110[0xe] >> 3;
    auVar111[0xf] = auVar110[0xf] >> 3;
    auVar97[0] = auVar95[0] >> 3;
    auVar97[1] = auVar95[1] >> 3;
    auVar97[2] = auVar95[2] >> 3;
    auVar97[3] = auVar95[3] >> 3;
    auVar97[4] = auVar95[4] >> 3;
    auVar97[5] = auVar95[5] >> 3;
    auVar97[6] = auVar95[6] >> 3;
    auVar97[7] = auVar95[7] >> 3;
    auVar97[8] = auVar95[8] >> 3;
    auVar97[9] = auVar95[9] >> 3;
    auVar97[10] = auVar95[10] >> 3;
    auVar97[0xb] = auVar95[0xb] >> 3;
    auVar97[0xc] = auVar95[0xc] >> 3;
    auVar97[0xd] = auVar95[0xd] >> 3;
    auVar97[0xe] = auVar95[0xe] >> 3;
    auVar97[0xf] = auVar95[0xf] >> 3;
    auVar95 = NEON_sqadd(auVar31,auVar111,1);
    auVar110 = NEON_sqsub(auVar32,auVar97,1);
    auVar94 = NEON_sqsub(auVar110,auVar95,1);
    auVar99 = NEON_sqadd(auVar94,auVar94,1);
    auVar94 = NEON_sqadd(auVar94,auVar99,1);
    auVar33[0] = auVar94[0] & (bVar52 ^ bVar44);
    auVar33[1] = auVar94[1] & (bVar53 ^ bVar45);
    auVar33[2] = auVar94[2] & (bVar54 ^ bVar46);
    auVar33[3] = auVar94[3] & (bVar55 ^ bVar47);
    auVar33[4] = auVar94[4] & (bVar56 ^ bVar48);
    auVar33[5] = auVar94[5] & (bVar57 ^ bVar49);
    auVar33[6] = auVar94[6] & (bVar58 ^ bVar50);
    auVar33[7] = auVar94[7] & (bVar59 ^ bVar51);
    auVar33[8] = auVar94[8] & (bVar101 ^ bVar35);
    auVar33[9] = auVar94[9] & (bVar102 ^ bVar36);
    auVar33[10] = auVar94[10] & (bVar103 ^ bVar37);
    auVar33[0xb] = auVar94[0xb] & (bVar104 ^ bVar38);
    auVar33[0xc] = auVar94[0xc] & (bVar105 ^ bVar39);
    auVar33[0xd] = auVar94[0xd] & (bVar106 ^ bVar40);
    auVar33[0xe] = auVar94[0xe] & (bVar107 ^ bVar41);
    auVar33[0xf] = auVar94[0xf] & (bVar108 ^ bVar42);
    auVar116[8] = 4;
    auVar116._0_8_ = 0x404040404040404;
    auVar116[9] = 4;
    auVar116[10] = 4;
    auVar116[0xb] = 4;
    auVar116[0xc] = 4;
    auVar116[0xd] = 4;
    auVar116[0xe] = 4;
    auVar116[0xf] = 4;
    auVar99 = NEON_sqadd(auVar33,auVar116,1);
    auVar112[8] = 3;
    auVar112._0_8_ = 0x303030303030303;
    auVar112[9] = 3;
    auVar112[10] = 3;
    auVar112[0xb] = 3;
    auVar112[0xc] = 3;
    auVar112[0xd] = 3;
    auVar112[0xe] = 3;
    auVar112[0xf] = 3;
    auVar94 = NEON_sqadd(auVar33,auVar112,1);
    auVar117[0] = auVar99[0] >> 3;
    auVar117[1] = auVar99[1] >> 3;
    auVar117[2] = auVar99[2] >> 3;
    auVar117[3] = auVar99[3] >> 3;
    auVar117[4] = auVar99[4] >> 3;
    auVar117[5] = auVar99[5] >> 3;
    auVar117[6] = auVar99[6] >> 3;
    auVar117[7] = auVar99[7] >> 3;
    auVar117[8] = auVar99[8] >> 3;
    auVar117[9] = auVar99[9] >> 3;
    auVar117[10] = auVar99[10] >> 3;
    auVar117[0xb] = auVar99[0xb] >> 3;
    auVar117[0xc] = auVar99[0xc] >> 3;
    auVar117[0xd] = auVar99[0xd] >> 3;
    auVar117[0xe] = auVar99[0xe] >> 3;
    auVar117[0xf] = auVar99[0xf] >> 3;
    auVar34[0] = auVar94[0] >> 3;
    auVar34[1] = auVar94[1] >> 3;
    auVar34[2] = auVar94[2] >> 3;
    auVar34[3] = auVar94[3] >> 3;
    auVar34[4] = auVar94[4] >> 3;
    auVar34[5] = auVar94[5] >> 3;
    auVar34[6] = auVar94[6] >> 3;
    auVar34[7] = auVar94[7] >> 3;
    auVar34[8] = auVar94[8] >> 3;
    auVar34[9] = auVar94[9] >> 3;
    auVar34[10] = auVar94[10] >> 3;
    auVar34[0xb] = auVar94[0xb] >> 3;
    auVar34[0xc] = auVar94[0xc] >> 3;
    auVar34[0xd] = auVar94[0xd] >> 3;
    auVar34[0xe] = auVar94[0xe] >> 3;
    auVar34[0xf] = auVar94[0xf] >> 3;
    auVar99 = NEON_srshr(auVar117,1,1);
    auVar95 = NEON_sqadd(auVar95,auVar34,1);
    auVar100._0_8_ = auVar95._0_8_ ^ 0x8080808080808080;
    auVar100[8] = auVar95[8] ^ 0x80;
    auVar100[9] = auVar95[9] ^ 0x80;
    auVar100[10] = auVar95[10] ^ 0x80;
    auVar100[0xb] = auVar95[0xb] ^ 0x80;
    auVar100[0xc] = auVar95[0xc] ^ 0x80;
    auVar100[0xd] = auVar95[0xd] ^ 0x80;
    auVar100[0xe] = auVar95[0xe] ^ 0x80;
    auVar100[0xf] = auVar95[0xf] ^ 0x80;
    auVar95 = NEON_sqsub(auVar110,auVar117,1);
    auVar94._0_8_ = auVar95._0_8_ ^ 0x8080808080808080;
    auVar94[8] = auVar95[8] ^ 0x80;
    auVar94[9] = auVar95[9] ^ 0x80;
    auVar94[10] = auVar95[10] ^ 0x80;
    auVar94[0xb] = auVar95[0xb] ^ 0x80;
    auVar94[0xc] = auVar95[0xc] ^ 0x80;
    auVar94[0xd] = auVar95[0xd] ^ 0x80;
    auVar94[0xe] = auVar95[0xe] ^ 0x80;
    auVar94[0xf] = auVar95[0xf] ^ 0x80;
    auVar95 = NEON_sqadd(auVar115,auVar99,1);
    auVar98._0_8_ = auVar95._0_8_ ^ 0x8080808080808080;
    auVar98[8] = auVar95[8] ^ 0x80;
    auVar98[9] = auVar95[9] ^ 0x80;
    auVar98[10] = auVar95[10] ^ 0x80;
    auVar98[0xb] = auVar95[0xb] ^ 0x80;
    auVar98[0xc] = auVar95[0xc] ^ 0x80;
    auVar98[0xd] = auVar95[0xd] ^ 0x80;
    auVar98[0xe] = auVar95[0xe] ^ 0x80;
    auVar98[0xf] = auVar95[0xf] ^ 0x80;
    auVar95 = NEON_sqsub(auVar43,auVar99,1);
    auVar99._0_8_ = auVar95._0_8_ ^ 0x8080808080808080;
    auVar99[8] = auVar95[8] ^ 0x80;
    auVar99[9] = auVar95[9] ^ 0x80;
    auVar99[10] = auVar95[10] ^ 0x80;
    auVar99[0xb] = auVar95[0xb] ^ 0x80;
    auVar99[0xc] = auVar95[0xc] ^ 0x80;
    auVar99[0xd] = auVar95[0xd] ^ 0x80;
    auVar99[0xe] = auVar95[0xe] ^ 0x80;
    auVar99[0xf] = auVar95[0xf] ^ 0x80;
    param_1[lVar25 + 2] = (char)auVar98._0_8_;
    param_1[lVar25 + 3] = (char)auVar100._0_8_;
    param_1[lVar25 + 4] = (char)auVar94._0_8_;
    param_1[lVar25 + 5] = (char)auVar99._0_8_;
    puVar1[lVar25 + 2] = (char)(auVar98._0_8_ >> 8);
    puVar1[lVar25 + 3] = (char)(auVar100._0_8_ >> 8);
    puVar1[lVar25 + 4] = (char)(auVar94._0_8_ >> 8);
    puVar1[lVar25 + 5] = (char)(auVar99._0_8_ >> 8);
    puVar2[lVar25 + 2] = (char)(auVar98._0_8_ >> 0x10);
    puVar2[lVar25 + 3] = (char)(auVar100._0_8_ >> 0x10);
    puVar2[lVar25 + 4] = (char)(auVar94._0_8_ >> 0x10);
    puVar2[lVar25 + 5] = (char)(auVar99._0_8_ >> 0x10);
    puVar3[lVar25 + 2] = (char)(auVar98._0_8_ >> 0x18);
    puVar3[lVar25 + 3] = (char)(auVar100._0_8_ >> 0x18);
    puVar3[lVar25 + 4] = (char)(auVar94._0_8_ >> 0x18);
    puVar3[lVar25 + 5] = (char)(auVar99._0_8_ >> 0x18);
    puVar4[lVar25 + 2] = (char)(auVar98._0_8_ >> 0x20);
    puVar4[lVar25 + 3] = (char)(auVar100._0_8_ >> 0x20);
    puVar4[lVar25 + 4] = (char)(auVar94._0_8_ >> 0x20);
    puVar4[lVar25 + 5] = (char)(auVar99._0_8_ >> 0x20);
    puVar5[lVar25 + 2] = (char)(auVar98._0_8_ >> 0x28);
    puVar5[lVar25 + 3] = (char)(auVar100._0_8_ >> 0x28);
    puVar5[lVar25 + 4] = (char)(auVar94._0_8_ >> 0x28);
    puVar5[lVar25 + 5] = (char)(auVar99._0_8_ >> 0x28);
    puVar6[lVar25 + 2] = (char)(auVar98._0_8_ >> 0x30);
    puVar6[lVar25 + 3] = (char)(auVar100._0_8_ >> 0x30);
    puVar6[lVar25 + 4] = (char)(auVar94._0_8_ >> 0x30);
    puVar6[lVar25 + 5] = (char)(auVar99._0_8_ >> 0x30);
    puVar7[lVar25 + 2] = (char)(auVar98._0_8_ >> 0x38);
    puVar7[lVar25 + 3] = (char)(auVar100._0_8_ >> 0x38);
    puVar7[lVar25 + 4] = (char)(auVar94._0_8_ >> 0x38);
    puVar7[lVar25 + 5] = (char)(auVar99._0_8_ >> 0x38);
    auVar95 = NEON_ext(auVar98,auVar98,8,1);
    auVar110 = NEON_ext(auVar100,auVar100,8,1);
    auVar109 = NEON_ext(auVar94,auVar94,8,1);
    auVar112 = NEON_ext(auVar99,auVar99,8,1);
    puVar8[lVar25 + 2] = auVar95[0];
    puVar8[lVar25 + 3] = auVar110[0];
    puVar8[lVar25 + 4] = auVar109[0];
    puVar8[lVar25 + 5] = auVar112[0];
    param_1[lVar20 + 2] = auVar95[1];
    param_1[lVar20 + 3] = auVar110[1];
    param_1[lVar20 + 4] = auVar109[1];
    param_1[lVar20 + 5] = auVar112[1];
    param_1[lVar23 + 2] = auVar95[2];
    param_1[lVar23 + 3] = auVar110[2];
    param_1[lVar23 + 4] = auVar109[2];
    param_1[lVar23 + 5] = auVar112[2];
    puVar9[lVar25 + 2] = auVar95[3];
    puVar9[lVar25 + 3] = auVar110[3];
    puVar9[lVar25 + 4] = auVar109[3];
    puVar9[lVar25 + 5] = auVar112[3];
    param_1[lVar22 + 2] = auVar95[4];
    param_1[lVar22 + 3] = auVar110[4];
    param_1[lVar22 + 4] = auVar109[4];
    param_1[lVar22 + 5] = auVar112[4];
    puVar10[lVar25 + 2] = auVar95[5];
    puVar10[lVar25 + 3] = auVar110[5];
    puVar10[lVar25 + 4] = auVar109[5];
    puVar10[lVar25 + 5] = auVar112[5];
    puVar11[lVar25 + 2] = auVar95[6];
    puVar11[lVar25 + 3] = auVar110[6];
    puVar11[lVar25 + 4] = auVar109[6];
    puVar11[lVar25 + 5] = auVar112[6];
    puVar8[lVar21 + 2] = auVar95[7];
    puVar8[lVar21 + 3] = auVar110[7];
    puVar8[lVar21 + 4] = auVar109[7];
    puVar8[lVar21 + 5] = auVar112[7];
    lVar25 = lVar25 + 4;
    auVar95[1] = uVar79;
    auVar95[0] = uVar78;
    auVar95[2] = uVar80;
    auVar95[3] = uVar81;
    auVar95[4] = uVar82;
    auVar95[5] = uVar83;
    auVar95[6] = uVar84;
    auVar95[7] = uVar85;
    auVar95._8_8_ = uVar60;
    auVar110[1] = uVar87;
    auVar110[0] = uVar86;
    auVar110[2] = uVar88;
    auVar110[3] = uVar89;
    auVar110[4] = uVar90;
    auVar110[5] = uVar91;
    auVar110[6] = uVar92;
    auVar110[7] = uVar93;
    auVar110._8_8_ = uVar61;
  } while ((int)lVar25 != 0xc);
  return;
}



/* Entry: 0023b0f0; end: 0023cfb3;  */

void FUN_0023b0f0(ulong *param_1,undefined8 *param_2,uint param_3,byte param_4,byte param_5,
                 byte param_6)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  byte bVar27;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar28 [16];
  byte bVar45;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  
  auVar8._0_8_ = *(undefined8 *)((long)param_1 - (long)(int)(param_3 << 2));
  auVar8._8_8_ = *(undefined8 *)((long)param_2 - (long)(int)(param_3 << 2));
  lVar4 = (long)(int)param_3;
  uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1;
  lVar1 = uVar6 + lVar4;
  auVar64._0_8_ = *(ulong *)((long)param_1 - lVar1);
  uVar9 = *(undefined8 *)((long)param_2 - lVar1);
  auVar64._8_8_ = uVar9;
  puVar7 = (ulong *)((long)param_1 - uVar6);
  auVar66._0_8_ = *puVar7;
  puVar5 = (undefined8 *)((long)param_2 - uVar6);
  uVar10 = *puVar5;
  auVar66._8_8_ = uVar10;
  auVar18._0_8_ = *(ulong *)((long)param_1 - lVar4);
  uVar11 = *(undefined8 *)((long)param_2 - lVar4);
  auVar18._8_8_ = uVar11;
  auVar21._0_8_ = *param_1;
  uVar12 = *param_2;
  auVar21._8_8_ = uVar12;
  auVar24._0_8_ = *(ulong *)((long)param_1 + lVar4);
  uVar13 = *(undefined8 *)((long)param_2 + lVar4);
  auVar24._8_8_ = uVar13;
  puVar2 = (ulong *)((long)param_1 + uVar6);
  auVar28._0_8_ = *puVar2;
  puVar3 = (undefined8 *)((long)param_2 + uVar6);
  uVar14 = *puVar3;
  auVar28._8_8_ = uVar14;
  auVar77._0_8_ = *(undefined8 *)((long)param_1 + lVar1);
  auVar77._8_8_ = *(undefined8 *)((long)param_2 + lVar1);
  auVar8 = NEON_uabd(auVar8,auVar64,1);
  auVar62 = NEON_uabd(auVar64,auVar66,1);
  auVar67 = NEON_uabd(auVar66,auVar18,1);
  auVar15 = NEON_uabd(auVar77,auVar28,1);
  auVar72 = NEON_uabd(auVar28,auVar24,1);
  auVar77 = NEON_uabd(auVar24,auVar21,1);
  auVar8 = NEON_umax(auVar8,auVar62,1);
  auVar15 = NEON_umax(auVar67,auVar15,1);
  auVar62 = NEON_umax(auVar72,auVar77,1);
  auVar8 = NEON_umax(auVar8,auVar15,1);
  auVar8 = NEON_umax(auVar8,auVar62,1);
  auVar15 = NEON_uabd(auVar18,auVar21,1);
  auVar62 = NEON_uabd(auVar66,auVar24,1);
  auVar15 = NEON_uqadd(auVar15,auVar15,1);
  auVar63[0] = auVar62[0] >> 1;
  auVar63[1] = auVar62[1] >> 1;
  auVar63[2] = auVar62[2] >> 1;
  auVar63[3] = auVar62[3] >> 1;
  auVar63[4] = auVar62[4] >> 1;
  auVar63[5] = auVar62[5] >> 1;
  auVar63[6] = auVar62[6] >> 1;
  auVar63[7] = auVar62[7] >> 1;
  auVar63[8] = auVar62[8] >> 1;
  auVar63[9] = auVar62[9] >> 1;
  auVar63[10] = auVar62[10] >> 1;
  auVar63[0xb] = auVar62[0xb] >> 1;
  auVar63[0xc] = auVar62[0xc] >> 1;
  auVar63[0xd] = auVar62[0xd] >> 1;
  auVar63[0xe] = auVar62[0xe] >> 1;
  auVar63[0xf] = auVar62[0xf] >> 1;
  auVar15 = NEON_uqadd(auVar15,auVar63,1);
  bVar46 = -(auVar15[0] <= param_4) & -(auVar8[0] <= param_5);
  bVar47 = -(auVar15[1] <= param_4) & -(auVar8[1] <= param_5);
  bVar48 = -(auVar15[2] <= param_4) & -(auVar8[2] <= param_5);
  bVar49 = -(auVar15[3] <= param_4) & -(auVar8[3] <= param_5);
  bVar50 = -(auVar15[4] <= param_4) & -(auVar8[4] <= param_5);
  bVar51 = -(auVar15[5] <= param_4) & -(auVar8[5] <= param_5);
  bVar52 = -(auVar15[6] <= param_4) & -(auVar8[6] <= param_5);
  bVar53 = -(auVar15[7] <= param_4) & -(auVar8[7] <= param_5);
  bVar54 = -(auVar15[8] <= param_4) & -(auVar8[8] <= param_5);
  bVar55 = -(auVar15[9] <= param_4) & -(auVar8[9] <= param_5);
  bVar56 = -(auVar15[10] <= param_4) & -(auVar8[10] <= param_5);
  bVar57 = -(auVar15[0xb] <= param_4) & -(auVar8[0xb] <= param_5);
  bVar58 = -(auVar15[0xc] <= param_4) & -(auVar8[0xc] <= param_5);
  bVar59 = -(auVar15[0xd] <= param_4) & -(auVar8[0xd] <= param_5);
  bVar60 = -(auVar15[0xe] <= param_4) & -(auVar8[0xe] <= param_5);
  bVar61 = -(auVar15[0xf] <= param_4) & -(auVar8[0xf] <= param_5);
  auVar8 = NEON_umax(auVar67,auVar77,1);
  auVar16._0_8_ = auVar64._0_8_ ^ 0x8080808080808080;
  auVar16[8] = (byte)uVar9 ^ 0x80;
  auVar16[9] = (byte)((ulong)uVar9 >> 8) ^ 0x80;
  auVar16[10] = (byte)((ulong)uVar9 >> 0x10) ^ 0x80;
  auVar16[0xb] = (byte)((ulong)uVar9 >> 0x18) ^ 0x80;
  auVar16[0xc] = (byte)((ulong)uVar9 >> 0x20) ^ 0x80;
  auVar16[0xd] = (byte)((ulong)uVar9 >> 0x28) ^ 0x80;
  auVar16[0xe] = (byte)((ulong)uVar9 >> 0x30) ^ 0x80;
  auVar16[0xf] = (byte)((ulong)uVar9 >> 0x38) ^ 0x80;
  auVar67._0_8_ = auVar66._0_8_ ^ 0x8080808080808080;
  auVar67[8] = (byte)uVar10 ^ 0x80;
  auVar67[9] = (byte)((ulong)uVar10 >> 8) ^ 0x80;
  auVar67[10] = (byte)((ulong)uVar10 >> 0x10) ^ 0x80;
  auVar67[0xb] = (byte)((ulong)uVar10 >> 0x18) ^ 0x80;
  auVar67[0xc] = (byte)((ulong)uVar10 >> 0x20) ^ 0x80;
  auVar67[0xd] = (byte)((ulong)uVar10 >> 0x28) ^ 0x80;
  auVar67[0xe] = (byte)((ulong)uVar10 >> 0x30) ^ 0x80;
  auVar67[0xf] = (byte)((ulong)uVar10 >> 0x38) ^ 0x80;
  auVar19._0_8_ = auVar18._0_8_ ^ 0x8080808080808080;
  auVar19[8] = (byte)uVar11 ^ 0x80;
  auVar19[9] = (byte)((ulong)uVar11 >> 8) ^ 0x80;
  auVar19[10] = (byte)((ulong)uVar11 >> 0x10) ^ 0x80;
  auVar19[0xb] = (byte)((ulong)uVar11 >> 0x18) ^ 0x80;
  auVar19[0xc] = (byte)((ulong)uVar11 >> 0x20) ^ 0x80;
  auVar19[0xd] = (byte)((ulong)uVar11 >> 0x28) ^ 0x80;
  auVar19[0xe] = (byte)((ulong)uVar11 >> 0x30) ^ 0x80;
  auVar19[0xf] = (byte)((ulong)uVar11 >> 0x38) ^ 0x80;
  auVar22._0_8_ = auVar21._0_8_ ^ 0x8080808080808080;
  auVar22[8] = (byte)uVar12 ^ 0x80;
  auVar22[9] = (byte)((ulong)uVar12 >> 8) ^ 0x80;
  auVar22[10] = (byte)((ulong)uVar12 >> 0x10) ^ 0x80;
  auVar22[0xb] = (byte)((ulong)uVar12 >> 0x18) ^ 0x80;
  auVar22[0xc] = (byte)((ulong)uVar12 >> 0x20) ^ 0x80;
  auVar22[0xd] = (byte)((ulong)uVar12 >> 0x28) ^ 0x80;
  auVar22[0xe] = (byte)((ulong)uVar12 >> 0x30) ^ 0x80;
  auVar22[0xf] = (byte)((ulong)uVar12 >> 0x38) ^ 0x80;
  auVar25._0_8_ = auVar24._0_8_ ^ 0x8080808080808080;
  auVar25[8] = (byte)uVar13 ^ 0x80;
  auVar25[9] = (byte)((ulong)uVar13 >> 8) ^ 0x80;
  auVar25[10] = (byte)((ulong)uVar13 >> 0x10) ^ 0x80;
  auVar25[0xb] = (byte)((ulong)uVar13 >> 0x18) ^ 0x80;
  auVar25[0xc] = (byte)((ulong)uVar13 >> 0x20) ^ 0x80;
  auVar25[0xd] = (byte)((ulong)uVar13 >> 0x28) ^ 0x80;
  auVar25[0xe] = (byte)((ulong)uVar13 >> 0x30) ^ 0x80;
  auVar25[0xf] = (byte)((ulong)uVar13 >> 0x38) ^ 0x80;
  auVar62._0_8_ = auVar28._0_8_ ^ 0x8080808080808080;
  auVar62[8] = (byte)uVar14 ^ 0x80;
  auVar62[9] = (byte)((ulong)uVar14 >> 8) ^ 0x80;
  auVar62[10] = (byte)((ulong)uVar14 >> 0x10) ^ 0x80;
  auVar62[0xb] = (byte)((ulong)uVar14 >> 0x18) ^ 0x80;
  auVar62[0xc] = (byte)((ulong)uVar14 >> 0x20) ^ 0x80;
  auVar62[0xd] = (byte)((ulong)uVar14 >> 0x28) ^ 0x80;
  auVar62[0xe] = (byte)((ulong)uVar14 >> 0x30) ^ 0x80;
  auVar62[0xf] = (byte)((ulong)uVar14 >> 0x38) ^ 0x80;
  bVar27 = -(param_6 < auVar8[0]) & bVar46;
  bVar31 = -(param_6 < auVar8[1]) & bVar47;
  bVar32 = -(param_6 < auVar8[2]) & bVar48;
  bVar33 = -(param_6 < auVar8[3]) & bVar49;
  bVar34 = -(param_6 < auVar8[4]) & bVar50;
  bVar35 = -(param_6 < auVar8[5]) & bVar51;
  bVar36 = -(param_6 < auVar8[6]) & bVar52;
  bVar37 = -(param_6 < auVar8[7]) & bVar53;
  bVar38 = -(param_6 < auVar8[8]) & bVar54;
  bVar39 = -(param_6 < auVar8[9]) & bVar55;
  bVar40 = -(param_6 < auVar8[10]) & bVar56;
  bVar41 = -(param_6 < auVar8[0xb]) & bVar57;
  bVar42 = -(param_6 < auVar8[0xc]) & bVar58;
  bVar43 = -(param_6 < auVar8[0xd]) & bVar59;
  bVar44 = -(param_6 < auVar8[0xe]) & bVar60;
  bVar45 = -(param_6 < auVar8[0xf]) & bVar61;
  auVar8 = NEON_sqsub(auVar22,auVar19,1);
  auVar15 = NEON_sqsub(auVar67,auVar25,1);
  auVar15 = NEON_sqadd(auVar15,auVar8,1);
  auVar15 = NEON_sqadd(auVar8,auVar15,1);
  auVar64 = NEON_sqadd(auVar8,auVar15,1);
  auVar68[0] = auVar64[0] & bVar27;
  auVar68[1] = auVar64[1] & bVar31;
  auVar68[2] = auVar64[2] & bVar32;
  auVar68[3] = auVar64[3] & bVar33;
  auVar68[4] = auVar64[4] & bVar34;
  auVar68[5] = auVar64[5] & bVar35;
  auVar68[6] = auVar64[6] & bVar36;
  auVar68[7] = auVar64[7] & bVar37;
  auVar68[8] = auVar64[8] & bVar38;
  auVar68[9] = auVar64[9] & bVar39;
  auVar68[10] = auVar64[10] & bVar40;
  auVar68[0xb] = auVar64[0xb] & bVar41;
  auVar68[0xc] = auVar64[0xc] & bVar42;
  auVar68[0xd] = auVar64[0xd] & bVar43;
  auVar68[0xe] = auVar64[0xe] & bVar44;
  auVar68[0xf] = auVar64[0xf] & bVar45;
  auVar73[8] = 3;
  auVar73._0_8_ = 0x303030303030303;
  auVar73[9] = 3;
  auVar73[10] = 3;
  auVar73[0xb] = 3;
  auVar73[0xc] = 3;
  auVar73[0xd] = 3;
  auVar73[0xe] = 3;
  auVar73[0xf] = 3;
  auVar15 = NEON_sqadd(auVar68,auVar73,1);
  auVar78[8] = 4;
  auVar78._0_8_ = 0x404040404040404;
  auVar78[9] = 4;
  auVar78[10] = 4;
  auVar78[0xb] = 4;
  auVar78[0xc] = 4;
  auVar78[0xd] = 4;
  auVar78[0xe] = 4;
  auVar78[0xf] = 4;
  auVar8 = NEON_sqadd(auVar68,auVar78,1);
  auVar74[0] = auVar15[0] >> 3;
  auVar74[1] = auVar15[1] >> 3;
  auVar74[2] = auVar15[2] >> 3;
  auVar74[3] = auVar15[3] >> 3;
  auVar74[4] = auVar15[4] >> 3;
  auVar74[5] = auVar15[5] >> 3;
  auVar74[6] = auVar15[6] >> 3;
  auVar74[7] = auVar15[7] >> 3;
  auVar74[8] = auVar15[8] >> 3;
  auVar74[9] = auVar15[9] >> 3;
  auVar74[10] = auVar15[10] >> 3;
  auVar74[0xb] = auVar15[0xb] >> 3;
  auVar74[0xc] = auVar15[0xc] >> 3;
  auVar74[0xd] = auVar15[0xd] >> 3;
  auVar74[0xe] = auVar15[0xe] >> 3;
  auVar74[0xf] = auVar15[0xf] >> 3;
  auVar69[0] = auVar8[0] >> 3;
  auVar69[1] = auVar8[1] >> 3;
  auVar69[2] = auVar8[2] >> 3;
  auVar69[3] = auVar8[3] >> 3;
  auVar69[4] = auVar8[4] >> 3;
  auVar69[5] = auVar8[5] >> 3;
  auVar69[6] = auVar8[6] >> 3;
  auVar69[7] = auVar8[7] >> 3;
  auVar69[8] = auVar8[8] >> 3;
  auVar69[9] = auVar8[9] >> 3;
  auVar69[10] = auVar8[10] >> 3;
  auVar69[0xb] = auVar8[0xb] >> 3;
  auVar69[0xc] = auVar8[0xc] >> 3;
  auVar69[0xd] = auVar8[0xd] >> 3;
  auVar69[0xe] = auVar8[0xe] >> 3;
  auVar69[0xf] = auVar8[0xf] >> 3;
  auVar8 = NEON_sqadd(auVar19,auVar74,1);
  auVar15 = NEON_sqsub(auVar22,auVar69,1);
  bVar27 = auVar64[0] & (bVar27 ^ bVar46);
  bVar31 = auVar64[1] & (bVar31 ^ bVar47);
  bVar32 = auVar64[2] & (bVar32 ^ bVar48);
  bVar33 = auVar64[3] & (bVar33 ^ bVar49);
  bVar34 = auVar64[4] & (bVar34 ^ bVar50);
  bVar35 = auVar64[5] & (bVar35 ^ bVar51);
  bVar36 = auVar64[6] & (bVar36 ^ bVar52);
  bVar37 = auVar64[7] & (bVar37 ^ bVar53);
  auVar29._0_8_ =
       CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar34,CONCAT13(bVar33,CONCAT12(
                                                  bVar32,CONCAT11(bVar31,bVar27)))))));
  auVar29[8] = auVar64[8] & (bVar38 ^ bVar54);
  auVar29[9] = auVar64[9] & (bVar39 ^ bVar55);
  auVar29[10] = auVar64[10] & (bVar40 ^ bVar56);
  auVar29[0xb] = auVar64[0xb] & (bVar41 ^ bVar57);
  auVar29[0xc] = auVar64[0xc] & (bVar42 ^ bVar58);
  auVar29[0xd] = auVar64[0xd] & (bVar43 ^ bVar59);
  auVar29[0xe] = auVar64[0xe] & (bVar44 ^ bVar60);
  auVar29[0xf] = auVar64[0xf] & (bVar45 ^ bVar61);
  auVar75._0_2_ = (char)bVar27 * 9 + -1;
  auVar75._2_2_ = (char)bVar31 * 9 + -1;
  auVar75._4_2_ = (char)bVar32 * 9 + -1;
  auVar75._6_2_ = (char)bVar33 * 9 + -1;
  auVar75._8_2_ = (char)bVar34 * 9 + -1;
  auVar75._10_2_ = (char)bVar35 * 9 + -1;
  auVar75._12_2_ = (char)bVar36 * 9 + -1;
  auVar75._14_2_ = (char)bVar37 * 9 + -1;
  auVar30._8_8_ = auVar29._8_8_;
  auVar70._0_2_ = (char)auVar29[8] * 9 + -1;
  auVar70._2_2_ = (char)auVar29[9] * 9 + -1;
  auVar70._4_2_ = (char)auVar29[10] * 9 + -1;
  auVar70._6_2_ = (char)auVar29[0xb] * 9 + -1;
  auVar70._8_2_ = (char)auVar29[0xc] * 9 + -1;
  auVar70._10_2_ = (char)auVar29[0xd] * 9 + -1;
  auVar70._12_2_ = (char)auVar29[0xe] * 9 + -1;
  auVar70._14_2_ = (char)auVar29[0xf] * 9 + -1;
  auVar65._0_8_ = NEON_sqrshrn2(0x909090909090909,auVar75,7,2);
  auVar65._8_8_ = 0;
  auVar79._8_8_ = auVar78._8_8_;
  auVar79._0_8_ = NEON_sqrshrn2(0x404040404040404,auVar75,6,2);
  auVar76._0_2_ = auVar75._0_2_ + (char)bVar27 * 0x12;
  auVar76._2_2_ = auVar75._2_2_ + (char)bVar31 * 0x12;
  auVar76._4_2_ = auVar75._4_2_ + (char)bVar32 * 0x12;
  auVar76._6_2_ = auVar75._6_2_ + (char)bVar33 * 0x12;
  auVar76._8_2_ = auVar75._8_2_ + (char)bVar34 * 0x12;
  auVar76._10_2_ = auVar75._10_2_ + (char)bVar35 * 0x12;
  auVar76._12_2_ = auVar75._12_2_ + (char)bVar36 * 0x12;
  auVar76._14_2_ = auVar75._14_2_ + (char)bVar37 * 0x12;
  auVar72 = NEON_sqrshrn2(auVar79,auVar70,6,2);
  auVar66 = NEON_sqrshrn2(auVar65,auVar70,7,2);
  auVar71._0_2_ = auVar70._0_2_ + (char)auVar29[8] * 0x12;
  auVar71._2_2_ = auVar70._2_2_ + (char)auVar29[9] * 0x12;
  auVar71._4_2_ = auVar70._4_2_ + (char)auVar29[10] * 0x12;
  auVar71._6_2_ = auVar70._6_2_ + (char)auVar29[0xb] * 0x12;
  auVar71._8_2_ = auVar70._8_2_ + (char)auVar29[0xc] * 0x12;
  auVar71._10_2_ = auVar70._10_2_ + (char)auVar29[0xd] * 0x12;
  auVar71._12_2_ = auVar70._12_2_ + (char)auVar29[0xe] * 0x12;
  auVar71._14_2_ = auVar70._14_2_ + (char)auVar29[0xf] * 0x12;
  auVar30._0_8_ = NEON_sqrshrn2(auVar29._0_8_,auVar76,7,2);
  auVar64 = NEON_sqrshrn2(auVar30,auVar71,7,2);
  auVar8 = NEON_sqadd(auVar8,auVar64,1);
  auVar20._0_8_ = auVar8._0_8_ ^ 0x8080808080808080;
  auVar20[8] = auVar8[8] ^ 0x80;
  auVar20[9] = auVar8[9] ^ 0x80;
  auVar20[10] = auVar8[10] ^ 0x80;
  auVar20[0xb] = auVar8[0xb] ^ 0x80;
  auVar20[0xc] = auVar8[0xc] ^ 0x80;
  auVar20[0xd] = auVar8[0xd] ^ 0x80;
  auVar20[0xe] = auVar8[0xe] ^ 0x80;
  auVar20[0xf] = auVar8[0xf] ^ 0x80;
  auVar8 = NEON_sqsub(auVar15,auVar64,1);
  auVar23._0_8_ = auVar8._0_8_ ^ 0x8080808080808080;
  auVar23[8] = auVar8[8] ^ 0x80;
  auVar23[9] = auVar8[9] ^ 0x80;
  auVar23[10] = auVar8[10] ^ 0x80;
  auVar23[0xb] = auVar8[0xb] ^ 0x80;
  auVar23[0xc] = auVar8[0xc] ^ 0x80;
  auVar23[0xd] = auVar8[0xd] ^ 0x80;
  auVar23[0xe] = auVar8[0xe] ^ 0x80;
  auVar23[0xf] = auVar8[0xf] ^ 0x80;
  auVar8 = NEON_sqsub(auVar25,auVar72,1);
  auVar26._0_8_ = auVar8._0_8_ ^ 0x8080808080808080;
  auVar26[8] = auVar8[8] ^ 0x80;
  auVar26[9] = auVar8[9] ^ 0x80;
  auVar26[10] = auVar8[10] ^ 0x80;
  auVar26[0xb] = auVar8[0xb] ^ 0x80;
  auVar26[0xc] = auVar8[0xc] ^ 0x80;
  auVar26[0xd] = auVar8[0xd] ^ 0x80;
  auVar26[0xe] = auVar8[0xe] ^ 0x80;
  auVar26[0xf] = auVar8[0xf] ^ 0x80;
  auVar8 = NEON_sqadd(auVar67,auVar72,1);
  auVar72._0_8_ = auVar8._0_8_ ^ 0x8080808080808080;
  auVar72[8] = auVar8[8] ^ 0x80;
  auVar72[9] = auVar8[9] ^ 0x80;
  auVar72[10] = auVar8[10] ^ 0x80;
  auVar72[0xb] = auVar8[0xb] ^ 0x80;
  auVar72[0xc] = auVar8[0xc] ^ 0x80;
  auVar72[0xd] = auVar8[0xd] ^ 0x80;
  auVar72[0xe] = auVar8[0xe] ^ 0x80;
  auVar72[0xf] = auVar8[0xf] ^ 0x80;
  auVar8 = NEON_sqadd(auVar16,auVar66,1);
  auVar17._0_8_ = auVar8._0_8_ ^ 0x8080808080808080;
  auVar17[8] = auVar8[8] ^ 0x80;
  auVar17[9] = auVar8[9] ^ 0x80;
  auVar17[10] = auVar8[10] ^ 0x80;
  auVar17[0xb] = auVar8[0xb] ^ 0x80;
  auVar17[0xc] = auVar8[0xc] ^ 0x80;
  auVar17[0xd] = auVar8[0xd] ^ 0x80;
  auVar17[0xe] = auVar8[0xe] ^ 0x80;
  auVar17[0xf] = auVar8[0xf] ^ 0x80;
  *(ulong *)((long)puVar7 - lVar4) = auVar17._0_8_;
  *puVar7 = auVar72._0_8_;
  auVar8 = NEON_sqsub(auVar62,auVar66,1);
  auVar15 = NEON_ext(auVar17,auVar17,8,1);
  *(long *)((long)puVar5 - lVar4) = auVar15._0_8_;
  auVar15 = NEON_ext(auVar72,auVar72,8,1);
  *puVar5 = auVar15._0_8_;
  *(ulong *)((long)param_1 - lVar4) = auVar20._0_8_;
  *param_1 = auVar23._0_8_;
  auVar15._0_8_ = auVar8._0_8_ ^ 0x8080808080808080;
  auVar15[8] = auVar8[8] ^ 0x80;
  auVar15[9] = auVar8[9] ^ 0x80;
  auVar15[10] = auVar8[10] ^ 0x80;
  auVar15[0xb] = auVar8[0xb] ^ 0x80;
  auVar15[0xc] = auVar8[0xc] ^ 0x80;
  auVar15[0xd] = auVar8[0xd] ^ 0x80;
  auVar15[0xe] = auVar8[0xe] ^ 0x80;
  auVar15[0xf] = auVar8[0xf] ^ 0x80;
  auVar8 = NEON_ext(auVar20,auVar20,8,1);
  *(undefined8 *)((long)param_2 - lVar4) = auVar8._0_8_;
  auVar8 = NEON_ext(auVar23,auVar23,8,1);
  *param_2 = auVar8._0_8_;
  *(ulong *)((long)puVar2 - lVar4) = auVar26._0_8_;
  *puVar2 = auVar15._0_8_;
  auVar8 = NEON_ext(auVar26,auVar26,8,1);
  *(long *)((long)puVar3 - lVar4) = auVar8._0_8_;
  auVar8 = NEON_ext(auVar15,auVar15,8,1);
  *puVar3 = auVar8._0_8_;
  return;
}



/* Entry: 0023cfb4; end: 0023d3cb;  */

void FUN_0023cfb4(char *param_1,int param_2,uint param_3,int param_4,char *param_5)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  pcVar9 = param_1 + 1;
  *param_5 = *param_1;
  uVar13 = param_2 - 1;
  uVar7 = (ulong)uVar13;
  if (param_2 < 0x11) {
    uVar8 = 0;
    if ((int)uVar13 < 1) goto LAB_0023d080;
  }
  else {
    uVar14 = 0x10;
    pcVar11 = param_5 + 1;
    do {
      uVar21 = *(undefined8 *)(pcVar9 + 8);
      uVar19 = *(undefined8 *)pcVar9;
      uVar22 = *(undefined8 *)(pcVar9 + 7);
      uVar20 = *(undefined8 *)(pcVar9 + -1);
      *(ulong *)(pcVar11 + 8) =
           CONCAT17((char)((ulong)uVar21 >> 0x38) - (char)((ulong)uVar22 >> 0x38),
                    CONCAT16((char)((ulong)uVar21 >> 0x30) - (char)((ulong)uVar22 >> 0x30),
                             CONCAT15((char)((ulong)uVar21 >> 0x28) - (char)((ulong)uVar22 >> 0x28),
                                      CONCAT14((char)((ulong)uVar21 >> 0x20) -
                                               (char)((ulong)uVar22 >> 0x20),
                                               CONCAT13((char)((ulong)uVar21 >> 0x18) -
                                                        (char)((ulong)uVar22 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar21 >> 0x10) -
                                                                 (char)((ulong)uVar22 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar21 >> 8)
                                                                          - (char)((ulong)uVar22 >>
                                                                                  8),
                                                                          (char)uVar21 -
                                                                          (char)uVar22)))))));
      *(ulong *)pcVar11 =
           CONCAT17((char)((ulong)uVar19 >> 0x38) - (char)((ulong)uVar20 >> 0x38),
                    CONCAT16((char)((ulong)uVar19 >> 0x30) - (char)((ulong)uVar20 >> 0x30),
                             CONCAT15((char)((ulong)uVar19 >> 0x28) - (char)((ulong)uVar20 >> 0x28),
                                      CONCAT14((char)((ulong)uVar19 >> 0x20) -
                                               (char)((ulong)uVar20 >> 0x20),
                                               CONCAT13((char)((ulong)uVar19 >> 0x18) -
                                                        (char)((ulong)uVar20 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar19 >> 0x10) -
                                                                 (char)((ulong)uVar20 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar19 >> 8)
                                                                          - (char)((ulong)uVar20 >>
                                                                                  8),
                                                                          (char)uVar19 -
                                                                          (char)uVar20)))))));
      uVar14 = uVar14 + 0x10;
      pcVar9 = pcVar9 + 0x10;
      pcVar11 = pcVar11 + 0x10;
    } while (uVar14 <= uVar7);
    uVar8 = uVar13 & 0x7ffffff0;
    if ((int)uVar13 <= (int)uVar8) goto LAB_0023d080;
  }
  uVar14 = (ulong)uVar8;
  uVar16 = uVar7 - uVar14;
  if ((7 < uVar16) &&
     ((param_1 + uVar7 + 1 <= param_5 + uVar14 + 1 || (param_5 + uVar7 + 1 <= param_1 + uVar14)))) {
    if (uVar16 < 0x20) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar16 & 0xffffffffffffffe0;
      pcVar9 = param_1 + uVar14 + 0x11;
      pcVar11 = param_5 + uVar14 + 0x11;
      uVar17 = uVar18;
      do {
        uVar21 = *(undefined8 *)(pcVar9 + -8);
        uVar19 = *(undefined8 *)(pcVar9 + -0x10);
        uVar22 = *(undefined8 *)(pcVar9 + 8);
        uVar20 = *(undefined8 *)pcVar9;
        uVar24 = *(undefined8 *)(pcVar9 + -9);
        uVar23 = *(undefined8 *)(pcVar9 + -0x11);
        uVar26 = *(undefined8 *)(pcVar9 + 7);
        uVar25 = *(undefined8 *)(pcVar9 + -1);
        *(ulong *)(pcVar11 + -8) =
             CONCAT17((char)((ulong)uVar21 >> 0x38) - (char)((ulong)uVar24 >> 0x38),
                      CONCAT16((char)((ulong)uVar21 >> 0x30) - (char)((ulong)uVar24 >> 0x30),
                               CONCAT15((char)((ulong)uVar21 >> 0x28) -
                                        (char)((ulong)uVar24 >> 0x28),
                                        CONCAT14((char)((ulong)uVar21 >> 0x20) -
                                                 (char)((ulong)uVar24 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar21 >> 0x18) -
                                                          (char)((ulong)uVar24 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar21 >> 0x10) -
                                                                   (char)((ulong)uVar24 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar21 >>
                                                                                  8) -
                                                                            (char)((ulong)uVar24 >>
                                                                                  8),(char)uVar21 -
                                                                                     (char)uVar24)))
                                                ))));
        *(ulong *)(pcVar11 + -0x10) =
             CONCAT17((char)((ulong)uVar19 >> 0x38) - (char)((ulong)uVar23 >> 0x38),
                      CONCAT16((char)((ulong)uVar19 >> 0x30) - (char)((ulong)uVar23 >> 0x30),
                               CONCAT15((char)((ulong)uVar19 >> 0x28) -
                                        (char)((ulong)uVar23 >> 0x28),
                                        CONCAT14((char)((ulong)uVar19 >> 0x20) -
                                                 (char)((ulong)uVar23 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar19 >> 0x18) -
                                                          (char)((ulong)uVar23 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar19 >> 0x10) -
                                                                   (char)((ulong)uVar23 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar19 >>
                                                                                  8) -
                                                                            (char)((ulong)uVar23 >>
                                                                                  8),(char)uVar19 -
                                                                                     (char)uVar23)))
                                                ))));
        *(ulong *)(pcVar11 + 8) =
             CONCAT17((char)((ulong)uVar22 >> 0x38) - (char)((ulong)uVar26 >> 0x38),
                      CONCAT16((char)((ulong)uVar22 >> 0x30) - (char)((ulong)uVar26 >> 0x30),
                               CONCAT15((char)((ulong)uVar22 >> 0x28) -
                                        (char)((ulong)uVar26 >> 0x28),
                                        CONCAT14((char)((ulong)uVar22 >> 0x20) -
                                                 (char)((ulong)uVar26 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar22 >> 0x18) -
                                                          (char)((ulong)uVar26 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar22 >> 0x10) -
                                                                   (char)((ulong)uVar26 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar22 >>
                                                                                  8) -
                                                                            (char)((ulong)uVar26 >>
                                                                                  8),(char)uVar22 -
                                                                                     (char)uVar26)))
                                                ))));
        *(ulong *)pcVar11 =
             CONCAT17((char)((ulong)uVar20 >> 0x38) - (char)((ulong)uVar25 >> 0x38),
                      CONCAT16((char)((ulong)uVar20 >> 0x30) - (char)((ulong)uVar25 >> 0x30),
                               CONCAT15((char)((ulong)uVar20 >> 0x28) -
                                        (char)((ulong)uVar25 >> 0x28),
                                        CONCAT14((char)((ulong)uVar20 >> 0x20) -
                                                 (char)((ulong)uVar25 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar20 >> 0x18) -
                                                          (char)((ulong)uVar25 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar20 >> 0x10) -
                                                                   (char)((ulong)uVar25 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar20 >>
                                                                                  8) -
                                                                            (char)((ulong)uVar25 >>
                                                                                  8),(char)uVar20 -
                                                                                     (char)uVar25)))
                                                ))));
        pcVar9 = pcVar9 + 0x20;
        pcVar11 = pcVar11 + 0x20;
        uVar17 = uVar17 - 0x20;
      } while (uVar17 != 0);
      if (uVar16 == uVar18) goto LAB_0023d080;
      if ((uVar16 & 0x18) == 0) {
        uVar14 = uVar18 + uVar14;
        goto LAB_0023d054;
      }
    }
    lVar12 = (uVar18 + uVar14 + (uVar7 & 7)) - uVar7;
    lVar10 = uVar18 + uVar14 + 1;
    pcVar9 = param_1 + lVar10;
    pcVar11 = param_5 + lVar10;
    do {
      uVar19 = *(undefined8 *)pcVar9;
      uVar21 = *(undefined8 *)(pcVar9 + -1);
      *(ulong *)pcVar11 =
           CONCAT17((char)((ulong)uVar19 >> 0x38) - (char)((ulong)uVar21 >> 0x38),
                    CONCAT16((char)((ulong)uVar19 >> 0x30) - (char)((ulong)uVar21 >> 0x30),
                             CONCAT15((char)((ulong)uVar19 >> 0x28) - (char)((ulong)uVar21 >> 0x28),
                                      CONCAT14((char)((ulong)uVar19 >> 0x20) -
                                               (char)((ulong)uVar21 >> 0x20),
                                               CONCAT13((char)((ulong)uVar19 >> 0x18) -
                                                        (char)((ulong)uVar21 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar19 >> 0x10) -
                                                                 (char)((ulong)uVar21 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar19 >> 8)
                                                                          - (char)((ulong)uVar21 >>
                                                                                  8),
                                                                          (char)uVar19 -
                                                                          (char)uVar21)))))));
      pcVar9 = pcVar9 + 8;
      lVar12 = lVar12 + 8;
      pcVar11 = pcVar11 + 8;
    } while (lVar12 != 0);
    uVar14 = (uVar16 - (uVar7 & 7)) + uVar14;
    if ((uVar13 & 7) == 0) goto LAB_0023d080;
  }
LAB_0023d054:
  lVar10 = uVar7 - uVar14;
  pcVar9 = param_1 + uVar14 + 1;
  pcVar11 = param_5 + uVar14 + 1;
  do {
    *pcVar11 = *pcVar9 - pcVar9[-1];
    pcVar9 = pcVar9 + 1;
    lVar10 = lVar10 + -1;
    pcVar11 = pcVar11 + 1;
  } while (lVar10 != 0);
LAB_0023d080:
  if (1 < (int)param_3) {
    lVar10 = (long)param_4;
    pcVar9 = param_1 + lVar10;
    pcVar11 = param_5 + lVar10;
    lVar12 = -lVar10;
    if (param_2 < 0x11) {
      if (param_2 < 2) {
        iVar6 = param_3 - 1;
        do {
          param_5 = param_5 + lVar10;
          cVar2 = *param_1;
          param_1 = param_1 + lVar10;
          *param_5 = *param_1 - cVar2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      else {
        uVar13 = 1;
        do {
          uVar14 = 0;
          *pcVar11 = *pcVar9 - pcVar9[lVar12];
          do {
            pcVar11[uVar14 + 1] = (pcVar9 + uVar14)[1] - pcVar9[uVar14];
            uVar14 = uVar14 + 1;
          } while (uVar7 != uVar14);
          uVar13 = uVar13 + 1;
          pcVar9 = pcVar9 + lVar10;
          pcVar11 = pcVar11 + lVar10;
        } while (uVar13 != param_3);
      }
    }
    else {
      uVar14 = (ulong)(uVar13 & 0x7ffffff0);
      if ((uVar13 & 0x7ffffff0) == uVar13) {
        uVar13 = 1;
        do {
          lVar15 = 0;
          *pcVar11 = *pcVar9 - pcVar9[lVar12];
          do {
            pcVar1 = pcVar9 + lVar15;
            uVar21 = *(undefined8 *)(pcVar1 + 9);
            uVar19 = *(undefined8 *)(pcVar1 + 1);
            uVar22 = *(undefined8 *)(pcVar1 + 8);
            uVar20 = *(undefined8 *)pcVar1;
            *(ulong *)(pcVar11 + lVar15 + 9) =
                 CONCAT17((char)((ulong)uVar21 >> 0x38) - (char)((ulong)uVar22 >> 0x38),
                          CONCAT16((char)((ulong)uVar21 >> 0x30) - (char)((ulong)uVar22 >> 0x30),
                                   CONCAT15((char)((ulong)uVar21 >> 0x28) -
                                            (char)((ulong)uVar22 >> 0x28),
                                            CONCAT14((char)((ulong)uVar21 >> 0x20) -
                                                     (char)((ulong)uVar22 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar21 >> 0x18) -
                                                              (char)((ulong)uVar22 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar21 >> 0x10)
                                                                       - (char)((ulong)uVar22 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar21
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar22
                                                                                      >> 8),
                                                                                (char)uVar21 -
                                                                                (char)uVar22)))))));
            *(ulong *)(pcVar11 + lVar15 + 1) =
                 CONCAT17((char)((ulong)uVar19 >> 0x38) - (char)((ulong)uVar20 >> 0x38),
                          CONCAT16((char)((ulong)uVar19 >> 0x30) - (char)((ulong)uVar20 >> 0x30),
                                   CONCAT15((char)((ulong)uVar19 >> 0x28) -
                                            (char)((ulong)uVar20 >> 0x28),
                                            CONCAT14((char)((ulong)uVar19 >> 0x20) -
                                                     (char)((ulong)uVar20 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar19 >> 0x18) -
                                                              (char)((ulong)uVar20 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar19 >> 0x10)
                                                                       - (char)((ulong)uVar20 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar19
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar20
                                                                                      >> 8),
                                                                                (char)uVar19 -
                                                                                (char)uVar20)))))));
            uVar14 = lVar15 + 0x20;
            lVar15 = lVar15 + 0x10;
          } while (uVar14 <= uVar7);
          uVar13 = uVar13 + 1;
          pcVar9 = pcVar9 + lVar10;
          pcVar11 = pcVar11 + lVar10;
        } while (uVar13 != param_3);
      }
      else {
        lVar15 = uVar7 + ((ulong)param_3 - 1) * lVar10 + 1;
        uVar16 = uVar7 - uVar14;
        uVar17 = uVar16 & 0xffffffffffffffe0;
        uVar8 = 1;
        do {
          lVar3 = 0;
          *pcVar11 = *pcVar9 - pcVar9[lVar12];
          do {
            pcVar1 = pcVar9 + lVar3;
            uVar21 = *(undefined8 *)(pcVar1 + 9);
            uVar19 = *(undefined8 *)(pcVar1 + 1);
            uVar22 = *(undefined8 *)(pcVar1 + 8);
            uVar20 = *(undefined8 *)pcVar1;
            *(ulong *)(pcVar11 + lVar3 + 9) =
                 CONCAT17((char)((ulong)uVar21 >> 0x38) - (char)((ulong)uVar22 >> 0x38),
                          CONCAT16((char)((ulong)uVar21 >> 0x30) - (char)((ulong)uVar22 >> 0x30),
                                   CONCAT15((char)((ulong)uVar21 >> 0x28) -
                                            (char)((ulong)uVar22 >> 0x28),
                                            CONCAT14((char)((ulong)uVar21 >> 0x20) -
                                                     (char)((ulong)uVar22 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar21 >> 0x18) -
                                                              (char)((ulong)uVar22 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar21 >> 0x10)
                                                                       - (char)((ulong)uVar22 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar21
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar22
                                                                                      >> 8),
                                                                                (char)uVar21 -
                                                                                (char)uVar22)))))));
            *(ulong *)(pcVar11 + lVar3 + 1) =
                 CONCAT17((char)((ulong)uVar19 >> 0x38) - (char)((ulong)uVar20 >> 0x38),
                          CONCAT16((char)((ulong)uVar19 >> 0x30) - (char)((ulong)uVar20 >> 0x30),
                                   CONCAT15((char)((ulong)uVar19 >> 0x28) -
                                            (char)((ulong)uVar20 >> 0x28),
                                            CONCAT14((char)((ulong)uVar19 >> 0x20) -
                                                     (char)((ulong)uVar20 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar19 >> 0x18) -
                                                              (char)((ulong)uVar20 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar19 >> 0x10)
                                                                       - (char)((ulong)uVar20 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar19
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar20
                                                                                      >> 8),
                                                                                (char)uVar19 -
                                                                                (char)uVar20)))))));
            uVar18 = lVar3 + 0x20;
            lVar3 = lVar3 + 0x10;
          } while (uVar18 <= uVar7);
          uVar18 = uVar14;
          if ((uVar16 < 8 || param_4 < 0) ||
              param_5 + lVar10 + uVar14 + 1 < param_1 + lVar15 &&
              param_1 + lVar10 + uVar14 < param_5 + lVar15) {
LAB_0023d304:
            lVar3 = uVar7 - uVar18;
            do {
              uVar18 = uVar18 + 1;
              pcVar11[uVar18] = pcVar9[uVar18] - (pcVar9 + uVar18)[-1];
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          else {
            uVar4 = uVar14;
            uVar18 = uVar17;
            if (uVar16 < 0x20) {
              uVar4 = 0;
LAB_0023d2d4:
              lVar5 = ((uVar14 + (uVar7 & 7)) - uVar7) + uVar4;
              lVar3 = uVar14 + 1 + uVar4;
              do {
                uVar19 = *(undefined8 *)(pcVar9 + lVar3);
                uVar21 = *(undefined8 *)(pcVar9 + lVar3 + -1);
                *(ulong *)(pcVar11 + lVar3) =
                     CONCAT17((char)((ulong)uVar19 >> 0x38) - (char)((ulong)uVar21 >> 0x38),
                              CONCAT16((char)((ulong)uVar19 >> 0x30) - (char)((ulong)uVar21 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar19 >> 0x28) -
                                                 (char)((ulong)uVar21 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar19 >> 0x20) -
                                                          (char)((ulong)uVar21 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar19 >> 0x18) -
                                                                   (char)((ulong)uVar21 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar19 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar21 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar19 >> 8) - (char)((ulong)uVar21 >> 8),
                                                  (char)uVar19 - (char)uVar21)))))));
                lVar3 = lVar3 + 8;
                lVar5 = lVar5 + 8;
              } while (lVar5 != 0);
              uVar18 = (uVar16 - (uVar7 & 7)) + uVar14;
              if ((uVar13 & 7) != 0) goto LAB_0023d304;
            }
            else {
              do {
                pcVar1 = pcVar9 + uVar4;
                uVar21 = *(undefined8 *)(pcVar1 + 9);
                uVar19 = *(undefined8 *)(pcVar1 + 1);
                uVar22 = *(undefined8 *)(pcVar1 + 0x19);
                uVar20 = *(undefined8 *)(pcVar1 + 0x11);
                uVar24 = *(undefined8 *)(pcVar1 + 8);
                uVar23 = *(undefined8 *)pcVar1;
                uVar26 = *(undefined8 *)(pcVar1 + 0x18);
                uVar25 = *(undefined8 *)(pcVar1 + 0x10);
                *(ulong *)(pcVar11 + uVar4 + 9) =
                     CONCAT17((char)((ulong)uVar21 >> 0x38) - (char)((ulong)uVar24 >> 0x38),
                              CONCAT16((char)((ulong)uVar21 >> 0x30) - (char)((ulong)uVar24 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar21 >> 0x28) -
                                                 (char)((ulong)uVar24 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar21 >> 0x20) -
                                                          (char)((ulong)uVar24 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar21 >> 0x18) -
                                                                   (char)((ulong)uVar24 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar21 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar24 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar21 >> 8) - (char)((ulong)uVar24 >> 8),
                                                  (char)uVar21 - (char)uVar24)))))));
                *(ulong *)(pcVar11 + uVar4 + 1) =
                     CONCAT17((char)((ulong)uVar19 >> 0x38) - (char)((ulong)uVar23 >> 0x38),
                              CONCAT16((char)((ulong)uVar19 >> 0x30) - (char)((ulong)uVar23 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar19 >> 0x28) -
                                                 (char)((ulong)uVar23 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar19 >> 0x20) -
                                                          (char)((ulong)uVar23 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar19 >> 0x18) -
                                                                   (char)((ulong)uVar23 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar19 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar23 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar19 >> 8) - (char)((ulong)uVar23 >> 8),
                                                  (char)uVar19 - (char)uVar23)))))));
                *(ulong *)(pcVar11 + uVar4 + 0x19) =
                     CONCAT17((char)((ulong)uVar22 >> 0x38) - (char)((ulong)uVar26 >> 0x38),
                              CONCAT16((char)((ulong)uVar22 >> 0x30) - (char)((ulong)uVar26 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar22 >> 0x28) -
                                                 (char)((ulong)uVar26 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar22 >> 0x20) -
                                                          (char)((ulong)uVar26 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar22 >> 0x18) -
                                                                   (char)((ulong)uVar26 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar22 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar26 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar22 >> 8) - (char)((ulong)uVar26 >> 8),
                                                  (char)uVar22 - (char)uVar26)))))));
                *(ulong *)(pcVar11 + uVar4 + 0x11) =
                     CONCAT17((char)((ulong)uVar20 >> 0x38) - (char)((ulong)uVar25 >> 0x38),
                              CONCAT16((char)((ulong)uVar20 >> 0x30) - (char)((ulong)uVar25 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar20 >> 0x28) -
                                                 (char)((ulong)uVar25 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar20 >> 0x20) -
                                                          (char)((ulong)uVar25 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar20 >> 0x18) -
                                                                   (char)((ulong)uVar25 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar20 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar25 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar20 >> 8) - (char)((ulong)uVar25 >> 8),
                                                  (char)uVar20 - (char)uVar25)))))));
                uVar18 = uVar18 - 0x20;
                uVar4 = uVar4 + 0x20;
              } while (uVar18 != 0);
              if (uVar16 != uVar17) {
                uVar18 = uVar17 + uVar14;
                uVar4 = uVar17;
                if ((uVar16 & 0x18) == 0) goto LAB_0023d304;
                goto LAB_0023d2d4;
              }
            }
          }
          uVar8 = uVar8 + 1;
          pcVar9 = pcVar9 + lVar10;
          pcVar11 = pcVar11 + lVar10;
        } while (uVar8 != param_3);
      }
    }
  }
  return;
}



/* Entry: 0023d3cc; end: 0023de33;  */

void FUN_0023d3cc(undefined1 *param_1,uint param_2,int param_3,int param_4,undefined1 *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  char *pcVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  puVar7 = (undefined8 *)(param_1 + 1);
  *param_5 = *param_1;
  uVar1 = param_2 - 1;
  uVar4 = (ulong)uVar1;
  if ((int)param_2 < 0x11) {
    uVar6 = 0;
    if ((int)uVar1 < 1) goto LAB_0023d4a4;
  }
  else {
    uVar15 = 0x10;
    puVar10 = (undefined8 *)(param_5 + 1);
    do {
      uVar27 = puVar7[1];
      uVar25 = *puVar7;
      uVar28 = *(undefined8 *)((long)puVar7 + 7);
      uVar26 = *(undefined8 *)((long)puVar7 + -1);
      puVar10[1] = CONCAT17((char)((ulong)uVar27 >> 0x38) - (char)((ulong)uVar28 >> 0x38),
                            CONCAT16((char)((ulong)uVar27 >> 0x30) - (char)((ulong)uVar28 >> 0x30),
                                     CONCAT15((char)((ulong)uVar27 >> 0x28) -
                                              (char)((ulong)uVar28 >> 0x28),
                                              CONCAT14((char)((ulong)uVar27 >> 0x20) -
                                                       (char)((ulong)uVar28 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar27 >> 0x18) -
                                                                (char)((ulong)uVar28 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar27 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar28 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar27 >> 8) - (char)((ulong)uVar28 >> 8),
                                                  (char)uVar27 - (char)uVar28)))))));
      *puVar10 = CONCAT17((char)((ulong)uVar25 >> 0x38) - (char)((ulong)uVar26 >> 0x38),
                          CONCAT16((char)((ulong)uVar25 >> 0x30) - (char)((ulong)uVar26 >> 0x30),
                                   CONCAT15((char)((ulong)uVar25 >> 0x28) -
                                            (char)((ulong)uVar26 >> 0x28),
                                            CONCAT14((char)((ulong)uVar25 >> 0x20) -
                                                     (char)((ulong)uVar26 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar25 >> 0x18) -
                                                              (char)((ulong)uVar26 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar25 >> 0x10)
                                                                       - (char)((ulong)uVar26 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar25
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar26
                                                                                      >> 8),
                                                                                (char)uVar25 -
                                                                                (char)uVar26)))))));
      uVar15 = uVar15 + 0x10;
      puVar7 = puVar7 + 2;
      puVar10 = puVar10 + 2;
    } while (uVar15 <= uVar4);
    uVar6 = uVar1 & 0x7ffffff0;
    if ((int)uVar1 <= (int)uVar6) goto LAB_0023d4a4;
  }
  uVar15 = (ulong)uVar6;
  uVar11 = uVar4 - uVar15;
  if ((7 < uVar11) &&
     ((param_1 + uVar4 + 1 <= param_5 + uVar15 + 1 || (param_5 + uVar4 + 1 <= param_1 + uVar15)))) {
    if (uVar11 < 0x20) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar11 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(param_1 + uVar15 + 0x11);
      puVar10 = (undefined8 *)(param_5 + uVar15 + 0x11);
      uVar20 = uVar14;
      do {
        uVar27 = puVar7[-1];
        uVar25 = puVar7[-2];
        uVar28 = puVar7[1];
        uVar26 = *puVar7;
        uVar30 = *(undefined8 *)((long)puVar7 + -9);
        uVar29 = *(undefined8 *)((long)puVar7 + -0x11);
        uVar32 = *(undefined8 *)((long)puVar7 + 7);
        uVar31 = *(undefined8 *)((long)puVar7 + -1);
        puVar10[-1] = CONCAT17((char)((ulong)uVar27 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                               CONCAT16((char)((ulong)uVar27 >> 0x30) -
                                        (char)((ulong)uVar30 >> 0x30),
                                        CONCAT15((char)((ulong)uVar27 >> 0x28) -
                                                 (char)((ulong)uVar30 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar27 >> 0x20) -
                                                          (char)((ulong)uVar30 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar27 >> 0x18) -
                                                                   (char)((ulong)uVar30 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar27 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar30 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar27 >> 8) - (char)((ulong)uVar30 >> 8),
                                                  (char)uVar27 - (char)uVar30)))))));
        puVar10[-2] = CONCAT17((char)((ulong)uVar25 >> 0x38) - (char)((ulong)uVar29 >> 0x38),
                               CONCAT16((char)((ulong)uVar25 >> 0x30) -
                                        (char)((ulong)uVar29 >> 0x30),
                                        CONCAT15((char)((ulong)uVar25 >> 0x28) -
                                                 (char)((ulong)uVar29 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar25 >> 0x20) -
                                                          (char)((ulong)uVar29 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar25 >> 0x18) -
                                                                   (char)((ulong)uVar29 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar25 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar29 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar25 >> 8) - (char)((ulong)uVar29 >> 8),
                                                  (char)uVar25 - (char)uVar29)))))));
        puVar10[1] = CONCAT17((char)((ulong)uVar28 >> 0x38) - (char)((ulong)uVar32 >> 0x38),
                              CONCAT16((char)((ulong)uVar28 >> 0x30) - (char)((ulong)uVar32 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar28 >> 0x28) -
                                                 (char)((ulong)uVar32 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar28 >> 0x20) -
                                                          (char)((ulong)uVar32 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar28 >> 0x18) -
                                                                   (char)((ulong)uVar32 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar28 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar32 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar28 >> 8) - (char)((ulong)uVar32 >> 8),
                                                  (char)uVar28 - (char)uVar32)))))));
        *puVar10 = CONCAT17((char)((ulong)uVar26 >> 0x38) - (char)((ulong)uVar31 >> 0x38),
                            CONCAT16((char)((ulong)uVar26 >> 0x30) - (char)((ulong)uVar31 >> 0x30),
                                     CONCAT15((char)((ulong)uVar26 >> 0x28) -
                                              (char)((ulong)uVar31 >> 0x28),
                                              CONCAT14((char)((ulong)uVar26 >> 0x20) -
                                                       (char)((ulong)uVar31 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar26 >> 0x18) -
                                                                (char)((ulong)uVar31 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar26 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar31 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar26 >> 8) - (char)((ulong)uVar31 >> 8),
                                                  (char)uVar26 - (char)uVar31)))))));
        puVar7 = puVar7 + 4;
        puVar10 = puVar10 + 4;
        uVar20 = uVar20 - 0x20;
      } while (uVar20 != 0);
      if (uVar11 == uVar14) goto LAB_0023d4a4;
      if ((uVar11 & 0x18) == 0) {
        uVar15 = uVar14 + uVar15;
        goto LAB_0023d478;
      }
    }
    lVar16 = (uVar14 + uVar15 + (uVar4 & 7)) - uVar4;
    lVar5 = uVar14 + uVar15 + 1;
    puVar7 = (undefined8 *)(param_1 + lVar5);
    puVar10 = (undefined8 *)(param_5 + lVar5);
    do {
      uVar25 = *puVar7;
      uVar27 = *(undefined8 *)((long)puVar7 + -1);
      *puVar10 = CONCAT17((char)((ulong)uVar25 >> 0x38) - (char)((ulong)uVar27 >> 0x38),
                          CONCAT16((char)((ulong)uVar25 >> 0x30) - (char)((ulong)uVar27 >> 0x30),
                                   CONCAT15((char)((ulong)uVar25 >> 0x28) -
                                            (char)((ulong)uVar27 >> 0x28),
                                            CONCAT14((char)((ulong)uVar25 >> 0x20) -
                                                     (char)((ulong)uVar27 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar25 >> 0x18) -
                                                              (char)((ulong)uVar27 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar25 >> 0x10)
                                                                       - (char)((ulong)uVar27 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar25
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar27
                                                                                      >> 8),
                                                                                (char)uVar25 -
                                                                                (char)uVar27)))))));
      puVar7 = puVar7 + 1;
      lVar16 = lVar16 + 8;
      puVar10 = puVar10 + 1;
    } while (lVar16 != 0);
    uVar15 = (uVar11 - (uVar4 & 7)) + uVar15;
    if ((uVar1 & 7) == 0) goto LAB_0023d4a4;
  }
LAB_0023d478:
  lVar5 = uVar4 - uVar15;
  pcVar12 = param_1 + uVar15 + 1;
  pcVar8 = param_5 + uVar15 + 1;
  do {
    *pcVar8 = *pcVar12 - pcVar12[-1];
    pcVar12 = pcVar12 + 1;
    lVar5 = lVar5 + -1;
    pcVar8 = pcVar8 + 1;
  } while (lVar5 != 0);
LAB_0023d4a4:
  if (1 < param_3) {
    lVar5 = (long)param_4;
    puVar9 = param_5 + lVar5;
    uVar4 = (ulong)param_2;
    if ((int)param_2 < 0x10) {
      if (0 < (int)param_2) {
        iVar13 = 1;
        do {
          uVar15 = 0;
          do {
            puVar9[uVar15] = param_1[uVar15 + lVar5] - param_1[uVar15];
            uVar15 = uVar15 + 1;
          } while (uVar4 != uVar15);
          iVar13 = iVar13 + 1;
          puVar9 = puVar9 + lVar5;
          param_1 = param_1 + lVar5;
        } while (iVar13 != param_3);
      }
    }
    else {
      uVar15 = (ulong)(param_2 & 0x7ffffff0);
      if ((param_2 & 0x7ffffff0) == param_2) {
        iVar13 = 1;
        do {
          lVar16 = 0;
          do {
            uVar27 = *(undefined8 *)((long)(param_1 + lVar16 + lVar5) + 8);
            uVar25 = *(undefined8 *)(param_1 + lVar16 + lVar5);
            uVar28 = *(undefined8 *)((long)(param_1 + lVar16) + 8);
            uVar26 = *(undefined8 *)(param_1 + lVar16);
            *(ulong *)((long)(puVar9 + lVar16) + 8) =
                 CONCAT17((char)((ulong)uVar27 >> 0x38) - (char)((ulong)uVar28 >> 0x38),
                          CONCAT16((char)((ulong)uVar27 >> 0x30) - (char)((ulong)uVar28 >> 0x30),
                                   CONCAT15((char)((ulong)uVar27 >> 0x28) -
                                            (char)((ulong)uVar28 >> 0x28),
                                            CONCAT14((char)((ulong)uVar27 >> 0x20) -
                                                     (char)((ulong)uVar28 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar27 >> 0x18) -
                                                              (char)((ulong)uVar28 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar27 >> 0x10)
                                                                       - (char)((ulong)uVar28 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar27
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar28
                                                                                      >> 8),
                                                                                (char)uVar27 -
                                                                                (char)uVar28)))))));
            *(ulong *)(puVar9 + lVar16) =
                 CONCAT17((char)((ulong)uVar25 >> 0x38) - (char)((ulong)uVar26 >> 0x38),
                          CONCAT16((char)((ulong)uVar25 >> 0x30) - (char)((ulong)uVar26 >> 0x30),
                                   CONCAT15((char)((ulong)uVar25 >> 0x28) -
                                            (char)((ulong)uVar26 >> 0x28),
                                            CONCAT14((char)((ulong)uVar25 >> 0x20) -
                                                     (char)((ulong)uVar26 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar25 >> 0x18) -
                                                              (char)((ulong)uVar26 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar25 >> 0x10)
                                                                       - (char)((ulong)uVar26 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar25
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar26
                                                                                      >> 8),
                                                                                (char)uVar25 -
                                                                                (char)uVar26)))))));
            uVar15 = lVar16 + 0x20;
            lVar16 = lVar16 + 0x10;
          } while (uVar15 <= uVar4);
          iVar13 = iVar13 + 1;
          puVar9 = puVar9 + lVar5;
          param_1 = param_1 + lVar5;
        } while (iVar13 != param_3);
      }
      else {
        lVar16 = lVar5 - (long)param_1;
        uVar20 = (long)param_5 - (long)param_1;
        uVar11 = uVar4;
        if (uVar4 < (uVar15 | 1)) {
          uVar11 = uVar15 + 1;
        }
        uVar18 = uVar11 - uVar15;
        uVar19 = uVar18 & 0xffffffffffffffe0;
        uVar14 = uVar4;
        if (uVar4 < uVar15 + 1) {
          uVar14 = uVar15 + 1;
        }
        puVar2 = param_5 + uVar15 + lVar5;
        puVar3 = param_1 + uVar15;
        puVar21 = param_1 + uVar15 + lVar5;
        iVar13 = 1;
        puVar17 = param_1;
        do {
          puVar17 = puVar17 + lVar5;
          lVar22 = 0;
          do {
            uVar27 = *(undefined8 *)((long)(param_1 + lVar22 + lVar5) + 8);
            uVar25 = *(undefined8 *)(param_1 + lVar22 + lVar5);
            uVar28 = *(undefined8 *)((long)(param_1 + lVar22) + 8);
            uVar26 = *(undefined8 *)(param_1 + lVar22);
            *(ulong *)((long)(puVar9 + lVar22) + 8) =
                 CONCAT17((char)((ulong)uVar27 >> 0x38) - (char)((ulong)uVar28 >> 0x38),
                          CONCAT16((char)((ulong)uVar27 >> 0x30) - (char)((ulong)uVar28 >> 0x30),
                                   CONCAT15((char)((ulong)uVar27 >> 0x28) -
                                            (char)((ulong)uVar28 >> 0x28),
                                            CONCAT14((char)((ulong)uVar27 >> 0x20) -
                                                     (char)((ulong)uVar28 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar27 >> 0x18) -
                                                              (char)((ulong)uVar28 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar27 >> 0x10)
                                                                       - (char)((ulong)uVar28 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar27
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar28
                                                                                      >> 8),
                                                                                (char)uVar27 -
                                                                                (char)uVar28)))))));
            *(ulong *)(puVar9 + lVar22) =
                 CONCAT17((char)((ulong)uVar25 >> 0x38) - (char)((ulong)uVar26 >> 0x38),
                          CONCAT16((char)((ulong)uVar25 >> 0x30) - (char)((ulong)uVar26 >> 0x30),
                                   CONCAT15((char)((ulong)uVar25 >> 0x28) -
                                            (char)((ulong)uVar26 >> 0x28),
                                            CONCAT14((char)((ulong)uVar25 >> 0x20) -
                                                     (char)((ulong)uVar26 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar25 >> 0x18) -
                                                              (char)((ulong)uVar26 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar25 >> 0x10)
                                                                       - (char)((ulong)uVar26 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar25
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar26
                                                                                      >> 8),
                                                                                (char)uVar25 -
                                                                                (char)uVar26)))))));
            uVar24 = lVar22 + 0x20;
            lVar22 = lVar22 + 0x10;
          } while (uVar24 <= uVar4);
          uVar24 = uVar15;
          if ((param_5 + lVar16 < (undefined1 *)0x20 || uVar20 < 0x20) || uVar18 < 8) {
LAB_0023d6cc:
            lVar22 = 0;
            do {
              puVar9[lVar22 + uVar24] = param_1[lVar22 + lVar5 + uVar24] - param_1[lVar22 + uVar24];
              lVar22 = lVar22 + 1;
            } while (uVar24 + lVar22 < uVar4);
          }
          else {
            uVar23 = uVar15;
            uVar24 = uVar14 - uVar15 & 0xffffffffffffffe0;
            if (uVar18 < 0x20) {
              uVar23 = 0;
LAB_0023d6a8:
              do {
                uVar25 = *(undefined8 *)(puVar21 + uVar23);
                uVar27 = *(undefined8 *)(puVar3 + uVar23);
                *(ulong *)(puVar2 + uVar23) =
                     CONCAT17((char)((ulong)uVar25 >> 0x38) - (char)((ulong)uVar27 >> 0x38),
                              CONCAT16((char)((ulong)uVar25 >> 0x30) - (char)((ulong)uVar27 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar25 >> 0x28) -
                                                 (char)((ulong)uVar27 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar25 >> 0x20) -
                                                          (char)((ulong)uVar27 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar25 >> 0x18) -
                                                                   (char)((ulong)uVar27 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar25 >>
                                                                                  0x10) -
                                                                            (char)((ulong)uVar27 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar25 >> 8) - (char)((ulong)uVar27 >> 8),
                                                  (char)uVar25 - (char)uVar27)))))));
                uVar23 = uVar23 + 8;
              } while ((uVar14 & 0xfffffff8) - uVar15 != uVar23);
              uVar24 = (uVar18 - (uVar11 & 7)) + uVar15;
              if ((uVar11 & 7) != 0) goto LAB_0023d6cc;
            }
            else {
              do {
                puVar7 = (undefined8 *)(puVar17 + uVar23);
                uVar27 = puVar7[1];
                uVar25 = *puVar7;
                uVar28 = puVar7[3];
                uVar26 = puVar7[2];
                puVar7 = (undefined8 *)(param_1 + uVar23);
                uVar30 = puVar7[1];
                uVar29 = *puVar7;
                uVar32 = puVar7[3];
                uVar31 = puVar7[2];
                puVar7 = (undefined8 *)(puVar9 + uVar23);
                puVar7[1] = CONCAT17((char)((ulong)uVar27 >> 0x38) - (char)((ulong)uVar30 >> 0x38),
                                     CONCAT16((char)((ulong)uVar27 >> 0x30) -
                                              (char)((ulong)uVar30 >> 0x30),
                                              CONCAT15((char)((ulong)uVar27 >> 0x28) -
                                                       (char)((ulong)uVar30 >> 0x28),
                                                       CONCAT14((char)((ulong)uVar27 >> 0x20) -
                                                                (char)((ulong)uVar30 >> 0x20),
                                                                CONCAT13((char)((ulong)uVar27 >>
                                                                               0x18) -
                                                                         (char)((ulong)uVar30 >>
                                                                               0x18),
                                                                         CONCAT12((char)((ulong)
                                                  uVar27 >> 0x10) - (char)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar27 >> 8) -
                                                           (char)((ulong)uVar30 >> 8),
                                                           (char)uVar27 - (char)uVar30)))))));
                *puVar7 = CONCAT17((char)((ulong)uVar25 >> 0x38) - (char)((ulong)uVar29 >> 0x38),
                                   CONCAT16((char)((ulong)uVar25 >> 0x30) -
                                            (char)((ulong)uVar29 >> 0x30),
                                            CONCAT15((char)((ulong)uVar25 >> 0x28) -
                                                     (char)((ulong)uVar29 >> 0x28),
                                                     CONCAT14((char)((ulong)uVar25 >> 0x20) -
                                                              (char)((ulong)uVar29 >> 0x20),
                                                              CONCAT13((char)((ulong)uVar25 >> 0x18)
                                                                       - (char)((ulong)uVar29 >>
                                                                               0x18),
                                                                       CONCAT12((char)((ulong)uVar25
                                                                                      >> 0x10) -
                                                                                (char)((ulong)uVar29
                                                                                      >> 0x10),
                                                                                CONCAT11((char)((
                                                  ulong)uVar25 >> 8) - (char)((ulong)uVar29 >> 8),
                                                  (char)uVar25 - (char)uVar29)))))));
                puVar7[3] = CONCAT17((char)((ulong)uVar28 >> 0x38) - (char)((ulong)uVar32 >> 0x38),
                                     CONCAT16((char)((ulong)uVar28 >> 0x30) -
                                              (char)((ulong)uVar32 >> 0x30),
                                              CONCAT15((char)((ulong)uVar28 >> 0x28) -
                                                       (char)((ulong)uVar32 >> 0x28),
                                                       CONCAT14((char)((ulong)uVar28 >> 0x20) -
                                                                (char)((ulong)uVar32 >> 0x20),
                                                                CONCAT13((char)((ulong)uVar28 >>
                                                                               0x18) -
                                                                         (char)((ulong)uVar32 >>
                                                                               0x18),
                                                                         CONCAT12((char)((ulong)
                                                  uVar28 >> 0x10) - (char)((ulong)uVar32 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar28 >> 8) -
                                                           (char)((ulong)uVar32 >> 8),
                                                           (char)uVar28 - (char)uVar32)))))));
                puVar7[2] = CONCAT17((char)((ulong)uVar26 >> 0x38) - (char)((ulong)uVar31 >> 0x38),
                                     CONCAT16((char)((ulong)uVar26 >> 0x30) -
                                              (char)((ulong)uVar31 >> 0x30),
                                              CONCAT15((char)((ulong)uVar26 >> 0x28) -
                                                       (char)((ulong)uVar31 >> 0x28),
                                                       CONCAT14((char)((ulong)uVar26 >> 0x20) -
                                                                (char)((ulong)uVar31 >> 0x20),
                                                                CONCAT13((char)((ulong)uVar26 >>
                                                                               0x18) -
                                                                         (char)((ulong)uVar31 >>
                                                                               0x18),
                                                                         CONCAT12((char)((ulong)
                                                  uVar26 >> 0x10) - (char)((ulong)uVar31 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar26 >> 8) -
                                                           (char)((ulong)uVar31 >> 8),
                                                           (char)uVar26 - (char)uVar31)))))));
                uVar24 = uVar24 - 0x20;
                uVar23 = uVar23 + 0x20;
              } while (uVar24 != 0);
              if (uVar18 != uVar19) {
                uVar24 = uVar19 + uVar15;
                uVar23 = uVar19;
                if ((uVar18 & 0x18) == 0) goto LAB_0023d6cc;
                goto LAB_0023d6a8;
              }
            }
          }
          iVar13 = iVar13 + 1;
          puVar9 = puVar9 + lVar5;
          param_1 = param_1 + lVar5;
          puVar2 = puVar2 + lVar5;
          puVar3 = puVar3 + lVar5;
          puVar21 = puVar21 + lVar5;
        } while (iVar13 != param_3);
      }
    }
  }
  return;
}



/* Entry: 0023de34; end: 0023eaab;  */

void FUN_0023de34(void)

{
  uRam0000000000b6d0a8 = 0x23df64;
  uRam0000000000b6d0b0 = 0x23df80;
  uRam0000000000b6d0b8 = 0x23df98;
  uRam0000000000b6d0e8 = 0x23dfac;
  uRam0000000000b6d100 = 0x23dfe0;
  uRam0000000000b6d108 = 0x23e044;
  uRam0000000000b6d110 = 0x23e0c0;
  uRam0000000000b6d118 = 0x23e128;
  uRam0000000000b6d120 = 0x23e190;
  uRam0000000000b6d128 = 0x23e1f8;
  uRam0000000000b6d130 = 0x23e2b4;
  uRam0000000000b6d138 = 0x23e35c;
  uRam0000000000b6d140 = 0x23e404;
  uRam0000000000b6d148 = 0x23e474;
  uRam0000000000b6d150 = 0x23e4e8;
  uRam0000000000b6d158 = 0x23e5b0;
  uRam0000000000b6d160 = 0x23e6b0;
  uRam0000000000b6d168 = 0x23e78c;
  uRam0000000000b6d060 = 0x23e8b4;
  uRam0000000000b6d048 = 0x23e8ec;
  uRam0000000000b6d050 = 0x23e914;
  uRam0000000000b6d040 = 0x23e948;
  uRam0000000000b6d280 = 0x23e994;
  return;
}



/* Entry: 0023eaac; end: 0023f1f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0023eaac(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint7 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  uint7 uVar8;
  uint7 uVar9;
  uint7 uVar10;
  uint7 uVar11;
  uint7 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  unkbyte9 Var30;
  undefined1 (*pauVar31) [16];
  byte *pbVar32;
  ulong *puVar33;
  ulong uVar34;
  undefined8 *puVar35;
  long lVar36;
  uint *puVar37;
  long lVar38;
  undefined1 *puVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  int iVar43;
  long lVar44;
  uint *puVar45;
  undefined4 *puVar46;
  ulong uVar47;
  undefined1 (*pauVar48) [16];
  ulong uVar49;
  ulong uVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  undefined2 uVar59;
  undefined2 uVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined2 uVar70;
  undefined2 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 auVar78 [16];
  undefined8 uVar79;
  undefined1 auVar82 [16];
  undefined8 uVar80;
  ulong uVar81;
  ulong uVar84;
  undefined1 auVar83 [16];
  ulong uVar85;
  ulong uVar86;
  ulong uVar87;
  undefined1 auVar88 [16];
  ulong uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  
  lVar38 = *(long *)(param_1 + 0x48);
  uVar3 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34);
  uVar40 = (ulong)uVar3;
  uVar1 = uVar3 & 0xfffffff8;
  lVar36 = *(long *)(param_1 + 0x60);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar29 = uVar2 >> 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar44 = *(long *)(param_1 + 0x58);
    uVar42 = 0;
    if ((long)*(int *)(param_1 + 0x20) != 0) {
      uVar42 = ((ulong)(uint)-*(int *)(param_1 + 0x18) << 0x20) /
               (ulong)(long)*(int *)(param_1 + 0x20);
    }
    uVar4 = -(int)uVar42;
    uVar68 = (undefined1)(uVar42 >> 0x10);
    uVar69 = (undefined1)(uVar42 >> 0x18);
    if ((int)uVar1 < 1) {
      uVar49 = 0;
      if ((int)uVar3 < 1) {
        _UNK_007eebb9 = 0x78706860585048;
        return;
      }
    }
    else {
      uVar49 = 0;
      pauVar48 = (undefined1 (*) [16])(lVar44 + 0x10);
      pauVar31 = (undefined1 (*) [16])(lVar36 + 0x10);
      do {
        auVar78 = *pauVar48;
        auVar83 = pauVar31[-1];
        auVar88 = *pauVar31;
        auVar90._0_8_ =
             (*(ulong *)pauVar48[-1] & 0xffffffff) * (uVar42 & 0xffffffff) +
             (ulong)auVar83._0_4_ * (ulong)uVar4;
        auVar90._8_8_ =
             (*(ulong *)pauVar48[-1] >> 0x20) * (uVar42 & 0xffffffff) +
             (ulong)auVar83._4_4_ * (ulong)uVar4;
        uVar79 = NEON_raddhn(auVar90._0_8_,auVar90,ZEXT216(0),8);
        lVar41 = (ulong)auVar78._0_4_ * (uVar42 & 0xffffffff) + (ulong)auVar88._0_4_ * (ulong)uVar4;
        lVar67 = (ulong)auVar78._4_4_ * (uVar42 & 0xffffffff) + (ulong)auVar88._4_4_ * (ulong)uVar4;
        auVar92[8] = (char)lVar67;
        auVar92._0_8_ = lVar41;
        auVar92[9] = (char)((ulong)lVar67 >> 8);
        auVar92[10] = (char)((ulong)lVar67 >> 0x10);
        auVar92[0xb] = (char)((ulong)lVar67 >> 0x18);
        auVar92[0xc] = (char)((ulong)lVar67 >> 0x20);
        auVar92[0xd] = (char)((ulong)lVar67 >> 0x28);
        auVar92[0xe] = (char)((ulong)lVar67 >> 0x30);
        auVar92[0xf] = (char)((ulong)lVar67 >> 0x38);
        uVar80 = NEON_raddhn(lVar41,auVar92,ZEXT216(0),8);
        lVar41 = (long)(int)uVar29;
        lVar62 = (int)((ulong)uVar79 >> 0x20) * lVar41 * 2;
        lVar64 = (int)((*(ulong *)(pauVar48[-1] + 8) & 0xffffffff) * (uVar42 & 0xffffffff) +
                       (auVar83._8_8_ & 0xffffffff) * (ulong)uVar4 + 0x80000000 >> 0x20) * lVar41 *
                 2;
        lVar66 = (int)((*(ulong *)(pauVar48[-1] + 8) >> 0x20) * (uVar42 & 0xffffffff) +
                       (auVar83._8_8_ >> 0x20) * (ulong)uVar4 + 0x80000000 >> 0x20) * lVar41 * 2;
        lVar67 = (long)(int)uVar29;
        lVar61 = (int)uVar80 * lVar67 * 2;
        lVar63 = (int)((ulong)uVar80 >> 0x20) * lVar67 * 2;
        lVar65 = (int)((auVar78._8_8_ & 0xffffffff) * (uVar42 & 0xffffffff) +
                       (auVar88._8_8_ & 0xffffffff) * (ulong)uVar4 + 0x80000000 >> 0x20) * lVar67 *
                 2;
        lVar67 = (int)((auVar78._8_8_ >> 0x20) * (uVar42 & 0xffffffff) +
                       (auVar88._8_8_ >> 0x20) * (ulong)uVar4 + 0x80000000 >> 0x20) * lVar67 * 2;
        uVar59 = (undefined2)((ulong)((int)uVar79 * lVar41 * 2) >> 0x20);
        uVar72 = (undefined1)((ulong)lVar62 >> 0x20);
        uVar73 = (undefined1)((ulong)lVar62 >> 0x28);
        uVar74 = (undefined1)((ulong)lVar64 >> 0x20);
        uVar75 = (undefined1)((ulong)lVar64 >> 0x28);
        uVar76 = (undefined1)((ulong)lVar66 >> 0x20);
        uVar77 = (undefined1)((ulong)lVar66 >> 0x28);
        auVar78[2] = uVar72;
        auVar78._0_2_ = uVar59;
        auVar78[3] = uVar73;
        auVar78[4] = uVar74;
        auVar78[5] = uVar75;
        auVar78[6] = uVar76;
        auVar78[7] = uVar77;
        auVar78[8] = (char)((ulong)lVar61 >> 0x20);
        auVar78[9] = (char)((ulong)lVar61 >> 0x28);
        auVar78[10] = (char)((ulong)lVar63 >> 0x20);
        auVar78[0xb] = (char)((ulong)lVar63 >> 0x28);
        auVar78[0xc] = (char)((ulong)lVar65 >> 0x20);
        auVar78[0xd] = (char)((ulong)lVar65 >> 0x28);
        auVar78[0xe] = (char)((ulong)lVar67 >> 0x20);
        auVar78[0xf] = (char)((ulong)lVar67 >> 0x28);
        uVar80 = NEON_uqxtn(CONCAT17(uVar77,CONCAT16(uVar76,CONCAT15(uVar75,CONCAT14(uVar74,CONCAT13
                                                  (uVar73,CONCAT12(uVar72,uVar59)))))),auVar78,2);
        *(undefined8 *)(lVar38 + uVar49) = uVar80;
        uVar49 = uVar49 + 8;
        pauVar48 = pauVar48 + 2;
        pauVar31 = pauVar31 + 2;
      } while (uVar49 < uVar1);
      if ((int)uVar3 <= (int)uVar49) {
        return;
      }
    }
    uVar49 = uVar49 & 0xffffffff;
    uVar47 = uVar40 - uVar49;
    if (3 < uVar47) {
      lVar41 = uVar49 * 4;
      if ((lVar38 + uVar40 <= (ulong)(lVar36 + lVar41) || lVar36 + uVar40 * 4 <= lVar38 + uVar49) &&
         (lVar44 + uVar40 * 4 <= lVar38 + uVar49 || lVar38 + uVar40 <= (ulong)(lVar44 + lVar41))) {
        uVar72 = (undefined1)uVar42;
        uVar73 = (undefined1)(uVar42 >> 8);
        uVar60 = (undefined2)uVar4;
        uVar70 = (undefined2)(uVar4 >> 0x10);
        uVar59 = (undefined2)(uVar42 & 0xffffffff);
        if (uVar47 < 0x10) {
          uVar50 = 0;
        }
        else {
          uVar50 = uVar47 & 0xfffffffffffffff0;
          puVar33 = (ulong *)(lVar44 + lVar41);
          puVar35 = (undefined8 *)(lVar36 + lVar41);
          auVar83._9_7_ = _UNK_007eebb9;
          auVar83._0_9_ = _UNK_007eebb0;
          pbVar32 = (byte *)(lVar38 + uVar49);
          uVar34 = uVar50;
          do {
            auVar78 = NEON_umull(CONCAT26(uVar70,CONCAT24(uVar60,uVar4)),puVar35[6],4);
            auVar88 = NEON_umull(CONCAT26(uVar70,CONCAT24(uVar60,uVar4)),puVar35[4],4);
            auVar90 = NEON_umull(CONCAT26(uVar70,CONCAT24(uVar60,uVar4)),puVar35[2],4);
            auVar92 = *(undefined1 (*) [16])(puVar33 + 2);
            auVar94 = NEON_umull(CONCAT26(uVar70,CONCAT24(uVar60,uVar4)),*puVar35,4);
            uVar5 = CONCAT16(uVar68,CONCAT15(uVar73,CONCAT14(uVar72,CONCAT13(uVar69,CONCAT12(uVar68,
                                                  uVar59)))));
            uVar6 = CONCAT16(uVar68,CONCAT15(uVar73,CONCAT14(uVar72,CONCAT13(uVar69,CONCAT12(uVar68,
                                                  uVar59)))));
            uVar7 = CONCAT16(uVar68,CONCAT15(uVar73,CONCAT14(uVar72,CONCAT13(uVar69,CONCAT12(uVar68,
                                                  uVar59)))));
            uVar8 = CONCAT16(uVar68,CONCAT15(uVar73,CONCAT14(uVar72,CONCAT13(uVar69,CONCAT12(uVar68,
                                                  uVar59)))));
            lVar41 = ((CONCAT26(uVar70,CONCAT24(uVar60,uVar4)) >> 0x20) *
                      ((ulong)puVar35[5] >> 0x20) +
                      (CONCAT17(uVar69,uVar8) >> 0x20) * (puVar33[5] >> 0x20) + 0x80000000 >> 0x20)
                     * (ulong)uVar2;
            lVar64 = (((ulong)CONCAT24(uVar60,uVar4) & 0xffffffff) * (puVar35[5] & 0xffffffff) +
                      ((ulong)uVar8 & 0xffffffff) * (puVar33[5] & 0xffffffff) + 0x80000000 >> 0x20)
                     * (ulong)uVar2;
            lVar65 = ((CONCAT26(uVar70,CONCAT24(uVar60,uVar4)) >> 0x20) *
                      ((ulong)puVar35[7] >> 0x20) +
                      (CONCAT17(uVar69,uVar7) >> 0x20) * (puVar33[7] >> 0x20) + 0x80000000 >> 0x20)
                     * (ulong)uVar2;
            lVar51 = (((ulong)CONCAT24(uVar60,uVar4) & 0xffffffff) * (puVar35[7] & 0xffffffff) +
                      ((ulong)uVar7 & 0xffffffff) * (puVar33[7] & 0xffffffff) + 0x80000000 >> 0x20)
                     * (ulong)uVar2;
            lVar52 = (auVar78._8_8_ + (uVar42 & 0xffffffff) * (puVar33[6] >> 0x20) + 0x80000000 >>
                     0x20) * (ulong)uVar2;
            lVar53 = (auVar78._0_8_ + (uVar42 & 0xffffffff) * (puVar33[6] & 0xffffffff) + 0x80000000
                     >> 0x20) * (ulong)uVar2;
            lVar54 = (auVar88._8_8_ + (uVar42 & 0xffffffff) * (puVar33[4] >> 0x20) + 0x80000000 >>
                     0x20) * (ulong)uVar2;
            lVar56 = (auVar88._0_8_ + (uVar42 & 0xffffffff) * (puVar33[4] & 0xffffffff) + 0x80000000
                     >> 0x20) * (ulong)uVar2;
            lVar67 = ((CONCAT26(uVar70,CONCAT24(uVar60,uVar4)) >> 0x20) *
                      ((ulong)puVar35[3] >> 0x20) +
                      (CONCAT17(uVar69,uVar6) >> 0x20) * (auVar92._8_8_ >> 0x20) + 0x80000000 >>
                     0x20) * (ulong)uVar2;
            lVar57 = (((ulong)CONCAT24(uVar60,uVar4) & 0xffffffff) * (puVar35[3] & 0xffffffff) +
                      ((ulong)uVar6 & 0xffffffff) * (auVar92._8_8_ & 0xffffffff) + 0x80000000 >>
                     0x20) * (ulong)uVar2;
            lVar58 = (((ulong)CONCAT24(uVar60,uVar4) & 0xffffffff) * (puVar35[1] & 0xffffffff) +
                      ((ulong)uVar5 & 0xffffffff) * (puVar33[1] & 0xffffffff) + 0x80000000 >> 0x20)
                     * (ulong)uVar2;
            auVar91._8_8_ = lVar52;
            auVar91._0_8_ = lVar53;
            lVar55 = (auVar90._0_8_ + (uVar42 & 0xffffffff) * (ulong)auVar92._0_4_ + 0x80000000 >>
                     0x20) * (ulong)uVar2;
            lVar61 = (auVar94._0_8_ + (uVar42 & 0xffffffff) * (*puVar33 & 0xffffffff) + 0x80000000
                     >> 0x20) * (ulong)uVar2;
            lVar62 = (auVar90._8_8_ + (uVar42 & 0xffffffff) * (ulong)auVar92._4_4_ + 0x80000000 >>
                     0x20) * (ulong)uVar2;
            auVar97._8_8_ = lVar62;
            auVar97._0_8_ = lVar55;
            lVar63 = ((CONCAT26(uVar70,CONCAT24(uVar60,uVar4)) >> 0x20) *
                      ((ulong)puVar35[1] >> 0x20) +
                      (CONCAT17(uVar69,uVar5) >> 0x20) * (puVar33[1] >> 0x20) + 0x80000000 >> 0x20)
                     * (ulong)uVar2;
            lVar66 = (auVar94._8_8_ + (uVar42 & 0xffffffff) * (*puVar33 >> 0x20) + 0x80000000 >>
                     0x20) * (ulong)uVar2;
            auVar95._8_8_ = lVar66;
            auVar95._0_8_ = lVar61;
            uVar93 = NEON_raddhn(lVar61,auVar95,ZEXT216(0),8);
            uVar96 = NEON_raddhn(lVar55,auVar97,ZEXT216(0),8);
            auVar20._8_4_ = (int)lVar54;
            auVar20._0_8_ = lVar56;
            auVar20._12_4_ = (int)((ulong)lVar54 >> 0x20);
            uVar80 = NEON_raddhn(lVar56,auVar20,ZEXT216(0),8);
            uVar79 = NEON_raddhn(lVar53,auVar91,ZEXT216(0),8);
            auVar21._8_8_ = lVar66 + 0x80000000U >> 0x20;
            auVar21._0_8_ = lVar61 + 0x80000000U >> 0x20;
            auVar22._8_8_ = lVar63 + 0x80000000U >> 0x20;
            auVar22._0_8_ = lVar58 + 0x80000000U >> 0x20;
            auVar23._8_8_ = lVar62 + 0x80000000U >> 0x20;
            auVar23._0_8_ = lVar55 + 0x80000000U >> 0x20;
            auVar25._8_8_ = lVar67 + 0x80000000U >> 0x20;
            auVar25._0_8_ = lVar57 + 0x80000000U >> 0x20;
            auVar92 = a64_TBL(ZEXT816(0),auVar21,auVar22,auVar23,auVar25,auVar83);
            auVar88._8_8_ = lVar54 + 0x80000000U >> 0x20;
            auVar88._0_8_ = lVar56 + 0x80000000U >> 0x20;
            auVar94._8_8_ = lVar41 + 0x80000000U >> 0x20;
            auVar94._0_8_ = lVar64 + 0x80000000U >> 0x20;
            auVar98._8_8_ = lVar52 + 0x80000000U >> 0x20;
            auVar98._0_8_ = lVar53 + 0x80000000U >> 0x20;
            auVar99._8_8_ = lVar65 + 0x80000000U >> 0x20;
            auVar99._0_8_ = lVar51 + 0x80000000U >> 0x20;
            auVar78 = a64_TBL(ZEXT816(0),auVar88,auVar94,auVar98,auVar99,auVar83);
            pbVar32[8] = auVar78[0] | -(0xff < (int)uVar80);
            pbVar32[9] = auVar78[1] | -(0xff < (int)((ulong)uVar80 >> 0x20));
            pbVar32[10] = auVar78[2] | -(0xff < (int)((ulong)(lVar64 + 0x80000000) >> 0x20));
            pbVar32[0xb] = auVar78[3] | -(0xff < (int)((ulong)(lVar41 + 0x80000000) >> 0x20));
            pbVar32[0xc] = auVar78[4] | -(0xff < (int)uVar79);
            pbVar32[0xd] = auVar78[5] | -(0xff < (int)((ulong)uVar79 >> 0x20));
            pbVar32[0xe] = auVar78[6] | -(0xff < (int)((ulong)(lVar51 + 0x80000000) >> 0x20));
            pbVar32[0xf] = auVar78[7] | -(0xff < (int)((ulong)(lVar65 + 0x80000000) >> 0x20));
            *pbVar32 = auVar92[0] | -(0xff < (int)uVar93);
            pbVar32[1] = auVar92[1] | -(0xff < (int)((ulong)uVar93 >> 0x20));
            pbVar32[2] = auVar92[2] | -(0xff < (int)((ulong)(lVar58 + 0x80000000) >> 0x20));
            pbVar32[3] = auVar92[3] | -(0xff < (int)((ulong)(lVar63 + 0x80000000) >> 0x20));
            pbVar32[4] = auVar92[4] | -(0xff < (int)uVar96);
            pbVar32[5] = auVar92[5] | -(0xff < (int)((ulong)uVar96 >> 0x20));
            pbVar32[6] = auVar92[6] | -(0xff < (int)((ulong)(lVar57 + 0x80000000) >> 0x20));
            pbVar32[7] = auVar92[7] | -(0xff < (int)((ulong)(lVar67 + 0x80000000) >> 0x20));
            puVar33 = puVar33 + 8;
            puVar35 = puVar35 + 8;
            uVar34 = uVar34 - 0x10;
            pbVar32 = pbVar32 + 0x10;
          } while (uVar34 != 0);
          if (uVar47 == uVar50) {
            return;
          }
          if ((uVar47 & 0xc) == 0) {
            uVar49 = uVar50 + uVar49;
            goto LAB_0023ebf4;
          }
        }
        uVar34 = uVar47 & 0xfffffffffffffffc;
        lVar41 = uVar50 - uVar34;
        puVar46 = (undefined4 *)(lVar38 + uVar50 + uVar49);
        lVar67 = (uVar50 + uVar49) * 4;
        puVar35 = (undefined8 *)(lVar36 + lVar67);
        pauVar48 = (undefined1 (*) [16])(lVar44 + lVar67);
        do {
          auVar78 = NEON_umull(CONCAT26(uVar70,CONCAT24(uVar60,uVar4)),*puVar35,4);
          auVar92 = *pauVar48;
          uVar5 = CONCAT16(uVar68,CONCAT15(uVar73,CONCAT14(uVar72,CONCAT13(uVar69,CONCAT12(uVar68,
                                                  uVar59)))));
          lVar61 = (((ulong)CONCAT24(uVar60,uVar4) & 0xffffffff) * (puVar35[1] & 0xffffffff) +
                    ((ulong)uVar5 & 0xffffffff) * (auVar92._8_8_ & 0xffffffff) + 0x80000000 >> 0x20)
                   * (ulong)uVar2;
          lVar62 = (auVar78._0_8_ +
                    (ulong)CONCAT13(uVar69,CONCAT12(uVar68,uVar59)) * (ulong)auVar92._0_4_ +
                    0x80000000 >> 0x20) * (ulong)uVar2;
          lVar67 = ((CONCAT26(uVar70,CONCAT24(uVar60,uVar4)) >> 0x20) * ((ulong)puVar35[1] >> 0x20)
                    + (CONCAT17(uVar69,uVar5) >> 0x20) * (auVar92._8_8_ >> 0x20) + 0x80000000 >>
                   0x20) * (ulong)uVar2;
          lVar63 = (auVar78._8_8_ +
                    (ulong)CONCAT13(uVar69,CONCAT12(uVar68,uVar59)) * (ulong)auVar92._4_4_ +
                    0x80000000 >> 0x20) * (ulong)uVar2;
          auVar82._8_8_ = lVar63;
          auVar82._0_8_ = lVar62;
          uVar80 = NEON_raddhn(lVar62,auVar82,ZEXT216(0),8);
          *puVar46 = CONCAT13((byte)((ulong)(lVar67 + 0x80000000) >> 0x20) |
                              -(0xff < (int)((ulong)(lVar67 + 0x80000000) >> 0x20)),
                              CONCAT12((byte)((ulong)(lVar61 + 0x80000000) >> 0x20) |
                                       -(0xff < (int)((ulong)(lVar61 + 0x80000000) >> 0x20)),
                                       CONCAT11((byte)((ulong)(lVar63 + 0x80000000) >> 0x20) |
                                                -(0xff < (int)((ulong)uVar80 >> 0x20)),
                                                (byte)((ulong)(lVar62 + 0x80000000) >> 0x20) |
                                                -(0xff < (int)uVar80))));
          puVar46 = puVar46 + 1;
          lVar41 = lVar41 + 4;
          puVar35 = puVar35 + 2;
          pauVar48 = pauVar48 + 1;
        } while (lVar41 != 0);
        uVar49 = uVar34 + uVar49;
        if (uVar47 == uVar34) {
          return;
        }
      }
    }
LAB_0023ebf4:
    lVar41 = uVar40 - uVar49;
    puVar37 = (uint *)(lVar36 + uVar49 * 4);
    puVar39 = (undefined1 *)(lVar38 + uVar49);
    puVar45 = (uint *)(lVar44 + uVar49 * 4);
    do {
      iVar43 = (int)(((uVar42 & 0xffffffff) * (ulong)*puVar45 + (ulong)*puVar37 * (ulong)uVar4 +
                      0x80000000 >> 0x20) * (ulong)uVar2 + 0x80000000 >> 0x20);
      if (0xff < iVar43) {
        iVar43 = -1;
      }
      *puVar39 = (char)iVar43;
      lVar41 = lVar41 + -1;
      puVar37 = puVar37 + 1;
      puVar39 = puVar39 + 1;
      puVar45 = puVar45 + 1;
    } while (lVar41 != 0);
    return;
  }
  if ((int)uVar1 < 1) {
    uVar42 = 0;
    if ((int)uVar3 < 1) {
      _UNK_007eebb9 = 0x78706860585048;
      return;
    }
  }
  else {
    uVar42 = 0;
    puVar35 = (undefined8 *)(lVar36 + 0x10);
    do {
      lVar44 = (long)(int)uVar29;
      uVar70 = (undefined2)((ulong)((int)puVar35[-1] * lVar44 * 2) >> 0x20);
      uVar71 = (undefined2)((ulong)((int)((ulong)puVar35[-1] >> 0x20) * lVar44 * 2) >> 0x20);
      lVar41 = (long)(int)uVar29;
      uVar49 = (ulong)CONCAT24((short)((ulong)((int)((ulong)puVar35[-2] >> 0x20) * lVar44 * 2) >>
                                      0x20),(int)((ulong)((int)puVar35[-2] * lVar44 * 2) >> 0x20)) &
               0xffffffff0000ffff;
      uVar59 = (undefined2)uVar49;
      uVar60 = (undefined2)(uVar49 >> 0x20);
      auVar13._2_2_ = uVar60;
      auVar13._0_2_ = uVar59;
      auVar13._4_2_ = uVar70;
      auVar13._6_2_ = uVar71;
      auVar13._8_2_ = (short)((ulong)((int)*puVar35 * lVar41 * 2) >> 0x20);
      auVar13._10_2_ = (short)((ulong)((int)((ulong)*puVar35 >> 0x20) * lVar41 * 2) >> 0x20);
      auVar13._12_2_ = (short)((ulong)((int)puVar35[1] * lVar41 * 2) >> 0x20);
      auVar13._14_2_ = (short)((ulong)((int)((ulong)puVar35[1] >> 0x20) * lVar41 * 2) >> 0x20);
      uVar80 = NEON_uqxtn(CONCAT26(uVar71,CONCAT24(uVar70,CONCAT22(uVar60,uVar59))),auVar13,2);
      *(undefined8 *)(lVar38 + uVar42) = uVar80;
      uVar42 = uVar42 + 8;
      puVar35 = puVar35 + 4;
    } while (uVar42 < uVar1);
    if ((int)uVar3 <= (int)uVar42) {
      return;
    }
  }
  Var30 = _UNK_007eebb0;
  uVar42 = uVar42 & 0xffffffff;
  uVar49 = uVar40 - uVar42;
  if ((3 < uVar49) &&
     (pauVar48 = (undefined1 (*) [16])(lVar36 + uVar42 * 4),
     lVar36 + uVar40 * 4 <= lVar38 + uVar42 || (undefined1 (*) [16])(lVar38 + uVar40) <= pauVar48))
  {
    uVar68 = (undefined1)uVar2;
    uVar69 = (undefined1)(uVar2 >> 8);
    uVar72 = (undefined1)(uVar2 >> 0x10);
    uVar73 = (undefined1)(uVar2 >> 0x18);
    if (uVar49 < 0x10) {
      uVar34 = 0;
    }
    else {
      uVar34 = uVar49 & 0xfffffffffffffff0;
      pbVar32 = (byte *)(lVar38 + uVar42);
      uVar47 = uVar34;
      do {
        auVar78 = pauVar48[2];
        auVar92 = pauVar48[3];
        auVar88 = *pauVar48;
        auVar83 = pauVar48[1];
        uVar5 = CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2)));
        uVar50 = auVar92._8_8_;
        auVar90 = NEON_umull(CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2))
                                                     )),auVar92._0_8_,4);
        uVar6 = CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2)));
        uVar84 = auVar78._8_8_;
        auVar94 = NEON_umull(CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2))
                                                     )),auVar78._0_8_,4);
        uVar7 = CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2)));
        uVar86 = auVar83._8_8_;
        auVar98 = NEON_umull(CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2))
                                                     )),auVar83._0_8_,4);
        uVar8 = CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2)));
        uVar89 = auVar88._8_8_;
        auVar99 = NEON_umull(CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2))
                                                     )),auVar88._0_8_,4);
        uVar9 = CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2)));
        uVar10 = CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2)));
        uVar87 = ((ulong)uVar10 & 0xffffffff) * (uVar86 & 0xffffffff) + 0x80000000;
        uVar85 = (ulong)uVar2 * (ulong)auVar78._0_4_ + 0x80000000;
        uVar11 = CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2)));
        uVar12 = CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2)));
        uVar81 = ((ulong)uVar12 & 0xffffffff) * (uVar50 & 0xffffffff) + 0x80000000;
        uVar80 = NEON_raddhn(auVar92._0_8_,auVar99,ZEXT216(0),8);
        uVar79 = NEON_raddhn(uVar81,auVar98,ZEXT216(0),8);
        uVar93 = NEON_raddhn(uVar85,auVar94,ZEXT216(0),8);
        uVar96 = NEON_raddhn(uVar87,auVar90,ZEXT216(0),8);
        auVar14[9] = 0x48;
        auVar14._0_9_ = Var30;
        auVar14[10] = 0x50;
        auVar14[0xb] = 0x58;
        auVar14[0xc] = 0x60;
        auVar14[0xd] = 0x68;
        auVar14[0xe] = 0x70;
        auVar14[0xf] = 0x78;
        auVar24._8_8_ = (ulong)uVar2 * (ulong)auVar88._4_4_ + 0x80000000 >> 0x20;
        auVar24._0_8_ = (ulong)uVar2 * (ulong)auVar88._0_4_ + 0x80000000 >> 0x20;
        auVar26._8_8_ = (CONCAT17(uVar73,uVar9) >> 0x20) * (uVar89 >> 0x20) + 0x80000000 >> 0x20;
        auVar26._0_8_ = ((ulong)uVar9 & 0xffffffff) * (uVar89 & 0xffffffff) + 0x80000000 >> 0x20;
        auVar27._8_8_ = (ulong)uVar2 * (ulong)auVar83._4_4_ + 0x80000000 >> 0x20;
        auVar27._0_8_ = (ulong)uVar2 * (ulong)auVar83._0_4_ + 0x80000000 >> 0x20;
        auVar28._8_8_ = (CONCAT17(uVar73,uVar10) >> 0x20) * (uVar86 >> 0x20) + 0x80000000 >> 0x20;
        auVar28._0_8_ = uVar87 >> 0x20;
        auVar83 = a64_TBL(ZEXT816(0),auVar24,auVar26,auVar27,auVar28,auVar14);
        auVar15[9] = 0x48;
        auVar15._0_9_ = Var30;
        auVar15[10] = 0x50;
        auVar15[0xb] = 0x58;
        auVar15[0xc] = 0x60;
        auVar15[0xd] = 0x68;
        auVar15[0xe] = 0x70;
        auVar15[0xf] = 0x78;
        auVar16._8_8_ = (ulong)uVar2 * (ulong)auVar78._4_4_ + 0x80000000 >> 0x20;
        auVar16._0_8_ = uVar85 >> 0x20;
        auVar17._8_8_ = (CONCAT17(uVar73,uVar11) >> 0x20) * (uVar84 >> 0x20) + 0x80000000 >> 0x20;
        auVar17._0_8_ = ((ulong)uVar11 & 0xffffffff) * (uVar84 & 0xffffffff) + 0x80000000 >> 0x20;
        auVar18._8_8_ = (ulong)uVar2 * (ulong)auVar92._4_4_ + 0x80000000 >> 0x20;
        auVar18._0_8_ = (ulong)uVar2 * (ulong)auVar92._0_4_ + 0x80000000 >> 0x20;
        auVar19._8_8_ = (CONCAT17(uVar73,uVar12) >> 0x20) * (uVar50 >> 0x20) + 0x80000000 >> 0x20;
        auVar19._0_8_ = uVar81 >> 0x20;
        auVar92 = a64_TBL(ZEXT816(0),auVar16,auVar17,auVar18,auVar19,auVar15);
        pbVar32[8] = auVar92[0] | -(0xff < (int)uVar93);
        pbVar32[9] = auVar92[1] | -(0xff < (int)((ulong)uVar93 >> 0x20));
        pbVar32[10] = auVar92[2] |
                      -(0xff < (int)(((ulong)uVar6 & 0xffffffff) * (uVar84 & 0xffffffff) +
                                     0x80000000 >> 0x20));
        pbVar32[0xb] = auVar92[3] |
                       -(0xff < (int)((CONCAT17(uVar73,uVar6) >> 0x20) * (uVar84 >> 0x20) +
                                      0x80000000 >> 0x20));
        pbVar32[0xc] = auVar92[4] | -(0xff < (int)uVar96);
        pbVar32[0xd] = auVar92[5] | -(0xff < (int)((ulong)uVar96 >> 0x20));
        pbVar32[0xe] = auVar92[6] |
                       -(0xff < (int)(((ulong)uVar5 & 0xffffffff) * (uVar50 & 0xffffffff) +
                                      0x80000000 >> 0x20));
        pbVar32[0xf] = auVar92[7] |
                       -(0xff < (int)((CONCAT17(uVar73,uVar5) >> 0x20) * (uVar50 >> 0x20) +
                                      0x80000000 >> 0x20));
        *pbVar32 = auVar83[0] | -(0xff < (int)uVar80);
        pbVar32[1] = auVar83[1] | -(0xff < (int)((ulong)uVar80 >> 0x20));
        pbVar32[2] = auVar83[2] |
                     -(0xff < (int)(((ulong)uVar8 & 0xffffffff) * (uVar89 & 0xffffffff) + 0x80000000
                                   >> 0x20));
        pbVar32[3] = auVar83[3] |
                     -(0xff < (int)((CONCAT17(uVar73,uVar8) >> 0x20) * (uVar89 >> 0x20) + 0x80000000
                                   >> 0x20));
        pbVar32[4] = auVar83[4] | -(0xff < (int)uVar79);
        pbVar32[5] = auVar83[5] | -(0xff < (int)((ulong)uVar79 >> 0x20));
        pbVar32[6] = auVar83[6] |
                     -(0xff < (int)(((ulong)uVar7 & 0xffffffff) * (uVar86 & 0xffffffff) + 0x80000000
                                   >> 0x20));
        pbVar32[7] = auVar83[7] |
                     -(0xff < (int)((CONCAT17(uVar73,uVar7) >> 0x20) * (uVar86 >> 0x20) + 0x80000000
                                   >> 0x20));
        uVar47 = uVar47 - 0x10;
        pauVar48 = pauVar48 + 4;
        pbVar32 = pbVar32 + 0x10;
      } while (uVar47 != 0);
      if (uVar49 == uVar34) {
        return;
      }
      if ((uVar49 & 0xc) == 0) {
        uVar42 = uVar34 + uVar42;
        goto LAB_0023ece0;
      }
    }
    uVar47 = uVar49 & 0xfffffffffffffffc;
    lVar44 = uVar34 - uVar47;
    puVar46 = (undefined4 *)(lVar38 + uVar34 + uVar42);
    puVar33 = (ulong *)(lVar36 + (uVar34 + uVar42) * 4);
    do {
      uVar50 = puVar33[1];
      uVar34 = *puVar33;
      uVar5 = CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2)));
      auVar92 = NEON_umull(CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2))))
                           ,uVar34,4);
      uVar6 = CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar68,uVar2)));
      uVar80 = NEON_raddhn(auVar92._0_8_,auVar92,ZEXT216(0),8);
      *puVar46 = CONCAT13((byte)((CONCAT17(uVar73,uVar6) >> 0x20) * (uVar50 >> 0x20) + 0x80000000 >>
                                0x20) |
                          -(0xff < (int)((CONCAT17(uVar73,uVar5) >> 0x20) * (uVar50 >> 0x20) +
                                         0x80000000 >> 0x20)),
                          CONCAT12((byte)(((ulong)uVar6 & 0xffffffff) * (uVar50 & 0xffffffff) +
                                          0x80000000 >> 0x20) |
                                   -(0xff < (int)(((ulong)uVar5 & 0xffffffff) *
                                                  (uVar50 & 0xffffffff) + 0x80000000 >> 0x20)),
                                   CONCAT11((byte)((ulong)uVar2 * (uVar34 >> 0x20) + 0x80000000 >>
                                                  0x20) | -(0xff < (int)((ulong)uVar80 >> 0x20)),
                                            (byte)((ulong)uVar2 * (uVar34 & 0xffffffff) + 0x80000000
                                                  >> 0x20) | -(0xff < (int)uVar80))));
      puVar46 = puVar46 + 1;
      lVar44 = lVar44 + 4;
      puVar33 = puVar33 + 2;
    } while (lVar44 != 0);
    uVar42 = uVar47 + uVar42;
    if (uVar49 == uVar47) {
      return;
    }
  }
LAB_0023ece0:
  lVar44 = uVar40 - uVar42;
  puVar37 = (uint *)(lVar36 + uVar42 * 4);
  puVar39 = (undefined1 *)(lVar38 + uVar42);
  do {
    iVar43 = (int)((ulong)*puVar37 * (ulong)uVar2 + 0x80000000 >> 0x20);
    if (0xff < iVar43) {
      iVar43 = -1;
    }
    *puVar39 = (char)iVar43;
    lVar44 = lVar44 + -1;
    puVar37 = puVar37 + 1;
    puVar39 = puVar39 + 1;
  } while (lVar44 != 0);
                    /* WARNING: Read-only address (ram,0x007eebb0) is written */
                    /* WARNING: Read-only address (ram,0x007eebb9) is written */
  return;
}



/* Entry: 0023f1f8; end: 0023f833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0023f1f8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [12];
  undefined2 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int *piVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  long lVar19;
  undefined1 *puVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  undefined4 *puVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ulong uVar60;
  uint uVar61;
  uint uVar63;
  ulong uVar62;
  int iVar65;
  ulong uVar64;
  ulong uVar66;
  int iVar68;
  ulong uVar67;
  ulong uVar69;
  ulong uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  uint uVar73;
  uint uVar77;
  undefined1 auVar74 [16];
  undefined1 auVar76 [16];
  uint uVar78;
  uint uVar81;
  undefined1 auVar80 [16];
  uint uVar82;
  uint uVar86;
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined8 uVar92;
  undefined1 auVar93 [16];
  undefined8 uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar84 [16];
  
  lVar19 = *(long *)(param_1 + 0x48);
  puVar17 = *(undefined8 **)(param_1 + 0x58);
  uVar63 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0x34);
  uVar21 = (ulong)uVar63;
  uVar61 = uVar63 & 0xfffffff8;
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = (ulong)uVar1;
  uVar73 = uVar1 >> 1;
  if (*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x10) != 0) {
    lVar24 = *(long *)(param_1 + 0x60);
    uVar3 = -(*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x10));
    if ((int)uVar61 < 1) {
      uVar29 = 0;
      if ((int)uVar63 < 1) {
        return;
      }
    }
    else {
      uVar29 = 0;
      pauVar27 = (undefined1 (*) [16])(puVar17 + 2);
      puVar16 = (undefined8 *)(lVar24 + 0x10);
      do {
        lVar22 = (long)(int)(uVar3 >> 1);
        lVar36 = (int)((ulong)puVar16[-2] >> 0x20) * lVar22 * 2;
        lVar37 = (int)puVar16[-1] * lVar22 * 2;
        lVar39 = (int)((ulong)puVar16[-1] >> 0x20) * lVar22 * 2;
        uVar41 = (undefined1)((ulong)lVar36 >> 0x20);
        uVar42 = (undefined1)((ulong)lVar36 >> 0x28);
        uVar43 = (undefined1)((ulong)lVar36 >> 0x30);
        uVar44 = (undefined1)((ulong)lVar36 >> 0x38);
        uVar45 = (undefined1)((ulong)lVar39 >> 0x20);
        uVar46 = (undefined1)((ulong)lVar39 >> 0x28);
        uVar47 = (undefined1)((ulong)lVar39 >> 0x30);
        uVar48 = (undefined1)((ulong)lVar39 >> 0x38);
        lVar36 = (long)(int)(uVar3 >> 1);
        lVar39 = (int)((ulong)*puVar16 >> 0x20) * lVar36 * 2;
        lVar38 = (int)puVar16[1] * lVar36 * 2;
        lVar40 = (int)((ulong)puVar16[1] >> 0x20) * lVar36 * 2;
        uVar49 = (undefined1)((ulong)lVar39 >> 0x20);
        uVar50 = (undefined1)((ulong)lVar39 >> 0x28);
        uVar51 = (undefined1)((ulong)lVar39 >> 0x30);
        uVar52 = (undefined1)((ulong)lVar39 >> 0x38);
        uVar53 = (undefined1)((ulong)lVar40 >> 0x20);
        uVar54 = (undefined1)((ulong)lVar40 >> 0x28);
        uVar55 = (undefined1)((ulong)lVar40 >> 0x30);
        uVar56 = (undefined1)((ulong)lVar40 >> 0x38);
        uVar4 = (undefined4)((ulong)((int)puVar16[-2] * lVar22 * 2) >> 0x20);
        auVar58[4] = uVar41;
        auVar58._0_4_ = uVar4;
        auVar58[5] = uVar42;
        auVar58[6] = uVar43;
        auVar58[7] = uVar44;
        auVar58[8] = (char)((ulong)lVar37 >> 0x20);
        auVar58[9] = (char)((ulong)lVar37 >> 0x28);
        auVar58[10] = (char)((ulong)lVar37 >> 0x30);
        auVar58[0xb] = (char)((ulong)lVar37 >> 0x38);
        auVar58[0xc] = uVar45;
        auVar58[0xd] = uVar46;
        auVar58[0xe] = uVar47;
        auVar58[0xf] = uVar48;
        auVar58 = NEON_uqsub(pauVar27[-1],auVar58,4);
        uVar7 = (undefined4)((ulong)((int)*puVar16 * lVar36 * 2) >> 0x20);
        auVar59[4] = uVar49;
        auVar59._0_4_ = uVar7;
        auVar59[5] = uVar50;
        auVar59[6] = uVar51;
        auVar59[7] = uVar52;
        auVar59[8] = (char)((ulong)lVar38 >> 0x20);
        auVar59[9] = (char)((ulong)lVar38 >> 0x28);
        auVar59[10] = (char)((ulong)lVar38 >> 0x30);
        auVar59[0xb] = (char)((ulong)lVar38 >> 0x38);
        auVar59[0xc] = uVar53;
        auVar59[0xd] = uVar54;
        auVar59[0xe] = uVar55;
        auVar59[0xf] = uVar56;
        auVar59 = NEON_uqsub(*pauVar27,auVar59,4);
        lVar22 = (long)(int)uVar73;
        lVar36 = (long)(int)uVar73;
        auVar71._0_8_ =
             CONCAT26((short)((ulong)(auVar58._12_4_ * lVar22 * 2) >> 0x20),
                      CONCAT24((short)((ulong)(auVar58._8_4_ * lVar22 * 2) >> 0x20),
                               CONCAT22((short)((ulong)(auVar58._4_4_ * lVar22 * 2) >> 0x20),
                                        (short)((ulong)(auVar58._0_4_ * lVar22 * 2) >> 0x20))));
        auVar71._8_2_ = (short)((ulong)(auVar59._0_4_ * lVar36 * 2) >> 0x20);
        auVar71._10_2_ = (short)((ulong)(auVar59._4_4_ * lVar36 * 2) >> 0x20);
        auVar71._12_2_ = (short)((ulong)(auVar59._8_4_ * lVar36 * 2) >> 0x20);
        auVar71._14_2_ = (short)((ulong)(auVar59._12_4_ * lVar36 * 2) >> 0x20);
        uVar57 = NEON_uqxtn(auVar71._0_8_,auVar71,2);
        *(undefined8 *)(lVar19 + uVar29) = uVar57;
        *(ulong *)((long)pauVar27[-1] + 8) =
             CONCAT17(uVar48,CONCAT16(uVar47,CONCAT15(uVar46,CONCAT14(uVar45,(int)((ulong)lVar37 >>
                                                                                  0x20)))));
        *(ulong *)pauVar27[-1] =
             CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,uVar4))));
        *(ulong *)((long)*pauVar27 + 8) =
             CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(uVar53,(int)((ulong)lVar38 >>
                                                                                  0x20)))));
        *(ulong *)*pauVar27 =
             CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,uVar7))));
        uVar29 = uVar29 + 8;
        pauVar27 = pauVar27 + 2;
        puVar16 = puVar16 + 4;
      } while (uVar29 < uVar61);
      if ((int)uVar63 <= (int)uVar29) {
        return;
      }
    }
    auVar58 = _UNK_007eebb0;
    uVar29 = uVar29 & 0xffffffff;
    uVar26 = uVar21 - uVar29;
    if (3 < uVar26) {
      lVar22 = uVar29 * 4;
      uVar15 = (long)puVar17 + uVar21 * 4;
      uVar30 = lVar24 + uVar21 * 4;
      if (((lVar19 + uVar21 <= (ulong)((long)puVar17 + lVar22) || uVar15 <= lVar19 + uVar29) &&
          (uVar30 <= lVar19 + uVar29 || lVar19 + uVar21 <= (ulong)(lVar24 + lVar22))) &&
         (uVar30 <= (ulong)((long)puVar17 + lVar22) || uVar15 <= (ulong)(lVar24 + lVar22))) {
        if (uVar26 < 0x10) {
          uVar30 = 0;
        }
        else {
          uVar30 = uVar26 & 0xfffffffffffffff0;
          uVar57 = CONCAT44(uVar1,uVar1);
          piVar14 = (int *)((long)puVar17 + lVar22);
          puVar16 = (undefined8 *)(lVar24 + lVar22);
          uVar15 = uVar30;
          pbVar31 = (byte *)(lVar19 + uVar29);
          do {
            auVar74 = NEON_umull(CONCAT44(uVar3,uVar3),puVar16[6],4);
            auVar83 = NEON_umull(CONCAT44(uVar3,uVar3),puVar16[4],4);
            auVar59 = NEON_umull(CONCAT44(uVar3,uVar3),puVar16[2],4);
            auVar71 = NEON_umull(CONCAT44(uVar3,uVar3),*puVar16,4);
            iVar23 = (int)((ulong)uVar3 * (puVar16[1] & 0xffffffff) >> 0x20);
            iVar65 = (int)((ulong)uVar3 * ((ulong)puVar16[1] >> 0x20) >> 0x20);
            iVar28 = (int)((ulong)uVar3 * (puVar16[3] & 0xffffffff) >> 0x20);
            iVar68 = (int)((ulong)uVar3 * ((ulong)puVar16[3] >> 0x20) >> 0x20);
            iVar32 = (int)((ulong)uVar3 * (puVar16[5] & 0xffffffff) >> 0x20);
            iVar34 = (int)((ulong)uVar3 * ((ulong)puVar16[5] >> 0x20) >> 0x20);
            iVar33 = (int)((ulong)uVar3 * (puVar16[7] & 0xffffffff) >> 0x20);
            iVar35 = (int)((ulong)uVar3 * ((ulong)puVar16[7] >> 0x20) >> 0x20);
            uVar61 = piVar14[0xc] - auVar74._4_4_;
            uVar63 = piVar14[0xd] - auVar74._12_4_;
            auVar72._0_8_ = CONCAT44(uVar63,uVar61);
            auVar72._8_4_ = piVar14[0xe] - iVar33;
            auVar72._12_4_ = piVar14[0xf] - iVar35;
            uVar73 = piVar14[8] - auVar83._4_4_;
            uVar77 = piVar14[9] - auVar83._12_4_;
            auVar75._0_8_ = CONCAT44(uVar77,uVar73);
            auVar75._8_4_ = piVar14[10] - iVar32;
            auVar75._12_4_ = piVar14[0xb] - iVar34;
            uVar82 = piVar14[4] - auVar59._4_4_;
            uVar86 = piVar14[5] - auVar59._12_4_;
            auVar84._0_8_ = CONCAT44(uVar86,uVar82);
            auVar84._8_4_ = piVar14[6] - iVar28;
            auVar84._12_4_ = piVar14[7] - iVar68;
            uVar78 = *piVar14 - auVar71._4_4_;
            uVar81 = piVar14[1] - auVar71._12_4_;
            auVar79._0_8_ = CONCAT44(uVar81,uVar78);
            auVar79._8_4_ = piVar14[2] - iVar23;
            auVar79._12_4_ = piVar14[3] - iVar65;
            uVar60 = auVar72._8_8_;
            auVar88 = NEON_umull(uVar57,auVar72._0_8_,4);
            uVar62 = auVar75._8_8_;
            auVar91 = NEON_umull(uVar57,auVar75._0_8_,4);
            uVar66 = auVar84._8_8_;
            auVar93 = NEON_umull(uVar57,auVar84._0_8_,4);
            uVar64 = auVar79._8_8_;
            auVar95 = NEON_umull(uVar57,auVar79._0_8_,4);
            auVar5._9_2_ = 0;
            auVar5._0_9_ = (unkuint9)0x80000000;
            auVar5[0xb] = 0x80;
            auVar85._0_8_ = (ulong)uVar1 * (uVar66 & 0xffffffff) + 0x80000000 >> 0x20;
            auVar85._8_8_ = (ulong)uVar1 * (uVar66 >> 0x20) + 0x80000000 >> 0x20;
            auVar76._0_8_ = (ulong)uVar1 * (uVar64 & 0xffffffff) + 0x80000000 >> 0x20;
            auVar76._8_8_ = (ulong)uVar1 * (uVar64 >> 0x20) + 0x80000000 >> 0x20;
            auVar80._0_8_ = (ulong)uVar1 * (ulong)uVar82 + 0x80000000 >> 0x20;
            auVar80._8_8_ = (ulong)auVar5._8_4_ + (ulong)uVar1 * (ulong)uVar86 >> 0x20;
            auVar89._0_8_ = (ulong)uVar1 * (ulong)uVar78 + 0x80000000 >> 0x20;
            auVar89._8_8_ = (ulong)uVar1 * (ulong)uVar81 + 0x80000000 >> 0x20;
            uVar94 = NEON_raddhn(auVar95._0_8_,auVar95,ZEXT216(0),8);
            uVar92 = NEON_raddhn(auVar93._0_8_,auVar93,ZEXT216(0),8);
            uVar90 = NEON_raddhn(auVar91._0_8_,auVar91,ZEXT216(0),8);
            uVar87 = NEON_raddhn(auVar88._0_8_,auVar88,ZEXT216(0),8);
            auVar72 = a64_TBL(ZEXT816(0),auVar89,auVar76,auVar80,auVar85,auVar58);
            auVar88._8_8_ = (ulong)uVar1 * (ulong)uVar77 + 0x80000000 >> 0x20;
            auVar88._0_8_ = (ulong)uVar1 * (ulong)uVar73 + 0x80000000 >> 0x20;
            auVar91._8_8_ = (ulong)uVar1 * (uVar62 >> 0x20) + 0x80000000 >> 0x20;
            auVar91._0_8_ = (ulong)uVar1 * (uVar62 & 0xffffffff) + 0x80000000 >> 0x20;
            auVar93._8_8_ = (ulong)uVar1 * (ulong)uVar63 + 0x80000000 >> 0x20;
            auVar93._0_8_ = (ulong)uVar1 * (ulong)uVar61 + 0x80000000 >> 0x20;
            auVar95._8_8_ = (ulong)uVar1 * (uVar60 >> 0x20) + 0x80000000 >> 0x20;
            auVar95._0_8_ = (ulong)uVar1 * (uVar60 & 0xffffffff) + 0x80000000 >> 0x20;
            auVar88 = a64_TBL(ZEXT816(0),auVar88,auVar91,auVar93,auVar95,auVar58);
            pbVar31[8] = auVar88[0] | -(0xff < (int)uVar90);
            pbVar31[9] = auVar88[1] | -(0xff < (int)((ulong)uVar90 >> 0x20));
            pbVar31[10] = auVar88[2] |
                          -(0xff < (int)((ulong)uVar1 * (uVar62 & 0xffffffff) + 0x80000000 >> 0x20))
            ;
            pbVar31[0xb] = auVar88[3] |
                           -(0xff < (int)((ulong)uVar1 * (uVar62 >> 0x20) + 0x80000000 >> 0x20));
            pbVar31[0xc] = auVar88[4] | -(0xff < (int)uVar87);
            pbVar31[0xd] = auVar88[5] | -(0xff < (int)((ulong)uVar87 >> 0x20));
            pbVar31[0xe] = auVar88[6] |
                           -(0xff < (int)((ulong)uVar1 * (uVar60 & 0xffffffff) + 0x80000000 >> 0x20)
                            );
            pbVar31[0xf] = auVar88[7] |
                           -(0xff < (int)((ulong)uVar1 * (uVar60 >> 0x20) + 0x80000000 >> 0x20));
            *pbVar31 = auVar72[0] | -(0xff < (int)uVar94);
            pbVar31[1] = auVar72[1] | -(0xff < (int)((ulong)uVar94 >> 0x20));
            pbVar31[2] = auVar72[2] |
                         -(0xff < (int)((ulong)uVar1 * (uVar64 & 0xffffffff) + 0x80000000 >> 0x20));
            pbVar31[3] = auVar72[3] |
                         -(0xff < (int)((ulong)uVar1 * (uVar64 >> 0x20) + 0x80000000 >> 0x20));
            pbVar31[4] = auVar72[4] | -(0xff < (int)uVar92);
            pbVar31[5] = auVar72[5] | -(0xff < (int)((ulong)uVar92 >> 0x20));
            pbVar31[6] = auVar72[6] |
                         -(0xff < (int)((ulong)uVar1 * (uVar66 & 0xffffffff) + 0x80000000 >> 0x20));
            pbVar31[7] = auVar72[7] |
                         -(0xff < (int)((ulong)uVar1 * (uVar66 >> 0x20) + 0x80000000 >> 0x20));
            piVar14[10] = iVar32;
            piVar14[0xb] = iVar34;
            piVar14[8] = auVar83._4_4_;
            piVar14[9] = auVar83._12_4_;
            piVar14[0xe] = iVar33;
            piVar14[0xf] = iVar35;
            piVar14[0xc] = auVar74._4_4_;
            piVar14[0xd] = auVar74._12_4_;
            piVar14[2] = iVar23;
            piVar14[3] = iVar65;
            *piVar14 = auVar71._4_4_;
            piVar14[1] = auVar71._12_4_;
            piVar14[6] = iVar28;
            piVar14[7] = iVar68;
            piVar14[4] = auVar59._4_4_;
            piVar14[5] = auVar59._12_4_;
            uVar15 = uVar15 - 0x10;
            piVar14 = piVar14 + 0x10;
            puVar16 = puVar16 + 8;
            pbVar31 = pbVar31 + 0x10;
          } while (uVar15 != 0);
          if (uVar26 == uVar30) {
            return;
          }
          if ((uVar26 & 0xc) == 0) {
            uVar29 = uVar30 + uVar29;
            goto LAB_0023f314;
          }
        }
        uVar15 = uVar26 & 0xfffffffffffffffc;
        lVar22 = uVar30 - uVar15;
        puVar25 = (undefined4 *)(lVar19 + uVar30 + uVar29);
        lVar36 = (uVar30 + uVar29) * 4;
        puVar16 = (undefined8 *)(lVar24 + lVar36);
        piVar14 = (int *)((long)puVar17 + lVar36);
        do {
          auVar58 = NEON_umull(CONCAT44(uVar3,uVar3),*puVar16,4);
          iVar23 = (int)((ulong)uVar3 * (puVar16[1] & 0xffffffff) >> 0x20);
          iVar28 = (int)((ulong)uVar3 * ((ulong)puVar16[1] >> 0x20) >> 0x20);
          uVar61 = *piVar14 - auVar58._4_4_;
          uVar63 = piVar14[1] - auVar58._12_4_;
          auVar74._0_8_ = CONCAT44(uVar63,uVar61);
          auVar74._8_4_ = piVar14[2] - iVar23;
          auVar74._12_4_ = piVar14[3] - iVar28;
          uVar30 = auVar74._8_8_;
          auVar59 = NEON_umull(CONCAT44(uVar1,uVar1),auVar74._0_8_,4);
          uVar57 = NEON_raddhn(auVar59._0_8_,auVar59,ZEXT216(0),8);
          *puVar25 = CONCAT13((byte)((ulong)uVar1 * (uVar30 >> 0x20) + 0x80000000 >> 0x20) |
                              -(0xff < (int)((ulong)uVar1 * (uVar30 >> 0x20) + 0x80000000 >> 0x20)),
                              CONCAT12((byte)((ulong)uVar1 * (uVar30 & 0xffffffff) + 0x80000000 >>
                                             0x20) |
                                       -(0xff < (int)((ulong)uVar1 * (uVar30 & 0xffffffff) +
                                                      0x80000000 >> 0x20)),
                                       CONCAT11((byte)(uVar2 * uVar63 + 0x80000000 >> 0x20) |
                                                -(0xff < (int)((ulong)uVar57 >> 0x20)),
                                                (byte)((ulong)uVar1 * (ulong)uVar61 + 0x80000000 >>
                                                      0x20) | -(0xff < (int)uVar57))));
          puVar25 = puVar25 + 1;
          piVar14[2] = iVar23;
          piVar14[3] = iVar28;
          *piVar14 = auVar58._4_4_;
          piVar14[1] = auVar58._12_4_;
          lVar22 = lVar22 + 4;
          puVar16 = puVar16 + 2;
          piVar14 = piVar14 + 4;
        } while (lVar22 != 0);
        uVar29 = uVar15 + uVar29;
        if (uVar26 == uVar15) {
          return;
        }
      }
    }
LAB_0023f314:
    lVar22 = uVar21 - uVar29;
    piVar14 = (int *)((long)puVar17 + uVar29 * 4);
    puVar20 = (undefined1 *)(lVar19 + uVar29);
    puVar18 = (uint *)(lVar24 + uVar29 * 4);
    do {
      iVar28 = (int)((ulong)*puVar18 * (ulong)uVar3 >> 0x20);
      iVar23 = (int)(uVar2 * (uint)(*piVar14 - iVar28) + 0x80000000 >> 0x20);
      if (0xff < iVar23) {
        iVar23 = -1;
      }
      *puVar20 = (char)iVar23;
      *piVar14 = iVar28;
      lVar22 = lVar22 + -1;
      piVar14 = piVar14 + 1;
      puVar20 = puVar20 + 1;
      puVar18 = puVar18 + 1;
    } while (lVar22 != 0);
    return;
  }
  if ((int)uVar61 < 1) {
    uVar29 = 0;
    if ((int)uVar63 < 1) {
      return;
    }
  }
  else {
    uVar29 = 0;
    puVar16 = puVar17;
    do {
      lVar24 = (long)(int)uVar73;
      lVar22 = (int)((ulong)*puVar16 >> 0x20) * lVar24 * 2;
      lVar36 = (int)puVar16[1] * lVar24 * 2;
      lVar39 = (int)((ulong)puVar16[1] >> 0x20) * lVar24 * 2;
      uVar41 = (undefined1)((ulong)lVar22 >> 0x20);
      uVar42 = (undefined1)((ulong)lVar22 >> 0x28);
      uVar43 = (undefined1)((ulong)lVar36 >> 0x20);
      uVar44 = (undefined1)((ulong)lVar36 >> 0x28);
      uVar45 = (undefined1)((ulong)lVar39 >> 0x20);
      uVar46 = (undefined1)((ulong)lVar39 >> 0x28);
      lVar22 = (long)(int)uVar73;
      lVar36 = (int)puVar16[2] * lVar22 * 2;
      lVar39 = (int)((ulong)puVar16[2] >> 0x20) * lVar22 * 2;
      lVar37 = (int)puVar16[3] * lVar22 * 2;
      lVar22 = (int)((ulong)puVar16[3] >> 0x20) * lVar22 * 2;
      uVar6 = (undefined2)((ulong)((int)*puVar16 * lVar24 * 2) >> 0x20);
      auVar83[2] = uVar41;
      auVar83._0_2_ = uVar6;
      auVar83[3] = uVar42;
      auVar83[4] = uVar43;
      auVar83[5] = uVar44;
      auVar83[6] = uVar45;
      auVar83[7] = uVar46;
      auVar83[8] = (char)((ulong)lVar36 >> 0x20);
      auVar83[9] = (char)((ulong)lVar36 >> 0x28);
      auVar83[10] = (char)((ulong)lVar39 >> 0x20);
      auVar83[0xb] = (char)((ulong)lVar39 >> 0x28);
      auVar83[0xc] = (char)((ulong)lVar37 >> 0x20);
      auVar83[0xd] = (char)((ulong)lVar37 >> 0x28);
      auVar83[0xe] = (char)((ulong)lVar22 >> 0x20);
      auVar83[0xf] = (char)((ulong)lVar22 >> 0x28);
      uVar57 = NEON_uqxtn(CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(
                                                  uVar42,CONCAT12(uVar41,uVar6)))))),auVar83,2);
      *(undefined8 *)(lVar19 + uVar29) = uVar57;
      uVar29 = uVar29 + 8;
      puVar16[1] = 0;
      *puVar16 = 0;
      puVar16[3] = 0;
      puVar16[2] = 0;
      puVar16 = puVar16 + 4;
    } while (uVar29 < uVar61);
    if ((int)uVar63 <= (int)uVar29) {
      return;
    }
  }
  auVar58 = _UNK_007eebb0;
  uVar29 = uVar29 & 0xffffffff;
  uVar26 = uVar21 - uVar29;
  if ((3 < uVar26) &&
     ((pauVar27 = (undefined1 (*) [16])((long)puVar17 + uVar29 * 4),
      (long)puVar17 + uVar21 * 4 <= lVar19 + uVar29 ||
      ((undefined1 (*) [16])(lVar19 + uVar21) <= pauVar27)))) {
    if (uVar26 < 0x10) {
      uVar30 = 0;
    }
    else {
      uVar30 = uVar26 & 0xfffffffffffffff0;
      pbVar31 = (byte *)(lVar19 + uVar29);
      uVar15 = uVar30;
      do {
        auVar71 = pauVar27[2];
        auVar59 = pauVar27[3];
        auVar91 = *pauVar27;
        auVar88 = pauVar27[1];
        uVar60 = auVar59._8_8_;
        auVar93 = NEON_umull(CONCAT44(uVar1,uVar1),auVar59._0_8_,4);
        uVar64 = auVar71._8_8_;
        auVar95 = NEON_umull(CONCAT44(uVar1,uVar1),auVar71._0_8_,4);
        uVar67 = auVar88._8_8_;
        auVar72 = NEON_umull(CONCAT44(uVar1,uVar1),auVar88._0_8_,4);
        uVar70 = auVar91._8_8_;
        auVar89 = NEON_umull(CONCAT44(uVar1,uVar1),auVar91._0_8_,4);
        uVar69 = (ulong)uVar1 * (uVar67 & 0xffffffff) + 0x80000000;
        uVar66 = uVar2 * auVar71._0_4_ + 0x80000000;
        uVar62 = (ulong)uVar1 * (uVar60 & 0xffffffff) + 0x80000000;
        auVar97._0_8_ = uVar69 >> 0x20;
        auVar97._8_8_ = (ulong)uVar1 * (uVar67 >> 0x20) + 0x80000000 >> 0x20;
        auVar96._0_8_ = (ulong)uVar1 * (uVar70 & 0xffffffff) + 0x80000000 >> 0x20;
        auVar96._8_8_ = (ulong)uVar1 * (uVar70 >> 0x20) + 0x80000000 >> 0x20;
        uVar57 = NEON_raddhn(auVar59._0_8_,auVar89,ZEXT216(0),8);
        uVar87 = NEON_raddhn(uVar62,auVar72,ZEXT216(0),8);
        uVar90 = NEON_raddhn(uVar66,auVar95,ZEXT216(0),8);
        uVar92 = NEON_raddhn(uVar69,auVar93,ZEXT216(0),8);
        auVar12._8_8_ = uVar2 * auVar91._4_4_ + 0x80000000 >> 0x20;
        auVar12._0_8_ = uVar2 * auVar91._0_4_ + 0x80000000 >> 0x20;
        auVar13._8_8_ = uVar2 * auVar88._4_4_ + 0x80000000 >> 0x20;
        auVar13._0_8_ = uVar2 * auVar88._0_4_ + 0x80000000 >> 0x20;
        auVar88 = a64_TBL(ZEXT816(0),auVar12,auVar96,auVar13,auVar97,auVar58);
        auVar8._8_8_ = uVar2 * auVar71._4_4_ + 0x80000000 >> 0x20;
        auVar8._0_8_ = uVar66 >> 0x20;
        auVar9._8_8_ = (ulong)uVar1 * (uVar64 >> 0x20) + 0x80000000 >> 0x20;
        auVar9._0_8_ = (ulong)uVar1 * (uVar64 & 0xffffffff) + 0x80000000 >> 0x20;
        auVar10._8_8_ = uVar2 * auVar59._4_4_ + 0x80000000 >> 0x20;
        auVar10._0_8_ = uVar2 * auVar59._0_4_ + 0x80000000 >> 0x20;
        auVar11._8_8_ = (ulong)uVar1 * (uVar60 >> 0x20) + 0x80000000 >> 0x20;
        auVar11._0_8_ = uVar62 >> 0x20;
        auVar59 = a64_TBL(ZEXT816(0),auVar8,auVar9,auVar10,auVar11,auVar58);
        pbVar31[8] = auVar59[0] | -(0xff < (int)uVar90);
        pbVar31[9] = auVar59[1] | -(0xff < (int)((ulong)uVar90 >> 0x20));
        pbVar31[10] = auVar59[2] |
                      -(0xff < (int)((ulong)uVar1 * (uVar64 & 0xffffffff) + 0x80000000 >> 0x20));
        pbVar31[0xb] = auVar59[3] |
                       -(0xff < (int)((ulong)uVar1 * (uVar64 >> 0x20) + 0x80000000 >> 0x20));
        pbVar31[0xc] = auVar59[4] | -(0xff < (int)uVar92);
        pbVar31[0xd] = auVar59[5] | -(0xff < (int)((ulong)uVar92 >> 0x20));
        pbVar31[0xe] = auVar59[6] |
                       -(0xff < (int)((ulong)uVar1 * (uVar60 & 0xffffffff) + 0x80000000 >> 0x20));
        pbVar31[0xf] = auVar59[7] |
                       -(0xff < (int)((ulong)uVar1 * (uVar60 >> 0x20) + 0x80000000 >> 0x20));
        *pbVar31 = auVar88[0] | -(0xff < (int)uVar57);
        pbVar31[1] = auVar88[1] | -(0xff < (int)((ulong)uVar57 >> 0x20));
        pbVar31[2] = auVar88[2] |
                     -(0xff < (int)((ulong)uVar1 * (uVar70 & 0xffffffff) + 0x80000000 >> 0x20));
        pbVar31[3] = auVar88[3] |
                     -(0xff < (int)((ulong)uVar1 * (uVar70 >> 0x20) + 0x80000000 >> 0x20));
        pbVar31[4] = auVar88[4] | -(0xff < (int)uVar87);
        pbVar31[5] = auVar88[5] | -(0xff < (int)((ulong)uVar87 >> 0x20));
        pbVar31[6] = auVar88[6] |
                     -(0xff < (int)((ulong)uVar1 * (uVar67 & 0xffffffff) + 0x80000000 >> 0x20));
        pbVar31[7] = auVar88[7] |
                     -(0xff < (int)((ulong)uVar1 * (uVar67 >> 0x20) + 0x80000000 >> 0x20));
        *(undefined8 *)(pauVar27[2] + 8) = 0;
        *(undefined8 *)pauVar27[2] = 0;
        *(undefined8 *)(pauVar27[3] + 8) = 0;
        *(undefined8 *)pauVar27[3] = 0;
        *(undefined8 *)(*pauVar27 + 8) = 0;
        *(undefined8 *)*pauVar27 = 0;
        *(undefined8 *)(pauVar27[1] + 8) = 0;
        *(undefined8 *)pauVar27[1] = 0;
        uVar15 = uVar15 - 0x10;
        pauVar27 = pauVar27 + 4;
        pbVar31 = pbVar31 + 0x10;
      } while (uVar15 != 0);
      if (uVar26 == uVar30) {
        return;
      }
      if ((uVar26 & 0xc) == 0) {
        uVar29 = uVar30 + uVar29;
        goto LAB_0023f400;
      }
    }
    uVar15 = uVar26 & 0xfffffffffffffffc;
    lVar24 = uVar30 - uVar15;
    puVar25 = (undefined4 *)(lVar19 + uVar30 + uVar29);
    pauVar27 = (undefined1 (*) [16])((long)puVar17 + (uVar30 + uVar29) * 4);
    do {
      auVar58 = *pauVar27;
      uVar30 = auVar58._8_8_;
      auVar59 = NEON_umull(CONCAT44(uVar1,uVar1),auVar58._0_8_,4);
      uVar57 = NEON_raddhn(auVar59._0_8_,auVar59,ZEXT216(0),8);
      *puVar25 = CONCAT13((byte)((ulong)uVar1 * (uVar30 >> 0x20) + 0x80000000 >> 0x20) |
                          -(0xff < (int)((ulong)uVar1 * (uVar30 >> 0x20) + 0x80000000 >> 0x20)),
                          CONCAT12((byte)((ulong)uVar1 * (uVar30 & 0xffffffff) + 0x80000000 >> 0x20)
                                   | -(0xff < (int)((ulong)uVar1 * (uVar30 & 0xffffffff) +
                                                    0x80000000 >> 0x20)),
                                   CONCAT11((byte)(uVar2 * auVar58._4_4_ + 0x80000000 >> 0x20) |
                                            -(0xff < (int)((ulong)uVar57 >> 0x20)),
                                            (byte)(uVar2 * auVar58._0_4_ + 0x80000000 >> 0x20) |
                                            -(0xff < (int)uVar57))));
      puVar25 = puVar25 + 1;
      *(undefined8 *)*pauVar27 = 0;
      *(undefined8 *)(*pauVar27 + 8) = 0;
      lVar24 = lVar24 + 4;
      pauVar27 = pauVar27 + 1;
    } while (lVar24 != 0);
    uVar29 = uVar15 + uVar29;
    if (uVar26 == uVar15) {
      return;
    }
  }
LAB_0023f400:
  lVar24 = uVar21 - uVar29;
  puVar18 = (uint *)((long)puVar17 + uVar29 * 4);
  puVar20 = (undefined1 *)(lVar19 + uVar29);
  do {
    iVar23 = (int)(*puVar18 * uVar2 + 0x80000000 >> 0x20);
    if (0xff < iVar23) {
      iVar23 = -1;
    }
    *puVar20 = (char)iVar23;
    *puVar18 = 0;
    lVar24 = lVar24 + -1;
    puVar18 = puVar18 + 1;
    puVar20 = puVar20 + 1;
  } while (lVar24 != 0);
                    /* WARNING: Read-only address (ram,0x007eebb0) is written */
  return;
}



/* Entry: 0023f834; end: 0023f88f;  */

void FUN_0023f834(void)

{
  uRam0000000000b6d2a8 = 0x2423f0;
  pcRam0000000000b6d2b0 = FUN_0023f890;
  uRam0000000000b6d2b8 = 0x24390c;
  uRam0000000000b6d2c0 = 0x240e44;
  uRam0000000000b6d2e8 = 0x240e44;
  uRam0000000000b6d2f0 = 0x244e28;
  uRam0000000000b6d2d8 = 0x24641c;
  pcRam0000000000b6d2e0 = FUN_0023f890;
  uRam0000000000b6d2c8 = 0x244e28;
  uRam0000000000b6d2d0 = 0x247988;
  uRam0000000000b6d2f8 = 0x247988;
  return;
}



/* Entry: 00248e38; end: 002497cb;  */

void FUN_00248e38(void)

{
  uRam0000000000b6d390 = 0x248ea0;
  uRam0000000000b6d388 = 0x24913c;
  uRam0000000000b6d380 = 0x2493dc;
  uRam0000000000b6d378 = 0x2496dc;
  pcRam0000000000b6d398 = FUN_002497cc;
  return;
}



/* Entry: 002497cc; end: 00249c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002497cc(ushort *param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  unkbyte10 Var16;
  ushort *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  long lVar24;
  long lVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  ushort uVar36;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  undefined1 auVar37 [16];
  ushort uVar41;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ushort uVar48;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  ushort uVar58;
  ushort uVar59;
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  ushort uVar66;
  ushort uVar67;
  ushort uVar68;
  ushort uVar69;
  ushort uVar70;
  ushort uVar71;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  undefined1 auVar75 [16];
  
  if ((int)param_4 < 8) {
    uVar21 = 0;
  }
  else {
    lVar24 = 0;
    uVar21 = param_4 & 0x7ffffff8;
    do {
      uVar36 = *param_1;
      uVar48 = param_1[1];
      uVar64 = param_1[2];
      uVar38 = param_1[4];
      uVar54 = param_1[5];
      uVar65 = param_1[6];
      uVar39 = param_1[8];
      uVar55 = param_1[9];
      uVar66 = param_1[10];
      uVar40 = param_1[0xc];
      uVar56 = param_1[0xd];
      uVar67 = param_1[0xe];
      uVar41 = param_1[0x10];
      uVar58 = param_1[0x11];
      uVar68 = param_1[0x12];
      uVar45 = param_1[0x14];
      uVar59 = param_1[0x15];
      uVar69 = param_1[0x16];
      uVar46 = param_1[0x18];
      uVar62 = param_1[0x19];
      uVar70 = param_1[0x1a];
      uVar47 = param_1[0x1c];
      uVar63 = param_1[0x1d];
      uVar71 = param_1[0x1e];
      param_1 = param_1 + 0x20;
      sVar30 = (short)((uint)((short)uVar48 * -0x4a89 + (short)uVar36 * -0x25f7 +
                             (short)uVar64 * 0x7080) >> 0x10) + 0x200;
      sVar31 = (short)((uint)((short)uVar54 * -0x4a89 + (short)uVar38 * -0x25f7 +
                             (short)uVar65 * 0x7080) >> 0x10) + 0x200;
      sVar32 = (short)((uint)((short)uVar55 * -0x4a89 + (short)uVar39 * -0x25f7 +
                             (short)uVar66 * 0x7080) >> 0x10) + 0x200;
      sVar33 = (short)((uint)((short)uVar56 * -0x4a89 + (short)uVar40 * -0x25f7 +
                             (short)uVar67 * 0x7080) >> 0x10) + 0x200;
      auVar61._2_2_ = sVar31;
      auVar61._0_2_ = sVar30;
      auVar61._4_2_ = sVar32;
      auVar61._6_2_ = sVar33;
      auVar61._8_2_ =
           (short)((uint)((short)uVar58 * -0x4a89 + (short)uVar41 * -0x25f7 + (short)uVar68 * 0x7080
                         ) >> 0x10) + 0x200;
      auVar61._10_2_ =
           (short)((uint)((short)uVar59 * -0x4a89 + (short)uVar45 * -0x25f7 + (short)uVar69 * 0x7080
                         ) >> 0x10) + 0x200;
      auVar61._12_2_ =
           (short)((uint)((short)uVar62 * -0x4a89 + (short)uVar46 * -0x25f7 + (short)uVar70 * 0x7080
                         ) >> 0x10) + 0x200;
      auVar61._14_2_ =
           (short)((uint)((short)uVar63 * -0x4a89 + (short)uVar47 * -0x25f7 + (short)uVar71 * 0x7080
                         ) >> 0x10) + 0x200;
      uVar13 = NEON_sqrshrun(CONCAT26(sVar33,CONCAT24(sVar32,CONCAT22(sVar31,sVar30))),auVar61,2,2);
      *(undefined8 *)(param_2 + lVar24) = uVar13;
      auVar34._2_2_ =
           (short)((uint)((short)uVar54 * -0x5e34 + (short)uVar38 * 0x7080 + (short)uVar65 * -0x124c
                         ) >> 0x10) + 0x200;
      auVar34._0_2_ =
           (short)((uint)((short)uVar48 * -0x5e34 + (short)uVar36 * 0x7080 + (short)uVar64 * -0x124c
                         ) >> 0x10) + 0x200;
      auVar34._4_2_ =
           (short)((uint)((short)uVar55 * -0x5e34 + (short)uVar39 * 0x7080 + (short)uVar66 * -0x124c
                         ) >> 0x10) + 0x200;
      auVar34._6_2_ =
           (short)((uint)((short)uVar56 * -0x5e34 + (short)uVar40 * 0x7080 + (short)uVar67 * -0x124c
                         ) >> 0x10) + 0x200;
      auVar34._8_2_ =
           (short)((uint)((short)uVar58 * -0x5e34 + (short)uVar41 * 0x7080 + (short)uVar68 * -0x124c
                         ) >> 0x10) + 0x200;
      auVar34._10_2_ =
           (short)((uint)((short)uVar59 * -0x5e34 + (short)uVar45 * 0x7080 + (short)uVar69 * -0x124c
                         ) >> 0x10) + 0x200;
      auVar34._12_2_ =
           (short)((uint)((short)uVar62 * -0x5e34 + (short)uVar46 * 0x7080 + (short)uVar70 * -0x124c
                         ) >> 0x10) + 0x200;
      auVar34._14_2_ =
           (short)((uint)((short)uVar63 * -0x5e34 + (short)uVar47 * 0x7080 + (short)uVar71 * -0x124c
                         ) >> 0x10) + 0x200;
      uVar13 = NEON_sqrshrun(uVar13,auVar34,2,2);
      *(undefined8 *)(param_3 + lVar24) = uVar13;
      uVar20 = lVar24 + 0x10;
      lVar24 = lVar24 + 8;
    } while (uVar20 <= param_4);
  }
  Var16 = _UNK_007eeb70;
  if ((int)param_4 <= (int)uVar21) {
    return;
  }
  uVar18 = (ulong)uVar21;
  uVar21 = ~uVar21 + param_4;
  uVar22 = (ulong)uVar21;
  puVar17 = param_1;
  uVar20 = uVar18;
  if (3 < uVar21) {
    lVar24 = uVar18 + uVar22 + 1;
    puVar3 = (ushort *)(param_2 + lVar24);
    puVar4 = (ushort *)(param_3 + lVar24);
    if (((puVar3 <= (ushort *)(param_3 + uVar18) || puVar4 <= (ushort *)(param_2 + uVar18)) &&
        (param_1 + uVar22 * 4 + 3 <= (ushort *)(param_2 + uVar18) || puVar3 <= param_1)) &&
       (param_1 + uVar22 * 4 + 3 <= (ushort *)(param_3 + uVar18) || puVar4 <= param_1)) {
      uVar1 = uVar22 + 1;
      if (uVar21 < 0x10) {
        lVar25 = 0;
      }
      else {
        uVar20 = 0x10;
        if ((uVar1 & 0xf) != 0) {
          uVar20 = uVar1 & 0xf;
        }
        lVar25 = uVar1 - uVar20;
        puVar27 = (undefined8 *)(param_3 + uVar18);
        puVar29 = (undefined8 *)(param_2 + uVar18);
        lVar24 = lVar25;
        do {
          uVar62 = *puVar17;
          uVar66 = puVar17[1];
          uVar70 = puVar17[2];
          uVar63 = puVar17[4];
          uVar67 = puVar17[5];
          uVar71 = puVar17[6];
          uVar64 = puVar17[8];
          uVar68 = puVar17[9];
          uVar72 = puVar17[10];
          uVar65 = puVar17[0xc];
          uVar69 = puVar17[0xd];
          uVar73 = puVar17[0xe];
          uVar74 = puVar17[0x16];
          uVar36 = puVar17[0x20];
          uVar45 = puVar17[0x21];
          uVar54 = puVar17[0x22];
          uVar38 = puVar17[0x24];
          uVar46 = puVar17[0x25];
          uVar55 = puVar17[0x26];
          uVar39 = puVar17[0x28];
          uVar47 = puVar17[0x29];
          uVar56 = puVar17[0x2a];
          uVar40 = puVar17[0x2c];
          uVar48 = puVar17[0x2d];
          uVar58 = puVar17[0x2e];
          uVar41 = puVar17[0x34];
          uVar59 = puVar17[0x36];
          auVar57._0_4_ =
               (int)((uint)puVar17[0x11] * -0x4a89 + (uint)puVar17[0x10] * -0x25f7 +
                     ((uint)(CONCAT24(uVar74,CONCAT22(puVar17[0x12],uVar73)) >> 0x10) & 0xffff) *
                     0x7080 + 0x2020000) >> 0x12;
          auVar57._4_4_ =
               (int)((uint)puVar17[0x15] * -0x4a89 + (uint)puVar17[0x14] * -0x25f7 +
                     (uint)uVar74 * 0x7080 + 0x2020000) >> 0x12;
          auVar57._8_4_ =
               (int)((uint)puVar17[0x19] * -0x4a89 + (uint)puVar17[0x18] * -0x25f7 +
                     (uint)puVar17[0x1a] * 0x7080 + 0x2020000) >> 0x12;
          auVar57._12_4_ =
               (int)((uint)puVar17[0x1d] * -0x4a89 + (uint)puVar17[0x1c] * -0x25f7 +
                     (uint)puVar17[0x1e] * 0x7080 + 0x2020000) >> 0x12;
          auVar49._0_4_ =
               (int)((uint)puVar17[0x31] * -0x4a89 + (uint)puVar17[0x30] * -0x25f7 +
                     ((uint)(CONCAT24(uVar59,CONCAT22(puVar17[0x32],uVar58)) >> 0x10) & 0xffff) *
                     0x7080 + 0x2020000) >> 0x12;
          auVar49._4_4_ =
               (int)((uint)puVar17[0x35] * -0x4a89 + (uint)uVar41 * -0x25f7 + (uint)uVar59 * 0x7080
                    + 0x2020000) >> 0x12;
          auVar49._8_4_ =
               (int)((uint)puVar17[0x39] * -0x4a89 + (uint)puVar17[0x38] * -0x25f7 +
                     (uint)puVar17[0x3a] * 0x7080 + 0x2020000) >> 0x12;
          auVar49._12_4_ =
               (int)((uint)puVar17[0x3d] * -0x4a89 + (uint)puVar17[0x3c] * -0x25f7 +
                     (uint)puVar17[0x3e] * 0x7080 + 0x2020000) >> 0x12;
          auVar61 = NEON_smax(auVar57,ZEXT216(0),4);
          auVar52._8_2_ = 0xff;
          auVar52._0_8_ = 0xff000000ff;
          auVar52._10_2_ = 0;
          auVar52._12_2_ = 0xff;
          auVar52._14_2_ = 0;
          auVar34 = NEON_smin(auVar61,auVar52,4);
          auVar61 = NEON_smax(auVar49,ZEXT216(0),4);
          auVar35._8_2_ = 0xff;
          auVar35._0_8_ = 0xff000000ff;
          auVar35._10_2_ = 0;
          auVar35._12_2_ = 0xff;
          auVar35._14_2_ = 0;
          auVar35 = NEON_smin(auVar61,auVar35,4);
          auVar50._0_4_ =
               (int)((uint)uVar66 * -0x4a89 + (uint)uVar62 * -0x25f7 + (uint)uVar70 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar50._4_4_ =
               (int)((uint)uVar67 * -0x4a89 + (uint)uVar63 * -0x25f7 + (uint)uVar71 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar50._8_4_ =
               (int)((uint)uVar68 * -0x4a89 + (uint)uVar64 * -0x25f7 + (uint)uVar72 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar50._12_4_ =
               (int)((uint)uVar69 * -0x4a89 + (uint)uVar65 * -0x25f7 + (uint)uVar73 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar61 = NEON_smax(auVar50,ZEXT216(0),4);
          auVar75._8_2_ = 0xff;
          auVar75._0_8_ = 0xff000000ff;
          auVar75._10_2_ = 0;
          auVar75._12_2_ = 0xff;
          auVar75._14_2_ = 0;
          auVar61 = NEON_smin(auVar61,auVar75,4);
          auVar51._0_4_ =
               (int)((uint)uVar45 * -0x4a89 + (uint)uVar36 * -0x25f7 + (uint)uVar54 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar51._4_4_ =
               (int)((uint)uVar46 * -0x4a89 + (uint)uVar38 * -0x25f7 + (uint)uVar55 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar51._8_4_ =
               (int)((uint)uVar47 * -0x4a89 + (uint)uVar39 * -0x25f7 + (uint)uVar56 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar51._12_4_ =
               (int)((uint)uVar48 * -0x4a89 + (uint)uVar40 * -0x25f7 + (uint)uVar58 * 0x7080 +
                    0x2020000) >> 0x12;
          auVar52 = NEON_smax(auVar51,ZEXT216(0),4);
          auVar8._8_2_ = 0xff;
          auVar8._0_8_ = 0xff000000ff;
          auVar8._10_2_ = 0;
          auVar8._12_2_ = 0xff;
          auVar8._14_2_ = 0;
          auVar52 = NEON_smin(auVar52,auVar8,4);
          auVar53._0_4_ =
               (int)((uint)puVar17[0x11] * -0x5e34 + (uint)puVar17[0x10] * 0x7080 +
                     (uint)puVar17[0x12] * -0x124c + 0x2020000) >> 0x12;
          auVar53._4_4_ =
               (int)((uint)puVar17[0x15] * -0x5e34 + (uint)puVar17[0x14] * 0x7080 +
                     (uint)uVar74 * -0x124c + 0x2020000) >> 0x12;
          auVar53._8_4_ =
               (int)((uint)puVar17[0x19] * -0x5e34 + (uint)puVar17[0x18] * 0x7080 +
                     (uint)puVar17[0x1a] * -0x124c + 0x2020000) >> 0x12;
          auVar53._12_4_ =
               (int)((uint)puVar17[0x1d] * -0x5e34 + (uint)puVar17[0x1c] * 0x7080 +
                     (uint)puVar17[0x1e] * -0x124c + 0x2020000) >> 0x12;
          auVar42._0_4_ =
               (int)((uint)puVar17[0x31] * -0x5e34 +
                     ((uint)(CONCAT24(uVar41,CONCAT22(puVar17[0x30],uVar40)) >> 0x10) & 0xffff) *
                     0x7080 + (uint)puVar17[0x32] * -0x124c + 0x2020000) >> 0x12;
          auVar42._4_4_ =
               (int)((uint)puVar17[0x35] * -0x5e34 + (uint)uVar41 * 0x7080 + (uint)uVar59 * -0x124c
                    + 0x2020000) >> 0x12;
          auVar42._8_4_ =
               (int)((uint)puVar17[0x39] * -0x5e34 + (uint)puVar17[0x38] * 0x7080 +
                     (uint)puVar17[0x3a] * -0x124c + 0x2020000) >> 0x12;
          auVar42._12_4_ =
               (int)((uint)puVar17[0x3d] * -0x5e34 + (uint)puVar17[0x3c] * 0x7080 +
                     (uint)puVar17[0x3e] * -0x124c + 0x2020000) >> 0x12;
          auVar14._10_2_ = 0x2c28;
          auVar14._0_10_ = Var16;
          auVar14._12_2_ = 0x3430;
          auVar14._14_2_ = 0x3c38;
          auVar52 = a64_TBL(ZEXT816(0),auVar61,auVar34,auVar52,auVar35,auVar14);
          auVar61 = NEON_smax(auVar42,ZEXT216(0),4);
          auVar34 = NEON_smax(auVar53,ZEXT216(0),4);
          auVar9._8_2_ = 0xff;
          auVar9._0_8_ = 0xff000000ff;
          auVar9._10_2_ = 0;
          auVar9._12_2_ = 0xff;
          auVar9._14_2_ = 0;
          auVar35 = NEON_smin(auVar34,auVar9,4);
          auVar10._8_2_ = 0xff;
          auVar10._0_8_ = 0xff000000ff;
          auVar10._10_2_ = 0;
          auVar10._12_2_ = 0xff;
          auVar10._14_2_ = 0;
          auVar75 = NEON_smin(auVar61,auVar10,4);
          puVar29[1] = auVar52._8_8_;
          *puVar29 = auVar52._0_8_;
          auVar43._0_4_ =
               (int)((uint)uVar66 * -0x5e34 + (uint)uVar62 * 0x7080 + (uint)uVar70 * -0x124c +
                    0x2020000) >> 0x12;
          auVar43._4_4_ =
               (int)((uint)uVar67 * -0x5e34 + (uint)uVar63 * 0x7080 + (uint)uVar71 * -0x124c +
                    0x2020000) >> 0x12;
          auVar43._8_4_ =
               (int)((uint)uVar68 * -0x5e34 + (uint)uVar64 * 0x7080 + (uint)uVar72 * -0x124c +
                    0x2020000) >> 0x12;
          auVar43._12_4_ =
               (int)((uint)uVar69 * -0x5e34 + (uint)uVar65 * 0x7080 + (uint)uVar73 * -0x124c +
                    0x2020000) >> 0x12;
          auVar61 = NEON_smax(auVar43,ZEXT216(0),4);
          auVar11._8_2_ = 0xff;
          auVar11._0_8_ = 0xff000000ff;
          auVar11._10_2_ = 0;
          auVar11._12_2_ = 0xff;
          auVar11._14_2_ = 0;
          auVar34 = NEON_smin(auVar61,auVar11,4);
          auVar44._0_4_ =
               (int)((uint)uVar45 * -0x5e34 + (uint)uVar36 * 0x7080 + (uint)uVar54 * -0x124c +
                    0x2020000) >> 0x12;
          auVar44._4_4_ =
               (int)((uint)uVar46 * -0x5e34 + (uint)uVar38 * 0x7080 + (uint)uVar55 * -0x124c +
                    0x2020000) >> 0x12;
          auVar44._8_4_ =
               (int)((uint)uVar47 * -0x5e34 + (uint)uVar39 * 0x7080 + (uint)uVar56 * -0x124c +
                    0x2020000) >> 0x12;
          auVar44._12_4_ =
               (int)((uint)uVar48 * -0x5e34 + (uint)uVar40 * 0x7080 + (uint)uVar58 * -0x124c +
                    0x2020000) >> 0x12;
          auVar61 = NEON_smax(auVar44,ZEXT216(0),4);
          auVar12._8_2_ = 0xff;
          auVar12._0_8_ = 0xff000000ff;
          auVar12._10_2_ = 0;
          auVar12._12_2_ = 0xff;
          auVar12._14_2_ = 0;
          auVar61 = NEON_smin(auVar61,auVar12,4);
          auVar15._10_2_ = 0x2c28;
          auVar15._0_10_ = Var16;
          auVar15._12_2_ = 0x3430;
          auVar15._14_2_ = 0x3c38;
          auVar61 = a64_TBL(ZEXT816(0),auVar34,auVar35,auVar61,auVar75,auVar15);
          puVar27[1] = auVar61._8_8_;
          *puVar27 = auVar61._0_8_;
          lVar24 = lVar24 + -0x10;
          puVar27 = puVar27 + 2;
          puVar29 = puVar29 + 2;
          puVar17 = puVar17 + 0x40;
        } while (lVar24 != 0);
        if (uVar20 < 5) {
          puVar17 = param_1 + lVar25 * 4;
          uVar20 = lVar25 + uVar18;
          goto LAB_00249b8c;
        }
      }
      uVar5 = 4;
      if ((uVar1 & 3) != 0) {
        uVar5 = uVar1 & 3;
      }
      uVar20 = (uVar1 - uVar5) + uVar18;
      lVar24 = ~uVar22 + lVar25 + uVar5;
      puVar19 = (undefined4 *)(param_3 + lVar25 + uVar18);
      puVar28 = (undefined4 *)(param_2 + lVar25 + uVar18);
      puVar17 = param_1 + (uVar1 - uVar5) * 4;
      param_1 = param_1 + lVar25 * 4;
      do {
        uVar36 = *param_1;
        uVar41 = param_1[1];
        uVar48 = param_1[2];
        uVar38 = param_1[4];
        uVar45 = param_1[5];
        uVar54 = param_1[6];
        uVar39 = param_1[8];
        uVar46 = param_1[9];
        uVar55 = param_1[10];
        uVar40 = param_1[0xc];
        uVar47 = param_1[0xd];
        uVar56 = param_1[0xe];
        param_1 = param_1 + 0x10;
        auVar60._0_4_ =
             (int)((uint)uVar41 * -0x4a89 + (uint)uVar36 * -0x25f7 + (uint)uVar48 * 0x7080 +
                  0x2020000) >> 0x12;
        auVar60._4_4_ =
             (int)((uint)uVar45 * -0x4a89 + (uint)uVar38 * -0x25f7 + (uint)uVar54 * 0x7080 +
                  0x2020000) >> 0x12;
        auVar60._8_4_ =
             (int)((uint)uVar46 * -0x4a89 + (uint)uVar39 * -0x25f7 + (uint)uVar55 * 0x7080 +
                  0x2020000) >> 0x12;
        auVar60._12_4_ =
             (int)((uint)uVar47 * -0x4a89 + (uint)uVar40 * -0x25f7 + (uint)uVar56 * 0x7080 +
                  0x2020000) >> 0x12;
        auVar61 = NEON_smax(auVar60,ZEXT216(0),4);
        auVar6._8_2_ = 0xff;
        auVar6._0_8_ = 0xff000000ff;
        auVar6._10_2_ = 0;
        auVar6._12_2_ = 0xff;
        auVar6._14_2_ = 0;
        auVar61 = NEON_smin(auVar61,auVar6,4);
        *puVar28 = CONCAT13(auVar61[0xc],CONCAT12(auVar61[8],CONCAT11(auVar61[4],auVar61[0])));
        puVar28 = puVar28 + 1;
        auVar37._0_4_ =
             (int)((uint)uVar41 * -0x5e34 + (uint)uVar36 * 0x7080 + (uint)uVar48 * -0x124c +
                  0x2020000) >> 0x12;
        auVar37._4_4_ =
             (int)((uint)uVar45 * -0x5e34 + (uint)uVar38 * 0x7080 + (uint)uVar54 * -0x124c +
                  0x2020000) >> 0x12;
        auVar37._8_4_ =
             (int)((uint)uVar46 * -0x5e34 + (uint)uVar39 * 0x7080 + (uint)uVar55 * -0x124c +
                  0x2020000) >> 0x12;
        auVar37._12_4_ =
             (int)((uint)uVar47 * -0x5e34 + (uint)uVar40 * 0x7080 + (uint)uVar56 * -0x124c +
                  0x2020000) >> 0x12;
        auVar61 = NEON_smax(auVar37,ZEXT216(0),4);
        auVar7._8_2_ = 0xff;
        auVar7._0_8_ = 0xff000000ff;
        auVar7._10_2_ = 0;
        auVar7._12_2_ = 0xff;
        auVar7._14_2_ = 0;
        auVar61 = NEON_smin(auVar61,auVar7,4);
        *puVar19 = CONCAT13(auVar61[0xc],CONCAT12(auVar61[8],CONCAT11(auVar61[4],auVar61[0])));
        puVar19 = puVar19 + 1;
        lVar24 = lVar24 + 4;
      } while (lVar24 != 0);
    }
  }
LAB_00249b8c:
  puVar23 = (undefined1 *)(param_3 + uVar20);
  puVar26 = (undefined1 *)(param_2 + uVar20);
  do {
    uVar36 = *puVar17;
    uVar38 = puVar17[1];
    uVar39 = puVar17[2];
    iVar2 = (uint)uVar38 * -0x4a89 + (uint)uVar36 * -0x25f7 + (uint)uVar39 * 0x7080 + 0x2020000;
    uVar21 = iVar2 >> 0x12 & (iVar2 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar21) {
      uVar21 = 0xff;
    }
    *puVar26 = (char)uVar21;
    iVar2 = (uint)uVar38 * -0x5e34 + (uint)uVar36 * 0x7080 + (uint)uVar39 * -0x124c + 0x2020000;
    uVar21 = iVar2 >> 0x12 & (iVar2 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar21) {
      uVar21 = 0xff;
    }
    *puVar23 = (char)uVar21;
    puVar17 = puVar17 + 4;
    uVar21 = (int)uVar20 + 1;
    uVar20 = (ulong)uVar21;
    puVar23 = puVar23 + 1;
    puVar26 = puVar26 + 1;
  } while ((int)uVar21 < (int)param_4);
                    /* WARNING: Read-only address (ram,0x007eeb70) is written */
  return;
}



/* Entry: 00249c20; end: 0024a3ff;  */

void FUN_00249c20(void)

{
  uRam0000000000b6d418 = 0x249c60;
  uRam0000000000b6d410 = 0x249f64;
  uRam0000000000b6d408 = 0x24a110;
  return;
}



/* Entry: 0024a400; end: 0024ad8f;  */

void FUN_0024a400(byte *param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  ushort uVar25;
  uint uVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  byte *pbVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  short sVar39;
  int iVar40;
  undefined2 *puVar41;
  ushort *puVar42;
  int iVar43;
  undefined8 *puVar44;
  short *psVar45;
  ulong uVar46;
  uint uVar47;
  ulong uVar48;
  long lVar49;
  uint uVar50;
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  ulong uVar54;
  undefined1 (*pauVar55) [16];
  long lVar56;
  byte *pbVar57;
  ulong uVar58;
  uint uVar59;
  uint uVar60;
  int iVar61;
  uint uVar62;
  uint uVar63;
  ulong uVar64;
  ulong uVar65;
  undefined8 *puVar66;
  ushort *puVar67;
  ulong uVar68;
  ulong uVar69;
  long lVar70;
  long lVar71;
  ulong uVar72;
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  uint uVar76;
  ulong uVar77;
  ulong uVar78;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined8 uVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  char acStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_5 < 0x65) {
    puVar27 = (undefined8 *)0x0;
    if (((param_1 != (byte *)0x0) && (0 < (int)param_2)) && (0 < (int)param_3)) {
      uVar12 = (int)param_5 / 0x19;
      if ((int)param_2 <= ((int)param_5 / 0x19) * 2) {
        uVar12 = param_2 - 1 >> 1;
      }
      if ((int)param_3 <= (int)(uVar12 * 2)) {
        uVar12 = param_3 - 1 >> 1;
      }
      if (0 < (int)uVar12) {
        uVar17 = uVar12 * 2;
        uVar77 = (ulong)(param_2 * 2 * (uVar17 + 2));
        uVar21 = (ulong)param_2;
        lVar28 = 1;
        FUN_0024b4dc(1,uVar21 * 2 + uVar77 + 0xffe);
        puVar27 = (undefined8 *)0x0;
        if (lVar28 == 0) goto LAB_0024ad54;
        uVar76 = -uVar12;
        uVar78 = (ulong)param_2;
        uVar63 = uVar17 | 1;
        uVar48 = (ulong)(uVar63 * param_2);
        lVar2 = lVar28 + uVar48 * 2;
        lVar71 = lVar2 + uVar78 * -2;
        _bzero(lVar71);
        uVar47 = 0;
        uVar59 = 0;
        in_b0 = 0;
        in_register_00005001 = 0;
        in_register_00005002 = 0;
        acStack_170[0xe8] = '\0';
        acStack_170[0xe9] = '\0';
        acStack_170[0xea] = '\0';
        acStack_170[0xeb] = '\0';
        acStack_170[0xec] = '\0';
        acStack_170[0xed] = '\0';
        acStack_170[0xee] = '\0';
        acStack_170[0xef] = '\0';
        acStack_170[0xe0] = '\0';
        acStack_170[0xe1] = '\0';
        acStack_170[0xe2] = '\0';
        acStack_170[0xe3] = '\0';
        acStack_170[0xe4] = '\0';
        acStack_170[0xe5] = '\0';
        acStack_170[0xe6] = '\0';
        acStack_170[0xe7] = '\0';
        acStack_170[0xf8] = '\0';
        acStack_170[0xf9] = '\0';
        acStack_170[0xfa] = '\0';
        acStack_170[0xfb] = '\0';
        acStack_170[0xfc] = '\0';
        acStack_170[0xfd] = '\0';
        acStack_170[0xfe] = '\0';
        acStack_170[0xff] = '\0';
        acStack_170[0xf0] = '\0';
        acStack_170[0xf1] = '\0';
        acStack_170[0xf2] = '\0';
        acStack_170[0xf3] = '\0';
        acStack_170[0xf4] = '\0';
        acStack_170[0xf5] = '\0';
        acStack_170[0xf6] = '\0';
        acStack_170[0xf7] = '\0';
        puVar3 = (ushort *)(lVar28 + uVar77);
        acStack_170[200] = '\0';
        acStack_170[0xc9] = '\0';
        acStack_170[0xca] = '\0';
        acStack_170[0xcb] = '\0';
        acStack_170[0xcc] = '\0';
        acStack_170[0xcd] = '\0';
        acStack_170[0xce] = '\0';
        acStack_170[0xcf] = '\0';
        acStack_170[0xc0] = '\0';
        acStack_170[0xc1] = '\0';
        acStack_170[0xc2] = '\0';
        acStack_170[0xc3] = '\0';
        acStack_170[0xc4] = '\0';
        acStack_170[0xc5] = '\0';
        acStack_170[0xc6] = '\0';
        acStack_170[199] = '\0';
        acStack_170[0xd8] = '\0';
        acStack_170[0xd9] = '\0';
        acStack_170[0xda] = '\0';
        acStack_170[0xdb] = '\0';
        acStack_170[0xdc] = '\0';
        acStack_170[0xdd] = '\0';
        acStack_170[0xde] = '\0';
        acStack_170[0xdf] = '\0';
        acStack_170[0xd0] = '\0';
        acStack_170[0xd1] = '\0';
        acStack_170[0xd2] = '\0';
        acStack_170[0xd3] = '\0';
        acStack_170[0xd4] = '\0';
        acStack_170[0xd5] = '\0';
        acStack_170[0xd6] = '\0';
        acStack_170[0xd7] = '\0';
        acStack_170[0xa8] = '\0';
        acStack_170[0xa9] = '\0';
        acStack_170[0xaa] = '\0';
        acStack_170[0xab] = '\0';
        acStack_170[0xac] = '\0';
        acStack_170[0xad] = '\0';
        acStack_170[0xae] = '\0';
        acStack_170[0xaf] = '\0';
        acStack_170[0xa0] = '\0';
        acStack_170[0xa1] = '\0';
        acStack_170[0xa2] = '\0';
        acStack_170[0xa3] = '\0';
        acStack_170[0xa4] = '\0';
        acStack_170[0xa5] = '\0';
        acStack_170[0xa6] = '\0';
        acStack_170[0xa7] = '\0';
        acStack_170[0xb8] = '\0';
        acStack_170[0xb9] = '\0';
        acStack_170[0xba] = '\0';
        acStack_170[0xbb] = '\0';
        acStack_170[0xbc] = '\0';
        acStack_170[0xbd] = '\0';
        acStack_170[0xbe] = '\0';
        acStack_170[0xbf] = '\0';
        acStack_170[0xb0] = '\0';
        acStack_170[0xb1] = '\0';
        acStack_170[0xb2] = '\0';
        acStack_170[0xb3] = '\0';
        acStack_170[0xb4] = '\0';
        acStack_170[0xb5] = '\0';
        acStack_170[0xb6] = '\0';
        acStack_170[0xb7] = '\0';
        acStack_170[0x88] = '\0';
        acStack_170[0x89] = '\0';
        acStack_170[0x8a] = '\0';
        acStack_170[0x8b] = '\0';
        acStack_170[0x8c] = '\0';
        acStack_170[0x8d] = '\0';
        acStack_170[0x8e] = '\0';
        acStack_170[0x8f] = '\0';
        acStack_170[0x80] = '\0';
        acStack_170[0x81] = '\0';
        acStack_170[0x82] = '\0';
        acStack_170[0x83] = '\0';
        acStack_170[0x84] = '\0';
        acStack_170[0x85] = '\0';
        acStack_170[0x86] = '\0';
        acStack_170[0x87] = '\0';
        acStack_170[0x98] = '\0';
        acStack_170[0x99] = '\0';
        acStack_170[0x9a] = '\0';
        acStack_170[0x9b] = '\0';
        acStack_170[0x9c] = '\0';
        acStack_170[0x9d] = '\0';
        acStack_170[0x9e] = '\0';
        acStack_170[0x9f] = '\0';
        acStack_170[0x90] = '\0';
        acStack_170[0x91] = '\0';
        acStack_170[0x92] = '\0';
        acStack_170[0x93] = '\0';
        acStack_170[0x94] = '\0';
        acStack_170[0x95] = '\0';
        acStack_170[0x96] = '\0';
        acStack_170[0x97] = '\0';
        acStack_170[0x68] = '\0';
        acStack_170[0x69] = '\0';
        acStack_170[0x6a] = '\0';
        acStack_170[0x6b] = '\0';
        acStack_170[0x6c] = '\0';
        acStack_170[0x6d] = '\0';
        acStack_170[0x6e] = '\0';
        acStack_170[0x6f] = '\0';
        acStack_170[0x60] = '\0';
        acStack_170[0x61] = '\0';
        acStack_170[0x62] = '\0';
        acStack_170[99] = '\0';
        acStack_170[100] = '\0';
        acStack_170[0x65] = '\0';
        acStack_170[0x66] = '\0';
        acStack_170[0x67] = '\0';
        acStack_170[0x78] = '\0';
        acStack_170[0x79] = '\0';
        acStack_170[0x7a] = '\0';
        acStack_170[0x7b] = '\0';
        acStack_170[0x7c] = '\0';
        acStack_170[0x7d] = '\0';
        acStack_170[0x7e] = '\0';
        acStack_170[0x7f] = '\0';
        acStack_170[0x70] = '\0';
        acStack_170[0x71] = '\0';
        acStack_170[0x72] = '\0';
        acStack_170[0x73] = '\0';
        acStack_170[0x74] = '\0';
        acStack_170[0x75] = '\0';
        acStack_170[0x76] = '\0';
        acStack_170[0x77] = '\0';
        acStack_170[0x48] = '\0';
        acStack_170[0x49] = '\0';
        acStack_170[0x4a] = '\0';
        acStack_170[0x4b] = '\0';
        acStack_170[0x4c] = '\0';
        acStack_170[0x4d] = '\0';
        acStack_170[0x4e] = '\0';
        acStack_170[0x4f] = '\0';
        acStack_170[0x40] = '\0';
        acStack_170[0x41] = '\0';
        acStack_170[0x42] = '\0';
        acStack_170[0x43] = '\0';
        acStack_170[0x44] = '\0';
        acStack_170[0x45] = '\0';
        acStack_170[0x46] = '\0';
        acStack_170[0x47] = '\0';
        acStack_170[0x58] = '\0';
        acStack_170[0x59] = '\0';
        acStack_170[0x5a] = '\0';
        acStack_170[0x5b] = '\0';
        acStack_170[0x5c] = '\0';
        acStack_170[0x5d] = '\0';
        acStack_170[0x5e] = '\0';
        acStack_170[0x5f] = '\0';
        acStack_170[0x50] = '\0';
        acStack_170[0x51] = '\0';
        acStack_170[0x52] = '\0';
        acStack_170[0x53] = '\0';
        acStack_170[0x54] = '\0';
        acStack_170[0x55] = '\0';
        acStack_170[0x56] = '\0';
        acStack_170[0x57] = '\0';
        acStack_170[0x28] = '\0';
        acStack_170[0x29] = '\0';
        acStack_170[0x2a] = '\0';
        acStack_170[0x2b] = '\0';
        acStack_170[0x2c] = '\0';
        acStack_170[0x2d] = '\0';
        acStack_170[0x2e] = '\0';
        acStack_170[0x2f] = '\0';
        acStack_170[0x20] = '\0';
        acStack_170[0x21] = '\0';
        acStack_170[0x22] = '\0';
        acStack_170[0x23] = '\0';
        acStack_170[0x24] = '\0';
        acStack_170[0x25] = '\0';
        acStack_170[0x26] = '\0';
        acStack_170[0x27] = '\0';
        acStack_170[0x38] = '\0';
        acStack_170[0x39] = '\0';
        acStack_170[0x3a] = '\0';
        acStack_170[0x3b] = '\0';
        acStack_170[0x3c] = '\0';
        acStack_170[0x3d] = '\0';
        acStack_170[0x3e] = '\0';
        acStack_170[0x3f] = '\0';
        acStack_170[0x30] = '\0';
        acStack_170[0x31] = '\0';
        acStack_170[0x32] = '\0';
        acStack_170[0x33] = '\0';
        acStack_170[0x34] = '\0';
        acStack_170[0x35] = '\0';
        acStack_170[0x36] = '\0';
        acStack_170[0x37] = '\0';
        lVar49 = (long)param_4;
        uVar50 = 0xff;
        acStack_170[8] = '\0';
        acStack_170[9] = '\0';
        acStack_170[10] = '\0';
        acStack_170[0xb] = '\0';
        acStack_170[0xc] = '\0';
        acStack_170[0xd] = '\0';
        acStack_170[0xe] = '\0';
        acStack_170[0xf] = '\0';
        acStack_170[0] = '\0';
        acStack_170[1] = '\0';
        acStack_170[2] = '\0';
        acStack_170[3] = '\0';
        acStack_170[4] = '\0';
        acStack_170[5] = '\0';
        acStack_170[6] = '\0';
        acStack_170[7] = '\0';
        acStack_170[0x18] = '\0';
        acStack_170[0x19] = '\0';
        acStack_170[0x1a] = '\0';
        acStack_170[0x1b] = '\0';
        acStack_170[0x1c] = '\0';
        acStack_170[0x1d] = '\0';
        acStack_170[0x1e] = '\0';
        acStack_170[0x1f] = '\0';
        acStack_170[0x10] = '\0';
        acStack_170[0x11] = '\0';
        acStack_170[0x12] = '\0';
        acStack_170[0x13] = '\0';
        acStack_170[0x14] = '\0';
        acStack_170[0x15] = '\0';
        acStack_170[0x16] = '\0';
        acStack_170[0x17] = '\0';
        pbVar30 = param_1;
        uVar34 = 0xff;
        uVar33 = 0;
        do {
          uVar51 = 0;
          uVar62 = uVar34;
          uVar60 = uVar33;
          do {
            bVar16 = pbVar30[uVar51];
            uVar36 = (uint)bVar16;
            uVar13 = uVar36;
            uVar14 = uVar36;
            if (uVar34 <= bVar16) {
              uVar13 = uVar62;
              uVar14 = uVar50;
            }
            uVar50 = uVar14;
            uVar62 = (uint)bVar16;
            if (bVar16 <= uVar34) {
              uVar34 = uVar62;
            }
            uVar14 = uVar62;
            uVar26 = uVar36;
            if (uVar62 <= uVar33) {
              uVar14 = uVar60;
              uVar26 = uVar47;
            }
            uVar47 = uVar26;
            if (uVar33 == uVar36 || uVar33 < uVar62) {
              uVar33 = uVar62;
            }
            acStack_170[bVar16] = '\x01';
            uVar51 = uVar51 + 1;
            uVar62 = uVar13;
            uVar60 = uVar14;
          } while (uVar78 != uVar51);
          pbVar30 = pbVar30 + lVar49;
          uVar59 = uVar59 + 1;
          uVar34 = uVar13;
          uVar33 = uVar14;
        } while (uVar59 != param_3);
        iVar61 = 0;
        lVar31 = 0;
        puVar4 = puVar3 + uVar21;
        iVar40 = uVar14 - uVar13;
        uVar59 = 0xffffffff;
        do {
          iVar43 = (uint)lVar31 - uVar59;
          if (iVar40 <= iVar43) {
            iVar43 = iVar40;
          }
          if ((uVar59 & 0x80000000) != 0) {
            iVar43 = iVar40;
          }
          if (acStack_170[lVar31] != '\0') {
            iVar61 = iVar61 + 1;
            uVar59 = (uint)lVar31;
            iVar40 = iVar43;
          }
          lVar31 = lVar31 + 1;
        } while (lVar31 != 0x100);
        lVar31 = 0;
        iVar43 = iVar40 * 4;
        iVar35 = iVar40 * 0xc >> 2;
        iVar18 = iVar43 - iVar35;
        iVar35 = iVar35 * (iVar43 + -1);
        lVar37 = 0x7fc;
        do {
          uVar51 = lVar31 + 1;
          if ((long)((ulong)(uint)(iVar40 * 0xc) << 0x20) >> 0x22 < (long)uVar51) {
            if ((long)uVar51 < (long)iVar43) {
              uVar59 = 0;
              if (iVar18 != 0) {
                uVar59 = iVar35 / iVar18;
              }
              uVar51 = (ulong)uVar59;
            }
            else {
              uVar51 = 0;
            }
          }
          uVar25 = (ushort)(uVar51 >> 2);
          puVar4[lVar31 + 0x400] = uVar25;
          *(ushort *)((long)puVar4 + lVar37) = -uVar25;
          lVar31 = lVar31 + 1;
          lVar37 = lVar37 + -2;
          iVar35 = iVar35 - (iVar40 * 0xc >> 2);
        } while (lVar31 != 0x3ff);
        puVar4[0x3ff] = 0;
        if ((2 < iVar61) && ((int)uVar76 < (int)param_3)) {
          uVar59 = uVar12 + 1;
          uVar74 = (ulong)uVar59;
          lVar19 = (ulong)uVar12 * 2;
          uVar34 = ~uVar12;
          uVar38 = (ulong)(int)uVar59;
          lVar32 = (long)(int)(param_2 - uVar12);
          uVar51 = lVar2 + lVar19;
          puVar5 = (ushort *)(lVar2 + -2 + uVar78 * 2);
          iVar61 = param_2 * 2 + -2;
          lVar31 = lVar28 + uVar48 * 2;
          lVar37 = lVar32;
          if (lVar32 <= (long)(uVar38 + 1)) {
            lVar37 = uVar38 + 1;
          }
          uVar33 = 0;
          if (uVar63 * uVar63 != 0) {
            uVar33 = 0x40000 / (uVar63 * uVar63);
          }
          uVar52 = -(ulong)(uVar59 >> 0x1f) & 0xfffffffe00000000 | uVar74 << 1;
          lVar6 = uVar52 + uVar77;
          uVar64 = lVar37 - uVar38;
          lVar7 = lVar28 + uVar77;
          uVar8 = lVar7 + uVar74 * 2;
          lVar9 = lVar19 + uVar48 * 2;
          lVar10 = lVar28 + lVar9;
          lVar53 = lVar10 + -2;
          uVar72 = uVar74 & 0xfffffff0;
          in_b0 = (undefined1)uVar33;
          in_register_00005001 = (undefined1)(uVar33 >> 8);
          in_register_00005002 = (undefined1)(uVar33 >> 0x10);
          uVar75 = uVar74 & 0xfffffffc;
          uVar65 = uVar64 & 0xfffffffffffffff0;
          pbVar30 = param_1;
          lVar15 = lVar28;
          do {
            lVar70 = lVar15;
            uVar54 = 0;
            sVar39 = 0;
            do {
              sVar39 = sVar39 + (ushort)param_1[uVar54];
              sVar22 = *(short *)(lVar71 + uVar54 * 2) + sVar39;
              *(short *)(lVar2 + uVar54 * 2) = sVar22 - *(short *)(lVar70 + uVar54 * 2);
              *(short *)(lVar70 + uVar54 * 2) = sVar22;
              uVar54 = uVar54 + 1;
            } while (uVar78 != uVar54);
            lVar71 = lVar70 + uVar78 * 2;
            lVar15 = lVar28;
            if (lVar71 != lVar2) {
              lVar15 = lVar71;
            }
            lVar71 = lVar49;
            if ((int)(param_3 - 1) <= (int)uVar76 || 0x7fffffff < uVar76) {
              lVar71 = 0;
            }
            if ((int)uVar12 <= (int)uVar76) {
              if ((uVar12 < 3 || uVar51 < uVar51 - uVar17) ||
                  (puVar3 < (ushort *)(lVar31 + 2 + lVar19) &&
                   lVar9 + uVar74 * -2 + lVar28 + 2 < uVar8 ||
                  puVar3 < (ushort *)(lVar53 + uVar74 * 2) && (ulong)(lVar2 + -2 + lVar19) < uVar8))
              {
                uVar54 = 0;
LAB_0024aa44:
                lVar56 = uVar74 - uVar54;
                puVar41 = (undefined2 *)(lVar7 + uVar54 * 2);
                puVar42 = (ushort *)(lVar10 + uVar54 * -2);
                puVar67 = (ushort *)(lVar53 + uVar54 * 2);
                do {
                  *puVar41 = (short)(uVar33 * ((uint)*puVar42 + (uint)*puVar67 & 0xffff) >> 0x10);
                  lVar56 = lVar56 + -1;
                  puVar41 = puVar41 + 1;
                  puVar42 = puVar42 + -1;
                  puVar67 = puVar67 + 1;
                } while (lVar56 != 0);
              }
              else {
                puVar27 = (undefined8 *)(lVar7 + 0x10);
                psVar45 = (short *)(lVar10 + 0xe);
                pauVar55 = (undefined1 (*) [16])(lVar10 + -0xe);
                uVar54 = uVar72;
                if (uVar12 < 0xf) {
                  uVar54 = 0;
LAB_0024a9e8:
                  lVar56 = uVar54 - uVar75;
                  puVar27 = (undefined8 *)(lVar7 + uVar54 * 2);
                  puVar44 = (undefined8 *)(lVar10 + -6 + uVar54 * -2);
                  puVar66 = (undefined8 *)(lVar53 + uVar54 * 2);
                  do {
                    uVar20 = *puVar66;
                    uVar79 = NEON_rev64(*puVar44,2);
                    *puVar27 = CONCAT26((short)(uVar33 * (ushort)((short)((ulong)uVar79 >> 0x30) +
                                                                 (short)((ulong)uVar20 >> 0x30)) >>
                                               0x10),
                                        CONCAT24((short)(uVar33 * (ushort)((short)((ulong)uVar79 >>
                                                                                  0x20) +
                                                                          (short)((ulong)uVar20 >>
                                                                                 0x20)) >> 0x10),
                                                 CONCAT22((short)(uVar33 * (ushort)((short)((ulong)
                                                  uVar79 >> 0x10) + (short)((ulong)uVar20 >> 0x10))
                                                  >> 0x10),(short)(uVar33 * (ushort)((short)uVar79 +
                                                                                    (short)uVar20)
                                                                  >> 0x10))));
                    lVar56 = lVar56 + 4;
                    puVar27 = puVar27 + 1;
                    puVar44 = puVar44 + -1;
                    puVar66 = puVar66 + 1;
                  } while (lVar56 != 0);
                  uVar54 = uVar75;
                  if (uVar75 != uVar74) goto LAB_0024aa44;
                }
                else {
                  do {
                    uVar79 = *(undefined8 *)(psVar45 + -4);
                    uVar20 = *(undefined8 *)(psVar45 + -8);
                    auVar80 = NEON_rev64(*pauVar55,2);
                    auVar81 = NEON_ext(auVar80,auVar80,8,1);
                    auVar80 = NEON_rev64(pauVar55[-1],2);
                    auVar82 = NEON_ext(auVar80,auVar80,8,1);
                    auVar80._0_8_ =
                         CONCAT26((short)(uVar33 * (ushort)(auVar82._6_2_ + psVar45[3]) >> 0x10),
                                  CONCAT24((short)(uVar33 * (ushort)(auVar82._4_2_ + psVar45[2]) >>
                                                  0x10),
                                           CONCAT22((short)(uVar33 * (ushort)(auVar82._2_2_ +
                                                                             psVar45[1]) >> 0x10),
                                                    (short)(uVar33 * (ushort)(auVar82._0_2_ +
                                                                             *psVar45) >> 0x10))));
                    auVar80._8_2_ = (short)(uVar33 * (ushort)(auVar82._8_2_ + psVar45[4]) >> 0x10);
                    auVar80._10_2_ = (short)(uVar33 * (ushort)(auVar82._10_2_ + psVar45[5]) >> 0x10)
                    ;
                    auVar80._14_2_ =
                         (undefined2)(uVar33 * (ushort)(auVar82._14_2_ + psVar45[7]) >> 0x10);
                    auVar80._12_2_ = (short)(uVar33 * (ushort)(auVar82._12_2_ + psVar45[6]) >> 0x10)
                    ;
                    puVar27[-1] = CONCAT26((short)(uVar33 * (ushort)(auVar81._14_2_ +
                                                                    (short)((ulong)uVar79 >> 0x30))
                                                  >> 0x10),
                                           CONCAT24((short)(uVar33 * (ushort)(auVar81._12_2_ +
                                                                             (short)((ulong)uVar79
                                                                                    >> 0x20)) >>
                                                           0x10),
                                                    CONCAT22((short)(uVar33 * (ushort)(auVar81.
                                                  _10_2_ + (short)((ulong)uVar79 >> 0x10)) >> 0x10),
                                                  (short)(uVar33 * (ushort)(auVar81._8_2_ +
                                                                           (short)uVar79) >> 0x10)))
                                          );
                    puVar27[-2] = CONCAT26((short)(uVar33 * (ushort)(auVar81._6_2_ +
                                                                    (short)((ulong)uVar20 >> 0x30))
                                                  >> 0x10),
                                           CONCAT24((short)(uVar33 * (ushort)(auVar81._4_2_ +
                                                                             (short)((ulong)uVar20
                                                                                    >> 0x20)) >>
                                                           0x10),
                                                    CONCAT22((short)(uVar33 * (ushort)(auVar81._2_2_
                                                                                      + (short)((
                                                  ulong)uVar20 >> 0x10)) >> 0x10),
                                                  (short)(uVar33 * (ushort)(auVar81._0_2_ +
                                                                           (short)uVar20) >> 0x10)))
                                          );
                    puVar27[1] = auVar80._8_8_;
                    *puVar27 = auVar80._0_8_;
                    uVar54 = uVar54 - 0x10;
                    puVar27 = puVar27 + 4;
                    psVar45 = psVar45 + 0x10;
                    pauVar55 = pauVar55 + -2;
                  } while (uVar54 != 0);
                  if (uVar72 != uVar74) {
                    uVar54 = uVar72;
                    if ((uVar59 & 0xc) == 0) goto LAB_0024aa44;
                    goto LAB_0024a9e8;
                  }
                }
              }
              uVar54 = uVar74;
              if ((int)uVar59 < (int)(param_2 - uVar12)) {
                uVar54 = uVar38;
                if ((0xf < uVar64 && 0xffffffff7fffffff < uVar38 - lVar37) &&
                    (0x1f < uVar77 + (uVar12 + uVar48) * -2 && 0x1f < lVar6 + uVar48 * -2)) {
                  lVar56 = 0;
                  puVar27 = (undefined8 *)(lVar6 + lVar28 + 0x10);
                  psVar45 = (short *)(lVar9 + uVar52 + lVar28 + 0x10);
                  uVar54 = uVar65;
                  do {
                    uVar79 = *(undefined8 *)(psVar45 + -4);
                    uVar20 = *(undefined8 *)(psVar45 + -8);
                    psVar11 = (short *)(lVar2 + (lVar56 >> 0x1f));
                    sVar39 = *psVar11;
                    sVar22 = psVar11[1];
                    sVar23 = psVar11[2];
                    sVar24 = psVar11[3];
                    auVar81._0_8_ =
                         CONCAT26((short)(uVar33 * (ushort)(psVar45[3] - psVar11[0xb]) >> 0x10),
                                  CONCAT24((short)(uVar33 * (ushort)(psVar45[2] - psVar11[10]) >>
                                                  0x10),
                                           CONCAT22((short)(uVar33 * (ushort)(psVar45[1] -
                                                                             psVar11[9]) >> 0x10),
                                                    (short)(uVar33 * (ushort)(*psVar45 - psVar11[8])
                                                           >> 0x10))));
                    auVar81._8_2_ = (short)(uVar33 * (ushort)(psVar45[4] - psVar11[0xc]) >> 0x10);
                    auVar81._10_2_ = (short)(uVar33 * (ushort)(psVar45[5] - psVar11[0xd]) >> 0x10);
                    auVar81._14_2_ =
                         (undefined2)(uVar33 * (ushort)(psVar45[7] - psVar11[0xf]) >> 0x10);
                    auVar81._12_2_ = (short)(uVar33 * (ushort)(psVar45[6] - psVar11[0xe]) >> 0x10);
                    puVar27[-1] = CONCAT26((short)(uVar33 * (ushort)((short)((ulong)uVar79 >> 0x30)
                                                                    - psVar11[7]) >> 0x10),
                                           CONCAT24((short)(uVar33 * (ushort)((short)((ulong)uVar79
                                                                                     >> 0x20) -
                                                                             psVar11[6]) >> 0x10),
                                                    CONCAT22((short)(uVar33 * (ushort)((short)((
                                                  ulong)uVar79 >> 0x10) - psVar11[5]) >> 0x10),
                                                  (short)(uVar33 * (ushort)((short)uVar79 -
                                                                           psVar11[4]) >> 0x10))));
                    puVar27[-2] = CONCAT26((short)(uVar33 * (ushort)((short)((ulong)uVar20 >> 0x30)
                                                                    - sVar24) >> 0x10),
                                           CONCAT24((short)(uVar33 * (ushort)((short)((ulong)uVar20
                                                                                     >> 0x20) -
                                                                             sVar23) >> 0x10),
                                                    CONCAT22((short)(uVar33 * (ushort)((short)((
                                                  ulong)uVar20 >> 0x10) - sVar22) >> 0x10),
                                                  (short)(uVar33 * (ushort)((short)uVar20 - sVar39)
                                                         >> 0x10))));
                    puVar27[1] = auVar81._8_8_;
                    *puVar27 = auVar81._0_8_;
                    lVar56 = lVar56 + 0x1000000000;
                    psVar45 = psVar45 + 0x10;
                    puVar27 = puVar27 + 4;
                    uVar54 = uVar54 - 0x10;
                  } while (uVar54 != 0);
                  uVar54 = uVar65 + uVar38;
                  if (uVar64 == uVar65) goto LAB_0024ab40;
                }
                do {
                  puVar3[uVar54] =
                       (ushort)(uVar33 * ((uint)*(ushort *)(uVar51 + uVar54 * 2) -
                                          (uint)*(ushort *)
                                                 (lVar2 + (long)(int)(uVar34 + (int)uVar54) * 2) &
                                         0xffff) >> 0x10);
                  uVar54 = uVar54 + 1;
                } while ((long)uVar54 < lVar32);
              }
LAB_0024ab40:
              iVar40 = (int)uVar54;
              puVar42 = puVar3;
              uVar54 = uVar78;
              pbVar57 = pbVar30;
              if (iVar40 < (int)param_2) {
                uVar46 = (ulong)iVar40;
                uVar73 = uVar78 - uVar46;
                if (0x17 < uVar73) {
                  uVar69 = ~uVar46 + uVar78;
                  uVar63 = iVar61 - (uVar12 + iVar40);
                  uVar58 = (ulong)uVar63;
                  uVar68 = -(ulong)(uVar63 >> 0x1f) & 0xfffffffe00000000 | uVar58 << 1;
                  uVar29 = lVar31 + uVar68;
                  if (((uVar29 + uVar69 * -2 <= uVar29) &&
                      ((int)(uVar63 - (int)uVar69) <= (int)uVar63)) &&
                     ((uVar62 = iVar40 + uVar34, (int)uVar62 <= (int)(uVar62 + (int)uVar69) &&
                      (uVar69 >> 0x20 == 0)))) {
                    puVar67 = puVar3 + uVar46;
                    if (((puVar4 <= puVar5 || (ushort *)(lVar31 + uVar21 * 2) <= puVar67) &&
                        ((ushort *)(lVar28 + ((uVar78 + uVar48 + (long)(int)uVar62) - uVar46) * 2)
                         <= puVar67 || puVar4 <= (ushort *)(lVar31 + (long)(int)uVar62 * 2))) &&
                       ((ushort *)(lVar31 + 2 + uVar68) <= puVar67 ||
                        puVar4 <= (ushort *)
                                  (lVar28 + uVar21 * -2 + 2 +
                                  (uVar48 + uVar46 + (long)(int)uVar63) * 2))) {
                      uVar29 = uVar73 & 0xfffffffffffffff8;
                      uVar46 = uVar29 + uVar46;
                      sVar39 = *puVar5 * 2;
                      uVar69 = uVar29;
                      do {
                        auVar80 = NEON_rev64(*(undefined1 (*) [16])
                                              (lVar2 + -0xe +
                                              (-(uVar58 >> 0x1f) & 0xfffffffe00000000 | uVar58 << 1)
                                              ),2);
                        auVar80 = NEON_ext(auVar80,auVar80,8,1);
                        psVar45 = (short *)(lVar2 + (-(ulong)(uVar62 >> 0x1f) & 0xfffffffe00000000 |
                                                    (ulong)uVar62 << 1));
                        auVar82._0_8_ =
                             CONCAT26((short)(uVar33 * (ushort)(sVar39 - (auVar80._6_2_ + psVar45[3]
                                                                         )) >> 0x10),
                                      CONCAT24((short)(uVar33 * (ushort)(sVar39 - (auVar80._4_2_ +
                                                                                  psVar45[2])) >>
                                                      0x10),
                                               CONCAT22((short)(uVar33 * (ushort)(sVar39 - (auVar80.
                                                  _2_2_ + psVar45[1])) >> 0x10),
                                                  (short)(uVar33 * (ushort)(sVar39 - (auVar80._0_2_
                                                                                     + *psVar45)) >>
                                                         0x10))));
                        auVar82._8_2_ =
                             (short)(uVar33 * (ushort)(sVar39 - (auVar80._8_2_ + psVar45[4])) >>
                                    0x10);
                        auVar82._10_2_ =
                             (short)(uVar33 * (ushort)(sVar39 - (auVar80._10_2_ + psVar45[5])) >>
                                    0x10);
                        auVar82._14_2_ =
                             (undefined2)
                             (uVar33 * (ushort)(sVar39 - (auVar80._14_2_ + psVar45[7])) >> 0x10);
                        auVar82._12_2_ =
                             (short)(uVar33 * (ushort)(sVar39 - (auVar80._12_2_ + psVar45[6])) >>
                                    0x10);
                        *(long *)(puVar67 + 4) = auVar82._8_8_;
                        *(undefined8 *)puVar67 = auVar82._0_8_;
                        uVar62 = uVar62 + 8;
                        uVar58 = (ulong)((int)uVar58 - 8);
                        uVar69 = uVar69 - 8;
                        puVar67 = puVar67 + 8;
                      } while (uVar69 != 0);
                      if (uVar73 == uVar29) goto LAB_0024abe4;
                    }
                  }
                }
                lVar56 = uVar78 - uVar46;
                iVar40 = uVar34 + (int)uVar46;
                iVar43 = iVar61 - (uVar12 + (int)uVar46);
                puVar41 = (undefined2 *)(lVar7 + uVar46 * 2);
                do {
                  *puVar41 = (short)(uVar33 * ((uint)*puVar5 * 2 -
                                               ((uint)*(ushort *)(lVar2 + (long)iVar43 * 2) +
                                               (uint)*(ushort *)(lVar2 + (long)iVar40 * 2)) & 0xffff
                                              ) >> 0x10);
                  iVar40 = iVar40 + 1;
                  iVar43 = iVar43 + -1;
                  lVar56 = lVar56 + -1;
                  puVar41 = puVar41 + 1;
                } while (lVar56 != 0);
              }
LAB_0024abe4:
              do {
                uVar63 = (uint)*pbVar57;
                if (*pbVar57 < uVar47 && uVar50 < uVar63) {
                  uVar63 = (int)(short)(puVar4 + 0x3ff)[(int)((uint)*puVar42 + uVar63 * -4)] +
                           uVar63;
                  uVar63 = uVar63 & ((int)uVar63 >> 0x1f ^ 0xffffffffU);
                  if (0xfe < (int)uVar63) {
                    uVar63 = 0xff;
                  }
                  *pbVar57 = (byte)uVar63;
                }
                uVar54 = uVar54 - 1;
                puVar42 = puVar42 + 1;
                pbVar57 = pbVar57 + 1;
              } while (uVar54 != 0);
              pbVar30 = pbVar30 + lVar49;
            }
            param_1 = param_1 + lVar71;
            uVar76 = uVar76 + 1;
            lVar71 = lVar70;
          } while (uVar76 != param_3);
        }
        in_register_00005003 = 0;
        func_0x0024b520();
      }
      puVar27 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
  }
  else {
    puVar27 = (undefined8 *)0x0;
  }
LAB_0024ad54:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar27[0x16] = 0x28264d4244cab16f;
  puVar27[0x15] = 0x73e502e356b41583;
  puVar27[0x18] = 0xd3ad40b1d6ab6fb;
  puVar27[0x17] = 0xa50ebed73baaefb;
  puVar27[0x1a] = 0x5181e5f077ce6b95;
  puVar27[0x19] = 0x2b081e8335db3b68;
  *(undefined8 *)((long)puVar27 + 0xdc) = 0x27e5ed3c009f9494;
  *(undefined8 *)((long)puVar27 + 0xd4) = 0x78853bbc5181e5f0;
  puVar27[0xe] = 0x496b153c4fc0d9c6;
  puVar27[0xd] = 0x4730a7ed6e990e83;
  puVar27[0x10] = 0x26d7cb1c73990b32;
  puVar27[0xf] = 0x541afb0c4f1403fa;
  puVar27[0x12] = 0x6425ccdd75762f2a;
  puVar27[0x11] = 0x2cbb77d86fcc3706;
  puVar27[0x14] = 0x141ebf67220414a8;
  puVar27[0x13] = 0xa7d871524b35461;
  puVar27[6] = 0xd7ec1da4a290000;
  puVar27[5] = 0x5c55028964fcf397;
  puVar27[8] = 0x38d38c694e19ca72;
  puVar27[7] = 0x5492577d5940b7ab;
  puVar27[10] = 0x5abb2c325437f652;
  puVar27[9] = 0x32a1755f0c01ee65;
  puVar27[0xc] = 0x7563cce2685feeda;
  puVar27[0xb] = 0x73f533e70faa57b1;
  puVar27[2] = 0x1c88626a775faccb;
  puVar27[1] = 0x3b318860de15230;
  puVar27[4] = 0x49ddb84b4a85fef8;
  puVar27[3] = 0x14b3b82868385c55;
  bVar1 = NAN((float)CONCAT13(in_register_00005003,
                              CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))));
  iVar61 = 0x100;
  if (!bVar1 && (float)CONCAT13(in_register_00005003,
                                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))
                == 1.0 ||
      (!bVar1 &&
      (float)CONCAT13(in_register_00005003,
                      CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) < 1.0) !=
      bVar1) {
    iVar61 = (int)((float)CONCAT13(in_register_00005003,
                                   CONCAT12(in_register_00005002,
                                            CONCAT11(in_register_00005001,in_b0))) * 256.0);
  }
  *puVar27 = 0x1f00000000;
  iVar40 = 0;
  if (NAN((float)CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))) ||
      0.0 <= (float)CONCAT13(in_register_00005003,
                             CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))) {
    iVar40 = iVar61;
  }
  *(int *)((long)puVar27 + 0xe4) = iVar40;
  return;
}



/* Entry: 0024ad90; end: 0024ae1f;  */

void FUN_0024ad90(float param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  param_2[0x16] = 0x28264d4244cab16f;
  param_2[0x15] = 0x73e502e356b41583;
  param_2[0x18] = 0xd3ad40b1d6ab6fb;
  param_2[0x17] = 0xa50ebed73baaefb;
  param_2[0x1a] = 0x5181e5f077ce6b95;
  param_2[0x19] = 0x2b081e8335db3b68;
  *(undefined8 *)((long)param_2 + 0xdc) = 0x27e5ed3c009f9494;
  *(undefined8 *)((long)param_2 + 0xd4) = 0x78853bbc5181e5f0;
  param_2[0xe] = 0x496b153c4fc0d9c6;
  param_2[0xd] = 0x4730a7ed6e990e83;
  param_2[0x10] = 0x26d7cb1c73990b32;
  param_2[0xf] = 0x541afb0c4f1403fa;
  param_2[0x12] = 0x6425ccdd75762f2a;
  param_2[0x11] = 0x2cbb77d86fcc3706;
  param_2[0x14] = 0x141ebf67220414a8;
  param_2[0x13] = 0xa7d871524b35461;
  param_2[6] = 0xd7ec1da4a290000;
  param_2[5] = 0x5c55028964fcf397;
  param_2[8] = 0x38d38c694e19ca72;
  param_2[7] = 0x5492577d5940b7ab;
  param_2[10] = 0x5abb2c325437f652;
  param_2[9] = 0x32a1755f0c01ee65;
  param_2[0xc] = 0x7563cce2685feeda;
  param_2[0xb] = 0x73f533e70faa57b1;
  param_2[2] = 0x1c88626a775faccb;
  param_2[1] = 0x3b318860de15230;
  param_2[4] = 0x49ddb84b4a85fef8;
  param_2[3] = 0x14b3b82868385c55;
  iVar1 = 0x100;
  if (param_1 <= 1.0) {
    iVar1 = (int)(param_1 * 256.0);
  }
  *param_2 = 0x1f00000000;
  iVar2 = 0;
  if (0.0 <= param_1) {
    iVar2 = iVar1;
  }
  *(int *)((long)param_2 + 0xe4) = iVar2;
  return;
}



/* Entry: 0024ae20; end: 0024aefb;  */

void FUN_0024ae20(uint *param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8,long param_9)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  param_1[0xd] = param_5;
  param_1[0xe] = param_6;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = param_4;
  param_1[0x14] = param_7;
  param_1[1] = (uint)((int)param_3 < (int)param_6);
  param_1[2] = param_8;
  *param_1 = (uint)((int)param_2 < (int)param_5);
  uVar1 = param_2 - 1;
  uVar3 = param_5 - 1;
  if ((int)param_5 <= (int)param_2) {
    uVar1 = param_5;
    uVar3 = param_2;
  }
  param_1[9] = uVar3;
  param_1[10] = uVar1;
  if ((int)param_5 <= (int)param_2) {
    uVar1 = 0;
    if ((long)(int)param_5 != 0) {
      uVar1 = (uint)(0x100000000 / (ulong)(long)(int)param_5);
    }
    param_1[3] = uVar1;
  }
  uVar1 = param_3 - ((int)param_3 < (int)param_6);
  uVar5 = param_6 - ((int)param_3 < (int)param_6);
  param_1[7] = uVar1;
  param_1[8] = uVar5;
  if ((int)param_3 < (int)param_6) {
    param_1[6] = uVar5;
    uVar5 = uVar3;
  }
  else {
    uVar2 = 0;
    if ((long)(int)(uVar1 * uVar3) != 0) {
      uVar2 = ((ulong)param_6 << 0x20) / (ulong)(long)(int)(uVar1 * uVar3);
    }
    if (0xffffffff < uVar2) {
      uVar2 = 0;
    }
    param_1[5] = (uint)uVar2;
    param_1[6] = uVar1;
  }
  uVar1 = 0;
  if ((long)(int)uVar5 != 0) {
    uVar1 = (uint)(0x100000000 / (ulong)(long)(int)uVar5);
  }
  param_1[4] = uVar1;
  param_8 = param_8 * param_5;
  *(long *)(param_1 + 0x16) = param_9;
  *(long *)(param_1 + 0x18) = param_9 + (long)(int)param_8 * 4;
  _bzero(param_9,-(ulong)((param_8 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                 (ulong)(param_8 * 2) << 2);
  iVar4 = 0xaf8500;
  _pthread_mutex_lock();
  if (iVar4 == 0) {
    if (PTR_LOOP_00af84f8 != PTR_DAT_00af8418) {
      uRam0000000000b6d298 = 0x22f858;
      uRam0000000000b6d2a0 = 0x22f910;
      func_0x0023ea80();
    }
    PTR_LOOP_00af84f8 = PTR_DAT_00af8418;
                    /* WARNING: Could not recover jumptable at 0x0077ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_0099a598)(0xaf8500);
    return;
  }
  return;
}



/* Entry: 0024aefc; end: 0024af87;  */

undefined8 FUN_0024aefc(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_3;
  iVar2 = *param_4;
  if (iVar1 == 0) {
    iVar1 = 0;
    if ((long)param_2 != 0) {
      iVar1 = (int)((ulong)(((long)((ulong)(uint)(param_2 - (param_2 >> 0x1f)) << 0x20) >> 0x21) +
                           (long)iVar2 * (long)param_1) / (ulong)(long)param_2);
    }
  }
  if (iVar2 == 0) {
    iVar2 = 0;
    if ((long)param_1 != 0) {
      iVar2 = (int)((ulong)(((long)((ulong)(uint)(param_1 - (param_1 >> 0x1f)) << 0x20) >> 0x21) +
                           (long)iVar1 * (long)param_2) / (ulong)(long)param_1);
    }
    if (0 < iVar1 && 0 < iVar2) goto LAB_0024af58;
  }
  else if (0 < iVar1 && 0 < iVar2) {
LAB_0024af58:
    *param_3 = iVar1;
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



/* Entry: 0024af88; end: 0024b0ab;  */

ulong FUN_0024af88(long param_1,ulong param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if ((int)(uint)param_2 < 1) {
    return 0;
  }
  uVar5 = 0;
  do {
    if ((*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 0x18) < 1)) {
      return uVar5;
    }
    if (*(int *)(param_1 + 4) != 0) {
      auVar6 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x58),
                        *(undefined1 (*) [16])(param_1 + 0x58),8,1);
      *(long *)(param_1 + 0x60) = auVar6._8_8_;
      *(long *)(param_1 + 0x58) = auVar6._0_8_;
    }
    func_0x0022f9c0(param_1,param_3);
    if ((*(int *)(param_1 + 4) == 0) && (0 < *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8))) {
      lVar4 = 0;
      lVar2 = *(long *)(param_1 + 0x58);
      lVar3 = *(long *)(param_1 + 0x60);
      do {
        *(int *)(lVar2 + lVar4 * 4) = *(int *)(lVar2 + lVar4 * 4) + *(int *)(lVar3 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (long)*(int *)(param_1 + 0x34) * (long)*(int *)(param_1 + 8));
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    param_3 = param_3 + param_4;
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20);
  } while (uVar1 != (uint)param_2);
  return param_2;
}



/* Entry: 0024b0ac; end: 0024b11b;  */

int FUN_0024b0ac(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x40)) {
    return 0;
  }
  iVar1 = 0;
  do {
    if (0 < *(int *)(param_1 + 0x18)) {
      return iVar1;
    }
    FUN_0022f9e4(param_1);
    iVar1 = iVar1 + 1;
  } while (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38));
  return iVar1;
}



/* Entry: 0024b11c; end: 0024b13b;  */

undefined ** FUN_0024b11c(void)

{
  return &PTR_DAT_00af8660;
}



/* Entry: 0024b13c; end: 0024b427;  */

bool FUN_0024b13c(long *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 5) = 0;
  bVar1 = true;
  if ((int)param_1[1] != 1) {
    if ((int)param_1[1] == 0) {
      lVar2 = 1;
      func_0x0024b500(1,0x78);
      *param_1 = lVar2;
      bVar1 = false;
      if (lVar2 != 0) {
        lVar3 = lVar2;
        _pthread_mutex_init();
        if ((int)lVar3 == 0) {
          lVar3 = lVar2 + 0x40;
          _pthread_cond_init(lVar3,0);
          if ((int)lVar3 == 0) {
            _pthread_mutex_lock(lVar2);
            lVar3 = lVar2 + 0x70;
            _pthread_create(lVar3,0,FUN_0024b428,param_1);
            if ((int)lVar3 == 0) {
              *(undefined4 *)(param_1 + 1) = 1;
              _pthread_mutex_unlock(lVar2);
              return true;
            }
            _pthread_mutex_unlock(lVar2);
            _pthread_mutex_destroy(lVar2);
            _pthread_cond_destroy(lVar2 + 0x40);
          }
          else {
            _pthread_mutex_destroy(lVar2);
          }
        }
        func_0x0024b520(lVar2);
        *param_1 = 0;
        return false;
      }
    }
    else {
      lVar2 = *param_1;
      if (lVar2 == 0) {
        return true;
      }
      _pthread_mutex_lock(lVar2);
      if (1 < *(uint *)(param_1 + 1)) {
        do {
          _pthread_cond_wait(lVar2 + 0x40,lVar2);
        } while ((int)param_1[1] != 1);
      }
      _pthread_mutex_unlock(lVar2);
      bVar1 = (int)param_1[5] == 0;
    }
  }
  return bVar1;
}



/* Entry: 0024b428; end: 0024b4db;  */

undefined8 FUN_0024b428(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  _pthread_mutex_lock(lVar2);
  iVar1 = (int)param_1[1];
  while( true ) {
    while (iVar1 == 1) {
      _pthread_cond_wait(lVar2 + 0x40,lVar2);
      iVar1 = (int)param_1[1];
    }
    if (iVar1 == 0) break;
    if (iVar1 == 2) {
      (*(code *)PTR_DAT_00af8680)(param_1);
      *(undefined4 *)(param_1 + 1) = 1;
    }
    _pthread_cond_signal(lVar2 + 0x40);
    _pthread_mutex_unlock(lVar2);
    _pthread_mutex_lock(lVar2);
    iVar1 = (int)param_1[1];
  }
  _pthread_cond_signal(lVar2 + 0x40);
  _pthread_mutex_unlock(lVar2);
  return 0;
}



/* Entry: 0024b4dc; end: 0024b523;  */

long FUN_0024b4dc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = 0x400000000 / param_1;
    }
    if (uVar1 < param_2) {
      return 0;
    }
  }
  lVar2 = param_2 * param_1;
                    /* WARNING: Could not recover jumptable at 0x0077a828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_0099a3d8)(lVar2);
  return lVar2;
}



/* Entry: 0024b524; end: 0024b58f;  */

void FUN_0024b524(long param_1,int param_2,long param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  
  if (0 < param_6) {
    uVar1 = param_6 + 1;
    do {
      _memcpy(param_3,param_1,(long)param_5);
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



/* Entry: 0024b590; end: 00262e4b;  */

void FUN_0024b590(void)

{
                    /* WARNING: Could not recover jumptable at 0x0024b624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x24b628)();
  return;
}



/* Entry: 00262e4c; end: 0026328f;  */

undefined8 * FUN_00262e4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_009da960;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 00263290; end: 0026329b;  */

void FUN_00263290(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  _abort();
  _abort();
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_009da960;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return;
}



/* Entry: 0026329c; end: 0026352b;  */

void FUN_0026329c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  _abort();
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_009da960;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return;
}



/* Entry: 0026352c; end: 0027b633;  */

void FUN_0026352c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002635a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2635a8)();
  return;
}



/* Entry: 0027b634; end: 0027dfdb;  */

void FUN_0027b634(void)

{
                    /* WARNING: Could not recover jumptable at 0x0027b6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x27b6a8)();
  return;
}



/* Entry: 0027dfdc; end: 00280367;  */

void FUN_0027dfdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0027e04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x27e050)();
  return;
}



/* Entry: 00280368; end: 0028146b;  */

void FUN_00280368(void)

{
                    /* WARNING: Could not recover jumptable at 0x002803cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2803d0)();
  return;
}



/* Entry: 0028146c; end: 00282e63;  */

void FUN_0028146c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002814c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2814cc)();
  return;
}



/* Entry: 00282e64; end: 00287f83;  */

void FUN_00282e64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00282ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x282ed8)();
  return;
}



/* Entry: 00287f84; end: 002889d7;  */

void FUN_00287f84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00287fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x287fe8)();
  return;
}



/* Entry: 002889d8; end: 0028b77f;  */

void FUN_002889d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00288a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x288a54)();
  return;
}



/* Entry: 0028b780; end: 0028d037;  */

void FUN_0028b780(void)

{
                    /* WARNING: Could not recover jumptable at 0x0028b7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x28b800)();
  return;
}



/* Entry: 0028d038; end: 0028efcb;  */

void FUN_0028d038(void)

{
                    /* WARNING: Could not recover jumptable at 0x0028d08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x28d090)();
  return;
}



/* Entry: 0028efcc; end: 0028f22f;  */

void FUN_0028efcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0028f010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x28f014)();
  return;
}



/* Entry: 0028f230; end: 0028f2d7;  */

/* WARNING: Removing unreachable block (ram,0x0028f258) */

void FUN_0028f230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_6c [4];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = 0;
  puStack_20 = &uStack_28;
  uVar1 = 0x4edd1c3f8a9584d7;
  uStack_28 = param_1;
  FUN_0028fd08(0x4edd1c3f8a9584d7,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_48 = FUN_0028f2d8;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_60 = &uStack_68;
  uStack_68 = uVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_0028fbc8(0xdc2a4b5edb265046,auStack_6c,&puStack_60);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0028f3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x28f3c8)();
  return;
}



/* Entry: 0028f2d8; end: 0028f37b;  */

void FUN_0028f2d8(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_0028fbc8(0xdc2a4b5edb265046,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0028f3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x28f3c8)();
  return;
}



/* Entry: 0028f37c; end: 0028fbc7;  */

void FUN_0028f37c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0028f3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x28f3c8)();
  return;
}



/* Entry: 0028fbc8; end: 0028fd07;  */

void FUN_0028fbc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0028fbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x28fbf8)();
  return;
}



/* Entry: 0028fd08; end: 00290317;  */

void FUN_0028fd08(void)

{
                    /* WARNING: Could not recover jumptable at 0x0028fd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x28fd48)();
  return;
}



/* Entry: 00290318; end: 00290383;  */

void FUN_00290318(void)

{
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  FUN_0028fbc8(0x2947bdebdbc7a448,auStack_1c,auStack_18);
  return;
}



/* Entry: 00290384; end: 0029056f;  */

void FUN_00290384(void)

{
                    /* WARNING: Could not recover jumptable at 0x002903d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2903dc)();
  return;
}



/* Entry: 00290570; end: 00290663;  */

void FUN_00290570(void)

{
                    /* WARNING: Could not recover jumptable at 0x002905b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2905bc)();
  return;
}



/* Entry: 00290664; end: 002908c3;  */

void FUN_00290664(void)

{
                    /* WARNING: Could not recover jumptable at 0x002906a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2906a4)();
  return;
}



/* Entry: 002908c4; end: 00290a53;  */

void FUN_002908c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029090c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x290910)();
  return;
}



/* Entry: 00290a54; end: 00290a87;  */

long FUN_00290a54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x10) = lVar1;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 00290a88; end: 00292f7b;  */

void FUN_00290a88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00290af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x290af8)();
  return;
}



/* Entry: 00292f7c; end: 00293317;  */

void FUN_00292f7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00292fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x292fc0)();
  return;
}



/* Entry: 00293318; end: 00293323;  */

void FUN_00293318(void)

{
  _abort();
  _abort();
                    /* WARNING: Could not recover jumptable at 0x0029335c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x293360)();
  return;
}



/* Entry: 00293324; end: 0029332f;  */

void FUN_00293324(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x0029335c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x293360)();
  return;
}



/* Entry: 00293330; end: 00293437;  */

void FUN_00293330(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029335c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x293360)();
  return;
}



/* Entry: 00293438; end: 002934a3;  */

/* WARNING: Removing unreachable block (ram,0x00293450) */

void FUN_00293438(void)

{
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  FUN_00293330(0xed9fb78bcf5556c2,auStack_1c,auStack_18);
  return;
}



/* Entry: 002934a4; end: 0029634b;  */

void FUN_002934a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00293500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x293504)();
  return;
}



/* Entry: 0029634c; end: 00296433;  */

undefined8 * FUN_0029634c(undefined8 *param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xf) != '\x01') {
    return param_1;
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[9]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar1 < '\0') {
    __ZdlPv(*param_1);
    return param_1;
  }
  return param_1;
}



/* Entry: 00296434; end: 00296503;  */

void FUN_00296434(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 **ppuVar4;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined1 *puStack_150;
  long lStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 *puStack_110;
  undefined4 **ppuStack_108;
  undefined1 uStack_f9;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined1 **ppuStack_d8;
  undefined4 ***pppuStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  uStack_f9 = (undefined1)param_4;
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_88 = 1;
  puStack_48 = &uStack_74;
  puStack_40 = &uStack_70;
  puStack_38 = &uStack_68;
  puStack_30 = &uStack_60;
  puStack_28 = &uStack_58;
  puStack_20 = &uStack_50;
  puVar2 = auStack_80;
  ppuVar4 = &puStack_48;
  uStack_74 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  FUN_0029725c(0xd8a23fa1c15715fa);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_00296504;
  lStack_a8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_128 = 1;
  puStack_e0 = auStack_118;
  ppuStack_d8 = &puStack_110;
  pppuStack_d0 = &ppuStack_108;
  puStack_c8 = &uStack_f9;
  puStack_c0 = &uStack_f8;
  puStack_b8 = &uStack_f0;
  puStack_b0 = &uStack_e8;
  puStack_110 = puVar2;
  ppuStack_108 = ppuVar4;
  uStack_f8 = param_5;
  uStack_f0 = param_6;
  uStack_e8 = param_7;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_002986b0(0xe7a7a298644fe560,auStack_120,&puStack_e0);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_138 = FUN_002965e4;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_150 = auStack_158;
  puVar3 = &uStack_160;
  ppuStack_140 = &puStack_a0;
  FUN_002986b0(0x795d375fe909e3c8,puVar3,&puStack_150);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return;
  }
  ___stack_chk_fail(uStack_160);
  uVar1 = uStack_160;
  __Unwind_Resume();
  if ((uint)((iRam0000000000af8698 * iRam0000000000af8698 * 4 + 4) * 0x286bca1b) < 0xd79435f)
  goto LAB_0029670c;
  while (FUN_00460cc0(uVar1,puVar3),
        (uint)((iRam0000000000af8698 + iRam0000000000af8698 * iRam0000000000af8698 + 7) * 0x781948b1
              ) < 0x3291620) {
LAB_0029670c:
    FUN_00460cc0(uVar1,puVar3);
  }
  return;
}



/* Entry: 00296504; end: 002965e3;  */

void FUN_00296504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined1 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_98 = 1;
  puStack_50 = &uStack_88;
  puStack_48 = &uStack_80;
  puStack_40 = &uStack_78;
  puStack_38 = &uStack_69;
  puStack_30 = &uStack_68;
  puStack_28 = &uStack_60;
  puStack_20 = &uStack_58;
  uStack_88 = param_1;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_69 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_58 = param_7;
  FUN_002986b0(0xe7a7a298644fe560,auStack_90,&puStack_50);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_a8 = FUN_002965e4;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_c0 = auStack_c8;
  puVar2 = &uStack_d0;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_002986b0(0x795d375fe909e3c8,puVar2,&puStack_c0);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return;
  }
  ___stack_chk_fail(uStack_d0);
  uVar1 = uStack_d0;
  __Unwind_Resume();
  if ((uint)((iRam0000000000af8698 * iRam0000000000af8698 * 4 + 4) * 0x286bca1b) < 0xd79435f)
  goto LAB_0029670c;
  while (FUN_00460cc0(uVar1,puVar2),
        (uint)((iRam0000000000af8698 + iRam0000000000af8698 * iRam0000000000af8698 + 7) * 0x781948b1
              ) < 0x3291620) {
LAB_0029670c:
    FUN_00460cc0(uVar1,puVar2);
  }
  return;
}



/* Entry: 002965e4; end: 0029668f;  */

void FUN_002965e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  puVar2 = &uStack_30;
  uStack_28 = param_1;
  FUN_002986b0(0x795d375fe909e3c8,puVar2,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail(uStack_30);
  uVar1 = uStack_30;
  __Unwind_Resume();
  if ((uint)((iRam0000000000af8698 * iRam0000000000af8698 * 4 + 4) * 0x286bca1b) < 0xd79435f)
  goto LAB_0029670c;
  while (FUN_00460cc0(uVar1,puVar2),
        (uint)((iRam0000000000af8698 + iRam0000000000af8698 * iRam0000000000af8698 + 7) * 0x781948b1
              ) < 0x3291620) {
LAB_0029670c:
    FUN_00460cc0(uVar1,puVar2);
  }
  return;
}



/* Entry: 00296690; end: 0029672b;  */

void FUN_00296690(undefined8 param_1,undefined8 param_2)

{
  if ((uint)((iRam0000000000af8698 * iRam0000000000af8698 * 4 + 4) * 0x286bca1b) < 0xd79435f)
  goto LAB_0029670c;
  while( true ) {
    FUN_00460cc0(param_1,param_2);
    if (0x329161f <
        (uint)((iRam0000000000af8698 + iRam0000000000af8698 * iRam0000000000af8698 + 7) * 0x781948b1
              )) break;
LAB_0029670c:
    FUN_00460cc0(param_1,param_2);
  }
  return;
}



/* Entry: 0029672c; end: 002967b3;  */

undefined8 * FUN_0029672c(undefined8 *param_1)

{
  char cVar1;
  
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[9]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar1 < '\0') {
    __ZdlPv(*param_1);
    return param_1;
  }
  return param_1;
}



/* Entry: 002967b4; end: 00296d5b;  */

void FUN_002967b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x002967f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2967fc)();
  return;
}



/* Entry: 00296d5c; end: 00296def;  */

undefined8 * FUN_00296d5c(undefined8 *param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xf) != '\x01') {
    return param_1;
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[9]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar1 < '\0') {
    __ZdlPv(*param_1);
    return param_1;
  }
  return param_1;
}



/* Entry: 00296df0; end: 002971d3;  */

undefined8 * FUN_00296df0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(param_1,*param_2,param_2[1]);
  }
  else {
    if ((uRam0000000000af8698 + 1 + (~uRam0000000000af8698 | 1) == 0) &&
       ((uRam0000000000af8698 & 1) != 0)) goto LAB_00296ecc;
    while( true ) {
      if (((uRam0000000000af8698 * uRam0000000000af8698 * 2 | 2) -
          (uRam0000000000af8698 * uRam0000000000af8698 ^ 1)) * -0x49249249 < 0x24924925)
      goto LAB_00296ea4;
      while( true ) {
        uVar5 = param_2[1];
        uVar4 = *param_2;
        param_1[2] = param_2[2];
        param_1[1] = uVar5;
        *param_1 = uVar4;
        if ((iRam0000000000af8690 < 10) || ((uRam0000000000af8698 * ~uRam0000000000af8698 & 1) == 0)
           ) break;
LAB_00296ea4:
        uVar5 = param_2[1];
        uVar4 = *param_2;
        param_1[2] = param_2[2];
        param_1[1] = uVar5;
        *param_1 = uVar4;
      }
      uVar1 = iRam0000000000af8690 * iRam0000000000af8690;
      if (~uVar1 + uVar1 * 8 != uVar1) break;
LAB_00296ecc:
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
    }
  }
  uVar1 = uRam0000000000af8698;
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    FUN_002971d4(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar3 = ~uRam0000000000af8698;
    if ((uRam0000000000af8698 + 1 + (uVar3 | 1) == 0) && ((uRam0000000000af8698 & 1) != 0))
    goto LAB_00296fa8;
    while( true ) {
      if (((uVar1 * uVar1 * 2 | 2) - (uVar1 * uVar1 ^ 1)) * -0x49249249 < 0x24924925)
      goto LAB_00296f80;
      while( true ) {
        uVar5 = param_2[4];
        uVar4 = param_2[3];
        param_1[5] = param_2[5];
        param_1[4] = uVar5;
        param_1[3] = uVar4;
        if (((uVar1 * uVar3 & 1) == 0) || (iRam0000000000af8690 < 10)) break;
LAB_00296f80:
        uVar5 = param_2[4];
        uVar4 = param_2[3];
        param_1[5] = param_2[5];
        param_1[4] = uVar5;
        param_1[3] = uVar4;
      }
      uVar2 = iRam0000000000af8690 * iRam0000000000af8690;
      if (~uVar2 + uVar2 * 8 != uVar2) break;
LAB_00296fa8:
      uVar5 = param_2[4];
      uVar4 = param_2[3];
      param_1[5] = param_2[5];
      param_1[4] = uVar5;
      param_1[3] = uVar4;
    }
  }
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  uVar1 = uRam0000000000af8698;
  if (*(char *)((long)param_2 + 0x5f) < '\0') {
    FUN_002971d4(param_1 + 9,param_2[9],param_2[10]);
  }
  else {
    uVar3 = ~uRam0000000000af8698;
    if ((uRam0000000000af8698 + 1 + (uVar3 | 1) == 0) && ((uRam0000000000af8698 & 1) != 0))
    goto LAB_00297090;
    while( true ) {
      if (((uVar1 * uVar1 * 2 | 2) - (uVar1 * uVar1 ^ 1)) * -0x49249249 < 0x24924925)
      goto LAB_00297068;
      while( true ) {
        uVar5 = param_2[10];
        uVar4 = param_2[9];
        param_1[0xb] = param_2[0xb];
        param_1[10] = uVar5;
        param_1[9] = uVar4;
        if (((uVar1 * uVar3 & 1) == 0) || (iRam0000000000af8690 < 10)) break;
LAB_00297068:
        uVar5 = param_2[10];
        uVar4 = param_2[9];
        param_1[0xb] = param_2[0xb];
        param_1[10] = uVar5;
        param_1[9] = uVar4;
      }
      uVar2 = iRam0000000000af8690 * iRam0000000000af8690;
      if (~uVar2 + uVar2 * 8 != uVar2) break;
LAB_00297090:
      uVar5 = param_2[10];
      uVar4 = param_2[9];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar5;
      param_1[9] = uVar4;
    }
  }
  uVar1 = uRam0000000000af8698;
  if (*(char *)((long)param_2 + 0x77) < '\0') {
    FUN_002971d4(param_1 + 0xc,param_2[0xc],param_2[0xd]);
  }
  else {
    uVar3 = ~uRam0000000000af8698;
    if ((uRam0000000000af8698 + 1 + (uVar3 | 1) == 0) && ((uRam0000000000af8698 & 1) != 0))
    goto LAB_002971ac;
    while( true ) {
      if (((uVar1 * uVar1 * 2 | 2) - (uVar1 * uVar1 ^ 1)) * -0x49249249 < 0x24924925)
      goto LAB_00297184;
      while( true ) {
        uVar5 = param_2[0xd];
        uVar4 = param_2[0xc];
        param_1[0xe] = param_2[0xe];
        param_1[0xd] = uVar5;
        param_1[0xc] = uVar4;
        if (((uVar1 * uVar3 & 1) == 0) || (iRam0000000000af8690 < 10)) break;
LAB_00297184:
        uVar5 = param_2[0xd];
        uVar4 = param_2[0xc];
        param_1[0xe] = param_2[0xe];
        param_1[0xd] = uVar5;
        param_1[0xc] = uVar4;
      }
      uVar2 = iRam0000000000af8690 * iRam0000000000af8690;
      if (~uVar2 + uVar2 * 8 != uVar2) break;
LAB_002971ac:
      uVar5 = param_2[0xd];
      uVar4 = param_2[0xc];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
    }
  }
  return param_1;
}



/* Entry: 002971d4; end: 0029725b;  */

void FUN_002971d4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
  }
  else {
    if (0x7ffffffffffffff7 < param_3) {
      FUN_0026329c();
                    /* WARNING: Could not recover jumptable at 0x002972c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(undefined *)0x2972c4)();
      return;
    }
    uVar1 = 0x19;
    if ((param_3 | 7) != 0x17) {
      uVar1 = (param_3 | 7) + 1;
    }
    uVar2 = uVar1;
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = uVar1 | 0x8000000000000000;
    *param_1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_0099a400)();
  return;
}



/* Entry: 0029725c; end: 002986af;  */

void FUN_0029725c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002972c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2972c4)();
  return;
}



/* Entry: 002986b0; end: 0029cc67;  */

void FUN_002986b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00298714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x298718)();
  return;
}



/* Entry: 0029cc68; end: 0029cce7;  */

/* WARNING: Removing unreachable block (ram,0x0029cc84) */

void FUN_0029cc68(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x11;
  _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0029cce8; end: 0029cd8f;  */

/* WARNING: Removing unreachable block (ram,0x0029cd10) */
/* WARNING: Removing unreachable block (ram,0x0029cdac) */

ulong FUN_0029cce8(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uVar1 = 0xf6cd3247c0b3bdf1;
  uStack_28 = param_1;
  FUN_0029cee8(0xf6cd3247c0b3bdf1,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return uVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(0xaf8730);
  uVar1 = (ulong)uRam0000000000af8728;
  __ZNSt3__15mutex6unlockEv(0xaf8730);
  return uVar1;
}



/* Entry: 0029cd90; end: 0029ce07;  */

/* WARNING: Removing unreachable block (ram,0x0029cdac) */

undefined4 FUN_0029cd90(void)

{
  undefined4 uVar1;
  
  __ZNSt3__15mutex4lockEv(0xaf8730);
  uVar1 = uRam0000000000af8728;
  __ZNSt3__15mutex6unlockEv(0xaf8730);
  return uVar1;
}



/* Entry: 0029ce08; end: 0029cee7;  */

void FUN_0029ce08(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029ce34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29ce38)();
  return;
}



/* Entry: 0029cee8; end: 0029d02b;  */

void FUN_0029cee8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029cf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29cf1c)();
  return;
}



/* Entry: 0029d02c; end: 0029d097;  */

/* WARNING: Removing unreachable block (ram,0x0029d044) */

void FUN_0029d02c(void)

{
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  FUN_0029ce08(0x8ad1d2633cfa9638,auStack_1c,auStack_18);
  return;
}



/* Entry: 0029d098; end: 0029d567;  */

void FUN_0029d098(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029d0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29d0e4)();
  return;
}



/* Entry: 0029d568; end: 0029d5d3;  */

void FUN_0029d568(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = uRam0000000000b5dc68;
  uVar2 = uRam0000000000b5dc60;
  uVar1 = uRam0000000000b5dc50;
  param_1[5] = uRam0000000000b5dc58;
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = uRam0000000000b5dc70;
  param_1[9] = uRam0000000000b5dc78;
  param_1[8] = uVar1;
  param_1[10] = uRam0000000000b5dc80;
  uVar3 = uRam0000000000b5dc48;
  uVar2 = uRam0000000000b5dc40;
  uVar1 = uRam0000000000b5dc30;
  param_1[1] = uRam0000000000b5dc38;
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 0029d5d4; end: 0029d6ff;  */

void FUN_0029d5d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029d5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29d5fc)();
  return;
}



/* Entry: 0029d700; end: 0029de17;  */

/* WARNING: Removing unreachable block (ram,0x0029d72c) */

void FUN_0029d700(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029d744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29d748)();
  return;
}



/* Entry: 0029de18; end: 0029debf;  */

void FUN_0029de18(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029de34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29de38)();
  return;
}



/* Entry: 0029dec0; end: 0029df73;  */

void FUN_0029dec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029def4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29def8)();
  return;
}



/* Entry: 0029df74; end: 0029ea4b;  */

void FUN_0029df74(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029dfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29dfd8)();
  return;
}



/* Entry: 0029ea4c; end: 0029eb63;  */

void FUN_0029ea4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029ea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29ea9c)();
  return;
}



/* Entry: 0029eb64; end: 0029f117;  */

void FUN_0029eb64(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029eb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29eb90)();
  return;
}



/* Entry: 0029f118; end: 0029f27b;  */

void FUN_0029f118(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029f13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29f140)();
  return;
}


