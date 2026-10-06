/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109ad2294; end: 109ad23b7;  */

undefined4 * FUN_109ad2294(undefined4 *param_1,undefined4 param_2,uint param_3,undefined1 param_4)

{
  long lVar1;
  float fVar2;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 10) = param_4;
  FUN_109ad1bc4();
  lVar1 = 0;
  do {
    fVar2 = *(float *)(&UNK_10e02f29c + lVar1);
    *(float *)((long)param_1 + lVar1 + (ulong)(param_3 ^ 2) * 0xc + 4) =
         *(float *)(&UNK_10e02f2a8 + lVar1) * fVar2;
    *(float *)((long)param_1 + lVar1 + 0x10) = fVar2 * *(float *)(&UNK_10e02f2b4 + lVar1);
    *(float *)((long)param_1 + lVar1 + (ulong)param_3 * 0xc + 4) =
         fVar2 * *(float *)(&UNK_10e02f2c0 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0xc);
  return param_1;
}



/* Entry: 109ad23b8; end: 109ad23bf;  */

void FUN_109ad23b8(void)

{
  return;
}



/* Entry: 109ad2798; end: 109ad279f;  */

void FUN_109ad2798(void)

{
  return;
}



/* Entry: 109ad27a0; end: 109ad28ff;  */

void FUN_109ad27a0(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int *piVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined2 *puVar18;
  undefined8 uVar19;
  
  iVar14 = *param_2;
  iVar2 = param_2[1];
  if (iVar14 < iVar2) {
    lVar13 = *(long *)(param_1 + 8);
    lVar16 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(lVar16 + 0x50);
    lVar15 = *(long *)(lVar16 + 0x10) + **(long **)(lVar16 + 0x48) * (long)iVar14;
    lVar5 = *(long *)(lVar13 + 0x50);
    lVar16 = *(long *)(lVar13 + 0x10) + **(long **)(lVar13 + 0x48) * (long)iVar14;
    piVar9 = *(int **)(param_1 + 0x18);
    uVar6 = *(uint *)(lVar13 + 0xc);
    uVar17 = (ulong)piVar9[2];
    iVar1 = *piVar9;
    iVar3 = piVar9[1];
    puVar10 = (undefined2 *)(lVar16 + 4);
    puVar11 = (undefined2 *)(lVar15 + 4);
    do {
      if (iVar3 == 3) {
        if (0 < (int)uVar6) {
          uVar12 = 0;
          puVar18 = puVar11;
          lVar13 = lVar16;
          do {
            uVar7 = *(undefined2 *)(lVar13 + 2);
            uVar8 = *(undefined2 *)(lVar13 + (uVar17 ^ 2) * 2);
            puVar18[-2] = *(undefined2 *)(lVar13 + uVar17 * 2);
            puVar18[-1] = uVar7;
            *puVar18 = uVar8;
            uVar12 = uVar12 + 3;
            lVar13 = lVar13 + (long)iVar1 * 2;
            puVar18 = puVar18 + 3;
          } while (uVar12 < (ulong)uVar6 * 3);
        }
      }
      else if (iVar1 == 3) {
        if (0 < (int)uVar6) {
          uVar12 = 0;
          puVar18 = puVar10;
          lVar13 = lVar15;
          do {
            uVar8 = puVar18[-1];
            uVar7 = *puVar18;
            *(undefined2 *)(lVar13 + uVar17 * 2) = puVar18[-2];
            *(undefined2 *)(lVar13 + 2) = uVar8;
            *(undefined2 *)(lVar13 + (uVar17 ^ 2) * 2) = uVar7;
            *(undefined2 *)(lVar13 + 6) = 0xffff;
            uVar12 = uVar12 + 3;
            lVar13 = lVar13 + 8;
            puVar18 = puVar18 + 3;
          } while (uVar12 < (ulong)uVar6 * 3);
        }
      }
      else if (0 < (int)uVar6) {
        lVar13 = 0;
        uVar12 = 0;
        do {
          uVar19 = NEON_rev32(*(undefined8 *)(lVar16 + lVar13),2);
          uVar19 = NEON_ext(uVar19,uVar19,6,1);
          *(undefined8 *)(lVar15 + lVar13) = uVar19;
          uVar12 = uVar12 + 4;
          lVar13 = lVar13 + 8;
        } while (uVar12 < uVar6 << 2);
      }
      iVar14 = iVar14 + 1;
      lVar16 = lVar16 + lVar5;
      lVar15 = lVar15 + lVar4;
      puVar10 = (undefined2 *)((long)puVar10 + lVar5);
      puVar11 = (undefined2 *)((long)puVar11 + lVar4);
    } while (iVar14 != iVar2);
  }
  return;
}



/* Entry: 109ad2900; end: 109ad2907;  */

void FUN_109ad2900(void)

{
  return;
}



/* Entry: 109ad2908; end: 109ad2a4f;  */

void FUN_109ad2908(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  
  iVar12 = *param_2;
  iVar2 = param_2[1];
  if (iVar12 < iVar2) {
    lVar11 = *(long *)(param_1 + 8);
    lVar14 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(lVar14 + 0x50);
    lVar13 = *(long *)(lVar14 + 0x10) + **(long **)(lVar14 + 0x48) * (long)iVar12;
    lVar5 = *(long *)(lVar11 + 0x50);
    lVar14 = *(long *)(lVar11 + 0x10) + **(long **)(lVar11 + 0x48) * (long)iVar12;
    piVar7 = *(int **)(param_1 + 0x18);
    uVar6 = *(uint *)(lVar11 + 0xc);
    uVar15 = (ulong)piVar7[2];
    iVar1 = *piVar7;
    iVar3 = piVar7[1];
    puVar8 = (undefined4 *)(lVar14 + 8);
    puVar9 = (undefined4 *)(lVar13 + 8);
    do {
      if (iVar3 == 3) {
        if (0 < (int)uVar6) {
          uVar10 = 0;
          puVar16 = puVar9;
          lVar11 = lVar14;
          do {
            uVar18 = *(undefined4 *)(lVar11 + 4);
            uVar19 = *(undefined4 *)(lVar11 + (uVar15 ^ 2) * 4);
            puVar16[-2] = *(undefined4 *)(lVar11 + uVar15 * 4);
            puVar16[-1] = uVar18;
            *puVar16 = uVar19;
            uVar10 = uVar10 + 3;
            lVar11 = lVar11 + (long)iVar1 * 4;
            puVar16 = puVar16 + 3;
          } while (uVar10 < (ulong)uVar6 * 3);
        }
      }
      else if (iVar1 == 3) {
        if (0 < (int)uVar6) {
          uVar10 = 0;
          puVar16 = puVar8;
          lVar11 = lVar13;
          do {
            uVar18 = puVar16[-1];
            uVar19 = *puVar16;
            *(undefined4 *)(lVar11 + uVar15 * 4) = puVar16[-2];
            *(undefined4 *)(lVar11 + 4) = uVar18;
            *(undefined4 *)(lVar11 + (uVar15 ^ 2) * 4) = uVar19;
            *(undefined4 *)(lVar11 + 0xc) = 0x3f800000;
            uVar10 = uVar10 + 3;
            lVar11 = lVar11 + 0x10;
            puVar16 = puVar16 + 3;
          } while (uVar10 < (ulong)uVar6 * 3);
        }
      }
      else if (0 < (int)uVar6) {
        lVar11 = 0;
        uVar10 = 0;
        do {
          auVar17 = NEON_rev64(*(undefined1 (*) [16])(lVar14 + lVar11),4);
          auVar17 = NEON_ext(auVar17,auVar17,0xc,1);
          ((undefined8 *)(lVar13 + lVar11))[1] = auVar17._8_8_;
          *(undefined8 *)(lVar13 + lVar11) = auVar17._0_8_;
          uVar10 = uVar10 + 4;
          lVar11 = lVar11 + 0x10;
        } while (uVar10 < uVar6 << 2);
      }
      iVar12 = iVar12 + 1;
      lVar14 = lVar14 + lVar5;
      lVar13 = lVar13 + lVar4;
      puVar8 = (undefined4 *)((long)puVar8 + lVar5);
      puVar9 = (undefined4 *)((long)puVar9 + lVar4);
    } while (iVar12 != iVar2);
  }
  return;
}



/* Entry: 109ad2a50; end: 109ad2a57;  */

void FUN_109ad2a50(void)

{
  return;
}



/* Entry: 109ad2e10; end: 109ad2e17;  */

void FUN_109ad2e10(void)

{
  return;
}



/* Entry: 109ad2e18; end: 109ad30d7;  */

void FUN_109ad2e18(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  unkbyte9 Var18;
  ulong uVar19;
  ushort *puVar20;
  undefined1 (*pauVar21) [16];
  unkbyte9 *pVar22;
  int iVar23;
  undefined1 *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  undefined1 *puVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  char cVar38;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  undefined1 auVar66 [16];
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  char acStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar23 = *param_2;
  if (iVar23 < param_2[1]) {
    lVar26 = *(long *)(param_1 + 8);
    puVar24 = (undefined1 *)
              (*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
              **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar23);
    lVar25 = *(long *)(lVar26 + 0x10) + **(long **)(lVar26 + 0x48) * (long)iVar23;
    do {
      piVar28 = *(int **)(param_1 + 0x18);
      uVar4 = *(uint *)(lVar26 + 0xc);
      iVar1 = *piVar28;
      lVar26 = (long)iVar1;
      uVar2 = piVar28[1];
      uVar3 = (ulong)(int)uVar2;
      if (piVar28[2] == 6) {
        puVar29 = puVar24;
        if ((int)uVar4 < 0x10) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0;
          pauVar21 = (undefined1 (*) [16])(lVar25 + 0x10);
          do {
            uVar13 = *(undefined8 *)(pauVar21[-1] + 8);
            uVar12 = *(undefined8 *)pauVar21[-1];
            Var18 = *(unkbyte9 *)pauVar21[-1];
            auVar41 = *pauVar21;
            uVar15 = *(undefined8 *)(piVar28 + 6);
            bVar79 = (byte)((ulong)uVar15 >> 0x10);
            bVar80 = (byte)((ulong)uVar15 >> 0x20);
            bVar81 = (byte)((ulong)uVar15 >> 0x30);
            uVar14 = *(undefined8 *)(piVar28 + 4);
            bVar75 = (byte)((ulong)uVar14 >> 0x10);
            bVar76 = (byte)((ulong)uVar14 >> 0x20);
            bVar77 = (byte)((ulong)uVar14 >> 0x30);
            uVar17 = *(undefined8 *)(piVar28 + 10);
            bVar62 = (byte)((ulong)uVar17 >> 0x10);
            bVar63 = (byte)((ulong)uVar17 >> 0x20);
            bVar64 = (byte)((ulong)uVar17 >> 0x30);
            uVar16 = *(undefined8 *)(piVar28 + 8);
            bVar58 = (byte)((ulong)uVar16 >> 0x10);
            bVar59 = (byte)((ulong)uVar16 >> 0x20);
            bVar60 = (byte)((ulong)uVar16 >> 0x30);
            bVar30 = (byte)uVar14 & (byte)((ushort)uVar12 >> 3);
            bVar31 = bVar75 & (byte)((ushort)((ulong)uVar12 >> 0x10) >> 3);
            bVar32 = bVar76 & (byte)((ushort)((ulong)uVar12 >> 0x20) >> 3);
            bVar33 = bVar77 & (byte)(ushort)((ulong)uVar12 >> 0x33);
            bVar34 = (byte)uVar15 & (byte)((ushort)uVar13 >> 3);
            bVar35 = bVar79 & (byte)((ushort)((ulong)uVar13 >> 0x10) >> 3);
            bVar36 = bVar80 & (byte)((ushort)((ulong)uVar13 >> 0x20) >> 3);
            bVar37 = bVar81 & (byte)(ushort)((ulong)uVar13 >> 0x33);
            bVar74 = (byte)(auVar41._0_2_ >> 3) & (byte)uVar14;
            bVar75 = (byte)(auVar41._2_2_ >> 3) & bVar75;
            bVar76 = (byte)(auVar41._4_2_ >> 3) & bVar76;
            bVar77 = (byte)(auVar41._6_2_ >> 3) & bVar77;
            bVar78 = (byte)(auVar41._8_2_ >> 3) & (byte)uVar15;
            bVar79 = (byte)(auVar41._10_2_ >> 3) & bVar79;
            bVar80 = (byte)(auVar41._12_2_ >> 3) & bVar80;
            bVar81 = (byte)(auVar41._14_2_ >> 3) & bVar81;
            cVar38 = (char)Var18 << 3;
            cVar42 = (char)((unkuint9)Var18 >> 0x10) << 3;
            cVar43 = (char)((unkuint9)Var18 >> 0x20) << 3;
            cVar44 = (char)((unkuint9)Var18 >> 0x30) << 3;
            cVar45 = (char)((unkuint9)Var18 >> 0x40) << 3;
            cVar46 = (char)((ulong)uVar13 >> 0x10) << 3;
            cVar47 = (char)((ulong)uVar13 >> 0x20) << 3;
            cVar48 = (char)((ulong)uVar13 >> 0x30) << 3;
            cVar49 = auVar41[0] << 3;
            cVar50 = auVar41[2] << 3;
            cVar51 = auVar41[4] << 3;
            cVar52 = auVar41[6] << 3;
            cVar53 = auVar41[8] << 3;
            cVar54 = auVar41[10] << 3;
            cVar55 = auVar41[0xc] << 3;
            cVar56 = auVar41[0xe] << 3;
            bVar65 = (byte)uVar16 & auVar41[1];
            bVar67 = bVar58 & auVar41[3];
            bVar68 = bVar59 & auVar41[5];
            bVar69 = bVar60 & auVar41[7];
            bVar70 = (byte)uVar17 & auVar41[9];
            bVar71 = bVar62 & auVar41[0xb];
            bVar72 = bVar63 & auVar41[0xd];
            bVar73 = bVar64 & auVar41[0xf];
            bVar57 = (byte)uVar16 & (byte)((ulong)uVar12 >> 8);
            bVar58 = bVar58 & (byte)((ulong)uVar12 >> 0x18);
            bVar59 = bVar59 & (byte)((ulong)uVar12 >> 0x28);
            bVar60 = bVar60 & (byte)((ulong)uVar12 >> 0x38);
            bVar61 = (byte)uVar17 & (byte)((ulong)uVar13 >> 8);
            bVar62 = bVar62 & (byte)((ulong)uVar13 >> 0x18);
            bVar63 = bVar63 & (byte)((ulong)uVar13 >> 0x28);
            bVar64 = bVar64 & (byte)((ulong)uVar13 >> 0x38);
            if (iVar1 == 3) {
              lVar27 = uVar3 * 0x10;
              acStack_40[lVar27 + 8] = cVar49;
              acStack_40[lVar27 + 9] = cVar50;
              acStack_40[lVar27 + 10] = cVar51;
              acStack_40[lVar27 + 0xb] = cVar52;
              acStack_40[lVar27 + 0xc] = cVar53;
              acStack_40[lVar27 + 0xd] = cVar54;
              acStack_40[lVar27 + 0xe] = cVar55;
              acStack_40[lVar27 + 0xf] = cVar56;
              acStack_40[lVar27] = cVar38;
              acStack_40[lVar27 + 1] = cVar42;
              acStack_40[lVar27 + 2] = cVar43;
              acStack_40[lVar27 + 3] = cVar44;
              acStack_40[lVar27 + 4] = cVar45;
              acStack_40[lVar27 + 5] = cVar46;
              acStack_40[lVar27 + 6] = cVar47;
              acStack_40[lVar27 + 7] = cVar48;
              uStack_28 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar79,CONCAT14(bVar78,CONCAT13(
                                                  bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74)))))
                                                  ));
              uStack_30 = CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar34,CONCAT13(
                                                  bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)))))
                                                  ));
              lVar27 = (long)(int)(uVar2 ^ 2) * 0x10;
              *(ulong *)(acStack_40 + lVar27 + 8) =
                   CONCAT17(bVar73,CONCAT16(bVar72,CONCAT15(bVar71,CONCAT14(bVar70,CONCAT13(bVar69,
                                                  CONCAT12(bVar68,CONCAT11(bVar67,bVar65)))))));
              *(ulong *)(acStack_40 + lVar27) =
                   CONCAT17(bVar64,CONCAT16(bVar63,CONCAT15(bVar62,CONCAT14(bVar61,CONCAT13(bVar60,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57)))))));
              *puVar29 = (char)acStack_40._0_8_;
              puVar29[1] = (undefined1)uStack_30;
              puVar29[2] = (char)uStack_20;
              puVar29[3] = SUB81(acStack_40._0_8_,1);
              puVar29[4] = uStack_30._1_1_;
              puVar29[5] = (char)((ulong)uStack_20 >> 8);
              puVar29[6] = SUB81(acStack_40._0_8_,2);
              puVar29[7] = uStack_30._2_1_;
              puVar29[8] = (char)((ulong)uStack_20 >> 0x10);
              puVar29[9] = SUB81(acStack_40._0_8_,3);
              puVar29[10] = uStack_30._3_1_;
              puVar29[0xb] = (char)((ulong)uStack_20 >> 0x18);
              puVar29[0xc] = SUB81(acStack_40._0_8_,4);
              puVar29[0xd] = uStack_30._4_1_;
              puVar29[0xe] = (char)((ulong)uStack_20 >> 0x20);
              puVar29[0xf] = SUB81(acStack_40._0_8_,5);
              puVar29[0x10] = uStack_30._5_1_;
              puVar29[0x11] = (char)((ulong)uStack_20 >> 0x28);
              puVar29[0x12] = SUB81(acStack_40._0_8_,6);
              puVar29[0x13] = uStack_30._6_1_;
              puVar29[0x14] = (char)((ulong)uStack_20 >> 0x30);
              puVar29[0x15] = SUB81(acStack_40._0_8_,7);
              puVar29[0x16] = uStack_30._7_1_;
              puVar29[0x17] = (char)((ulong)uStack_20 >> 0x38);
              puVar29[0x18] = (char)acStack_40._8_8_;
              puVar29[0x19] = (undefined1)uStack_28;
              puVar29[0x1a] = (char)uStack_18;
              puVar29[0x1b] = SUB81(acStack_40._8_8_,1);
              puVar29[0x1c] = uStack_28._1_1_;
              puVar29[0x1d] = (char)((ulong)uStack_18 >> 8);
              puVar29[0x1e] = SUB81(acStack_40._8_8_,2);
              puVar29[0x1f] = uStack_28._2_1_;
              puVar29[0x20] = (char)((ulong)uStack_18 >> 0x10);
              puVar29[0x21] = SUB81(acStack_40._8_8_,3);
              puVar29[0x22] = uStack_28._3_1_;
              puVar29[0x23] = (char)((ulong)uStack_18 >> 0x18);
              puVar29[0x24] = SUB81(acStack_40._8_8_,4);
              puVar29[0x25] = uStack_28._4_1_;
              puVar29[0x26] = (char)((ulong)uStack_18 >> 0x20);
              puVar29[0x27] = SUB81(acStack_40._8_8_,5);
              puVar29[0x28] = uStack_28._5_1_;
              puVar29[0x29] = (char)((ulong)uStack_18 >> 0x28);
              puVar29[0x2a] = SUB81(acStack_40._8_8_,6);
              puVar29[0x2b] = uStack_28._6_1_;
              puVar29[0x2c] = (char)((ulong)uStack_18 >> 0x30);
              puVar29[0x2d] = SUB81(acStack_40._8_8_,7);
              puVar29[0x2e] = uStack_28._7_1_;
              puVar29[0x2f] = (char)((ulong)uStack_18 >> 0x38);
            }
            else {
              lVar27 = uVar3 * 0x10;
              acStack_40[lVar27 + 8] = cVar49;
              acStack_40[lVar27 + 9] = cVar50;
              acStack_40[lVar27 + 10] = cVar51;
              acStack_40[lVar27 + 0xb] = cVar52;
              acStack_40[lVar27 + 0xc] = cVar53;
              acStack_40[lVar27 + 0xd] = cVar54;
              acStack_40[lVar27 + 0xe] = cVar55;
              acStack_40[lVar27 + 0xf] = cVar56;
              acStack_40[lVar27] = cVar38;
              acStack_40[lVar27 + 1] = cVar42;
              acStack_40[lVar27 + 2] = cVar43;
              acStack_40[lVar27 + 3] = cVar44;
              acStack_40[lVar27 + 4] = cVar45;
              acStack_40[lVar27 + 5] = cVar46;
              acStack_40[lVar27 + 6] = cVar47;
              acStack_40[lVar27 + 7] = cVar48;
              uStack_28 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar79,CONCAT14(bVar78,CONCAT13(
                                                  bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74)))))
                                                  ));
              uStack_30 = CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar34,CONCAT13(
                                                  bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)))))
                                                  ));
              lVar27 = (long)(int)(uVar2 ^ 2) * 0x10;
              *(ulong *)(acStack_40 + lVar27 + 8) =
                   CONCAT17(bVar73,CONCAT16(bVar72,CONCAT15(bVar71,CONCAT14(bVar70,CONCAT13(bVar69,
                                                  CONCAT12(bVar68,CONCAT11(bVar67,bVar65)))))));
              *(ulong *)(acStack_40 + lVar27) =
                   CONCAT17(bVar64,CONCAT16(bVar63,CONCAT15(bVar62,CONCAT14(bVar61,CONCAT13(bVar60,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57)))))));
              auVar41 = *(undefined1 (*) [16])(piVar28 + 0x10);
              *puVar29 = (char)acStack_40._0_8_;
              puVar29[1] = (undefined1)uStack_30;
              puVar29[2] = (char)uStack_20;
              puVar29[3] = auVar41[0];
              puVar29[4] = SUB81(acStack_40._0_8_,1);
              puVar29[5] = uStack_30._1_1_;
              puVar29[6] = (char)((ulong)uStack_20 >> 8);
              puVar29[7] = auVar41[1];
              puVar29[8] = SUB81(acStack_40._0_8_,2);
              puVar29[9] = uStack_30._2_1_;
              puVar29[10] = (char)((ulong)uStack_20 >> 0x10);
              puVar29[0xb] = auVar41[2];
              puVar29[0xc] = SUB81(acStack_40._0_8_,3);
              puVar29[0xd] = uStack_30._3_1_;
              puVar29[0xe] = (char)((ulong)uStack_20 >> 0x18);
              puVar29[0xf] = auVar41[3];
              puVar29[0x10] = SUB81(acStack_40._0_8_,4);
              puVar29[0x11] = uStack_30._4_1_;
              puVar29[0x12] = (char)((ulong)uStack_20 >> 0x20);
              puVar29[0x13] = auVar41[4];
              puVar29[0x14] = SUB81(acStack_40._0_8_,5);
              puVar29[0x15] = uStack_30._5_1_;
              puVar29[0x16] = (char)((ulong)uStack_20 >> 0x28);
              puVar29[0x17] = auVar41[5];
              puVar29[0x18] = SUB81(acStack_40._0_8_,6);
              puVar29[0x19] = uStack_30._6_1_;
              puVar29[0x1a] = (char)((ulong)uStack_20 >> 0x30);
              puVar29[0x1b] = auVar41[6];
              puVar29[0x1c] = SUB81(acStack_40._0_8_,7);
              puVar29[0x1d] = uStack_30._7_1_;
              puVar29[0x1e] = (char)((ulong)uStack_20 >> 0x38);
              puVar29[0x1f] = auVar41[7];
              puVar29[0x20] = (char)acStack_40._8_8_;
              puVar29[0x21] = (undefined1)uStack_28;
              puVar29[0x22] = (char)uStack_18;
              puVar29[0x23] = auVar41[8];
              puVar29[0x24] = SUB81(acStack_40._8_8_,1);
              puVar29[0x25] = uStack_28._1_1_;
              puVar29[0x26] = (char)((ulong)uStack_18 >> 8);
              puVar29[0x27] = auVar41[9];
              puVar29[0x28] = SUB81(acStack_40._8_8_,2);
              puVar29[0x29] = uStack_28._2_1_;
              puVar29[0x2a] = (char)((ulong)uStack_18 >> 0x10);
              puVar29[0x2b] = auVar41[10];
              puVar29[0x2c] = SUB81(acStack_40._8_8_,3);
              puVar29[0x2d] = uStack_28._3_1_;
              puVar29[0x2e] = (char)((ulong)uStack_18 >> 0x18);
              puVar29[0x2f] = auVar41[0xb];
              puVar29[0x30] = SUB81(acStack_40._8_8_,4);
              puVar29[0x31] = uStack_28._4_1_;
              puVar29[0x32] = (char)((ulong)uStack_18 >> 0x20);
              puVar29[0x33] = auVar41[0xc];
              puVar29[0x34] = SUB81(acStack_40._8_8_,5);
              puVar29[0x35] = uStack_28._5_1_;
              puVar29[0x36] = (char)((ulong)uStack_18 >> 0x28);
              puVar29[0x37] = auVar41[0xd];
              puVar29[0x38] = SUB81(acStack_40._8_8_,6);
              puVar29[0x39] = uStack_28._6_1_;
              puVar29[0x3a] = (char)((ulong)uStack_18 >> 0x30);
              puVar29[0x3b] = auVar41[0xe];
              puVar29[0x3c] = SUB81(acStack_40._8_8_,7);
              puVar29[0x3d] = uStack_28._7_1_;
              puVar29[0x3e] = (char)((ulong)uStack_18 >> 0x38);
              puVar29[0x3f] = auVar41[0xf];
            }
            pauVar21 = pauVar21 + 2;
            uVar19 = uVar19 + 0x10;
            puVar29 = puVar29 + lVar26 * 0x10;
          } while (uVar19 <= uVar4 - 0x10);
          uVar19 = uVar19 & 0xffffffff;
        }
        if ((int)uVar19 < (int)uVar4) {
          lVar27 = uVar4 - uVar19;
          puVar20 = (ushort *)(lVar25 + uVar19 * 2);
          do {
            uVar5 = *puVar20;
            puVar29[uVar3] = (char)uVar5 << 3;
            puVar29[1] = (byte)(uVar5 >> 3) & 0xfc;
            puVar29[uVar3 ^ 2] = (byte)(uVar5 >> 8) & 0xf8;
            if (iVar1 == 4) {
              puVar29[3] = 0xff;
            }
            puVar29 = puVar29 + lVar26;
            lVar27 = lVar27 + -1;
            puVar20 = puVar20 + 1;
          } while (lVar27 != 0);
        }
      }
      else {
        puVar29 = puVar24;
        if ((int)uVar4 < 0x10) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0;
          pVar22 = (unkbyte9 *)(lVar25 + 0x10);
          do {
            auVar41 = *(undefined1 (*) [16])(pVar22 + -1);
            uVar13 = *(undefined8 *)((long)pVar22 + 8);
            bVar30 = (byte)((ulong)uVar13 >> 0x10);
            bVar31 = (byte)((ulong)uVar13 >> 0x20);
            bVar32 = (byte)((ulong)uVar13 >> 0x30);
            uVar12 = *(undefined8 *)pVar22;
            Var18 = *pVar22;
            cVar38 = auVar41[0] << 3;
            cVar42 = auVar41[2] << 3;
            cVar43 = auVar41[4] << 3;
            cVar44 = auVar41[6] << 3;
            cVar45 = auVar41[8] << 3;
            cVar46 = auVar41[10] << 3;
            cVar47 = auVar41[0xc] << 3;
            cVar48 = auVar41[0xe] << 3;
            cVar49 = (char)Var18 << 3;
            cVar50 = (char)((unkuint9)Var18 >> 0x10) << 3;
            cVar51 = (char)((unkuint9)Var18 >> 0x20) << 3;
            cVar52 = (char)((unkuint9)Var18 >> 0x30) << 3;
            cVar53 = (char)((unkuint9)Var18 >> 0x40) << 3;
            cVar54 = bVar30 << 3;
            cVar55 = bVar31 << 3;
            cVar56 = bVar32 << 3;
            uVar14 = *(undefined8 *)(piVar28 + 10);
            bVar37 = (byte)uVar14;
            bVar57 = (byte)((ulong)uVar14 >> 0x10);
            bVar58 = (byte)((ulong)uVar14 >> 0x20);
            bVar59 = (byte)((ulong)uVar14 >> 0x30);
            uVar14 = *(undefined8 *)(piVar28 + 8);
            bVar33 = (byte)uVar14;
            bVar34 = (byte)((ulong)uVar14 >> 0x10);
            bVar35 = (byte)((ulong)uVar14 >> 0x20);
            bVar36 = (byte)((ulong)uVar14 >> 0x30);
            uVar5 = (ushort)((ulong)uVar12 >> 0x10);
            uVar7 = (ushort)((ulong)uVar12 >> 0x20);
            uVar8 = (ushort)((ulong)uVar12 >> 0x30);
            uVar9 = (ushort)((ulong)uVar13 >> 0x10);
            uVar10 = (ushort)((ulong)uVar13 >> 0x20);
            uVar11 = (ushort)((ulong)uVar13 >> 0x30);
            auVar66._0_8_ =
                 CONCAT17(bVar59 & (byte)(auVar41._14_2_ >> 2),
                          CONCAT16(bVar58 & (byte)(auVar41._12_2_ >> 2),
                                   CONCAT15(bVar57 & (byte)(auVar41._10_2_ >> 2),
                                            CONCAT14(bVar37 & (byte)(auVar41._8_2_ >> 2),
                                                     CONCAT13(bVar36 & (byte)(auVar41._6_2_ >> 2),
                                                              CONCAT12(bVar35 & (byte)(auVar41._4_2_
                                                                                      >> 2),
                                                                       CONCAT11(bVar34 & (byte)(
                                                  auVar41._2_2_ >> 2),
                                                  bVar33 & (byte)(auVar41._0_2_ >> 2))))))));
            auVar66[8] = (byte)((ushort)uVar12 >> 2) & bVar33;
            auVar66[9] = (byte)(uVar5 >> 2) & bVar34;
            auVar66[10] = (byte)(uVar7 >> 2) & bVar35;
            auVar66[0xb] = (byte)(uVar8 >> 2) & bVar36;
            auVar66[0xc] = (byte)((ushort)uVar13 >> 2) & bVar37;
            auVar66[0xd] = (byte)(uVar9 >> 2) & bVar57;
            auVar66[0xe] = (byte)(uVar10 >> 2) & bVar58;
            auVar66[0xf] = (byte)(uVar11 >> 2) & bVar59;
            bVar60 = bVar33 & (byte)(auVar41._0_2_ >> 7);
            bVar61 = bVar34 & (byte)(auVar41._2_2_ >> 7);
            bVar62 = bVar35 & (byte)(auVar41._4_2_ >> 7);
            bVar63 = bVar36 & (byte)(auVar41._6_2_ >> 7);
            bVar64 = bVar37 & (byte)(auVar41._8_2_ >> 7);
            bVar65 = bVar57 & (byte)(auVar41._10_2_ >> 7);
            bVar67 = bVar58 & (byte)(auVar41._12_2_ >> 7);
            bVar68 = bVar59 & (byte)(auVar41._14_2_ >> 7);
            bVar33 = (byte)((ushort)uVar12 >> 7) & bVar33;
            bVar34 = (byte)(uVar5 >> 7) & bVar34;
            bVar35 = (byte)(uVar7 >> 7) & bVar35;
            bVar36 = (byte)(uVar8 >> 7) & bVar36;
            bVar37 = (byte)((ushort)uVar13 >> 7) & bVar37;
            bVar57 = (byte)(uVar9 >> 7) & bVar57;
            bVar58 = (byte)(uVar10 >> 7) & bVar58;
            bVar59 = (byte)(uVar11 >> 7) & bVar59;
            uStack_30 = auVar66._0_8_;
            uStack_28 = auVar66._8_8_;
            if (iVar1 == 3) {
              *(ulong *)(acStack_40 + uVar3 * 0x10 + 8) =
                   CONCAT17(cVar56,CONCAT16(cVar55,CONCAT15(cVar54,CONCAT14(cVar53,CONCAT13(cVar52,
                                                  CONCAT12(cVar51,CONCAT11(cVar50,cVar49)))))));
              *(ulong *)(acStack_40 + uVar3 * 0x10) =
                   CONCAT17(cVar48,CONCAT16(cVar47,CONCAT15(cVar46,CONCAT14(cVar45,CONCAT13(cVar44,
                                                  CONCAT12(cVar43,CONCAT11(cVar42,cVar38)))))));
              lVar27 = (long)(int)(uVar2 ^ 2) * 0x10;
              *(ulong *)(acStack_40 + lVar27 + 8) =
                   CONCAT17(bVar59,CONCAT16(bVar58,CONCAT15(bVar57,CONCAT14(bVar37,CONCAT13(bVar36,
                                                  CONCAT12(bVar35,CONCAT11(bVar34,bVar33)))))));
              *(ulong *)(acStack_40 + lVar27) =
                   CONCAT17(bVar68,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar64,CONCAT13(bVar63,
                                                  CONCAT12(bVar62,CONCAT11(bVar61,bVar60)))))));
              *puVar29 = (char)acStack_40._0_8_;
              puVar29[1] = (undefined1)uStack_30;
              puVar29[2] = (char)uStack_20;
              puVar29[3] = SUB81(acStack_40._0_8_,1);
              puVar29[4] = uStack_30._1_1_;
              puVar29[5] = (char)((ulong)uStack_20 >> 8);
              puVar29[6] = SUB81(acStack_40._0_8_,2);
              puVar29[7] = uStack_30._2_1_;
              puVar29[8] = (char)((ulong)uStack_20 >> 0x10);
              puVar29[9] = SUB81(acStack_40._0_8_,3);
              puVar29[10] = uStack_30._3_1_;
              puVar29[0xb] = (char)((ulong)uStack_20 >> 0x18);
              puVar29[0xc] = SUB81(acStack_40._0_8_,4);
              puVar29[0xd] = uStack_30._4_1_;
              puVar29[0xe] = (char)((ulong)uStack_20 >> 0x20);
              puVar29[0xf] = SUB81(acStack_40._0_8_,5);
              puVar29[0x10] = uStack_30._5_1_;
              puVar29[0x11] = (char)((ulong)uStack_20 >> 0x28);
              puVar29[0x12] = SUB81(acStack_40._0_8_,6);
              puVar29[0x13] = uStack_30._6_1_;
              puVar29[0x14] = (char)((ulong)uStack_20 >> 0x30);
              puVar29[0x15] = SUB81(acStack_40._0_8_,7);
              puVar29[0x16] = uStack_30._7_1_;
              puVar29[0x17] = (char)((ulong)uStack_20 >> 0x38);
              puVar29[0x18] = (char)acStack_40._8_8_;
              puVar29[0x19] = (undefined1)uStack_28;
              puVar29[0x1a] = (char)uStack_18;
              puVar29[0x1b] = SUB81(acStack_40._8_8_,1);
              puVar29[0x1c] = uStack_28._1_1_;
              puVar29[0x1d] = (char)((ulong)uStack_18 >> 8);
              puVar29[0x1e] = SUB81(acStack_40._8_8_,2);
              puVar29[0x1f] = uStack_28._2_1_;
              puVar29[0x20] = (char)((ulong)uStack_18 >> 0x10);
              puVar29[0x21] = SUB81(acStack_40._8_8_,3);
              puVar29[0x22] = uStack_28._3_1_;
              puVar29[0x23] = (char)((ulong)uStack_18 >> 0x18);
              puVar29[0x24] = SUB81(acStack_40._8_8_,4);
              puVar29[0x25] = uStack_28._4_1_;
              puVar29[0x26] = (char)((ulong)uStack_18 >> 0x20);
              puVar29[0x27] = SUB81(acStack_40._8_8_,5);
              puVar29[0x28] = uStack_28._5_1_;
              puVar29[0x29] = (char)((ulong)uStack_18 >> 0x28);
              puVar29[0x2a] = SUB81(acStack_40._8_8_,6);
              puVar29[0x2b] = uStack_28._6_1_;
              puVar29[0x2c] = (char)((ulong)uStack_18 >> 0x30);
              puVar29[0x2d] = SUB81(acStack_40._8_8_,7);
              puVar29[0x2e] = uStack_28._7_1_;
              puVar29[0x2f] = (char)((ulong)uStack_18 >> 0x38);
            }
            else {
              *(ulong *)(acStack_40 + uVar3 * 0x10 + 8) =
                   CONCAT17(cVar56,CONCAT16(cVar55,CONCAT15(cVar54,CONCAT14(cVar53,CONCAT13(cVar52,
                                                  CONCAT12(cVar51,CONCAT11(cVar50,cVar49)))))));
              *(ulong *)(acStack_40 + uVar3 * 0x10) =
                   CONCAT17(cVar48,CONCAT16(cVar47,CONCAT15(cVar46,CONCAT14(cVar45,CONCAT13(cVar44,
                                                  CONCAT12(cVar43,CONCAT11(cVar42,cVar38)))))));
              lVar27 = (long)(int)(uVar2 ^ 2) * 0x10;
              *(ulong *)(acStack_40 + lVar27 + 8) =
                   CONCAT17(bVar59,CONCAT16(bVar58,CONCAT15(bVar57,CONCAT14(bVar37,CONCAT13(bVar36,
                                                  CONCAT12(bVar35,CONCAT11(bVar34,bVar33)))))));
              *(ulong *)(acStack_40 + lVar27) =
                   CONCAT17(bVar68,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar64,CONCAT13(bVar63,
                                                  CONCAT12(bVar62,CONCAT11(bVar61,bVar60)))))));
              uVar15 = *(undefined8 *)(piVar28 + 0xe);
              bVar59 = (byte)((ulong)uVar15 >> 8);
              bVar60 = (byte)((ulong)uVar15 >> 0x10);
              bVar61 = (byte)((ulong)uVar15 >> 0x18);
              bVar62 = (byte)((ulong)uVar15 >> 0x20);
              bVar63 = (byte)((ulong)uVar15 >> 0x28);
              bVar64 = (byte)((ulong)uVar15 >> 0x30);
              bVar65 = (byte)((ulong)uVar15 >> 0x38);
              uVar14 = *(undefined8 *)(piVar28 + 0xc);
              bVar33 = (byte)((ulong)uVar14 >> 8);
              bVar34 = (byte)((ulong)uVar14 >> 0x10);
              bVar35 = (byte)((ulong)uVar14 >> 0x18);
              bVar36 = (byte)((ulong)uVar14 >> 0x20);
              bVar37 = (byte)((ulong)uVar14 >> 0x28);
              bVar57 = (byte)((ulong)uVar14 >> 0x30);
              bVar58 = (byte)((ulong)uVar14 >> 0x38);
              auVar39._0_8_ =
                   CONCAT17(bVar58 & auVar41[7],
                            CONCAT16(bVar57 & auVar41[6],
                                     CONCAT15(bVar37 & auVar41[5],
                                              CONCAT14(bVar36 & auVar41[4],
                                                       CONCAT13(bVar35 & auVar41[3],
                                                                CONCAT12(bVar34 & auVar41[2],
                                                                         CONCAT11(bVar33 & auVar41[1
                                                  ],(byte)uVar14 & auVar41[0])))))));
              auVar39[8] = (byte)uVar15 & auVar41[8];
              auVar39[9] = bVar59 & auVar41[9];
              auVar39[10] = bVar60 & auVar41[10];
              auVar39[0xb] = bVar61 & auVar41[0xb];
              auVar39[0xc] = bVar62 & auVar41[0xc];
              auVar39[0xd] = bVar63 & auVar41[0xd];
              auVar39[0xe] = bVar64 & auVar41[0xe];
              auVar39[0xf] = bVar65 & auVar41[0xf];
              auVar40._8_8_ = auVar39._8_8_;
              auVar40._0_8_ = NEON_uqxtn(auVar39._0_8_,auVar39,2);
              auVar41[1] = bVar33 & (byte)((ulong)uVar12 >> 8);
              auVar41[0] = (byte)uVar14 & (byte)uVar12;
              auVar41[2] = bVar34 & (byte)((ulong)uVar12 >> 0x10);
              auVar41[3] = bVar35 & (byte)((ulong)uVar12 >> 0x18);
              auVar41[4] = bVar36 & (byte)((ulong)uVar12 >> 0x20);
              auVar41[5] = bVar37 & (byte)((ulong)uVar12 >> 0x28);
              auVar41[6] = bVar57 & (byte)((ulong)uVar12 >> 0x30);
              auVar41[7] = bVar58 & (byte)((ulong)uVar12 >> 0x38);
              auVar41[8] = (byte)uVar15 & (byte)uVar13;
              auVar41[9] = bVar59 & (byte)((ulong)uVar13 >> 8);
              auVar41[10] = bVar60 & bVar30;
              auVar41[0xb] = bVar61 & (byte)((ulong)uVar13 >> 0x18);
              auVar41[0xc] = bVar62 & bVar31;
              auVar41[0xd] = bVar63 & (byte)((ulong)uVar13 >> 0x28);
              auVar41[0xe] = bVar64 & bVar32;
              auVar41[0xf] = bVar65 & (byte)((ulong)uVar13 >> 0x38);
              auVar41 = NEON_uqxtn2(auVar40,auVar41,2);
              uVar12 = *(undefined8 *)(piVar28 + 0x16);
              auVar6[9] = (char)((ulong)uVar12 >> 8);
              auVar6._0_9_ = *(unkbyte9 *)(piVar28 + 0x14);
              auVar6[10] = (char)((ulong)uVar12 >> 0x10);
              auVar6[0xb] = (char)((ulong)uVar12 >> 0x18);
              auVar6[0xc] = (char)((ulong)uVar12 >> 0x20);
              auVar6[0xd] = (char)((ulong)uVar12 >> 0x28);
              auVar6[0xe] = (char)((ulong)uVar12 >> 0x30);
              auVar6[0xf] = (char)((ulong)uVar12 >> 0x38);
              auVar41 = *(undefined1 (*) [16])(piVar28 + 0x10) ^
                        (*(undefined1 (*) [16])(piVar28 + 0x10) ^ auVar6) & ~auVar41;
              *puVar29 = (char)acStack_40._0_8_;
              puVar29[1] = (undefined1)uStack_30;
              puVar29[2] = (char)uStack_20;
              puVar29[3] = auVar41[0];
              puVar29[4] = SUB81(acStack_40._0_8_,1);
              puVar29[5] = uStack_30._1_1_;
              puVar29[6] = (char)((ulong)uStack_20 >> 8);
              puVar29[7] = auVar41[1];
              puVar29[8] = SUB81(acStack_40._0_8_,2);
              puVar29[9] = uStack_30._2_1_;
              puVar29[10] = (char)((ulong)uStack_20 >> 0x10);
              puVar29[0xb] = auVar41[2];
              puVar29[0xc] = SUB81(acStack_40._0_8_,3);
              puVar29[0xd] = uStack_30._3_1_;
              puVar29[0xe] = (char)((ulong)uStack_20 >> 0x18);
              puVar29[0xf] = auVar41[3];
              puVar29[0x10] = SUB81(acStack_40._0_8_,4);
              puVar29[0x11] = uStack_30._4_1_;
              puVar29[0x12] = (char)((ulong)uStack_20 >> 0x20);
              puVar29[0x13] = auVar41[4];
              puVar29[0x14] = SUB81(acStack_40._0_8_,5);
              puVar29[0x15] = uStack_30._5_1_;
              puVar29[0x16] = (char)((ulong)uStack_20 >> 0x28);
              puVar29[0x17] = auVar41[5];
              puVar29[0x18] = SUB81(acStack_40._0_8_,6);
              puVar29[0x19] = uStack_30._6_1_;
              puVar29[0x1a] = (char)((ulong)uStack_20 >> 0x30);
              puVar29[0x1b] = auVar41[6];
              puVar29[0x1c] = SUB81(acStack_40._0_8_,7);
              puVar29[0x1d] = uStack_30._7_1_;
              puVar29[0x1e] = (char)((ulong)uStack_20 >> 0x38);
              puVar29[0x1f] = auVar41[7];
              puVar29[0x20] = (char)acStack_40._8_8_;
              puVar29[0x21] = (undefined1)uStack_28;
              puVar29[0x22] = (char)uStack_18;
              puVar29[0x23] = auVar41[8];
              puVar29[0x24] = SUB81(acStack_40._8_8_,1);
              puVar29[0x25] = uStack_28._1_1_;
              puVar29[0x26] = (char)((ulong)uStack_18 >> 8);
              puVar29[0x27] = auVar41[9];
              puVar29[0x28] = SUB81(acStack_40._8_8_,2);
              puVar29[0x29] = uStack_28._2_1_;
              puVar29[0x2a] = (char)((ulong)uStack_18 >> 0x10);
              puVar29[0x2b] = auVar41[10];
              puVar29[0x2c] = SUB81(acStack_40._8_8_,3);
              puVar29[0x2d] = uStack_28._3_1_;
              puVar29[0x2e] = (char)((ulong)uStack_18 >> 0x18);
              puVar29[0x2f] = auVar41[0xb];
              puVar29[0x30] = SUB81(acStack_40._8_8_,4);
              puVar29[0x31] = uStack_28._4_1_;
              puVar29[0x32] = (char)((ulong)uStack_18 >> 0x20);
              puVar29[0x33] = auVar41[0xc];
              puVar29[0x34] = SUB81(acStack_40._8_8_,5);
              puVar29[0x35] = uStack_28._5_1_;
              puVar29[0x36] = (char)((ulong)uStack_18 >> 0x28);
              puVar29[0x37] = auVar41[0xd];
              puVar29[0x38] = SUB81(acStack_40._8_8_,6);
              puVar29[0x39] = uStack_28._6_1_;
              puVar29[0x3a] = (char)((ulong)uStack_18 >> 0x30);
              puVar29[0x3b] = auVar41[0xe];
              puVar29[0x3c] = SUB81(acStack_40._8_8_,7);
              puVar29[0x3d] = uStack_28._7_1_;
              puVar29[0x3e] = (char)((ulong)uStack_18 >> 0x38);
              puVar29[0x3f] = auVar41[0xf];
            }
            pVar22 = pVar22 + 2;
            uVar19 = uVar19 + 0x10;
            puVar29 = puVar29 + lVar26 * 0x10;
          } while (uVar19 <= uVar4 - 0x10);
          uVar19 = uVar19 & 0xffffffff;
        }
        if ((int)uVar19 < (int)uVar4) {
          lVar27 = uVar4 - uVar19;
          puVar20 = (ushort *)(lVar25 + uVar19 * 2);
          do {
            uVar5 = *puVar20;
            puVar29[uVar3] = (char)uVar5 << 3;
            puVar29[1] = (byte)(uVar5 >> 2) & 0xf8;
            puVar29[uVar3 ^ 2] = (byte)(uVar5 >> 7) & 0xf8;
            if (iVar1 == 4) {
              puVar29[3] = (char)((uint)(int)(short)uVar5 >> 0xf);
            }
            puVar29 = puVar29 + lVar26;
            lVar27 = lVar27 + -1;
            puVar20 = puVar20 + 1;
          } while (lVar27 != 0);
        }
      }
      iVar23 = iVar23 + 1;
      lVar26 = *(long *)(param_1 + 8);
      lVar25 = lVar25 + *(long *)(lVar26 + 0x50);
      puVar24 = puVar24 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar23 < param_2[1]);
  }
  return;
}



/* Entry: 109ad30d8; end: 109ad3bef;  */

void FUN_109ad30d8(void)

{
  return;
}



/* Entry: 109ad3bf0; end: 109ad3e63;  */

void FUN_109ad3bf0(long param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [15];
  long lVar22;
  byte *pbVar23;
  int iVar24;
  int *piVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  byte *pbVar29;
  long lVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  int iVar41;
  ulong uVar42;
  undefined1 auVar43 [16];
  int iVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  ushort uVar49;
  undefined2 uVar50;
  short sVar51;
  undefined2 uVar52;
  short sVar53;
  undefined2 uVar54;
  short sVar55;
  undefined2 uVar56;
  short sVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  short sVar70;
  undefined8 uVar66;
  undefined8 uVar67;
  short sVar71;
  ulong uVar68;
  undefined8 uVar69;
  short sVar73;
  short sVar74;
  undefined8 uVar72;
  short sVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  int iVar79;
  int iVar80;
  undefined1 auVar81 [16];
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar93;
  int iVar94;
  undefined1 auVar92 [16];
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  undefined1 auVar103 [16];
  ulong auStack_58 [3];
  undefined1 auVar44 [16];
  
  iVar27 = *param_2;
  if (iVar27 < param_2[1]) {
    lVar30 = *(long *)(param_1 + 8);
    lVar28 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) +
             **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar27;
    pbVar29 = (byte *)(*(long *)(lVar30 + 0x10) + **(long **)(lVar30 + 0x48) * (long)iVar27);
    do {
      piVar25 = *(int **)(param_1 + 0x18);
      iVar7 = *piVar25;
      uVar8 = (ulong)piVar25[1];
      iVar3 = piVar25[2];
      iVar5 = piVar25[3];
      iVar4 = piVar25[4];
      iVar6 = piVar25[5];
      iVar9 = piVar25[6];
      lVar22 = (long)*(int *)(lVar30 + 0xc) * 3;
      pbVar23 = pbVar29;
      if (*(int *)(lVar30 + 0xc) < 8) {
        uVar26 = 0;
      }
      else {
        uVar26 = 0;
        uVar2 = piVar25[1] ^ 2;
        do {
          if (iVar7 == 3) {
            bVar58 = *pbVar23;
            bVar59 = pbVar23[3];
            bVar60 = pbVar23[6];
            bVar61 = pbVar23[9];
            bVar62 = pbVar23[0xc];
            bVar63 = pbVar23[0xf];
            bVar64 = pbVar23[0x12];
            bVar65 = pbVar23[0x15];
            uVar66 = CONCAT17(pbVar23[0x16],
                              CONCAT16(pbVar23[0x13],
                                       CONCAT15(pbVar23[0x10],
                                                CONCAT14(pbVar23[0xd],
                                                         CONCAT13(pbVar23[10],
                                                                  CONCAT12(pbVar23[7],
                                                                           CONCAT11(pbVar23[4],
                                                                                    pbVar23[1]))))))
                             );
            uVar69 = CONCAT17(pbVar23[0x17],
                              CONCAT16(pbVar23[0x14],
                                       CONCAT15(pbVar23[0x11],
                                                CONCAT14(pbVar23[0xe],
                                                         CONCAT13(pbVar23[0xb],
                                                                  CONCAT12(pbVar23[8],
                                                                           CONCAT11(pbVar23[5],
                                                                                    pbVar23[2]))))))
                             );
          }
          else {
            bVar58 = *pbVar23;
            bVar59 = pbVar23[4];
            bVar60 = pbVar23[8];
            bVar61 = pbVar23[0xc];
            bVar62 = pbVar23[0x10];
            bVar63 = pbVar23[0x14];
            bVar64 = pbVar23[0x18];
            bVar65 = pbVar23[0x1c];
            uVar66 = CONCAT17(pbVar23[0x1d],
                              CONCAT16(pbVar23[0x19],
                                       CONCAT15(pbVar23[0x15],
                                                CONCAT14(pbVar23[0x11],
                                                         CONCAT13(pbVar23[0xd],
                                                                  CONCAT12(pbVar23[9],
                                                                           CONCAT11(pbVar23[5],
                                                                                    pbVar23[1]))))))
                             );
            uVar69 = CONCAT17(pbVar23[0x1e],
                              CONCAT16(pbVar23[0x1a],
                                       CONCAT15(pbVar23[0x16],
                                                CONCAT14(pbVar23[0x12],
                                                         CONCAT13(pbVar23[0xe],
                                                                  CONCAT12(pbVar23[10],
                                                                           CONCAT11(pbVar23[6],
                                                                                    pbVar23[2]))))))
                             );
          }
          bVar31 = (byte)((ulong)uVar69 >> 8);
          bVar33 = (byte)((ulong)uVar69 >> 0x10);
          bVar35 = (byte)((ulong)uVar69 >> 0x18);
          auStack_58[2] =
               CONCAT17(0,CONCAT16(bVar35,(uint6)CONCAT14(bVar33,(uint)CONCAT12(bVar31,(ushort)(byte
                                                  )uVar69))));
          auVar21[8] = (char)((ulong)uVar69 >> 0x20);
          auVar21._0_8_ = auStack_58[2];
          auVar21[9] = 0;
          auVar21[10] = (char)((ulong)uVar69 >> 0x28);
          auVar21[0xb] = 0;
          auVar21[0xc] = (char)((ulong)uVar69 >> 0x30);
          auVar21[0xd] = 0;
          auVar21[0xe] = (char)((ulong)uVar69 >> 0x38);
          auVar43[0xf] = 0;
          auVar43._0_15_ = auVar21;
          uVar49 = CONCAT11(0,(byte)uVar66);
          bVar32 = (byte)((ulong)uVar66 >> 8);
          bVar34 = (byte)((ulong)uVar66 >> 0x10);
          bVar36 = (byte)((ulong)uVar66 >> 0x18);
          bVar37 = (byte)((ulong)uVar66 >> 0x20);
          uVar38 = (undefined1)((ulong)uVar66 >> 0x28);
          uVar39 = (undefined1)((ulong)uVar66 >> 0x30);
          uVar40 = (undefined1)((ulong)uVar66 >> 0x38);
          uVar67 = *(undefined8 *)(piVar25 + 8);
          uVar72 = *(undefined8 *)(piVar25 + 10);
          sVar73 = (short)((ulong)uVar72 >> 0x10);
          sVar74 = (short)((ulong)uVar72 >> 0x20);
          sVar75 = (short)((ulong)uVar72 >> 0x30);
          sVar57 = (short)((ulong)uVar67 >> 0x10);
          sVar70 = (short)((ulong)uVar67 >> 0x20);
          sVar71 = (short)((ulong)uVar67 >> 0x30);
          auVar81[1] = 0;
          auVar81[0] = bVar58;
          auVar81[2] = bVar59;
          auVar81[3] = 0;
          auVar81[4] = bVar60;
          auVar81[5] = 0;
          auVar81[6] = bVar61;
          auVar81[7] = 0;
          auVar81[8] = bVar62;
          auVar81[9] = 0;
          auVar81[10] = bVar63;
          auVar81[0xb] = 0;
          auVar81[0xc] = bVar64;
          auVar81[0xd] = 0;
          auVar81[0xe] = bVar65;
          auVar81[0xf] = 0;
          auVar11[1] = 0;
          auVar11[0] = bVar58;
          auVar11[2] = bVar59;
          auVar11[3] = 0;
          auVar11[4] = bVar60;
          auVar11[5] = 0;
          auVar11[6] = bVar61;
          auVar11[7] = 0;
          auVar11[8] = bVar62;
          auVar11[9] = 0;
          auVar11[10] = bVar63;
          auVar11[0xb] = 0;
          auVar11[0xc] = bVar64;
          auVar11[0xd] = 0;
          auVar11[0xe] = bVar65;
          auVar11[0xf] = 0;
          auVar81 = NEON_ext(auVar81,auVar11,8,1);
          auStack_58[1] =
               (ulong)CONCAT16(bVar36,(uint6)CONCAT14(bVar34,(uint)CONCAT12(bVar32,uVar49)));
          auStack_58[0] =
               (ulong)CONCAT16(bVar61,(uint6)CONCAT14(bVar60,(uint)CONCAT12(bVar59,(ushort)bVar58)))
          ;
          uVar66 = *(undefined8 *)(piVar25 + 0xc);
          sVar51 = (short)((ulong)uVar66 >> 0x10);
          sVar53 = (short)((ulong)uVar66 >> 0x20);
          sVar55 = (short)((ulong)uVar66 >> 0x30);
          iVar85 = (int)*(undefined8 *)(piVar25 + 0x1e);
          iVar41 = (int)((ulong)*(undefined8 *)(piVar25 + 0x1e) >> 0x20);
          iVar24 = (int)*(undefined8 *)(piVar25 + 0x1c);
          iVar83 = (int)((ulong)*(undefined8 *)(piVar25 + 0x1c) >> 0x20);
          iVar10 = (int)(short)uVar49 * (int)(short)uVar72 +
                   (int)(short)(ushort)bVar58 * (int)(short)uVar67 +
                   (int)(short)(ushort)(byte)uVar69 * (int)(short)uVar66 + iVar24;
          iVar14 = (int)(short)(ushort)bVar32 * (int)sVar73 +
                   (int)(short)(ushort)bVar59 * (int)sVar57 +
                   (int)(short)(ushort)bVar31 * (int)sVar51 + iVar83;
          uVar76 = (undefined1)((uint)iVar14 >> 8);
          uVar77 = (undefined1)((uint)iVar14 >> 0x10);
          uVar78 = (undefined1)((uint)iVar14 >> 0x18);
          iVar79 = (int)(short)(ushort)bVar34 * (int)sVar74 +
                   (int)(short)(ushort)bVar60 * (int)sVar70 +
                   (int)(short)(ushort)bVar33 * (int)sVar53 + iVar85;
          iVar80 = (int)(short)(ushort)bVar36 * (int)sVar75 +
                   (int)(short)(ushort)bVar61 * (int)sVar71 +
                   (int)(short)(ushort)bVar35 * (int)sVar55 + iVar41;
          iVar93 = iVar79 >> 0xe;
          iVar94 = iVar80 >> 0xe;
          uVar18 = auStack_58[(int)uVar2];
          iVar88 = (int)*(undefined8 *)(piVar25 + 0x18) + iVar24;
          iVar89 = (int)((ulong)*(undefined8 *)(piVar25 + 0x18) >> 0x20) + iVar83;
          iVar90 = (int)*(undefined8 *)(piVar25 + 0x1a) + iVar85;
          iVar91 = (int)((ulong)*(undefined8 *)(piVar25 + 0x1a) >> 0x20) + iVar41;
          iVar95 = (int)*(undefined8 *)(piVar25 + 0x10);
          iVar96 = (int)((ulong)*(undefined8 *)(piVar25 + 0x10) >> 0x20);
          iVar97 = (int)*(undefined8 *)(piVar25 + 0x12);
          iVar98 = (int)((ulong)*(undefined8 *)(piVar25 + 0x12) >> 0x20);
          uVar19 = auStack_58[uVar8];
          iVar99 = (int)*(undefined8 *)(piVar25 + 0x14);
          iVar100 = (int)((ulong)*(undefined8 *)(piVar25 + 0x14) >> 0x20);
          iVar101 = (int)*(undefined8 *)(piVar25 + 0x16);
          iVar102 = (int)((ulong)*(undefined8 *)(piVar25 + 0x16) >> 0x20);
          auStack_58[0] = auVar81._0_8_;
          auVar92[2] = bVar32;
          auVar92._0_2_ = uVar49;
          auVar92[3] = 0;
          auVar92[4] = bVar34;
          auVar92[5] = 0;
          auVar92[6] = bVar36;
          auVar92[7] = 0;
          auVar92[8] = bVar37;
          auVar92[9] = 0;
          auVar92[10] = uVar38;
          auVar92[0xb] = 0;
          auVar92[0xc] = uVar39;
          auVar92[0xd] = 0;
          auVar92[0xe] = uVar40;
          auVar92[0xf] = 0;
          auVar103[2] = bVar32;
          auVar103._0_2_ = uVar49;
          auVar103[3] = 0;
          auVar103[4] = bVar34;
          auVar103[5] = 0;
          auVar103[6] = bVar36;
          auVar103[7] = 0;
          auVar103[8] = bVar37;
          auVar103[9] = 0;
          auVar103[10] = uVar38;
          auVar103[0xb] = 0;
          auVar103[0xc] = uVar39;
          auVar103[0xd] = 0;
          auVar103[0xe] = uVar40;
          auVar103[0xf] = 0;
          auVar92 = NEON_ext(auVar92,auVar103,8,1);
          auVar103 = NEON_ext(auVar43,auVar43,8,1);
          auStack_58[2] = (ulong)auVar21._8_7_;
          auStack_58[1] =
               (ulong)CONCAT16(uVar40,(uint6)CONCAT14(uVar39,(uint)CONCAT12(uVar38,(ushort)bVar37)))
          ;
          iVar82 = iVar24 + (int)auVar81._0_2_ * (int)(short)uVar67 +
                   (int)auVar92._0_2_ * (int)(short)uVar72 +
                   (int)auVar103._0_2_ * (int)(short)uVar66;
          iVar84 = iVar83 + (int)auVar81._2_2_ * (int)sVar57 + (int)auVar92._2_2_ * (int)sVar73 +
                   (int)auVar103._2_2_ * (int)sVar51;
          iVar86 = iVar85 + (int)auVar81._4_2_ * (int)sVar70 + (int)auVar92._4_2_ * (int)sVar74 +
                   (int)auVar103._4_2_ * (int)sVar53;
          iVar87 = iVar41 + (int)auVar81._6_2_ * (int)sVar71 + (int)auVar92._6_2_ * (int)sVar75 +
                   (int)auVar103._6_2_ * (int)sVar55;
          uVar42 = auStack_58[(int)uVar2];
          uVar50 = (undefined2)(iVar82 >> 0xe);
          sVar51 = (short)(iVar82 >> 0x1e);
          uVar52 = (undefined2)(iVar84 >> 0xe);
          sVar53 = (short)(iVar84 >> 0x1e);
          uVar54 = (undefined2)(iVar86 >> 0xe);
          sVar55 = (short)(iVar86 >> 0x1e);
          uVar56 = (undefined2)(iVar87 >> 0xe);
          sVar57 = (short)(iVar87 >> 0x1e);
          uVar68 = auStack_58[uVar8];
          iVar24 = iVar89 + ((int)(short)(uVar42 >> 0x10) - CONCAT22(sVar53,uVar52)) * iVar96;
          iVar83 = iVar90 + ((int)(short)(uVar42 >> 0x20) - CONCAT22(sVar55,uVar54)) * iVar97;
          iVar85 = iVar91 + ((int)(short)(uVar42 >> 0x30) - CONCAT22(sVar57,uVar56)) * iVar98;
          iVar41 = (int)(short)uVar68 - CONCAT22(sVar51,uVar50);
          iVar48 = (int)(short)(uVar68 >> 0x10) - CONCAT22(sVar53,uVar52);
          auVar44._0_8_ = CONCAT44(iVar48,iVar41);
          auVar44._8_4_ = (int)(short)(uVar68 >> 0x20) - CONCAT22(sVar55,uVar54);
          auVar44._12_4_ = (int)(short)(uVar68 >> 0x30) - CONCAT22(sVar57,uVar56);
          auVar45._8_8_ = auVar44._8_8_;
          auVar13[4] = (char)iVar14;
          auVar13._0_4_ = iVar10;
          auVar13[5] = uVar76;
          auVar13[6] = uVar77;
          auVar13[7] = uVar78;
          auVar13._8_4_ = iVar79;
          auVar13._12_4_ = iVar80;
          auVar45._0_8_ = NEON_sqshrn(auVar44._0_8_,auVar13,0xe,4);
          auVar15._4_4_ = iVar84;
          auVar15._0_4_ = iVar82;
          auVar15._8_4_ = iVar86;
          auVar15._12_4_ = iVar87;
          auVar92 = NEON_sqshrn2(auVar45,auVar15,0xe,4);
          uVar69 = NEON_sqxtun(uVar68,auVar92,2);
          auVar46._8_8_ = auVar92._8_8_;
          auVar20._4_4_ = iVar89 + ((int)(short)(uVar18 >> 0x10) - (iVar14 >> 0xe)) * iVar96;
          auVar20._0_4_ = iVar88 + ((int)(short)uVar18 - (iVar10 >> 0xe)) * iVar95;
          auVar20._8_4_ = iVar90 + ((short)(uVar18 >> 0x20) - iVar93) * iVar97;
          auVar20._12_4_ = iVar91 + ((short)(uVar18 >> 0x30) - iVar94) * iVar98;
          auVar46._0_8_ = NEON_sqshrn(auVar92._0_8_,auVar20,0xe,4);
          auVar12[4] = (char)iVar24;
          auVar12._0_4_ = iVar88 + ((int)(short)uVar42 - CONCAT22(sVar51,uVar50)) * iVar95;
          auVar12[5] = (char)((uint)iVar24 >> 8);
          auVar12[6] = (char)((uint)iVar24 >> 0x10);
          auVar12[7] = (char)((uint)iVar24 >> 0x18);
          auVar12._8_2_ = (short)iVar83;
          auVar12._10_2_ = (short)((uint)iVar83 >> 0x10);
          auVar12._12_2_ = (short)iVar85;
          auVar12._14_2_ = (short)((uint)iVar85 >> 0x10);
          auVar92 = NEON_sqshrn2(auVar46,auVar12,0xe,4);
          uVar67 = NEON_sqxtun(uVar72,auVar92,2);
          auVar47._8_8_ = auVar92._8_8_;
          auVar17._4_4_ = iVar89 + ((int)(short)(uVar19 >> 0x10) - (iVar14 >> 0xe)) * iVar100;
          auVar17._0_4_ = iVar88 + ((int)(short)uVar19 - (iVar10 >> 0xe)) * iVar99;
          auVar17._8_4_ = iVar90 + ((short)(uVar19 >> 0x20) - iVar93) * iVar101;
          auVar17._12_4_ = iVar91 + ((short)(uVar19 >> 0x30) - iVar94) * iVar102;
          auVar47._0_8_ = NEON_sqshrn(auVar92._0_8_,auVar17,0xe,4);
          auVar16._4_4_ = iVar89 + iVar48 * iVar100;
          auVar16._0_4_ = iVar88 + iVar41 * iVar99;
          auVar16._8_4_ = iVar90 + auVar44._8_4_ * iVar101;
          auVar16._12_4_ = iVar91 + auVar44._12_4_ * iVar102;
          auVar92 = NEON_sqshrn2(auVar47,auVar16,0xe,4);
          uVar66 = NEON_sqxtun(CONCAT17(uVar78,CONCAT16(uVar77,CONCAT15(uVar76,CONCAT14((char)iVar14
                                                                                        ,iVar10)))),
                               auVar92,2);
          puVar1 = (undefined1 *)(lVar28 + uVar26);
          *puVar1 = (char)uVar69;
          puVar1[1] = (char)uVar67;
          puVar1[2] = (char)uVar66;
          puVar1[3] = (char)((ulong)uVar69 >> 8);
          puVar1[4] = (char)((ulong)uVar67 >> 8);
          puVar1[5] = (char)((ulong)uVar66 >> 8);
          puVar1[6] = (char)((ulong)uVar69 >> 0x10);
          puVar1[7] = (char)((ulong)uVar67 >> 0x10);
          puVar1[8] = (char)((ulong)uVar66 >> 0x10);
          puVar1[9] = (char)((ulong)uVar69 >> 0x18);
          puVar1[10] = (char)((ulong)uVar67 >> 0x18);
          puVar1[0xb] = (char)((ulong)uVar66 >> 0x18);
          puVar1[0xc] = (char)((ulong)uVar69 >> 0x20);
          puVar1[0xd] = (char)((ulong)uVar67 >> 0x20);
          puVar1[0xe] = (char)((ulong)uVar66 >> 0x20);
          puVar1[0xf] = (char)((ulong)uVar69 >> 0x28);
          puVar1[0x10] = (char)((ulong)uVar67 >> 0x28);
          puVar1[0x11] = (char)((ulong)uVar66 >> 0x28);
          puVar1[0x12] = (char)((ulong)uVar69 >> 0x30);
          puVar1[0x13] = (char)((ulong)uVar67 >> 0x30);
          puVar1[0x14] = (char)((ulong)uVar66 >> 0x30);
          puVar1[0x15] = (char)((ulong)uVar69 >> 0x38);
          puVar1[0x16] = (char)((ulong)uVar67 >> 0x38);
          puVar1[0x17] = (char)((ulong)uVar66 >> 0x38);
          uVar26 = uVar26 + 0x18;
          pbVar23 = pbVar23 + (long)iVar7 * 8;
        } while ((long)uVar26 <= lVar22 + -0x18);
        uVar26 = uVar26 & 0xffffffff;
      }
      iVar24 = (int)lVar22;
      if ((int)uVar26 < iVar24) {
        do {
          iVar83 = iVar5 * (uint)pbVar23[1] + iVar3 * (uint)*pbVar23 + iVar4 * (uint)pbVar23[2] +
                   0x2000;
          uVar2 = iVar83 >> 0xe;
          iVar85 = (pbVar23[uVar8 ^ 2] - uVar2) * iVar6 + 0x202000;
          iVar10 = (pbVar23[uVar8] - uVar2) * iVar9 + 0x202000;
          uVar2 = uVar2 & (iVar83 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          puVar1 = (undefined1 *)(lVar28 + uVar26);
          *puVar1 = (char)uVar2;
          uVar2 = iVar85 >> 0xe & (iVar85 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          puVar1[1] = (char)uVar2;
          uVar2 = iVar10 >> 0xe & (iVar10 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          puVar1[2] = (char)uVar2;
          uVar26 = uVar26 + 3;
          pbVar23 = pbVar23 + iVar7;
        } while ((long)uVar26 < (long)iVar24);
      }
      iVar27 = iVar27 + 1;
      lVar30 = *(long *)(param_1 + 8);
      pbVar29 = pbVar29 + *(long *)(lVar30 + 0x50);
      lVar28 = lVar28 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar27 < param_2[1]);
  }
  return;
}



/* Entry: 109ad3e64; end: 109ad3e6b;  */

void FUN_109ad3e64(void)

{
  return;
}



/* Entry: 109ad3e6c; end: 109ad416b;  */

void FUN_109ad3e6c(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  long lVar19;
  int iVar20;
  ulong uVar21;
  ushort *puVar22;
  int iVar23;
  undefined2 *puVar24;
  ushort *puVar25;
  long lVar26;
  uint *puVar27;
  undefined2 *puVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  short sVar35;
  ushort uVar36;
  short sVar37;
  short sVar38;
  ushort uVar39;
  undefined2 uVar40;
  ushort uVar41;
  ushort uVar42;
  short sVar43;
  ushort uVar44;
  ushort uVar45;
  undefined2 uVar46;
  ushort uVar47;
  ushort uVar48;
  short sVar49;
  ushort uVar50;
  ushort uVar51;
  undefined2 uVar52;
  ushort uVar53;
  short sVar54;
  ushort uVar55;
  undefined2 uVar56;
  ushort uVar57;
  short sVar58;
  int iVar59;
  undefined8 uVar60;
  int iVar62;
  undefined8 uVar61;
  undefined8 uVar63;
  int iVar64;
  int iVar68;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar74;
  int iVar75;
  int iVar76;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 auVar65 [16];
  
  iVar23 = *param_2;
  if (iVar23 < param_2[1]) {
    lVar26 = *(long *)(param_1 + 8);
    puVar24 = (undefined2 *)
              (*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
              **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar23);
    puVar25 = (ushort *)(*(long *)(lVar26 + 0x10) + **(long **)(lVar26 + 0x48) * (long)iVar23);
    do {
      puVar27 = *(uint **)(param_1 + 0x18);
      uVar6 = *puVar27;
      uVar7 = puVar27[1];
      uVar8 = (ulong)(int)uVar7;
      uVar2 = puVar27[2];
      uVar4 = puVar27[3];
      uVar3 = puVar27[4];
      uVar5 = puVar27[5];
      uVar9 = puVar27[6];
      lVar19 = (long)*(int *)(lVar26 + 0xc) * 3;
      puVar22 = puVar25;
      if (*(int *)(lVar26 + 0xc) < 8) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        uVar1 = uVar7 ^ 2;
        puVar28 = puVar24;
        do {
          if (uVar6 == 3) {
            uVar32 = *puVar22;
            uVar39 = puVar22[1];
            uVar33 = puVar22[3];
            uVar42 = puVar22[4];
            uVar34 = puVar22[6];
            uVar45 = puVar22[7];
            uVar36 = puVar22[9];
            uVar48 = puVar22[10];
            uVar60 = CONCAT26(puVar22[0xb],CONCAT24(puVar22[8],CONCAT22(puVar22[5],puVar22[2])));
            uVar41 = puVar22[0xc];
            uVar51 = puVar22[0xd];
            uVar44 = puVar22[0xf];
            uVar53 = puVar22[0x10];
            uVar47 = puVar22[0x12];
            uVar55 = puVar22[0x13];
            uVar50 = puVar22[0x15];
            uVar57 = puVar22[0x16];
            uVar63 = CONCAT26(puVar22[0x17],
                              CONCAT24(puVar22[0x14],CONCAT22(puVar22[0x11],puVar22[0xe])));
          }
          else {
            uVar32 = *puVar22;
            uVar39 = puVar22[1];
            uVar33 = puVar22[4];
            uVar42 = puVar22[5];
            uVar34 = puVar22[8];
            uVar45 = puVar22[9];
            uVar36 = puVar22[0xc];
            uVar48 = puVar22[0xd];
            uVar60 = CONCAT26(puVar22[0xe],CONCAT24(puVar22[10],CONCAT22(puVar22[6],puVar22[2])));
            uVar41 = puVar22[0x10];
            uVar51 = puVar22[0x11];
            uVar44 = puVar22[0x14];
            uVar53 = puVar22[0x15];
            uVar47 = puVar22[0x18];
            uVar55 = puVar22[0x19];
            uVar50 = puVar22[0x1c];
            uVar57 = puVar22[0x1d];
            uVar63 = CONCAT26(puVar22[0x1e],
                              CONCAT24(puVar22[0x1a],CONCAT22(puVar22[0x16],puVar22[0x12])));
          }
          uStack_70 = CONCAT26(0,CONCAT24(uVar33,(uint)uVar32));
          auVar14._8_2_ = uVar34;
          auVar14._0_8_ = uStack_70;
          auVar14._10_2_ = 0;
          auVar14._12_2_ = uVar36;
          uStack_60 = CONCAT26(0,CONCAT24(uVar42,(uint)uVar39));
          auVar15._8_2_ = uVar45;
          auVar15._0_8_ = uStack_60;
          auVar15._10_2_ = 0;
          auVar15._12_2_ = uVar48;
          uStack_68 = (ulong)auVar14._8_6_;
          uStack_58 = (ulong)auVar15._8_6_;
          uVar29 = (ushort)((ulong)uVar60 >> 0x10);
          uStack_50 = CONCAT26(0,CONCAT24(uVar29,(uint)(ushort)uVar60));
          uVar30 = (ushort)((ulong)uVar60 >> 0x20);
          auVar16._8_2_ = uVar30;
          auVar16._0_8_ = uStack_50;
          auVar16._10_2_ = 0;
          uVar31 = (ushort)((ulong)uVar60 >> 0x30);
          auVar16._12_2_ = uVar31;
          uStack_48 = (ulong)auVar16._8_6_;
          iVar77 = (int)*(undefined8 *)(puVar27 + 8);
          iVar78 = (int)((ulong)*(undefined8 *)(puVar27 + 8) >> 0x20);
          iVar79 = (int)*(undefined8 *)(puVar27 + 10);
          iVar59 = (int)((ulong)*(undefined8 *)(puVar27 + 10) >> 0x20);
          iVar62 = (int)*(undefined8 *)(puVar27 + 0xc);
          iVar80 = (int)((ulong)*(undefined8 *)(puVar27 + 0xc) >> 0x20);
          iVar81 = (int)*(undefined8 *)(puVar27 + 0xe);
          iVar82 = (int)((ulong)*(undefined8 *)(puVar27 + 0xe) >> 0x20);
          auVar70 = *(undefined1 (*) [16])(puVar27 + 0x10);
          auVar12 = *(undefined1 (*) [16])(puVar27 + 0x20);
          iVar20 = auVar12._0_4_;
          iVar64 = iVar77 * (uint)uVar32 + iVar62 * (uint)uVar39 +
                   auVar70._0_4_ * (uint)(ushort)uVar60 + iVar20;
          iVar74 = auVar12._4_4_;
          iVar68 = iVar78 * (uint)uVar33 + iVar80 * (uint)uVar42 + auVar70._4_4_ * (uint)uVar29 +
                   iVar74;
          auVar65._0_8_ = CONCAT44(iVar68,iVar64);
          iVar75 = auVar12._8_4_;
          auVar65._8_4_ =
               iVar79 * (uint)uVar34 + iVar81 * (uint)uVar45 + auVar70._8_4_ * (uint)uVar30 + iVar75
          ;
          iVar76 = auVar12._12_4_;
          auVar65._12_4_ =
               iVar59 * (uint)uVar36 + iVar82 * (uint)uVar48 + auVar70._12_4_ * (uint)uVar31 +
               iVar76;
          iVar64 = iVar64 >> 0xe;
          iVar68 = iVar68 >> 0xe;
          iVar87 = (int)*(undefined8 *)(puVar27 + 0x1c) + iVar20;
          iVar88 = (int)((ulong)*(undefined8 *)(puVar27 + 0x1c) >> 0x20) + iVar74;
          iVar89 = (int)*(undefined8 *)(puVar27 + 0x1e) + iVar75;
          iVar90 = (int)((ulong)*(undefined8 *)(puVar27 + 0x1e) >> 0x20) + iVar76;
          iVar83 = (int)*(undefined8 *)(puVar27 + 0x14);
          iVar84 = (int)((ulong)*(undefined8 *)(puVar27 + 0x14) >> 0x20);
          iVar85 = (int)*(undefined8 *)(puVar27 + 0x16);
          iVar86 = (int)((ulong)*(undefined8 *)(puVar27 + 0x16) >> 0x20);
          iVar91 = (int)*(undefined8 *)(puVar27 + 0x18);
          iVar92 = (int)((ulong)*(undefined8 *)(puVar27 + 0x18) >> 0x20);
          iVar93 = (int)*(undefined8 *)(puVar27 + 0x1a);
          iVar94 = (int)((ulong)*(undefined8 *)(puVar27 + 0x1a) >> 0x20);
          uStack_68 = (ulong)CONCAT24(uVar50,(uint)uVar47);
          uStack_70 = (ulong)CONCAT24(uVar44,(uint)uVar41);
          uStack_58 = (ulong)CONCAT24(uVar57,(uint)uVar55);
          uStack_60 = (ulong)CONCAT24(uVar53,(uint)uVar51);
          uVar32 = (ushort)((ulong)uVar63 >> 0x10);
          uVar33 = (ushort)((ulong)uVar63 >> 0x20);
          uVar34 = (ushort)((ulong)uVar63 >> 0x30);
          uStack_48 = (ulong)CONCAT24(uVar34,(uint)uVar33);
          uStack_50 = (ulong)CONCAT24(uVar32,(uint)(ushort)uVar63);
          iVar20 = iVar77 * (uint)uVar41 + iVar62 * (uint)uVar51 +
                   auVar70._0_4_ * (uint)(ushort)uVar63 + iVar20;
          iVar74 = iVar78 * (uint)uVar44 + iVar80 * (uint)uVar53 + auVar70._4_4_ * (uint)uVar32 +
                   iVar74;
          sVar35 = (short)((uint)iVar74 >> 0x10);
          iVar75 = iVar79 * (uint)uVar47 + iVar81 * (uint)uVar55 + auVar70._8_4_ * (uint)uVar33 +
                   iVar75;
          sVar37 = (short)((uint)iVar75 >> 0x10);
          iVar76 = iVar59 * (uint)uVar50 + iVar82 * (uint)uVar57 + auVar70._12_4_ * (uint)uVar34 +
                   iVar76;
          sVar38 = (short)((uint)iVar76 >> 0x10);
          uVar40 = (undefined2)(iVar20 >> 0xe);
          sVar43 = (short)(iVar20 >> 0x1e);
          uVar46 = (undefined2)(iVar74 >> 0xe);
          sVar49 = sVar35 >> 0xe;
          uVar52 = (undefined2)(iVar75 >> 0xe);
          sVar54 = sVar37 >> 0xe;
          uVar56 = (undefined2)(iVar76 >> 0xe);
          sVar58 = sVar38 >> 0xe;
          iVar77 = iVar88 + ((int)((ulong)(&uStack_70)[(long)(int)uVar1 * 2] >> 0x20) -
                            CONCAT22(sVar49,uVar46)) * iVar84;
          iVar78 = iVar89 + ((int)(&uStack_68)[(long)(int)uVar1 * 2] - CONCAT22(sVar54,uVar52)) *
                            iVar85;
          iVar79 = iVar90 + ((int)((ulong)(&uStack_68)[(long)(int)uVar1 * 2] >> 0x20) -
                            CONCAT22(sVar58,uVar56)) * iVar86;
          auVar66._8_8_ = auVar65._8_8_;
          auVar66._0_8_ = NEON_sqshrun(auVar65._0_8_,auVar65,0xe,4);
          auVar67._4_2_ = (short)iVar74;
          auVar67._0_4_ = iVar20;
          auVar67._6_2_ = sVar35;
          auVar67._8_2_ = (short)iVar75;
          auVar67._10_2_ = sVar37;
          auVar67._12_2_ = (short)iVar76;
          auVar67._14_2_ = sVar38;
          auVar67 = NEON_sqshrun2(auVar66,auVar67,0xe,4);
          auVar69._8_8_ = auVar70._8_8_;
          auVar13._4_4_ =
               iVar88 + ((int)((ulong)(&uStack_70)[(long)(int)uVar1 * 2] >> 0x20) - iVar68) * iVar84
          ;
          auVar13._0_4_ = iVar87 + ((int)(&uStack_70)[(long)(int)uVar1 * 2] - iVar64) * iVar83;
          auVar13._8_4_ =
               iVar89 + ((int)(&uStack_68)[(long)(int)uVar1 * 2] - (auVar65._8_4_ >> 0xe)) * iVar85;
          auVar13._12_4_ =
               iVar90 + ((int)((ulong)(&uStack_68)[(long)(int)uVar1 * 2] >> 0x20) -
                        (auVar65._12_4_ >> 0xe)) * iVar86;
          auVar69._0_8_ = NEON_sqshrun(auVar70._0_8_,auVar13,0xe,4);
          auVar70._4_2_ = (short)iVar77;
          auVar70._0_4_ =
               iVar87 + ((int)(&uStack_70)[(long)(int)uVar1 * 2] - CONCAT22(sVar43,uVar40)) * iVar83
          ;
          auVar70._6_2_ = (short)((uint)iVar77 >> 0x10);
          auVar70._8_2_ = (short)iVar78;
          auVar70._10_2_ = (short)((uint)iVar78 >> 0x10);
          auVar70._12_2_ = (short)iVar79;
          auVar70._14_2_ = (short)((uint)iVar79 >> 0x10);
          auVar70 = NEON_sqshrun2(auVar69,auVar70,0xe,4);
          auVar72._8_8_ = auVar12._8_8_;
          auVar73._4_4_ = iVar88 + ((int)((ulong)(&uStack_70)[uVar8 * 2] >> 0x20) - iVar68) * iVar92
          ;
          auVar73._0_4_ = iVar87 + ((int)(&uStack_70)[uVar8 * 2] - iVar64) * iVar91;
          auVar73._8_4_ = iVar89 + ((int)(&uStack_68)[uVar8 * 2] - (auVar65._8_4_ >> 0xe)) * iVar93;
          auVar73._12_4_ =
               iVar90 + ((int)((ulong)(&uStack_68)[uVar8 * 2] >> 0x20) - (auVar65._12_4_ >> 0xe)) *
                        iVar94;
          auVar72._0_8_ = NEON_sqshrun(auVar12._0_8_,auVar73,0xe,4);
          auVar12._4_4_ =
               iVar88 + ((int)((ulong)(&uStack_70)[uVar8 * 2] >> 0x20) - CONCAT22(sVar49,uVar46)) *
                        iVar92;
          auVar12._0_4_ = iVar87 + ((int)(&uStack_70)[uVar8 * 2] - CONCAT22(sVar43,uVar40)) * iVar91
          ;
          auVar12._8_4_ = iVar89 + ((int)(&uStack_68)[uVar8 * 2] - CONCAT22(sVar54,uVar52)) * iVar93
          ;
          auVar12._12_4_ =
               iVar90 + ((int)((ulong)(&uStack_68)[uVar8 * 2] >> 0x20) - CONCAT22(sVar58,uVar56)) *
                        iVar94;
          auVar73 = NEON_sqshrun2(auVar72,auVar12,0xe,4);
          *puVar28 = auVar67._0_2_;
          puVar28[1] = auVar70._0_2_;
          puVar28[2] = auVar73._0_2_;
          puVar28[3] = auVar67._2_2_;
          puVar28[4] = auVar70._2_2_;
          puVar28[5] = auVar73._2_2_;
          puVar28[6] = auVar67._4_2_;
          puVar28[7] = auVar70._4_2_;
          puVar28[8] = auVar73._4_2_;
          puVar28[9] = auVar67._6_2_;
          puVar28[10] = auVar70._6_2_;
          puVar28[0xb] = auVar73._6_2_;
          puVar28[0xc] = auVar67._8_2_;
          puVar28[0xd] = auVar70._8_2_;
          puVar28[0xe] = auVar73._8_2_;
          puVar28[0xf] = auVar67._10_2_;
          puVar28[0x10] = auVar70._10_2_;
          puVar28[0x11] = auVar73._10_2_;
          puVar28[0x12] = auVar67._12_2_;
          puVar28[0x13] = auVar70._12_2_;
          puVar28[0x14] = auVar73._12_2_;
          puVar28[0x15] = auVar67._14_2_;
          puVar28[0x16] = auVar70._14_2_;
          puVar28[0x17] = auVar73._14_2_;
          puVar28 = puVar28 + 0x18;
          uVar21 = uVar21 + 0x18;
          puVar22 = (ushort *)
                    ((long)puVar22 +
                    (-(ulong)((uVar6 & 0x1fffffff) >> 0x1c) & 0xfffffffe00000000 |
                    (ulong)(uVar6 << 3) << 1));
        } while ((long)uVar21 <= lVar19 + -0x18);
      }
      iVar20 = (int)lVar19;
      if ((int)uVar21 <= iVar20 + -0xc) {
        puVar28 = puVar24 + (uVar21 & 0xffffffff);
        do {
          if (uVar6 == 3) {
            uVar32 = *puVar22;
            uVar41 = puVar22[1];
            uVar33 = puVar22[3];
            uVar44 = puVar22[4];
            uVar34 = puVar22[6];
            uVar47 = puVar22[7];
            uVar36 = puVar22[9];
            uVar50 = puVar22[10];
            uVar60 = CONCAT26(puVar22[0xb],CONCAT24(puVar22[8],CONCAT22(puVar22[5],puVar22[2])));
          }
          else {
            uVar32 = *puVar22;
            uVar41 = puVar22[1];
            uVar33 = puVar22[4];
            uVar44 = puVar22[5];
            uVar34 = puVar22[8];
            uVar47 = puVar22[9];
            uVar36 = puVar22[0xc];
            uVar50 = puVar22[0xd];
            uVar60 = CONCAT26(puVar22[0xe],CONCAT24(puVar22[10],CONCAT22(puVar22[6],puVar22[2])));
          }
          uStack_70 = CONCAT26(0,CONCAT24(uVar33,(uint)uVar32));
          auVar17._8_2_ = uVar34;
          auVar17._0_8_ = uStack_70;
          auVar17._10_2_ = 0;
          auVar17._12_2_ = uVar36;
          uStack_60 = CONCAT26(0,CONCAT24(uVar44,(uint)uVar41));
          auVar18._8_2_ = uVar47;
          auVar18._0_8_ = uStack_60;
          auVar18._10_2_ = 0;
          auVar18._12_2_ = uVar50;
          uStack_68 = (ulong)auVar17._8_6_;
          uStack_58 = (ulong)auVar18._8_6_;
          uVar39 = (ushort)((ulong)uVar60 >> 0x10);
          uVar42 = (ushort)((ulong)uVar60 >> 0x20);
          uVar45 = (ushort)((ulong)uVar60 >> 0x30);
          uStack_48 = (ulong)CONCAT24(uVar45,(uint)uVar42);
          uStack_50 = (ulong)CONCAT24(uVar39,(uint)(ushort)uVar60);
          iVar74 = (int)*(undefined8 *)(puVar27 + 0x20);
          iVar78 = (int)*(undefined8 *)(puVar27 + 8) * (uint)uVar32 +
                   (int)*(undefined8 *)(puVar27 + 0xc) * (uint)uVar41 +
                   (int)*(undefined8 *)(puVar27 + 0x10) * (uint)(ushort)uVar60 + iVar74;
          iVar75 = (int)((ulong)*(undefined8 *)(puVar27 + 0x20) >> 0x20);
          iVar79 = (int)((ulong)*(undefined8 *)(puVar27 + 8) >> 0x20) * (uint)uVar33 +
                   (int)((ulong)*(undefined8 *)(puVar27 + 0xc) >> 0x20) * (uint)uVar44 +
                   (int)((ulong)*(undefined8 *)(puVar27 + 0x10) >> 0x20) * (uint)uVar39 + iVar75;
          uVar40 = (undefined2)((uint)iVar79 >> 0x10);
          iVar76 = (int)*(undefined8 *)(puVar27 + 0x22);
          iVar64 = (int)*(undefined8 *)(puVar27 + 10) * (uint)uVar34 +
                   (int)*(undefined8 *)(puVar27 + 0xe) * (uint)uVar47 +
                   (int)*(undefined8 *)(puVar27 + 0x12) * (uint)uVar42 + iVar76;
          iVar77 = (int)((ulong)*(undefined8 *)(puVar27 + 0x22) >> 0x20);
          iVar68 = (int)((ulong)*(undefined8 *)(puVar27 + 10) >> 0x20) * (uint)uVar36 +
                   (int)((ulong)*(undefined8 *)(puVar27 + 0xe) >> 0x20) * (uint)uVar50 +
                   (int)((ulong)*(undefined8 *)(puVar27 + 0x12) >> 0x20) * (uint)uVar45 + iVar77;
          lVar26 = (long)(int)(uVar7 ^ 2);
          auVar67 = *(undefined1 (*) [16])(puVar27 + 0x18);
          iVar74 = puVar27[0x1c] + iVar74;
          iVar75 = puVar27[0x1d] + iVar75;
          iVar76 = puVar27[0x1e] + iVar76;
          iVar77 = puVar27[0x1f] + iVar77;
          auVar71._0_4_ =
               iVar74 + (*(int *)(&uStack_70 + lVar26 * 2) - (iVar78 >> 0xe)) *
                        (int)*(undefined8 *)(puVar27 + 0x14);
          auVar71._4_4_ =
               (int)(CONCAT26((short)((uint)iVar75 >> 0x10),CONCAT24((short)iVar75,iVar74)) >> 0x20)
               + (*(int *)((long)&uStack_70 + lVar26 * 0x10 + 4) - (iVar79 >> 0xe)) *
                 (int)((ulong)*(undefined8 *)(puVar27 + 0x14) >> 0x20);
          auVar71._8_4_ =
               iVar76 + (*(int *)(&uStack_68 + lVar26 * 2) - (iVar64 >> 0xe)) *
                        (int)*(undefined8 *)(puVar27 + 0x16);
          auVar71._12_4_ =
               (int)(CONCAT26((short)((uint)iVar77 >> 0x10),CONCAT24((short)iVar77,iVar76)) >> 0x20)
               + (*(int *)((long)&uStack_68 + lVar26 * 0x10 + 4) - (iVar68 >> 0xe)) *
                 (int)((ulong)*(undefined8 *)(puVar27 + 0x16) >> 0x20);
          uVar63 = (&uStack_70)[uVar8 * 2];
          iVar59 = (int)uVar63 - (iVar78 >> 0xe);
          iVar62 = (int)((ulong)uVar63 >> 0x20) - (iVar79 >> 0xe);
          iVar75 = iVar75 + iVar62 * auVar67._4_4_;
          iVar76 = iVar76 + ((int)(&uStack_68)[uVar8 * 2] - (iVar64 >> 0xe)) * auVar67._8_4_;
          iVar77 = iVar77 + ((int)((ulong)(&uStack_68)[uVar8 * 2] >> 0x20) - (iVar68 >> 0xe)) *
                            auVar67._12_4_;
          auVar11._4_2_ = (short)iVar79;
          auVar11._0_4_ = iVar78;
          auVar11._6_2_ = uVar40;
          auVar11._8_2_ = (short)iVar64;
          auVar11._10_2_ = (short)((uint)iVar64 >> 0x10);
          auVar11._12_2_ = (short)iVar68;
          auVar11._14_2_ = (short)((uint)iVar68 >> 0x10);
          uVar60 = NEON_sqshrun(CONCAT26(uVar40,CONCAT24((short)iVar79,iVar78)),auVar11,0xe,4);
          uVar61 = NEON_sqshrun(CONCAT44(iVar62,iVar59),auVar71,0xe,4);
          auVar10._4_2_ = (short)iVar75;
          auVar10._0_4_ = iVar74 + iVar59 * auVar67._0_4_;
          auVar10._6_2_ = (short)((uint)iVar75 >> 0x10);
          auVar10._8_2_ = (short)iVar76;
          auVar10._10_2_ = (short)((uint)iVar76 >> 0x10);
          auVar10._12_2_ = (short)iVar77;
          auVar10._14_2_ = (short)((uint)iVar77 >> 0x10);
          uVar63 = NEON_sqshrun(uVar63,auVar10,0xe,4);
          *puVar28 = (short)uVar60;
          puVar28[1] = (short)uVar61;
          puVar28[2] = (short)uVar63;
          puVar28[3] = (short)((ulong)uVar60 >> 0x10);
          puVar28[4] = (short)((ulong)uVar61 >> 0x10);
          puVar28[5] = (short)((ulong)uVar63 >> 0x10);
          puVar28[6] = (short)((ulong)uVar60 >> 0x20);
          puVar28[7] = (short)((ulong)uVar61 >> 0x20);
          puVar28[8] = (short)((ulong)uVar63 >> 0x20);
          puVar28[9] = (short)((ulong)uVar60 >> 0x30);
          puVar28[10] = (short)((ulong)uVar61 >> 0x30);
          puVar28[0xb] = (short)((ulong)uVar63 >> 0x30);
          puVar28 = puVar28 + 0xc;
          uVar1 = (int)uVar21 + 0xc;
          uVar21 = (ulong)uVar1;
          puVar22 = (ushort *)
                    ((long)puVar22 +
                    (-(ulong)((uVar6 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 |
                    (ulong)(uVar6 << 2) << 1));
        } while ((int)uVar1 <= iVar20 + -0xc);
      }
      if ((int)uVar21 < iVar20) {
        puVar28 = puVar24 + (uVar21 & 0xffffffff) + 1;
        do {
          iVar74 = uVar4 * puVar22[1] + uVar2 * *puVar22 + uVar3 * puVar22[2] + 0x2000;
          uVar7 = iVar74 >> 0xe;
          iVar75 = (puVar22[uVar8 ^ 2] - uVar7) * uVar5 + 0x20002000;
          iVar76 = (puVar22[uVar8] - uVar7) * uVar9 + 0x20002000;
          uVar7 = uVar7 & (iVar74 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar7) {
            uVar7 = 0xffff;
          }
          puVar28[-1] = (short)uVar7;
          uVar7 = iVar75 >> 0xe & (iVar75 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar7) {
            uVar7 = 0xffff;
          }
          *puVar28 = (short)uVar7;
          uVar7 = iVar76 >> 0xe & (iVar76 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar7) {
            uVar7 = 0xffff;
          }
          puVar28[1] = (short)uVar7;
          uVar7 = (int)uVar21 + 3;
          uVar21 = (ulong)uVar7;
          puVar22 = puVar22 + (int)uVar6;
          puVar28 = puVar28 + 3;
        } while ((int)uVar7 < iVar20);
      }
      iVar23 = iVar23 + 1;
      lVar26 = *(long *)(param_1 + 8);
      puVar25 = (ushort *)((long)puVar25 + *(long *)(lVar26 + 0x50));
      puVar24 = (undefined2 *)((long)puVar24 + *(long *)(*(long *)(param_1 + 0x10) + 0x50));
    } while (iVar23 < param_2[1]);
  }
  return;
}



/* Entry: 109ad416c; end: 109ad4173;  */

void FUN_109ad416c(void)

{
  return;
}



/* Entry: 109ad4174; end: 109ad4353;  */

void FUN_109ad4174(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar16;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  long lVar24;
  float *pfVar25;
  int iVar26;
  int *piVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 auStack_40 [4];
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  
  iVar21 = *param_2;
  if (iVar21 < param_2[1]) {
    lVar24 = *(long *)(param_1 + 8);
    pfVar22 = (float *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
                       **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar21);
    pfVar23 = (float *)(*(long *)(lVar24 + 0x10) + **(long **)(lVar24 + 0x48) * (long)iVar21);
    do {
      piVar27 = *(int **)(param_1 + 0x18);
      iVar4 = *(int *)(lVar24 + 0xc);
      iVar1 = *piVar27;
      uVar2 = piVar27[1];
      uVar3 = (ulong)(int)uVar2;
      fVar29 = (float)piVar27[2];
      fVar30 = (float)piVar27[3];
      fVar31 = (float)piVar27[4];
      uVar32 = *(undefined8 *)(piVar27 + 5);
      iVar26 = (int)((long)iVar4 * 3);
      pfVar25 = pfVar23;
      if (iVar1 == 3) {
        if (iVar4 < 4) goto LAB_109ad4250;
        uVar28 = 0;
        pfVar20 = pfVar22;
        do {
          fVar33 = *pfVar25;
          pfVar5 = pfVar25 + 1;
          pfVar6 = pfVar25 + 2;
          pfVar7 = pfVar25 + 3;
          pfVar8 = pfVar25 + 4;
          pfVar9 = pfVar25 + 5;
          pfVar10 = pfVar25 + 6;
          pfVar11 = pfVar25 + 7;
          pfVar12 = pfVar25 + 8;
          pfVar13 = pfVar25 + 9;
          pfVar14 = pfVar25 + 10;
          pfVar15 = pfVar25 + 0xb;
          pfVar25 = pfVar25 + 0xc;
          auStack_40[1] = CONCAT44(*pfVar13,*pfVar10);
          auStack_40[0] = CONCAT44(*pfVar7,fVar33);
          auStack_40[3] = CONCAT44(*pfVar14,*pfVar11);
          auStack_40[2] = CONCAT44(*pfVar8,*pfVar5);
          uStack_18 = CONCAT44(*pfVar15,*pfVar12);
          uStack_20 = CONCAT44(*pfVar9,*pfVar6);
          uVar41 = *(undefined8 *)(piVar27 + 0x16);
          uVar40 = *(undefined8 *)(piVar27 + 0x14);
          fVar33 = fVar33 * (float)*(undefined8 *)(piVar27 + 8) +
                   (float)*(undefined8 *)(piVar27 + 0xc) * *pfVar5 +
                   (float)*(undefined8 *)(piVar27 + 0x10) * *pfVar6;
          fVar42 = *pfVar7 * (float)((ulong)*(undefined8 *)(piVar27 + 8) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(piVar27 + 0xc) >> 0x20) * *pfVar8 +
                   (float)((ulong)*(undefined8 *)(piVar27 + 0x10) >> 0x20) * *pfVar9;
          fVar43 = *pfVar10 * (float)*(undefined8 *)(piVar27 + 10) +
                   (float)*(undefined8 *)(piVar27 + 0xe) * *pfVar11 +
                   (float)*(undefined8 *)(piVar27 + 0x12) * *pfVar12;
          fVar44 = *pfVar13 * (float)((ulong)*(undefined8 *)(piVar27 + 10) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(piVar27 + 0xe) >> 0x20) * *pfVar14 +
                   (float)((ulong)*(undefined8 *)(piVar27 + 0x12) >> 0x20) * *pfVar15;
          uVar36 = auStack_40[(long)(int)(uVar2 ^ 2) * 2 + 1];
          uVar34 = auStack_40[(long)(int)(uVar2 ^ 2) * 2];
          uVar39 = *(undefined8 *)(piVar27 + 0x1a);
          uVar38 = *(undefined8 *)(piVar27 + 0x18);
          fVar45 = (float)*(undefined8 *)(piVar27 + 0x1c);
          fVar46 = (float)((ulong)*(undefined8 *)(piVar27 + 0x1c) >> 0x20);
          fVar47 = (float)*(undefined8 *)(piVar27 + 0x1e);
          fVar48 = (float)((ulong)*(undefined8 *)(piVar27 + 0x1e) >> 0x20);
          uVar37 = auStack_40[uVar3 * 2 + 1];
          uVar35 = auStack_40[uVar3 * 2];
          *pfVar20 = fVar33;
          pfVar20[1] = fVar45 + (float)uVar40 * ((float)uVar34 - fVar33);
          pfVar20[2] = fVar45 + (float)uVar38 * ((float)uVar35 - fVar33);
          pfVar20[3] = fVar42;
          pfVar20[4] = fVar46 + (float)((ulong)uVar40 >> 0x20) *
                                ((float)((ulong)uVar34 >> 0x20) - fVar42);
          pfVar20[5] = fVar46 + (float)((ulong)uVar38 >> 0x20) *
                                ((float)((ulong)uVar35 >> 0x20) - fVar42);
          pfVar20[6] = fVar43;
          pfVar20[7] = fVar47 + (float)uVar41 * ((float)uVar36 - fVar43);
          pfVar20[8] = fVar47 + (float)uVar39 * ((float)uVar37 - fVar43);
          pfVar20[9] = fVar44;
          pfVar20[10] = fVar48 + (float)((ulong)uVar41 >> 0x20) *
                                 ((float)((ulong)uVar36 >> 0x20) - fVar44);
          pfVar20[0xb] = fVar48 + (float)((ulong)uVar39 >> 0x20) *
                                  ((float)((ulong)uVar37 >> 0x20) - fVar44);
          pfVar20 = pfVar20 + 0xc;
          uVar28 = uVar28 + 0xc;
        } while ((long)uVar28 <= (long)(iVar26 + -0xc));
LAB_109ad42c0:
        uVar28 = uVar28 & 0xffffffff;
      }
      else {
        if (3 < iVar4) {
          uVar28 = 0;
          pfVar20 = pfVar22;
          do {
            fVar33 = *pfVar25;
            pfVar16 = pfVar25 + 1;
            pfVar15 = pfVar25 + 2;
            pfVar13 = pfVar25 + 3;
            pfVar12 = pfVar25 + 4;
            pfVar11 = pfVar25 + 5;
            pfVar10 = pfVar25 + 6;
            pfVar9 = pfVar25 + 7;
            pfVar8 = pfVar25 + 8;
            pfVar7 = pfVar25 + 9;
            pfVar6 = pfVar25 + 10;
            pfVar5 = pfVar25 + 0xb;
            pfVar17 = pfVar25 + 0xc;
            pfVar18 = pfVar25 + 0xd;
            pfVar19 = pfVar25 + 0xe;
            pfVar14 = pfVar25 + 0xf;
            pfVar25 = pfVar25 + 0x10;
            auStack_40[1] = CONCAT44(*pfVar17,*pfVar8);
            auStack_40[0] = CONCAT44(*pfVar12,fVar33);
            auStack_40[3] = CONCAT44(*pfVar18,*pfVar7);
            auStack_40[2] = CONCAT44(*pfVar11,*pfVar16);
            uStack_18 = CONCAT44(*pfVar19,*pfVar6);
            uStack_20 = CONCAT44(*pfVar10,*pfVar15);
            uStack_8 = CONCAT44(*pfVar14,*pfVar5);
            uStack_10 = CONCAT44(*pfVar9,*pfVar13);
            uVar41 = *(undefined8 *)(piVar27 + 0x16);
            uVar40 = *(undefined8 *)(piVar27 + 0x14);
            fVar33 = fVar33 * (float)*(undefined8 *)(piVar27 + 8) +
                     (float)*(undefined8 *)(piVar27 + 0xc) * *pfVar16 +
                     (float)*(undefined8 *)(piVar27 + 0x10) * *pfVar15;
            fVar42 = *pfVar12 * (float)((ulong)*(undefined8 *)(piVar27 + 8) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(piVar27 + 0xc) >> 0x20) * *pfVar11 +
                     (float)((ulong)*(undefined8 *)(piVar27 + 0x10) >> 0x20) * *pfVar10;
            fVar43 = *pfVar8 * (float)*(undefined8 *)(piVar27 + 10) +
                     (float)*(undefined8 *)(piVar27 + 0xe) * *pfVar7 +
                     (float)*(undefined8 *)(piVar27 + 0x12) * *pfVar6;
            fVar44 = *pfVar17 * (float)((ulong)*(undefined8 *)(piVar27 + 10) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(piVar27 + 0xe) >> 0x20) * *pfVar18 +
                     (float)((ulong)*(undefined8 *)(piVar27 + 0x12) >> 0x20) * *pfVar19;
            uVar36 = auStack_40[(long)(int)(uVar2 ^ 2) * 2 + 1];
            uVar34 = auStack_40[(long)(int)(uVar2 ^ 2) * 2];
            uVar39 = *(undefined8 *)(piVar27 + 0x1a);
            uVar38 = *(undefined8 *)(piVar27 + 0x18);
            fVar45 = (float)*(undefined8 *)(piVar27 + 0x1c);
            fVar46 = (float)((ulong)*(undefined8 *)(piVar27 + 0x1c) >> 0x20);
            fVar47 = (float)*(undefined8 *)(piVar27 + 0x1e);
            fVar48 = (float)((ulong)*(undefined8 *)(piVar27 + 0x1e) >> 0x20);
            uVar37 = auStack_40[uVar3 * 2 + 1];
            uVar35 = auStack_40[uVar3 * 2];
            *pfVar20 = fVar33;
            pfVar20[1] = fVar45 + (float)uVar40 * ((float)uVar34 - fVar33);
            pfVar20[2] = fVar45 + (float)uVar38 * ((float)uVar35 - fVar33);
            pfVar20[3] = fVar42;
            pfVar20[4] = fVar46 + (float)((ulong)uVar40 >> 0x20) *
                                  ((float)((ulong)uVar34 >> 0x20) - fVar42);
            pfVar20[5] = fVar46 + (float)((ulong)uVar38 >> 0x20) *
                                  ((float)((ulong)uVar35 >> 0x20) - fVar42);
            pfVar20[6] = fVar43;
            pfVar20[7] = fVar47 + (float)uVar41 * ((float)uVar36 - fVar43);
            pfVar20[8] = fVar47 + (float)uVar39 * ((float)uVar37 - fVar43);
            pfVar20[9] = fVar44;
            pfVar20[10] = fVar48 + (float)((ulong)uVar41 >> 0x20) *
                                   ((float)((ulong)uVar36 >> 0x20) - fVar44);
            pfVar20[0xb] = fVar48 + (float)((ulong)uVar39 >> 0x20) *
                                    ((float)((ulong)uVar37 >> 0x20) - fVar44);
            pfVar20 = pfVar20 + 0xc;
            uVar28 = uVar28 + 0xc;
          } while ((long)uVar28 <= (long)iVar4 * 3 + -0xc);
          goto LAB_109ad42c0;
        }
LAB_109ad4250:
        uVar28 = 0;
      }
      if ((int)uVar28 < iVar26) {
        pfVar20 = pfVar22 + uVar28 + 1;
        do {
          fVar42 = pfVar25[uVar3 ^ 2];
          fVar43 = pfVar25[uVar3];
          fVar33 = fVar30 * pfVar25[1] + fVar29 * *pfVar25 + fVar31 * pfVar25[2];
          pfVar20[-1] = fVar33;
          *(ulong *)pfVar20 =
               CONCAT44((float)((ulong)uVar32 >> 0x20) * (fVar43 - fVar33) + 0.5,
                        (float)uVar32 * (fVar42 - fVar33) + 0.5);
          uVar28 = uVar28 + 3;
          pfVar25 = pfVar25 + iVar1;
          pfVar20 = pfVar20 + 3;
        } while ((long)uVar28 < (long)iVar26);
      }
      iVar21 = iVar21 + 1;
      lVar24 = *(long *)(param_1 + 8);
      pfVar23 = (float *)((long)pfVar23 + *(long *)(lVar24 + 0x50));
      pfVar22 = (float *)((long)pfVar22 + *(long *)(*(long *)(param_1 + 0x10) + 0x50));
    } while (iVar21 < param_2[1]);
  }
  return;
}



/* Entry: 109ad4354; end: 109ad435b;  */

void FUN_109ad4354(void)

{
  return;
}



/* Entry: 109ad435c; end: 109ad45a7;  */

void FUN_109ad435c(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  long lVar18;
  undefined1 *puVar19;
  int iVar20;
  int *piVar21;
  ulong uVar22;
  int iVar23;
  undefined1 *puVar24;
  long lVar25;
  long lVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  short sVar41;
  short sVar44;
  int iVar42;
  short sVar45;
  undefined8 uVar43;
  short sVar47;
  int iVar46;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  undefined8 auStack_40 [4];
  
  iVar23 = *param_2;
  if (iVar23 < param_2[1]) {
    lVar26 = *(long *)(param_1 + 8);
    puVar24 = (undefined1 *)
              (*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
              **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar23);
    lVar25 = *(long *)(lVar26 + 0x10) + **(long **)(lVar26 + 0x48) * (long)iVar23;
    do {
      piVar21 = *(int **)(param_1 + 0x18);
      iVar9 = *piVar21;
      uVar10 = (ulong)piVar21[1];
      iVar5 = piVar21[2];
      iVar7 = piVar21[3];
      iVar6 = piVar21[4];
      iVar8 = piVar21[5];
      lVar18 = (long)*(int *)(lVar26 + 0xc) * 3;
      puVar19 = puVar24;
      if (*(int *)(lVar26 + 0xc) < 8) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        do {
          pbVar4 = (byte *)(lVar25 + uVar22);
          bVar33 = *pbVar4;
          bVar34 = pbVar4[3];
          bVar35 = pbVar4[6];
          bVar36 = pbVar4[9];
          bVar37 = pbVar4[0xc];
          bVar38 = pbVar4[0xf];
          bVar39 = pbVar4[0x12];
          bVar40 = pbVar4[0x15];
          uVar43 = *(undefined8 *)(piVar21 + 0x1c);
          sVar41 = (short)uVar43;
          sVar44 = (short)((ulong)uVar43 >> 0x10);
          sVar45 = (short)((ulong)uVar43 >> 0x20);
          sVar47 = (short)((ulong)uVar43 >> 0x30);
          iVar48 = (CONCAT12(pbVar4[5],(ushort)pbVar4[2]) & 0xffff) - (int)sVar41;
          iVar49 = (uint)pbVar4[5] - (int)sVar44;
          iVar50 = (CONCAT12(pbVar4[4],(ushort)pbVar4[1]) & 0xffff) - (int)sVar41;
          iVar51 = (uint)pbVar4[4] - (int)sVar44;
          iVar60 = (CONCAT12(pbVar4[0x11],(ushort)pbVar4[0xe]) & 0xffff) - (int)sVar41;
          iVar61 = (uint)pbVar4[0x11] - (int)sVar44;
          iVar42 = (CONCAT12(pbVar4[0x10],(ushort)pbVar4[0xd]) & 0xffff) - (int)sVar41;
          iVar46 = (uint)pbVar4[0x10] - (int)sVar44;
          iVar52 = (int)*(undefined8 *)(piVar21 + 0x14);
          iVar53 = (int)((ulong)*(undefined8 *)(piVar21 + 0x14) >> 0x20);
          iVar54 = (int)*(undefined8 *)(piVar21 + 0x16);
          iVar55 = (int)((ulong)*(undefined8 *)(piVar21 + 0x16) >> 0x20);
          iVar20 = (int)*(undefined8 *)(piVar21 + 0x18);
          iVar12 = (int)((ulong)*(undefined8 *)(piVar21 + 0x18) >> 0x20);
          iVar13 = (int)*(undefined8 *)(piVar21 + 0x1a);
          iVar14 = (int)((ulong)*(undefined8 *)(piVar21 + 0x1a) >> 0x20);
          sVar41 = (short)((uint)(iVar20 + iVar48 * iVar52) >> 0xe) + (ushort)bVar33;
          sVar44 = (short)((uint)(iVar12 + iVar49 * iVar53) >> 0xe) + (ushort)bVar34;
          uVar27 = (undefined1)sVar44;
          uVar28 = (undefined1)((ushort)sVar44 >> 8);
          sVar44 = (short)(iVar13 + ((uint)pbVar4[8] - (int)sVar45) * iVar54 >> 0xe) +
                   (ushort)bVar35;
          uVar29 = (undefined1)sVar44;
          uVar30 = (undefined1)((ushort)sVar44 >> 8);
          sVar44 = (short)(iVar14 + ((uint)pbVar4[0xb] - (int)sVar47) * iVar55 >> 0xe) +
                   (ushort)bVar36;
          uVar31 = (undefined1)sVar44;
          uVar32 = (undefined1)((ushort)sVar44 >> 8);
          auVar11[2] = uVar27;
          auVar11._0_2_ = sVar41;
          auVar11[3] = uVar28;
          auVar11[4] = uVar29;
          auVar11[5] = uVar30;
          auVar11[6] = uVar31;
          auVar11[7] = uVar32;
          auVar11._8_2_ = (short)(uint3)((uint)(iVar20 + iVar60 * iVar52) >> 0xe) + (ushort)bVar37;
          auVar11._10_2_ = (short)(uint3)((uint)(iVar12 + iVar61 * iVar53) >> 0xe) + (ushort)bVar38;
          auVar11._12_2_ =
               (short)(iVar13 + ((uint)pbVar4[0x14] - (int)sVar45) * iVar54 >> 0xe) + (ushort)bVar39
          ;
          auVar11._14_2_ =
               (short)(iVar14 + ((uint)pbVar4[0x17] - (int)sVar47) * iVar55 >> 0xe) + (ushort)bVar40
          ;
          uVar43 = NEON_sqxtun(CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,
                                                  CONCAT13(uVar28,CONCAT12(uVar27,sVar41)))))),
                               auVar11,2);
          iVar56 = (int)*(undefined8 *)(piVar21 + 0xc);
          iVar57 = (int)((ulong)*(undefined8 *)(piVar21 + 0xc) >> 0x20);
          iVar58 = (int)*(undefined8 *)(piVar21 + 0xe);
          iVar59 = (int)((ulong)*(undefined8 *)(piVar21 + 0xe) >> 0x20);
          iVar52 = (int)*(undefined8 *)(piVar21 + 0x10);
          iVar53 = (int)((ulong)*(undefined8 *)(piVar21 + 0x10) >> 0x20);
          iVar54 = (int)*(undefined8 *)(piVar21 + 0x12);
          iVar55 = (int)((ulong)*(undefined8 *)(piVar21 + 0x12) >> 0x20);
          sVar41 = (short)((uint)(iVar20 + iVar50 * iVar56 + iVar48 * iVar52) >> 0xe) +
                   (ushort)bVar33;
          sVar44 = (short)((uint)(iVar12 + iVar51 * iVar57 + iVar49 * iVar53) >> 0xe) +
                   (ushort)bVar34;
          uVar27 = (undefined1)sVar44;
          uVar28 = (undefined1)((ushort)sVar44 >> 8);
          sVar44 = (short)(iVar13 + ((uint)pbVar4[7] - (int)sVar45) * iVar58 +
                           ((uint)pbVar4[8] - (int)sVar45) * iVar54 >> 0xe) + (ushort)bVar35;
          uVar29 = (undefined1)sVar44;
          uVar30 = (undefined1)((ushort)sVar44 >> 8);
          sVar44 = (short)(iVar14 + ((uint)pbVar4[10] - (int)sVar47) * iVar59 +
                           ((uint)pbVar4[0xb] - (int)sVar47) * iVar55 >> 0xe) + (ushort)bVar36;
          uVar31 = (undefined1)sVar44;
          uVar32 = (undefined1)((ushort)sVar44 >> 8);
          auVar15[2] = uVar27;
          auVar15._0_2_ = sVar41;
          auVar15[3] = uVar28;
          auVar15[4] = uVar29;
          auVar15[5] = uVar30;
          auVar15[6] = uVar31;
          auVar15[7] = uVar32;
          auVar15._8_2_ =
               (short)((uint)(iVar20 + iVar42 * iVar56 + iVar60 * iVar52) >> 0xe) + (ushort)bVar37;
          auVar15._10_2_ =
               (short)((uint)(iVar12 + iVar46 * iVar57 + iVar61 * iVar53) >> 0xe) + (ushort)bVar38;
          auVar15._12_2_ =
               (short)(iVar13 + ((uint)pbVar4[0x13] - (int)sVar45) * iVar58 +
                       ((uint)pbVar4[0x14] - (int)sVar45) * iVar54 >> 0xe) + (ushort)bVar39;
          auVar15._14_2_ =
               (short)(iVar14 + ((uint)pbVar4[0x16] - (int)sVar47) * iVar59 +
                       ((uint)pbVar4[0x17] - (int)sVar47) * iVar55 >> 0xe) + (ushort)bVar40;
          auStack_40[1] =
               NEON_sqxtun(CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(
                                                  uVar28,CONCAT12(uVar27,sVar41)))))),auVar15,2);
          iVar60 = (int)*(undefined8 *)(piVar21 + 8);
          iVar61 = (int)((ulong)*(undefined8 *)(piVar21 + 8) >> 0x20);
          iVar48 = (int)*(undefined8 *)(piVar21 + 10);
          iVar49 = (int)((ulong)*(undefined8 *)(piVar21 + 10) >> 0x20);
          sVar41 = (short)((uint)(iVar20 + iVar60 * iVar50) >> 0xe) + (ushort)bVar33;
          sVar44 = (short)((uint)(iVar12 + iVar61 * iVar51) >> 0xe) + (ushort)bVar34;
          uVar27 = (undefined1)sVar44;
          uVar28 = (undefined1)((ushort)sVar44 >> 8);
          sVar44 = (short)(iVar13 + iVar48 * ((uint)pbVar4[7] - (int)sVar45) >> 0xe) +
                   (ushort)bVar35;
          uVar29 = (undefined1)sVar44;
          uVar30 = (undefined1)((ushort)sVar44 >> 8);
          sVar44 = (short)(iVar14 + iVar49 * ((uint)pbVar4[10] - (int)sVar47) >> 0xe) +
                   (ushort)bVar36;
          uVar31 = (undefined1)sVar44;
          uVar32 = (undefined1)((ushort)sVar44 >> 8);
          auVar16[2] = uVar27;
          auVar16._0_2_ = sVar41;
          auVar16[3] = uVar28;
          auVar16[4] = uVar29;
          auVar16[5] = uVar30;
          auVar16[6] = uVar31;
          auVar16[7] = uVar32;
          auVar16._8_2_ = (short)((uint)(iVar20 + iVar60 * iVar42) >> 0xe) + (ushort)bVar37;
          auVar16._10_2_ = (short)((uint)(iVar12 + iVar61 * iVar46) >> 0xe) + (ushort)bVar38;
          auVar16._12_2_ =
               (short)(iVar13 + iVar48 * ((uint)pbVar4[0x13] - (int)sVar45) >> 0xe) + (ushort)bVar39
          ;
          auVar16._14_2_ =
               (short)(iVar14 + iVar49 * ((uint)pbVar4[0x16] - (int)sVar47) >> 0xe) + (ushort)bVar40
          ;
          uVar17 = NEON_sqxtun(CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,
                                                  CONCAT13(uVar28,CONCAT12(uVar27,sVar41)))))),
                               auVar16,2);
          if (iVar9 == 3) {
            auStack_40[uVar10] = uVar43;
            auStack_40[uVar10 ^ 2] = uVar17;
            *puVar19 = (char)auStack_40[0];
            puVar19[1] = (char)auStack_40[1];
            puVar19[2] = (char)auStack_40[2];
            puVar19[3] = (char)((ulong)auStack_40[0] >> 8);
            puVar19[4] = (char)((ulong)auStack_40[1] >> 8);
            puVar19[5] = (char)((ulong)auStack_40[2] >> 8);
            puVar19[6] = (char)((ulong)auStack_40[0] >> 0x10);
            puVar19[7] = (char)((ulong)auStack_40[1] >> 0x10);
            puVar19[8] = (char)((ulong)auStack_40[2] >> 0x10);
            puVar19[9] = (char)((ulong)auStack_40[0] >> 0x18);
            puVar19[10] = (char)((ulong)auStack_40[1] >> 0x18);
            puVar19[0xb] = (char)((ulong)auStack_40[2] >> 0x18);
            puVar19[0xc] = (char)((ulong)auStack_40[0] >> 0x20);
            puVar19[0xd] = (char)((ulong)auStack_40[1] >> 0x20);
            puVar19[0xe] = (char)((ulong)auStack_40[2] >> 0x20);
            puVar19[0xf] = (char)((ulong)auStack_40[0] >> 0x28);
            puVar19[0x10] = (char)((ulong)auStack_40[1] >> 0x28);
            puVar19[0x11] = (char)((ulong)auStack_40[2] >> 0x28);
            puVar19[0x12] = (char)((ulong)auStack_40[0] >> 0x30);
            puVar19[0x13] = (char)((ulong)auStack_40[1] >> 0x30);
            puVar19[0x14] = (char)((ulong)auStack_40[2] >> 0x30);
            puVar19[0x15] = (char)((ulong)auStack_40[0] >> 0x38);
            puVar19[0x16] = (char)((ulong)auStack_40[1] >> 0x38);
            puVar19[0x17] = (char)((ulong)auStack_40[2] >> 0x38);
          }
          else {
            auStack_40[uVar10] = uVar43;
            auStack_40[uVar10 ^ 2] = uVar17;
            uVar43 = *(undefined8 *)(piVar21 + 0x1e);
            *puVar19 = (char)auStack_40[0];
            puVar19[1] = (char)auStack_40[1];
            puVar19[2] = (char)auStack_40[2];
            puVar19[3] = (char)uVar43;
            puVar19[4] = (char)((ulong)auStack_40[0] >> 8);
            puVar19[5] = (char)((ulong)auStack_40[1] >> 8);
            puVar19[6] = (char)((ulong)auStack_40[2] >> 8);
            puVar19[7] = (char)((ulong)uVar43 >> 8);
            puVar19[8] = (char)((ulong)auStack_40[0] >> 0x10);
            puVar19[9] = (char)((ulong)auStack_40[1] >> 0x10);
            puVar19[10] = (char)((ulong)auStack_40[2] >> 0x10);
            puVar19[0xb] = (char)((ulong)uVar43 >> 0x10);
            puVar19[0xc] = (char)((ulong)auStack_40[0] >> 0x18);
            puVar19[0xd] = (char)((ulong)auStack_40[1] >> 0x18);
            puVar19[0xe] = (char)((ulong)auStack_40[2] >> 0x18);
            puVar19[0xf] = (char)((ulong)uVar43 >> 0x18);
            puVar19[0x10] = (char)((ulong)auStack_40[0] >> 0x20);
            puVar19[0x11] = (char)((ulong)auStack_40[1] >> 0x20);
            puVar19[0x12] = (char)((ulong)auStack_40[2] >> 0x20);
            puVar19[0x13] = (char)((ulong)uVar43 >> 0x20);
            puVar19[0x14] = (char)((ulong)auStack_40[0] >> 0x28);
            puVar19[0x15] = (char)((ulong)auStack_40[1] >> 0x28);
            puVar19[0x16] = (char)((ulong)auStack_40[2] >> 0x28);
            puVar19[0x17] = (char)((ulong)uVar43 >> 0x28);
            puVar19[0x18] = (char)((ulong)auStack_40[0] >> 0x30);
            puVar19[0x19] = (char)((ulong)auStack_40[1] >> 0x30);
            puVar19[0x1a] = (char)((ulong)auStack_40[2] >> 0x30);
            puVar19[0x1b] = (char)((ulong)uVar43 >> 0x30);
            puVar19[0x1c] = (char)((ulong)auStack_40[0] >> 0x38);
            puVar19[0x1d] = (char)((ulong)auStack_40[1] >> 0x38);
            puVar19[0x1e] = (char)((ulong)auStack_40[2] >> 0x38);
            puVar19[0x1f] = (char)((ulong)uVar43 >> 0x38);
          }
          uVar22 = uVar22 + 0x18;
          puVar19 = puVar19 + (long)iVar9 * 8;
        } while ((long)uVar22 <= lVar18 + -0x18);
        uVar22 = uVar22 & 0xffffffff;
      }
      iVar20 = (int)lVar18;
      if ((int)uVar22 < iVar20) {
        do {
          pbVar4 = (byte *)(lVar25 + uVar22);
          bVar33 = *pbVar4;
          uVar1 = (uint)bVar33 + ((int)((pbVar4[2] - 0x80) * iVar8 + 0x2000) >> 0xe);
          uVar2 = (uint)bVar33 +
                  ((int)((pbVar4[2] - 0x80) * iVar6 + (pbVar4[1] - 0x80) * iVar7 + 0x2000) >> 0xe);
          uVar3 = (uint)bVar33 + ((int)((pbVar4[1] - 0x80) * iVar5 + 0x2000) >> 0xe);
          uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar1) {
            uVar1 = 0xff;
          }
          puVar19[uVar10] = (char)uVar1;
          uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          puVar19[1] = (char)uVar2;
          uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar19[uVar10 ^ 2] = (char)uVar3;
          if (iVar9 == 4) {
            puVar19[3] = 0xff;
          }
          uVar22 = uVar22 + 3;
          puVar19 = puVar19 + iVar9;
        } while ((long)uVar22 < (long)iVar20);
      }
      iVar23 = iVar23 + 1;
      lVar26 = *(long *)(param_1 + 8);
      lVar25 = lVar25 + *(long *)(lVar26 + 0x50);
      puVar24 = puVar24 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar23 < param_2[1]);
  }
  return;
}



/* Entry: 109ad45a8; end: 109ad45af;  */

void FUN_109ad45a8(void)

{
  return;
}



/* Entry: 109ad45b0; end: 109ad48e7;  */

void FUN_109ad45b0(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  undefined2 *puVar21;
  uint *puVar22;
  int iVar23;
  undefined2 *puVar24;
  ushort *puVar25;
  long lVar26;
  ushort *puVar27;
  ushort uVar28;
  ushort uVar35;
  int iVar29;
  undefined8 uVar30;
  ushort uVar36;
  int iVar39;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ushort uVar38;
  int iVar37;
  int iVar40;
  undefined1 auVar34 [16];
  int iVar41;
  int iVar46;
  undefined8 uVar42;
  int iVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar48;
  int iVar49;
  int iVar55;
  undefined8 uVar50;
  undefined1 auVar51 [12];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined1 auVar52 [16];
  
  iVar23 = *param_2;
  if (iVar23 < param_2[1]) {
    lVar26 = *(long *)(param_1 + 8);
    puVar24 = (undefined2 *)
              (*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
              **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar23);
    puVar25 = (ushort *)(*(long *)(lVar26 + 0x10) + **(long **)(lVar26 + 0x48) * (long)iVar23);
    do {
      puVar22 = *(uint **)(param_1 + 0x18);
      uVar8 = *puVar22;
      uVar9 = puVar22[1];
      uVar10 = (ulong)(int)uVar9;
      uVar4 = puVar22[2];
      uVar6 = puVar22[3];
      uVar5 = puVar22[4];
      uVar7 = puVar22[5];
      lVar17 = (long)*(int *)(lVar26 + 0xc) * 3;
      puVar21 = puVar24;
      if (*(int *)(lVar26 + 0xc) < 8) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        uVar1 = uVar9 ^ 2;
        puVar27 = puVar25;
        do {
          uVar28 = *puVar27;
          uVar35 = puVar27[3];
          uVar36 = puVar27[6];
          uVar38 = puVar27[9];
          auVar31._0_8_ = CONCAT26(uVar38,CONCAT24(uVar36,CONCAT22(uVar35,uVar28)));
          auVar43._0_8_ = CONCAT26(puVar27[10],CONCAT24(puVar27[7],CONCAT22(puVar27[4],puVar27[1])))
          ;
          auVar51._0_8_ =
               CONCAT26(puVar27[0xb],CONCAT24(puVar27[8],CONCAT22(puVar27[5],puVar27[2])));
          auVar31._8_2_ = puVar27[0xc];
          auVar43._8_2_ = puVar27[0xd];
          auVar51._8_2_ = puVar27[0xe];
          auVar31._10_2_ = puVar27[0xf];
          auVar43._10_2_ = puVar27[0x10];
          auVar51._10_2_ = puVar27[0x11];
          auVar31._12_2_ = puVar27[0x12];
          auVar43._12_2_ = puVar27[0x13];
          auVar52._12_2_ = puVar27[0x14];
          auVar52._0_12_ = auVar51;
          auVar31._14_2_ = puVar27[0x15];
          auVar43._14_2_ = puVar27[0x16];
          auVar52._14_2_ = puVar27[0x17];
          iVar57 = (int)*(undefined8 *)(puVar22 + 0x1e);
          iVar58 = (int)((ulong)*(undefined8 *)(puVar22 + 0x1e) >> 0x20);
          iVar55 = (int)*(undefined8 *)(puVar22 + 0x1c);
          iVar56 = (int)((ulong)*(undefined8 *)(puVar22 + 0x1c) >> 0x20);
          iVar40 = (uint)puVar27[2] - iVar55;
          iVar41 = (uint)puVar27[5] - iVar56;
          iVar46 = (uint)puVar27[8] - iVar57;
          iVar49 = (uint)puVar27[0xb] - iVar58;
          iVar66 = (int)*(undefined8 *)(puVar22 + 0x16);
          iVar67 = (int)((ulong)*(undefined8 *)(puVar22 + 0x16) >> 0x20);
          iVar64 = (int)*(undefined8 *)(puVar22 + 0x14);
          iVar65 = (int)((ulong)*(undefined8 *)(puVar22 + 0x14) >> 0x20);
          iVar59 = (int)*(undefined8 *)(puVar22 + 0x18);
          iVar61 = (int)((ulong)*(undefined8 *)(puVar22 + 0x18) >> 0x20);
          iVar62 = (int)*(undefined8 *)(puVar22 + 0x1a);
          iVar63 = (int)((ulong)*(undefined8 *)(puVar22 + 0x1a) >> 0x20);
          iVar48 = (uint)puVar27[1] - iVar55;
          iVar29 = (uint)puVar27[4] - iVar56;
          iVar37 = (uint)puVar27[7] - iVar57;
          iVar39 = (uint)puVar27[10] - iVar58;
          iVar72 = (int)*(undefined8 *)(puVar22 + 0xc);
          iVar73 = (int)((ulong)*(undefined8 *)(puVar22 + 0xc) >> 0x20);
          iVar74 = (int)*(undefined8 *)(puVar22 + 0xe);
          iVar75 = (int)((ulong)*(undefined8 *)(puVar22 + 0xe) >> 0x20);
          iVar68 = (int)*(undefined8 *)(puVar22 + 0x10);
          iVar69 = (int)((ulong)*(undefined8 *)(puVar22 + 0x10) >> 0x20);
          iVar70 = (int)*(undefined8 *)(puVar22 + 0x12);
          iVar71 = (int)((ulong)*(undefined8 *)(puVar22 + 0x12) >> 0x20);
          iVar76 = (int)*(undefined8 *)(puVar22 + 8);
          iVar77 = (int)((ulong)*(undefined8 *)(puVar22 + 8) >> 0x20);
          iVar78 = (int)*(undefined8 *)(puVar22 + 10);
          iVar79 = (int)((ulong)*(undefined8 *)(puVar22 + 10) >> 0x20);
          iVar19 = (uint)uVar35 + (iVar61 + iVar77 * iVar29 >> 0xe);
          iVar12 = (uint)uVar36 + (iVar62 + iVar78 * iVar37 >> 0xe);
          iVar47 = (uint)uVar38 + (iVar63 + iVar79 * iVar39 >> 0xe);
          auVar44._8_8_ = auVar43._8_8_;
          auVar53._8_8_ = auVar52._8_8_;
          iVar60 = (auVar51._8_4_ & 0xffff) - iVar55;
          auVar32._8_8_ = auVar31._8_8_;
          auVar16._4_4_ = (uint)uVar35 + (iVar61 + iVar41 * iVar65 >> 0xe);
          auVar16._0_4_ = (uint)uVar28 + (iVar59 + iVar40 * iVar64 >> 0xe);
          auVar16._8_4_ = (uint)uVar36 + (iVar62 + iVar46 * iVar66 >> 0xe);
          auVar16._12_4_ = (uint)uVar38 + (iVar63 + iVar49 * iVar67 >> 0xe);
          auVar32._0_8_ = NEON_sqxtun(auVar31._0_8_,auVar16,4);
          auVar33._4_4_ =
               ((int)(iVar61 + ((uint)auVar51._10_2_ - iVar56) * iVar65) >> 0xe) +
               (uint)auVar31._10_2_;
          auVar33._0_4_ = (iVar59 + iVar60 * iVar64 >> 0xe) + (uint)auVar31._8_2_;
          auVar33._8_4_ =
               ((int)(iVar62 + ((uint)auVar52._12_2_ - iVar57) * iVar66) >> 0xe) +
               (uint)auVar31._12_2_;
          auVar33._12_4_ =
               ((int)(iVar63 + ((uint)auVar52._14_2_ - iVar58) * iVar67) >> 0xe) +
               (uint)auVar31._14_2_;
          auVar33 = NEON_sqxtun2(auVar32,auVar33,4);
          auVar45._4_4_ = (uint)uVar35 + (iVar61 + iVar29 * iVar73 + iVar69 * iVar41 >> 0xe);
          auVar45._0_4_ = (uint)uVar28 + (iVar59 + iVar48 * iVar72 + iVar68 * iVar40 >> 0xe);
          auVar45._8_4_ = (uint)uVar36 + (iVar62 + iVar37 * iVar74 + iVar70 * iVar46 >> 0xe);
          auVar45._12_4_ = (uint)uVar38 + (iVar63 + iVar39 * iVar75 + iVar71 * iVar49 >> 0xe);
          auVar44._0_8_ = NEON_sqxtun(auVar43._0_8_,auVar45,4);
          auVar15._4_4_ =
               ((int)(iVar61 + ((uint)auVar43._10_2_ - iVar56) * iVar73 +
                     iVar69 * ((uint)auVar51._10_2_ - iVar56)) >> 0xe) + (uint)auVar31._10_2_;
          auVar15._0_4_ =
               ((int)(iVar59 + ((uint)auVar43._8_2_ - iVar55) * iVar72 + iVar68 * iVar60) >> 0xe) +
               (uint)auVar31._8_2_;
          auVar15._8_4_ =
               ((int)(iVar62 + ((uint)auVar43._12_2_ - iVar57) * iVar74 +
                     iVar70 * ((uint)auVar52._12_2_ - iVar57)) >> 0xe) + (uint)auVar31._12_2_;
          auVar15._12_4_ =
               ((int)(iVar63 + ((uint)auVar43._14_2_ - iVar58) * iVar75 +
                     iVar71 * ((uint)auVar52._14_2_ - iVar58)) >> 0xe) + (uint)auVar31._14_2_;
          auVar45 = NEON_sqxtun2(auVar44,auVar15,4);
          auVar54._4_2_ = (short)iVar19;
          auVar54._0_4_ = (uint)uVar28 + (iVar59 + iVar76 * iVar48 >> 0xe);
          auVar54._6_2_ = (short)((uint)iVar19 >> 0x10);
          auVar54._8_2_ = (short)iVar12;
          auVar54._10_2_ = (short)((uint)iVar12 >> 0x10);
          auVar54._12_2_ = (short)iVar47;
          auVar54._14_2_ = (short)((uint)iVar47 >> 0x10);
          auVar53._0_8_ = NEON_sqxtun(auVar51._0_8_,auVar54,4);
          auVar13._4_4_ =
               ((int)(iVar61 + iVar77 * ((uint)auVar43._10_2_ - iVar56)) >> 0xe) +
               (uint)auVar31._10_2_;
          auVar13._0_4_ =
               ((int)(iVar59 + iVar76 * ((uint)auVar43._8_2_ - iVar55)) >> 0xe) +
               (uint)auVar31._8_2_;
          auVar13._8_4_ =
               ((int)(iVar62 + iVar78 * ((uint)auVar43._12_2_ - iVar57)) >> 0xe) +
               (uint)auVar31._12_2_;
          auVar13._12_4_ =
               ((int)(iVar63 + iVar79 * ((uint)auVar43._14_2_ - iVar58)) >> 0xe) +
               (uint)auVar31._14_2_;
          auVar54 = NEON_sqxtun2(auVar53,auVar13,4);
          uStack_60 = auVar45._0_8_;
          uStack_58 = auVar45._8_8_;
          if (uVar8 == 3) {
            (&uStack_68)[uVar10 * 2] = auVar33._8_8_;
            *(long *)(&uStack_70 + uVar10 * 8) = auVar33._0_8_;
            (&uStack_68)[(long)(int)uVar1 * 2] = auVar54._8_8_;
            *(long *)(&uStack_70 + (long)(int)uVar1 * 8) = auVar54._0_8_;
            *puVar21 = uStack_70;
            puVar21[1] = (undefined2)uStack_60;
            puVar21[2] = uStack_50;
            puVar21[3] = uStack_6e;
            puVar21[4] = uStack_60._2_2_;
            puVar21[5] = uStack_4e;
            puVar21[6] = uStack_6c;
            puVar21[7] = uStack_60._4_2_;
            puVar21[8] = uStack_4c;
            puVar21[9] = uStack_6a;
            puVar21[10] = uStack_60._6_2_;
            puVar21[0xb] = uStack_4a;
            puVar21[0xc] = (undefined2)uStack_68;
            puVar21[0xd] = (undefined2)uStack_58;
            puVar21[0xe] = uStack_48;
            puVar21[0xf] = uStack_68._2_2_;
            puVar21[0x10] = uStack_58._2_2_;
            puVar21[0x11] = uStack_46;
            puVar21[0x12] = uStack_68._4_2_;
            puVar21[0x13] = uStack_58._4_2_;
            puVar21[0x14] = uStack_44;
            puVar21[0x15] = uStack_68._6_2_;
            puVar21[0x16] = uStack_58._6_2_;
            puVar21[0x17] = uStack_42;
          }
          else {
            (&uStack_68)[uVar10 * 2] = auVar33._8_8_;
            *(long *)(&uStack_70 + uVar10 * 8) = auVar33._0_8_;
            (&uStack_68)[(long)(int)uVar1 * 2] = auVar54._8_8_;
            *(long *)(&uStack_70 + (long)(int)uVar1 * 8) = auVar54._0_8_;
            uVar42 = *(undefined8 *)(puVar22 + 0x22);
            uVar30 = *(undefined8 *)(puVar22 + 0x20);
            *puVar21 = uStack_70;
            puVar21[1] = (undefined2)uStack_60;
            puVar21[2] = uStack_50;
            puVar21[3] = (short)uVar30;
            puVar21[4] = uStack_6e;
            puVar21[5] = uStack_60._2_2_;
            puVar21[6] = uStack_4e;
            puVar21[7] = (short)((ulong)uVar30 >> 0x10);
            puVar21[8] = uStack_6c;
            puVar21[9] = uStack_60._4_2_;
            puVar21[10] = uStack_4c;
            puVar21[0xb] = (short)((ulong)uVar30 >> 0x20);
            puVar21[0xc] = uStack_6a;
            puVar21[0xd] = uStack_60._6_2_;
            puVar21[0xe] = uStack_4a;
            puVar21[0xf] = (short)((ulong)uVar30 >> 0x30);
            puVar21[0x10] = (undefined2)uStack_68;
            puVar21[0x11] = (undefined2)uStack_58;
            puVar21[0x12] = uStack_48;
            puVar21[0x13] = (short)uVar42;
            puVar21[0x14] = uStack_68._2_2_;
            puVar21[0x15] = uStack_58._2_2_;
            puVar21[0x16] = uStack_46;
            puVar21[0x17] = (short)((ulong)uVar42 >> 0x10);
            puVar21[0x18] = uStack_68._4_2_;
            puVar21[0x19] = uStack_58._4_2_;
            puVar21[0x1a] = uStack_44;
            puVar21[0x1b] = (short)((ulong)uVar42 >> 0x20);
            puVar21[0x1c] = uStack_68._6_2_;
            puVar21[0x1d] = uStack_58._6_2_;
            puVar21[0x1e] = uStack_42;
            puVar21[0x1f] = (short)((ulong)uVar42 >> 0x30);
          }
          uVar20 = uVar20 + 0x18;
          puVar27 = puVar27 + 0x18;
          puVar21 = (undefined2 *)
                    ((long)puVar21 +
                    (-(ulong)((uVar8 & 0x1fffffff) >> 0x1c) & 0xfffffffe00000000 |
                    (ulong)(uVar8 << 3) << 1));
        } while ((long)uVar20 <= lVar17 + -0x18);
      }
      iVar19 = (int)lVar17;
      if ((int)uVar20 <= iVar19 + -0xc) {
        puVar27 = puVar25 + (uVar20 & 0xffffffff);
        do {
          uVar28 = *puVar27;
          uVar35 = puVar27[3];
          uVar36 = puVar27[6];
          uVar38 = puVar27[9];
          uVar1 = puVar22[0x18];
          uVar2 = puVar22[0x19];
          uVar3 = puVar22[0x1a];
          uVar18 = puVar22[0x1b];
          iVar29 = (uint)puVar27[2] - puVar22[0x1c];
          iVar37 = (uint)puVar27[5] - puVar22[0x1d];
          iVar39 = (uint)puVar27[8] - puVar22[0x1e];
          iVar40 = (uint)puVar27[0xb] - puVar22[0x1f];
          iVar41 = (uint)puVar27[1] - puVar22[0x1c];
          iVar46 = (uint)puVar27[4] - puVar22[0x1d];
          iVar47 = (uint)puVar27[7] - puVar22[0x1e];
          iVar48 = (uint)puVar27[10] - puVar22[0x1f];
          auVar34._0_8_ =
               CONCAT44((uint)uVar35 +
                        ((int)(uVar2 + (int)((ulong)*(undefined8 *)(puVar22 + 0xc) >> 0x20) * iVar46
                              + (int)((ulong)*(undefined8 *)(puVar22 + 0x10) >> 0x20) * iVar37) >>
                        0xe),(uint)uVar28 +
                             ((int)(uVar1 + (int)*(undefined8 *)(puVar22 + 0xc) * iVar41 +
                                   (int)*(undefined8 *)(puVar22 + 0x10) * iVar29) >> 0xe));
          auVar34._8_4_ =
               (uint)uVar36 +
               ((int)(uVar3 + (int)*(undefined8 *)(puVar22 + 0xe) * iVar47 +
                     (int)*(undefined8 *)(puVar22 + 0x12) * iVar39) >> 0xe);
          auVar34._12_4_ =
               (uint)uVar38 +
               ((int)(uVar18 + (int)((ulong)*(undefined8 *)(puVar22 + 0xe) >> 0x20) * iVar48 +
                     (int)((ulong)*(undefined8 *)(puVar22 + 0x12) >> 0x20) * iVar40) >> 0xe);
          iVar49 = uVar1 + (int)*(undefined8 *)(puVar22 + 8) * iVar41;
          iVar55 = uVar2 + (int)((ulong)*(undefined8 *)(puVar22 + 8) >> 0x20) * iVar46;
          iVar12 = (uint)uVar35 + (iVar55 >> 0xe);
          iVar47 = (uint)uVar36 +
                   ((int)(uVar3 + (int)*(undefined8 *)(puVar22 + 10) * iVar47) >> 0xe);
          iVar48 = (uint)uVar38 +
                   ((int)(uVar18 + (int)((ulong)*(undefined8 *)(puVar22 + 10) >> 0x20) * iVar48) >>
                   0xe);
          auVar14._4_4_ =
               (uint)uVar35 +
               ((int)(uVar2 + iVar37 * (int)((ulong)*(undefined8 *)(puVar22 + 0x14) >> 0x20)) >> 0xe
               );
          auVar14._0_4_ =
               (uint)uVar28 + ((int)(uVar1 + iVar29 * (int)*(undefined8 *)(puVar22 + 0x14)) >> 0xe);
          auVar14._8_4_ =
               (uint)uVar36 + ((int)(uVar3 + iVar39 * (int)*(undefined8 *)(puVar22 + 0x16)) >> 0xe);
          auVar14._12_4_ =
               (uint)uVar38 +
               ((int)(uVar18 + iVar40 * (int)((ulong)*(undefined8 *)(puVar22 + 0x16) >> 0x20)) >>
               0xe);
          uVar50 = NEON_sqxtun(CONCAT44(iVar55,iVar49),auVar14,4);
          uVar42 = NEON_sqxtun(CONCAT44(iVar46,iVar41),auVar34,4);
          auVar11._4_2_ = (short)iVar12;
          auVar11._0_4_ = (uint)uVar28 + (iVar49 >> 0xe);
          auVar11._6_2_ = (short)((uint)iVar12 >> 0x10);
          auVar11._8_2_ = (short)iVar47;
          auVar11._10_2_ = (short)((uint)iVar47 >> 0x10);
          auVar11._12_2_ = (short)iVar48;
          auVar11._14_2_ = (short)((uint)iVar48 >> 0x10);
          uVar30 = NEON_sqxtun(auVar34._0_8_,auVar11,4);
          uStack_68 = uVar42;
          if (uVar8 == 3) {
            *(undefined8 *)(&uStack_70 + uVar10 * 4) = uVar50;
            *(undefined8 *)(&uStack_70 + (uVar10 ^ 2) * 4) = uVar30;
            *puVar21 = uStack_70;
            puVar21[1] = (undefined2)uStack_68;
            puVar21[2] = (undefined2)uStack_60;
            puVar21[3] = uStack_6e;
            puVar21[4] = uStack_68._2_2_;
            puVar21[5] = uStack_60._2_2_;
            puVar21[6] = uStack_6c;
            puVar21[7] = uStack_68._4_2_;
            puVar21[8] = uStack_60._4_2_;
            puVar21[9] = uStack_6a;
            puVar21[10] = uStack_68._6_2_;
            puVar21[0xb] = uStack_60._6_2_;
          }
          else {
            *(undefined8 *)(&uStack_70 + uVar10 * 4) = uVar50;
            *(undefined8 *)(&uStack_70 + (uVar10 ^ 2) * 4) = uVar30;
            uVar30 = *(undefined8 *)(puVar22 + 0x24);
            *puVar21 = uStack_70;
            puVar21[1] = (undefined2)uStack_68;
            puVar21[2] = (undefined2)uStack_60;
            puVar21[3] = (short)uVar30;
            puVar21[4] = uStack_6e;
            puVar21[5] = uStack_68._2_2_;
            puVar21[6] = uStack_60._2_2_;
            puVar21[7] = (short)((ulong)uVar30 >> 0x10);
            puVar21[8] = uStack_6c;
            puVar21[9] = uStack_68._4_2_;
            puVar21[10] = uStack_60._4_2_;
            puVar21[0xb] = (short)((ulong)uVar30 >> 0x20);
            puVar21[0xc] = uStack_6a;
            puVar21[0xd] = uStack_68._6_2_;
            puVar21[0xe] = uStack_60._6_2_;
            puVar21[0xf] = (short)((ulong)uVar30 >> 0x30);
          }
          uVar1 = (int)uVar20 + 0xc;
          uVar20 = (ulong)uVar1;
          puVar27 = puVar27 + 0xc;
          puVar21 = (undefined2 *)
                    ((long)puVar21 +
                    (-(ulong)((uVar8 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 |
                    (ulong)(uVar8 << 2) << 1));
        } while ((int)uVar1 <= iVar19 + -0xc);
      }
      if ((int)uVar20 < iVar19) {
        puVar27 = puVar25 + (uVar20 & 0xffffffff) + 1;
        do {
          uVar28 = puVar27[-1];
          uVar1 = (uint)uVar28 + ((int)((puVar27[1] - 0x8000) * uVar7 + 0x2000) >> 0xe);
          uVar2 = (uint)uVar28 +
                  ((int)((puVar27[1] - 0x8000) * uVar5 + (*puVar27 - 0x8000) * uVar6 + 0x2000) >>
                  0xe);
          uVar3 = (uint)uVar28 + ((int)((*puVar27 - 0x8000) * uVar4 + 0x2000) >> 0xe);
          uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar1) {
            uVar1 = 0xffff;
          }
          puVar21[uVar10] = (short)uVar1;
          uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar2) {
            uVar2 = 0xffff;
          }
          puVar21[1] = (short)uVar2;
          uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar3) {
            uVar3 = 0xffff;
          }
          puVar21[(int)(uVar9 ^ 2)] = (short)uVar3;
          if (uVar8 == 4) {
            puVar21[3] = 0xffff;
          }
          puVar27 = puVar27 + 3;
          uVar1 = (int)uVar20 + 3;
          uVar20 = (ulong)uVar1;
          puVar21 = puVar21 + (int)uVar8;
        } while ((int)uVar1 < iVar19);
      }
      iVar23 = iVar23 + 1;
      lVar26 = *(long *)(param_1 + 8);
      puVar25 = (ushort *)((long)puVar25 + *(long *)(lVar26 + 0x50));
      puVar24 = (undefined2 *)((long)puVar24 + *(long *)(*(long *)(param_1 + 0x10) + 0x50));
    } while (iVar23 < param_2[1]);
  }
  return;
}



/* Entry: 109ad48e8; end: 109ad48ef;  */

void FUN_109ad48e8(void)

{
  return;
}



/* Entry: 109ad48f0; end: 109ad4ae7;  */

void FUN_109ad48f0(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar9;
  ulong uVar13;
  float *pfVar14;
  int iVar15;
  undefined4 *puVar16;
  float *pfVar17;
  long lVar18;
  undefined4 *puVar19;
  int iVar20;
  int *piVar21;
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
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 auStack_40 [2];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  
  iVar15 = *param_2;
  if (iVar15 < param_2[1]) {
    lVar18 = *(long *)(param_1 + 8);
    puVar16 = (undefined4 *)
              (*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
              **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar15);
    pfVar17 = (float *)(*(long *)(lVar18 + 0x10) + **(long **)(lVar18 + 0x48) * (long)iVar15);
    do {
      piVar21 = *(int **)(param_1 + 0x18);
      iVar4 = *(int *)(lVar18 + 0xc);
      iVar1 = *piVar21;
      uVar2 = piVar21[1];
      uVar3 = (ulong)(int)uVar2;
      fVar22 = (float)piVar21[2];
      fVar23 = (float)piVar21[3];
      fVar24 = (float)piVar21[4];
      fVar25 = (float)piVar21[5];
      iVar20 = (int)((long)iVar4 * 3);
      puVar19 = puVar16;
      if (iVar1 == 3) {
        if (iVar4 < 4) goto LAB_109ad49d4;
        uVar13 = 0;
        pfVar14 = pfVar17;
        do {
          fVar26 = *pfVar14;
          fVar30 = pfVar14[1];
          pfVar5 = pfVar14 + 2;
          fVar27 = pfVar14[3];
          fVar31 = pfVar14[4];
          pfVar6 = pfVar14 + 5;
          fVar28 = pfVar14[6];
          fVar32 = pfVar14[7];
          pfVar7 = pfVar14 + 8;
          fVar29 = pfVar14[9];
          fVar33 = pfVar14[10];
          pfVar8 = pfVar14 + 0xb;
          pfVar14 = pfVar14 + 0xc;
          fVar41 = (float)*(undefined8 *)(piVar21 + 0x1c);
          fVar35 = *pfVar5 - fVar41;
          fVar42 = (float)((ulong)*(undefined8 *)(piVar21 + 0x1c) >> 0x20);
          fVar36 = *pfVar6 - fVar42;
          fVar43 = (float)*(undefined8 *)(piVar21 + 0x1e);
          fVar37 = *pfVar7 - fVar43;
          fVar44 = (float)((ulong)*(undefined8 *)(piVar21 + 0x1e) >> 0x20);
          fVar38 = *pfVar8 - fVar44;
          uVar40 = *(undefined8 *)(piVar21 + 0x12);
          uVar39 = *(undefined8 *)(piVar21 + 0x10);
          uVar34 = *(undefined8 *)(piVar21 + 0x14);
          auStack_40[uVar3 * 2 + 1] =
               CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(piVar21 + 0x16) >> 0x20) * fVar38,
                        fVar28 + (float)*(undefined8 *)(piVar21 + 0x16) * fVar37);
          auStack_40[uVar3 * 2] =
               CONCAT44(fVar27 + (float)((ulong)uVar34 >> 0x20) * fVar36,
                        fVar26 + (float)uVar34 * fVar35);
          fVar30 = fVar30 - fVar41;
          fVar31 = fVar31 - fVar42;
          fVar32 = fVar32 - fVar43;
          fVar33 = fVar33 - fVar44;
          uVar34 = *(undefined8 *)(piVar21 + 8);
          fStack_30 = fVar26 + fVar35 * (float)uVar39 +
                               (float)*(undefined8 *)(piVar21 + 0xc) * fVar30;
          fStack_2c = fVar27 + fVar36 * (float)((ulong)uVar39 >> 0x20) +
                               (float)((ulong)*(undefined8 *)(piVar21 + 0xc) >> 0x20) * fVar31;
          fStack_28 = fVar28 + fVar37 * (float)uVar40 +
                               (float)*(undefined8 *)(piVar21 + 0xe) * fVar32;
          fStack_24 = fVar29 + fVar38 * (float)((ulong)uVar40 >> 0x20) +
                               (float)((ulong)*(undefined8 *)(piVar21 + 0xe) >> 0x20) * fVar33;
          auStack_40[(uVar3 ^ 2) * 2 + 1] =
               CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(piVar21 + 10) >> 0x20) * fVar33,
                        fVar28 + (float)*(undefined8 *)(piVar21 + 10) * fVar32);
          auStack_40[(uVar3 ^ 2) * 2] =
               CONCAT44(fVar27 + (float)((ulong)uVar34 >> 0x20) * fVar31,
                        fVar26 + (float)uVar34 * fVar30);
          *puVar19 = (int)auStack_40[0];
          puVar19[1] = fStack_30;
          puVar19[2] = (int)uStack_20;
          puVar19[3] = (int)((ulong)auStack_40[0] >> 0x20);
          puVar19[4] = fStack_2c;
          puVar19[5] = (int)((ulong)uStack_20 >> 0x20);
          puVar19[6] = (int)auStack_40[1];
          puVar19[7] = fStack_28;
          puVar19[8] = (int)uStack_18;
          puVar19[9] = (int)((ulong)auStack_40[1] >> 0x20);
          puVar19[10] = fStack_24;
          puVar19[0xb] = (int)((ulong)uStack_18 >> 0x20);
          puVar19 = puVar19 + 0xc;
          uVar13 = uVar13 + 0xc;
        } while ((long)uVar13 <= (long)(iVar20 + -0xc));
LAB_109ad4a4c:
        uVar13 = uVar13 & 0xffffffff;
      }
      else {
        if (3 < iVar4) {
          uVar13 = 0;
          pfVar14 = pfVar17;
          do {
            fVar26 = *pfVar14;
            pfVar5 = pfVar14 + 1;
            pfVar6 = pfVar14 + 2;
            fVar27 = pfVar14[3];
            pfVar7 = pfVar14 + 4;
            pfVar8 = pfVar14 + 5;
            fVar28 = pfVar14[6];
            pfVar9 = pfVar14 + 7;
            pfVar10 = pfVar14 + 8;
            fVar29 = pfVar14[9];
            pfVar11 = pfVar14 + 10;
            pfVar12 = pfVar14 + 0xb;
            pfVar14 = pfVar14 + 0xc;
            uVar34 = *(undefined8 *)(piVar21 + 0x14);
            uVar40 = *(undefined8 *)(piVar21 + 0x1a);
            uVar39 = *(undefined8 *)(piVar21 + 0x18);
            fVar30 = (float)*(undefined8 *)(piVar21 + 0x1c);
            fVar41 = *pfVar6 - fVar30;
            fVar31 = (float)((ulong)*(undefined8 *)(piVar21 + 0x1c) >> 0x20);
            fVar42 = *pfVar8 - fVar31;
            fVar32 = (float)*(undefined8 *)(piVar21 + 0x1e);
            fVar43 = *pfVar10 - fVar32;
            fVar33 = (float)((ulong)*(undefined8 *)(piVar21 + 0x1e) >> 0x20);
            fVar44 = *pfVar12 - fVar33;
            uVar48 = *(undefined8 *)(piVar21 + 0xe);
            uVar47 = *(undefined8 *)(piVar21 + 0xc);
            uVar46 = *(undefined8 *)(piVar21 + 0x12);
            uVar45 = *(undefined8 *)(piVar21 + 0x10);
            fVar30 = *pfVar5 - fVar30;
            fVar31 = *pfVar7 - fVar31;
            fVar32 = *pfVar9 - fVar32;
            fVar33 = *pfVar11 - fVar33;
            uVar50 = *(undefined8 *)(piVar21 + 10);
            uVar49 = *(undefined8 *)(piVar21 + 8);
            auStack_40[uVar3 * 2 + 1] =
                 CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(piVar21 + 0x16) >> 0x20) * fVar44,
                          fVar28 + (float)*(undefined8 *)(piVar21 + 0x16) * fVar43);
            auStack_40[uVar3 * 2] =
                 CONCAT44(fVar27 + (float)((ulong)uVar34 >> 0x20) * fVar42,
                          fVar26 + (float)uVar34 * fVar41);
            fStack_30 = fVar26 + fVar41 * (float)uVar45 + (float)uVar47 * fVar30;
            fStack_2c = fVar27 + fVar42 * (float)((ulong)uVar45 >> 0x20) +
                                 (float)((ulong)uVar47 >> 0x20) * fVar31;
            fStack_28 = fVar28 + fVar43 * (float)uVar46 + (float)uVar48 * fVar32;
            fStack_24 = fVar29 + fVar44 * (float)((ulong)uVar46 >> 0x20) +
                                 (float)((ulong)uVar48 >> 0x20) * fVar33;
            auStack_40[(long)(int)(uVar2 ^ 2) * 2 + 1] =
                 CONCAT44(fVar29 + (float)((ulong)uVar50 >> 0x20) * fVar33,
                          fVar28 + (float)uVar50 * fVar32);
            auStack_40[(long)(int)(uVar2 ^ 2) * 2] =
                 CONCAT44(fVar27 + (float)((ulong)uVar49 >> 0x20) * fVar31,
                          fVar26 + (float)uVar49 * fVar30);
            *puVar19 = (int)auStack_40[0];
            puVar19[1] = fStack_30;
            puVar19[2] = (int)uStack_20;
            puVar19[3] = (int)uVar39;
            puVar19[4] = (int)((ulong)auStack_40[0] >> 0x20);
            puVar19[5] = fStack_2c;
            puVar19[6] = (int)((ulong)uStack_20 >> 0x20);
            puVar19[7] = (int)((ulong)uVar39 >> 0x20);
            puVar19[8] = (int)auStack_40[1];
            puVar19[9] = fStack_28;
            puVar19[10] = (int)uStack_18;
            puVar19[0xb] = (int)uVar40;
            puVar19[0xc] = (int)((ulong)auStack_40[1] >> 0x20);
            puVar19[0xd] = fStack_24;
            puVar19[0xe] = (int)((ulong)uStack_18 >> 0x20);
            puVar19[0xf] = (int)((ulong)uVar40 >> 0x20);
            puVar19 = puVar19 + 0x10;
            uVar13 = uVar13 + 0xc;
          } while ((long)uVar13 <= (long)iVar4 * 3 + -0xc);
          goto LAB_109ad4a4c;
        }
LAB_109ad49d4:
        uVar13 = 0;
      }
      if ((int)uVar13 < iVar20) {
        pfVar14 = pfVar17 + uVar13 + 1;
        do {
          fVar26 = pfVar14[-1];
          fVar27 = *pfVar14;
          fVar28 = pfVar14[1];
          puVar19[uVar3] = fVar26 + fVar25 * (fVar28 + -0.5);
          puVar19[1] = fVar26 + fVar24 * (fVar28 + -0.5) + fVar23 * (fVar27 + -0.5);
          puVar19[(int)(uVar2 ^ 2)] = fVar26 + fVar22 * (fVar27 + -0.5);
          if (iVar1 == 4) {
            puVar19[3] = 0x3f800000;
          }
          pfVar14 = pfVar14 + 3;
          uVar13 = uVar13 + 3;
          puVar19 = puVar19 + iVar1;
        } while ((long)uVar13 < (long)iVar20);
      }
      iVar15 = iVar15 + 1;
      lVar18 = *(long *)(param_1 + 8);
      pfVar17 = (float *)((long)pfVar17 + *(long *)(lVar18 + 0x50));
      puVar16 = (undefined4 *)((long)puVar16 + *(long *)(*(long *)(param_1 + 0x10) + 0x50));
    } while (iVar15 < param_2[1]);
  }
  return;
}



/* Entry: 109ad4ae8; end: 109ad4aef;  */

void FUN_109ad4ae8(void)

{
  return;
}



/* Entry: 109ad4af0; end: 109ad4d33;  */

void FUN_109ad4af0(long param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint3 uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long lVar19;
  int iVar20;
  int *piVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  byte *pbVar25;
  long lVar26;
  byte *pbVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined1 uVar31;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  uint uVar32;
  uint uVar36;
  uint uVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  ushort uVar50;
  ushort uVar51;
  undefined8 uVar48;
  undefined8 uVar49;
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  undefined8 uVar66;
  undefined1 auVar67 [16];
  ushort uVar69;
  ushort uVar70;
  undefined8 uVar68;
  ushort uVar71;
  ushort uVar73;
  ushort uVar74;
  undefined8 uVar72;
  ushort uVar75;
  undefined8 uVar76;
  ushort uVar78;
  ushort uVar79;
  undefined8 uVar77;
  ushort uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  int iVar83;
  int iVar84;
  int iVar85;
  ushort uVar86;
  ushort uVar88;
  ushort uVar89;
  ushort uVar90;
  undefined1 auVar87 [16];
  ushort uVar91;
  ushort uVar93;
  ushort uVar94;
  ushort uVar95;
  undefined1 auVar92 [16];
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  
  iVar23 = *param_2;
  if (iVar23 < param_2[1]) {
    lVar26 = *(long *)(param_1 + 8);
    lVar24 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) +
             **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar23;
    pbVar25 = (byte *)(*(long *)(lVar26 + 0x10) + **(long **)(lVar26 + 0x48) * (long)iVar23);
    do {
      piVar21 = *(int **)(param_1 + 0x18);
      iVar2 = *piVar21;
      iVar7 = piVar21[1];
      iVar3 = piVar21[2];
      iVar8 = piVar21[3];
      iVar4 = piVar21[4];
      iVar9 = piVar21[5];
      iVar5 = piVar21[6];
      iVar10 = piVar21[7];
      lVar19 = (long)*(int *)(lVar26 + 0xc) * 3;
      iVar6 = piVar21[8];
      iVar11 = piVar21[9];
      pbVar27 = pbVar25;
      if (*(int *)(lVar26 + 0xc) < 8) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        do {
          if (iVar2 == 3) {
            bVar38 = *pbVar27;
            bVar39 = pbVar27[3];
            bVar40 = pbVar27[6];
            bVar41 = pbVar27[9];
            bVar42 = pbVar27[0xc];
            bVar43 = pbVar27[0xf];
            bVar44 = pbVar27[0x12];
            bVar45 = pbVar27[0x15];
            uVar46 = CONCAT17(pbVar27[0x16],
                              CONCAT16(pbVar27[0x13],
                                       CONCAT15(pbVar27[0x10],
                                                CONCAT14(pbVar27[0xd],
                                                         CONCAT13(pbVar27[10],
                                                                  CONCAT12(pbVar27[7],
                                                                           CONCAT11(pbVar27[4],
                                                                                    pbVar27[1]))))))
                             );
            uVar48 = CONCAT17(pbVar27[0x17],
                              CONCAT16(pbVar27[0x14],
                                       CONCAT15(pbVar27[0x11],
                                                CONCAT14(pbVar27[0xe],
                                                         CONCAT13(pbVar27[0xb],
                                                                  CONCAT12(pbVar27[8],
                                                                           CONCAT11(pbVar27[5],
                                                                                    pbVar27[2]))))))
                             );
          }
          else {
            bVar38 = *pbVar27;
            bVar39 = pbVar27[4];
            bVar40 = pbVar27[8];
            bVar41 = pbVar27[0xc];
            bVar42 = pbVar27[0x10];
            bVar43 = pbVar27[0x14];
            bVar44 = pbVar27[0x18];
            bVar45 = pbVar27[0x1c];
            uVar46 = CONCAT17(pbVar27[0x1d],
                              CONCAT16(pbVar27[0x19],
                                       CONCAT15(pbVar27[0x15],
                                                CONCAT14(pbVar27[0x11],
                                                         CONCAT13(pbVar27[0xd],
                                                                  CONCAT12(pbVar27[9],
                                                                           CONCAT11(pbVar27[5],
                                                                                    pbVar27[1]))))))
                             );
            uVar48 = CONCAT17(pbVar27[0x1e],
                              CONCAT16(pbVar27[0x1a],
                                       CONCAT15(pbVar27[0x16],
                                                CONCAT14(pbVar27[0x12],
                                                         CONCAT13(pbVar27[0xe],
                                                                  CONCAT12(pbVar27[10],
                                                                           CONCAT11(pbVar27[6],
                                                                                    pbVar27[2]))))))
                             );
          }
          uVar53 = CONCAT11(0,(byte)uVar48);
          bVar28 = (byte)((ulong)uVar48 >> 8);
          uVar54 = (ushort)bVar28;
          bVar29 = (byte)((ulong)uVar48 >> 0x10);
          uVar55 = (ushort)bVar29;
          bVar30 = (byte)((ulong)uVar48 >> 0x18);
          uVar56 = (ushort)bVar30;
          uVar31 = (undefined1)((ulong)uVar48 >> 0x20);
          uVar33 = (undefined1)((ulong)uVar48 >> 0x28);
          uVar34 = (undefined1)((ulong)uVar48 >> 0x30);
          uVar35 = (undefined1)((ulong)uVar48 >> 0x38);
          auVar58._0_8_ =
               CONCAT17(0,CONCAT16((char)((ulong)uVar46 >> 0x18),
                                   (uint6)CONCAT14((char)((ulong)uVar46 >> 0x10),
                                                   (uint)CONCAT12((char)((ulong)uVar46 >> 8),
                                                                  (ushort)(byte)uVar46))));
          auVar58[8] = (char)((ulong)uVar46 >> 0x20);
          auVar58[9] = 0;
          auVar58[10] = (char)((ulong)uVar46 >> 0x28);
          auVar58[0xb] = 0;
          auVar58[0xc] = (char)((ulong)uVar46 >> 0x30);
          auVar58[0xd] = 0;
          auVar58[0xe] = (char)((ulong)uVar46 >> 0x38);
          auVar58[0xf] = 0;
          uVar12 = CONCAT12(bVar40,CONCAT11(bVar39,bVar38));
          uVar48 = *(undefined8 *)(piVar21 + 10);
          uVar63 = (ushort)((ulong)uVar48 >> 0x10);
          uVar64 = (ushort)((ulong)uVar48 >> 0x20);
          uVar65 = (ushort)((ulong)uVar48 >> 0x30);
          uVar66 = *(undefined8 *)(piVar21 + 0xc);
          auVar67 = NEON_umull(auVar58._0_8_,uVar66,2);
          uVar68 = *(undefined8 *)(piVar21 + 0xe);
          uVar72 = *(undefined8 *)(piVar21 + 0x10);
          uVar76 = *(undefined8 *)(piVar21 + 0x12);
          uVar77 = *(undefined8 *)(piVar21 + 0x14);
          auVar81 = NEON_umull(auVar58._0_8_,uVar76,2);
          uVar46 = *(undefined8 *)(piVar21 + 0x16);
          uVar47 = *(undefined8 *)(piVar21 + 0x18);
          auVar82 = NEON_umull(auVar58._0_8_,uVar47,2);
          uVar49 = *(undefined8 *)(piVar21 + 0x1a);
          auVar87[1] = 0;
          auVar87[0] = bVar38;
          auVar87[2] = bVar39;
          auVar87[3] = 0;
          auVar87[4] = bVar40;
          auVar87[5] = 0;
          auVar87[6] = bVar41;
          auVar87[7] = 0;
          auVar87[8] = bVar42;
          auVar87[9] = 0;
          auVar87[10] = bVar43;
          auVar87[0xb] = 0;
          auVar87[0xc] = bVar44;
          auVar87[0xd] = 0;
          auVar87[0xe] = bVar45;
          auVar87[0xf] = 0;
          auVar92[1] = 0;
          auVar92[0] = bVar38;
          auVar92[2] = bVar39;
          auVar92[3] = 0;
          auVar92[4] = bVar40;
          auVar92[5] = 0;
          auVar92[6] = bVar41;
          auVar92[7] = 0;
          auVar92[8] = bVar42;
          auVar92[9] = 0;
          auVar92[10] = bVar43;
          auVar92[0xb] = 0;
          auVar92[0xc] = bVar44;
          auVar92[0xd] = 0;
          auVar92[0xe] = bVar45;
          auVar92[0xf] = 0;
          auVar87 = NEON_ext(auVar87,auVar92,8,1);
          auVar59 = NEON_ext(auVar58,auVar58,8,1);
          auVar16[2] = bVar28;
          auVar16._0_2_ = uVar53;
          auVar16[3] = 0;
          auVar16[4] = bVar29;
          auVar16[5] = 0;
          auVar16[6] = bVar30;
          auVar16[7] = 0;
          auVar16[8] = uVar31;
          auVar16[9] = 0;
          auVar16[10] = uVar33;
          auVar16[0xb] = 0;
          auVar16[0xc] = uVar34;
          auVar16[0xd] = 0;
          auVar16[0xe] = uVar35;
          auVar16[0xf] = 0;
          auVar17[2] = bVar28;
          auVar17._0_2_ = uVar53;
          auVar17[3] = 0;
          auVar17[4] = bVar29;
          auVar17[5] = 0;
          auVar17[6] = bVar30;
          auVar17[7] = 0;
          auVar17[8] = uVar31;
          auVar17[9] = 0;
          auVar17[10] = uVar33;
          auVar17[0xb] = 0;
          auVar17[0xc] = uVar34;
          auVar17[0xd] = 0;
          auVar17[0xe] = uVar35;
          auVar17[0xf] = 0;
          auVar92 = NEON_ext(auVar16,auVar17,8,1);
          uVar69 = (ushort)((ulong)uVar68 >> 0x10);
          uVar70 = (ushort)((ulong)uVar68 >> 0x20);
          uVar71 = (ushort)((ulong)uVar68 >> 0x30);
          iVar20 = (int)*(undefined8 *)(piVar21 + 0x1c);
          iVar83 = (int)((ulong)*(undefined8 *)(piVar21 + 0x1c) >> 0x20);
          iVar84 = (int)*(undefined8 *)(piVar21 + 0x1e);
          iVar85 = (int)((ulong)*(undefined8 *)(piVar21 + 0x1e) >> 0x20);
          uVar73 = (ushort)((ulong)uVar72 >> 0x10);
          uVar74 = (ushort)((ulong)uVar72 >> 0x20);
          uVar75 = (ushort)((ulong)uVar72 >> 0x30);
          uVar78 = (ushort)((ulong)uVar77 >> 0x10);
          uVar79 = (ushort)((ulong)uVar77 >> 0x20);
          uVar80 = (ushort)((ulong)uVar77 >> 0x30);
          uVar13 = (ushort)((ulong)uVar46 >> 0x10);
          uVar14 = (ushort)((ulong)uVar46 >> 0x20);
          uVar15 = (ushort)((ulong)uVar46 >> 0x30);
          uVar50 = (ushort)((ulong)uVar49 >> 0x10);
          uVar51 = (ushort)((ulong)uVar49 >> 0x20);
          uVar52 = (ushort)((ulong)uVar49 >> 0x30);
          uVar86 = auVar87._0_2_;
          uVar88 = auVar87._2_2_;
          uVar89 = auVar87._4_2_;
          uVar90 = auVar87._6_2_;
          uVar57 = auVar59._0_2_;
          uVar60 = auVar59._2_2_;
          uVar61 = auVar59._4_2_;
          uVar62 = auVar59._6_2_;
          uVar91 = auVar92._0_2_;
          uVar93 = auVar92._2_2_;
          uVar94 = auVar92._4_2_;
          uVar95 = auVar92._6_2_;
          auVar18._10_2_ =
               (short)(iVar83 + (uint)uVar88 * (uint)uVar63 +
                       (uint)uVar60 * (uint)(ushort)((ulong)uVar66 >> 0x10) +
                       (uint)uVar93 * (uint)uVar69 >> 0xc);
          auVar18._8_2_ =
               (short)(iVar20 + (uint)uVar86 * (uint)(ushort)uVar48 +
                       (uint)uVar57 * (uint)(ushort)uVar66 + (uint)uVar91 * (uint)(ushort)uVar68 >>
                      0xc);
          auVar18._12_2_ =
               (short)(iVar84 + (uint)uVar89 * (uint)uVar64 +
                       (uint)uVar61 * (uint)(ushort)((ulong)uVar66 >> 0x20) +
                       (uint)uVar94 * (uint)uVar70 >> 0xc);
          auVar18._14_2_ =
               (short)(iVar85 + (uint)uVar90 * (uint)uVar65 +
                       (uint)uVar62 * (uint)(ushort)((ulong)uVar66 >> 0x30) +
                       (uint)uVar95 * (uint)uVar71 >> 0xc);
          auVar18._2_2_ =
               (short)(auVar67._4_4_ + (uint)bVar39 * (uint)uVar63 + (uint)uVar54 * (uint)uVar69 +
                       iVar83 >> 0xc);
          auVar18._0_2_ =
               (short)(auVar67._0_4_ + (uVar12 & 0xff) * (uint)(ushort)uVar48 +
                       (uint)uVar53 * (uint)(ushort)uVar68 + iVar20 >> 0xc);
          auVar18._4_2_ =
               (short)(auVar67._8_4_ + (uint)bVar40 * (uint)uVar64 + (uint)uVar55 * (uint)uVar70 +
                       iVar84 >> 0xc);
          auVar18._6_2_ =
               (short)(auVar67._12_4_ + (uint)bVar41 * (uint)uVar65 + (uint)uVar56 * (uint)uVar71 +
                       iVar85 >> 0xc);
          in_d27 = NEON_uqxtn(in_d27,auVar18,2);
          auVar67._10_2_ =
               (short)(iVar83 + (uint)uVar88 * (uint)uVar73 +
                       (uint)uVar60 * (uint)(ushort)((ulong)uVar76 >> 0x10) +
                       (uint)uVar93 * (uint)uVar78 >> 0xc);
          auVar67._8_2_ =
               (short)(iVar20 + (uint)uVar86 * (uint)(ushort)uVar72 +
                       (uint)uVar57 * (uint)(ushort)uVar76 + (uint)uVar91 * (uint)(ushort)uVar77 >>
                      0xc);
          auVar67._12_2_ =
               (short)(iVar84 + (uint)uVar89 * (uint)uVar74 +
                       (uint)uVar61 * (uint)(ushort)((ulong)uVar76 >> 0x20) +
                       (uint)uVar94 * (uint)uVar79 >> 0xc);
          auVar67._14_2_ =
               (short)(iVar85 + (uint)uVar90 * (uint)uVar75 +
                       (uint)uVar62 * (uint)(ushort)((ulong)uVar76 >> 0x30) +
                       (uint)uVar95 * (uint)uVar80 >> 0xc);
          auVar67._2_2_ =
               (short)(auVar81._4_4_ + (uint)bVar39 * (uint)uVar73 + (uint)uVar54 * (uint)uVar78 +
                       iVar83 >> 0xc);
          auVar67._0_2_ =
               (short)(auVar81._0_4_ + (uVar12 & 0xff) * (uint)(ushort)uVar72 +
                       (uint)uVar53 * (uint)(ushort)uVar77 + iVar20 >> 0xc);
          auVar67._4_2_ =
               (short)(auVar81._8_4_ + (uint)bVar40 * (uint)uVar74 + (uint)uVar55 * (uint)uVar79 +
                       iVar84 >> 0xc);
          auVar67._6_2_ =
               (short)(auVar81._12_4_ + (uint)bVar41 * (uint)uVar75 + (uint)uVar56 * (uint)uVar80 +
                       iVar85 >> 0xc);
          in_d28 = NEON_uqxtn(in_d28,auVar67,2);
          uVar32 = auVar82._4_4_ + (uint)bVar39 * (uint)uVar13 + (uint)uVar54 * (uint)uVar50 +
                   iVar83 >> 0xc;
          uVar36 = auVar82._8_4_ + (uint)bVar40 * (uint)uVar14 + (uint)uVar55 * (uint)uVar51 +
                   iVar84 >> 0xc;
          uVar37 = auVar82._12_4_ + (uint)bVar41 * (uint)uVar15 + (uint)uVar56 * (uint)uVar52 +
                   iVar85 >> 0xc;
          auVar59._10_2_ =
               (short)(uint3)(iVar83 + (uint)uVar88 * (uint)uVar13 +
                              (uint)uVar60 * (uint)(ushort)((ulong)uVar47 >> 0x10) +
                              (uint)uVar93 * (uint)uVar50 >> 0xc);
          auVar59._8_2_ =
               (short)(uint3)(iVar20 + (uint)uVar86 * (uint)(ushort)uVar46 +
                              (uint)uVar57 * (uint)(ushort)uVar47 +
                              (uint)uVar91 * (uint)(ushort)uVar49 >> 0xc);
          auVar59._12_2_ =
               (short)(iVar84 + (uint)uVar89 * (uint)uVar14 +
                       (uint)uVar61 * (uint)(ushort)((ulong)uVar47 >> 0x20) +
                       (uint)uVar94 * (uint)uVar51 >> 0xc);
          auVar59._14_2_ =
               (short)(iVar85 + (uint)uVar90 * (uint)uVar15 +
                       (uint)uVar62 * (uint)(ushort)((ulong)uVar47 >> 0x30) +
                       (uint)uVar95 * (uint)uVar52 >> 0xc);
          auVar59[2] = (char)uVar32;
          auVar59._0_2_ =
               (short)(auVar82._0_4_ + (uVar12 & 0xff) * (uint)(ushort)uVar46 +
                       (uint)uVar53 * (uint)(ushort)uVar49 + iVar20 >> 0xc);
          auVar59[3] = (char)(uVar32 >> 8);
          auVar59[4] = (char)uVar36;
          auVar59[5] = (char)(uVar36 >> 8);
          auVar59[6] = (char)uVar37;
          auVar59[7] = (char)(uVar37 >> 8);
          in_d29 = NEON_uqxtn(in_d29,auVar59,2);
          puVar1 = (undefined1 *)(lVar24 + uVar22);
          *puVar1 = (char)in_d27;
          puVar1[1] = (char)in_d28;
          puVar1[2] = (char)in_d29;
          puVar1[3] = (char)((ulong)in_d27 >> 8);
          puVar1[4] = (char)((ulong)in_d28 >> 8);
          puVar1[5] = (char)((ulong)in_d29 >> 8);
          puVar1[6] = (char)((ulong)in_d27 >> 0x10);
          puVar1[7] = (char)((ulong)in_d28 >> 0x10);
          puVar1[8] = (char)((ulong)in_d29 >> 0x10);
          puVar1[9] = (char)((ulong)in_d27 >> 0x18);
          puVar1[10] = (char)((ulong)in_d28 >> 0x18);
          puVar1[0xb] = (char)((ulong)in_d29 >> 0x18);
          puVar1[0xc] = (char)((ulong)in_d27 >> 0x20);
          puVar1[0xd] = (char)((ulong)in_d28 >> 0x20);
          puVar1[0xe] = (char)((ulong)in_d29 >> 0x20);
          puVar1[0xf] = (char)((ulong)in_d27 >> 0x28);
          puVar1[0x10] = (char)((ulong)in_d28 >> 0x28);
          puVar1[0x11] = (char)((ulong)in_d29 >> 0x28);
          puVar1[0x12] = (char)((ulong)in_d27 >> 0x30);
          puVar1[0x13] = (char)((ulong)in_d28 >> 0x30);
          puVar1[0x14] = (char)((ulong)in_d29 >> 0x30);
          puVar1[0x15] = (char)((ulong)in_d27 >> 0x38);
          puVar1[0x16] = (char)((ulong)in_d28 >> 0x38);
          puVar1[0x17] = (char)((ulong)in_d29 >> 0x38);
          uVar22 = uVar22 + 0x18;
          pbVar27 = pbVar27 + (long)iVar2 * 8;
        } while ((long)uVar22 <= lVar19 + -0x18);
        uVar22 = uVar22 & 0xffffffff;
      }
      iVar20 = (int)lVar19;
      if ((int)uVar22 < iVar20) {
        pbVar27 = pbVar27 + 2;
        do {
          bVar39 = pbVar27[-2];
          bVar40 = pbVar27[-1];
          bVar38 = *pbVar27;
          iVar83 = iVar3 * (uint)bVar40 + iVar7 * (uint)bVar39 + iVar8 * (uint)bVar38 + 0x800;
          iVar84 = iVar9 * (uint)bVar40 + iVar4 * (uint)bVar39 + iVar5 * (uint)bVar38 + 0x800;
          iVar85 = iVar6 * (uint)bVar40 + iVar10 * (uint)bVar39 + iVar11 * (uint)bVar38 + 0x800;
          uVar32 = iVar83 >> 0xc & (iVar83 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar32) {
            uVar32 = 0xff;
          }
          puVar1 = (undefined1 *)(lVar24 + uVar22);
          *puVar1 = (char)uVar32;
          uVar32 = iVar84 >> 0xc & (iVar84 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar32) {
            uVar32 = 0xff;
          }
          puVar1[1] = (char)uVar32;
          uVar32 = iVar85 >> 0xc & (iVar85 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar32) {
            uVar32 = 0xff;
          }
          puVar1[2] = (char)uVar32;
          uVar22 = uVar22 + 3;
          pbVar27 = pbVar27 + iVar2;
        } while ((long)uVar22 < (long)iVar20);
      }
      iVar23 = iVar23 + 1;
      lVar26 = *(long *)(param_1 + 8);
      pbVar25 = pbVar25 + *(long *)(lVar26 + 0x50);
      lVar24 = lVar24 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar23 < param_2[1]);
  }
  return;
}



/* Entry: 109ad4d34; end: 109ad4d3b;  */

void FUN_109ad4d34(void)

{
  return;
}



/* Entry: 109ad4d3c; end: 109ad500b;  */

void FUN_109ad4d3c(long param_1,int *param_2)

{
  uint uVar1;
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
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  long lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  undefined2 *puVar29;
  undefined2 *puVar30;
  long lVar31;
  uint *puVar32;
  ushort *puVar33;
  undefined2 *puVar34;
  undefined2 *puVar35;
  ushort uVar36;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  undefined1 auVar37 [16];
  undefined2 uVar41;
  undefined2 uVar42;
  undefined2 uVar43;
  undefined2 uVar44;
  undefined2 uVar45;
  undefined2 uVar46;
  undefined2 uVar47;
  undefined2 uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  undefined2 uVar53;
  undefined2 uVar54;
  undefined2 uVar55;
  undefined2 uVar56;
  undefined1 in_q3 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 uVar59;
  ushort uVar64;
  ushort uVar65;
  ushort uVar66;
  undefined1 auVar61 [16];
  undefined8 uVar60;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined1 auVar72 [16];
  ushort uVar75;
  ushort uVar76;
  ushort uVar77;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  ushort uVar78;
  ushort uVar79;
  ushort uVar80;
  ushort uVar81;
  ushort uVar82;
  ushort uVar83;
  undefined1 auVar84 [16];
  ushort uVar86;
  ushort uVar87;
  undefined8 uVar85;
  ushort uVar88;
  undefined8 uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  ushort uVar93;
  ushort uVar94;
  undefined8 uVar92;
  ushort uVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  ushort uVar100;
  ushort uVar101;
  ushort uVar102;
  ushort uVar103;
  
  iVar28 = *param_2;
  if (iVar28 < param_2[1]) {
    lVar31 = *(long *)(param_1 + 8);
    puVar29 = (undefined2 *)
              (*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
              **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar28);
    puVar30 = (undefined2 *)(*(long *)(lVar31 + 0x10) + **(long **)(lVar31 + 0x48) * (long)iVar28);
    do {
      puVar32 = *(uint **)(param_1 + 0x18);
      uVar2 = *puVar32;
      uVar7 = puVar32[1];
      uVar3 = puVar32[2];
      uVar8 = puVar32[3];
      uVar4 = puVar32[4];
      uVar9 = puVar32[5];
      uVar5 = puVar32[6];
      uVar10 = puVar32[7];
      lVar22 = (long)*(int *)(lVar31 + 0xc) * 3;
      uVar6 = puVar32[8];
      uVar11 = puVar32[9];
      puVar34 = puVar30;
      if (*(int *)(lVar31 + 0xc) < 8) {
        uVar27 = 0;
      }
      else {
        uVar27 = 0;
        puVar35 = puVar29;
        do {
          if (uVar2 == 3) {
            auVar62._0_2_ = *puVar34;
            uVar41 = puVar34[1];
            uVar49 = puVar34[2];
            auVar62._2_2_ = puVar34[3];
            uVar42 = puVar34[4];
            uVar50 = puVar34[5];
            auVar62._4_2_ = puVar34[6];
            uVar43 = puVar34[7];
            uVar51 = puVar34[8];
            auVar62._6_2_ = puVar34[9];
            uVar44 = puVar34[10];
            uVar52 = puVar34[0xb];
            auVar62._8_2_ = puVar34[0xc];
            uVar45 = puVar34[0xd];
            uVar53 = puVar34[0xe];
            auVar62._10_2_ = puVar34[0xf];
            uVar46 = puVar34[0x10];
            uVar54 = puVar34[0x11];
            auVar62._12_2_ = puVar34[0x12];
            uVar47 = puVar34[0x13];
            uVar55 = puVar34[0x14];
            auVar62._14_2_ = puVar34[0x15];
            uVar48 = puVar34[0x16];
            uVar56 = puVar34[0x17];
          }
          else {
            auVar62._0_2_ = *puVar34;
            uVar41 = puVar34[1];
            uVar49 = puVar34[2];
            in_q3._0_2_ = puVar34[3];
            auVar62._2_2_ = puVar34[4];
            uVar42 = puVar34[5];
            uVar50 = puVar34[6];
            in_q3._2_2_ = puVar34[7];
            auVar62._4_2_ = puVar34[8];
            uVar43 = puVar34[9];
            uVar51 = puVar34[10];
            in_q3._4_2_ = puVar34[0xb];
            auVar62._6_2_ = puVar34[0xc];
            uVar44 = puVar34[0xd];
            uVar52 = puVar34[0xe];
            in_q3._6_2_ = puVar34[0xf];
            auVar62._8_2_ = puVar34[0x10];
            uVar45 = puVar34[0x11];
            uVar53 = puVar34[0x12];
            in_q3._8_2_ = puVar34[0x13];
            auVar62._10_2_ = puVar34[0x14];
            uVar46 = puVar34[0x15];
            uVar54 = puVar34[0x16];
            in_q3._10_2_ = puVar34[0x17];
            auVar62._12_2_ = puVar34[0x18];
            uVar47 = puVar34[0x19];
            uVar55 = puVar34[0x1a];
            in_q3._12_2_ = puVar34[0x1b];
            auVar62._14_2_ = puVar34[0x1c];
            uVar48 = puVar34[0x1d];
            uVar56 = puVar34[0x1e];
            in_q3._14_2_ = puVar34[0x1f];
          }
          uVar60 = *(undefined8 *)(puVar32 + 10);
          uVar59 = *(undefined8 *)(puVar32 + 0xc);
          auVar68 = NEON_umull(CONCAT26(uVar44,CONCAT24(uVar43,CONCAT22(uVar42,uVar41))),uVar59,2);
          uVar36 = auVar62._0_2_;
          uVar38 = auVar62._2_2_;
          uVar39 = auVar62._4_2_;
          uVar40 = auVar62._6_2_;
          uVar64 = (ushort)((ulong)uVar60 >> 0x10);
          uVar65 = (ushort)((ulong)uVar60 >> 0x20);
          uVar66 = (ushort)((ulong)uVar60 >> 0x30);
          uVar69 = *(undefined8 *)(puVar32 + 0xe);
          uVar70 = *(undefined8 *)(puVar32 + 0x10);
          uVar75 = (ushort)((ulong)uVar69 >> 0x10);
          uVar76 = (ushort)((ulong)uVar69 >> 0x20);
          uVar77 = (ushort)((ulong)uVar69 >> 0x30);
          uVar71 = *(undefined8 *)(puVar32 + 0x12);
          uVar73 = *(undefined8 *)(puVar32 + 0x14);
          auVar74 = NEON_umull(CONCAT26(uVar44,CONCAT24(uVar43,CONCAT22(uVar42,uVar41))),uVar71,2);
          uVar78 = (ushort)((ulong)uVar70 >> 0x10);
          uVar79 = (ushort)((ulong)uVar70 >> 0x20);
          uVar80 = (ushort)((ulong)uVar70 >> 0x30);
          uVar81 = (ushort)((ulong)uVar73 >> 0x10);
          uVar82 = (ushort)((ulong)uVar73 >> 0x20);
          uVar83 = (ushort)((ulong)uVar73 >> 0x30);
          uVar85 = *(undefined8 *)(puVar32 + 0x16);
          uVar89 = *(undefined8 *)(puVar32 + 0x18);
          auVar90 = NEON_umull(CONCAT26(uVar44,CONCAT24(uVar43,CONCAT22(uVar42,uVar41))),uVar89,2);
          uVar86 = (ushort)((ulong)uVar85 >> 0x10);
          uVar87 = (ushort)((ulong)uVar85 >> 0x20);
          uVar88 = (ushort)((ulong)uVar85 >> 0x30);
          uVar92 = *(undefined8 *)(puVar32 + 0x1a);
          uVar93 = (ushort)((ulong)uVar92 >> 0x10);
          uVar94 = (ushort)((ulong)uVar92 >> 0x20);
          uVar95 = (ushort)((ulong)uVar92 >> 0x30);
          iVar98 = (int)*(undefined8 *)(puVar32 + 0x1e);
          iVar99 = (int)((ulong)*(undefined8 *)(puVar32 + 0x1e) >> 0x20);
          iVar96 = (int)*(undefined8 *)(puVar32 + 0x1c);
          iVar97 = (int)((ulong)*(undefined8 *)(puVar32 + 0x1c) >> 0x20);
          auVar72._0_4_ =
               auVar68._0_4_ + (uint)uVar36 * (uint)(ushort)uVar60 +
               (uint)uVar49 * (uint)(ushort)uVar69 + iVar96;
          auVar72._4_4_ =
               auVar68._4_4_ + (uint)uVar38 * (uint)uVar64 + (uint)uVar50 * (uint)uVar75 + iVar97;
          auVar72._8_4_ =
               auVar68._8_4_ + (uint)uVar39 * (uint)uVar65 + (uint)uVar51 * (uint)uVar76 + iVar98;
          auVar72._12_4_ =
               auVar68._12_4_ + (uint)uVar40 * (uint)uVar66 + (uint)uVar52 * (uint)uVar77 + iVar99;
          auVar84._0_4_ =
               auVar74._0_4_ + (uint)uVar36 * (uint)(ushort)uVar70 +
               (uint)uVar49 * (uint)(ushort)uVar73 + iVar96;
          auVar84._4_4_ =
               auVar74._4_4_ + (uint)uVar38 * (uint)uVar78 + (uint)uVar50 * (uint)uVar81 + iVar97;
          auVar84._8_4_ =
               auVar74._8_4_ + (uint)uVar39 * (uint)uVar79 + (uint)uVar51 * (uint)uVar82 + iVar98;
          auVar84._12_4_ =
               auVar74._12_4_ + (uint)uVar40 * (uint)uVar80 + (uint)uVar52 * (uint)uVar83 + iVar99;
          auVar91._0_4_ =
               auVar90._0_4_ + (uint)uVar36 * (uint)(ushort)uVar85 +
               (uint)uVar49 * (uint)(ushort)uVar92 + iVar96;
          auVar91._4_4_ =
               auVar90._4_4_ + (uint)uVar38 * (uint)uVar86 + (uint)uVar50 * (uint)uVar93 + iVar97;
          auVar91._8_4_ =
               auVar90._8_4_ + (uint)uVar39 * (uint)uVar87 + (uint)uVar51 * (uint)uVar94 + iVar98;
          auVar91._12_4_ =
               auVar90._12_4_ + (uint)uVar40 * (uint)uVar88 + (uint)uVar52 * (uint)uVar95 + iVar99;
          auVar90 = NEON_ext(auVar62,auVar62,8,1);
          auVar68._2_2_ = uVar42;
          auVar68._0_2_ = uVar41;
          auVar68._4_2_ = uVar43;
          auVar68._6_2_ = uVar44;
          auVar68._8_2_ = uVar45;
          auVar68._10_2_ = uVar46;
          auVar68._12_2_ = uVar47;
          auVar68._14_2_ = uVar48;
          auVar74._2_2_ = uVar42;
          auVar74._0_2_ = uVar41;
          auVar74._4_2_ = uVar43;
          auVar74._6_2_ = uVar44;
          auVar74._8_2_ = uVar45;
          auVar74._10_2_ = uVar46;
          auVar74._12_2_ = uVar47;
          auVar74._14_2_ = uVar48;
          auVar68 = NEON_ext(auVar68,auVar74,8,1);
          auVar16._2_2_ = uVar50;
          auVar16._0_2_ = uVar49;
          auVar16._4_2_ = uVar51;
          auVar16._6_2_ = uVar52;
          auVar16._8_2_ = uVar53;
          auVar16._10_2_ = uVar54;
          auVar16._12_2_ = uVar55;
          auVar16._14_2_ = uVar56;
          auVar17._2_2_ = uVar50;
          auVar17._0_2_ = uVar49;
          auVar17._4_2_ = uVar51;
          auVar17._6_2_ = uVar52;
          auVar17._8_2_ = uVar53;
          auVar17._10_2_ = uVar54;
          auVar17._12_2_ = uVar55;
          auVar17._14_2_ = uVar56;
          auVar62 = NEON_ext(auVar16,auVar17,8,1);
          uVar36 = auVar90._0_2_;
          uVar38 = auVar90._2_2_;
          uVar39 = auVar90._4_2_;
          uVar40 = auVar90._6_2_;
          uVar100 = auVar68._0_2_;
          uVar101 = auVar68._2_2_;
          uVar102 = auVar68._4_2_;
          uVar103 = auVar68._6_2_;
          uVar49 = auVar62._0_2_;
          uVar50 = auVar62._2_2_;
          uVar51 = auVar62._4_2_;
          uVar52 = auVar62._6_2_;
          iVar26 = iVar97 + (uint)uVar38 * (uint)uVar64 +
                   (uint)uVar101 * (uint)(ushort)((ulong)uVar59 >> 0x10) +
                   (uint)uVar50 * (uint)uVar75;
          iVar13 = iVar98 + (uint)uVar39 * (uint)uVar65 +
                   (uint)uVar102 * (uint)(ushort)((ulong)uVar59 >> 0x20) +
                   (uint)uVar51 * (uint)uVar76;
          iVar14 = iVar99 + (uint)uVar40 * (uint)uVar66 +
                   (uint)uVar103 * (uint)(ushort)((ulong)uVar59 >> 0x30) +
                   (uint)uVar52 * (uint)uVar77;
          iVar15 = iVar97 + (uint)uVar38 * (uint)uVar78 +
                   (uint)uVar101 * (uint)(ushort)((ulong)uVar71 >> 0x10) +
                   (uint)uVar50 * (uint)uVar81;
          iVar19 = iVar98 + (uint)uVar39 * (uint)uVar79 +
                   (uint)uVar102 * (uint)(ushort)((ulong)uVar71 >> 0x20) +
                   (uint)uVar51 * (uint)uVar82;
          iVar20 = iVar99 + (uint)uVar40 * (uint)uVar80 +
                   (uint)uVar103 * (uint)(ushort)((ulong)uVar71 >> 0x30) +
                   (uint)uVar52 * (uint)uVar83;
          auVar57._8_8_ = in_q3._8_8_;
          auVar57._0_8_ = NEON_uqshrn(in_q3._0_8_,auVar72,0xc,4);
          auVar90._4_2_ = (short)iVar26;
          auVar90._0_4_ =
               iVar96 + (uint)uVar36 * (uint)(ushort)uVar60 + (uint)uVar100 * (uint)(ushort)uVar59 +
               (uint)uVar49 * (uint)(ushort)uVar69;
          auVar90._6_2_ = (short)((uint)iVar26 >> 0x10);
          auVar90._8_2_ = (short)iVar13;
          auVar90._10_2_ = (short)((uint)iVar13 >> 0x10);
          auVar90._12_2_ = (short)iVar14;
          auVar90._14_2_ = (short)((uint)iVar14 >> 0x10);
          in_q3 = NEON_uqshrn2(auVar57,auVar90,0xc,4);
          auVar61._0_8_ = NEON_uqshrn(uVar60,auVar84,0xc,4);
          auVar61._8_8_ = 0;
          auVar18._4_2_ = (short)iVar15;
          auVar18._0_4_ =
               iVar96 + (uint)uVar36 * (uint)(ushort)uVar70 + (uint)uVar100 * (uint)(ushort)uVar71 +
               (uint)uVar49 * (uint)(ushort)uVar73;
          auVar18._6_2_ = (short)((uint)iVar15 >> 0x10);
          auVar18._8_2_ = (short)iVar19;
          auVar18._10_2_ = (short)((uint)iVar19 >> 0x10);
          auVar18._12_2_ = (short)iVar20;
          auVar18._14_2_ = (short)((uint)iVar20 >> 0x10);
          auVar62 = NEON_uqshrn2(auVar61,auVar18,0xc,4);
          auVar67._0_8_ = NEON_uqshrn(uVar59,auVar91,0xc,4);
          auVar67._8_8_ = 0;
          auVar21._4_4_ =
               iVar97 + (uint)uVar38 * (uint)uVar86 +
               (uint)uVar101 * (uint)(ushort)((ulong)uVar89 >> 0x10) + (uint)uVar50 * (uint)uVar93;
          auVar21._0_4_ =
               iVar96 + (uint)uVar36 * (uint)(ushort)uVar85 + (uint)uVar100 * (uint)(ushort)uVar89 +
               (uint)uVar49 * (uint)(ushort)uVar92;
          auVar21._8_4_ =
               iVar98 + (uint)uVar39 * (uint)uVar87 +
               (uint)uVar102 * (uint)(ushort)((ulong)uVar89 >> 0x20) + (uint)uVar51 * (uint)uVar94;
          auVar21._12_4_ =
               iVar99 + (uint)uVar40 * (uint)uVar88 +
               (uint)uVar103 * (uint)(ushort)((ulong)uVar89 >> 0x30) + (uint)uVar52 * (uint)uVar95;
          auVar68 = NEON_uqshrn2(auVar67,auVar21,0xc,4);
          *puVar35 = in_q3._0_2_;
          puVar35[1] = auVar62._0_2_;
          puVar35[2] = auVar68._0_2_;
          puVar35[3] = in_q3._2_2_;
          puVar35[4] = auVar62._2_2_;
          puVar35[5] = auVar68._2_2_;
          puVar35[6] = in_q3._4_2_;
          puVar35[7] = auVar62._4_2_;
          puVar35[8] = auVar68._4_2_;
          puVar35[9] = in_q3._6_2_;
          puVar35[10] = auVar62._6_2_;
          puVar35[0xb] = auVar68._6_2_;
          puVar35[0xc] = in_q3._8_2_;
          puVar35[0xd] = auVar62._8_2_;
          puVar35[0xe] = auVar68._8_2_;
          puVar35[0xf] = in_q3._10_2_;
          puVar35[0x10] = auVar62._10_2_;
          puVar35[0x11] = auVar68._10_2_;
          puVar35[0x12] = in_q3._12_2_;
          puVar35[0x13] = auVar62._12_2_;
          puVar35[0x14] = auVar68._12_2_;
          puVar35[0x15] = in_q3._14_2_;
          puVar35[0x16] = auVar62._14_2_;
          puVar35[0x17] = auVar68._14_2_;
          puVar35 = puVar35 + 0x18;
          uVar27 = uVar27 + 0x18;
          puVar34 = (undefined2 *)
                    ((long)puVar34 +
                    (-(ulong)((uVar2 & 0x1fffffff) >> 0x1c) & 0xfffffffe00000000 |
                    (ulong)(uVar2 << 3) << 1));
        } while ((long)uVar27 <= lVar22 + -0x18);
      }
      iVar26 = (int)lVar22;
      if ((int)uVar27 <= iVar26 + -0xc) {
        puVar35 = puVar29 + (uVar27 & 0xffffffff);
        do {
          if (uVar2 == 3) {
            uVar41 = puVar34[1];
            uVar49 = puVar34[2];
            uVar42 = puVar34[4];
            uVar50 = puVar34[5];
            uVar43 = puVar34[7];
            uVar51 = puVar34[8];
            uVar60 = CONCAT26(puVar34[9],CONCAT24(puVar34[6],CONCAT22(puVar34[3],*puVar34)));
            uVar44 = puVar34[10];
            uVar52 = puVar34[0xb];
            auVar58 = in_q3;
          }
          else {
            uVar41 = puVar34[1];
            uVar49 = puVar34[2];
            auVar58._0_2_ = puVar34[3];
            uVar42 = puVar34[5];
            uVar50 = puVar34[6];
            auVar58._2_2_ = puVar34[7];
            uVar43 = puVar34[9];
            uVar51 = puVar34[10];
            auVar58._4_2_ = puVar34[0xb];
            uVar60 = CONCAT26(puVar34[0xc],CONCAT24(puVar34[8],CONCAT22(puVar34[4],*puVar34)));
            uVar44 = puVar34[0xd];
            uVar52 = puVar34[0xe];
            auVar58._8_8_ = in_q3._8_8_;
            auVar58._6_2_ = puVar34[0xf];
          }
          uVar59 = *(undefined8 *)(puVar32 + 10);
          auVar68 = NEON_umull(CONCAT26(uVar44,CONCAT24(uVar43,CONCAT22(uVar42,uVar41))),
                               *(undefined8 *)(puVar32 + 0xc),2);
          uVar36 = (ushort)uVar60;
          uVar38 = (ushort)((ulong)uVar60 >> 0x10);
          uVar39 = (ushort)((ulong)uVar60 >> 0x20);
          uVar40 = (ushort)((ulong)uVar60 >> 0x30);
          uVar60 = *(undefined8 *)(puVar32 + 0xe);
          uVar69 = *(undefined8 *)(puVar32 + 0x10);
          uVar73 = *(undefined8 *)(puVar32 + 0x14);
          auVar62 = NEON_umull(CONCAT26(uVar44,CONCAT24(uVar43,CONCAT22(uVar42,uVar41))),
                               *(undefined8 *)(puVar32 + 0x12),2);
          uVar70 = *(undefined8 *)(puVar32 + 0x16);
          auVar74 = NEON_umull(CONCAT26(uVar44,CONCAT24(uVar43,CONCAT22(uVar42,uVar41))),
                               *(undefined8 *)(puVar32 + 0x18),2);
          uVar71 = *(undefined8 *)(puVar32 + 0x1a);
          uVar1 = puVar32[0x1c];
          uVar23 = puVar32[0x1d];
          uVar24 = puVar32[0x1e];
          uVar25 = puVar32[0x1f];
          iVar13 = auVar68._0_4_ + (uint)uVar36 * (uint)(ushort)uVar59 +
                   (uint)uVar49 * (uint)(ushort)uVar60 + uVar1;
          iVar14 = auVar68._4_4_ + (uint)uVar38 * (uint)(ushort)((ulong)uVar59 >> 0x10) +
                   (uint)uVar50 * (uint)(ushort)((ulong)uVar60 >> 0x10) + uVar23;
          uVar41 = (undefined2)iVar14;
          uVar42 = (undefined2)((uint)iVar14 >> 0x10);
          iVar14 = auVar68._8_4_ + (uint)uVar39 * (uint)(ushort)((ulong)uVar59 >> 0x20) +
                   (uint)uVar51 * (uint)(ushort)((ulong)uVar60 >> 0x20) + uVar24;
          iVar15 = auVar68._12_4_ + (uint)uVar40 * (uint)(ushort)((ulong)uVar59 >> 0x30) +
                   (uint)uVar52 * (uint)(ushort)((ulong)uVar60 >> 0x30) + uVar25;
          auVar12._4_2_ = uVar41;
          auVar12._0_4_ = iVar13;
          auVar12._6_2_ = uVar42;
          auVar12._8_2_ = (short)iVar14;
          auVar12._10_2_ = (short)((uint)iVar14 >> 0x10);
          auVar12._12_2_ = (short)iVar15;
          auVar12._14_2_ = (short)((uint)iVar15 >> 0x10);
          uVar60 = NEON_uqshrn(CONCAT26(uVar42,CONCAT24(uVar41,iVar13)),auVar12,0xc,4);
          auVar63._0_4_ =
               auVar62._0_4_ + (uint)uVar36 * (uint)(ushort)uVar69 +
               (uint)uVar49 * (uint)(ushort)uVar73 + uVar1;
          auVar63._4_4_ =
               auVar62._4_4_ + (uint)uVar38 * (uint)(ushort)((ulong)uVar69 >> 0x10) +
               (uint)uVar50 * (uint)(ushort)((ulong)uVar73 >> 0x10) + uVar23;
          auVar63._8_4_ =
               auVar62._8_4_ + (uint)uVar39 * (uint)(ushort)((ulong)uVar69 >> 0x20) +
               (uint)uVar51 * (uint)(ushort)((ulong)uVar73 >> 0x20) + uVar24;
          auVar63._12_4_ =
               auVar62._12_4_ + (uint)uVar40 * (uint)(ushort)((ulong)uVar69 >> 0x30) +
               (uint)uVar52 * (uint)(ushort)((ulong)uVar73 >> 0x30) + uVar25;
          uVar59 = NEON_uqshrn(CONCAT26(uVar52,CONCAT24(uVar51,CONCAT22(uVar50,uVar49))),auVar63,0xc
                               ,4);
          auVar37._0_4_ =
               auVar74._0_4_ + (uint)uVar36 * (uint)(ushort)uVar70 +
               (uint)uVar49 * (uint)(ushort)uVar71 + uVar1;
          auVar37._4_4_ =
               auVar74._4_4_ + (uint)uVar38 * (uint)(ushort)((ulong)uVar70 >> 0x10) +
               (uint)uVar50 * (uint)(ushort)((ulong)uVar71 >> 0x10) + uVar23;
          auVar37._8_4_ =
               auVar74._8_4_ + (uint)uVar39 * (uint)(ushort)((ulong)uVar70 >> 0x20) +
               (uint)uVar51 * (uint)(ushort)((ulong)uVar71 >> 0x20) + uVar24;
          auVar37._12_4_ =
               auVar74._12_4_ + (uint)uVar40 * (uint)(ushort)((ulong)uVar70 >> 0x30) +
               (uint)uVar52 * (uint)(ushort)((ulong)uVar71 >> 0x30) + uVar25;
          in_q3._8_8_ = auVar58._8_8_;
          in_q3._0_8_ = NEON_uqshrn(auVar58._0_8_,auVar37,0xc,4);
          *puVar35 = (short)uVar60;
          puVar35[1] = (short)uVar59;
          puVar35[2] = (short)in_q3._0_8_;
          puVar35[3] = (short)((ulong)uVar60 >> 0x10);
          puVar35[4] = (short)((ulong)uVar59 >> 0x10);
          puVar35[5] = (short)((ulong)in_q3._0_8_ >> 0x10);
          puVar35[6] = (short)((ulong)uVar60 >> 0x20);
          puVar35[7] = (short)((ulong)uVar59 >> 0x20);
          puVar35[8] = (short)((ulong)in_q3._0_8_ >> 0x20);
          puVar35[9] = (short)((ulong)uVar60 >> 0x30);
          puVar35[10] = (short)((ulong)uVar59 >> 0x30);
          puVar35[0xb] = (short)((ulong)in_q3._0_8_ >> 0x30);
          puVar35 = puVar35 + 0xc;
          uVar1 = (int)uVar27 + 0xc;
          uVar27 = (ulong)uVar1;
          puVar34 = (undefined2 *)
                    ((long)puVar34 +
                    (-(ulong)((uVar2 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 |
                    (ulong)(uVar2 << 2) << 1));
        } while ((int)uVar1 <= iVar26 + -0xc);
      }
      if ((int)uVar27 < iVar26) {
        puVar33 = puVar34 + 2;
        puVar34 = puVar29 + (uVar27 & 0xffffffff) + 1;
        do {
          uVar50 = puVar33[-2];
          uVar51 = puVar33[-1];
          uVar49 = *puVar33;
          iVar13 = uVar3 * uVar51 + uVar7 * uVar50 + uVar8 * uVar49 + 0x800;
          iVar14 = uVar9 * uVar51 + uVar4 * uVar50 + uVar5 * uVar49 + 0x800;
          iVar15 = uVar6 * uVar51 + uVar10 * uVar50 + uVar11 * uVar49 + 0x800;
          uVar1 = iVar13 >> 0xc & (iVar13 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar1) {
            uVar1 = 0xffff;
          }
          puVar34[-1] = (short)uVar1;
          uVar1 = iVar14 >> 0xc & (iVar14 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar1) {
            uVar1 = 0xffff;
          }
          *puVar34 = (short)uVar1;
          uVar1 = iVar15 >> 0xc & (iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar1) {
            uVar1 = 0xffff;
          }
          puVar34[1] = (short)uVar1;
          uVar1 = (int)uVar27 + 3;
          uVar27 = (ulong)uVar1;
          puVar33 = puVar33 + (int)uVar2;
          puVar34 = puVar34 + 3;
        } while ((int)uVar1 < iVar26);
      }
      iVar28 = iVar28 + 1;
      lVar31 = *(long *)(param_1 + 8);
      puVar30 = (undefined2 *)((long)puVar30 + *(long *)(lVar31 + 0x50));
      puVar29 = (undefined2 *)((long)puVar29 + *(long *)(*(long *)(param_1 + 0x10) + 0x50));
    } while (iVar28 < param_2[1]);
  }
  return;
}



/* Entry: 109ad500c; end: 109ad51e7;  */

void FUN_109ad500c(void)

{
  return;
}



/* Entry: 109ad51e8; end: 109ad543b;  */

void FUN_109ad51e8(long param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long lVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  int iVar23;
  int *piVar24;
  ulong uVar25;
  int iVar26;
  undefined1 *puVar27;
  long lVar28;
  long lVar29;
  undefined1 *puVar30;
  short sVar31;
  undefined8 uVar32;
  undefined1 uVar36;
  undefined1 uVar37;
  ushort uVar38;
  undefined1 uVar40;
  undefined1 uVar41;
  ushort uVar42;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar48;
  undefined1 auVar33 [16];
  ushort uVar46;
  undefined1 auVar34 [16];
  short sVar39;
  short sVar43;
  short sVar47;
  undefined1 auVar35 [16];
  undefined1 uVar50;
  undefined1 uVar51;
  short sVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  short sVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined8 uVar49;
  short sVar58;
  undefined1 uVar59;
  undefined1 uVar61;
  undefined1 uVar62;
  short sVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  short sVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined8 uVar60;
  short sVar69;
  undefined1 uVar70;
  short sVar71;
  ushort uVar74;
  short sVar75;
  ushort uVar76;
  short sVar77;
  ushort uVar78;
  short sVar79;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  short sVar80;
  ushort uVar85;
  ushort uVar87;
  ushort uVar89;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  short sVar86;
  short sVar88;
  short sVar90;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar95;
  short sVar96;
  undefined8 uVar94;
  short sVar97;
  short sVar99;
  short sVar100;
  undefined8 uVar98;
  short sVar101;
  short sVar103;
  short sVar104;
  undefined8 uVar102;
  short sVar105;
  short sVar107;
  short sVar108;
  undefined8 uVar106;
  short sVar109;
  short sVar111;
  short sVar112;
  undefined8 uVar110;
  short sVar113;
  short sVar115;
  short sVar116;
  undefined8 uVar114;
  short sVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  
  iVar26 = *param_2;
  if (iVar26 < param_2[1]) {
    lVar29 = *(long *)(param_1 + 8);
    puVar27 = (undefined1 *)
              (*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
              **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar26);
    lVar28 = *(long *)(lVar29 + 0x10) + **(long **)(lVar29 + 0x48) * (long)iVar26;
    do {
      piVar24 = *(int **)(param_1 + 0x18);
      iVar15 = *piVar24;
      iVar3 = piVar24[2];
      iVar7 = piVar24[3];
      iVar4 = piVar24[4];
      iVar8 = piVar24[5];
      iVar5 = piVar24[6];
      iVar9 = piVar24[7];
      iVar6 = piVar24[8];
      iVar10 = piVar24[9];
      lVar19 = (long)*(int *)(lVar29 + 0xc) * 3;
      iVar11 = piVar24[10];
      puVar30 = puVar27;
      if (*(int *)(lVar29 + 0xc) < 8) {
        uVar25 = 0;
      }
      else {
        uVar25 = 0;
        do {
          pbVar1 = (byte *)(lVar28 + uVar25);
          uVar22 = CONCAT11(0,*pbVar1);
          auVar72[2] = pbVar1[3];
          auVar72._0_2_ = uVar22;
          auVar72[3] = 0;
          auVar72[4] = pbVar1[6];
          auVar72[5] = 0;
          auVar72[6] = pbVar1[9];
          auVar72[7] = 0;
          auVar72[8] = pbVar1[0xc];
          auVar72[9] = 0;
          auVar72[10] = pbVar1[0xf];
          auVar72[0xb] = 0;
          auVar72[0xc] = pbVar1[0x12];
          auVar72[0xd] = 0;
          auVar72[0xe] = pbVar1[0x15];
          auVar72[0xf] = 0;
          uVar20 = CONCAT11(0,pbVar1[1]);
          auVar81[2] = pbVar1[4];
          auVar81._0_2_ = uVar20;
          auVar81[3] = 0;
          auVar81[4] = pbVar1[7];
          auVar81[5] = 0;
          auVar81[6] = pbVar1[10];
          auVar81[7] = 0;
          auVar81[8] = pbVar1[0xd];
          auVar81[9] = 0;
          auVar81[10] = pbVar1[0x10];
          auVar81[0xb] = 0;
          auVar81[0xc] = pbVar1[0x13];
          auVar81[0xd] = 0;
          auVar81[0xe] = pbVar1[0x16];
          auVar81[0xf] = 0;
          uVar21 = CONCAT11(0,pbVar1[2]);
          auVar33[2] = pbVar1[5];
          auVar33._0_2_ = uVar21;
          auVar33[3] = 0;
          auVar33[4] = pbVar1[8];
          auVar33[5] = 0;
          auVar33[6] = pbVar1[0xb];
          auVar33[7] = 0;
          auVar33[8] = pbVar1[0xe];
          auVar33[9] = 0;
          auVar33[10] = pbVar1[0x11];
          auVar33[0xb] = 0;
          auVar33[0xc] = pbVar1[0x14];
          auVar33[0xd] = 0;
          auVar33[0xe] = pbVar1[0x17];
          auVar33[0xf] = 0;
          uVar49 = *(undefined8 *)(piVar24 + 0xc);
          uVar60 = *(undefined8 *)(piVar24 + 0xe);
          uVar85 = (ushort)pbVar1[4];
          uVar87 = (ushort)pbVar1[7];
          uVar89 = (ushort)pbVar1[10];
          sVar63 = (short)((ulong)uVar60 >> 0x10);
          sVar66 = (short)((ulong)uVar60 >> 0x20);
          sVar69 = (short)((ulong)uVar60 >> 0x30);
          uVar74 = (ushort)pbVar1[3];
          uVar76 = (ushort)pbVar1[6];
          uVar78 = (ushort)pbVar1[9];
          sVar52 = (short)((ulong)uVar49 >> 0x10);
          sVar55 = (short)((ulong)uVar49 >> 0x20);
          sVar58 = (short)((ulong)uVar49 >> 0x30);
          uVar32 = *(undefined8 *)(piVar24 + 0x10);
          sVar91 = (short)((ulong)uVar32 >> 0x10);
          sVar92 = (short)((ulong)uVar32 >> 0x20);
          sVar93 = (short)((ulong)uVar32 >> 0x30);
          uVar94 = *(undefined8 *)(piVar24 + 0x12);
          uVar38 = (ushort)pbVar1[5];
          uVar42 = (ushort)pbVar1[8];
          uVar46 = (ushort)pbVar1[0xb];
          uVar98 = *(undefined8 *)(piVar24 + 0x14);
          uVar102 = *(undefined8 *)(piVar24 + 0x16);
          sVar99 = (short)((ulong)uVar98 >> 0x10);
          sVar100 = (short)((ulong)uVar98 >> 0x20);
          sVar101 = (short)((ulong)uVar98 >> 0x30);
          sVar95 = (short)((ulong)uVar94 >> 0x10);
          sVar96 = (short)((ulong)uVar94 >> 0x20);
          sVar97 = (short)((ulong)uVar94 >> 0x30);
          sVar103 = (short)((ulong)uVar102 >> 0x10);
          sVar104 = (short)((ulong)uVar102 >> 0x20);
          sVar105 = (short)((ulong)uVar102 >> 0x30);
          uVar106 = *(undefined8 *)(piVar24 + 0x18);
          uVar110 = *(undefined8 *)(piVar24 + 0x1a);
          sVar111 = (short)((ulong)uVar110 >> 0x10);
          sVar112 = (short)((ulong)uVar110 >> 0x20);
          sVar113 = (short)((ulong)uVar110 >> 0x30);
          sVar107 = (short)((ulong)uVar106 >> 0x10);
          sVar108 = (short)((ulong)uVar106 >> 0x20);
          sVar109 = (short)((ulong)uVar106 >> 0x30);
          uVar114 = *(undefined8 *)(piVar24 + 0x1c);
          sVar115 = (short)((ulong)uVar114 >> 0x10);
          sVar116 = (short)((ulong)uVar114 >> 0x20);
          sVar117 = (short)((ulong)uVar114 >> 0x30);
          iVar120 = (int)*(undefined8 *)(piVar24 + 0x22);
          iVar121 = (int)((ulong)*(undefined8 *)(piVar24 + 0x22) >> 0x20);
          iVar118 = (int)*(undefined8 *)(piVar24 + 0x20);
          iVar119 = (int)((ulong)*(undefined8 *)(piVar24 + 0x20) >> 0x20);
          auVar73 = NEON_ext(auVar72,auVar72,8,1);
          auVar82 = NEON_ext(auVar81,auVar81,8,1);
          auVar34 = NEON_ext(auVar33,auVar33,8,1);
          sVar71 = auVar73._0_2_;
          sVar75 = auVar73._2_2_;
          sVar77 = auVar73._4_2_;
          sVar79 = auVar73._6_2_;
          sVar80 = auVar82._0_2_;
          sVar86 = auVar82._2_2_;
          sVar88 = auVar82._4_2_;
          sVar90 = auVar82._6_2_;
          sVar31 = auVar34._0_2_;
          sVar39 = auVar34._2_2_;
          sVar43 = auVar34._4_2_;
          sVar47 = auVar34._6_2_;
          iVar23 = iVar119 + (int)sVar75 * (int)sVar95 + (int)sVar86 * (int)sVar99 +
                   (int)sVar39 * (int)sVar103;
          auVar35._8_8_ = auVar34._8_8_;
          auVar73._4_4_ =
               (int)(short)uVar85 * (int)sVar63 + (int)(short)uVar74 * (int)sVar52 +
               (int)(short)uVar38 * (int)sVar91 + iVar119;
          auVar73._0_4_ =
               (int)(short)uVar20 * (int)(short)uVar60 + (int)(short)uVar22 * (int)(short)uVar49 +
               (int)(short)uVar21 * (int)(short)uVar32 + iVar118;
          auVar73._8_4_ =
               (int)(short)uVar87 * (int)sVar66 + (int)(short)uVar76 * (int)sVar55 +
               (int)(short)uVar42 * (int)sVar92 + iVar120;
          auVar73._12_4_ =
               (int)(short)uVar89 * (int)sVar69 + (int)(short)uVar78 * (int)sVar58 +
               (int)(short)uVar46 * (int)sVar93 + iVar121;
          auVar35._0_8_ = NEON_sqshrn(auVar34._0_8_,auVar73,0xc,4);
          auVar18._4_4_ =
               iVar119 + (int)sVar75 * (int)sVar52 + (int)sVar86 * (int)sVar63 +
               (int)sVar39 * (int)sVar91;
          auVar18._0_4_ =
               iVar118 + (int)sVar71 * (int)(short)uVar49 + (int)sVar80 * (int)(short)uVar60 +
               (int)sVar31 * (int)(short)uVar32;
          auVar18._8_4_ =
               iVar120 + (int)sVar77 * (int)sVar55 + (int)sVar88 * (int)sVar66 +
               (int)sVar43 * (int)sVar92;
          auVar18._12_4_ =
               iVar121 + (int)sVar79 * (int)sVar58 + (int)sVar90 * (int)sVar69 +
               (int)sVar47 * (int)sVar93;
          auVar73 = NEON_sqshrn2(auVar35,auVar18,0xc,4);
          uVar32 = NEON_sqxtun(auVar73._0_8_,auVar73,2);
          auVar83._8_8_ = auVar82._8_8_;
          auVar16._4_4_ =
               (int)(short)uVar85 * (int)sVar99 + (int)(short)uVar74 * (int)sVar95 +
               (int)(short)uVar38 * (int)sVar103 + iVar119;
          auVar16._0_4_ =
               (int)(short)uVar20 * (int)(short)uVar98 + (int)(short)uVar22 * (int)(short)uVar94 +
               (int)(short)uVar21 * (int)(short)uVar102 + iVar118;
          auVar16._8_4_ =
               (int)(short)uVar87 * (int)sVar100 + (int)(short)uVar76 * (int)sVar96 +
               (int)(short)uVar42 * (int)sVar104 + iVar120;
          auVar16._12_4_ =
               (int)(short)uVar89 * (int)sVar101 + (int)(short)uVar78 * (int)sVar97 +
               (int)(short)uVar46 * (int)sVar105 + iVar121;
          auVar83._0_8_ = NEON_sqshrn(auVar82._0_8_,auVar16,0xc,4);
          auVar34._4_2_ = (short)iVar23;
          auVar34._0_4_ =
               iVar118 + (int)sVar71 * (int)(short)uVar94 + (int)sVar80 * (int)(short)uVar98 +
               (int)sVar31 * (int)(short)uVar102;
          auVar34._6_2_ = (short)((uint)iVar23 >> 0x10);
          auVar34._8_4_ =
               iVar120 + (int)sVar77 * (int)sVar96 + (int)sVar88 * (int)sVar100 +
               (int)sVar43 * (int)sVar104;
          auVar34._12_4_ =
               iVar121 + (int)sVar79 * (int)sVar97 + (int)sVar90 * (int)sVar101 +
               (int)sVar47 * (int)sVar105;
          auVar73 = NEON_sqshrn2(auVar83,auVar34,0xc,4);
          uVar49 = NEON_sqxtun(uVar49,auVar73,2);
          auVar84._8_8_ = auVar73._8_8_;
          auVar82._4_4_ =
               (int)(short)uVar85 * (int)sVar111 + (int)(short)uVar74 * (int)sVar107 +
               (int)(short)uVar38 * (int)sVar115 + iVar119;
          auVar82._0_4_ =
               (int)(short)uVar20 * (int)(short)uVar110 + (int)(short)uVar22 * (int)(short)uVar106 +
               (int)(short)uVar21 * (int)(short)uVar114 + iVar118;
          auVar82._8_4_ =
               (int)(short)uVar87 * (int)sVar112 + (int)(short)uVar76 * (int)sVar108 +
               (int)(short)uVar42 * (int)sVar116 + iVar120;
          auVar82._12_4_ =
               (int)(short)uVar89 * (int)sVar113 + (int)(short)uVar78 * (int)sVar109 +
               (int)(short)uVar46 * (int)sVar117 + iVar121;
          auVar84._0_8_ = NEON_sqshrn(auVar73._0_8_,auVar82,0xc,4);
          auVar17._4_4_ =
               iVar119 + (int)sVar75 * (int)sVar107 + (int)sVar86 * (int)sVar111 +
               (int)sVar39 * (int)sVar115;
          auVar17._0_4_ =
               iVar118 + (int)sVar71 * (int)(short)uVar106 + (int)sVar80 * (int)(short)uVar110 +
               (int)sVar31 * (int)(short)uVar114;
          auVar17._8_4_ =
               iVar120 + (int)sVar77 * (int)sVar108 + (int)sVar88 * (int)sVar112 +
               (int)sVar43 * (int)sVar116;
          auVar17._12_4_ =
               iVar121 + (int)sVar79 * (int)sVar109 + (int)sVar90 * (int)sVar113 +
               (int)sVar47 * (int)sVar117;
          auVar73 = NEON_sqshrn2(auVar84,auVar17,0xc,4);
          uVar60 = NEON_sqxtun(uVar60,auVar73,2);
          uVar36 = (undefined1)((ulong)uVar32 >> 8);
          uVar37 = (undefined1)((ulong)uVar32 >> 0x10);
          uVar40 = (undefined1)((ulong)uVar32 >> 0x18);
          uVar41 = (undefined1)((ulong)uVar32 >> 0x20);
          uVar44 = (undefined1)((ulong)uVar32 >> 0x28);
          uVar45 = (undefined1)((ulong)uVar32 >> 0x30);
          uVar48 = (undefined1)((ulong)uVar32 >> 0x38);
          uVar50 = (undefined1)((ulong)uVar49 >> 8);
          uVar51 = (undefined1)((ulong)uVar49 >> 0x10);
          uVar53 = (undefined1)((ulong)uVar49 >> 0x18);
          uVar54 = (undefined1)((ulong)uVar49 >> 0x20);
          uVar56 = (undefined1)((ulong)uVar49 >> 0x28);
          uVar57 = (undefined1)((ulong)uVar49 >> 0x30);
          uVar59 = (undefined1)((ulong)uVar49 >> 0x38);
          uVar61 = (undefined1)((ulong)uVar60 >> 8);
          uVar62 = (undefined1)((ulong)uVar60 >> 0x10);
          uVar64 = (undefined1)((ulong)uVar60 >> 0x18);
          uVar65 = (undefined1)((ulong)uVar60 >> 0x20);
          uVar67 = (undefined1)((ulong)uVar60 >> 0x28);
          uVar68 = (undefined1)((ulong)uVar60 >> 0x30);
          uVar70 = (undefined1)((ulong)uVar60 >> 0x38);
          if (iVar15 == 3) {
            *puVar30 = (char)uVar32;
            puVar30[1] = (char)uVar49;
            puVar30[2] = (char)uVar60;
            puVar30[3] = uVar36;
            puVar30[4] = uVar50;
            puVar30[5] = uVar61;
            puVar30[6] = uVar37;
            puVar30[7] = uVar51;
            puVar30[8] = uVar62;
            puVar30[9] = uVar40;
            puVar30[10] = uVar53;
            puVar30[0xb] = uVar64;
            puVar30[0xc] = uVar41;
            puVar30[0xd] = uVar54;
            puVar30[0xe] = uVar65;
            puVar30[0xf] = uVar44;
            puVar30[0x10] = uVar56;
            puVar30[0x11] = uVar67;
            puVar30[0x12] = uVar45;
            puVar30[0x13] = uVar57;
            puVar30[0x14] = uVar68;
            puVar30[0x15] = uVar48;
            puVar30[0x16] = uVar59;
            puVar30[0x17] = uVar70;
          }
          else {
            uVar94 = *(undefined8 *)(piVar24 + 0x1e);
            *puVar30 = (char)uVar32;
            puVar30[1] = (char)uVar49;
            puVar30[2] = (char)uVar60;
            puVar30[3] = (char)uVar94;
            puVar30[4] = uVar36;
            puVar30[5] = uVar50;
            puVar30[6] = uVar61;
            puVar30[7] = (char)((ulong)uVar94 >> 8);
            puVar30[8] = uVar37;
            puVar30[9] = uVar51;
            puVar30[10] = uVar62;
            puVar30[0xb] = (char)((ulong)uVar94 >> 0x10);
            puVar30[0xc] = uVar40;
            puVar30[0xd] = uVar53;
            puVar30[0xe] = uVar64;
            puVar30[0xf] = (char)((ulong)uVar94 >> 0x18);
            puVar30[0x10] = uVar41;
            puVar30[0x11] = uVar54;
            puVar30[0x12] = uVar65;
            puVar30[0x13] = (char)((ulong)uVar94 >> 0x20);
            puVar30[0x14] = uVar44;
            puVar30[0x15] = uVar56;
            puVar30[0x16] = uVar67;
            puVar30[0x17] = (char)((ulong)uVar94 >> 0x28);
            puVar30[0x18] = uVar45;
            puVar30[0x19] = uVar57;
            puVar30[0x1a] = uVar68;
            puVar30[0x1b] = (char)((ulong)uVar94 >> 0x30);
            puVar30[0x1c] = uVar48;
            puVar30[0x1d] = uVar59;
            puVar30[0x1e] = uVar70;
            puVar30[0x1f] = (char)((ulong)uVar94 >> 0x38);
          }
          uVar25 = uVar25 + 0x18;
          puVar30 = puVar30 + (long)iVar15 * 8;
        } while ((long)uVar25 <= lVar19 + -0x18);
        uVar25 = uVar25 & 0xffffffff;
      }
      iVar23 = (int)lVar19;
      if ((int)uVar25 < iVar23) {
        puVar30 = puVar30 + 3;
        do {
          pbVar1 = (byte *)(lVar28 + uVar25);
          bVar12 = *pbVar1;
          bVar13 = pbVar1[1];
          bVar14 = pbVar1[2];
          iVar118 = iVar7 * (uint)bVar13 + iVar3 * (uint)bVar12 + iVar4 * (uint)bVar14 + 0x800;
          iVar119 = iVar5 * (uint)bVar13 + iVar8 * (uint)bVar12 + iVar9 * (uint)bVar14 + 0x800;
          iVar120 = iVar10 * (uint)bVar13 + iVar6 * (uint)bVar12 + iVar11 * (uint)bVar14 + 0x800;
          uVar2 = iVar118 >> 0xc & (iVar118 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          puVar30[-3] = (char)uVar2;
          uVar2 = iVar119 >> 0xc & (iVar119 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          puVar30[-2] = (char)uVar2;
          uVar2 = iVar120 >> 0xc & (iVar120 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          puVar30[-1] = (char)uVar2;
          if (iVar15 == 4) {
            *puVar30 = 0xff;
          }
          uVar25 = uVar25 + 3;
          puVar30 = puVar30 + iVar15;
        } while ((long)uVar25 < (long)iVar23);
      }
      iVar26 = iVar26 + 1;
      lVar29 = *(long *)(param_1 + 8);
      lVar28 = lVar28 + *(long *)(lVar29 + 0x50);
      puVar27 = puVar27 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar26 < param_2[1]);
  }
  return;
}



/* Entry: 109ad543c; end: 109ad5443;  */

void FUN_109ad543c(void)

{
  return;
}



/* Entry: 109ad5444; end: 109ad5743;  */

void FUN_109ad5444(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  ushort uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [14];
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  undefined2 *puVar28;
  ushort *puVar29;
  long lVar30;
  uint *puVar31;
  undefined2 *puVar32;
  ushort *puVar33;
  uint uVar34;
  undefined8 uVar36;
  undefined2 uVar40;
  undefined2 uVar41;
  uint uVar42;
  undefined2 uVar44;
  uint uVar45;
  uint uVar46;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar43;
  undefined1 auVar39 [16];
  int iVar47;
  int iVar48;
  int iVar55;
  undefined8 uVar49;
  undefined2 uVar53;
  undefined2 uVar54;
  undefined2 uVar56;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar57;
  int iVar64;
  undefined8 uVar58;
  undefined2 uVar62;
  undefined2 uVar63;
  undefined2 uVar65;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  int iVar71;
  uint uVar72;
  int iVar73;
  uint uVar74;
  uint uVar75;
  int iVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  ulong uVar35;
  undefined1 auVar50 [16];
  
  iVar27 = *param_2;
  if (iVar27 < param_2[1]) {
    lVar30 = *(long *)(param_1 + 8);
    puVar28 = (undefined2 *)
              (*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
              **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar27);
    puVar29 = (ushort *)(*(long *)(lVar30 + 0x10) + **(long **)(lVar30 + 0x48) * (long)iVar27);
    do {
      puVar31 = *(uint **)(param_1 + 0x18);
      uVar13 = *puVar31;
      uVar2 = puVar31[2];
      uVar6 = puVar31[3];
      uVar3 = puVar31[4];
      uVar7 = puVar31[5];
      uVar4 = puVar31[6];
      uVar8 = puVar31[7];
      uVar5 = puVar31[8];
      uVar9 = puVar31[9];
      lVar21 = (long)*(int *)(lVar30 + 0xc) * 3;
      uVar10 = puVar31[10];
      puVar32 = puVar28;
      if (*(int *)(lVar30 + 0xc) < 8) {
        uVar26 = 0;
      }
      else {
        uVar26 = 0;
        puVar33 = puVar29;
        do {
          uVar22 = (uint)*puVar33;
          uVar1 = (uint)puVar33[3];
          uVar67 = (uint)puVar33[6];
          uVar23 = (uint)puVar33[1];
          uVar24 = (uint)puVar33[4];
          uVar72 = (uint)puVar33[7];
          uVar75 = (uint)puVar33[10];
          uVar25 = (uint)puVar33[2];
          uVar43 = (uint)puVar33[5];
          uVar78 = (uint)puVar33[8];
          uVar79 = (uint)puVar33[0xb];
          iVar82 = (int)*(undefined8 *)(puVar31 + 0xe);
          iVar83 = (int)((ulong)*(undefined8 *)(puVar31 + 0xe) >> 0x20);
          iVar80 = (int)*(undefined8 *)(puVar31 + 0xc);
          iVar81 = (int)((ulong)*(undefined8 *)(puVar31 + 0xc) >> 0x20);
          iVar86 = (int)*(undefined8 *)(puVar31 + 0x12);
          iVar87 = (int)((ulong)*(undefined8 *)(puVar31 + 0x12) >> 0x20);
          iVar84 = (int)*(undefined8 *)(puVar31 + 0x10);
          iVar85 = (int)((ulong)*(undefined8 *)(puVar31 + 0x10) >> 0x20);
          uVar69 = (uint)puVar33[9];
          iVar88 = (int)*(undefined8 *)(puVar31 + 0x14);
          iVar89 = (int)((ulong)*(undefined8 *)(puVar31 + 0x14) >> 0x20);
          iVar90 = (int)*(undefined8 *)(puVar31 + 0x16);
          iVar91 = (int)((ulong)*(undefined8 *)(puVar31 + 0x16) >> 0x20);
          iVar92 = (int)*(undefined8 *)(puVar31 + 0x18);
          iVar93 = (int)((ulong)*(undefined8 *)(puVar31 + 0x18) >> 0x20);
          iVar94 = (int)*(undefined8 *)(puVar31 + 0x1a);
          iVar95 = (int)((ulong)*(undefined8 *)(puVar31 + 0x1a) >> 0x20);
          iVar96 = (int)*(undefined8 *)(puVar31 + 0x1c);
          iVar97 = (int)((ulong)*(undefined8 *)(puVar31 + 0x1c) >> 0x20);
          iVar98 = (int)*(undefined8 *)(puVar31 + 0x1e);
          iVar99 = (int)((ulong)*(undefined8 *)(puVar31 + 0x1e) >> 0x20);
          iVar100 = (int)*(undefined8 *)(puVar31 + 0x20);
          iVar101 = (int)((ulong)*(undefined8 *)(puVar31 + 0x20) >> 0x20);
          iVar102 = (int)*(undefined8 *)(puVar31 + 0x22);
          iVar103 = (int)((ulong)*(undefined8 *)(puVar31 + 0x22) >> 0x20);
          iVar104 = (int)*(undefined8 *)(puVar31 + 0x24);
          iVar105 = (int)((ulong)*(undefined8 *)(puVar31 + 0x24) >> 0x20);
          iVar106 = (int)*(undefined8 *)(puVar31 + 0x26);
          iVar107 = (int)((ulong)*(undefined8 *)(puVar31 + 0x26) >> 0x20);
          iVar108 = (int)*(undefined8 *)(puVar31 + 0x28);
          iVar109 = (int)((ulong)*(undefined8 *)(puVar31 + 0x28) >> 0x20);
          iVar110 = (int)*(undefined8 *)(puVar31 + 0x2a);
          iVar111 = (int)((ulong)*(undefined8 *)(puVar31 + 0x2a) >> 0x20);
          iVar73 = (int)*(undefined8 *)(puVar31 + 0x2e);
          iVar76 = (int)((ulong)*(undefined8 *)(puVar31 + 0x2e) >> 0x20);
          iVar64 = (int)*(undefined8 *)(puVar31 + 0x2c);
          iVar71 = (int)((ulong)*(undefined8 *)(puVar31 + 0x2c) >> 0x20);
          iVar112 = (int)*(undefined8 *)(puVar31 + 0x30);
          iVar113 = (int)((ulong)*(undefined8 *)(puVar31 + 0x30) >> 0x20);
          iVar114 = (int)*(undefined8 *)(puVar31 + 0x32);
          iVar115 = (int)((ulong)*(undefined8 *)(puVar31 + 0x32) >> 0x20);
          uVar74 = (uint)(CONCAT24(puVar33[0xf],CONCAT22(puVar33[0xc],puVar33[9])) >> 0x10) & 0xffff
          ;
          uVar68 = (uint)puVar33[0x12];
          uVar116 = (uint)puVar33[0xd];
          uVar117 = (uint)puVar33[0x10];
          uVar118 = (uint)puVar33[0x13];
          uVar119 = (uint)puVar33[0x16];
          uVar34 = (uint)puVar33[0xe];
          uVar35 = CONCAT26(0,CONCAT24(puVar33[0x11],uVar34));
          auVar20._8_2_ = puVar33[0x14];
          auVar20._0_8_ = uVar35;
          auVar20._10_2_ = 0;
          auVar20._12_2_ = puVar33[0x17];
          uVar77 = (uint)puVar33[0xf];
          uVar70 = (uint)puVar33[0x15];
          uVar42 = (uint)puVar33[0x11];
          uVar45 = (uint)puVar33[0x14];
          uVar46 = (uint)puVar33[0x17];
          iVar47 = iVar80 * uVar74 + iVar84 * uVar116 + iVar88 * uVar34;
          iVar48 = iVar81 * uVar77 + iVar85 * uVar117 + iVar89 * uVar42;
          auVar50._0_8_ = CONCAT44(iVar48,iVar47);
          auVar50._8_4_ = iVar82 * uVar68 + iVar86 * uVar118 + iVar90 * uVar45;
          auVar50._12_4_ = iVar83 * uVar70 + iVar87 * uVar119 + iVar91 * uVar46;
          iVar55 = iVar92 * uVar74 + iVar96 * uVar116 + iVar100 * uVar34;
          iVar57 = iVar93 * uVar77 + iVar97 * uVar117 + iVar101 * uVar42;
          auVar59._0_8_ = CONCAT44(iVar57,iVar55);
          auVar59._8_4_ = iVar94 * uVar68 + iVar98 * uVar118 + iVar102 * uVar45;
          auVar59._12_4_ = iVar95 * uVar70 + iVar99 * uVar119 + iVar103 * uVar46;
          auVar52._4_4_ = iVar81 * uVar1 + iVar85 * uVar24 + iVar89 * uVar43 + iVar113;
          auVar52._0_4_ = iVar80 * uVar22 + iVar84 * uVar23 + iVar88 * uVar25 + iVar112;
          auVar52._8_4_ = iVar82 * uVar67 + iVar86 * uVar72 + iVar90 * uVar78 + iVar114;
          auVar52._12_4_ = iVar83 * uVar69 + iVar87 * uVar75 + iVar91 * uVar79 + iVar115;
          auVar37._0_8_ = NEON_sqshrun(uVar35,auVar52,0xc,4);
          auVar37._8_6_ = auVar20._8_6_;
          auVar37._14_2_ = 0;
          auVar38._4_4_ = iVar48 + iVar113;
          auVar38._0_4_ = iVar47 + iVar112;
          auVar38._8_4_ = auVar50._8_4_ + iVar114;
          auVar38._12_4_ = auVar50._12_4_ + iVar115;
          auVar38 = NEON_sqshrun2(auVar37,auVar38,0xc,4);
          auVar51._8_8_ = auVar50._8_8_;
          auVar18._4_4_ = iVar93 * uVar1 + iVar97 * uVar24 + iVar101 * uVar43 + iVar113;
          auVar18._0_4_ = iVar92 * uVar22 + iVar96 * uVar23 + iVar100 * uVar25 + iVar112;
          auVar18._8_4_ = iVar94 * uVar67 + iVar98 * uVar72 + iVar102 * uVar78 + iVar114;
          auVar18._12_4_ = iVar95 * uVar69 + iVar99 * uVar75 + iVar103 * uVar79 + iVar115;
          auVar51._0_8_ = NEON_sqshrun(auVar50._0_8_,auVar18,0xc,4);
          auVar61._4_4_ = iVar57 + iVar113;
          auVar61._0_4_ = iVar55 + iVar112;
          auVar61._8_4_ = auVar59._8_4_ + iVar114;
          auVar61._12_4_ = auVar59._12_4_ + iVar115;
          auVar52 = NEON_sqshrun2(auVar51,auVar61,0xc,4);
          auVar60._8_8_ = auVar59._8_8_;
          auVar19._4_4_ = iVar105 * uVar1 + iVar109 * uVar24 + iVar71 * uVar43 + iVar113;
          auVar19._0_4_ = iVar104 * uVar22 + iVar108 * uVar23 + iVar64 * uVar25 + iVar112;
          auVar19._8_4_ = iVar106 * uVar67 + iVar110 * uVar72 + iVar73 * uVar78 + iVar114;
          auVar19._12_4_ = iVar107 * uVar69 + iVar111 * uVar75 + iVar76 * uVar79 + iVar115;
          auVar60._0_8_ = NEON_sqshrun(auVar59._0_8_,auVar19,0xc,4);
          auVar17._4_4_ = iVar105 * uVar77 + iVar109 * uVar117 + iVar71 * uVar42 + iVar113;
          auVar17._0_4_ = iVar104 * uVar74 + iVar108 * uVar116 + iVar64 * uVar34 + iVar112;
          auVar17._8_4_ = iVar106 * uVar68 + iVar110 * uVar118 + iVar73 * uVar45 + iVar114;
          auVar17._12_4_ = iVar107 * uVar70 + iVar111 * uVar119 + iVar76 * uVar46 + iVar115;
          auVar61 = NEON_sqshrun2(auVar60,auVar17,0xc,4);
          if (uVar13 == 3) {
            *puVar32 = auVar38._0_2_;
            puVar32[1] = auVar52._0_2_;
            puVar32[2] = auVar61._0_2_;
            puVar32[3] = auVar38._2_2_;
            puVar32[4] = auVar52._2_2_;
            puVar32[5] = auVar61._2_2_;
            puVar32[6] = auVar38._4_2_;
            puVar32[7] = auVar52._4_2_;
            puVar32[8] = auVar61._4_2_;
            puVar32[9] = auVar38._6_2_;
            puVar32[10] = auVar52._6_2_;
            puVar32[0xb] = auVar61._6_2_;
            puVar32[0xc] = auVar38._8_2_;
            puVar32[0xd] = auVar52._8_2_;
            puVar32[0xe] = auVar61._8_2_;
            puVar32[0xf] = auVar38._10_2_;
            puVar32[0x10] = auVar52._10_2_;
            puVar32[0x11] = auVar61._10_2_;
            puVar32[0x12] = auVar38._12_2_;
            puVar32[0x13] = auVar52._12_2_;
            puVar32[0x14] = auVar61._12_2_;
            puVar32[0x15] = auVar38._14_2_;
            puVar32[0x16] = auVar52._14_2_;
            puVar32[0x17] = auVar61._14_2_;
          }
          else {
            uVar49 = *(undefined8 *)(puVar31 + 0x3a);
            uVar36 = *(undefined8 *)(puVar31 + 0x38);
            *puVar32 = auVar38._0_2_;
            puVar32[1] = auVar52._0_2_;
            puVar32[2] = auVar61._0_2_;
            puVar32[3] = (short)uVar36;
            puVar32[4] = auVar38._2_2_;
            puVar32[5] = auVar52._2_2_;
            puVar32[6] = auVar61._2_2_;
            puVar32[7] = (short)((ulong)uVar36 >> 0x10);
            puVar32[8] = auVar38._4_2_;
            puVar32[9] = auVar52._4_2_;
            puVar32[10] = auVar61._4_2_;
            puVar32[0xb] = (short)((ulong)uVar36 >> 0x20);
            puVar32[0xc] = auVar38._6_2_;
            puVar32[0xd] = auVar52._6_2_;
            puVar32[0xe] = auVar61._6_2_;
            puVar32[0xf] = (short)((ulong)uVar36 >> 0x30);
            puVar32[0x10] = auVar38._8_2_;
            puVar32[0x11] = auVar52._8_2_;
            puVar32[0x12] = auVar61._8_2_;
            puVar32[0x13] = (short)uVar49;
            puVar32[0x14] = auVar38._10_2_;
            puVar32[0x15] = auVar52._10_2_;
            puVar32[0x16] = auVar61._10_2_;
            puVar32[0x17] = (short)((ulong)uVar49 >> 0x10);
            puVar32[0x18] = auVar38._12_2_;
            puVar32[0x19] = auVar52._12_2_;
            puVar32[0x1a] = auVar61._12_2_;
            puVar32[0x1b] = (short)((ulong)uVar49 >> 0x20);
            puVar32[0x1c] = auVar38._14_2_;
            puVar32[0x1d] = auVar52._14_2_;
            puVar32[0x1e] = auVar61._14_2_;
            puVar32[0x1f] = (short)((ulong)uVar49 >> 0x30);
          }
          uVar26 = uVar26 + 0x18;
          puVar33 = puVar33 + 0x18;
          puVar32 = (undefined2 *)
                    ((long)puVar32 +
                    (-(ulong)((uVar13 & 0x1fffffff) >> 0x1c) & 0xfffffffe00000000 |
                    (ulong)(uVar13 << 3) << 1));
        } while ((long)uVar26 <= lVar21 + -0x18);
      }
      iVar47 = (int)lVar21;
      if ((int)uVar26 <= iVar47 + -0xc) {
        puVar33 = puVar29 + (uVar26 & 0xffffffff);
        do {
          uVar22 = (uint)*puVar33;
          uVar1 = (uint)puVar33[3];
          uVar45 = (uint)puVar33[6];
          uVar23 = (uint)puVar33[1];
          uVar24 = (uint)puVar33[4];
          uVar74 = (uint)puVar33[7];
          uVar77 = (uint)puVar33[10];
          uVar25 = (uint)puVar33[2];
          uVar46 = (uint)puVar33[9];
          uVar43 = (uint)puVar33[5];
          uVar34 = (uint)puVar33[8];
          uVar42 = (uint)puVar33[0xb];
          iVar48 = puVar31[0xc] * uVar22 + puVar31[0x10] * uVar23 + puVar31[0x14] * uVar25;
          iVar55 = puVar31[0xd] * uVar1 + puVar31[0x11] * uVar24 + puVar31[0x15] * uVar43;
          iVar57 = (int)*(undefined8 *)(puVar31 + 0x18) * uVar22 +
                   (int)*(undefined8 *)(puVar31 + 0x1c) * uVar23 +
                   (int)*(undefined8 *)(puVar31 + 0x20) * uVar25;
          iVar64 = (int)((ulong)*(undefined8 *)(puVar31 + 0x18) >> 0x20) * uVar1 +
                   (int)((ulong)*(undefined8 *)(puVar31 + 0x1c) >> 0x20) * uVar24 +
                   (int)((ulong)*(undefined8 *)(puVar31 + 0x20) >> 0x20) * uVar43;
          iVar76 = (int)*(undefined8 *)(puVar31 + 0x32);
          iVar80 = (int)((ulong)*(undefined8 *)(puVar31 + 0x32) >> 0x20);
          iVar71 = (int)*(undefined8 *)(puVar31 + 0x30);
          iVar73 = (int)((ulong)*(undefined8 *)(puVar31 + 0x30) >> 0x20);
          auVar39._0_8_ = CONCAT44(iVar55 + iVar73,iVar48 + iVar71);
          auVar39._8_4_ =
               puVar31[0xe] * uVar45 + puVar31[0x12] * uVar74 + puVar31[0x16] * uVar34 + iVar76;
          auVar39._12_4_ =
               puVar31[0xf] * uVar46 + puVar31[0x13] * uVar77 + puVar31[0x17] * uVar42 + iVar80;
          uVar36 = NEON_sqshrun(auVar39._0_8_,auVar39,0xc,4);
          auVar15._4_4_ = iVar64 + iVar73;
          auVar15._0_4_ = iVar57 + iVar71;
          auVar15._8_4_ =
               (int)*(undefined8 *)(puVar31 + 0x1a) * uVar45 +
               (int)*(undefined8 *)(puVar31 + 0x1e) * uVar74 +
               (int)*(undefined8 *)(puVar31 + 0x22) * uVar34 + iVar76;
          auVar15._12_4_ =
               (int)((ulong)*(undefined8 *)(puVar31 + 0x1a) >> 0x20) * uVar46 +
               (int)((ulong)*(undefined8 *)(puVar31 + 0x1e) >> 0x20) * uVar77 +
               (int)((ulong)*(undefined8 *)(puVar31 + 0x22) >> 0x20) * uVar42 + iVar80;
          uVar49 = NEON_sqshrun(CONCAT44(iVar55,iVar48),auVar15,0xc,4);
          auVar16._4_4_ =
               (int)((ulong)*(undefined8 *)(puVar31 + 0x24) >> 0x20) * uVar1 +
               (int)((ulong)*(undefined8 *)(puVar31 + 0x28) >> 0x20) * uVar24 +
               (int)((ulong)*(undefined8 *)(puVar31 + 0x2c) >> 0x20) * uVar43 + iVar73;
          auVar16._0_4_ =
               (int)*(undefined8 *)(puVar31 + 0x24) * uVar22 +
               (int)*(undefined8 *)(puVar31 + 0x28) * uVar23 +
               (int)*(undefined8 *)(puVar31 + 0x2c) * uVar25 + iVar71;
          auVar16._8_4_ =
               (int)*(undefined8 *)(puVar31 + 0x26) * uVar45 +
               (int)*(undefined8 *)(puVar31 + 0x2a) * uVar74 +
               (int)*(undefined8 *)(puVar31 + 0x2e) * uVar34 + iVar76;
          auVar16._12_4_ =
               (int)((ulong)*(undefined8 *)(puVar31 + 0x26) >> 0x20) * uVar46 +
               (int)((ulong)*(undefined8 *)(puVar31 + 0x2a) >> 0x20) * uVar77 +
               (int)((ulong)*(undefined8 *)(puVar31 + 0x2e) >> 0x20) * uVar42 + iVar80;
          uVar58 = NEON_sqshrun(CONCAT44(iVar64,iVar57),auVar16,0xc,4);
          uVar40 = (undefined2)((ulong)uVar36 >> 0x10);
          uVar41 = (undefined2)((ulong)uVar36 >> 0x20);
          uVar44 = (undefined2)((ulong)uVar36 >> 0x30);
          uVar53 = (undefined2)((ulong)uVar49 >> 0x10);
          uVar54 = (undefined2)((ulong)uVar49 >> 0x20);
          uVar56 = (undefined2)((ulong)uVar49 >> 0x30);
          uVar62 = (undefined2)((ulong)uVar58 >> 0x10);
          uVar63 = (undefined2)((ulong)uVar58 >> 0x20);
          uVar65 = (undefined2)((ulong)uVar58 >> 0x30);
          if (uVar13 == 3) {
            *puVar32 = (short)uVar36;
            puVar32[1] = (short)uVar49;
            puVar32[2] = (short)uVar58;
            puVar32[3] = uVar40;
            puVar32[4] = uVar53;
            puVar32[5] = uVar62;
            puVar32[6] = uVar41;
            puVar32[7] = uVar54;
            puVar32[8] = uVar63;
            puVar32[9] = uVar44;
            puVar32[10] = uVar56;
            puVar32[0xb] = uVar65;
          }
          else {
            uVar66 = *(undefined8 *)(puVar31 + 0x34);
            *puVar32 = (short)uVar36;
            puVar32[1] = (short)uVar49;
            puVar32[2] = (short)uVar58;
            puVar32[3] = (short)uVar66;
            puVar32[4] = uVar40;
            puVar32[5] = uVar53;
            puVar32[6] = uVar62;
            puVar32[7] = (short)((ulong)uVar66 >> 0x10);
            puVar32[8] = uVar41;
            puVar32[9] = uVar54;
            puVar32[10] = uVar63;
            puVar32[0xb] = (short)((ulong)uVar66 >> 0x20);
            puVar32[0xc] = uVar44;
            puVar32[0xd] = uVar56;
            puVar32[0xe] = uVar65;
            puVar32[0xf] = (short)((ulong)uVar66 >> 0x30);
          }
          uVar1 = (int)uVar26 + 0xc;
          uVar26 = (ulong)uVar1;
          puVar33 = puVar33 + 0xc;
          puVar32 = (undefined2 *)
                    ((long)puVar32 +
                    (-(ulong)((uVar13 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 |
                    (ulong)(uVar13 << 2) << 1));
        } while ((int)uVar1 <= iVar47 + -0xc);
      }
      if ((int)uVar26 < iVar47) {
        puVar32 = puVar32 + 2;
        puVar33 = puVar29 + (uVar26 & 0xffffffff) + 1;
        do {
          uVar14 = puVar33[-1];
          uVar11 = *puVar33;
          uVar12 = puVar33[1];
          iVar48 = uVar6 * uVar11 + uVar2 * uVar14 + uVar3 * uVar12 + 0x800;
          iVar55 = uVar4 * uVar11 + uVar7 * uVar14 + uVar8 * uVar12 + 0x800;
          iVar57 = uVar9 * uVar11 + uVar5 * uVar14 + uVar10 * uVar12 + 0x800;
          uVar1 = iVar48 >> 0xc & (iVar48 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar1) {
            uVar1 = 0xffff;
          }
          puVar32[-2] = (short)uVar1;
          uVar1 = iVar55 >> 0xc & (iVar55 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar1) {
            uVar1 = 0xffff;
          }
          puVar32[-1] = (short)uVar1;
          uVar1 = iVar57 >> 0xc & (iVar57 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar1) {
            uVar1 = 0xffff;
          }
          *puVar32 = (short)uVar1;
          if (uVar13 == 4) {
            puVar32[1] = 0xffff;
          }
          puVar33 = puVar33 + 3;
          uVar1 = (int)uVar26 + 3;
          uVar26 = (ulong)uVar1;
          puVar32 = puVar32 + (int)uVar13;
        } while ((int)uVar1 < iVar47);
      }
      iVar27 = iVar27 + 1;
      lVar30 = *(long *)(param_1 + 8);
      puVar29 = (ushort *)((long)puVar29 + *(long *)(lVar30 + 0x50));
      puVar28 = (undefined2 *)((long)puVar28 + *(long *)(*(long *)(param_1 + 0x10) + 0x50));
    } while (iVar27 < param_2[1]);
  }
  return;
}



/* Entry: 109ad5744; end: 109ad583b;  */

void FUN_109ad5744(void)

{
  return;
}



/* Entry: 109ad583c; end: 109ad5a7b;  */

void FUN_109ad583c(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  double dVar26;
  
  iVar16 = *param_2;
  if (iVar16 < param_2[1]) {
    lVar21 = *(long *)(param_1 + 8);
    lVar20 = *(long *)(param_1 + 0x10);
    lVar17 = *(long *)(lVar20 + 0x10) + **(long **)(lVar20 + 0x48) * (long)iVar16;
    lVar18 = *(long *)(lVar21 + 0x10) + **(long **)(lVar21 + 0x48) * (long)iVar16;
    do {
      piVar19 = *(int **)(param_1 + 0x18);
      iVar8 = *(int *)(lVar21 + 0xc);
      iVar6 = *piVar19;
      iVar7 = piVar19[1];
      uVar9 = piVar19[2];
      lVar5 = 0x11375ad2c;
      if (uVar9 != 0xb4) {
        lVar5 = 0x11375a128;
      }
      if ((bRam000000011375a529 & 1) == 0) {
        uRam000000011375a128 = 0;
        uRam000000011375ad2c = 0;
        puVar22 = (undefined4 *)0x11375a930;
        lVar23 = -0x5fa;
        uVar25 = 1;
        uRam000000011375a92c = 0;
        do {
          dVar26 = (double)((int)lVar23 + 0x600);
          *puVar22 = (int)(long)(double)(long)(1044480.0 / (double)(uVar25 & 0xffffffff));
          puVar22[0x100] = (int)(long)(double)(long)(737280.0 / dVar26);
          *(int *)(uVar25 * 4 + 0x11375a128) = (int)(long)(double)(long)(1048576.0 / dVar26);
          uVar25 = uVar25 + 1;
          puVar22 = puVar22 + 1;
          lVar23 = lVar23 + 6;
        } while (lVar23 != 0);
        bRam000000011375a529 = 1;
      }
      if (0 < iVar8) {
        uVar25 = 0;
        lVar21 = lVar18;
        do {
          bVar12 = *(byte *)(lVar21 + iVar7);
          uVar24 = (ulong)bVar12;
          bVar13 = *(byte *)(lVar21 + ((long)iVar7 ^ 2U));
          bVar11 = *(byte *)(lVar21 + 1);
          iVar15 = (uint)bVar11 - (uint)bVar12;
          uVar1 = (int)((byte)(&UNK_10e03502f)[iVar15 + 0x100] + uVar24) +
                  (uint)(byte)(&UNK_10e03502f)
                              [((ulong)bVar13 | 0x100) -
                               ((byte)(&UNK_10e03502f)[iVar15 + 0x100] + uVar24)];
          iVar2 = (uVar1 - (int)(uVar24 - (byte)(&UNK_10e03502f)[(uVar24 | 0x100) - (ulong)bVar11]))
                  + (uint)(byte)(&UNK_10e03512f)
                                [(uVar24 - (byte)(&UNK_10e03502f)[(uVar24 | 0x100) - (ulong)bVar11])
                                 - (ulong)bVar13];
          iVar10 = *(int *)((ulong)uVar1 * 4 + 0x11375a92c);
          iVar14 = ((uint)bVar12 - (uint)bVar13) + iVar2 * 2;
          if (uVar1 != bVar11) {
            iVar14 = ((uint)bVar13 - (uint)bVar11) + iVar2 * 4;
          }
          if (uVar1 != bVar13) {
            iVar15 = iVar14;
          }
          iVar14 = iVar15 * *(int *)(lVar5 + (long)iVar2 * 4) + 0x800;
          uVar3 = (uVar9 & iVar14 >> 0x1f) + (iVar14 >> 0xc);
          uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
          puVar4 = (undefined1 *)(lVar17 + uVar25);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          *puVar4 = (char)uVar3;
          puVar4[1] = (char)(iVar2 * iVar10 + 0x800U >> 0xc);
          puVar4[2] = (char)uVar1;
          uVar25 = uVar25 + 3;
          lVar21 = lVar21 + iVar6;
        } while (uVar25 < (uint)(iVar8 * 3));
        lVar21 = *(long *)(param_1 + 8);
        lVar20 = *(long *)(param_1 + 0x10);
      }
      iVar16 = iVar16 + 1;
      lVar18 = lVar18 + *(long *)(lVar21 + 0x50);
      lVar17 = lVar17 + *(long *)(lVar20 + 0x50);
    } while (iVar16 < param_2[1]);
  }
  return;
}



/* Entry: 109ad5a7c; end: 109ad5a83;  */

void FUN_109ad5a7c(void)

{
  return;
}



/* Entry: 109ad5a84; end: 109ad5bcb;  */

void FUN_109ad5a84(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  float *pfVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  iVar10 = *param_2;
  iVar1 = param_2[1];
  if (iVar10 < iVar1) {
    lVar14 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(lVar2 + 0x50);
    lVar4 = *(long *)(lVar14 + 0x50);
    lVar11 = *(long *)(lVar14 + 0x10) + **(long **)(lVar14 + 0x48) * (long)iVar10;
    piVar12 = *(int **)(param_1 + 0x18);
    uVar7 = *(uint *)(lVar14 + 0xc);
    pfVar13 = (float *)(*(long *)(lVar2 + 0x10) + **(long **)(lVar2 + 0x48) * (long)iVar10 + 8);
    do {
      if (0 < (int)uVar7) {
        uVar8 = 0;
        fVar15 = (float)piVar12[2];
        iVar5 = *piVar12;
        iVar6 = piVar12[1];
        pfVar9 = pfVar13;
        lVar14 = lVar11;
        do {
          fVar16 = *(float *)(lVar14 + (long)iVar6 * 4);
          fVar18 = *(float *)(lVar14 + 4);
          fVar19 = *(float *)(lVar14 + ((long)iVar6 ^ 2U) * 4);
          fVar20 = fVar18;
          if (fVar18 <= fVar19) {
            fVar20 = fVar19;
          }
          fVar17 = fVar18;
          if (fVar19 <= fVar18) {
            fVar17 = fVar19;
          }
          fVar21 = fVar16;
          if (fVar16 <= fVar20) {
            fVar21 = fVar20;
          }
          fVar20 = fVar16;
          if (fVar17 <= fVar16) {
            fVar20 = fVar17;
          }
          fVar22 = 60.0 / ((fVar21 - fVar20) + 1.1920929e-07);
          fVar17 = fVar22 * (fVar19 - fVar18) + 240.0;
          if (fVar21 == fVar18) {
            fVar17 = fVar22 * (fVar16 - fVar19) + 120.0;
          }
          if (fVar21 == fVar19) {
            fVar17 = (fVar18 - fVar16) * fVar22;
          }
          fVar16 = fVar17 + 360.0;
          if (0.0 <= fVar17) {
            fVar16 = fVar17;
          }
          lVar14 = lVar14 + (long)iVar5 * 4;
          pfVar9[-2] = fVar15 * 0.0027777778 * fVar16;
          pfVar9[-1] = (fVar21 - fVar20) / (ABS(fVar21) + 1.1920929e-07);
          *pfVar9 = fVar21;
          uVar8 = uVar8 + 3;
          pfVar9 = pfVar9 + 3;
        } while (uVar8 < (ulong)uVar7 * 3);
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + lVar4;
      pfVar13 = (float *)((long)pfVar13 + lVar3);
    } while (iVar10 != iVar1);
  }
  return;
}



/* Entry: 109ad5bcc; end: 109ad5bd3;  */

void FUN_109ad5bcc(void)

{
  return;
}



/* Entry: 109ad5bd4; end: 109ad625f;  */

void FUN_109ad5bd4(int *param_1,float *param_2,float *param_3,ulong param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint3 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  float *pfVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  int *piVar26;
  long lVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 extraout_d2;
  undefined8 uVar43;
  undefined8 extraout_d2_00;
  undefined8 extraout_d2_01;
  undefined8 extraout_d2_02;
  undefined8 extraout_d2_03;
  undefined8 extraout_d2_04;
  undefined8 extraout_d2_05;
  undefined8 extraout_d2_06;
  undefined8 extraout_d2_07;
  undefined8 extraout_d2_08;
  undefined8 extraout_d2_09;
  undefined8 extraout_d2_10;
  undefined8 extraout_d2_11;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  float afStack_c80 [768];
  long lStack_80;
  
  iVar19 = (int)param_4;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar34 = *param_2;
  fVar33 = param_2[1];
  pfVar18 = param_2;
  if ((int)fVar34 < (int)fVar33) {
    lVar25 = *(long *)(param_1 + 2);
    lVar23 = *(long *)(param_1 + 4);
    lVar27 = *(long *)(lVar23 + 0x10) + **(long **)(lVar23 + 0x48) * (long)(int)fVar34;
    pbVar28 = (byte *)(*(long *)(lVar25 + 0x10) + **(long **)(lVar25 + 0x48) * (long)(int)fVar34);
    iVar2 = 0x132e8de0;
    do {
      iVar19 = *(int *)(lVar25 + 0xc);
      if (0 < iVar19) {
        iVar20 = 0;
        piVar26 = *(int **)(param_1 + 6);
        iVar3 = *piVar26;
        lVar25 = lVar27;
        pbVar29 = pbVar28;
        do {
          uVar24 = iVar19 - iVar20;
          if (0xff < (int)uVar24) {
            uVar24 = 0x100;
          }
          param_4 = (ulong)uVar24;
          iVar7 = uVar24 * 3;
          uVar21 = 0;
          uVar24 = iVar7 - 0x18;
          if (-1 < (int)uVar24) {
            fVar33 = (float)piVar26[8];
            fVar52 = (float)piVar26[9];
            fVar53 = (float)piVar26[10];
            fVar54 = (float)piVar26[0xb];
            pfVar18 = afStack_c80;
            do {
              if (iVar3 == 3) {
                uVar43 = CONCAT17(pbVar29[0x15],
                                  CONCAT16(pbVar29[0x12],
                                           CONCAT15(pbVar29[0xf],
                                                    CONCAT14(pbVar29[0xc],
                                                             CONCAT13(pbVar29[9],
                                                                      CONCAT12(pbVar29[6],
                                                                               CONCAT11(pbVar29[3],
                                                                                        *pbVar29))))
                                                   )));
                uVar40 = CONCAT17(pbVar29[0x16],
                                  CONCAT16(pbVar29[0x13],
                                           CONCAT15(pbVar29[0x10],
                                                    CONCAT14(pbVar29[0xd],
                                                             CONCAT13(pbVar29[10],
                                                                      CONCAT12(pbVar29[7],
                                                                               CONCAT11(pbVar29[4],
                                                                                        pbVar29[1]))
                                                                     )))));
                uVar39 = CONCAT17(pbVar29[0x17],
                                  CONCAT16(pbVar29[0x14],
                                           CONCAT15(pbVar29[0x11],
                                                    CONCAT14(pbVar29[0xe],
                                                             CONCAT13(pbVar29[0xb],
                                                                      CONCAT12(pbVar29[8],
                                                                               CONCAT11(pbVar29[5],
                                                                                        pbVar29[2]))
                                                                     )))));
              }
              else {
                uVar43 = CONCAT17(pbVar29[0x1c],
                                  CONCAT16(pbVar29[0x18],
                                           CONCAT15(pbVar29[0x14],
                                                    CONCAT14(pbVar29[0x10],
                                                             CONCAT13(pbVar29[0xc],
                                                                      CONCAT12(pbVar29[8],
                                                                               CONCAT11(pbVar29[4],
                                                                                        *pbVar29))))
                                                   )));
                uVar40 = CONCAT17(pbVar29[0x1d],
                                  CONCAT16(pbVar29[0x19],
                                           CONCAT15(pbVar29[0x15],
                                                    CONCAT14(pbVar29[0x11],
                                                             CONCAT13(pbVar29[0xd],
                                                                      CONCAT12(pbVar29[9],
                                                                               CONCAT11(pbVar29[5],
                                                                                        pbVar29[1]))
                                                                     )))));
                uVar39 = CONCAT17(pbVar29[0x1e],
                                  CONCAT16(pbVar29[0x1a],
                                           CONCAT15(pbVar29[0x16],
                                                    CONCAT14(pbVar29[0x12],
                                                             CONCAT13(pbVar29[0xe],
                                                                      CONCAT12(pbVar29[10],
                                                                               CONCAT11(pbVar29[6],
                                                                                        pbVar29[2]))
                                                                     )))));
              }
              uVar30 = (undefined1)((ulong)uVar43 >> 8);
              uVar6 = CONCAT12((char)((ulong)uVar40 >> 8),(short)uVar40) & 0xff00ff;
              uVar32 = (undefined1)((ulong)uVar40 >> 0x28);
              uVar31 = (undefined1)((ulong)uVar39 >> 8);
              auVar56._6_2_ = 0;
              auVar56._0_6_ =
                   (uint6)CONCAT14(uVar30,(uint)CONCAT12(uVar30,(ushort)(byte)uVar43)) &
                   0xffff0000ffff;
              auVar56[8] = (char)((ulong)uVar43 >> 0x10);
              auVar56._9_3_ = 0;
              auVar56[0xc] = (char)((ulong)uVar43 >> 0x18);
              auVar56._13_3_ = 0;
              auVar44 = NEON_ucvtf(auVar56,4);
              auVar55._6_2_ = 0;
              auVar55._0_6_ = (uint6)CONCAT14((char)(uVar6 >> 0x10),(uint)uVar6) & 0xffff0000ffff;
              auVar55[8] = (char)((ulong)uVar40 >> 0x10);
              auVar55._9_3_ = 0;
              auVar55[0xc] = (char)((ulong)uVar40 >> 0x18);
              auVar55._13_3_ = 0;
              auVar56 = NEON_ucvtf(auVar55,4);
              auVar57._6_2_ = 0;
              auVar57._0_6_ =
                   (uint6)CONCAT14(uVar31,(uint)CONCAT12(uVar31,(ushort)(byte)uVar39)) &
                   0xffff0000ffff;
              auVar57[8] = (char)((ulong)uVar39 >> 0x10);
              auVar57._9_3_ = 0;
              auVar57[0xc] = (char)((ulong)uVar39 >> 0x18);
              auVar57._13_3_ = 0;
              auVar58 = NEON_ucvtf(auVar57,4);
              *pfVar18 = fVar33 * auVar44._0_4_;
              pfVar18[1] = fVar33 * auVar56._0_4_;
              pfVar18[2] = fVar33 * auVar58._0_4_;
              pfVar18[3] = fVar52 * auVar44._4_4_;
              pfVar18[4] = fVar52 * auVar56._4_4_;
              pfVar18[5] = fVar52 * auVar58._4_4_;
              pfVar18[6] = fVar53 * auVar44._8_4_;
              pfVar18[7] = fVar53 * auVar56._8_4_;
              pfVar18[8] = fVar53 * auVar58._8_4_;
              pfVar18[9] = fVar54 * auVar44._12_4_;
              pfVar18[10] = fVar54 * auVar56._12_4_;
              pfVar18[0xb] = fVar54 * auVar58._12_4_;
              auVar58._1_3_ = 0;
              auVar58[0] = (byte)((ulong)uVar43 >> 0x20);
              auVar58[4] = (char)((ulong)uVar43 >> 0x28);
              auVar58._5_3_ = 0;
              auVar58[8] = (char)((ulong)uVar43 >> 0x30);
              auVar58._9_3_ = 0;
              auVar58[0xc] = (char)((ulong)uVar43 >> 0x38);
              auVar58._13_3_ = 0;
              auVar56 = NEON_ucvtf(auVar58,4);
              auVar50._6_2_ = 0;
              auVar50._0_6_ =
                   (uint6)CONCAT14(uVar32,(uint)CONCAT12(uVar32,(ushort)(byte)((ulong)uVar40 >> 0x20
                                                                              ))) & 0xffff0000ffff;
              auVar50[8] = (char)((ulong)uVar40 >> 0x30);
              auVar50._9_3_ = 0;
              auVar50[0xc] = (char)((ulong)uVar40 >> 0x38);
              auVar50._13_3_ = 0;
              auVar58 = NEON_ucvtf(auVar50,4);
              auVar44._1_3_ = 0;
              auVar44[0] = (byte)((ulong)uVar39 >> 0x20);
              auVar44[4] = (char)((ulong)uVar39 >> 0x28);
              auVar44._5_3_ = 0;
              auVar44[8] = (char)((ulong)uVar39 >> 0x30);
              auVar44._9_3_ = 0;
              auVar44[0xc] = (char)((ulong)uVar39 >> 0x38);
              auVar44._13_3_ = 0;
              auVar44 = NEON_ucvtf(auVar44,4);
              pfVar18[0xc] = fVar33 * auVar56._0_4_;
              pfVar18[0xd] = fVar33 * auVar58._0_4_;
              pfVar18[0xe] = fVar33 * auVar44._0_4_;
              pfVar18[0xf] = fVar52 * auVar56._4_4_;
              pfVar18[0x10] = fVar52 * auVar58._4_4_;
              pfVar18[0x11] = fVar52 * auVar44._4_4_;
              pfVar18[0x12] = fVar53 * auVar56._8_4_;
              pfVar18[0x13] = fVar53 * auVar58._8_4_;
              pfVar18[0x14] = fVar53 * auVar44._8_4_;
              pfVar18[0x15] = fVar54 * auVar56._12_4_;
              pfVar18[0x16] = fVar54 * auVar58._12_4_;
              pfVar18[0x17] = fVar54 * auVar44._12_4_;
              uVar21 = uVar21 + 0x18;
              pbVar29 = pbVar29 + (long)iVar3 * 8;
              pfVar18 = pfVar18 + 0x18;
            } while (uVar21 <= uVar24);
            uVar21 = uVar21 & 0xffffffff;
          }
          if ((int)uVar21 < iVar7) {
            pfVar18 = (float *)(((ulong)afStack_c80 | 4) + uVar21 * 4);
            do {
              fVar33 = (float)NEON_ucvtf((uint)*pbVar29);
              pfVar18[-1] = fVar33 * 0.003921569;
              fVar33 = (float)NEON_ucvtf((uint)pbVar29[1]);
              *pfVar18 = fVar33 * 0.003921569;
              fVar33 = (float)NEON_ucvtf((uint)pbVar29[2]);
              pfVar18[1] = fVar33 * 0.003921569;
              uVar21 = uVar21 + 3;
              pbVar29 = pbVar29 + iVar3;
              pfVar18 = pfVar18 + 3;
            } while ((long)uVar21 < (long)iVar7);
          }
          pfVar18 = afStack_c80;
          param_3 = afStack_c80;
          FUN_109ad6260(piVar26 + 1);
          if ((int)uVar24 < 0) {
            uVar21 = 0;
          }
          else {
            uVar21 = 0;
            pfVar22 = afStack_c80;
            uVar43 = extraout_d2;
            do {
              fVar60 = *pfVar22;
              fVar64 = pfVar22[1];
              fVar68 = pfVar22[2];
              fVar61 = pfVar22[3];
              fVar65 = pfVar22[4];
              fVar69 = pfVar22[5];
              fVar62 = pfVar22[6];
              fVar66 = pfVar22[7];
              fVar70 = pfVar22[8];
              fVar63 = pfVar22[9];
              fVar67 = pfVar22[10];
              fVar71 = pfVar22[0xb];
              fVar33 = pfVar22[0xd];
              auVar51._0_8_ = CONCAT44(pfVar22[0xf],pfVar22[0xc]);
              fVar52 = pfVar22[0x10];
              auVar59._0_8_ = CONCAT44(pfVar22[0x11],pfVar22[0xe]);
              auVar51._8_4_ = pfVar22[0x12];
              fVar53 = pfVar22[0x13];
              auVar59._8_4_ = pfVar22[0x14];
              auVar51._12_4_ = pfVar22[0x15];
              fVar54 = pfVar22[0x16];
              auVar59._12_4_ = pfVar22[0x17];
              if ((bRam00000001132e8de0 & 1) == 0) {
                uVar40 = auVar51._8_8_;
                uVar39 = auVar59._8_8_;
                iVar17 = iVar2;
                ___cxa_guard_acquire();
                auVar51._8_8_ = uVar40;
                auVar59._8_8_ = uVar39;
                uVar43 = extraout_d2_00;
                if (iVar17 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  uVar43 = extraout_d2_01;
                }
              }
              uVar40 = uRam00000001132e8dd0;
              auVar36._8_4_ = fRam00000001132e8dd8;
              auVar36._0_8_ = uRam00000001132e8dd0;
              auVar36._12_4_ = fRam00000001132e8ddc;
              if ((bRam00000001132e8de0 & 1) == 0) {
                uVar39 = auVar36._8_8_;
                iVar17 = iVar2;
                ___cxa_guard_acquire();
                auVar36._8_8_ = uVar39;
                auVar36._0_8_ = uVar40;
                uVar43 = extraout_d2_02;
                if (iVar17 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  uVar43 = extraout_d2_03;
                }
              }
              uVar40 = uRam00000001132e8dd0;
              auVar41._8_4_ = fRam00000001132e8dd8;
              auVar41._0_8_ = uRam00000001132e8dd0;
              auVar41._12_4_ = fRam00000001132e8ddc;
              auVar44 = *(undefined1 (*) [16])(piVar26 + 4);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uVar39 = auVar41._8_8_;
                iVar17 = iVar2;
                ___cxa_guard_acquire();
                auVar41._8_8_ = uVar39;
                auVar41._0_8_ = uVar40;
                uVar43 = extraout_d2_04;
                if (iVar17 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  uVar43 = extraout_d2_05;
                }
              }
              fVar14 = fRam00000001132e8ddc;
              fVar11 = fRam00000001132e8dd8;
              uVar8 = uRam00000001132e8dd0;
              uVar39 = *(undefined8 *)(piVar26 + 6);
              uVar40 = *(undefined8 *)(piVar26 + 4);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar17 = iVar2, ___cxa_guard_acquire(), uVar43 = extraout_d2_06, iVar17 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                uRam00000001132e8dd0 = 0x3f0000003f000000;
                ___cxa_guard_release(0x1132e8de0);
                uVar43 = extraout_d2_07;
              }
              fVar15 = fRam00000001132e8ddc;
              fVar12 = fRam00000001132e8dd8;
              uVar9 = uRam00000001132e8dd0;
              uVar73 = *(undefined8 *)(piVar26 + 6);
              uVar72 = *(undefined8 *)(piVar26 + 4);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar17 = iVar2, ___cxa_guard_acquire(), uVar43 = extraout_d2_08, iVar17 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                uRam00000001132e8dd0 = 0x3f0000003f000000;
                ___cxa_guard_release(0x1132e8de0);
                uVar43 = extraout_d2_09;
              }
              fVar16 = fRam00000001132e8ddc;
              fVar13 = fRam00000001132e8dd8;
              uVar10 = uRam00000001132e8dd0;
              uVar75 = *(undefined8 *)(piVar26 + 6);
              uVar74 = *(undefined8 *)(piVar26 + 4);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar17 = iVar2, ___cxa_guard_acquire(), uVar43 = extraout_d2_10, iVar17 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                uRam00000001132e8dd0 = 0x3f0000003f000000;
                ___cxa_guard_release(0x1132e8de0);
                uVar43 = extraout_d2_11;
              }
              auVar37._0_8_ = CONCAT44((int)(fVar61 + auVar36._4_4_),(int)(fVar60 + auVar36._0_4_));
              auVar37._8_4_ = (int)(fVar62 + auVar36._8_4_);
              auVar37._12_4_ = (int)(fVar63 + auVar36._12_4_);
              auVar38._8_8_ = auVar37._8_8_;
              auVar38._0_8_ = NEON_uqxtn(auVar37._0_8_,auVar37,4);
              auVar42._0_8_ =
                   CONCAT44((int)(auVar51._4_4_ + auVar41._4_4_),
                            (int)(auVar51._0_4_ + auVar41._0_4_));
              auVar42._8_4_ = (int)(auVar51._8_4_ + auVar41._8_4_);
              auVar42._12_4_ = (int)(auVar51._12_4_ + auVar41._12_4_);
              auVar56 = NEON_uqxtn2(auVar38,auVar42,4);
              uVar35 = NEON_uqxtn(auVar56._0_8_,auVar56,2);
              auVar45._0_8_ =
                   CONCAT44((int)(fVar65 * auVar44._4_4_ + (float)((ulong)uVar8 >> 0x20)),
                            (int)(fVar64 * auVar44._0_4_ + (float)uVar8));
              auVar45._8_4_ = (int)(fVar66 * auVar44._8_4_ + fVar11);
              auVar45._12_4_ = (int)(fVar67 * auVar44._12_4_ + fVar14);
              auVar46._8_8_ = auVar45._8_8_;
              auVar46._0_8_ = NEON_uqxtn(auVar45._0_8_,auVar45,4);
              iVar17 = (int)(fVar52 * (float)((ulong)uVar40 >> 0x20) + (float)((ulong)uVar9 >> 0x20)
                            );
              auVar4[4] = (char)iVar17;
              auVar4._0_4_ = (int)(fVar33 * (float)uVar40 + (float)uVar9);
              auVar4[5] = (char)((uint)iVar17 >> 8);
              auVar4[6] = (char)((uint)iVar17 >> 0x10);
              auVar4[7] = (char)((uint)iVar17 >> 0x18);
              auVar4._8_4_ = (int)(fVar53 * (float)uVar39 + fVar12);
              auVar4._12_4_ = (int)(fVar54 * (float)((ulong)uVar39 >> 0x20) + fVar15);
              auVar44 = NEON_uqxtn2(auVar46,auVar4,4);
              uVar40 = NEON_uqxtn(auVar42._0_8_,auVar44,2);
              auVar47._0_8_ =
                   CONCAT44((int)(fVar69 * (float)((ulong)uVar72 >> 0x20) +
                                 (float)((ulong)uVar10 >> 0x20)),
                            (int)(fVar68 * (float)uVar72 + (float)uVar10));
              auVar47._8_4_ = (int)(fVar70 * (float)uVar73 + fVar13);
              auVar47._12_4_ = (int)(fVar71 * (float)((ulong)uVar73 >> 0x20) + fVar16);
              auVar48._8_8_ = auVar47._8_8_;
              auVar48._0_8_ = NEON_uqxtn(auVar47._0_8_,auVar47,4);
              iVar17 = (int)(auVar59._4_4_ * (float)((ulong)uVar74 >> 0x20) +
                            (float)((ulong)uRam00000001132e8dd0 >> 0x20));
              auVar5[4] = (char)iVar17;
              auVar5._0_4_ = (int)(auVar59._0_4_ * (float)uVar74 + (float)uRam00000001132e8dd0);
              auVar5[5] = (char)((uint)iVar17 >> 8);
              auVar5[6] = (char)((uint)iVar17 >> 0x10);
              auVar5[7] = (char)((uint)iVar17 >> 0x18);
              auVar5._8_4_ = (int)(auVar59._8_4_ * (float)uVar75 + fRam00000001132e8dd8);
              auVar5._12_4_ =
                   (int)(auVar59._12_4_ * (float)((ulong)uVar75 >> 0x20) + fRam00000001132e8ddc);
              auVar44 = NEON_uqxtn2(auVar48,auVar5,4);
              uVar43 = NEON_uqxtn(uVar43,auVar44,2);
              puVar1 = (undefined1 *)(lVar25 + uVar21);
              *puVar1 = (char)uVar35;
              puVar1[1] = (char)uVar40;
              puVar1[2] = (char)uVar43;
              puVar1[3] = (char)((ulong)uVar35 >> 8);
              puVar1[4] = (char)((ulong)uVar40 >> 8);
              puVar1[5] = (char)((ulong)uVar43 >> 8);
              puVar1[6] = (char)((ulong)uVar35 >> 0x10);
              puVar1[7] = (char)((ulong)uVar40 >> 0x10);
              puVar1[8] = (char)((ulong)uVar43 >> 0x10);
              puVar1[9] = (char)((ulong)uVar35 >> 0x18);
              puVar1[10] = (char)((ulong)uVar40 >> 0x18);
              puVar1[0xb] = (char)((ulong)uVar43 >> 0x18);
              puVar1[0xc] = (char)((ulong)uVar35 >> 0x20);
              puVar1[0xd] = (char)((ulong)uVar40 >> 0x20);
              puVar1[0xe] = (char)((ulong)uVar43 >> 0x20);
              puVar1[0xf] = (char)((ulong)uVar35 >> 0x28);
              puVar1[0x10] = (char)((ulong)uVar40 >> 0x28);
              puVar1[0x11] = (char)((ulong)uVar43 >> 0x28);
              puVar1[0x12] = (char)((ulong)uVar35 >> 0x30);
              puVar1[0x13] = (char)((ulong)uVar40 >> 0x30);
              puVar1[0x14] = (char)((ulong)uVar43 >> 0x30);
              puVar1[0x15] = (char)((ulong)uVar35 >> 0x38);
              puVar1[0x16] = (char)((ulong)uVar40 >> 0x38);
              puVar1[0x17] = (char)((ulong)uVar43 >> 0x38);
              uVar21 = uVar21 + 0x18;
              pfVar22 = pfVar22 + 0x18;
            } while ((int)uVar21 <= (int)uVar24);
            uVar21 = uVar21 & 0xffffffff;
          }
          if ((int)uVar21 < iVar7) {
            pfVar22 = (float *)(((ulong)afStack_c80 | 8) + uVar21 * 4);
            do {
              uVar24 = (uint)(long)(float)(int)pfVar22[-2] &
                       ((int)(uint)(long)(float)(int)pfVar22[-2] >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar24) {
                uVar24 = 0xff;
              }
              puVar1 = (undefined1 *)(lVar25 + uVar21);
              *puVar1 = (char)uVar24;
              uVar24 = (uint)(long)(float)(int)(pfVar22[-1] * 255.0);
              uVar24 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar24) {
                uVar24 = 0xff;
              }
              puVar1[1] = (char)uVar24;
              uVar24 = (uint)(long)(float)(int)(*pfVar22 * 255.0);
              uVar24 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar24) {
                uVar24 = 0xff;
              }
              puVar1[2] = (char)uVar24;
              uVar21 = uVar21 + 3;
              pfVar22 = pfVar22 + 3;
            } while ((int)uVar21 < iVar7);
          }
          iVar20 = iVar20 + 0x100;
          lVar25 = lVar25 + 0x300;
        } while (iVar20 < iVar19);
        lVar25 = *(long *)(param_1 + 2);
        lVar23 = *(long *)(param_1 + 4);
        fVar33 = param_2[1];
      }
      iVar19 = (int)param_4;
      fVar34 = (float)((int)fVar34 + 1);
      pbVar28 = pbVar28 + *(long *)(lVar25 + 0x50);
      lVar27 = lVar27 + *(long *)(lVar23 + 0x50);
    } while ((int)fVar34 < (int)fVar33);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (0 < iVar19) {
    uVar21 = 0;
    fVar34 = (float)param_1[2];
    iVar2 = *param_1;
    iVar20 = param_1[1];
    param_3 = param_3 + 1;
    do {
      fVar33 = pfVar18[iVar20];
      fVar53 = pfVar18[1];
      fVar52 = pfVar18[(long)iVar20 ^ 2];
      uVar30 = SUB41(fVar53,0);
      uVar31 = (undefined1)((uint)fVar53 >> 8);
      uVar32 = (undefined1)((uint)fVar53 >> 0x10);
      uVar49 = (undefined1)((uint)fVar53 >> 0x18);
      if (fVar53 <= fVar52) {
        uVar30 = SUB41(fVar52,0);
        uVar31 = (undefined1)((uint)fVar52 >> 8);
        uVar32 = (undefined1)((uint)fVar52 >> 0x10);
        uVar49 = (undefined1)((uint)fVar52 >> 0x18);
      }
      fVar54 = fVar53;
      if (fVar52 <= fVar53) {
        fVar54 = fVar52;
      }
      fVar60 = fVar33;
      if (fVar33 <= (float)CONCAT13(uVar49,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))) {
        fVar60 = (float)CONCAT13(uVar49,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
      }
      fVar61 = fVar33;
      if (fVar54 <= fVar33) {
        fVar61 = fVar54;
      }
      fVar64 = fVar60 - fVar61;
      fVar54 = (fVar60 + fVar61) * 0.5;
      fVar62 = 0.0;
      fVar63 = 0.0;
      if (1.1920929e-07 < fVar64) {
        fVar63 = fVar60 + fVar61;
        if (0.5 <= fVar54) {
          fVar63 = (2.0 - fVar60) - fVar61;
        }
        fVar63 = fVar64 / fVar63;
        fVar64 = 60.0 / fVar64;
        fVar62 = fVar64 * (fVar52 - fVar53) + 240.0;
        if (fVar60 == fVar53) {
          fVar62 = fVar64 * (fVar33 - fVar52) + 120.0;
        }
        if (fVar60 == fVar52) {
          fVar62 = (fVar53 - fVar33) * fVar64;
        }
        if (fVar62 < 0.0) {
          fVar62 = fVar62 + 360.0;
        }
      }
      pfVar18 = pfVar18 + iVar2;
      param_3[-1] = fVar34 * 0.0027777778 * fVar62;
      *param_3 = fVar54;
      param_3[1] = fVar63;
      uVar21 = uVar21 + 3;
      param_3 = param_3 + 3;
    } while (uVar21 < (uint)(iVar19 * 3));
  }
  return;
}



/* Entry: 109ad6260; end: 109ad6377;  */

void FUN_109ad6260(int *param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (0 < param_4) {
    uVar3 = 0;
    fVar5 = (float)param_1[2];
    iVar1 = *param_1;
    iVar2 = param_1[1];
    pfVar4 = (float *)(param_3 + 4);
    do {
      fVar9 = *(float *)(param_2 + (long)iVar2 * 4);
      fVar11 = *(float *)(param_2 + 4);
      fVar10 = *(float *)(param_2 + ((long)iVar2 ^ 2U) * 4);
      fVar6 = fVar11;
      if (fVar11 <= fVar10) {
        fVar6 = fVar10;
      }
      fVar8 = fVar11;
      if (fVar10 <= fVar11) {
        fVar8 = fVar10;
      }
      fVar12 = fVar9;
      if (fVar9 <= fVar6) {
        fVar12 = fVar6;
      }
      fVar6 = fVar9;
      if (fVar8 <= fVar9) {
        fVar6 = fVar8;
      }
      fVar14 = fVar12 - fVar6;
      fVar7 = (fVar12 + fVar6) * 0.5;
      fVar13 = 0.0;
      fVar8 = 0.0;
      if (1.1920929e-07 < fVar14) {
        fVar8 = fVar12 + fVar6;
        if (0.5 <= fVar7) {
          fVar8 = (2.0 - fVar12) - fVar6;
        }
        fVar8 = fVar14 / fVar8;
        fVar14 = 60.0 / fVar14;
        fVar13 = fVar14 * (fVar10 - fVar11) + 240.0;
        if (fVar12 == fVar11) {
          fVar13 = fVar14 * (fVar9 - fVar10) + 120.0;
        }
        if (fVar12 == fVar10) {
          fVar13 = (fVar11 - fVar9) * fVar14;
        }
        if (fVar13 < 0.0) {
          fVar13 = fVar13 + 360.0;
        }
      }
      param_2 = param_2 + (long)iVar1 * 4;
      pfVar4[-1] = fVar5 * 0.0027777778 * fVar13;
      *pfVar4 = fVar7;
      pfVar4[1] = fVar8;
      uVar3 = uVar3 + 3;
      pfVar4 = pfVar4 + 3;
    } while (uVar3 < (uint)(param_4 * 3));
  }
  return;
}



/* Entry: 109ad6378; end: 109ad6413;  */

void FUN_109ad6378(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *param_2;
  if (iVar4 < param_2[1]) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) +
            **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar4;
    lVar3 = *(long *)(lVar1 + 0x10) + **(long **)(lVar1 + 0x48) * (long)iVar4;
    do {
      FUN_109ad6260(*(undefined8 *)(param_1 + 0x18),lVar3,lVar2,*(undefined4 *)(lVar1 + 0xc));
      iVar4 = iVar4 + 1;
      lVar1 = *(long *)(param_1 + 8);
      lVar3 = lVar3 + *(long *)(lVar1 + 0x50);
      lVar2 = lVar2 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar4 < param_2[1]);
  }
  return;
}



/* Entry: 109ad6414; end: 109ad641b;  */

void FUN_109ad6414(void)

{
  return;
}



/* Entry: 109ad641c; end: 109ad6b37;  */

void FUN_109ad641c(int *param_1,uint *param_2,uint *param_3,ulong param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined1 *puVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  undefined1 uVar20;
  undefined1 uVar21;
  float fVar15;
  undefined8 uVar16;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar27;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  byte bVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 uVar40;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar41;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
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
  undefined8 uVar94;
  undefined8 uVar95;
  float afStack_e08 [4];
  long lStack_df8;
  undefined1 *puStack_df0;
  code *pcStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  int *piStack_cd0;
  uint *puStack_cc8;
  long lStack_cc0;
  undefined1 *puStack_cb8;
  ulong uStack_cb0;
  long lStack_ca8;
  ulong uStack_ca0;
  int iStack_c94;
  ulong uStack_c90;
  int iStack_c84;
  uint auStack_c80 [768];
  long lStack_80;
  
  iVar10 = (int)param_4;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *param_2;
  uVar6 = param_2[1];
  puStack_cc8 = param_2;
  if ((int)uVar14 < (int)uVar6) {
    lVar9 = *(long *)(param_1 + 2);
    lVar8 = *(long *)(param_1 + 4);
    puVar11 = (undefined1 *)
              (*(long *)(lVar8 + 0x10) + **(long **)(lVar8 + 0x48) * (long)(int)uVar14);
    lVar13 = *(long *)(lVar9 + 0x10) + **(long **)(lVar9 + 0x48) * (long)(int)uVar14;
    uStack_ca0 = (ulong)auStack_c80 | 4;
    iVar2 = 0x132e8de0;
    piStack_cd0 = param_1;
    do {
      if (0 < *(int *)(lVar9 + 0xc)) {
        iVar10 = 0;
        piVar12 = *(int **)(param_1 + 6);
        iVar3 = *piVar12;
        lStack_ca8 = (long)iVar3 << 3;
        lStack_cc0 = lVar13;
        puStack_cb8 = puVar11;
        uStack_cb0 = (ulong)uVar14;
        iStack_c94 = *(int *)(lVar9 + 0xc);
        do {
          uVar14 = iStack_c94 - iVar10;
          if (0xff < (int)uVar14) {
            uVar14 = 0x100;
          }
          param_4 = (ulong)uVar14;
          uVar14 = uVar14 * 3;
          uStack_c90 = (ulong)uVar14;
          uVar4 = 0;
          uVar6 = uVar14 - 0x18;
          if (-1 < (int)uVar6) {
            fVar15 = (float)piVar12[8];
            fVar78 = (float)piVar12[9];
            fVar79 = (float)piVar12[10];
            fVar69 = (float)piVar12[0xb];
            puVar7 = auStack_c80;
            do {
              pbVar1 = (byte *)(lVar13 + uVar4);
              bVar33 = pbVar1[0xc];
              bVar49 = pbVar1[0xd];
              bVar59 = pbVar1[0xe];
              bVar35 = pbVar1[0xf];
              bVar51 = pbVar1[0x10];
              bVar60 = pbVar1[0x11];
              bVar37 = pbVar1[0x12];
              bVar53 = pbVar1[0x13];
              bVar61 = pbVar1[0x14];
              bVar39 = pbVar1[0x15];
              bVar55 = pbVar1[0x16];
              bVar62 = pbVar1[0x17];
              auVar44._6_2_ = 0;
              auVar44._0_6_ =
                   (uint6)CONCAT14(pbVar1[3],(uint)CONCAT12(pbVar1[3],(ushort)*pbVar1)) &
                   0xffff0000ffff;
              auVar44[8] = pbVar1[6];
              auVar44._9_3_ = 0;
              auVar44[0xc] = pbVar1[9];
              auVar44._13_3_ = 0;
              auVar82 = NEON_ucvtf(auVar44,4);
              auVar71._6_2_ = 0;
              auVar71._0_6_ =
                   (uint6)CONCAT14(pbVar1[4],(uint)CONCAT12(pbVar1[4],(ushort)pbVar1[1])) &
                   0xffff0000ffff;
              auVar71[8] = pbVar1[7];
              auVar71._9_3_ = 0;
              auVar71[0xc] = pbVar1[10];
              auVar71._13_3_ = 0;
              auVar42 = NEON_ucvtf(auVar71,4);
              auVar43._6_2_ = 0;
              auVar43._0_6_ =
                   (uint6)CONCAT14(pbVar1[5],(uint)CONCAT12(pbVar1[5],(ushort)pbVar1[2])) &
                   0xffff0000ffff;
              auVar43[8] = pbVar1[8];
              auVar43._9_3_ = 0;
              auVar43[0xc] = pbVar1[0xb];
              auVar43._13_3_ = 0;
              auVar44 = NEON_ucvtf(auVar43,4);
              *puVar7 = auVar82._0_4_;
              puVar7[1] = (uint)(fVar15 * auVar42._0_4_);
              puVar7[2] = (uint)(fVar15 * auVar44._0_4_);
              puVar7[3] = auVar82._4_4_;
              puVar7[4] = (uint)(fVar78 * auVar42._4_4_);
              puVar7[5] = (uint)(fVar78 * auVar44._4_4_);
              puVar7[6] = auVar82._8_4_;
              puVar7[7] = (uint)(fVar79 * auVar42._8_4_);
              puVar7[8] = (uint)(fVar79 * auVar44._8_4_);
              puVar7[9] = auVar82._12_4_;
              puVar7[10] = (uint)(fVar69 * auVar42._12_4_);
              puVar7[0xb] = (uint)(fVar69 * auVar44._12_4_);
              auVar82._1_3_ = 0;
              auVar82[0] = bVar33;
              auVar82[4] = bVar35;
              auVar82._5_3_ = 0;
              auVar82[8] = bVar37;
              auVar82._9_3_ = 0;
              auVar82[0xc] = bVar39;
              auVar82._13_3_ = 0;
              auVar44 = NEON_ucvtf(auVar82,4);
              auVar70._1_3_ = 0;
              auVar70[0] = bVar49;
              auVar70[4] = bVar51;
              auVar70._5_3_ = 0;
              auVar70[8] = bVar53;
              auVar70._9_3_ = 0;
              auVar70[0xc] = bVar55;
              auVar70._13_3_ = 0;
              auVar71 = NEON_ucvtf(auVar70,4);
              auVar42._1_3_ = 0;
              auVar42[0] = bVar59;
              auVar42[4] = bVar60;
              auVar42._5_3_ = 0;
              auVar42[8] = bVar61;
              auVar42._9_3_ = 0;
              auVar42[0xc] = bVar62;
              auVar42._13_3_ = 0;
              auVar42 = NEON_ucvtf(auVar42,4);
              puVar7[0xc] = auVar44._0_4_;
              puVar7[0xd] = (uint)(fVar15 * auVar71._0_4_);
              puVar7[0xe] = (uint)(fVar15 * auVar42._0_4_);
              puVar7[0xf] = auVar44._4_4_;
              puVar7[0x10] = (uint)(fVar78 * auVar71._4_4_);
              puVar7[0x11] = (uint)(fVar78 * auVar42._4_4_);
              puVar7[0x12] = auVar44._8_4_;
              puVar7[0x13] = (uint)(fVar79 * auVar71._8_4_);
              puVar7[0x14] = (uint)(fVar79 * auVar42._8_4_);
              puVar7[0x15] = auVar44._12_4_;
              puVar7[0x16] = (uint)(fVar69 * auVar71._12_4_);
              puVar7[0x17] = (uint)(fVar69 * auVar42._12_4_);
              uVar4 = uVar4 + 0x18;
              puVar7 = puVar7 + 0x18;
            } while (uVar4 <= uVar6);
            uVar4 = uVar4 & 0xffffffff;
          }
          if ((int)uVar4 < (int)uVar14) {
            pfVar5 = (float *)(uStack_ca0 + uVar4 * 4);
            do {
              pbVar1 = (byte *)(lVar13 + uVar4);
              fVar15 = (float)NEON_ucvtf((uint)*pbVar1);
              pfVar5[-1] = fVar15;
              fVar15 = (float)NEON_ucvtf((uint)pbVar1[1]);
              *pfVar5 = fVar15 * 0.003921569;
              fVar15 = (float)NEON_ucvtf((uint)pbVar1[2]);
              pfVar5[1] = fVar15 * 0.003921569;
              uVar4 = uVar4 + 3;
              pfVar5 = pfVar5 + 3;
            } while ((long)uVar4 < (long)(int)uVar14);
          }
          param_2 = auStack_c80;
          param_3 = auStack_c80;
          iStack_c84 = iVar10;
          FUN_109ad6b38(piVar12 + 1);
          uVar14 = 0;
          if (-1 < (int)uVar6) {
            puVar7 = auStack_c80;
            lVar9 = lStack_ca8;
            do {
              auVar83._0_8_ = CONCAT44(puVar7[0xf],puVar7[0xc]);
              auVar83._8_4_ = puVar7[0x12];
              auVar83._12_4_ = puVar7[0x15];
              auVar17 = *(undefined1 (*) [16])(piVar12 + 4);
              uVar27 = CONCAT44(puVar7[0x10],puVar7[0xd]);
              uVar41 = CONCAT44(puVar7[0x16],puVar7[0x13]);
              uVar58 = CONCAT44(puVar7[0x11],puVar7[0xe]);
              uVar84 = CONCAT44(puVar7[0x17],puVar7[0x14]);
              uVar16 = CONCAT44(puVar7[3],*puVar7);
              uVar85 = CONCAT44(puVar7[9],puVar7[6]);
              uVar86 = CONCAT44(puVar7[4],puVar7[1]);
              uVar87 = CONCAT44(puVar7[10],puVar7[7]);
              uVar88 = CONCAT44(puVar7[5],puVar7[2]);
              uVar89 = CONCAT44(puVar7[0xb],puVar7[8]);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_cf8 = auVar83._8_8_;
                uStack_d38 = auVar17._8_8_;
                uStack_d40 = auVar17._0_8_;
                uStack_d30 = CONCAT44(puVar7[3],*puVar7);
                uStack_d28 = CONCAT44(puVar7[9],puVar7[6]);
                uStack_d20 = CONCAT44(puVar7[4],puVar7[1]);
                uStack_d18 = CONCAT44(puVar7[10],puVar7[7]);
                uStack_d10 = CONCAT44(puVar7[5],puVar7[2]);
                uStack_d08 = CONCAT44(puVar7[0xb],puVar7[8]);
                uStack_d00 = auVar83._0_8_;
                uStack_cf0 = CONCAT44(puVar7[0x10],puVar7[0xd]);
                uStack_ce8 = CONCAT44(puVar7[0x16],puVar7[0x13]);
                uStack_ce0 = CONCAT44(puVar7[0x11],puVar7[0xe]);
                uStack_cd8 = CONCAT44(puVar7[0x17],puVar7[0x14]);
                iVar10 = iVar2;
                ___cxa_guard_acquire();
                auVar17._8_8_ = uStack_d38;
                auVar17._0_8_ = uStack_d40;
                auVar83._8_8_ = uStack_cf8;
                auVar83._0_8_ = uStack_d00;
                lVar9 = lStack_ca8;
                uVar27 = uStack_cf0;
                uVar41 = uStack_ce8;
                uVar58 = uStack_ce0;
                uVar84 = uStack_cd8;
                uVar16 = uStack_d30;
                uVar85 = uStack_d28;
                uVar86 = uStack_d20;
                uVar87 = uStack_d18;
                uVar88 = uStack_d10;
                uVar89 = uStack_d08;
                if (iVar10 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar17._8_8_ = uStack_d38;
                  auVar17._0_8_ = uStack_d40;
                  auVar83._8_8_ = uStack_cf8;
                  auVar83._0_8_ = uStack_d00;
                  lVar9 = lStack_ca8;
                  uVar27 = uStack_cf0;
                  uVar41 = uStack_ce8;
                  uVar58 = uStack_ce0;
                  uVar84 = uStack_cd8;
                  uVar16 = uStack_d30;
                  uVar85 = uStack_d28;
                  uVar86 = uStack_d20;
                  uVar87 = uStack_d18;
                  uVar88 = uStack_d10;
                  uVar89 = uStack_d08;
                }
              }
              auVar45._8_4_ = fRam00000001132e8dd8;
              auVar45._0_8_ = uRam00000001132e8dd0;
              auVar45._12_4_ = fRam00000001132e8ddc;
              auVar28 = *(undefined1 (*) [16])(piVar12 + 4);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_d00 = auVar83._0_8_;
                uStack_cf8 = auVar83._8_8_;
                uStack_d48 = auVar28._8_8_;
                uStack_d50 = auVar28._0_8_;
                uStack_d38 = auVar17._8_8_;
                uStack_d40 = auVar17._0_8_;
                uStack_d58 = auVar45._8_8_;
                uStack_d60 = uRam00000001132e8dd0;
                uStack_d30 = uVar16;
                uStack_d28 = uVar85;
                uStack_d20 = uVar86;
                uStack_d18 = uVar87;
                uStack_d10 = uVar88;
                uStack_d08 = uVar89;
                uStack_cf0 = uVar27;
                uStack_ce8 = uVar41;
                uStack_ce0 = uVar58;
                uStack_cd8 = uVar84;
                iVar10 = iVar2;
                ___cxa_guard_acquire();
                auVar45._8_8_ = uStack_d58;
                auVar45._0_8_ = uStack_d60;
                auVar28._8_8_ = uStack_d48;
                auVar28._0_8_ = uStack_d50;
                auVar17._8_8_ = uStack_d38;
                auVar17._0_8_ = uStack_d40;
                auVar83._8_8_ = uStack_cf8;
                auVar83._0_8_ = uStack_d00;
                lVar9 = lStack_ca8;
                uVar27 = uStack_cf0;
                uVar41 = uStack_ce8;
                uVar58 = uStack_ce0;
                uVar84 = uStack_cd8;
                uVar16 = uStack_d30;
                uVar85 = uStack_d28;
                uVar86 = uStack_d20;
                uVar87 = uStack_d18;
                uVar88 = uStack_d10;
                uVar89 = uStack_d08;
                if (iVar10 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar45._8_8_ = uStack_d58;
                  auVar45._0_8_ = uStack_d60;
                  auVar28._8_8_ = uStack_d48;
                  auVar28._0_8_ = uStack_d50;
                  auVar17._8_8_ = uStack_d38;
                  auVar17._0_8_ = uStack_d40;
                  auVar83._8_8_ = uStack_cf8;
                  auVar83._0_8_ = uStack_d00;
                  lVar9 = lStack_ca8;
                  uVar27 = uStack_cf0;
                  uVar41 = uStack_ce8;
                  uVar58 = uStack_ce0;
                  uVar84 = uStack_cd8;
                  uVar16 = uStack_d30;
                  uVar85 = uStack_d28;
                  uVar86 = uStack_d20;
                  uVar87 = uStack_d18;
                  uVar88 = uStack_d10;
                  uVar89 = uStack_d08;
                }
              }
              auVar64 = *(undefined1 (*) [16])(piVar12 + 4);
              uVar57 = uRam00000001132e8dd0;
              uVar63 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_d00 = auVar83._0_8_;
                uStack_cf8 = auVar83._8_8_;
                uStack_d48 = auVar28._8_8_;
                uStack_d50 = auVar28._0_8_;
                uStack_d38 = auVar17._8_8_;
                uStack_d40 = auVar17._0_8_;
                uStack_d68 = auVar64._8_8_;
                uStack_d70 = auVar64._0_8_;
                uStack_d58 = auVar45._8_8_;
                uStack_d60 = auVar45._0_8_;
                uStack_d80 = uRam00000001132e8dd0;
                uStack_d78 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
                uStack_d30 = uVar16;
                uStack_d28 = uVar85;
                uStack_d20 = uVar86;
                uStack_d18 = uVar87;
                uStack_d10 = uVar88;
                uStack_d08 = uVar89;
                uStack_cf0 = uVar27;
                uStack_ce8 = uVar41;
                uStack_ce0 = uVar58;
                uStack_cd8 = uVar84;
                iVar10 = iVar2;
                ___cxa_guard_acquire();
                auVar64._8_8_ = uStack_d68;
                auVar64._0_8_ = uStack_d70;
                auVar45._8_8_ = uStack_d58;
                auVar45._0_8_ = uStack_d60;
                auVar28._8_8_ = uStack_d48;
                auVar28._0_8_ = uStack_d50;
                auVar17._8_8_ = uStack_d38;
                auVar17._0_8_ = uStack_d40;
                auVar83._8_8_ = uStack_cf8;
                auVar83._0_8_ = uStack_d00;
                lVar9 = lStack_ca8;
                uVar57 = uStack_d80;
                uVar63 = uStack_d78;
                uVar27 = uStack_cf0;
                uVar41 = uStack_ce8;
                uVar58 = uStack_ce0;
                uVar84 = uStack_cd8;
                uVar16 = uStack_d30;
                uVar85 = uStack_d28;
                uVar86 = uStack_d20;
                uVar87 = uStack_d18;
                uVar88 = uStack_d10;
                uVar89 = uStack_d08;
                if (iVar10 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar64._8_8_ = uStack_d68;
                  auVar64._0_8_ = uStack_d70;
                  auVar45._8_8_ = uStack_d58;
                  auVar45._0_8_ = uStack_d60;
                  auVar28._8_8_ = uStack_d48;
                  auVar28._0_8_ = uStack_d50;
                  auVar17._8_8_ = uStack_d38;
                  auVar17._0_8_ = uStack_d40;
                  auVar83._8_8_ = uStack_cf8;
                  auVar83._0_8_ = uStack_d00;
                  lVar9 = lStack_ca8;
                  uVar57 = uStack_d80;
                  uVar63 = uStack_d78;
                  uVar27 = uStack_cf0;
                  uVar41 = uStack_ce8;
                  uVar58 = uStack_ce0;
                  uVar84 = uStack_cd8;
                  uVar16 = uStack_d30;
                  uVar85 = uStack_d28;
                  uVar86 = uStack_d20;
                  uVar87 = uStack_d18;
                  uVar88 = uStack_d10;
                  uVar89 = uStack_d08;
                }
              }
              auVar72 = *(undefined1 (*) [16])(piVar12 + 4);
              uVar76 = uRam00000001132e8dd0;
              uVar77 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_d00 = auVar83._0_8_;
                uStack_cf8 = auVar83._8_8_;
                uStack_d48 = auVar28._8_8_;
                uStack_d50 = auVar28._0_8_;
                uStack_d38 = auVar17._8_8_;
                uStack_d40 = auVar17._0_8_;
                uStack_d68 = auVar64._8_8_;
                uStack_d70 = auVar64._0_8_;
                uStack_d58 = auVar45._8_8_;
                uStack_d60 = auVar45._0_8_;
                uStack_d88 = auVar72._8_8_;
                uStack_d90 = auVar72._0_8_;
                uStack_da0 = uRam00000001132e8dd0;
                uStack_d98 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
                uStack_d80 = uVar57;
                uStack_d78 = uVar63;
                uStack_d30 = uVar16;
                uStack_d28 = uVar85;
                uStack_d20 = uVar86;
                uStack_d18 = uVar87;
                uStack_d10 = uVar88;
                uStack_d08 = uVar89;
                uStack_cf0 = uVar27;
                uStack_ce8 = uVar41;
                uStack_ce0 = uVar58;
                uStack_cd8 = uVar84;
                iVar10 = iVar2;
                ___cxa_guard_acquire();
                auVar72._8_8_ = uStack_d88;
                auVar72._0_8_ = uStack_d90;
                auVar64._8_8_ = uStack_d68;
                auVar64._0_8_ = uStack_d70;
                auVar45._8_8_ = uStack_d58;
                auVar45._0_8_ = uStack_d60;
                auVar28._8_8_ = uStack_d48;
                auVar28._0_8_ = uStack_d50;
                auVar17._8_8_ = uStack_d38;
                auVar17._0_8_ = uStack_d40;
                auVar83._8_8_ = uStack_cf8;
                auVar83._0_8_ = uStack_d00;
                lVar9 = lStack_ca8;
                uVar57 = uStack_d80;
                uVar63 = uStack_d78;
                uVar76 = uStack_da0;
                uVar77 = uStack_d98;
                uVar27 = uStack_cf0;
                uVar41 = uStack_ce8;
                uVar58 = uStack_ce0;
                uVar84 = uStack_cd8;
                uVar16 = uStack_d30;
                uVar85 = uStack_d28;
                uVar86 = uStack_d20;
                uVar87 = uStack_d18;
                uVar88 = uStack_d10;
                uVar89 = uStack_d08;
                if (iVar10 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar72._8_8_ = uStack_d88;
                  auVar72._0_8_ = uStack_d90;
                  auVar64._8_8_ = uStack_d68;
                  auVar64._0_8_ = uStack_d70;
                  auVar45._8_8_ = uStack_d58;
                  auVar45._0_8_ = uStack_d60;
                  auVar28._8_8_ = uStack_d48;
                  auVar28._0_8_ = uStack_d50;
                  auVar17._8_8_ = uStack_d38;
                  auVar17._0_8_ = uStack_d40;
                  auVar83._8_8_ = uStack_cf8;
                  auVar83._0_8_ = uStack_d00;
                  lVar9 = lStack_ca8;
                  uVar57 = uStack_d80;
                  uVar63 = uStack_d78;
                  uVar76 = uStack_da0;
                  uVar77 = uStack_d98;
                  uVar27 = uStack_cf0;
                  uVar41 = uStack_ce8;
                  uVar58 = uStack_ce0;
                  uVar84 = uStack_cd8;
                  uVar16 = uStack_d30;
                  uVar85 = uStack_d28;
                  uVar86 = uStack_d20;
                  uVar87 = uStack_d18;
                  uVar88 = uStack_d10;
                  uVar89 = uStack_d08;
                }
              }
              uVar80 = *(undefined8 *)(piVar12 + 4);
              uVar81 = *(undefined8 *)(piVar12 + 6);
              uVar90 = uRam00000001132e8dd0;
              uVar91 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_d00 = auVar83._0_8_;
                uStack_cf8 = auVar83._8_8_;
                uStack_d48 = auVar28._8_8_;
                uStack_d50 = auVar28._0_8_;
                uStack_d38 = auVar17._8_8_;
                uStack_d40 = auVar17._0_8_;
                uStack_d68 = auVar64._8_8_;
                uStack_d70 = auVar64._0_8_;
                uStack_d58 = auVar45._8_8_;
                uStack_d60 = auVar45._0_8_;
                uStack_d88 = auVar72._8_8_;
                uStack_d90 = auVar72._0_8_;
                uStack_dc0 = uRam00000001132e8dd0;
                uStack_db8 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
                uStack_db0 = *(undefined8 *)(piVar12 + 4);
                uStack_da8 = *(undefined8 *)(piVar12 + 6);
                uStack_da0 = uVar76;
                uStack_d98 = uVar77;
                uStack_d80 = uVar57;
                uStack_d78 = uVar63;
                uStack_d30 = uVar16;
                uStack_d28 = uVar85;
                uStack_d20 = uVar86;
                uStack_d18 = uVar87;
                uStack_d10 = uVar88;
                uStack_d08 = uVar89;
                uStack_cf0 = uVar27;
                uStack_ce8 = uVar41;
                uStack_ce0 = uVar58;
                uStack_cd8 = uVar84;
                iVar10 = iVar2;
                ___cxa_guard_acquire();
                auVar72._8_8_ = uStack_d88;
                auVar72._0_8_ = uStack_d90;
                auVar64._8_8_ = uStack_d68;
                auVar64._0_8_ = uStack_d70;
                auVar45._8_8_ = uStack_d58;
                auVar45._0_8_ = uStack_d60;
                auVar28._8_8_ = uStack_d48;
                auVar28._0_8_ = uStack_d50;
                auVar17._8_8_ = uStack_d38;
                auVar17._0_8_ = uStack_d40;
                auVar83._8_8_ = uStack_cf8;
                auVar83._0_8_ = uStack_d00;
                lVar9 = lStack_ca8;
                uVar57 = uStack_d80;
                uVar63 = uStack_d78;
                uVar76 = uStack_da0;
                uVar77 = uStack_d98;
                uVar80 = uStack_db0;
                uVar81 = uStack_da8;
                uVar27 = uStack_cf0;
                uVar41 = uStack_ce8;
                uVar58 = uStack_ce0;
                uVar84 = uStack_cd8;
                uVar16 = uStack_d30;
                uVar85 = uStack_d28;
                uVar86 = uStack_d20;
                uVar87 = uStack_d18;
                uVar88 = uStack_d10;
                uVar89 = uStack_d08;
                uVar90 = uStack_dc0;
                uVar91 = uStack_db8;
                if (iVar10 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar72._8_8_ = uStack_d88;
                  auVar72._0_8_ = uStack_d90;
                  auVar64._8_8_ = uStack_d68;
                  auVar64._0_8_ = uStack_d70;
                  auVar45._8_8_ = uStack_d58;
                  auVar45._0_8_ = uStack_d60;
                  auVar28._8_8_ = uStack_d48;
                  auVar28._0_8_ = uStack_d50;
                  auVar17._8_8_ = uStack_d38;
                  auVar17._0_8_ = uStack_d40;
                  auVar83._8_8_ = uStack_cf8;
                  auVar83._0_8_ = uStack_d00;
                  lVar9 = lStack_ca8;
                  uVar57 = uStack_d80;
                  uVar63 = uStack_d78;
                  uVar76 = uStack_da0;
                  uVar77 = uStack_d98;
                  uVar80 = uStack_db0;
                  uVar81 = uStack_da8;
                  uVar27 = uStack_cf0;
                  uVar41 = uStack_ce8;
                  uVar58 = uStack_ce0;
                  uVar84 = uStack_cd8;
                  uVar16 = uStack_d30;
                  uVar85 = uStack_d28;
                  uVar86 = uStack_d20;
                  uVar87 = uStack_d18;
                  uVar88 = uStack_d10;
                  uVar89 = uStack_d08;
                  uVar90 = uStack_dc0;
                  uVar91 = uStack_db8;
                }
              }
              uVar92 = *(undefined8 *)(piVar12 + 4);
              uVar93 = *(undefined8 *)(piVar12 + 6);
              uVar94 = uRam00000001132e8dd0;
              uVar95 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_d00 = auVar83._0_8_;
                uStack_cf8 = auVar83._8_8_;
                uStack_d48 = auVar28._8_8_;
                uStack_d50 = auVar28._0_8_;
                uStack_d38 = auVar17._8_8_;
                uStack_d40 = auVar17._0_8_;
                uStack_d68 = auVar64._8_8_;
                uStack_d70 = auVar64._0_8_;
                uStack_d58 = auVar45._8_8_;
                uStack_d60 = auVar45._0_8_;
                uStack_d88 = auVar72._8_8_;
                uStack_d90 = auVar72._0_8_;
                uStack_de0 = uRam00000001132e8dd0;
                uStack_dd8 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
                uStack_dd0 = *(undefined8 *)(piVar12 + 4);
                uStack_dc8 = *(undefined8 *)(piVar12 + 6);
                uStack_dc0 = uVar90;
                uStack_db8 = uVar91;
                uStack_db0 = uVar80;
                uStack_da8 = uVar81;
                uStack_da0 = uVar76;
                uStack_d98 = uVar77;
                uStack_d80 = uVar57;
                uStack_d78 = uVar63;
                uStack_d30 = uVar16;
                uStack_d28 = uVar85;
                uStack_d20 = uVar86;
                uStack_d18 = uVar87;
                uStack_d10 = uVar88;
                uStack_d08 = uVar89;
                uStack_cf0 = uVar27;
                uStack_ce8 = uVar41;
                uStack_ce0 = uVar58;
                uStack_cd8 = uVar84;
                iVar10 = iVar2;
                ___cxa_guard_acquire();
                auVar72._8_8_ = uStack_d88;
                auVar72._0_8_ = uStack_d90;
                auVar64._8_8_ = uStack_d68;
                auVar64._0_8_ = uStack_d70;
                auVar45._8_8_ = uStack_d58;
                auVar45._0_8_ = uStack_d60;
                auVar28._8_8_ = uStack_d48;
                auVar28._0_8_ = uStack_d50;
                auVar17._8_8_ = uStack_d38;
                auVar17._0_8_ = uStack_d40;
                auVar83._8_8_ = uStack_cf8;
                auVar83._0_8_ = uStack_d00;
                lVar9 = lStack_ca8;
                uVar57 = uStack_d80;
                uVar63 = uStack_d78;
                uVar76 = uStack_da0;
                uVar77 = uStack_d98;
                uVar80 = uStack_db0;
                uVar81 = uStack_da8;
                uVar27 = uStack_cf0;
                uVar41 = uStack_ce8;
                uVar58 = uStack_ce0;
                uVar84 = uStack_cd8;
                uVar16 = uStack_d30;
                uVar85 = uStack_d28;
                uVar86 = uStack_d20;
                uVar87 = uStack_d18;
                uVar88 = uStack_d10;
                uVar89 = uStack_d08;
                uVar90 = uStack_dc0;
                uVar91 = uStack_db8;
                uVar92 = uStack_dd0;
                uVar93 = uStack_dc8;
                uVar94 = uStack_de0;
                uVar95 = uStack_dd8;
                if (iVar10 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar72._8_8_ = uStack_d88;
                  auVar72._0_8_ = uStack_d90;
                  auVar64._8_8_ = uStack_d68;
                  auVar64._0_8_ = uStack_d70;
                  auVar45._8_8_ = uStack_d58;
                  auVar45._0_8_ = uStack_d60;
                  auVar28._8_8_ = uStack_d48;
                  auVar28._0_8_ = uStack_d50;
                  auVar17._8_8_ = uStack_d38;
                  auVar17._0_8_ = uStack_d40;
                  auVar83._8_8_ = uStack_cf8;
                  auVar83._0_8_ = uStack_d00;
                  lVar9 = lStack_ca8;
                  uVar57 = uStack_d80;
                  uVar63 = uStack_d78;
                  uVar76 = uStack_da0;
                  uVar77 = uStack_d98;
                  uVar80 = uStack_db0;
                  uVar81 = uStack_da8;
                  uVar27 = uStack_cf0;
                  uVar41 = uStack_ce8;
                  uVar58 = uStack_ce0;
                  uVar84 = uStack_cd8;
                  uVar16 = uStack_d30;
                  uVar85 = uStack_d28;
                  uVar86 = uStack_d20;
                  uVar87 = uStack_d18;
                  uVar88 = uStack_d10;
                  uVar89 = uStack_d08;
                  uVar90 = uStack_dc0;
                  uVar91 = uStack_db8;
                  uVar92 = uStack_dd0;
                  uVar93 = uStack_dc8;
                  uVar94 = uStack_de0;
                  uVar95 = uStack_dd8;
                }
              }
              auVar18._0_8_ =
                   CONCAT44((int)((float)((ulong)uVar16 >> 0x20) * auVar17._4_4_ + auVar45._4_4_),
                            (int)((float)uVar16 * auVar17._0_4_ + auVar45._0_4_));
              auVar18._8_4_ = (int)((float)uVar85 * auVar17._8_4_ + auVar45._8_4_);
              auVar18._12_4_ =
                   (int)((float)((ulong)uVar85 >> 0x20) * auVar17._12_4_ + auVar45._12_4_);
              auVar19._8_8_ = auVar18._8_8_;
              auVar19._0_8_ = NEON_uqxtn(auVar18._0_8_,auVar18,4);
              auVar29._0_8_ =
                   CONCAT44((int)(auVar83._4_4_ * auVar28._4_4_ + (float)((ulong)uVar57 >> 0x20)),
                            (int)(auVar83._0_4_ * auVar28._0_4_ + (float)uVar57));
              auVar29._8_4_ = (int)(auVar83._8_4_ * auVar28._8_4_ + (float)uVar63);
              auVar29._12_4_ =
                   (int)(auVar83._12_4_ * auVar28._12_4_ + (float)((ulong)uVar63 >> 0x20));
              auVar42 = NEON_uqxtn2(auVar19,auVar29,4);
              uVar16 = NEON_uqxtn(auVar42._0_8_,auVar42,2);
              auVar65._0_8_ =
                   CONCAT44((int)((float)((ulong)uVar86 >> 0x20) * auVar64._4_4_ +
                                 (float)((ulong)uVar76 >> 0x20)),
                            (int)((float)uVar86 * auVar64._0_4_ + (float)uVar76));
              auVar65._8_4_ = (int)((float)uVar87 * auVar64._8_4_ + (float)uVar77);
              auVar65._12_4_ =
                   (int)((float)((ulong)uVar87 >> 0x20) * auVar64._12_4_ +
                        (float)((ulong)uVar77 >> 0x20));
              auVar66._8_8_ = auVar65._8_8_;
              auVar66._0_8_ = NEON_uqxtn(auVar65._0_8_,auVar65,4);
              auVar73._0_4_ = (int)((float)uVar27 * auVar72._0_4_ + (float)uVar90);
              auVar73._4_4_ =
                   (int)((float)((ulong)uVar27 >> 0x20) * auVar72._4_4_ +
                        (float)((ulong)uVar90 >> 0x20));
              auVar73._8_4_ = (int)((float)uVar41 * auVar72._8_4_ + (float)uVar91);
              auVar73._12_4_ =
                   (int)((float)((ulong)uVar41 >> 0x20) * auVar72._12_4_ +
                        (float)((ulong)uVar91 >> 0x20));
              auVar42 = NEON_uqxtn2(auVar66,auVar73,4);
              uVar27 = NEON_uqxtn(auVar29._0_8_,auVar42,2);
              auVar67._0_8_ =
                   CONCAT44((int)((float)((ulong)uVar88 >> 0x20) * (float)((ulong)uVar80 >> 0x20) +
                                 (float)((ulong)uVar94 >> 0x20)),
                            (int)((float)uVar88 * (float)uVar80 + (float)uVar94));
              auVar67._8_4_ = (int)((float)uVar89 * (float)uVar81 + (float)uVar95);
              auVar67._12_4_ =
                   (int)((float)((ulong)uVar89 >> 0x20) * (float)((ulong)uVar81 >> 0x20) +
                        (float)((ulong)uVar95 >> 0x20));
              auVar68._8_8_ = auVar67._8_8_;
              auVar68._0_8_ = NEON_uqxtn(auVar67._0_8_,auVar67,4);
              auVar74._0_4_ = (int)((float)uVar58 * (float)uVar92 + (float)uRam00000001132e8dd0);
              auVar74._4_4_ =
                   (int)((float)((ulong)uVar58 >> 0x20) * (float)((ulong)uVar92 >> 0x20) +
                        (float)((ulong)uRam00000001132e8dd0 >> 0x20));
              auVar74._8_4_ = (int)((float)uVar84 * (float)uVar93 + fRam00000001132e8dd8);
              auVar74._12_4_ =
                   (int)((float)((ulong)uVar84 >> 0x20) * (float)((ulong)uVar93 >> 0x20) +
                        fRam00000001132e8ddc);
              auVar42 = NEON_uqxtn2(auVar68,auVar74,4);
              uVar41 = NEON_uqxtn(auVar45._0_8_,auVar42,2);
              uVar20 = (undefined1)((ulong)uVar16 >> 8);
              uVar21 = (undefined1)((ulong)uVar16 >> 0x10);
              uVar22 = (undefined1)((ulong)uVar16 >> 0x18);
              uVar23 = (undefined1)((ulong)uVar16 >> 0x20);
              uVar24 = (undefined1)((ulong)uVar16 >> 0x28);
              uVar25 = (undefined1)((ulong)uVar16 >> 0x30);
              uVar26 = (undefined1)((ulong)uVar16 >> 0x38);
              uVar30 = (undefined1)((ulong)uVar27 >> 8);
              uVar31 = (undefined1)((ulong)uVar27 >> 0x10);
              uVar32 = (undefined1)((ulong)uVar27 >> 0x18);
              uVar34 = (undefined1)((ulong)uVar27 >> 0x20);
              uVar36 = (undefined1)((ulong)uVar27 >> 0x28);
              uVar38 = (undefined1)((ulong)uVar27 >> 0x30);
              uVar40 = (undefined1)((ulong)uVar27 >> 0x38);
              uVar46 = (undefined1)((ulong)uVar41 >> 8);
              uVar47 = (undefined1)((ulong)uVar41 >> 0x10);
              uVar48 = (undefined1)((ulong)uVar41 >> 0x18);
              uVar50 = (undefined1)((ulong)uVar41 >> 0x20);
              uVar52 = (undefined1)((ulong)uVar41 >> 0x28);
              uVar54 = (undefined1)((ulong)uVar41 >> 0x30);
              uVar56 = (undefined1)((ulong)uVar41 >> 0x38);
              if (iVar3 == 4) {
                uVar58 = *(undefined8 *)(piVar12 + 0xc);
                *puVar11 = (char)uVar16;
                puVar11[1] = (char)uVar27;
                puVar11[2] = (char)uVar41;
                puVar11[3] = (char)uVar58;
                puVar11[4] = uVar20;
                puVar11[5] = uVar30;
                puVar11[6] = uVar46;
                puVar11[7] = (char)((ulong)uVar58 >> 8);
                puVar11[8] = uVar21;
                puVar11[9] = uVar31;
                puVar11[10] = uVar47;
                puVar11[0xb] = (char)((ulong)uVar58 >> 0x10);
                puVar11[0xc] = uVar22;
                puVar11[0xd] = uVar32;
                puVar11[0xe] = uVar48;
                puVar11[0xf] = (char)((ulong)uVar58 >> 0x18);
                puVar11[0x10] = uVar23;
                puVar11[0x11] = uVar34;
                puVar11[0x12] = uVar50;
                puVar11[0x13] = (char)((ulong)uVar58 >> 0x20);
                puVar11[0x14] = uVar24;
                puVar11[0x15] = uVar36;
                puVar11[0x16] = uVar52;
                puVar11[0x17] = (char)((ulong)uVar58 >> 0x28);
                puVar11[0x18] = uVar25;
                puVar11[0x19] = uVar38;
                puVar11[0x1a] = uVar54;
                puVar11[0x1b] = (char)((ulong)uVar58 >> 0x30);
                puVar11[0x1c] = uVar26;
                puVar11[0x1d] = uVar40;
                puVar11[0x1e] = uVar56;
                puVar11[0x1f] = (char)((ulong)uVar58 >> 0x38);
              }
              else {
                *puVar11 = (char)uVar16;
                puVar11[1] = (char)uVar27;
                puVar11[2] = (char)uVar41;
                puVar11[3] = uVar20;
                puVar11[4] = uVar30;
                puVar11[5] = uVar46;
                puVar11[6] = uVar21;
                puVar11[7] = uVar31;
                puVar11[8] = uVar47;
                puVar11[9] = uVar22;
                puVar11[10] = uVar32;
                puVar11[0xb] = uVar48;
                puVar11[0xc] = uVar23;
                puVar11[0xd] = uVar34;
                puVar11[0xe] = uVar50;
                puVar11[0xf] = uVar24;
                puVar11[0x10] = uVar36;
                puVar11[0x11] = uVar52;
                puVar11[0x12] = uVar25;
                puVar11[0x13] = uVar38;
                puVar11[0x14] = uVar54;
                puVar11[0x15] = uVar26;
                puVar11[0x16] = uVar40;
                puVar11[0x17] = uVar56;
              }
              puVar11 = puVar11 + lVar9;
              uVar14 = uVar14 + 0x18;
              puVar7 = puVar7 + 0x18;
            } while ((int)uVar14 <= (int)uVar6);
          }
          if ((int)uVar14 < (int)uStack_c90) {
            pfVar5 = (float *)(uStack_ca0 + (ulong)uVar14 * 4);
            do {
              uVar6 = (uint)(long)(float)(int)(pfVar5[-1] * 255.0);
              uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar6) {
                uVar6 = 0xff;
              }
              *puVar11 = (char)uVar6;
              uVar6 = (uint)(long)(float)(int)(*pfVar5 * 255.0);
              uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar6) {
                uVar6 = 0xff;
              }
              puVar11[1] = (char)uVar6;
              uVar6 = (uint)(long)(float)(int)(pfVar5[1] * 255.0);
              uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar6) {
                uVar6 = 0xff;
              }
              puVar11[2] = (char)uVar6;
              if (iVar3 == 4) {
                puVar11[3] = 0xff;
              }
              pfVar5 = pfVar5 + 3;
              puVar11 = puVar11 + iVar3;
              uVar14 = uVar14 + 3;
            } while ((int)uVar14 < (int)uStack_c90);
          }
          iVar10 = iStack_c84 + 0x100;
          lVar13 = lVar13 + 0x300;
        } while (iVar10 < iStack_c94);
        lVar9 = *(long *)(piStack_cd0 + 2);
        lVar8 = *(long *)(piStack_cd0 + 4);
        uVar6 = puStack_cc8[1];
        uVar14 = (uint)uStack_cb0;
        param_1 = piStack_cd0;
        puVar11 = puStack_cb8;
        lVar13 = lStack_cc0;
      }
      iVar10 = (int)param_4;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + *(long *)(lVar9 + 0x50);
      puVar11 = puVar11 + *(long *)(lVar8 + 0x50);
    } while ((int)uVar14 < (int)uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puStack_df0 = &stack0xfffffffffffffff0;
  pcStack_de8 = FUN_109ad6b38;
  lStack_df8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < iVar10) {
    uVar4 = 0;
    fVar15 = (float)param_1[2];
    iVar2 = *param_1;
    iVar3 = param_1[1];
    do {
      pfVar5 = (float *)(param_2 + uVar4);
      fVar75 = pfVar5[1];
      fVar69 = pfVar5[2];
      fVar78 = fVar69;
      fVar79 = fVar69;
      if (fVar75 != 0.0) {
        fVar78 = fVar15 * *pfVar5;
        if (0.0 <= fVar78) {
          for (; 6.0 <= fVar78; fVar78 = fVar78 + -6.0) {
          }
        }
        else {
          do {
            fVar78 = fVar78 + 6.0;
          } while (fVar78 < 0.0);
        }
        uVar14 = (int)fVar78 - (uint)(fVar78 < (float)(int)fVar78);
        fVar79 = 0.0;
        if (uVar14 < 6) {
          fVar79 = fVar78 - (float)(int)uVar14;
        }
        uVar6 = 0;
        if (uVar14 < 6) {
          uVar6 = uVar14;
        }
        afStack_e08[0] = fVar69;
        afStack_e08[1] = fVar69 * (1.0 - fVar75);
        afStack_e08[2] = fVar69 * (1.0 - fVar79 * fVar75);
        afStack_e08[3] = fVar69 * (1.0 - (1.0 - fVar79) * fVar75);
        lVar13 = (ulong)uVar6 * 0xc;
        fVar69 = afStack_e08[*(int *)(&UNK_10e02f8a0 + lVar13)];
        fVar78 = afStack_e08[*(int *)(&UNK_10e02f8a4 + lVar13)];
        fVar79 = afStack_e08[*(int *)(&UNK_10e02f89c + lVar13)];
      }
      param_3[iVar3] = (uint)fVar79;
      param_3[1] = (uint)fVar69;
      param_3[(long)iVar3 ^ 2] = (uint)fVar78;
      if (iVar2 == 4) {
        param_3[3] = 0x3f800000;
      }
      uVar4 = uVar4 + 3;
      param_3 = param_3 + iVar2;
    } while (uVar4 < (uint)(iVar10 * 3));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_df8) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109ad6b38; end: 109ad6c97;  */

void FUN_109ad6b38(int *param_1,long param_2,long param_3,int param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float afStack_28 [4];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < param_4) {
    uVar7 = 0;
    fVar8 = (float)param_1[2];
    iVar3 = *param_1;
    iVar4 = param_1[1];
    do {
      pfVar1 = (float *)(param_2 + uVar7 * 4);
      fVar10 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar11 = fVar9;
      fVar12 = fVar9;
      if (fVar10 != 0.0) {
        fVar11 = fVar8 * *pfVar1;
        if (0.0 <= fVar11) {
          for (; 6.0 <= fVar11; fVar11 = fVar11 + -6.0) {
          }
        }
        else {
          do {
            fVar11 = fVar11 + 6.0;
          } while (fVar11 < 0.0);
        }
        uVar5 = (int)fVar11 - (uint)(fVar11 < (float)(int)fVar11);
        fVar12 = 0.0;
        if (uVar5 < 6) {
          fVar12 = fVar11 - (float)(int)uVar5;
        }
        uVar2 = 0;
        if (uVar5 < 6) {
          uVar2 = uVar5;
        }
        afStack_28[0] = fVar9;
        afStack_28[1] = fVar9 * (1.0 - fVar10);
        afStack_28[2] = fVar9 * (1.0 - fVar12 * fVar10);
        afStack_28[3] = fVar9 * (1.0 - (1.0 - fVar12) * fVar10);
        lVar6 = (ulong)uVar2 * 0xc;
        fVar9 = afStack_28[*(int *)(&UNK_10e02f89c + lVar6)];
        fVar11 = afStack_28[*(int *)(&UNK_10e02f8a0 + lVar6)];
        fVar12 = afStack_28[*(int *)(&UNK_10e02f8a4 + lVar6)];
      }
      *(float *)(param_3 + (long)iVar4 * 4) = fVar9;
      *(float *)(param_3 + 4) = fVar11;
      *(float *)(param_3 + ((long)iVar4 ^ 2U) * 4) = fVar12;
      if (iVar3 == 4) {
        *(undefined4 *)(param_3 + 0xc) = 0x3f800000;
      }
      uVar7 = uVar7 + 3;
      param_3 = param_3 + (long)iVar3 * 4;
    } while (uVar7 < (uint)(param_4 * 3));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109ad6c98; end: 109ad6c9f;  */

void FUN_109ad6c98(void)

{
  return;
}



/* Entry: 109ad6ca0; end: 109ad6d3b;  */

void FUN_109ad6ca0(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *param_2;
  if (iVar4 < param_2[1]) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) +
            **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar4;
    lVar3 = *(long *)(lVar1 + 0x10) + **(long **)(lVar1 + 0x48) * (long)iVar4;
    do {
      FUN_109ad6b38(*(undefined8 *)(param_1 + 0x18),lVar3,lVar2,*(undefined4 *)(lVar1 + 0xc));
      iVar4 = iVar4 + 1;
      lVar1 = *(long *)(param_1 + 8);
      lVar3 = lVar3 + *(long *)(lVar1 + 0x50);
      lVar2 = lVar2 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar4 < param_2[1]);
  }
  return;
}



/* Entry: 109ad6d3c; end: 109ad6d43;  */

void FUN_109ad6d3c(void)

{
  return;
}



/* Entry: 109ad6d44; end: 109ad745f;  */

void FUN_109ad6d44(int *param_1,uint *param_2,uint *param_3,ulong param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined1 *puVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  undefined1 uVar21;
  undefined1 uVar22;
  float fVar16;
  undefined8 uVar17;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar28;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar42;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar64;
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
  float fVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  float afStack_e08 [4];
  long lStack_df8;
  undefined1 *puStack_df0;
  code *pcStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  int *piStack_cd0;
  uint *puStack_cc8;
  long lStack_cc0;
  undefined1 *puStack_cb8;
  ulong uStack_cb0;
  long lStack_ca8;
  ulong uStack_ca0;
  int iStack_c94;
  ulong uStack_c90;
  int iStack_c84;
  uint auStack_c80 [768];
  long lStack_80;
  
  iVar11 = (int)param_4;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *param_2;
  uVar7 = param_2[1];
  puStack_cc8 = param_2;
  if ((int)uVar15 < (int)uVar7) {
    lVar10 = *(long *)(param_1 + 2);
    lVar9 = *(long *)(param_1 + 4);
    puVar12 = (undefined1 *)
              (*(long *)(lVar9 + 0x10) + **(long **)(lVar9 + 0x48) * (long)(int)uVar15);
    lVar14 = *(long *)(lVar10 + 0x10) + **(long **)(lVar10 + 0x48) * (long)(int)uVar15;
    uStack_ca0 = (ulong)auStack_c80 | 4;
    iVar2 = 0x132e8de0;
    piStack_cd0 = param_1;
    do {
      if (0 < *(int *)(lVar10 + 0xc)) {
        iVar11 = 0;
        piVar13 = *(int **)(param_1 + 6);
        iVar3 = *piVar13;
        lStack_ca8 = (long)iVar3 << 3;
        lStack_cc0 = lVar14;
        puStack_cb8 = puVar12;
        uStack_cb0 = (ulong)uVar15;
        iStack_c94 = *(int *)(lVar10 + 0xc);
        do {
          uVar15 = iStack_c94 - iVar11;
          if (0xff < (int)uVar15) {
            uVar15 = 0x100;
          }
          param_4 = (ulong)uVar15;
          uVar15 = uVar15 * 3;
          uStack_c90 = (ulong)uVar15;
          uVar5 = 0;
          uVar7 = uVar15 - 0x18;
          if (-1 < (int)uVar7) {
            fVar16 = (float)piVar13[8];
            fVar82 = (float)piVar13[9];
            fVar79 = (float)piVar13[10];
            fVar75 = (float)piVar13[0xb];
            puVar8 = auStack_c80;
            do {
              pbVar1 = (byte *)(lVar14 + uVar5);
              bVar34 = pbVar1[0xc];
              bVar50 = pbVar1[0xd];
              bVar60 = pbVar1[0xe];
              bVar36 = pbVar1[0xf];
              bVar52 = pbVar1[0x10];
              bVar61 = pbVar1[0x11];
              bVar38 = pbVar1[0x12];
              bVar54 = pbVar1[0x13];
              bVar62 = pbVar1[0x14];
              bVar40 = pbVar1[0x15];
              bVar56 = pbVar1[0x16];
              bVar63 = pbVar1[0x17];
              auVar45._6_2_ = 0;
              auVar45._0_6_ =
                   (uint6)CONCAT14(pbVar1[3],(uint)CONCAT12(pbVar1[3],(ushort)*pbVar1)) &
                   0xffff0000ffff;
              auVar45[8] = pbVar1[6];
              auVar45._9_3_ = 0;
              auVar45[0xc] = pbVar1[9];
              auVar45._13_3_ = 0;
              auVar83 = NEON_ucvtf(auVar45,4);
              auVar71._6_2_ = 0;
              auVar71._0_6_ =
                   (uint6)CONCAT14(pbVar1[4],(uint)CONCAT12(pbVar1[4],(ushort)pbVar1[1])) &
                   0xffff0000ffff;
              auVar71[8] = pbVar1[7];
              auVar71._9_3_ = 0;
              auVar71[0xc] = pbVar1[10];
              auVar71._13_3_ = 0;
              auVar43 = NEON_ucvtf(auVar71,4);
              auVar44._6_2_ = 0;
              auVar44._0_6_ =
                   (uint6)CONCAT14(pbVar1[5],(uint)CONCAT12(pbVar1[5],(ushort)pbVar1[2])) &
                   0xffff0000ffff;
              auVar44[8] = pbVar1[8];
              auVar44._9_3_ = 0;
              auVar44[0xc] = pbVar1[0xb];
              auVar44._13_3_ = 0;
              auVar45 = NEON_ucvtf(auVar44,4);
              *puVar8 = auVar83._0_4_;
              puVar8[1] = (uint)(fVar16 * auVar43._0_4_);
              puVar8[2] = (uint)(fVar16 * auVar45._0_4_);
              puVar8[3] = auVar83._4_4_;
              puVar8[4] = (uint)(fVar82 * auVar43._4_4_);
              puVar8[5] = (uint)(fVar82 * auVar45._4_4_);
              puVar8[6] = auVar83._8_4_;
              puVar8[7] = (uint)(fVar79 * auVar43._8_4_);
              puVar8[8] = (uint)(fVar79 * auVar45._8_4_);
              puVar8[9] = auVar83._12_4_;
              puVar8[10] = (uint)(fVar75 * auVar43._12_4_);
              puVar8[0xb] = (uint)(fVar75 * auVar45._12_4_);
              auVar83._1_3_ = 0;
              auVar83[0] = bVar34;
              auVar83[4] = bVar36;
              auVar83._5_3_ = 0;
              auVar83[8] = bVar38;
              auVar83._9_3_ = 0;
              auVar83[0xc] = bVar40;
              auVar83._13_3_ = 0;
              auVar45 = NEON_ucvtf(auVar83,4);
              auVar70._1_3_ = 0;
              auVar70[0] = bVar50;
              auVar70[4] = bVar52;
              auVar70._5_3_ = 0;
              auVar70[8] = bVar54;
              auVar70._9_3_ = 0;
              auVar70[0xc] = bVar56;
              auVar70._13_3_ = 0;
              auVar71 = NEON_ucvtf(auVar70,4);
              auVar43._1_3_ = 0;
              auVar43[0] = bVar60;
              auVar43[4] = bVar61;
              auVar43._5_3_ = 0;
              auVar43[8] = bVar62;
              auVar43._9_3_ = 0;
              auVar43[0xc] = bVar63;
              auVar43._13_3_ = 0;
              auVar43 = NEON_ucvtf(auVar43,4);
              puVar8[0xc] = auVar45._0_4_;
              puVar8[0xd] = (uint)(fVar16 * auVar71._0_4_);
              puVar8[0xe] = (uint)(fVar16 * auVar43._0_4_);
              puVar8[0xf] = auVar45._4_4_;
              puVar8[0x10] = (uint)(fVar82 * auVar71._4_4_);
              puVar8[0x11] = (uint)(fVar82 * auVar43._4_4_);
              puVar8[0x12] = auVar45._8_4_;
              puVar8[0x13] = (uint)(fVar79 * auVar71._8_4_);
              puVar8[0x14] = (uint)(fVar79 * auVar43._8_4_);
              puVar8[0x15] = auVar45._12_4_;
              puVar8[0x16] = (uint)(fVar75 * auVar71._12_4_);
              puVar8[0x17] = (uint)(fVar75 * auVar43._12_4_);
              uVar5 = uVar5 + 0x18;
              puVar8 = puVar8 + 0x18;
            } while (uVar5 <= uVar7);
            uVar5 = uVar5 & 0xffffffff;
          }
          if ((int)uVar5 < (int)uVar15) {
            pfVar6 = (float *)(uStack_ca0 + uVar5 * 4);
            do {
              pbVar1 = (byte *)(lVar14 + uVar5);
              fVar16 = (float)NEON_ucvtf((uint)*pbVar1);
              pfVar6[-1] = fVar16;
              fVar16 = (float)NEON_ucvtf((uint)pbVar1[1]);
              *pfVar6 = fVar16 * 0.003921569;
              fVar16 = (float)NEON_ucvtf((uint)pbVar1[2]);
              pfVar6[1] = fVar16 * 0.003921569;
              uVar5 = uVar5 + 3;
              pfVar6 = pfVar6 + 3;
            } while ((long)uVar5 < (long)(int)uVar15);
          }
          param_2 = auStack_c80;
          param_3 = auStack_c80;
          iStack_c84 = iVar11;
          FUN_109ad7460(piVar13 + 1);
          uVar15 = 0;
          if (-1 < (int)uVar7) {
            puVar8 = auStack_c80;
            lVar10 = lStack_ca8;
            do {
              auVar84._0_8_ = CONCAT44(puVar8[0xf],puVar8[0xc]);
              auVar84._8_4_ = puVar8[0x12];
              auVar84._12_4_ = puVar8[0x15];
              auVar18 = *(undefined1 (*) [16])(piVar13 + 4);
              uVar28 = CONCAT44(puVar8[0x10],puVar8[0xd]);
              uVar42 = CONCAT44(puVar8[0x16],puVar8[0x13]);
              uVar59 = CONCAT44(puVar8[0x11],puVar8[0xe]);
              uVar85 = CONCAT44(puVar8[0x17],puVar8[0x14]);
              uVar17 = CONCAT44(puVar8[3],*puVar8);
              uVar86 = CONCAT44(puVar8[9],puVar8[6]);
              uVar87 = CONCAT44(puVar8[4],puVar8[1]);
              uVar88 = CONCAT44(puVar8[10],puVar8[7]);
              uVar89 = CONCAT44(puVar8[5],puVar8[2]);
              uVar90 = CONCAT44(puVar8[0xb],puVar8[8]);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_cf8 = auVar84._8_8_;
                uStack_d38 = auVar18._8_8_;
                uStack_d40 = auVar18._0_8_;
                uStack_d30 = CONCAT44(puVar8[3],*puVar8);
                uStack_d28 = CONCAT44(puVar8[9],puVar8[6]);
                uStack_d20 = CONCAT44(puVar8[4],puVar8[1]);
                uStack_d18 = CONCAT44(puVar8[10],puVar8[7]);
                uStack_d10 = CONCAT44(puVar8[5],puVar8[2]);
                uStack_d08 = CONCAT44(puVar8[0xb],puVar8[8]);
                uStack_d00 = auVar84._0_8_;
                uStack_cf0 = CONCAT44(puVar8[0x10],puVar8[0xd]);
                uStack_ce8 = CONCAT44(puVar8[0x16],puVar8[0x13]);
                uStack_ce0 = CONCAT44(puVar8[0x11],puVar8[0xe]);
                uStack_cd8 = CONCAT44(puVar8[0x17],puVar8[0x14]);
                iVar11 = iVar2;
                ___cxa_guard_acquire();
                auVar18._8_8_ = uStack_d38;
                auVar18._0_8_ = uStack_d40;
                auVar84._8_8_ = uStack_cf8;
                auVar84._0_8_ = uStack_d00;
                lVar10 = lStack_ca8;
                uVar28 = uStack_cf0;
                uVar42 = uStack_ce8;
                uVar59 = uStack_ce0;
                uVar85 = uStack_cd8;
                uVar17 = uStack_d30;
                uVar86 = uStack_d28;
                uVar87 = uStack_d20;
                uVar88 = uStack_d18;
                uVar89 = uStack_d10;
                uVar90 = uStack_d08;
                if (iVar11 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar18._8_8_ = uStack_d38;
                  auVar18._0_8_ = uStack_d40;
                  auVar84._8_8_ = uStack_cf8;
                  auVar84._0_8_ = uStack_d00;
                  lVar10 = lStack_ca8;
                  uVar28 = uStack_cf0;
                  uVar42 = uStack_ce8;
                  uVar59 = uStack_ce0;
                  uVar85 = uStack_cd8;
                  uVar17 = uStack_d30;
                  uVar86 = uStack_d28;
                  uVar87 = uStack_d20;
                  uVar88 = uStack_d18;
                  uVar89 = uStack_d10;
                  uVar90 = uStack_d08;
                }
              }
              auVar46._8_4_ = fRam00000001132e8dd8;
              auVar46._0_8_ = uRam00000001132e8dd0;
              auVar46._12_4_ = fRam00000001132e8ddc;
              auVar29 = *(undefined1 (*) [16])(piVar13 + 4);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_d00 = auVar84._0_8_;
                uStack_cf8 = auVar84._8_8_;
                uStack_d48 = auVar29._8_8_;
                uStack_d50 = auVar29._0_8_;
                uStack_d38 = auVar18._8_8_;
                uStack_d40 = auVar18._0_8_;
                uStack_d58 = auVar46._8_8_;
                uStack_d60 = uRam00000001132e8dd0;
                uStack_d30 = uVar17;
                uStack_d28 = uVar86;
                uStack_d20 = uVar87;
                uStack_d18 = uVar88;
                uStack_d10 = uVar89;
                uStack_d08 = uVar90;
                uStack_cf0 = uVar28;
                uStack_ce8 = uVar42;
                uStack_ce0 = uVar59;
                uStack_cd8 = uVar85;
                iVar11 = iVar2;
                ___cxa_guard_acquire();
                auVar46._8_8_ = uStack_d58;
                auVar46._0_8_ = uStack_d60;
                auVar29._8_8_ = uStack_d48;
                auVar29._0_8_ = uStack_d50;
                auVar18._8_8_ = uStack_d38;
                auVar18._0_8_ = uStack_d40;
                auVar84._8_8_ = uStack_cf8;
                auVar84._0_8_ = uStack_d00;
                lVar10 = lStack_ca8;
                uVar28 = uStack_cf0;
                uVar42 = uStack_ce8;
                uVar59 = uStack_ce0;
                uVar85 = uStack_cd8;
                uVar17 = uStack_d30;
                uVar86 = uStack_d28;
                uVar87 = uStack_d20;
                uVar88 = uStack_d18;
                uVar89 = uStack_d10;
                uVar90 = uStack_d08;
                if (iVar11 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar46._8_8_ = uStack_d58;
                  auVar46._0_8_ = uStack_d60;
                  auVar29._8_8_ = uStack_d48;
                  auVar29._0_8_ = uStack_d50;
                  auVar18._8_8_ = uStack_d38;
                  auVar18._0_8_ = uStack_d40;
                  auVar84._8_8_ = uStack_cf8;
                  auVar84._0_8_ = uStack_d00;
                  lVar10 = lStack_ca8;
                  uVar28 = uStack_cf0;
                  uVar42 = uStack_ce8;
                  uVar59 = uStack_ce0;
                  uVar85 = uStack_cd8;
                  uVar17 = uStack_d30;
                  uVar86 = uStack_d28;
                  uVar87 = uStack_d20;
                  uVar88 = uStack_d18;
                  uVar89 = uStack_d10;
                  uVar90 = uStack_d08;
                }
              }
              auVar65 = *(undefined1 (*) [16])(piVar13 + 4);
              uVar58 = uRam00000001132e8dd0;
              uVar64 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_d00 = auVar84._0_8_;
                uStack_cf8 = auVar84._8_8_;
                uStack_d48 = auVar29._8_8_;
                uStack_d50 = auVar29._0_8_;
                uStack_d38 = auVar18._8_8_;
                uStack_d40 = auVar18._0_8_;
                uStack_d68 = auVar65._8_8_;
                uStack_d70 = auVar65._0_8_;
                uStack_d58 = auVar46._8_8_;
                uStack_d60 = auVar46._0_8_;
                uStack_d80 = uRam00000001132e8dd0;
                uStack_d78 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
                uStack_d30 = uVar17;
                uStack_d28 = uVar86;
                uStack_d20 = uVar87;
                uStack_d18 = uVar88;
                uStack_d10 = uVar89;
                uStack_d08 = uVar90;
                uStack_cf0 = uVar28;
                uStack_ce8 = uVar42;
                uStack_ce0 = uVar59;
                uStack_cd8 = uVar85;
                iVar11 = iVar2;
                ___cxa_guard_acquire();
                auVar65._8_8_ = uStack_d68;
                auVar65._0_8_ = uStack_d70;
                auVar46._8_8_ = uStack_d58;
                auVar46._0_8_ = uStack_d60;
                auVar29._8_8_ = uStack_d48;
                auVar29._0_8_ = uStack_d50;
                auVar18._8_8_ = uStack_d38;
                auVar18._0_8_ = uStack_d40;
                auVar84._8_8_ = uStack_cf8;
                auVar84._0_8_ = uStack_d00;
                lVar10 = lStack_ca8;
                uVar58 = uStack_d80;
                uVar64 = uStack_d78;
                uVar28 = uStack_cf0;
                uVar42 = uStack_ce8;
                uVar59 = uStack_ce0;
                uVar85 = uStack_cd8;
                uVar17 = uStack_d30;
                uVar86 = uStack_d28;
                uVar87 = uStack_d20;
                uVar88 = uStack_d18;
                uVar89 = uStack_d10;
                uVar90 = uStack_d08;
                if (iVar11 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar65._8_8_ = uStack_d68;
                  auVar65._0_8_ = uStack_d70;
                  auVar46._8_8_ = uStack_d58;
                  auVar46._0_8_ = uStack_d60;
                  auVar29._8_8_ = uStack_d48;
                  auVar29._0_8_ = uStack_d50;
                  auVar18._8_8_ = uStack_d38;
                  auVar18._0_8_ = uStack_d40;
                  auVar84._8_8_ = uStack_cf8;
                  auVar84._0_8_ = uStack_d00;
                  lVar10 = lStack_ca8;
                  uVar58 = uStack_d80;
                  uVar64 = uStack_d78;
                  uVar28 = uStack_cf0;
                  uVar42 = uStack_ce8;
                  uVar59 = uStack_ce0;
                  uVar85 = uStack_cd8;
                  uVar17 = uStack_d30;
                  uVar86 = uStack_d28;
                  uVar87 = uStack_d20;
                  uVar88 = uStack_d18;
                  uVar89 = uStack_d10;
                  uVar90 = uStack_d08;
                }
              }
              auVar72 = *(undefined1 (*) [16])(piVar13 + 4);
              uVar76 = uRam00000001132e8dd0;
              uVar77 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_d00 = auVar84._0_8_;
                uStack_cf8 = auVar84._8_8_;
                uStack_d48 = auVar29._8_8_;
                uStack_d50 = auVar29._0_8_;
                uStack_d38 = auVar18._8_8_;
                uStack_d40 = auVar18._0_8_;
                uStack_d68 = auVar65._8_8_;
                uStack_d70 = auVar65._0_8_;
                uStack_d58 = auVar46._8_8_;
                uStack_d60 = auVar46._0_8_;
                uStack_d88 = auVar72._8_8_;
                uStack_d90 = auVar72._0_8_;
                uStack_da0 = uRam00000001132e8dd0;
                uStack_d98 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
                uStack_d80 = uVar58;
                uStack_d78 = uVar64;
                uStack_d30 = uVar17;
                uStack_d28 = uVar86;
                uStack_d20 = uVar87;
                uStack_d18 = uVar88;
                uStack_d10 = uVar89;
                uStack_d08 = uVar90;
                uStack_cf0 = uVar28;
                uStack_ce8 = uVar42;
                uStack_ce0 = uVar59;
                uStack_cd8 = uVar85;
                iVar11 = iVar2;
                ___cxa_guard_acquire();
                auVar72._8_8_ = uStack_d88;
                auVar72._0_8_ = uStack_d90;
                auVar65._8_8_ = uStack_d68;
                auVar65._0_8_ = uStack_d70;
                auVar46._8_8_ = uStack_d58;
                auVar46._0_8_ = uStack_d60;
                auVar29._8_8_ = uStack_d48;
                auVar29._0_8_ = uStack_d50;
                auVar18._8_8_ = uStack_d38;
                auVar18._0_8_ = uStack_d40;
                auVar84._8_8_ = uStack_cf8;
                auVar84._0_8_ = uStack_d00;
                lVar10 = lStack_ca8;
                uVar58 = uStack_d80;
                uVar64 = uStack_d78;
                uVar76 = uStack_da0;
                uVar77 = uStack_d98;
                uVar28 = uStack_cf0;
                uVar42 = uStack_ce8;
                uVar59 = uStack_ce0;
                uVar85 = uStack_cd8;
                uVar17 = uStack_d30;
                uVar86 = uStack_d28;
                uVar87 = uStack_d20;
                uVar88 = uStack_d18;
                uVar89 = uStack_d10;
                uVar90 = uStack_d08;
                if (iVar11 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar72._8_8_ = uStack_d88;
                  auVar72._0_8_ = uStack_d90;
                  auVar65._8_8_ = uStack_d68;
                  auVar65._0_8_ = uStack_d70;
                  auVar46._8_8_ = uStack_d58;
                  auVar46._0_8_ = uStack_d60;
                  auVar29._8_8_ = uStack_d48;
                  auVar29._0_8_ = uStack_d50;
                  auVar18._8_8_ = uStack_d38;
                  auVar18._0_8_ = uStack_d40;
                  auVar84._8_8_ = uStack_cf8;
                  auVar84._0_8_ = uStack_d00;
                  lVar10 = lStack_ca8;
                  uVar58 = uStack_d80;
                  uVar64 = uStack_d78;
                  uVar76 = uStack_da0;
                  uVar77 = uStack_d98;
                  uVar28 = uStack_cf0;
                  uVar42 = uStack_ce8;
                  uVar59 = uStack_ce0;
                  uVar85 = uStack_cd8;
                  uVar17 = uStack_d30;
                  uVar86 = uStack_d28;
                  uVar87 = uStack_d20;
                  uVar88 = uStack_d18;
                  uVar89 = uStack_d10;
                  uVar90 = uStack_d08;
                }
              }
              uVar80 = *(undefined8 *)(piVar13 + 4);
              uVar81 = *(undefined8 *)(piVar13 + 6);
              uVar91 = uRam00000001132e8dd0;
              uVar92 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_d00 = auVar84._0_8_;
                uStack_cf8 = auVar84._8_8_;
                uStack_d48 = auVar29._8_8_;
                uStack_d50 = auVar29._0_8_;
                uStack_d38 = auVar18._8_8_;
                uStack_d40 = auVar18._0_8_;
                uStack_d68 = auVar65._8_8_;
                uStack_d70 = auVar65._0_8_;
                uStack_d58 = auVar46._8_8_;
                uStack_d60 = auVar46._0_8_;
                uStack_d88 = auVar72._8_8_;
                uStack_d90 = auVar72._0_8_;
                uStack_dc0 = uRam00000001132e8dd0;
                uStack_db8 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
                uStack_db0 = *(undefined8 *)(piVar13 + 4);
                uStack_da8 = *(undefined8 *)(piVar13 + 6);
                uStack_da0 = uVar76;
                uStack_d98 = uVar77;
                uStack_d80 = uVar58;
                uStack_d78 = uVar64;
                uStack_d30 = uVar17;
                uStack_d28 = uVar86;
                uStack_d20 = uVar87;
                uStack_d18 = uVar88;
                uStack_d10 = uVar89;
                uStack_d08 = uVar90;
                uStack_cf0 = uVar28;
                uStack_ce8 = uVar42;
                uStack_ce0 = uVar59;
                uStack_cd8 = uVar85;
                iVar11 = iVar2;
                ___cxa_guard_acquire();
                auVar72._8_8_ = uStack_d88;
                auVar72._0_8_ = uStack_d90;
                auVar65._8_8_ = uStack_d68;
                auVar65._0_8_ = uStack_d70;
                auVar46._8_8_ = uStack_d58;
                auVar46._0_8_ = uStack_d60;
                auVar29._8_8_ = uStack_d48;
                auVar29._0_8_ = uStack_d50;
                auVar18._8_8_ = uStack_d38;
                auVar18._0_8_ = uStack_d40;
                auVar84._8_8_ = uStack_cf8;
                auVar84._0_8_ = uStack_d00;
                lVar10 = lStack_ca8;
                uVar58 = uStack_d80;
                uVar64 = uStack_d78;
                uVar76 = uStack_da0;
                uVar77 = uStack_d98;
                uVar80 = uStack_db0;
                uVar81 = uStack_da8;
                uVar28 = uStack_cf0;
                uVar42 = uStack_ce8;
                uVar59 = uStack_ce0;
                uVar85 = uStack_cd8;
                uVar17 = uStack_d30;
                uVar86 = uStack_d28;
                uVar87 = uStack_d20;
                uVar88 = uStack_d18;
                uVar89 = uStack_d10;
                uVar90 = uStack_d08;
                uVar91 = uStack_dc0;
                uVar92 = uStack_db8;
                if (iVar11 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar72._8_8_ = uStack_d88;
                  auVar72._0_8_ = uStack_d90;
                  auVar65._8_8_ = uStack_d68;
                  auVar65._0_8_ = uStack_d70;
                  auVar46._8_8_ = uStack_d58;
                  auVar46._0_8_ = uStack_d60;
                  auVar29._8_8_ = uStack_d48;
                  auVar29._0_8_ = uStack_d50;
                  auVar18._8_8_ = uStack_d38;
                  auVar18._0_8_ = uStack_d40;
                  auVar84._8_8_ = uStack_cf8;
                  auVar84._0_8_ = uStack_d00;
                  lVar10 = lStack_ca8;
                  uVar58 = uStack_d80;
                  uVar64 = uStack_d78;
                  uVar76 = uStack_da0;
                  uVar77 = uStack_d98;
                  uVar80 = uStack_db0;
                  uVar81 = uStack_da8;
                  uVar28 = uStack_cf0;
                  uVar42 = uStack_ce8;
                  uVar59 = uStack_ce0;
                  uVar85 = uStack_cd8;
                  uVar17 = uStack_d30;
                  uVar86 = uStack_d28;
                  uVar87 = uStack_d20;
                  uVar88 = uStack_d18;
                  uVar89 = uStack_d10;
                  uVar90 = uStack_d08;
                  uVar91 = uStack_dc0;
                  uVar92 = uStack_db8;
                }
              }
              uVar93 = *(undefined8 *)(piVar13 + 4);
              uVar94 = *(undefined8 *)(piVar13 + 6);
              uVar95 = uRam00000001132e8dd0;
              uVar96 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uStack_d00 = auVar84._0_8_;
                uStack_cf8 = auVar84._8_8_;
                uStack_d48 = auVar29._8_8_;
                uStack_d50 = auVar29._0_8_;
                uStack_d38 = auVar18._8_8_;
                uStack_d40 = auVar18._0_8_;
                uStack_d68 = auVar65._8_8_;
                uStack_d70 = auVar65._0_8_;
                uStack_d58 = auVar46._8_8_;
                uStack_d60 = auVar46._0_8_;
                uStack_d88 = auVar72._8_8_;
                uStack_d90 = auVar72._0_8_;
                uStack_de0 = uRam00000001132e8dd0;
                uStack_dd8 = CONCAT44(fRam00000001132e8ddc,fRam00000001132e8dd8);
                uStack_dd0 = *(undefined8 *)(piVar13 + 4);
                uStack_dc8 = *(undefined8 *)(piVar13 + 6);
                uStack_dc0 = uVar91;
                uStack_db8 = uVar92;
                uStack_db0 = uVar80;
                uStack_da8 = uVar81;
                uStack_da0 = uVar76;
                uStack_d98 = uVar77;
                uStack_d80 = uVar58;
                uStack_d78 = uVar64;
                uStack_d30 = uVar17;
                uStack_d28 = uVar86;
                uStack_d20 = uVar87;
                uStack_d18 = uVar88;
                uStack_d10 = uVar89;
                uStack_d08 = uVar90;
                uStack_cf0 = uVar28;
                uStack_ce8 = uVar42;
                uStack_ce0 = uVar59;
                uStack_cd8 = uVar85;
                iVar11 = iVar2;
                ___cxa_guard_acquire();
                auVar72._8_8_ = uStack_d88;
                auVar72._0_8_ = uStack_d90;
                auVar65._8_8_ = uStack_d68;
                auVar65._0_8_ = uStack_d70;
                auVar46._8_8_ = uStack_d58;
                auVar46._0_8_ = uStack_d60;
                auVar29._8_8_ = uStack_d48;
                auVar29._0_8_ = uStack_d50;
                auVar18._8_8_ = uStack_d38;
                auVar18._0_8_ = uStack_d40;
                auVar84._8_8_ = uStack_cf8;
                auVar84._0_8_ = uStack_d00;
                lVar10 = lStack_ca8;
                uVar58 = uStack_d80;
                uVar64 = uStack_d78;
                uVar76 = uStack_da0;
                uVar77 = uStack_d98;
                uVar80 = uStack_db0;
                uVar81 = uStack_da8;
                uVar28 = uStack_cf0;
                uVar42 = uStack_ce8;
                uVar59 = uStack_ce0;
                uVar85 = uStack_cd8;
                uVar17 = uStack_d30;
                uVar86 = uStack_d28;
                uVar87 = uStack_d20;
                uVar88 = uStack_d18;
                uVar89 = uStack_d10;
                uVar90 = uStack_d08;
                uVar91 = uStack_dc0;
                uVar92 = uStack_db8;
                uVar93 = uStack_dd0;
                uVar94 = uStack_dc8;
                uVar95 = uStack_de0;
                uVar96 = uStack_dd8;
                if (iVar11 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                  auVar72._8_8_ = uStack_d88;
                  auVar72._0_8_ = uStack_d90;
                  auVar65._8_8_ = uStack_d68;
                  auVar65._0_8_ = uStack_d70;
                  auVar46._8_8_ = uStack_d58;
                  auVar46._0_8_ = uStack_d60;
                  auVar29._8_8_ = uStack_d48;
                  auVar29._0_8_ = uStack_d50;
                  auVar18._8_8_ = uStack_d38;
                  auVar18._0_8_ = uStack_d40;
                  auVar84._8_8_ = uStack_cf8;
                  auVar84._0_8_ = uStack_d00;
                  lVar10 = lStack_ca8;
                  uVar58 = uStack_d80;
                  uVar64 = uStack_d78;
                  uVar76 = uStack_da0;
                  uVar77 = uStack_d98;
                  uVar80 = uStack_db0;
                  uVar81 = uStack_da8;
                  uVar28 = uStack_cf0;
                  uVar42 = uStack_ce8;
                  uVar59 = uStack_ce0;
                  uVar85 = uStack_cd8;
                  uVar17 = uStack_d30;
                  uVar86 = uStack_d28;
                  uVar87 = uStack_d20;
                  uVar88 = uStack_d18;
                  uVar89 = uStack_d10;
                  uVar90 = uStack_d08;
                  uVar91 = uStack_dc0;
                  uVar92 = uStack_db8;
                  uVar93 = uStack_dd0;
                  uVar94 = uStack_dc8;
                  uVar95 = uStack_de0;
                  uVar96 = uStack_dd8;
                }
              }
              auVar19._0_8_ =
                   CONCAT44((int)((float)((ulong)uVar17 >> 0x20) * auVar18._4_4_ + auVar46._4_4_),
                            (int)((float)uVar17 * auVar18._0_4_ + auVar46._0_4_));
              auVar19._8_4_ = (int)((float)uVar86 * auVar18._8_4_ + auVar46._8_4_);
              auVar19._12_4_ =
                   (int)((float)((ulong)uVar86 >> 0x20) * auVar18._12_4_ + auVar46._12_4_);
              auVar20._8_8_ = auVar19._8_8_;
              auVar20._0_8_ = NEON_uqxtn(auVar19._0_8_,auVar19,4);
              auVar30._0_8_ =
                   CONCAT44((int)(auVar84._4_4_ * auVar29._4_4_ + (float)((ulong)uVar58 >> 0x20)),
                            (int)(auVar84._0_4_ * auVar29._0_4_ + (float)uVar58));
              auVar30._8_4_ = (int)(auVar84._8_4_ * auVar29._8_4_ + (float)uVar64);
              auVar30._12_4_ =
                   (int)(auVar84._12_4_ * auVar29._12_4_ + (float)((ulong)uVar64 >> 0x20));
              auVar43 = NEON_uqxtn2(auVar20,auVar30,4);
              uVar17 = NEON_uqxtn(auVar43._0_8_,auVar43,2);
              auVar66._0_8_ =
                   CONCAT44((int)((float)((ulong)uVar87 >> 0x20) * auVar65._4_4_ +
                                 (float)((ulong)uVar76 >> 0x20)),
                            (int)((float)uVar87 * auVar65._0_4_ + (float)uVar76));
              auVar66._8_4_ = (int)((float)uVar88 * auVar65._8_4_ + (float)uVar77);
              auVar66._12_4_ =
                   (int)((float)((ulong)uVar88 >> 0x20) * auVar65._12_4_ +
                        (float)((ulong)uVar77 >> 0x20));
              auVar67._8_8_ = auVar66._8_8_;
              auVar67._0_8_ = NEON_uqxtn(auVar66._0_8_,auVar66,4);
              auVar73._0_4_ = (int)((float)uVar28 * auVar72._0_4_ + (float)uVar91);
              auVar73._4_4_ =
                   (int)((float)((ulong)uVar28 >> 0x20) * auVar72._4_4_ +
                        (float)((ulong)uVar91 >> 0x20));
              auVar73._8_4_ = (int)((float)uVar42 * auVar72._8_4_ + (float)uVar92);
              auVar73._12_4_ =
                   (int)((float)((ulong)uVar42 >> 0x20) * auVar72._12_4_ +
                        (float)((ulong)uVar92 >> 0x20));
              auVar43 = NEON_uqxtn2(auVar67,auVar73,4);
              uVar28 = NEON_uqxtn(auVar30._0_8_,auVar43,2);
              auVar68._0_8_ =
                   CONCAT44((int)((float)((ulong)uVar89 >> 0x20) * (float)((ulong)uVar80 >> 0x20) +
                                 (float)((ulong)uVar95 >> 0x20)),
                            (int)((float)uVar89 * (float)uVar80 + (float)uVar95));
              auVar68._8_4_ = (int)((float)uVar90 * (float)uVar81 + (float)uVar96);
              auVar68._12_4_ =
                   (int)((float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar81 >> 0x20) +
                        (float)((ulong)uVar96 >> 0x20));
              auVar69._8_8_ = auVar68._8_8_;
              auVar69._0_8_ = NEON_uqxtn(auVar68._0_8_,auVar68,4);
              auVar74._0_4_ = (int)((float)uVar59 * (float)uVar93 + (float)uRam00000001132e8dd0);
              auVar74._4_4_ =
                   (int)((float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar93 >> 0x20) +
                        (float)((ulong)uRam00000001132e8dd0 >> 0x20));
              auVar74._8_4_ = (int)((float)uVar85 * (float)uVar94 + fRam00000001132e8dd8);
              auVar74._12_4_ =
                   (int)((float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar94 >> 0x20) +
                        fRam00000001132e8ddc);
              auVar43 = NEON_uqxtn2(auVar69,auVar74,4);
              uVar42 = NEON_uqxtn(auVar46._0_8_,auVar43,2);
              uVar21 = (undefined1)((ulong)uVar17 >> 8);
              uVar22 = (undefined1)((ulong)uVar17 >> 0x10);
              uVar23 = (undefined1)((ulong)uVar17 >> 0x18);
              uVar24 = (undefined1)((ulong)uVar17 >> 0x20);
              uVar25 = (undefined1)((ulong)uVar17 >> 0x28);
              uVar26 = (undefined1)((ulong)uVar17 >> 0x30);
              uVar27 = (undefined1)((ulong)uVar17 >> 0x38);
              uVar31 = (undefined1)((ulong)uVar28 >> 8);
              uVar32 = (undefined1)((ulong)uVar28 >> 0x10);
              uVar33 = (undefined1)((ulong)uVar28 >> 0x18);
              uVar35 = (undefined1)((ulong)uVar28 >> 0x20);
              uVar37 = (undefined1)((ulong)uVar28 >> 0x28);
              uVar39 = (undefined1)((ulong)uVar28 >> 0x30);
              uVar41 = (undefined1)((ulong)uVar28 >> 0x38);
              uVar47 = (undefined1)((ulong)uVar42 >> 8);
              uVar48 = (undefined1)((ulong)uVar42 >> 0x10);
              uVar49 = (undefined1)((ulong)uVar42 >> 0x18);
              uVar51 = (undefined1)((ulong)uVar42 >> 0x20);
              uVar53 = (undefined1)((ulong)uVar42 >> 0x28);
              uVar55 = (undefined1)((ulong)uVar42 >> 0x30);
              uVar57 = (undefined1)((ulong)uVar42 >> 0x38);
              if (iVar3 == 4) {
                uVar59 = *(undefined8 *)(piVar13 + 0xc);
                *puVar12 = (char)uVar17;
                puVar12[1] = (char)uVar28;
                puVar12[2] = (char)uVar42;
                puVar12[3] = (char)uVar59;
                puVar12[4] = uVar21;
                puVar12[5] = uVar31;
                puVar12[6] = uVar47;
                puVar12[7] = (char)((ulong)uVar59 >> 8);
                puVar12[8] = uVar22;
                puVar12[9] = uVar32;
                puVar12[10] = uVar48;
                puVar12[0xb] = (char)((ulong)uVar59 >> 0x10);
                puVar12[0xc] = uVar23;
                puVar12[0xd] = uVar33;
                puVar12[0xe] = uVar49;
                puVar12[0xf] = (char)((ulong)uVar59 >> 0x18);
                puVar12[0x10] = uVar24;
                puVar12[0x11] = uVar35;
                puVar12[0x12] = uVar51;
                puVar12[0x13] = (char)((ulong)uVar59 >> 0x20);
                puVar12[0x14] = uVar25;
                puVar12[0x15] = uVar37;
                puVar12[0x16] = uVar53;
                puVar12[0x17] = (char)((ulong)uVar59 >> 0x28);
                puVar12[0x18] = uVar26;
                puVar12[0x19] = uVar39;
                puVar12[0x1a] = uVar55;
                puVar12[0x1b] = (char)((ulong)uVar59 >> 0x30);
                puVar12[0x1c] = uVar27;
                puVar12[0x1d] = uVar41;
                puVar12[0x1e] = uVar57;
                puVar12[0x1f] = (char)((ulong)uVar59 >> 0x38);
              }
              else {
                *puVar12 = (char)uVar17;
                puVar12[1] = (char)uVar28;
                puVar12[2] = (char)uVar42;
                puVar12[3] = uVar21;
                puVar12[4] = uVar31;
                puVar12[5] = uVar47;
                puVar12[6] = uVar22;
                puVar12[7] = uVar32;
                puVar12[8] = uVar48;
                puVar12[9] = uVar23;
                puVar12[10] = uVar33;
                puVar12[0xb] = uVar49;
                puVar12[0xc] = uVar24;
                puVar12[0xd] = uVar35;
                puVar12[0xe] = uVar51;
                puVar12[0xf] = uVar25;
                puVar12[0x10] = uVar37;
                puVar12[0x11] = uVar53;
                puVar12[0x12] = uVar26;
                puVar12[0x13] = uVar39;
                puVar12[0x14] = uVar55;
                puVar12[0x15] = uVar27;
                puVar12[0x16] = uVar41;
                puVar12[0x17] = uVar57;
              }
              puVar12 = puVar12 + lVar10;
              uVar15 = uVar15 + 0x18;
              puVar8 = puVar8 + 0x18;
            } while ((int)uVar15 <= (int)uVar7);
          }
          if ((int)uVar15 < (int)uStack_c90) {
            pfVar6 = (float *)(uStack_ca0 + (ulong)uVar15 * 4);
            do {
              uVar7 = (uint)(long)(float)(int)(pfVar6[-1] * 255.0);
              uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar7) {
                uVar7 = 0xff;
              }
              *puVar12 = (char)uVar7;
              uVar7 = (uint)(long)(float)(int)(*pfVar6 * 255.0);
              uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar7) {
                uVar7 = 0xff;
              }
              puVar12[1] = (char)uVar7;
              uVar7 = (uint)(long)(float)(int)(pfVar6[1] * 255.0);
              uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar7) {
                uVar7 = 0xff;
              }
              puVar12[2] = (char)uVar7;
              if (iVar3 == 4) {
                puVar12[3] = 0xff;
              }
              pfVar6 = pfVar6 + 3;
              puVar12 = puVar12 + iVar3;
              uVar15 = uVar15 + 3;
            } while ((int)uVar15 < (int)uStack_c90);
          }
          iVar11 = iStack_c84 + 0x100;
          lVar14 = lVar14 + 0x300;
        } while (iVar11 < iStack_c94);
        lVar10 = *(long *)(piStack_cd0 + 2);
        lVar9 = *(long *)(piStack_cd0 + 4);
        uVar7 = puStack_cc8[1];
        uVar15 = (uint)uStack_cb0;
        param_1 = piStack_cd0;
        puVar12 = puStack_cb8;
        lVar14 = lStack_cc0;
      }
      iVar11 = (int)param_4;
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + *(long *)(lVar10 + 0x50);
      puVar12 = puVar12 + *(long *)(lVar9 + 0x50);
    } while ((int)uVar15 < (int)uVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puStack_df0 = &stack0xfffffffffffffff0;
  pcStack_de8 = FUN_109ad7460;
  lStack_df8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < iVar11) {
    uVar5 = 0;
    fVar16 = (float)param_1[2];
    iVar2 = *param_1;
    iVar3 = param_1[1];
    do {
      pfVar6 = (float *)(param_2 + uVar5);
      fVar75 = pfVar6[1];
      fVar78 = pfVar6[2];
      fVar79 = fVar75;
      fVar82 = fVar75;
      if (fVar78 != 0.0) {
        afStack_e08[0] = (fVar75 + fVar78) - fVar78 * fVar75;
        if (fVar75 <= 0.5) {
          afStack_e08[0] = fVar75 * (fVar78 + 1.0);
        }
        fVar82 = fVar16 * *pfVar6;
        if (0.0 <= fVar82) {
          for (; 6.0 <= fVar82; fVar82 = fVar82 + -6.0) {
          }
        }
        else {
          do {
            fVar82 = fVar82 + 6.0;
          } while (fVar82 < 0.0);
        }
        afStack_e08[1] = fVar75 * 2.0 - afStack_e08[0];
        iVar4 = (int)fVar82 - (uint)(fVar82 < (float)(int)fVar82);
        fVar82 = fVar82 - (float)iVar4;
        afStack_e08[2] = afStack_e08[1] + (1.0 - fVar82) * (afStack_e08[0] - afStack_e08[1]);
        afStack_e08[3] = afStack_e08[1] + fVar82 * (afStack_e08[0] - afStack_e08[1]);
        lVar14 = (long)iVar4 * 0xc;
        fVar75 = afStack_e08[*(int *)(&UNK_10e02f89c + lVar14)];
        fVar79 = afStack_e08[*(int *)(&UNK_10e02f8a0 + lVar14)];
        fVar82 = afStack_e08[*(int *)(&UNK_10e02f8a4 + lVar14)];
      }
      param_3[iVar3] = (uint)fVar75;
      param_3[1] = (uint)fVar79;
      param_3[(long)iVar3 ^ 2] = (uint)fVar82;
      if (iVar2 == 4) {
        param_3[3] = 0x3f800000;
      }
      uVar5 = uVar5 + 3;
      param_3 = param_3 + iVar2;
    } while (uVar5 < (uint)(iVar11 * 3));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_df8) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109ad7460; end: 109ad75c7;  */

void FUN_109ad7460(int *param_1,long param_2,long param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float afStack_28 [4];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < param_4) {
    uVar6 = 0;
    fVar7 = (float)param_1[2];
    iVar2 = *param_1;
    iVar3 = param_1[1];
    do {
      pfVar1 = (float *)(param_2 + uVar6 * 4);
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar11 = fVar8;
      fVar10 = fVar8;
      if (fVar9 != 0.0) {
        afStack_28[0] = (fVar8 + fVar9) - fVar9 * fVar8;
        if (fVar8 <= 0.5) {
          afStack_28[0] = fVar8 * (fVar9 + 1.0);
        }
        fVar10 = fVar7 * *pfVar1;
        if (0.0 <= fVar10) {
          for (; 6.0 <= fVar10; fVar10 = fVar10 + -6.0) {
          }
        }
        else {
          do {
            fVar10 = fVar10 + 6.0;
          } while (fVar10 < 0.0);
        }
        afStack_28[1] = fVar8 * 2.0 - afStack_28[0];
        iVar5 = (int)fVar10 - (uint)(fVar10 < (float)(int)fVar10);
        fVar10 = fVar10 - (float)iVar5;
        afStack_28[2] = afStack_28[1] + (1.0 - fVar10) * (afStack_28[0] - afStack_28[1]);
        afStack_28[3] = afStack_28[1] + fVar10 * (afStack_28[0] - afStack_28[1]);
        lVar4 = (long)iVar5 * 0xc;
        fVar8 = afStack_28[*(int *)(&UNK_10e02f89c + lVar4)];
        fVar11 = afStack_28[*(int *)(&UNK_10e02f8a4 + lVar4)];
        fVar10 = afStack_28[*(int *)(&UNK_10e02f8a0 + lVar4)];
      }
      *(float *)(param_3 + (long)iVar3 * 4) = fVar8;
      *(float *)(param_3 + 4) = fVar10;
      *(float *)(param_3 + ((long)iVar3 ^ 2U) * 4) = fVar11;
      if (iVar2 == 4) {
        *(undefined4 *)(param_3 + 0xc) = 0x3f800000;
      }
      uVar6 = uVar6 + 3;
      param_3 = param_3 + (long)iVar2 * 4;
    } while (uVar6 < (uint)(param_4 * 3));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109ad75c8; end: 109ad75cf;  */

void FUN_109ad75c8(void)

{
  return;
}



/* Entry: 109ad75d0; end: 109ad766b;  */

void FUN_109ad75d0(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *param_2;
  if (iVar4 < param_2[1]) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) +
            **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar4;
    lVar3 = *(long *)(lVar1 + 0x10) + **(long **)(lVar1 + 0x48) * (long)iVar4;
    do {
      FUN_109ad7460(*(undefined8 *)(param_1 + 0x18),lVar3,lVar2,*(undefined4 *)(lVar1 + 0xc));
      iVar4 = iVar4 + 1;
      lVar1 = *(long *)(param_1 + 8);
      lVar3 = lVar3 + *(long *)(lVar1 + 0x50);
      lVar2 = lVar2 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar4 < param_2[1]);
  }
  return;
}



/* Entry: 109ad766c; end: 109ad7673;  */

void FUN_109ad766c(void)

{
  return;
}



/* Entry: 109ad7674; end: 109ad785b;  */

void FUN_109ad7674(long param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  byte *pbVar29;
  int *piVar30;
  
  iVar5 = *param_2;
  iVar23 = param_2[1];
  if (iVar5 < iVar23) {
    lVar26 = *(long *)(param_1 + 8);
    lVar25 = *(long *)(param_1 + 0x10);
    lVar27 = *(long *)(lVar25 + 0x10) + **(long **)(lVar25 + 0x48) * (long)iVar5;
    lVar28 = *(long *)(lVar26 + 0x10) + **(long **)(lVar26 + 0x48) * (long)iVar5;
    do {
      piVar30 = *(int **)(param_1 + 0x18);
      uVar15 = *(uint *)(lVar26 + 0xc);
      lVar4 = 2;
      if ((char)piVar30[10] == '\0') {
        lVar4 = 0x202;
      }
      if (0 < (int)uVar15) {
        uVar24 = 0;
        lVar4 = lVar4 + 0x11375a528;
        iVar23 = piVar30[2];
        iVar10 = piVar30[3];
        iVar6 = piVar30[4];
        iVar11 = piVar30[5];
        iVar7 = piVar30[6];
        iVar12 = piVar30[7];
        iVar8 = piVar30[8];
        iVar13 = piVar30[9];
        pbVar29 = (byte *)(lVar28 + 2);
        iVar9 = *piVar30;
        iVar14 = piVar30[1];
        do {
          uVar16 = *(ushort *)(lVar4 + (ulong)pbVar29[-1] * 2);
          uVar17 = *(ushort *)(lVar4 + (ulong)pbVar29[-2] * 2);
          uVar18 = *(ushort *)(lVar4 + (ulong)*pbVar29 * 2);
          uVar19 = *(ushort *)
                    ((long)((int)(iVar11 * (uint)uVar16 + iVar6 * (uint)uVar17 +
                                  iVar7 * (uint)uVar18 + 0x800) >> 0xc) * 2 + 0x113758928);
          iVar20 = (uint)uVar19 * 0x128 + -0x142666;
          iVar21 = ((uint)*(ushort *)
                           ((long)((int)(iVar23 * (uint)uVar16 + iVar14 * (uint)uVar17 +
                                         iVar10 * (uint)uVar18 + 0x800) >> 0xc) * 2 + 0x113758928) -
                   (uint)uVar19) * 500 + 0x404000;
          iVar22 = ((uint)uVar19 -
                   (uint)*(ushort *)
                          ((long)((int)(iVar8 * (uint)uVar16 + iVar12 * (uint)uVar17 +
                                        iVar13 * (uint)uVar18 + 0x800) >> 0xc) * 2 + 0x113758928)) *
                   200 + 0x404000;
          uVar2 = iVar20 >> 0xf & (iVar20 >> 0x1f ^ 0xffffffffU);
          puVar1 = (undefined1 *)(lVar27 + uVar24);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          *puVar1 = (char)uVar2;
          uVar2 = iVar21 >> 0xf & (iVar21 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          uVar3 = iVar22 >> 0xf & (iVar22 >> 0x1f ^ 0xffffffffU);
          puVar1[1] = (char)uVar2;
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar1[2] = (char)uVar3;
          uVar24 = uVar24 + 3;
          pbVar29 = pbVar29 + iVar9;
        } while (uVar24 < (ulong)uVar15 * 3);
        lVar26 = *(long *)(param_1 + 8);
        lVar25 = *(long *)(param_1 + 0x10);
        iVar23 = param_2[1];
      }
      iVar5 = iVar5 + 1;
      lVar28 = lVar28 + *(long *)(lVar26 + 0x50);
      lVar27 = lVar27 + *(long *)(lVar25 + 0x50);
    } while (iVar5 < iVar23);
  }
  return;
}



/* Entry: 109ad785c; end: 109ad7863;  */

void FUN_109ad785c(void)

{
  return;
}



/* Entry: 109ad7864; end: 109ad7be3;  */

void FUN_109ad7864(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float *pfStack_f8;
  float *pfStack_f0;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  if (iVar2 < iVar3) {
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *(long *)(lVar5 + 0x50);
    lVar7 = *(long *)(lVar4 + 0x50);
    piVar11 = *(int **)(param_1 + 0x18);
    uVar8 = *(uint *)(lVar4 + 0xc);
    iVar10 = piVar11[10];
    pfStack_f0 = (float *)(*(long *)(lVar4 + 0x10) + **(long **)(lVar4 + 0x48) * (long)iVar2 + 8);
    pfStack_f8 = (float *)(*(long *)(lVar5 + 0x10) + **(long **)(lVar5 + 0x48) * (long)iVar2 + 4);
    do {
      if (0 < (int)uVar8) {
        uVar14 = 0;
        fVar22 = (float)piVar11[1];
        fVar15 = (float)piVar11[2];
        fVar23 = (float)piVar11[3];
        fVar16 = (float)piVar11[4];
        fVar24 = (float)piVar11[5];
        fVar17 = (float)piVar11[6];
        fVar18 = (float)piVar11[7];
        fVar33 = (float)piVar11[8];
        fVar32 = (float)piVar11[9];
        iVar9 = *piVar11;
        pfVar12 = pfStack_f0;
        pfVar13 = pfStack_f8;
        do {
          fVar25 = pfVar12[-2];
          fVar19 = 0.0;
          if ((0.0 <= fVar25) && (fVar19 = 1.0, fVar25 <= 1.0)) {
            fVar19 = fVar25;
          }
          fVar26 = pfVar12[-1];
          fVar25 = 0.0;
          if ((0.0 <= fVar26) && (fVar25 = 1.0, fVar26 <= 1.0)) {
            fVar25 = fVar26;
          }
          fVar27 = *pfVar12;
          fVar26 = 1.0;
          if (fVar27 <= 1.0) {
            fVar26 = fVar27;
          }
          fVar31 = 0.0;
          if (0.0 <= fVar27) {
            fVar31 = fVar26;
          }
          uVar20 = CONCAT44(fVar25,fVar19);
          if ((char)iVar10 != '\0') {
            uVar20 = NEON_fcvtzs(uVar20,10,4);
            uVar20 = NEON_smax(uVar20,0,4);
            uVar20 = NEON_smin(uVar20,0x3ff000003ff,4);
            lVar4 = (ulong)(uint)((int)uVar20 << 2) * 4;
            uVar29 = *(undefined8 *)(lVar4 + 0x113750928);
            uVar28 = *(undefined8 *)(lVar4 + 0x113750930);
            uVar21 = NEON_ucvtf(uVar20,4);
            fVar19 = fVar19 * 1024.0 - (float)uVar21;
            fVar25 = fVar25 * 1024.0 - (float)((ulong)uVar21 >> 0x20);
            lVar4 = (ulong)(uint)((int)((ulong)uVar20 >> 0x20) << 2) * 4;
            uVar21 = *(undefined8 *)(lVar4 + 0x113750928);
            uVar20 = *(undefined8 *)(lVar4 + 0x113750930);
            uVar20 = CONCAT44((float)uVar21 +
                              fVar25 * ((float)((ulong)uVar21 >> 0x20) +
                                       fVar25 * ((float)uVar20 +
                                                fVar25 * (float)((ulong)uVar20 >> 0x20))),
                              (float)uVar29 +
                              fVar19 * ((float)((ulong)uVar29 >> 0x20) +
                                       fVar19 * ((float)uVar28 +
                                                fVar19 * (float)((ulong)uVar28 >> 0x20))));
            uVar1 = (int)(fVar31 * 1024.0) & ((int)(fVar31 * 1024.0) >> 0x1f ^ 0xffffffffU);
            if (0x3fe < (int)uVar1) {
              uVar1 = 0x3ff;
            }
            fVar19 = fVar31 * 1024.0 - (float)uVar1;
            lVar4 = (ulong)(uVar1 << 2) * 4;
            fVar31 = *(float *)(lVar4 + 0x113750928) +
                     fVar19 * (*(float *)(lVar4 + 0x11375092c) +
                              fVar19 * (*(float *)(lVar4 + 0x113750930) +
                                       fVar19 * *(float *)(lVar4 + 0x113750934)));
          }
          fVar26 = (float)((ulong)uVar20 >> 0x20);
          fVar25 = (float)uVar20;
          fVar19 = fVar15 * fVar26 + fVar22 * fVar25 + fVar23 * fVar31;
          if (fVar19 <= 0.008856) {
            fVar19 = fVar19 * 7.787 + 0.13793103;
          }
          else {
            _powf(fVar19,0x3eaaaaab);
          }
          fVar27 = fVar24 * fVar26 + fVar16 * fVar25 + fVar17 * fVar31;
          if (fVar27 <= 0.008856) {
            fVar30 = fVar27 * 7.787 + 0.13793103;
          }
          else {
            fVar30 = fVar27;
            _powf(fVar27,0x3eaaaaab);
          }
          fVar25 = fVar33 * fVar26 + fVar18 * fVar25 + fVar32 * fVar31;
          if (fVar25 <= 0.008856) {
            fVar25 = fVar25 * 7.787 + 0.13793103;
          }
          else {
            _powf(fVar25,0x3eaaaaab);
          }
          fVar26 = fVar30 * 116.0 + -16.0;
          if (fVar27 <= 0.008856) {
            fVar26 = fVar27 * 903.3;
          }
          pfVar13[-1] = fVar26;
          *pfVar13 = (fVar19 - fVar30) * 500.0;
          pfVar13[1] = (fVar30 - fVar25) * 200.0;
          uVar14 = uVar14 + 3;
          pfVar12 = pfVar12 + iVar9;
          pfVar13 = pfVar13 + 3;
        } while (uVar14 < (ulong)uVar8 * 3);
      }
      iVar2 = iVar2 + 1;
      pfStack_f0 = (float *)((long)pfStack_f0 + lVar7);
      pfStack_f8 = (float *)((long)pfStack_f8 + lVar6);
    } while (iVar2 != iVar3);
  }
  return;
}



/* Entry: 109ad7be4; end: 109ad7beb;  */

void FUN_109ad7be4(void)

{
  return;
}



/* Entry: 109ad7bec; end: 109ad833f;  */

void FUN_109ad7bec(int *param_1,float *param_2,float *param_3,ulong param_4)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint3 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  uint uVar20;
  float *pfVar21;
  int iVar22;
  ulong uVar23;
  float *pfVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  int *piVar28;
  byte *pbVar29;
  byte *pbVar30;
  long lVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  float afStack_ca0 [768];
  long lStack_a0;
  
  iVar22 = (int)param_4;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar2 = *param_2;
  fVar35 = param_2[1];
  pfVar21 = param_2;
  if ((int)fVar2 < (int)fVar35) {
    lVar26 = *(long *)(param_1 + 2);
    lVar25 = *(long *)(param_1 + 4);
    lVar31 = *(long *)(lVar25 + 0x10) + **(long **)(lVar25 + 0x48) * (long)(int)fVar2;
    pbVar29 = (byte *)(*(long *)(lVar26 + 0x10) + **(long **)(lVar26 + 0x48) * (long)(int)fVar2);
    iVar4 = 0x132e8de0;
    do {
      iVar22 = *(int *)(lVar26 + 0xc);
      if (0 < iVar22) {
        iVar27 = 0;
        piVar28 = *(int **)(param_1 + 6);
        iVar3 = *piVar28;
        pbVar30 = pbVar29;
        lVar26 = lVar31;
        do {
          uVar20 = iVar22 - iVar27;
          if (0xff < (int)uVar20) {
            uVar20 = 0x100;
          }
          param_4 = (ulong)uVar20;
          iVar8 = uVar20 * 3;
          uVar23 = 0;
          uVar20 = iVar8 - 0x18;
          if (-1 < (int)uVar20) {
            fVar35 = (float)piVar28[0x14];
            fVar50 = (float)piVar28[0x15];
            fVar51 = (float)piVar28[0x16];
            fVar52 = (float)piVar28[0x17];
            pfVar21 = afStack_ca0;
            do {
              if (iVar3 == 3) {
                uVar39 = CONCAT17(pbVar30[0x15],
                                  CONCAT16(pbVar30[0x12],
                                           CONCAT15(pbVar30[0xf],
                                                    CONCAT14(pbVar30[0xc],
                                                             CONCAT13(pbVar30[9],
                                                                      CONCAT12(pbVar30[6],
                                                                               CONCAT11(pbVar30[3],
                                                                                        *pbVar30))))
                                                   )));
                uVar41 = CONCAT17(pbVar30[0x16],
                                  CONCAT16(pbVar30[0x13],
                                           CONCAT15(pbVar30[0x10],
                                                    CONCAT14(pbVar30[0xd],
                                                             CONCAT13(pbVar30[10],
                                                                      CONCAT12(pbVar30[7],
                                                                               CONCAT11(pbVar30[4],
                                                                                        pbVar30[1]))
                                                                     )))));
                uVar36 = CONCAT17(pbVar30[0x17],
                                  CONCAT16(pbVar30[0x14],
                                           CONCAT15(pbVar30[0x11],
                                                    CONCAT14(pbVar30[0xe],
                                                             CONCAT13(pbVar30[0xb],
                                                                      CONCAT12(pbVar30[8],
                                                                               CONCAT11(pbVar30[5],
                                                                                        pbVar30[2]))
                                                                     )))));
              }
              else {
                uVar39 = CONCAT17(pbVar30[0x1c],
                                  CONCAT16(pbVar30[0x18],
                                           CONCAT15(pbVar30[0x14],
                                                    CONCAT14(pbVar30[0x10],
                                                             CONCAT13(pbVar30[0xc],
                                                                      CONCAT12(pbVar30[8],
                                                                               CONCAT11(pbVar30[4],
                                                                                        *pbVar30))))
                                                   )));
                uVar41 = CONCAT17(pbVar30[0x1d],
                                  CONCAT16(pbVar30[0x19],
                                           CONCAT15(pbVar30[0x15],
                                                    CONCAT14(pbVar30[0x11],
                                                             CONCAT13(pbVar30[0xd],
                                                                      CONCAT12(pbVar30[9],
                                                                               CONCAT11(pbVar30[5],
                                                                                        pbVar30[1]))
                                                                     )))));
                uVar36 = CONCAT17(pbVar30[0x1e],
                                  CONCAT16(pbVar30[0x1a],
                                           CONCAT15(pbVar30[0x16],
                                                    CONCAT14(pbVar30[0x12],
                                                             CONCAT13(pbVar30[0xe],
                                                                      CONCAT12(pbVar30[10],
                                                                               CONCAT11(pbVar30[6],
                                                                                        pbVar30[2]))
                                                                     )))));
              }
              uVar32 = (undefined1)((ulong)uVar39 >> 8);
              uVar7 = CONCAT12((char)((ulong)uVar41 >> 8),(short)uVar41) & 0xff00ff;
              uVar34 = (undefined1)((ulong)uVar41 >> 0x28);
              uVar33 = (undefined1)((ulong)uVar36 >> 8);
              auVar54._6_2_ = 0;
              auVar54._0_6_ =
                   (uint6)CONCAT14(uVar32,(uint)CONCAT12(uVar32,(ushort)(byte)uVar39)) &
                   0xffff0000ffff;
              auVar54[8] = (char)((ulong)uVar39 >> 0x10);
              auVar54._9_3_ = 0;
              auVar54[0xc] = (char)((ulong)uVar39 >> 0x18);
              auVar54._13_3_ = 0;
              auVar42 = NEON_ucvtf(auVar54,4);
              auVar53._6_2_ = 0;
              auVar53._0_6_ = (uint6)CONCAT14((char)(uVar7 >> 0x10),(uint)uVar7) & 0xffff0000ffff;
              auVar53[8] = (char)((ulong)uVar41 >> 0x10);
              auVar53._9_3_ = 0;
              auVar53[0xc] = (char)((ulong)uVar41 >> 0x18);
              auVar53._13_3_ = 0;
              auVar54 = NEON_ucvtf(auVar53,4);
              auVar55._6_2_ = 0;
              auVar55._0_6_ =
                   (uint6)CONCAT14(uVar33,(uint)CONCAT12(uVar33,(ushort)(byte)uVar36)) &
                   0xffff0000ffff;
              auVar55[8] = (char)((ulong)uVar36 >> 0x10);
              auVar55._9_3_ = 0;
              auVar55[0xc] = (char)((ulong)uVar36 >> 0x18);
              auVar55._13_3_ = 0;
              auVar56 = NEON_ucvtf(auVar55,4);
              *pfVar21 = fVar35 * auVar42._0_4_;
              pfVar21[1] = fVar35 * auVar54._0_4_;
              pfVar21[2] = fVar35 * auVar56._0_4_;
              pfVar21[3] = fVar50 * auVar42._4_4_;
              pfVar21[4] = fVar50 * auVar54._4_4_;
              pfVar21[5] = fVar50 * auVar56._4_4_;
              pfVar21[6] = fVar51 * auVar42._8_4_;
              pfVar21[7] = fVar51 * auVar54._8_4_;
              pfVar21[8] = fVar51 * auVar56._8_4_;
              pfVar21[9] = fVar52 * auVar42._12_4_;
              pfVar21[10] = fVar52 * auVar54._12_4_;
              pfVar21[0xb] = fVar52 * auVar56._12_4_;
              auVar56._1_3_ = 0;
              auVar56[0] = (byte)((ulong)uVar39 >> 0x20);
              auVar56[4] = (char)((ulong)uVar39 >> 0x28);
              auVar56._5_3_ = 0;
              auVar56[8] = (char)((ulong)uVar39 >> 0x30);
              auVar56._9_3_ = 0;
              auVar56[0xc] = (char)((ulong)uVar39 >> 0x38);
              auVar56._13_3_ = 0;
              auVar54 = NEON_ucvtf(auVar56,4);
              auVar48._6_2_ = 0;
              auVar48._0_6_ =
                   (uint6)CONCAT14(uVar34,(uint)CONCAT12(uVar34,(ushort)(byte)((ulong)uVar41 >> 0x20
                                                                              ))) & 0xffff0000ffff;
              auVar48[8] = (char)((ulong)uVar41 >> 0x30);
              auVar48._9_3_ = 0;
              auVar48[0xc] = (char)((ulong)uVar41 >> 0x38);
              auVar48._13_3_ = 0;
              auVar56 = NEON_ucvtf(auVar48,4);
              auVar42._1_3_ = 0;
              auVar42[0] = (byte)((ulong)uVar36 >> 0x20);
              auVar42[4] = (char)((ulong)uVar36 >> 0x28);
              auVar42._5_3_ = 0;
              auVar42[8] = (char)((ulong)uVar36 >> 0x30);
              auVar42._9_3_ = 0;
              auVar42[0xc] = (char)((ulong)uVar36 >> 0x38);
              auVar42._13_3_ = 0;
              auVar42 = NEON_ucvtf(auVar42,4);
              pfVar21[0xc] = fVar35 * auVar54._0_4_;
              pfVar21[0xd] = fVar35 * auVar56._0_4_;
              pfVar21[0xe] = fVar35 * auVar42._0_4_;
              pfVar21[0xf] = fVar50 * auVar54._4_4_;
              pfVar21[0x10] = fVar50 * auVar56._4_4_;
              pfVar21[0x11] = fVar50 * auVar42._4_4_;
              pfVar21[0x12] = fVar51 * auVar54._8_4_;
              pfVar21[0x13] = fVar51 * auVar56._8_4_;
              pfVar21[0x14] = fVar51 * auVar42._8_4_;
              pfVar21[0x15] = fVar52 * auVar54._12_4_;
              pfVar21[0x16] = fVar52 * auVar56._12_4_;
              pfVar21[0x17] = fVar52 * auVar42._12_4_;
              uVar23 = uVar23 + 0x18;
              pbVar30 = pbVar30 + (long)iVar3 * 8;
              pfVar21 = pfVar21 + 0x18;
            } while (uVar23 <= uVar20);
            uVar23 = uVar23 & 0xffffffff;
          }
          if ((int)uVar23 < iVar8) {
            pfVar21 = (float *)(((ulong)afStack_ca0 | 4) + uVar23 * 4);
            do {
              fVar35 = (float)NEON_ucvtf((uint)*pbVar30);
              pfVar21[-1] = fVar35 * 0.003921569;
              fVar35 = (float)NEON_ucvtf((uint)pbVar30[1]);
              *pfVar21 = fVar35 * 0.003921569;
              fVar35 = (float)NEON_ucvtf((uint)pbVar30[2]);
              pfVar21[1] = fVar35 * 0.003921569;
              uVar23 = uVar23 + 3;
              pbVar30 = pbVar30 + iVar3;
              pfVar21 = pfVar21 + 3;
            } while ((long)uVar23 < (long)iVar8);
          }
          pfVar21 = afStack_ca0;
          param_3 = afStack_ca0;
          FUN_109ad8340(piVar28 + 1);
          if ((int)uVar20 < 0) {
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            pfVar24 = afStack_ca0;
            do {
              fVar62 = *pfVar24;
              fVar66 = pfVar24[1];
              fVar70 = pfVar24[2];
              fVar63 = pfVar24[3];
              fVar67 = pfVar24[4];
              fVar71 = pfVar24[5];
              fVar64 = pfVar24[6];
              fVar68 = pfVar24[7];
              fVar72 = pfVar24[8];
              fVar65 = pfVar24[9];
              fVar69 = pfVar24[10];
              fVar73 = pfVar24[0xb];
              fVar35 = pfVar24[0xd];
              auVar49._0_8_ = CONCAT44(pfVar24[0xf],pfVar24[0xc]);
              fVar50 = pfVar24[0x10];
              auVar57._0_8_ = CONCAT44(pfVar24[0x11],pfVar24[0xe]);
              auVar49._8_4_ = pfVar24[0x12];
              fVar51 = pfVar24[0x13];
              auVar57._8_4_ = pfVar24[0x14];
              auVar49._12_4_ = pfVar24[0x15];
              fVar52 = pfVar24[0x16];
              auVar57._12_4_ = pfVar24[0x17];
              auVar42 = *(undefined1 (*) [16])(piVar28 + 0x10);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uVar39 = auVar49._8_8_;
                uVar41 = auVar57._8_8_;
                iVar19 = iVar4;
                ___cxa_guard_acquire();
                auVar49._8_8_ = uVar39;
                auVar57._8_8_ = uVar41;
                if (iVar19 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                }
              }
              uVar39 = uRam00000001132e8dd0;
              auVar43._8_4_ = fRam00000001132e8dd8;
              auVar43._0_8_ = uRam00000001132e8dd0;
              auVar43._12_4_ = fRam00000001132e8ddc;
              auVar54 = *(undefined1 (*) [16])(piVar28 + 0x10);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uVar41 = auVar43._8_8_;
                iVar19 = iVar4;
                ___cxa_guard_acquire();
                auVar43._8_8_ = uVar41;
                auVar43._0_8_ = uVar39;
                if (iVar19 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                }
              }
              fVar15 = fRam00000001132e8ddc;
              fVar11 = fRam00000001132e8dd8;
              uVar36 = uRam00000001132e8dd0;
              auVar56 = *(undefined1 (*) [16])(piVar28 + 0x18);
              uVar41 = *(undefined8 *)(piVar28 + 0x1e);
              uVar39 = *(undefined8 *)(piVar28 + 0x1c);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar19 = iVar4, ___cxa_guard_acquire(), iVar19 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                uRam00000001132e8dd0 = 0x3f0000003f000000;
                ___cxa_guard_release(0x1132e8de0);
              }
              fVar16 = fRam00000001132e8ddc;
              fVar12 = fRam00000001132e8dd8;
              uVar58 = uRam00000001132e8dd0;
              uVar60 = *(undefined8 *)(piVar28 + 0x1a);
              uVar59 = *(undefined8 *)(piVar28 + 0x18);
              uVar74 = *(undefined8 *)(piVar28 + 0x1e);
              uVar61 = *(undefined8 *)(piVar28 + 0x1c);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar19 = iVar4, ___cxa_guard_acquire(), iVar19 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                uRam00000001132e8dd0 = 0x3f0000003f000000;
                ___cxa_guard_release(0x1132e8de0);
              }
              fVar17 = fRam00000001132e8ddc;
              fVar13 = fRam00000001132e8dd8;
              uVar9 = uRam00000001132e8dd0;
              uVar76 = *(undefined8 *)(piVar28 + 0x22);
              uVar75 = *(undefined8 *)(piVar28 + 0x20);
              uVar78 = *(undefined8 *)(piVar28 + 0x26);
              uVar77 = *(undefined8 *)(piVar28 + 0x24);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar19 = iVar4, ___cxa_guard_acquire(), iVar19 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                uRam00000001132e8dd0 = 0x3f0000003f000000;
                ___cxa_guard_release(0x1132e8de0);
              }
              fVar18 = fRam00000001132e8ddc;
              fVar14 = fRam00000001132e8dd8;
              uVar10 = uRam00000001132e8dd0;
              uVar80 = *(undefined8 *)(piVar28 + 0x22);
              uVar79 = *(undefined8 *)(piVar28 + 0x20);
              uVar82 = *(undefined8 *)(piVar28 + 0x26);
              uVar81 = *(undefined8 *)(piVar28 + 0x24);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar19 = iVar4, ___cxa_guard_acquire(), iVar19 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                uRam00000001132e8dd0 = 0x3f0000003f000000;
                ___cxa_guard_release(0x1132e8de0);
              }
              auVar37._0_8_ =
                   CONCAT44((int)(fVar63 * auVar42._4_4_ + auVar43._4_4_),
                            (int)(fVar62 * auVar42._0_4_ + auVar43._0_4_));
              auVar37._8_4_ = (int)(fVar64 * auVar42._8_4_ + auVar43._8_4_);
              auVar37._12_4_ = (int)(fVar65 * auVar42._12_4_ + auVar43._12_4_);
              auVar38._8_8_ = auVar37._8_8_;
              auVar38._0_8_ = NEON_uqxtn(auVar37._0_8_,auVar37,4);
              auVar40._0_8_ =
                   CONCAT44((int)(auVar49._4_4_ * auVar54._4_4_ + (float)((ulong)uVar36 >> 0x20)),
                            (int)(auVar49._0_4_ * auVar54._0_4_ + (float)uVar36));
              auVar40._8_4_ = (int)(auVar49._8_4_ * auVar54._8_4_ + fVar11);
              auVar40._12_4_ = (int)(auVar49._12_4_ * auVar54._12_4_ + fVar15);
              auVar42 = NEON_uqxtn2(auVar38,auVar40,4);
              uVar36 = NEON_uqxtn(auVar42._0_8_,auVar42,2);
              auVar44._0_8_ =
                   CONCAT44((int)(fVar67 * auVar56._4_4_ + (float)((ulong)uVar39 >> 0x20) +
                                 (float)((ulong)uVar58 >> 0x20)),
                            (int)(fVar66 * auVar56._0_4_ + (float)uVar39 + (float)uVar58));
              auVar44._8_4_ = (int)(fVar68 * auVar56._8_4_ + (float)uVar41 + fVar12);
              auVar44._12_4_ =
                   (int)(fVar69 * auVar56._12_4_ + (float)((ulong)uVar41 >> 0x20) + fVar16);
              auVar45._8_8_ = auVar44._8_8_;
              auVar45._0_8_ = NEON_uqxtn(auVar44._0_8_,auVar44,4);
              iVar19 = (int)(fVar50 * (float)((ulong)uVar59 >> 0x20) +
                             (float)((ulong)uVar61 >> 0x20) + (float)((ulong)uVar9 >> 0x20));
              auVar5[4] = (char)iVar19;
              auVar5._0_4_ = (int)(fVar35 * (float)uVar59 + (float)uVar61 + (float)uVar9);
              auVar5[5] = (char)((uint)iVar19 >> 8);
              auVar5[6] = (char)((uint)iVar19 >> 0x10);
              auVar5[7] = (char)((uint)iVar19 >> 0x18);
              auVar5._8_4_ = (int)(fVar51 * (float)uVar60 + (float)uVar74 + fVar13);
              auVar5._12_4_ =
                   (int)(fVar52 * (float)((ulong)uVar60 >> 0x20) + (float)((ulong)uVar74 >> 0x20) +
                        fVar17);
              auVar42 = NEON_uqxtn2(auVar45,auVar5,4);
              uVar39 = NEON_uqxtn(auVar40._0_8_,auVar42,2);
              auVar46._0_8_ =
                   CONCAT44((int)(fVar71 * (float)((ulong)uVar75 >> 0x20) +
                                  (float)((ulong)uVar77 >> 0x20) + (float)((ulong)uVar10 >> 0x20)),
                            (int)(fVar70 * (float)uVar75 + (float)uVar77 + (float)uVar10));
              auVar46._8_4_ = (int)(fVar72 * (float)uVar76 + (float)uVar78 + fVar14);
              auVar46._12_4_ =
                   (int)(fVar73 * (float)((ulong)uVar76 >> 0x20) + (float)((ulong)uVar78 >> 0x20) +
                        fVar18);
              auVar47._8_8_ = auVar46._8_8_;
              auVar47._0_8_ = NEON_uqxtn(auVar46._0_8_,auVar46,4);
              iVar19 = (int)(auVar57._4_4_ * (float)((ulong)uVar79 >> 0x20) +
                             (float)((ulong)uVar81 >> 0x20) +
                            (float)((ulong)uRam00000001132e8dd0 >> 0x20));
              auVar6[4] = (char)iVar19;
              auVar6._0_4_ = (int)(auVar57._0_4_ * (float)uVar79 + (float)uVar81 +
                                  (float)uRam00000001132e8dd0);
              auVar6[5] = (char)((uint)iVar19 >> 8);
              auVar6[6] = (char)((uint)iVar19 >> 0x10);
              auVar6[7] = (char)((uint)iVar19 >> 0x18);
              auVar6._8_4_ = (int)(auVar57._8_4_ * (float)uVar80 + (float)uVar82 +
                                  fRam00000001132e8dd8);
              auVar6._12_4_ =
                   (int)(auVar57._12_4_ * (float)((ulong)uVar80 >> 0x20) +
                         (float)((ulong)uVar82 >> 0x20) + fRam00000001132e8ddc);
              auVar42 = NEON_uqxtn2(auVar47,auVar6,4);
              uVar41 = NEON_uqxtn(auVar43._0_8_,auVar42,2);
              puVar1 = (undefined1 *)(lVar26 + uVar23);
              *puVar1 = (char)uVar36;
              puVar1[1] = (char)uVar39;
              puVar1[2] = (char)uVar41;
              puVar1[3] = (char)((ulong)uVar36 >> 8);
              puVar1[4] = (char)((ulong)uVar39 >> 8);
              puVar1[5] = (char)((ulong)uVar41 >> 8);
              puVar1[6] = (char)((ulong)uVar36 >> 0x10);
              puVar1[7] = (char)((ulong)uVar39 >> 0x10);
              puVar1[8] = (char)((ulong)uVar41 >> 0x10);
              puVar1[9] = (char)((ulong)uVar36 >> 0x18);
              puVar1[10] = (char)((ulong)uVar39 >> 0x18);
              puVar1[0xb] = (char)((ulong)uVar41 >> 0x18);
              puVar1[0xc] = (char)((ulong)uVar36 >> 0x20);
              puVar1[0xd] = (char)((ulong)uVar39 >> 0x20);
              puVar1[0xe] = (char)((ulong)uVar41 >> 0x20);
              puVar1[0xf] = (char)((ulong)uVar36 >> 0x28);
              puVar1[0x10] = (char)((ulong)uVar39 >> 0x28);
              puVar1[0x11] = (char)((ulong)uVar41 >> 0x28);
              puVar1[0x12] = (char)((ulong)uVar36 >> 0x30);
              puVar1[0x13] = (char)((ulong)uVar39 >> 0x30);
              puVar1[0x14] = (char)((ulong)uVar41 >> 0x30);
              puVar1[0x15] = (char)((ulong)uVar36 >> 0x38);
              puVar1[0x16] = (char)((ulong)uVar39 >> 0x38);
              puVar1[0x17] = (char)((ulong)uVar41 >> 0x38);
              uVar23 = uVar23 + 0x18;
              pfVar24 = pfVar24 + 0x18;
            } while ((int)uVar23 <= (int)uVar20);
            uVar23 = uVar23 & 0xffffffff;
          }
          if ((int)uVar23 < iVar8) {
            pfVar24 = (float *)(((ulong)afStack_ca0 | 8) + uVar23 * 4);
            do {
              uVar20 = (uint)(long)(float)(int)(pfVar24[-2] * 2.55);
              uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar20) {
                uVar20 = 0xff;
              }
              puVar1 = (undefined1 *)(lVar26 + uVar23);
              *puVar1 = (char)uVar20;
              uVar20 = (uint)(long)(float)(int)(pfVar24[-1] * 0.720339 + 96.52542);
              uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar20) {
                uVar20 = 0xff;
              }
              puVar1[1] = (char)uVar20;
              uVar20 = (uint)(long)(float)(int)(*pfVar24 * 0.97328246 + 136.25954);
              uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar20) {
                uVar20 = 0xff;
              }
              puVar1[2] = (char)uVar20;
              uVar23 = uVar23 + 3;
              pfVar24 = pfVar24 + 3;
            } while ((int)uVar23 < iVar8);
          }
          iVar27 = iVar27 + 0x100;
          lVar26 = lVar26 + 0x300;
        } while (iVar27 < iVar22);
        lVar26 = *(long *)(param_1 + 2);
        lVar25 = *(long *)(param_1 + 4);
        fVar35 = param_2[1];
      }
      iVar22 = (int)param_4;
      fVar2 = (float)((int)fVar2 + 1);
      pbVar29 = pbVar29 + *(long *)(lVar26 + 0x50);
      lVar31 = lVar31 + *(long *)(lVar25 + 0x50);
    } while ((int)fVar2 < (int)fVar35);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  if (0 < iVar22) {
    uVar23 = 0;
    fVar35 = (float)param_1[1];
    fVar50 = (float)param_1[2];
    fVar51 = (float)param_1[3];
    fVar52 = (float)param_1[4];
    fVar2 = (float)param_1[5];
    fVar62 = (float)param_1[6];
    uVar39 = *(undefined8 *)(param_1 + 10);
    iVar4 = *param_1;
    uVar41 = NEON_fmov(0xc1500000,4);
    pfVar21 = pfVar21 + 1;
    fVar63 = (float)param_1[7];
    fVar64 = (float)param_1[8];
    fVar65 = (float)param_1[9];
    iVar27 = param_1[0xc];
    pfVar24 = param_3 + 1;
    do {
      fVar66 = pfVar21[-1];
      uVar36 = *(undefined8 *)pfVar21;
      if ((char)iVar27 != '\0') {
        uVar20 = (int)(fVar66 * 1024.0) & ((int)(fVar66 * 1024.0) >> 0x1f ^ 0xffffffffU);
        if (0x3fe < (int)uVar20) {
          uVar20 = 0x3ff;
        }
        fVar66 = fVar66 * 1024.0 - (float)uVar20;
        lVar31 = (ulong)(uVar20 << 2) * 4;
        uVar58 = NEON_fcvtzs(uVar36,10,4);
        uVar58 = NEON_smax(uVar58,0,4);
        uVar58 = NEON_smin(uVar58,0x3ff000003ff,4);
        uVar60 = NEON_ucvtf(uVar58,4);
        lVar26 = (ulong)(uint)((int)uVar58 << 2) * 4;
        uVar61 = *(undefined8 *)(lVar26 + 0x113750928);
        uVar59 = *(undefined8 *)(lVar26 + 0x113750930);
        fVar66 = *(float *)(lVar31 + 0x113750928) +
                 fVar66 * (*(float *)(lVar31 + 0x11375092c) +
                          fVar66 * (*(float *)(lVar31 + 0x113750930) +
                                   fVar66 * *(float *)(lVar31 + 0x113750934)));
        fVar67 = (float)uVar36 * 1024.0 - (float)uVar60;
        fVar68 = (float)((ulong)uVar36 >> 0x20) * 1024.0 - (float)((ulong)uVar60 >> 0x20);
        lVar31 = (ulong)(uint)((int)((ulong)uVar58 >> 0x20) << 2) * 4;
        uVar36 = *(undefined8 *)(lVar31 + 0x113750928);
        uVar58 = *(undefined8 *)(lVar31 + 0x113750930);
        uVar36 = CONCAT44((float)uVar36 +
                          fVar68 * ((float)((ulong)uVar36 >> 0x20) +
                                   fVar68 * ((float)uVar58 + fVar68 * (float)((ulong)uVar58 >> 0x20)
                                            )),
                          (float)uVar61 +
                          fVar67 * ((float)((ulong)uVar61 >> 0x20) +
                                   fVar67 * ((float)uVar59 + fVar67 * (float)((ulong)uVar59 >> 0x20)
                                            )));
      }
      fVar68 = (float)uVar36;
      fVar69 = (float)((ulong)uVar36 >> 0x20);
      fVar70 = fVar50 * fVar68 + fVar35 * fVar66 + fVar51 * fVar69;
      fVar67 = fVar2 * fVar68 + fVar52 * fVar66 + fVar62 * fVar69;
      uVar20 = (uint)(fVar67 * 682.6667);
      uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
      if (0x3fe < (int)uVar20) {
        uVar20 = 0x3ff;
      }
      fVar71 = fVar67 * 682.6667 - (float)uVar20;
      lVar31 = (ulong)(uVar20 << 2) * 4;
      pfVar21 = pfVar21 + iVar4;
      fVar71 = (*(float *)(lVar31 + 0x11374c928) +
               fVar71 * (*(float *)(lVar31 + 0x11374c92c) +
                        fVar71 * (*(float *)(lVar31 + 0x11374c930) +
                                 fVar71 * *(float *)(lVar31 + 0x11374c934)))) * 116.0 + -16.0;
      fVar68 = fVar70 + fVar67 * 15.0 + (fVar64 * fVar68 + fVar63 * fVar66 + fVar65 * fVar69) * 3.0;
      fVar66 = 1.1920929e-07;
      if (1.1920929e-07 <= fVar68) {
        fVar66 = fVar68;
      }
      pfVar24[-1] = fVar71;
      *(ulong *)pfVar24 =
           CONCAT44(((float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar41 >> 0x20) +
                    fVar67 * 2.25 * (52.0 / fVar66)) * fVar71,
                    ((float)uVar39 * (float)uVar41 + fVar70 * (52.0 / fVar66)) * fVar71);
      uVar23 = uVar23 + 3;
      pfVar24 = pfVar24 + 3;
    } while (uVar23 < (uint)(iVar22 * 3));
  }
  return;
}



/* Entry: 109ad8340; end: 109ad8523;  */

void FUN_109ad8340(int *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  if (0 < param_4) {
    uVar6 = 0;
    fVar9 = (float)param_1[1];
    fVar10 = (float)param_1[2];
    fVar11 = (float)param_1[3];
    fVar12 = (float)param_1[4];
    fVar13 = (float)param_1[5];
    fVar14 = (float)param_1[6];
    uVar15 = *(undefined8 *)(param_1 + 10);
    iVar3 = *param_1;
    uVar16 = NEON_fmov(0xc1500000,4);
    puVar8 = (undefined8 *)(param_2 + 4);
    fVar21 = (float)param_1[7];
    fVar22 = (float)param_1[8];
    fVar23 = (float)param_1[9];
    iVar4 = param_1[0xc];
    puVar7 = (undefined8 *)(param_3 + 4);
    do {
      fVar27 = *(float *)((long)puVar8 + -4);
      uVar25 = *puVar8;
      if ((char)iVar4 != '\0') {
        uVar5 = (int)(fVar27 * 1024.0) & ((int)(fVar27 * 1024.0) >> 0x1f ^ 0xffffffffU);
        if (0x3fe < (int)uVar5) {
          uVar5 = 0x3ff;
        }
        fVar27 = fVar27 * 1024.0 - (float)uVar5;
        lVar1 = (ulong)(uVar5 << 2) * 4;
        uVar17 = NEON_fcvtzs(uVar25,10,4);
        uVar17 = NEON_smax(uVar17,0,4);
        uVar17 = NEON_smin(uVar17,0x3ff000003ff,4);
        uVar19 = NEON_ucvtf(uVar17,4);
        lVar2 = (ulong)(uint)((int)uVar17 << 2) * 4;
        uVar20 = *(undefined8 *)(lVar2 + 0x113750928);
        uVar18 = *(undefined8 *)(lVar2 + 0x113750930);
        fVar27 = *(float *)(lVar1 + 0x113750928) +
                 fVar27 * (*(float *)(lVar1 + 0x11375092c) +
                          fVar27 * (*(float *)(lVar1 + 0x113750930) +
                                   fVar27 * *(float *)(lVar1 + 0x113750934)));
        fVar28 = (float)uVar25 * 1024.0 - (float)uVar19;
        fVar30 = (float)((ulong)uVar25 >> 0x20) * 1024.0 - (float)((ulong)uVar19 >> 0x20);
        lVar1 = (ulong)(uint)((int)((ulong)uVar17 >> 0x20) << 2) * 4;
        uVar25 = *(undefined8 *)(lVar1 + 0x113750928);
        uVar17 = *(undefined8 *)(lVar1 + 0x113750930);
        uVar25 = CONCAT44((float)uVar25 +
                          fVar30 * ((float)((ulong)uVar25 >> 0x20) +
                                   fVar30 * ((float)uVar17 + fVar30 * (float)((ulong)uVar17 >> 0x20)
                                            )),
                          (float)uVar20 +
                          fVar28 * ((float)((ulong)uVar20 >> 0x20) +
                                   fVar28 * ((float)uVar18 + fVar28 * (float)((ulong)uVar18 >> 0x20)
                                            )));
      }
      fVar30 = (float)uVar25;
      fVar26 = (float)((ulong)uVar25 >> 0x20);
      fVar29 = fVar10 * fVar30 + fVar9 * fVar27 + fVar11 * fVar26;
      fVar28 = fVar13 * fVar30 + fVar12 * fVar27 + fVar14 * fVar26;
      uVar5 = (uint)(fVar28 * 682.6667);
      uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
      if (0x3fe < (int)uVar5) {
        uVar5 = 0x3ff;
      }
      fVar24 = fVar28 * 682.6667 - (float)uVar5;
      lVar1 = (ulong)(uVar5 << 2) * 4;
      puVar8 = (undefined8 *)((long)puVar8 + (long)iVar3 * 4);
      fVar24 = (*(float *)(lVar1 + 0x11374c928) +
               fVar24 * (*(float *)(lVar1 + 0x11374c92c) +
                        fVar24 * (*(float *)(lVar1 + 0x11374c930) +
                                 fVar24 * *(float *)(lVar1 + 0x11374c934)))) * 116.0 + -16.0;
      fVar30 = fVar29 + fVar28 * 15.0 + (fVar22 * fVar30 + fVar21 * fVar27 + fVar23 * fVar26) * 3.0;
      fVar27 = 1.1920929e-07;
      if (1.1920929e-07 <= fVar30) {
        fVar27 = fVar30;
      }
      *(float *)((long)puVar7 + -4) = fVar24;
      *puVar7 = CONCAT44(((float)((ulong)uVar15 >> 0x20) * (float)((ulong)uVar16 >> 0x20) +
                         fVar28 * 2.25 * (52.0 / fVar27)) * fVar24,
                         ((float)uVar15 * (float)uVar16 + fVar29 * (52.0 / fVar27)) * fVar24);
      uVar6 = uVar6 + 3;
      puVar7 = (undefined8 *)((long)puVar7 + 0xc);
    } while (uVar6 < (uint)(param_4 * 3));
  }
  return;
}



/* Entry: 109ad8524; end: 109ad852b;  */

void FUN_109ad8524(void)

{
  return;
}



/* Entry: 109ad852c; end: 109ad85c7;  */

void FUN_109ad852c(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *param_2;
  if (iVar4 < param_2[1]) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) +
            **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar4;
    lVar3 = *(long *)(lVar1 + 0x10) + **(long **)(lVar1 + 0x48) * (long)iVar4;
    do {
      FUN_109ad8340(*(undefined8 *)(param_1 + 0x18),lVar3,lVar2,*(undefined4 *)(lVar1 + 0xc));
      iVar4 = iVar4 + 1;
      lVar1 = *(long *)(param_1 + 8);
      lVar3 = lVar3 + *(long *)(lVar1 + 0x50);
      lVar2 = lVar2 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar4 < param_2[1]);
  }
  return;
}



/* Entry: 109ad85c8; end: 109ad85cf;  */

void FUN_109ad85c8(void)

{
  return;
}



/* Entry: 109ad85d0; end: 109ad8cf7;  */

void FUN_109ad85d0(int *param_1,float *param_2,float *param_3,ulong param_4)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  bool bVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  int *piVar32;
  long lVar33;
  uint uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  undefined8 uVar53;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 uVar65;
  undefined1 auVar54 [16];
  undefined8 uVar66;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar87;
  undefined8 uVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  float fStack_e08;
  float fStack_e04;
  float afStack_c80 [768];
  long lStack_80;
  
  iVar23 = (int)param_4;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar2 = *param_2;
  fVar35 = param_2[1];
  pfVar22 = param_2;
  if ((int)fVar2 < (int)fVar35) {
    lVar27 = *(long *)(param_1 + 2);
    lVar26 = *(long *)(param_1 + 4);
    puVar30 = (undefined1 *)
              (*(long *)(lVar26 + 0x10) + **(long **)(lVar26 + 0x48) * (long)(int)fVar2);
    lVar33 = *(long *)(lVar27 + 0x10) + **(long **)(lVar27 + 0x48) * (long)(int)fVar2;
    iVar4 = 0x132e8de0;
    do {
      iVar23 = *(int *)(lVar27 + 0xc);
      if (0 < iVar23) {
        iVar28 = 0;
        piVar32 = *(int **)(param_1 + 6);
        iVar3 = *piVar32;
        puVar31 = puVar30;
        lVar27 = lVar33;
        do {
          uVar25 = iVar23 - iVar28;
          if (0xff < (int)uVar25) {
            uVar25 = 0x100;
          }
          param_4 = (ulong)uVar25;
          iVar13 = uVar25 * 3;
          uVar24 = 0;
          uVar25 = iVar13 - 0x18;
          if (-1 < (int)uVar25) {
            fVar35 = (float)piVar32[0x10];
            fVar89 = (float)piVar32[0x11];
            fVar90 = (float)piVar32[0x12];
            fVar91 = (float)piVar32[0x13];
            fVar92 = (float)*(undefined8 *)(piVar32 + 0x16);
            fVar93 = (float)((ulong)*(undefined8 *)(piVar32 + 0x16) >> 0x20);
            uVar6 = *(undefined8 *)(piVar32 + 0x14);
            pfVar22 = afStack_c80;
            do {
              pbVar1 = (byte *)(lVar27 + uVar24);
              bVar58 = pbVar1[0xc];
              bVar73 = pbVar1[0xd];
              bVar81 = pbVar1[0xe];
              bVar60 = pbVar1[0xf];
              bVar74 = pbVar1[0x10];
              bVar82 = pbVar1[0x11];
              bVar62 = pbVar1[0x12];
              bVar75 = pbVar1[0x13];
              bVar83 = pbVar1[0x14];
              bVar64 = pbVar1[0x15];
              bVar76 = pbVar1[0x16];
              bVar84 = pbVar1[0x17];
              auVar68._6_2_ = 0;
              auVar68._0_6_ =
                   (uint6)CONCAT14(pbVar1[3],(uint)CONCAT12(pbVar1[3],(ushort)*pbVar1)) &
                   0xffff0000ffff;
              auVar68[8] = pbVar1[6];
              auVar68._9_3_ = 0;
              auVar68[0xc] = pbVar1[9];
              auVar68._13_3_ = 0;
              auVar67 = NEON_ucvtf(auVar68,4);
              auVar70._6_2_ = 0;
              auVar70._0_6_ =
                   (uint6)CONCAT14(pbVar1[4],(uint)CONCAT12(pbVar1[4],(ushort)pbVar1[1])) &
                   0xffff0000ffff;
              auVar70[8] = pbVar1[7];
              auVar70._9_3_ = 0;
              auVar70[0xc] = pbVar1[10];
              auVar70._13_3_ = 0;
              auVar68 = NEON_ucvtf(auVar70,4);
              fVar94 = (float)uVar6;
              fVar95 = (float)((ulong)uVar6 >> 0x20);
              auVar69._6_2_ = 0;
              auVar69._0_6_ =
                   (uint6)CONCAT14(pbVar1[5],(uint)CONCAT12(pbVar1[5],(ushort)pbVar1[2])) &
                   0xffff0000ffff;
              auVar69[8] = pbVar1[8];
              auVar69._9_3_ = 0;
              auVar69[0xc] = pbVar1[0xb];
              auVar69._13_3_ = 0;
              auVar70 = NEON_ucvtf(auVar69,4);
              *pfVar22 = fVar35 * auVar67._0_4_;
              pfVar22[1] = auVar68._0_4_ - fVar94;
              pfVar22[2] = auVar70._0_4_ - fVar94;
              pfVar22[3] = fVar89 * auVar67._4_4_;
              pfVar22[4] = auVar68._4_4_ - fVar95;
              pfVar22[5] = auVar70._4_4_ - fVar95;
              pfVar22[6] = fVar90 * auVar67._8_4_;
              pfVar22[7] = auVar68._8_4_ - fVar92;
              pfVar22[8] = auVar70._8_4_ - fVar92;
              pfVar22[9] = fVar91 * auVar67._12_4_;
              pfVar22[10] = auVar68._12_4_ - fVar93;
              pfVar22[0xb] = auVar70._12_4_ - fVar93;
              auVar71._6_2_ = 0;
              auVar71._0_6_ =
                   (uint6)CONCAT14(bVar60,(uint)CONCAT12(bVar60,(ushort)bVar58)) & 0xffff0000ffff;
              auVar71[8] = bVar62;
              auVar71._9_3_ = 0;
              auVar71[0xc] = bVar64;
              auVar71._13_3_ = 0;
              auVar68 = NEON_ucvtf(auVar71,4);
              auVar85._1_3_ = 0;
              auVar85[0] = bVar73;
              auVar85[4] = bVar74;
              auVar85._5_3_ = 0;
              auVar85[8] = bVar75;
              auVar85._9_3_ = 0;
              auVar85[0xc] = bVar76;
              auVar85._13_3_ = 0;
              auVar70 = NEON_ucvtf(auVar85,4);
              auVar67._1_3_ = 0;
              auVar67[0] = bVar81;
              auVar67[4] = bVar82;
              auVar67._5_3_ = 0;
              auVar67[8] = bVar83;
              auVar67._9_3_ = 0;
              auVar67[0xc] = bVar84;
              auVar67._13_3_ = 0;
              auVar67 = NEON_ucvtf(auVar67,4);
              pfVar22[0xc] = fVar35 * auVar68._0_4_;
              pfVar22[0xd] = auVar70._0_4_ - fVar94;
              pfVar22[0xe] = auVar67._0_4_ - fVar94;
              pfVar22[0xf] = fVar89 * auVar68._4_4_;
              pfVar22[0x10] = auVar70._4_4_ - fVar95;
              pfVar22[0x11] = auVar67._4_4_ - fVar95;
              pfVar22[0x12] = fVar90 * auVar68._8_4_;
              pfVar22[0x13] = auVar70._8_4_ - fVar92;
              pfVar22[0x14] = auVar67._8_4_ - fVar92;
              pfVar22[0x15] = fVar91 * auVar68._12_4_;
              pfVar22[0x16] = auVar70._12_4_ - fVar93;
              pfVar22[0x17] = auVar67._12_4_ - fVar93;
              uVar24 = uVar24 + 0x18;
              pfVar22 = pfVar22 + 0x18;
            } while (uVar24 <= uVar25);
            uVar24 = uVar24 & 0xffffffff;
          }
          if ((int)uVar24 < iVar13) {
            pfVar22 = (float *)(((ulong)afStack_c80 | 4) + uVar24 * 4);
            do {
              pbVar1 = (byte *)(lVar27 + uVar24);
              fVar35 = (float)NEON_ucvtf((uint)*pbVar1);
              pfVar22[-1] = fVar35 * 0.39215687;
              *pfVar22 = (float)(int)(pbVar1[1] - 0x80);
              pfVar22[1] = (float)(int)(pbVar1[2] - 0x80);
              uVar24 = uVar24 + 3;
              pfVar22 = pfVar22 + 3;
            } while ((long)uVar24 < (long)iVar13);
          }
          pfVar22 = afStack_c80;
          param_3 = afStack_c80;
          FUN_109ad8cf8(piVar32 + 1);
          uVar34 = 0;
          if (-1 < (int)uVar25) {
            pfVar21 = afStack_c80;
            do {
              fVar100 = *pfVar21;
              fVar104 = pfVar21[1];
              fVar108 = pfVar21[2];
              fVar101 = pfVar21[3];
              fVar105 = pfVar21[4];
              fVar109 = pfVar21[5];
              fVar102 = pfVar21[6];
              fVar106 = pfVar21[7];
              fVar110 = pfVar21[8];
              fVar103 = pfVar21[9];
              fVar107 = pfVar21[10];
              fVar111 = pfVar21[0xb];
              fVar35 = pfVar21[0xc];
              fVar92 = pfVar21[0xd];
              fVar96 = pfVar21[0xe];
              fVar89 = pfVar21[0xf];
              fVar93 = pfVar21[0x10];
              fVar97 = pfVar21[0x11];
              fVar90 = pfVar21[0x12];
              fVar94 = pfVar21[0x13];
              fVar98 = pfVar21[0x14];
              fVar91 = pfVar21[0x15];
              fVar95 = pfVar21[0x16];
              fVar99 = pfVar21[0x17];
              auVar67 = *(undefined1 (*) [16])(piVar32 + 0xc);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar20 = iVar4, ___cxa_guard_acquire(), iVar20 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                uRam00000001132e8dd0 = 0x3f0000003f000000;
                ___cxa_guard_release(0x1132e8de0);
              }
              uVar53 = uRam00000001132e8dd0;
              auVar54._8_4_ = fRam00000001132e8dd8;
              auVar54._0_8_ = uRam00000001132e8dd0;
              auVar54._12_4_ = fRam00000001132e8ddc;
              uVar36 = *(undefined8 *)(piVar32 + 0xe);
              uVar6 = *(undefined8 *)(piVar32 + 0xc);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uVar66 = auVar54._8_8_;
                iVar20 = iVar4;
                ___cxa_guard_acquire();
                auVar54._8_8_ = uVar66;
                auVar54._0_8_ = uVar53;
                if (iVar20 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                }
              }
              uVar53 = uRam00000001132e8dd0;
              auVar72._8_4_ = fRam00000001132e8dd8;
              auVar72._0_8_ = uRam00000001132e8dd0;
              auVar72._12_4_ = fRam00000001132e8ddc;
              auVar68 = *(undefined1 (*) [16])(piVar32 + 0xc);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uVar66 = auVar72._8_8_;
                iVar20 = iVar4;
                ___cxa_guard_acquire();
                auVar72._8_8_ = uVar66;
                auVar72._0_8_ = uVar53;
                if (iVar20 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                }
              }
              uVar14 = uRam00000001132e8dd0;
              auVar86._8_4_ = fRam00000001132e8dd8;
              auVar86._0_8_ = uRam00000001132e8dd0;
              auVar86._12_4_ = fRam00000001132e8ddc;
              uVar66 = *(undefined8 *)(piVar32 + 0xe);
              uVar53 = *(undefined8 *)(piVar32 + 0xc);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uVar87 = auVar86._8_8_;
                iVar20 = iVar4;
                ___cxa_guard_acquire();
                auVar86._8_8_ = uVar87;
                auVar86._0_8_ = uVar14;
                if (iVar20 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  uRam00000001132e8dd0 = 0x3f0000003f000000;
                  ___cxa_guard_release(0x1132e8de0);
                }
              }
              fVar18 = fRam00000001132e8ddc;
              fVar16 = fRam00000001132e8dd8;
              uVar14 = uRam00000001132e8dd0;
              uVar88 = *(undefined8 *)(piVar32 + 0xe);
              uVar87 = *(undefined8 *)(piVar32 + 0xc);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar20 = iVar4, ___cxa_guard_acquire(), iVar20 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                uRam00000001132e8dd0 = 0x3f0000003f000000;
                ___cxa_guard_release(0x1132e8de0);
              }
              fVar19 = fRam00000001132e8ddc;
              fVar17 = fRam00000001132e8dd8;
              uVar15 = uRam00000001132e8dd0;
              uVar113 = *(undefined8 *)(piVar32 + 0xe);
              uVar112 = *(undefined8 *)(piVar32 + 0xc);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar20 = iVar4, ___cxa_guard_acquire(), iVar20 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                uRam00000001132e8dd0 = 0x3f0000003f000000;
                ___cxa_guard_release(0x1132e8de0);
              }
              auVar37._0_8_ =
                   CONCAT44((int)(fVar101 * auVar67._4_4_ + auVar54._4_4_),
                            (int)(fVar100 * auVar67._0_4_ + auVar54._0_4_));
              auVar37._8_4_ = (int)(fVar102 * auVar67._8_4_ + auVar54._8_4_);
              auVar37._12_4_ = (int)(fVar103 * auVar67._12_4_ + auVar54._12_4_);
              auVar38._8_8_ = auVar37._8_8_;
              auVar38._0_8_ = NEON_uqxtn(auVar37._0_8_,auVar37,4);
              iVar20 = (int)(fVar35 * (float)uVar6 + auVar72._0_4_);
              iVar7 = (int)(fVar89 * (float)((ulong)uVar6 >> 0x20) + auVar72._4_4_);
              uVar47 = (undefined1)((uint)iVar7 >> 8);
              uVar49 = (undefined1)((uint)iVar7 >> 0x10);
              uVar51 = (undefined1)((uint)iVar7 >> 0x18);
              auVar5[4] = (char)iVar7;
              auVar5._0_4_ = iVar20;
              auVar5[5] = uVar47;
              auVar5[6] = uVar49;
              auVar5[7] = uVar51;
              auVar5._8_4_ = (int)(fVar90 * (float)uVar36 + auVar72._8_4_);
              auVar5._12_4_ = (int)(fVar91 * (float)((ulong)uVar36 >> 0x20) + auVar72._12_4_);
              auVar67 = NEON_uqxtn2(auVar38,auVar5,4);
              uVar36 = NEON_uqxtn(auVar67._0_8_,auVar67,2);
              auVar77._0_8_ =
                   CONCAT44((int)(fVar105 * auVar68._4_4_ + auVar86._4_4_),
                            (int)(fVar104 * auVar68._0_4_ + auVar86._0_4_));
              auVar77._8_4_ = (int)(fVar106 * auVar68._8_4_ + auVar86._8_4_);
              auVar77._12_4_ = (int)(fVar107 * auVar68._12_4_ + auVar86._12_4_);
              auVar78._8_8_ = auVar77._8_8_;
              auVar78._0_8_ = NEON_uqxtn(auVar77._0_8_,auVar77,4);
              iVar10 = (int)(fVar93 * (float)((ulong)uVar53 >> 0x20) +
                            (float)((ulong)uVar14 >> 0x20));
              iVar11 = (int)(fVar94 * (float)uVar66 + fVar16);
              iVar12 = (int)(fVar95 * (float)((ulong)uVar66 >> 0x20) + fVar18);
              auVar8._4_2_ = (short)iVar10;
              auVar8._0_4_ = (int)(fVar92 * (float)uVar53 + (float)uVar14);
              auVar8._6_2_ = (short)((uint)iVar10 >> 0x10);
              auVar8._8_2_ = (short)iVar11;
              auVar8._10_2_ = (short)((uint)iVar11 >> 0x10);
              auVar8._12_2_ = (short)iVar12;
              auVar8._14_2_ = (short)((uint)iVar12 >> 0x10);
              auVar67 = NEON_uqxtn2(auVar78,auVar8,4);
              uVar6 = NEON_uqxtn(CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14((char)
                                                  iVar7,iVar20)))),auVar67,2);
              uVar43 = (undefined1)((ulong)uVar6 >> 8);
              uVar44 = (undefined1)((ulong)uVar6 >> 0x10);
              uVar45 = (undefined1)((ulong)uVar6 >> 0x18);
              uVar46 = (undefined1)((ulong)uVar6 >> 0x20);
              uVar48 = (undefined1)((ulong)uVar6 >> 0x28);
              uVar50 = (undefined1)((ulong)uVar6 >> 0x30);
              uVar52 = (undefined1)((ulong)uVar6 >> 0x38);
              auVar79._0_8_ =
                   CONCAT44((int)(fVar109 * (float)((ulong)uVar87 >> 0x20) +
                                 (float)((ulong)uVar15 >> 0x20)),
                            (int)(fVar108 * (float)uVar87 + (float)uVar15));
              auVar79._8_4_ = (int)(fVar110 * (float)uVar88 + fVar17);
              auVar79._12_4_ = (int)(fVar111 * (float)((ulong)uVar88 >> 0x20) + fVar19);
              auVar80._8_8_ = auVar79._8_8_;
              auVar80._0_8_ = NEON_uqxtn(auVar79._0_8_,auVar79,4);
              iVar20 = (int)(fVar97 * (float)((ulong)uVar112 >> 0x20) +
                            (float)((ulong)uRam00000001132e8dd0 >> 0x20));
              iVar7 = (int)(fVar98 * (float)uVar113 + fRam00000001132e8dd8);
              iVar10 = (int)(fVar99 * (float)((ulong)uVar113 >> 0x20) + fRam00000001132e8ddc);
              auVar9._4_2_ = (short)iVar20;
              auVar9._0_4_ = (int)(fVar96 * (float)uVar112 + (float)uRam00000001132e8dd0);
              auVar9._6_2_ = (short)((uint)iVar20 >> 0x10);
              auVar9._8_2_ = (short)iVar7;
              auVar9._10_2_ = (short)((uint)iVar7 >> 0x10);
              auVar9._12_2_ = (short)iVar10;
              auVar9._14_2_ = (short)((uint)iVar10 >> 0x10);
              auVar67 = NEON_uqxtn2(auVar80,auVar9,4);
              uVar53 = NEON_uqxtn(auVar54._0_8_,auVar67,2);
              uVar47 = (undefined1)((ulong)uVar36 >> 8);
              uVar49 = (undefined1)((ulong)uVar36 >> 0x10);
              uVar51 = (undefined1)((ulong)uVar36 >> 0x18);
              uVar39 = (undefined1)((ulong)uVar36 >> 0x20);
              uVar40 = (undefined1)((ulong)uVar36 >> 0x28);
              uVar41 = (undefined1)((ulong)uVar36 >> 0x30);
              uVar42 = (undefined1)((ulong)uVar36 >> 0x38);
              uVar55 = (undefined1)((ulong)uVar53 >> 8);
              uVar56 = (undefined1)((ulong)uVar53 >> 0x10);
              uVar57 = (undefined1)((ulong)uVar53 >> 0x18);
              uVar59 = (undefined1)((ulong)uVar53 >> 0x20);
              uVar61 = (undefined1)((ulong)uVar53 >> 0x28);
              uVar63 = (undefined1)((ulong)uVar53 >> 0x30);
              uVar65 = (undefined1)((ulong)uVar53 >> 0x38);
              if (iVar3 == 4) {
                uVar66 = *(undefined8 *)(piVar32 + 0x18);
                *puVar31 = (char)uVar36;
                puVar31[1] = (char)uVar6;
                puVar31[2] = (char)uVar53;
                puVar31[3] = (char)uVar66;
                puVar31[4] = uVar47;
                puVar31[5] = uVar43;
                puVar31[6] = uVar55;
                puVar31[7] = (char)((ulong)uVar66 >> 8);
                puVar31[8] = uVar49;
                puVar31[9] = uVar44;
                puVar31[10] = uVar56;
                puVar31[0xb] = (char)((ulong)uVar66 >> 0x10);
                puVar31[0xc] = uVar51;
                puVar31[0xd] = uVar45;
                puVar31[0xe] = uVar57;
                puVar31[0xf] = (char)((ulong)uVar66 >> 0x18);
                puVar31[0x10] = uVar39;
                puVar31[0x11] = uVar46;
                puVar31[0x12] = uVar59;
                puVar31[0x13] = (char)((ulong)uVar66 >> 0x20);
                puVar31[0x14] = uVar40;
                puVar31[0x15] = uVar48;
                puVar31[0x16] = uVar61;
                puVar31[0x17] = (char)((ulong)uVar66 >> 0x28);
                puVar31[0x18] = uVar41;
                puVar31[0x19] = uVar50;
                puVar31[0x1a] = uVar63;
                puVar31[0x1b] = (char)((ulong)uVar66 >> 0x30);
                puVar31[0x1c] = uVar42;
                puVar31[0x1d] = uVar52;
                puVar31[0x1e] = uVar65;
                puVar31[0x1f] = (char)((ulong)uVar66 >> 0x38);
              }
              else {
                *puVar31 = (char)uVar36;
                puVar31[1] = (char)uVar6;
                puVar31[2] = (char)uVar53;
                puVar31[3] = uVar47;
                puVar31[4] = uVar43;
                puVar31[5] = uVar55;
                puVar31[6] = uVar49;
                puVar31[7] = uVar44;
                puVar31[8] = uVar56;
                puVar31[9] = uVar51;
                puVar31[10] = uVar45;
                puVar31[0xb] = uVar57;
                puVar31[0xc] = uVar39;
                puVar31[0xd] = uVar46;
                puVar31[0xe] = uVar59;
                puVar31[0xf] = uVar40;
                puVar31[0x10] = uVar48;
                puVar31[0x11] = uVar61;
                puVar31[0x12] = uVar41;
                puVar31[0x13] = uVar50;
                puVar31[0x14] = uVar63;
                puVar31[0x15] = uVar42;
                puVar31[0x16] = uVar52;
                puVar31[0x17] = uVar65;
              }
              puVar31 = puVar31 + (long)iVar3 * 8;
              uVar34 = uVar34 + 0x18;
              pfVar21 = pfVar21 + 0x18;
            } while ((int)uVar34 <= (int)uVar25);
          }
          if ((int)uVar34 < iVar13) {
            pfVar21 = (float *)(((ulong)afStack_c80 | 4) + (ulong)uVar34 * 4);
            do {
              uVar25 = (uint)(long)(float)(int)(pfVar21[-1] * 255.0);
              uVar25 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar25) {
                uVar25 = 0xff;
              }
              *puVar31 = (char)uVar25;
              uVar25 = (uint)(long)(float)(int)(*pfVar21 * 255.0);
              uVar25 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar25) {
                uVar25 = 0xff;
              }
              puVar31[1] = (char)uVar25;
              uVar25 = (uint)(long)(float)(int)(pfVar21[1] * 255.0);
              uVar25 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar25) {
                uVar25 = 0xff;
              }
              puVar31[2] = (char)uVar25;
              if (iVar3 == 4) {
                puVar31[3] = 0xff;
              }
              pfVar21 = pfVar21 + 3;
              puVar31 = puVar31 + iVar3;
              uVar34 = uVar34 + 3;
            } while ((int)uVar34 < iVar13);
          }
          iVar28 = iVar28 + 0x100;
          lVar27 = lVar27 + 0x300;
        } while (iVar28 < iVar23);
        lVar27 = *(long *)(param_1 + 2);
        lVar26 = *(long *)(param_1 + 4);
        fVar35 = param_2[1];
      }
      iVar23 = (int)param_4;
      fVar2 = (float)((int)fVar2 + 1);
      lVar33 = lVar33 + *(long *)(lVar27 + 0x50);
      puVar30 = puVar30 + *(long *)(lVar26 + 0x50);
    } while ((int)fVar2 < (int)fVar35);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (0 < iVar23) {
    uVar24 = 0;
    bVar58 = *(byte *)(param_1 + 10);
    fVar89 = (float)param_1[1];
    fVar2 = (float)param_1[2];
    fVar90 = (float)param_1[3];
    fVar91 = (float)param_1[4];
    fVar92 = (float)param_1[5];
    fVar35 = (float)param_1[6];
    fVar93 = (float)param_1[7];
    fVar94 = (float)param_1[8];
    fVar95 = (float)param_1[9];
    fVar96 = 1.0;
    fVar97 = 0.0;
    iVar4 = *param_1;
    do {
      pfVar21 = pfVar22 + uVar24;
      fVar98 = *pfVar21;
      if (fVar98 <= 7.999625) {
        fVar98 = fVar98 / 903.3;
        fStack_e08 = fVar98 * 7.787 + 0.13793103;
      }
      else {
        fStack_e08 = (fVar98 + 16.0) / 116.0;
        fVar98 = fStack_e08 * fStack_e08 * fStack_e08;
      }
      fStack_e04 = pfVar21[1] / 500.0 + fStack_e08;
      fStack_e08 = fStack_e08 + pfVar21[2] / -200.0;
      pfVar21 = &fStack_e04;
      bVar29 = true;
      fVar99 = fStack_e04;
      while( true ) {
        if (fVar99 <= 0.20689271) {
          fVar99 = (fVar99 + -0.13793103) / 7.787;
        }
        else {
          fVar99 = fVar99 * fVar99 * fVar99;
        }
        *pfVar21 = fVar99;
        if (!bVar29) break;
        bVar29 = false;
        pfVar21 = &fStack_e08;
        fVar99 = fStack_e08;
      }
      fVar101 = fVar2 * fVar98 + fStack_e04 * fVar89 + fStack_e08 * fVar90;
      fVar99 = fVar92 * fVar98 + fStack_e04 * fVar91 + fStack_e08 * fVar35;
      fVar100 = fVar94 * fVar98 + fStack_e04 * fVar93 + fStack_e08 * fVar95;
      fVar98 = fVar96;
      if (fVar101 <= 1.0) {
        fVar98 = fVar101;
      }
      fVar102 = fVar97;
      if (0.0 <= fVar101) {
        fVar102 = fVar98;
      }
      fVar98 = fVar96;
      if (fVar99 <= 1.0) {
        fVar98 = fVar99;
      }
      fVar101 = fVar97;
      if (0.0 <= fVar99) {
        fVar101 = fVar98;
      }
      fVar98 = fVar96;
      if (fVar100 <= 1.0) {
        fVar98 = fVar100;
      }
      fVar99 = fVar97;
      if (0.0 <= fVar100) {
        fVar99 = fVar98;
      }
      if ((bVar58 & 1) != 0) {
        uVar25 = (int)(fVar102 * 1024.0) & ((int)(fVar102 * 1024.0) >> 0x1f ^ 0xffffffffU);
        if (0x3fe < (int)uVar25) {
          uVar25 = 0x3ff;
        }
        fVar98 = fVar102 * 1024.0 - (float)uVar25;
        lVar33 = (ulong)(uVar25 << 2) * 4;
        fVar102 = *(float *)(lVar33 + 0x113754928) +
                  fVar98 * (*(float *)(lVar33 + 0x11375492c) +
                           fVar98 * (*(float *)(lVar33 + 0x113754930) +
                                    fVar98 * *(float *)(lVar33 + 0x113754934)));
        uVar25 = (int)(fVar101 * 1024.0) & ((int)(fVar101 * 1024.0) >> 0x1f ^ 0xffffffffU);
        if (0x3fe < (int)uVar25) {
          uVar25 = 0x3ff;
        }
        fVar98 = fVar101 * 1024.0 - (float)uVar25;
        lVar33 = (ulong)(uVar25 << 2) * 4;
        fVar101 = *(float *)(lVar33 + 0x113754928) +
                  fVar98 * (*(float *)(lVar33 + 0x11375492c) +
                           fVar98 * (*(float *)(lVar33 + 0x113754930) +
                                    fVar98 * *(float *)(lVar33 + 0x113754934)));
        uVar25 = (int)(fVar99 * 1024.0) & ((int)(fVar99 * 1024.0) >> 0x1f ^ 0xffffffffU);
        if (0x3fe < (int)uVar25) {
          uVar25 = 0x3ff;
        }
        fVar98 = fVar99 * 1024.0 - (float)uVar25;
        lVar33 = (ulong)(uVar25 << 2) * 4;
        fVar99 = *(float *)(lVar33 + 0x113754928) +
                 fVar98 * (*(float *)(lVar33 + 0x11375492c) +
                          fVar98 * (*(float *)(lVar33 + 0x113754930) +
                                   fVar98 * *(float *)(lVar33 + 0x113754934)));
      }
      *param_3 = fVar102;
      param_3[1] = fVar101;
      param_3[2] = fVar99;
      if (iVar4 == 4) {
        param_3[3] = 1.0;
      }
      uVar24 = uVar24 + 3;
      param_3 = param_3 + iVar4;
    } while (uVar24 < (uint)(iVar23 * 3));
  }
  return;
}



/* Entry: 109ad8cf8; end: 109ad8f53;  */

void FUN_109ad8cf8(int *param_1,long param_2,float *param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  bool bVar7;
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
  float fStack_28;
  float fStack_24;
  
  if (0 < param_4) {
    uVar6 = 0;
    bVar3 = *(byte *)(param_1 + 10);
    fVar8 = (float)param_1[1];
    fVar9 = (float)param_1[2];
    fVar10 = (float)param_1[3];
    fVar11 = (float)param_1[4];
    fVar12 = (float)param_1[5];
    fVar13 = (float)param_1[6];
    fVar14 = (float)param_1[7];
    fVar15 = (float)param_1[8];
    fVar16 = (float)param_1[9];
    iVar4 = *param_1;
    do {
      pfVar5 = (float *)(param_2 + uVar6 * 4);
      fVar17 = *pfVar5;
      if (fVar17 <= 7.999625) {
        fVar17 = fVar17 / 903.3;
        fStack_28 = fVar17 * 7.787 + 0.13793103;
      }
      else {
        fStack_28 = (fVar17 + 16.0) / 116.0;
        fVar17 = fStack_28 * fStack_28 * fStack_28;
      }
      fStack_24 = pfVar5[1] / 500.0 + fStack_28;
      fStack_28 = fStack_28 + pfVar5[2] / -200.0;
      pfVar5 = &fStack_24;
      bVar7 = true;
      fVar19 = fStack_24;
      while( true ) {
        if (fVar19 <= 0.20689271) {
          fVar19 = (fVar19 + -0.13793103) / 7.787;
        }
        else {
          fVar19 = fVar19 * fVar19 * fVar19;
        }
        *pfVar5 = fVar19;
        if (!bVar7) break;
        bVar7 = false;
        pfVar5 = &fStack_28;
        fVar19 = fStack_28;
      }
      fVar21 = fVar9 * fVar17 + fStack_24 * fVar8 + fStack_28 * fVar10;
      fVar19 = fVar12 * fVar17 + fStack_24 * fVar11 + fStack_28 * fVar13;
      fVar20 = fVar15 * fVar17 + fStack_24 * fVar14 + fStack_28 * fVar16;
      fVar17 = 1.0;
      if (fVar21 <= 1.0) {
        fVar17 = fVar21;
      }
      fVar18 = 0.0;
      if (0.0 <= fVar21) {
        fVar18 = fVar17;
      }
      fVar17 = 1.0;
      if (fVar19 <= 1.0) {
        fVar17 = fVar19;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar19) {
        fVar21 = fVar17;
      }
      fVar17 = 1.0;
      if (fVar20 <= 1.0) {
        fVar17 = fVar20;
      }
      fVar19 = 0.0;
      if (0.0 <= fVar20) {
        fVar19 = fVar17;
      }
      if ((bVar3 & 1) != 0) {
        uVar2 = (int)(fVar18 * 1024.0) & ((int)(fVar18 * 1024.0) >> 0x1f ^ 0xffffffffU);
        if (0x3fe < (int)uVar2) {
          uVar2 = 0x3ff;
        }
        fVar17 = fVar18 * 1024.0 - (float)uVar2;
        lVar1 = (ulong)(uVar2 << 2) * 4;
        fVar18 = *(float *)(lVar1 + 0x113754928) +
                 fVar17 * (*(float *)(lVar1 + 0x11375492c) +
                          fVar17 * (*(float *)(lVar1 + 0x113754930) +
                                   fVar17 * *(float *)(lVar1 + 0x113754934)));
        uVar2 = (int)(fVar21 * 1024.0) & ((int)(fVar21 * 1024.0) >> 0x1f ^ 0xffffffffU);
        if (0x3fe < (int)uVar2) {
          uVar2 = 0x3ff;
        }
        fVar17 = fVar21 * 1024.0 - (float)uVar2;
        lVar1 = (ulong)(uVar2 << 2) * 4;
        fVar21 = *(float *)(lVar1 + 0x113754928) +
                 fVar17 * (*(float *)(lVar1 + 0x11375492c) +
                          fVar17 * (*(float *)(lVar1 + 0x113754930) +
                                   fVar17 * *(float *)(lVar1 + 0x113754934)));
        uVar2 = (int)(fVar19 * 1024.0) & ((int)(fVar19 * 1024.0) >> 0x1f ^ 0xffffffffU);
        if (0x3fe < (int)uVar2) {
          uVar2 = 0x3ff;
        }
        fVar17 = fVar19 * 1024.0 - (float)uVar2;
        lVar1 = (ulong)(uVar2 << 2) * 4;
        fVar19 = *(float *)(lVar1 + 0x113754928) +
                 fVar17 * (*(float *)(lVar1 + 0x11375492c) +
                          fVar17 * (*(float *)(lVar1 + 0x113754930) +
                                   fVar17 * *(float *)(lVar1 + 0x113754934)));
      }
      *param_3 = fVar18;
      param_3[1] = fVar21;
      param_3[2] = fVar19;
      if (iVar4 == 4) {
        param_3[3] = 1.0;
      }
      uVar6 = uVar6 + 3;
      param_3 = param_3 + iVar4;
    } while (uVar6 < (uint)(param_4 * 3));
  }
  return;
}



/* Entry: 109ad8f54; end: 109ad8f5b;  */

void FUN_109ad8f54(void)

{
  return;
}



/* Entry: 109ad8f5c; end: 109ad8ff7;  */

void FUN_109ad8f5c(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *param_2;
  if (iVar4 < param_2[1]) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) +
            **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar4;
    lVar3 = *(long *)(lVar1 + 0x10) + **(long **)(lVar1 + 0x48) * (long)iVar4;
    do {
      FUN_109ad8cf8(*(undefined8 *)(param_1 + 0x18),lVar3,lVar2,*(undefined4 *)(lVar1 + 0xc));
      iVar4 = iVar4 + 1;
      lVar1 = *(long *)(param_1 + 8);
      lVar3 = lVar3 + *(long *)(lVar1 + 0x50);
      lVar2 = lVar2 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar4 < param_2[1]);
  }
  return;
}



/* Entry: 109ad8ff8; end: 109ad8fff;  */

void FUN_109ad8ff8(void)

{
  return;
}



/* Entry: 109ad9000; end: 109ad9777;  */

void FUN_109ad9000(int *param_1,float *param_2,float *param_3,ulong param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint3 uVar7;
  uint3 uVar8;
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
  float fVar23;
  float fVar24;
  int iVar25;
  uint uVar26;
  float *pfVar27;
  int iVar28;
  ulong uVar29;
  float *pfVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  uint uVar34;
  int *piVar35;
  long lVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined8 uVar49;
  undefined1 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  byte bVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  byte bVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  byte bVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined8 uVar79;
  undefined8 uVar84;
  undefined8 uVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  ulong uVar109;
  undefined8 uVar110;
  int iVar111;
  int iVar113;
  ulong uVar112;
  float afStack_c90 [768];
  long lStack_90;
  
  iVar28 = (int)param_4;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar4 = *param_2;
  fVar39 = param_2[1];
  pfVar27 = param_2;
  if ((int)fVar4 < (int)fVar39) {
    lVar32 = *(long *)(param_1 + 2);
    lVar31 = *(long *)(param_1 + 4);
    puVar37 = (undefined1 *)
              (*(long *)(lVar31 + 0x10) + **(long **)(lVar31 + 0x48) * (long)(int)fVar4);
    lVar36 = *(long *)(lVar32 + 0x10) + **(long **)(lVar32 + 0x48) * (long)(int)fVar4;
    iVar5 = 0x132e8de0;
    do {
      iVar28 = *(int *)(lVar32 + 0xc);
      if (0 < iVar28) {
        iVar33 = 0;
        piVar35 = *(int **)(param_1 + 6);
        iVar111 = *piVar35;
        lVar32 = lVar36;
        puVar38 = puVar37;
        do {
          uVar26 = iVar28 - iVar33;
          if (0xff < (int)uVar26) {
            uVar26 = 0x100;
          }
          param_4 = (ulong)uVar26;
          iVar113 = uVar26 * 3;
          uVar29 = 0;
          uVar26 = iVar113 - 0x18;
          if (-1 < (int)uVar26) {
            fVar39 = (float)piVar35[0x14];
            fVar86 = (float)piVar35[0x15];
            fVar87 = (float)piVar35[0x16];
            fVar88 = (float)piVar35[0x17];
            fVar89 = (float)*(undefined8 *)(piVar35 + 0x1a);
            fVar90 = (float)((ulong)*(undefined8 *)(piVar35 + 0x1a) >> 0x20);
            uVar79 = *(undefined8 *)(piVar35 + 0x18);
            uVar84 = *(undefined8 *)(piVar35 + 0x1e);
            uVar57 = *(undefined8 *)(piVar35 + 0x1c);
            uVar49 = *(undefined8 *)(piVar35 + 0x22);
            uVar40 = *(undefined8 *)(piVar35 + 0x20);
            pfVar27 = afStack_c90;
            auVar43 = *(undefined1 (*) [16])(piVar35 + 0x24);
            do {
              puVar2 = (undefined1 *)(lVar32 + uVar29);
              bVar64 = puVar2[0xc];
              bVar75 = puVar2[0xd];
              bVar80 = puVar2[0xe];
              uVar65 = puVar2[0xf];
              uVar76 = puVar2[0x10];
              uVar81 = puVar2[0x11];
              uVar66 = puVar2[0x12];
              uVar77 = puVar2[0x13];
              uVar82 = puVar2[0x14];
              uVar67 = puVar2[0x15];
              uVar78 = puVar2[0x16];
              uVar83 = puVar2[0x17];
              uVar7 = CONCAT12(puVar2[3],CONCAT11(puVar2[3],*puVar2)) & 0xff00ff;
              uVar8 = CONCAT12(puVar2[4],CONCAT11(puVar2[4],puVar2[1])) & 0xff00ff;
              auVar69._6_2_ = 0;
              auVar69._0_6_ = (uint6)CONCAT14((char)(uVar7 >> 0x10),(uint)uVar7) & 0xffff0000ffff;
              auVar69[8] = puVar2[6];
              auVar69._9_3_ = 0;
              auVar69[0xc] = puVar2[9];
              auVar69._13_3_ = 0;
              auVar68 = NEON_ucvtf(auVar69,4);
              auVar71._6_2_ = 0;
              auVar71._0_6_ = (uint6)CONCAT14((char)(uVar8 >> 0x10),(uint)uVar8) & 0xffff0000ffff;
              auVar71[8] = puVar2[7];
              auVar71._9_3_ = 0;
              auVar71[0xc] = puVar2[10];
              auVar71._13_3_ = 0;
              auVar69 = NEON_ucvtf(auVar71,4);
              fVar91 = (float)uVar79;
              fVar92 = (float)((ulong)uVar79 >> 0x20);
              fVar93 = (float)uVar40;
              fVar94 = (float)((ulong)uVar40 >> 0x20);
              fVar95 = (float)uVar49;
              fVar96 = (float)((ulong)uVar49 >> 0x20);
              auVar70._6_2_ = 0;
              auVar70._0_6_ =
                   (uint6)CONCAT14(puVar2[5],(uint)CONCAT12(puVar2[5],(ushort)(byte)puVar2[2])) &
                   0xffff0000ffff;
              auVar70[8] = puVar2[8];
              auVar70._9_3_ = 0;
              auVar70[0xc] = puVar2[0xb];
              auVar70._13_3_ = 0;
              auVar71 = NEON_ucvtf(auVar70,4);
              fVar97 = (float)uVar57;
              fVar98 = (float)((ulong)uVar57 >> 0x20);
              fVar99 = (float)uVar84;
              fVar100 = (float)((ulong)uVar84 >> 0x20);
              *pfVar27 = fVar39 * auVar68._0_4_;
              pfVar27[1] = fVar91 * auVar69._0_4_ - fVar93;
              pfVar27[2] = fVar97 * auVar71._0_4_ - auVar43._0_4_;
              pfVar27[3] = fVar86 * auVar68._4_4_;
              pfVar27[4] = fVar92 * auVar69._4_4_ - fVar94;
              pfVar27[5] = fVar98 * auVar71._4_4_ - auVar43._4_4_;
              pfVar27[6] = fVar87 * auVar68._8_4_;
              pfVar27[7] = fVar89 * auVar69._8_4_ - fVar95;
              pfVar27[8] = fVar99 * auVar71._8_4_ - auVar43._8_4_;
              pfVar27[9] = fVar88 * auVar68._12_4_;
              pfVar27[10] = fVar90 * auVar69._12_4_ - fVar96;
              pfVar27[0xb] = fVar100 * auVar71._12_4_ - auVar43._12_4_;
              auVar72._6_2_ = 0;
              auVar72._0_6_ =
                   (uint6)CONCAT14(uVar65,(uint)CONCAT12(uVar65,(ushort)bVar64)) & 0xffff0000ffff;
              auVar72[8] = uVar66;
              auVar72._9_3_ = 0;
              auVar72[0xc] = uVar67;
              auVar72._13_3_ = 0;
              auVar69 = NEON_ucvtf(auVar72,4);
              auVar73._6_2_ = 0;
              auVar73._0_6_ =
                   (uint6)CONCAT14(uVar76,(uint)CONCAT12(uVar76,(ushort)bVar75)) & 0xffff0000ffff;
              auVar73[8] = uVar77;
              auVar73._9_3_ = 0;
              auVar73[0xc] = uVar78;
              auVar73._13_3_ = 0;
              auVar71 = NEON_ucvtf(auVar73,4);
              auVar68._1_3_ = 0;
              auVar68[0] = bVar80;
              auVar68[4] = uVar81;
              auVar68._5_3_ = 0;
              auVar68[8] = uVar82;
              auVar68._9_3_ = 0;
              auVar68[0xc] = uVar83;
              auVar68._13_3_ = 0;
              auVar68 = NEON_ucvtf(auVar68,4);
              pfVar27[0xc] = fVar39 * auVar69._0_4_;
              pfVar27[0xd] = fVar91 * auVar71._0_4_ - fVar93;
              pfVar27[0xe] = fVar97 * auVar68._0_4_ - auVar43._0_4_;
              pfVar27[0xf] = fVar86 * auVar69._4_4_;
              pfVar27[0x10] = fVar92 * auVar71._4_4_ - fVar94;
              pfVar27[0x11] = fVar98 * auVar68._4_4_ - auVar43._4_4_;
              pfVar27[0x12] = fVar87 * auVar69._8_4_;
              pfVar27[0x13] = fVar89 * auVar71._8_4_ - fVar95;
              pfVar27[0x14] = fVar99 * auVar68._8_4_ - auVar43._8_4_;
              pfVar27[0x15] = fVar88 * auVar69._12_4_;
              pfVar27[0x16] = fVar90 * auVar71._12_4_ - fVar96;
              pfVar27[0x17] = fVar100 * auVar68._12_4_ - auVar43._12_4_;
              uVar29 = uVar29 + 0x18;
              pfVar27 = pfVar27 + 0x18;
            } while (uVar29 <= uVar26);
            uVar29 = uVar29 & 0xffffffff;
          }
          if ((int)uVar29 < iVar113) {
            pfVar27 = (float *)(((ulong)afStack_c90 | 4) + uVar29 * 4);
            do {
              pbVar3 = (byte *)(lVar32 + uVar29);
              fVar39 = (float)NEON_ucvtf((uint)*pbVar3);
              pfVar27[-1] = fVar39 * 0.39215687;
              fVar39 = (float)NEON_ucvtf((uint)pbVar3[1]);
              *pfVar27 = fVar39 * 1.3882353 + -134.0;
              fVar39 = (float)NEON_ucvtf((uint)pbVar3[2]);
              pfVar27[1] = fVar39 * 1.027451 + -140.0;
              uVar29 = uVar29 + 3;
              pfVar27 = pfVar27 + 3;
            } while ((long)uVar29 < (long)iVar113);
          }
          pfVar27 = afStack_c90;
          param_3 = afStack_c90;
          FUN_109ad9778(piVar35 + 1);
          uVar34 = 0;
          if (-1 < (int)uVar26) {
            pfVar30 = afStack_c90;
            do {
              fVar97 = *pfVar30;
              fVar101 = pfVar30[1];
              fVar105 = pfVar30[2];
              fVar98 = pfVar30[3];
              fVar102 = pfVar30[4];
              fVar106 = pfVar30[5];
              fVar99 = pfVar30[6];
              fVar103 = pfVar30[7];
              fVar107 = pfVar30[8];
              fVar100 = pfVar30[9];
              fVar104 = pfVar30[10];
              fVar108 = pfVar30[0xb];
              fVar39 = pfVar30[0xc];
              fVar89 = pfVar30[0xd];
              fVar93 = pfVar30[0xe];
              fVar86 = pfVar30[0xf];
              fVar90 = pfVar30[0x10];
              fVar94 = pfVar30[0x11];
              fVar87 = pfVar30[0x12];
              fVar91 = pfVar30[0x13];
              fVar95 = pfVar30[0x14];
              fVar88 = pfVar30[0x15];
              fVar92 = pfVar30[0x16];
              fVar96 = pfVar30[0x17];
              auVar43 = *(undefined1 (*) [16])(piVar35 + 0x10);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar25 = iVar5, ___cxa_guard_acquire(), iVar25 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                fRam00000001132e8dd0 = 0.5;
                fRam00000001132e8dd4 = 0.5;
                ___cxa_guard_release(0x1132e8de0);
              }
              fVar21 = fRam00000001132e8ddc;
              fVar17 = fRam00000001132e8dd8;
              fVar13 = fRam00000001132e8dd4;
              fVar9 = fRam00000001132e8dd0;
              uVar49 = CONCAT44(fRam00000001132e8dd4,fRam00000001132e8dd0);
              uVar40 = *(undefined8 *)(piVar35 + 0x12);
              uVar79 = *(undefined8 *)(piVar35 + 0x10);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar25 = iVar5, ___cxa_guard_acquire(), iVar25 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                fRam00000001132e8dd0 = 0.5;
                fRam00000001132e8dd4 = 0.5;
                ___cxa_guard_release(0x1132e8de0);
              }
              fVar22 = fRam00000001132e8ddc;
              fVar18 = fRam00000001132e8dd8;
              fVar14 = fRam00000001132e8dd4;
              fVar10 = fRam00000001132e8dd0;
              auVar68 = *(undefined1 (*) [16])(piVar35 + 0x10);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar25 = iVar5, ___cxa_guard_acquire(), iVar25 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                fRam00000001132e8dd0 = 0.5;
                fRam00000001132e8dd4 = 0.5;
                ___cxa_guard_release(0x1132e8de0);
              }
              uVar57 = CONCAT44(fRam00000001132e8dd4,fRam00000001132e8dd0);
              auVar74._8_4_ = fRam00000001132e8dd8;
              auVar74._0_8_ = uVar57;
              auVar74._12_4_ = fRam00000001132e8ddc;
              auVar69 = *(undefined1 (*) [16])(piVar35 + 0x10);
              if ((bRam00000001132e8de0 & 1) == 0) {
                uVar84 = auVar74._8_8_;
                iVar25 = iVar5;
                ___cxa_guard_acquire();
                auVar74._8_8_ = uVar84;
                if (iVar25 != 0) {
                  fRam00000001132e8dd8 = 0.5;
                  fRam00000001132e8ddc = 0.5;
                  fRam00000001132e8dd0 = 0.5;
                  fRam00000001132e8dd4 = 0.5;
                  ___cxa_guard_release(0x1132e8de0);
                }
              }
              fVar23 = fRam00000001132e8ddc;
              fVar19 = fRam00000001132e8dd8;
              fVar15 = fRam00000001132e8dd4;
              fVar11 = fRam00000001132e8dd0;
              uVar84 = *(undefined8 *)(piVar35 + 0x12);
              uVar57 = *(undefined8 *)(piVar35 + 0x10);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar25 = iVar5, ___cxa_guard_acquire(), iVar25 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                fRam00000001132e8dd0 = 0.5;
                fRam00000001132e8dd4 = 0.5;
                ___cxa_guard_release(0x1132e8de0);
              }
              fVar24 = fRam00000001132e8ddc;
              fVar20 = fRam00000001132e8dd8;
              fVar16 = fRam00000001132e8dd4;
              fVar12 = fRam00000001132e8dd0;
              uVar110 = *(undefined8 *)(piVar35 + 0x12);
              uVar85 = *(undefined8 *)(piVar35 + 0x10);
              if (((bRam00000001132e8de0 & 1) == 0) &&
                 (iVar25 = iVar5, ___cxa_guard_acquire(), iVar25 != 0)) {
                fRam00000001132e8dd8 = 0.5;
                fRam00000001132e8ddc = 0.5;
                fRam00000001132e8dd0 = 0.5;
                fRam00000001132e8dd4 = 0.5;
                ___cxa_guard_release(0x1132e8de0);
              }
              auVar41._0_8_ =
                   CONCAT44((int)(fVar98 * auVar43._4_4_ + fVar13),
                            (int)(fVar97 * auVar43._0_4_ + fVar9));
              auVar41._8_4_ = (int)(fVar99 * auVar43._8_4_ + fVar17);
              auVar41._12_4_ = (int)(fVar100 * auVar43._12_4_ + fVar21);
              auVar42._8_8_ = auVar41._8_8_;
              auVar42._0_8_ = NEON_uqxtn(auVar41._0_8_,auVar41,4);
              iVar25 = (int)(fVar39 * (float)uVar79 + fVar10);
              iVar6 = (int)(fVar86 * (float)((ulong)uVar79 >> 0x20) + fVar14);
              uVar65 = (undefined1)((uint)iVar6 >> 8);
              uVar66 = (undefined1)((uint)iVar6 >> 0x10);
              uVar67 = (undefined1)((uint)iVar6 >> 0x18);
              auVar43[4] = (char)iVar6;
              auVar43._0_4_ = iVar25;
              auVar43[5] = uVar65;
              auVar43[6] = uVar66;
              auVar43[7] = uVar67;
              auVar43._8_4_ = (int)(fVar87 * (float)uVar40 + fVar18);
              auVar43._12_4_ = (int)(fVar88 * (float)((ulong)uVar40 >> 0x20) + fVar22);
              auVar43 = NEON_uqxtn2(auVar42,auVar43,4);
              uVar40 = NEON_uqxtn(auVar43._0_8_,auVar43,2);
              auVar58._0_8_ =
                   CONCAT44((int)(fVar102 * auVar68._4_4_ + auVar74._4_4_),
                            (int)(fVar101 * auVar68._0_4_ + auVar74._0_4_));
              auVar58._8_4_ = (int)(fVar103 * auVar68._8_4_ + auVar74._8_4_);
              auVar58._12_4_ = (int)(fVar104 * auVar68._12_4_ + auVar74._12_4_);
              auVar59._8_8_ = auVar58._8_8_;
              auVar59._0_8_ = NEON_uqxtn(auVar58._0_8_,auVar58,4);
              auVar62._0_4_ = (int)(fVar89 * auVar69._0_4_ + fVar11);
              auVar62._4_4_ = (int)(fVar90 * auVar69._4_4_ + fVar15);
              auVar62._8_4_ = (int)(fVar91 * auVar69._8_4_ + fVar19);
              auVar62._12_4_ = (int)(fVar92 * auVar69._12_4_ + fVar23);
              auVar43 = NEON_uqxtn2(auVar59,auVar62,4);
              uVar79 = NEON_uqxtn(CONCAT17(uVar67,CONCAT16(uVar66,CONCAT15(uVar65,CONCAT14((char)
                                                  iVar6,iVar25)))),auVar43,2);
              uVar82 = (undefined1)((ulong)uVar79 >> 8);
              uVar83 = (undefined1)((ulong)uVar79 >> 0x10);
              uVar44 = (undefined1)((ulong)uVar79 >> 0x18);
              uVar45 = (undefined1)((ulong)uVar79 >> 0x20);
              uVar46 = (undefined1)((ulong)uVar79 >> 0x28);
              uVar47 = (undefined1)((ulong)uVar79 >> 0x30);
              uVar48 = (undefined1)((ulong)uVar79 >> 0x38);
              auVar60._0_8_ =
                   CONCAT44((int)(fVar106 * (float)((ulong)uVar57 >> 0x20) + fVar16),
                            (int)(fVar105 * (float)uVar57 + fVar12));
              auVar60._8_4_ = (int)(fVar107 * (float)uVar84 + fVar20);
              auVar60._12_4_ = (int)(fVar108 * (float)((ulong)uVar84 >> 0x20) + fVar24);
              auVar61._8_8_ = auVar60._8_8_;
              auVar61._0_8_ = NEON_uqxtn(auVar60._0_8_,auVar60,4);
              auVar63._0_4_ = (int)(fVar93 * (float)uVar85 + fRam00000001132e8dd0);
              auVar63._4_4_ = (int)(fVar94 * (float)((ulong)uVar85 >> 0x20) + fRam00000001132e8dd4);
              auVar63._8_4_ = (int)(fVar95 * (float)uVar110 + fRam00000001132e8dd8);
              auVar63._12_4_ =
                   (int)(fVar96 * (float)((ulong)uVar110 >> 0x20) + fRam00000001132e8ddc);
              auVar43 = NEON_uqxtn2(auVar61,auVar63,4);
              uVar49 = NEON_uqxtn(uVar49,auVar43,2);
              uVar65 = (undefined1)((ulong)uVar40 >> 8);
              uVar66 = (undefined1)((ulong)uVar40 >> 0x10);
              uVar67 = (undefined1)((ulong)uVar40 >> 0x18);
              uVar76 = (undefined1)((ulong)uVar40 >> 0x20);
              uVar77 = (undefined1)((ulong)uVar40 >> 0x28);
              uVar78 = (undefined1)((ulong)uVar40 >> 0x30);
              uVar81 = (undefined1)((ulong)uVar40 >> 0x38);
              uVar50 = (undefined1)((ulong)uVar49 >> 8);
              uVar51 = (undefined1)((ulong)uVar49 >> 0x10);
              uVar52 = (undefined1)((ulong)uVar49 >> 0x18);
              uVar53 = (undefined1)((ulong)uVar49 >> 0x20);
              uVar54 = (undefined1)((ulong)uVar49 >> 0x28);
              uVar55 = (undefined1)((ulong)uVar49 >> 0x30);
              uVar56 = (undefined1)((ulong)uVar49 >> 0x38);
              if (iVar111 == 4) {
                uVar57 = *(undefined8 *)(piVar35 + 0x28);
                *puVar38 = (char)uVar40;
                puVar38[1] = (char)uVar79;
                puVar38[2] = (char)uVar49;
                puVar38[3] = (char)uVar57;
                puVar38[4] = uVar65;
                puVar38[5] = uVar82;
                puVar38[6] = uVar50;
                puVar38[7] = (char)((ulong)uVar57 >> 8);
                puVar38[8] = uVar66;
                puVar38[9] = uVar83;
                puVar38[10] = uVar51;
                puVar38[0xb] = (char)((ulong)uVar57 >> 0x10);
                puVar38[0xc] = uVar67;
                puVar38[0xd] = uVar44;
                puVar38[0xe] = uVar52;
                puVar38[0xf] = (char)((ulong)uVar57 >> 0x18);
                puVar38[0x10] = uVar76;
                puVar38[0x11] = uVar45;
                puVar38[0x12] = uVar53;
                puVar38[0x13] = (char)((ulong)uVar57 >> 0x20);
                puVar38[0x14] = uVar77;
                puVar38[0x15] = uVar46;
                puVar38[0x16] = uVar54;
                puVar38[0x17] = (char)((ulong)uVar57 >> 0x28);
                puVar38[0x18] = uVar78;
                puVar38[0x19] = uVar47;
                puVar38[0x1a] = uVar55;
                puVar38[0x1b] = (char)((ulong)uVar57 >> 0x30);
                puVar38[0x1c] = uVar81;
                puVar38[0x1d] = uVar48;
                puVar38[0x1e] = uVar56;
                puVar38[0x1f] = (char)((ulong)uVar57 >> 0x38);
              }
              else {
                *puVar38 = (char)uVar40;
                puVar38[1] = (char)uVar79;
                puVar38[2] = (char)uVar49;
                puVar38[3] = uVar65;
                puVar38[4] = uVar82;
                puVar38[5] = uVar50;
                puVar38[6] = uVar66;
                puVar38[7] = uVar83;
                puVar38[8] = uVar51;
                puVar38[9] = uVar67;
                puVar38[10] = uVar44;
                puVar38[0xb] = uVar52;
                puVar38[0xc] = uVar76;
                puVar38[0xd] = uVar45;
                puVar38[0xe] = uVar53;
                puVar38[0xf] = uVar77;
                puVar38[0x10] = uVar46;
                puVar38[0x11] = uVar54;
                puVar38[0x12] = uVar78;
                puVar38[0x13] = uVar47;
                puVar38[0x14] = uVar55;
                puVar38[0x15] = uVar81;
                puVar38[0x16] = uVar48;
                puVar38[0x17] = uVar56;
              }
              puVar38 = puVar38 + (long)iVar111 * 8;
              uVar34 = uVar34 + 0x18;
              pfVar30 = pfVar30 + 0x18;
            } while ((int)uVar34 <= (int)uVar26);
          }
          if ((int)uVar34 < iVar113) {
            pfVar30 = (float *)(((ulong)afStack_c90 | 4) + (ulong)uVar34 * 4);
            do {
              uVar26 = (uint)(long)(float)(int)(pfVar30[-1] * 255.0);
              uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar26) {
                uVar26 = 0xff;
              }
              *puVar38 = (char)uVar26;
              uVar26 = (uint)(long)(float)(int)(*pfVar30 * 255.0);
              uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar26) {
                uVar26 = 0xff;
              }
              puVar38[1] = (char)uVar26;
              uVar26 = (uint)(long)(float)(int)(pfVar30[1] * 255.0);
              uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar26) {
                uVar26 = 0xff;
              }
              puVar38[2] = (char)uVar26;
              if (iVar111 == 4) {
                puVar38[3] = 0xff;
              }
              pfVar30 = pfVar30 + 3;
              puVar38 = puVar38 + iVar111;
              uVar34 = uVar34 + 3;
            } while ((int)uVar34 < iVar113);
          }
          iVar33 = iVar33 + 0x100;
          lVar32 = lVar32 + 0x300;
        } while (iVar33 < iVar28);
        lVar32 = *(long *)(param_1 + 2);
        lVar31 = *(long *)(param_1 + 4);
        fVar39 = param_2[1];
      }
      iVar28 = (int)param_4;
      fVar4 = (float)((int)fVar4 + 1);
      lVar36 = lVar36 + *(long *)(lVar32 + 0x50);
      puVar37 = puVar37 + *(long *)(lVar31 + 0x50);
    } while ((int)fVar4 < (int)fVar39);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  if (0 < iVar28) {
    uVar29 = 0;
    iVar33 = param_1[0xc];
    fVar39 = (float)param_1[7];
    fVar4 = (float)param_1[8];
    fVar86 = (float)param_1[9];
    fVar87 = (float)param_1[10];
    fVar88 = (float)param_1[0xb];
    uVar79 = *(undefined8 *)(param_1 + 4);
    uVar40 = *(undefined8 *)(param_1 + 1);
    iVar5 = *param_1;
    fVar89 = (float)param_1[3];
    param_3 = param_3 + 3;
    pfVar27 = pfVar27 + 1;
    fVar90 = (float)param_1[6];
    uVar109 = NEON_fmov(0x3f800000,4);
    do {
      fVar94 = (pfVar27[-1] + 16.0) * 0.00862069;
      fVar94 = fVar94 * fVar94 * fVar94;
      fVar92 = 0.07692308 / pfVar27[-1];
      fVar91 = fVar87 + fVar92 * *pfVar27;
      fVar93 = fVar88 + fVar92 * pfVar27[1];
      fVar92 = 1.0 / fVar93;
      fVar95 = fVar92 * fVar91 * 2.25 * fVar94;
      fVar92 = fVar92 * (fVar91 * -3.0 + 12.0 + fVar93 * -20.0) * fVar94 * 0.25;
      fVar93 = fVar4 * fVar94 + fVar39 * fVar95 + fVar86 * fVar92;
      fVar91 = (float)((ulong)uVar40 >> 0x20) * fVar94 + (float)uVar40 * fVar95 + fVar89 * fVar92;
      fVar92 = (float)((ulong)uVar79 >> 0x20) * fVar94 + (float)uVar79 * fVar95 + fVar90 * fVar92;
      iVar111 = -(uint)(fVar91 < 0.0);
      iVar113 = -(uint)(fVar92 < 0.0);
      fVar91 = (float)CONCAT13((byte)((uint)fVar91 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18),
                               CONCAT12((byte)((uint)fVar91 >> 0x10) &
                                        ~(byte)((uint)iVar111 >> 0x10),
                                        CONCAT11((byte)((uint)fVar91 >> 8) &
                                                 ~(byte)((uint)iVar111 >> 8),
                                                 SUB41(fVar91,0) & ~(byte)iVar111)));
      uVar112 = CONCAT17((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar113 >> 0x18),
                         CONCAT16((byte)((uint)fVar92 >> 0x10) & ~(byte)((uint)iVar113 >> 0x10),
                                  CONCAT15((byte)((uint)fVar92 >> 8) & ~(byte)((uint)iVar113 >> 8),
                                           CONCAT14(SUB41(fVar92,0) & ~(byte)iVar113,fVar91))));
      iVar111 = -(uint)((float)(uVar109 >> 0x20) < (float)(uVar112 >> 0x20));
      uVar112 = uVar112 ^ (uVar112 ^ uVar109) &
                          CONCAT17((char)((uint)iVar111 >> 0x18),
                                   CONCAT16((char)((uint)iVar111 >> 0x10),
                                            CONCAT15((char)((uint)iVar111 >> 8),
                                                     CONCAT14((char)iVar111,
                                                              -(uint)((float)uVar109 < fVar91)))));
      uVar65 = 0;
      uVar66 = 0;
      uVar67 = 0;
      uVar76 = 0;
      if (0.0 <= fVar93) {
        uVar65 = SUB41(fVar93,0);
        uVar66 = (undefined1)((uint)fVar93 >> 8);
        uVar67 = (undefined1)((uint)fVar93 >> 0x10);
        uVar76 = (undefined1)((uint)fVar93 >> 0x18);
      }
      bVar1 = NAN((float)CONCAT13(uVar76,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))));
      uVar77 = 0;
      uVar78 = 0;
      uVar81 = 0x80;
      uVar82 = 0x3f;
      if (!bVar1 && (float)CONCAT13(uVar76,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) == 1.0 ||
          (!bVar1 && (float)CONCAT13(uVar76,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) < 1.0) !=
          bVar1) {
        uVar77 = uVar65;
        uVar78 = uVar66;
        uVar81 = uVar67;
        uVar82 = uVar76;
      }
      if ((char)iVar33 != '\0') {
        uVar49 = NEON_fcvtzs(uVar112,10,4);
        uVar49 = NEON_smax(uVar49,0,4);
        uVar49 = NEON_smin(uVar49,0x3ff000003ff,4);
        lVar36 = (ulong)(uint)((int)uVar49 << 2) * 4;
        uVar85 = *(undefined8 *)(lVar36 + 0x113754928);
        uVar84 = *(undefined8 *)(lVar36 + 0x113754930);
        uVar57 = NEON_ucvtf(uVar49,4);
        fVar91 = (float)uVar112 * 1024.0 - (float)uVar57;
        fVar92 = (float)(uVar112 >> 0x20) * 1024.0 - (float)((ulong)uVar57 >> 0x20);
        lVar36 = (ulong)(uint)((int)((ulong)uVar49 >> 0x20) << 2) * 4;
        uVar49 = *(undefined8 *)(lVar36 + 0x113754928);
        uVar57 = *(undefined8 *)(lVar36 + 0x113754930);
        uVar112 = CONCAT44((float)uVar49 +
                           fVar92 * ((float)((ulong)uVar49 >> 0x20) +
                                    fVar92 * ((float)uVar57 +
                                             fVar92 * (float)((ulong)uVar57 >> 0x20))),
                           (float)uVar85 +
                           fVar91 * ((float)((ulong)uVar85 >> 0x20) +
                                    fVar91 * ((float)uVar84 +
                                             fVar91 * (float)((ulong)uVar84 >> 0x20))));
        uVar26 = (uint)((float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar78,uVar77))) * 1024.0);
        uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        if (0x3fe < (int)uVar26) {
          uVar26 = 0x3ff;
        }
        fVar91 = (float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar78,uVar77))) * 1024.0 -
                 (float)uVar26;
        lVar36 = (ulong)(uVar26 << 2) * 4;
        fVar91 = *(float *)(lVar36 + 0x113754928) +
                 fVar91 * (*(float *)(lVar36 + 0x11375492c) +
                          fVar91 * (*(float *)(lVar36 + 0x113754930) +
                                   fVar91 * *(float *)(lVar36 + 0x113754934)));
        uVar77 = SUB41(fVar91,0);
        uVar78 = (undefined1)((uint)fVar91 >> 8);
        uVar81 = (undefined1)((uint)fVar91 >> 0x10);
        uVar82 = (undefined1)((uint)fVar91 >> 0x18);
      }
      *(ulong *)(param_3 + -3) = uVar112;
      param_3[-1] = (float)CONCAT13(uVar82,CONCAT12(uVar81,CONCAT11(uVar78,uVar77)));
      if (iVar5 == 4) {
        *param_3 = 1.0;
      }
      pfVar27 = pfVar27 + 3;
      uVar29 = uVar29 + 3;
      param_3 = param_3 + iVar5;
    } while (uVar29 < (uint)(iVar28 * 3));
  }
  return;
}



/* Entry: 109ad9778; end: 109ad996b;  */

void FUN_109ad9778(int *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  int iVar30;
  ulong uVar29;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  
  if (0 < param_4) {
    uVar6 = 0;
    iVar4 = param_1[0xc];
    fVar9 = (float)param_1[7];
    fVar10 = (float)param_1[8];
    fVar11 = (float)param_1[9];
    fVar12 = (float)param_1[10];
    fVar13 = (float)param_1[0xb];
    uVar16 = *(undefined8 *)(param_1 + 4);
    uVar24 = *(undefined8 *)(param_1 + 1);
    iVar3 = *param_1;
    fVar14 = (float)param_1[3];
    puVar7 = (undefined4 *)(param_3 + 0xc);
    pfVar8 = (float *)(param_2 + 4);
    fVar15 = (float)param_1[6];
    uVar25 = NEON_fmov(0x3f800000,4);
    do {
      fVar20 = (pfVar8[-1] + 16.0) * 0.00862069;
      fVar20 = fVar20 * fVar20 * fVar20;
      fVar26 = 0.07692308 / pfVar8[-1];
      fVar17 = fVar12 + fVar26 * *pfVar8;
      fVar27 = fVar13 + fVar26 * pfVar8[1];
      fVar26 = 1.0 / fVar27;
      fVar22 = fVar26 * fVar17 * 2.25 * fVar20;
      fVar26 = fVar26 * (fVar17 * -3.0 + 12.0 + fVar27 * -20.0) * fVar20 * 0.25;
      fVar27 = fVar10 * fVar20 + fVar9 * fVar22 + fVar11 * fVar26;
      fVar17 = (float)((ulong)uVar24 >> 0x20) * fVar20 + (float)uVar24 * fVar22 + fVar14 * fVar26;
      fVar26 = (float)((ulong)uVar16 >> 0x20) * fVar20 + (float)uVar16 * fVar22 + fVar15 * fVar26;
      iVar28 = -(uint)(fVar17 < 0.0);
      iVar30 = -(uint)(fVar26 < 0.0);
      fVar17 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                               CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar17 >> 8) &
                                                  ~(byte)((uint)iVar28 >> 8),
                                                  SUB41(fVar17,0) & ~(byte)iVar28)));
      uVar29 = CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                        CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                 CONCAT15((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                          CONCAT14(SUB41(fVar26,0) & ~(byte)iVar30,fVar17))));
      iVar28 = -(uint)((float)(uVar25 >> 0x20) < (float)(uVar29 >> 0x20));
      uVar29 = uVar29 ^ (uVar29 ^ uVar25) &
                        CONCAT17((char)((uint)iVar28 >> 0x18),
                                 CONCAT16((char)((uint)iVar28 >> 0x10),
                                          CONCAT15((char)((uint)iVar28 >> 8),
                                                   CONCAT14((char)iVar28,
                                                            -(uint)((float)uVar25 < fVar17)))));
      uVar31 = 0;
      uVar33 = 0;
      uVar35 = 0;
      uVar37 = 0;
      if (0.0 <= fVar27) {
        uVar31 = SUB41(fVar27,0);
        uVar33 = (undefined1)((uint)fVar27 >> 8);
        uVar35 = (undefined1)((uint)fVar27 >> 0x10);
        uVar37 = (undefined1)((uint)fVar27 >> 0x18);
      }
      bVar2 = NAN((float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(uVar33,uVar31))));
      uVar32 = 0;
      uVar34 = 0;
      uVar36 = 0x80;
      uVar38 = 0x3f;
      if (!bVar2 && (float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(uVar33,uVar31))) == 1.0 ||
          (!bVar2 && (float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(uVar33,uVar31))) < 1.0) !=
          bVar2) {
        uVar32 = uVar31;
        uVar34 = uVar33;
        uVar36 = uVar35;
        uVar38 = uVar37;
      }
      if ((char)iVar4 != '\0') {
        uVar18 = NEON_fcvtzs(uVar29,10,4);
        uVar18 = NEON_smax(uVar18,0,4);
        uVar18 = NEON_smin(uVar18,0x3ff000003ff,4);
        lVar1 = (ulong)(uint)((int)uVar18 << 2) * 4;
        uVar23 = *(undefined8 *)(lVar1 + 0x113754928);
        uVar21 = *(undefined8 *)(lVar1 + 0x113754930);
        uVar19 = NEON_ucvtf(uVar18,4);
        fVar17 = (float)uVar29 * 1024.0 - (float)uVar19;
        fVar26 = (float)(uVar29 >> 0x20) * 1024.0 - (float)((ulong)uVar19 >> 0x20);
        lVar1 = (ulong)(uint)((int)((ulong)uVar18 >> 0x20) << 2) * 4;
        uVar18 = *(undefined8 *)(lVar1 + 0x113754928);
        uVar19 = *(undefined8 *)(lVar1 + 0x113754930);
        uVar29 = CONCAT44((float)uVar18 +
                          fVar26 * ((float)((ulong)uVar18 >> 0x20) +
                                   fVar26 * ((float)uVar19 + fVar26 * (float)((ulong)uVar19 >> 0x20)
                                            )),
                          (float)uVar23 +
                          fVar17 * ((float)((ulong)uVar23 >> 0x20) +
                                   fVar17 * ((float)uVar21 + fVar17 * (float)((ulong)uVar21 >> 0x20)
                                            )));
        uVar5 = (uint)((float)CONCAT13(uVar38,CONCAT12(uVar36,CONCAT11(uVar34,uVar32))) * 1024.0);
        uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
        if (0x3fe < (int)uVar5) {
          uVar5 = 0x3ff;
        }
        fVar17 = (float)CONCAT13(uVar38,CONCAT12(uVar36,CONCAT11(uVar34,uVar32))) * 1024.0 -
                 (float)uVar5;
        lVar1 = (ulong)(uVar5 << 2) * 4;
        fVar17 = *(float *)(lVar1 + 0x113754928) +
                 fVar17 * (*(float *)(lVar1 + 0x11375492c) +
                          fVar17 * (*(float *)(lVar1 + 0x113754930) +
                                   fVar17 * *(float *)(lVar1 + 0x113754934)));
        uVar32 = SUB41(fVar17,0);
        uVar34 = (undefined1)((uint)fVar17 >> 8);
        uVar36 = (undefined1)((uint)fVar17 >> 0x10);
        uVar38 = (undefined1)((uint)fVar17 >> 0x18);
      }
      *(ulong *)(puVar7 + -3) = uVar29;
      puVar7[-1] = CONCAT13(uVar38,CONCAT12(uVar36,CONCAT11(uVar34,uVar32)));
      if (iVar3 == 4) {
        *puVar7 = 0x3f800000;
      }
      pfVar8 = pfVar8 + 3;
      uVar6 = uVar6 + 3;
      puVar7 = puVar7 + iVar3;
    } while (uVar6 < (uint)(param_4 * 3));
  }
  return;
}



/* Entry: 109ad996c; end: 109ad9973;  */

void FUN_109ad996c(void)

{
  return;
}



/* Entry: 109ad9974; end: 109ad9a0f;  */

void FUN_109ad9974(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *param_2;
  if (iVar4 < param_2[1]) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) +
            **(long **)(*(long *)(param_1 + 0x10) + 0x48) * (long)iVar4;
    lVar3 = *(long *)(lVar1 + 0x10) + **(long **)(lVar1 + 0x48) * (long)iVar4;
    do {
      FUN_109ad9778(*(undefined8 *)(param_1 + 0x18),lVar3,lVar2,*(undefined4 *)(lVar1 + 0xc));
      iVar4 = iVar4 + 1;
      lVar1 = *(long *)(param_1 + 8);
      lVar3 = lVar3 + *(long *)(lVar1 + 0x50);
      lVar2 = lVar2 + *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    } while (iVar4 < param_2[1]);
  }
  return;
}



/* Entry: 109ad9a10; end: 109ad9caf;  */

void FUN_109ad9a10(long param_1,int *param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  
  iVar4 = param_2[1];
  iVar16 = (int)((long)*param_2 * 2);
  if (iVar16 < (int)((long)iVar4 * 2)) {
    uVar21 = (ulong)*(uint *)(param_1 + 0x20);
    uVar10 = (ulong)*(int *)(param_1 + 0x24);
    lVar15 = uVar10 * (long)*param_2 * 2;
    lVar14 = *(long *)(param_1 + 0x18) + (long)((int)lVar15 >> 1);
    lVar15 = *(long *)(param_1 + 0x10) + lVar15;
    lVar17 = (long)iVar16;
    lVar18 = lVar17 + 1;
    do {
      lVar20 = (long)(int)uVar10;
      if (0 < (int)uVar21) {
        lVar11 = 0;
        lVar19 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 2;
        puVar12 = (undefined1 *)(lVar1 + lVar19 * lVar18);
        puVar13 = (undefined1 *)(lVar1 + lVar19 * lVar17);
        do {
          iVar8 = *(byte *)(lVar14 + lVar11) - 0x80;
          iVar9 = ((byte *)(lVar14 + lVar11))[1] - 0x80;
          iVar16 = iVar9 * 0x198937 + 0x80000;
          iVar6 = iVar8 * 0x2049ba + 0x80000;
          pbVar2 = (byte *)(lVar15 + 1 + lVar11);
          bVar5 = pbVar2[-1];
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar7 = uVar22 * 0x129fbe + -0x129fbe0;
          iVar8 = iVar9 * -0xd020c + iVar8 * -0x64189 + 0x80000;
          uVar22 = iVar7 + iVar16 >> 0x14 & (iVar7 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          *puVar13 = (char)uVar22;
          uVar22 = iVar7 + iVar8 >> 0x14 & (iVar7 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[-1] = (char)uVar22;
          uVar22 = iVar7 + iVar6 >> 0x14 & (iVar7 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[-2] = (char)uVar22;
          bVar5 = *pbVar2;
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[3] = (char)uVar22;
          uVar22 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[2] = (char)uVar22;
          uVar22 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[1] = (char)uVar22;
          pbVar2 = (byte *)(lVar15 + 1 + lVar20 + lVar11);
          bVar5 = pbVar2[-1];
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          uVar3 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          *puVar12 = (char)uVar22;
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          uVar22 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          puVar12[-1] = (char)uVar3;
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar12[-2] = (char)uVar22;
          bVar5 = *pbVar2;
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar12[3] = (char)uVar22;
          uVar22 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          uVar3 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[2] = (char)uVar22;
          puVar12[1] = (char)uVar3;
          lVar11 = lVar11 + 2;
          uVar21 = (ulong)*(int *)(param_1 + 0x20);
          puVar12 = puVar12 + 6;
          puVar13 = puVar13 + 6;
        } while (lVar11 < (long)uVar21);
        uVar10 = (ulong)*(uint *)(param_1 + 0x24);
        lVar20 = (long)(int)*(uint *)(param_1 + 0x24);
      }
      lVar17 = lVar17 + 2;
      lVar15 = lVar15 + ((int)uVar10 << 1);
      lVar14 = lVar14 + lVar20;
      lVar18 = lVar18 + 2;
    } while (lVar17 < (long)iVar4 * 2);
  }
  return;
}



/* Entry: 109ad9cb0; end: 109ad9cb7;  */

void FUN_109ad9cb0(void)

{
  return;
}



/* Entry: 109ad9cb8; end: 109ad9f5f;  */

void FUN_109ad9cb8(long param_1,int *param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  
  iVar4 = param_2[1];
  iVar16 = (int)((long)*param_2 * 2);
  if (iVar16 < (int)((long)iVar4 * 2)) {
    uVar21 = (ulong)*(uint *)(param_1 + 0x20);
    uVar10 = (ulong)*(int *)(param_1 + 0x24);
    lVar15 = uVar10 * (long)*param_2 * 2;
    lVar14 = *(long *)(param_1 + 0x18) + (long)((int)lVar15 >> 1);
    lVar15 = *(long *)(param_1 + 0x10) + lVar15;
    lVar17 = (long)iVar16;
    lVar18 = lVar17 + 1;
    do {
      lVar20 = (long)(int)uVar10;
      if (0 < (int)uVar21) {
        lVar11 = 0;
        lVar19 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 2;
        puVar12 = (undefined1 *)(lVar1 + lVar19 * lVar18);
        puVar13 = (undefined1 *)(lVar1 + lVar19 * lVar17);
        do {
          iVar8 = *(byte *)(lVar14 + 1 + lVar11) - 0x80;
          iVar9 = *(byte *)(lVar14 + lVar11) - 0x80;
          iVar16 = iVar9 * 0x198937 + 0x80000;
          iVar6 = iVar8 * 0x2049ba + 0x80000;
          pbVar2 = (byte *)(lVar15 + 1 + lVar11);
          bVar5 = pbVar2[-1];
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar7 = uVar22 * 0x129fbe + -0x129fbe0;
          iVar8 = iVar9 * -0xd020c + iVar8 * -0x64189 + 0x80000;
          uVar22 = iVar7 + iVar16 >> 0x14 & (iVar7 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          *puVar13 = (char)uVar22;
          uVar22 = iVar7 + iVar8 >> 0x14 & (iVar7 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[-1] = (char)uVar22;
          uVar22 = iVar7 + iVar6 >> 0x14 & (iVar7 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[-2] = (char)uVar22;
          bVar5 = *pbVar2;
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[3] = (char)uVar22;
          uVar22 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[2] = (char)uVar22;
          uVar22 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[1] = (char)uVar22;
          pbVar2 = (byte *)(lVar15 + 1 + lVar20 + lVar11);
          bVar5 = pbVar2[-1];
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          uVar3 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          *puVar12 = (char)uVar22;
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          uVar22 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          puVar12[-1] = (char)uVar3;
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar12[-2] = (char)uVar22;
          bVar5 = *pbVar2;
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar12[3] = (char)uVar22;
          uVar22 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          uVar3 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[2] = (char)uVar22;
          puVar12[1] = (char)uVar3;
          lVar11 = lVar11 + 2;
          uVar21 = (ulong)*(int *)(param_1 + 0x20);
          puVar12 = puVar12 + 6;
          puVar13 = puVar13 + 6;
        } while (lVar11 < (long)uVar21);
        uVar10 = (ulong)*(uint *)(param_1 + 0x24);
        lVar20 = (long)(int)*(uint *)(param_1 + 0x24);
      }
      lVar17 = lVar17 + 2;
      lVar15 = lVar15 + ((int)uVar10 << 1);
      lVar14 = lVar14 + lVar20;
      lVar18 = lVar18 + 2;
    } while (lVar17 < (long)iVar4 * 2);
  }
  return;
}



/* Entry: 109ad9f60; end: 109ad9f67;  */

void FUN_109ad9f60(void)

{
  return;
}



/* Entry: 109ad9f68; end: 109ada207;  */

void FUN_109ad9f68(long param_1,int *param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  
  iVar4 = param_2[1];
  iVar16 = (int)((long)*param_2 * 2);
  if (iVar16 < (int)((long)iVar4 * 2)) {
    uVar21 = (ulong)*(uint *)(param_1 + 0x20);
    uVar10 = (ulong)*(int *)(param_1 + 0x24);
    lVar15 = uVar10 * (long)*param_2 * 2;
    lVar14 = *(long *)(param_1 + 0x18) + (long)((int)lVar15 >> 1);
    lVar15 = *(long *)(param_1 + 0x10) + lVar15;
    lVar17 = (long)iVar16;
    lVar18 = lVar17 + 1;
    do {
      lVar20 = (long)(int)uVar10;
      if (0 < (int)uVar21) {
        lVar11 = 0;
        lVar19 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 2;
        puVar12 = (undefined1 *)(lVar1 + lVar19 * lVar18);
        puVar13 = (undefined1 *)(lVar1 + lVar19 * lVar17);
        do {
          iVar8 = *(byte *)(lVar14 + lVar11) - 0x80;
          iVar9 = ((byte *)(lVar14 + lVar11))[1] - 0x80;
          iVar16 = iVar9 * 0x198937 + 0x80000;
          iVar6 = iVar8 * 0x2049ba + 0x80000;
          pbVar2 = (byte *)(lVar15 + 1 + lVar11);
          bVar5 = pbVar2[-1];
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar7 = uVar22 * 0x129fbe + -0x129fbe0;
          iVar8 = iVar9 * -0xd020c + iVar8 * -0x64189 + 0x80000;
          uVar22 = iVar7 + iVar16 >> 0x14 & (iVar7 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[-2] = (char)uVar22;
          uVar22 = iVar7 + iVar8 >> 0x14 & (iVar7 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[-1] = (char)uVar22;
          uVar22 = iVar7 + iVar6 >> 0x14 & (iVar7 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          *puVar13 = (char)uVar22;
          bVar5 = *pbVar2;
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[1] = (char)uVar22;
          uVar22 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[2] = (char)uVar22;
          uVar22 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[3] = (char)uVar22;
          pbVar2 = (byte *)(lVar15 + 1 + lVar20 + lVar11);
          bVar5 = pbVar2[-1];
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          uVar3 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar12[-2] = (char)uVar22;
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          uVar22 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          puVar12[-1] = (char)uVar3;
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          *puVar12 = (char)uVar22;
          bVar5 = *pbVar2;
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar12[1] = (char)uVar22;
          uVar22 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          uVar3 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[2] = (char)uVar22;
          puVar12[3] = (char)uVar3;
          lVar11 = lVar11 + 2;
          uVar21 = (ulong)*(int *)(param_1 + 0x20);
          puVar12 = puVar12 + 6;
          puVar13 = puVar13 + 6;
        } while (lVar11 < (long)uVar21);
        uVar10 = (ulong)*(uint *)(param_1 + 0x24);
        lVar20 = (long)(int)*(uint *)(param_1 + 0x24);
      }
      lVar17 = lVar17 + 2;
      lVar15 = lVar15 + ((int)uVar10 << 1);
      lVar14 = lVar14 + lVar20;
      lVar18 = lVar18 + 2;
    } while (lVar17 < (long)iVar4 * 2);
  }
  return;
}



/* Entry: 109ada208; end: 109ada20f;  */

void FUN_109ada208(void)

{
  return;
}



/* Entry: 109ada210; end: 109ada4b7;  */

void FUN_109ada210(long param_1,int *param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  
  iVar4 = param_2[1];
  iVar16 = (int)((long)*param_2 * 2);
  if (iVar16 < (int)((long)iVar4 * 2)) {
    uVar21 = (ulong)*(uint *)(param_1 + 0x20);
    uVar10 = (ulong)*(int *)(param_1 + 0x24);
    lVar15 = uVar10 * (long)*param_2 * 2;
    lVar14 = *(long *)(param_1 + 0x18) + (long)((int)lVar15 >> 1);
    lVar15 = *(long *)(param_1 + 0x10) + lVar15;
    lVar17 = (long)iVar16;
    lVar18 = lVar17 + 1;
    do {
      lVar20 = (long)(int)uVar10;
      if (0 < (int)uVar21) {
        lVar11 = 0;
        lVar19 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 2;
        puVar12 = (undefined1 *)(lVar1 + lVar19 * lVar18);
        puVar13 = (undefined1 *)(lVar1 + lVar19 * lVar17);
        do {
          iVar8 = *(byte *)(lVar14 + 1 + lVar11) - 0x80;
          iVar9 = *(byte *)(lVar14 + lVar11) - 0x80;
          iVar16 = iVar9 * 0x198937 + 0x80000;
          iVar6 = iVar8 * 0x2049ba + 0x80000;
          pbVar2 = (byte *)(lVar15 + 1 + lVar11);
          bVar5 = pbVar2[-1];
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar7 = uVar22 * 0x129fbe + -0x129fbe0;
          iVar8 = iVar9 * -0xd020c + iVar8 * -0x64189 + 0x80000;
          uVar22 = iVar7 + iVar16 >> 0x14 & (iVar7 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[-2] = (char)uVar22;
          uVar22 = iVar7 + iVar8 >> 0x14 & (iVar7 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[-1] = (char)uVar22;
          uVar22 = iVar7 + iVar6 >> 0x14 & (iVar7 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          *puVar13 = (char)uVar22;
          bVar5 = *pbVar2;
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[1] = (char)uVar22;
          uVar22 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[2] = (char)uVar22;
          uVar22 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar13[3] = (char)uVar22;
          pbVar2 = (byte *)(lVar15 + 1 + lVar20 + lVar11);
          bVar5 = pbVar2[-1];
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          uVar3 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar12[-2] = (char)uVar22;
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          uVar22 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          puVar12[-1] = (char)uVar3;
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          *puVar12 = (char)uVar22;
          bVar5 = *pbVar2;
          uVar22 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar22 = 0x10;
          }
          iVar9 = uVar22 * 0x129fbe + -0x129fbe0;
          uVar22 = iVar9 + iVar16 >> 0x14 & (iVar9 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          puVar12[1] = (char)uVar22;
          uVar22 = iVar9 + iVar8 >> 0x14 & (iVar9 + iVar8 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar22) {
            uVar22 = 0xff;
          }
          uVar3 = iVar9 + iVar6 >> 0x14 & (iVar9 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[2] = (char)uVar22;
          puVar12[3] = (char)uVar3;
          lVar11 = lVar11 + 2;
          uVar21 = (ulong)*(int *)(param_1 + 0x20);
          puVar12 = puVar12 + 6;
          puVar13 = puVar13 + 6;
        } while (lVar11 < (long)uVar21);
        uVar10 = (ulong)*(uint *)(param_1 + 0x24);
        lVar20 = (long)(int)*(uint *)(param_1 + 0x24);
      }
      lVar17 = lVar17 + 2;
      lVar15 = lVar15 + ((int)uVar10 << 1);
      lVar14 = lVar14 + lVar20;
      lVar18 = lVar18 + 2;
    } while (lVar17 < (long)iVar4 * 2);
  }
  return;
}



/* Entry: 109ada4b8; end: 109ada4bf;  */

void FUN_109ada4b8(void)

{
  return;
}



/* Entry: 109ada4c0; end: 109ada76f;  */

void FUN_109ada4c0(long param_1,int *param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  
  iVar4 = param_2[1];
  iVar15 = (int)((long)*param_2 * 2);
  if (iVar15 < (int)((long)iVar4 * 2)) {
    uVar20 = (ulong)*(uint *)(param_1 + 0x20);
    uVar9 = (ulong)*(int *)(param_1 + 0x24);
    lVar14 = uVar9 * (long)*param_2 * 2;
    lVar13 = *(long *)(param_1 + 0x18) + (long)((int)lVar14 >> 1);
    lVar14 = *(long *)(param_1 + 0x10) + lVar14;
    lVar16 = (long)iVar15;
    lVar17 = lVar16 + 1;
    do {
      lVar19 = (long)(int)uVar9;
      if (0 < (int)uVar20) {
        lVar10 = 0;
        lVar18 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 3;
        puVar11 = (undefined1 *)(lVar1 + lVar18 * lVar17);
        puVar12 = (undefined1 *)(lVar1 + lVar18 * lVar16);
        do {
          iVar15 = *(byte *)(lVar13 + lVar10) - 0x80;
          iVar8 = ((byte *)(lVar13 + lVar10))[1] - 0x80;
          iVar6 = iVar8 * 0x198937 + 0x80000;
          iVar7 = iVar15 * 0x2049ba + 0x80000;
          pbVar2 = (byte *)(lVar14 + 1 + lVar10);
          bVar5 = pbVar2[-1];
          iVar15 = iVar8 * -0xd020c + iVar15 * -0x64189 + 0x80000;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar12[-1] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          puVar12[-2] = (char)uVar21;
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[-3] = (char)uVar3;
          *puVar12 = 0xff;
          bVar5 = *pbVar2;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar12[3] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[2] = (char)uVar21;
          puVar12[1] = (char)uVar3;
          puVar12[4] = 0xff;
          pbVar2 = (byte *)(lVar14 + 1 + lVar19 + lVar10);
          bVar5 = pbVar2[-1];
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[-1] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar11[-2] = (char)uVar21;
          puVar11[-3] = (char)uVar3;
          *puVar11 = 0xff;
          bVar5 = *pbVar2;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[3] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[2] = (char)uVar21;
          uVar21 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[1] = (char)uVar21;
          puVar11[4] = 0xff;
          lVar10 = lVar10 + 2;
          uVar20 = (ulong)*(int *)(param_1 + 0x20);
          puVar11 = puVar11 + 8;
          puVar12 = puVar12 + 8;
        } while (lVar10 < (long)uVar20);
        uVar9 = (ulong)*(uint *)(param_1 + 0x24);
        lVar19 = (long)(int)*(uint *)(param_1 + 0x24);
      }
      lVar16 = lVar16 + 2;
      lVar14 = lVar14 + ((int)uVar9 << 1);
      lVar13 = lVar13 + lVar19;
      lVar17 = lVar17 + 2;
    } while (lVar16 < (long)iVar4 * 2);
  }
  return;
}



/* Entry: 109ada770; end: 109ada777;  */

void FUN_109ada770(void)

{
  return;
}



/* Entry: 109ada778; end: 109adaa27;  */

void FUN_109ada778(long param_1,int *param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  
  iVar4 = param_2[1];
  iVar15 = (int)((long)*param_2 * 2);
  if (iVar15 < (int)((long)iVar4 * 2)) {
    uVar20 = (ulong)*(uint *)(param_1 + 0x20);
    uVar9 = (ulong)*(int *)(param_1 + 0x24);
    lVar14 = uVar9 * (long)*param_2 * 2;
    lVar13 = *(long *)(param_1 + 0x18) + (long)((int)lVar14 >> 1);
    lVar14 = *(long *)(param_1 + 0x10) + lVar14;
    lVar16 = (long)iVar15;
    lVar17 = lVar16 + 1;
    do {
      lVar19 = (long)(int)uVar9;
      if (0 < (int)uVar20) {
        lVar10 = 0;
        lVar18 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 3;
        puVar11 = (undefined1 *)(lVar1 + lVar18 * lVar17);
        puVar12 = (undefined1 *)(lVar1 + lVar18 * lVar16);
        do {
          iVar15 = *(byte *)(lVar13 + 1 + lVar10) - 0x80;
          iVar8 = *(byte *)(lVar13 + lVar10) - 0x80;
          iVar6 = iVar8 * 0x198937 + 0x80000;
          iVar7 = iVar15 * 0x2049ba + 0x80000;
          pbVar2 = (byte *)(lVar14 + 1 + lVar10);
          bVar5 = pbVar2[-1];
          iVar15 = iVar8 * -0xd020c + iVar15 * -0x64189 + 0x80000;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar12[-1] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          puVar12[-2] = (char)uVar21;
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[-3] = (char)uVar3;
          *puVar12 = 0xff;
          bVar5 = *pbVar2;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar12[3] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[2] = (char)uVar21;
          puVar12[1] = (char)uVar3;
          puVar12[4] = 0xff;
          pbVar2 = (byte *)(lVar14 + 1 + lVar19 + lVar10);
          bVar5 = pbVar2[-1];
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[-1] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar11[-2] = (char)uVar21;
          puVar11[-3] = (char)uVar3;
          *puVar11 = 0xff;
          bVar5 = *pbVar2;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[3] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[2] = (char)uVar21;
          uVar21 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[1] = (char)uVar21;
          puVar11[4] = 0xff;
          lVar10 = lVar10 + 2;
          uVar20 = (ulong)*(int *)(param_1 + 0x20);
          puVar11 = puVar11 + 8;
          puVar12 = puVar12 + 8;
        } while (lVar10 < (long)uVar20);
        uVar9 = (ulong)*(uint *)(param_1 + 0x24);
        lVar19 = (long)(int)*(uint *)(param_1 + 0x24);
      }
      lVar16 = lVar16 + 2;
      lVar14 = lVar14 + ((int)uVar9 << 1);
      lVar13 = lVar13 + lVar19;
      lVar17 = lVar17 + 2;
    } while (lVar16 < (long)iVar4 * 2);
  }
  return;
}



/* Entry: 109adaa28; end: 109adaa2f;  */

void FUN_109adaa28(void)

{
  return;
}



/* Entry: 109adaa30; end: 109adacdf;  */

void FUN_109adaa30(long param_1,int *param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  
  iVar4 = param_2[1];
  iVar15 = (int)((long)*param_2 * 2);
  if (iVar15 < (int)((long)iVar4 * 2)) {
    uVar20 = (ulong)*(uint *)(param_1 + 0x20);
    uVar9 = (ulong)*(int *)(param_1 + 0x24);
    lVar14 = uVar9 * (long)*param_2 * 2;
    lVar13 = *(long *)(param_1 + 0x18) + (long)((int)lVar14 >> 1);
    lVar14 = *(long *)(param_1 + 0x10) + lVar14;
    lVar16 = (long)iVar15;
    lVar17 = lVar16 + 1;
    do {
      lVar19 = (long)(int)uVar9;
      if (0 < (int)uVar20) {
        lVar10 = 0;
        lVar18 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 3;
        puVar11 = (undefined1 *)(lVar1 + lVar18 * lVar17);
        puVar12 = (undefined1 *)(lVar1 + lVar18 * lVar16);
        do {
          iVar15 = *(byte *)(lVar13 + lVar10) - 0x80;
          iVar8 = ((byte *)(lVar13 + lVar10))[1] - 0x80;
          iVar6 = iVar8 * 0x198937 + 0x80000;
          iVar7 = iVar15 * 0x2049ba + 0x80000;
          pbVar2 = (byte *)(lVar14 + 1 + lVar10);
          bVar5 = pbVar2[-1];
          iVar15 = iVar8 * -0xd020c + iVar15 * -0x64189 + 0x80000;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar12[-3] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          puVar12[-2] = (char)uVar21;
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[-1] = (char)uVar3;
          *puVar12 = 0xff;
          bVar5 = *pbVar2;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar12[1] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[2] = (char)uVar21;
          puVar12[3] = (char)uVar3;
          puVar12[4] = 0xff;
          pbVar2 = (byte *)(lVar14 + 1 + lVar19 + lVar10);
          bVar5 = pbVar2[-1];
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[-3] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar11[-2] = (char)uVar21;
          puVar11[-1] = (char)uVar3;
          *puVar11 = 0xff;
          bVar5 = *pbVar2;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[1] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[2] = (char)uVar21;
          uVar21 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[3] = (char)uVar21;
          puVar11[4] = 0xff;
          lVar10 = lVar10 + 2;
          uVar20 = (ulong)*(int *)(param_1 + 0x20);
          puVar11 = puVar11 + 8;
          puVar12 = puVar12 + 8;
        } while (lVar10 < (long)uVar20);
        uVar9 = (ulong)*(uint *)(param_1 + 0x24);
        lVar19 = (long)(int)*(uint *)(param_1 + 0x24);
      }
      lVar16 = lVar16 + 2;
      lVar14 = lVar14 + ((int)uVar9 << 1);
      lVar13 = lVar13 + lVar19;
      lVar17 = lVar17 + 2;
    } while (lVar16 < (long)iVar4 * 2);
  }
  return;
}



/* Entry: 109adace0; end: 109adace7;  */

void FUN_109adace0(void)

{
  return;
}



/* Entry: 109adace8; end: 109adaf97;  */

void FUN_109adace8(long param_1,int *param_2)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  
  iVar4 = param_2[1];
  iVar15 = (int)((long)*param_2 * 2);
  if (iVar15 < (int)((long)iVar4 * 2)) {
    uVar20 = (ulong)*(uint *)(param_1 + 0x20);
    uVar9 = (ulong)*(int *)(param_1 + 0x24);
    lVar14 = uVar9 * (long)*param_2 * 2;
    lVar13 = *(long *)(param_1 + 0x18) + (long)((int)lVar14 >> 1);
    lVar14 = *(long *)(param_1 + 0x10) + lVar14;
    lVar16 = (long)iVar15;
    lVar17 = lVar16 + 1;
    do {
      lVar19 = (long)(int)uVar9;
      if (0 < (int)uVar20) {
        lVar10 = 0;
        lVar18 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 3;
        puVar11 = (undefined1 *)(lVar1 + lVar18 * lVar17);
        puVar12 = (undefined1 *)(lVar1 + lVar18 * lVar16);
        do {
          iVar15 = *(byte *)(lVar13 + 1 + lVar10) - 0x80;
          iVar8 = *(byte *)(lVar13 + lVar10) - 0x80;
          iVar6 = iVar8 * 0x198937 + 0x80000;
          iVar7 = iVar15 * 0x2049ba + 0x80000;
          pbVar2 = (byte *)(lVar14 + 1 + lVar10);
          bVar5 = pbVar2[-1];
          iVar15 = iVar8 * -0xd020c + iVar15 * -0x64189 + 0x80000;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar12[-3] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          puVar12[-2] = (char)uVar21;
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[-1] = (char)uVar3;
          *puVar12 = 0xff;
          bVar5 = *pbVar2;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar12[1] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar12[2] = (char)uVar21;
          puVar12[3] = (char)uVar3;
          puVar12[4] = 0xff;
          pbVar2 = (byte *)(lVar14 + 1 + lVar19 + lVar10);
          bVar5 = pbVar2[-1];
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[-3] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          uVar3 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar3) {
            uVar3 = 0xff;
          }
          puVar11[-2] = (char)uVar21;
          puVar11[-1] = (char)uVar3;
          *puVar11 = 0xff;
          bVar5 = *pbVar2;
          uVar21 = (uint)bVar5;
          if (bVar5 < 0x11) {
            uVar21 = 0x10;
          }
          iVar8 = uVar21 * 0x129fbe + -0x129fbe0;
          uVar21 = iVar8 + iVar6 >> 0x14 & (iVar8 + iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[1] = (char)uVar21;
          uVar21 = iVar8 + iVar15 >> 0x14 & (iVar8 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[2] = (char)uVar21;
          uVar21 = iVar8 + iVar7 >> 0x14 & (iVar8 + iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar21) {
            uVar21 = 0xff;
          }
          puVar11[3] = (char)uVar21;
          puVar11[4] = 0xff;
          lVar10 = lVar10 + 2;
          uVar20 = (ulong)*(int *)(param_1 + 0x20);
          puVar11 = puVar11 + 8;
          puVar12 = puVar12 + 8;
        } while (lVar10 < (long)uVar20);
        uVar9 = (ulong)*(uint *)(param_1 + 0x24);
        lVar19 = (long)(int)*(uint *)(param_1 + 0x24);
      }
      lVar16 = lVar16 + 2;
      lVar14 = lVar14 + ((int)uVar9 << 1);
      lVar13 = lVar13 + lVar19;
      lVar17 = lVar17 + 2;
    } while (lVar16 < (long)iVar4 * 2);
  }
  return;
}



/* Entry: 109adaf98; end: 109adaf9f;  */

void FUN_109adaf98(void)

{
  return;
}



/* Entry: 109adafa0; end: 109adb2ef;  */

void FUN_109adafa0(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  undefined1 *puVar22;
  int aiStack_70 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *param_2;
  uVar3 = param_2[1];
  iVar4 = uVar6 * 2;
  iVar15 = *(int *)(param_1 + 0x28);
  iVar17 = *(int *)(param_1 + 0x2c);
  aiStack_70[0] = iVar15 / 2;
  aiStack_70[1] = iVar17 - iVar15 / 2;
  uVar10 = (ulong)*(uint *)(param_1 + 0x30);
  uVar9 = (ulong)*(uint *)(param_1 + 0x34);
  iVar5 = iVar17 * ((int)uVar6 / 2);
  lVar7 = *(long *)(param_1 + 0x18) + (long)iVar5;
  lVar8 = *(long *)(param_1 + 0x20) + (long)iVar5;
  if ((uVar6 & 0x80000001) == 1) {
    uVar11 = uVar10 & 1;
    uVar10 = (ulong)(*(uint *)(param_1 + 0x30) + 1);
    lVar7 = lVar7 + aiStack_70[uVar11];
    uVar11 = uVar9 & 1;
    uVar9 = (ulong)(*(uint *)(param_1 + 0x34) + 1);
    lVar8 = lVar8 + aiStack_70[uVar11];
  }
  if (iVar4 < (int)((long)(int)uVar3 * 2)) {
    lVar12 = *(long *)(param_1 + 0x10) + (long)(iVar17 * iVar4);
    lVar13 = (long)iVar4;
    lVar14 = lVar13 + 1;
    do {
      if (1 < iVar15) {
        lVar16 = 0;
        lVar21 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 2;
        puVar18 = (undefined1 *)(lVar1 + lVar21 * lVar14);
        puVar22 = (undefined1 *)(lVar1 + lVar21 * lVar13);
        pbVar19 = (byte *)(lVar12 + 1);
        pbVar20 = (byte *)(lVar12 + 1) + iVar17;
        do {
          iVar15 = *(byte *)(lVar7 + lVar16) - 0x80;
          iVar5 = *(byte *)(lVar8 + lVar16) - 0x80;
          iVar17 = iVar5 * 0x198937 + 0x80000;
          iVar4 = iVar15 * 0x2049ba + 0x80000;
          iVar15 = iVar5 * -0xd020c + iVar15 * -0x64189 + 0x80000;
          uVar6 = (uint)pbVar19[-1];
          if (pbVar19[-1] < 0x11) {
            uVar6 = 0x10;
          }
          iVar5 = uVar6 * 0x129fbe + -0x129fbe0;
          uVar6 = iVar5 + iVar17 >> 0x14 & (iVar5 + iVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          *puVar22 = (char)uVar6;
          uVar6 = iVar5 + iVar15 >> 0x14 & (iVar5 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          uVar2 = iVar5 + iVar4 >> 0x14 & (iVar5 + iVar4 >> 0x1f ^ 0xffffffffU);
          puVar22[-1] = (char)uVar6;
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          puVar22[-2] = (char)uVar2;
          uVar6 = (uint)*pbVar19;
          if (*pbVar19 < 0x11) {
            uVar6 = 0x10;
          }
          iVar5 = uVar6 * 0x129fbe + -0x129fbe0;
          uVar6 = iVar5 + iVar17 >> 0x14 & (iVar5 + iVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar22[3] = (char)uVar6;
          uVar6 = iVar5 + iVar15 >> 0x14 & (iVar5 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          uVar2 = iVar5 + iVar4 >> 0x14 & (iVar5 + iVar4 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          puVar22[2] = (char)uVar6;
          puVar22[1] = (char)uVar2;
          uVar6 = (uint)pbVar20[-1];
          if (pbVar20[-1] < 0x11) {
            uVar6 = 0x10;
          }
          iVar5 = uVar6 * 0x129fbe + -0x129fbe0;
          uVar6 = iVar5 + iVar17 >> 0x14 & (iVar5 + iVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          *puVar18 = (char)uVar6;
          uVar6 = iVar5 + iVar15 >> 0x14 & (iVar5 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar18[-1] = (char)uVar6;
          uVar6 = iVar5 + iVar4 >> 0x14 & (iVar5 + iVar4 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar18[-2] = (char)uVar6;
          uVar6 = (uint)*pbVar20;
          if (*pbVar20 < 0x11) {
            uVar6 = 0x10;
          }
          iVar5 = uVar6 * 0x129fbe + -0x129fbe0;
          uVar6 = iVar5 + iVar17 >> 0x14 & (iVar5 + iVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          uVar2 = iVar5 + iVar15 >> 0x14 & (iVar5 + iVar15 >> 0x1f ^ 0xffffffffU);
          puVar18[3] = (char)uVar6;
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          uVar6 = iVar5 + iVar4 >> 0x14 & (iVar5 + iVar4 >> 0x1f ^ 0xffffffffU);
          puVar18[2] = (char)uVar2;
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar18[1] = (char)uVar6;
          iVar15 = *(int *)(param_1 + 0x28);
          lVar16 = lVar16 + 1;
          puVar22 = puVar22 + 6;
          puVar18 = puVar18 + 6;
          pbVar19 = pbVar19 + 2;
          pbVar20 = pbVar20 + 2;
        } while (lVar16 < iVar15 / 2);
        iVar17 = *(int *)(param_1 + 0x2c);
      }
      lVar13 = lVar13 + 2;
      lVar12 = lVar12 + (iVar17 << 1);
      uVar6 = (uint)uVar10;
      uVar10 = (ulong)(uVar6 + 1);
      lVar7 = lVar7 + aiStack_70[uVar6 & 1];
      uVar6 = (uint)uVar9;
      uVar9 = (ulong)(uVar6 + 1);
      lVar8 = lVar8 + aiStack_70[uVar6 & 1];
      lVar14 = lVar14 + 2;
    } while (lVar13 < (long)(int)uVar3 * 2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109adb2f0; end: 109adb2f7;  */

void FUN_109adb2f0(void)

{
  return;
}



/* Entry: 109adb2f8; end: 109adb647;  */

void FUN_109adb2f8(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  undefined1 *puVar22;
  int aiStack_70 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *param_2;
  uVar3 = param_2[1];
  iVar4 = uVar6 * 2;
  iVar15 = *(int *)(param_1 + 0x28);
  iVar17 = *(int *)(param_1 + 0x2c);
  aiStack_70[0] = iVar15 / 2;
  aiStack_70[1] = iVar17 - iVar15 / 2;
  uVar10 = (ulong)*(uint *)(param_1 + 0x30);
  uVar9 = (ulong)*(uint *)(param_1 + 0x34);
  iVar5 = iVar17 * ((int)uVar6 / 2);
  lVar7 = *(long *)(param_1 + 0x18) + (long)iVar5;
  lVar8 = *(long *)(param_1 + 0x20) + (long)iVar5;
  if ((uVar6 & 0x80000001) == 1) {
    uVar11 = uVar10 & 1;
    uVar10 = (ulong)(*(uint *)(param_1 + 0x30) + 1);
    lVar7 = lVar7 + aiStack_70[uVar11];
    uVar11 = uVar9 & 1;
    uVar9 = (ulong)(*(uint *)(param_1 + 0x34) + 1);
    lVar8 = lVar8 + aiStack_70[uVar11];
  }
  if (iVar4 < (int)((long)(int)uVar3 * 2)) {
    lVar12 = *(long *)(param_1 + 0x10) + (long)(iVar17 * iVar4);
    lVar13 = (long)iVar4;
    lVar14 = lVar13 + 1;
    do {
      if (1 < iVar15) {
        lVar16 = 0;
        lVar21 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 2;
        puVar18 = (undefined1 *)(lVar1 + lVar21 * lVar14);
        puVar22 = (undefined1 *)(lVar1 + lVar21 * lVar13);
        pbVar19 = (byte *)(lVar12 + 1);
        pbVar20 = (byte *)(lVar12 + 1) + iVar17;
        do {
          iVar15 = *(byte *)(lVar7 + lVar16) - 0x80;
          iVar5 = *(byte *)(lVar8 + lVar16) - 0x80;
          iVar17 = iVar5 * 0x198937 + 0x80000;
          iVar4 = iVar15 * 0x2049ba + 0x80000;
          iVar15 = iVar5 * -0xd020c + iVar15 * -0x64189 + 0x80000;
          uVar6 = (uint)pbVar19[-1];
          if (pbVar19[-1] < 0x11) {
            uVar6 = 0x10;
          }
          iVar5 = uVar6 * 0x129fbe + -0x129fbe0;
          uVar6 = iVar5 + iVar17 >> 0x14 & (iVar5 + iVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar22[-2] = (char)uVar6;
          uVar6 = iVar5 + iVar15 >> 0x14 & (iVar5 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          uVar2 = iVar5 + iVar4 >> 0x14 & (iVar5 + iVar4 >> 0x1f ^ 0xffffffffU);
          puVar22[-1] = (char)uVar6;
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          *puVar22 = (char)uVar2;
          uVar6 = (uint)*pbVar19;
          if (*pbVar19 < 0x11) {
            uVar6 = 0x10;
          }
          iVar5 = uVar6 * 0x129fbe + -0x129fbe0;
          uVar6 = iVar5 + iVar17 >> 0x14 & (iVar5 + iVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar22[1] = (char)uVar6;
          uVar6 = iVar5 + iVar15 >> 0x14 & (iVar5 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          uVar2 = iVar5 + iVar4 >> 0x14 & (iVar5 + iVar4 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          puVar22[2] = (char)uVar6;
          puVar22[3] = (char)uVar2;
          uVar6 = (uint)pbVar20[-1];
          if (pbVar20[-1] < 0x11) {
            uVar6 = 0x10;
          }
          iVar5 = uVar6 * 0x129fbe + -0x129fbe0;
          uVar6 = iVar5 + iVar17 >> 0x14 & (iVar5 + iVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar18[-2] = (char)uVar6;
          uVar6 = iVar5 + iVar15 >> 0x14 & (iVar5 + iVar15 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar18[-1] = (char)uVar6;
          uVar6 = iVar5 + iVar4 >> 0x14 & (iVar5 + iVar4 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          *puVar18 = (char)uVar6;
          uVar6 = (uint)*pbVar20;
          if (*pbVar20 < 0x11) {
            uVar6 = 0x10;
          }
          iVar5 = uVar6 * 0x129fbe + -0x129fbe0;
          uVar6 = iVar5 + iVar17 >> 0x14 & (iVar5 + iVar17 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          uVar2 = iVar5 + iVar15 >> 0x14 & (iVar5 + iVar15 >> 0x1f ^ 0xffffffffU);
          puVar18[1] = (char)uVar6;
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          uVar6 = iVar5 + iVar4 >> 0x14 & (iVar5 + iVar4 >> 0x1f ^ 0xffffffffU);
          puVar18[2] = (char)uVar2;
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar18[3] = (char)uVar6;
          iVar15 = *(int *)(param_1 + 0x28);
          lVar16 = lVar16 + 1;
          puVar22 = puVar22 + 6;
          puVar18 = puVar18 + 6;
          pbVar19 = pbVar19 + 2;
          pbVar20 = pbVar20 + 2;
        } while (lVar16 < iVar15 / 2);
        iVar17 = *(int *)(param_1 + 0x2c);
      }
      lVar13 = lVar13 + 2;
      lVar12 = lVar12 + (iVar17 << 1);
      uVar6 = (uint)uVar10;
      uVar10 = (ulong)(uVar6 + 1);
      lVar7 = lVar7 + aiStack_70[uVar6 & 1];
      uVar6 = (uint)uVar9;
      uVar9 = (ulong)(uVar6 + 1);
      lVar8 = lVar8 + aiStack_70[uVar6 & 1];
      lVar14 = lVar14 + 2;
    } while (lVar13 < (long)(int)uVar3 * 2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109adb648; end: 109adb64f;  */

void FUN_109adb648(void)

{
  return;
}



/* Entry: 109adb650; end: 109adb9b7;  */

void FUN_109adb650(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  undefined1 *puVar23;
  int aiStack_70 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *param_2;
  uVar3 = param_2[1];
  iVar4 = uVar7 * 2;
  iVar16 = *(int *)(param_1 + 0x28);
  iVar18 = *(int *)(param_1 + 0x2c);
  aiStack_70[0] = iVar16 / 2;
  aiStack_70[1] = iVar18 - iVar16 / 2;
  uVar11 = (ulong)*(uint *)(param_1 + 0x30);
  uVar10 = (ulong)*(uint *)(param_1 + 0x34);
  iVar6 = iVar18 * ((int)uVar7 / 2);
  lVar8 = *(long *)(param_1 + 0x18) + (long)iVar6;
  lVar9 = *(long *)(param_1 + 0x20) + (long)iVar6;
  if ((uVar7 & 0x80000001) == 1) {
    uVar12 = uVar11 & 1;
    uVar11 = (ulong)(*(uint *)(param_1 + 0x30) + 1);
    lVar8 = lVar8 + aiStack_70[uVar12];
    uVar12 = uVar10 & 1;
    uVar10 = (ulong)(*(uint *)(param_1 + 0x34) + 1);
    lVar9 = lVar9 + aiStack_70[uVar12];
  }
  if (iVar4 < (int)((long)(int)uVar3 << 1)) {
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar18 * iVar4);
    lVar14 = (long)iVar4;
    lVar15 = lVar14 + 1;
    do {
      if (1 < iVar16) {
        lVar17 = 0;
        lVar22 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 3;
        puVar19 = (undefined1 *)(lVar1 + lVar22 * lVar15);
        puVar23 = (undefined1 *)(lVar1 + lVar22 * lVar14);
        pbVar20 = (byte *)(lVar13 + 1);
        pbVar21 = (byte *)(lVar13 + 1) + iVar18;
        do {
          iVar4 = *(byte *)(lVar8 + lVar17) - 0x80;
          iVar6 = *(byte *)(lVar9 + lVar17) - 0x80;
          iVar16 = iVar6 * 0x198937 + 0x80000;
          iVar18 = iVar4 * 0x2049ba + 0x80000;
          uVar7 = (uint)pbVar20[-1];
          if (pbVar20[-1] < 0x11) {
            uVar7 = 0x10;
          }
          iVar5 = uVar7 * 0x129fbe + -0x129fbe0;
          iVar4 = iVar6 * -0xd020c + iVar4 * -0x64189 + 0x80000;
          uVar7 = iVar5 + iVar16 >> 0x14 & (iVar5 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar23[-1] = (char)uVar7;
          uVar7 = iVar5 + iVar4 >> 0x14 & (iVar5 + iVar4 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar23[-2] = (char)uVar7;
          uVar7 = iVar5 + iVar18 >> 0x14 & (iVar5 + iVar18 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          *puVar23 = 0xff;
          puVar23[-3] = (char)uVar7;
          uVar7 = (uint)*pbVar20;
          if (*pbVar20 < 0x11) {
            uVar7 = 0x10;
          }
          iVar6 = uVar7 * 0x129fbe + -0x129fbe0;
          uVar7 = iVar6 + iVar16 >> 0x14 & (iVar6 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar23[3] = (char)uVar7;
          uVar7 = iVar6 + iVar4 >> 0x14 & (iVar6 + iVar4 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar23[2] = (char)uVar7;
          uVar7 = iVar6 + iVar18 >> 0x14 & (iVar6 + iVar18 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar23[1] = (char)uVar7;
          puVar23[4] = 0xff;
          uVar7 = (uint)pbVar21[-1];
          if (pbVar21[-1] < 0x11) {
            uVar7 = 0x10;
          }
          iVar6 = uVar7 * 0x129fbe + -0x129fbe0;
          uVar7 = iVar6 + iVar16 >> 0x14 & (iVar6 + iVar16 >> 0x1f ^ 0xffffffffU);
          uVar2 = iVar6 + iVar4 >> 0x14 & (iVar6 + iVar4 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar19[-1] = (char)uVar7;
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          uVar7 = iVar6 + iVar18 >> 0x14 & (iVar6 + iVar18 >> 0x1f ^ 0xffffffffU);
          puVar19[-2] = (char)uVar2;
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar19[-3] = (char)uVar7;
          *puVar19 = 0xff;
          uVar7 = (uint)*pbVar21;
          if (*pbVar21 < 0x11) {
            uVar7 = 0x10;
          }
          iVar6 = uVar7 * 0x129fbe + -0x129fbe0;
          uVar7 = iVar6 + iVar16 >> 0x14 & (iVar6 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          uVar2 = iVar6 + iVar4 >> 0x14 & (iVar6 + iVar4 >> 0x1f ^ 0xffffffffU);
          puVar19[3] = (char)uVar7;
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          uVar7 = iVar6 + iVar18 >> 0x14 & (iVar6 + iVar18 >> 0x1f ^ 0xffffffffU);
          puVar19[2] = (char)uVar2;
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar19[1] = (char)uVar7;
          puVar19[4] = 0xff;
          iVar16 = *(int *)(param_1 + 0x28);
          lVar17 = lVar17 + 1;
          puVar23 = puVar23 + 8;
          puVar19 = puVar19 + 8;
          pbVar20 = pbVar20 + 2;
          pbVar21 = pbVar21 + 2;
        } while (lVar17 < iVar16 / 2);
        iVar18 = *(int *)(param_1 + 0x2c);
      }
      lVar14 = lVar14 + 2;
      lVar13 = lVar13 + (iVar18 << 1);
      uVar7 = (uint)uVar11;
      uVar11 = (ulong)(uVar7 + 1);
      lVar8 = lVar8 + aiStack_70[uVar7 & 1];
      uVar7 = (uint)uVar10;
      uVar10 = (ulong)(uVar7 + 1);
      lVar9 = lVar9 + aiStack_70[uVar7 & 1];
      lVar15 = lVar15 + 2;
    } while (lVar14 < (long)(int)uVar3 << 1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109adb9b8; end: 109adb9bf;  */

void FUN_109adb9b8(void)

{
  return;
}



/* Entry: 109adb9c0; end: 109adbd27;  */

void FUN_109adb9c0(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  undefined1 *puVar23;
  int aiStack_70 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *param_2;
  uVar3 = param_2[1];
  iVar4 = uVar7 * 2;
  iVar16 = *(int *)(param_1 + 0x28);
  iVar18 = *(int *)(param_1 + 0x2c);
  aiStack_70[0] = iVar16 / 2;
  aiStack_70[1] = iVar18 - iVar16 / 2;
  uVar11 = (ulong)*(uint *)(param_1 + 0x30);
  uVar10 = (ulong)*(uint *)(param_1 + 0x34);
  iVar6 = iVar18 * ((int)uVar7 / 2);
  lVar8 = *(long *)(param_1 + 0x18) + (long)iVar6;
  lVar9 = *(long *)(param_1 + 0x20) + (long)iVar6;
  if ((uVar7 & 0x80000001) == 1) {
    uVar12 = uVar11 & 1;
    uVar11 = (ulong)(*(uint *)(param_1 + 0x30) + 1);
    lVar8 = lVar8 + aiStack_70[uVar12];
    uVar12 = uVar10 & 1;
    uVar10 = (ulong)(*(uint *)(param_1 + 0x34) + 1);
    lVar9 = lVar9 + aiStack_70[uVar12];
  }
  if (iVar4 < (int)((long)(int)uVar3 << 1)) {
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar18 * iVar4);
    lVar14 = (long)iVar4;
    lVar15 = lVar14 + 1;
    do {
      if (1 < iVar16) {
        lVar17 = 0;
        lVar22 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + 3;
        puVar19 = (undefined1 *)(lVar1 + lVar22 * lVar15);
        puVar23 = (undefined1 *)(lVar1 + lVar22 * lVar14);
        pbVar20 = (byte *)(lVar13 + 1);
        pbVar21 = (byte *)(lVar13 + 1) + iVar18;
        do {
          iVar4 = *(byte *)(lVar8 + lVar17) - 0x80;
          iVar6 = *(byte *)(lVar9 + lVar17) - 0x80;
          iVar16 = iVar6 * 0x198937 + 0x80000;
          iVar18 = iVar4 * 0x2049ba + 0x80000;
          uVar7 = (uint)pbVar20[-1];
          if (pbVar20[-1] < 0x11) {
            uVar7 = 0x10;
          }
          iVar5 = uVar7 * 0x129fbe + -0x129fbe0;
          iVar4 = iVar6 * -0xd020c + iVar4 * -0x64189 + 0x80000;
          uVar7 = iVar5 + iVar16 >> 0x14 & (iVar5 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar23[-3] = (char)uVar7;
          uVar7 = iVar5 + iVar4 >> 0x14 & (iVar5 + iVar4 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar23[-2] = (char)uVar7;
          uVar7 = iVar5 + iVar18 >> 0x14 & (iVar5 + iVar18 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          *puVar23 = 0xff;
          puVar23[-1] = (char)uVar7;
          uVar7 = (uint)*pbVar20;
          if (*pbVar20 < 0x11) {
            uVar7 = 0x10;
          }
          iVar6 = uVar7 * 0x129fbe + -0x129fbe0;
          uVar7 = iVar6 + iVar16 >> 0x14 & (iVar6 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar23[1] = (char)uVar7;
          uVar7 = iVar6 + iVar4 >> 0x14 & (iVar6 + iVar4 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar23[2] = (char)uVar7;
          uVar7 = iVar6 + iVar18 >> 0x14 & (iVar6 + iVar18 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar23[3] = (char)uVar7;
          puVar23[4] = 0xff;
          uVar7 = (uint)pbVar21[-1];
          if (pbVar21[-1] < 0x11) {
            uVar7 = 0x10;
          }
          iVar6 = uVar7 * 0x129fbe + -0x129fbe0;
          uVar7 = iVar6 + iVar16 >> 0x14 & (iVar6 + iVar16 >> 0x1f ^ 0xffffffffU);
          uVar2 = iVar6 + iVar4 >> 0x14 & (iVar6 + iVar4 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar19[-3] = (char)uVar7;
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          uVar7 = iVar6 + iVar18 >> 0x14 & (iVar6 + iVar18 >> 0x1f ^ 0xffffffffU);
          puVar19[-2] = (char)uVar2;
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar19[-1] = (char)uVar7;
          *puVar19 = 0xff;
          uVar7 = (uint)*pbVar21;
          if (*pbVar21 < 0x11) {
            uVar7 = 0x10;
          }
          iVar6 = uVar7 * 0x129fbe + -0x129fbe0;
          uVar7 = iVar6 + iVar16 >> 0x14 & (iVar6 + iVar16 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          uVar2 = iVar6 + iVar4 >> 0x14 & (iVar6 + iVar4 >> 0x1f ^ 0xffffffffU);
          puVar19[1] = (char)uVar7;
          if (0xfe < (int)uVar2) {
            uVar2 = 0xff;
          }
          uVar7 = iVar6 + iVar18 >> 0x14 & (iVar6 + iVar18 >> 0x1f ^ 0xffffffffU);
          puVar19[2] = (char)uVar2;
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar19[3] = (char)uVar7;
          puVar19[4] = 0xff;
          iVar16 = *(int *)(param_1 + 0x28);
          lVar17 = lVar17 + 1;
          puVar23 = puVar23 + 8;
          puVar19 = puVar19 + 8;
          pbVar20 = pbVar20 + 2;
          pbVar21 = pbVar21 + 2;
        } while (lVar17 < iVar16 / 2);
        iVar18 = *(int *)(param_1 + 0x2c);
      }
      lVar14 = lVar14 + 2;
      lVar13 = lVar13 + (iVar18 << 1);
      uVar7 = (uint)uVar11;
      uVar11 = (ulong)(uVar7 + 1);
      lVar8 = lVar8 + aiStack_70[uVar7 & 1];
      uVar7 = (uint)uVar10;
      uVar10 = (ulong)(uVar7 + 1);
      lVar9 = lVar9 + aiStack_70[uVar7 & 1];
      lVar15 = lVar15 + 2;
    } while (lVar14 < (long)(int)uVar3 << 1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109adbd28; end: 109adbd2f;  */

void FUN_109adbd28(void)

{
  return;
}



/* Entry: 109adbd30; end: 109adbfef;  */

void FUN_109adbd30(long param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined1 *puVar29;
  long lVar30;
  undefined1 *puVar31;
  int iVar32;
  long lVar33;
  
  iVar32 = param_2[1];
  lVar24 = (long)*param_2;
  if (*param_2 < iVar32) {
    puVar25 = *(uint **)(param_1 + 8);
    uVar4 = *puVar25;
    uVar27 = (ulong)(uVar4 >> 3) & 0x1ff;
    iVar1 = (int)uVar27 + 1;
    uVar3 = puVar25[2];
    iVar17 = iVar1 * puVar25[3];
    uVar18 = 0;
    if (iVar1 != 0) {
      uVar18 = (iVar17 - 1U) / (uint)(iVar1 * 2);
    }
    iVar1 = (int)puVar25[3] / 2;
    lVar20 = lVar24 << 1;
    uVar21 = lVar24 << 1 | 1;
    do {
      lVar26 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      lVar28 = **(long **)(*(long *)(param_1 + 0x10) + 0x48);
      iVar23 = (int)lVar24;
      puVar29 = (undefined1 *)
                (lVar26 + lVar28 * (int)(uVar3 + iVar23 / 2) + (long)(iVar23 % 2) * (long)iVar1);
      iVar23 = (int)uVar3 / 2 + iVar23;
      puVar19 = (undefined1 *)
                (lVar26 + lVar28 * (int)(uVar3 + iVar23 / 2) + (long)(iVar23 % 2) * (long)iVar1);
      puVar31 = puVar29;
      if (*(int *)(param_1 + 0x18) != 2) {
        puVar31 = puVar19;
        puVar19 = puVar29;
      }
      if (0 < iVar17) {
        lVar33 = *(long *)(*(long *)(param_1 + 8) + 0x10);
        lVar30 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        puVar29 = (undefined1 *)(lVar26 + lVar28 * lVar20);
        lVar26 = lVar30 * lVar20;
        lVar30 = lVar30 * uVar21;
        uVar22 = (ulong)(uVar18 + 1);
        do {
          pbVar2 = (byte *)(lVar33 + lVar26);
          bVar5 = pbVar2[2];
          bVar6 = pbVar2[1];
          bVar7 = *pbVar2;
          pbVar2 = (byte *)(lVar33 + uVar27 + 3 + lVar26);
          bVar8 = *pbVar2;
          bVar15 = pbVar2[-1];
          bVar16 = pbVar2[-2];
          pbVar2 = (byte *)(lVar33 + lVar30);
          bVar9 = pbVar2[2];
          bVar10 = pbVar2[1];
          bVar11 = *pbVar2;
          lVar28 = lVar33 + uVar27 + lVar30;
          bVar12 = *(byte *)(lVar28 + 3);
          bVar13 = *(byte *)(lVar28 + 2);
          bVar14 = *(byte *)(lVar28 + 1);
          *puVar29 = (char)((uint)bVar6 * 0x81062 + (uint)bVar5 * 0x41cac + (uint)bVar7 * 0x19168 +
                            0x1080000 >> 0x14);
          puVar29[1] = (char)((uint)bVar15 * 0x81062 + (uint)bVar8 * 0x41cac +
                              (uint)bVar16 * 0x19168 + 0x1080000 >> 0x14);
          puVar29[*(long *)(*(long *)(param_1 + 0x10) + 0x50)] =
               (char)((uint)bVar10 * 0x81062 + (uint)bVar9 * 0x41cac + (uint)bVar11 * 0x19168 +
                      0x1080000 >> 0x14);
          puVar29[*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 1] =
               (char)((uint)bVar13 * 0x81062 + (uint)bVar12 * 0x41cac + (uint)bVar14 * 0x19168 +
                      0x1080000 >> 0x14);
          *puVar19 = (char)((uint)bVar6 * 0xffb5811 + (uint)bVar5 * 0xffda1cc +
                            (uint)bVar7 * 0x70624 + 0x8080000 >> 0x14);
          *puVar31 = (char)((uint)bVar6 * 0xffa1cad + (uint)bVar5 * 0x70624 +
                            (uint)bVar7 * 0xffedd30 + 0x8080000 >> 0x14);
          puVar29 = puVar29 + 2;
          lVar33 = lVar33 + ((ulong)(uVar4 >> 2) & 0x3fe) + 2;
          uVar22 = uVar22 - 1;
          puVar19 = puVar19 + 1;
          puVar31 = puVar31 + 1;
        } while (uVar22 != 0);
        iVar32 = param_2[1];
      }
      lVar24 = lVar24 + 1;
      lVar20 = lVar20 + 2;
      uVar21 = uVar21 + 2;
    } while (lVar24 < iVar32);
  }
  return;
}



/* Entry: 109adbff0; end: 109adbff7;  */

void FUN_109adbff0(void)

{
  return;
}



/* Entry: 109adbff8; end: 109adc2bb;  */

void FUN_109adbff8(long param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined1 *puVar29;
  long lVar30;
  undefined1 *puVar31;
  int iVar32;
  long lVar33;
  
  iVar32 = param_2[1];
  lVar24 = (long)*param_2;
  if (*param_2 < iVar32) {
    puVar25 = *(uint **)(param_1 + 8);
    uVar4 = *puVar25;
    uVar27 = (ulong)(uVar4 >> 3) & 0x1ff;
    iVar1 = (int)uVar27 + 1;
    uVar3 = puVar25[2];
    iVar17 = iVar1 * puVar25[3];
    uVar18 = 0;
    if (iVar1 != 0) {
      uVar18 = (iVar17 - 1U) / (uint)(iVar1 * 2);
    }
    iVar1 = (int)puVar25[3] / 2;
    lVar20 = lVar24 << 1;
    uVar21 = lVar24 << 1 | 1;
    do {
      lVar26 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      lVar28 = **(long **)(*(long *)(param_1 + 0x10) + 0x48);
      iVar23 = (int)lVar24;
      puVar29 = (undefined1 *)
                (lVar26 + lVar28 * (int)(uVar3 + iVar23 / 2) + (long)(iVar23 % 2) * (long)iVar1);
      iVar23 = (int)uVar3 / 2 + iVar23;
      puVar19 = (undefined1 *)
                (lVar26 + lVar28 * (int)(uVar3 + iVar23 / 2) + (long)(iVar23 % 2) * (long)iVar1);
      puVar31 = puVar29;
      if (*(int *)(param_1 + 0x18) != 2) {
        puVar31 = puVar19;
        puVar19 = puVar29;
      }
      if (0 < iVar17) {
        lVar33 = *(long *)(*(long *)(param_1 + 8) + 0x10);
        lVar30 = **(long **)(*(long *)(param_1 + 8) + 0x48);
        puVar29 = (undefined1 *)(lVar26 + lVar28 * lVar20);
        lVar26 = lVar30 * lVar20;
        lVar30 = lVar30 * uVar21;
        uVar22 = (ulong)(uVar18 + 1);
        do {
          pbVar2 = (byte *)(lVar33 + lVar26 + 1);
          bVar16 = pbVar2[-1];
          bVar5 = *pbVar2;
          bVar6 = pbVar2[1];
          pbVar2 = (byte *)(lVar33 + uVar27 + 1 + lVar26);
          bVar7 = *pbVar2;
          bVar8 = pbVar2[1];
          bVar9 = pbVar2[2];
          pbVar2 = (byte *)(lVar33 + lVar30);
          bVar10 = *pbVar2;
          bVar11 = pbVar2[1];
          bVar12 = pbVar2[2];
          lVar28 = lVar33 + uVar27 + lVar30;
          bVar13 = *(byte *)(lVar28 + 1);
          bVar14 = *(byte *)(lVar28 + 2);
          bVar15 = *(byte *)(lVar28 + 3);
          *puVar29 = (char)((uint)bVar5 * 0x81062 + (uint)bVar16 * 0x41cac + (uint)bVar6 * 0x19168 +
                            0x1080000 >> 0x14);
          puVar29[1] = (char)((uint)bVar8 * 0x81062 + (uint)bVar7 * 0x41cac + (uint)bVar9 * 0x19168
                              + 0x1080000 >> 0x14);
          puVar29[*(long *)(*(long *)(param_1 + 0x10) + 0x50)] =
               (char)((uint)bVar11 * 0x81062 + (uint)bVar10 * 0x41cac + (uint)bVar12 * 0x19168 +
                      0x1080000 >> 0x14);
          puVar29[*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 1] =
               (char)((uint)bVar14 * 0x81062 + (uint)bVar13 * 0x41cac + (uint)bVar15 * 0x19168 +
                      0x1080000 >> 0x14);
          *puVar19 = (char)((uint)bVar5 * 0xffb5811 + (uint)bVar16 * 0xffda1cc +
                            (uint)bVar6 * 0x70624 + 0x8080000 >> 0x14);
          *puVar31 = (char)((uint)bVar5 * 0xffa1cad + (uint)bVar16 * 0x70624 +
                            (uint)bVar6 * 0xffedd30 + 0x8080000 >> 0x14);
          puVar29 = puVar29 + 2;
          lVar33 = lVar33 + ((ulong)(uVar4 >> 2) & 0x3fe) + 2;
          uVar22 = uVar22 - 1;
          puVar19 = puVar19 + 1;
          puVar31 = puVar31 + 1;
        } while (uVar22 != 0);
        iVar32 = param_2[1];
      }
      lVar24 = lVar24 + 1;
      lVar20 = lVar20 + 2;
      uVar21 = uVar21 + 2;
    } while (lVar24 < iVar32);
  }
  return;
}



/* Entry: 109adc2bc; end: 109adc2c3;  */

void FUN_109adc2bc(void)

{
  return;
}



/* Entry: 109adc2c4; end: 109adc45b;  */

void FUN_109adc2c4(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  iVar3 = *param_2;
  lVar12 = (long)iVar3;
  iVar4 = param_2[1];
  if (iVar3 < iVar4) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x1c);
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar7 * iVar3);
    do {
      if (0 < (int)uVar11) {
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                  **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar12 + 2);
        pbVar9 = (byte *)(lVar13 + 1);
        lVar10 = 3;
        do {
          iVar7 = (pbVar9[2] - 0x80) * 0x198937 + 0x80000;
          iVar3 = (pbVar9[2] - 0x80) * -0xd020c + (*pbVar9 - 0x80) * -0x64189 + 0x80000;
          iVar5 = (*pbVar9 - 0x80) * 0x2049ba + 0x80000;
          uVar14 = (uint)pbVar9[-1];
          if (pbVar9[-1] < 0x11) {
            uVar14 = 0x10;
          }
          iVar6 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar2 = iVar6 + iVar7;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          *puVar8 = (char)uVar14;
          iVar2 = iVar6 + iVar3;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-1] = (char)uVar14;
          iVar6 = iVar6 + iVar5;
          uVar14 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-2] = (char)uVar14;
          uVar14 = (uint)pbVar9[1];
          if (pbVar9[1] < 0x11) {
            uVar14 = 0x10;
          }
          iVar2 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar7 = iVar2 + iVar7;
          uVar14 = iVar7 >> 0x14 & (iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[3] = (char)uVar14;
          iVar3 = iVar2 + iVar3;
          uVar14 = iVar3 >> 0x14 & (iVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[2] = (char)uVar14;
          iVar2 = iVar2 + iVar5;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[1] = (char)uVar14;
          uVar11 = (ulong)*(int *)(param_1 + 0x18);
          puVar8 = puVar8 + 6;
          lVar1 = lVar10 + 1;
          lVar10 = lVar10 + 4;
          pbVar9 = pbVar9 + 4;
        } while (lVar1 < (long)(uVar11 * 2));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + iVar7;
    } while (lVar12 != iVar4);
  }
  return;
}



/* Entry: 109adc45c; end: 109adc463;  */

void FUN_109adc45c(void)

{
  return;
}



/* Entry: 109adc464; end: 109adc5f3;  */

void FUN_109adc464(long param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  iVar3 = *param_2;
  lVar12 = (long)iVar3;
  iVar4 = param_2[1];
  if (iVar3 < iVar4) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x1c);
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar7 * iVar3);
    do {
      if (0 < (int)uVar11) {
        lVar8 = 0;
        puVar9 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                  **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar12 + 2);
        do {
          pbVar2 = (byte *)(lVar13 + lVar8);
          iVar7 = (pbVar2[2] - 0x80) * 0x198937 + 0x80000;
          iVar3 = (pbVar2[2] - 0x80) * -0xd020c + (*pbVar2 - 0x80) * -0x64189 + 0x80000;
          iVar5 = (*pbVar2 - 0x80) * 0x2049ba + 0x80000;
          uVar10 = (uint)pbVar2[1];
          if (pbVar2[1] < 0x11) {
            uVar10 = 0x10;
          }
          iVar6 = uVar10 * 0x129fbe + -0x129fbe0;
          iVar1 = iVar6 + iVar7;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          *puVar9 = (char)uVar10;
          iVar1 = iVar6 + iVar3;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[-1] = (char)uVar10;
          iVar6 = iVar6 + iVar5;
          uVar10 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[-2] = (char)uVar10;
          uVar10 = (uint)pbVar2[3];
          if (pbVar2[3] < 0x11) {
            uVar10 = 0x10;
          }
          iVar1 = uVar10 * 0x129fbe + -0x129fbe0;
          iVar7 = iVar1 + iVar7;
          uVar10 = iVar7 >> 0x14 & (iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[3] = (char)uVar10;
          iVar3 = iVar1 + iVar3;
          uVar10 = iVar3 >> 0x14 & (iVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[2] = (char)uVar10;
          iVar1 = iVar1 + iVar5;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[1] = (char)uVar10;
          lVar8 = lVar8 + 4;
          uVar11 = (ulong)*(int *)(param_1 + 0x18);
          puVar9 = puVar9 + 6;
        } while (lVar8 < (long)(uVar11 * 2));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + iVar7;
    } while (lVar12 != iVar4);
  }
  return;
}



/* Entry: 109adc5f4; end: 109adc5fb;  */

void FUN_109adc5f4(void)

{
  return;
}



/* Entry: 109adc5fc; end: 109adc793;  */

void FUN_109adc5fc(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  iVar3 = *param_2;
  lVar12 = (long)iVar3;
  iVar4 = param_2[1];
  if (iVar3 < iVar4) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x1c);
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar7 * iVar3);
    do {
      if (0 < (int)uVar11) {
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                  **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar12 + 2);
        pbVar9 = (byte *)(lVar13 + 3);
        lVar10 = 1;
        do {
          iVar7 = (pbVar9[-2] - 0x80) * 0x198937 + 0x80000;
          iVar3 = (pbVar9[-2] - 0x80) * -0xd020c + (*pbVar9 - 0x80) * -0x64189 + 0x80000;
          iVar5 = (*pbVar9 - 0x80) * 0x2049ba + 0x80000;
          uVar14 = (uint)pbVar9[-3];
          if (pbVar9[-3] < 0x11) {
            uVar14 = 0x10;
          }
          iVar6 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar2 = iVar6 + iVar7;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          *puVar8 = (char)uVar14;
          iVar2 = iVar6 + iVar3;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-1] = (char)uVar14;
          iVar6 = iVar6 + iVar5;
          uVar14 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-2] = (char)uVar14;
          uVar14 = (uint)pbVar9[-1];
          if (pbVar9[-1] < 0x11) {
            uVar14 = 0x10;
          }
          iVar2 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar7 = iVar2 + iVar7;
          uVar14 = iVar7 >> 0x14 & (iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[3] = (char)uVar14;
          iVar3 = iVar2 + iVar3;
          uVar14 = iVar3 >> 0x14 & (iVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[2] = (char)uVar14;
          iVar2 = iVar2 + iVar5;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[1] = (char)uVar14;
          uVar11 = (ulong)*(int *)(param_1 + 0x18);
          puVar8 = puVar8 + 6;
          lVar1 = lVar10 + 3;
          lVar10 = lVar10 + 4;
          pbVar9 = pbVar9 + 4;
        } while (lVar1 < (long)(uVar11 * 2));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + iVar7;
    } while (lVar12 != iVar4);
  }
  return;
}



/* Entry: 109adc794; end: 109adc79b;  */

void FUN_109adc794(void)

{
  return;
}


