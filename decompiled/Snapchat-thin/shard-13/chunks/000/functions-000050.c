/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109eddd68; end: 109ede1d7;  */

void FUN_109eddd68(byte *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  short sVar6;
  uint3 uVar7;
  uint uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  short sVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  undefined6 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  short sVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  bool bVar48;
  double *pdVar49;
  float *pfVar50;
  double *pdVar51;
  undefined2 *puVar52;
  byte bVar53;
  byte bVar54;
  float fVar55;
  undefined7 uVar56;
  ulong uVar57;
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  float fVar75;
  ulong uVar76;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar82;
  float fVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  float fVar90;
  ulong uVar91;
  undefined1 auVar93 [16];
  ulong uVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  byte bVar102;
  byte bVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  byte bVar114;
  byte bVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  byte bVar118;
  byte bVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 uVar126;
  undefined1 uVar127;
  undefined1 uVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  byte bVar132;
  byte bVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  byte bVar136;
  byte bVar137;
  undefined1 auVar58 [12];
  undefined1 auVar60 [16];
  undefined1 auVar65 [12];
  undefined1 auVar68 [16];
  undefined1 auVar77 [12];
  undefined1 auVar81 [16];
  undefined1 auVar92 [12];
  undefined1 auVar94 [16];
  
  pdVar49 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar51 = (double *)param_3[1];
    if (pdVar49[0xf] == pdVar51[0xf]) {
      uVar56 = CONCAT16(-(pdVar49[10] == pdVar51[10]),
                        (uint6)CONCAT14(-(pdVar49[9] == pdVar51[9]),
                                        (uint)CONCAT12(-(pdVar49[8] == pdVar51[8]),
                                                       (ushort)(byte)-(pdVar49[7] == pdVar51[7]))));
      uVar57 = (ulong)CONCAT16(-(pdVar49[10] == pdVar51[10]),
                               (uint6)(uint5)CONCAT34((int3)((uint7)uVar56 >> 0x20),
                                                      (uint)(uint3)CONCAT52((int5)((uint7)uVar56 >>
                                                                                  0x10),
                                                                            (ushort)(byte)-(pdVar49[
                                                  7] == pdVar51[7])))) &
               CONCAT26(-(ushort)(pdVar49[6] == pdVar51[6]),
                        CONCAT24(-(ushort)(pdVar49[5] == pdVar51[5]),
                                 CONCAT22(-(ushort)(pdVar49[4] == pdVar51[4]),
                                          -(ushort)(pdVar49[3] == pdVar51[3]))));
      bVar53 = NEON_uminv(CONCAT17(-((char)((pdVar49[0xe] == pdVar51[0xe]) * -0x80) < '\0'),
                                   CONCAT16(-((char)((pdVar49[0xd] == pdVar51[0xd]) * -0x80) < '\0')
                                            ,CONCAT15(-((char)((pdVar49[0xc] == pdVar51[0xc]) *
                                                              -0x80) < '\0'),
                                                      CONCAT14(-((char)((pdVar49[0xb] ==
                                                                        pdVar51[0xb]) * -0x80) <
                                                                '\0'),CONCAT13(-((char)((char)(
                                                  uVar57 >> 0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar57 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar57 >>
                                                                                          0x10) << 7
                                                                                   ) < '\0'),
                                                                           -((char)((char)uVar57 <<
                                                                                   7) < '\0'))))))))
                          ,1);
      bVar54 = 0;
      if (*pdVar49 == *pdVar51) {
        bVar54 = (pdVar49[1] == pdVar51[1] && pdVar49[2] == pdVar51[2]) & bVar53;
      }
      goto LAB_109ede1cc;
    }
  }
  else {
    if (param_2 != 0x20) {
      sVar6 = *(short *)(pdVar49 + 0xb);
      uVar69 = (undefined1)*(undefined2 *)(pdVar49 + 10);
      uVar70 = (undefined1)((ushort)*(undefined2 *)(pdVar49 + 10) >> 8);
      uVar71 = (undefined1)*(undefined2 *)(pdVar49 + 9);
      uVar72 = (undefined1)((ushort)*(undefined2 *)(pdVar49 + 9) >> 8);
      uVar73 = (undefined1)*(undefined2 *)(pdVar49 + 8);
      uVar74 = (undefined1)((ushort)*(undefined2 *)(pdVar49 + 8) >> 8);
      puVar52 = (undefined2 *)param_3[1];
      uVar1 = CONCAT12(uVar69,sVar6);
      uVar2 = CONCAT13(uVar70,uVar1);
      uVar3 = CONCAT15(uVar72,CONCAT14(uVar71,uVar2));
      sVar11 = *(short *)(pdVar49 + 3);
      uVar84 = (undefined1)*(undefined2 *)(pdVar49 + 2);
      uVar85 = (undefined1)((ushort)*(undefined2 *)(pdVar49 + 2) >> 8);
      uVar86 = (undefined1)*(undefined2 *)(pdVar49 + 1);
      uVar87 = (undefined1)((ushort)*(undefined2 *)(pdVar49 + 1) >> 8);
      uVar88 = (undefined1)*(undefined2 *)pdVar49;
      uVar89 = (undefined1)((ushort)*(undefined2 *)pdVar49 >> 8);
      uVar7 = CONCAT12(uVar84,sVar11);
      uVar8 = CONCAT13(uVar85,uVar7);
      uVar9 = CONCAT15(uVar87,CONCAT14(uVar86,uVar8));
      uVar95 = CONCAT44((uint)*(ushort *)(pdVar49 + 0xe) << 0xd,
                        (uint)*(ushort *)(pdVar49 + 0xf) << 0xd) & 0xfffffff0fffffff;
      uVar57 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar76 = CONCAT44((uint)*(ushort *)(pdVar49 + 6) << 0xd,(uint)*(ushort *)(pdVar49 + 7) << 0xd)
               & 0xfffffff0fffffff;
      uVar91 = CONCAT44((uVar8 >> 0x10) << 0xd,(uVar7 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      auVar93._0_4_ = (float)uVar91 * 5.192297e+33;
      auVar93._4_4_ = (float)(uVar91 >> 0x20) * 5.192297e+33;
      auVar93._8_4_ = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar93._12_4_ =
           (float)(((ushort)(CONCAT17(uVar89,CONCAT16(uVar88,uVar9)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar99._0_4_ = (float)uVar76 * 5.192297e+33;
      auVar99._4_4_ = (float)(uVar76 >> 0x20) * 5.192297e+33;
      auVar99._8_4_ = (float)((*(ushort *)(pdVar49 + 5) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar99._12_4_ = (float)((*(ushort *)(pdVar49 + 4) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar100._0_4_ = (float)uVar57 * 5.192297e+33;
      auVar100._4_4_ = (float)(uVar57 >> 0x20) * 5.192297e+33;
      auVar100._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar100._12_4_ =
           (float)(((ushort)(CONCAT17(uVar74,CONCAT16(uVar73,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar96._0_4_ = (float)uVar95 * 5.192297e+33;
      auVar96._4_4_ = (float)(uVar95 >> 0x20) * 5.192297e+33;
      auVar96._8_4_ = (float)((*(ushort *)(pdVar49 + 0xd) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar96._12_4_ = (float)((*(ushort *)(pdVar49 + 0xc) & 0x7fff) << 0xd) * 5.192297e+33;
      iVar14 = -(uint)(65536.0 <= auVar96._4_4_);
      iVar15 = -(uint)(65536.0 <= auVar96._8_4_);
      iVar16 = -(uint)(65536.0 <= auVar96._12_4_);
      iVar18 = -(uint)(65536.0 <= auVar100._4_4_);
      iVar19 = -(uint)(65536.0 <= auVar100._8_4_);
      iVar20 = -(uint)(65536.0 <= auVar100._12_4_);
      iVar23 = -(uint)(65536.0 <= auVar99._4_4_);
      iVar25 = -(uint)(65536.0 <= auVar99._8_4_);
      iVar27 = -(uint)(65536.0 <= auVar99._12_4_);
      iVar33 = -(uint)(65536.0 <= auVar93._4_4_);
      iVar34 = -(uint)(65536.0 <= auVar93._8_4_);
      iVar35 = -(uint)(65536.0 <= auVar93._12_4_);
      uVar4 = CONCAT13(uVar70,CONCAT12(uVar69,sVar6));
      uVar3 = CONCAT15(uVar72,CONCAT14(uVar71,uVar4));
      uVar10 = CONCAT13(uVar85,CONCAT12(uVar84,sVar11));
      uVar9 = CONCAT15(uVar87,CONCAT14(uVar86,uVar10));
      auVar44[8] = SUB41(auVar93._8_4_,0);
      auVar44._0_8_ =
           CONCAT17((char)((uint)auVar93._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar93._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar93._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar93._4_4_,0),auVar93._0_4_)))) |
           0x7f8000007f800000;
      auVar44[9] = (char)((uint)auVar93._8_4_ >> 8);
      auVar44[10] = (byte)((uint)auVar93._8_4_ >> 0x10) | 0x80;
      auVar44[0xb] = (byte)((uint)auVar93._8_4_ >> 0x18) | 0x7f;
      auVar44[0xc] = SUB41(auVar93._12_4_,0);
      auVar44[0xd] = (char)((uint)auVar93._12_4_ >> 8);
      auVar44[0xe] = (byte)((uint)auVar93._12_4_ >> 0x10) | 0x80;
      auVar44[0xf] = (byte)((uint)auVar93._12_4_ >> 0x18) | 0x7f;
      auVar31[4] = (char)iVar33;
      auVar31._0_4_ = -(uint)(65536.0 <= auVar93._0_4_);
      auVar31[5] = (char)((uint)iVar33 >> 8);
      auVar31[6] = (char)((uint)iVar33 >> 0x10);
      auVar31[7] = (char)((uint)iVar33 >> 0x18);
      auVar31[8] = (char)iVar34;
      auVar31[9] = (char)((uint)iVar34 >> 8);
      auVar31[10] = (char)((uint)iVar34 >> 0x10);
      auVar31[0xb] = (char)((uint)iVar34 >> 0x18);
      auVar31[0xc] = (char)iVar35;
      auVar31[0xd] = (char)((uint)iVar35 >> 8);
      auVar31[0xe] = (char)((uint)iVar35 >> 0x10);
      auVar31[0xf] = (char)((uint)iVar35 >> 0x18);
      auVar93 = auVar93 ^ (auVar93 ^ auVar44) & auVar31;
      auVar43[8] = SUB41(auVar99._8_4_,0);
      auVar43._0_8_ =
           CONCAT17((char)((uint)auVar99._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar99._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar99._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar99._4_4_,0),auVar99._0_4_)))) |
           0x7f8000007f800000;
      auVar43[9] = (char)((uint)auVar99._8_4_ >> 8);
      auVar43[10] = (byte)((uint)auVar99._8_4_ >> 0x10) | 0x80;
      auVar43[0xb] = (byte)((uint)auVar99._8_4_ >> 0x18) | 0x7f;
      auVar43[0xc] = SUB41(auVar99._12_4_,0);
      auVar43[0xd] = (char)((uint)auVar99._12_4_ >> 8);
      auVar43[0xe] = (byte)((uint)auVar99._12_4_ >> 0x10) | 0x80;
      auVar43[0xf] = (byte)((uint)auVar99._12_4_ >> 0x18) | 0x7f;
      auVar21[4] = (char)iVar23;
      auVar21._0_4_ = -(uint)(65536.0 <= auVar99._0_4_);
      auVar21[5] = (char)((uint)iVar23 >> 8);
      auVar21[6] = (char)((uint)iVar23 >> 0x10);
      auVar21[7] = (char)((uint)iVar23 >> 0x18);
      auVar21[8] = (char)iVar25;
      auVar21[9] = (char)((uint)iVar25 >> 8);
      auVar21[10] = (char)((uint)iVar25 >> 0x10);
      auVar21[0xb] = (char)((uint)iVar25 >> 0x18);
      auVar21[0xc] = (char)iVar27;
      auVar21[0xd] = (char)((uint)iVar27 >> 8);
      auVar21[0xe] = (char)((uint)iVar27 >> 0x10);
      auVar21[0xf] = (char)((uint)iVar27 >> 0x18);
      auVar99 = auVar99 ^ (auVar99 ^ auVar43) & auVar21;
      auVar42[8] = SUB41(auVar100._8_4_,0);
      auVar42._0_8_ =
           CONCAT17((char)((uint)auVar100._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar100._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar100._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar100._4_4_,0),auVar100._0_4_)))) |
           0x7f8000007f800000;
      auVar42[9] = (char)((uint)auVar100._8_4_ >> 8);
      auVar42[10] = (byte)((uint)auVar100._8_4_ >> 0x10) | 0x80;
      auVar42[0xb] = (byte)((uint)auVar100._8_4_ >> 0x18) | 0x7f;
      auVar42[0xc] = SUB41(auVar100._12_4_,0);
      auVar42[0xd] = (char)((uint)auVar100._12_4_ >> 8);
      auVar42[0xe] = (byte)((uint)auVar100._12_4_ >> 0x10) | 0x80;
      auVar42[0xf] = (byte)((uint)auVar100._12_4_ >> 0x18) | 0x7f;
      auVar17[4] = (char)iVar18;
      auVar17._0_4_ = -(uint)(65536.0 <= auVar100._0_4_);
      auVar17[5] = (char)((uint)iVar18 >> 8);
      auVar17[6] = (char)((uint)iVar18 >> 0x10);
      auVar17[7] = (char)((uint)iVar18 >> 0x18);
      auVar17[8] = (char)iVar19;
      auVar17[9] = (char)((uint)iVar19 >> 8);
      auVar17[10] = (char)((uint)iVar19 >> 0x10);
      auVar17[0xb] = (char)((uint)iVar19 >> 0x18);
      auVar17[0xc] = (char)iVar20;
      auVar17[0xd] = (char)((uint)iVar20 >> 8);
      auVar17[0xe] = (char)((uint)iVar20 >> 0x10);
      auVar17[0xf] = (char)((uint)iVar20 >> 0x18);
      auVar100 = auVar100 ^ (auVar100 ^ auVar42) & auVar17;
      auVar36[8] = SUB41(auVar96._8_4_,0);
      auVar36._0_8_ =
           CONCAT17((char)((uint)auVar96._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar96._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar96._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar96._4_4_,0),auVar96._0_4_)))) |
           0x7f8000007f800000;
      auVar36[9] = (char)((uint)auVar96._8_4_ >> 8);
      auVar36[10] = (byte)((uint)auVar96._8_4_ >> 0x10) | 0x80;
      auVar36[0xb] = (byte)((uint)auVar96._8_4_ >> 0x18) | 0x7f;
      auVar36[0xc] = SUB41(auVar96._12_4_,0);
      auVar36[0xd] = (char)((uint)auVar96._12_4_ >> 8);
      auVar36[0xe] = (byte)((uint)auVar96._12_4_ >> 0x10) | 0x80;
      auVar36[0xf] = (byte)((uint)auVar96._12_4_ >> 0x18) | 0x7f;
      auVar12[4] = (char)iVar14;
      auVar12._0_4_ = -(uint)(65536.0 <= auVar96._0_4_);
      auVar12[5] = (char)((uint)iVar14 >> 8);
      auVar12[6] = (char)((uint)iVar14 >> 0x10);
      auVar12[7] = (char)((uint)iVar14 >> 0x18);
      auVar12[8] = (char)iVar15;
      auVar12[9] = (char)((uint)iVar15 >> 8);
      auVar12[10] = (char)((uint)iVar15 >> 0x10);
      auVar12[0xb] = (char)((uint)iVar15 >> 0x18);
      auVar12[0xc] = (char)iVar16;
      auVar12[0xd] = (char)((uint)iVar16 >> 8);
      auVar12[0xe] = (char)((uint)iVar16 >> 0x10);
      auVar12[0xf] = (char)((uint)iVar16 >> 0x18);
      auVar96 = auVar96 ^ (auVar96 ^ auVar36) & auVar12;
      fVar62 = (float)CONCAT13(auVar96[3] | (byte)((short)*(ushort *)(pdVar49 + 0xf) >> 0xf) & 0x80,
                               auVar96._0_3_);
      fVar63 = (float)CONCAT13(auVar96[0xb] |
                               (byte)((short)*(ushort *)(pdVar49 + 0xd) >> 0xf) & 0x80,auVar96._8_3_
                              );
      fVar90 = (float)CONCAT13(auVar93[3] | (byte)(sVar11 >> 0xf) & 0x80,auVar93._0_3_);
      auVar92._0_8_ =
           CONCAT17(auVar93[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,
                    CONCAT16(auVar93[6],CONCAT15(auVar93[5],CONCAT14(auVar93[4],fVar90))));
      auVar92[8] = auVar93[8];
      auVar92[9] = auVar93[9];
      auVar92[10] = auVar93[10];
      auVar92[0xb] = auVar93[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80;
      auVar94[0xc] = auVar93[0xc];
      auVar94._0_12_ = auVar92;
      auVar94[0xd] = auVar93[0xd];
      auVar94[0xe] = auVar93[0xe];
      auVar94[0xf] = auVar93[0xf] |
                     (byte)((long)CONCAT17(uVar89,CONCAT16(uVar88,uVar9)) >> 0x3f) & 0x80;
      sVar11 = puVar52[0x1c];
      uVar88 = (undefined1)puVar52[0x18];
      uVar89 = (undefined1)((ushort)puVar52[0x18] >> 8);
      uVar104 = (undefined1)puVar52[0x14];
      uVar105 = (undefined1)((ushort)puVar52[0x14] >> 8);
      uVar106 = (undefined1)puVar52[0x10];
      uVar107 = (undefined1)((ushort)puVar52[0x10] >> 8);
      uVar1 = CONCAT12(uVar88,sVar11);
      uVar2 = CONCAT13(uVar89,uVar1);
      uVar9 = CONCAT15(uVar105,CONCAT14(uVar104,uVar2));
      sVar32 = puVar52[0xc];
      uVar120 = (undefined1)puVar52[8];
      uVar121 = (undefined1)((ushort)puVar52[8] >> 8);
      uVar122 = (undefined1)puVar52[4];
      uVar123 = (undefined1)((ushort)puVar52[4] >> 8);
      uVar124 = (undefined1)*puVar52;
      uVar125 = (undefined1)((ushort)*puVar52 >> 8);
      uVar7 = CONCAT12(uVar120,sVar32);
      uVar8 = CONCAT13(uVar121,uVar7);
      uVar29 = CONCAT15(uVar123,CONCAT14(uVar122,uVar8));
      uVar57 = CONCAT44((uint)(ushort)puVar52[0x38] << 0xd,(uint)(ushort)puVar52[0x3c] << 0xd) &
               0xfffffff0fffffff;
      fVar38 = (float)((uVar7 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar39 = (float)((uVar8 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar126 = SUB41(fVar39,0);
      uVar127 = (undefined1)((uint)fVar39 >> 8);
      uVar128 = (undefined1)((uint)fVar39 >> 0x10);
      uVar129 = (undefined1)((uint)fVar39 >> 0x18);
      fVar40 = (float)(((ushort)((uint6)uVar29 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar130 = SUB41(fVar40,0);
      uVar131 = (undefined1)((uint)fVar40 >> 8);
      bVar132 = (byte)((uint)fVar40 >> 0x10);
      bVar133 = (byte)((uint)fVar40 >> 0x18);
      fVar41 = (float)(((ushort)(CONCAT17(uVar125,CONCAT16(uVar124,uVar29)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar134 = SUB41(fVar41,0);
      uVar135 = (undefined1)((uint)fVar41 >> 8);
      bVar136 = (byte)((uint)fVar41 >> 0x10);
      bVar137 = (byte)((uint)fVar41 >> 0x18);
      fVar83 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar24 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar108 = SUB41(fVar24,0);
      uVar109 = (undefined1)((uint)fVar24 >> 8);
      uVar110 = (undefined1)((uint)fVar24 >> 0x10);
      uVar111 = (undefined1)((uint)fVar24 >> 0x18);
      fVar26 = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar112 = SUB41(fVar26,0);
      uVar113 = (undefined1)((uint)fVar26 >> 8);
      bVar114 = (byte)((uint)fVar26 >> 0x10);
      bVar115 = (byte)((uint)fVar26 >> 0x18);
      fVar28 = (float)(((ushort)(CONCAT17(uVar107,CONCAT16(uVar106,uVar9)) >> 0x30) & 0x7fff) << 0xd
                      ) * 5.192297e+33;
      uVar116 = SUB41(fVar28,0);
      uVar117 = (undefined1)((uint)fVar28 >> 8);
      bVar118 = (byte)((uint)fVar28 >> 0x10);
      bVar119 = (byte)((uint)fVar28 >> 0x18);
      fVar55 = (float)(((ushort)puVar52[0x2c] & 0x7fff) << 0xd) * 5.192297e+33;
      fVar64 = (float)(((ushort)puVar52[0x28] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar69 = SUB41(fVar64,0);
      uVar70 = (undefined1)((uint)fVar64 >> 8);
      uVar71 = (undefined1)((uint)fVar64 >> 0x10);
      uVar72 = (undefined1)((uint)fVar64 >> 0x18);
      fVar75 = (float)(((ushort)puVar52[0x24] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar84 = SUB41(fVar75,0);
      uVar85 = (undefined1)((uint)fVar75 >> 8);
      bVar54 = (byte)((uint)fVar75 >> 0x10);
      bVar53 = (byte)((uint)fVar75 >> 0x18);
      fVar82 = (float)(((ushort)puVar52[0x20] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar86 = SUB41(fVar82,0);
      uVar87 = (undefined1)((uint)fVar82 >> 8);
      bVar102 = (byte)((uint)fVar82 >> 0x10);
      bVar103 = (byte)((uint)fVar82 >> 0x18);
      auVar59._0_4_ = (float)uVar57 * 5.192297e+33;
      auVar59._4_4_ = (float)(uVar57 >> 0x20) * 5.192297e+33;
      auVar59._8_4_ = (float)(((ushort)puVar52[0x34] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar59._12_4_ = (float)(((ushort)puVar52[0x30] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar101._0_4_ = -(uint)(65536.0 <= auVar59._0_4_);
      auVar101._4_4_ = -(uint)(65536.0 <= auVar59._4_4_);
      auVar101._8_4_ = -(uint)(65536.0 <= auVar59._8_4_);
      auVar101._12_4_ = -(uint)(65536.0 <= auVar59._12_4_);
      iVar14 = -(uint)(65536.0 <= fVar64);
      iVar15 = -(uint)(65536.0 <= fVar82);
      iVar16 = -(uint)(65536.0 <= fVar24);
      iVar18 = -(uint)(65536.0 <= fVar28);
      auVar66._0_4_ = -(uint)(65536.0 <= fVar38);
      auVar66._4_4_ = -(uint)(65536.0 <= fVar39);
      auVar66._8_4_ = -(uint)(65536.0 <= fVar40);
      auVar66._12_4_ = -(uint)(65536.0 <= fVar41);
      auVar78._0_8_ =
           CONCAT17(uVar129,CONCAT16(uVar128,CONCAT15(uVar127,CONCAT14(uVar126,fVar38)))) |
           0x7f8000007f800000;
      auVar78[8] = uVar130;
      auVar78[9] = uVar131;
      auVar78[10] = bVar132 | 0x80;
      auVar78[0xb] = bVar133 | 0x7f;
      auVar78[0xc] = uVar134;
      auVar78[0xd] = uVar135;
      auVar78[0xe] = bVar136 | 0x80;
      auVar78[0xf] = bVar137 | 0x7f;
      uVar10 = CONCAT13(uVar89,CONCAT12(uVar88,sVar11));
      uVar9 = CONCAT15(uVar105,CONCAT14(uVar104,uVar10));
      uVar30 = CONCAT13(uVar121,CONCAT12(uVar120,sVar32));
      uVar29 = CONCAT15(uVar123,CONCAT14(uVar122,uVar30));
      uVar57 = CONCAT17((short)puVar52[0x28] >> 0xf,
                        (uint7)(((byte)((short)puVar52[0x2c] >> 0xf) & 0x80) << 0x18)) &
               0x80ffffffffffffff;
      auVar37[4] = uVar126;
      auVar37._0_4_ = fVar38;
      auVar37[5] = uVar127;
      auVar37[6] = uVar128;
      auVar37[7] = uVar129;
      auVar37[8] = uVar130;
      auVar37[9] = uVar131;
      auVar37[10] = bVar132;
      auVar37[0xb] = bVar133;
      auVar37[0xc] = uVar134;
      auVar37[0xd] = uVar135;
      auVar37[0xe] = bVar136;
      auVar37[0xf] = bVar137;
      auVar67[4] = uVar126;
      auVar67._0_4_ = fVar38;
      auVar67[5] = uVar127;
      auVar67[6] = uVar128;
      auVar67[7] = uVar129;
      auVar67[8] = uVar130;
      auVar67[9] = uVar131;
      auVar67[10] = bVar132;
      auVar67[0xb] = bVar133;
      auVar67[0xc] = uVar134;
      auVar67[0xd] = uVar135;
      auVar67[0xe] = bVar136;
      auVar67[0xf] = bVar137;
      auVar67 = auVar67 ^ (auVar37 ^ auVar78) & auVar66;
      auVar79[0xc] = (char)iVar18;
      auVar79._8_4_ = -(uint)(65536.0 <= fVar26);
      auVar79[0xd] = (char)((uint)iVar18 >> 8);
      auVar79[0xe] = (char)((uint)iVar18 >> 0x10);
      auVar79[0xf] = (char)((uint)iVar18 >> 0x18);
      auVar79[4] = (char)iVar16;
      auVar79._0_4_ = -(uint)(65536.0 <= fVar83);
      auVar79[5] = (char)((uint)iVar16 >> 8);
      auVar79[6] = (char)((uint)iVar16 >> 0x10);
      auVar79[7] = (char)((uint)iVar16 >> 0x18);
      auVar22[4] = uVar108;
      auVar22._0_4_ = fVar83;
      auVar22[5] = uVar109;
      auVar22[6] = uVar110;
      auVar22[7] = uVar111;
      auVar22[8] = uVar112;
      auVar22[9] = uVar113;
      auVar22[10] = bVar114;
      auVar22[0xb] = bVar115;
      auVar22[0xc] = uVar116;
      auVar22[0xd] = uVar117;
      auVar22[0xe] = bVar118;
      auVar22[0xf] = bVar119;
      auVar47[8] = uVar112;
      auVar47._0_8_ =
           CONCAT17(uVar111,CONCAT16(uVar110,CONCAT15(uVar109,CONCAT14(uVar108,fVar83)))) |
           0x7f8000007f800000;
      auVar47[9] = uVar113;
      auVar47[10] = bVar114 | 0x80;
      auVar47[0xb] = bVar115 | 0x7f;
      auVar47[0xc] = uVar116;
      auVar47[0xd] = uVar117;
      auVar47[0xe] = bVar118 | 0x80;
      auVar47[0xf] = bVar119 | 0x7f;
      auVar80[4] = uVar108;
      auVar80._0_4_ = fVar83;
      auVar80[5] = uVar109;
      auVar80[6] = uVar110;
      auVar80[7] = uVar111;
      auVar80[8] = uVar112;
      auVar80[9] = uVar113;
      auVar80[10] = bVar114;
      auVar80[0xb] = bVar115;
      auVar80[0xc] = uVar116;
      auVar80[0xd] = uVar117;
      auVar80[0xe] = bVar118;
      auVar80[0xf] = bVar119;
      auVar80 = auVar80 ^ (auVar22 ^ auVar47) & auVar79;
      auVar97[0xc] = (char)iVar15;
      auVar97._8_4_ = -(uint)(65536.0 <= fVar75);
      auVar97[0xd] = (char)((uint)iVar15 >> 8);
      auVar97[0xe] = (char)((uint)iVar15 >> 0x10);
      auVar97[0xf] = (char)((uint)iVar15 >> 0x18);
      auVar97[4] = (char)iVar14;
      auVar97._0_4_ = -(uint)(65536.0 <= fVar55);
      auVar97[5] = (char)((uint)iVar14 >> 8);
      auVar97[6] = (char)((uint)iVar14 >> 0x10);
      auVar97[7] = (char)((uint)iVar14 >> 0x18);
      auVar13[4] = uVar69;
      auVar13._0_4_ = fVar55;
      auVar13[5] = uVar70;
      auVar13[6] = uVar71;
      auVar13[7] = uVar72;
      auVar13[8] = uVar84;
      auVar13[9] = uVar85;
      auVar13[10] = bVar54;
      auVar13[0xb] = bVar53;
      auVar13[0xc] = uVar86;
      auVar13[0xd] = uVar87;
      auVar13[0xe] = bVar102;
      auVar13[0xf] = bVar103;
      auVar46[8] = uVar84;
      auVar46._0_8_ =
           CONCAT17(uVar72,CONCAT16(uVar71,CONCAT15(uVar70,CONCAT14(uVar69,fVar55)))) |
           0x7f8000007f800000;
      auVar46[9] = uVar85;
      auVar46[10] = bVar54 | 0x80;
      auVar46[0xb] = bVar53 | 0x7f;
      auVar46[0xc] = uVar86;
      auVar46[0xd] = uVar87;
      auVar46[0xe] = bVar102 | 0x80;
      auVar46[0xf] = bVar103 | 0x7f;
      auVar98[4] = uVar69;
      auVar98._0_4_ = fVar55;
      auVar98[5] = uVar70;
      auVar98[6] = uVar71;
      auVar98[7] = uVar72;
      auVar98[8] = uVar84;
      auVar98[9] = uVar85;
      auVar98[10] = bVar54;
      auVar98[0xb] = bVar53;
      auVar98[0xc] = uVar86;
      auVar98[0xd] = uVar87;
      auVar98[0xe] = bVar102;
      auVar98[0xf] = bVar103;
      auVar98 = auVar98 ^ (auVar13 ^ auVar46) & auVar97;
      auVar45[8] = SUB41(auVar59._8_4_,0);
      auVar45._0_8_ =
           CONCAT17((char)((uint)auVar59._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar59._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar59._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar59._4_4_,0),auVar59._0_4_)))) |
           0x7f8000007f800000;
      auVar45[9] = (char)((uint)auVar59._8_4_ >> 8);
      auVar45[10] = (byte)((uint)auVar59._8_4_ >> 0x10) | 0x80;
      auVar45[0xb] = (byte)((uint)auVar59._8_4_ >> 0x18) | 0x7f;
      auVar45[0xc] = SUB41(auVar59._12_4_,0);
      auVar45[0xd] = (char)((uint)auVar59._12_4_ >> 8);
      auVar45[0xe] = (byte)((uint)auVar59._12_4_ >> 0x10) | 0x80;
      auVar45[0xf] = (byte)((uint)auVar59._12_4_ >> 0x18) | 0x7f;
      auVar59 = auVar59 ^ (auVar59 ^ auVar45) & auVar101;
      fVar55 = (float)CONCAT13(auVar59[3] | (byte)((short)puVar52[0x3c] >> 0xf) & 0x80,auVar59._0_3_
                              );
      auVar58._0_8_ =
           CONCAT17(auVar59[7] | (byte)((short)puVar52[0x38] >> 0xf) & 0x80,
                    CONCAT16(auVar59[6],CONCAT15(auVar59[5],CONCAT14(auVar59[4],fVar55))));
      auVar58[8] = auVar59[8];
      auVar58[9] = auVar59[9];
      auVar58[10] = auVar59[10];
      auVar58[0xb] = auVar59[0xb] | (byte)((short)puVar52[0x34] >> 0xf) & 0x80;
      auVar60[0xc] = auVar59[0xc];
      auVar60._0_12_ = auVar58;
      auVar60[0xd] = auVar59[0xd];
      auVar60[0xe] = auVar59[0xe];
      auVar60[0xf] = auVar59[0xf] | (byte)((short)puVar52[0x30] >> 0xf) & 0x80;
      fVar82 = (float)CONCAT13(auVar98[3] | (byte)(uVar57 >> 0x18),auVar98._0_3_);
      fVar83 = (float)CONCAT13(auVar98[0xb] | (byte)((short)puVar52[0x24] >> 0xf) & 0x80,
                               auVar98._8_3_);
      fVar75 = (float)CONCAT13(auVar80[3] | (byte)(sVar11 >> 0xf) & 0x80,auVar80._0_3_);
      auVar77._0_8_ =
           CONCAT17(auVar80[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,
                    CONCAT16(auVar80[6],CONCAT15(auVar80[5],CONCAT14(auVar80[4],fVar75))));
      auVar77[8] = auVar80[8];
      auVar77[9] = auVar80[9];
      auVar77[10] = auVar80[10];
      auVar77[0xb] = auVar80[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80;
      auVar81[0xc] = auVar80[0xc];
      auVar81._0_12_ = auVar77;
      auVar81[0xd] = auVar80[0xd];
      auVar81[0xe] = auVar80[0xe];
      auVar81[0xf] = auVar80[0xf] |
                     (byte)((long)CONCAT17(uVar107,CONCAT16(uVar106,uVar9)) >> 0x3f) & 0x80;
      fVar64 = (float)CONCAT13(auVar67[3] | (byte)(sVar32 >> 0xf) & 0x80,auVar67._0_3_);
      auVar65._0_8_ =
           CONCAT17(auVar67[7] | (byte)((int)uVar30 >> 0x1f) & 0x80,
                    CONCAT16(auVar67[6],CONCAT15(auVar67[5],CONCAT14(auVar67[4],fVar64))));
      auVar65[8] = auVar67[8];
      auVar65[9] = auVar67[9];
      auVar65[10] = auVar67[10];
      auVar65[0xb] = auVar67[0xb] | (byte)((int6)uVar29 >> 0x2f) & 0x80;
      auVar68[0xc] = auVar67[0xc];
      auVar68._0_12_ = auVar65;
      auVar68[0xd] = auVar67[0xd];
      auVar68[0xe] = auVar67[0xe];
      auVar68[0xf] = auVar67[0xf] |
                     (byte)((long)CONCAT17(uVar125,CONCAT16(uVar124,uVar29)) >> 0x3f) & 0x80;
      uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar100[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                                auVar100._4_3_) ==
                               (float)(CONCAT17(auVar98[7] | (byte)(uVar57 >> 0x38),
                                                CONCAT16(auVar98[6],
                                                         CONCAT15(auVar98[5],
                                                                  CONCAT14(auVar98[4],fVar82)))) >>
                                      0x20)),
                              -(uint)((float)CONCAT13(auVar100[3] | (byte)(sVar6 >> 0xf) & 0x80,
                                                      auVar100._0_3_) == fVar82)) & 0xffff0000ffff;
      auVar61[1] = -((float)(CONCAT17(auVar96[7] |
                                      (byte)((short)*(ushort *)(pdVar49 + 0xe) >> 0xf) & 0x80,
                                      CONCAT16(auVar96[6],
                                               CONCAT15(auVar96[5],CONCAT14(auVar96[4],fVar62)))) >>
                            0x20) == (float)((ulong)auVar58._0_8_ >> 0x20));
      auVar61[0] = -(fVar62 == fVar55);
      auVar61[2] = -(fVar63 == auVar58._8_4_);
      auVar61[3] = -((float)(CONCAT17(auVar96[0xf] |
                                      (byte)((short)*(ushort *)(pdVar49 + 0xc) >> 0xf) & 0x80,
                                      CONCAT16(auVar96[0xe],
                                               CONCAT15(auVar96[0xd],CONCAT14(auVar96[0xc],fVar63)))
                                     ) >> 0x20) == auVar60._12_4_);
      auVar61[4] = (char)uVar5;
      auVar61[5] = (char)(uVar5 >> 0x20);
      auVar61[6] = -((float)CONCAT13(auVar100[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,
                                     auVar100._8_3_) == fVar83);
      auVar61[7] = -((float)CONCAT13(auVar100[0xf] |
                                     (byte)((long)CONCAT17(uVar74,CONCAT16(uVar73,uVar3)) >> 0x3f) &
                                     0x80,auVar100._12_3_) ==
                    (float)(CONCAT17(auVar98[0xf] | (byte)((short)puVar52[0x20] >> 0xf) & 0x80,
                                     CONCAT16(auVar98[0xe],
                                              CONCAT15(auVar98[0xd],CONCAT14(auVar98[0xc],fVar83))))
                           >> 0x20));
      auVar61[8] = -((float)CONCAT13(auVar99[3] |
                                     (byte)((short)*(ushort *)(pdVar49 + 7) >> 0xf) & 0x80,
                                     auVar99._0_3_) == fVar75);
      auVar61[9] = -((float)CONCAT13(auVar99[7] |
                                     (byte)((short)*(ushort *)(pdVar49 + 6) >> 0xf) & 0x80,
                                     auVar99._4_3_) == (float)((ulong)auVar77._0_8_ >> 0x20));
      auVar61[10] = -((float)CONCAT13(auVar99[0xb] |
                                      (byte)((short)*(ushort *)(pdVar49 + 5) >> 0xf) & 0x80,
                                      auVar99._8_3_) == auVar77._8_4_);
      auVar61[0xb] = -((float)CONCAT13(auVar99[0xf] |
                                       (byte)((short)*(ushort *)(pdVar49 + 4) >> 0xf) & 0x80,
                                       auVar99._12_3_) == auVar81._12_4_);
      auVar61[0xc] = -(fVar90 == fVar64);
      auVar61[0xd] = -((float)((ulong)auVar92._0_8_ >> 0x20) ==
                      (float)((ulong)auVar65._0_8_ >> 0x20));
      auVar61[0xe] = -(auVar92._8_4_ == auVar65._8_4_);
      auVar61[0xf] = -(auVar94._12_4_ == auVar68._12_4_);
      bVar54 = NEON_uminv(auVar61,1);
      goto LAB_109ede1cc;
    }
    pfVar50 = (float *)param_3[1];
    if (*(float *)(pdVar49 + 0xf) == pfVar50[0x1e]) {
      bVar48 = false;
      if ((*(float *)(pdVar49 + 0xd) == pfVar50[0x1a]) &&
         (bVar48 = false, !NAN(*(float *)(pdVar49 + 0xe)) && !NAN(pfVar50[0x1c]))) {
        bVar48 = *(float *)(pdVar49 + 0xe) == pfVar50[0x1c];
      }
      bVar54 = 0;
      if (*(float *)(pdVar49 + 0xb) == pfVar50[0x16]) {
        bVar54 = bVar48 & *(float *)(pdVar49 + 0xc) == pfVar50[0x18];
      }
      bVar53 = 0;
      if (*(float *)(pdVar49 + 10) == pfVar50[0x14]) {
        bVar53 = bVar54;
      }
      bVar54 = 0;
      if (*(float *)(pdVar49 + 9) == pfVar50[0x12]) {
        bVar54 = bVar53;
      }
      bVar53 = 0;
      if (*(float *)(pdVar49 + 8) == pfVar50[0x10]) {
        bVar53 = bVar54;
      }
      bVar54 = 0;
      if (*(float *)(pdVar49 + 7) == pfVar50[0xe]) {
        bVar54 = bVar53;
      }
      bVar53 = 0;
      if (*(float *)(pdVar49 + 6) == pfVar50[0xc]) {
        bVar53 = bVar54;
      }
      bVar54 = 0;
      if (*(float *)(pdVar49 + 5) == pfVar50[10]) {
        bVar54 = bVar53;
      }
      bVar53 = 0;
      if (*(float *)(pdVar49 + 4) == pfVar50[8]) {
        bVar53 = bVar54;
      }
      bVar54 = 0;
      if (*(float *)(pdVar49 + 3) == pfVar50[6]) {
        bVar54 = bVar53;
      }
      bVar53 = 0;
      if (*(float *)(pdVar49 + 2) == pfVar50[4]) {
        bVar53 = bVar54;
      }
      bVar102 = 0;
      if (*(float *)(pdVar49 + 1) == pfVar50[2]) {
        bVar102 = bVar53;
      }
      bVar54 = 0;
      if (*(float *)pdVar49 == *pfVar50) {
        bVar54 = bVar102;
      }
      goto LAB_109ede1cc;
    }
  }
  bVar54 = 0;
LAB_109ede1cc:
  *param_1 = bVar54 & 1;
  return;
}



/* Entry: 109ede1d8; end: 109edea5f;  */

void FUN_109ede1d8(undefined8 param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pdVar3 = (double *)*param_3;
  if (param_2 == 0x40) {
    bVar1 = *pdVar3 == *(double *)param_3[1] && pdVar3[1] == ((double *)param_3[1])[1];
  }
  else if (param_2 == 0x20) {
    fVar6 = ((float *)param_3[1])[2];
    bVar1 = false;
    if ((*(float *)pdVar3 == *(float *)param_3[1]) &&
       (bVar1 = false, !NAN(*(float *)(pdVar3 + 1)) && !NAN(fVar6))) {
      bVar1 = *(float *)(pdVar3 + 1) == fVar6;
    }
  }
  else {
    fVar6 = (float)(((int)*(short *)pdVar3 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    fVar7 = (float)(((int)*(short *)(pdVar3 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar7) {
      fVar7 = (float)((uint)fVar7 | 0x7f800000);
    }
    fVar7 = (float)((uint)fVar7 | (int)*(short *)(pdVar3 + 1) & 0x80000000U);
    uVar4 = (uint)*(short *)param_3[1];
    fVar8 = (float)((uVar4 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    uVar2 = (uint)((short *)param_3[1])[4];
    fVar5 = (float)((uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar5) {
      fVar5 = (float)((uint)fVar5 | 0x7f800000);
    }
    fVar5 = (float)((uint)fVar5 | uVar2 & 0x80000000);
    bVar1 = false;
    if (((float)((uint)fVar6 | (int)*(short *)pdVar3 & 0x80000000U) ==
         (float)((uint)fVar8 | uVar4 & 0x80000000)) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar5)))
    {
      bVar1 = fVar7 == fVar5;
    }
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 109edea60; end: 109edef2f;  */

void FUN_109edea60(byte *param_1,uint param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  uint7 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  byte bVar32;
  uint uStack_68;
  uint uStack_64;
  
  uVar11 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
  if (uVar11 < 4) {
    if (uVar11 == 0) {
      if ((byte)param_4[0x1e] == (byte)param_3[0x1e]) {
        bVar3 = ((((((((((((((byte)param_4[0x1a] == (byte)param_3[0x1a] &&
                            (byte)param_4[0x1c] == (byte)param_3[0x1c]) &&
                           (byte)param_4[0x18] == (byte)param_3[0x18]) &&
                          (byte)param_4[0x16] == (byte)param_3[0x16]) &&
                         (byte)param_4[0x14] == (byte)param_3[0x14]) &&
                        (byte)param_4[0x12] == (byte)param_3[0x12]) &&
                       (byte)param_4[0x10] == (byte)param_3[0x10]) &&
                      (byte)param_4[0xe] == (byte)param_3[0xe]) &&
                     (byte)param_4[0xc] == (byte)param_3[0xc]) &&
                    (byte)param_4[10] == (byte)param_3[10]) && (byte)param_4[8] == (byte)param_3[8])
                  && (byte)param_4[6] == (byte)param_3[6]) && (byte)param_4[4] == (byte)param_3[4])
                && (byte)param_4[2] == (byte)param_3[2]) && (byte)*param_4 == (byte)*param_3;
        goto LAB_109edef0c;
      }
    }
    else if ((byte)param_3[0x1e] == (byte)param_4[0x1e]) {
      uStack_68 = (uint)(byte)param_4[0x18];
      uStack_64 = (uint)(byte)param_4[0x1a];
      uVar11 = (uint)(byte)param_4[0x16];
      uVar14 = (uint)(byte)param_4[0x14];
      uVar15 = (uint)(byte)param_4[0x12];
      uVar16 = (uint)(byte)param_4[0x10];
      uVar17 = (uint)(byte)param_4[0xe];
      uVar18 = (uint)(byte)param_4[0xc];
      uVar19 = (uint)(byte)param_4[10];
      uVar20 = (uint)(byte)param_4[8];
      uVar4 = (uint)(byte)param_4[6];
      uVar7 = (uint)(byte)param_4[4];
      uVar8 = (uint)(byte)param_4[2];
      uVar9 = (uint)(byte)*param_4;
      uVar10 = (uint)(byte)param_3[0x1a];
      uVar21 = (uint)(byte)param_3[0x18];
      uVar22 = (uint)(byte)param_3[0x16];
      uVar23 = (uint)(byte)param_3[0x14];
      uVar24 = (uint)(byte)param_3[0x12];
      uVar25 = (uint)(byte)param_3[0x10];
      uVar26 = (uint)(byte)param_3[0xe];
      uVar27 = (uint)(byte)param_3[0xc];
      uVar28 = (uint)(byte)param_3[10];
      uVar29 = (uint)(byte)param_3[8];
      uVar30 = (uint)(byte)param_3[6];
      uVar31 = (uint)(byte)param_3[4];
      uVar12 = (uint)(byte)param_3[2];
      uVar13 = (uint)(byte)*param_3;
      uVar6 = (uint)(byte)param_4[0x1c];
      uVar5 = (uint)(byte)param_3[0x1c];
      goto LAB_109edeec0;
    }
  }
  else if (uVar11 == 4) {
    if ((ushort)param_3[0x1e] == (ushort)param_4[0x1e]) {
      uStack_68 = (uint)(ushort)param_4[0x18];
      uStack_64 = (uint)(ushort)param_4[0x1a];
      uVar11 = (uint)(ushort)param_4[0x16];
      uVar14 = (uint)(ushort)param_4[0x14];
      uVar15 = (uint)(ushort)param_4[0x12];
      uVar16 = (uint)(ushort)param_4[0x10];
      uVar17 = (uint)(ushort)param_4[0xe];
      uVar18 = (uint)(ushort)param_4[0xc];
      uVar19 = (uint)(ushort)param_4[10];
      uVar20 = (uint)(ushort)param_4[8];
      uVar4 = (uint)(ushort)param_4[6];
      uVar7 = (uint)(ushort)param_4[4];
      uVar8 = (uint)(ushort)param_4[2];
      uVar9 = (uint)(ushort)*param_4;
      uVar10 = (uint)(ushort)param_3[0x1a];
      uVar21 = (uint)(ushort)param_3[0x18];
      uVar22 = (uint)(ushort)param_3[0x16];
      uVar23 = (uint)(ushort)param_3[0x14];
      uVar24 = (uint)(ushort)param_3[0x12];
      uVar25 = (uint)(ushort)param_3[0x10];
      uVar26 = (uint)(ushort)param_3[0xe];
      uVar27 = (uint)(ushort)param_3[0xc];
      uVar28 = (uint)(ushort)param_3[10];
      uVar29 = (uint)(ushort)param_3[8];
      uVar30 = (uint)(ushort)param_3[6];
      uVar31 = (uint)(ushort)param_3[4];
      uVar12 = (uint)(ushort)param_3[2];
      uVar13 = (uint)(ushort)*param_3;
      uVar6 = (uint)(ushort)param_4[0x1c];
      uVar5 = (uint)(ushort)param_3[0x1c];
LAB_109edeec0:
      bVar3 = false;
      if (((((((((((((uVar5 == uVar6 && uVar10 == uStack_64) && uVar21 == uStack_68) &&
                   uVar22 == uVar11) && uVar23 == uVar14) && uVar24 == uVar15) && uVar25 == uVar16)
               && uVar26 == uVar17) && uVar27 == uVar18) && uVar28 == uVar19) && uVar29 == uVar20)
           && uVar30 == uVar4) && uVar31 == uVar7) && uVar12 == uVar8) {
        bVar3 = uVar13 == uVar9;
      }
      goto LAB_109edef0c;
    }
  }
  else if (uVar11 == 5) {
    if (param_3[0x1e] == param_4[0x1e]) {
      uStack_64 = param_4[0x1a];
      uStack_68 = param_4[0x18];
      uVar11 = param_4[0x16];
      uVar14 = param_4[0x14];
      uVar15 = param_4[0x12];
      uVar16 = param_4[0x10];
      uVar17 = param_4[0xe];
      uVar18 = param_4[0xc];
      uVar19 = param_4[10];
      uVar20 = param_4[8];
      uVar4 = param_4[6];
      uVar7 = param_4[4];
      uVar8 = param_4[2];
      uVar9 = *param_4;
      uVar10 = param_3[0x1a];
      uVar21 = param_3[0x18];
      uVar22 = param_3[0x16];
      uVar23 = param_3[0x14];
      uVar24 = param_3[0x12];
      uVar25 = param_3[0x10];
      uVar26 = param_3[0xe];
      uVar27 = param_3[0xc];
      uVar28 = param_3[10];
      uVar29 = param_3[8];
      uVar30 = param_3[6];
      uVar31 = param_3[4];
      uVar12 = param_3[2];
      uVar13 = *param_3;
      uVar6 = param_4[0x1c];
      uVar5 = param_3[0x1c];
      goto LAB_109edeec0;
    }
  }
  else if (*(long *)(param_3 + 0x1e) == *(long *)(param_4 + 0x1e)) {
    uVar2 = CONCAT16(-(*(long *)(param_3 + 0x14) == *(long *)(param_4 + 0x14)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 0x12) == *(long *)(param_4 + 0x12)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 0x10) ==
                                                     *(long *)(param_4 + 0x10)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 0xe) ==
                                                                   *(long *)(param_4 + 0xe))))) &
            CONCAT16(-(*(long *)(param_3 + 0xc) == *(long *)(param_4 + 0xc)),
                     (uint6)CONCAT14(-(*(long *)(param_3 + 10) == *(long *)(param_4 + 10)),
                                     (uint)CONCAT12(-(*(long *)(param_3 + 8) ==
                                                     *(long *)(param_4 + 8)),
                                                    (ushort)(byte)-(*(long *)(param_3 + 6) ==
                                                                   *(long *)(param_4 + 6)))));
    bVar32 = NEON_uminv(CONCAT17(-((char)((*(long *)(param_3 + 0x1c) == *(long *)(param_4 + 0x1c)) *
                                         -0x80) < '\0'),
                                 CONCAT16(-((char)((*(long *)(param_3 + 0x1a) ==
                                                   *(long *)(param_4 + 0x1a)) * -0x80) < '\0'),
                                          CONCAT15(-((char)((*(long *)(param_3 + 0x18) ==
                                                            *(long *)(param_4 + 0x18)) * -0x80) <
                                                    '\0'),CONCAT14(-((char)((*(long *)(param_3 +
                                                                                      0x16) ==
                                                                            *(long *)(param_4 + 0x16
                                                                                     )) * -0x80) <
                                                                    '\0'),CONCAT13(-((char)((char)(
                                                  uVar2 >> 0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar2 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar2 >> 
                                                  0x10) << 7) < '\0'),
                                                  -((char)((char)uVar2 << 7) < '\0')))))))),1);
    bVar1 = false;
    if (*(long *)(param_3 + 2) == *(long *)(param_4 + 2)) {
      bVar1 = (bool)(bVar32 & *(long *)(param_3 + 4) == *(long *)(param_4 + 4));
    }
    bVar3 = false;
    if (*(long *)param_3 == *(long *)param_4) {
      bVar3 = bVar1;
    }
    goto LAB_109edef0c;
  }
  bVar3 = false;
LAB_109edef0c:
  *param_1 = bVar3;
  return;
}



/* Entry: 109edef30; end: 109edf623;  */

void FUN_109edef30(undefined8 param_1,uint param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
  uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = (uint)LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
  if (uVar2 < 4) {
    if (uVar2 == 0) {
      bVar1 = (byte)*param_4 == (byte)*param_3 && (byte)param_4[2] == (byte)param_3[2];
      goto LAB_109edefd4;
    }
    uVar2 = (uint)(byte)*param_3;
    uVar3 = (uint)(byte)param_3[2];
    uVar4 = (uint)(byte)*param_4;
    uVar5 = (uint)(byte)param_4[2];
  }
  else if (uVar2 == 4) {
    uVar2 = (uint)(ushort)*param_3;
    uVar3 = (uint)(ushort)param_3[2];
    uVar4 = (uint)(ushort)*param_4;
    uVar5 = (uint)(ushort)param_4[2];
  }
  else {
    if (uVar2 != 5) {
      bVar1 = *(long *)(param_3 + 2) == *(long *)(param_4 + 2) &&
              *(long *)param_3 == *(long *)param_4;
      goto LAB_109edefd4;
    }
    uVar2 = *param_3;
    uVar3 = param_3[2];
    uVar4 = *param_4;
    uVar5 = param_4[2];
  }
  bVar1 = false;
  if (uVar3 == uVar5) {
    bVar1 = uVar2 == uVar4;
  }
LAB_109edefd4:
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 109edf624; end: 109edfadb;  */

void FUN_109edf624(byte *param_1,int param_2,undefined8 *param_3)

{
  uint3 uVar1;
  uint uVar2;
  undefined6 uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  short sVar6;
  uint3 uVar7;
  uint uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  short sVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  undefined6 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  short sVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float *pfVar48;
  double *pdVar49;
  undefined2 *puVar50;
  bool bVar51;
  double *pdVar52;
  byte bVar53;
  float fVar54;
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  ulong uVar62;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  float fVar73;
  ulong uVar74;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar80;
  float fVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  float fVar88;
  ulong uVar89;
  undefined1 auVar91 [16];
  ulong uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  byte bVar100;
  byte bVar101;
  byte bVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  byte bVar113;
  byte bVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  byte bVar117;
  byte bVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 uVar126;
  undefined1 uVar127;
  undefined1 uVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  byte bVar131;
  byte bVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  byte bVar135;
  byte bVar136;
  undefined1 auVar55 [12];
  undefined1 auVar57 [16];
  undefined1 auVar63 [12];
  undefined1 auVar66 [16];
  undefined1 auVar75 [12];
  undefined1 auVar79 [16];
  undefined1 auVar90 [12];
  undefined1 auVar92 [16];
  
  pdVar52 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar49 = (double *)param_3[1];
    if (pdVar52[0xf] != pdVar49[0xf]) {
LAB_109edf788:
      bVar53 = 1;
      goto LAB_109edfab8;
    }
    bVar51 = *pdVar52 != *pdVar49;
    bVar53 = NEON_umaxv(CONCAT17(-((char)(~-(pdVar52[0xe] == pdVar49[0xe]) << 7) < '\0'),
                                 CONCAT16(-((char)(~-(pdVar52[0xd] == pdVar49[0xd]) << 7) < '\0'),
                                          CONCAT15(-((char)(~-(pdVar52[0xc] == pdVar49[0xc]) << 7) <
                                                    '\0'),CONCAT14(-((char)(~-(pdVar52[0xb] ==
                                                                              pdVar49[0xb]) << 7) <
                                                                    '\0'),CONCAT13(-((char)((~-(
                                                  pdVar52[10] == pdVar49[10]) |
                                                  ~-(pdVar52[6] == pdVar49[6])) << 7) < '\0'),
                                                  CONCAT12(-((char)((~-(pdVar52[9] == pdVar49[9]) |
                                                                    ~-(pdVar52[5] == pdVar49[5])) <<
                                                                   7) < '\0'),
                                                           CONCAT11(-((char)((~-(pdVar52[8] ==
                                                                                pdVar49[8]) |
                                                                             ~-(pdVar52[4] ==
                                                                               pdVar49[4])) << 7) <
                                                                     '\0'),-((char)((~-(pdVar52[7]
                                                                                       == pdVar49[7]
                                                                                       ) | ~-(
                                                  pdVar52[3] == pdVar49[3])) << 7) < '\0')))))))),1)
    ;
    bVar53 = (pdVar52[1] != pdVar49[1] || pdVar52[2] != pdVar49[2]) | bVar53;
  }
  else {
    if (param_2 != 0x20) {
      puVar50 = (undefined2 *)param_3[1];
      sVar6 = *(short *)(pdVar52 + 0xb);
      uVar67 = (undefined1)*(undefined2 *)(pdVar52 + 10);
      uVar68 = (undefined1)((ushort)*(undefined2 *)(pdVar52 + 10) >> 8);
      uVar69 = (undefined1)*(undefined2 *)(pdVar52 + 9);
      uVar70 = (undefined1)((ushort)*(undefined2 *)(pdVar52 + 9) >> 8);
      uVar71 = (undefined1)*(undefined2 *)(pdVar52 + 8);
      uVar72 = (undefined1)((ushort)*(undefined2 *)(pdVar52 + 8) >> 8);
      uVar1 = CONCAT12(uVar67,sVar6);
      uVar2 = CONCAT13(uVar68,uVar1);
      uVar3 = CONCAT15(uVar70,CONCAT14(uVar69,uVar2));
      sVar11 = *(short *)(pdVar52 + 3);
      uVar82 = (undefined1)*(undefined2 *)(pdVar52 + 2);
      uVar83 = (undefined1)((ushort)*(undefined2 *)(pdVar52 + 2) >> 8);
      uVar84 = (undefined1)*(undefined2 *)(pdVar52 + 1);
      uVar85 = (undefined1)((ushort)*(undefined2 *)(pdVar52 + 1) >> 8);
      uVar86 = (undefined1)*(undefined2 *)pdVar52;
      uVar87 = (undefined1)((ushort)*(undefined2 *)pdVar52 >> 8);
      uVar7 = CONCAT12(uVar82,sVar11);
      uVar8 = CONCAT13(uVar83,uVar7);
      uVar9 = CONCAT15(uVar85,CONCAT14(uVar84,uVar8));
      uVar93 = CONCAT44((uint)*(ushort *)(pdVar52 + 0xe) << 0xd,
                        (uint)*(ushort *)(pdVar52 + 0xf) << 0xd) & 0xfffffff0fffffff;
      uVar62 = CONCAT44((uVar2 >> 0x10) << 0xd,(uVar1 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      uVar74 = CONCAT44((uint)*(ushort *)(pdVar52 + 6) << 0xd,(uint)*(ushort *)(pdVar52 + 7) << 0xd)
               & 0xfffffff0fffffff;
      uVar89 = CONCAT44((uVar8 >> 0x10) << 0xd,(uVar7 & 0xffff) << 0xd) & 0xfffffff0fffffff;
      auVar91._0_4_ = (float)uVar89 * 5.192297e+33;
      auVar91._4_4_ = (float)(uVar89 >> 0x20) * 5.192297e+33;
      auVar91._8_4_ = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar91._12_4_ =
           (float)(((ushort)(CONCAT17(uVar87,CONCAT16(uVar86,uVar9)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar97._0_4_ = (float)uVar74 * 5.192297e+33;
      auVar97._4_4_ = (float)(uVar74 >> 0x20) * 5.192297e+33;
      auVar97._8_4_ = (float)((*(ushort *)(pdVar52 + 5) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar97._12_4_ = (float)((*(ushort *)(pdVar52 + 4) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar98._0_4_ = (float)uVar62 * 5.192297e+33;
      auVar98._4_4_ = (float)(uVar62 >> 0x20) * 5.192297e+33;
      auVar98._8_4_ = (float)(((ushort)((uint6)uVar3 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar98._12_4_ =
           (float)(((ushort)(CONCAT17(uVar72,CONCAT16(uVar71,uVar3)) >> 0x30) & 0x7fff) << 0xd) *
           5.192297e+33;
      auVar94._0_4_ = (float)uVar93 * 5.192297e+33;
      auVar94._4_4_ = (float)(uVar93 >> 0x20) * 5.192297e+33;
      auVar94._8_4_ = (float)((*(ushort *)(pdVar52 + 0xd) & 0x7fff) << 0xd) * 5.192297e+33;
      auVar94._12_4_ = (float)((*(ushort *)(pdVar52 + 0xc) & 0x7fff) << 0xd) * 5.192297e+33;
      iVar14 = -(uint)(65536.0 <= auVar94._4_4_);
      iVar15 = -(uint)(65536.0 <= auVar94._8_4_);
      iVar16 = -(uint)(65536.0 <= auVar94._12_4_);
      iVar18 = -(uint)(65536.0 <= auVar98._4_4_);
      iVar19 = -(uint)(65536.0 <= auVar98._8_4_);
      iVar20 = -(uint)(65536.0 <= auVar98._12_4_);
      iVar23 = -(uint)(65536.0 <= auVar97._4_4_);
      iVar25 = -(uint)(65536.0 <= auVar97._8_4_);
      iVar27 = -(uint)(65536.0 <= auVar97._12_4_);
      iVar33 = -(uint)(65536.0 <= auVar91._4_4_);
      iVar34 = -(uint)(65536.0 <= auVar91._8_4_);
      iVar35 = -(uint)(65536.0 <= auVar91._12_4_);
      uVar4 = CONCAT13(uVar68,CONCAT12(uVar67,sVar6));
      uVar3 = CONCAT15(uVar70,CONCAT14(uVar69,uVar4));
      uVar10 = CONCAT13(uVar83,CONCAT12(uVar82,sVar11));
      uVar9 = CONCAT15(uVar85,CONCAT14(uVar84,uVar10));
      auVar44[8] = SUB41(auVar91._8_4_,0);
      auVar44._0_8_ =
           CONCAT17((char)((uint)auVar91._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar91._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar91._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar91._4_4_,0),auVar91._0_4_)))) |
           0x7f8000007f800000;
      auVar44[9] = (char)((uint)auVar91._8_4_ >> 8);
      auVar44[10] = (byte)((uint)auVar91._8_4_ >> 0x10) | 0x80;
      auVar44[0xb] = (byte)((uint)auVar91._8_4_ >> 0x18) | 0x7f;
      auVar44[0xc] = SUB41(auVar91._12_4_,0);
      auVar44[0xd] = (char)((uint)auVar91._12_4_ >> 8);
      auVar44[0xe] = (byte)((uint)auVar91._12_4_ >> 0x10) | 0x80;
      auVar44[0xf] = (byte)((uint)auVar91._12_4_ >> 0x18) | 0x7f;
      auVar31[4] = (char)iVar33;
      auVar31._0_4_ = -(uint)(65536.0 <= auVar91._0_4_);
      auVar31[5] = (char)((uint)iVar33 >> 8);
      auVar31[6] = (char)((uint)iVar33 >> 0x10);
      auVar31[7] = (char)((uint)iVar33 >> 0x18);
      auVar31[8] = (char)iVar34;
      auVar31[9] = (char)((uint)iVar34 >> 8);
      auVar31[10] = (char)((uint)iVar34 >> 0x10);
      auVar31[0xb] = (char)((uint)iVar34 >> 0x18);
      auVar31[0xc] = (char)iVar35;
      auVar31[0xd] = (char)((uint)iVar35 >> 8);
      auVar31[0xe] = (char)((uint)iVar35 >> 0x10);
      auVar31[0xf] = (char)((uint)iVar35 >> 0x18);
      auVar91 = auVar91 ^ (auVar91 ^ auVar44) & auVar31;
      auVar43[8] = SUB41(auVar97._8_4_,0);
      auVar43._0_8_ =
           CONCAT17((char)((uint)auVar97._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar97._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar97._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar97._4_4_,0),auVar97._0_4_)))) |
           0x7f8000007f800000;
      auVar43[9] = (char)((uint)auVar97._8_4_ >> 8);
      auVar43[10] = (byte)((uint)auVar97._8_4_ >> 0x10) | 0x80;
      auVar43[0xb] = (byte)((uint)auVar97._8_4_ >> 0x18) | 0x7f;
      auVar43[0xc] = SUB41(auVar97._12_4_,0);
      auVar43[0xd] = (char)((uint)auVar97._12_4_ >> 8);
      auVar43[0xe] = (byte)((uint)auVar97._12_4_ >> 0x10) | 0x80;
      auVar43[0xf] = (byte)((uint)auVar97._12_4_ >> 0x18) | 0x7f;
      auVar21[4] = (char)iVar23;
      auVar21._0_4_ = -(uint)(65536.0 <= auVar97._0_4_);
      auVar21[5] = (char)((uint)iVar23 >> 8);
      auVar21[6] = (char)((uint)iVar23 >> 0x10);
      auVar21[7] = (char)((uint)iVar23 >> 0x18);
      auVar21[8] = (char)iVar25;
      auVar21[9] = (char)((uint)iVar25 >> 8);
      auVar21[10] = (char)((uint)iVar25 >> 0x10);
      auVar21[0xb] = (char)((uint)iVar25 >> 0x18);
      auVar21[0xc] = (char)iVar27;
      auVar21[0xd] = (char)((uint)iVar27 >> 8);
      auVar21[0xe] = (char)((uint)iVar27 >> 0x10);
      auVar21[0xf] = (char)((uint)iVar27 >> 0x18);
      auVar97 = auVar97 ^ (auVar97 ^ auVar43) & auVar21;
      auVar42[8] = SUB41(auVar98._8_4_,0);
      auVar42._0_8_ =
           CONCAT17((char)((uint)auVar98._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar98._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar98._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar98._4_4_,0),auVar98._0_4_)))) |
           0x7f8000007f800000;
      auVar42[9] = (char)((uint)auVar98._8_4_ >> 8);
      auVar42[10] = (byte)((uint)auVar98._8_4_ >> 0x10) | 0x80;
      auVar42[0xb] = (byte)((uint)auVar98._8_4_ >> 0x18) | 0x7f;
      auVar42[0xc] = SUB41(auVar98._12_4_,0);
      auVar42[0xd] = (char)((uint)auVar98._12_4_ >> 8);
      auVar42[0xe] = (byte)((uint)auVar98._12_4_ >> 0x10) | 0x80;
      auVar42[0xf] = (byte)((uint)auVar98._12_4_ >> 0x18) | 0x7f;
      auVar17[4] = (char)iVar18;
      auVar17._0_4_ = -(uint)(65536.0 <= auVar98._0_4_);
      auVar17[5] = (char)((uint)iVar18 >> 8);
      auVar17[6] = (char)((uint)iVar18 >> 0x10);
      auVar17[7] = (char)((uint)iVar18 >> 0x18);
      auVar17[8] = (char)iVar19;
      auVar17[9] = (char)((uint)iVar19 >> 8);
      auVar17[10] = (char)((uint)iVar19 >> 0x10);
      auVar17[0xb] = (char)((uint)iVar19 >> 0x18);
      auVar17[0xc] = (char)iVar20;
      auVar17[0xd] = (char)((uint)iVar20 >> 8);
      auVar17[0xe] = (char)((uint)iVar20 >> 0x10);
      auVar17[0xf] = (char)((uint)iVar20 >> 0x18);
      auVar98 = auVar98 ^ (auVar98 ^ auVar42) & auVar17;
      auVar36[8] = SUB41(auVar94._8_4_,0);
      auVar36._0_8_ =
           CONCAT17((char)((uint)auVar94._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar94._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar94._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar94._4_4_,0),auVar94._0_4_)))) |
           0x7f8000007f800000;
      auVar36[9] = (char)((uint)auVar94._8_4_ >> 8);
      auVar36[10] = (byte)((uint)auVar94._8_4_ >> 0x10) | 0x80;
      auVar36[0xb] = (byte)((uint)auVar94._8_4_ >> 0x18) | 0x7f;
      auVar36[0xc] = SUB41(auVar94._12_4_,0);
      auVar36[0xd] = (char)((uint)auVar94._12_4_ >> 8);
      auVar36[0xe] = (byte)((uint)auVar94._12_4_ >> 0x10) | 0x80;
      auVar36[0xf] = (byte)((uint)auVar94._12_4_ >> 0x18) | 0x7f;
      auVar12[4] = (char)iVar14;
      auVar12._0_4_ = -(uint)(65536.0 <= auVar94._0_4_);
      auVar12[5] = (char)((uint)iVar14 >> 8);
      auVar12[6] = (char)((uint)iVar14 >> 0x10);
      auVar12[7] = (char)((uint)iVar14 >> 0x18);
      auVar12[8] = (char)iVar15;
      auVar12[9] = (char)((uint)iVar15 >> 8);
      auVar12[10] = (char)((uint)iVar15 >> 0x10);
      auVar12[0xb] = (char)((uint)iVar15 >> 0x18);
      auVar12[0xc] = (char)iVar16;
      auVar12[0xd] = (char)((uint)iVar16 >> 8);
      auVar12[0xe] = (char)((uint)iVar16 >> 0x10);
      auVar12[0xf] = (char)((uint)iVar16 >> 0x18);
      auVar94 = auVar94 ^ (auVar94 ^ auVar36) & auVar12;
      fVar59 = (float)CONCAT13(auVar94[3] | (byte)((short)*(ushort *)(pdVar52 + 0xf) >> 0xf) & 0x80,
                               auVar94._0_3_);
      fVar60 = (float)CONCAT13(auVar94[0xb] |
                               (byte)((short)*(ushort *)(pdVar52 + 0xd) >> 0xf) & 0x80,auVar94._8_3_
                              );
      fVar88 = (float)CONCAT13(auVar91[3] | (byte)(sVar11 >> 0xf) & 0x80,auVar91._0_3_);
      auVar90._0_8_ =
           CONCAT17(auVar91[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,
                    CONCAT16(auVar91[6],CONCAT15(auVar91[5],CONCAT14(auVar91[4],fVar88))));
      auVar90[8] = auVar91[8];
      auVar90[9] = auVar91[9];
      auVar90[10] = auVar91[10];
      auVar90[0xb] = auVar91[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80;
      auVar92[0xc] = auVar91[0xc];
      auVar92._0_12_ = auVar90;
      auVar92[0xd] = auVar91[0xd];
      auVar92[0xe] = auVar91[0xe];
      auVar92[0xf] = auVar91[0xf] |
                     (byte)((long)CONCAT17(uVar87,CONCAT16(uVar86,uVar9)) >> 0x3f) & 0x80;
      sVar11 = puVar50[0x1c];
      uVar86 = (undefined1)puVar50[0x18];
      uVar87 = (undefined1)((ushort)puVar50[0x18] >> 8);
      uVar103 = (undefined1)puVar50[0x14];
      uVar104 = (undefined1)((ushort)puVar50[0x14] >> 8);
      uVar105 = (undefined1)puVar50[0x10];
      uVar106 = (undefined1)((ushort)puVar50[0x10] >> 8);
      uVar1 = CONCAT12(uVar86,sVar11);
      uVar2 = CONCAT13(uVar87,uVar1);
      uVar9 = CONCAT15(uVar104,CONCAT14(uVar103,uVar2));
      sVar32 = puVar50[0xc];
      uVar119 = (undefined1)puVar50[8];
      uVar120 = (undefined1)((ushort)puVar50[8] >> 8);
      uVar121 = (undefined1)puVar50[4];
      uVar122 = (undefined1)((ushort)puVar50[4] >> 8);
      uVar123 = (undefined1)*puVar50;
      uVar124 = (undefined1)((ushort)*puVar50 >> 8);
      uVar7 = CONCAT12(uVar119,sVar32);
      uVar8 = CONCAT13(uVar120,uVar7);
      uVar29 = CONCAT15(uVar122,CONCAT14(uVar121,uVar8));
      uVar62 = CONCAT44((uint)(ushort)puVar50[0x38] << 0xd,(uint)(ushort)puVar50[0x3c] << 0xd) &
               0xfffffff0fffffff;
      fVar38 = (float)((uVar7 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar39 = (float)((uVar8 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar125 = SUB41(fVar39,0);
      uVar126 = (undefined1)((uint)fVar39 >> 8);
      uVar127 = (undefined1)((uint)fVar39 >> 0x10);
      uVar128 = (undefined1)((uint)fVar39 >> 0x18);
      fVar40 = (float)(((ushort)((uint6)uVar29 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar129 = SUB41(fVar40,0);
      uVar130 = (undefined1)((uint)fVar40 >> 8);
      bVar131 = (byte)((uint)fVar40 >> 0x10);
      bVar132 = (byte)((uint)fVar40 >> 0x18);
      fVar41 = (float)(((ushort)(CONCAT17(uVar124,CONCAT16(uVar123,uVar29)) >> 0x30) & 0x7fff) <<
                      0xd) * 5.192297e+33;
      uVar133 = SUB41(fVar41,0);
      uVar134 = (undefined1)((uint)fVar41 >> 8);
      bVar135 = (byte)((uint)fVar41 >> 0x10);
      bVar136 = (byte)((uint)fVar41 >> 0x18);
      fVar81 = (float)((uVar1 & 0x7fff) << 0xd) * 5.192297e+33;
      fVar24 = (float)((uVar2 >> 0x10 & 0x7fff) << 0xd) * 5.192297e+33;
      uVar107 = SUB41(fVar24,0);
      uVar108 = (undefined1)((uint)fVar24 >> 8);
      uVar109 = (undefined1)((uint)fVar24 >> 0x10);
      uVar110 = (undefined1)((uint)fVar24 >> 0x18);
      fVar26 = (float)(((ushort)((uint6)uVar9 >> 0x20) & 0x7fff) << 0xd) * 5.192297e+33;
      uVar111 = SUB41(fVar26,0);
      uVar112 = (undefined1)((uint)fVar26 >> 8);
      bVar113 = (byte)((uint)fVar26 >> 0x10);
      bVar114 = (byte)((uint)fVar26 >> 0x18);
      fVar28 = (float)(((ushort)(CONCAT17(uVar106,CONCAT16(uVar105,uVar9)) >> 0x30) & 0x7fff) << 0xd
                      ) * 5.192297e+33;
      uVar115 = SUB41(fVar28,0);
      uVar116 = (undefined1)((uint)fVar28 >> 8);
      bVar117 = (byte)((uint)fVar28 >> 0x10);
      bVar118 = (byte)((uint)fVar28 >> 0x18);
      fVar54 = (float)(((ushort)puVar50[0x2c] & 0x7fff) << 0xd) * 5.192297e+33;
      fVar61 = (float)(((ushort)puVar50[0x28] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar67 = SUB41(fVar61,0);
      uVar68 = (undefined1)((uint)fVar61 >> 8);
      uVar69 = (undefined1)((uint)fVar61 >> 0x10);
      uVar70 = (undefined1)((uint)fVar61 >> 0x18);
      fVar73 = (float)(((ushort)puVar50[0x24] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar82 = SUB41(fVar73,0);
      uVar83 = (undefined1)((uint)fVar73 >> 8);
      bVar53 = (byte)((uint)fVar73 >> 0x10);
      bVar100 = (byte)((uint)fVar73 >> 0x18);
      fVar80 = (float)(((ushort)puVar50[0x20] & 0x7fff) << 0xd) * 5.192297e+33;
      uVar84 = SUB41(fVar80,0);
      uVar85 = (undefined1)((uint)fVar80 >> 8);
      bVar101 = (byte)((uint)fVar80 >> 0x10);
      bVar102 = (byte)((uint)fVar80 >> 0x18);
      auVar56._0_4_ = (float)uVar62 * 5.192297e+33;
      auVar56._4_4_ = (float)(uVar62 >> 0x20) * 5.192297e+33;
      auVar56._8_4_ = (float)(((ushort)puVar50[0x34] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar56._12_4_ = (float)(((ushort)puVar50[0x30] & 0x7fff) << 0xd) * 5.192297e+33;
      auVar99._0_4_ = -(uint)(65536.0 <= auVar56._0_4_);
      auVar99._4_4_ = -(uint)(65536.0 <= auVar56._4_4_);
      auVar99._8_4_ = -(uint)(65536.0 <= auVar56._8_4_);
      auVar99._12_4_ = -(uint)(65536.0 <= auVar56._12_4_);
      iVar14 = -(uint)(65536.0 <= fVar61);
      iVar15 = -(uint)(65536.0 <= fVar80);
      iVar16 = -(uint)(65536.0 <= fVar24);
      iVar18 = -(uint)(65536.0 <= fVar28);
      auVar64._0_4_ = -(uint)(65536.0 <= fVar38);
      auVar64._4_4_ = -(uint)(65536.0 <= fVar39);
      auVar64._8_4_ = -(uint)(65536.0 <= fVar40);
      auVar64._12_4_ = -(uint)(65536.0 <= fVar41);
      auVar76._0_8_ =
           CONCAT17(uVar128,CONCAT16(uVar127,CONCAT15(uVar126,CONCAT14(uVar125,fVar38)))) |
           0x7f8000007f800000;
      auVar76[8] = uVar129;
      auVar76[9] = uVar130;
      auVar76[10] = bVar131 | 0x80;
      auVar76[0xb] = bVar132 | 0x7f;
      auVar76[0xc] = uVar133;
      auVar76[0xd] = uVar134;
      auVar76[0xe] = bVar135 | 0x80;
      auVar76[0xf] = bVar136 | 0x7f;
      uVar10 = CONCAT13(uVar87,CONCAT12(uVar86,sVar11));
      uVar9 = CONCAT15(uVar104,CONCAT14(uVar103,uVar10));
      uVar30 = CONCAT13(uVar120,CONCAT12(uVar119,sVar32));
      uVar29 = CONCAT15(uVar122,CONCAT14(uVar121,uVar30));
      uVar62 = CONCAT17((short)puVar50[0x28] >> 0xf,
                        (uint7)(((byte)((short)puVar50[0x2c] >> 0xf) & 0x80) << 0x18)) &
               0x80ffffffffffffff;
      auVar37[4] = uVar125;
      auVar37._0_4_ = fVar38;
      auVar37[5] = uVar126;
      auVar37[6] = uVar127;
      auVar37[7] = uVar128;
      auVar37[8] = uVar129;
      auVar37[9] = uVar130;
      auVar37[10] = bVar131;
      auVar37[0xb] = bVar132;
      auVar37[0xc] = uVar133;
      auVar37[0xd] = uVar134;
      auVar37[0xe] = bVar135;
      auVar37[0xf] = bVar136;
      auVar65[4] = uVar125;
      auVar65._0_4_ = fVar38;
      auVar65[5] = uVar126;
      auVar65[6] = uVar127;
      auVar65[7] = uVar128;
      auVar65[8] = uVar129;
      auVar65[9] = uVar130;
      auVar65[10] = bVar131;
      auVar65[0xb] = bVar132;
      auVar65[0xc] = uVar133;
      auVar65[0xd] = uVar134;
      auVar65[0xe] = bVar135;
      auVar65[0xf] = bVar136;
      auVar65 = auVar65 ^ (auVar37 ^ auVar76) & auVar64;
      auVar77[0xc] = (char)iVar18;
      auVar77._8_4_ = -(uint)(65536.0 <= fVar26);
      auVar77[0xd] = (char)((uint)iVar18 >> 8);
      auVar77[0xe] = (char)((uint)iVar18 >> 0x10);
      auVar77[0xf] = (char)((uint)iVar18 >> 0x18);
      auVar77[4] = (char)iVar16;
      auVar77._0_4_ = -(uint)(65536.0 <= fVar81);
      auVar77[5] = (char)((uint)iVar16 >> 8);
      auVar77[6] = (char)((uint)iVar16 >> 0x10);
      auVar77[7] = (char)((uint)iVar16 >> 0x18);
      auVar22[4] = uVar107;
      auVar22._0_4_ = fVar81;
      auVar22[5] = uVar108;
      auVar22[6] = uVar109;
      auVar22[7] = uVar110;
      auVar22[8] = uVar111;
      auVar22[9] = uVar112;
      auVar22[10] = bVar113;
      auVar22[0xb] = bVar114;
      auVar22[0xc] = uVar115;
      auVar22[0xd] = uVar116;
      auVar22[0xe] = bVar117;
      auVar22[0xf] = bVar118;
      auVar47[8] = uVar111;
      auVar47._0_8_ =
           CONCAT17(uVar110,CONCAT16(uVar109,CONCAT15(uVar108,CONCAT14(uVar107,fVar81)))) |
           0x7f8000007f800000;
      auVar47[9] = uVar112;
      auVar47[10] = bVar113 | 0x80;
      auVar47[0xb] = bVar114 | 0x7f;
      auVar47[0xc] = uVar115;
      auVar47[0xd] = uVar116;
      auVar47[0xe] = bVar117 | 0x80;
      auVar47[0xf] = bVar118 | 0x7f;
      auVar78[4] = uVar107;
      auVar78._0_4_ = fVar81;
      auVar78[5] = uVar108;
      auVar78[6] = uVar109;
      auVar78[7] = uVar110;
      auVar78[8] = uVar111;
      auVar78[9] = uVar112;
      auVar78[10] = bVar113;
      auVar78[0xb] = bVar114;
      auVar78[0xc] = uVar115;
      auVar78[0xd] = uVar116;
      auVar78[0xe] = bVar117;
      auVar78[0xf] = bVar118;
      auVar78 = auVar78 ^ (auVar22 ^ auVar47) & auVar77;
      auVar95[0xc] = (char)iVar15;
      auVar95._8_4_ = -(uint)(65536.0 <= fVar73);
      auVar95[0xd] = (char)((uint)iVar15 >> 8);
      auVar95[0xe] = (char)((uint)iVar15 >> 0x10);
      auVar95[0xf] = (char)((uint)iVar15 >> 0x18);
      auVar95[4] = (char)iVar14;
      auVar95._0_4_ = -(uint)(65536.0 <= fVar54);
      auVar95[5] = (char)((uint)iVar14 >> 8);
      auVar95[6] = (char)((uint)iVar14 >> 0x10);
      auVar95[7] = (char)((uint)iVar14 >> 0x18);
      auVar13[4] = uVar67;
      auVar13._0_4_ = fVar54;
      auVar13[5] = uVar68;
      auVar13[6] = uVar69;
      auVar13[7] = uVar70;
      auVar13[8] = uVar82;
      auVar13[9] = uVar83;
      auVar13[10] = bVar53;
      auVar13[0xb] = bVar100;
      auVar13[0xc] = uVar84;
      auVar13[0xd] = uVar85;
      auVar13[0xe] = bVar101;
      auVar13[0xf] = bVar102;
      auVar46[8] = uVar82;
      auVar46._0_8_ =
           CONCAT17(uVar70,CONCAT16(uVar69,CONCAT15(uVar68,CONCAT14(uVar67,fVar54)))) |
           0x7f8000007f800000;
      auVar46[9] = uVar83;
      auVar46[10] = bVar53 | 0x80;
      auVar46[0xb] = bVar100 | 0x7f;
      auVar46[0xc] = uVar84;
      auVar46[0xd] = uVar85;
      auVar46[0xe] = bVar101 | 0x80;
      auVar46[0xf] = bVar102 | 0x7f;
      auVar96[4] = uVar67;
      auVar96._0_4_ = fVar54;
      auVar96[5] = uVar68;
      auVar96[6] = uVar69;
      auVar96[7] = uVar70;
      auVar96[8] = uVar82;
      auVar96[9] = uVar83;
      auVar96[10] = bVar53;
      auVar96[0xb] = bVar100;
      auVar96[0xc] = uVar84;
      auVar96[0xd] = uVar85;
      auVar96[0xe] = bVar101;
      auVar96[0xf] = bVar102;
      auVar96 = auVar96 ^ (auVar13 ^ auVar46) & auVar95;
      auVar45[8] = SUB41(auVar56._8_4_,0);
      auVar45._0_8_ =
           CONCAT17((char)((uint)auVar56._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar56._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar56._4_4_ >> 8),
                                      CONCAT14(SUB41(auVar56._4_4_,0),auVar56._0_4_)))) |
           0x7f8000007f800000;
      auVar45[9] = (char)((uint)auVar56._8_4_ >> 8);
      auVar45[10] = (byte)((uint)auVar56._8_4_ >> 0x10) | 0x80;
      auVar45[0xb] = (byte)((uint)auVar56._8_4_ >> 0x18) | 0x7f;
      auVar45[0xc] = SUB41(auVar56._12_4_,0);
      auVar45[0xd] = (char)((uint)auVar56._12_4_ >> 8);
      auVar45[0xe] = (byte)((uint)auVar56._12_4_ >> 0x10) | 0x80;
      auVar45[0xf] = (byte)((uint)auVar56._12_4_ >> 0x18) | 0x7f;
      auVar56 = auVar56 ^ (auVar56 ^ auVar45) & auVar99;
      fVar54 = (float)CONCAT13(auVar56[3] | (byte)((short)puVar50[0x3c] >> 0xf) & 0x80,auVar56._0_3_
                              );
      auVar55._0_8_ =
           CONCAT17(auVar56[7] | (byte)((short)puVar50[0x38] >> 0xf) & 0x80,
                    CONCAT16(auVar56[6],CONCAT15(auVar56[5],CONCAT14(auVar56[4],fVar54))));
      auVar55[8] = auVar56[8];
      auVar55[9] = auVar56[9];
      auVar55[10] = auVar56[10];
      auVar55[0xb] = auVar56[0xb] | (byte)((short)puVar50[0x34] >> 0xf) & 0x80;
      auVar57[0xc] = auVar56[0xc];
      auVar57._0_12_ = auVar55;
      auVar57[0xd] = auVar56[0xd];
      auVar57[0xe] = auVar56[0xe];
      auVar57[0xf] = auVar56[0xf] | (byte)((short)puVar50[0x30] >> 0xf) & 0x80;
      fVar80 = (float)CONCAT13(auVar96[3] | (byte)(uVar62 >> 0x18),auVar96._0_3_);
      fVar81 = (float)CONCAT13(auVar96[0xb] | (byte)((short)puVar50[0x24] >> 0xf) & 0x80,
                               auVar96._8_3_);
      fVar73 = (float)CONCAT13(auVar78[3] | (byte)(sVar11 >> 0xf) & 0x80,auVar78._0_3_);
      auVar75._0_8_ =
           CONCAT17(auVar78[7] | (byte)((int)uVar10 >> 0x1f) & 0x80,
                    CONCAT16(auVar78[6],CONCAT15(auVar78[5],CONCAT14(auVar78[4],fVar73))));
      auVar75[8] = auVar78[8];
      auVar75[9] = auVar78[9];
      auVar75[10] = auVar78[10];
      auVar75[0xb] = auVar78[0xb] | (byte)((int6)uVar9 >> 0x2f) & 0x80;
      auVar79[0xc] = auVar78[0xc];
      auVar79._0_12_ = auVar75;
      auVar79[0xd] = auVar78[0xd];
      auVar79[0xe] = auVar78[0xe];
      auVar79[0xf] = auVar78[0xf] |
                     (byte)((long)CONCAT17(uVar106,CONCAT16(uVar105,uVar9)) >> 0x3f) & 0x80;
      fVar61 = (float)CONCAT13(auVar65[3] | (byte)(sVar32 >> 0xf) & 0x80,auVar65._0_3_);
      auVar63._0_8_ =
           CONCAT17(auVar65[7] | (byte)((int)uVar30 >> 0x1f) & 0x80,
                    CONCAT16(auVar65[6],CONCAT15(auVar65[5],CONCAT14(auVar65[4],fVar61))));
      auVar63[8] = auVar65[8];
      auVar63[9] = auVar65[9];
      auVar63[10] = auVar65[10];
      auVar63[0xb] = auVar65[0xb] | (byte)((int6)uVar29 >> 0x2f) & 0x80;
      auVar66[0xc] = auVar65[0xc];
      auVar66._0_12_ = auVar63;
      auVar66[0xd] = auVar65[0xd];
      auVar66[0xe] = auVar65[0xe];
      auVar66[0xf] = auVar65[0xf] |
                     (byte)((long)CONCAT17(uVar124,CONCAT16(uVar123,uVar29)) >> 0x3f) & 0x80;
      uVar5 = (uint6)CONCAT14(-((float)CONCAT13(auVar98[7] | (byte)((int)uVar4 >> 0x1f) & 0x80,
                                                auVar98._4_3_) ==
                               (float)(CONCAT17(auVar96[7] | (byte)(uVar62 >> 0x38),
                                                CONCAT16(auVar96[6],
                                                         CONCAT15(auVar96[5],
                                                                  CONCAT14(auVar96[4],fVar80)))) >>
                                      0x20)),
                              -(uint)((float)CONCAT13(auVar98[3] | (byte)(sVar6 >> 0xf) & 0x80,
                                                      auVar98._0_3_) == fVar80)) & 0xffff0000ffff;
      auVar58[0] = ~-(fVar59 == fVar54);
      auVar58[1] = ~-((float)(CONCAT17(auVar94[7] |
                                       (byte)((short)*(ushort *)(pdVar52 + 0xe) >> 0xf) & 0x80,
                                       CONCAT16(auVar94[6],
                                                CONCAT15(auVar94[5],CONCAT14(auVar94[4],fVar59))))
                             >> 0x20) == (float)((ulong)auVar55._0_8_ >> 0x20));
      auVar58[2] = ~-(fVar60 == auVar55._8_4_);
      auVar58[3] = ~-((float)(CONCAT17(auVar94[0xf] |
                                       (byte)((short)*(ushort *)(pdVar52 + 0xc) >> 0xf) & 0x80,
                                       CONCAT16(auVar94[0xe],
                                                CONCAT15(auVar94[0xd],CONCAT14(auVar94[0xc],fVar60))
                                               )) >> 0x20) == auVar57._12_4_);
      auVar58[4] = ~(byte)uVar5;
      auVar58[5] = ~(byte)(uVar5 >> 0x20);
      auVar58[6] = ~-((float)CONCAT13(auVar98[0xb] | (byte)((int6)uVar3 >> 0x2f) & 0x80,
                                      auVar98._8_3_) == fVar81);
      auVar58[7] = ~-((float)CONCAT13(auVar98[0xf] |
                                      (byte)((long)CONCAT17(uVar72,CONCAT16(uVar71,uVar3)) >> 0x3f)
                                      & 0x80,auVar98._12_3_) ==
                     (float)(CONCAT17(auVar96[0xf] | (byte)((short)puVar50[0x20] >> 0xf) & 0x80,
                                      CONCAT16(auVar96[0xe],
                                               CONCAT15(auVar96[0xd],CONCAT14(auVar96[0xc],fVar81)))
                                     ) >> 0x20));
      auVar58[8] = ~-((float)CONCAT13(auVar97[3] |
                                      (byte)((short)*(ushort *)(pdVar52 + 7) >> 0xf) & 0x80,
                                      auVar97._0_3_) == fVar73);
      auVar58[9] = ~-((float)CONCAT13(auVar97[7] |
                                      (byte)((short)*(ushort *)(pdVar52 + 6) >> 0xf) & 0x80,
                                      auVar97._4_3_) == (float)((ulong)auVar75._0_8_ >> 0x20));
      auVar58[10] = ~-((float)CONCAT13(auVar97[0xb] |
                                       (byte)((short)*(ushort *)(pdVar52 + 5) >> 0xf) & 0x80,
                                       auVar97._8_3_) == auVar75._8_4_);
      auVar58[0xb] = ~-((float)CONCAT13(auVar97[0xf] |
                                        (byte)((short)*(ushort *)(pdVar52 + 4) >> 0xf) & 0x80,
                                        auVar97._12_3_) == auVar79._12_4_);
      auVar58[0xc] = ~-(fVar88 == fVar61);
      auVar58[0xd] = ~-((float)((ulong)auVar90._0_8_ >> 0x20) ==
                       (float)((ulong)auVar63._0_8_ >> 0x20));
      auVar58[0xe] = ~-(auVar90._8_4_ == auVar63._8_4_);
      auVar58[0xf] = ~-(auVar92._12_4_ == auVar66._12_4_);
      bVar53 = NEON_umaxv(auVar58,1);
      bVar53 = bVar53 & 1;
      goto LAB_109edfab8;
    }
    pfVar48 = (float *)param_3[1];
    if (*(float *)(pdVar52 + 0xf) != pfVar48[0x1e]) goto LAB_109edf788;
    bVar53 = (*(float *)(pdVar52 + 8) != pfVar48[0x10] ||
             (*(float *)(pdVar52 + 9) != pfVar48[0x12] ||
             (*(float *)(pdVar52 + 10) != pfVar48[0x14] ||
             (*(float *)(pdVar52 + 0xb) != pfVar48[0x16] ||
             (*(float *)(pdVar52 + 0xc) != pfVar48[0x18] ||
             (*(float *)(pdVar52 + 0xd) != pfVar48[0x1a] ||
             *(float *)(pdVar52 + 0xe) != pfVar48[0x1c])))))) ||
             ((((((*(float *)(pdVar52 + 7) != pfVar48[0xe] ||
                  *(float *)(pdVar52 + 6) != pfVar48[0xc]) || *(float *)(pdVar52 + 5) != pfVar48[10]
                 ) || *(float *)(pdVar52 + 4) != pfVar48[8]) ||
               *(float *)(pdVar52 + 3) != pfVar48[6]) || *(float *)(pdVar52 + 2) != pfVar48[4]) ||
             *(float *)(pdVar52 + 1) != pfVar48[2]);
    bVar51 = *(float *)pdVar52 != *pfVar48;
  }
  bVar53 = bVar53 | bVar51;
LAB_109edfab8:
  *param_1 = bVar53 & 1;
  return;
}



/* Entry: 109edfadc; end: 109ee0387;  */

void FUN_109edfadc(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pdVar4 = (double *)*param_3;
  if (param_2 == 0x40) {
    bVar2 = pdVar4[1] != ((double *)param_3[1])[1];
    bVar1 = *pdVar4 == *(double *)param_3[1];
  }
  else if (param_2 == 0x20) {
    bVar2 = *(float *)(pdVar4 + 1) != ((float *)param_3[1])[2];
    bVar1 = *(float *)pdVar4 == *(float *)param_3[1];
  }
  else {
    fVar5 = (float)(((int)*(short *)pdVar4 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar5) {
      fVar5 = (float)((uint)fVar5 | 0x7f800000);
    }
    fVar5 = (float)((uint)fVar5 | (int)*(short *)pdVar4 & 0x80000000U);
    fVar7 = (float)(((int)*(short *)(pdVar4 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar7) {
      fVar7 = (float)((uint)fVar7 | 0x7f800000);
    }
    uVar3 = (uint)*(short *)param_3[1];
    fVar8 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    fVar8 = (float)((uint)fVar8 | uVar3 & 0x80000000);
    uVar3 = (uint)((short *)param_3[1])[4];
    fVar6 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    bVar2 = (float)((uint)fVar7 | (int)*(short *)(pdVar4 + 1) & 0x80000000U) !=
            (float)((uint)fVar6 | uVar3 & 0x80000000);
    bVar1 = false;
    if (!NAN(fVar5) && !NAN(fVar8)) {
      bVar1 = fVar5 == fVar8;
    }
  }
  if (!bVar1) {
    bVar2 = true;
  }
  *param_1 = bVar2;
  return;
}



/* Entry: 109ee0388; end: 109ee086b;  */

void FUN_109ee0388(byte *param_1,uint param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  byte bVar30;
  uint uStack_68;
  uint uStack_64;
  
  uVar9 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  uVar9 = (uint)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
  if (uVar9 < 4) {
    if (uVar9 == 0) {
      if ((byte)param_4[0x1e] == (byte)param_3[0x1e]) {
        bVar1 = ((((((((((((((byte)param_4[0x1a] == (byte)param_3[0x1a] &&
                            (byte)param_4[0x1c] == (byte)param_3[0x1c]) &&
                           (byte)param_4[0x18] == (byte)param_3[0x18]) &&
                          (byte)param_4[0x16] == (byte)param_3[0x16]) &&
                         (byte)param_4[0x14] == (byte)param_3[0x14]) &&
                        (byte)param_4[0x12] == (byte)param_3[0x12]) &&
                       (byte)param_4[0x10] == (byte)param_3[0x10]) &&
                      (byte)param_4[0xe] == (byte)param_3[0xe]) &&
                     (byte)param_4[0xc] == (byte)param_3[0xc]) &&
                    (byte)param_4[10] == (byte)param_3[10]) && (byte)param_4[8] == (byte)param_3[8])
                  && (byte)param_4[6] == (byte)param_3[6]) && (byte)param_4[4] == (byte)param_3[4])
                && (byte)param_4[2] == (byte)param_3[2]) && (byte)*param_4 == (byte)*param_3;
        goto LAB_109ee0838;
      }
    }
    else if ((byte)param_3[0x1e] == (byte)param_4[0x1e]) {
      uStack_68 = (uint)(byte)param_4[0x18];
      uStack_64 = (uint)(byte)param_4[0x1a];
      uVar9 = (uint)(byte)param_4[0x16];
      uVar12 = (uint)(byte)param_4[0x14];
      uVar13 = (uint)(byte)param_4[0x12];
      uVar14 = (uint)(byte)param_4[0x10];
      uVar15 = (uint)(byte)param_4[0xe];
      uVar16 = (uint)(byte)param_4[0xc];
      uVar17 = (uint)(byte)param_4[10];
      uVar18 = (uint)(byte)param_4[8];
      uVar2 = (uint)(byte)param_4[6];
      uVar5 = (uint)(byte)param_4[4];
      uVar6 = (uint)(byte)param_4[2];
      uVar7 = (uint)(byte)*param_4;
      uVar8 = (uint)(byte)param_3[0x1a];
      uVar19 = (uint)(byte)param_3[0x18];
      uVar20 = (uint)(byte)param_3[0x16];
      uVar21 = (uint)(byte)param_3[0x14];
      uVar22 = (uint)(byte)param_3[0x12];
      uVar23 = (uint)(byte)param_3[0x10];
      uVar24 = (uint)(byte)param_3[0xe];
      uVar25 = (uint)(byte)param_3[0xc];
      uVar26 = (uint)(byte)param_3[10];
      uVar27 = (uint)(byte)param_3[8];
      uVar28 = (uint)(byte)param_3[6];
      uVar29 = (uint)(byte)param_3[4];
      uVar10 = (uint)(byte)param_3[2];
      uVar11 = (uint)(byte)*param_3;
      uVar4 = (uint)(byte)param_4[0x1c];
      uVar3 = (uint)(byte)param_3[0x1c];
      goto LAB_109ee07f8;
    }
  }
  else if (uVar9 == 4) {
    if ((ushort)param_3[0x1e] == (ushort)param_4[0x1e]) {
      uStack_68 = (uint)(ushort)param_4[0x18];
      uStack_64 = (uint)(ushort)param_4[0x1a];
      uVar9 = (uint)(ushort)param_4[0x16];
      uVar12 = (uint)(ushort)param_4[0x14];
      uVar13 = (uint)(ushort)param_4[0x12];
      uVar14 = (uint)(ushort)param_4[0x10];
      uVar15 = (uint)(ushort)param_4[0xe];
      uVar16 = (uint)(ushort)param_4[0xc];
      uVar17 = (uint)(ushort)param_4[10];
      uVar18 = (uint)(ushort)param_4[8];
      uVar2 = (uint)(ushort)param_4[6];
      uVar5 = (uint)(ushort)param_4[4];
      uVar6 = (uint)(ushort)param_4[2];
      uVar7 = (uint)(ushort)*param_4;
      uVar8 = (uint)(ushort)param_3[0x1a];
      uVar19 = (uint)(ushort)param_3[0x18];
      uVar20 = (uint)(ushort)param_3[0x16];
      uVar21 = (uint)(ushort)param_3[0x14];
      uVar22 = (uint)(ushort)param_3[0x12];
      uVar23 = (uint)(ushort)param_3[0x10];
      uVar24 = (uint)(ushort)param_3[0xe];
      uVar25 = (uint)(ushort)param_3[0xc];
      uVar26 = (uint)(ushort)param_3[10];
      uVar27 = (uint)(ushort)param_3[8];
      uVar28 = (uint)(ushort)param_3[6];
      uVar29 = (uint)(ushort)param_3[4];
      uVar10 = (uint)(ushort)param_3[2];
      uVar11 = (uint)(ushort)*param_3;
      uVar4 = (uint)(ushort)param_4[0x1c];
      uVar3 = (uint)(ushort)param_3[0x1c];
LAB_109ee07f8:
      bVar1 = false;
      if (((((((((((((uVar3 == uVar4 && uVar8 == uStack_64) && uVar19 == uStack_68) &&
                   uVar20 == uVar9) && uVar21 == uVar12) && uVar22 == uVar13) && uVar23 == uVar14)
               && uVar24 == uVar15) && uVar25 == uVar16) && uVar26 == uVar17) && uVar27 == uVar18)
           && uVar28 == uVar2) && uVar29 == uVar5) && uVar10 == uVar6) {
        bVar1 = uVar11 == uVar7;
      }
LAB_109ee0838:
      bVar30 = !bVar1;
      goto LAB_109ee0844;
    }
  }
  else if (uVar9 == 5) {
    if (param_3[0x1e] == param_4[0x1e]) {
      uStack_64 = param_4[0x1a];
      uStack_68 = param_4[0x18];
      uVar9 = param_4[0x16];
      uVar12 = param_4[0x14];
      uVar13 = param_4[0x12];
      uVar14 = param_4[0x10];
      uVar15 = param_4[0xe];
      uVar16 = param_4[0xc];
      uVar17 = param_4[10];
      uVar18 = param_4[8];
      uVar2 = param_4[6];
      uVar5 = param_4[4];
      uVar6 = param_4[2];
      uVar7 = *param_4;
      uVar8 = param_3[0x1a];
      uVar19 = param_3[0x18];
      uVar20 = param_3[0x16];
      uVar21 = param_3[0x14];
      uVar22 = param_3[0x12];
      uVar23 = param_3[0x10];
      uVar24 = param_3[0xe];
      uVar25 = param_3[0xc];
      uVar26 = param_3[10];
      uVar27 = param_3[8];
      uVar28 = param_3[6];
      uVar29 = param_3[4];
      uVar10 = param_3[2];
      uVar11 = *param_3;
      uVar4 = param_4[0x1c];
      uVar3 = param_3[0x1c];
      goto LAB_109ee07f8;
    }
  }
  else if (*(long *)(param_3 + 0x1e) == *(long *)(param_4 + 0x1e)) {
    bVar30 = NEON_umaxv(CONCAT17(-((char)(~-(*(long *)(param_3 + 0x1c) == *(long *)(param_4 + 0x1c))
                                         << 7) < '\0'),
                                 CONCAT16(-((char)(~-(*(long *)(param_3 + 0x1a) ==
                                                     *(long *)(param_4 + 0x1a)) << 7) < '\0'),
                                          CONCAT15(-((char)(~-(*(long *)(param_3 + 0x18) ==
                                                              *(long *)(param_4 + 0x18)) << 7) <
                                                    '\0'),CONCAT14(-((char)(~-(*(long *)(param_3 +
                                                                                        0x16) ==
                                                                              *(long *)(param_4 +
                                                                                       0x16)) << 7)
                                                                    < '\0'),CONCAT13(-((char)((~-(*(
                                                  long *)(param_3 + 0x14) ==
                                                  *(long *)(param_4 + 0x14)) |
                                                  ~-(*(long *)(param_3 + 0xc) ==
                                                    *(long *)(param_4 + 0xc))) << 7) < '\0'),
                                                  CONCAT12(-((char)((~-(*(long *)(param_3 + 0x12) ==
                                                                       *(long *)(param_4 + 0x12)) |
                                                                    ~-(*(long *)(param_3 + 10) ==
                                                                      *(long *)(param_4 + 10))) << 7
                                                                   ) < '\0'),
                                                           CONCAT11(-((char)((~-(*(long *)(param_3 +
                                                                                          0x10) ==
                                                                                *(long *)(param_4 +
                                                                                         0x10)) |
                                                                             ~-(*(long *)(param_3 +
                                                                                         8) ==
                                                                               *(long *)(param_4 + 8
                                                                                        ))) << 7) <
                                                                     '\0'),-((char)((~-(*(long *)(
                                                  param_3 + 0xe) == *(long *)(param_4 + 0xe)) |
                                                  ~-(*(long *)(param_3 + 6) ==
                                                    *(long *)(param_4 + 6))) << 7) < '\0')))))))),1)
    ;
    bVar30 = bVar30 | *(long *)(param_3 + 4) != *(long *)(param_4 + 4) |
             (*(long *)(param_3 + 2) != *(long *)(param_4 + 2) ||
             *(long *)param_3 != *(long *)param_4);
    goto LAB_109ee0844;
  }
  bVar30 = 1;
LAB_109ee0844:
  *param_1 = bVar30 & 1;
  return;
}



/* Entry: 109ee086c; end: 109ee2983;  */

void FUN_109ee086c(undefined8 param_1,uint param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
  uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = (uint)LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
  if (uVar2 < 4) {
    if (uVar2 == 0) {
      bVar1 = (byte)*param_4 == (byte)*param_3 && (byte)param_4[2] == (byte)param_3[2];
      goto LAB_109ee0910;
    }
    uVar2 = (uint)(byte)*param_3;
    uVar3 = (uint)(byte)param_3[2];
    uVar4 = (uint)(byte)*param_4;
    uVar5 = (uint)(byte)param_4[2];
  }
  else if (uVar2 == 4) {
    uVar2 = (uint)(ushort)*param_3;
    uVar3 = (uint)(ushort)param_3[2];
    uVar4 = (uint)(ushort)*param_4;
    uVar5 = (uint)(ushort)param_4[2];
  }
  else {
    if (uVar2 != 5) {
      bVar1 = *(long *)(param_3 + 2) == *(long *)(param_4 + 2) &&
              *(long *)param_3 == *(long *)param_4;
      goto LAB_109ee0910;
    }
    uVar2 = *param_3;
    uVar3 = param_3[2];
    uVar4 = *param_4;
    uVar5 = param_4[2];
  }
  bVar1 = false;
  if (uVar3 == uVar5) {
    bVar1 = uVar2 == uVar4;
  }
LAB_109ee0910:
  *(bool *)param_1 = !bVar1;
  return;
}



/* Entry: 109ee2984; end: 109ee2c07;  */

void FUN_109ee2984(ulong param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar3 = 0;
      uVar2 = param_1;
      do {
        fVar4 = (float)(((int)*(short *)(*param_4 + lVar3) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar4) {
          fVar4 = (float)((uint)fVar4 | 0x7f800000);
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((uint)fVar4 | (int)*(short *)(*param_4 + lVar3) & 0x80000000U);
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar3) = uVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar3 = 0;
      uVar2 = param_1;
      do {
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
          fVar4 = (float)(((uint)uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
          if (65536.0 <= fVar4) {
            fVar4 = (float)((uint)fVar4 | 0x7f800000);
          }
          FUN_109f64b28((uint)fVar4 | (int)(uVar2 >> 0xf) << 0x1f);
        }
        else {
          func_0x000109f683f4(*(undefined4 *)(*param_4 + lVar3));
          fVar4 = (float)(((uint)uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
          if (65536.0 <= fVar4) {
            fVar4 = (float)((uint)fVar4 | 0x7f800000);
          }
          func_0x000109f683f4((uint)fVar4 | (int)(uVar2 >> 0xf) << 0x1f);
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar3) = uVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_2 != 0) {
    lVar3 = 0;
    uVar2 = param_1;
    do {
      dVar5 = *(double *)(*param_4 + lVar3);
      if ((param_5 >> 0x12 & 1) == 0) {
        fVar4 = (float)dVar5;
        if (((ulong)dVar5 & 0x20000000000) == 0) {
          fVar4 = (float)((uint)(float)dVar5 & 0xffffefff);
        }
        FUN_109f64b28((uint)((ulong)dVar5 >> 0x29) & (uint)(((ulong)dVar5 & 0x1ffffffffff) != 0) |
                      (uint)fVar4);
        fVar4 = (float)(((uint)uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar4) {
          fVar4 = (float)((uint)fVar4 | 0x7f800000);
        }
        FUN_109f64b28((uint)fVar4 | (int)(uVar2 >> 0xf) << 0x1f);
      }
      else {
        uVar2 = 1;
        func_0x000109f682f4();
        func_0x000109f683f4();
        fVar4 = (float)(((uint)uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar4) {
          fVar4 = (float)((uint)fVar4 | 0x7f800000);
        }
        func_0x000109f683f4((uint)fVar4 | (int)(uVar2 >> 0xf) << 0x1f);
      }
      uVar1 = (ushort)uVar2 & 0x8000;
      if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar2;
      }
      *(ushort *)(param_1 + lVar3) = uVar1;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109ee2c08; end: 109ee2ff7;  */

void FUN_109ee2c08(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  
  uVar2 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        fVar4 = (float)(((int)*(short *)(*param_4 + lVar3) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar4) {
          fVar4 = (float)((uint)fVar4 | 0x7f800000);
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((uint)fVar4 | (int)*(short *)(*param_4 + lVar3) & 0x80000000U);
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar3) = uVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        FUN_109f64b28(*(undefined4 *)(*param_4 + lVar3));
        fVar4 = (float)((uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar4) {
          fVar4 = (float)((uint)fVar4 | 0x7f800000);
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((uint)fVar4 | (uVar2 >> 0xf) << 0x1f);
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar3) = uVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_2 != 0) {
    lVar3 = 0;
    do {
      dVar5 = *(double *)(*param_4 + lVar3);
      fVar4 = (float)dVar5;
      if (((ulong)dVar5 & 0x20000000000) == 0) {
        fVar4 = (float)((uint)(float)dVar5 & 0xffffefff);
      }
      FUN_109f64b28((uint)((ulong)dVar5 >> 0x29) & (uint)(((ulong)dVar5 & 0x1ffffffffff) != 0) |
                    (uint)fVar4);
      fVar4 = (float)((uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar4) {
        fVar4 = (float)((uint)fVar4 | 0x7f800000);
      }
      if ((param_5 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4((uint)fVar4 | (uVar2 >> 0xf) << 0x1f);
      }
      uVar1 = (ushort)uVar2 & 0x8000;
      if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar2;
      }
      *(ushort *)(param_1 + lVar3) = uVar1;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109ee2ff8; end: 109ee3137;  */

void FUN_109ee2ff8(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        fVar2 = (float)((uint)fVar5 & 0x80000000);
        if (((uint)((uint)fVar5 < 0x800000) & param_5 >> 0xd) == 0) {
          fVar2 = fVar5;
        }
        *(uint *)(param_1 + lVar4) = (uint)fVar2 | (int)*(short *)(*param_4 + lVar4) & 0x80000000U;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar3 = *(uint *)(*param_4 + lVar4);
        uVar1 = uVar3 & 0x80000000;
        if (((uint)((uVar3 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar1 = uVar3;
        }
        *(uint *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      dVar6 = *(double *)(*param_4 + lVar4);
      if ((param_5 >> 0x13 & 1) == 0) {
        fVar5 = (float)dVar6;
      }
      else {
        func_0x000109f682f4(1);
        fVar5 = SUB84(dVar6,0);
      }
      fVar2 = (float)((uint)fVar5 & 0x80000000);
      if (((uint)(((uint)fVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
        fVar2 = fVar5;
      }
      *(float *)(param_1 + lVar4) = fVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ee3138; end: 109ee3243;  */

void FUN_109ee3138(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  double dVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  float fVar6;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        fVar6 = (float)(((int)*(short *)(*param_4 + lVar3) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar6) {
          fVar6 = (float)((uint)fVar6 | 0x7f800000);
        }
        dVar5 = (double)(float)((uint)fVar6 | (int)*(short *)(*param_4 + lVar3) & 0x80000000U);
        dVar1 = (double)((ulong)dVar5 & 0x8000000000000000);
        if (((uint)(((ulong)dVar5 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
          dVar1 = dVar5;
        }
        *(double *)(param_1 + lVar3) = dVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        dVar5 = (double)*(float *)(*param_4 + lVar3);
        dVar1 = (double)((ulong)dVar5 & 0x8000000000000000);
        if (((uint)(((ulong)dVar5 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
          dVar1 = dVar5;
        }
        *(double *)(param_1 + lVar3) = dVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_2 != 0) {
    lVar3 = 0;
    do {
      uVar4 = *(ulong *)(*param_4 + lVar3);
      uVar2 = uVar4 & 0x8000000000000000;
      if (((uint)((uVar4 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        uVar2 = uVar4;
      }
      *(ulong *)(param_1 + lVar3) = uVar2;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109ee3244; end: 109ee339b;  */

void FUN_109ee3244(ulong param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  
  if (param_2 != 0) {
    lVar3 = 0;
    uVar2 = param_1;
    do {
      fVar4 = *(float *)(*param_4 + lVar3);
      if (param_3 < 0x21) {
        if (0x10 < param_3) {
          if ((param_5 >> 0x12 & 1) != 0) goto LAB_109ee3318;
          goto LAB_109ee32d4;
        }
        if ((param_5 >> 0x12 & 1) != 0) goto LAB_109ee335c;
LAB_109ee3354:
        FUN_109f64b28(fVar4);
      }
      else {
        dVar5 = (double)fVar4;
        if ((param_5 >> 0x12 & 1) == 0) {
          if (((ulong)dVar5 & 0x20000000000) == 0) {
            fVar4 = (float)((uint)fVar4 & 0xffffefff);
          }
          fVar4 = (float)((uint)((ulong)dVar5 >> 0x29) & (uint)(((ulong)dVar5 & 0x1ffffffffff) != 0)
                         | (uint)fVar4);
LAB_109ee32d4:
          FUN_109f64b28(fVar4);
          fVar4 = (float)(((uint)uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
          if (65536.0 <= fVar4) {
            fVar4 = (float)((uint)fVar4 | 0x7f800000);
          }
          fVar4 = (float)((uint)fVar4 | (int)(uVar2 >> 0xf) << 0x1f);
          goto LAB_109ee3354;
        }
        uVar2 = 1;
        func_0x000109f682f4(dVar5);
LAB_109ee3318:
        func_0x000109f683f4();
        fVar4 = (float)(((uint)uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar4) {
          fVar4 = (float)((uint)fVar4 | 0x7f800000);
        }
        fVar4 = (float)((uint)fVar4 | (int)(uVar2 >> 0xf) << 0x1f);
LAB_109ee335c:
        func_0x000109f683f4(fVar4);
      }
      uVar1 = (ushort)uVar2 & 0x8000;
      if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar2;
      }
      *(ushort *)(param_1 + lVar3) = uVar1;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109ee339c; end: 109ee3bab;  */

void FUN_109ee339c(long param_1,uint param_2,int param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        fVar2 = (float)(((int)*(short *)(*param_4 + lVar1) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar2) {
          fVar2 = (float)((uint)fVar2 | 0x7f800000);
        }
        *(byte *)(param_1 + lVar1) =
             (byte)(int)(float)((uint)fVar2 | (int)*(short *)(*param_4 + lVar1) & 0x80000000U) & 1;
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        *(byte *)(param_1 + lVar1) = (byte)(int)*(float *)(*param_4 + lVar1) & 1;
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(byte *)(param_1 + lVar1) = (byte)(int)*(double *)(*param_4 + lVar1) & 1;
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109ee3bac; end: 109ee3ebf;  */

void FUN_109ee3bac(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = (float)((*(ushort *)(*param_4 + lVar4) & 0x7fff) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(ABS(fVar5));
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = 0.0;
        if (((uint)((uint)ABS(*(float *)(*param_4 + lVar4)) < 0x800000) & param_5 >> 0xd) == 0) {
          fVar5 = ABS(*(float *)(*param_4 + lVar4));
        }
        *(float *)(param_1 + lVar4) = fVar5;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      dVar2 = 0.0;
      if (((uint)((ulong)ABS(*(double *)(*param_4 + lVar4)) >> 0x34 == 0) & param_5 >> 0xe) == 0) {
        dVar2 = ABS(*(double *)(*param_4 + lVar4));
      }
      *(double *)(param_1 + lVar4) = dVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ee3ec0; end: 109ee43ff;  */

void FUN_109ee3ec0(uint *param_1,float *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (((((param_2[0x1e] == param_3[0x1e]) && (param_2[0x1c] == param_3[0x1c])) &&
       (param_2[0x1a] == param_3[0x1a])) &&
      (((param_2[0x18] == param_3[0x18] && (param_2[0x16] == param_3[0x16])) &&
       ((param_2[0x14] == param_3[0x14] &&
        ((param_2[0x12] == param_3[0x12] && (param_2[0x10] == param_3[0x10])))))))) &&
     ((param_2[0xe] == param_3[0xe] &&
      (((((param_2[0xc] == param_3[0xc] && (param_2[10] == param_3[10])) &&
         (param_2[8] == param_3[8])) && ((param_2[6] == param_3[6] && (param_2[4] == param_3[4]))))
       && ((param_2[2] == param_3[2] && (uVar2 = 0x3f800000, *param_2 != *param_3)))))))) {
    uVar2 = 0;
  }
  uVar1 = 0;
  if (((uint)(uVar2 < 0x800000) & param_4 >> 0xd) == 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 109ee4400; end: 109ee4557;  */

void FUN_109ee4400(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar6 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar6) {
          fVar6 = (float)((uint)fVar6 | 0x7f800000);
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((int)(float)((uint)fVar6 |
                                          (int)*(short *)(*param_4 + lVar4) & 0x80000000U));
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar5 = (uint)*(float *)(*param_4 + lVar4);
        uVar3 = uVar5 & 0x80000000;
        if (((uint)((uVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar3 = uVar5;
        }
        *(uint *)(param_1 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      uVar7 = (ulong)*(double *)(*param_4 + lVar4);
      uVar2 = uVar7 & 0x8000000000000000;
      if (((uint)((uVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        uVar2 = uVar7;
      }
      *(ulong *)(param_1 + lVar4) = uVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ee4558; end: 109ee46d3;  */

void FUN_109ee4558(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  
  uVar4 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar5 = 0;
      do {
        fVar6 = (float)(((int)*(short *)(*param_4 + lVar5) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar6) {
          fVar6 = (float)((uint)fVar6 | 0x7f800000);
        }
        fVar6 = (float)((uint)fVar6 | (int)*(short *)(*param_4 + lVar5) & 0x80000000U);
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(fVar6);
        }
        uVar1 = (ushort)uVar4 & 0x8000;
        if (((uint)((uVar4 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar4;
        }
        *(ushort *)(param_1 + lVar5) = uVar1;
        lVar5 = lVar5 + 8;
      } while ((ulong)param_2 << 3 != lVar5);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar5 = 0;
      do {
        fVar6 = *(float *)(*param_4 + lVar5);
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar2 = (float)((uint)fVar6 & 0x80000000);
        if (((uint)(((uint)fVar6 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar2 = fVar6;
        }
        *(float *)(param_1 + lVar5) = fVar2;
        lVar5 = lVar5 + 8;
      } while ((ulong)param_2 << 3 != lVar5);
    }
  }
  else if (param_2 != 0) {
    lVar5 = 0;
    do {
      dVar7 = *(double *)(*param_4 + lVar5);
      if (dVar7 <= 0.0) {
        dVar7 = 0.0;
      }
      dVar3 = (double)((ulong)dVar7 & 0x8000000000000000);
      if (((uint)(((ulong)dVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar3 = dVar7;
      }
      *(double *)(param_1 + lVar5) = dVar3;
      lVar5 = lVar5 + 8;
    } while ((ulong)param_2 << 3 != lVar5);
  }
  return;
}



/* Entry: 109ee46d4; end: 109ee482b;  */

void FUN_109ee46d4(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        fVar4 = (float)(((int)*(short *)(*param_4 + lVar3) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar4) {
          fVar4 = (float)((uint)fVar4 | 0x7f800000);
        }
        _cosf((uint)fVar4 | (int)*(short *)(*param_4 + lVar3) & 0x80000000U);
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4();
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar3) = uVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        uVar5 = (ulong)*(uint *)(*param_4 + lVar3);
        _cosf();
        uVar2 = (uint)uVar5 & 0x80000000;
        if (((uint)((uVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar2 = (uint)uVar5;
        }
        *(uint *)(param_1 + lVar3) = uVar2;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_2 != 0) {
    lVar3 = 0;
    do {
      uVar6 = *(ulong *)(*param_4 + lVar3);
      _cos();
      uVar5 = uVar6 & 0x8000000000000000;
      if (((uint)((uVar6 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        uVar5 = uVar6;
      }
      *(ulong *)(param_1 + lVar3) = uVar5;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109ee482c; end: 109ee4b63;  */

void FUN_109ee482c(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  ulong uVar6;
  double dVar7;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        _cosf((float)((uint)fVar5 | (int)*(short *)(*param_4 + lVar4) & 0x80000000U) * 6.2831855);
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4();
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar6 = (ulong)(uint)(*(float *)(*param_4 + lVar4) * 6.2831855);
        _cosf();
        uVar3 = (uint)uVar6 & 0x80000000;
        if (((uint)((uVar6 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar3 = (uint)uVar6;
        }
        *(uint *)(param_1 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      fVar5 = (float)(*(double *)(*param_4 + lVar4) * 6.2831853);
      _cosf();
      dVar7 = (double)fVar5;
      dVar2 = (double)((ulong)dVar7 & 0x8000000000000000);
      if (((uint)(((ulong)dVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar2 = dVar7;
      }
      *(double *)(param_1 + lVar4) = dVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ee4b64; end: 109ee4c6b;  */

void FUN_109ee4b64(long param_1,uint param_2,long *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      lVar2 = param_3[1];
      if (*(float *)(*param_3 + lVar3) == 0.0) {
        lVar2 = param_3[2];
      }
      uVar4 = *(uint *)(lVar2 + lVar3);
      uVar1 = uVar4 & 0x80000000;
      if (((uint)((uVar4 & 0x7f800000) == 0) & param_4 >> 0xd) == 0) {
        uVar1 = uVar4;
      }
      *(uint *)(param_1 + lVar3) = uVar1;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109ee4c6c; end: 109ee4df7;  */

void FUN_109ee4c6c(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar6 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar6) {
          fVar6 = (float)((uint)fVar6 | 0x7f800000);
        }
        fVar5 = (float)(((int)*(short *)(param_4[1] + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((float)((uint)fVar6 | (int)*(short *)(*param_4 + lVar4) & 0x80000000U)
                              / (float)((uint)fVar5 |
                                       (int)*(short *)(param_4[1] + lVar4) & 0x80000000U));
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = *(float *)(*param_4 + lVar4) / *(float *)(param_4[1] + lVar4);
        fVar6 = (float)((uint)fVar5 & 0x80000000);
        if (((uint)(((uint)fVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar6 = fVar5;
        }
        *(float *)(param_1 + lVar4) = fVar6;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      dVar7 = *(double *)(*param_4 + lVar4) / *(double *)(param_4[1] + lVar4);
      dVar2 = (double)((ulong)dVar7 & 0x8000000000000000);
      if (((uint)(((ulong)dVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar2 = dVar7;
      }
      *(double *)(param_1 + lVar4) = dVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ee4df8; end: 109ee5e67;  */

void FUN_109ee4df8(double *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  double *pdVar3;
  float *pfVar4;
  double *pdVar5;
  short *psVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  pdVar3 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar5 = (double *)param_3[1];
    dVar9 = pdVar3[0xe] * pdVar5[0xe] + pdVar5[0xf] * pdVar3[0xf] + pdVar5[0xd] * pdVar3[0xd] +
            pdVar5[0xc] * pdVar3[0xc] + pdVar5[0xb] * pdVar3[0xb] + pdVar5[10] * pdVar3[10] +
            pdVar5[9] * pdVar3[9] + pdVar5[8] * pdVar3[8] + pdVar5[7] * pdVar3[7] +
            pdVar5[6] * pdVar3[6] + pdVar5[5] * pdVar3[5] + pdVar5[4] * pdVar3[4] +
            pdVar5[3] * pdVar3[3] + pdVar5[2] * pdVar3[2] + pdVar5[1] * pdVar3[1] +
            *pdVar5 * *pdVar3;
    *param_1 = dVar9;
    if (((param_4 >> 0xe & 1) != 0) && (((ulong)dVar9 & 0x7ff0000000000000) == 0)) {
      *param_1 = (double)((ulong)dVar9 & 0x8000000000000000);
    }
  }
  else if (param_2 == 0x20) {
    pfVar4 = (float *)param_3[1];
    fVar7 = *(float *)(pdVar3 + 0xe) * pfVar4[0x1c] + pfVar4[0x1e] * *(float *)(pdVar3 + 0xf) +
            pfVar4[0x1a] * *(float *)(pdVar3 + 0xd) + pfVar4[0x18] * *(float *)(pdVar3 + 0xc) +
            pfVar4[0x16] * *(float *)(pdVar3 + 0xb) + pfVar4[0x14] * *(float *)(pdVar3 + 10) +
            pfVar4[0x12] * *(float *)(pdVar3 + 9) + pfVar4[0x10] * *(float *)(pdVar3 + 8) +
            pfVar4[0xe] * *(float *)(pdVar3 + 7) + pfVar4[0xc] * *(float *)(pdVar3 + 6) +
            pfVar4[10] * *(float *)(pdVar3 + 5) + pfVar4[8] * *(float *)(pdVar3 + 4) +
            pfVar4[6] * *(float *)(pdVar3 + 3) + pfVar4[4] * *(float *)(pdVar3 + 2) +
            pfVar4[2] * *(float *)(pdVar3 + 1) + *pfVar4 * *(float *)pdVar3;
    *(float *)param_1 = fVar7;
    if (((param_4 >> 0xd & 1) != 0) && (((uint)fVar7 & 0x7f800000) == 0)) {
      *(uint *)param_1 = (uint)fVar7 & 0x80000000;
    }
  }
  else {
    fVar7 = (float)(((int)*(short *)pdVar3 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar7) {
      fVar7 = (float)((uint)fVar7 | 0x7f800000);
    }
    fVar10 = (float)(((int)*(short *)(pdVar3 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar10) {
      fVar10 = (float)((uint)fVar10 | 0x7f800000);
    }
    fVar11 = (float)(((int)*(short *)(pdVar3 + 2) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar11) {
      fVar11 = (float)((uint)fVar11 | 0x7f800000);
    }
    fVar12 = (float)(((int)*(short *)(pdVar3 + 3) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar12) {
      fVar12 = (float)((uint)fVar12 | 0x7f800000);
    }
    fVar13 = (float)(((int)*(short *)(pdVar3 + 4) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar13) {
      fVar13 = (float)((uint)fVar13 | 0x7f800000);
    }
    fVar14 = (float)(((int)*(short *)(pdVar3 + 5) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar14) {
      fVar14 = (float)((uint)fVar14 | 0x7f800000);
    }
    fVar15 = (float)(((int)*(short *)(pdVar3 + 6) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar15) {
      fVar15 = (float)((uint)fVar15 | 0x7f800000);
    }
    fVar16 = (float)(((int)*(short *)(pdVar3 + 7) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar16) {
      fVar16 = (float)((uint)fVar16 | 0x7f800000);
    }
    fVar17 = (float)(((int)*(short *)(pdVar3 + 8) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar17) {
      fVar17 = (float)((uint)fVar17 | 0x7f800000);
    }
    fVar18 = (float)(((int)*(short *)(pdVar3 + 9) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar18) {
      fVar18 = (float)((uint)fVar18 | 0x7f800000);
    }
    fVar19 = (float)(((int)*(short *)(pdVar3 + 10) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar19) {
      fVar19 = (float)((uint)fVar19 | 0x7f800000);
    }
    fVar20 = (float)(((int)*(short *)(pdVar3 + 0xb) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar20) {
      fVar20 = (float)((uint)fVar20 | 0x7f800000);
    }
    fVar21 = (float)(((int)*(short *)(pdVar3 + 0xc) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar21) {
      fVar21 = (float)((uint)fVar21 | 0x7f800000);
    }
    fVar22 = (float)(((int)*(short *)(pdVar3 + 0xd) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar22) {
      fVar22 = (float)((uint)fVar22 | 0x7f800000);
    }
    fVar23 = (float)(((int)*(short *)(pdVar3 + 0xe) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar23) {
      fVar23 = (float)((uint)fVar23 | 0x7f800000);
    }
    fVar24 = (float)(((int)*(short *)(pdVar3 + 0xf) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar24) {
      fVar24 = (float)((uint)fVar24 | 0x7f800000);
    }
    psVar6 = (short *)param_3[1];
    sVar1 = *psVar6;
    uVar2 = (uint)sVar1;
    fVar25 = (float)(((int)sVar1 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar25) {
      fVar25 = (float)((uint)fVar25 | 0x7f800000);
    }
    fVar26 = (float)(((int)psVar6[4] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar26) {
      fVar26 = (float)((uint)fVar26 | 0x7f800000);
    }
    fVar27 = (float)(((int)psVar6[8] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar27) {
      fVar27 = (float)((uint)fVar27 | 0x7f800000);
    }
    fVar28 = (float)(((int)psVar6[0xc] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar28) {
      fVar28 = (float)((uint)fVar28 | 0x7f800000);
    }
    fVar29 = (float)(((int)psVar6[0x10] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar29) {
      fVar29 = (float)((uint)fVar29 | 0x7f800000);
    }
    fVar30 = (float)(((int)psVar6[0x14] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar30) {
      fVar30 = (float)((uint)fVar30 | 0x7f800000);
    }
    fVar31 = (float)(((int)psVar6[0x18] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar31) {
      fVar31 = (float)((uint)fVar31 | 0x7f800000);
    }
    fVar32 = (float)(((int)psVar6[0x1c] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar32) {
      fVar32 = (float)((uint)fVar32 | 0x7f800000);
    }
    fVar33 = (float)(((int)psVar6[0x20] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar33) {
      fVar33 = (float)((uint)fVar33 | 0x7f800000);
    }
    fVar34 = (float)(((int)psVar6[0x24] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar34) {
      fVar34 = (float)((uint)fVar34 | 0x7f800000);
    }
    fVar35 = (float)(((int)psVar6[0x28] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar35) {
      fVar35 = (float)((uint)fVar35 | 0x7f800000);
    }
    fVar36 = (float)(((int)psVar6[0x2c] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar36) {
      fVar36 = (float)((uint)fVar36 | 0x7f800000);
    }
    fVar37 = (float)(((int)psVar6[0x30] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar37) {
      fVar37 = (float)((uint)fVar37 | 0x7f800000);
    }
    fVar38 = (float)(((int)psVar6[0x34] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar38) {
      fVar38 = (float)((uint)fVar38 | 0x7f800000);
    }
    fVar39 = (float)(((int)psVar6[0x38] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar39) {
      fVar39 = (float)((uint)fVar39 | 0x7f800000);
    }
    fVar8 = (float)(((int)psVar6[0x3c] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    if ((param_4 >> 0x12 & 1) == 0) {
      FUN_109f64b28();
    }
    else {
      func_0x000109f683f4((float)((uint)fVar23 | (int)*(short *)(pdVar3 + 0xe) & 0x80000000U) *
                          (float)((uint)fVar39 | (int)psVar6[0x38] & 0x80000000U) +
                          (float)((uint)fVar8 | (int)psVar6[0x3c] & 0x80000000U) *
                          (float)((uint)fVar24 | (int)*(short *)(pdVar3 + 0xf) & 0x80000000U) +
                          (float)((uint)fVar38 | (int)psVar6[0x34] & 0x80000000U) *
                          (float)((uint)fVar22 | (int)*(short *)(pdVar3 + 0xd) & 0x80000000U) +
                          (float)((uint)fVar37 | (int)psVar6[0x30] & 0x80000000U) *
                          (float)((uint)fVar21 | (int)*(short *)(pdVar3 + 0xc) & 0x80000000U) +
                          (float)((uint)fVar36 | (int)psVar6[0x2c] & 0x80000000U) *
                          (float)((uint)fVar20 | (int)*(short *)(pdVar3 + 0xb) & 0x80000000U) +
                          (float)((uint)fVar35 | (int)psVar6[0x28] & 0x80000000U) *
                          (float)((uint)fVar19 | (int)*(short *)(pdVar3 + 10) & 0x80000000U) +
                          (float)((uint)fVar34 | (int)psVar6[0x24] & 0x80000000U) *
                          (float)((uint)fVar18 | (int)*(short *)(pdVar3 + 9) & 0x80000000U) +
                          (float)((uint)fVar33 | (int)psVar6[0x20] & 0x80000000U) *
                          (float)((uint)fVar17 | (int)*(short *)(pdVar3 + 8) & 0x80000000U) +
                          (float)((uint)fVar32 | (int)psVar6[0x1c] & 0x80000000U) *
                          (float)((uint)fVar16 | (int)*(short *)(pdVar3 + 7) & 0x80000000U) +
                          (float)((uint)fVar31 | (int)psVar6[0x18] & 0x80000000U) *
                          (float)((uint)fVar15 | (int)*(short *)(pdVar3 + 6) & 0x80000000U) +
                          (float)((uint)fVar30 | (int)psVar6[0x14] & 0x80000000U) *
                          (float)((uint)fVar14 | (int)*(short *)(pdVar3 + 5) & 0x80000000U) +
                          (float)((uint)fVar29 | (int)psVar6[0x10] & 0x80000000U) *
                          (float)((uint)fVar13 | (int)*(short *)(pdVar3 + 4) & 0x80000000U) +
                          (float)((uint)fVar28 | (int)psVar6[0xc] & 0x80000000U) *
                          (float)((uint)fVar12 | (int)*(short *)(pdVar3 + 3) & 0x80000000U) +
                          (float)((uint)fVar27 | (int)psVar6[8] & 0x80000000U) *
                          (float)((uint)fVar11 | (int)*(short *)(pdVar3 + 2) & 0x80000000U) +
                          (float)((uint)fVar26 | (int)psVar6[4] & 0x80000000U) *
                          (float)((uint)fVar10 | (int)*(short *)(pdVar3 + 1) & 0x80000000U) +
                          (float)((uint)fVar25 | (int)sVar1 & 0x80000000U) *
                          (float)((uint)fVar7 | (int)*(short *)pdVar3 & 0x80000000U));
    }
    *(ushort *)param_1 = (ushort)uVar2;
    if (((param_4 >> 0xc & 1) != 0) && ((uVar2 & 0x7c00) == 0)) {
      *(ushort *)param_1 = (ushort)uVar2 & 0x8000;
    }
  }
  return;
}



/* Entry: 109ee5e68; end: 109ee5fff;  */

void FUN_109ee5e68(double *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = (uint)param_1;
  pdVar3 = (double *)*param_3;
  if (param_2 == 0x40) {
    dVar6 = *pdVar3 * *(double *)param_3[1] + ((double *)param_3[1])[1] * pdVar3[1];
    *param_1 = dVar6;
    if (((param_4 >> 0xe & 1) != 0) && (((ulong)dVar6 & 0x7ff0000000000000) == 0)) {
      *param_1 = (double)((ulong)dVar6 & 0x8000000000000000);
    }
  }
  else if (param_2 == 0x20) {
    fVar5 = *(float *)pdVar3 * *(float *)param_3[1] +
            ((float *)param_3[1])[2] * *(float *)(pdVar3 + 1);
    *(float *)param_1 = fVar5;
    if (((param_4 >> 0xd & 1) != 0) && (((uint)fVar5 & 0x7f800000) == 0)) {
      *(uint *)param_1 = (uint)fVar5 & 0x80000000;
    }
  }
  else {
    fVar5 = (float)(((int)*(short *)pdVar3 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar5) {
      fVar5 = (float)((uint)fVar5 | 0x7f800000);
    }
    fVar8 = (float)(((int)*(short *)(pdVar3 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    uVar4 = (uint)*(short *)param_3[1];
    fVar9 = (float)((uVar4 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar9) {
      fVar9 = (float)((uint)fVar9 | 0x7f800000);
    }
    uVar2 = (uint)((short *)param_3[1])[4];
    fVar7 = (float)((uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar7) {
      fVar7 = (float)((uint)fVar7 | 0x7f800000);
    }
    if ((param_4 >> 0x12 & 1) == 0) {
      FUN_109f64b28();
    }
    else {
      func_0x000109f683f4((float)((uint)fVar5 | (int)*(short *)pdVar3 & 0x80000000U) *
                          (float)((uint)fVar9 | uVar4 & 0x80000000) +
                          (float)((uint)fVar7 | uVar2 & 0x80000000) *
                          (float)((uint)fVar8 | (int)*(short *)(pdVar3 + 1) & 0x80000000U));
    }
    *(ushort *)param_1 = (ushort)uVar1;
    if (((param_4 >> 0xc & 1) != 0) && ((uVar1 & 0x7c00) == 0)) {
      *(ushort *)param_1 = (ushort)uVar1 & 0x8000;
    }
  }
  return;
}



/* Entry: 109ee6000; end: 109ee61d7;  */

void FUN_109ee6000(double *param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = (uint)param_1;
  if (param_3 == 0x40) {
    if (param_2 != 0) {
      dVar9 = *(double *)param_4[1] * *(double *)*param_4 +
              ((double *)param_4[1])[1] * ((double *)*param_4)[1];
      uVar6 = (ulong)param_2;
      if (((ulong)dVar9 & 0x7ff0000000000000) == 0 && (param_5 & 0x4000) != 0) {
        dVar9 = (double)((ulong)dVar9 & 0x8000000000000000);
      }
      do {
        *param_1 = dVar9;
        uVar6 = uVar6 - 1;
        param_1 = param_1 + 1;
      } while (uVar6 != 0);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      fVar8 = *(float *)param_4[1] * *(float *)*param_4 +
              ((float *)param_4[1])[2] * ((float *)*param_4)[2];
      uVar6 = (ulong)param_2;
      if (((uint)fVar8 & 0x7f800000) == 0 && (param_5 & 0x2000) != 0) {
        fVar8 = (float)((uint)fVar8 & 0x80000000);
      }
      do {
        *(float *)param_1 = fVar8;
        uVar6 = uVar6 - 1;
        param_1 = param_1 + 1;
      } while (uVar6 != 0);
    }
  }
  else if (param_2 != 0) {
    uVar7 = (uint)((short *)param_4[1])[4];
    fVar8 = (float)((uVar7 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    uVar3 = (uint)*(short *)param_4[1];
    fVar11 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar11) {
      fVar11 = (float)((uint)fVar11 | 0x7f800000);
    }
    uVar4 = (uint)((short *)*param_4)[4];
    fVar12 = (float)((uVar4 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar12) {
      fVar12 = (float)((uint)fVar12 | 0x7f800000);
    }
    uVar5 = (uint)*(short *)*param_4;
    fVar10 = (float)((uVar5 & 0x7fff) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar10) {
      fVar10 = (float)((uint)fVar10 | 0x7f800000);
    }
    uVar6 = (ulong)param_2;
    do {
      if ((param_5 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4((float)((uint)fVar11 | uVar3 & 0x80000000) *
                            (float)((uint)fVar10 | uVar5 & 0x80000000) +
                            (float)((uint)fVar8 | uVar7 & 0x80000000) *
                            (float)((uint)fVar12 | uVar4 & 0x80000000));
      }
      uVar1 = (ushort)uVar2 & 0x8000;
      if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar2;
      }
      *(ushort *)param_1 = uVar1;
      uVar6 = uVar6 - 1;
      param_1 = param_1 + 1;
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 109ee61d8; end: 109ee63e3;  */

void FUN_109ee61d8(double *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  double *pdVar2;
  float *pfVar3;
  double *pdVar4;
  short *psVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar1 = (uint)param_1;
  pdVar2 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar4 = (double *)param_3[1];
    dVar8 = pdVar2[1] * pdVar4[1] + pdVar4[2] * pdVar2[2] + *pdVar4 * *pdVar2;
    *param_1 = dVar8;
    if (((param_4 >> 0xe & 1) != 0) && (((ulong)dVar8 & 0x7ff0000000000000) == 0)) {
      *param_1 = (double)((ulong)dVar8 & 0x8000000000000000);
    }
  }
  else if (param_2 == 0x20) {
    pfVar3 = (float *)param_3[1];
    fVar6 = *(float *)(pdVar2 + 1) * pfVar3[2] + pfVar3[4] * *(float *)(pdVar2 + 2) +
            *pfVar3 * *(float *)pdVar2;
    *(float *)param_1 = fVar6;
    if (((param_4 >> 0xd & 1) != 0) && (((uint)fVar6 & 0x7f800000) == 0)) {
      *(uint *)param_1 = (uint)fVar6 & 0x80000000;
    }
  }
  else {
    fVar6 = (float)(((int)*(short *)pdVar2 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    fVar9 = (float)(((int)*(short *)(pdVar2 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar9) {
      fVar9 = (float)((uint)fVar9 | 0x7f800000);
    }
    fVar10 = (float)(((int)*(short *)(pdVar2 + 2) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar10) {
      fVar10 = (float)((uint)fVar10 | 0x7f800000);
    }
    psVar5 = (short *)param_3[1];
    fVar11 = (float)(((int)*psVar5 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar11) {
      fVar11 = (float)((uint)fVar11 | 0x7f800000);
    }
    fVar12 = (float)(((int)psVar5[4] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar12) {
      fVar12 = (float)((uint)fVar12 | 0x7f800000);
    }
    fVar7 = (float)(((int)psVar5[8] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar7) {
      fVar7 = (float)((uint)fVar7 | 0x7f800000);
    }
    if ((param_4 >> 0x12 & 1) == 0) {
      FUN_109f64b28();
    }
    else {
      func_0x000109f683f4((float)((uint)fVar9 | (int)*(short *)(pdVar2 + 1) & 0x80000000U) *
                          (float)((uint)fVar12 | (int)psVar5[4] & 0x80000000U) +
                          (float)((uint)fVar7 | (int)psVar5[8] & 0x80000000U) *
                          (float)((uint)fVar10 | (int)*(short *)(pdVar2 + 2) & 0x80000000U) +
                          (float)((uint)fVar11 | (int)*psVar5 & 0x80000000U) *
                          (float)((uint)fVar6 | (int)*(short *)pdVar2 & 0x80000000U));
    }
    *(ushort *)param_1 = (ushort)uVar1;
    if (((param_4 >> 0xc & 1) != 0) && ((uVar1 & 0x7c00) == 0)) {
      *(ushort *)param_1 = (ushort)uVar1 & 0x8000;
    }
  }
  return;
}



/* Entry: 109ee63e4; end: 109ee662f;  */

void FUN_109ee63e4(double *param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  float *pfVar2;
  double *pdVar3;
  short *psVar4;
  float *pfVar5;
  double *pdVar6;
  short *psVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  ulong uVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar14 = (uint)param_1;
  if (param_3 == 0x40) {
    if (param_2 != 0) {
      pdVar3 = (double *)*param_4;
      pdVar6 = (double *)param_4[1];
      dVar17 = pdVar6[1] * pdVar3[1] + pdVar6[2] * pdVar3[2] + *pdVar6 * *pdVar3;
      uVar15 = (ulong)param_2;
      if (((ulong)dVar17 & 0x7ff0000000000000) == 0 && (param_5 & 0x4000) != 0) {
        dVar17 = (double)((ulong)dVar17 & 0x8000000000000000);
      }
      do {
        *param_1 = dVar17;
        uVar15 = uVar15 - 1;
        param_1 = param_1 + 1;
      } while (uVar15 != 0);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      pfVar2 = (float *)*param_4;
      pfVar5 = (float *)param_4[1];
      fVar16 = pfVar5[2] * pfVar2[2] + pfVar5[4] * pfVar2[4] + *pfVar5 * *pfVar2;
      uVar15 = (ulong)param_2;
      if (((uint)fVar16 & 0x7f800000) == 0 && (param_5 & 0x2000) != 0) {
        fVar16 = (float)((uint)fVar16 & 0x80000000);
      }
      do {
        *(float *)param_1 = fVar16;
        uVar15 = uVar15 - 1;
        param_1 = param_1 + 1;
      } while (uVar15 != 0);
    }
  }
  else if (param_2 != 0) {
    psVar4 = (short *)*param_4;
    psVar7 = (short *)param_4[1];
    sVar8 = psVar7[8];
    fVar16 = (float)(((int)sVar8 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar16) {
      fVar16 = (float)((uint)fVar16 | 0x7f800000);
    }
    sVar9 = psVar7[4];
    fVar19 = (float)(((int)sVar9 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar19) {
      fVar19 = (float)((uint)fVar19 | 0x7f800000);
    }
    sVar10 = *psVar7;
    fVar20 = (float)(((int)sVar10 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar20) {
      fVar20 = (float)((uint)fVar20 | 0x7f800000);
    }
    sVar11 = psVar4[8];
    fVar21 = (float)(((int)sVar11 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar21) {
      fVar21 = (float)((uint)fVar21 | 0x7f800000);
    }
    sVar12 = psVar4[4];
    fVar22 = (float)(((int)sVar12 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar22) {
      fVar22 = (float)((uint)fVar22 | 0x7f800000);
    }
    sVar13 = *psVar4;
    fVar18 = (float)(((int)sVar13 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar18) {
      fVar18 = (float)((uint)fVar18 | 0x7f800000);
    }
    uVar15 = (ulong)param_2;
    do {
      if ((param_5 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4((float)((uint)fVar19 | (int)sVar9 & 0x80000000U) *
                            (float)((uint)fVar22 | (int)sVar12 & 0x80000000U) +
                            (float)((uint)fVar16 | (int)sVar8 & 0x80000000U) *
                            (float)((uint)fVar21 | (int)sVar11 & 0x80000000U) +
                            (float)((uint)fVar20 | (int)sVar10 & 0x80000000U) *
                            (float)((uint)fVar18 | (int)sVar13 & 0x80000000U));
      }
      uVar1 = (ushort)uVar14 & 0x8000;
      if (((uint)((uVar14 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar14;
      }
      *(ushort *)param_1 = uVar1;
      uVar15 = uVar15 - 1;
      param_1 = param_1 + 1;
    } while (uVar15 != 0);
  }
  return;
}



/* Entry: 109ee6630; end: 109ee68a7;  */

void FUN_109ee6630(double *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  double *pdVar2;
  float *pfVar3;
  double *pdVar4;
  short *psVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = (uint)param_1;
  pdVar2 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar4 = (double *)param_3[1];
    dVar7 = pdVar2[2] * pdVar4[2] + pdVar4[3] * pdVar2[3] + pdVar4[1] * pdVar2[1] +
            *pdVar4 * *pdVar2;
    *param_1 = dVar7;
    if (((param_4 >> 0xe & 1) != 0) && (((ulong)dVar7 & 0x7ff0000000000000) == 0)) {
      *param_1 = (double)((ulong)dVar7 & 0x8000000000000000);
    }
  }
  else if (param_2 == 0x20) {
    pfVar3 = (float *)param_3[1];
    fVar6 = *(float *)(pdVar2 + 2) * pfVar3[4] + pfVar3[6] * *(float *)(pdVar2 + 3) +
            pfVar3[2] * *(float *)(pdVar2 + 1) + *pfVar3 * *(float *)pdVar2;
    *(float *)param_1 = fVar6;
    if (((param_4 >> 0xd & 1) != 0) && (((uint)fVar6 & 0x7f800000) == 0)) {
      *(uint *)param_1 = (uint)fVar6 & 0x80000000;
    }
  }
  else {
    fVar6 = (float)(((int)*(short *)pdVar2 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    fVar9 = (float)(((int)*(short *)(pdVar2 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar9) {
      fVar9 = (float)((uint)fVar9 | 0x7f800000);
    }
    fVar10 = (float)(((int)*(short *)(pdVar2 + 2) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar10) {
      fVar10 = (float)((uint)fVar10 | 0x7f800000);
    }
    fVar11 = (float)(((int)*(short *)(pdVar2 + 3) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar11) {
      fVar11 = (float)((uint)fVar11 | 0x7f800000);
    }
    psVar5 = (short *)param_3[1];
    fVar12 = (float)(((int)*psVar5 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar12) {
      fVar12 = (float)((uint)fVar12 | 0x7f800000);
    }
    fVar13 = (float)(((int)psVar5[4] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar13) {
      fVar13 = (float)((uint)fVar13 | 0x7f800000);
    }
    fVar14 = (float)(((int)psVar5[8] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar14) {
      fVar14 = (float)((uint)fVar14 | 0x7f800000);
    }
    fVar8 = (float)(((int)psVar5[0xc] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    if ((param_4 >> 0x12 & 1) == 0) {
      FUN_109f64b28();
    }
    else {
      func_0x000109f683f4((float)((uint)fVar10 | (int)*(short *)(pdVar2 + 2) & 0x80000000U) *
                          (float)((uint)fVar14 | (int)psVar5[8] & 0x80000000U) +
                          (float)((uint)fVar8 | (int)psVar5[0xc] & 0x80000000U) *
                          (float)((uint)fVar11 | (int)*(short *)(pdVar2 + 3) & 0x80000000U) +
                          (float)((uint)fVar13 | (int)psVar5[4] & 0x80000000U) *
                          (float)((uint)fVar9 | (int)*(short *)(pdVar2 + 1) & 0x80000000U) +
                          (float)((uint)fVar12 | (int)*psVar5 & 0x80000000U) *
                          (float)((uint)fVar6 | (int)*(short *)pdVar2 & 0x80000000U));
    }
    *(ushort *)param_1 = (ushort)uVar1;
    if (((param_4 >> 0xc & 1) != 0) && ((uVar1 & 0x7c00) == 0)) {
      *(ushort *)param_1 = (ushort)uVar1 & 0x8000;
    }
  }
  return;
}



/* Entry: 109ee68a8; end: 109ee6b5f;  */

void FUN_109ee68a8(double *param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  float *pfVar2;
  double *pdVar3;
  short *psVar4;
  float *pfVar5;
  double *pdVar6;
  short *psVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  ulong uVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar16 = (uint)param_1;
  if (param_3 == 0x40) {
    if (param_2 != 0) {
      pdVar3 = (double *)*param_4;
      pdVar6 = (double *)param_4[1];
      dVar19 = pdVar6[2] * pdVar3[2] + pdVar6[3] * pdVar3[3] + pdVar6[1] * pdVar3[1] +
               *pdVar6 * *pdVar3;
      uVar17 = (ulong)param_2;
      if (((ulong)dVar19 & 0x7ff0000000000000) == 0 && (param_5 & 0x4000) != 0) {
        dVar19 = (double)((ulong)dVar19 & 0x8000000000000000);
      }
      do {
        *param_1 = dVar19;
        uVar17 = uVar17 - 1;
        param_1 = param_1 + 1;
      } while (uVar17 != 0);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      pfVar2 = (float *)*param_4;
      pfVar5 = (float *)param_4[1];
      fVar18 = pfVar5[4] * pfVar2[4] + pfVar5[6] * pfVar2[6] + pfVar5[2] * pfVar2[2] +
               *pfVar5 * *pfVar2;
      uVar17 = (ulong)param_2;
      if (((uint)fVar18 & 0x7f800000) == 0 && (param_5 & 0x2000) != 0) {
        fVar18 = (float)((uint)fVar18 & 0x80000000);
      }
      do {
        *(float *)param_1 = fVar18;
        uVar17 = uVar17 - 1;
        param_1 = param_1 + 1;
      } while (uVar17 != 0);
    }
  }
  else if (param_2 != 0) {
    psVar4 = (short *)*param_4;
    psVar7 = (short *)param_4[1];
    sVar8 = psVar7[0xc];
    fVar18 = (float)(((int)sVar8 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar18) {
      fVar18 = (float)((uint)fVar18 | 0x7f800000);
    }
    sVar9 = psVar7[8];
    fVar21 = (float)(((int)sVar9 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar21) {
      fVar21 = (float)((uint)fVar21 | 0x7f800000);
    }
    sVar10 = psVar7[4];
    fVar22 = (float)(((int)sVar10 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar22) {
      fVar22 = (float)((uint)fVar22 | 0x7f800000);
    }
    sVar11 = *psVar7;
    fVar23 = (float)(((int)sVar11 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar23) {
      fVar23 = (float)((uint)fVar23 | 0x7f800000);
    }
    sVar12 = psVar4[0xc];
    fVar24 = (float)(((int)sVar12 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar24) {
      fVar24 = (float)((uint)fVar24 | 0x7f800000);
    }
    sVar13 = psVar4[8];
    fVar25 = (float)(((int)sVar13 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar25) {
      fVar25 = (float)((uint)fVar25 | 0x7f800000);
    }
    sVar14 = psVar4[4];
    fVar26 = (float)(((int)sVar14 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar26) {
      fVar26 = (float)((uint)fVar26 | 0x7f800000);
    }
    sVar15 = *psVar4;
    fVar20 = (float)(((int)sVar15 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar20) {
      fVar20 = (float)((uint)fVar20 | 0x7f800000);
    }
    uVar17 = (ulong)param_2;
    do {
      if ((param_5 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4((float)((uint)fVar21 | (int)sVar9 & 0x80000000U) *
                            (float)((uint)fVar25 | (int)sVar13 & 0x80000000U) +
                            (float)((uint)fVar18 | (int)sVar8 & 0x80000000U) *
                            (float)((uint)fVar24 | (int)sVar12 & 0x80000000U) +
                            (float)((uint)fVar22 | (int)sVar10 & 0x80000000U) *
                            (float)((uint)fVar26 | (int)sVar14 & 0x80000000U) +
                            (float)((uint)fVar23 | (int)sVar11 & 0x80000000U) *
                            (float)((uint)fVar20 | (int)sVar15 & 0x80000000U));
      }
      uVar1 = (ushort)uVar16 & 0x8000;
      if (((uint)((uVar16 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar16;
      }
      *(ushort *)param_1 = uVar1;
      uVar17 = uVar17 - 1;
      param_1 = param_1 + 1;
    } while (uVar17 != 0);
  }
  return;
}



/* Entry: 109ee6b60; end: 109ee6e4b;  */

void FUN_109ee6b60(double *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  double *pdVar2;
  float *pfVar3;
  double *pdVar4;
  short *psVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar1 = (uint)param_1;
  pdVar2 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar4 = (double *)param_3[1];
    dVar7 = pdVar2[3] * pdVar4[3] + pdVar4[4] * pdVar2[4] + pdVar4[2] * pdVar2[2] +
            pdVar4[1] * pdVar2[1] + *pdVar4 * *pdVar2;
    *param_1 = dVar7;
    if (((param_4 >> 0xe & 1) != 0) && (((ulong)dVar7 & 0x7ff0000000000000) == 0)) {
      *param_1 = (double)((ulong)dVar7 & 0x8000000000000000);
    }
  }
  else if (param_2 == 0x20) {
    pfVar3 = (float *)param_3[1];
    fVar6 = *(float *)(pdVar2 + 3) * pfVar3[6] + pfVar3[8] * *(float *)(pdVar2 + 4) +
            pfVar3[4] * *(float *)(pdVar2 + 2) + pfVar3[2] * *(float *)(pdVar2 + 1) +
            *pfVar3 * *(float *)pdVar2;
    *(float *)param_1 = fVar6;
    if (((param_4 >> 0xd & 1) != 0) && (((uint)fVar6 & 0x7f800000) == 0)) {
      *(uint *)param_1 = (uint)fVar6 & 0x80000000;
    }
  }
  else {
    fVar6 = (float)(((int)*(short *)pdVar2 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    fVar9 = (float)(((int)*(short *)(pdVar2 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar9) {
      fVar9 = (float)((uint)fVar9 | 0x7f800000);
    }
    fVar10 = (float)(((int)*(short *)(pdVar2 + 2) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar10) {
      fVar10 = (float)((uint)fVar10 | 0x7f800000);
    }
    fVar11 = (float)(((int)*(short *)(pdVar2 + 3) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar11) {
      fVar11 = (float)((uint)fVar11 | 0x7f800000);
    }
    fVar12 = (float)(((int)*(short *)(pdVar2 + 4) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar12) {
      fVar12 = (float)((uint)fVar12 | 0x7f800000);
    }
    psVar5 = (short *)param_3[1];
    fVar13 = (float)(((int)*psVar5 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar13) {
      fVar13 = (float)((uint)fVar13 | 0x7f800000);
    }
    fVar14 = (float)(((int)psVar5[4] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar14) {
      fVar14 = (float)((uint)fVar14 | 0x7f800000);
    }
    fVar15 = (float)(((int)psVar5[8] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar15) {
      fVar15 = (float)((uint)fVar15 | 0x7f800000);
    }
    fVar16 = (float)(((int)psVar5[0xc] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar16) {
      fVar16 = (float)((uint)fVar16 | 0x7f800000);
    }
    fVar8 = (float)(((int)psVar5[0x10] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    if ((param_4 >> 0x12 & 1) == 0) {
      FUN_109f64b28();
    }
    else {
      func_0x000109f683f4((float)((uint)fVar11 | (int)*(short *)(pdVar2 + 3) & 0x80000000U) *
                          (float)((uint)fVar16 | (int)psVar5[0xc] & 0x80000000U) +
                          (float)((uint)fVar8 | (int)psVar5[0x10] & 0x80000000U) *
                          (float)((uint)fVar12 | (int)*(short *)(pdVar2 + 4) & 0x80000000U) +
                          (float)((uint)fVar15 | (int)psVar5[8] & 0x80000000U) *
                          (float)((uint)fVar10 | (int)*(short *)(pdVar2 + 2) & 0x80000000U) +
                          (float)((uint)fVar14 | (int)psVar5[4] & 0x80000000U) *
                          (float)((uint)fVar9 | (int)*(short *)(pdVar2 + 1) & 0x80000000U) +
                          (float)((uint)fVar13 | (int)*psVar5 & 0x80000000U) *
                          (float)((uint)fVar6 | (int)*(short *)pdVar2 & 0x80000000U));
    }
    *(ushort *)param_1 = (ushort)uVar1;
    if (((param_4 >> 0xc & 1) != 0) && ((uVar1 & 0x7c00) == 0)) {
      *(ushort *)param_1 = (ushort)uVar1 & 0x8000;
    }
  }
  return;
}



/* Entry: 109ee6e4c; end: 109ee7177;  */

void FUN_109ee6e4c(double *param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  float *pfVar2;
  double *pdVar3;
  short *psVar4;
  float *pfVar5;
  double *pdVar6;
  short *psVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  uVar18 = (uint)param_1;
  if (param_3 == 0x40) {
    if (param_2 != 0) {
      pdVar3 = (double *)*param_4;
      pdVar6 = (double *)param_4[1];
      dVar21 = pdVar6[3] * pdVar3[3] + pdVar6[4] * pdVar3[4] + pdVar6[2] * pdVar3[2] +
               pdVar6[1] * pdVar3[1] + *pdVar6 * *pdVar3;
      uVar19 = (ulong)param_2;
      if (((ulong)dVar21 & 0x7ff0000000000000) == 0 && (param_5 & 0x4000) != 0) {
        dVar21 = (double)((ulong)dVar21 & 0x8000000000000000);
      }
      do {
        *param_1 = dVar21;
        uVar19 = uVar19 - 1;
        param_1 = param_1 + 1;
      } while (uVar19 != 0);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      pfVar2 = (float *)*param_4;
      pfVar5 = (float *)param_4[1];
      fVar20 = pfVar5[6] * pfVar2[6] + pfVar5[8] * pfVar2[8] + pfVar5[4] * pfVar2[4] +
               pfVar5[2] * pfVar2[2] + *pfVar5 * *pfVar2;
      uVar19 = (ulong)param_2;
      if (((uint)fVar20 & 0x7f800000) == 0 && (param_5 & 0x2000) != 0) {
        fVar20 = (float)((uint)fVar20 & 0x80000000);
      }
      do {
        *(float *)param_1 = fVar20;
        uVar19 = uVar19 - 1;
        param_1 = param_1 + 1;
      } while (uVar19 != 0);
    }
  }
  else if (param_2 != 0) {
    psVar4 = (short *)*param_4;
    psVar7 = (short *)param_4[1];
    sVar8 = psVar7[0x10];
    fVar20 = (float)(((int)sVar8 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar20) {
      fVar20 = (float)((uint)fVar20 | 0x7f800000);
    }
    sVar9 = psVar7[0xc];
    fVar23 = (float)(((int)sVar9 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar23) {
      fVar23 = (float)((uint)fVar23 | 0x7f800000);
    }
    sVar10 = psVar7[8];
    fVar24 = (float)(((int)sVar10 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar24) {
      fVar24 = (float)((uint)fVar24 | 0x7f800000);
    }
    sVar11 = psVar7[4];
    fVar25 = (float)(((int)sVar11 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar25) {
      fVar25 = (float)((uint)fVar25 | 0x7f800000);
    }
    sVar12 = *psVar7;
    fVar26 = (float)(((int)sVar12 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar26) {
      fVar26 = (float)((uint)fVar26 | 0x7f800000);
    }
    sVar13 = psVar4[0x10];
    fVar27 = (float)(((int)sVar13 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar27) {
      fVar27 = (float)((uint)fVar27 | 0x7f800000);
    }
    sVar14 = psVar4[0xc];
    fVar28 = (float)(((int)sVar14 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar28) {
      fVar28 = (float)((uint)fVar28 | 0x7f800000);
    }
    sVar15 = psVar4[8];
    fVar29 = (float)(((int)sVar15 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar29) {
      fVar29 = (float)((uint)fVar29 | 0x7f800000);
    }
    sVar16 = psVar4[4];
    fVar30 = (float)(((int)sVar16 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar30) {
      fVar30 = (float)((uint)fVar30 | 0x7f800000);
    }
    sVar17 = *psVar4;
    fVar22 = (float)(((int)sVar17 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar22) {
      fVar22 = (float)((uint)fVar22 | 0x7f800000);
    }
    uVar19 = (ulong)param_2;
    do {
      if ((param_5 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4((float)((uint)fVar23 | (int)sVar9 & 0x80000000U) *
                            (float)((uint)fVar28 | (int)sVar14 & 0x80000000U) +
                            (float)((uint)fVar20 | (int)sVar8 & 0x80000000U) *
                            (float)((uint)fVar27 | (int)sVar13 & 0x80000000U) +
                            (float)((uint)fVar24 | (int)sVar10 & 0x80000000U) *
                            (float)((uint)fVar29 | (int)sVar15 & 0x80000000U) +
                            (float)((uint)fVar25 | (int)sVar11 & 0x80000000U) *
                            (float)((uint)fVar30 | (int)sVar16 & 0x80000000U) +
                            (float)((uint)fVar26 | (int)sVar12 & 0x80000000U) *
                            (float)((uint)fVar22 | (int)sVar17 & 0x80000000U));
      }
      uVar1 = (ushort)uVar18 & 0x8000;
      if (((uint)((uVar18 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar18;
      }
      *(ushort *)param_1 = uVar1;
      uVar19 = uVar19 - 1;
      param_1 = param_1 + 1;
    } while (uVar19 != 0);
  }
  return;
}



/* Entry: 109ee7178; end: 109ee75af;  */

void FUN_109ee7178(double *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  double *pdVar2;
  float *pfVar3;
  double *pdVar4;
  short *psVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar1 = (uint)param_1;
  pdVar2 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar4 = (double *)param_3[1];
    dVar7 = pdVar2[6] * pdVar4[6] + pdVar4[7] * pdVar2[7] + pdVar4[5] * pdVar2[5] +
            pdVar4[4] * pdVar2[4] + pdVar4[3] * pdVar2[3] + pdVar4[2] * pdVar2[2] +
            pdVar4[1] * pdVar2[1] + *pdVar4 * *pdVar2;
    *param_1 = dVar7;
    if (((param_4 >> 0xe & 1) != 0) && (((ulong)dVar7 & 0x7ff0000000000000) == 0)) {
      *param_1 = (double)((ulong)dVar7 & 0x8000000000000000);
    }
  }
  else if (param_2 == 0x20) {
    pfVar3 = (float *)param_3[1];
    fVar6 = *(float *)(pdVar2 + 6) * pfVar3[0xc] + pfVar3[0xe] * *(float *)(pdVar2 + 7) +
            pfVar3[10] * *(float *)(pdVar2 + 5) + pfVar3[8] * *(float *)(pdVar2 + 4) +
            pfVar3[6] * *(float *)(pdVar2 + 3) + pfVar3[4] * *(float *)(pdVar2 + 2) +
            pfVar3[2] * *(float *)(pdVar2 + 1) + *pfVar3 * *(float *)pdVar2;
    *(float *)param_1 = fVar6;
    if (((param_4 >> 0xd & 1) != 0) && (((uint)fVar6 & 0x7f800000) == 0)) {
      *(uint *)param_1 = (uint)fVar6 & 0x80000000;
    }
  }
  else {
    fVar6 = (float)(((int)*(short *)pdVar2 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    fVar9 = (float)(((int)*(short *)(pdVar2 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar9) {
      fVar9 = (float)((uint)fVar9 | 0x7f800000);
    }
    fVar10 = (float)(((int)*(short *)(pdVar2 + 2) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar10) {
      fVar10 = (float)((uint)fVar10 | 0x7f800000);
    }
    fVar11 = (float)(((int)*(short *)(pdVar2 + 3) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar11) {
      fVar11 = (float)((uint)fVar11 | 0x7f800000);
    }
    fVar12 = (float)(((int)*(short *)(pdVar2 + 4) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar12) {
      fVar12 = (float)((uint)fVar12 | 0x7f800000);
    }
    fVar13 = (float)(((int)*(short *)(pdVar2 + 5) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar13) {
      fVar13 = (float)((uint)fVar13 | 0x7f800000);
    }
    fVar14 = (float)(((int)*(short *)(pdVar2 + 6) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar14) {
      fVar14 = (float)((uint)fVar14 | 0x7f800000);
    }
    fVar15 = (float)(((int)*(short *)(pdVar2 + 7) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar15) {
      fVar15 = (float)((uint)fVar15 | 0x7f800000);
    }
    psVar5 = (short *)param_3[1];
    fVar16 = (float)(((int)*psVar5 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar16) {
      fVar16 = (float)((uint)fVar16 | 0x7f800000);
    }
    fVar17 = (float)(((int)psVar5[4] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar17) {
      fVar17 = (float)((uint)fVar17 | 0x7f800000);
    }
    fVar18 = (float)(((int)psVar5[8] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar18) {
      fVar18 = (float)((uint)fVar18 | 0x7f800000);
    }
    fVar19 = (float)(((int)psVar5[0xc] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar19) {
      fVar19 = (float)((uint)fVar19 | 0x7f800000);
    }
    fVar20 = (float)(((int)psVar5[0x10] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar20) {
      fVar20 = (float)((uint)fVar20 | 0x7f800000);
    }
    fVar21 = (float)(((int)psVar5[0x14] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar21) {
      fVar21 = (float)((uint)fVar21 | 0x7f800000);
    }
    fVar22 = (float)(((int)psVar5[0x18] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar22) {
      fVar22 = (float)((uint)fVar22 | 0x7f800000);
    }
    fVar8 = (float)(((int)psVar5[0x1c] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar8) {
      fVar8 = (float)((uint)fVar8 | 0x7f800000);
    }
    if ((param_4 >> 0x12 & 1) == 0) {
      FUN_109f64b28();
    }
    else {
      func_0x000109f683f4((float)((uint)fVar14 | (int)*(short *)(pdVar2 + 6) & 0x80000000U) *
                          (float)((uint)fVar22 | (int)psVar5[0x18] & 0x80000000U) +
                          (float)((uint)fVar8 | (int)psVar5[0x1c] & 0x80000000U) *
                          (float)((uint)fVar15 | (int)*(short *)(pdVar2 + 7) & 0x80000000U) +
                          (float)((uint)fVar21 | (int)psVar5[0x14] & 0x80000000U) *
                          (float)((uint)fVar13 | (int)*(short *)(pdVar2 + 5) & 0x80000000U) +
                          (float)((uint)fVar20 | (int)psVar5[0x10] & 0x80000000U) *
                          (float)((uint)fVar12 | (int)*(short *)(pdVar2 + 4) & 0x80000000U) +
                          (float)((uint)fVar19 | (int)psVar5[0xc] & 0x80000000U) *
                          (float)((uint)fVar11 | (int)*(short *)(pdVar2 + 3) & 0x80000000U) +
                          (float)((uint)fVar18 | (int)psVar5[8] & 0x80000000U) *
                          (float)((uint)fVar10 | (int)*(short *)(pdVar2 + 2) & 0x80000000U) +
                          (float)((uint)fVar17 | (int)psVar5[4] & 0x80000000U) *
                          (float)((uint)fVar9 | (int)*(short *)(pdVar2 + 1) & 0x80000000U) +
                          (float)((uint)fVar16 | (int)*psVar5 & 0x80000000U) *
                          (float)((uint)fVar6 | (int)*(short *)pdVar2 & 0x80000000U));
    }
    *(ushort *)param_1 = (ushort)uVar1;
    if (((param_4 >> 0xc & 1) != 0) && ((uVar1 & 0x7c00) == 0)) {
      *(ushort *)param_1 = (ushort)uVar1 & 0x8000;
    }
  }
  return;
}



/* Entry: 109ee75b0; end: 109ee7a27;  */

void FUN_109ee75b0(double *param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  float *pfVar2;
  double *pdVar3;
  short *psVar4;
  float *pfVar5;
  double *pdVar6;
  short *psVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  uint uVar24;
  ulong uVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  uVar24 = (uint)param_1;
  if (param_3 == 0x40) {
    if (param_2 != 0) {
      pdVar3 = (double *)*param_4;
      pdVar6 = (double *)param_4[1];
      dVar27 = pdVar6[6] * pdVar3[6] + pdVar6[7] * pdVar3[7] + pdVar6[5] * pdVar3[5] +
               pdVar6[4] * pdVar3[4] + pdVar6[3] * pdVar3[3] + pdVar6[2] * pdVar3[2] +
               pdVar6[1] * pdVar3[1] + *pdVar6 * *pdVar3;
      uVar25 = (ulong)param_2;
      if (((ulong)dVar27 & 0x7ff0000000000000) == 0 && (param_5 & 0x4000) != 0) {
        dVar27 = (double)((ulong)dVar27 & 0x8000000000000000);
      }
      do {
        *param_1 = dVar27;
        uVar25 = uVar25 - 1;
        param_1 = param_1 + 1;
      } while (uVar25 != 0);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      pfVar2 = (float *)*param_4;
      pfVar5 = (float *)param_4[1];
      fVar26 = pfVar5[0xc] * pfVar2[0xc] + pfVar5[0xe] * pfVar2[0xe] + pfVar5[10] * pfVar2[10] +
               pfVar5[8] * pfVar2[8] + pfVar5[6] * pfVar2[6] + pfVar5[4] * pfVar2[4] +
               pfVar5[2] * pfVar2[2] + *pfVar5 * *pfVar2;
      uVar25 = (ulong)param_2;
      if (((uint)fVar26 & 0x7f800000) == 0 && (param_5 & 0x2000) != 0) {
        fVar26 = (float)((uint)fVar26 & 0x80000000);
      }
      do {
        *(float *)param_1 = fVar26;
        uVar25 = uVar25 - 1;
        param_1 = param_1 + 1;
      } while (uVar25 != 0);
    }
  }
  else if (param_2 != 0) {
    psVar4 = (short *)*param_4;
    psVar7 = (short *)param_4[1];
    sVar8 = psVar7[0x1c];
    fVar26 = (float)(((int)sVar8 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar26) {
      fVar26 = (float)((uint)fVar26 | 0x7f800000);
    }
    sVar9 = psVar7[0x18];
    fVar29 = (float)(((int)sVar9 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar29) {
      fVar29 = (float)((uint)fVar29 | 0x7f800000);
    }
    sVar10 = psVar7[0x14];
    fVar30 = (float)(((int)sVar10 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar30) {
      fVar30 = (float)((uint)fVar30 | 0x7f800000);
    }
    sVar11 = psVar7[0x10];
    fVar31 = (float)(((int)sVar11 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar31) {
      fVar31 = (float)((uint)fVar31 | 0x7f800000);
    }
    sVar12 = psVar7[0xc];
    fVar32 = (float)(((int)sVar12 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar32) {
      fVar32 = (float)((uint)fVar32 | 0x7f800000);
    }
    sVar13 = psVar7[8];
    fVar33 = (float)(((int)sVar13 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar33) {
      fVar33 = (float)((uint)fVar33 | 0x7f800000);
    }
    sVar14 = psVar7[4];
    fVar34 = (float)(((int)sVar14 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar34) {
      fVar34 = (float)((uint)fVar34 | 0x7f800000);
    }
    sVar15 = *psVar7;
    fVar35 = (float)(((int)sVar15 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar35) {
      fVar35 = (float)((uint)fVar35 | 0x7f800000);
    }
    sVar16 = psVar4[0x1c];
    fVar36 = (float)(((int)sVar16 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar36) {
      fVar36 = (float)((uint)fVar36 | 0x7f800000);
    }
    sVar17 = psVar4[0x18];
    fVar37 = (float)(((int)sVar17 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar37) {
      fVar37 = (float)((uint)fVar37 | 0x7f800000);
    }
    sVar18 = psVar4[0x14];
    fVar38 = (float)(((int)sVar18 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar38) {
      fVar38 = (float)((uint)fVar38 | 0x7f800000);
    }
    sVar19 = psVar4[0x10];
    fVar39 = (float)(((int)sVar19 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar39) {
      fVar39 = (float)((uint)fVar39 | 0x7f800000);
    }
    sVar20 = psVar4[0xc];
    fVar40 = (float)(((int)sVar20 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar40) {
      fVar40 = (float)((uint)fVar40 | 0x7f800000);
    }
    sVar21 = psVar4[8];
    fVar41 = (float)(((int)sVar21 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar41) {
      fVar41 = (float)((uint)fVar41 | 0x7f800000);
    }
    sVar22 = psVar4[4];
    fVar42 = (float)(((int)sVar22 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar42) {
      fVar42 = (float)((uint)fVar42 | 0x7f800000);
    }
    sVar23 = *psVar4;
    fVar28 = (float)(((int)sVar23 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar28) {
      fVar28 = (float)((uint)fVar28 | 0x7f800000);
    }
    uVar25 = (ulong)param_2;
    do {
      if ((param_5 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4((float)((uint)fVar29 | (int)sVar9 & 0x80000000U) *
                            (float)((uint)fVar37 | (int)sVar17 & 0x80000000U) +
                            (float)((uint)fVar26 | (int)sVar8 & 0x80000000U) *
                            (float)((uint)fVar36 | (int)sVar16 & 0x80000000U) +
                            (float)((uint)fVar30 | (int)sVar10 & 0x80000000U) *
                            (float)((uint)fVar38 | (int)sVar18 & 0x80000000U) +
                            (float)((uint)fVar31 | (int)sVar11 & 0x80000000U) *
                            (float)((uint)fVar39 | (int)sVar19 & 0x80000000U) +
                            (float)((uint)fVar32 | (int)sVar12 & 0x80000000U) *
                            (float)((uint)fVar40 | (int)sVar20 & 0x80000000U) +
                            (float)((uint)fVar33 | (int)sVar13 & 0x80000000U) *
                            (float)((uint)fVar41 | (int)sVar21 & 0x80000000U) +
                            (float)((uint)fVar34 | (int)sVar14 & 0x80000000U) *
                            (float)((uint)fVar42 | (int)sVar22 & 0x80000000U) +
                            (float)((uint)fVar35 | (int)sVar15 & 0x80000000U) *
                            (float)((uint)fVar28 | (int)sVar23 & 0x80000000U));
      }
      uVar1 = (ushort)uVar24 & 0x8000;
      if (((uint)((uVar24 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar24;
      }
      *(ushort *)param_1 = uVar1;
      uVar25 = uVar25 - 1;
      param_1 = param_1 + 1;
    } while (uVar25 != 0);
  }
  return;
}



/* Entry: 109ee7a28; end: 109ee7c6f;  */

void FUN_109ee7a28(double *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  double *pdVar2;
  float *pfVar3;
  double *pdVar4;
  short *psVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = (uint)param_1;
  pdVar2 = (double *)*param_3;
  if (param_2 == 0x40) {
    pdVar4 = (double *)param_3[1];
    dVar8 = pdVar4[3] + pdVar2[1] * pdVar4[1] + *pdVar4 * *pdVar2 + pdVar4[2] * pdVar2[2];
    *param_1 = dVar8;
    if (((param_4 >> 0xe & 1) != 0) && (((ulong)dVar8 & 0x7ff0000000000000) == 0)) {
      *param_1 = (double)((ulong)dVar8 & 0x8000000000000000);
    }
  }
  else if (param_2 == 0x20) {
    pfVar3 = (float *)param_3[1];
    fVar6 = pfVar3[6] +
            *(float *)(pdVar2 + 1) * pfVar3[2] + *pfVar3 * *(float *)pdVar2 +
            pfVar3[4] * *(float *)(pdVar2 + 2);
    *(float *)param_1 = fVar6;
    if (((param_4 >> 0xd & 1) != 0) && (((uint)fVar6 & 0x7f800000) == 0)) {
      *(uint *)param_1 = (uint)fVar6 & 0x80000000;
    }
  }
  else {
    fVar6 = (float)(((int)*(short *)pdVar2 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar6) {
      fVar6 = (float)((uint)fVar6 | 0x7f800000);
    }
    fVar9 = (float)(((int)*(short *)(pdVar2 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar9) {
      fVar9 = (float)((uint)fVar9 | 0x7f800000);
    }
    fVar10 = (float)(((int)*(short *)(pdVar2 + 2) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar10) {
      fVar10 = (float)((uint)fVar10 | 0x7f800000);
    }
    psVar5 = (short *)param_3[1];
    fVar11 = (float)(((int)*psVar5 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar11) {
      fVar11 = (float)((uint)fVar11 | 0x7f800000);
    }
    fVar12 = (float)(((int)psVar5[4] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar12) {
      fVar12 = (float)((uint)fVar12 | 0x7f800000);
    }
    fVar13 = (float)(((int)psVar5[8] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar13) {
      fVar13 = (float)((uint)fVar13 | 0x7f800000);
    }
    fVar7 = (float)(((int)psVar5[0xc] & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar7) {
      fVar7 = (float)((uint)fVar7 | 0x7f800000);
    }
    if ((param_4 >> 0x12 & 1) == 0) {
      FUN_109f64b28();
    }
    else {
      func_0x000109f683f4((float)((uint)fVar9 | (int)*(short *)(pdVar2 + 1) & 0x80000000U) *
                          (float)((uint)fVar12 | (int)psVar5[4] & 0x80000000U) +
                          (float)((uint)fVar11 | (int)*psVar5 & 0x80000000U) *
                          (float)((uint)fVar6 | (int)*(short *)pdVar2 & 0x80000000U) +
                          (float)((uint)fVar13 | (int)psVar5[8] & 0x80000000U) *
                          (float)((uint)fVar10 | (int)*(short *)(pdVar2 + 2) & 0x80000000U) +
                          (float)((uint)fVar7 | (int)psVar5[0xc] & 0x80000000U));
    }
    *(ushort *)param_1 = (ushort)uVar1;
    if (((param_4 >> 0xc & 1) != 0) && ((uVar1 & 0x7c00) == 0)) {
      *(ushort *)param_1 = (ushort)uVar1 & 0x8000;
    }
  }
  return;
}



/* Entry: 109ee7c70; end: 109ee7ef7;  */

void FUN_109ee7c70(double *param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  float *pfVar2;
  double *pdVar3;
  short *psVar4;
  float *pfVar5;
  double *pdVar6;
  short *psVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  uint uVar15;
  ulong uVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar15 = (uint)param_1;
  if (param_3 == 0x40) {
    if (param_2 != 0) {
      pdVar3 = (double *)*param_4;
      pdVar6 = (double *)param_4[1];
      dVar18 = pdVar6[3] + pdVar6[1] * pdVar3[1] + *pdVar6 * *pdVar3 + pdVar6[2] * pdVar3[2];
      uVar16 = (ulong)param_2;
      if (((ulong)dVar18 & 0x7ff0000000000000) == 0 && (param_5 & 0x4000) != 0) {
        dVar18 = (double)((ulong)dVar18 & 0x8000000000000000);
      }
      do {
        *param_1 = dVar18;
        uVar16 = uVar16 - 1;
        param_1 = param_1 + 1;
      } while (uVar16 != 0);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      pfVar2 = (float *)*param_4;
      pfVar5 = (float *)param_4[1];
      fVar17 = pfVar5[6] + pfVar5[2] * pfVar2[2] + *pfVar5 * *pfVar2 + pfVar5[4] * pfVar2[4];
      uVar16 = (ulong)param_2;
      if (((uint)fVar17 & 0x7f800000) == 0 && (param_5 & 0x2000) != 0) {
        fVar17 = (float)((uint)fVar17 & 0x80000000);
      }
      do {
        *(float *)param_1 = fVar17;
        uVar16 = uVar16 - 1;
        param_1 = param_1 + 1;
      } while (uVar16 != 0);
    }
  }
  else if (param_2 != 0) {
    psVar4 = (short *)*param_4;
    psVar7 = (short *)param_4[1];
    sVar8 = psVar7[0xc];
    fVar17 = (float)(((int)sVar8 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar17) {
      fVar17 = (float)((uint)fVar17 | 0x7f800000);
    }
    sVar9 = psVar7[8];
    fVar20 = (float)(((int)sVar9 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar20) {
      fVar20 = (float)((uint)fVar20 | 0x7f800000);
    }
    sVar10 = psVar7[4];
    fVar21 = (float)(((int)sVar10 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar21) {
      fVar21 = (float)((uint)fVar21 | 0x7f800000);
    }
    sVar11 = *psVar7;
    fVar22 = (float)(((int)sVar11 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar22) {
      fVar22 = (float)((uint)fVar22 | 0x7f800000);
    }
    sVar12 = psVar4[8];
    fVar23 = (float)(((int)sVar12 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar23) {
      fVar23 = (float)((uint)fVar23 | 0x7f800000);
    }
    sVar13 = psVar4[4];
    fVar24 = (float)(((int)sVar13 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar24) {
      fVar24 = (float)((uint)fVar24 | 0x7f800000);
    }
    sVar14 = *psVar4;
    fVar19 = (float)(((int)sVar14 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar19) {
      fVar19 = (float)((uint)fVar19 | 0x7f800000);
    }
    uVar16 = (ulong)param_2;
    do {
      if ((param_5 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4((float)((uint)fVar21 | (int)sVar10 & 0x80000000U) *
                            (float)((uint)fVar24 | (int)sVar13 & 0x80000000U) +
                            (float)((uint)fVar22 | (int)sVar11 & 0x80000000U) *
                            (float)((uint)fVar19 | (int)sVar14 & 0x80000000U) +
                            (float)((uint)fVar20 | (int)sVar9 & 0x80000000U) *
                            (float)((uint)fVar23 | (int)sVar12 & 0x80000000U) +
                            (float)((uint)fVar17 | (int)sVar8 & 0x80000000U));
      }
      uVar1 = (ushort)uVar15 & 0x8000;
      if (((uint)((uVar15 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar15;
      }
      *(ushort *)param_1 = uVar1;
      uVar16 = uVar16 - 1;
      param_1 = param_1 + 1;
    } while (uVar16 != 0);
  }
  return;
}



/* Entry: 109ee7ef8; end: 109ee87d3;  */

void FUN_109ee7ef8(long param_1,uint param_2,int param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        fVar2 = (float)(((int)*(short *)(*param_4 + lVar1) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar2) {
          fVar2 = (float)((uint)fVar2 | 0x7f800000);
        }
        fVar3 = (float)(((int)*(short *)(param_4[1] + lVar1) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar3) {
          fVar3 = (float)((uint)fVar3 | 0x7f800000);
        }
        *(bool *)(param_1 + lVar1) =
             (float)((uint)fVar2 | (int)*(short *)(*param_4 + lVar1) & 0x80000000U) ==
             (float)((uint)fVar3 | (int)*(short *)(param_4[1] + lVar1) & 0x80000000U);
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        *(bool *)(param_1 + lVar1) = *(float *)(*param_4 + lVar1) == *(float *)(param_4[1] + lVar1);
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(bool *)(param_1 + lVar1) = *(double *)(*param_4 + lVar1) == *(double *)(param_4[1] + lVar1);
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109ee87d4; end: 109ee8ea3;  */

void FUN_109ee87d4(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  ulong uVar6;
  double dVar7;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        _exp2f((uint)fVar5 | (int)*(short *)(*param_4 + lVar4) & 0x80000000U);
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4();
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar6 = (ulong)*(uint *)(*param_4 + lVar4);
        _exp2f();
        uVar3 = (uint)uVar6 & 0x80000000;
        if (((uint)((uVar6 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar3 = (uint)uVar6;
        }
        *(uint *)(param_1 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      fVar5 = (float)*(double *)(*param_4 + lVar4);
      _exp2f();
      dVar7 = (double)fVar5;
      dVar2 = (double)((ulong)dVar7 & 0x8000000000000000);
      if (((uint)(((ulong)dVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar2 = dVar7;
      }
      *(double *)(param_1 + lVar4) = dVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ee8ea4; end: 109ee9ba7;  */

void FUN_109ee8ea4(long param_1,uint param_2,int param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        fVar2 = (float)(((int)*(short *)(*param_4 + lVar1) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar2) {
          fVar2 = (float)((uint)fVar2 | 0x7f800000);
        }
        fVar3 = (float)(((int)*(short *)(param_4[1] + lVar1) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar3) {
          fVar3 = (float)((uint)fVar3 | 0x7f800000);
        }
        *(bool *)(param_1 + lVar1) =
             (float)((uint)fVar3 | (int)*(short *)(param_4[1] + lVar1) & 0x80000000U) <=
             (float)((uint)fVar2 | (int)*(short *)(*param_4 + lVar1) & 0x80000000U);
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        *(bool *)(param_1 + lVar1) = *(float *)(param_4[1] + lVar1) <= *(float *)(*param_4 + lVar1);
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(bool *)(param_1 + lVar1) = *(double *)(param_4[1] + lVar1) <= *(double *)(*param_4 + lVar1);
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109ee9ba8; end: 109ee9d07;  */

void FUN_109ee9ba8(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  ulong uVar6;
  double dVar7;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        _log2f((uint)fVar5 | (int)*(short *)(*param_4 + lVar4) & 0x80000000U);
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4();
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar6 = (ulong)*(uint *)(*param_4 + lVar4);
        _log2f();
        uVar3 = (uint)uVar6 & 0x80000000;
        if (((uint)((uVar6 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar3 = (uint)uVar6;
        }
        *(uint *)(param_1 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      fVar5 = (float)*(double *)(*param_4 + lVar4);
      _log2f();
      dVar7 = (double)fVar5;
      dVar2 = (double)((ulong)dVar7 & 0x8000000000000000);
      if (((uint)(((ulong)dVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar2 = dVar7;
      }
      *(double *)(param_1 + lVar4) = dVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ee9d08; end: 109ee9eff;  */

void FUN_109ee9d08(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        fVar6 = (float)(((int)*(short *)(param_4[1] + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar6) {
          fVar6 = (float)((uint)fVar6 | 0x7f800000);
        }
        fVar8 = (float)(((int)*(short *)(param_4[2] + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar8) {
          fVar8 = (float)((uint)fVar8 | 0x7f800000);
        }
        fVar8 = (float)((uint)fVar8 | (int)*(short *)(param_4[2] + lVar4) & 0x80000000U);
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((float)((uint)fVar6 |
                                     (int)*(short *)(param_4[1] + lVar4) & 0x80000000U) * fVar8 +
                              (1.0 - fVar8) *
                              (float)((uint)fVar5 | (int)*(short *)(*param_4 + lVar4) & 0x80000000U)
                             );
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar6 = *(float *)(param_4[1] + lVar4) * *(float *)(param_4[2] + lVar4) +
                (1.0 - *(float *)(param_4[2] + lVar4)) * *(float *)(*param_4 + lVar4);
        fVar5 = (float)((uint)fVar6 & 0x80000000);
        if (((uint)(((uint)fVar6 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar5 = fVar6;
        }
        *(float *)(param_1 + lVar4) = fVar5;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      dVar7 = *(double *)(param_4[1] + lVar4) * *(double *)(param_4[2] + lVar4) +
              (1.0 - *(double *)(param_4[2] + lVar4)) * *(double *)(*param_4 + lVar4);
      dVar2 = (double)((ulong)dVar7 & 0x8000000000000000);
      if (((uint)(((ulong)dVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar2 = dVar7;
      }
      *(double *)(param_1 + lVar4) = dVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ee9f00; end: 109eea7b7;  */

void FUN_109ee9f00(long param_1,uint param_2,int param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        fVar2 = (float)(((int)*(short *)(*param_4 + lVar1) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar2) {
          fVar2 = (float)((uint)fVar2 | 0x7f800000);
        }
        fVar3 = (float)(((int)*(short *)(param_4[1] + lVar1) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar3) {
          fVar3 = (float)((uint)fVar3 | 0x7f800000);
        }
        *(bool *)(param_1 + lVar1) =
             (float)((uint)fVar2 | (int)*(short *)(*param_4 + lVar1) & 0x80000000U) <
             (float)((uint)fVar3 | (int)*(short *)(param_4[1] + lVar1) & 0x80000000U);
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        *(bool *)(param_1 + lVar1) = *(float *)(*param_4 + lVar1) < *(float *)(param_4[1] + lVar1);
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(bool *)(param_1 + lVar1) = *(double *)(*param_4 + lVar1) < *(double *)(param_4[1] + lVar1);
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109eea7b8; end: 109eeaecb;  */

void FUN_109eea7b8(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar6 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar6) {
          fVar6 = (float)((uint)fVar6 | 0x7f800000);
        }
        fVar6 = (float)((uint)fVar6 | (int)*(short *)(*param_4 + lVar4) & 0x80000000U);
        fVar5 = (float)(((int)*(short *)(param_4[1] + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        fVar5 = (float)((uint)fVar5 | (int)*(short *)(param_4[1] + lVar4) & 0x80000000U);
        fVar8 = fVar6;
        if ((int)fVar6 <= (int)fVar5) {
          fVar8 = fVar5;
        }
        fVar11 = fVar6;
        if (fVar6 <= fVar5) {
          fVar11 = fVar5;
        }
        if (fVar6 != fVar5) {
          fVar8 = fVar11;
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(fVar8);
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = *(float *)(*param_4 + lVar4);
        fVar8 = *(float *)(param_4[1] + lVar4);
        fVar6 = fVar5;
        if (fVar5 <= fVar8) {
          fVar6 = fVar8;
        }
        fVar11 = fVar5;
        if ((int)fVar5 <= (int)fVar8) {
          fVar11 = fVar8;
        }
        if (fVar5 == fVar8) {
          fVar6 = fVar11;
        }
        fVar5 = (float)((uint)fVar6 & 0x80000000);
        if (((uint)(((uint)fVar6 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar5 = fVar6;
        }
        *(float *)(param_1 + lVar4) = fVar5;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      dVar7 = *(double *)(*param_4 + lVar4);
      dVar9 = *(double *)(param_4[1] + lVar4);
      dVar10 = dVar7;
      if (dVar7 <= dVar9) {
        dVar10 = dVar9;
      }
      dVar2 = dVar7;
      if ((long)dVar7 <= (long)dVar9) {
        dVar2 = dVar9;
      }
      if (dVar7 == dVar9) {
        dVar10 = dVar2;
      }
      dVar7 = (double)((ulong)dVar10 & 0x8000000000000000);
      if (((uint)(((ulong)dVar10 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar7 = dVar10;
      }
      *(double *)(param_1 + lVar4) = dVar7;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109eeaecc; end: 109eeaf77;  */

void FUN_109eeaecc(long param_1,uint param_2,long *param_3,uint param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      fVar3 = *(float *)(*param_3 + lVar1);
      fVar2 = 0.0;
      if ((fVar3 != 0.0) && (fVar4 = *(float *)(param_3[1] + lVar1), fVar4 != 0.0)) {
        if ((param_4 >> 0x13 & 1) == 0) {
          fVar2 = fVar3 * fVar4;
        }
        else {
          fVar2 = SUB84((double)fVar3 * (double)fVar4,0);
          func_0x000109f682f4(1);
        }
      }
      fVar3 = (float)((uint)fVar2 & 0x80000000);
      if (((uint)(((uint)fVar2 & 0x7f800000) == 0) & param_4 >> 0xd) == 0) {
        fVar3 = fVar2;
      }
      *(float *)(param_1 + lVar1) = fVar3;
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109eeaf78; end: 109eeb0cf;  */

void FUN_109eeaf78(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  
  uVar4 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar5 = 0;
      do {
        fVar7 = (float)(((int)*(short *)(*param_4 + lVar5) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar7) {
          fVar7 = (float)((uint)fVar7 | 0x7f800000);
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(((uint)fVar7 | (int)*(short *)(*param_4 + lVar5) & 0x80000000U) ^
                              0x80000000);
        }
        uVar1 = (ushort)uVar4 & 0x8000;
        if (((uint)((uVar4 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar4;
        }
        *(ushort *)(param_1 + lVar5) = uVar1;
        lVar5 = lVar5 + 8;
      } while ((ulong)param_2 << 3 != lVar5);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar5 = 0;
      do {
        uVar3 = *(uint *)(*param_4 + lVar5) ^ 0x80000000;
        uVar4 = uVar3 & 0x80000000;
        if (((uint)((uVar3 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar4 = uVar3;
        }
        *(uint *)(param_1 + lVar5) = uVar4;
        lVar5 = lVar5 + 8;
      } while ((ulong)param_2 << 3 != lVar5);
    }
  }
  else if (param_2 != 0) {
    lVar5 = 0;
    do {
      uVar6 = *(ulong *)(*param_4 + lVar5) ^ 0x8000000000000000;
      uVar2 = uVar6 & 0x8000000000000000;
      if (((uint)((uVar6 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        uVar2 = uVar6;
      }
      *(ulong *)(param_1 + lVar5) = uVar2;
      lVar5 = lVar5 + 8;
    } while ((ulong)param_2 << 3 != lVar5);
  }
  return;
}



/* Entry: 109eeb0d0; end: 109eebddb;  */

void FUN_109eeb0d0(long param_1,uint param_2,int param_3,long *param_4)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        fVar3 = (float)(((int)*(short *)(*param_4 + lVar2) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar3) {
          fVar3 = (float)((uint)fVar3 | 0x7f800000);
        }
        fVar3 = (float)((uint)fVar3 | (int)*(short *)(*param_4 + lVar2) & 0x80000000U);
        if (NAN(fVar3)) {
          bVar1 = false;
        }
        else {
          fVar4 = (float)(((int)*(short *)(param_4[1] + lVar2) & 0x7fffU) << 0xd) * 5.192297e+33;
          if (65536.0 <= fVar4) {
            fVar4 = (float)((uint)fVar4 | 0x7f800000);
          }
          fVar4 = (float)((uint)fVar4 | (int)*(short *)(param_4[1] + lVar2) & 0x80000000U);
          bVar1 = true;
          if ((fVar3 != fVar4) && (bVar1 = true, !NAN(fVar4))) {
            bVar1 = false;
          }
          bVar1 = !bVar1;
        }
        *(bool *)(param_1 + lVar2) = bVar1;
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        if (NAN(*(float *)(*param_4 + lVar2))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if ((*(float *)(*param_4 + lVar2) != *(float *)(param_4[1] + lVar2)) &&
             (bVar1 = true, !NAN(*(float *)(param_4[1] + lVar2)))) {
            bVar1 = false;
          }
          bVar1 = !bVar1;
        }
        *(bool *)(param_1 + lVar2) = bVar1;
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (param_2 != 0) {
    lVar2 = 0;
    do {
      if (NAN(*(double *)(*param_4 + lVar2))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(double *)(*param_4 + lVar2) != *(double *)(param_4[1] + lVar2);
      }
      *(bool *)(param_1 + lVar2) = bVar1;
      lVar2 = lVar2 + 8;
    } while ((ulong)param_2 << 3 != lVar2);
  }
  return;
}



/* Entry: 109eebddc; end: 109eebf67;  */

void FUN_109eebddc(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
  uVar2 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        fVar4 = (float)(((int)*(short *)(*param_4 + lVar3) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar4) {
          fVar4 = (float)((uint)fVar4 | 0x7f800000);
        }
        fVar7 = (float)(((int)*(short *)(param_4[1] + lVar3) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar7) {
          fVar7 = (float)((uint)fVar7 | 0x7f800000);
        }
        _powf((uint)fVar4 | (int)*(short *)(*param_4 + lVar3) & 0x80000000U,
              (uint)fVar7 | (int)*(short *)(param_4[1] + lVar3) & 0x80000000U);
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4();
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar3) = uVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        uVar5 = (ulong)*(uint *)(*param_4 + lVar3);
        _powf(uVar5,*(undefined4 *)(param_4[1] + lVar3));
        uVar2 = (uint)uVar5 & 0x80000000;
        if (((uint)((uVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar2 = (uint)uVar5;
        }
        *(uint *)(param_1 + lVar3) = uVar2;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_2 != 0) {
    lVar3 = 0;
    do {
      uVar6 = *(ulong *)(*param_4 + lVar3);
      _pow(uVar6,*(undefined8 *)(param_4[1] + lVar3));
      uVar5 = uVar6 & 0x8000000000000000;
      if (((uint)((uVar6 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        uVar5 = uVar6;
      }
      *(ulong *)(param_1 + lVar3) = uVar5;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109eebf68; end: 109eec317;  */

void FUN_109eebf68(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      uVar2 = 0xfffffff2;
      fVar4 = (float)_ldexpf();
      lVar3 = 0;
      do {
        fVar5 = (float)(((int)*(short *)(*param_4 + lVar3) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        fVar1 = (float)((uint)fVar5 | (int)*(short *)(*param_4 + lVar3) & 0x80000000U);
        if (fVar4 <= ABS(fVar1)) {
          FUN_109f64b28();
          fVar5 = (float)(((uint)uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
          if (65536.0 <= fVar5) {
            fVar5 = (float)((uint)fVar5 | 0x7f800000);
          }
          uVar6 = (uint)fVar5 | (int)(uVar2 >> 0xf) << 0x1f;
          if ((param_5 >> 0x12 & 1) == 0) goto LAB_109eec0e4;
LAB_109eec0ac:
          func_0x000109f683f4(uVar6);
        }
        else {
          uVar6 = (uint)fVar1 ^ (uint)ABS(fVar5);
          if ((param_5 >> 0x12 & 1) != 0) goto LAB_109eec0ac;
LAB_109eec0e4:
          FUN_109f64b28();
        }
        *(short *)(param_1 + lVar3) = (short)uVar2;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      uVar2 = 0xfffffff2;
      fVar4 = (float)_ldexpf();
      lVar3 = 0;
      do {
        fVar5 = *(float *)(*param_4 + lVar3);
        if (fVar4 <= ABS(fVar5)) {
          FUN_109f64b28();
          fVar5 = (float)(((uint)uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
          if (65536.0 <= fVar5) {
            fVar5 = (float)((uint)fVar5 | 0x7f800000);
          }
          uVar6 = (uint)fVar5 | (int)(uVar2 >> 0xf) << 0x1f;
        }
        else {
          uVar6 = (uint)fVar5 ^ (uint)ABS(fVar5);
        }
        *(uint *)(param_1 + lVar3) = uVar6;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_2 != 0) {
    uVar2 = 0xfffffff2;
    fVar4 = (float)_ldexpf();
    lVar3 = 0;
    do {
      fVar5 = (float)*(double *)(*param_4 + lVar3);
      if ((double)fVar4 <= ABS(*(double *)(*param_4 + lVar3))) {
        FUN_109f64b28();
        fVar5 = (float)(((uint)uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        fVar5 = (float)((uint)fVar5 | (int)(uVar2 >> 0xf) << 0x1f);
      }
      else {
        fVar5 = (float)((uint)fVar5 ^ (uint)ABS(fVar5));
      }
      *(double *)(param_1 + lVar3) = (double)fVar5;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109eec318; end: 109eec4c3;  */

void FUN_109eec318(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar6 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar6) {
          fVar6 = (float)((uint)fVar6 | 0x7f800000);
        }
        fVar6 = (float)((uint)fVar6 | (int)*(short *)(*param_4 + lVar4) & 0x80000000U);
        fVar5 = (float)(((int)*(short *)(param_4[1] + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        fVar5 = (float)((uint)fVar5 | (int)*(short *)(param_4[1] + lVar4) & 0x80000000U);
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(fVar6 - (float)(int)(fVar6 / fVar5) * fVar5);
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = *(float *)(*param_4 + lVar4) -
                (float)(int)(*(float *)(*param_4 + lVar4) / *(float *)(param_4[1] + lVar4)) *
                *(float *)(param_4[1] + lVar4);
        fVar6 = (float)((uint)fVar5 & 0x80000000);
        if (((uint)(((uint)fVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar6 = fVar5;
        }
        *(float *)(param_1 + lVar4) = fVar6;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      dVar7 = *(double *)(*param_4 + lVar4) -
              (double)(float)(int)(*(double *)(*param_4 + lVar4) / *(double *)(param_4[1] + lVar4))
              * *(double *)(param_4[1] + lVar4);
      dVar2 = (double)((ulong)dVar7 & 0x8000000000000000);
      if (((uint)(((ulong)dVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar2 = dVar7;
      }
      *(double *)(param_1 + lVar4) = dVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109eec4c4; end: 109eec5e3;  */

void FUN_109eec4c4(long param_1,uint param_2,int param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        fVar2 = (float)(((int)*(short *)(*param_4 + lVar1) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar2) {
          fVar2 = (float)((uint)fVar2 | 0x7f800000);
        }
        _frexp((double)(float)((uint)fVar2 | (int)*(short *)(*param_4 + lVar1) & 0x80000000U),
               &uStack_44);
        *(undefined4 *)(param_1 + lVar1) = uStack_44;
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        _frexp((double)*(float *)(*param_4 + lVar1),&uStack_48);
        *(undefined4 *)(param_1 + lVar1) = uStack_48;
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_2 != 0) {
    lVar1 = 0;
    do {
      _frexp(*(undefined8 *)(*param_4 + lVar1),&uStack_4c);
      *(undefined4 *)(param_1 + lVar1) = uStack_4c;
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109eec5e4; end: 109eec8b7;  */

void FUN_109eec5e4(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  ulong uVar8;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar6 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar6) {
          fVar6 = (float)((uint)fVar6 | 0x7f800000);
        }
        dVar7 = (double)(float)((uint)fVar6 | (int)*(short *)(*param_4 + lVar4) & 0x80000000U);
        puVar3 = auStack_54;
        _frexp(dVar7);
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((float)dVar7);
        }
        uVar1 = (ushort)puVar3 & 0x8000;
        if (((uint)(((ulong)puVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)puVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        dVar7 = (double)*(float *)(*param_4 + lVar4);
        _frexp(auStack_58);
        fVar5 = (float)dVar7;
        fVar6 = (float)((uint)fVar5 & 0x80000000);
        if (((uint)(((uint)fVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar6 = fVar5;
        }
        *(float *)(param_1 + lVar4) = fVar6;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      uVar8 = *(ulong *)(*param_4 + lVar4);
      _frexp(auStack_5c);
      uVar2 = uVar8 & 0x8000000000000000;
      if (((uint)((uVar8 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        uVar2 = uVar8;
      }
      *(ulong *)(param_1 + lVar4) = uVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109eec8b8; end: 109eecf1b;  */

void FUN_109eec8b8(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(1.0 / SQRT((float)((uint)fVar5 |
                                                (int)*(short *)(*param_4 + lVar4) & 0x80000000U)));
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar6 = 1.0 / SQRT(*(float *)(*param_4 + lVar4));
        fVar5 = (float)((uint)fVar6 & 0x80000000);
        if (((uint)(((uint)fVar6 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar5 = fVar6;
        }
        *(float *)(param_1 + lVar4) = fVar5;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      dVar7 = 1.0 / SQRT(*(double *)(*param_4 + lVar4));
      dVar2 = (double)((ulong)dVar7 & 0x8000000000000000);
      if (((uint)(((ulong)dVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar2 = dVar7;
      }
      *(double *)(param_1 + lVar4) = dVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109eecf1c; end: 109eed073;  */

void FUN_109eecf1c(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        fVar4 = (float)(((int)*(short *)(*param_4 + lVar3) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar4) {
          fVar4 = (float)((uint)fVar4 | 0x7f800000);
        }
        _sinf((uint)fVar4 | (int)*(short *)(*param_4 + lVar3) & 0x80000000U);
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4();
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar3) = uVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        uVar5 = (ulong)*(uint *)(*param_4 + lVar3);
        _sinf();
        uVar2 = (uint)uVar5 & 0x80000000;
        if (((uint)((uVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar2 = (uint)uVar5;
        }
        *(uint *)(param_1 + lVar3) = uVar2;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_2 != 0) {
    lVar3 = 0;
    do {
      uVar6 = *(ulong *)(*param_4 + lVar3);
      _sin();
      uVar5 = uVar6 & 0x8000000000000000;
      if (((uint)((uVar6 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        uVar5 = uVar6;
      }
      *(ulong *)(param_1 + lVar3) = uVar5;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109eed074; end: 109eed547;  */

void FUN_109eed074(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  ulong uVar6;
  double dVar7;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar5) {
          fVar5 = (float)((uint)fVar5 | 0x7f800000);
        }
        _sinf((float)((uint)fVar5 | (int)*(short *)(*param_4 + lVar4) & 0x80000000U) * 1.5707964);
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4();
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar6 = (ulong)(uint)(*(float *)(*param_4 + lVar4) * 1.5707964);
        _sinf();
        uVar3 = (uint)uVar6 & 0x80000000;
        if (((uint)((uVar6 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar3 = (uint)uVar6;
        }
        *(uint *)(param_1 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      fVar5 = (float)(*(double *)(*param_4 + lVar4) * 1.570796325);
      _sinf();
      dVar7 = (double)fVar5;
      dVar2 = (double)((ulong)dVar7 & 0x8000000000000000);
      if (((uint)(((ulong)dVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar2 = dVar7;
      }
      *(double *)(param_1 + lVar4) = dVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109eed548; end: 109eed867;  */

void FUN_109eed548(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar6 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar6) {
          fVar6 = (float)((uint)fVar6 | 0x7f800000);
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(SQRT((float)((uint)fVar6 |
                                          (int)*(short *)(*param_4 + lVar4) & 0x80000000U)));
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar5 = SQRT(*(float *)(*param_4 + lVar4));
        fVar6 = (float)((uint)fVar5 & 0x80000000);
        if (((uint)(((uint)fVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar6 = fVar5;
        }
        *(float *)(param_1 + lVar4) = fVar6;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      dVar7 = SQRT(*(double *)(*param_4 + lVar4));
      dVar2 = (double)((ulong)dVar7 & 0x8000000000000000);
      if (((uint)(((ulong)dVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar2 = dVar7;
      }
      *(double *)(param_1 + lVar4) = dVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109eed868; end: 109eedc6b;  */

void FUN_109eed868(double *param_1,int param_2,double *param_3,uint param_4)

{
  uint uVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  uVar1 = (uint)param_1;
  if (param_2 == 0x40) {
    dVar3 = *param_3 + param_3[1];
    *param_1 = dVar3;
    if (((param_4 >> 0xe & 1) != 0) && (((ulong)dVar3 & 0x7ff0000000000000) == 0)) {
      *param_1 = (double)((ulong)dVar3 & 0x8000000000000000);
    }
  }
  else if (param_2 == 0x20) {
    fVar2 = *(float *)param_3 + *(float *)(param_3 + 1);
    *(float *)param_1 = fVar2;
    if (((param_4 >> 0xd & 1) != 0) && (((uint)fVar2 & 0x7f800000) == 0)) {
      *(uint *)param_1 = (uint)fVar2 & 0x80000000;
    }
  }
  else {
    fVar2 = (float)(((int)*(short *)param_3 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar2) {
      fVar2 = (float)((uint)fVar2 | 0x7f800000);
    }
    fVar4 = (float)(((int)*(short *)(param_3 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar4) {
      fVar4 = (float)((uint)fVar4 | 0x7f800000);
    }
    if ((param_4 >> 0x12 & 1) == 0) {
      FUN_109f64b28();
    }
    else {
      func_0x000109f683f4((float)((uint)fVar2 | (int)*(short *)param_3 & 0x80000000U) +
                          (float)((uint)fVar4 | (int)*(short *)(param_3 + 1) & 0x80000000U));
    }
    *(ushort *)param_1 = (ushort)uVar1;
    if (((param_4 >> 0xc & 1) != 0) && ((uVar1 & 0x7c00) == 0)) {
      *(ushort *)param_1 = (ushort)uVar1 & 0x8000;
    }
  }
  return;
}



/* Entry: 109eedc6c; end: 109eeddc3;  */

void FUN_109eedc6c(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  
  uVar3 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        fVar6 = (float)(((int)*(short *)(*param_4 + lVar4) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar6) {
          fVar6 = (float)((uint)fVar6 | 0x7f800000);
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((int)(float)((uint)fVar6 |
                                          (int)*(short *)(*param_4 + lVar4) & 0x80000000U));
        }
        uVar1 = (ushort)uVar3 & 0x8000;
        if (((uint)((uVar3 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar3;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar5 = (uint)*(float *)(*param_4 + lVar4);
        uVar3 = uVar5 & 0x80000000;
        if (((uint)((uVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar3 = uVar5;
        }
        *(uint *)(param_1 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      uVar7 = (ulong)*(double *)(*param_4 + lVar4);
      uVar2 = uVar7 & 0x8000000000000000;
      if (((uint)((uVar7 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        uVar2 = uVar7;
      }
      *(ulong *)(param_1 + lVar4) = uVar2;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109eeddc4; end: 109eee2a3;  */

void FUN_109eeddc4(long param_1,uint param_2,int param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        fVar3 = (float)(((int)*(short *)(*param_4 + lVar1) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar3) {
          fVar3 = (float)((uint)fVar3 | 0x7f800000);
        }
        fVar4 = (float)(((int)*(short *)(param_4[1] + lVar1) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar4) {
          fVar4 = (float)((uint)fVar4 | 0x7f800000);
        }
        *(bool *)(param_1 + lVar1) =
             NAN((float)((uint)fVar3 | (int)*(short *)(*param_4 + lVar1) & 0x80000000U)) ||
             NAN((float)((uint)fVar4 | (int)*(short *)(param_4[1] + lVar1) & 0x80000000U));
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        if (NAN(*(float *)(*param_4 + lVar1))) {
          bVar2 = true;
        }
        else {
          bVar2 = NAN(*(float *)(param_4[1] + lVar1));
        }
        *(bool *)(param_1 + lVar1) = bVar2;
        lVar1 = lVar1 + 8;
      } while ((ulong)param_2 << 3 != lVar1);
    }
  }
  else if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (NAN(*(double *)(*param_4 + lVar1))) {
        bVar2 = true;
      }
      else {
        bVar2 = NAN(*(double *)(param_4[1] + lVar1));
      }
      *(bool *)(param_1 + lVar1) = bVar2;
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109eee2a4; end: 109eee48f;  */

void FUN_109eee2a4(long param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar2 = (uint)param_1;
  uVar3 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  if (uVar3 < 4) {
    if (uVar3 == 0) {
      if (param_2 != 0) {
        lVar4 = 0;
        do {
          if ((param_5 >> 0x12 & 1) == 0) {
            FUN_109f64b28();
          }
          else {
            func_0x000109f683f4((float)(int)-*(char *)(*param_4 + lVar4));
          }
          uVar1 = (ushort)uVar2 & 0x8000;
          if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
            uVar1 = (ushort)uVar2;
          }
          *(ushort *)(param_1 + lVar4) = uVar1;
          lVar4 = lVar4 + 8;
        } while ((ulong)param_2 << 3 != lVar4);
      }
    }
    else if (param_2 != 0) {
      lVar4 = 0;
      do {
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((float)(int)*(char *)(*param_4 + lVar4));
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (uVar3 == 4) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((float)(int)*(short *)(*param_4 + lVar4));
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (uVar3 == 5) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4((float)*(int *)(*param_4 + lVar4));
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      if ((param_5 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4((float)*(long *)(*param_4 + lVar4));
      }
      uVar1 = (ushort)uVar2 & 0x8000;
      if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar2;
      }
      *(ushort *)(param_1 + lVar4) = uVar1;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109eee490; end: 109eee78f;  */

void FUN_109eee490(long param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  
  uVar2 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
  uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = (uint)LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
  if (uVar2 < 4) {
    if (uVar2 == 0) {
      if (param_2 != 0) {
        lVar3 = 0;
        do {
          fVar4 = (float)(int)-*(char *)(*param_4 + lVar3);
          fVar1 = (float)((uint)fVar4 & 0x80000000);
          if (((uint)(((uint)fVar4 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
            fVar1 = fVar4;
          }
          *(float *)(param_1 + lVar3) = fVar1;
          lVar3 = lVar3 + 8;
        } while ((ulong)param_2 << 3 != lVar3);
      }
    }
    else if (param_2 != 0) {
      lVar3 = 0;
      do {
        fVar4 = (float)(int)*(char *)(*param_4 + lVar3);
        fVar1 = (float)((uint)fVar4 & 0x80000000);
        if (((uint)(((uint)fVar4 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar1 = fVar4;
        }
        *(float *)(param_1 + lVar3) = fVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (uVar2 == 4) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        fVar4 = (float)(int)*(short *)(*param_4 + lVar3);
        fVar1 = (float)((uint)fVar4 & 0x80000000);
        if (((uint)(((uint)fVar4 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar1 = fVar4;
        }
        *(float *)(param_1 + lVar3) = fVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (uVar2 == 5) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        fVar4 = (float)*(int *)(*param_4 + lVar3);
        fVar1 = (float)((uint)fVar4 & 0x80000000);
        if (((uint)(((uint)fVar4 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          fVar1 = fVar4;
        }
        *(float *)(param_1 + lVar3) = fVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_2 != 0) {
    lVar3 = 0;
    do {
      fVar4 = (float)*(long *)(*param_4 + lVar3);
      fVar1 = (float)((uint)fVar4 & 0x80000000);
      if (((uint)(((uint)fVar4 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
        fVar1 = fVar4;
      }
      *(float *)(param_1 + lVar3) = fVar1;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109eee790; end: 109eee80f;  */

void FUN_109eee790(long param_1,uint param_2,long *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)param_1;
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      if ((param_4 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4((float)*(int *)(*param_3 + lVar3));
      }
      uVar1 = (ushort)uVar2 & 0x8000;
      if (((uint)((uVar2 & 0x7c00) == 0) & param_4 >> 0xc) == 0) {
        uVar1 = (ushort)uVar2;
      }
      *(ushort *)(param_1 + lVar3) = uVar1;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109eee810; end: 109ef0d43;  */

void FUN_109eee810(long param_1,uint param_2,uint param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = (uint)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 0) {
      if (param_2 != 0) {
        lVar2 = 0;
        do {
          *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(*param_4 + lVar2);
          lVar2 = lVar2 + 8;
        } while ((ulong)param_2 << 3 != lVar2);
      }
    }
    else if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(byte *)(param_1 + lVar2) = *(byte *)(*param_4 + lVar2) & 1;
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (uVar1 == 4) {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(byte *)(param_1 + lVar2) = *(byte *)(*param_4 + lVar2) & 1;
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (uVar1 == 5) {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(byte *)(param_1 + lVar2) = *(byte *)(*param_4 + lVar2) & 1;
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (param_2 != 0) {
    lVar2 = 0;
    do {
      *(byte *)(param_1 + lVar2) = *(byte *)(*param_4 + lVar2) & 1;
      lVar2 = lVar2 + 8;
    } while ((ulong)param_2 << 3 != lVar2);
  }
  return;
}



/* Entry: 109ef0d44; end: 109ef118f;  */

void FUN_109ef0d44(long param_1,ulong param_2,uint param_3,long *param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  iVar11 = (int)param_2;
  if (uVar3 < 4) {
    if (uVar3 == 0) {
      if (iVar11 != 0) {
        uVar4 = 0;
        uVar5 = param_2 & 0xffffffff;
        do {
          lVar6 = uVar4 * 8;
          bVar7 = *(byte *)(*param_4 + lVar6);
          bVar2 = *(byte *)(param_4[1] + lVar6);
          if (param_3 == 0x40) {
            lVar12 = 0;
            iVar11 = -(uint)((int)((uint)bVar2 << 0x1f) < 0);
            uStack_38 = CONCAT44(-(uint)((int)((uint)bVar2 << 0x1f) < 0),
                                 -(uint)((int)((uint)bVar2 << 0x1f) < 0));
            uStack_40 = CONCAT26((short)((uint)iVar11 >> 0x10),
                                 CONCAT24((short)iVar11,
                                          -(uint)((int)((uint)CONCAT12(bVar2,(ushort)bVar2) << 0x1f)
                                                 < 0)));
            uStack_28 = CONCAT44(-(uint)((int)((uint)bVar7 << 0x1f) < 0),
                                 -(uint)((int)((uint)bVar7 << 0x1f) < 0));
            uStack_30 = CONCAT44(-(uint)((int)((uint)bVar7 << 0x1f) < 0),
                                 -(uint)((int)((uint)CONCAT12(bVar7,(ushort)bVar7) << 0x1f) < 0));
            uStack_50 = 0;
            uStack_48 = 0;
            puVar13 = &uStack_50;
            do {
              lVar15 = 0;
              param_2 = 0;
              uVar3 = *(uint *)((long)&uStack_30 + lVar12 * 4);
              do {
                if (lVar12 + lVar15 == 4) break;
                param_2 = param_2 + (ulong)*(uint *)((long)&uStack_40 + lVar15 * 4) * (ulong)uVar3 +
                          (ulong)*(uint *)((long)puVar13 + lVar15 * 4);
                *(int *)((long)puVar13 + lVar15 * 4) = (int)param_2;
                param_2 = param_2 >> 0x20;
                lVar15 = lVar15 + 1;
              } while (lVar15 != 4);
              lVar12 = lVar12 + 1;
              puVar13 = (undefined8 *)((long)puVar13 + 4);
            } while (lVar12 != 4);
            bVar7 = (byte)uStack_48;
          }
          else {
            bVar7 = (byte)((uint)bVar2 * (uint)bVar7 >> ((ulong)param_3 & 0x3f));
          }
          *(byte *)(param_1 + lVar6) = bVar7 & 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar5);
      }
    }
    else if (iVar11 != 0) {
      uVar4 = 0;
      uVar5 = param_2 & 0xffffffff;
      do {
        lVar6 = uVar4 * 8;
        iVar14 = (int)*(char *)(*param_4 + lVar6);
        iVar11 = (int)*(char *)(param_4[1] + lVar6);
        if (param_3 == 0x40) {
          lVar12 = 0;
          iVar1 = iVar14 >> 7;
          uStack_30 = CONCAT44(iVar1,iVar14);
          uStack_28 = CONCAT44(iVar1,iVar1);
          iVar14 = iVar11 >> 7;
          uStack_40 = CONCAT44(iVar14,iVar11);
          uStack_38 = CONCAT44(iVar14,iVar14);
          uStack_50 = 0;
          uStack_48 = 0;
          puVar13 = &uStack_50;
          do {
            lVar15 = 0;
            param_2 = 0;
            uVar3 = *(uint *)((long)&uStack_30 + lVar12 * 4);
            do {
              if (lVar12 + lVar15 == 4) break;
              param_2 = param_2 + (ulong)*(uint *)((long)&uStack_40 + lVar15 * 4) * (ulong)uVar3 +
                        (ulong)*(uint *)((long)puVar13 + lVar15 * 4);
              *(int *)((long)puVar13 + lVar15 * 4) = (int)param_2;
              param_2 = param_2 >> 0x20;
              lVar15 = lVar15 + 1;
            } while (lVar15 != 4);
            lVar12 = lVar12 + 1;
            puVar13 = (undefined8 *)((long)puVar13 + 4);
          } while (lVar12 != 4);
          uVar8 = (undefined1)uStack_48;
        }
        else {
          uVar8 = (undefined1)((ulong)((long)iVar11 * (long)iVar14) >> ((ulong)param_3 & 0x3f));
        }
        *(undefined1 *)(param_1 + lVar6) = uVar8;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar5);
    }
  }
  else if (uVar3 == 4) {
    if (iVar11 != 0) {
      uVar4 = 0;
      uVar5 = param_2 & 0xffffffff;
      do {
        lVar6 = uVar4 * 8;
        iVar14 = (int)*(short *)(*param_4 + lVar6);
        iVar11 = (int)*(short *)(param_4[1] + lVar6);
        if (param_3 == 0x40) {
          lVar12 = 0;
          iVar1 = iVar14 >> 0xf;
          uStack_30 = CONCAT44(iVar1,iVar14);
          uStack_28 = CONCAT44(iVar1,iVar1);
          iVar14 = iVar11 >> 0xf;
          uStack_40 = CONCAT44(iVar14,iVar11);
          uStack_38 = CONCAT44(iVar14,iVar14);
          uStack_50 = 0;
          uStack_48 = 0;
          puVar13 = &uStack_50;
          do {
            lVar15 = 0;
            param_2 = 0;
            uVar3 = *(uint *)((long)&uStack_30 + lVar12 * 4);
            do {
              if (lVar12 + lVar15 == 4) break;
              param_2 = param_2 + (ulong)*(uint *)((long)&uStack_40 + lVar15 * 4) * (ulong)uVar3 +
                        (ulong)*(uint *)((long)puVar13 + lVar15 * 4);
              *(int *)((long)puVar13 + lVar15 * 4) = (int)param_2;
              param_2 = param_2 >> 0x20;
              lVar15 = lVar15 + 1;
            } while (lVar15 != 4);
            lVar12 = lVar12 + 1;
            puVar13 = (undefined8 *)((long)puVar13 + 4);
          } while (lVar12 != 4);
          uVar9 = (undefined2)uStack_48;
        }
        else {
          uVar9 = (undefined2)((ulong)((long)iVar11 * (long)iVar14) >> ((ulong)param_3 & 0x3f));
        }
        *(undefined2 *)(param_1 + lVar6) = uVar9;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar5);
    }
  }
  else if (uVar3 == 5) {
    if (iVar11 != 0) {
      uVar4 = 0;
      uVar5 = param_2 & 0xffffffff;
      do {
        lVar6 = uVar4 * 8;
        iVar11 = *(int *)(*param_4 + lVar6);
        iVar14 = *(int *)(param_4[1] + lVar6);
        if (param_3 == 0x40) {
          lVar12 = 0;
          uStack_30 = (long)iVar11;
          uStack_28 = CONCAT44(iVar11 >> 0x1f,iVar11 >> 0x1f);
          uStack_40 = (long)iVar14;
          uStack_38 = CONCAT44(iVar14 >> 0x1f,iVar14 >> 0x1f);
          uStack_50 = 0;
          uStack_48 = 0;
          puVar13 = &uStack_50;
          do {
            lVar15 = 0;
            param_2 = 0;
            uVar3 = *(uint *)((long)&uStack_30 + lVar12 * 4);
            do {
              if (lVar12 + lVar15 == 4) break;
              param_2 = param_2 + (ulong)*(uint *)((long)&uStack_40 + lVar15 * 4) * (ulong)uVar3 +
                        (ulong)*(uint *)((long)puVar13 + lVar15 * 4);
              *(int *)((long)puVar13 + lVar15 * 4) = (int)param_2;
              param_2 = param_2 >> 0x20;
              lVar15 = lVar15 + 1;
            } while (lVar15 != 4);
            lVar12 = lVar12 + 1;
            puVar13 = (undefined8 *)((long)puVar13 + 4);
          } while (lVar12 != 4);
          uVar10 = (undefined4)uStack_48;
        }
        else {
          uVar10 = (undefined4)((ulong)((long)iVar14 * (long)iVar11) >> ((ulong)param_3 & 0x3f));
        }
        *(undefined4 *)(param_1 + lVar6) = uVar10;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar5);
    }
  }
  else if (iVar11 != 0) {
    uVar4 = 0;
    uVar5 = param_2 & 0xffffffff;
    do {
      lVar12 = *(long *)(*param_4 + uVar4 * 8);
      lVar6 = *(long *)(param_4[1] + uVar4 * 8);
      if (param_3 == 0x40) {
        lVar15 = 0;
        uStack_30 = lVar12;
        iVar11 = (int)(lVar12 >> 0x3f);
        uStack_28 = CONCAT44(iVar11,iVar11);
        uStack_40 = lVar6;
        iVar11 = (int)(lVar6 >> 0x3f);
        uStack_38 = CONCAT44(iVar11,iVar11);
        uStack_50 = 0;
        uStack_48 = 0;
        puVar13 = &uStack_50;
        do {
          lVar6 = 0;
          uVar16 = 0;
          uVar3 = *(uint *)((long)&uStack_30 + lVar15 * 4);
          do {
            param_2 = lVar15 + lVar6;
            if (param_2 == 4) break;
            param_2 = (ulong)*(uint *)((long)puVar13 + lVar6 * 4);
            uVar16 = uVar16 + (ulong)*(uint *)((long)&uStack_40 + lVar6 * 4) * (ulong)uVar3 +
                     param_2;
            *(int *)((long)puVar13 + lVar6 * 4) = (int)uVar16;
            uVar16 = uVar16 >> 0x20;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 4);
          lVar15 = lVar15 + 1;
          puVar13 = (undefined8 *)((long)puVar13 + 4);
          uVar16 = uStack_48;
        } while (lVar15 != 4);
      }
      else {
        uVar16 = (ulong)(lVar6 * lVar12) >> ((ulong)param_3 & 0x3f);
      }
      *(ulong *)(param_1 + uVar4 * 8) = uVar16;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    uVar3 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
    iVar11 = (int)param_2;
    if (uVar3 < 4) {
      if (uVar3 == 0) {
        if (iVar11 != 0) {
          lVar6 = 0;
          do {
            *(bool *)(param_1 + lVar6) =
                 *(char *)(param_4[1] + lVar6) != *(char *)(*param_4 + lVar6);
            lVar6 = lVar6 + 8;
          } while ((param_2 & 0xffffffff) << 3 != lVar6);
        }
      }
      else if (iVar11 != 0) {
        lVar6 = 0;
        do {
          *(bool *)(param_1 + lVar6) = *(char *)(*param_4 + lVar6) != *(char *)(param_4[1] + lVar6);
          lVar6 = lVar6 + 8;
        } while ((param_2 & 0xffffffff) << 3 != lVar6);
      }
    }
    else if (uVar3 == 4) {
      if (iVar11 != 0) {
        lVar6 = 0;
        do {
          *(bool *)(param_1 + lVar6) =
               *(short *)(*param_4 + lVar6) != *(short *)(param_4[1] + lVar6);
          lVar6 = lVar6 + 8;
        } while ((param_2 & 0xffffffff) << 3 != lVar6);
      }
    }
    else if (uVar3 == 5) {
      if (iVar11 != 0) {
        lVar6 = 0;
        do {
          *(bool *)(param_1 + lVar6) = *(int *)(*param_4 + lVar6) != *(int *)(param_4[1] + lVar6);
          lVar6 = lVar6 + 8;
        } while ((param_2 & 0xffffffff) << 3 != lVar6);
      }
    }
    else if (iVar11 != 0) {
      lVar6 = 0;
      do {
        *(bool *)(param_1 + lVar6) = *(long *)(*param_4 + lVar6) != *(long *)(param_4[1] + lVar6);
        lVar6 = lVar6 + 8;
      } while ((param_2 & 0xffffffff) << 3 != lVar6);
    }
    return;
  }
  return;
}



/* Entry: 109ef1190; end: 109ef25a7;  */

void FUN_109ef1190(long param_1,uint param_2,uint param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = (uint)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 0) {
      if (param_2 != 0) {
        lVar2 = 0;
        do {
          *(bool *)(param_1 + lVar2) = *(char *)(param_4[1] + lVar2) != *(char *)(*param_4 + lVar2);
          lVar2 = lVar2 + 8;
        } while ((ulong)param_2 << 3 != lVar2);
      }
    }
    else if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(bool *)(param_1 + lVar2) = *(char *)(*param_4 + lVar2) != *(char *)(param_4[1] + lVar2);
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (uVar1 == 4) {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(bool *)(param_1 + lVar2) = *(short *)(*param_4 + lVar2) != *(short *)(param_4[1] + lVar2);
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (uVar1 == 5) {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(bool *)(param_1 + lVar2) = *(int *)(*param_4 + lVar2) != *(int *)(param_4[1] + lVar2);
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (param_2 != 0) {
    lVar2 = 0;
    do {
      *(bool *)(param_1 + lVar2) = *(long *)(*param_4 + lVar2) != *(long *)(param_4[1] + lVar2);
      lVar2 = lVar2 + 8;
    } while ((ulong)param_2 << 3 != lVar2);
  }
  return;
}



/* Entry: 109ef25a8; end: 109ef279f;  */

void FUN_109ef25a8(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        fVar7 = (float)(((int)*(short *)(*param_4 + lVar3) & 0x7fffU) << 0xd) * 5.192297e+33;
        uVar5 = (int)*(short *)(*param_4 + lVar3) & 0x80000000;
        if (65536.0 <= fVar7) {
          fVar7 = (float)((uint)fVar7 | 0x7f800000);
        }
        uVar4 = (uint)fVar7 | uVar5;
        uVar2 = (ulong)*(uint *)(param_4[1] + lVar3);
        _ldexpf();
        if (0x7e < (uVar4 & 0x7fffffff) - 0x800000 >> 0x18) {
          uVar4 = (uint)fVar7 & 0x80000000 | uVar5;
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(uVar4);
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar3) = uVar1;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        uVar4 = *(uint *)(*param_4 + lVar3);
        uVar5 = uVar4;
        _ldexpf(*(undefined4 *)(param_4[1] + lVar3));
        if (0x7e < (uVar5 & 0x7fffffff) - 0x800000 >> 0x18) {
          uVar5 = uVar4 & 0x80000000;
        }
        uVar4 = uVar5 & 0x80000000;
        if (((uint)((uVar5 & 0x7f800000) == 0) & param_5 >> 0xd) == 0) {
          uVar4 = uVar5;
        }
        *(uint *)(param_1 + lVar3) = uVar4;
        lVar3 = lVar3 + 8;
      } while ((ulong)param_2 << 3 != lVar3);
    }
  }
  else if (param_2 != 0) {
    lVar3 = 0;
    do {
      dVar8 = *(double *)(*param_4 + lVar3);
      dVar6 = dVar8;
      _ldexp(*(undefined4 *)(param_4[1] + lVar3));
      fVar7 = (float)dVar8;
      if (0x3fe < (long)ABS(dVar6) + 0xfff0000000000000U >> 0x35) {
        dVar6 = (double)(float)((uint)fVar7 ^ (uint)ABS(fVar7));
      }
      dVar8 = (double)((ulong)dVar6 & 0x8000000000000000);
      if (((uint)(((ulong)dVar6 & 0x7ff0000000000000) == 0) & param_5 >> 0xe) == 0) {
        dVar8 = dVar6;
      }
      *(double *)(param_1 + lVar3) = dVar8;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109ef27a0; end: 109ef2aef;  */

void FUN_109ef27a0(long param_1,uint param_2,uint param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = (uint)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 0) {
      if (param_2 != 0) {
        lVar2 = 0;
        do {
          *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(*param_4 + lVar2);
          lVar2 = lVar2 + 8;
        } while ((ulong)param_2 << 3 != lVar2);
      }
    }
    else if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(*param_4 + lVar2);
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (uVar1 == 4) {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(undefined2 *)(param_1 + lVar2) = *(undefined2 *)(*param_4 + lVar2);
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (uVar1 == 5) {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(*param_4 + lVar2);
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (param_2 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(*param_4 + lVar2);
      lVar2 = lVar2 + 8;
    } while ((ulong)param_2 << 3 != lVar2);
  }
  return;
}



/* Entry: 109ef2af0; end: 109ef2d2b;  */

void FUN_109ef2af0(ulong param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 != 0) {
    lVar4 = 0;
    uVar3 = param_1;
    do {
      uVar1 = (uint)uVar3;
      uVar2 = *(uint *)(*param_3 + lVar4);
      fVar5 = (float)((uVar2 & 0x7fff) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar5) {
        fVar5 = (float)((uint)fVar5 | 0x7f800000);
      }
      fVar5 = (float)((uint)fVar5 | (uVar2 >> 0xf) << 0x1f);
      fVar7 = 0.0;
      if ((0.0 < fVar5) && (fVar7 = 1.0, fVar5 <= 1.0)) {
        fVar7 = fVar5;
      }
      fVar5 = (float)(uVar2 >> 3 & 0xfffe000) * 5.192297e+33;
      if (65536.0 <= fVar5) {
        fVar5 = (float)((uint)fVar5 | 0x7f800000);
      }
      fVar5 = (float)((uint)fVar5 | uVar2 & 0x80000000);
      fVar6 = 0.0;
      if ((0.0 < fVar5) && (fVar6 = 1.0, fVar5 <= 1.0)) {
        fVar6 = fVar5;
      }
      FUN_109f64b28(fVar6);
      uVar2 = uVar1;
      FUN_109f64b28(fVar7);
      uVar3 = (ulong)(uVar2 | uVar1 << 0x10);
      FUN_109ef7c34(uVar3,0x303ff);
      *(int *)(param_1 + lVar4) = (int)uVar3;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ef2d2c; end: 109ef2e6b;  */

void FUN_109ef2d2c(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      uVar3 = *(uint *)(*param_3 + lVar1);
      fVar4 = (float)((uVar3 & 0x7fff) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar4) {
        fVar4 = (float)((uint)fVar4 | 0x7f800000);
      }
      fVar4 = (float)((uint)fVar4 | (uVar3 >> 0xf) << 0x1f);
      if (0.0 <= fVar4) {
        if (fVar4 <= 1.0) {
          uVar2 = (uint)(long)(float)(int)(fVar4 * 255.0);
        }
        else {
          uVar2 = 0xff;
        }
      }
      else {
        uVar2 = 0;
      }
      fVar4 = (float)(uVar3 >> 3 & 0xfffe000) * 5.192297e+33;
      if (65536.0 <= fVar4) {
        fVar4 = (float)((uint)fVar4 | 0x7f800000);
      }
      fVar4 = (float)((uint)fVar4 | uVar3 & 0x80000000);
      if (0.0 <= fVar4) {
        if (fVar4 <= 1.0) {
          uVar3 = (int)(long)(float)(int)(fVar4 * 255.0) << 0x10;
        }
        else {
          uVar3 = 0xff0000;
        }
      }
      else {
        uVar3 = 0;
      }
      *(uint *)(param_1 + lVar1) = uVar3 | uVar2;
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109ef2e6c; end: 109ef31ab;  */

void FUN_109ef2e6c(long param_1,uint param_2,long *param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  
  if (param_2 != 0) {
    lVar7 = 0;
    do {
      uVar4 = *(uint *)(*param_3 + lVar7);
      uVar6 = *(uint *)(param_3[1] + lVar7);
      fVar8 = (float)((uVar4 & 0x7fff) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar8) {
        fVar8 = (float)((uint)fVar8 | 0x7f800000);
      }
      uVar3 = (uVar4 >> 0xf) << 0x1f;
      fVar1 = (float)((uint)fVar8 | uVar3);
      fVar9 = (float)(uVar4 >> 3 & 0xfffe000) * 5.192297e+33;
      if (65536.0 <= fVar9) {
        fVar9 = (float)((uint)fVar9 | 0x7f800000);
      }
      fVar10 = (float)((uVar6 & 0x7fff) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar10) {
        fVar10 = (float)((uint)fVar10 | 0x7f800000);
      }
      uVar2 = (uint)fVar8 >> 0x17 & 0xff;
      if (uVar2 - 0x7f == 0x80) {
        uVar2 = 0x7c0;
        if (((uint)fVar8 & 0x80000000) != 0 || uVar3 != 0) {
          uVar2 = 0;
        }
        uVar3 = 0x7c1;
        if (((uint)fVar8 & 0x7fffff) == 0) {
          uVar3 = uVar2;
        }
LAB_109ef2f48:
        uVar3 = uVar3 & 0x7ff;
      }
      else {
        if (-1 < (int)fVar1) {
          if (fVar1 <= 65024.0) {
            dVar11 = (double)fVar1;
            if (uVar2 < 0x71) {
              _ldexp(0x14);
              uVar3 = (uint)(long)(float)(int)dVar11;
              if (((long)(float)(int)dVar11 & 0xffffffc0U) != 0) {
                uVar3 = 0x40;
              }
            }
            else {
              _ldexp(0x85 - uVar2);
              uVar3 = (uint)(long)(float)(int)dVar11;
              iVar5 = uVar2 - 0x7e;
              if ((int)uVar3 < 0x80) {
                iVar5 = uVar2 - 0x7f;
              }
              uVar3 = (uVar3 >> (0x7f < (int)uVar3) & 0x3f | iVar5 << 6) + 0x3c0;
            }
          }
          else {
            uVar3 = 0x7bf;
          }
          goto LAB_109ef2f48;
        }
        uVar3 = 0;
      }
      fVar8 = (float)((uint)fVar9 | uVar4 & 0x80000000);
      uVar2 = (uint)fVar9 >> 0x17 & 0xff;
      if (uVar2 - 0x7f == 0x80) {
        if (((uint)fVar9 & 0x7fffff) == 0) {
          uVar2 = 0x7c0;
          if (((uint)fVar9 & 0x80000000) != 0 || (uVar4 & 0x80000000) != 0) {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0x7c1;
        }
LAB_109ef30a4:
        uVar4 = (uVar2 & 0x7ff) << 0xb;
      }
      else {
        if (-1 < (int)fVar8) {
          if (fVar8 <= 65024.0) {
            dVar11 = (double)fVar8;
            if (uVar2 < 0x71) {
              _ldexp(0x14);
              uVar2 = (uint)(long)(float)(int)dVar11;
              if (((long)(float)(int)dVar11 & 0xffffffc0U) != 0) {
                uVar2 = 0x40;
              }
            }
            else {
              _ldexp(0x85 - uVar2);
              uVar4 = (uint)(long)(float)(int)dVar11;
              iVar5 = uVar2 - 0x7e;
              if ((int)uVar4 < 0x80) {
                iVar5 = uVar2 - 0x7f;
              }
              uVar2 = (uVar4 >> (0x7f < (int)uVar4) & 0x3f | iVar5 << 6) + 0x3c0;
            }
          }
          else {
            uVar2 = 0x7bf;
          }
          goto LAB_109ef30a4;
        }
        uVar4 = 0;
      }
      uVar6 = (uVar6 >> 0xf) << 0x1f;
      fVar8 = (float)((uint)fVar10 | uVar6);
      uVar2 = (uint)fVar10 >> 0x17 & 0xff;
      if (uVar2 - 0x7f == 0x80) {
        if (((uint)fVar10 & 0x7fffff) == 0) {
          iVar5 = 0x3e0;
          if (((uint)fVar10 & 0x80000000) != 0 || uVar6 != 0) {
            iVar5 = 0;
          }
        }
        else {
          iVar5 = 0x3e1;
        }
LAB_109ef3170:
        uVar6 = iVar5 << 0x16;
      }
      else {
        if (-1 < (int)fVar8) {
          if (fVar8 <= 64512.0) {
            dVar11 = (double)fVar8;
            if (uVar2 < 0x71) {
              _ldexp(0x13);
              iVar5 = (int)(long)(float)(int)dVar11;
              if (((long)(float)(int)dVar11 & 0xffffffe0U) != 0) {
                iVar5 = 0x20;
              }
            }
            else {
              _ldexp(0x84 - uVar2);
              uVar6 = (uint)(long)(float)(int)dVar11;
              iVar5 = uVar2 - 0x7e;
              if ((int)uVar6 < 0x40) {
                iVar5 = uVar2 - 0x7f;
              }
              iVar5 = (uVar6 >> (0x3f < (int)uVar6) & 0x1f | iVar5 << 5) + 0x1e0;
            }
          }
          else {
            iVar5 = 0x3df;
          }
          goto LAB_109ef3170;
        }
        uVar6 = 0;
      }
      *(uint *)(param_1 + lVar7) = uVar4 | uVar3 | uVar6;
      lVar7 = lVar7 + 8;
    } while ((ulong)param_2 << 3 != lVar7);
  }
  return;
}



/* Entry: 109ef31ac; end: 109ef31eb;  */

void FUN_109ef31ac(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(uint *)(param_1 + lVar1) =
           *(uint *)(*param_3 + lVar1) >> 8 & 0xff00 | *(uint *)(*param_3 + lVar1) & 0xff |
           (*(uint *)(param_3[1] + lVar1) & 0xff) << 0x10 |
           (*(uint *)(param_3[1] + lVar1) >> 0x10) << 0x18;
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109ef31ec; end: 109ef32ab;  */

void FUN_109ef31ec(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_3;
  FUN_109f64b28();
  uVar2 = uVar1;
  FUN_109f64b28(param_2);
  *param_3 = uVar1 | uVar2 << 0x10;
  return;
}



/* Entry: 109ef32ac; end: 109ef390f;  */

void FUN_109ef32ac(uint *param_1,int param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 == 0x40) {
    fVar1 = (float)*param_3;
    fVar3 = 1.0;
    if (fVar1 <= 1.0) {
      fVar3 = fVar1;
    }
    fVar3 = (float)(int)(fVar3 * 32767.0);
    if (fVar1 <= -1.0) {
      fVar3 = -32767.0;
    }
    fVar1 = (float)param_3[1];
  }
  else if (param_2 == 0x20) {
    fVar2 = *(float *)param_3;
    fVar1 = *(float *)(param_3 + 1);
    fVar3 = 1.0;
    if (fVar2 <= 1.0) {
      fVar3 = fVar2;
    }
    fVar3 = (float)(int)(fVar3 * 32767.0);
    if (fVar2 <= -1.0) {
      fVar3 = -32767.0;
    }
  }
  else {
    fVar2 = (float)(((int)*(short *)param_3 & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar2) {
      fVar2 = (float)((uint)fVar2 | 0x7f800000);
    }
    fVar2 = (float)((uint)fVar2 | (int)*(short *)param_3 & 0x80000000U);
    fVar1 = (float)(((int)*(short *)(param_3 + 1) & 0x7fffU) << 0xd) * 5.192297e+33;
    if (65536.0 <= fVar1) {
      fVar1 = (float)((uint)fVar1 | 0x7f800000);
    }
    fVar1 = (float)((uint)fVar1 | (int)*(short *)(param_3 + 1) & 0x80000000U);
    fVar3 = 1.0;
    if (fVar2 <= 1.0) {
      fVar3 = fVar2;
    }
    fVar3 = (float)(int)(fVar3 * 32767.0);
    if (fVar2 <= -1.0) {
      fVar3 = -32767.0;
    }
  }
  fVar2 = 1.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  fVar2 = (float)(int)(fVar2 * 32767.0);
  if (fVar1 <= -1.0) {
    fVar2 = -32767.0;
  }
  *param_1 = (int)fVar3 & 0xffffU | (int)fVar2 << 0x10;
  return;
}



/* Entry: 109ef3910; end: 109ef3c77;  */

void FUN_109ef3910(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  
  uVar5 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        fVar7 = (float)(((int)*(short *)(*param_4 + lVar6) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar7) {
          fVar7 = (float)((uint)fVar7 | 0x7f800000);
        }
        fVar8 = (float)(((int)*(short *)(param_4[1] + lVar6) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar8) {
          fVar8 = (float)((uint)fVar8 | 0x7f800000);
        }
        uVar4 = 0x3f800000;
        if ((float)((uint)fVar7 | (int)*(short *)(*param_4 + lVar6) & 0x80000000U) !=
            (float)((uint)fVar8 | (int)*(short *)(param_4[1] + lVar6) & 0x80000000U)) {
          uVar4 = 0;
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(uVar4);
        }
        uVar1 = (ushort)uVar5 & 0x8000;
        if (((uint)((uVar5 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar5;
        }
        *(ushort *)(param_1 + lVar6) = uVar1;
        lVar6 = lVar6 + 8;
      } while ((ulong)param_2 << 3 != lVar6);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        uVar5 = 0x3f800000;
        if (*(float *)(*param_4 + lVar6) != *(float *)(param_4[1] + lVar6)) {
          uVar5 = 0;
        }
        uVar2 = 0;
        if (((uint)(uVar5 < 0x800000) & param_5 >> 0xd) == 0) {
          uVar2 = uVar5;
        }
        *(uint *)(param_1 + lVar6) = uVar2;
        lVar6 = lVar6 + 8;
      } while ((ulong)param_2 << 3 != lVar6);
    }
  }
  else if (param_2 != 0) {
    lVar6 = 0;
    do {
      lVar9 = 0x3ff0000000000000;
      if (*(double *)(*param_4 + lVar6) != *(double *)(param_4[1] + lVar6)) {
        lVar9 = 0;
      }
      lVar3 = 0;
      if (((uint)(lVar9 == 0) & param_5 >> 0xe) == 0) {
        lVar3 = lVar9;
      }
      *(long *)(param_1 + lVar6) = lVar3;
      lVar6 = lVar6 + 8;
    } while ((ulong)param_2 << 3 != lVar6);
  }
  return;
}



/* Entry: 109ef3c78; end: 109ef3cb7;  */

void FUN_109ef3c78(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(int *)(param_1 + lVar1) =
           (int)(CONCAT44(*(undefined4 *)(*param_3 + lVar1),*(undefined4 *)(param_3[1] + lVar1)) >>
                (*(uint *)(param_3[2] + lVar1) & 0x1f));
      lVar1 = lVar1 + 8;
    } while ((ulong)param_2 << 3 != lVar1);
  }
  return;
}



/* Entry: 109ef3cb8; end: 109ef401f;  */

void FUN_109ef3cb8(long param_1,uint param_2,int param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  
  uVar5 = (uint)param_1;
  if (param_3 == 0x10) {
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        fVar7 = (float)(((int)*(short *)(*param_4 + lVar6) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar7) {
          fVar7 = (float)((uint)fVar7 | 0x7f800000);
        }
        fVar8 = (float)(((int)*(short *)(param_4[1] + lVar6) & 0x7fffU) << 0xd) * 5.192297e+33;
        if (65536.0 <= fVar8) {
          fVar8 = (float)((uint)fVar8 | 0x7f800000);
        }
        uVar4 = 0x3f800000;
        if ((float)((uint)fVar8 | (int)*(short *)(param_4[1] + lVar6) & 0x80000000U) <=
            (float)((uint)fVar7 | (int)*(short *)(*param_4 + lVar6) & 0x80000000U)) {
          uVar4 = 0;
        }
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4(uVar4);
        }
        uVar1 = (ushort)uVar5 & 0x8000;
        if (((uint)((uVar5 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar5;
        }
        *(ushort *)(param_1 + lVar6) = uVar1;
        lVar6 = lVar6 + 8;
      } while ((ulong)param_2 << 3 != lVar6);
    }
  }
  else if (param_3 == 0x20) {
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        uVar5 = 0x3f800000;
        if (*(float *)(param_4[1] + lVar6) <= *(float *)(*param_4 + lVar6)) {
          uVar5 = 0;
        }
        uVar2 = 0;
        if (((uint)(uVar5 < 0x800000) & param_5 >> 0xd) == 0) {
          uVar2 = uVar5;
        }
        *(uint *)(param_1 + lVar6) = uVar2;
        lVar6 = lVar6 + 8;
      } while ((ulong)param_2 << 3 != lVar6);
    }
  }
  else if (param_2 != 0) {
    lVar6 = 0;
    do {
      lVar9 = 0x3ff0000000000000;
      if (*(double *)(param_4[1] + lVar6) <= *(double *)(*param_4 + lVar6)) {
        lVar9 = 0;
      }
      lVar3 = 0;
      if (((uint)(lVar9 == 0) & param_5 >> 0xe) == 0) {
        lVar3 = lVar9;
      }
      *(long *)(param_1 + lVar6) = lVar3;
      lVar6 = lVar6 + 8;
    } while ((ulong)param_2 << 3 != lVar6);
  }
  return;
}



/* Entry: 109ef4020; end: 109ef4123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109ef4020(long param_1,uint param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  
  auVar3 = _UNK_10e06c7f0;
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined4 *)(*param_3 + lVar4);
      uVar2 = *(uint *)(param_3[1] + lVar4);
      auVar5._4_4_ = uVar1;
      auVar5._0_4_ = uVar1;
      auVar5._8_4_ = uVar1;
      auVar5._12_4_ = uVar1;
      auVar5 = NEON_ushl(auVar5,auVar3,4);
      uVar6 = NEON_ushl(CONCAT17((char)(uVar2 >> 0x18),
                                 CONCAT16((char)(uVar2 >> 0x10),
                                          CONCAT15((char)(uVar2 >> 8),CONCAT14((char)uVar2,uVar2))))
                        ,0xfffffff0fffffff8,4);
      *(uint *)(param_1 + lVar4) =
           (uVar2 >> 0x18) * (int)(char)((uint)uVar1 >> 0x18) + (uVar2 & 0xff) * (int)(char)uVar1 +
           (uint)(byte)uVar6 * (auVar5._0_4_ >> 0x18) +
           (uint)(byte)((ulong)uVar6 >> 0x20) * (auVar5._4_4_ >> 0x18) +
           *(int *)(param_3[2] + lVar4);
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ef4124; end: 109ef4307;  */

void FUN_109ef4124(long param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar2 = (uint)param_1;
  uVar3 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  if (uVar3 < 4) {
    if (uVar3 == 0) {
      if (param_2 != 0) {
        lVar4 = 0;
        do {
          NEON_ucvtf((uint)*(byte *)(*param_4 + lVar4));
          if ((param_5 >> 0x12 & 1) == 0) {
            FUN_109f64b28();
          }
          else {
            func_0x000109f683f4();
          }
          uVar1 = (ushort)uVar2 & 0x8000;
          if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
            uVar1 = (ushort)uVar2;
          }
          *(ushort *)(param_1 + lVar4) = uVar1;
          lVar4 = lVar4 + 8;
        } while ((ulong)param_2 << 3 != lVar4);
      }
    }
    else if (param_2 != 0) {
      lVar4 = 0;
      do {
        NEON_ucvtf((uint)*(byte *)(*param_4 + lVar4));
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4();
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (uVar3 == 4) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        NEON_ucvtf((uint)*(ushort *)(*param_4 + lVar4));
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4();
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (uVar3 == 5) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        NEON_ucvtf(*(undefined4 *)(*param_4 + lVar4));
        if ((param_5 >> 0x12 & 1) == 0) {
          FUN_109f64b28();
        }
        else {
          func_0x000109f683f4();
        }
        uVar1 = (ushort)uVar2 & 0x8000;
        if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
          uVar1 = (ushort)uVar2;
        }
        *(ushort *)(param_1 + lVar4) = uVar1;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      if ((param_5 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4();
      }
      uVar1 = (ushort)uVar2 & 0x8000;
      if (((uint)((uVar2 & 0x7c00) == 0) & param_5 >> 0xc) == 0) {
        uVar1 = (ushort)uVar2;
      }
      *(ushort *)(param_1 + lVar4) = uVar1;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ef4308; end: 109ef45e3;  */

void FUN_109ef4308(long param_1,uint param_2,uint param_3,long *param_4,uint param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  if (uVar3 < 4) {
    if (uVar3 == 0) {
      if (param_2 != 0) {
        lVar4 = 0;
        do {
          uVar2 = NEON_ucvtf((uint)*(byte *)(*param_4 + lVar4));
          uVar3 = 0;
          if (((uint)(uVar2 < 0x800000) & param_5 >> 0xd) == 0) {
            uVar3 = uVar2;
          }
          *(uint *)(param_1 + lVar4) = uVar3;
          lVar4 = lVar4 + 8;
        } while ((ulong)param_2 << 3 != lVar4);
      }
    }
    else if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar2 = NEON_ucvtf((uint)*(byte *)(*param_4 + lVar4));
        uVar3 = 0;
        if (((uint)(uVar2 < 0x800000) & param_5 >> 0xd) == 0) {
          uVar3 = uVar2;
        }
        *(uint *)(param_1 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (uVar3 == 4) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar2 = NEON_ucvtf((uint)*(ushort *)(*param_4 + lVar4));
        uVar3 = 0;
        if (((uint)(uVar2 < 0x800000) & param_5 >> 0xd) == 0) {
          uVar3 = uVar2;
        }
        *(uint *)(param_1 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (uVar3 == 5) {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar2 = NEON_ucvtf(*(undefined4 *)(*param_4 + lVar4));
        uVar3 = 0;
        if (((uint)(uVar2 < 0x800000) & param_5 >> 0xd) == 0) {
          uVar3 = uVar2;
        }
        *(uint *)(param_1 + lVar4) = uVar3;
        lVar4 = lVar4 + 8;
      } while ((ulong)param_2 << 3 != lVar4);
    }
  }
  else if (param_2 != 0) {
    lVar4 = 0;
    do {
      fVar1 = 0.0;
      if (((uint)((uint)(float)*(ulong *)(*param_4 + lVar4) < 0x800000) & param_5 >> 0xd) == 0) {
        fVar1 = (float)*(ulong *)(*param_4 + lVar4);
      }
      *(float *)(param_1 + lVar4) = fVar1;
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ef45e4; end: 109ef4663;  */

void FUN_109ef45e4(long param_1,uint param_2,long *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar2 = (uint)param_1;
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      uVar4 = NEON_ucvtf(*(undefined4 *)(*param_3 + lVar3));
      if ((param_4 >> 0x12 & 1) == 0) {
        FUN_109f64b28();
      }
      else {
        func_0x000109f683f4(uVar4);
      }
      uVar1 = (ushort)uVar2 & 0x8000;
      if (((uint)((uVar2 & 0x7c00) == 0) & param_4 >> 0xc) == 0) {
        uVar1 = (ushort)uVar2;
      }
      *(ushort *)(param_1 + lVar3) = uVar1;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_2 << 3 != lVar3);
  }
  return;
}



/* Entry: 109ef4664; end: 109ef6607;  */

void FUN_109ef4664(long param_1,uint param_2,uint param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = (uint)LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 0) {
      if (param_2 != 0) {
        lVar2 = 0;
        do {
          *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(*param_4 + lVar2);
          lVar2 = lVar2 + 8;
        } while ((ulong)param_2 << 3 != lVar2);
      }
    }
    else if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(byte *)(param_1 + lVar2) = *(byte *)(*param_4 + lVar2) & 1;
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (uVar1 == 4) {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(byte *)(param_1 + lVar2) = *(byte *)(*param_4 + lVar2) & 1;
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (uVar1 == 5) {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(byte *)(param_1 + lVar2) = *(byte *)(*param_4 + lVar2) & 1;
        lVar2 = lVar2 + 8;
      } while ((ulong)param_2 << 3 != lVar2);
    }
  }
  else if (param_2 != 0) {
    lVar2 = 0;
    do {
      *(byte *)(param_1 + lVar2) = *(byte *)(*param_4 + lVar2) & 1;
      lVar2 = lVar2 + 8;
    } while ((ulong)param_2 << 3 != lVar2);
  }
  return;
}



/* Entry: 109ef6608; end: 109ef69ff;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109ef6608(long param_1,ulong param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uStack_30;
  undefined1 auStack_2c [4];
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  uVar6 = (undefined4)(param_3 >> 0x20);
  uVar5 = (uint)param_3;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
  uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  uVar10 = (uint)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
  iVar7 = (int)param_2;
  if (uVar10 < 4) {
    if (uVar10 == 0) {
      if (iVar7 != 0) {
        uVar11 = 0;
        uVar12 = param_2 & 0xffffffff;
        do {
          lVar13 = uVar11 * 8;
          uVar18 = (ulong)*(byte *)(*param_4 + lVar13);
          if (uVar5 == 0x40) {
            lVar19 = 0;
            uStack_20 = (ulong)(uint)*(byte *)(param_4[1] + lVar13);
            _uStack_30 = 0;
            uStack_28 = 0;
            uVar9 = 0;
            puVar21 = &uStack_30;
            do {
              param_2 = uVar9;
              lVar8 = 0;
              uVar9 = 0;
              do {
                uVar4 = uVar9 + uVar18 * *(uint *)((long)&uStack_20 + lVar8) +
                        (ulong)*(uint *)((long)puVar21 + lVar8);
                *(int *)((long)puVar21 + lVar8) = (int)uVar4;
                uVar9 = uVar4 >> 0x20;
                lVar8 = lVar8 + 4;
              } while (lVar8 != 8);
              uVar18 = 0;
              *(int *)((long)&uStack_28 + lVar19 * 4) = (int)(uVar4 >> 0x20);
              lVar19 = 1;
              uVar9 = 1;
              puVar21 = (uint *)auStack_2c;
            } while ((int)param_2 == 0);
            bVar14 = (byte)uStack_28;
          }
          else {
            bVar14 = (byte)((uint)*(byte *)(param_4[1] + lVar13) *
                            (uint)*(byte *)(*param_4 + lVar13) >> (param_3 & 0x3f));
          }
          *(byte *)(param_1 + lVar13) = bVar14 & 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar12);
      }
    }
    else if (iVar7 != 0) {
      uVar11 = 0;
      uVar12 = param_2 & 0xffffffff;
      do {
        lVar13 = uVar11 * 8;
        uVar18 = (ulong)*(byte *)(*param_4 + lVar13);
        if (uVar5 == 0x40) {
          lVar19 = 0;
          uStack_20 = (ulong)*(byte *)(param_4[1] + lVar13);
          _uStack_30 = 0;
          uStack_28 = 0;
          uVar9 = 0;
          puVar21 = &uStack_30;
          do {
            param_2 = uVar9;
            lVar8 = 0;
            uVar9 = 0;
            do {
              uVar4 = uVar9 + uVar18 * *(uint *)((long)&uStack_20 + lVar8) +
                      (ulong)*(uint *)((long)puVar21 + lVar8);
              *(int *)((long)puVar21 + lVar8) = (int)uVar4;
              uVar9 = uVar4 >> 0x20;
              lVar8 = lVar8 + 4;
            } while (lVar8 != 8);
            uVar18 = 0;
            *(int *)((long)&uStack_28 + lVar19 * 4) = (int)(uVar4 >> 0x20);
            lVar19 = 1;
            uVar9 = 1;
            puVar21 = (uint *)auStack_2c;
          } while ((int)param_2 == 0);
          uVar15 = (undefined1)uStack_28;
        }
        else {
          uVar15 = (undefined1)(uVar18 * *(byte *)(param_4[1] + lVar13) >> (param_3 & 0x3f));
        }
        *(undefined1 *)(param_1 + lVar13) = uVar15;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar12);
    }
  }
  else if (uVar10 == 4) {
    if (iVar7 != 0) {
      uVar11 = 0;
      uVar12 = param_2 & 0xffffffff;
      do {
        lVar13 = uVar11 * 8;
        uVar18 = (ulong)*(ushort *)(*param_4 + lVar13);
        if (uVar5 == 0x40) {
          lVar19 = 0;
          uStack_20 = (ulong)*(ushort *)(param_4[1] + lVar13);
          _uStack_30 = 0;
          uStack_28 = 0;
          uVar9 = 0;
          puVar21 = &uStack_30;
          do {
            param_2 = uVar9;
            lVar8 = 0;
            uVar9 = 0;
            do {
              uVar4 = uVar9 + uVar18 * *(uint *)((long)&uStack_20 + lVar8) +
                      (ulong)*(uint *)((long)puVar21 + lVar8);
              *(int *)((long)puVar21 + lVar8) = (int)uVar4;
              uVar9 = uVar4 >> 0x20;
              lVar8 = lVar8 + 4;
            } while (lVar8 != 8);
            uVar18 = 0;
            *(int *)((long)&uStack_28 + lVar19 * 4) = (int)(uVar4 >> 0x20);
            lVar19 = 1;
            uVar9 = 1;
            puVar21 = (uint *)auStack_2c;
          } while ((int)param_2 == 0);
          uVar16 = (undefined2)uStack_28;
        }
        else {
          uVar16 = (undefined2)(uVar18 * *(ushort *)(param_4[1] + lVar13) >> (param_3 & 0x3f));
        }
        *(undefined2 *)(param_1 + lVar13) = uVar16;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar12);
    }
  }
  else if (uVar10 == 5) {
    if (iVar7 != 0) {
      uVar11 = 0;
      uVar12 = param_2 & 0xffffffff;
      do {
        lVar13 = uVar11 * 8;
        uVar18 = (ulong)*(uint *)(*param_4 + lVar13);
        if (uVar5 == 0x40) {
          lVar19 = 0;
          uStack_20 = (ulong)*(uint *)(param_4[1] + lVar13);
          _uStack_30 = 0;
          uStack_28 = 0;
          uVar9 = 0;
          puVar21 = &uStack_30;
          do {
            param_2 = uVar9;
            lVar8 = 0;
            uVar9 = 0;
            do {
              uVar4 = uVar9 + uVar18 * *(uint *)((long)&uStack_20 + lVar8) +
                      (ulong)*(uint *)((long)puVar21 + lVar8);
              *(int *)((long)puVar21 + lVar8) = (int)uVar4;
              uVar9 = uVar4 >> 0x20;
              lVar8 = lVar8 + 4;
            } while (lVar8 != 8);
            uVar18 = 0;
            *(int *)((long)&uStack_28 + lVar19 * 4) = (int)(uVar4 >> 0x20);
            lVar19 = 1;
            uVar9 = 1;
            puVar21 = (uint *)auStack_2c;
          } while ((int)param_2 == 0);
          uVar17 = (undefined4)uStack_28;
        }
        else {
          uVar17 = (undefined4)(*(uint *)(param_4[1] + lVar13) * uVar18 >> (param_3 & 0x3f));
        }
        *(undefined4 *)(param_1 + lVar13) = uVar17;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar12);
    }
  }
  else if (iVar7 != 0) {
    uVar11 = 0;
    uVar12 = param_2 & 0xffffffff;
    do {
      uVar9 = *(ulong *)(*param_4 + uVar11 * 8);
      uVar18 = *(ulong *)(param_4[1] + uVar11 * 8);
      if (uVar5 == 0x40) {
        lVar13 = 0;
        uStack_28 = 0;
        uStack_20 = uVar18;
        _uStack_30 = 0;
        uVar4 = 0;
        uVar20 = uVar9 & 0xffffffff;
        puVar21 = &uStack_30;
        do {
          lVar19 = 0;
          uVar18 = 0;
          do {
            uVar1 = uVar18 + uVar20 * *(uint *)((long)&uStack_20 + lVar19) +
                    (ulong)*(uint *)((long)puVar21 + lVar19);
            *(int *)((long)puVar21 + lVar19) = (int)uVar1;
            uVar18 = uVar1 >> 0x20;
            lVar19 = lVar19 + 4;
          } while (lVar19 != 8);
          *(int *)((long)&uStack_28 + lVar13 * 4) = (int)(uVar1 >> 0x20);
          param_2 = 1;
          lVar13 = 1;
          iVar7 = (int)uVar4;
          uVar4 = param_2;
          uVar18 = uStack_28;
          uVar20 = uVar9 >> 0x20;
          puVar21 = (uint *)auStack_2c;
        } while (iVar7 == 0);
      }
      else {
        uVar18 = uVar18 * uVar9 >> (param_3 & 0x3f);
      }
      *(ulong *)(param_1 + uVar11 * 8) = uVar18;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar12);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    auVar3 = _UNK_10e06c7e0;
    auVar2 = _UNK_10df0ec00;
    if ((int)param_2 != 0) {
      lVar13 = 0;
      do {
        uVar17 = *(undefined4 *)(*(long *)CONCAT44(uVar6,uVar5) + lVar13);
        auVar22._4_4_ = uVar17;
        auVar22._0_4_ = uVar17;
        auVar22._8_4_ = uVar17;
        auVar22._12_4_ = uVar17;
        uVar17 = *(undefined4 *)(((long *)CONCAT44(uVar6,uVar5))[1] + lVar13);
        auVar23._4_4_ = uVar17;
        auVar23._0_4_ = uVar17;
        auVar23._8_4_ = uVar17;
        auVar23._12_4_ = uVar17;
        auVar22 = NEON_ushl(auVar22,auVar2,4);
        auVar24 = NEON_ushl(auVar23,auVar2,4);
        auVar22 = NEON_umull(CONCAT26((ushort)auVar22[0xc] * (ushort)auVar24[0xc],
                                      CONCAT24((ushort)auVar22[8] * (ushort)auVar24[8],
                                               CONCAT22((ushort)auVar22[4] * (ushort)auVar24[4],
                                                        (ushort)auVar22[0] * (ushort)auVar24[0]))),
                             0x8081808180818081,2);
        auVar24._0_4_ = auVar22._0_4_ >> 0x17;
        auVar24._4_4_ = auVar22._4_4_ >> 0x17;
        auVar24._8_4_ = auVar22._8_4_ >> 0x17;
        auVar24._12_4_ = auVar22._12_4_ >> 0x17;
        auVar22 = NEON_ushl(auVar24,auVar3,4);
        auVar24 = NEON_ext(auVar22,auVar22,8,1);
        uVar10 = CONCAT13(auVar22[3] | auVar24[3],
                          CONCAT12(auVar22[2] | auVar24[2],
                                   CONCAT11(auVar22[1] | auVar24[1],auVar22[0] | auVar24[0])));
        *(uint *)(param_1 + lVar13) =
             uVar10 | (uint)(CONCAT17(auVar22[7] | auVar24[7],
                                      CONCAT16(auVar22[6] | auVar24[6],
                                               CONCAT15(auVar22[5] | auVar24[5],
                                                        CONCAT14(auVar22[4] | auVar24[4],uVar10))))
                            >> 0x20);
        lVar13 = lVar13 + 8;
      } while ((param_2 & 0xffffffff) << 3 != lVar13);
    }
    return;
  }
  return;
}



/* Entry: 109ef6a00; end: 109ef7647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109ef6a00(long param_1,uint param_2,long *param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar3 = _UNK_10e06c7e0;
  auVar2 = _UNK_10df0ec00;
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined4 *)(*param_3 + lVar4);
      auVar6._4_4_ = uVar1;
      auVar6._0_4_ = uVar1;
      auVar6._8_4_ = uVar1;
      auVar6._12_4_ = uVar1;
      uVar1 = *(undefined4 *)(param_3[1] + lVar4);
      auVar7._4_4_ = uVar1;
      auVar7._0_4_ = uVar1;
      auVar7._8_4_ = uVar1;
      auVar7._12_4_ = uVar1;
      auVar6 = NEON_ushl(auVar6,auVar2,4);
      auVar8 = NEON_ushl(auVar7,auVar2,4);
      auVar6 = NEON_umull(CONCAT26((ushort)auVar6[0xc] * (ushort)auVar8[0xc],
                                   CONCAT24((ushort)auVar6[8] * (ushort)auVar8[8],
                                            CONCAT22((ushort)auVar6[4] * (ushort)auVar8[4],
                                                     (ushort)auVar6[0] * (ushort)auVar8[0]))),
                          0x8081808180818081,2);
      auVar8._0_4_ = auVar6._0_4_ >> 0x17;
      auVar8._4_4_ = auVar6._4_4_ >> 0x17;
      auVar8._8_4_ = auVar6._8_4_ >> 0x17;
      auVar8._12_4_ = auVar6._12_4_ >> 0x17;
      auVar6 = NEON_ushl(auVar8,auVar3,4);
      auVar8 = NEON_ext(auVar6,auVar6,8,1);
      uVar5 = CONCAT13(auVar6[3] | auVar8[3],
                       CONCAT12(auVar6[2] | auVar8[2],
                                CONCAT11(auVar6[1] | auVar8[1],auVar6[0] | auVar8[0])));
      *(uint *)(param_1 + lVar4) =
           uVar5 | (uint)(CONCAT17(auVar6[7] | auVar8[7],
                                   CONCAT16(auVar6[6] | auVar8[6],
                                            CONCAT15(auVar6[5] | auVar8[5],
                                                     CONCAT14(auVar6[4] | auVar8[4],uVar5)))) >>
                         0x20);
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 << 3 != lVar4);
  }
  return;
}



/* Entry: 109ef7648; end: 109ef787f;  */

void FUN_109ef7648(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined2 uVar47;
  undefined2 uVar48;
  undefined2 uVar49;
  undefined2 uVar50;
  undefined2 uVar51;
  undefined2 uVar52;
  undefined2 uVar53;
  undefined2 uVar54;
  undefined2 uVar55;
  undefined2 uVar56;
  undefined2 uVar57;
  undefined2 uVar58;
  undefined2 uVar59;
  undefined2 uVar60;
  undefined2 uVar61;
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
  uint uVar77;
  
  puVar1 = (undefined8 *)*param_3;
  puVar9 = (undefined8 *)param_3[1];
  uVar77 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar77 = (uVar77 & 0xcccccccc) >> 2 | (uVar77 & 0x33333333) << 2;
  uVar77 = (uVar77 & 0xf0f0f0f0) >> 4 | (uVar77 & 0xf0f0f0f) << 4;
  uVar77 = (uVar77 & 0xff00ff00) >> 8 | (uVar77 & 0xff00ff) << 8;
  puVar2 = (undefined8 *)param_3[2];
  puVar10 = (undefined8 *)param_3[3];
  puVar3 = (undefined8 *)param_3[4];
  puVar11 = (undefined8 *)param_3[5];
  puVar4 = (undefined8 *)param_3[6];
  puVar12 = (undefined8 *)param_3[7];
  puVar5 = (undefined8 *)param_3[8];
  puVar13 = (undefined8 *)param_3[9];
  puVar6 = (undefined8 *)param_3[10];
  puVar14 = (undefined8 *)param_3[0xb];
  puVar7 = (undefined8 *)param_3[0xc];
  puVar15 = (undefined8 *)param_3[0xd];
  puVar8 = (undefined8 *)param_3[0xe];
  puVar16 = (undefined8 *)param_3[0xf];
  uVar77 = (uint)LZCOUNT(uVar77 >> 0x10 | uVar77 << 0x10);
  if (uVar77 < 4) {
    uVar32 = *(undefined1 *)puVar9;
    uVar33 = *(undefined1 *)puVar2;
    uVar34 = *(undefined1 *)puVar10;
    uVar35 = *(undefined1 *)puVar3;
    uVar36 = *(undefined1 *)puVar11;
    uVar37 = *(undefined1 *)puVar4;
    uVar38 = *(undefined1 *)puVar12;
    uVar39 = *(undefined1 *)puVar5;
    uVar40 = *(undefined1 *)puVar13;
    uVar41 = *(undefined1 *)puVar6;
    uVar42 = *(undefined1 *)puVar14;
    uVar43 = *(undefined1 *)puVar7;
    uVar44 = *(undefined1 *)puVar15;
    uVar45 = *(undefined1 *)puVar8;
    uVar46 = *(undefined1 *)puVar16;
    *(undefined1 *)param_1 = *(undefined1 *)puVar1;
    *(undefined1 *)(param_1 + 1) = uVar32;
    *(undefined1 *)(param_1 + 2) = uVar33;
    *(undefined1 *)(param_1 + 3) = uVar34;
    *(undefined1 *)(param_1 + 4) = uVar35;
    *(undefined1 *)(param_1 + 5) = uVar36;
    *(undefined1 *)(param_1 + 6) = uVar37;
    *(undefined1 *)(param_1 + 7) = uVar38;
    *(undefined1 *)(param_1 + 8) = uVar39;
    *(undefined1 *)(param_1 + 9) = uVar40;
    *(undefined1 *)(param_1 + 10) = uVar41;
    *(undefined1 *)(param_1 + 0xb) = uVar42;
    *(undefined1 *)(param_1 + 0xc) = uVar43;
    *(undefined1 *)(param_1 + 0xd) = uVar44;
    *(undefined1 *)(param_1 + 0xe) = uVar45;
    *(undefined1 *)(param_1 + 0xf) = uVar46;
  }
  else if (uVar77 == 4) {
    uVar47 = *(undefined2 *)puVar9;
    uVar48 = *(undefined2 *)puVar2;
    uVar49 = *(undefined2 *)puVar10;
    uVar50 = *(undefined2 *)puVar3;
    uVar51 = *(undefined2 *)puVar11;
    uVar52 = *(undefined2 *)puVar4;
    uVar53 = *(undefined2 *)puVar12;
    uVar54 = *(undefined2 *)puVar5;
    uVar55 = *(undefined2 *)puVar13;
    uVar56 = *(undefined2 *)puVar6;
    uVar57 = *(undefined2 *)puVar14;
    uVar58 = *(undefined2 *)puVar7;
    uVar59 = *(undefined2 *)puVar15;
    uVar60 = *(undefined2 *)puVar8;
    uVar61 = *(undefined2 *)puVar16;
    *(undefined2 *)param_1 = *(undefined2 *)puVar1;
    *(undefined2 *)(param_1 + 1) = uVar47;
    *(undefined2 *)(param_1 + 2) = uVar48;
    *(undefined2 *)(param_1 + 3) = uVar49;
    *(undefined2 *)(param_1 + 4) = uVar50;
    *(undefined2 *)(param_1 + 5) = uVar51;
    *(undefined2 *)(param_1 + 6) = uVar52;
    *(undefined2 *)(param_1 + 7) = uVar53;
    *(undefined2 *)(param_1 + 8) = uVar54;
    *(undefined2 *)(param_1 + 9) = uVar55;
    *(undefined2 *)(param_1 + 10) = uVar56;
    *(undefined2 *)(param_1 + 0xb) = uVar57;
    *(undefined2 *)(param_1 + 0xc) = uVar58;
    *(undefined2 *)(param_1 + 0xd) = uVar59;
    *(undefined2 *)(param_1 + 0xe) = uVar60;
    *(undefined2 *)(param_1 + 0xf) = uVar61;
  }
  else if (uVar77 == 5) {
    uVar17 = *(undefined4 *)puVar9;
    uVar18 = *(undefined4 *)puVar2;
    uVar19 = *(undefined4 *)puVar10;
    uVar20 = *(undefined4 *)puVar3;
    uVar21 = *(undefined4 *)puVar11;
    uVar22 = *(undefined4 *)puVar4;
    uVar23 = *(undefined4 *)puVar12;
    uVar24 = *(undefined4 *)puVar5;
    uVar25 = *(undefined4 *)puVar13;
    uVar26 = *(undefined4 *)puVar6;
    uVar27 = *(undefined4 *)puVar14;
    uVar28 = *(undefined4 *)puVar7;
    uVar29 = *(undefined4 *)puVar15;
    uVar30 = *(undefined4 *)puVar8;
    uVar31 = *(undefined4 *)puVar16;
    *(undefined4 *)param_1 = *(undefined4 *)puVar1;
    *(undefined4 *)(param_1 + 1) = uVar17;
    *(undefined4 *)(param_1 + 2) = uVar18;
    *(undefined4 *)(param_1 + 3) = uVar19;
    *(undefined4 *)(param_1 + 4) = uVar20;
    *(undefined4 *)(param_1 + 5) = uVar21;
    *(undefined4 *)(param_1 + 6) = uVar22;
    *(undefined4 *)(param_1 + 7) = uVar23;
    *(undefined4 *)(param_1 + 8) = uVar24;
    *(undefined4 *)(param_1 + 9) = uVar25;
    *(undefined4 *)(param_1 + 10) = uVar26;
    *(undefined4 *)(param_1 + 0xb) = uVar27;
    *(undefined4 *)(param_1 + 0xc) = uVar28;
    *(undefined4 *)(param_1 + 0xd) = uVar29;
    *(undefined4 *)(param_1 + 0xe) = uVar30;
    *(undefined4 *)(param_1 + 0xf) = uVar31;
  }
  else {
    uVar66 = *puVar9;
    uVar65 = *puVar2;
    uVar64 = *puVar10;
    uVar63 = *puVar3;
    uVar62 = *puVar11;
    uVar76 = *puVar4;
    uVar75 = *puVar12;
    uVar74 = *puVar5;
    uVar73 = *puVar13;
    uVar72 = *puVar6;
    uVar71 = *puVar14;
    uVar70 = *puVar7;
    uVar69 = *puVar15;
    uVar68 = *puVar8;
    uVar67 = *puVar16;
    *param_1 = *puVar1;
    param_1[1] = uVar66;
    param_1[2] = uVar65;
    param_1[3] = uVar64;
    param_1[4] = uVar63;
    param_1[5] = uVar62;
    param_1[6] = uVar76;
    param_1[7] = uVar75;
    param_1[8] = uVar74;
    param_1[9] = uVar73;
    param_1[10] = uVar72;
    param_1[0xb] = uVar71;
    param_1[0xc] = uVar70;
    param_1[0xd] = uVar69;
    param_1[0xe] = uVar68;
    param_1[0xf] = uVar67;
  }
  return;
}



/* Entry: 109ef7880; end: 109ef7c33;  */

void FUN_109ef7880(undefined8 *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  if (uVar4 < 4) {
    uVar2 = *(undefined1 *)param_4;
    *(undefined1 *)param_1 = *(undefined1 *)param_3;
    *(undefined1 *)(param_1 + 1) = uVar2;
    return;
  }
  if (uVar4 != 4) {
    if (uVar4 == 5) {
      uVar1 = *(undefined4 *)param_4;
      *(undefined4 *)param_1 = *(undefined4 *)param_3;
      *(undefined4 *)(param_1 + 1) = uVar1;
      return;
    }
    uVar5 = *param_4;
    *param_1 = *param_3;
    param_1[1] = uVar5;
    return;
  }
  uVar3 = *(undefined2 *)param_4;
  *(undefined2 *)param_1 = *(undefined2 *)param_3;
  *(undefined2 *)(param_1 + 1) = uVar3;
  return;
}



/* Entry: 109ef7c34; end: 109ef7d0f;  */

uint FUN_109ef7c34(ulong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint6 uVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  ulong uVar6;
  
  uVar1 = (uint)param_1;
  uVar6 = CONCAT44(param_2 << 0xd,uVar1 << 0xd) & 0xfffffff0fffffff;
  fVar4 = (float)uVar6 * 5.192297e+33;
  fVar7 = (float)(uVar6 >> 0x20) * 5.192297e+33;
  uVar3 = (uint6)(CONCAT44(param_2 << 0x10,uVar1 << 0x10) >> 0x10) & 0x800000008000;
  uVar6 = CONCAT44(fVar7,fVar4) ^
          (CONCAT44(fVar7,fVar4) ^
          (CONCAT17((char)((uint)fVar7 >> 0x18),
                    CONCAT16((char)((uint)fVar7 >> 0x10),
                             CONCAT15((char)((uint)fVar7 >> 8),CONCAT14(SUB41(fVar7,0),fVar4)))) |
          0x7f8000007f800000)) & CONCAT44(-(uint)(65536.0 <= fVar7),-(uint)(65536.0 <= fVar4));
  fVar7 = (float)CONCAT13((byte)(uVar6 >> 0x18) | (byte)(uVar3 >> 8),(int3)uVar6);
  fVar4 = (float)((uint)(param_1 >> 3) & 0xfffe000) * 5.192297e+33;
  if (65536.0 <= fVar4) {
    fVar4 = (float)((uint)fVar4 | 0x7f800000);
  }
  fVar5 = (float)(param_2 >> 3 & 0x7fe000) * 5.192297e+33;
  if (65536.0 <= fVar5) {
    fVar5 = (float)CONCAT13((char)(((uint)fVar5 | 0x7f800000) >> 0x18),
                            CONCAT12((char)(((uint)fVar5 | 0x7f800000) >> 0x10),SUB42(fVar5,0)));
  }
  FUN_109f64b28(fVar5 * (float)((uint)fVar4 | uVar1 & 0x80000000));
  uVar2 = uVar1;
  FUN_109f64b28(fVar7 * (float)(CONCAT17((byte)(uVar6 >> 0x38) | (byte)(uVar3 >> 0x28),
                                         CONCAT16((char)(uVar6 >> 0x30),
                                                  CONCAT15((char)(uVar6 >> 0x28),
                                                           CONCAT14((char)(uVar6 >> 0x20),fVar7))))
                               >> 0x20));
  return uVar2 | uVar1 << 0x10;
}



/* Entry: 109ef7d10; end: 109ef7e2b;  */

void FUN_109ef7d10(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar9 = param_1;
  while (iVar1 != 3) {
    lVar9 = *(long *)(lVar9 + 0x18);
    iVar1 = *(int *)(lVar9 + 0x10);
  }
  plVar7 = *(long **)(param_1 + 0x20);
  if (*plVar7 != 0) {
    iVar1 = (int)plVar7[3];
    while (iVar1 == 8) {
      puVar2 = (undefined8 *)**(undefined8 **)(*(long *)(lVar9 + 0x20) + 0x18);
      FUN_109f6600c(puVar2,0x48,8);
      *(undefined4 *)(puVar2 + 3) = 7;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      FUN_109ecb048();
      lVar6 = *(long *)(lVar9 + 0x30);
      if (*(int *)(lVar6 + 0x10) == 0) {
        uVar3 = 0;
      }
      else {
        plVar4 = (long *)(lVar6 + 8);
        lVar6 = 0;
        if (*(long *)(*plVar4 + 8) != 0) {
          lVar6 = *plVar4;
        }
        uVar3 = 1;
      }
      FUN_109ecb4f0(uVar3,lVar6,puVar2);
      plVar4 = plVar7;
      FUN_109ecb354(plVar7,param_2,puVar2 + 5);
      plVar8 = puVar2 + 6;
      lVar6 = *plVar8;
      plVar5 = plVar4 + 4;
      *plVar5 = lVar6;
      plVar4[5] = (long)plVar8;
      *(long **)(lVar6 + 8) = plVar5;
      *plVar8 = (long)plVar5;
      plVar7 = (long *)*plVar7;
      if (*plVar7 == 0) {
        return;
      }
      iVar1 = (int)plVar7[3];
    }
  }
  return;
}



/* Entry: 109ef7e2c; end: 109ef7f5b;  */

void FUN_109ef7e2c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  plVar2 = (long *)0x0;
  if (param_1 != 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(param_1 + -0x30) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + -0x30) + 0x30);
    }
  }
  func_0x000109ecacd8();
  puVar7 = *(undefined8 **)(param_1 + 0x58);
  *plVar2 = param_1 + 0x50;
  plVar2[1] = (long)puVar7;
  *puVar7 = plVar2;
  *(long **)(param_1 + 0x58) = plVar2;
  plVar2[3] = param_1;
  puVar9 = *(undefined **)(param_1 + 0x20);
  puVar1 = (undefined *)0x0;
  if (puVar9 != (undefined *)(param_1 + 0x30)) {
    puVar1 = puVar9;
  }
  puVar3 = puVar1;
  FUN_109ecc588();
  lVar6 = *(long *)(puVar1 + 0x58);
  if (*(uint *)(lVar6 + 0x20) != 0) {
    lVar10 = *(long *)(lVar6 + 8);
    lVar8 = (ulong)*(uint *)(lVar6 + 0x20) << 4;
    do {
      puVar4 = *(undefined **)(lVar10 + 8);
      if (puVar4 != (undefined *)0x0 && puVar4 != &UNK_10e47dcd0) {
        do {
          if (puVar4 != puVar3) {
            FUN_109ef7f5c(puVar4,puVar9,plVar2);
            lVar6 = *(long *)(puVar1 + 0x58);
          }
          lVar8 = lVar10;
          do {
            lVar10 = lVar8 + 0x10;
            if (lVar10 == *(long *)(lVar6 + 8) + (ulong)*(uint *)(lVar6 + 0x20) * 0x10)
            goto LAB_109ef7ecc;
            puVar4 = *(undefined **)(lVar8 + 0x18);
            lVar8 = lVar10;
          } while (puVar4 == (undefined *)0x0 || puVar4 == &UNK_10e47dcd0);
        } while( true );
      }
      lVar10 = lVar10 + 0x10;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
LAB_109ef7ecc:
  plVar2[9] = (long)puVar1;
  lVar6 = *(long *)(puVar1 + 0x58);
  plVar5 = plVar2;
  (**(code **)(lVar6 + 0x10))(plVar2);
  FUN_109f66e48(lVar6,plVar5,plVar2,0);
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar2;
  }
  plVar2[10] = 0;
  return;
}



/* Entry: 109ef7f5c; end: 109ef809f;  */

void FUN_109ef7f5c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x48;
  if (*(long *)(param_1 + 0x48) != param_2) {
    lVar1 = 0x50;
  }
  *(long *)(param_1 + lVar1) = param_3;
  lVar2 = *(long *)(param_2 + 0x58);
  lVar1 = param_1;
  (**(code **)(lVar2 + 0x10))();
  FUN_109f66ba8(lVar2,lVar1,param_1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_2 + 0x58);
    *(undefined **)(lVar2 + 8) = &UNK_10e47dcd0;
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    *(ulong *)(lVar1 + 0x40) = CONCAT44((int)((ulong)uVar3 >> 0x20) + 1,(int)uVar3 + -1);
  }
  lVar2 = *(long *)(param_3 + 0x58);
  lVar1 = param_1;
  (**(code **)(lVar2 + 0x10))(param_1);
  FUN_109f66e48(lVar2,lVar1,param_1,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = param_1;
  }
  return;
}



/* Entry: 109ef80a0; end: 109ef8227;  */

void FUN_109ef80a0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if ((long *)param_1[4] == param_1 + 6) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1[7];
  }
  if (param_1[9] != 0) {
    FUN_109ef8228(param_1[9],param_1);
  }
  if (param_1[10] != 0) {
    FUN_109ef8228(param_1[10],param_1);
  }
  FUN_109ef82ec(param_1);
  iVar5 = (int)param_1[2];
  plVar7 = param_1;
  iVar3 = iVar5;
  while (iVar3 != 3) {
    plVar7 = (long *)plVar7[3];
    iVar3 = (int)plVar7[2];
  }
  *(undefined4 *)((long)plVar7 + 0x84) = 0;
  uVar4 = *(uint *)(lVar8 + 0x28);
  if ((int)uVar4 < 3) {
    plVar6 = param_1;
    if (uVar4 < 2) {
      plVar6 = (long *)plVar7[10];
      goto LAB_109ef81c8;
    }
    while (iVar5 != 2) {
      iVar5 = (int)((long *)plVar6[3])[2];
      plVar6 = (long *)plVar6[3];
    }
    plVar6 = (long *)*plVar6;
    plVar7 = (long *)*plVar6;
    puVar1 = (undefined8 *)0x0;
    if (plVar7 != (long *)0x0) {
      puVar1 = plVar6;
    }
    param_1[9] = (long)puVar1;
  }
  else {
    plVar7 = param_1;
    if (uVar4 == 3) {
      while (iVar5 != 2) {
        iVar5 = (int)((long *)plVar7[3])[2];
        plVar7 = (long *)plVar7[3];
      }
      plVar6 = (long *)plVar7[8];
      if ((plVar6 == plVar7 + 10) && (plVar6 = (long *)plVar7[4], plVar6 == plVar7 + 6)) {
        param_1[9] = 0;
        goto LAB_109ef81fc;
      }
    }
    else {
      if (uVar4 != 4) {
        lVar2 = *(long *)(lVar8 + 0x50);
        lVar8 = *(long *)(lVar8 + 0x58);
        param_1[9] = lVar8;
        if (lVar8 != 0) {
          lVar8 = *(long *)(lVar8 + 0x58);
          (**(code **)(lVar8 + 0x10))(param_1);
          FUN_109f66e48(lVar8,plVar7,param_1,0);
          if (lVar8 != 0) {
            *(long **)(lVar8 + 8) = param_1;
          }
        }
        param_1[10] = lVar2;
        if (lVar2 != 0) {
          lVar8 = *(long *)(lVar2 + 0x58);
          plVar7 = param_1;
          (**(code **)(lVar8 + 0x10))(param_1);
          FUN_109f66e48(lVar8,plVar7,param_1,0);
          if (lVar8 != 0) {
            *(long **)(lVar8 + 8) = param_1;
          }
        }
        return;
      }
      plVar6 = *(long **)(lVar8 + 0x50);
    }
LAB_109ef81c8:
    param_1[9] = (long)plVar6;
    plVar7 = plVar6;
  }
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    plVar7 = param_1;
    (**(code **)(lVar8 + 0x10))(param_1);
    FUN_109f66e48(lVar8,plVar7,param_1,0);
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = param_1;
    }
  }
LAB_109ef81fc:
  param_1[10] = 0;
  return;
}



/* Entry: 109ef8228; end: 109ef82eb;  */

void FUN_109ef8228(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(param_1 + 0x20);
  if ((long *)*plVar7 != (long *)0x0) {
    iVar3 = (int)plVar7[3];
    plVar6 = (long *)*plVar7;
    while (iVar3 == 8) {
      plVar8 = (long *)plVar7[5];
      plVar4 = (long *)*plVar8;
      if (plVar4 != (long *)0x0) {
        do {
          plVar6 = plVar8;
          plVar2 = (long *)0x0;
          if (*plVar4 != 0) {
            plVar2 = plVar4;
          }
          do {
            plVar8 = plVar2;
            if (plVar6[2] == param_2) {
              lVar1 = plVar6[4];
              plVar2 = (long *)plVar6[5];
              *(long **)(lVar1 + 8) = plVar2;
              *plVar2 = lVar1;
              plVar6[4] = 0;
              plVar6[5] = 0;
              puVar5 = (undefined8 *)plVar6[1];
              plVar4[1] = (long)puVar5;
              *puVar5 = plVar4;
              *plVar6 = 0;
              plVar6[1] = 0;
              func_0x000109f661cc();
            }
            if (plVar8 == (long *)0x0) {
              plVar6 = (long *)*plVar7;
              goto LAB_109ef82c4;
            }
            plVar4 = (long *)*plVar8;
            plVar6 = plVar8;
            plVar2 = (long *)0x0;
          } while (plVar4 == (long *)0x0);
        } while( true );
      }
LAB_109ef82c4:
      if ((long *)*plVar6 == (long *)0x0) {
        return;
      }
      iVar3 = (int)plVar6[3];
      plVar7 = plVar6;
      plVar6 = (long *)*plVar6;
    }
  }
  return;
}



/* Entry: 109ef82ec; end: 109ef838b;  */

void FUN_109ef82ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_109ef8e2c(param_1);
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x48) == lVar2) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    lVar3 = *(long *)(lVar2 + 0x58);
    lVar1 = param_1;
    (**(code **)(lVar3 + 0x10))(param_1);
    FUN_109f66ba8(lVar3,lVar1,param_1);
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar2 + 0x58);
      *(undefined **)(lVar3 + 8) = &UNK_10e47dcd0;
      uVar4 = *(undefined8 *)(lVar2 + 0x40);
      *(ulong *)(lVar2 + 0x40) = CONCAT44((int)((ulong)uVar4 >> 0x20) + 1,(int)uVar4 + -1);
    }
    return;
  }
  return;
}



/* Entry: 109ef838c; end: 109ef863b;  */

void FUN_109ef838c(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  long lStack_50;
  ulong *puStack_48;
  
  FUN_109ef863c(param_1,param_2,&puStack_48,&lStack_50);
  iVar1 = (int)param_3[2];
  if (iVar1 == 1) {
    param_3[4] = (ulong)param_3 | 1;
    puVar4 = (ulong *)(param_3[7] + 8);
    uVar3 = *puVar4;
    param_3[6] = (ulong)puVar4;
    puVar6 = param_3 + 5;
    *puVar6 = uVar3;
    *(ulong **)(uVar3 + 8) = puVar6;
    *puVar4 = (ulong)puVar6;
  }
  else if (iVar1 == 0) {
    uVar3 = *puStack_48;
    *param_3 = uVar3;
    param_3[1] = (ulong)puStack_48;
    *(ulong **)(uVar3 + 8) = param_3;
    *puStack_48 = (ulong)param_3;
    param_3[3] = puStack_48[3];
    if (((ulong *)param_3[4] != param_3 + 6) && (*(int *)(param_3[7] + 0x18) == 6)) {
      FUN_109ef80a0(param_3);
    }
    func_0x000109ef86d8(param_3,lStack_50);
    func_0x000109ef86d8(puStack_48,param_3);
    return;
  }
  uVar3 = *puStack_48;
  *param_3 = uVar3;
  puVar4 = (ulong *)puStack_48[4];
  param_3[3] = puStack_48[3];
  param_3[1] = (ulong)puStack_48;
  *(ulong **)(uVar3 + 8) = param_3;
  *puStack_48 = (ulong)param_3;
  if ((puVar4 == puStack_48 + 6) || (*(int *)(puStack_48[7] + 0x18) != 6)) {
    if (iVar1 == 2) {
      puVar6 = (ulong *)param_3[4];
      puVar4 = (ulong *)0x0;
      if (puVar6 != param_3 + 6) {
        puVar4 = puVar6;
      }
      FUN_109ef82ec(puStack_48);
      puStack_48[9] = (ulong)puVar4;
      if (puVar4 != (ulong *)0x0) {
        uVar3 = puVar6[0xb];
        puVar4 = puStack_48;
        (**(code **)(uVar3 + 0x10))(puStack_48);
        FUN_109f66e48(uVar3,puVar4,puStack_48,0);
        if (uVar3 != 0) {
          *(ulong **)(uVar3 + 8) = puStack_48;
        }
      }
      puStack_48[10] = 0;
    }
    else if (iVar1 == 1) {
      puVar4 = (ulong *)0x0;
      if ((ulong *)param_3[9] != param_3 + 0xb) {
        puVar4 = (ulong *)param_3[9];
      }
      puVar6 = (ulong *)0x0;
      if ((ulong *)param_3[0xd] != param_3 + 0xf) {
        puVar6 = (ulong *)param_3[0xd];
      }
      FUN_109ef82ec(puStack_48);
      func_0x000109ef8010(puStack_48,puVar4,puVar6);
    }
  }
  if ((int)param_3[2] == 1) {
    if ((ulong *)param_3[9] == param_3 + 0xb) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_3[0xc];
    }
    if ((ulong *)param_3[0xd] == param_3 + 0xf) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_3[0x10];
    }
    if ((*(long *)(uVar3 + 0x20) == uVar3 + 0x30) || (*(int *)(*(long *)(uVar3 + 0x38) + 0x18) != 6)
       ) {
      FUN_109ef82ec(uVar3);
      *(long *)(uVar3 + 0x48) = lStack_50;
      if (lStack_50 != 0) {
        lVar7 = *(long *)(lStack_50 + 0x58);
        uVar2 = uVar3;
        (**(code **)(lVar7 + 0x10))(uVar3);
        FUN_109f66e48(lVar7,uVar2,uVar3,0);
        if (lVar7 != 0) {
          *(ulong *)(lVar7 + 8) = uVar3;
        }
      }
      *(undefined8 *)(uVar3 + 0x50) = 0;
    }
    if ((*(long *)(uVar5 + 0x20) == uVar5 + 0x30) || (*(int *)(*(long *)(uVar5 + 0x38) + 0x18) != 6)
       ) {
      FUN_109ef82ec(uVar5);
      *(long *)(uVar5 + 0x48) = lStack_50;
      if (lStack_50 != 0) {
        lVar7 = *(long *)(lStack_50 + 0x58);
        uVar3 = uVar5;
        (**(code **)(lVar7 + 0x10))(uVar5);
        FUN_109f66e48(lVar7,uVar3,uVar5,0);
        if (lVar7 != 0) {
          *(ulong *)(lVar7 + 8) = uVar5;
        }
      }
      *(undefined8 *)(uVar5 + 0x50) = 0;
    }
  }
  return;
}



/* Entry: 109ef863c; end: 109ef87e7;  */

void FUN_109ef863c(int param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      plVar1 = param_2;
      func_0x000109ef9058();
      goto LAB_109ef86b8;
    }
  }
  else {
    if (param_1 == 2) {
      plVar2 = (long *)param_2[2];
      func_0x000109ef925c();
      plVar1 = param_2;
      param_2 = plVar2;
      goto LAB_109ef86b8;
    }
    plVar1 = (long *)*param_2;
    param_2 = (long *)param_2[2];
    if (*plVar1 != 0) {
      func_0x000109ef925c();
      goto LAB_109ef86b8;
    }
  }
  plVar2 = param_2;
  FUN_109ef91d0();
  plVar1 = param_2;
  param_2 = plVar2;
LAB_109ef86b8:
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = plVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = param_2;
  }
  return;
}



/* Entry: 109ef87e8; end: 109ef8953;  */

undefined1  [16]
FUN_109ef87e8(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar7 = param_2;
  plVar4 = param_3;
  FUN_109ecb464();
  uVar3 = param_4;
  plVar5 = param_5;
  FUN_109ecb464();
  if ((plVar4 == plVar5) && ((int)plVar7 == (int)uVar3)) {
    param_1[2] = 0;
    *param_1 = param_1 + 2;
    param_1[1] = 0;
    param_1[3] = param_1;
    param_1[4] = 0;
  }
  else {
    FUN_109ef863c(param_2,param_3,&plStack_68,&plStack_58);
    plVar4 = plStack_58;
    plVar7 = plStack_58;
    if (plStack_68 != param_5 || (int)param_4 != 1) {
      plVar7 = param_5;
    }
    FUN_109ef863c(param_4,plVar7,&plStack_60,&plStack_70);
    if (plVar4 == plStack_70) {
      plStack_58 = plStack_60;
      plVar4 = plStack_60;
    }
    iVar1 = (int)plVar4[2];
    plVar7 = plVar4;
    while (iVar1 != 3) {
      plVar7 = (long *)plVar7[3];
      iVar1 = (int)plVar7[2];
    }
    puVar6 = param_1 + 2;
    *puVar6 = 0;
    *param_1 = puVar6;
    param_1[1] = 0;
    param_1[3] = param_1;
    param_1[4] = plVar7;
    *(undefined4 *)((long)plVar7 + 0x84) = 0;
    do {
      plVar5 = (long *)*plVar4;
      puVar8 = (undefined8 *)plVar4[1];
      plVar7 = (long *)0x0;
      if (*plVar5 != 0) {
        plVar7 = plVar5;
      }
      plVar5[1] = (long)puVar8;
      *puVar8 = plVar5;
      plVar4[3] = 0;
      *plVar4 = (long)puVar6;
      plVar4[1] = 0;
      puVar8 = (undefined8 *)param_1[3];
      plVar4[1] = (long)puVar8;
      *puVar8 = plVar4;
      param_1[3] = plVar4;
      bVar2 = plVar4 != plStack_60;
      plVar4 = plVar7;
    } while (bVar2);
    func_0x000109ef86d8(plStack_68);
    param_3 = plStack_70;
    param_2 = plStack_68;
  }
  auVar9._8_8_ = param_3;
  auVar9._0_8_ = param_2;
  return auVar9;
}



/* Entry: 109ef8954; end: 109ef8ad3;  */

undefined1  [16] FUN_109ef8954(undefined8 *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long lStack_50;
  undefined8 *puStack_48;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != param_1 + 2) {
    lVar5 = param_3;
    if ((param_2 & 0xfffffffe) == 2) {
      lVar5 = *(long *)(param_3 + 0x10);
    }
    for (; *(int *)(lVar5 + 0x10) != 3; lVar5 = *(long *)(lVar5 + 0x18)) {
    }
    if (param_1[4] != lVar5) {
      for (; *plVar4 != 0; plVar4 = (long *)*plVar4) {
        FUN_109ef8ad4(plVar4,*(undefined8 *)(lVar5 + 0x50));
      }
    }
    FUN_109ef863c(param_2,param_3,&puStack_48,&lStack_50);
    plVar1 = (long *)*param_1;
    plVar4 = (long *)*plVar1;
    if (plVar4 != (long *)0x0) {
      plVar2 = (long *)*plVar4;
      puVar3 = (undefined8 *)plVar1[1];
      plVar4[1] = (long)puVar3;
      *puVar3 = plVar4;
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[3] = puStack_48[3];
      puVar3 = *(undefined8 **)(lStack_50 + 8);
      *plVar1 = lStack_50;
      plVar1[1] = (long)puVar3;
      *puVar3 = plVar1;
      *(long **)(lStack_50 + 8) = plVar1;
      while (plVar2 != (long *)0x0) {
        plVar1 = (long *)*plVar4;
        if (plVar1 == (long *)0x0) {
          plVar2 = (long *)0x0;
        }
        else {
          plVar2 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar2 = plVar1;
          }
        }
        puVar3 = (undefined8 *)plVar4[1];
        plVar1[1] = (long)puVar3;
        *puVar3 = plVar1;
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[3] = puStack_48[3];
        puVar3 = *(undefined8 **)(lStack_50 + 8);
        *plVar4 = lStack_50;
        plVar4[1] = (long)puVar3;
        *puVar3 = plVar4;
        *(long **)(lStack_50 + 8) = plVar4;
        plVar4 = plVar2;
      }
    }
    plVar4 = (long *)0x0;
    if (*(long *)*puStack_48 != 0) {
      plVar4 = (long *)*puStack_48;
    }
    func_0x000109ef86d8(puStack_48,plVar4);
    param_2 = 0;
    if (*(long *)(*(ulong *)(lStack_50 + 8) + 8) != 0) {
      param_2 = *(ulong *)(lStack_50 + 8);
    }
    func_0x000109ef86d8(param_2,lStack_50);
    param_3 = lStack_50;
  }
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = param_2;
  return auVar6;
}



/* Entry: 109ef8ad4; end: 109ef8bff;  */

void FUN_109ef8ad4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0x10) == 2) {
    for (plVar3 = *(long **)(param_1 + 0x20); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109ef8ad4(plVar3,param_2);
    }
    for (plVar3 = *(long **)(param_1 + 0x40); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109ef8ad4(plVar3,param_2);
    }
  }
  else if (*(int *)(param_1 + 0x10) == 1) {
    for (plVar3 = *(long **)(param_1 + 0x48); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109ef8ad4(plVar3,param_2);
    }
    for (plVar3 = *(long **)(param_1 + 0x68); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109ef8ad4(plVar3,param_2);
    }
  }
  else if ((((*(long *)(param_1 + 0x20) != param_1 + 0x30) &&
            (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) && (*(int *)(lVar1 + 0x18) == 6)) &&
          (*(int *)(lVar1 + 0x28) == 1)) {
    FUN_109ef82ec(param_1);
    *(long *)(param_1 + 0x48) = param_2;
    if (param_2 != 0) {
      lVar2 = *(long *)(param_2 + 0x58);
      lVar1 = param_1;
      (**(code **)(lVar2 + 0x10))(param_1);
      FUN_109f66e48(lVar2,lVar1,param_1,0);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = param_1;
      }
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 109ef8c00; end: 109ef8e2b;  */

void FUN_109ef8c00(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      if (**(long **)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109ef8c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e06cba8)[*(uint *)(*(long **)(param_1 + 0x20) + 3)] * 4 +
                  0x109ef8c7c))(0x30);
        return;
      }
    }
    else {
      for (plVar3 = *(long **)(param_1 + 0x48); *plVar3 != 0; plVar3 = (long *)*plVar3) {
        FUN_109ef8c00(plVar3,param_2);
      }
      for (plVar3 = *(long **)(param_1 + 0x68); *plVar3 != 0; plVar3 = (long *)*plVar3) {
        FUN_109ef8c00(plVar3,param_2);
      }
      lVar1 = *(long *)(param_1 + 0x28);
      plVar3 = *(long **)(param_1 + 0x30);
      *(long **)(lVar1 + 8) = plVar3;
      *plVar3 = lVar1;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  else if (iVar2 == 2) {
    for (plVar3 = *(long **)(param_1 + 0x20); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109ef8c00(plVar3,param_2);
    }
    for (plVar3 = *(long **)(param_1 + 0x40); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109ef8c00(plVar3,param_2);
    }
  }
  else {
    for (plVar3 = *(long **)(param_1 + 0x30); *plVar3 != 0; plVar3 = (long *)*plVar3) {
      FUN_109ef8c00(plVar3,param_1);
    }
  }
  return;
}



/* Entry: 109ef8e2c; end: 109ef91cf;  */

void FUN_109ef8e2c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x48) == param_2) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  lVar2 = *(long *)(param_2 + 0x58);
  lVar1 = param_1;
  (**(code **)(lVar2 + 0x10))(param_1);
  FUN_109f66ba8(lVar2,lVar1,param_1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_2 + 0x58);
    *(undefined **)(lVar2 + 8) = &UNK_10e47dcd0;
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    *(ulong *)(lVar1 + 0x40) = CONCAT44((int)((ulong)uVar3 >> 0x20) + 1,(int)uVar3 + -1);
  }
  return;
}



/* Entry: 109ef91d0; end: 109ef92f3;  */

long * FUN_109ef91d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar2 = (long *)0x0;
    if (param_1[-6] != 0) {
      plVar2 = (long *)(param_1[-6] + 0x30);
    }
  }
  func_0x000109ecacd8();
  lVar3 = *param_1;
  *plVar2 = lVar3;
  plVar1 = (long *)param_1[4];
  plVar2[3] = param_1[3];
  plVar2[1] = (long)param_1;
  *(long **)(lVar3 + 8) = plVar2;
  *param_1 = (long)plVar2;
  if ((plVar1 == param_1 + 6) || (*(int *)(param_1[7] + 0x18) != 6)) {
    FUN_109ef92f4(param_1,plVar2);
  }
  else {
    func_0x000109ef8eb4(plVar2);
  }
  return plVar2;
}



/* Entry: 109ef92f4; end: 109ef9373;  */

void FUN_109ef92f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    FUN_109ef8e2c(param_1,lVar1);
    FUN_109ef9374(lVar1,param_1,param_2);
  }
  if (lVar2 != 0) {
    FUN_109ef8e2c(param_1,lVar2);
    FUN_109ef9374(lVar2,param_1,param_2);
  }
  FUN_109ef82ec(param_2);
  *(long *)(param_2 + 0x48) = lVar1;
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x58);
    lVar1 = param_2;
    (**(code **)(lVar3 + 0x10))(param_2);
    FUN_109f66e48(lVar3,lVar1,param_2,0);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = param_2;
    }
  }
  *(long *)(param_2 + 0x50) = lVar2;
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x58);
    lVar1 = param_2;
    (**(code **)(lVar2 + 0x10))(param_2);
    FUN_109f66e48(lVar2,lVar1,param_2,0);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = param_2;
    }
  }
  return;
}



/* Entry: 109ef9374; end: 109ef93f3;  */

void FUN_109ef9374(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_1 + 0x20);
  plVar2 = (long *)*plVar1;
  if ((plVar2 == (long *)0x0) || ((int)plVar1[3] != 8)) {
    return;
  }
  lVar3 = *plVar2;
  do {
    plVar4 = (long *)0x0;
    if ((lVar3 != 0) && (plVar4 = plVar2, *(int *)(plVar2 + 3) != 8)) {
      plVar4 = (long *)0x0;
    }
    plVar2 = (long *)plVar1[5];
    for (plVar1 = (long *)*(long *)plVar1[5]; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar2[2] == param_2) {
        plVar2[2] = param_3;
        break;
      }
      plVar2 = plVar1;
    }
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar2 = (long *)*plVar4;
    lVar3 = *plVar2;
    plVar1 = plVar4;
  } while( true );
}


