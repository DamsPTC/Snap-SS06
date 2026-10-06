/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10838eb84; end: 10838eccf;  */

undefined8 FUN_10838eb84(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined8 in_d3;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_60;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float fVar14;
  float fVar15;
  
  if ((int)param_3 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar9 = *param_2;
    if ((param_3 & 1) == 0) {
      iVar7 = -2;
      lVar6 = 0x10;
      uVar8 = param_2[1];
    }
    else {
      iVar7 = -1;
      lVar6 = 8;
      uVar8 = uVar9;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    fStack_48 = (float)uVar8;
    fStack_44 = (float)((ulong)uVar8 >> 0x20);
    uStack_60 = FUN_10838ecd0();
    puVar5 = (undefined8 *)((long)param_2 + lVar6);
    uVar8 = uVar9;
    fVar17 = fStack_48;
    fVar18 = fStack_44;
    for (iVar7 = iVar7 + param_3; iVar7 != 0; iVar7 = iVar7 + -2) {
      uStack_38 = puVar5[1];
      uStack_78 = (undefined4)uStack_38;
      uStack_74 = (undefined4)((ulong)uStack_38 >> 0x20);
      uStack_40 = *puVar5;
      fVar17 = (float)uStack_40;
      uStack_60._4_4_ = (float)((ulong)uStack_60 >> 0x20);
      uStack_60 = CONCAT44(uStack_60._4_4_ * (float)((ulong)uStack_40 >> 0x20),
                           (float)uStack_60 * fVar17);
      FUN_10838f44c(&uStack_40);
      uVar8 = func_0x00010838f4bc();
      fStack_48 = (float)extraout_var;
      fStack_44 = (float)((ulong)extraout_var >> 0x20);
      FUN_10838f44c(&uStack_40);
      uVar9 = func_0x00010838f4e8();
      fVar18 = (float)in_d3;
      puVar5 = puVar5 + 2;
    }
    auVar16._4_4_ = fVar18;
    auVar16._0_4_ = fVar17;
    FUN_10838ecd0(uStack_60);
    uVar10 = func_0x00010838f4bc();
    auVar11._0_4_ = -(uint)((float)uVar10 == 0.0);
    auVar11._4_4_ = -(uint)((float)((ulong)uVar10 >> 0x20) == 0.0);
    auVar11._8_4_ = -(uint)((float)extraout_var_00 == 0.0);
    auVar11._12_4_ = -(uint)((float)((ulong)extraout_var_00 >> 0x20) == 0.0);
    iVar7 = NEON_uminv(auVar11,4);
    if (iVar7 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return 0;
    }
    auVar3._8_4_ = fStack_48;
    auVar3._0_8_ = uVar8;
    auVar2._8_4_ = fStack_48;
    auVar2._0_8_ = uVar8;
    auVar1._8_4_ = fStack_48;
    auVar1._0_8_ = uVar8;
    auVar1._12_4_ = fStack_44;
    auVar2._12_4_ = fStack_44;
    auVar11 = NEON_ext(auVar1,auVar2,8,1);
    auVar16._8_4_ = uStack_78;
    auVar12._0_4_ = -(uint)(auVar11._0_4_ < (float)uVar8);
    auVar12._4_4_ = -(uint)(auVar11._4_4_ < (float)((ulong)uVar8 >> 0x20));
    fVar14 = (float)uVar9;
    fVar15 = (float)((ulong)uVar9 >> 0x20);
    auVar12._8_4_ = -(uint)(fVar14 < fVar17);
    auVar12._12_4_ = -(uint)(fVar15 < fVar18);
    auVar3._12_4_ = fStack_44;
    auVar16._12_4_ = uStack_74;
    auVar16 = NEON_ext(auVar3,auVar16,8,1);
    auVar4._8_4_ = fVar14;
    auVar4._0_8_ = uVar8;
    auVar4._12_4_ = fVar15;
    auVar13._8_4_ = fVar14;
    auVar13._0_8_ = uVar8;
    auVar13._12_4_ = fVar15;
    auVar13 = auVar13 ^ (auVar4 ^ auVar16) & auVar12;
    param_1[1] = auVar13._8_8_;
    *param_1 = auVar13._0_8_;
  }
  return 1;
}



/* Entry: 10838ecd0; end: 10838ecdf;  */

float FUN_10838ecd0(float param_1)

{
  return param_1 * 0.0;
}



/* Entry: 10838ece0; end: 10838ed0f;  */

void FUN_10838ece0(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_10838eb84();
  if ((uVar1 & 1) == 0) {
    param_1[1] = 0x7fc000007fc00000;
    *param_1 = 0x7fc000007fc00000;
  }
  return;
}



/* Entry: 10838ed10; end: 10838edd7;  */

uint FUN_10838ed10(undefined8 *param_1)

{
  uint extraout_w8;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  func_0x00010838f4f8();
  if ((extraout_w8 & 1) != 0) {
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  return extraout_w8 & 1;
}



/* Entry: 10838edd8; end: 10838ef37;  */

bool FUN_10838edd8(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int *piVar13;
  char cVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  piVar13 = param_1;
  FUN_10821a6d8();
  if (((((ulong)piVar13 & 1) == 0) &&
      (piVar13 = param_2, FUN_10821a6d8(), ((ulong)piVar13 & 1) == 0)) &&
     (piVar13 = param_1, FUN_10821a044(param_1,param_2), ((ulong)piVar13 & 1) != 0)) {
    iVar1 = param_1[2];
    iVar3 = param_1[3];
    iVar2 = *param_1;
    iVar4 = param_1[1];
    iVar5 = *param_2;
    fVar15 = 0.0;
    iVar6 = iVar5 - iVar2;
    if (iVar6 == 0 || iVar5 < iVar2) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = (float)iVar6 / (float)(iVar1 - iVar2);
    }
    cVar14 = iVar6 != 0 && iVar5 >= iVar2;
    iVar5 = iVar1 - param_2[2];
    if (iVar5 != 0 && param_2[2] <= iVar1) {
      fVar15 = (float)iVar5 / (float)(iVar1 - iVar2);
      cVar14 = cVar14 + '\x01';
    }
    fVar18 = 0.0;
    iVar1 = param_2[1] - iVar4;
    if (iVar1 != 0 && iVar4 <= param_2[1]) {
      fVar18 = (float)iVar1 / (float)(iVar3 - iVar4);
      cVar14 = cVar14 + '\x01';
    }
    iVar1 = iVar3 - param_2[3];
    if (iVar1 == 0 || iVar3 < param_2[3]) {
      fVar19 = 0.0;
      if (cVar14 == '\0') {
        param_3[0] = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        goto LAB_10838ee50;
      }
    }
    else {
      fVar19 = (float)iVar1 / (float)(iVar3 - iVar4);
      cVar14 = cVar14 + '\x01';
    }
    uVar16 = *(undefined8 *)param_1;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_3 = uVar16;
    bVar7 = false;
    bVar9 = true;
    bVar11 = false;
    if (fVar15 < fVar17) {
      bVar7 = false;
      bVar9 = false;
      bVar11 = true;
      if (!NAN(fVar17) && !NAN(fVar18)) {
        bVar7 = fVar17 < fVar18;
        bVar9 = fVar17 == fVar18;
        bVar11 = false;
      }
    }
    bVar8 = false;
    bVar10 = true;
    bVar12 = false;
    if (!bVar9 && bVar7 == bVar11) {
      bVar8 = false;
      bVar10 = false;
      bVar12 = true;
      if (!NAN(fVar17) && !NAN(fVar19)) {
        bVar8 = fVar17 < fVar19;
        bVar10 = fVar17 == fVar19;
        bVar12 = false;
      }
    }
    if (bVar10 || bVar8 != bVar12) {
      bVar7 = false;
      bVar9 = true;
      bVar11 = false;
      if (fVar18 < fVar15) {
        bVar7 = false;
        bVar9 = false;
        bVar11 = true;
        if (!NAN(fVar15) && !NAN(fVar19)) {
          bVar7 = fVar15 < fVar19;
          bVar9 = fVar15 == fVar19;
          bVar11 = false;
        }
      }
      if (bVar9 || bVar7 != bVar11) {
        if (fVar18 <= fVar19) {
          param_3[1] = param_2[3];
        }
        else {
          param_3[3] = param_2[1];
        }
      }
      else {
        *param_3 = param_2[2];
      }
    }
    else {
      param_3[2] = *param_2;
    }
    bVar7 = cVar14 == '\x01';
  }
  else {
    uVar16 = *(undefined8 *)param_1;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_3 = uVar16;
LAB_10838ee50:
    bVar7 = true;
  }
  return bVar7;
}



/* Entry: 10838ef38; end: 10838efab;  */

void FUN_10838ef38(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [64];
  
  uVar2 = param_1;
  func_0x00010818d67c(auStack_70,param_5);
  uVar1 = (undefined4)uVar2;
  FUN_10817500c(param_6);
  uStack_80 = uVar1;
  uStack_7c = param_2;
  uStack_78 = param_3;
  uStack_74 = param_4;
  FUN_10817500c(param_7);
  uStack_90 = uVar1;
  uStack_8c = param_2;
  uStack_88 = param_3;
  uStack_84 = param_4;
  FUN_10838efac(param_1,auStack_70,&uStack_80,&uStack_90);
  return;
}



/* Entry: 10838efac; end: 10838efd7;  */

bool FUN_10838efac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  
  FUN_10838efd8();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  iVar2 = NEON_uminv(auVar1,4);
  return iVar2 != 0;
}



/* Entry: 10838efd8; end: 10838f357;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010838f058 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_10838efd8(undefined4 *param_1,float *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long extraout_x8;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 in_b0;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined1 in_register_00005001;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 in_register_00005002;
  undefined1 uVar40;
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
  byte bVar53;
  undefined1 in_register_00005003;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 in_register_00005004;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  byte bVar74;
  undefined1 in_register_00005005;
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
  byte bVar85;
  undefined1 in_register_00005006;
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
  byte bVar97;
  undefined1 in_register_00005007;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  byte bVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  byte bVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  byte bVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  byte bVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  byte bVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  byte bVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 uVar126;
  undefined1 uVar127;
  byte bVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  byte bVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  byte bVar139;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  int iVar140;
  int iVar141;
  undefined8 uVar142;
  undefined2 uVar144;
  undefined8 extraout_d1;
  int iVar145;
  int iVar146;
  int iVar147;
  int iVar148;
  int iVar149;
  int iVar150;
  undefined1 auVar143 [16];
  float fVar151;
  float fVar152;
  undefined8 uVar153;
  undefined8 uVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  undefined8 uVar167;
  undefined1 auVar168 [16];
  
  if (*param_2 < param_2[2]) {
    fVar162 = param_2[1];
    fVar155 = param_2[3];
    if (fVar162 < fVar155) {
      uVar142 = CONCAT44(param_2[2],*param_2);
      uVar153 = CONCAT44(fVar162,fVar162);
      uVar3 = param_1[3];
      uVar15 = (undefined1)uVar3;
      uVar26 = (undefined1)((uint)uVar3 >> 8);
      uVar40 = (undefined1)((uint)uVar3 >> 0x10);
      uVar54 = (undefined1)((uint)uVar3 >> 0x18);
      uVar154 = uVar153;
      func_0x00010838f364();
      fVar161 = (float)uVar154;
      func_0x00010838f4bc();
      uVar3 = param_1[7];
      uVar16 = (char)uVar3;
      uVar27 = (char)((uint)uVar3 >> 8);
      uVar41 = (char)((uint)uVar3 >> 0x10);
      uVar55 = (char)((uint)uVar3 >> 0x18);
      func_0x00010838f364(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(uVar56,CONCAT12(uVar42,
                                                  CONCAT11(uVar28,uVar17))))))),uVar153);
      uVar56 = uVar55;
      uVar42 = uVar41;
      uVar28 = uVar27;
      uVar17 = uVar16;
      uVar16 = uVar17;
      uVar27 = uVar28;
      uVar41 = uVar42;
      uVar55 = uVar56;
      func_0x00010838f4bc();
      fVar162 = (float)CONCAT13(uVar54,CONCAT12(uVar40,CONCAT11(uVar26,uVar15))) +
                (float)CONCAT13(uVar55,CONCAT12(uVar41,CONCAT11(uVar27,uVar16)));
      uVar16 = SUB41(fVar162,0);
      uVar27 = (undefined1)((uint)fVar162 >> 8);
      uVar41 = (undefined1)((uint)fVar162 >> 0x10);
      uVar55 = (undefined1)((uint)fVar162 >> 0x18);
      func_0x00010838f358();
      fVar162 = (float)CONCAT13(uVar55,CONCAT12(uVar41,CONCAT11(uVar27,uVar16)));
      iVar6 = -(uint)(extraout_s1 < 0.0);
      uVar16 = (undefined1)iVar6;
      uVar27 = (undefined1)((uint)iVar6 >> 8);
      uVar41 = (undefined1)((uint)iVar6 >> 0x10);
      uVar55 = (undefined1)((uint)iVar6 >> 0x18);
      iVar6 = -(uint)(fVar161 < 0.0);
      iVar8 = -(uint)(fVar155 < 0.0);
      auVar143[4] = uVar16;
      auVar143._0_4_ = -(uint)(fVar162 < 0.0);
      auVar143[5] = uVar27;
      auVar143[6] = uVar41;
      auVar143[7] = uVar55;
      auVar143[8] = (char)iVar6;
      auVar143[9] = (char)((uint)iVar6 >> 8);
      auVar143[10] = (char)((uint)iVar6 >> 0x10);
      auVar143[0xb] = (char)((uint)iVar6 >> 0x18);
      auVar143[0xc] = (char)iVar8;
      auVar143[0xd] = (char)((uint)iVar8 >> 8);
      auVar143[0xe] = (char)((uint)iVar8 >> 0x10);
      auVar143[0xf] = (char)((uint)iVar8 >> 0x18);
      iVar6 = NEON_uminv(auVar143,4);
      if (iVar6 == 0) {
        uVar3 = param_1[1];
        uVar17 = (char)uVar3;
        uVar28 = (char)((uint)uVar3 >> 8);
        uVar42 = (char)((uint)uVar3 >> 0x10);
        uVar56 = (char)((uint)uVar3 >> 0x18);
        fVar157 = fVar155;
        fVar151 = fVar161;
        func_0x00010838f364(CONCAT17(uVar55,CONCAT16(uVar41,CONCAT15(uVar27,CONCAT14(uVar16,CONCAT13
                                                  (uVar88,CONCAT12(uVar80,CONCAT11(uVar32,uVar31))))
                                                  ))),uVar142);
        uVar88 = uVar56;
        uVar80 = uVar42;
        uVar32 = uVar28;
        uVar31 = uVar17;
        uVar17 = uVar31;
        uVar42 = uVar32;
        uVar15 = uVar80;
        uVar40 = uVar88;
        func_0x00010838f4bc();
        uVar3 = param_1[5];
        uVar28 = (char)uVar3;
        uVar56 = (char)((uint)uVar3 >> 8);
        uVar26 = (char)((uint)uVar3 >> 0x10);
        uVar54 = (char)((uint)uVar3 >> 0x18);
        func_0x00010838f364(CONCAT17(uVar55,CONCAT16(uVar41,CONCAT15(uVar27,CONCAT14(uVar16,CONCAT13
                                                  (uVar101,CONCAT12(uVar77,CONCAT11(uVar46,uVar29)))
                                                  )))),uVar153);
        uVar101 = uVar54;
        uVar77 = uVar26;
        uVar46 = uVar56;
        uVar29 = uVar28;
        uVar28 = uVar29;
        uVar56 = uVar46;
        uVar26 = uVar77;
        uVar54 = uVar101;
        func_0x00010838f4bc();
        fVar4 = (float)CONCAT13(uVar40,CONCAT12(uVar15,CONCAT11(uVar42,uVar17))) +
                (float)CONCAT13(uVar54,CONCAT12(uVar26,CONCAT11(uVar56,uVar28)));
        uVar17 = SUB41(fVar4,0);
        uVar28 = (undefined1)((uint)fVar4 >> 8);
        uVar42 = (undefined1)((uint)fVar4 >> 0x10);
        uVar56 = (undefined1)((uint)fVar4 >> 0x18);
        func_0x00010838f358();
        fVar4 = (float)CONCAT13(uVar56,CONCAT12(uVar42,CONCAT11(uVar28,uVar17)));
        uVar3 = *param_1;
        uVar17 = (char)uVar3;
        uVar28 = (char)((uint)uVar3 >> 8);
        uVar42 = (char)((uint)uVar3 >> 0x10);
        uVar56 = (char)((uint)uVar3 >> 0x18);
        fVar156 = fVar157;
        fVar152 = fVar151;
        func_0x00010838f364(CONCAT17(uVar55,CONCAT16(uVar41,CONCAT15(uVar27,CONCAT14(uVar16,CONCAT13
                                                  (uVar86,CONCAT12(uVar93,CONCAT11(uVar57,uVar45))))
                                                  ))),uVar142);
        uVar86 = uVar56;
        uVar93 = uVar42;
        uVar57 = uVar28;
        uVar45 = uVar17;
        uVar17 = uVar45;
        uVar42 = uVar57;
        uVar15 = uVar93;
        uVar40 = uVar86;
        func_0x00010838f4bc();
        uVar3 = param_1[4];
        uVar28 = (char)uVar3;
        uVar56 = (char)((uint)uVar3 >> 8);
        uVar26 = (char)((uint)uVar3 >> 0x10);
        uVar54 = (char)((uint)uVar3 >> 0x18);
        func_0x00010838f364(CONCAT17(uVar55,CONCAT16(uVar41,CONCAT15(uVar27,CONCAT14(uVar16,CONCAT13
                                                  (uVar89,CONCAT12(uVar75,CONCAT11(uVar59,uVar43))))
                                                  ))),uVar153);
        uVar89 = uVar54;
        uVar75 = uVar26;
        uVar59 = uVar56;
        uVar43 = uVar28;
        uVar28 = uVar43;
        uVar56 = uVar59;
        uVar16 = uVar75;
        uVar27 = uVar89;
        func_0x00010838f4bc();
        fVar5 = (float)CONCAT13(uVar40,CONCAT12(uVar15,CONCAT11(uVar42,uVar17))) +
                (float)CONCAT13(uVar27,CONCAT12(uVar16,CONCAT11(uVar56,uVar28)));
        uVar17 = SUB41(fVar5,0);
        uVar28 = (undefined1)((uint)fVar5 >> 8);
        uVar42 = (undefined1)((uint)fVar5 >> 0x10);
        uVar56 = (undefined1)((uint)fVar5 >> 0x18);
        func_0x00010838f358();
        fVar5 = (float)CONCAT13(uVar56,CONCAT12(uVar42,CONCAT11(uVar28,uVar17)));
        fVar163 = extraout_s1 * fVar4 - fVar162 * extraout_s1_00;
        fVar164 = fVar161 * extraout_s1_00 - extraout_s1 * fVar151;
        fVar165 = fVar155 * fVar151 - fVar161 * fVar157;
        fVar166 = fVar162 * fVar157 - fVar155 * fVar4;
        uVar13 = (ulong)(uint)fVar164;
        fVar157 = fVar162 * extraout_s1_01 - extraout_s1 * fVar5;
        fVar159 = extraout_s1 * fVar152 - fVar161 * extraout_s1_01;
        fVar161 = fVar161 * fVar156 - fVar155 * fVar152;
        fVar162 = fVar155 * (float)CONCAT13(uVar56,CONCAT12(uVar42,CONCAT11(uVar28,uVar17))) -
                  fVar162 * fVar156;
        fVar155 = fVar151 * extraout_s1_01 - extraout_s1_00 * fVar152;
        uVar154 = CONCAT17((char)((uint)fVar155 >> 0x18),
                           CONCAT16((char)((uint)fVar155 >> 0x10),
                                    CONCAT15((char)((uint)fVar155 >> 8),
                                             CONCAT14(SUB41(fVar155,0),
                                                      extraout_s1_00 * fVar5 -
                                                      fVar4 * extraout_s1_01))));
        uVar144 = 0xbf80;
        if (0.0 <= -fVar164 * fVar157 + fVar163 * fVar159) {
          uVar144 = 0x3f80;
        }
        uVar167 = 0;
        fVar158 = fVar157;
        fVar160 = fVar159;
        FUN_108279f50(param_3);
        uVar107 = SUB41(fVar165,0);
        uVar110 = (undefined1)((uint)fVar165 >> 8);
        uVar113 = (undefined1)((uint)fVar165 >> 0x10);
        uVar116 = (undefined1)((uint)fVar165 >> 0x18);
        uVar119 = SUB41(fVar166,0);
        uVar122 = (undefined1)((uint)fVar166 >> 8);
        uVar129 = (undefined1)((uint)fVar166 >> 0x10);
        uVar136 = (undefined1)((uint)fVar166 >> 0x18);
        uVar29 = (undefined1)((uint)fVar163 >> 8);
        uVar43 = (undefined1)((uint)fVar163 >> 0x10);
        uVar57 = (undefined1)((uint)fVar163 >> 0x18);
        uVar75 = (undefined1)((uint)fVar164 >> 8);
        uVar86 = (undefined1)((uint)fVar164 >> 0x10);
        uVar41 = (undefined1)((uint)fVar164 >> 0x18);
        uVar17 = SUB41(fVar163,0);
        uVar31 = uVar29;
        uVar45 = uVar43;
        uVar28 = uVar57;
        uVar32 = SUB41(fVar164,0);
        uVar46 = uVar75;
        uVar59 = uVar86;
        uVar42 = uVar41;
        uVar80 = uVar107;
        uVar93 = uVar110;
        uVar56 = uVar113;
        uVar101 = uVar116;
        uVar124 = uVar119;
        uVar126 = uVar122;
        uVar131 = uVar129;
        uVar133 = uVar136;
        func_0x00010838f36c(CONCAT17(uVar98,CONCAT16(uVar87,CONCAT15(uVar76,CONCAT14(uVar67,CONCAT13
                                                  (uVar58,CONCAT12(uVar44,CONCAT11(uVar30,uVar18))))
                                                  ))),
                            CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))));
        uVar98 = uVar42;
        uVar87 = uVar59;
        uVar76 = uVar46;
        uVar67 = uVar32;
        uVar58 = uVar28;
        uVar44 = uVar45;
        uVar30 = uVar31;
        uVar18 = uVar17;
        uVar17 = uVar18;
        uVar31 = uVar30;
        uVar45 = uVar44;
        uVar28 = uVar58;
        uVar42 = uVar67;
        uVar77 = uVar76;
        uVar88 = uVar87;
        uVar16 = uVar98;
        func_0x00010838f4bc();
        fVar156 = (float)CONCAT13(uVar101,CONCAT12(uVar56,CONCAT11(uVar93,uVar80)));
        fVar155 = (float)CONCAT13(uVar28,CONCAT12(uVar45,CONCAT11(uVar31,uVar17)));
        uVar108 = SUB41(fVar161,0);
        uVar111 = (undefined1)((uint)fVar161 >> 8);
        uVar114 = (undefined1)((uint)fVar161 >> 0x10);
        uVar117 = (undefined1)((uint)fVar161 >> 0x18);
        uVar120 = SUB41(fVar162,0);
        uVar123 = (undefined1)((uint)fVar162 >> 8);
        uVar130 = (undefined1)((uint)fVar162 >> 0x10);
        uVar137 = (undefined1)((uint)fVar162 >> 0x18);
        uVar32 = (undefined1)((uint)fVar157 >> 8);
        uVar46 = (undefined1)((uint)fVar157 >> 0x10);
        uVar59 = (undefined1)((uint)fVar157 >> 0x18);
        uVar56 = (undefined1)((uint)fVar159 >> 8);
        uVar89 = (undefined1)((uint)fVar159 >> 0x10);
        uVar55 = (undefined1)((uint)fVar159 >> 0x18);
        uVar17 = SUB41(fVar157,0);
        uVar31 = uVar32;
        uVar45 = uVar46;
        uVar28 = uVar59;
        uVar80 = SUB41(fVar159,0);
        uVar93 = uVar56;
        uVar101 = uVar89;
        uVar27 = uVar55;
        uVar15 = uVar108;
        uVar26 = uVar111;
        uVar40 = uVar114;
        uVar54 = uVar117;
        uVar125 = uVar120;
        uVar127 = uVar123;
        uVar132 = uVar130;
        uVar134 = uVar137;
        func_0x00010838f36c(CONCAT17(uVar99,CONCAT16(uVar90,CONCAT15(uVar78,CONCAT14(uVar68,CONCAT13
                                                  (uVar60,CONCAT12(uVar47,CONCAT11(uVar33,uVar19))))
                                                  ))),extraout_d1);
        uVar99 = uVar27;
        uVar90 = uVar101;
        uVar78 = uVar93;
        uVar68 = uVar80;
        uVar60 = uVar28;
        uVar47 = uVar45;
        uVar33 = uVar31;
        uVar19 = uVar17;
        uVar153 = CONCAT17(uVar134,CONCAT16(uVar132,CONCAT15(uVar127,CONCAT14(uVar125,CONCAT13(
                                                  uVar54,CONCAT12(uVar40,CONCAT11(uVar26,uVar15)))))
                                           ));
        uVar142 = CONCAT17(uVar99,CONCAT16(uVar90,CONCAT15(uVar78,CONCAT14(uVar68,CONCAT13(uVar60,
                                                  CONCAT12(uVar47,CONCAT11(uVar33,uVar19)))))));
        func_0x00010838f4e8();
        fVar162 = fVar155 + (float)uVar142;
        fVar5 = (float)(CONCAT17(uVar16,CONCAT16(uVar88,CONCAT15(uVar77,CONCAT14(uVar42,fVar155))))
                       >> 0x20);
        fVar161 = fVar5 + (float)((ulong)uVar142 >> 0x20);
        fVar4 = fVar156 + (float)uVar153;
        uVar16 = SUB41(fVar4,0);
        uVar27 = (undefined1)((uint)fVar4 >> 8);
        uVar15 = (undefined1)((uint)fVar4 >> 0x10);
        uVar26 = (undefined1)((uint)fVar4 >> 0x18);
        fVar165 = (float)(CONCAT17(uVar133,CONCAT16(uVar131,CONCAT15(uVar126,CONCAT14(uVar124,
                                                  fVar156)))) >> 0x20);
        fVar4 = fVar165 + (float)((ulong)uVar153 >> 0x20);
        uVar40 = SUB41(fVar4,0);
        uVar124 = (undefined1)((uint)fVar4 >> 8);
        uVar131 = (undefined1)((uint)fVar4 >> 0x10);
        uVar138 = (undefined1)((uint)fVar4 >> 0x18);
        uVar17 = SUB41(fVar162,0);
        uVar31 = (char)((uint)fVar162 >> 8);
        uVar45 = (char)((uint)fVar162 >> 0x10);
        uVar28 = (char)((uint)fVar162 >> 0x18);
        uVar42 = SUB41(fVar161,0);
        uVar80 = (char)((uint)fVar161 >> 8);
        uVar77 = (char)((uint)fVar161 >> 0x10);
        uVar93 = (char)((uint)fVar161 >> 0x18);
        func_0x00010838f4cc(CONCAT17(uVar100,CONCAT16(uVar91,CONCAT15(uVar79,CONCAT14(uVar69,
                                                  CONCAT13(uVar61,CONCAT12(uVar48,CONCAT11(uVar34,
                                                  uVar20))))))),uVar154);
        uVar100 = uVar93;
        uVar91 = uVar77;
        uVar79 = uVar80;
        uVar69 = uVar42;
        uVar61 = uVar28;
        uVar48 = uVar45;
        uVar34 = uVar31;
        uVar20 = uVar17;
        uVar17 = uVar20;
        uVar31 = uVar34;
        uVar45 = uVar48;
        uVar28 = uVar61;
        uVar42 = uVar69;
        uVar80 = uVar79;
        uVar88 = uVar91;
        uVar101 = uVar100;
        func_0x00010838f4bc();
        fVar152 = (float)CONCAT13(uVar26,CONCAT12(uVar15,CONCAT11(uVar27,uVar16)));
        fVar162 = (float)CONCAT13(uVar28,CONCAT12(uVar45,CONCAT11(uVar31,uVar17)));
        uVar17 = SUB41(fVar163,0);
        uVar31 = SUB41(fVar164,0);
        func_0x00010838f36c(CONCAT17(uVar102,CONCAT16(uVar92,CONCAT15(uVar81,CONCAT14(uVar70,
                                                  CONCAT13(uVar62,CONCAT12(uVar49,CONCAT11(uVar35,
                                                  uVar21))))))),uVar13);
        uVar102 = uVar41;
        uVar92 = uVar86;
        uVar81 = uVar75;
        uVar70 = uVar31;
        uVar62 = uVar57;
        uVar49 = uVar43;
        uVar35 = uVar29;
        uVar21 = uVar17;
        uVar17 = uVar21;
        uVar31 = uVar35;
        uVar29 = uVar49;
        uVar45 = uVar62;
        uVar57 = uVar70;
        uVar77 = uVar81;
        uVar93 = uVar92;
        uVar75 = uVar102;
        func_0x00010838f4bc();
        fVar151 = (float)CONCAT13(uVar116,CONCAT12(uVar113,CONCAT11(uVar110,uVar107)));
        fVar161 = (float)CONCAT13(uVar45,CONCAT12(uVar29,CONCAT11(uVar31,uVar17)));
        uVar27 = (undefined1)uVar167;
        uVar41 = (undefined1)((ulong)uVar167 >> 8);
        uVar15 = (undefined1)((ulong)uVar167 >> 0x10);
        uVar26 = (undefined1)((ulong)uVar167 >> 0x18);
        uVar54 = (undefined1)((ulong)uVar167 >> 0x20);
        uVar125 = (undefined1)((ulong)uVar167 >> 0x28);
        uVar132 = (undefined1)((ulong)uVar167 >> 0x30);
        uVar107 = (undefined1)((ulong)uVar167 >> 0x38);
        uVar17 = 0;
        uVar31 = 0;
        uVar86 = (undefined1)uVar144;
        uVar16 = (undefined1)((ushort)uVar144 >> 8);
        uVar29 = 0;
        uVar45 = 0;
        uVar43 = 0;
        uVar28 = 0;
        func_0x00010838f364();
        func_0x00010838f4bc();
        fVar163 = (float)CONCAT13(uVar26,CONCAT12(uVar15,CONCAT11(uVar41,uVar27)));
        fVar4 = (float)CONCAT13(uVar16,CONCAT12(uVar86,CONCAT11(uVar31,uVar17)));
        uVar17 = SUB41(fVar157,0);
        uVar31 = SUB41(fVar159,0);
        func_0x00010838f36c(CONCAT17(uVar103,CONCAT16(uVar94,CONCAT15(uVar82,CONCAT14(uVar71,
                                                  CONCAT13(uVar63,CONCAT12(uVar50,CONCAT11(uVar36,
                                                  uVar22))))))),CONCAT44(fVar160,fVar158));
        uVar103 = uVar55;
        uVar94 = uVar89;
        uVar82 = uVar56;
        uVar71 = uVar31;
        uVar63 = uVar59;
        uVar50 = uVar46;
        uVar36 = uVar32;
        uVar22 = uVar17;
        uVar153 = CONCAT17(uVar137,CONCAT16(uVar130,CONCAT15(uVar123,CONCAT14(uVar120,CONCAT13(
                                                  uVar117,CONCAT12(uVar114,CONCAT11(uVar111,uVar108)
                                                                  ))))));
        uVar142 = CONCAT17(uVar103,CONCAT16(uVar94,CONCAT15(uVar82,CONCAT14(uVar71,CONCAT13(uVar63,
                                                  CONCAT12(uVar50,CONCAT11(uVar36,uVar22)))))));
        func_0x00010838f4e8();
        fVar157 = fVar161 + (float)uVar142;
        fVar164 = (float)((ulong)uVar142 >> 0x20);
        fVar161 = (float)(CONCAT17(uVar75,CONCAT16(uVar93,CONCAT15(uVar77,CONCAT14(uVar57,fVar161)))
                                  ) >> 0x20) + fVar164;
        fVar159 = fVar151 + (float)uVar153;
        uVar56 = SUB41(fVar159,0);
        uVar89 = (undefined1)((uint)fVar159 >> 8);
        uVar16 = (undefined1)((uint)fVar159 >> 0x10);
        uVar27 = (undefined1)((uint)fVar159 >> 0x18);
        fVar159 = (float)((ulong)uVar153 >> 0x20);
        fVar151 = (float)(CONCAT17(uVar136,CONCAT16(uVar129,CONCAT15(uVar122,CONCAT14(uVar119,
                                                  fVar151)))) >> 0x20) + fVar159;
        uVar15 = SUB41(fVar151,0);
        uVar126 = (undefined1)((uint)fVar151 >> 8);
        uVar133 = (undefined1)((uint)fVar151 >> 0x10);
        uVar108 = (undefined1)((uint)fVar151 >> 0x18);
        uVar17 = SUB41(fVar157,0);
        uVar31 = (char)((uint)fVar157 >> 8);
        uVar32 = (char)((uint)fVar157 >> 0x10);
        uVar46 = (char)((uint)fVar157 >> 0x18);
        uVar57 = SUB41(fVar161,0);
        uVar59 = (char)((uint)fVar161 >> 8);
        uVar77 = (char)((uint)fVar161 >> 0x10);
        uVar93 = (char)((uint)fVar161 >> 0x18);
        func_0x00010838f4cc(CONCAT17(uVar104,CONCAT16(uVar95,CONCAT15(uVar83,CONCAT14(uVar72,
                                                  CONCAT13(uVar64,CONCAT12(uVar51,CONCAT11(uVar37,
                                                  uVar23))))))),uVar154);
        uVar104 = uVar93;
        uVar95 = uVar77;
        uVar83 = uVar59;
        uVar72 = uVar57;
        uVar64 = uVar46;
        uVar51 = uVar32;
        uVar37 = uVar31;
        uVar23 = uVar17;
        uVar17 = uVar23;
        uVar31 = uVar37;
        uVar32 = uVar51;
        uVar46 = uVar64;
        uVar57 = uVar72;
        uVar77 = uVar83;
        uVar75 = uVar95;
        uVar86 = uVar104;
        func_0x00010838f4bc();
        fVar157 = (float)CONCAT13(uVar27,CONCAT12(uVar16,CONCAT11(uVar89,uVar56)));
        fVar161 = (float)CONCAT13(uVar46,CONCAT12(uVar32,CONCAT11(uVar31,uVar17)));
        fVar155 = fVar155 + (float)uVar142;
        fVar5 = fVar5 + fVar164;
        fVar156 = fVar156 + (float)uVar153;
        uVar16 = SUB41(fVar156,0);
        uVar27 = (undefined1)((uint)fVar156 >> 8);
        uVar41 = (undefined1)((uint)fVar156 >> 0x10);
        uVar55 = (undefined1)((uint)fVar156 >> 0x18);
        fVar165 = fVar165 + fVar159;
        uVar26 = SUB41(fVar165,0);
        uVar127 = (undefined1)((uint)fVar165 >> 8);
        uVar134 = (undefined1)((uint)fVar165 >> 0x10);
        uVar110 = (undefined1)((uint)fVar165 >> 0x18);
        uVar17 = SUB41(fVar155,0);
        uVar31 = (char)((uint)fVar155 >> 8);
        uVar32 = (char)((uint)fVar155 >> 0x10);
        uVar46 = (char)((uint)fVar155 >> 0x18);
        uVar59 = SUB41(fVar5,0);
        uVar93 = (char)((uint)fVar5 >> 8);
        uVar56 = (char)((uint)fVar5 >> 0x10);
        uVar89 = (char)((uint)fVar5 >> 0x18);
        func_0x00010838f4cc(CONCAT17(uVar105,CONCAT16(uVar96,CONCAT15(uVar84,CONCAT14(uVar73,
                                                  CONCAT13(uVar65,CONCAT12(uVar52,CONCAT11(uVar38,
                                                  uVar24))))))),uVar154);
        uVar105 = uVar89;
        uVar96 = uVar56;
        uVar84 = uVar93;
        uVar73 = uVar59;
        uVar65 = uVar46;
        uVar52 = uVar32;
        uVar38 = uVar31;
        uVar24 = uVar17;
        uVar154 = CONCAT44(-(uint)(0.0 <= (float)(CONCAT17(uVar101,CONCAT16(uVar88,CONCAT15(uVar80,
                                                  CONCAT14(uVar42,fVar162)))) >> 0x20)),
                           -(uint)(0.0 <= fVar162));
        uVar142 = CONCAT44(-(uint)(0.0 <= (float)(CONCAT17(uVar138,CONCAT16(uVar131,CONCAT15(uVar124
                                                  ,CONCAT14(uVar40,fVar152)))) >> 0x20)),
                           -(uint)(0.0 <= fVar152));
        uVar17 = uVar24;
        uVar31 = uVar38;
        uVar32 = uVar52;
        uVar46 = uVar65;
        uVar59 = uVar73;
        uVar42 = uVar84;
        uVar80 = uVar96;
        uVar93 = uVar105;
        func_0x00010838f4bc(0);
        iVar140 = -(uint)(0.0 <= fVar4);
        iVar145 = -(uint)(0.0 <= (float)(CONCAT17(uVar28,CONCAT16(uVar43,CONCAT15(uVar45,CONCAT14(
                                                  uVar29,fVar4)))) >> 0x20));
        iVar147 = -(uint)(0.0 <= fVar163);
        iVar149 = -(uint)(0.0 <= (float)(CONCAT17(uVar107,CONCAT16(uVar132,CONCAT15(uVar125,CONCAT14
                                                  (uVar54,fVar163)))) >> 0x20));
        iVar141 = -(uint)(0.0 <= fVar161);
        iVar146 = -(uint)(0.0 <= (float)(CONCAT17(uVar86,CONCAT16(uVar75,CONCAT15(uVar77,CONCAT14(
                                                  uVar57,fVar161)))) >> 0x20));
        iVar148 = -(uint)(0.0 <= fVar157);
        iVar150 = -(uint)(0.0 <= (float)(CONCAT17(uVar108,CONCAT16(uVar133,CONCAT15(uVar126,CONCAT14
                                                  (uVar15,fVar157)))) >> 0x20));
        iVar6 = -(uint)(0.0 <= (float)CONCAT13(uVar46,CONCAT12(uVar32,CONCAT11(uVar31,uVar17))));
        iVar8 = -(uint)(0.0 <= (float)CONCAT13(uVar93,CONCAT12(uVar80,CONCAT11(uVar42,uVar59))));
        iVar7 = -(uint)(0.0 <= (float)CONCAT13(uVar55,CONCAT12(uVar41,CONCAT11(uVar27,uVar16))));
        iVar9 = -(uint)(0.0 <= (float)CONCAT13(uVar110,CONCAT12(uVar134,CONCAT11(uVar127,uVar26))));
        bVar25 = (byte)iVar6 & (byte)iVar141 & (byte)uVar154 & (byte)iVar140;
        bVar39 = (byte)((uint)iVar6 >> 8) &
                 (byte)((uint)iVar141 >> 8) &
                 (byte)((ulong)uVar154 >> 8) & (byte)((uint)iVar140 >> 8);
        bVar53 = (byte)((uint)iVar6 >> 0x10) &
                 (byte)((uint)iVar141 >> 0x10) &
                 (byte)((ulong)uVar154 >> 0x10) & (byte)((uint)iVar140 >> 0x10);
        bVar66 = (byte)((uint)iVar6 >> 0x18) &
                 (byte)((uint)iVar141 >> 0x18) &
                 (byte)((ulong)uVar154 >> 0x18) & (byte)((uint)iVar140 >> 0x18);
        bVar74 = (byte)iVar8 & (byte)iVar146 & (byte)((ulong)uVar154 >> 0x20) & (byte)iVar145;
        bVar85 = (byte)((uint)iVar8 >> 8) &
                 (byte)((uint)iVar146 >> 8) &
                 (byte)((ulong)uVar154 >> 0x28) & (byte)((uint)iVar145 >> 8);
        bVar97 = (byte)((uint)iVar8 >> 0x10) &
                 (byte)((uint)iVar146 >> 0x10) &
                 (byte)((ulong)uVar154 >> 0x30) & (byte)((uint)iVar145 >> 0x10);
        bVar106 = (byte)((uint)iVar8 >> 0x18) &
                  (byte)((uint)iVar146 >> 0x18) &
                  (byte)((ulong)uVar154 >> 0x38) & (byte)((uint)iVar145 >> 0x18);
        bVar109 = (byte)iVar7 & (byte)iVar148 & (byte)uVar142 & (byte)iVar147;
        bVar112 = (byte)((uint)iVar7 >> 8) &
                  (byte)((uint)iVar148 >> 8) &
                  (byte)((ulong)uVar142 >> 8) & (byte)((uint)iVar147 >> 8);
        bVar115 = (byte)((uint)iVar7 >> 0x10) &
                  (byte)((uint)iVar148 >> 0x10) &
                  (byte)((ulong)uVar142 >> 0x10) & (byte)((uint)iVar147 >> 0x10);
        bVar118 = (byte)((uint)iVar7 >> 0x18) &
                  (byte)((uint)iVar148 >> 0x18) &
                  (byte)((ulong)uVar142 >> 0x18) & (byte)((uint)iVar147 >> 0x18);
        bVar121 = (byte)iVar9 & (byte)iVar150 & (byte)((ulong)uVar142 >> 0x20) & (byte)iVar149;
        bVar128 = (byte)((uint)iVar9 >> 8) &
                  (byte)((uint)iVar150 >> 8) &
                  (byte)((ulong)uVar142 >> 0x28) & (byte)((uint)iVar149 >> 8);
        bVar135 = (byte)((uint)iVar9 >> 0x10) &
                  (byte)((uint)iVar150 >> 0x10) &
                  (byte)((ulong)uVar142 >> 0x30) & (byte)((uint)iVar149 >> 0x10);
        bVar139 = (byte)((uint)iVar9 >> 0x18) &
                  (byte)((uint)iVar150 >> 0x18) &
                  (byte)((ulong)uVar142 >> 0x38) & (byte)((uint)iVar149 >> 0x18);
        uVar11 = (ulong)CONCAT13(bVar139,CONCAT12(bVar135,CONCAT11(bVar128,bVar121)));
        auVar1[1] = bVar39;
        auVar1[0] = bVar25;
        auVar1[2] = bVar53;
        auVar1[3] = bVar66;
        auVar1[4] = bVar74;
        auVar1[5] = bVar85;
        auVar1[6] = bVar97;
        auVar1[7] = bVar106;
        auVar1[8] = bVar109;
        auVar1[9] = bVar112;
        auVar1[10] = bVar115;
        auVar1[0xb] = bVar118;
        auVar1[0xc] = bVar121;
        auVar1[0xd] = bVar128;
        auVar1[0xe] = bVar135;
        auVar1[0xf] = bVar139;
        auVar2[1] = bVar39;
        auVar2[0] = bVar25;
        auVar2[2] = bVar53;
        auVar2[3] = bVar66;
        auVar2[4] = bVar74;
        auVar2[5] = bVar85;
        auVar2[6] = bVar97;
        auVar2[7] = bVar106;
        auVar2[8] = bVar109;
        auVar2[9] = bVar112;
        auVar2[10] = bVar115;
        auVar2[0xb] = bVar118;
        auVar2[0xc] = bVar121;
        auVar2[0xd] = bVar128;
        auVar2[0xe] = bVar135;
        auVar2[0xf] = bVar139;
        auVar143 = NEON_ext(auVar1,auVar2,4,1);
        uVar12 = (ulong)CONCAT13(bVar66,CONCAT12(bVar53,CONCAT11(bVar39,bVar25)));
        uVar14 = (ulong)auVar143._4_4_;
        uVar13 = auVar143._0_8_ & 0xffffffff;
        lVar10 = extraout_x8;
        goto LAB_10838f0a8;
      }
    }
  }
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  lVar10 = 0;
  uVar14 = 0;
LAB_10838f0a8:
  auVar168._0_8_ = uVar12 | uVar13 << 0x20;
  auVar168._8_8_ = uVar14 | uVar11 << 0x20 | lVar10 << 0x20;
  return auVar168;
}



/* Entry: 10838f358; end: 10838f373;  */

float FUN_10838f358(float param_1,float param_2)

{
  return param_1 + param_2;
}



/* Entry: 10838f374; end: 10838f44b;  */

undefined1  [16] FUN_10838f374(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  
  piVar6 = param_1;
  FUN_10821a6d8();
  if ((((ulong)piVar6 & 1) == 0) && (piVar6 = param_2, FUN_10821a6d8(), ((ulong)piVar6 & 1) == 0)) {
    iVar9 = param_1[2];
    iVar11 = *param_2;
    if (iVar11 < iVar9) {
      iVar2 = *param_1;
      iVar3 = param_2[2];
      iVar10 = iVar11;
      if (iVar11 <= iVar2) {
        iVar10 = iVar2;
      }
      iVar4 = iVar3;
      if (iVar9 <= iVar3) {
        iVar4 = iVar9;
      }
      iVar9 = iVar11;
      if (iVar11 <= iVar4) {
        iVar9 = iVar4;
      }
      if (iVar3 <= iVar2) {
        iVar9 = iVar2 + 1;
        iVar10 = iVar2;
      }
    }
    else {
      iVar10 = iVar9 + -1;
    }
    iVar11 = param_1[3];
    iVar2 = param_2[1];
    if (iVar2 < iVar11) {
      iVar4 = param_1[1];
      iVar5 = param_2[3];
      iVar3 = iVar2;
      if (iVar2 <= iVar4) {
        iVar3 = iVar4;
      }
      iVar1 = iVar5;
      if (iVar11 <= iVar5) {
        iVar1 = iVar11;
      }
      iVar11 = iVar2;
      if (iVar2 <= iVar1) {
        iVar11 = iVar1;
      }
      if (iVar5 <= iVar4) {
        iVar11 = iVar4 + 1;
        iVar3 = iVar4;
      }
    }
    else {
      iVar3 = iVar11 + -1;
    }
    uVar7 = CONCAT44(iVar3,iVar10);
    uVar8 = CONCAT44(iVar11,iVar9);
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
  }
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = uVar7;
  return auVar12;
}



/* Entry: 10838f44c; end: 10838f537;  */

uint FUN_10838f44c(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  bVar1 = (byte)((uint)param_1 >> 8);
  bVar2 = (byte)((uint)param_1 >> 0x10);
  bVar3 = (byte)((uint)param_1 >> 0x18);
  return CONCAT13(bVar3 & (byte)((ulong)uVar4 >> 0x18),
                  CONCAT12(bVar2 & (byte)((ulong)uVar4 >> 0x10),
                           CONCAT11(bVar1 & (byte)((ulong)uVar4 >> 8),(byte)param_1 & (byte)uVar4)))
         | CONCAT13((byte)((uint)param_2 >> 0x18) & ~bVar3,
                    CONCAT12((byte)((uint)param_2 >> 0x10) & ~bVar2,
                             CONCAT11((byte)((uint)param_2 >> 8) & ~bVar1,
                                      (byte)param_2 & ~(byte)param_1)));
}



/* Entry: 10838f538; end: 10838f5db;  */

void FUN_10838f538(void)

{
  func_0x000108390a18();
  func_0x00010838f558();
  return;
}



/* Entry: 10838f5dc; end: 10838f647;  */

uint FUN_10838f5dc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_2;
  FUN_10821a6d8();
  uVar1 = (uint)puVar2;
  if (*(int *)(param_2 + 1) == 0x7fffffff) {
    uVar1 = 1;
  }
  if (*(int *)((long)param_2 + 0xc) == 0x7fffffff) {
    uVar1 = 1;
  }
  if (uVar1 == 1) {
    func_0x00010838f750(param_1);
  }
  else {
    FUN_10838f664(param_1);
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = 0;
  }
  return uVar1 ^ 1;
}



/* Entry: 10838f648; end: 10838f663;  */

void FUN_10838f648(void)

{
  func_0x000108390a10();
  return;
}



/* Entry: 10838f664; end: 10838f693;  */

void FUN_10838f664(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x10);
  if (1 < (long)piVar4 + 1U) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}



/* Entry: 10838f694; end: 10838f777;  */

long FUN_10838f694(long param_1,int param_2,int param_3)

{
  if (param_2 < 1 || param_3 < 2) {
    return 0;
  }
  func_0x00010838f6d0();
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0xc) = param_3;
  }
  return param_1;
}



/* Entry: 10838f778; end: 10838f7eb;  */

undefined8
FUN_10838f778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x00010838f5bc(auStack_48,param_3);
  FUN_10838fa18(param_2,auStack_48,param_4,param_1);
  FUN_10838f664(auStack_48);
  return param_2;
}



/* Entry: 10838f7ec; end: 10838f85b;  */

int * FUN_10838f7ec(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = param_1;
  if (1 < *param_1) {
    piVar4 = (int *)(ulong)(uint)param_1[1];
    FUN_10838f694(piVar4,param_1[2],param_1[3]);
    _memcpy(piVar4 + 4,param_1 + 4,(long)param_1[1] << 2);
    do {
      iVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(param_1);
    }
  }
  return piVar4;
}



/* Entry: 10838f85c; end: 10838f8d3;  */

void FUN_10838f85c(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  iVar4 = 0;
  iVar5 = 0;
  param_2[1] = *(int *)(param_1 + 0x10);
  iVar6 = -0x7fffffff;
  iVar9 = 0x7fffffff;
  piVar3 = (int *)(param_1 + 0x14);
  do {
    piVar7 = piVar3;
    piVar8 = piVar7 + 2;
    uVar1 = piVar7[1];
    if (0 < (int)uVar1) {
      if (*piVar8 <= iVar9) {
        iVar9 = *piVar8;
      }
      piVar8 = piVar8 + (ulong)uVar1 * 2;
      if (iVar6 <= piVar8[-1]) {
        iVar6 = piVar8[-1];
      }
      iVar4 = uVar1 + iVar4;
    }
    iVar5 = iVar5 + 1;
    piVar3 = piVar8 + 1;
  } while (piVar8[1] != 0x7fffffff);
  iVar2 = *piVar7;
  *(int *)(param_1 + 8) = iVar5;
  *(int *)(param_1 + 0xc) = iVar4;
  *param_2 = iVar9;
  param_2[2] = iVar6;
  param_2[3] = iVar2;
  return;
}



/* Entry: 10838f8d4; end: 10838f937;  */

void FUN_10838f8d4(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = param_1;
  FUN_10838f938();
  if (((int)lVar2 != 0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
    func_0x00010838f974(lVar2,param_3);
    piVar3 = (int *)(lVar2 + 0xc);
    do {
      if (param_2 < piVar3[-1]) {
        return;
      }
      iVar1 = *piVar3;
      piVar3 = piVar3 + 2;
    } while (iVar1 <= param_2);
  }
  return;
}



/* Entry: 10838f938; end: 10838f997;  */

bool FUN_10838f938(int *param_1,int param_2,int param_3)

{
  if (((*param_1 <= param_2) && (param_2 < param_1[2])) && (param_1[1] <= param_3)) {
    return param_3 < param_1[3];
  }
  return false;
}



/* Entry: 10838f998; end: 10838fa17;  */

void FUN_10838f998(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  
  lVar2 = param_1;
  func_0x000108219544();
  if (((int)lVar2 != 0) && (piVar3 = *(int **)(param_1 + 0x10), piVar3 != (int *)0x0)) {
    func_0x00010838f974(piVar3,param_2[1]);
    while( true ) {
      piVar4 = piVar3 + 3;
      do {
        if (*param_2 < piVar4[-1]) {
          return;
        }
        iVar1 = *piVar4;
        piVar4 = piVar4 + 2;
      } while (iVar1 < param_2[2]);
      if (param_2[3] <= *piVar3) break;
      piVar3 = piVar3 + (long)piVar3[1] * 2 + 3;
    }
  }
  return;
}



/* Entry: 10838fa18; end: 10838ff87;  */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_10838fa18(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int *piVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  uint uStack_51c;
  uint auStack_510 [256];
  undefined8 uStack_110;
  undefined4 uStack_108;
  uint *puStack_100;
  uint uStack_f8;
  undefined1 auStack_f4 [4];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint auStack_e0 [2];
  uint *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  uint uStack_c0;
  undefined1 auStack_b8 [28];
  undefined1 auStack_9c [28];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = (uint)param_3;
  puVar10 = param_1;
  puVar14 = param_2;
  puVar18 = param_2;
  if (uVar15 == 4) {
    lVar20 = *(long *)(param_2 + 4);
    lVar17 = *(long *)(param_1 + 4);
    param_2 = param_1;
joined_r0x00010838fa98:
    uVar9 = lVar20 == -1;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if ((bool)uVar9) goto LAB_10838fdbc;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (lVar17 == -1) {
LAB_10838fb28:
      FUN_10839097c();
      if ((bool)uVar9) goto LAB_10838fb38;
      goto LAB_10838ff70;
    }
    uStack_e8 = 0;
    uStack_f0 = 0;
    puVar10 = puVar18;
    puVar14 = param_2;
    FUN_10821a044();
    if (((ulong)puVar10 & 1) == 0) goto LAB_10838fb28;
    if ((lVar17 == 0) &&
       (puVar10 = param_2, puVar14 = puVar18, func_0x000108313590(), (int)puVar10 != 0))
    goto LAB_10838fdbc;
    lVar17 = 0;
    param_1 = puVar18;
LAB_10838fba0:
    FUN_10838ff88(param_1,auStack_9c,auStack_f4);
    param_3 = &uStack_f8;
    FUN_10838ff88(param_2,auStack_b8);
    puStack_100 = auStack_510;
    uStack_110 = 0;
    uStack_108 = 0x100;
    uStack_78 = 0x7fffffff;
    uStack_80 = 0;
    puVar18 = (uint *)((ulong)&uStack_80 | 8);
    uVar15 = *param_1;
    puVar14 = (uint *)(ulong)uVar15;
    uVar23 = param_1[1];
    uVar22 = *param_2;
    param_1 = param_1 + 3;
    uStack_c0 = uVar22;
    if ((int)uVar15 <= (int)uVar22) {
      uStack_c0 = uVar15;
    }
    auStack_e0[0]._0_2_ = *(undefined2 *)(&UNK_10df1e3d0 + lVar17 * 2);
    uStack_d0 = 0x100000000;
    lStack_c8 = 0;
    puVar10 = (uint *)0x7fffffff;
    puStack_d8 = puStack_100;
    uVar15 = param_2[1];
    puVar11 = param_2;
    while (uVar24 = uVar15, uVar23 != 0x7fffffff || uVar24 != 0x7fffffff) {
      uVar13 = (uint)puVar14;
      uVar15 = uVar23;
      param_3 = param_1;
      uStack_51c = uVar13;
      if ((int)uVar13 < (int)uVar22) {
        if ((int)uVar22 < (int)uVar23) {
          uVar15 = uVar22;
          uStack_51c = uVar22;
        }
        bVar5 = (int)uVar23 <= (int)uVar22;
        bVar8 = false;
      }
      else {
        uVar6 = uVar23;
        if ((int)uVar24 < (int)uVar23) {
          uVar15 = 0;
          uVar6 = uVar22;
        }
        if ((int)uVar24 <= (int)uVar23) {
          uVar15 = uVar24;
          uStack_51c = uVar24;
        }
        uVar2 = uVar24;
        uVar7 = uVar22;
        if ((int)uVar13 < (int)uVar24) {
          uVar2 = uVar13;
          uVar7 = uVar13;
        }
        uVar3 = uVar13;
        if ((int)uVar22 < (int)uVar13) {
          uVar3 = uVar22;
          uStack_51c = uVar13;
        }
        puVar14 = (uint *)(ulong)uVar3;
        bVar5 = (int)uVar22 < (int)uVar13;
        uVar22 = uVar6;
        uVar6 = uVar23;
        if (bVar5) {
          param_3 = puVar18;
          uVar15 = uVar2;
          uVar22 = uVar7;
          uVar6 = uVar13;
        }
        bVar8 = (int)uVar24 <= (int)uVar6;
        bVar5 = !bVar5 && (int)uVar23 <= (int)uVar24;
      }
      puVar21 = (uint *)(ulong)uVar15;
      uVar9 = (int)puVar14 == (int)puVar10;
      if ((int)puVar10 < (int)puVar14) {
        func_0x000108390660(auStack_e0,puVar14,puVar18,puVar18);
      }
      param_2 = auStack_e0;
      puVar14 = puVar21;
      func_0x000108390660();
      if ((param_4 == (uint *)0x0) && (lStack_c8 != 0)) goto LAB_10838ff24;
      uVar15 = uVar23;
      if (bVar5) {
        uVar15 = param_1[(long)(int)param_1[-1] * 2 + 1];
        param_1 = param_1 + (long)(int)param_1[-1] * 2 + 3;
        uStack_51c = uVar15;
        if (uVar15 != 0x7fffffff) {
          uStack_51c = uVar23;
        }
      }
      uVar23 = uVar15;
      puVar14 = (uint *)(ulong)uStack_51c;
      puVar10 = puVar21;
      uVar15 = uVar24;
      if (bVar8) {
        param_2 = puVar11 + (long)(int)puVar11[2] * 2 + 3;
        uVar15 = param_2[1];
        uVar22 = uVar15;
        puVar11 = param_2;
        if (uVar15 != 0x7fffffff) {
          uVar22 = uVar24;
        }
      }
    }
    lVar17 = *(long *)(puStack_d8 + 0x104);
    *(uint *)(lVar17 + (long)(int)uStack_d0 * 4) = uStack_c0;
    iVar1 = uStack_d0._4_4_ + (int)lStack_c8;
    *(undefined4 *)(lVar17 + (long)iVar1 * 4) = 0x7fffffff;
    uVar15 = (iVar1 - (int)uStack_d0) + 1;
    uVar19 = (ulong)uVar15;
    if (param_4 == (uint *)0x0) {
      uVar9 = uVar15 == 2;
      puVar18 = (uint *)(ulong)(uVar15 == 0xffffffff || 2 < (int)uVar15);
    }
    else {
      uVar9 = uVar15 == 2;
      if ((int)uVar15 < 3) {
LAB_10838fe04:
        func_0x00010838f750();
        param_2 = param_4;
        puVar18 = (uint *)0x0;
      }
      else {
        puVar18 = puStack_100;
        if (7 < uVar15) {
          puVar14 = puStack_100 + uVar19;
          puVar10 = puStack_100 + 3;
          if (*puVar10 == 0x7fffffff) {
            puStack_100[3] = puStack_100[1];
            puVar18 = puVar10;
          }
          if (puVar14[-5] == 0x7fffffff) {
            puVar14[-4] = 0x7fffffff;
            puVar14 = puVar14 + -3;
          }
          uVar19 = (ulong)((long)puVar14 - (long)puVar18) >> 2;
        }
        uVar9 = (int)uVar19 == 7;
        puVar14 = param_4;
        if ((bool)uVar9) {
          uVar22 = puVar18[4];
          uVar15 = *puVar18;
          uVar23 = puVar18[1];
          *param_4 = puVar18[3];
          param_4[1] = uVar15;
          param_4[2] = uVar22;
          param_4[3] = uVar23;
          FUN_10838f5dc();
          param_2 = param_4;
          puVar18 = param_4;
        }
        else {
          uVar12 = *(ulong *)(param_4 + 4);
          uVar9 = uVar12 + 1 == 2;
          if ((uVar12 + 1 < 2) || (uVar9 = *(int *)(uVar12 + 4) == (int)uVar19, !(bool)uVar9)) {
            FUN_10838f664(param_4);
            uVar12 = uVar19;
            func_0x00010838f6d0();
            *(ulong *)(param_4 + 4) = uVar12;
          }
          FUN_10838f7ec();
          *(ulong *)(param_4 + 4) = uVar12;
          param_3 = (uint *)(-(uVar19 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar19 & 0xffffffff) << 2
                            );
          _memcpy(uVar12 + 0x10,puVar18);
          FUN_10838f85c(*(undefined8 *)(param_4 + 4));
          param_2 = param_4;
          FUN_10821a6d8();
          if ((int)param_2 != 0) goto LAB_10838fe04;
LAB_10838ff24:
          puVar18 = (uint *)0x1;
        }
      }
    }
    func_0x0001083909cc();
    param_4 = param_2;
  }
  else {
    uVar9 = 1;
    if (uVar15 == 5) goto code_r0x00010838fa64;
    uStack_f0 = 0;
    uStack_e8 = 0;
    lVar17 = *(long *)(param_2 + 4);
    uVar9 = uVar15 == 3;
    if (uVar15 < 4) {
      lVar20 = *(long *)(param_1 + 4);
      switch((ulong)param_3 & 0xffffffff) {
      case 0:
        puVar18 = param_1;
        goto joined_r0x00010838fa98;
      case 1:
        uVar9 = lVar20 == -1 || lVar17 == -1;
        if (lVar20 != -1 && lVar17 != -1) {
          puVar10 = (uint *)&uStack_f0;
          puVar14 = param_1;
          param_3 = param_2;
          FUN_10838ea90();
          if (((ulong)puVar10 & 1) != 0) {
            if (lVar20 != 0 || lVar17 != 0) {
              if ((lVar20 != 0) || (func_0x0001083909fc(), (int)puVar10 == 0)) {
                if ((lVar17 == 0) && (func_0x0001083909c0(), (int)puVar10 != 0))
                goto code_r0x00010838feb0;
                lVar17 = 1;
                goto LAB_10838fba0;
              }
              break;
            }
            if (param_4 == (uint *)0x0) {
              param_4 = (uint *)&uStack_f0;
              FUN_10821a6d8();
              puVar18 = (uint *)(ulong)((uint)param_4 ^ 1);
            }
            else {
              puVar14 = (uint *)&uStack_f0;
              FUN_10838f5dc();
              puVar18 = param_4;
            }
            goto LAB_10838ff2c;
          }
        }
LAB_10838fdbc:
        func_0x0001083901e0();
        param_1 = param_4;
        goto LAB_10838fdc4;
      case 2:
        uVar9 = lVar20 == -1;
        if (!(bool)uVar9) {
          uVar9 = lVar17 == -1;
          if (((bool)uVar9) || ((lVar20 == 0 && (func_0x0001083909fc(), (int)puVar10 != 0)))) {
code_r0x00010838feb0:
            FUN_10839097c();
            puVar18 = param_1;
            if ((bool)uVar9) goto LAB_10838fb38;
            goto LAB_10838ff70;
          }
          if ((lVar17 != 0) || (func_0x0001083909c0(), (int)puVar10 == 0)) {
            lVar17 = 2;
            goto LAB_10838fba0;
          }
        }
        break;
      case 3:
        uVar9 = lVar20 == -1;
        if (!(bool)uVar9) {
          uVar9 = 1;
          if (lVar17 == -1) goto code_r0x00010838feb0;
          lVar17 = 3;
          goto LAB_10838fba0;
        }
      }
code_r0x00010838fa64:
      FUN_10839097c();
      if ((bool)uVar9) {
LAB_10838fb38:
        if (param_4 == (uint *)0x0) {
          return (uint *)(ulong)(*(long *)(puVar18 + 4) != -1);
        }
        if (param_4 != puVar18) {
          FUN_10838f664(param_4);
          uVar25 = *(undefined8 *)puVar18;
          *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar18 + 2);
          *(undefined8 *)param_4 = uVar25;
          piVar16 = *(int **)(puVar18 + 4);
          *(int **)(param_4 + 4) = piVar16;
          if (1 < (long)piVar16 + 1U) {
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar5) {
                *piVar16 = *piVar16 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        return (uint *)(ulong)(*(long *)(param_4 + 4) != -1);
      }
      goto LAB_10838ff70;
    }
LAB_10838fdc4:
    param_4 = param_1;
    puVar18 = (uint *)0x0;
  }
LAB_10838ff2c:
  FUN_10839097c();
  puVar10 = param_4;
  if ((bool)uVar9) {
    return puVar18;
  }
LAB_10838ff70:
  ___stack_chk_fail();
  func_0x0001083909cc();
  func_0x0001083909b8();
  lVar17 = *(long *)(puVar10 + 4);
  if (lVar17 == 0) {
    *puVar14 = puVar10[1];
    uVar15 = 1;
    puVar14[1] = puVar10[3];
    puVar14[2] = 1;
    puVar14[3] = *puVar10;
    puVar14[4] = puVar10[2];
    puVar14[5] = 0x7fffffff;
    puVar14[6] = 0x7fffffff;
  }
  else if (lVar17 == -1) {
    uVar15 = 0;
    *puVar14 = 0x7fffffff;
  }
  else {
    puVar14 = (uint *)(lVar17 + 0x10);
    uVar15 = *(uint *)(lVar17 + 0xc);
  }
  *param_3 = uVar15;
  return puVar14;
}



/* Entry: 10838ff88; end: 10838ffeb;  */

undefined4 * FUN_10838ff88(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 4);
  if (lVar2 == 0) {
    *param_2 = param_1[1];
    uVar1 = 1;
    param_2[1] = param_1[3];
    param_2[2] = 1;
    param_2[3] = *param_1;
    param_2[4] = param_1[2];
    *(undefined8 *)(param_2 + 5) = 0x7fffffff7fffffff;
  }
  else if (lVar2 == -1) {
    uVar1 = 0;
    *param_2 = 0x7fffffff;
  }
  else {
    param_2 = (undefined4 *)(lVar2 + 0x10);
    uVar1 = *(undefined4 *)(lVar2 + 0xc);
  }
  *param_3 = uVar1;
  return param_2;
}



/* Entry: 10838ffec; end: 10839018f;  */

uint * FUN_10838ffec(uint *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long lVar8;
  uint *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (param_4 != (uint *)0x0) {
    lVar8 = *(long *)(param_1 + 4);
    if (lVar8 == -1) {
      func_0x000108390a10(param_4);
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0xffffffffffffffff;
      return (uint *)0x0;
    }
    uVar1 = (ulong)*param_1;
    FUN_108390190(uVar1,param_1[2],param_2);
    uVar2 = (ulong)param_1[1];
    FUN_108390190(uVar2,param_1[3],param_3);
    if (lVar8 == 0) {
      FUN_108287534(param_1,uVar1,uVar2);
      puStack_60 = param_1;
      uStack_58 = uVar1;
      FUN_10838f5dc(param_4,&puStack_60);
      param_1 = param_4;
    }
    else {
      if (param_1 == param_4) {
        uVar4 = *(undefined8 *)(param_4 + 4);
        FUN_10838f7ec();
        *(undefined8 *)(param_4 + 4) = uVar4;
      }
      else {
        puStack_60 = (uint *)0x0;
        uStack_58 = 0;
        uStack_50 = 0xffffffffffffffff;
        uVar3 = (ulong)*(uint *)(lVar8 + 4);
        FUN_10838f694(uVar3,*(undefined4 *)(lVar8 + 8),*(undefined4 *)(lVar8 + 0xc));
        uStack_58 = *(ulong *)(param_4 + 2);
        puStack_60 = *(uint **)param_4;
        uVar4 = *(undefined8 *)param_1;
        *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_4 = uVar4;
        uStack_50 = *(undefined8 *)(param_4 + 4);
        *(ulong *)(param_4 + 4) = uVar3;
        FUN_10838f664(&puStack_60);
      }
      puVar5 = param_4;
      FUN_10821a06c(param_4,uVar1,uVar2);
      piVar6 = (int *)(*(long *)(param_1 + 4) + 0x14);
      piVar7 = (int *)(*(long *)(param_4 + 4) + 0x14);
      *(int *)(*(long *)(param_4 + 4) + 0x10) = *(int *)(*(long *)(param_1 + 4) + 0x10) + (int)uVar2
      ;
      while (*piVar6 != 0x7fffffff) {
        *piVar7 = *piVar6 + (int)uVar2;
        piVar7[1] = piVar6[1];
        piVar7 = piVar7 + 3;
        for (piVar6 = piVar6 + 3; piVar6[-1] != 0x7fffffff; piVar6 = piVar6 + 2) {
          piVar7[-1] = piVar6[-1] + (int)uVar1;
          *piVar7 = *piVar6 + (int)uVar1;
          piVar7 = piVar7 + 2;
        }
        piVar7[-1] = 0x7fffffff;
      }
      *piVar7 = 0x7fffffff;
      param_1 = puVar5;
    }
  }
  return param_1;
}



/* Entry: 108390190; end: 1083901eb;  */

uint FUN_108390190(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000 - param_1;
  if (-0x80000001 < (long)(int)param_3 + (long)param_1) {
    uVar1 = param_3;
  }
  uVar2 = param_2 ^ 0x7fffffff;
  if ((long)(int)uVar1 + (long)(int)param_2 < 0x80000000) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1083901ec; end: 1083902c3;  */

long FUN_1083901ec(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puStack_28;
  undefined4 *puStack_20;
  undefined8 uStack_18;
  
  if (param_2 != (undefined4 *)0x0) {
    uStack_18 = 0;
    lVar1 = param_1[2];
    if (lVar1 == 0) {
      *param_2 = 0;
      uVar2 = *param_1;
      *(undefined8 *)(param_2 + 3) = param_1[1];
      *(undefined8 *)(param_2 + 1) = uVar2;
      puStack_20 = param_2 + 5;
    }
    else if (lVar1 == -1) {
      puStack_20 = param_2 + 1;
      *param_2 = 0xffffffff;
    }
    else {
      *param_2 = *(undefined4 *)(lVar1 + 4);
      uVar2 = *param_1;
      *(undefined8 *)(param_2 + 3) = param_1[1];
      *(undefined8 *)(param_2 + 1) = uVar2;
      param_2[5] = *(undefined4 *)(param_1[2] + 8);
      param_2[6] = *(undefined4 *)(param_1[2] + 0xc);
      puStack_20 = param_2 + 7;
      puStack_28 = param_2;
      FUN_10837f3cc(&puStack_28,param_1[2] + 0x10,(long)*(int *)(param_1[2] + 4) << 2);
      param_2 = puStack_28;
    }
    return (long)puStack_20 - (long)param_2;
  }
  lVar1 = param_1[2];
  if (lVar1 != -1) {
    if (lVar1 == 0) {
      return 0x14;
    }
    return (long)*(int *)(lVar1 + 4) * 4 + 0x1c;
  }
  return 4;
}



/* Entry: 1083902c4; end: 1083902e7;  */

long FUN_1083902c4(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1083902e8();
  return param_1;
}



/* Entry: 1083902e8; end: 1083903cf;  */

void FUN_1083902e8(long *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  *param_1 = (long)param_2;
  lVar4 = param_2[2];
  if (lVar4 == -1) {
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  if (lVar4 != 0) {
    uVar2 = *(undefined4 *)(lVar4 + 0x20);
    uVar1 = *(undefined4 *)(lVar4 + 0x10);
    uVar3 = *(undefined4 *)(lVar4 + 0x14);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar4 + 0x1c);
    *(undefined4 *)((long)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
    param_1[1] = lVar4 + 0x24;
    return;
  }
  lVar4 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = lVar4;
  param_1[1] = 0;
  return;
}



/* Entry: 1083903d0; end: 108390453;  */

long FUN_1083903d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  FUN_1083902c4();
  uVar5 = param_3[1];
  uVar4 = *param_3;
  puVar3 = (undefined8 *)(lVar1 + 0x38);
  *puVar3 = 0;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined1 *)(lVar1 + 0x48) = 1;
  while( true ) {
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      return param_1;
    }
    if (*(int *)((long)param_3 + 0xc) <= *(int *)(param_1 + 0x14)) break;
    puVar2 = puVar3;
    FUN_10838ea90(puVar3,param_3,lVar1 + 0x10);
    if ((int)puVar2 != 0) {
      *(undefined1 *)(param_1 + 0x48) = 0;
      return param_1;
    }
    func_0x000108390338(param_1);
  }
  return param_1;
}



/* Entry: 108390454; end: 1083904b7;  */

void FUN_108390454(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    do {
      func_0x000108390338(param_1);
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x14)) {
        return;
      }
      lVar1 = param_1 + 0x38;
      FUN_10838ea90(lVar1,param_1 + 0x28,param_1 + 0x10);
    } while ((int)lVar1 == 0);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 1083904b8; end: 10839056f;  */

undefined8 *
FUN_1083904b8(undefined8 *param_1,int *param_2,undefined8 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  *(undefined1 *)(param_1 + 2) = 1;
  piVar4 = *(int **)(param_2 + 4);
  if ((((piVar4 != (int *)0xffffffffffffffff && param_2[1] <= (int)param_3) &&
        (int)param_3 < param_2[3]) && (iVar2 = *param_2, iVar2 < param_5)) &&
     (iVar3 = param_2[2], param_4 < iVar3)) {
    if (piVar4 == (int *)0x0) {
      if (param_4 <= iVar2) {
        param_4 = iVar2;
      }
      if (iVar3 <= param_5) {
        param_5 = iVar3;
      }
      *(int *)(param_1 + 1) = param_4;
      *(int *)((long)param_1 + 0xc) = param_5;
      *param_1 = 0;
    }
    else {
      func_0x00010838f974(piVar4,param_3);
      do {
        piVar5 = piVar4 + 2;
        if (param_5 <= *piVar5) {
          return param_1;
        }
        piVar1 = piVar4 + 3;
        piVar4 = piVar5;
      } while (*piVar1 <= param_4);
      *param_1 = piVar5;
      *(int *)(param_1 + 1) = param_4;
      *(int *)((long)param_1 + 0xc) = param_5;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return param_1;
}



/* Entry: 108390570; end: 108390907;  */

void FUN_108390570(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != -1) {
    if (lVar3 == 0) {
      if (*(long **)(param_2 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010839096c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_2 + 0x18) + 0x30))();
        return;
      }
      func_0x000104bfeb48(0,param_1);
      return;
    }
    piVar4 = (int *)(lVar3 + 0x10);
    iVar6 = *piVar4;
    iVar5 = *(int *)(lVar3 + 0x14);
    do {
      uVar1 = piVar4[2];
      if (uVar1 == 1) {
        func_0x0001083909f0();
        piVar4 = piVar4 + 5;
      }
      else {
        piVar4 = piVar4 + 3;
        if (1 < (int)uVar1) {
          while (iVar6 < iVar5) {
            iVar6 = iVar6 + 1;
            uVar7 = (ulong)uVar1;
            uVar2 = uVar1;
            while (uVar2 != 0) {
              func_0x0001083909f0();
              uVar2 = (int)uVar7 - 1;
              uVar7 = (ulong)uVar2;
            }
          }
          piVar4 = piVar4 + (ulong)uVar1 * 2;
        }
      }
      iVar6 = iVar5;
      iVar5 = piVar4[1];
    } while (piVar4[1] != 0x7fffffff);
  }
  return;
}



/* Entry: 108390908; end: 108390937;  */

int FUN_108390908(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -2;
  do {
    iVar1 = *param_1;
    iVar2 = iVar2 + 2;
    param_1 = param_1 + 2;
  } while (iVar1 != 0x7fffffff);
  return iVar2;
}



/* Entry: 108390938; end: 10839095b;  */

undefined8 FUN_108390938(undefined8 param_1)

{
  func_0x000108390928(param_1,0);
  return param_1;
}



/* Entry: 10839095c; end: 10839097b;  */

void FUN_10839095c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010839096c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 10839097c; end: 108390a2b;  */

void FUN_10839097c(void)

{
  return;
}



/* Entry: 108390a2c; end: 108390a5f;  */

undefined8 * FUN_108390a2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3f9f0;
  _free(param_1[3]);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 108390a60; end: 108390a63;  */

undefined8 * FUN_108390a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3f9f0;
  _free(param_1[3]);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 108390a64; end: 108390a77;  */

void FUN_108390a64(void)

{
  FUN_108390a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108390a78; end: 108390b4f;  */

void FUN_108390a78(ulong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 == (int *)0x0) {
    *(int *)(param_1 + 0x38) = param_3;
    piVar3 = *(int **)(param_1 + 0x18);
LAB_108390af8:
    *(int **)(param_1 + 0x20) = piVar3;
  }
  else {
    iVar1 = *piVar3;
    piVar4 = *(int **)(param_1 + 0x30);
    if (param_3 <= iVar1) goto LAB_108390b08;
    func_0x0001083919d0();
    uVar2 = param_1;
    FUN_108390b50();
    piVar4 = *(int **)(param_1 + 0x20);
    if ((uVar2 & 1) == 0) {
      *(int **)(param_1 + 0x28) = piVar4;
      piVar4 = piVar4 + (long)piVar4[1] + 3;
      *(int **)(param_1 + 0x20) = piVar4;
    }
    piVar3 = piVar4;
    if (iVar1 < param_3 + -1) {
      piVar3 = piVar4 + 3;
      *piVar4 = param_3 + -1;
      piVar4[1] = 0;
      goto LAB_108390af8;
    }
  }
  piVar4 = piVar3 + 2;
  *piVar3 = param_3;
  *(int **)(param_1 + 0x30) = piVar4;
LAB_108390b08:
  if ((piVar3 + 2 < piVar4) && (piVar4[-1] == param_2)) {
    piVar4[-1] = param_4 + param_2;
  }
  else {
    *piVar4 = param_2;
    piVar4[1] = param_4 + param_2;
    *(int **)(param_1 + 0x30) = piVar4 + 2;
  }
  return;
}



/* Entry: 108390b50; end: 108390bcb;  */

undefined8 FUN_108390b50(long param_1)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 != (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x20);
    if (*piVar3 + 1 == *piVar4) {
      uVar1 = piVar3[1];
      if (uVar1 == piVar4[1]) {
        uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
        lVar2 = 2;
        do {
          lVar6 = lVar2;
          if (lVar6 - uVar5 == 2) goto LAB_108390bb0;
          lVar2 = lVar6 + 1;
        } while (piVar3[lVar6] == piVar4[lVar6]);
        uVar5 = lVar6 - 2;
LAB_108390bb0:
        if ((long)(int)uVar1 <= (long)uVar5) {
          *piVar3 = *piVar3 + 1;
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 108390bcc; end: 108391273;  */

undefined *******
FUN_108390bcc(undefined *******param_1,undefined *******param_2,undefined ******param_3)

{
  undefined1 *puVar1;
  float *pfVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined *******pppppppuVar10;
  undefined8 *puVar11;
  undefined *******pppppppuVar12;
  undefined ******ppppppuVar13;
  uint uVar14;
  char cVar15;
  int iVar16;
  long lVar17;
  int *piVar18;
  undefined ******ppppppuVar19;
  ulong uVar20;
  uint uVar21;
  undefined *******unaff_x19;
  int *unaff_x20;
  uint uVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined ******ppppppuVar29;
  float fVar30;
  undefined *****pppppuStack_170;
  long lStack_168;
  undefined ******ppppppuStack_160;
  undefined *****pppppuStack_158;
  undefined ****ppppuStack_150;
  long lStack_148;
  undefined ******ppppppuStack_140;
  undefined ******ppppppuStack_138;
  undefined8 uStack_130;
  undefined2 uStack_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined ******ppppppuStack_e0;
  undefined ******ppppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *****pppppuStack_a0;
  undefined8 uStack_88;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_3[2] == (undefined *****)0xffffffffffffffff;
  pppppuStack_170 = (undefined *****)param_3;
  ppppppuStack_160 = (undefined ******)param_1;
  if ((((bool)uVar9) ||
      (param_1 = param_2, pppppppuVar10 = param_2, func_0x000108377398(), (int)param_1 == 0)) ||
     (*(int *)(*param_2 + 9) == 0)) {
    uVar14 = (uint)*(byte *)((long)param_2 + 0xe);
    func_0x000108391980(uStack_88);
    pppppppuVar10 = (undefined *******)ppppppuStack_160;
    ppppppuVar19 = (undefined ******)pppppuStack_170;
    if ((bool)uVar9) goto code_r0x000108391274;
  }
  else {
    uStack_c8 = (undefined *****)pppppuStack_170[1];
    uStack_d0 = (undefined *****)*pppppuStack_170;
    uVar9 = (long)pppppuStack_170[2] + 1U == 2;
    if ((long)pppppuStack_170[2] + 1U < 2) {
      iVar16 = (int)&uStack_d0;
      FUN_10839eca4();
      if (iVar16 == 0) {
        uVar22 = 0;
        ppppppuVar19 = *param_2;
        pppppuStack_158 = ppppppuVar19[5];
        ppppuStack_150 = (undefined ****)ppppppuVar19[8];
        lStack_148 = (long)ppppuStack_150 + (long)*(int *)(ppppppuVar19 + 9);
        ppppppuStack_140 = (undefined ******)(undefined *******)0x0;
        if (ppppppuVar19[0xb] != (undefined *****)0x0) {
          ppppppuStack_140 = (undefined ******)((long)ppppppuVar19[0xb] - 4);
        }
        ppppppuStack_138 = (undefined ******)0x0;
        uStack_130 = 0;
        uStack_128 = 1;
        unaff_x20 = (int *)&UNK_10df1e3ff;
        fVar28 = 32767.0;
        fVar27 = -32767.0;
        while( true ) {
          fVar26 = fVar27;
          fVar30 = fVar28;
          pppppppuVar10 = (undefined *******)&pppppuStack_158;
          uVar14 = 0;
          FUN_108379cc8();
          uVar9 = (int)pppppppuVar10 == 6;
          if ((bool)uVar9) break;
          uVar22 = uVar22 + (byte)(&UNK_10df1e3ff)[(ulong)pppppppuVar10 & 0xffffffff];
          if (((ulong)pppppppuVar10 & 0xffffffff) - 5 < 0xfffffffffffffffc) {
            fVar28 = fVar30;
            fVar27 = fVar26;
            if ((((int)pppppppuVar10 == 0) && (fVar28 = uStack_b0._4_4_, fVar30 <= uStack_b0._4_4_))
               && (fVar28 = fVar30, fVar27 = uStack_b0._4_4_, uStack_b0._4_4_ <= fVar26)) {
              fVar27 = fVar26;
            }
          }
          else {
            pfVar2 = (float *)((long)&uStack_a8 + 4);
            for (uVar20 = (ulong)(byte)(&UNK_10df1e3ff)[(ulong)pppppppuVar10 & 0xffffffff];
                fVar28 = fVar30, fVar27 = fVar26, uVar20 != 0; uVar20 = uVar20 - 1) {
              fVar27 = *pfVar2;
              fVar28 = fVar27;
              if ((fVar27 < fVar30) || (fVar28 = fVar30, fVar27 <= fVar26)) {
                fVar27 = fVar26;
                fVar30 = fVar28;
              }
              pfVar2 = pfVar2 + 2;
              fVar26 = fVar27;
            }
          }
        }
        param_1 = (undefined *******)ppppppuStack_160;
        param_3 = (undefined ******)pppppuStack_170;
        if (uVar22 == 0) {
          uVar14 = (uint)*(byte *)((long)param_2 + 0xe);
          FUN_108391274(ppppppuStack_160,*(byte *)((long)param_2 + 0xe),pppppuStack_170);
          pppppppuVar10 = param_1;
        }
        else {
          fVar28 = (float)NEON_fminnm((float)(double)(long)(fVar30 + 0.5),0x4effffff);
          if (fVar28 <= -2.1474835e+09) {
            fVar28 = -2.1474835e+09;
          }
          fVar27 = (float)NEON_fminnm((float)(double)(long)(fVar26 + 0.5),0x4effffff);
          if (fVar27 <= -2.1474835e+09) {
            fVar27 = -2.1474835e+09;
          }
          if ((undefined *****)pppppuStack_170[2] == (undefined *****)0x0) {
            uVar21 = 2;
          }
          else {
            uVar21 = *(int *)((long)pppppuStack_170[2] + 0xc) << 1;
          }
          iVar16 = *(int *)((long)pppppuStack_170 + 4);
          if (*(int *)((long)pppppuStack_170 + 4) <= (int)fVar28) {
            iVar16 = (int)fVar28;
          }
          iVar5 = *(int *)((long)pppppuStack_170 + 0xc);
          if ((int)fVar27 <= *(int *)((long)pppppuStack_170 + 0xc)) {
            iVar5 = (int)fVar27;
          }
          uVar7 = iVar5 - iVar16;
          uVar9 = uVar7 == 0;
          if ((bool)uVar9 || iVar5 < iVar16) {
            uVar14 = (uint)*(byte *)((long)param_2 + 0xe);
            FUN_108391274();
            pppppppuVar10 = param_1;
          }
          else {
            pppppuStack_158 = (undefined *****)&PTR_FUN_110a3f9f0;
            ppppuStack_150 = (undefined ****)0x0;
            lStack_148 = 0;
            ppppppuStack_140 = (undefined ******)0x0;
            uVar9 = uVar22 == uVar21;
            if ((int)uVar22 <= (int)uVar21) {
              uVar22 = uVar21;
            }
            param_3 = (undefined ******)(ulong)uVar22;
            if ((int)(uVar7 | uVar22) < 0) {
LAB_1083910d4:
              func_0x0001083919a4();
            }
            else {
              bVar6 = *(byte *)((long)param_2 + 0xe);
              uStack_b0 = (undefined ******)CONCAT71(uStack_b0._1_7_,1);
              if ((bVar6 >> 1 & 1) != 0) {
                if ((int)uVar22 < 0x7ffffffe) {
                  param_3 = (undefined ******)(ulong)(uVar22 + 2);
                }
                else {
                  uStack_b0 = (undefined ******)((ulong)uStack_b0._1_7_ << 8);
                }
              }
              uVar9 = uVar7 == 0x7fffffff;
              if ((bool)uVar9) {
                uStack_b0 = (undefined ******)((ulong)uStack_b0 & 0xffffffffffffff00);
                lVar17 = 0x7fffffff;
              }
              else {
                lVar17 = (long)(int)(uVar7 + 1);
              }
              puVar11 = &uStack_b0;
              FUN_1082e91c4(puVar11,3,param_3);
              param_3 = (undefined ******)(long)(int)puVar11;
              pppppppuVar12 = (undefined *******)&uStack_b0;
              func_0x000108154764(pppppppuVar12,lVar17,param_3);
              uVar14 = (uint)lVar17;
              cVar15 = (char)uStack_b0;
              if ((bVar6 >> 1 & 1) != 0) {
                bVar8 = pppppppuVar12 < (undefined *******)0xfffffffffffffff6;
                uVar9 = pppppppuVar12 == (undefined *******)0xfffffffffffffff6;
                pppppppuVar12 = (undefined *******)((long)pppppppuVar12 + 10);
                cVar15 = '\0';
                if (bVar8) {
                  cVar15 = (char)uStack_b0;
                }
                uStack_b0 = (undefined ******)CONCAT71(uStack_b0._1_7_,cVar15);
              }
              pppppppuVar10 = pppppppuVar12;
              if ((cVar15 == '\0') || ((ulong)pppppppuVar12 >> 0x1f != 0)) goto LAB_1083910d4;
              uStack_11c = SUB84(pppppppuVar12,0);
              uVar14 = 0;
              FUN_108410024();
              pppppppuVar10 = (undefined *******)0x0;
              ppppppuStack_140 = (undefined ******)pppppppuVar12;
              if (pppppppuVar12 == (undefined *******)0x0) goto LAB_1083910d4;
              ppppppuStack_138 = (undefined ******)0x0;
              uStack_130 = 0;
              param_3 = &pppppuStack_158;
              ppppppuVar19 = (undefined ******)pppppuStack_170;
              FUN_10839e610(param_2,pppppuStack_170,param_3);
              uVar14 = (uint)ppppppuVar19;
              if ((undefined *******)ppppppuStack_138 == (undefined *******)0x0) {
LAB_108391114:
                func_0x0001083919a4();
                pppppppuVar10 = param_2;
              }
              else {
                func_0x0001083919d0();
                param_2 = (undefined *******)&pppppuStack_158;
                FUN_108390b50();
                if (((ulong)param_2 & 1) == 0) {
                  ppppppuStack_138 =
                       (undefined ******)
                       ((long)ppppppuStack_138 +
                       (long)*(int *)((long)ppppppuStack_138 + 4) * 4 + 0xc);
                }
                else if ((undefined *******)ppppppuStack_138 == (undefined *******)0x0)
                goto LAB_108391114;
                iVar16 = (int)((ulong)((long)ppppppuStack_138 - (long)ppppppuStack_140) >> 2);
                uVar9 = iVar16 == 5;
                if ((bool)uVar9) {
                  iVar16 = *(int *)((long)ppppppuStack_140 + 0xc);
                  iVar5 = *(int *)ppppppuStack_140;
                  *(int *)ppppppuStack_160 = *(int *)(ppppppuStack_140 + 1);
                  *(int *)((long)ppppppuStack_160 + 4) = iStack_120;
                  *(int *)(ppppppuStack_160 + 1) = iVar16;
                  *(int *)((long)ppppppuStack_160 + 0xc) = iVar5 + 1;
                  pppppppuVar10 = (undefined *******)ppppppuStack_160;
                  FUN_10838f5dc();
                  uVar14 = (uint)pppppppuVar10;
                }
                else {
                  uVar9 = 1;
                  if (iVar16 == -2) goto LAB_108391114;
                  uStack_b0 = (undefined ******)0x0;
                  uStack_a8 = (undefined ******)0x0;
                  pppppuStack_a0 = (undefined *****)0xffffffffffffffff;
                  ppppppuVar13 = (undefined ******)(ulong)(iVar16 + 2);
                  func_0x00010838f6d0();
                  ppppppuVar19 = ppppppuStack_138;
                  piVar24 = (int *)((long)ppppppuVar13 + 0x14);
                  *(int *)(ppppppuVar13 + 2) = iStack_120;
                  pppppppuVar10 = (undefined *******)ppppppuStack_140;
                  pppppuStack_a0 = (undefined *****)ppppppuVar13;
                  do {
                    *piVar24 = *(int *)pppppppuVar10 + 1;
                    iVar16 = *(int *)((long)pppppppuVar10 + 4);
                    unaff_x20 = piVar24 + 2;
                    piVar24[1] = iVar16 >> 1;
                    if (iVar16 != 0) {
                      param_3 = (undefined ******)((long)iVar16 << 2);
                      _memcpy(unaff_x20,pppppppuVar10 + 1,param_3);
                      unaff_x20 = unaff_x20 + iVar16;
                    }
                    piVar24 = unaff_x20 + 1;
                    *unaff_x20 = 0x7fffffff;
                    pppppppuVar10 =
                         (undefined *******)
                         ((long)pppppppuVar10 + (long)*(int *)((long)pppppppuVar10 + 4) * 4 + 0xc);
                    uVar9 = pppppppuVar10 == (undefined *******)ppppppuVar19;
                  } while (pppppppuVar10 < ppppppuVar19);
                  *piVar24 = 0x7fffffff;
                  uVar14 = 0;
                  FUN_10838f85c(pppppuStack_a0);
                  ppppppuVar29 = (undefined ******)ppppppuStack_160[1];
                  ppppppuVar13 = (undefined ******)*ppppppuStack_160;
                  ppppppuStack_160[1] = (undefined *****)uStack_a8;
                  *ppppppuStack_160 = (undefined *****)uStack_b0;
                  ppppppuVar19 = (undefined ******)ppppppuStack_160[2];
                  ppppppuStack_160[2] = pppppuStack_a0;
                  uStack_b0 = ppppppuVar13;
                  uStack_a8 = ppppppuVar29;
                  pppppuStack_a0 = (undefined *****)ppppppuVar19;
                  func_0x0001083919b4();
                }
                pppppppuVar10 = (undefined *******)0x1;
              }
            }
            param_1 = (undefined *******)&pppppuStack_158;
            FUN_108390a2c();
          }
        }
      }
      else {
        param_1 = param_2;
        func_0x0001083773e0();
        func_0x00010812f180();
        ppppppuStack_e0 = (undefined ******)param_1;
        ppppppuStack_d8 = (undefined ******)pppppppuVar10;
        func_0x0001083919a4();
        lVar17 = (long)uStack_d0._4_4_;
        while( true ) {
          lVar23 = lVar17;
          uVar14 = (uint)pppppppuVar10;
          lVar17 = (long)uStack_c8._4_4_;
          uVar9 = lVar23 == lVar17;
          if (lVar17 <= lVar23) break;
          lStack_168 = lVar23 + 0x3fff;
          lVar3 = lStack_168;
          if (lVar17 <= lStack_168) {
            lVar3 = lVar17;
          }
          piVar24 = (int *)(long)(int)uStack_d0;
          lVar25 = -(long)piVar24;
          unaff_x20 = piVar24;
          while( true ) {
            unaff_x20 = (int *)((long)unaff_x20 + 0x3fff);
            piVar18 = (int *)(long)(int)uStack_c8;
            lVar17 = lStack_168;
            if ((long)piVar18 <= (long)piVar24) break;
            piVar4 = unaff_x20;
            if ((long)piVar18 <= (long)unaff_x20) {
              piVar4 = piVar18;
            }
            uStack_f0 = SUB84(piVar24,0);
            uStack_ec = (undefined4)lVar23;
            uStack_e8 = SUB84(piVar4,0);
            uStack_e4 = (undefined4)lVar3;
            param_1 = &ppppppuStack_e0;
            pppppppuVar10 = (undefined *******)0x0;
            FUN_10821a044();
            if ((int)param_1 != 0) {
              FUN_10821a06c(&uStack_f0,lVar25,-lVar23);
              uStack_b0 = (undefined ******)0x0;
              uStack_a8 = (undefined ******)0x0;
              pppppuStack_a0 = (undefined *****)0xffffffffffffffff;
              FUN_10814bdfc(&pppppuStack_158,(float)lVar25,(float)-lVar23);
              FUN_1081a40d4(auStack_100,param_2,&pppppuStack_158,1);
              func_0x00010838f5bc(auStack_118,&uStack_f0);
              FUN_108390bcc(&uStack_b0,auStack_100,auStack_118);
              FUN_10838f648(auStack_118);
              FUN_10837ca5c(auStack_100[0]);
              FUN_10833e8c0(&uStack_b0,piVar24,lVar23);
              pppppppuVar10 = (undefined *******)0x0;
              param_3 = (undefined ******)0x2;
              param_1 = (undefined *******)ppppppuStack_160;
              FUN_10827bd6c();
              func_0x0001083919b4();
            }
            piVar24 = (int *)((long)piVar24 + 0x3fff);
            lVar25 = lVar25 + -0x3fff;
          }
        }
        func_0x000108391994();
        pppppppuVar10 = param_1;
      }
    }
    else {
      func_0x00010838f5bc(&pppppuStack_158,&uStack_d0);
      param_3 = &pppppuStack_158;
      pppppppuVar10 = (undefined *******)ppppppuStack_160;
      FUN_108390bcc(ppppppuStack_160,param_2,param_3);
      uVar14 = (uint)param_2;
      param_1 = (undefined *******)&pppppuStack_158;
      FUN_10838f648();
      if (((ulong)pppppppuVar10 & 1) == 0) {
        pppppppuVar10 = (undefined *******)0x0;
      }
      else {
        func_0x000108391994();
        pppppppuVar10 = param_1;
      }
    }
    func_0x000108391980(uStack_88);
    if ((bool)uVar9) {
      return pppppppuVar10;
    }
  }
  ___stack_chk_fail();
  func_0x0001083919b4();
  FUN_108390a2c(&pppppuStack_158);
  unaff_x30 = FUN_108391274;
  pppppppuVar10 = param_1;
  __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)&pppppuStack_170;
  ppppppuVar19 = param_3;
  unaff_x19 = param_1;
  unaff_x29 = puVar1;
code_r0x000108391274:
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ********)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if ((uVar14 >> 1 & 1) != 0) {
    func_0x00010838f558(pppppppuVar10,ppppppuVar19);
    return (undefined *******)(ulong)(pppppppuVar10[2] != (undefined ******)0xffffffffffffffff);
  }
  puVar11 = *(undefined8 **)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 **)((long)register0x00000008 + -0x18) = puVar11;
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  func_0x000108390a10(pppppppuVar10);
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0xffffffffffffffff;
  return (undefined *******)0x0;
}



/* Entry: 108391274; end: 1083912bb;  */

bool FUN_108391274(long param_1,uint param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  
  if ((param_2 >> 1 & 1) == 0) {
    func_0x000108390a10(param_1);
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0xffffffffffffffff;
    return false;
  }
  func_0x00010838f558(param_1,param_3);
  return *(long *)(param_1 + 0x10) != -1;
}



/* Entry: 1083912bc; end: 10839155f;  */

bool FUN_1083912bc(undefined1 (*param_1) [16],undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined1 auVar17 [16];
  undefined4 auStack_98 [2];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte bStack_60;
  
  lVar13 = *(long *)param_1[1];
  if (lVar13 != -1) {
    if (lVar13 == 0) {
      auVar17 = NEON_scvtf(*param_1,4);
      uStack_78 = auVar17._8_8_;
      uStack_80 = auVar17._0_8_;
      func_0x000108142248(param_2,&uStack_80,0);
    }
    else {
      FUN_1083902c4(&uStack_80);
      lVar10 = 0;
      uVar12 = 0;
      auStack_98[0] = 0x18;
      lStack_90 = 0;
      uStack_88 = 0;
      while ((bStack_60 & 1) == 0) {
        func_0x00010840f398(auStack_98,2);
        lVar10 = lStack_90;
        uVar12 = (ulong)uStack_88._4_4_;
        lVar5 = lStack_90 + (long)uStack_88._4_4_ * 0x18;
        *(undefined4 *)(lVar5 + -0x30) = uStack_70;
        *(undefined4 *)(lVar5 + -0x2c) = uStack_64;
        *(undefined4 *)(lVar5 + -0x28) = uStack_6c;
        *(undefined1 *)(lVar5 + -0x24) = 0;
        *(undefined4 *)(lVar5 + -0x18) = uStack_68;
        *(undefined4 *)(lVar5 + -0x14) = uStack_6c;
        *(undefined4 *)(lVar5 + -0x10) = uStack_64;
        *(undefined1 *)(lVar5 + -0xc) = 0;
        func_0x000108390338(&uStack_80);
      }
      iVar11 = (int)uVar12;
      if (1 < iVar11) {
        FUN_108391564((int)LZCOUNT(iVar11 + -2) * -2 + 0x40,lVar10,uVar12);
      }
      plVar6 = (long *)(lVar10 + 0x28);
      lVar7 = lVar10;
      for (lVar5 = lVar10; lVar7 = lVar7 + 0x18, lVar5 != lVar10 + (long)iVar11 * 0x18;
          lVar5 = lVar5 + 0x18) {
        bVar2 = *(byte *)(lVar5 + 0xc);
        if (bVar2 != 3) {
          iVar1 = *(int *)(lVar5 + 8);
          if ((bVar2 & 1) == 0) {
            for (plVar8 = plVar6;
                ((*(byte *)((long)plVar8 + -4) >> 1 & 1) != 0 ||
                (*(int *)(lVar5 + 4) != (int)plVar8[-1])); plVar8 = plVar8 + 3) {
            }
            *plVar8 = lVar5;
            *(byte *)((long)plVar8 + -4) = *(byte *)((long)plVar8 + -4) | 2;
            bVar2 = *(byte *)(lVar5 + 0xc);
          }
          lVar9 = lVar7;
          if ((bVar2 >> 1 & 1) == 0) {
            for (; (bVar2 = *(byte *)(lVar9 + 0xc), (bVar2 & 1) != 0 ||
                   (iVar1 != *(int *)(lVar9 + 4))); lVar9 = lVar9 + 0x18) {
            }
            *(long *)(lVar5 + 0x10) = lVar9;
            *(byte *)(lVar9 + 0xc) = bVar2 | 1;
          }
          *(undefined1 *)(lVar5 + 0xc) = 3;
        }
        plVar6 = plVar6 + 3;
      }
      FUN_108377c50(param_2,iVar11 << 1,0,0);
      piVar4 = (int *)(lVar10 + -0x18);
      do {
        do {
          piVar14 = piVar4;
          piVar4 = piVar14 + 6;
        } while ((char)piVar14[9] == '\0');
        piVar15 = *(int **)(piVar14 + 10);
        func_0x000108377934((float)*piVar4,(float)piVar14[7],param_2);
        *(undefined1 *)(piVar14 + 9) = 0;
        uVar12 = (ulong)((int)uVar12 - 1);
        piVar14 = piVar4;
        do {
          piVar16 = piVar15;
          if ((*piVar14 != *piVar16) || (piVar14[2] != piVar16[1])) {
            func_0x0001083919ac((float)*piVar14,(float)piVar14[2]);
            func_0x0001083919ac((float)*piVar16,(float)piVar16[1]);
          }
          *(undefined1 *)(piVar16 + 3) = 0;
          uVar3 = (int)uVar12 - 1;
          uVar12 = (ulong)uVar3;
          piVar14 = piVar16;
          piVar15 = *(int **)(piVar16 + 4);
        } while (piVar4 != *(int **)(piVar16 + 4));
        func_0x0001083919ac((float)*piVar16,(float)piVar16[2]);
        FUN_108377ec8(param_2);
        piVar4 = (int *)(lVar10 + -0x18);
      } while (0 < (int)uVar3);
      _free(lVar10);
    }
  }
  return lVar13 != -1;
}



/* Entry: 108391560; end: 108391563;  */

void FUN_108391560(void)

{
  return;
}



/* Entry: 108391564; end: 10839194b;  */

int * FUN_108391564(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong uVar18;
  int *piVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar10 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  piVar17 = param_2;
  piVar19 = param_1;
  do {
    if ((int)param_3 < 0x21) {
      piVar19 = piVar17;
      while( true ) {
        piVar12 = piVar19;
        piVar19 = piVar12 + 6;
        bVar9 = piVar19 == piVar17 + (long)(int)param_3 * 6 + -6;
        if (piVar17 + (long)(int)param_3 * 6 + -6 <= piVar19 && !bVar9) break;
        param_1 = piVar19;
        param_2 = piVar12;
        FUN_10839194c();
        if ((int)param_1 != 0) {
          iVar2 = piVar12[6];
          iVar3 = piVar12[7];
          iVar5 = piVar12[8];
          uVar15 = *(undefined8 *)(piVar12 + 9);
          iVar1 = piVar12[0xb];
          iVar4 = iVar5;
          if (iVar3 <= iVar5) {
            iVar4 = iVar3;
          }
          while( true ) {
            *(undefined8 *)(piVar12 + 8) = *(undefined8 *)(piVar12 + 2);
            *(undefined8 *)(piVar12 + 6) = *(undefined8 *)piVar12;
            *(undefined8 *)(piVar12 + 10) = *(undefined8 *)(piVar12 + 4);
            if (piVar12 <= piVar17) break;
            iVar6 = piVar12[-6];
            bVar9 = SBORROW4(iVar2,iVar6);
            iVar7 = iVar2 - iVar6;
            if (iVar2 == iVar6) {
              iVar7 = piVar12[-4];
              if (piVar12[-5] <= piVar12[-4]) {
                iVar7 = piVar12[-5];
              }
              bVar9 = SBORROW4(iVar4,iVar7);
              iVar7 = iVar4 - iVar7;
            }
            if (iVar7 < 0 == bVar9) break;
            piVar12 = piVar12 + -6;
          }
          *piVar12 = iVar2;
          piVar12[1] = iVar3;
          piVar12[2] = iVar5;
          *(undefined8 *)(piVar12 + 3) = uVar15;
          piVar12[5] = iVar1;
        }
      }
LAB_10839191c:
      func_0x000108391980(uVar10);
      if (!bVar9) {
        ___stack_chk_fail();
        iVar2 = *param_1;
        iVar3 = *param_2;
        bVar9 = SBORROW4(iVar2,iVar3);
        iVar4 = iVar2 - iVar3;
        if (iVar2 == iVar3) {
          iVar4 = param_1[2];
          if (param_1[1] <= param_1[2]) {
            iVar4 = param_1[1];
          }
          iVar2 = param_2[2];
          if (param_2[1] <= param_2[2]) {
            iVar2 = param_2[1];
          }
          bVar9 = SBORROW4(iVar4,iVar2);
          iVar4 = iVar4 - iVar2;
        }
        return (int *)(ulong)(iVar4 < 0 != bVar9);
      }
      return param_1;
    }
    if ((int)piVar19 == 0) {
      uVar18 = (ulong)param_3;
      for (uVar20 = (ulong)(param_3 >> 1); uVar20 != 0; uVar20 = uVar20 - 1) {
        iVar2 = piVar17[uVar20 * 6 + -6];
        iVar3 = piVar17[uVar20 * 6 + -5];
        iVar5 = piVar17[uVar20 * 6 + -4];
        uVar21 = uVar20;
        iVar4 = iVar5;
        if (iVar3 <= iVar5) {
          iVar4 = iVar3;
        }
        while( true ) {
          uVar22 = uVar21 * 2;
          if (uVar18 <= uVar22 && uVar22 - uVar18 != 0) break;
          if (uVar18 > uVar22) {
            param_2 = piVar17 + uVar21 * 0xc;
            param_1 = param_2 + -6;
            FUN_10839194c();
            uVar22 = uVar22 | (ulong)param_1 & 0xffffffff;
          }
          iVar7 = piVar17[uVar22 * 6 + -6];
          bVar9 = SBORROW4(iVar2,iVar7);
          iVar1 = iVar2 - iVar7;
          if (iVar2 == iVar7) {
            iVar1 = piVar17[uVar22 * 6 + -4];
            if (piVar17[uVar22 * 6 + -5] <= piVar17[uVar22 * 6 + -4]) {
              iVar1 = piVar17[uVar22 * 6 + -5];
            }
            bVar9 = SBORROW4(iVar4,iVar1);
            iVar1 = iVar4 - iVar1;
          }
          if (iVar1 < 0 == bVar9) break;
          uVar16 = *(undefined8 *)(piVar17 + uVar22 * 6 + -4);
          uVar15 = *(undefined8 *)(piVar17 + uVar22 * 6 + -6);
          piVar19 = piVar17 + uVar21 * 6 + -6;
          *(undefined8 *)(piVar19 + 4) = *(undefined8 *)(piVar17 + uVar22 * 6 + -2);
          *(undefined8 *)(piVar19 + 2) = uVar16;
          *(undefined8 *)piVar19 = uVar15;
          uVar21 = uVar22;
        }
        piVar17[uVar21 * 6 + -6] = iVar2;
        piVar17[uVar21 * 6 + -5] = iVar3;
        piVar17[uVar21 * 6 + -4] = iVar5;
        func_0x0001083919bc();
      }
      while( true ) {
        uVar18 = uVar18 - 1;
        bVar9 = true;
        if (uVar18 == 0) break;
        piVar19 = piVar17 + uVar18 * 6;
        uVar15 = *(undefined8 *)(piVar17 + 4);
        uVar24 = *(undefined8 *)(piVar17 + 2);
        uVar23 = *(undefined8 *)piVar17;
        uVar16 = *(undefined8 *)(piVar19 + 4);
        uVar25 = *(undefined8 *)piVar19;
        *(undefined8 *)(piVar17 + 2) = *(undefined8 *)(piVar19 + 2);
        *(undefined8 *)piVar17 = uVar25;
        *(undefined8 *)(piVar17 + 4) = uVar16;
        *(undefined8 *)(piVar19 + 2) = uVar24;
        *(undefined8 *)piVar19 = uVar23;
        *(undefined8 *)(piVar19 + 4) = uVar15;
        iVar4 = *piVar17;
        iVar2 = piVar17[1];
        iVar3 = piVar17[2];
        uVar20 = 1;
        while( true ) {
          uVar21 = uVar20 * 2;
          if (uVar18 <= uVar21 && uVar21 - uVar18 != 0) break;
          if (uVar18 > uVar21) {
            param_2 = piVar17 + uVar20 * 0xc;
            param_1 = param_2 + -6;
            FUN_10839194c();
            uVar21 = uVar21 | (ulong)param_1 & 0xffffffff;
          }
          piVar19 = piVar17 + uVar21 * 6 + -6;
          uVar16 = *(undefined8 *)(piVar19 + 2);
          uVar15 = *(undefined8 *)piVar19;
          piVar12 = piVar17 + uVar20 * 6 + -6;
          *(undefined8 *)(piVar12 + 4) = *(undefined8 *)(piVar19 + 4);
          *(undefined8 *)(piVar12 + 2) = uVar16;
          *(undefined8 *)piVar12 = uVar15;
          uVar20 = uVar21;
        }
        iVar5 = iVar3;
        if (iVar2 <= iVar3) {
          iVar5 = iVar2;
        }
        while (1 < uVar20) {
          uVar21 = uVar20 >> 1;
          iVar7 = piVar17[uVar21 * 6 + -6];
          bVar9 = SBORROW4(iVar7,iVar4);
          iVar1 = iVar7 - iVar4;
          if (iVar7 == iVar4) {
            iVar1 = piVar17[uVar21 * 6 + -4];
            if (piVar17[uVar21 * 6 + -5] <= piVar17[uVar21 * 6 + -4]) {
              iVar1 = piVar17[uVar21 * 6 + -5];
            }
            bVar9 = SBORROW4(iVar1,iVar5);
            iVar1 = iVar1 - iVar5;
          }
          if (iVar1 < 0 == bVar9) break;
          uVar16 = *(undefined8 *)(piVar17 + uVar21 * 6 + -4);
          uVar15 = *(undefined8 *)(piVar17 + uVar21 * 6 + -6);
          piVar19 = piVar17 + uVar20 * 6 + -6;
          *(undefined8 *)(piVar19 + 4) = *(undefined8 *)(piVar17 + uVar21 * 6 + -2);
          *(undefined8 *)(piVar19 + 2) = uVar16;
          *(undefined8 *)piVar19 = uVar15;
          uVar20 = uVar21;
        }
        piVar17[uVar20 * 6 + -6] = iVar4;
        piVar17[uVar20 * 6 + -5] = iVar2;
        piVar17[uVar20 * 6 + -4] = iVar3;
        func_0x0001083919bc();
      }
      goto LAB_10839191c;
    }
    piVar12 = piVar17 + (ulong)(param_3 - 1 >> 1) * 6;
    piVar11 = piVar17 + (ulong)param_3 * 6 + -6;
    iVar2 = *piVar12;
    iVar3 = piVar12[1];
    iVar4 = piVar12[2];
    uVar15 = *(undefined8 *)(piVar12 + 4);
    uVar24 = *(undefined8 *)(piVar12 + 2);
    uVar23 = *(undefined8 *)piVar12;
    uVar16 = *(undefined8 *)(piVar17 + (ulong)param_3 * 6 + -2);
    uVar25 = *(undefined8 *)(piVar17 + (ulong)param_3 * 6 + -6);
    *(undefined8 *)(piVar12 + 2) = *(undefined8 *)(piVar17 + (ulong)param_3 * 6 + -4);
    *(undefined8 *)piVar12 = uVar25;
    *(undefined8 *)(piVar12 + 4) = uVar16;
    *(undefined8 *)(piVar17 + (ulong)param_3 * 6 + -4) = uVar24;
    *(undefined8 *)(piVar17 + (ulong)param_3 * 6 + -6) = uVar23;
    *(undefined8 *)(piVar17 + (ulong)param_3 * 6 + -2) = uVar15;
    piVar12 = piVar17;
    piVar14 = piVar17;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
    for (; piVar14 < piVar11; piVar14 = piVar14 + 6) {
      iVar5 = *piVar14;
      bVar9 = SBORROW4(iVar5,iVar2);
      iVar3 = iVar5 - iVar2;
      if (iVar5 == iVar2) {
        iVar3 = piVar14[2];
        if (piVar14[1] <= piVar14[2]) {
          iVar3 = piVar14[1];
        }
        bVar9 = SBORROW4(iVar3,iVar4);
        iVar3 = iVar3 - iVar4;
      }
      piVar13 = piVar12;
      if (iVar3 < 0 != bVar9) {
        uVar24 = *(undefined8 *)(piVar14 + 2);
        uVar23 = *(undefined8 *)piVar14;
        uVar15 = *(undefined8 *)(piVar14 + 4);
        uVar16 = *(undefined8 *)(piVar12 + 4);
        uVar25 = *(undefined8 *)piVar12;
        *(undefined8 *)(piVar14 + 2) = *(undefined8 *)(piVar12 + 2);
        *(undefined8 *)piVar14 = uVar25;
        *(undefined8 *)(piVar14 + 4) = uVar16;
        *(undefined8 *)(piVar12 + 4) = uVar15;
        piVar13 = piVar12 + 6;
        *(undefined8 *)(piVar12 + 2) = uVar24;
        *(undefined8 *)piVar12 = uVar23;
      }
      piVar12 = piVar13;
    }
    piVar19 = (int *)(ulong)((int)piVar19 - 1);
    uVar24 = *(undefined8 *)(piVar12 + 2);
    uVar16 = *(undefined8 *)piVar12;
    uVar15 = *(undefined8 *)(piVar12 + 4);
    uVar25 = *(undefined8 *)(piVar17 + (ulong)param_3 * 6 + -4);
    uVar23 = *(undefined8 *)piVar11;
    *(undefined8 *)(piVar12 + 4) = *(undefined8 *)(piVar17 + (ulong)param_3 * 6 + -2);
    *(undefined8 *)(piVar12 + 2) = uVar25;
    *(undefined8 *)piVar12 = uVar23;
    *(undefined8 *)(piVar17 + (ulong)param_3 * 6 + -4) = uVar24;
    *(undefined8 *)piVar11 = uVar16;
    *(undefined8 *)(piVar17 + (ulong)param_3 * 6 + -2) = uVar15;
    lVar8 = ((long)piVar12 - (long)piVar17) / 0x18;
    param_1 = piVar19;
    param_2 = piVar17;
    FUN_108391564(piVar19,piVar17,lVar8);
    iVar4 = (int)lVar8 + 1;
    piVar17 = piVar17 + (long)iVar4 * 6;
    param_3 = param_3 - iVar4;
  } while( true );
}



/* Entry: 10839194c; end: 1083919e3;  */

bool FUN_10839194c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = *param_1;
  iVar3 = *param_2;
  bVar4 = SBORROW4(iVar2,iVar3);
  iVar1 = iVar2 - iVar3;
  if (iVar2 == iVar3) {
    iVar1 = param_1[2];
    if (param_1[1] <= param_1[2]) {
      iVar1 = param_1[1];
    }
    iVar2 = param_2[2];
    if (param_2[1] <= param_2[2]) {
      iVar2 = param_2[1];
    }
    bVar4 = SBORROW4(iVar1,iVar2);
    iVar1 = iVar1 - iVar2;
  }
  return iVar1 < 0 != bVar4;
}



/* Entry: 1083919e4; end: 108391a7f;  */

undefined4 * FUN_1083919e4(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cStack_31;
  
  cStack_31 = cRam0000000113827068;
  if (cRam0000000113827068 == '\0') {
    iVar1 = 0x13827068;
    FUN_10825bc50(0x113827068,&cStack_31,1,0,0);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)0x28;
      __Znwm();
      *puVar2 = 8;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      puVar2[6] = 1;
      *(undefined1 *)(puVar2 + 7) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      cRam0000000113827068 = 2;
      puRam0000000113827070 = puVar2;
      return puVar2;
    }
  }
  do {
  } while (cRam0000000113827068 != '\x02');
  return puRam0000000113827070;
}



/* Entry: 108391a80; end: 108391b07;  */

void FUN_108391a80(int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(param_4 >> 2) + 6;
  *param_1 = iVar1;
  piVar2 = param_1 + 2;
  *piVar2 = (int)param_3;
  param_1[3] = (int)((ulong)param_3 >> 0x20);
  *(undefined8 *)(param_1 + 4) = param_2;
  FUN_108343308(piVar2,(long)(iVar1 * 4 + -8),0);
  param_1[1] = (int)piVar2;
  return;
}



/* Entry: 108391b08; end: 108391b4f;  */

void FUN_108391b08(long param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108392c14();
  FUN_1083924e0(param_1 + 0x40,0);
  func_0x000108391acc();
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  return;
}



/* Entry: 108391b50; end: 108391be3;  */

uint FUN_108391b50(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint extraout_w8;
  uint uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000108392bb0();
  FUN_108391be4();
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  FUN_108391c58();
  uVar2 = extraout_w8;
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = *puVar1;
    (*param_3)(uVar3,param_4);
    if ((int)uVar3 == 0) {
      FUN_108391d3c();
      uVar2 = 0;
    }
    else {
      FUN_108391d00();
      uVar2 = 1;
    }
  }
  return puVar1 != (undefined8 *)0x0 & uVar2;
}



/* Entry: 108391be4; end: 108391c57;  */

void FUN_108391be4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = 0;
  uStack_28 = 0x100000000;
  FUN_1083921ec(param_1 + 0x40,&lStack_30);
  for (lVar1 = 0; lVar1 < (int)uStack_28; lVar1 = lVar1 + 1) {
    FUN_1083920f0(param_1,*(undefined8 *)(lStack_30 + lVar1 * 8));
  }
  func_0x000108392c0c();
  return;
}



/* Entry: 108391c58; end: 108391cff;  */

uint * FUN_108391c58(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong unaff_x19;
  long unaff_x20;
  int iVar6;
  uint uVar7;
  
  func_0x000108392bb0();
  iVar6 = 0;
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  iVar5 = *(int *)(param_1 + 4);
  uVar7 = iVar5 - 1U & uVar3;
  while( true ) {
    if (iVar5 <= iVar6) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x20 + 8) + (long)(int)uVar7 * 0x10);
    if (*puVar1 == 0) break;
    if (uVar3 == *puVar1) {
      func_0x000108392b88(*(undefined8 *)(puVar1 + 2));
      uVar4 = unaff_x19;
      FUN_10839260c();
      if ((uVar4 & 1) != 0) {
        return puVar1 + 2;
      }
      iVar5 = *(int *)(unaff_x20 + 4);
    }
    iVar2 = 0;
    if ((int)uVar7 < 1) {
      iVar2 = iVar5;
    }
    uVar7 = (uVar7 + iVar2) - 1;
    iVar6 = iVar6 + 1;
  }
  return (uint *)0x0;
}



/* Entry: 108391d00; end: 108391d3b;  */

void FUN_108391d00(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  
  if (*param_1 != param_2) {
    func_0x000108392bb0();
    FUN_1083920c4();
    lVar1 = *unaff_x20;
    *(long *)(lVar1 + 0x10) = unaff_x19;
    *(long *)(unaff_x19 + 8) = lVar1;
    *unaff_x20 = unaff_x19;
  }
  return;
}



/* Entry: 108391d3c; end: 108391edb;  */

void FUN_108391d3c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long lVar8;
  long *unaff_x19;
  ulong unaff_x20;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  
  func_0x000108392bb0();
  func_0x000108392bcc();
  uVar5 = unaff_x20;
  FUN_1083920c4();
  piVar9 = *(int **)(unaff_x20 + 0x10);
  func_0x000108392bbc();
  iVar12 = 0;
  uVar10 = *(uint *)(uVar5 + 4);
  if (uVar10 < 2) {
    uVar10 = 1;
  }
  uVar7 = (ulong)(uint)piVar9[1];
  uVar2 = piVar9[1] - 1U & uVar10;
  uVar11 = (ulong)uVar2;
  for (; iVar12 < (int)uVar7; iVar12 = iVar12 + 1) {
    puVar1 = (uint *)(*(long *)(piVar9 + 2) + (long)(int)uVar2 * 0x10);
    uVar4 = *puVar1;
    if (uVar4 == 0) break;
    if (uVar10 == uVar4) {
      uVar6 = *(undefined8 *)(puVar1 + 2);
      func_0x000108392b88(uVar6);
      uVar7 = uVar5;
      FUN_10839260c(uVar5,uVar6);
      if ((uVar7 & 1) != 0) {
        *piVar9 = *piVar9 + -1;
        do {
          lVar8 = *(long *)(piVar9 + 2);
          uVar10 = (uint)uVar11;
          puVar1 = (uint *)(lVar8 + (long)(int)uVar10 * 0x10);
          do {
            uVar2 = (int)uVar11 - 1;
            if ((int)uVar11 < 1) {
              uVar2 = piVar9[1] + uVar2;
            }
            uVar11 = (ulong)uVar2;
            uVar4 = *(uint *)(lVar8 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4));
            if (uVar4 == 0) {
              if (*puVar1 != 0) {
                *puVar1 = 0;
              }
              uVar10 = piVar9[1];
              if ((4 < (int)uVar10) && (*piVar9 * 4 <= (int)uVar10)) {
                FUN_108392644(piVar9,uVar10 >> 1);
              }
              goto LAB_108391ea0;
            }
            uVar3 = piVar9[1] - 1U & uVar4;
          } while (((int)uVar2 <= (int)uVar3 && (int)uVar3 < (int)uVar10) ||
                  (((int)uVar10 < (int)uVar2 &&
                   ((int)uVar3 < (int)uVar10 || (int)uVar2 <= (int)uVar3))));
          if (uVar10 != uVar2) {
            *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(lVar8 + (long)(int)uVar2 * 0x10 + 8);
            *puVar1 = uVar4;
          }
        } while( true );
      }
    }
    func_0x000108392c48();
    uVar7 = extraout_x8;
  }
LAB_108391ea0:
  *(long *)(unaff_x20 + 0x20) = *(long *)(unaff_x20 + 0x20) - param_1;
  *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + -1;
                    /* WARNING: Could not recover jumptable at 0x000108391ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 8))();
  return;
}



/* Entry: 108391edc; end: 108391fe7;  */

void FUN_108391edc(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  
  lVar2 = param_1;
  FUN_108391be4();
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000108392bbc();
  FUN_108391c58(puVar5,lVar2);
  if (puVar5 != (undefined8 *)0x0) {
    plVar6 = (long *)*puVar5;
    plVar3 = plVar6;
    (**(code **)(*plVar6 + 0x20))();
    if ((int)plVar3 == 0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_3);
                    /* WARNING: Could not recover jumptable at 0x000108391fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 8))(param_2);
      return;
    }
    FUN_108391d3c(param_1,plVar6);
  }
  FUN_108391fe8(param_1,param_2);
  piVar7 = *(int **)(param_1 + 0x10);
  iVar4 = piVar7[1];
  if (iVar4 * 3 <= *piVar7 * 4) {
    iVar1 = iVar4 << 1;
    if (iVar4 < 1) {
      iVar1 = 4;
    }
    FUN_108392644(piVar7,iVar1);
  }
  FUN_1083926f8(piVar7,&stack0xffffffffffffffc8);
  (**(code **)(*param_2 + 0x28))(param_2,param_3);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar8 = *(ulong *)(param_1 + 0x28);
    iVar4 = 0x7fffffff;
  }
  else {
    iVar4 = 0x400;
    uVar8 = 0xffffffff;
  }
  lVar9 = *(long *)(param_1 + 8);
  lVar2 = param_1;
  while ((lVar9 != 0 &&
         ((uVar8 <= *(ulong *)(param_1 + 0x20) || (iVar4 <= *(int *)(param_1 + 0x38)))))) {
    lVar9 = *(long *)(lVar9 + 0x10);
    func_0x000108392bdc();
    if ((int)lVar2 != 0) {
      func_0x000108392c28();
    }
  }
  return;
}



/* Entry: 108391fe8; end: 10839203b;  */

void FUN_108391fe8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(long *)(param_2 + 8) = lVar2;
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_2;
  }
  *param_1 = param_2;
  if (param_1[1] == 0) {
    param_1[1] = param_2;
  }
  plVar1 = param_1;
  func_0x000108392bcc();
  param_1[4] = param_1[4] + (long)plVar1;
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  return;
}



/* Entry: 10839203c; end: 1083920c3;  */

void FUN_10839203c(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = (int)param_1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = 0x400;
    uVar3 = 0xffffffff;
  }
  lVar4 = *(long *)(param_1 + 8);
  while ((lVar4 != 0 &&
         ((((param_2 & 1) != 0 || (uVar3 <= *(ulong *)(param_1 + 0x20))) ||
          (iVar2 <= *(int *)(param_1 + 0x38)))))) {
    lVar4 = *(long *)(lVar4 + 0x10);
    func_0x000108392bdc();
    if (iVar1 != 0) {
      func_0x000108392c28();
    }
  }
  return;
}



/* Entry: 1083920c4; end: 1083920ef;  */

void FUN_1083920c4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 == 0) {
    *param_1 = lVar1;
  }
  else {
    *(long *)(lVar2 + 8) = lVar1;
  }
  if (lVar1 == 0) {
    param_1[1] = lVar2;
  }
  else {
    *(long *)(lVar1 + 0x10) = lVar2;
  }
  *(long *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 1083920f0; end: 108392153;  */

void FUN_1083920f0(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x19;
  long *plVar2;
  
  if (param_2 != 0) {
    func_0x000108392bb0();
    plVar2 = *(long **)(param_1 + 8);
    while (plVar1 = plVar2, plVar1 != (long *)0x0) {
      plVar2 = (long *)plVar1[2];
      (**(code **)(*plVar1 + 0x10))();
      if ((plVar1[1] == unaff_x19) && (func_0x000108392bdc(), (int)plVar1 != 0)) {
        func_0x000108392c28();
      }
    }
  }
  return;
}



/* Entry: 108392154; end: 1083921eb;  */

undefined8 FUN_108392154(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108392bb0();
  FUN_108391be4();
  if (*(code **)(unaff_x20 + 0x18) == (code *)0x0) {
    uVar1 = 0x40;
    __Znwm(0x40);
    FUN_108410808();
    func_0x00010833b400(uVar1,unaff_x19);
  }
  else {
    (**(code **)(unaff_x20 + 0x18))();
    if (unaff_x19 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x40;
      __Znwm(0x40);
      FUN_10833b434();
    }
  }
  return uVar1;
}



/* Entry: 1083921ec; end: 10839222b;  */

void FUN_1083921ec(long param_1,long param_2)

{
  func_0x000108392bb0();
  *(undefined4 *)(param_2 + 8) = 0;
  func_0x000108392b94(param_1 + 0x10);
  FUN_1083927ec();
  func_0x000108392b78();
  return;
}



/* Entry: 10839222c; end: 1083922a7;  */

undefined4 * FUN_10839222c(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((bRam0000000113827080 & 1) == 0) {
    iVar1 = 0x13827080;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)0x10;
      __Znwm();
      *puVar2 = 1;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      puRam0000000113827078 = puVar2;
      ___cxa_guard_release(0x113827080);
    }
  }
  return puRam0000000113827078;
}



/* Entry: 1083922a8; end: 1083922fb;  */

long FUN_1083922a8(void)

{
  long lVar1;
  
  FUN_10839222c();
  if (lRam0000000113827088 == 0) {
    lVar1 = 0x68;
    __Znwm();
    FUN_108391b08();
    lRam0000000113827088 = lVar1;
  }
  return lRam0000000113827088;
}



/* Entry: 1083922fc; end: 108392333;  */

undefined8 FUN_1083922fc(long param_1)

{
  undefined8 uVar1;
  
  FUN_10839222c();
  func_0x000108392b94();
  FUN_1083922a8();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000108392b78();
  return uVar1;
}



/* Entry: 108392334; end: 108392373;  */

undefined8 FUN_108392334(undefined8 param_1)

{
  FUN_10839222c();
  func_0x000108392b94();
  FUN_1083922a8();
  FUN_108392154();
  func_0x000108392b60();
  return param_1;
}



/* Entry: 108392374; end: 1083923d7;  */

undefined8 FUN_108392374(undefined8 param_1)

{
  FUN_10839222c();
  func_0x000108392b94();
  FUN_1083922a8();
  FUN_108391b50();
  func_0x000108392b78();
  return param_1;
}



/* Entry: 1083923d8; end: 108392417;  */

void FUN_1083923d8(void)

{
  func_0x000108392bb0();
  FUN_10839222c();
  func_0x000108392b94();
  FUN_1083922a8();
  FUN_108391edc();
  func_0x000108392b78();
  return;
}



/* Entry: 108392418; end: 108392423;  */

void FUN_108392418(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_1083919e4();
    func_0x000108392b94(lVar1 + 0x18);
    for (lVar2 = 0; lVar2 < *(int *)(lVar1 + 0x14); lVar2 = lVar2 + 1) {
      FUN_108392a90(*(undefined8 *)(*(long *)(lVar1 + 8) + lVar2 * 8),param_1);
    }
    func_0x000108392b78();
    return;
  }
  return;
}



/* Entry: 108392424; end: 108392487;  */

void FUN_108392424(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_1083919e4();
  func_0x000108392b94(lVar1 + 0x18);
  for (lVar2 = 0; lVar2 < *(int *)(lVar1 + 0x14); lVar2 = lVar2 + 1) {
    FUN_108392a90(*(undefined8 *)(*(long *)(lVar1 + 8) + lVar2 * 8),param_1);
  }
  func_0x000108392b78();
  return;
}



/* Entry: 108392488; end: 1083924b3;  */

long * FUN_108392488(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1083924b4();
  }
  return param_1;
}



/* Entry: 1083924b4; end: 1083924df;  */

void FUN_1083924b4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + -8) != 0) {
    lVar1 = *(long *)(param_1 + -8) << 4;
    do {
      if (*(int *)(param_1 + -0x10 + lVar1) != 0) {
        *(undefined4 *)(param_1 + -0x10 + lVar1) = 0;
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 1083924e0; end: 10839258f;  */

undefined8 * FUN_1083924e0(undefined8 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0x100000000;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  puVar2 = param_1;
  FUN_1083919e4();
  func_0x0001081efc58();
  func_0x00010840f37c(puVar2);
  if (*(int *)((long)puVar2 + 0x14) != 0) {
    *(undefined8 **)(puVar2[1] + (long)*(int *)((long)puVar2 + 0x14) * 8 + -8) = param_1;
    func_0x000108392b78();
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108392564);
  (*pcVar1)();
}



/* Entry: 108392590; end: 10839260b;  */

void FUN_108392590(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  FUN_1083919e4();
  func_0x0001081efc58();
  uVar2 = 0;
  do {
    if ((*(uint *)(lVar1 + 0x14) & ((int)*(uint *)(lVar1 + 0x14) >> 0x1f ^ 0xffffffffU)) == uVar2) {
LAB_1083925ec:
      func_0x000108392b78();
      FUN_108410074(param_1 + 0x10);
      FUN_1083927c4(param_1);
      return;
    }
    if (param_1 == *(long *)(*(long *)(lVar1 + 8) + uVar2 * 8)) {
      FUN_10840f328(lVar1);
      goto LAB_1083925ec;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



/* Entry: 10839260c; end: 108392643;  */

bool FUN_10839260c(uint *param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  uVar4 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  uVar6 = 0;
  do {
    uVar5 = uVar4;
    if (uVar4 == uVar6) break;
    puVar2 = param_1 + uVar6;
    lVar1 = uVar6 * 4;
    uVar5 = uVar6;
    uVar6 = uVar6 + 1;
  } while (*puVar2 == *(uint *)(param_2 + lVar1));
  return (long)(int)uVar3 <= (long)uVar5;
}



/* Entry: 108392644; end: 1083926f7;  */

void FUN_108392644(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lStack_38;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  lVar6 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  puVar2 = (undefined8 *)((ulong)param_2 * 0x10 + 0x10);
  lStack_38 = lVar6;
  __Znam();
  *puVar2 = 0x10;
  puVar2[1] = (ulong)param_2;
  lVar3 = (ulong)param_2 << 4;
  puVar4 = puVar2 + 2;
  do {
    *(undefined4 *)puVar4 = 0;
    lVar3 = lVar3 + -0x10;
    puVar4 = puVar4 + 2;
  } while (lVar3 != 0);
  *(undefined8 **)(param_1 + 2) = puVar2 + 2;
  lVar6 = lVar6 + 8;
  for (uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    if (*(int *)(lVar6 + -8) != 0) {
      FUN_1083926f8(param_1,lVar6);
    }
    lVar6 = lVar6 + 0x10;
  }
  FUN_108392488(&lStack_38);
  return;
}



/* Entry: 1083926f8; end: 1083927c3;  */

void FUN_1083926f8(undefined8 param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong extraout_x8;
  int *unaff_x19;
  undefined8 *unaff_x20;
  int iVar7;
  
  func_0x000108392c14();
  uVar4 = *param_2;
  func_0x000108392b88();
  iVar7 = 0;
  uVar2 = *(uint *)(uVar4 + 4);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  uVar3 = unaff_x19[1];
  uVar6 = (ulong)uVar3;
  while( true ) {
    if ((int)uVar6 <= iVar7) {
      return;
    }
    puVar1 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)(uVar3 - 1 & uVar2) * 0x10);
    if (*puVar1 == 0) break;
    if (uVar2 == *puVar1) {
      uVar5 = *(undefined8 *)(puVar1 + 2);
      func_0x000108392b88(uVar5);
      uVar6 = uVar4;
      FUN_10839260c(uVar4,uVar5);
      if ((uVar6 & 1) != 0) {
        *(undefined8 *)(puVar1 + 2) = *unaff_x20;
        *puVar1 = uVar2;
        return;
      }
    }
    func_0x000108392c48();
    iVar7 = iVar7 + 1;
    uVar6 = extraout_x8;
  }
  *(undefined8 *)(puVar1 + 2) = *unaff_x20;
  *puVar1 = uVar2;
  *unaff_x19 = *unaff_x19 + 1;
  return;
}



/* Entry: 1083927c4; end: 1083927eb;  */

long FUN_1083927c4(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x000108392c20();
  }
  return param_1;
}



/* Entry: 1083927ec; end: 1083928fb;  */

void FUN_1083927ec(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if (param_1 != param_2) {
    func_0x000108392c14();
    if (((*(byte *)(param_1 + 0xc) & 1) == 0) || ((*(uint *)(param_2 + 0xc) & 1) == 0)) {
      if ((*(uint *)(param_2 + 0xc) & 1) == 0) {
        FUN_1083929d0(0x3ff0000000000000);
        if (*(int *)(unaff_x20 + 1) != 0) {
          _memcpy();
        }
      }
      else {
        *unaff_x20 = 0;
        *(undefined4 *)((long)unaff_x20 + 0xc) = 1;
      }
      *(undefined4 *)(unaff_x20 + 1) = 0;
      FUN_1083928fc();
      FUN_1083928fc();
      func_0x000108392c0c();
    }
    else {
      uVar3 = *unaff_x19;
      *unaff_x19 = *unaff_x20;
      *unaff_x20 = uVar3;
      uVar1 = *(undefined4 *)(unaff_x19 + 1);
      *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(unaff_x20 + 1);
      *(undefined4 *)(unaff_x20 + 1) = uVar1;
      uVar2 = *(uint *)((long)unaff_x19 + 0xc);
      *(uint *)((long)unaff_x19 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) & 0xfffffffe | uVar2 & 1;
      *(uint *)((long)unaff_x20 + 0xc) = uVar2 & 0xfffffffe | *(uint *)((long)unaff_x20 + 0xc) & 1;
    }
  }
  return;
}



/* Entry: 1083928fc; end: 1083929cf;  */

undefined8 * FUN_1083928fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) {
      uVar2 = (ulong)*(uint *)(param_2 + 1);
      if ((int)(*(uint *)((long)param_1 + 0xc) >> 1) < (int)*(uint *)(param_2 + 1)) {
        puVar1 = param_1;
        FUN_108392a6c(0x3ff0000000000000,param_1);
        FUN_108392a00(param_1,puVar1,uVar2);
        uVar2 = (ulong)*(uint *)(param_2 + 1);
      }
      *(int *)(param_1 + 1) = (int)uVar2;
      if ((int)uVar2 != 0) {
        _memcpy(*param_1,*param_2,-(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar2 << 3);
      }
    }
    else {
      if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
        func_0x000108392c20();
      }
      uVar3 = *param_2;
      *param_2 = 0;
      *param_1 = uVar3;
      *(uint *)((long)param_1 + 0xc) =
           *(uint *)((long)param_2 + 0xc) & 0xfffffffe | *(uint *)((long)param_1 + 0xc) & 1;
      *(uint *)((long)param_2 + 0xc) = *(uint *)((long)param_2 + 0xc) & 1;
      *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_1;
}



/* Entry: 1083929d0; end: 1083929ff;  */

void FUN_1083929d0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 108392a00; end: 108392a6b;  */

void FUN_108392a00(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108392c14();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    func_0x000108392c20();
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108392a6c; end: 108392a8f;  */

void FUN_108392a6c(long param_1,undefined8 param_2)

{
  long lStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 8) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x8;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 8) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_108392a90;
  lStack_40 = param_1 + 0x10;
  uStack_38 = param_2;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x0001081efc58();
  FUN_108392adc(param_1,&uStack_38);
  FUN_1081efc78(&lStack_40);
  return;
}



/* Entry: 108392a90; end: 108392adb;  */

void FUN_108392a90(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = param_1 + 0x10;
  uStack_28 = param_2;
  func_0x0001081efc58();
  FUN_108392adc(param_1,&uStack_28);
  FUN_1081efc78(&lStack_30);
  return;
}



/* Entry: 108392adc; end: 108392b5f;  */

long * FUN_108392adc(long param_1)

{
  long *plVar1;
  int iVar2;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x000108392c14();
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    plVar1 = (long *)(*unaff_x19 + (long)iVar2 * 8);
    *plVar1 = *unaff_x20;
  }
  else {
    plVar1 = unaff_x19;
    FUN_108392a6c(0x3ff8000000000000);
    plVar1 = plVar1 + (int)unaff_x19[1];
    *plVar1 = *unaff_x20;
    FUN_108392a00();
    iVar2 = (int)unaff_x19[1];
  }
  *(int *)(unaff_x19 + 1) = iVar2 + 1;
  return plVar1;
}



/* Entry: 108392b60; end: 108392c5b;  */

undefined8 * FUN_108392b60(void)

{
  undefined8 in_stack_00000008;
  
  FUN_1081efca4(in_stack_00000008);
  return &stack0x00000008;
}



/* Entry: 108392c5c; end: 108392d0b;  */

void FUN_108392c5c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x10) - 500U < 0x1d) {
    (**(code **)(*param_2 + 0x38))();
  }
  else {
    (**(code **)(*param_2 + 0x38))(param_2,0);
    plVar3 = (long *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 0x20);
    plVar1 = (long *)*plVar3;
    if (-1 < *(char *)((long)plVar3 + 0x17)) {
      plVar1 = plVar3;
    }
    lVar4 = (long)plVar1;
    _strlen(plVar1);
    (**(code **)(*param_2 + 0x50))(param_2,plVar1,lVar4);
  }
  FUN_108392d0c(param_2,*(undefined8 *)(param_1 + 0x18));
  lVar4 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x0001083953a0();
  (**(code **)(*param_2 + 0x38))();
  for (lVar4 = (lVar2 - lVar4 >> 3) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    (**(code **)(*unaff_x20 + 0x58))(unaff_x20,*unaff_x19);
    unaff_x19 = unaff_x19 + 1;
  }
  return;
}



/* Entry: 108392d0c; end: 108392d2f;  */

void FUN_108392d0c(long *param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108392d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))
              (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108392d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 108392d30; end: 108392ea7;  */

void FUN_108392d30(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long alStack_d8 [15];
  undefined1 uStack_5f;
  int *piStack_58;
  
  FUN_1083431b0(alStack_d8);
  iVar1 = *(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + 8) + 0x30);
  iVar2 = *(int *)(alStack_d8[0] + 0xc);
  FUN_108392f34(alStack_d8);
  if (iVar1 <= iVar2) {
    lVar5 = *(long *)(param_1 + 0x10);
    FUN_108393498(lVar5,0);
    if (lVar5 != 0) {
      piStack_58 = *(int **)(param_1 + 0x18);
      lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
      lVar7 = (*(long *)(*(long *)(param_1 + 0x10) + 0x48) - lVar6) / 0x28;
      if (piStack_58 != (int *)0x0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
          if (bVar4) {
            *piStack_58 = *piStack_58 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_1083935fc(lVar6,lVar7,&piStack_58,0,param_2[3],param_2[1]);
      FUN_108154c48(&piStack_58);
      FUN_1083be2e8(alStack_d8,0x113254e20);
      uStack_5f = 1;
      lStack_f8 = *(long *)(param_1 + 0x20);
      lStack_f0 = *(long *)(param_1 + 0x28) - lStack_f8 >> 3;
      lStack_e8 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
      lStack_e0 = *(long *)(*(long *)(param_1 + 0x10) + 0x78) - lStack_e8 >> 3;
      uStack_138 = *param_2;
      uStack_130 = param_2[1];
      ppuStack_140 = &PTR_FUN_110a3fb50;
      uStack_128 = *(undefined4 *)(param_2 + 2);
      uStack_120 = param_2[3];
      uStack_118 = 0;
      uStack_108 = param_2[6];
      uStack_110 = 0;
      plStack_100 = alStack_d8;
      FUN_1083faefc(lVar5,uStack_138,uStack_130,&ppuStack_140,lVar6,lVar7);
    }
  }
  return;
}



/* Entry: 108392ea8; end: 108392eab;  */

undefined8 * FUN_108392ea8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3fa90;
  func_0x000108166098(param_1 + 4);
  FUN_108154c48(param_1 + 3);
  FUN_108154c00(param_1 + 2);
  return param_1;
}



/* Entry: 108392eac; end: 108392ebf;  */

void FUN_108392eac(void)

{
  FUN_108392eec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108392ec0; end: 108392eeb;  */

undefined8 FUN_108392ec0(void)

{
  return 0;
}



/* Entry: 108392eec; end: 108392f33;  */

undefined8 * FUN_108392eec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3fa90;
  func_0x000108166098(param_1 + 4);
  FUN_108154c48(param_1 + 3);
  FUN_108154c00(param_1 + 2);
  return param_1;
}



/* Entry: 108392f34; end: 108392f83;  */

long * FUN_108392f34(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108392f84; end: 1083931fb;  */

void FUN_108392f84(undefined8 *param_1,byte *param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar8;
  *(undefined8 *)((long)param_1 + 0x1c) = 1;
  pbVar6 = *(byte **)(param_2 + 0x20);
  pbVar3 = param_2;
  func_0x0001083953dc(*(undefined8 *)(*(long *)pbVar6 + 0xe0));
  bVar1 = (int)pbVar3 != 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 4) = 1;
    func_0x0001083953dc(*(undefined8 *)(*(long *)pbVar6 + 0x60));
    *(int *)((long)param_1 + 0x1c) = (int)pbVar3;
    func_0x000108395348();
    pbVar6 = pbVar3;
  }
  uVar7 = (uint)bVar1;
  func_0x000108395348();
  (**(code **)(*(long *)pbVar3 + 0x40))();
  if ((((uint)pbVar3 < 3) || (pbVar6[0x2c] == 6)) &&
     (func_0x0001083953dc(*(undefined8 *)(*(long *)pbVar6 + 0x110)), (int)pbVar3 < 0x20)) {
    uVar7 = uVar7 | 0x10;
    *(uint *)(param_1 + 4) = uVar7;
  }
  func_0x0001083951c4();
  if ((((ulong)pbVar3 & 1) == 0) && (func_0x0001083951c4(), ((ulong)pbVar3 & 1) == 0)) {
    func_0x0001083951c4();
    if ((((ulong)pbVar3 & 1) == 0) && (func_0x0001083951c4(), ((ulong)pbVar3 & 1) == 0)) {
      func_0x0001083951c4();
      if ((((ulong)pbVar3 & 1) == 0) && (func_0x0001083951c4(), ((ulong)pbVar3 & 1) == 0)) {
        func_0x0001083951c4();
        if ((((ulong)pbVar3 & 1) == 0) && (func_0x0001083951c4(), ((ulong)pbVar3 & 1) == 0)) {
          func_0x0001083951c4();
          if ((((ulong)pbVar3 & 1) == 0) && (func_0x0001083951c4(), ((ulong)pbVar3 & 1) == 0)) {
            func_0x0001083951c4();
            if ((((ulong)pbVar3 & 1) == 0) && (func_0x0001083951c4(), ((ulong)pbVar3 & 1) == 0)) {
              func_0x0001083951c4();
              if ((((ulong)pbVar3 & 1) == 0) && (func_0x0001083951c4(), ((ulong)pbVar3 & 1) == 0)) {
                func_0x0001083951c4();
                if (((ulong)pbVar3 & 1) == 0) {
                  func_0x0001083951c4();
                  if (((ulong)pbVar3 & 1) == 0) {
                    func_0x0001083951c4();
                    iVar2 = (int)pbVar3;
                    if (((ulong)pbVar3 & 1) == 0) {
                      func_0x0001083951c4();
                      if (iVar2 == 0) goto LAB_108393060;
                      uVar4 = 10;
                    }
                    else {
                      uVar4 = 9;
                    }
                  }
                  else {
                    uVar4 = 8;
                  }
                }
                else {
                  uVar4 = 7;
                }
              }
              else {
                uVar4 = 6;
              }
            }
            else {
              uVar4 = 5;
            }
          }
          else {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 3) = uVar4;
LAB_108393060:
  (**(code **)(*(long *)param_2 + 0x18))();
  if ((*param_2 >> 3 & 1) != 0) {
    *(uint *)(param_1 + 4) = uVar7 | 2;
  }
  lVar5 = *param_4;
  param_1[2] = lVar5;
  FUN_1083931fc();
  *param_4 = (long)param_1 + lVar5;
  return;
}



/* Entry: 1083931fc; end: 10839325b;  */

long FUN_1083931fc(long param_1)

{
  code *pcVar1;
  
  if (*(uint *)(param_1 + 0x18) < 0xb) {
    return *(long *)(&UNK_10df1e460 + (ulong)*(uint *)(param_1 + 0x18) * 8) *
           (long)*(int *)(param_1 + 0x1c);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108393224);
  (*pcVar1)();
}



/* Entry: 10839325c; end: 108393303;  */

void FUN_10839325c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a4 [100];
  
  if (param_5 == 0) {
    uVar1 = *param_4;
    *param_4 = 0;
    *param_1 = uVar1;
  }
  else {
    func_0x0001083953ac();
    FUN_108343afc();
    func_0x0001083953f0(auStack_a4,param_2,3,param_5);
    uVar1 = *param_4;
    *param_4 = 0;
    FUN_108393304(param_1);
    func_0x000108394ab8(uVar1);
  }
  return;
}



/* Entry: 108393304; end: 108393497;  */

long FUN_108393304(undefined8 *param_1,long param_2,long *param_3,long *param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  char cStack_151;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
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
  long *plStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  lVar6 = 0;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2 + (long)param_3 * 0x28;
  for (; uVar2 = param_2 == lVar8, !(bool)uVar2; param_2 = param_2 + 0x28) {
    if (((*(byte *)(param_2 + 0x20) >> 1 & 1) != 0) &&
       (uVar3 = param_5, FUN_10828b104(), (int)uVar3 != 0)) {
      if (lVar6 == 0) {
        param_3 = *(long **)(*param_4 + 0x20);
        FUN_108346318(&lStack_78,*(undefined8 *)(*param_4 + 0x18));
        lVar6 = lStack_78;
        func_0x000108394a70(0);
        func_0x000108394a70(0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + 0x18) + *(long *)(param_2 + 0x10));
      if (*(int *)(param_2 + 0x18) == 3) {
        for (iVar9 = 0; iVar9 < *(int *)(param_2 + 0x1c); iVar9 = iVar9 + 1) {
          param_3 = plVar7;
          FUN_1083441a4(param_5);
          plVar7 = plVar7 + 2;
        }
      }
      else {
        for (iVar9 = 0; iVar9 < *(int *)(param_2 + 0x1c); iVar9 = iVar9 + 1) {
          lStack_78 = *plVar7;
          uStack_70 = (undefined4)plVar7[1];
          uStack_6c = 0x3f800000;
          param_3 = &lStack_78;
          FUN_1083441a4(param_5);
          *(undefined4 *)(plVar7 + 1) = uStack_70;
          *plVar7 = lStack_78;
          plVar7 = (long *)((long)plVar7 + 0xc);
        }
      }
    }
  }
  if ((lVar6 != 0) || (uVar3 = 0, *param_4 != 0)) {
    do {
      func_0x000108395214();
      uVar3 = extraout_x8;
    } while (extraout_w10 != 0);
  }
  *param_1 = uVar3;
  func_0x000108394a70();
  func_0x000108395404(uStack_68);
  if ((bool)uVar2) {
    return lVar6;
  }
  ___stack_chk_fail();
  lVar8 = 0;
  func_0x000108394a70();
  func_0x000108395268();
  uStack_98 = 0;
  pcStack_88 = FUN_108393498;
  pcVar1 = (char *)(lVar8 + 0x30);
  cStack_151 = *pcVar1;
  if (cStack_151 != '\0') goto LAB_1083935dc;
  pcVar4 = pcVar1;
  uStack_b0 = param_5;
  plStack_a8 = param_4;
  lStack_a0 = lVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_10825bc50(pcVar1,&cStack_151,1,0,0);
  if ((int)pcVar4 == 0) {
    do {
      cStack_151 = *pcVar1;
LAB_1083935dc:
    } while (cStack_151 != '\x02');
  }
  else {
    if ((*(byte *)(lVar8 + 0x89) & 1) == 0) {
      FUN_1083c4fac(&ppuStack_148);
      *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0x20) + 8) + 0x20) = 0x32;
      do {
        uVar5 = *(ulong *)(lVar8 + 0x20);
        FUN_1083f5748();
      } while ((uVar5 & 1) != 0);
      FUN_1083c50f0(&ppuStack_148);
    }
    ppuStack_148 = &PTR_FUN_110a47220;
    uStack_140 = 1;
    uStack_138 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    if (param_3 == (long *)0x0) {
      FUN_1084021f8(&uStack_150,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x38),0,0);
    }
    else {
      FUN_1084021f8(&uStack_150,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x38),param_3,
                    1);
    }
    uVar3 = uStack_150;
    uStack_150 = 0;
    FUN_108394ae8(lVar8 + 0x28,uVar3);
    FUN_108394ac4(&uStack_150);
    FUN_108394b1c(&ppuStack_148);
    *pcVar1 = '\x02';
  }
  return *(long *)(lVar8 + 0x28);
}



/* Entry: 108393498; end: 1083935fb;  */

undefined8 FUN_108393498(long param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  char cStack_d1;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar1 = (char *)(param_1 + 0x30);
  cStack_d1 = *pcVar1;
  if (cStack_d1 != '\0') goto LAB_1083935dc;
  pcVar3 = pcVar1;
  FUN_10825bc50(pcVar1,&cStack_d1,1,0,0);
  if ((int)pcVar3 == 0) {
    do {
      cStack_d1 = *pcVar1;
LAB_1083935dc:
    } while (cStack_d1 != '\x02');
  }
  else {
    if ((*(byte *)(param_1 + 0x89) & 1) == 0) {
      FUN_1083c4fac(&ppuStack_c8);
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x20) = 0x32;
      do {
        uVar4 = *(ulong *)(param_1 + 0x20);
        FUN_1083f5748();
      } while ((uVar4 & 1) != 0);
      FUN_1083c50f0(&ppuStack_c8);
    }
    ppuStack_c8 = &PTR_FUN_110a47220;
    uStack_c0 = 1;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    if (param_2 == 0) {
      FUN_1084021f8(&uStack_d0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),0,0);
    }
    else {
      FUN_1084021f8(&uStack_d0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),
                    param_2,1);
    }
    uVar2 = uStack_d0;
    uStack_d0 = 0;
    FUN_108394ae8(param_1 + 0x28,uVar2);
    FUN_108394ac4(&uStack_d0);
    FUN_108394b1c(&ppuStack_c8);
    *pcVar1 = '\x02';
  }
  return *(undefined8 *)(param_1 + 0x28);
}


