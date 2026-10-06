/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001e4cc0; end: 1001e4d1f;  */

void FUN_1001e4cc0(void)

{
  int iVar1;
  
  iVar1 = 0x13311010;
  func_0x000107c6127c(0x113311010,FUN_1001e4d20);
  if (iVar1 != 0) {
    func_0x000107c60ebc();
    iVar1 = 0x13837088;
    func_0x000107c6124c(0x113837088,&UNK_10ae48e38);
    uRam0000000113837080 = (uint)(iVar1 == 0);
    return;
  }
  if (uRam0000000113837080 != 0) {
    func_0x000107c61248();
  }
  return;
}



/* Entry: 1001e4d20; end: 1001e4d53;  */

void FUN_1001e4d20(void)

{
  int iVar1;
  
  iVar1 = 0x13837088;
  func_0x000107c6124c(0x113837088,&UNK_10ae48e38);
  uRam0000000113837080 = (uint)(iVar1 == 0);
  return;
}



/* Entry: 1001e4d54; end: 1001e4e3f;  */

undefined8 FUN_1001e4d54(ulong param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar3 = 0x113311010;
  func_0x000107c6127c(0x113311010,FUN_1001e4d20);
  if ((int)uVar3 != 0) {
    func_0x000107c60ebc();
    FUN_1001e4b44();
    if ((int)uVar3 == 0) {
      func_0x000107c611f4(&UNK_10f6c72e5);
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar1 = (code *)UndefinedInstructionException(0,0x1001e4e6c);
      (*pcVar1)();
    }
    return uVar3;
  }
  if (iRam0000000113837080 == 0) goto LAB_1001e4e1c;
  puVar4 = puRam0000000113837088;
  func_0x000107c61248();
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x28;
    func_0x000107c610a0();
    if (puVar5 == (undefined8 *)0x0) goto LAB_1001e4e1c;
    *puVar5 = 0x20;
    puVar4 = puVar5 + 1;
    puVar5[2] = 0;
    *puVar4 = 0;
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5 = puRam0000000113837088;
    func_0x000107c612a0(puRam0000000113837088,puVar4);
    if ((int)puVar5 != 0) {
      FUN_1001e33e0(puVar4);
      goto LAB_1001e4e1c;
    }
  }
  iVar2 = 0x13311020;
  func_0x000107c61260();
  if (iVar2 == 0) {
    *(code **)((param_1 & 0xffffffff) * 8 + 0x113837090) = param_3;
    func_0x000107c61268(0x113311020);
    puVar4[param_1 & 0xffffffff] = param_2;
    return 1;
  }
LAB_1001e4e1c:
  (*param_3)(param_2);
  return 0;
}



/* Entry: 1001e4e40; end: 1001e4e7f;  */

void FUN_1001e4e40(undefined8 param_1)

{
  code *pcVar1;
  
  FUN_1001e4b44(param_1,0x30);
  if ((int)param_1 != 0) {
    return;
  }
  func_0x000107c611f4(&UNK_10f6c72e5);
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x1001e4e6c);
  (*pcVar1)();
}



/* Entry: 1001e4e80; end: 1001e5867;  */

undefined8 FUN_1001e4e80(byte *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar42;
  byte bVar43;
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
  undefined8 in_register_00005088;
  undefined1 auVar40 [16];
  byte bVar56;
  undefined1 auVar41 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  byte bVar59;
  byte bVar60;
  byte bVar65;
  byte bVar67;
  byte bVar69;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  byte bVar66;
  byte bVar68;
  byte bVar70;
  undefined1 auVar64 [16];
  
  uVar18 = 0xffffffffffffffff;
  if ((((param_1 != (byte *)0x0) && (param_3 != (undefined4 *)0x0)) &&
      (uVar18 = 0xfffffffffffffffe, 0x7f < (int)param_2)) &&
     (((int)param_2 < 0x101 && ((param_2 & 0x3f) == 0)))) {
    bVar24 = *param_1;
    bVar25 = param_1[1];
    bVar26 = param_1[2];
    bVar27 = param_1[3];
    pbVar15 = param_1 + 4;
    bVar28 = *pbVar15;
    bVar29 = param_1[5];
    bVar30 = param_1[6];
    bVar31 = param_1[7];
    uVar11 = *(undefined4 *)pbVar15;
    uVar19 = *(undefined4 *)pbVar15;
    pbVar15 = param_1 + 8;
    bVar32 = *pbVar15;
    bVar33 = param_1[9];
    bVar34 = param_1[10];
    bVar35 = param_1[0xb];
    uVar12 = *(undefined4 *)pbVar15;
    uVar9 = *(undefined4 *)pbVar15;
    pbVar15 = param_1 + 0xc;
    bVar36 = *pbVar15;
    bVar37 = param_1[0xd];
    bVar38 = param_1[0xe];
    bVar39 = param_1[0xf];
    uVar13 = *(undefined4 *)pbVar15;
    uVar10 = *(undefined4 *)pbVar15;
    iVar16 = 8;
    bVar20 = 1;
    bVar21 = 1;
    bVar22 = 1;
    bVar23 = 1;
    if ((int)param_2 < 0xc0) {
      do {
        puVar17 = param_3;
        auVar57[8] = 0xd;
        auVar57._0_8_ = 0xc0f0e0d0c0f0e0d;
        auVar57[9] = 0xe;
        auVar57[10] = 0xf;
        auVar57[0xb] = 0xc;
        auVar57[0xc] = 0xd;
        auVar57[0xd] = 0xe;
        auVar57[0xe] = 0xf;
        auVar57[0xf] = 0xc;
        auVar62[1] = bVar25;
        auVar62[0] = bVar24;
        auVar62[2] = bVar26;
        auVar62[3] = bVar27;
        auVar62[4] = bVar28;
        auVar62[5] = bVar29;
        auVar62[6] = bVar30;
        auVar62[7] = bVar31;
        auVar62[8] = bVar32;
        auVar62[9] = bVar33;
        auVar62[10] = bVar34;
        auVar62[0xb] = bVar35;
        auVar62[0xc] = bVar36;
        auVar62[0xd] = bVar37;
        auVar62[0xe] = bVar38;
        auVar62[0xf] = bVar39;
        auVar62 = a64_TBL(ZEXT816(0),auVar62,auVar57);
        auVar58[1] = bVar25;
        auVar58[0] = bVar24;
        auVar58[2] = bVar26;
        auVar58[3] = bVar27;
        auVar58[4] = bVar28;
        auVar58[5] = bVar29;
        auVar58[6] = bVar30;
        auVar58[7] = bVar31;
        auVar58[8] = bVar32;
        auVar58[9] = bVar33;
        auVar58[10] = bVar34;
        auVar58[0xb] = bVar35;
        auVar58[0xc] = bVar36;
        auVar58[0xd] = bVar37;
        auVar58[0xe] = bVar38;
        auVar58[0xf] = bVar39;
        auVar57 = NEON_ext(ZEXT216(0),auVar58,0xc,1);
        *puVar17 = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
        puVar17[1] = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
        puVar17[2] = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32)));
        puVar17[3] = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
        auVar63 = NEON_aese(auVar62,ZEXT216(0));
        iVar16 = iVar16 + -1;
        auVar62 = NEON_ext(ZEXT216(0),auVar57,0xc,1);
        auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
        bVar60 = auVar63[0] ^ bVar20;
        bVar66 = auVar63[4] ^ bVar21;
        bVar68 = auVar63[8] ^ bVar22;
        bVar70 = auVar63[0xc] ^ bVar23;
        bVar20 = bVar20 << 1;
        bVar21 = bVar21 << 1;
        bVar22 = bVar22 << 1;
        bVar23 = bVar23 << 1;
        bVar24 = bVar24 ^ auVar57[0] ^ auVar62[0] ^ auVar58[0] ^ bVar60;
        bVar25 = bVar25 ^ auVar57[1] ^ auVar62[1] ^ auVar58[1] ^ auVar63[1];
        bVar26 = bVar26 ^ auVar57[2] ^ auVar62[2] ^ auVar58[2] ^ auVar63[2];
        bVar27 = bVar27 ^ auVar57[3] ^ auVar62[3] ^ auVar58[3] ^ auVar63[3];
        bVar28 = bVar28 ^ auVar57[4] ^ auVar62[4] ^ auVar58[4] ^ bVar66;
        bVar29 = bVar29 ^ auVar57[5] ^ auVar62[5] ^ auVar58[5] ^ auVar63[5];
        bVar30 = bVar30 ^ auVar57[6] ^ auVar62[6] ^ auVar58[6] ^ auVar63[6];
        bVar31 = bVar31 ^ auVar57[7] ^ auVar62[7] ^ auVar58[7] ^ auVar63[7];
        bVar32 = bVar32 ^ auVar57[8] ^ auVar62[8] ^ auVar58[8] ^ bVar68;
        bVar33 = bVar33 ^ auVar57[9] ^ auVar62[9] ^ auVar58[9] ^ auVar63[9];
        bVar34 = bVar34 ^ auVar57[10] ^ auVar62[10] ^ auVar58[10] ^ auVar63[10];
        bVar35 = bVar35 ^ auVar57[0xb] ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb];
        bVar36 = bVar36 ^ auVar57[0xc] ^ auVar62[0xc] ^ auVar58[0xc] ^ bVar70;
        bVar37 = bVar37 ^ auVar57[0xd] ^ auVar62[0xd] ^ auVar58[0xd] ^ auVar63[0xd];
        bVar38 = bVar38 ^ auVar57[0xe] ^ auVar62[0xe] ^ auVar58[0xe] ^ auVar63[0xe];
        bVar39 = bVar39 ^ auVar57[0xf] ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf];
        param_3 = puVar17 + 4;
      } while (iVar16 != 0);
      auVar63[8] = 0xd;
      auVar63._0_8_ = 0xc0f0e0d0c0f0e0d;
      auVar63[9] = 0xe;
      auVar63[10] = 0xf;
      auVar63[0xb] = 0xc;
      auVar63[0xc] = 0xd;
      auVar63[0xd] = 0xe;
      auVar63[0xe] = 0xf;
      auVar63[0xf] = 0xc;
      auVar5[1] = bVar25;
      auVar5[0] = bVar24;
      auVar5[2] = bVar26;
      auVar5[3] = bVar27;
      auVar5[4] = bVar28;
      auVar5[5] = bVar29;
      auVar5[6] = bVar30;
      auVar5[7] = bVar31;
      auVar5[8] = bVar32;
      auVar5[9] = bVar33;
      auVar5[10] = bVar34;
      auVar5[0xb] = bVar35;
      auVar5[0xc] = bVar36;
      auVar5[0xd] = bVar37;
      auVar5[0xe] = bVar38;
      auVar5[0xf] = bVar39;
      auVar62 = a64_TBL(ZEXT816(0),auVar5,auVar63);
      auVar6[1] = bVar25;
      auVar6[0] = bVar24;
      auVar6[2] = bVar26;
      auVar6[3] = bVar27;
      auVar6[4] = bVar28;
      auVar6[5] = bVar29;
      auVar6[6] = bVar30;
      auVar6[7] = bVar31;
      auVar6[8] = bVar32;
      auVar6[9] = bVar33;
      auVar6[10] = bVar34;
      auVar6[0xb] = bVar35;
      auVar6[0xc] = bVar36;
      auVar6[0xd] = bVar37;
      auVar6[0xe] = bVar38;
      auVar6[0xf] = bVar39;
      auVar57 = NEON_ext(ZEXT216(0),auVar6,0xc,1);
      puVar17[4] = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
      puVar17[5] = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
      puVar17[6] = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32)));
      puVar17[7] = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
      auVar63 = NEON_aese(auVar62,ZEXT216(0));
      auVar62 = NEON_ext(ZEXT216(0),auVar57,0xc,1);
      auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
      bVar20 = bVar24 ^ auVar57[0] ^ auVar62[0] ^ auVar58[0] ^ auVar63[0] ^ 0x1b;
      bVar21 = bVar25 ^ auVar57[1] ^ auVar62[1] ^ auVar58[1] ^ auVar63[1];
      bVar22 = bVar26 ^ auVar57[2] ^ auVar62[2] ^ auVar58[2] ^ auVar63[2];
      bVar23 = bVar27 ^ auVar57[3] ^ auVar62[3] ^ auVar58[3] ^ auVar63[3];
      bVar24 = bVar28 ^ auVar57[4] ^ auVar62[4] ^ auVar58[4] ^ auVar63[4] ^ 0x1b;
      bVar25 = bVar29 ^ auVar57[5] ^ auVar62[5] ^ auVar58[5] ^ auVar63[5];
      bVar26 = bVar30 ^ auVar57[6] ^ auVar62[6] ^ auVar58[6] ^ auVar63[6];
      bVar27 = bVar31 ^ auVar57[7] ^ auVar62[7] ^ auVar58[7] ^ auVar63[7];
      bVar28 = bVar32 ^ auVar57[8] ^ auVar62[8] ^ auVar58[8] ^ auVar63[8] ^ 0x1b;
      bVar29 = bVar33 ^ auVar57[9] ^ auVar62[9] ^ auVar58[9] ^ auVar63[9];
      bVar30 = bVar34 ^ auVar57[10] ^ auVar62[10] ^ auVar58[10] ^ auVar63[10];
      bVar31 = bVar35 ^ auVar57[0xb] ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb];
      bVar32 = bVar36 ^ auVar57[0xc] ^ auVar62[0xc] ^ auVar58[0xc] ^ auVar63[0xc] ^ 0x1b;
      bVar33 = bVar37 ^ auVar57[0xd] ^ auVar62[0xd] ^ auVar58[0xd] ^ auVar63[0xd];
      bVar34 = bVar38 ^ auVar57[0xe] ^ auVar62[0xe] ^ auVar58[0xe] ^ auVar63[0xe];
      bVar35 = bVar39 ^ auVar57[0xf] ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf];
      auVar61[8] = 0xd;
      auVar61._0_8_ = 0xc0f0e0d0c0f0e0d;
      auVar61[9] = 0xe;
      auVar61[10] = 0xf;
      auVar61[0xb] = 0xc;
      auVar61[0xc] = 0xd;
      auVar61[0xd] = 0xe;
      auVar61[0xe] = 0xf;
      auVar61[0xf] = 0xc;
      auVar7[1] = bVar21;
      auVar7[0] = bVar20;
      auVar7[2] = bVar22;
      auVar7[3] = bVar23;
      auVar7[4] = bVar24;
      auVar7[5] = bVar25;
      auVar7[6] = bVar26;
      auVar7[7] = bVar27;
      auVar7[8] = bVar28;
      auVar7[9] = bVar29;
      auVar7[10] = bVar30;
      auVar7[0xb] = bVar31;
      auVar7[0xc] = bVar32;
      auVar7[0xd] = bVar33;
      auVar7[0xe] = bVar34;
      auVar7[0xf] = bVar35;
      auVar62 = a64_TBL(ZEXT816(0),auVar7,auVar61);
      auVar8[1] = bVar21;
      auVar8[0] = bVar20;
      auVar8[2] = bVar22;
      auVar8[3] = bVar23;
      auVar8[4] = bVar24;
      auVar8[5] = bVar25;
      auVar8[6] = bVar26;
      auVar8[7] = bVar27;
      auVar8[8] = bVar28;
      auVar8[9] = bVar29;
      auVar8[10] = bVar30;
      auVar8[0xb] = bVar31;
      auVar8[0xc] = bVar32;
      auVar8[0xd] = bVar33;
      auVar8[0xe] = bVar34;
      auVar8[0xf] = bVar35;
      auVar57 = NEON_ext(ZEXT216(0),auVar8,0xc,1);
      puVar17[8] = CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20)));
      puVar17[9] = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
      puVar17[10] = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
      puVar17[0xb] = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32)));
      auVar63 = NEON_aese(auVar62,ZEXT216(0));
      auVar62 = NEON_ext(ZEXT216(0),auVar57,0xc,1);
      auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
      puVar17[0xc] = CONCAT13(bVar23 ^ auVar57[3] ^ auVar62[3] ^ auVar58[3] ^ auVar63[3],
                              CONCAT12(bVar22 ^ auVar57[2] ^ auVar62[2] ^ auVar58[2] ^ auVar63[2],
                                       CONCAT11(bVar21 ^ auVar57[1] ^ auVar62[1] ^ auVar58[1] ^
                                                auVar63[1],
                                                bVar20 ^ auVar57[0] ^ auVar62[0] ^ auVar58[0] ^
                                                auVar63[0] ^ 0x36)));
      puVar17[0xd] = CONCAT13(bVar27 ^ auVar57[7] ^ auVar62[7] ^ auVar58[7] ^ auVar63[7],
                              CONCAT12(bVar26 ^ auVar57[6] ^ auVar62[6] ^ auVar58[6] ^ auVar63[6],
                                       CONCAT11(bVar25 ^ auVar57[5] ^ auVar62[5] ^ auVar58[5] ^
                                                auVar63[5],
                                                bVar24 ^ auVar57[4] ^ auVar62[4] ^ auVar58[4] ^
                                                auVar63[4] ^ 0x36)));
      puVar17[0xe] = CONCAT13(bVar31 ^ auVar57[0xb] ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb],
                              CONCAT12(bVar30 ^ auVar57[10] ^ auVar62[10] ^ auVar58[10] ^
                                       auVar63[10],
                                       CONCAT11(bVar29 ^ auVar57[9] ^ auVar62[9] ^ auVar58[9] ^
                                                auVar63[9],
                                                bVar28 ^ auVar57[8] ^ auVar62[8] ^ auVar58[8] ^
                                                auVar63[8] ^ 0x36)));
      puVar17[0xf] = CONCAT13(bVar35 ^ auVar57[0xf] ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf],
                              CONCAT12(bVar34 ^ auVar57[0xe] ^ auVar62[0xe] ^ auVar58[0xe] ^
                                       auVar63[0xe],
                                       CONCAT11(bVar33 ^ auVar57[0xd] ^ auVar62[0xd] ^ auVar58[0xd]
                                                ^ auVar63[0xd],
                                                bVar32 ^ auVar57[0xc] ^ auVar62[0xc] ^ auVar58[0xc]
                                                ^ auVar63[0xc] ^ 0x36)));
      pbVar15 = (byte *)(puVar17 + 0x20);
      uVar19 = 10;
    }
    else if (param_2 == 0xc0) {
      auVar40._8_8_ = in_register_00005088;
      auVar40._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x10);
      *param_3 = *(undefined4 *)param_1;
      param_3[1] = uVar19;
      param_3[2] = uVar9;
      param_3[3] = uVar10;
      pbVar14 = (byte *)(param_3 + 4);
      do {
        pbVar15 = pbVar14;
        auVar2[8] = 5;
        auVar2._0_8_ = 0x407060504070605;
        auVar2[9] = 6;
        auVar2[10] = 7;
        auVar2[0xb] = 4;
        auVar2[0xc] = 5;
        auVar2[0xd] = 6;
        auVar2[0xe] = 7;
        auVar2[0xf] = 4;
        auVar57 = a64_TBL(ZEXT816(0),auVar40,auVar2);
        auVar4[1] = bVar25;
        auVar4[0] = bVar24;
        auVar4[2] = bVar26;
        auVar4[3] = bVar27;
        auVar4[4] = bVar28;
        auVar4[5] = bVar29;
        auVar4[6] = bVar30;
        auVar4[7] = bVar31;
        auVar4[8] = bVar32;
        auVar4[9] = bVar33;
        auVar4[10] = bVar34;
        auVar4[0xb] = bVar35;
        auVar4[0xc] = bVar36;
        auVar4[0xd] = bVar37;
        auVar4[0xe] = bVar38;
        auVar4[0xf] = bVar39;
        auVar62 = NEON_ext(ZEXT216(0),auVar4,0xc,1);
        *pbVar15 = auVar40[0];
        bVar42 = auVar40[1];
        pbVar15[1] = bVar42;
        bVar43 = auVar40[2];
        pbVar15[2] = bVar43;
        bVar44 = auVar40[3];
        pbVar15[3] = bVar44;
        bVar45 = auVar40[4];
        pbVar15[4] = bVar45;
        bVar46 = auVar40[5];
        pbVar15[5] = bVar46;
        bVar47 = auVar40[6];
        pbVar15[6] = bVar47;
        bVar48 = auVar40[7];
        pbVar15[7] = bVar48;
        auVar61 = NEON_aese(auVar57,ZEXT216(0));
        iVar16 = iVar16 + -1;
        auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
        auVar63 = NEON_ext(ZEXT216(0),auVar58,0xc,1);
        bVar60 = bVar36 ^ auVar62[0xc] ^ auVar58[0xc] ^ auVar63[0xc];
        bVar66 = bVar37 ^ auVar62[0xd] ^ auVar58[0xd] ^ auVar63[0xd];
        bVar68 = bVar38 ^ auVar62[0xe] ^ auVar58[0xe] ^ auVar63[0xe];
        bVar70 = bVar39 ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf];
        bVar49 = auVar40[8];
        bVar50 = auVar40[9];
        bVar51 = auVar40[10];
        bVar52 = auVar40[0xb];
        bVar53 = auVar40[0xc];
        bVar54 = auVar40[0xd];
        bVar55 = auVar40[0xe];
        bVar56 = auVar40[0xf];
        bVar59 = auVar61[0] ^ bVar20;
        bVar65 = auVar61[4] ^ bVar21;
        bVar67 = auVar61[8] ^ bVar22;
        bVar69 = auVar61[0xc] ^ bVar23;
        auVar57 = NEON_ext(ZEXT216(0),auVar40,0xc,1);
        bVar20 = bVar20 << 1;
        bVar21 = bVar21 << 1;
        bVar22 = bVar22 << 1;
        bVar23 = bVar23 << 1;
        bVar24 = bVar24 ^ auVar62[0] ^ auVar58[0] ^ auVar63[0] ^ bVar59;
        bVar25 = bVar25 ^ auVar62[1] ^ auVar58[1] ^ auVar63[1] ^ auVar61[1];
        bVar26 = bVar26 ^ auVar62[2] ^ auVar58[2] ^ auVar63[2] ^ auVar61[2];
        bVar27 = bVar27 ^ auVar62[3] ^ auVar58[3] ^ auVar63[3] ^ auVar61[3];
        bVar28 = bVar28 ^ auVar62[4] ^ auVar58[4] ^ auVar63[4] ^ bVar65;
        bVar29 = bVar29 ^ auVar62[5] ^ auVar58[5] ^ auVar63[5] ^ auVar61[5];
        bVar30 = bVar30 ^ auVar62[6] ^ auVar58[6] ^ auVar63[6] ^ auVar61[6];
        bVar31 = bVar31 ^ auVar62[7] ^ auVar58[7] ^ auVar63[7] ^ auVar61[7];
        bVar32 = bVar32 ^ auVar62[8] ^ auVar58[8] ^ auVar63[8] ^ bVar67;
        bVar33 = bVar33 ^ auVar62[9] ^ auVar58[9] ^ auVar63[9] ^ auVar61[9];
        bVar34 = bVar34 ^ auVar62[10] ^ auVar58[10] ^ auVar63[10] ^ auVar61[10];
        bVar35 = bVar35 ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb] ^ auVar61[0xb];
        bVar36 = bVar60 ^ bVar69;
        bVar37 = bVar66 ^ auVar61[0xd];
        bVar38 = bVar68 ^ auVar61[0xe];
        bVar39 = bVar70 ^ auVar61[0xf];
        auVar40[0] = auVar57[0] ^ bVar60 ^ auVar40[0] ^ bVar59;
        auVar40[1] = auVar57[1] ^ bVar66 ^ bVar42 ^ auVar61[1];
        auVar40[2] = auVar57[2] ^ bVar68 ^ bVar43 ^ auVar61[2];
        auVar40[3] = auVar57[3] ^ bVar70 ^ bVar44 ^ auVar61[3];
        auVar40[4] = auVar57[4] ^ bVar60 ^ bVar45 ^ bVar65;
        auVar40[5] = auVar57[5] ^ bVar66 ^ bVar46 ^ auVar61[5];
        auVar40[6] = auVar57[6] ^ bVar68 ^ bVar47 ^ auVar61[6];
        auVar40[7] = auVar57[7] ^ bVar70 ^ bVar48 ^ auVar61[7];
        auVar40[8] = auVar57[8] ^ bVar60 ^ bVar49 ^ bVar67;
        auVar40[9] = auVar57[9] ^ bVar66 ^ bVar50 ^ auVar61[9];
        auVar40[10] = auVar57[10] ^ bVar68 ^ bVar51 ^ auVar61[10];
        auVar40[0xb] = auVar57[0xb] ^ bVar70 ^ bVar52 ^ auVar61[0xb];
        auVar40[0xc] = auVar57[0xc] ^ bVar60 ^ bVar53 ^ bVar69;
        auVar40[0xd] = auVar57[0xd] ^ bVar66 ^ bVar54 ^ auVar61[0xd];
        auVar40[0xe] = auVar57[0xe] ^ bVar68 ^ bVar55 ^ auVar61[0xe];
        auVar40[0xf] = auVar57[0xf] ^ bVar70 ^ bVar56 ^ auVar61[0xf];
        *(uint *)(pbVar15 + 8) = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
        *(uint *)(pbVar15 + 0xc) = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
        *(uint *)(pbVar15 + 0x10) = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32)));
        *(uint *)(pbVar15 + 0x14) = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
        pbVar14 = pbVar15 + 0x18;
      } while (iVar16 != 0);
      uVar19 = 0xc;
      pbVar15 = pbVar15 + 0x38;
    }
    else {
      auVar41 = *(undefined1 (*) [16])(param_1 + 0x10);
      iVar16 = 7;
      uVar19 = 0xe;
      *param_3 = *(undefined4 *)param_1;
      param_3[1] = uVar11;
      param_3[2] = uVar12;
      param_3[3] = uVar13;
      pbVar15 = (byte *)(param_3 + 4);
      while( true ) {
        auVar1[8] = 0xd;
        auVar1._0_8_ = 0xc0f0e0d0c0f0e0d;
        auVar1[9] = 0xe;
        auVar1[10] = 0xf;
        auVar1[0xb] = 0xc;
        auVar1[0xc] = 0xd;
        auVar1[0xd] = 0xe;
        auVar1[0xe] = 0xf;
        auVar1[0xf] = 0xc;
        auVar62 = a64_TBL(ZEXT816(0),auVar41,auVar1);
        auVar3[1] = bVar25;
        auVar3[0] = bVar24;
        auVar3[2] = bVar26;
        auVar3[3] = bVar27;
        auVar3[4] = bVar28;
        auVar3[5] = bVar29;
        auVar3[6] = bVar30;
        auVar3[7] = bVar31;
        auVar3[8] = bVar32;
        auVar3[9] = bVar33;
        auVar3[10] = bVar34;
        auVar3[0xb] = bVar35;
        auVar3[0xc] = bVar36;
        auVar3[0xd] = bVar37;
        auVar3[0xe] = bVar38;
        auVar3[0xf] = bVar39;
        auVar57 = NEON_ext(ZEXT216(0),auVar3,0xc,1);
        *(int *)pbVar15 = auVar41._0_4_;
        *(int *)(pbVar15 + 4) = auVar41._4_4_;
        *(int *)(pbVar15 + 8) = auVar41._8_4_;
        *(int *)(pbVar15 + 0xc) = auVar41._12_4_;
        auVar63 = NEON_aese(auVar62,ZEXT216(0));
        iVar16 = iVar16 + -1;
        auVar62 = NEON_ext(ZEXT216(0),auVar57,0xc,1);
        auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
        bVar60 = auVar63[0] ^ bVar20;
        bVar66 = auVar63[4] ^ bVar21;
        bVar68 = auVar63[8] ^ bVar22;
        bVar70 = auVar63[0xc] ^ bVar23;
        bVar20 = bVar20 << 1;
        bVar21 = bVar21 << 1;
        bVar22 = bVar22 << 1;
        bVar23 = bVar23 << 1;
        bVar24 = bVar24 ^ auVar57[0] ^ auVar62[0] ^ auVar58[0] ^ bVar60;
        bVar25 = bVar25 ^ auVar57[1] ^ auVar62[1] ^ auVar58[1] ^ auVar63[1];
        bVar26 = bVar26 ^ auVar57[2] ^ auVar62[2] ^ auVar58[2] ^ auVar63[2];
        bVar27 = bVar27 ^ auVar57[3] ^ auVar62[3] ^ auVar58[3] ^ auVar63[3];
        bVar28 = bVar28 ^ auVar57[4] ^ auVar62[4] ^ auVar58[4] ^ bVar66;
        bVar29 = bVar29 ^ auVar57[5] ^ auVar62[5] ^ auVar58[5] ^ auVar63[5];
        bVar30 = bVar30 ^ auVar57[6] ^ auVar62[6] ^ auVar58[6] ^ auVar63[6];
        bVar31 = bVar31 ^ auVar57[7] ^ auVar62[7] ^ auVar58[7] ^ auVar63[7];
        bVar32 = bVar32 ^ auVar57[8] ^ auVar62[8] ^ auVar58[8] ^ bVar68;
        bVar33 = bVar33 ^ auVar57[9] ^ auVar62[9] ^ auVar58[9] ^ auVar63[9];
        bVar34 = bVar34 ^ auVar57[10] ^ auVar62[10] ^ auVar58[10] ^ auVar63[10];
        bVar35 = bVar35 ^ auVar57[0xb] ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb];
        bVar36 = bVar36 ^ auVar57[0xc] ^ auVar62[0xc] ^ auVar58[0xc] ^ bVar70;
        bVar37 = bVar37 ^ auVar57[0xd] ^ auVar62[0xd] ^ auVar58[0xd] ^ auVar63[0xd];
        bVar38 = bVar38 ^ auVar57[0xe] ^ auVar62[0xe] ^ auVar58[0xe] ^ auVar63[0xe];
        bVar39 = bVar39 ^ auVar57[0xf] ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf];
        *(uint *)(pbVar15 + 0x10) = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
        *(uint *)(pbVar15 + 0x14) = CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
        *(uint *)(pbVar15 + 0x18) = CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(bVar33,bVar32)));
        *(uint *)(pbVar15 + 0x1c) = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
        pbVar15 = pbVar15 + 0x20;
        if (iVar16 == 0) break;
        uVar9 = CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
        auVar64._4_4_ = uVar9;
        auVar64._0_4_ = uVar9;
        auVar64._8_4_ = uVar9;
        auVar64._12_4_ = uVar9;
        auVar57 = NEON_ext(ZEXT216(0),auVar41,0xc,1);
        auVar63 = NEON_aese(auVar64,ZEXT216(0));
        bVar60 = auVar41[1];
        bVar66 = auVar41[2];
        bVar68 = auVar41[3];
        bVar70 = auVar41[4];
        bVar42 = auVar41[5];
        bVar43 = auVar41[6];
        bVar44 = auVar41[7];
        bVar45 = auVar41[8];
        bVar46 = auVar41[9];
        bVar47 = auVar41[10];
        bVar48 = auVar41[0xb];
        bVar49 = auVar41[0xc];
        bVar50 = auVar41[0xd];
        bVar51 = auVar41[0xe];
        bVar52 = auVar41[0xf];
        auVar62 = NEON_ext(ZEXT216(0),auVar57,0xc,1);
        auVar58 = NEON_ext(ZEXT216(0),auVar62,0xc,1);
        auVar41[0] = auVar41[0] ^ auVar57[0] ^ auVar62[0] ^ auVar58[0] ^ auVar63[0];
        auVar41[1] = bVar60 ^ auVar57[1] ^ auVar62[1] ^ auVar58[1] ^ auVar63[1];
        auVar41[2] = bVar66 ^ auVar57[2] ^ auVar62[2] ^ auVar58[2] ^ auVar63[2];
        auVar41[3] = bVar68 ^ auVar57[3] ^ auVar62[3] ^ auVar58[3] ^ auVar63[3];
        auVar41[4] = bVar70 ^ auVar57[4] ^ auVar62[4] ^ auVar58[4] ^ auVar63[4];
        auVar41[5] = bVar42 ^ auVar57[5] ^ auVar62[5] ^ auVar58[5] ^ auVar63[5];
        auVar41[6] = bVar43 ^ auVar57[6] ^ auVar62[6] ^ auVar58[6] ^ auVar63[6];
        auVar41[7] = bVar44 ^ auVar57[7] ^ auVar62[7] ^ auVar58[7] ^ auVar63[7];
        auVar41[8] = bVar45 ^ auVar57[8] ^ auVar62[8] ^ auVar58[8] ^ auVar63[8];
        auVar41[9] = bVar46 ^ auVar57[9] ^ auVar62[9] ^ auVar58[9] ^ auVar63[9];
        auVar41[10] = bVar47 ^ auVar57[10] ^ auVar62[10] ^ auVar58[10] ^ auVar63[10];
        auVar41[0xb] = bVar48 ^ auVar57[0xb] ^ auVar62[0xb] ^ auVar58[0xb] ^ auVar63[0xb];
        auVar41[0xc] = bVar49 ^ auVar57[0xc] ^ auVar62[0xc] ^ auVar58[0xc] ^ auVar63[0xc];
        auVar41[0xd] = bVar50 ^ auVar57[0xd] ^ auVar62[0xd] ^ auVar58[0xd] ^ auVar63[0xd];
        auVar41[0xe] = bVar51 ^ auVar57[0xe] ^ auVar62[0xe] ^ auVar58[0xe] ^ auVar63[0xe];
        auVar41[0xf] = bVar52 ^ auVar57[0xf] ^ auVar62[0xf] ^ auVar58[0xf] ^ auVar63[0xf];
      }
    }
    *(undefined4 *)pbVar15 = uVar19;
    uVar18 = 0;
  }
  return uVar18;
}



/* Entry: 1001e5868; end: 1001e595b;  */

void FUN_1001e5868(long param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  short *psVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte abStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = 0xfffffffffffffff0;
  do {
    uVar2 = (*(uint *)(param_1 + 0x114) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x114) & 0xff00ff) << 8;
    uVar2 = (uVar2 >> 0x10 | uVar2 << 0x10) + 1;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0x114) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar1 = uVar8 + 0x10;
    (**(code **)(param_1 + 0xf8))((undefined8 *)(param_1 + 0x108),auStack_68 + uVar8,param_1);
    uVar8 = uVar1;
  } while (uVar1 < 0x20);
  if (param_3 != 0) {
    pbVar4 = abStack_78;
    do {
      *pbVar4 = *pbVar4 ^ *param_2;
      param_3 = param_3 + -1;
      pbVar4 = pbVar4 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  pbVar4 = abStack_78;
  FUN_1001e4e80(pbVar4,0x100,param_1);
  *(undefined8 *)(param_1 + 0xf8) = 0x1001e5120;
  *(undefined8 *)(param_1 + 0x100) = 0x1001e55e0;
  *(undefined8 *)(param_1 + 0x110) = uStack_50;
  *(undefined8 *)(param_1 + 0x108) = uStack_58;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    if (*(long *)(pbVar4 + 0x278) != 0) {
      lVar6 = *(long *)(pbVar4 + 0x278) * 0x18;
      psVar5 = (short *)(*(long *)(pbVar4 + 0x280) + 0x10);
      do {
        if (*psVar5 == 2) {
          return;
        }
        lVar6 = lVar6 + -0x18;
        psVar5 = psVar5 + 0xc;
      } while (lVar6 != 0);
    }
    iVar3 = (int)pbVar4 + 0x278;
    FUN_1001e5a00();
    if (iVar3 != 0) {
      lVar6 = *(long *)(pbVar4 + 0x278);
      puVar7 = (undefined8 *)(*(long *)(pbVar4 + 0x280) + lVar6 * 0x18);
      *puVar7 = 0;
      puVar7[1] = FUN_100a3c1a4;
      *(undefined2 *)(puVar7 + 2) = 2;
      *(long *)(pbVar4 + 0x278) = lVar6 + 1;
    }
    return;
  }
  return;
}



/* Entry: 1001e595c; end: 1001e596f;  */

void FUN_1001e595c(long param_1)

{
  int iVar1;
  short *psVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x278) != 0) {
    lVar3 = *(long *)(param_1 + 0x278) * 0x18;
    psVar2 = (short *)(*(long *)(param_1 + 0x280) + 0x10);
    do {
      if (*psVar2 == 2) {
        return;
      }
      lVar3 = lVar3 + -0x18;
      psVar2 = psVar2 + 0xc;
    } while (lVar3 != 0);
  }
  iVar1 = (int)param_1 + 0x278;
  FUN_1001e5a00();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x278);
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x280) + lVar3 * 0x18);
    *puVar4 = 0;
    puVar4[1] = FUN_100a3c1a4;
    *(undefined2 *)(puVar4 + 2) = 2;
    *(long *)(param_1 + 0x278) = lVar3 + 1;
  }
  return;
}



/* Entry: 1001e5970; end: 1001e59ff;  */

void FUN_1001e5970(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ushort *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x278) != 0) {
    lVar3 = *(long *)(param_1 + 0x278) * 0x18;
    puVar2 = (ushort *)(*(long *)(param_1 + 0x280) + 0x10);
    do {
      if (*puVar2 == param_2) {
        return;
      }
      lVar3 = lVar3 + -0x18;
      puVar2 = puVar2 + 0xc;
    } while (lVar3 != 0);
  }
  iVar1 = (int)param_1 + 0x278;
  FUN_1001e5a00();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x278);
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x280) + lVar3 * 0x18);
    *puVar4 = param_3;
    puVar4[1] = param_4;
    *(short *)(puVar4 + 2) = (short)param_2;
    *(long *)(param_1 + 0x278) = lVar3 + 1;
  }
  return;
}



/* Entry: 1001e5a00; end: 1001e5b17;  */

/* WARNING: Removing unreachable block (ram,0x0001001e5b54) */

undefined1 * FUN_1001e5a00(ulong *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = &stack0xffffffffffffffd0;
  uVar3 = param_1[2];
  if (uVar3 != 0) {
    if (*param_1 < uVar3) {
      puVar6 = (undefined1 *)0x1;
    }
    else if ((long)uVar3 < 0) {
      FUN_1004d2c58(0x10,0,0x45,&UNK_10f6d0b75,0x1b5);
      puVar6 = (undefined1 *)0x0;
    }
    else {
      FUN_1001e5b18(&stack0xffffffffffffffd0,uVar3 << 1);
      if (((ulong)puVar6 & 1) != 0) {
        if (param_1[2] != 0) {
          puVar4 = (undefined8 *)0x0;
          uVar3 = 0;
          do {
            puVar2 = (undefined8 *)(param_1[1] + (long)puVar4);
            uVar8 = puVar2[1];
            uVar7 = *puVar2;
            *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(puVar2 + 2);
            puVar4[1] = uVar8;
            *puVar4 = uVar7;
            uVar3 = uVar3 + 1;
            puVar4 = puVar4 + 3;
          } while (uVar3 < param_1[2]);
        }
        FUN_1001e33e0(param_1[1]);
        param_1[1] = 0;
        param_1[2] = 0;
      }
      FUN_1001e33e0(0);
    }
    return puVar6;
  }
  puVar1 = param_1 + 1;
  FUN_1001e33e0(*puVar1);
  *puVar1 = 0;
  param_1[2] = 0;
  puVar4 = (undefined8 *)0x188;
  func_0x000107c610a0();
  if (puVar4 == (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d0b75,0x146);
    puVar6 = (undefined1 *)0x0;
  }
  else {
    lVar5 = 0;
    uVar3 = 0;
    *puVar4 = 0x180;
    *puVar1 = (ulong)(puVar4 + 1);
    param_1[2] = 0x10;
    do {
      puVar4 = (undefined8 *)(*puVar1 + lVar5);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined2 *)(puVar4 + 2) = 0;
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar3 < param_1[2]);
    puVar6 = (undefined1 *)0x1;
  }
  return puVar6;
}



/* Entry: 1001e5b18; end: 1001e5bf3;  */

undefined8 FUN_1001e5b18(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_1001e33e0(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
LAB_1001e5bb8:
    uVar3 = 1;
  }
  else {
    if (param_2 < 0xaaaaaaaaaaaaaab) {
      plVar2 = (long *)(param_2 * 0x18 + 8);
      func_0x000107c610a0();
      if (plVar2 != (long *)0x0) {
        lVar5 = 0;
        uVar6 = 0;
        *plVar2 = param_2 * 0x18;
        *param_1 = (long)(plVar2 + 1);
        param_1[1] = param_2;
        do {
          puVar1 = (undefined8 *)(*param_1 + lVar5);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined2 *)(puVar1 + 2) = 0;
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar6 < (ulong)param_1[1]);
        goto LAB_1001e5bb8;
      }
      *param_1 = 0;
      uVar3 = 0x41;
      uVar4 = 0x146;
    }
    else {
      uVar3 = 0x45;
      uVar4 = 0x141;
    }
    FUN_1004d2c58(0x10,0,uVar3,&UNK_10f6d0b75,uVar4);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1001e5bf4; end: 1001e5c07;  */

void FUN_1001e5bf4(void)

{
  return;
}



/* Entry: 1001e5c08; end: 1001e60df;  */

long * FUN_1001e5c08(long *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lStack_60;
  long *plStack_58;
  
  if (param_1 == (long *)0x0) {
    puVar9 = &UNK_10f6d0a17;
    uVar8 = 0xb9;
    uVar10 = 0x265;
  }
  else {
    puVar5 = (undefined8 *)0xb0;
    func_0x000107c610a0();
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0xa8;
      plVar15 = puVar5 + 1;
      *plVar15 = *param_1;
      plVar16 = puVar5 + 2;
      *plVar16 = 0;
      *(undefined2 *)(puVar5 + 3) = 0;
      *(undefined2 *)((long)puVar5 + 0x1a) = *(undefined2 *)((long)param_1 + 0x1ea);
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[8] = 0;
      lVar11 = param_1[0x36];
      puVar5[10] = param_1[0x37];
      puVar5[9] = lVar11;
      *(undefined4 *)(puVar5 + 0xb) = 1000;
      plVar6 = param_1 + 0x28;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      iVar13 = (int)*plVar6;
      do {
        if (iVar13 == -1) break;
        lVar11 = *plVar6;
        if ((int)lVar11 == iVar13) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *(int *)plVar6 = iVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar3 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar13 = (int)lVar11;
      } while (!bVar4);
      puVar5[0xe] = param_1;
      iVar13 = (int)param_1[0x28];
      do {
        if (iVar13 == -1) break;
        lVar11 = *plVar6;
        if ((int)lVar11 == iVar13) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *(int *)plVar6 = iVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar3 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar13 = (int)lVar11;
      } while (!bVar4);
      puVar5[0xf] = param_1;
      lVar11 = puVar5[0xe];
      puVar5[0x11] = *(undefined8 *)(lVar11 + 0x198);
      *(undefined4 *)(puVar5 + 0x12) = *(undefined4 *)(lVar11 + 0x1a0);
      puVar5[0x13] = 0;
      puVar5[0x14] = 0;
      *(undefined4 *)(puVar5 + 0x15) = 0;
      *(byte *)((long)puVar5 + 0xac) =
           (byte)*(undefined2 *)(lVar11 + 0x2f0) & 2 | *(byte *)((long)puVar5 + 0xac) & 0xf8 |
           (byte)((ushort)*(undefined2 *)(lVar11 + 0x2f0) >> 8) & 4;
      puVar5[0x10] = 0;
      puVar5 = (undefined8 *)0xf8;
      plStack_58 = plVar15;
      func_0x000107c610a0();
      if (puVar5 == (undefined8 *)0x0) {
        FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d0b75,0xc6);
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *puVar5 = 0xf0;
        puVar7 = puVar5 + 1;
        *puVar7 = plVar15;
        *(undefined4 *)(puVar5 + 2) = 0;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        puVar5[8] = 0;
        puVar5[7] = 0;
        puVar5[10] = 0;
        puVar5[9] = 0;
        puVar5[0xc] = 0;
        puVar5[0xb] = 0;
        puVar5[0xe] = 0;
        puVar5[0xd] = 0;
        puVar5[0x10] = 0;
        puVar5[0xf] = 0;
        puVar5[0x12] = 0;
        puVar5[0x11] = 0;
        puVar5[0x14] = 0;
        puVar5[0x13] = 0;
        puVar5[0x16] = 0;
        puVar5[0x15] = 0;
        puVar5[0x18] = 0;
        puVar5[0x17] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x19] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1b] = 0;
        *(undefined8 *)((long)puVar5 + 0xeb) = 0;
        *(undefined8 *)((long)puVar5 + 0xe3) = 0;
      }
      FUN_1001e60e0(plVar16,puVar7);
      if (*plVar16 != 0) {
        *(int *)(*plVar16 + 8) = (int)param_1[0x1b];
        FUN_1001e6108(&lStack_60,param_1[0x35]);
        lVar11 = lStack_60;
        lStack_60 = 0;
        FUN_1001e3290(*plVar16 + 0x20,lVar11);
        lVar11 = lStack_60;
        lStack_60 = 0;
        if (lVar11 != 0) {
          FUN_10022a850();
          FUN_1001e33e0();
        }
        lVar11 = *plVar16;
        if (*(long *)(lVar11 + 0x20) != 0) {
          *(char *)(lVar11 + 0xe8) = (char)(int)param_1[0x38];
          lVar14 = param_1[0x2b];
          *(long *)(lVar11 + 0x28) = param_1[0x39];
          *(long *)(lVar11 + 0x30) = lVar14;
          *(ushort *)(lVar11 + 0xe9) =
               *(ushort *)(lVar11 + 0xe9) & 0xffdf | (*(ushort *)(param_1 + 0x5e) & 1) << 5;
          *(ushort *)(*plVar16 + 0xe9) =
               *(ushort *)(*plVar16 + 0xe9) & 0xfbff | (*(ushort *)(param_1 + 0x5e) & 0x40) << 4;
          lVar18 = *plVar16;
          lVar14 = param_1[0x52];
          uVar17 = param_1[0x53];
          lVar11 = lVar18 + 0x60;
          FUN_1001e65cc(lVar11,uVar17);
          if ((int)lVar11 != 0) {
            if ((uVar17 & 0x7fffffffffffffff) != 0) {
              func_0x000107c610b4(*(undefined8 *)(lVar18 + 0x60),lVar14);
            }
            lVar19 = *plVar16;
            lVar14 = param_1[0x4c];
            lVar18 = param_1[0x4d];
            lVar11 = lVar19 + 0x78;
            FUN_1001e6684(lVar11,lVar18);
            uVar1 = (uint)lVar11 ^ 1;
            if (lVar18 == 0) {
              uVar1 = 1;
            }
            if ((uVar1 & 1) == 0) {
              func_0x000107c610b4(*(undefined8 *)(lVar19 + 0x78),lVar14,lVar18);
            }
            if ((uint)lVar11 != 0) {
              lVar18 = *plVar16;
              lVar14 = param_1[0x5c];
              uVar17 = param_1[0x5d];
              lVar11 = lVar18 + 0xc0;
              FUN_1001e65cc(lVar11,uVar17);
              if ((int)lVar11 != 0) {
                if ((uVar17 & 0x7fffffffffffffff) != 0) {
                  func_0x000107c610b4(*(undefined8 *)(lVar18 + 0xc0),lVar14);
                }
                lVar11 = param_1[0x43];
                lVar14 = *plVar16;
                if (lVar11 != 0) {
                  func_0x0001001e6ec8();
                  lVar18 = *(long *)(lVar14 + 0x38);
                  *(long *)(lVar14 + 0x38) = lVar11;
                  if (lVar18 != 0) {
                    FUN_1001e33e0();
                  }
                  lVar14 = *plVar16;
                  if (*(long *)(lVar14 + 0x38) == 0) goto LAB_1001e6094;
                }
                lVar11 = param_1[0x44];
                *(long *)(lVar14 + 0x48) = param_1[0x45];
                *(long *)(lVar14 + 0x40) = lVar11;
                *(ushort *)(lVar14 + 0xe9) =
                     *(ushort *)(lVar14 + 0xe9) & 0xfff7 | *(ushort *)(param_1 + 0x5e) >> 1 & 8;
                piVar12 = (int *)param_1[0x54];
                if (piVar12 != (int *)0x0) {
                  iVar13 = *piVar12;
                  do {
                    plVar15 = plStack_58;
                    if (iVar13 == -1) break;
                    iVar2 = *piVar12;
                    if (iVar2 == iVar13) {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                      if (bVar4) {
                        *piVar12 = iVar13 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      bVar4 = cVar3 == '\0';
                    }
                    else {
                      bVar4 = false;
                      ClearExclusiveLocal();
                    }
                    iVar13 = iVar2;
                  } while (!bVar4);
                }
                lVar14 = plVar15[1];
                lVar11 = *(long *)(lVar14 + 0x70);
                *(int **)(lVar14 + 0x70) = piVar12;
                if (lVar11 != 0) {
                  FUN_10021f114();
                  lVar14 = plVar15[1];
                }
                *(ushort *)(lVar14 + 0xe9) =
                     *(ushort *)(lVar14 + 0xe9) & 0xfffd | *(ushort *)(param_1 + 0x5e) >> 2 & 2;
                *(ushort *)(plVar15[1] + 0xe9) =
                     *(ushort *)(plVar15[1] + 0xe9) & 0xfffb | *(ushort *)(param_1 + 0x5e) & 4;
                *(ushort *)(plVar15[1] + 0xe9) =
                     *(ushort *)(plVar15[1] + 0xe9) & 0xffbf |
                     *(ushort *)(param_1 + 0x5e) >> 3 & 0x40;
                plVar15[0x13] = param_1[0x1c];
                plVar6 = plVar15;
                (**(code **)(*plVar15 + 8))();
                if ((int)plVar6 != 0) {
                  uVar17 = *(ulong *)(plVar15[6] + 0x110);
                  (**(code **)(*(long *)(plVar15[0xd] + 8) + 0x58))();
                  if ((uVar17 & 1) != 0) {
                    return plVar15;
                  }
                }
              }
            }
          }
        }
      }
LAB_1001e6094:
      plStack_58 = (long *)0x0;
      FUN_1006fd5f4(plVar15);
      FUN_1001e33e0();
      return (long *)0x0;
    }
    puVar9 = &UNK_10f6d0b75;
    uVar8 = 0x41;
    uVar10 = 0xc6;
  }
  FUN_1004d2c58(0x10,0,uVar8,puVar9,uVar10);
  return (long *)0x0;
}



/* Entry: 1001e60e0; end: 1001e6107;  */

void FUN_1001e60e0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  FUN_10022a694();
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + -8);
    if (*plVar2 + 8 != 0) {
      func_0x000107c60ee4(plVar2,*plVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar2);
    return;
  }
  return;
}



/* Entry: 1001e6108; end: 1001e65cb;  */

void FUN_1001e6108(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  
  uVar15 = param_2[6];
  puVar4 = (undefined8 *)0xb8;
  func_0x000107c610a0();
  if (puVar4 == (undefined8 *)0x0) {
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cfcb5,0xc6);
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = puVar4 + 1;
    puVar4[2] = 0;
    *plVar14 = 0;
    *puVar4 = 0xb0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[6] = 0;
    puVar4[5] = 0;
    puVar9 = puVar4 + 8;
    puVar4[9] = 0;
    *puVar9 = 0;
    puVar4[7] = uVar15;
    plVar16 = puVar4 + 0x14;
    *plVar16 = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    *(undefined8 *)((long)puVar4 + 0x91) = 0;
    *(undefined8 *)((long)puVar4 + 0x89) = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar5 = (ulong *)param_2[1];
    if (puVar5 != (ulong *)0x0) {
      FUN_100229de4();
      if ((puVar5 != (ulong *)0x0) && (uVar12 = *puVar5, uVar12 != 0)) {
        uVar18 = 0;
        uVar6 = puVar5[1];
LAB_1001e61a4:
        lVar10 = *(long *)(uVar6 + uVar18 * 8);
        if (lVar10 == 0) goto LAB_1001e6204;
        piVar11 = (int *)(lVar10 + 0x18);
        iVar13 = *piVar11;
        do {
          if (iVar13 == -1) break;
          iVar1 = *piVar11;
          if (iVar1 == iVar13) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = iVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            bVar3 = cVar2 == '\0';
          }
          else {
            bVar3 = false;
            ClearExclusiveLocal();
          }
          iVar13 = iVar1;
        } while (!bVar3);
        *(long *)(puVar5[1] + uVar18 * 8) = lVar10;
        uVar6 = puVar5[1];
        if (*(long *)(uVar6 + uVar18 * 8) != 0) {
          uVar12 = *puVar5;
          goto LAB_1001e6204;
        }
        if (uVar18 != 0) {
          uVar12 = 0;
          do {
            if (*(long *)(puVar5[1] + uVar12 * 8) != 0) {
              FUN_100229fdc();
            }
            uVar12 = uVar12 + 1;
          } while (uVar18 != uVar12);
          uVar6 = puVar5[1];
        }
        FUN_1001e33e0(uVar6);
        FUN_1001e33e0(puVar5);
        puVar5 = (ulong *)0x0;
      }
LAB_1001e6270:
      FUN_1001e3370(puVar4 + 2,puVar5);
      if (puVar4[2] == 0) goto code_r0x0001001e33e0;
    }
    piVar11 = (int *)*param_2;
    if (piVar11 != (int *)0x0) {
      iVar13 = *piVar11;
      do {
        if (iVar13 == -1) break;
        iVar1 = *piVar11;
        if (iVar1 == iVar13) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar3 = cVar2 == '\0';
        }
        else {
          bVar3 = false;
          ClearExclusiveLocal();
        }
        iVar13 = iVar1;
      } while (!bVar3);
    }
    lVar10 = *plVar14;
    *plVar14 = (long)piVar11;
    if (lVar10 != 0) {
      FUN_10021f114();
    }
    puVar4[6] = param_2[5];
    uVar15 = param_2[7];
    uVar12 = param_2[8];
    puVar7 = puVar9;
    FUN_1001e65cc(puVar9,uVar12);
    if ((int)puVar7 == 0) {
code_r0x0001001e33e0:
      *param_1 = 0;
      FUN_10022a850();
      if (plVar14 == (long *)0x0) {
        return;
      }
      plVar14 = plVar14 + -1;
      if (*plVar14 + 8 != 0) {
        func_0x000107c60ee4(plVar14,*plVar14 + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar14);
      return;
    }
    if ((uVar12 & 0x7fffffffffffffff) != 0) {
      func_0x000107c610b4(*puVar9,uVar15);
    }
    uVar15 = param_2[9];
    puVar4[0xb] = param_2[10];
    puVar4[10] = uVar15;
    (**(code **)(puVar4[7] + 0x18))(plVar14,param_2);
    lVar10 = param_2[0xc];
    if (lVar10 != 0) {
      piVar11 = (int *)(lVar10 + 0x18);
      iVar13 = *piVar11;
      do {
        if (iVar13 == -1) break;
        iVar1 = *piVar11;
        if (iVar1 == iVar13) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar3 = cVar2 == '\0';
        }
        else {
          bVar3 = false;
          ClearExclusiveLocal();
        }
        iVar13 = iVar1;
      } while (!bVar3);
    }
    lVar8 = puVar4[0xd];
    puVar4[0xd] = lVar10;
    if (lVar8 != 0) {
      FUN_100229fdc();
    }
    lVar10 = param_2[0xd];
    if (lVar10 != 0) {
      piVar11 = (int *)(lVar10 + 0x18);
      iVar13 = *piVar11;
      do {
        if (iVar13 == -1) break;
        iVar1 = *piVar11;
        if (iVar1 == iVar13) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar3 = cVar2 == '\0';
        }
        else {
          bVar3 = false;
          ClearExclusiveLocal();
        }
        iVar13 = iVar1;
      } while (!bVar3);
    }
    lVar8 = puVar4[0xe];
    puVar4[0xe] = lVar10;
    if (lVar8 != 0) {
      FUN_100229fdc();
    }
    *(undefined1 *)(puVar4 + 0xf) = *(undefined1 *)(param_2 + 0xe);
    uVar15 = *(undefined8 *)((long)param_2 + 0x71);
    *(undefined8 *)((long)puVar4 + 0x81) = *(undefined8 *)((long)param_2 + 0x79);
    *(undefined8 *)((long)puVar4 + 0x79) = uVar15;
    uVar15 = *(undefined8 *)((long)param_2 + 0x81);
    *(undefined8 *)((long)puVar4 + 0x91) = *(undefined8 *)((long)param_2 + 0x89);
    *(undefined8 *)((long)puVar4 + 0x89) = uVar15;
    plVar19 = (long *)param_2[0x13];
    if (plVar19 != (long *)0x0) {
      puVar9 = (undefined8 *)0x20;
      func_0x000107c610a0();
      if (puVar9 == (undefined8 *)0x0) {
        FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cfcb5,0xc6);
        plVar17 = (long *)0x0;
      }
      else {
        *puVar9 = 0x18;
        plVar17 = puVar9 + 1;
        *plVar17 = 0;
        *(undefined2 *)(puVar9 + 2) = 0;
        puVar9[3] = 0;
        lVar10 = *plVar19;
        if (lVar10 == 0) {
          *plVar17 = 0;
        }
        else {
          piVar11 = (int *)(lVar10 + 0x18);
          iVar13 = *piVar11;
          do {
            if (iVar13 == -1) break;
            iVar1 = *piVar11;
            if (iVar1 == iVar13) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = iVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              bVar3 = cVar2 == '\0';
            }
            else {
              bVar3 = false;
              ClearExclusiveLocal();
            }
            iVar13 = iVar1;
          } while (!bVar3);
          lVar8 = *plVar17;
          *plVar17 = lVar10;
          if (lVar8 != 0) {
            FUN_100229fdc();
          }
        }
        *(short *)(puVar9 + 2) = (short)plVar19[1];
        piVar11 = (int *)plVar19[2];
        if (piVar11 != (int *)0x0) {
          iVar13 = *piVar11;
          do {
            if (iVar13 == -1) break;
            iVar1 = *piVar11;
            if (iVar1 == iVar13) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = iVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              bVar3 = cVar2 == '\0';
            }
            else {
              bVar3 = false;
              ClearExclusiveLocal();
            }
            iVar13 = iVar1;
          } while (!bVar3);
        }
        lVar10 = puVar9[3];
        puVar9[3] = piVar11;
        if (lVar10 != 0) {
          FUN_10021f114();
        }
      }
      FUN_10022a8ec(plVar16,plVar17);
      if (*plVar16 == 0) goto code_r0x0001001e33e0;
    }
    piVar11 = (int *)param_2[0x14];
    if (piVar11 != (int *)0x0) {
      iVar13 = *piVar11;
      do {
        if (iVar13 == -1) break;
        iVar1 = *piVar11;
        if (iVar1 == iVar13) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          bVar3 = cVar2 == '\0';
        }
        else {
          bVar3 = false;
          ClearExclusiveLocal();
        }
        iVar13 = iVar1;
      } while (!bVar3);
    }
    lVar10 = puVar4[0x15];
    puVar4[0x15] = piVar11;
    if (lVar10 != 0) {
      FUN_10021f114();
    }
    puVar4[0x16] = param_2[0x15];
  }
  *param_1 = plVar14;
  return;
LAB_1001e6204:
  uVar18 = uVar18 + 1;
  if (uVar12 <= uVar18) goto LAB_1001e6270;
  goto LAB_1001e61a4;
}



/* Entry: 1001e65cc; end: 1001e667f;  */

undefined8 FUN_1001e65cc(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1001e33e0(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
LAB_1001e6644:
    uVar2 = 1;
  }
  else {
    if ((long)param_2 < 0) {
      uVar2 = 0x45;
      uVar3 = 0x141;
    }
    else {
      if (param_2 < 0x7ffffffffffffffc) {
        plVar1 = (long *)(param_2 * 2 + 8);
        func_0x000107c610a0();
        if (plVar1 != (long *)0x0) {
          *plVar1 = param_2 * 2;
          *param_1 = (long)(plVar1 + 1);
          param_1[1] = param_2;
          goto LAB_1001e6644;
        }
      }
      *param_1 = 0;
      uVar2 = 0x41;
      uVar3 = 0x146;
    }
    FUN_1004d2c58(0x10,0,uVar2,&UNK_10f6cfdaf,uVar3);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1001e6680; end: 1001e6683;  */

void FUN_1001e6680(void)

{
  return;
}



/* Entry: 1001e6684; end: 1001e6707;  */

undefined8 FUN_1001e6684(long *param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  
  FUN_1001e33e0(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
LAB_1001e66d0:
    uVar2 = 1;
  }
  else {
    if (param_2 < 0xfffffffffffffff8) {
      puVar1 = (ulong *)(param_2 + 8);
      func_0x000107c610a0();
      if (puVar1 != (ulong *)0x0) {
        *puVar1 = param_2;
        *param_1 = (long)(puVar1 + 1);
        param_1[1] = param_2;
        goto LAB_1001e66d0;
      }
    }
    *param_1 = 0;
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cfbca,0x146);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1001e6708; end: 1001e68c3;  */

undefined8 FUN_1001e6708(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_31;
  
  puVar1 = (undefined8 *)0x258;
  func_0x000107c610a0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cfcb5,0xc6);
  }
  else {
    *puVar1 = 0x250;
    puVar3 = puVar1 + 1;
    puVar1[2] = 0;
    *puVar3 = 0;
    *(undefined1 *)((long)puVar1 + 0x6b) = 0;
    *(undefined1 *)((long)puVar1 + 0x83) = 0;
    puVar1[0xe] = 0;
    *(undefined8 *)((long)puVar1 + 0x76) = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((long)puVar1 + 0xdc) = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    *(undefined8 *)((long)puVar1 + 0x5e) = 0;
    *(undefined8 *)((long)puVar1 + 0x56) = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[0x14] = 0;
    puVar1[0x13] = 0;
    puVar1[0x16] = 0;
    puVar1[0x15] = 0;
    puVar1[0x18] = 0;
    puVar1[0x17] = 0;
    *(undefined8 *)((long)puVar1 + 0xcd) = 0;
    *(undefined8 *)((long)puVar1 + 0xc5) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x22] = 0;
    puVar1[0x21] = 0;
    puVar1[0x24] = 0;
    puVar1[0x23] = 0;
    puVar1[0x26] = 0;
    puVar1[0x25] = 0;
    puVar1[0x28] = 0;
    puVar1[0x27] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x30] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x32] = 0;
    puVar1[0x31] = 0;
    puVar1[0x34] = 0;
    puVar1[0x33] = 0;
    puVar1[0x36] = 0;
    puVar1[0x35] = 0;
    puVar1[0x38] = 0;
    puVar1[0x37] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c7) = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x41] = 0;
    puVar1[0x40] = 0;
    puVar1[0x43] = 0;
    puVar1[0x42] = 0;
    puVar1[0x45] = 0;
    puVar1[0x44] = 0;
    puVar1[0x47] = 0;
    puVar1[0x46] = 0;
    puVar1[0x49] = 0;
    puVar1[0x48] = 0;
    puVar1[0x4a] = 0;
    uStack_31 = *(undefined1 *)*param_1;
    uStack_38 = 0;
    uStack_40 = 0;
    puVar2 = &uStack_38;
    FUN_1001e68c4(puVar2,&uStack_31,&uStack_40);
    FUN_1001e695c(puVar1 + 0x21,puVar2);
    uStack_31 = *(undefined1 *)*param_1;
    uStack_38 = 0;
    uStack_40 = 0;
    puVar2 = &uStack_38;
    FUN_1001e68c4(puVar2,&uStack_31,&uStack_40);
    FUN_1001e695c(puVar1 + 0x22,puVar2);
    FUN_1001e6a08(&uStack_40,param_1);
    FUN_1001e6ca4(puVar1 + 0x23,uStack_40);
    if (((puVar1[0x21] != 0) && (puVar1[0x22] != 0)) && (puVar1[0x23] != 0)) {
      param_1[6] = puVar3;
      *(undefined2 *)(param_1 + 2) = 0x303;
      return 1;
    }
    FUN_1006fd710(puVar3);
    FUN_1001e33e0();
  }
  return 0;
}



/* Entry: 1001e68c4; end: 1001e695b;  */

undefined8 * FUN_1001e68c4(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)0x280;
  func_0x000107c610a0();
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d017d,0xc6);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = 0x278;
    puVar4 = puVar3 + 1;
    uVar1 = *param_1;
    uVar2 = *param_2;
    *(undefined2 *)((long)puVar3 + 0x274) = 0;
    func_0x000107c60ee4(puVar4,0x260);
    *(short *)((long)puVar3 + 0x276) = (short)uVar1;
    *(undefined1 *)(puVar3 + 0x4f) = uVar2;
    *(undefined1 *)((long)puVar3 + 0x279) = 0;
    puVar3[0x4d] = 0;
    *(undefined4 *)(puVar3 + 0x4e) = 0;
  }
  return puVar4;
}



/* Entry: 1001e695c; end: 1001e6a07;  */

void FUN_1001e695c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)(lVar1 + 8);
  if (*plVar2 != 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    *plVar2 = 0;
  }
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + -8);
    if (*plVar2 + 8 != 0) {
      func_0x000107c60ee4(plVar2,*plVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar2);
    return;
  }
  return;
}



/* Entry: 1001e6a08; end: 1001e6a8b;  */

void FUN_1001e6a08(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lStack_28;
  
  plVar1 = &lStack_28;
  lStack_28 = param_2;
  func_0x0001001e69ac();
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 0x33;
    FUN_1001e6c04();
    if ((((ulong)plVar2 & 1) == 0) ||
       (lVar3 = *(long *)(lStack_28 + 8), plVar1[1] = lVar3, lVar3 == 0)) {
      *param_1 = 0;
      FUN_10022a2ec(plVar1);
      FUN_1001e33e0();
      return;
    }
  }
  *param_1 = plVar1;
  return;
}



/* Entry: 1001e6a8c; end: 1001e6baf;  */

undefined8 * FUN_1001e6a8c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  func_0x000107c60ee4(param_1 + 0x58,0x2d0);
  func_0x000107c60ee4(param_1 + 0x5a,600);
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) & 0xfe000000;
  *(undefined8 *)((long)param_1 + 0x624) = 0;
  *(undefined8 *)((long)param_1 + 0x61c) = 0;
  *(undefined8 *)((long)param_1 + 0x634) = 0;
  *(undefined8 *)((long)param_1 + 0x62c) = 0;
  *(undefined8 *)((long)param_1 + 0x643) = 0;
  *(undefined8 *)((long)param_1 + 0x63b) = 0;
  FUN_1001e47a4((long)param_1 + 0x644,7,&UNK_10e525a20);
  return param_1;
}



/* Entry: 1001e6bb0; end: 1001e6c03;  */

undefined8 * FUN_1001e6bb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x18;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
    return puVar1 + 1;
  }
  FUN_1004d2c58(7,0,0x41,&UNK_10f6c54b4,0x48);
  return (undefined8 *)0x0;
}



/* Entry: 1001e6c04; end: 1001e6ca3;  */

bool FUN_1001e6c04(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_1001e6bb0();
  func_0x0001001e6c68(param_1,plVar1);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_1001e33e0(param_1[2]);
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      (**(code **)param_1[4])(param_1[3]);
    }
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return lVar2 != 0;
}



/* Entry: 1001e6ca4; end: 1001e6ccb;  */

void FUN_1001e6ca4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  FUN_10022a2ec();
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + -8);
    if (*plVar2 + 8 != 0) {
      func_0x000107c60ee4(plVar2,*plVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar2);
    return;
  }
  return;
}



/* Entry: 1001e6ccc; end: 1001e6cd3;  */

undefined8 FUN_1001e6ccc(void)

{
  return 1;
}



/* Entry: 1001e6cd4; end: 1001e6ceb;  */

void FUN_1001e6cd4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    FUN_1006fd5f4();
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + -8);
      if (*plVar2 + 8 != 0) {
        func_0x000107c60ee4(plVar2,*plVar2 + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1001e6cec; end: 1001e6db7;  */

undefined8 FUN_1001e6cec(long *param_1,int param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  
  puVar1 = (ulong *)*param_1;
  if (puVar1 == (ulong *)0x0) {
    FUN_1001e2bf4();
    *param_1 = (long)puVar1;
    if (puVar1 == (ulong *)0x0) {
      uVar3 = 0xae;
LAB_1001e6da0:
      FUN_1004d2c58(0xe,0,0x41,&UNK_10f6c65c2,uVar3);
      return 0;
    }
  }
  if ((int)*puVar1 <= param_2) {
    iVar4 = (param_2 - (int)*puVar1) + 1;
    do {
      puVar2 = (undefined8 *)*param_1;
      func_0x0001001e2c8c(puVar2,0,*puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        uVar3 = 0xb8;
        goto LAB_1001e6da0;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar1 = (ulong *)*param_1;
    if (puVar1 == (ulong *)0x0) {
      return 1;
    }
  }
  if ((ulong)(long)param_2 < *puVar1) {
    *(undefined8 *)(puVar1[1] + (long)param_2 * 8) = param_3;
  }
  return 1;
}



/* Entry: 1001e6db8; end: 1001e6e17;  */

/* WARNING: Possible PIC construction at 0x0001001e6dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001e6df0) */
/* WARNING: Removing unreachable block (ram,0x0001001e6e00) */
/* WARNING: Removing unreachable block (ram,0x0001001e6df4) */

void FUN_1001e6db8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  func_0x0001001e2278();
  uStack_30 = 0xaaaaaaaaaaaaaaaa;
  uStack_28 = 0xaaaaaaaaaaaaaaaa;
  uStack_20 = 0;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000100176ff8(&uStack_30,&uStack_40);
  return;
}



/* Entry: 1001e6e18; end: 1001e6f2f;  */

undefined8 FUN_1001e6e18(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar1 != 0) {
    FUN_1001e33e0();
  }
  if (param_2 == 0) {
LAB_1001e6e94:
    uVar2 = 1;
  }
  else {
    lVar1 = param_2;
    func_0x000107c613d0();
    if (lVar1 - 0x100U < 0xffffffffffffff01) {
      uVar2 = 0xd5;
      uVar3 = 0x843;
    }
    else {
      func_0x0001001e6ec8();
      lVar1 = *(long *)(param_1 + 0x90);
      *(long *)(param_1 + 0x90) = param_2;
      if (lVar1 != 0) {
        FUN_1001e33e0(lVar1);
        param_2 = *(long *)(param_1 + 0x90);
      }
      if (param_2 != 0) goto LAB_1001e6e94;
      uVar2 = 0x41;
      uVar3 = 0x848;
    }
    FUN_1004d2c58(0x10,0,uVar2,&UNK_10f6d0a17,uVar3);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1001e6f30; end: 1001e73a3;  */

void FUN_1001e6f30(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  long unaff_x19;
  char *pcVar2;
  undefined8 uVar3;
  
  func_0x000107c610bc(param_1 + 3,0xaa,0xf0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  pcVar2 = (char *)(param_1 + 4);
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((long)param_1 + 0x104) = 0;
  func_0x0001001e7030(param_1,unaff_x19 + 0x150);
  if (*param_3 == '\x01') {
    uVar3 = *(undefined8 *)(param_3 + 1);
    *(undefined8 *)((long)param_1 + 0x29) = *(undefined8 *)(param_3 + 9);
    *(undefined8 *)((long)param_1 + 0x21) = uVar3;
    *(char *)((long)param_1 + 0x31) = param_3[0x11];
    if ((*(byte *)(param_1 + 4) & 1) != 0) goto LAB_1001e7004;
    cVar1 = '\x01';
  }
  else {
    if (*pcVar2 != '\x01') goto LAB_1001e7004;
    cVar1 = '\0';
  }
  *pcVar2 = cVar1;
LAB_1001e7004:
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(unaff_x19 + 0x2d0);
  *(undefined1 *)((long)param_1 + 0x104) = *(undefined1 *)(unaff_x19 + 0x17a);
  return;
}



/* Entry: 1001e73a4; end: 1001e743b;  */

long * FUN_1001e73a4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)0x48;
  func_0x000107c610a0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1004d2c58(0x11,0,0x41,&UNK_10f6c5149,0x4b);
  }
  else {
    *puVar1 = 0x40;
    plVar3 = puVar1 + 1;
    *plVar3 = param_1;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[8] = 0;
    *(undefined4 *)((long)puVar1 + 0x14) = 1;
    *(undefined4 *)((long)puVar1 + 0x24) = 1;
    if (*(code **)(param_1 + 0x38) == (code *)0x0) {
      return plVar3;
    }
    plVar2 = plVar3;
    (**(code **)(param_1 + 0x38))();
    if ((int)plVar2 != 0) {
      return plVar3;
    }
    FUN_1001e33e0(plVar3);
  }
  return (long *)0x0;
}



/* Entry: 1001e743c; end: 1001e75ef;  */

long FUN_1001e743c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (plVar1 != (long *)0x0) {
    do {
      lVar2 = (long)plVar1 + 0x1c;
      FUN_10021f0b0();
      if ((int)lVar2 == 0) {
        return lVar2;
      }
      plVar4 = (long *)plVar1[5];
      plVar1[5] = 0;
      if ((*plVar1 != 0) && (pcVar3 = *(code **)(*plVar1 + 0x40), pcVar3 != (code *)0x0)) {
        (*pcVar3)(plVar1);
      }
      FUN_1001e33e0(plVar1);
      plVar1 = plVar4;
    } while (plVar4 != (long *)0x0);
    return 1;
  }
  return 1;
}



/* Entry: 1001e75f0; end: 1001e7667;  */

undefined8 FUN_1001e75f0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  piVar1 = (int *)(param_1 + 0x1c);
  iVar5 = *piVar1;
  do {
    if (iVar5 == -1) {
      return 1;
    }
    iVar2 = *piVar1;
    if (iVar2 == iVar5) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      bVar4 = cVar3 == '\0';
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    iVar5 = iVar2;
  } while (!bVar4);
  return 1;
}



/* Entry: 1001e7668; end: 1001e77d7;  */

undefined8 FUN_1001e7668(char *param_1,undefined2 *param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  ushort *puVar4;
  
  if ((param_3 - 0x301 < 4 || param_3 == 0xfeff) || param_3 == 0xfefd) {
    lVar3 = 2;
    if (*param_1 == '\0') {
      lVar3 = 6;
    }
    puVar4 = (ushort *)&UNK_10e52b190;
    if (*param_1 == '\0') {
      puVar4 = (ushort *)&UNK_10e52b194;
    }
    do {
      uVar1 = *puVar4;
      bVar2 = lVar3 != 0;
      lVar3 = lVar3 + -2;
      puVar4 = puVar4 + 1;
    } while (uVar1 != param_3 && bVar2);
    if (uVar1 == param_3) {
      *param_2 = (short)param_3;
      return 1;
    }
  }
  FUN_1004d2c58(0x10,0,0xea,&UNK_10f6d115c,0x82);
  return 0;
}



/* Entry: 1001e77d8; end: 1001e785b;  */

long FUN_1001e77d8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    FUN_1004d2c58(0x10,0,0x42,&UNK_10f6d0be3,0x340);
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2 + 0xc0;
    FUN_1001e65cc(lVar1,param_3);
    if ((int)lVar1 != 0 && (param_3 & 0x7fffffffffffffff) != 0) {
      func_0x000107c610b4(*(undefined8 *)(lVar2 + 0xc0),param_2);
    }
  }
  return lVar1;
}



/* Entry: 1001e785c; end: 1001e79eb;  */

/* WARNING: Possible PIC construction at 0x0001001e78f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001e78f8) */
/* WARNING: Removing unreachable block (ram,0x0001001e7908) */
/* WARNING: Removing unreachable block (ram,0x0001001e790c) */
/* WARNING: Removing unreachable block (ram,0x0001001e7914) */
/* WARNING: Removing unreachable block (ram,0x0001001e7928) */

undefined8 * FUN_1001e785c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  int *piVar8;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [288];
  undefined8 uStack_70;
  
  func_0x000100171c7c();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  piVar8 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  uStack_70 = extraout_x8;
  do {
    bVar2 = piVar8 == piVar1;
    if (bVar2) {
      func_0x00010017206c(uStack_70);
      if (bVar2) {
        return param_2;
      }
      func_0x000107c60e78();
SUB_1001e79e0:
      puVar6 = auStack_1a0;
      puVar3 = param_1;
      FUN_1001e79ec();
      if (puVar3 < (undefined8 *)param_1[2]) {
        puVar4 = (undefined8 *)((long)puVar3 + 1);
        *(undefined1 *)puVar3 = *puVar6;
      }
      else {
        puVar4 = param_1;
        FUN_1001e7a44();
      }
      param_1[1] = puVar4;
      return (undefined8 *)((long)puVar4 + -1);
    }
    uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
    uStack_1a8 = -0x5555555555555556;
    uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
    puVar5 = &UNK_10f759cc2;
    if (*piVar8 - 1U < 3) {
      puVar5 = (&PTR_DAT_110cddeb0)[*piVar8 - 1U];
    }
    FUN_10012dbd0(&uStack_1b8,puVar5);
    if (uStack_1a8 < 0) {
      if (0xff < uStack_1b0) {
        FUN_10014d294(auStack_1a0,&UNK_10f759d66,0x21,1);
        FUN_1001549e4(auStack_190,&UNK_10f759d8c);
        func_0x000100154a20();
        goto LAB_1001e7998;
      }
      uVar7 = uStack_1b0;
      if (uStack_1b0 == 0) goto LAB_1001e7970;
LAB_1001e78f0:
      auStack_1a0[0] = (undefined1)uVar7;
      goto SUB_1001e79e0;
    }
    uVar7 = (long)uStack_1a8._7_1_;
    if (uStack_1a8._7_1_ != '\0') goto LAB_1001e78f0;
LAB_1001e7970:
    FUN_10014d294(auStack_1a0,&UNK_10f759d66,0x25,1);
    FUN_1001549e4(auStack_190,&UNK_10f759dae);
LAB_1001e7998:
    FUN_100155450(auStack_1a0);
    param_2 = &uStack_1b8;
    func_0x000107c60ca0(param_2);
    piVar8 = piVar8 + 1;
  } while( true );
}



/* Entry: 1001e79ec; end: 1001e79f7;  */

undefined8 FUN_1001e79ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1001e79f8; end: 1001e7a37;  */

undefined1 * FUN_1001e79f8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x19;
  
  FUN_1001e79ec();
  if (param_1 < *(undefined1 **)(unaff_x19 + 0x10)) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_1001e7a44();
  }
  *(undefined1 **)(unaff_x19 + 8) = puVar1;
  return puVar1 + -1;
}



/* Entry: 1001e7a38; end: 1001e7a43;  */

void FUN_1001e7a38(void)

{
  return;
}



/* Entry: 1001e7a44; end: 1001e7ae3;  */

long FUN_1001e7a44(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined1 *unaff_x20;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_1001e7a38();
  FUN_1001e7ae4();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    func_0x00010002b988();
  }
  puStack_50 = (undefined1 *)((long)plStack_58 + (lVar1 - lVar2));
  lStack_40 = (long)plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  FUN_1001e7b20();
  FUN_1001e7b2c();
  lVar2 = unaff_x19[1];
  FUN_1001e7bb8(&plStack_58);
  return lVar2;
}



/* Entry: 1001e7ae4; end: 1001e7b1f;  */

undefined1  [16] FUN_1001e7ae4(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 unaff_x19;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (-1 < (long)param_2) {
    uVar1 = (param_1[2] - *param_1) * 2;
    if (uVar1 < param_2 || uVar1 - param_2 == 0) {
      uVar1 = param_2;
    }
    if (0x3ffffffffffffffe < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x7fffffffffffffff;
    }
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  func_0x000104bd9bc0();
  auVar3._8_8_ = &stack0xfffffffffffffff8;
  auVar3._0_8_ = unaff_x19;
  return auVar3;
}



/* Entry: 1001e7b20; end: 1001e7b2b;  */

void FUN_1001e7b20(void)

{
  return;
}



/* Entry: 1001e7b2c; end: 1001e7baf;  */

void FUN_1001e7b2c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_2[1] + (lVar1 - param_1[1]);
  func_0x000107c610b4(lVar2,lVar1,param_1[1] - lVar1);
  param_2[1] = lVar2;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1001e7bb0; end: 1001e7bb7;  */

void FUN_1001e7bb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -1;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1001e7bb8; end: 1001e7be3;  */

long * FUN_1001e7bb8(long *param_1)

{
  FUN_1001e7bb0();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1001e7be4; end: 1001e7c0f;  */

void FUN_1001e7be4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -1;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1001e7c10; end: 1001e7ccf;  */

uint FUN_1001e7c10(long param_1,byte *param_2,uint param_3)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    uVar6 = (ulong)param_3;
    pbVar2 = param_2;
    uVar3 = uVar6;
    if (param_3 == 0) {
      lVar7 = lVar7 + 0x78;
      FUN_1001e6684(lVar7,0);
      return (uint)lVar7 ^ 1;
    }
    do {
      if (uVar3 == 0) {
        lVar1 = lVar7 + 0x78;
        FUN_1001e6684(lVar1,uVar6);
        if ((int)lVar1 == 0) {
          return 1;
        }
        func_0x000107c610b4(*(undefined8 *)(lVar7 + 0x78),param_2,uVar6);
        return 0;
      }
      uVar4 = (ulong)*pbVar2;
      uVar5 = uVar3 - 1;
      pbVar2 = pbVar2 + uVar4 + 1;
      uVar3 = uVar5 - uVar4;
    } while (uVar4 - 1 < uVar5);
    FUN_1004d2c58(0x10,0,0x13b,&UNK_10f6d0a17,0x8a2);
  }
  return 1;
}



/* Entry: 1001e7cd0; end: 1001e7e4f;  */

undefined8
FUN_1001e7cd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  puVar2 = &uStack_60;
  FUN_1001e6684(puVar2,param_3);
  uVar1 = (uint)puVar2 ^ 1;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) == 0) {
    func_0x000107c610b4(uStack_60,param_2,param_3);
  }
  if ((uint)puVar2 != 0) {
    puVar2 = &uStack_50;
    FUN_1001e6684(puVar2,param_5);
    uVar1 = (uint)puVar2 ^ 1;
    if (param_5 == 0) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) == 0) {
      func_0x000107c610b4(uStack_50,param_4,param_5);
    }
    if ((uint)puVar2 != 0) {
      uStack_80 = uStack_60;
      uStack_70 = uStack_50;
      uStack_78 = uStack_58;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_68 = uStack_48;
      uStack_50 = 0;
      uStack_48 = 0;
      uVar3 = *(long *)(param_1 + 8) + 0x88;
      FUN_1001e7fa0(uVar3,&uStack_80);
      FUN_1001e33e0(uStack_70);
      uStack_70 = 0;
      uStack_68 = 0;
      FUN_1001e33e0(uStack_80);
      uStack_80 = 0;
      uStack_78 = 0;
      if ((uVar3 & 1) != 0) {
        uVar4 = 1;
        goto LAB_1001e7dd8;
      }
    }
  }
  uVar4 = 0;
LAB_1001e7dd8:
  FUN_1001e33e0(uStack_50);
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1001e33e0(uStack_60);
  return uVar4;
}



/* Entry: 1001e7e50; end: 1001e7f9f;  */

/* WARNING: Removing unreachable block (ram,0x0001001e80c8) */

undefined1 * FUN_1001e7e50(ulong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar6 = &uStack_50;
  uVar5 = param_1[2];
  if (uVar5 == 0) {
    puVar6 = param_1 + 1;
    FUN_1001e801c(puVar6,0,0);
    puVar3 = (undefined8 *)0x208;
    func_0x000107c610a0();
    if (puVar3 == (undefined8 *)0x0) {
      *puVar6 = 0;
      FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d0b75,0x146);
      puVar4 = (undefined1 *)0x0;
    }
    else {
      lVar7 = 0;
      uVar5 = 0;
      *puVar3 = 0x200;
      *puVar6 = (ulong)(puVar3 + 1);
      param_1[2] = 0x10;
      do {
        puVar3 = (undefined8 *)(*puVar6 + lVar7);
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar5 < param_1[2]);
      puVar4 = (undefined1 *)0x1;
    }
    return puVar4;
  }
  if (*param_1 < uVar5) {
    puVar6 = (ulong *)0x1;
  }
  else if ((long)uVar5 < 0) {
    FUN_1004d2c58(0x10,0,0x45,&UNK_10f6d0b75,0x1b5);
    puVar6 = (ulong *)0x0;
  }
  else {
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1001e80a0(&uStack_50,uVar5 << 1);
    if ((int)puVar6 != 0) {
      if (param_1[2] != 0) {
        lVar7 = 0;
        uVar5 = 0;
        do {
          puVar3 = (undefined8 *)(param_1[1] + lVar7);
          puVar1 = (undefined8 *)(uStack_50 + lVar7);
          FUN_1001e33e0(*puVar1);
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar2 = puVar3[1];
          *puVar1 = *puVar3;
          puVar1[1] = uVar2;
          *puVar3 = 0;
          puVar3[1] = 0;
          FUN_1001e33e0(puVar1[2]);
          puVar1[2] = 0;
          puVar1[3] = 0;
          uVar2 = puVar3[3];
          puVar1[2] = puVar3[2];
          puVar1[3] = uVar2;
          puVar3[2] = 0;
          puVar3[3] = 0;
          uVar5 = uVar5 + 1;
          lVar7 = lVar7 + 0x20;
        } while (uVar5 < param_1[2]);
      }
      FUN_1001e801c(param_1 + 1,0,0);
      param_1[1] = uStack_50;
      param_1[2] = uStack_48;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    FUN_10022a7b0(&uStack_50);
  }
  return (undefined1 *)puVar6;
}



/* Entry: 1001e7fa0; end: 1001e801b;  */

long * FUN_1001e7fa0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = param_1;
  FUN_1001e7e50();
  if ((int)plVar3 != 0) {
    puVar1 = (undefined8 *)(param_1[1] + *param_1 * 0x20);
    FUN_1001e33e0(*puVar1);
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1001e33e0(puVar1[2]);
    puVar1[2] = 0;
    puVar1[3] = 0;
    uVar2 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar2;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_1 = *param_1 + 1;
  }
  return plVar3;
}



/* Entry: 1001e801c; end: 1001e809f;  */

void FUN_1001e801c(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1[1] != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + lVar2);
      FUN_1001e33e0(puVar1[2]);
      puVar1[2] = 0;
      puVar1[3] = 0;
      FUN_1001e33e0(*puVar1);
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < (ulong)param_1[1]);
  }
  FUN_1001e33e0(*param_1);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 1001e80a0; end: 1001e81b7;  */

undefined8 FUN_1001e80a0(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_1001e801c(param_1,0,0);
  if (param_2 >> 0x3b == 0) {
    plVar2 = (long *)(param_2 << 5 | 8);
    func_0x000107c610a0();
    if (plVar2 != (long *)0x0) {
      lVar5 = 0;
      uVar6 = 0;
      *plVar2 = param_2 << 5;
      *param_1 = (long)(plVar2 + 1);
      param_1[1] = param_2;
      do {
        puVar1 = (undefined8 *)(*param_1 + lVar5);
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar6 < (ulong)param_1[1]);
      return 1;
    }
    *param_1 = 0;
    uVar3 = 0x41;
    uVar4 = 0x146;
  }
  else {
    uVar3 = 0x45;
    uVar4 = 0x141;
  }
  FUN_1004d2c58(0x10,0,uVar3,&UNK_10f6d0b75,uVar4);
  return 0;
}



/* Entry: 1001e81b8; end: 1001e82ef;  */

long FUN_1001e81b8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar2 = param_3 + 0x20;
    func_0x0001001c5038(lVar2,param_2);
    lVar1 = 8;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 1001e82f0; end: 1001e839f;  */

void FUN_1001e82f0(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0;
  FUN_1001e4cc0();
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)0x198;
    func_0x000107c610a0();
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 400;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[8] = 0;
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[0xc] = 0;
      puVar2[0xb] = 0;
      puVar2[0xe] = 0;
      puVar2[0xd] = 0;
      puVar2[0x10] = 0;
      puVar2[0xf] = 0;
      puVar2[0x12] = 0;
      puVar2[0x11] = 0;
      puVar2[0x14] = 0;
      puVar2[0x13] = 0;
      puVar2[0x16] = 0;
      puVar2[0x15] = 0;
      puVar2[0x18] = 0;
      puVar2[0x17] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x19] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1e] = 0;
      puVar2[0x1d] = 0;
      puVar2[0x20] = 0;
      puVar2[0x1f] = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar2[0x22] = 0;
      puVar2[0x21] = 0;
      puVar2[0x24] = 0;
      puVar2[0x23] = 0;
      puVar2[0x26] = 0;
      puVar2[0x25] = 0;
      puVar2[0x28] = 0;
      puVar2[0x27] = 0;
      puVar2[0x2a] = 0;
      puVar2[0x29] = 0;
      puVar2[0x2c] = 0;
      puVar2[0x2b] = 0;
      puVar2[0x2e] = 0;
      puVar2[0x2d] = 0;
      puVar2[0x30] = 0;
      puVar2[0x2f] = 0;
      puVar2[0x32] = 0;
      puVar2[0x31] = 0;
      FUN_1001e4d54(0,puVar2 + 1,&UNK_10ae2a314);
    }
  }
  return;
}



/* Entry: 1001e83a0; end: 1001e83fb;  */

void FUN_1001e83a0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_1001e82f0();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    lVar2 = 0x10;
    do {
      FUN_1001e33e0(*puVar1);
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    FUN_1001e33e0(*(undefined8 *)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  return;
}



/* Entry: 1001e83fc; end: 1001e8bbf;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1001e83fc(long *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  char **ppcVar10;
  undefined4 *puVar11;
  undefined8 extraout_x8;
  long lVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long alStack_280 [4];
  int iStack_25c;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 auStack_218 [2];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  char cStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  char *pcStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  func_0x0001001e2278();
  puStack_310 = (undefined *)0xaaaaaaaaaaaaaaaa;
  uStack_308 = 0xaaaaaaaaaaaaaaaa;
  uStack_318 = 0;
  uStack_88 = extraout_x8;
  if ((bRam00000001133705a8 & 0x19) != 0) {
    uVar6 = 0x58;
    func_0x000107c2ca88(0x58,0x1133705a8,&UNK_10f759f9c,0,0,0,0);
    uStack_318 = 0x1133705a8;
    puStack_310 = &UNK_10f759f9c;
    uStack_308 = uVar6;
  }
  plVar14 = (long *)0x0;
  iVar3 = (int)param_1[0x5b];
  do {
    *(undefined4 *)(param_1 + 0x5b) = 0;
    if (iVar3 == 2) {
      uVar2 = 1;
      if (-1 < (int)plVar14) {
        uVar2 = *(char *)((long)param_1 + 0x2dc) == '\x01';
        if ((bool)uVar2) {
          plVar14 = (long *)0x0;
          *(undefined4 *)(param_1 + 0x5b) = 0;
        }
        else {
          if (*(char *)((long)param_1 + 0x2df) == '\x01') goto LAB_1001e8ba8;
          uStack_258 = 0;
          iStack_25c = 0;
          FUN_10022a914(param_1[0x27],&uStack_258,&iStack_25c);
          if (iStack_25c != 0) {
            uVar6 = uStack_258;
            func_0x000100188610();
            *(int *)(param_1 + 0x5c) = (int)uVar6;
          }
          if (puRam00000001137f5fb0 == (undefined *)0x0) {
            puVar8 = &UNK_10f75a054;
            FUN_10022a974(&UNK_10f75a054,1,4,5);
            puRam00000001137f5fb0 = puVar8;
          }
          func_0x00010022a97c();
          alStack_280[2] = -0x5555555555555556;
          alStack_280[3] = 0xaaaaaaaaaaaaaaaa;
          FUN_100207048(param_1[0x27],alStack_280 + 3,alStack_280 + 2);
          *(bool *)((long)param_1 + 0x21) = alStack_280[2] != 0;
          alStack_280[0] = -0x5555555555555556;
          alStack_280[1] = 0xaaaaaaaaaaaaaaaa;
          func_0x0001002070b4(param_1[0x27],alStack_280 + 1,alStack_280);
          *(bool *)(param_1 + 4) = alStack_280[0] != 0;
          if ((int)param_1[0x5c] == 0) {
            if ((*(byte *)(param_1 + 0x37) & 1) == 0) {
LAB_1001e86e0:
              *(undefined4 *)(param_1[0x27] + 0xa0) = 0;
              func_0x0001001e8164();
            }
          }
          else {
            piVar13 = (int *)param_1[0x38];
            do {
              if (piVar13 == (int *)param_1[0x39]) goto LAB_1001e86e0;
              iVar3 = *piVar13;
              piVar13 = piVar13 + 1;
            } while ((int)param_1[0x5c] != iVar3);
          }
          lVar7 = param_1[0x27];
          FUN_10022a988();
          if ((int)lVar7 != 0) {
            func_0x000100220d50(&UNK_10f759eba,lVar7);
          }
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2f0 = 0;
          uStack_2e0 = 0xaaaaaa00;
          uStack_2d4 = 0;
          uStack_2d0 = 0;
          uStack_2dc = 0;
          uStack_2d8 = 0;
          uStack_2c4 = 0;
          uStack_2c0 = 0;
          uStack_2cc = 0;
          uStack_2c8 = 0;
          uStack_2b4 = 0;
          uStack_2b0 = 0;
          uStack_2bc = 0;
          uStack_2b8 = 0;
          uStack_2a4 = 0;
          uStack_2ac = 0;
          uStack_2a8 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_29c = 0;
          uStack_290 = 4;
          uStack_288 = 0xaaaaaa0000000002;
          plVar14 = param_1;
          (**(code **)(*param_1 + 0xb8))(param_1,&uStack_300);
          if (((ulong)plVar14 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(0,0x1001e8bb8);
            (*pcVar1)();
          }
          if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
            lVar7 = param_1[0x11];
            iVar4 = (int)param_1[0x27];
            func_0x00010022acbc();
            iVar3 = iVar4;
            FUN_100238134();
            if ((iVar3 == 0x3b7) || ((iVar3 == 0x3b8 && (func_0x000107c2b778(), iVar4 == 0x3ba)))) {
              lVar7 = *(long *)(lVar7 + 0x1b0);
              uStack_228 = 0;
              uStack_220 = 0;
              uStack_238 = 0;
              uStack_230 = 0;
              uStack_98 = 0;
              puStack_a0 = (undefined4 *)0x0;
              uStack_90 = 0xaaaaaaaaaaaaaa00;
              func_0x000107c610bc(auStack_218,0xaa,0xb0);
              auStack_218[0] = 0;
              uStack_1a8 = 0;
              uStack_1a0 = 0;
              uStack_198 = 0;
              uStack_190 = 0;
              uStack_188 = 0;
              uStack_180 = 0;
              uStack_178 = 0;
              cStack_170 = '\0';
              uStack_168 = 0;
              uStack_160 = 0;
              uStack_208 = 0;
              uStack_210 = 0;
              uStack_1f8 = 0;
              uStack_200 = 0;
              uStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              uStack_1b8 = 0;
              uStack_1c0 = 0;
              uStack_1b0 = 0;
              uStack_d0 = *(undefined8 *)(lVar7 + 8);
              puStack_c8 = *(undefined **)(lVar7 + 0x10);
              puVar9 = &uStack_d0;
              func_0x000100204a5c(puVar9,&uStack_228,&uStack_238,&puStack_a0,0);
              if ((int)puVar9 != 0) {
                puStack_250 = (undefined8 *)CONCAT71(puStack_250._1_7_,1);
                puVar9 = &uStack_228;
                func_0x000100205030(puVar9,&puStack_250,auStack_218,0);
                if ((((ulong)puVar9 & 1) != 0) && (cStack_170 == '\x01')) {
                  uStack_248 = 0;
                  uStack_240 = 0;
                  puVar9 = &uStack_168;
                  puStack_250 = &uStack_248;
                  func_0x00010021c924(puVar9,&puStack_250);
                  if ((int)puVar9 != 0) {
                    puStack_c8 = (undefined *)0x0;
                    uStack_d0 = 0;
                    uStack_b8 = 0;
                    uStack_c0 = 0;
                    uStack_b0 = 0xaaaaaaaaaaaaaa00;
                    pcStack_e8 = 
                    "U\x1d\x0fU\x1d\x11U\x1d\x1e+\x06\x01\x05\x05\a\x01\x01U\x1d U\x1d$U\x1d!U\x1d6U\x1d\x0eU\x1d#"
                    ;
                    lStack_e0 = 3;
                    ppcVar10 = &pcStack_e8;
                    func_0x00010021ce70(ppcVar10,&puStack_250,&uStack_d0);
                    if ((int)ppcVar10 != 0) {
                      lStack_e0 = 0;
                      pcStack_e8 = (char *)0x0;
                      uStack_d8 = 0xaaaaaaaaaaaaaa00;
                      func_0x000107c2d670(&uStack_c0,&pcStack_e8);
                    }
                  }
                  func_0x00010021dd4c(&puStack_250);
                }
              }
              if (plRam00000001137f5f80 == (long *)0x0) {
                plVar14 = (long *)&UNK_10f759ed4;
                FUN_10022a974(&UNK_10f759ed4,1,8,9);
                plRam00000001137f5f80 = plVar14;
              }
              (**(code **)(*plRam00000001137f5f80 + 0x30))();
            }
          }
          uVar5 = (uint)param_1[0x27];
          func_0x00010022ad4c();
          lVar7 = param_1[0x27];
          uVar2 = uVar5 == 0x303;
          if (uVar5 < 0x304) {
            FUN_10022ada8();
          }
          else {
            lVar12 = *(long *)(*(long *)(lVar7 + 0x30) + 0x110);
            if ((lVar12 == 0) || ((*(byte *)(lVar12 + 0x619) >> 3 & 1) == 0)) {
              FUN_10022ada8();
              uVar2 = (int)lVar7 == 0;
            }
          }
          if (plRam00000001137f5f88 == (long *)0x0) {
            plVar14 = (long *)&UNK_10f759ef3;
            FUN_10022a974(&UNK_10f759ef3,1,10,0xb);
            plRam00000001137f5f88 = plVar14;
          }
          (**(code **)(*plRam00000001137f5f88 + 0x30))();
          lVar7 = param_1[0x27];
          FUN_10022add8(lVar7);
          puVar9 = (undefined8 *)&UNK_10f759f0b;
          FUN_10022ae1c(&UNK_10f759f0b,lVar7);
          *(undefined1 *)(param_1 + 0x22) = 1;
          *(undefined4 *)(param_1 + 0x5b) = 0;
          func_0x000100131110();
          uVar6 = *puVar9;
          puVar8 = &UNK_10f759de0;
          FUN_10012dd4c(auStack_218,&UNK_10f759f2d,&UNK_10f759de0,0x461);
          plVar14 = param_1 + 0x6a;
          func_0x0001001f9be8();
          puVar11 = (undefined4 *)0x40;
          puStack_c8 = puVar8;
          func_0x000107c60e20();
          *puVar11 = 1;
          *(undefined8 *)(puVar11 + 2) = 0x10022be24;
          *(code **)(puVar11 + 4) = FUN_10022c2cc;
          *(undefined8 *)(puVar11 + 6) = 0x10022bddc;
          *(undefined8 *)(puVar11 + 8) = 0x100208a4c;
          *(undefined8 *)(puVar11 + 10) = 0;
          *(long **)(puVar11 + 0xc) = plVar14;
          uStack_d0 = 0;
          *(undefined **)(puVar11 + 0xe) = puVar8;
          puStack_a0 = puVar11;
          func_0x00010013fa70(uVar6,auStack_218,&puStack_a0);
          func_0x000100140e00(&puStack_a0);
          FUN_10014f860(&uStack_d0);
          func_0x00010022ac30(&uStack_300);
          plVar14 = (long *)0x0;
        }
      }
    }
    else {
      uVar2 = iVar3 == 1;
      if (!(bool)uVar2) {
        plVar14 = (long *)0xfffffff7;
        break;
      }
      FUN_10012dd4c(&uStack_300,&UNK_10f759e73,&UNK_10f759de0,0x3ca);
      lVar7 = param_1[0x27];
      FUN_1001e8bc0();
      if ((int)lVar7 < 1) {
        func_0x0001001f34bc();
        iVar3 = (int)lVar7;
        if ((iVar3 == 0x10) || (iVar3 == 0xd)) {
          *(undefined4 *)(param_1 + 0x5b) = 1;
          plVar14 = (long *)0xffffffff;
        }
        else if ((iVar3 == 4) && ((*(byte *)((long)param_1 + 0x322) & 1) == 0)) {
          plVar14 = (long *)0xffffff92;
        }
        else {
          puStack_c8 = (undefined *)0x0;
          uStack_d0 = 0xaaaaaaaa00000000;
          uStack_c0 = 0xaaaaaaaa00000000;
          plVar14 = param_1;
          FUN_1001f3600(param_1,lVar7,&uStack_300,&uStack_d0);
          if ((int)plVar14 != -1) {
            func_0x000107c370d8(auStack_218,&UNK_10f759de0,999);
            FUN_1001549e4(&uStack_208,&UNK_10f759e7f);
            func_0x000107c60ce8();
            FUN_1001549e4();
            func_0x000107c60ce8();
            FUN_1001549e4();
            func_0x000107c60ce8();
            FUN_100155450(auStack_218);
            func_0x000107c2e924(param_1 + 0x67,0x39,plVar14,lVar7,&uStack_d0);
            goto LAB_1001e84f8;
          }
          *(undefined4 *)(param_1 + 0x5b) = 1;
        }
      }
      else {
        plVar14 = (long *)0x0;
LAB_1001e84f8:
        *(undefined4 *)(param_1 + 0x5b) = 2;
      }
      FUN_1001e83a0();
      uVar2 = (int)plVar14 == -1;
      if ((bool)uVar2) break;
    }
    iVar3 = (int)param_1[0x5b];
  } while (iVar3 != 0);
  func_0x00010016f258(&uStack_318);
  func_0x0001001e6e04(uStack_88);
  if ((bool)uVar2) {
    return plVar14;
  }
  func_0x000107c60e78();
LAB_1001e8ba8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x1001e8bac);
  (*pcVar1)();
}



/* Entry: 1001e8bc0; end: 1001e8cab;  */

long FUN_1001e8bc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  code *pcVar4;
  byte bStack_21;
  
  *(undefined4 *)(*(long *)(param_1 + 0xc) + 0xbc) = 0;
  puVar1 = param_1;
  FUN_1001e83a0();
  func_0x000107c60e5c();
  *puVar1 = 0;
  if (*(long *)(param_1 + 10) == 0) {
    FUN_1004d2c58(0x10,0,0x86,&UNK_10f6d0a17,0x33d);
    lVar2 = 0xffffffff;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0xc) + 0x110);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x618) >> 3 & 1) == 0)) {
      bStack_21 = 0;
      FUN_1001e8cac(lVar2,&bStack_21);
      uVar3 = 0x2002;
      if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
        uVar3 = 0x1002;
      }
      pcVar4 = *(code **)(param_1 + 0x18);
      if ((pcVar4 != (code *)0x0) ||
         (pcVar4 = *(code **)(*(long *)(param_1 + 0x1a) + 0x180), pcVar4 != (code *)0x0)) {
        (*pcVar4)(param_1,uVar3,lVar2);
      }
      if ((int)lVar2 < 1) {
        return lVar2;
      }
      if ((bStack_21 & 1) == 0) {
        FUN_1001e6ca4(*(long *)(param_1 + 0xc) + 0x110,0);
        func_0x0001001e8164(param_1);
      }
    }
    lVar2 = 1;
  }
  return lVar2;
}



/* Entry: 1001e8cac; end: 1001e8f5b;  */

void FUN_1001e8cac(undefined8 *param_1,undefined1 *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  long *plVar7;
  byte bStack_71;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  plVar7 = (long *)*param_1;
LAB_1001e8cf8:
  switch(*(int *)(param_1 + 2)) {
  case 0:
    func_0x000107c2b2b0(param_1[0x30]);
    return;
  default:
    goto LAB_1001e8e20;
  case 2:
  case 3:
  case 0xf:
    if (plVar7[0x13] != 0) {
      lVar4 = plVar7[6];
      uVar6 = 2;
      break;
    }
    uStack_61 = 0x32;
    uStack_70 = 0;
    lVar4 = plVar7[6];
    plVar5 = plVar7;
    if (*(int *)(param_1 + 2) == 0xf) {
      func_0x000107c2b78c();
    }
    else {
      FUN_1001f20cc(plVar7,&uStack_70,&uStack_61,
                    *(long *)(lVar4 + 0x50) + (ulong)*(ushort *)(lVar4 + 0x58),
                    *(undefined2 *)(lVar4 + 0x5a));
    }
    if ((((int)plVar5 == 4) && (*(int *)(param_1 + 2) == 2)) &&
       (plVar2 = plVar5, FUN_1001f35bc(), ((uint)plVar2 & 0xff000fff) == 0x10000410)) {
      FUN_1004d2c58(0x10,0,0x9a,&UNK_10f6cfe1d,0x284);
    }
    plVar2 = plVar7;
    FUN_1001f296c(plVar7,&bStack_71,plVar5,uStack_70,uStack_61);
    if ((int)plVar2 < 1) {
      return;
    }
    if ((bStack_71 & 1) == 0) {
      lVar4 = plVar7[6];
      if (*(short *)(lVar4 + 0x5a) == 0) {
        if (*(char *)(lVar4 + 99) == '\x01') {
          func_0x000107c60fd0(*(undefined8 *)(lVar4 + 0x50));
        }
        *(undefined1 *)(lVar4 + 99) = 0;
        *(undefined8 *)(lVar4 + 0x50) = 0;
        *(undefined8 *)(lVar4 + 0x56) = 0;
      }
      goto LAB_1001e8e20;
    }
    goto LAB_1001e8cf8;
  case 4:
    plVar5 = plVar7;
    (**(code **)(*plVar7 + 0x78))();
    if ((int)plVar5 < 1) {
      return;
    }
    goto LAB_1001e8e20;
  case 5:
    lVar4 = plVar7[6];
    uVar6 = 0xc;
    break;
  case 6:
    lVar4 = plVar7[6];
    uVar6 = 0x11;
    break;
  case 7:
    plVar5 = plVar7;
    (**(code **)(*plVar7 + 0x78))();
    if ((int)plVar5 < 1) {
      return;
    }
    *(undefined4 *)(plVar7[6] + 0xbc) = 0x12;
    uVar6 = 7;
    goto code_r0x0001001e8f28;
  case 8:
    lVar4 = plVar7[6];
    uVar6 = 4;
    break;
  case 9:
    lVar4 = plVar7[6];
    uVar6 = 0xd;
    break;
  case 10:
    lVar4 = plVar7[6];
    uVar6 = 0xb;
    break;
  case 0xb:
    lVar4 = plVar7[6];
    uVar6 = 0xe;
    break;
  case 0xc:
    *param_2 = 1;
    *(undefined4 *)(param_1 + 2) = 1;
    return;
  case 0xd:
    lVar4 = plVar7[6];
    uVar6 = 0xf;
    goto code_r0x0001001e8ee4;
  case 0xe:
    if ((*(byte *)(*(long *)(plVar7[6] + 0x110) + 0x619) >> 5 & 1) != 0) {
      *param_2 = 1;
      return;
    }
    *(undefined4 *)(param_1 + 2) = 1;
LAB_1001e8e20:
    puVar3 = param_1;
    (*(code *)plVar7[5])();
    iVar1 = (int)puVar3;
    *(int *)(param_1 + 2) = iVar1;
    if (iVar1 == 1) {
      *param_2 = 0;
      return;
    }
    if (iVar1 == 0) {
      func_0x000107c2b2ac();
      lVar4 = param_1[0x30];
      param_1[0x30] = puVar3;
      if (lVar4 != 0) {
        func_0x000107c2b2a8();
      }
      return;
    }
    goto LAB_1001e8cf8;
  case 0x10:
    lVar4 = plVar7[6];
    uVar6 = 0x10;
    break;
  case 0x11:
    lVar4 = plVar7[6];
    uVar6 = 0x14;
code_r0x0001001e8ee4:
    *(undefined4 *)(lVar4 + 0xbc) = uVar6;
    return;
  }
  *(undefined4 *)(lVar4 + 0xbc) = uVar6;
  uVar6 = 1;
code_r0x0001001e8f28:
  *(undefined4 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 1001e8f5c; end: 1001eb7db;  */

/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_1001e8f5c(ulong *******param_1,ulong *******param_2,ulong *******param_3)

{
  ulong *******pppppppuVar1;
  ulong *******pppppppuVar2;
  ulong *******pppppppuVar3;
  ulong *******pppppppuVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong *******pppppppuVar15;
  ulong ******ppppppuVar16;
  ulong *****pppppuVar17;
  ulong *******pppppppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  uint uVar22;
  ulong *****pppppuVar23;
  ulong *******pppppppuVar24;
  ulong ******ppppppuVar25;
  ulong uVar26;
  byte bVar27;
  ushort uVar28;
  ushort uVar29;
  undefined4 uVar30;
  ulong ******ppppppuVar31;
  ulong *******pppppppuVar32;
  ushort uVar33;
  ulong ****ppppuVar34;
  short *psVar35;
  byte *pbVar36;
  byte *pbVar37;
  ushort *puVar38;
  long lVar39;
  ulong *******pppppppuVar40;
  ulong *******pppppppuVar41;
  ulong *******pppppppuVar42;
  ulong ******ppppppuVar43;
  ulong *******pppppppuStack_280;
  ulong *******pppppppuStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong *******pppppppuStack_260;
  ulong ******ppppppuStack_258;
  ulong *******pppppppuStack_250;
  long lStack_248;
  ulong *******pppppppuStack_240;
  undefined8 uStack_238;
  ulong *******apppppppuStack_220 [4];
  ulong *******pppppppuStack_200;
  ulong *******pppppppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined8 uStack_170;
  ulong *******pppppppuStack_168;
  ulong *******pppppppuStack_160;
  ulong *******pppppppuStack_158;
  ulong *******pppppppuStack_150;
  byte *pbStack_148;
  ulong uStack_140;
  ushort uStack_138;
  char cStack_136;
  ulong *******pppppppuStack_130;
  undefined8 uStack_128;
  long lStack_70;
  
  pppppppuVar1 = param_1 + 0xbb;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar2 = param_1 + 0xba;
  pppppppuVar3 = param_1 + 0x53;
  pppppppuVar4 = param_1 + 0xb7;
  pbVar5 = (byte *)((long)param_1 + 0x623);
  pppppppuVar15 = param_1;
LAB_1001e8fbc:
  iVar8 = *(int *)((long)param_1 + 0x14);
  pppppppuVar18 = pppppppuVar15;
  switch(iVar8) {
  case 0:
    ppppppuVar25 = *param_1;
    pppppuVar23 = ppppppuVar25[0xc];
    if ((pppppuVar23 != (ulong *****)0x0) ||
       (pppppuVar23 = (ulong *****)ppppppuVar25[0xd][0x30], pppppuVar23 != (ulong *****)0x0)) {
      (*(code *)pppppuVar23)(ppppppuVar25,0x10,1);
    }
    *(ushort *)((long)ppppppuVar25[6] + 0xd4) = *(ushort *)((long)ppppppuVar25[6] + 0xd4) & 0xffbf;
    param_2 = (ulong *******)((long)param_1 + 0x1c);
    param_3 = (ulong *******)((long)param_1 + 0x1e);
    pppppppuVar18 = param_1;
    FUN_1001eb7dc();
    if ((int)pppppppuVar18 != 0) {
      param_2 = (ulong *******)&uStack_170;
      param_3 = (ulong *******)0x20;
      pppppppuVar18 = param_1;
      FUN_1001eb938();
      if ((int)pppppppuVar18 != 0) {
        uVar29 = *(ushort *)((long)param_1 + 0x1e);
        uVar33 = uVar29;
        if (0x302 < uVar29) {
          uVar33 = 0x303;
        }
        uVar28 = 0xfefd;
        if (uVar29 < 0x303) {
          uVar28 = 0xfeff;
        }
        if (*(char *)**param_1 != '\0') {
          uVar33 = uVar28;
        }
        *(ushort *)((long)param_1 + 0x61c) = uVar33;
        ppppppuVar31 = ppppppuVar25 + 0xb;
        pppppuVar23 = *ppppppuVar31;
        if (pppppuVar23 != (ulong *****)0x0) {
          bVar27 = *(byte *)(pppppuVar23 + 0x36);
          if (((bVar27 >> 4 & 1) == 0) &&
             (pppppppuVar15 = param_1, FUN_1001ef9a4(param_1,*(undefined2 *)((long)pppppuVar23 + 4))
             , (int)pppppppuVar15 != 0)) {
            pppppuVar17 = pppppuVar23;
            if (param_1[0xbe] == (ulong ******)0x0) {
code_r0x0001001e90b8:
              if (((bVar27 >> 2 & 1) == 0) &&
                 ((*(int *)(pppppuVar17 + 8) != 0 || (pppppuVar17[0x1f] != (ulong ****)0x0)))) {
                ppppppuVar16 = ppppppuVar25;
                func_0x000107c2b864(ppppppuVar25,pppppuVar17);
                pppppuVar17 = ppppppuVar25[0xb];
                if ((int)ppppppuVar16 == 0) goto code_r0x0001001ea834;
                if (((ppppppuVar25[0x13] != (ulong *****)0x0) !=
                     (((ulong)pppppuVar17[0x36] & 0x20) == 0)) &&
                   ((*(ushort *)((long)ppppppuVar25[6] + 0xd4) >> 5 & 1) == 0))
                goto code_r0x0001001ea844;
              }
            }
            else {
              FUN_1001fde80();
              pppppuVar17 = *ppppppuVar31;
              if (0x303 < (uint)pppppuVar23) {
                bVar27 = *(byte *)(pppppuVar17 + 0x36);
                goto code_r0x0001001e90b8;
              }
code_r0x0001001ea834:
              if (pppppuVar17 == (ulong *****)0x0) goto code_r0x0001001ea844;
            }
          }
          FUN_100229eb4(ppppppuVar31,0);
        }
code_r0x0001001ea844:
        pppppppuVar15 = (ulong *******)&UNK_10e525a20;
        param_3 = pppppppuVar15;
        FUN_1001e47a4(ppppppuVar25[6] + 6,0x20);
        if (param_1[0xbe] != (ulong ******)0x0) {
          FUN_1001e47a4(param_1 + 0x3d,0x20);
          param_3 = pppppppuVar15;
        }
        if (ppppppuVar25[0x13] == (ulong *****)0x0) {
          pppppuVar23 = *ppppppuVar31;
          if (pppppuVar23 == (ulong *****)0x0) {
code_r0x0001001ea8b8:
            if (*(ushort *)((long)param_1 + 0x1e) < 0x304) goto code_r0x0001001ea8e0;
          }
          else {
            uVar22 = *(uint *)(pppppuVar23 + 8);
            if (uVar22 == 0) {
              if (pppppuVar23[0x1f] == (ulong ****)0x0) goto code_r0x0001001ea8b8;
            }
            else if (pppppuVar23[0x1f] == (ulong ****)0x0) {
              *(char *)((long)param_1 + 0x643) = (char)uVar22;
              param_3 = (ulong *******)((ulong)uVar22 & 0xff);
              if ((int)param_3 != 0) {
                func_0x000107c610b4(pbVar5,(long)pppppuVar23 + 0x44);
              }
              goto code_r0x0001001ea8e0;
            }
          }
          *(undefined1 *)((long)param_1 + 0x643) = 0x20;
          param_3 = (ulong *******)&UNK_10e525a20;
          FUN_1001e47a4(pbVar5,0x20);
        }
code_r0x0001001ea8e0:
        ppppppuVar31 = *param_1;
        if ((*(byte *)((long)ppppppuVar31 + 0xa4) >> 2 & 1) == 0) {
          uVar21 = 1;
code_r0x0001001ea968:
          *(undefined4 *)(ppppppuVar25[6] + 0x1f) = uVar21;
        }
        else {
          if (*(ushort *)((long)param_1 + 0x1e) < 0x304) {
            uVar21 = 3;
            goto code_r0x0001001ea968;
          }
          pppppuVar23 = ppppppuVar31[0xb];
          if (pppppuVar23 == (ulong *****)0x0) {
            uVar21 = 5;
            goto code_r0x0001001ea968;
          }
          FUN_1001fde80();
          if (((uint)pppppuVar23 < 0x304) ||
             (pppppuVar23 = ppppppuVar31[0xb], *(int *)((long)pppppuVar23 + 0x17c) == 0)) {
            uVar21 = 7;
            goto code_r0x0001001ea968;
          }
          param_3 = (ulong *******)pppppuVar23[0x31];
          if (param_3 != (ulong *******)0x0) {
            pppppppuVar15 = param_1;
            func_0x000100200274(param_1,pppppuVar23[0x30]);
            if ((int)pppppppuVar15 == 0) {
              uVar21 = 9;
              goto code_r0x0001001ea968;
            }
            pppppuVar23 = ppppppuVar31[0xb];
            if ((*(byte *)(pppppuVar23 + 0x36) >> 6 & 1) != 0) {
              pppppppuStack_200 = (ulong *******)0x0;
              pppppppuStack_1f8 = (ulong *******)0x0;
              param_3 = (ulong *******)pppppuVar23[0x30];
              pppppppuVar15 = param_1;
              FUN_100a37d48(param_1,&pppppppuStack_200,param_3,pppppuVar23[0x31]);
              if (((int)pppppppuVar15 == 0) ||
                 (pppppppuStack_1f8 != (ulong *******)pppppuVar23[0x33])) {
code_r0x0001001eb0dc:
                uVar21 = 0xe;
                goto code_r0x0001001ea968;
              }
              if (pppppppuStack_1f8 != (ulong *******)0x0) {
                ppppuVar34 = pppppuVar23[0x32];
                pppppppuVar18 = pppppppuStack_200;
                pppppppuVar15 = pppppppuStack_1f8;
                do {
                  pppppppuVar15 = (ulong *******)((long)pppppppuVar15 + -1);
                  if (*(byte *)pppppppuVar18 != *(byte *)ppppuVar34) goto code_r0x0001001eb0dc;
                  ppppuVar34 = (ulong ****)((long)ppppuVar34 + 1);
                  pppppppuVar18 = (ulong *******)((long)pppppppuVar18 + 1);
                } while (pppppppuVar15 != (ulong *******)0x0);
              }
            }
          }
          *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x1000;
        }
        param_2 = (ulong *******)0x0;
        pppppppuVar18 = param_1;
        FUN_1001ebc10();
        if (((int)pppppppuVar18 != 0) &&
           (pppppppuVar18 = param_1, FUN_1001ed90c(), (int)pppppppuVar18 != 0)) {
          param_2 = (ulong *******)&uStack_170;
          pppppppuVar18 = param_1;
          param_3 = pppppppuStack_280;
          FUN_1001eda34();
          if (((int)pppppppuVar18 != 0) &&
             (pppppppuVar18 = param_1, FUN_1001ee090(), (int)pppppppuVar18 != 0)) {
            *(undefined4 *)((long)param_1 + 0x14) = 1;
            goto code_r0x0001001ea9b4;
          }
        }
      }
    }
    break;
  case 1:
    pppppppuVar42 = (ulong *******)*param_1;
    ppppppuVar25 = *pppppppuVar42;
    if (((ulong)*ppppppuVar25 & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0x619) >> 4 & 1) != 0) {
        if (*pppppppuVar42[6][0x21] == (ulong ****)0x0) {
          *(undefined2 *)((long)pppppppuVar42[6][0x21] + 0x26e) =
               *(undefined2 *)((long)pppppppuVar42[0xb] + 4);
        }
        pppppppuVar18 = pppppppuVar42;
        (*(code *)ppppppuVar25[0xe])();
        if ((int)pppppppuVar18 != 0) {
          param_2 = (ulong *******)pppppppuVar42[0xb];
          pppppppuVar18 = param_1;
          func_0x000107c2b8f4();
          if (((int)pppppppuVar18 != 0) &&
             (pppppppuVar18 = param_1, func_0x000107c2b900(), (int)pppppppuVar18 != 0)) {
            param_2 = (ulong *******)pppppppuVar42[0xb];
            if (param_2 != (ulong *******)0x0) {
              iVar12 = *(int *)param_2;
              do {
                if (iVar12 == -1) break;
                iVar6 = *(int *)param_2;
                if (iVar6 == iVar12) {
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(param_2,0x10);
                  if (bVar11) {
                    *(int *)param_2 = iVar12 + 1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                  bVar11 = cVar10 == '\0';
                }
                else {
                  bVar11 = false;
                  ClearExclusiveLocal();
                }
                iVar12 = iVar6;
              } while (!bVar11);
            }
            pppppppuVar15 = param_1 + 0xbc;
            FUN_100229eb4();
            uVar21 = 2;
            goto code_r0x0001001eab88;
          }
        }
        break;
      }
code_r0x0001001e9a9c:
      uVar21 = 4;
    }
    else {
      uVar21 = 3;
    }
    goto code_r0x0001001eab88;
  case 2:
    pppppppuVar18 = (ulong *******)*param_1;
    if (*(char *)(pppppppuVar18[0xd] + 0x3d) == '\x01') {
      param_2 = (ulong *******)0x0;
      pppppppuVar18 = param_1;
      func_0x000107c2b708();
      if ((int)pppppppuVar18 != 1) {
        if ((int)pppppppuVar18 != 2) {
          pppppppuVar18 = (ulong *******)*param_1;
          goto code_r0x0001001e9df4;
        }
        pppppppuVar42 = (ulong *******)0x10;
        goto code_r0x0001001e9e28;
      }
    }
    else {
code_r0x0001001e9df4:
      param_2 = (ulong *******)0x1;
      param_3 = (ulong *******)0x1;
      FUN_1001fdeb4();
      if ((int)pppppppuVar18 != 0) {
        *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x4800;
        pppppppuVar42 = (ulong *******)0xc;
        pppppppuVar18 = (ulong *******)0x4;
code_r0x0001001e9e28:
        *(int *)((long)param_1 + 0x14) = (int)pppppppuVar18;
        goto code_r0x0001001eb288;
      }
    }
    break;
  case 3:
    pppppppuVar18 = (ulong *******)*param_1;
    param_2 = (ulong *******)&uStack_170;
    pppppppuVar42 = pppppppuVar18;
    (*(code *)(*pppppppuVar18)[3])();
    if ((int)pppppppuVar42 != 0) {
      pppppppuVar15 = pppppppuVar42;
      if (uStack_170._1_1_ != '\x03') goto code_r0x0001001e9a9c;
      pppppppuVar15 = (ulong *******)((long)pppppppuStack_160 + -3);
      if ((pppppppuStack_160 < (ulong *******)0x3) ||
         (pppppppuVar15 != (ulong *******)(ulong)*(byte *)((long)pppppppuStack_168 + 2))) {
        FUN_1004d2c58(0x10,0,0x89,&UNK_10f6cff25,0x271);
        param_2 = (ulong *******)0x2;
        param_3 = (ulong *******)0x32;
        func_0x000107c2b730();
      }
      else {
        if (*(byte *)((long)pppppppuStack_168 + 2) != 0) {
          param_2 = (ulong *******)((long)pppppppuStack_168 + 3);
          param_3 = pppppppuVar15;
          func_0x000107c610b4((long)pppppppuVar18[7] + 1);
        }
        pppppppuVar18[7][0x21] = (ulong *****)pppppppuVar15;
        (*(code *)(*pppppppuVar18)[4])(pppppppuVar18);
        pppppppuVar18 = param_1 + 0x33;
        func_0x0001001e6c04();
        if (((int)pppppppuVar18 != 0) &&
           (pppppppuVar18 = param_1, FUN_1001ee090(), (int)pppppppuVar18 != 0)) {
          pppppppuVar42 = (ulong *******)0x4;
          *(undefined4 *)((long)param_1 + 0x14) = 4;
          goto code_r0x0001001eb288;
        }
      }
      break;
    }
code_r0x0001001e9a7c:
    pppppppuVar18 = pppppppuVar42;
    pppppppuVar42 = (ulong *******)0x3;
    goto code_r0x0001001eb288;
  case 4:
    pppppppuVar18 = (ulong *******)*param_1;
    param_2 = (ulong *******)&pppppppuStack_280;
    pppppppuVar15 = pppppppuVar18;
    (*(code *)(*pppppppuVar18)[3])();
    if ((int)pppppppuVar15 == 0) {
      pppppppuVar42 = (ulong *******)0x2;
      pppppppuVar18 = pppppppuVar15;
      goto code_r0x0001001eb288;
    }
    pppppppuStack_160 = (ulong *******)((ulong)pppppppuStack_160 & 0xffffffffffff0000);
    uStack_138 = 0;
    cStack_136 = '\0';
    pppppppuStack_250 = (ulong *******)CONCAT71(pppppppuStack_250._1_7_,0x32);
    puVar14 = &uStack_170;
    param_3 = (ulong *******)&pppppppuStack_280;
    FUN_1001fa328(puVar14,&pppppppuStack_250);
    if ((int)puVar14 == 0) {
code_r0x0001001e9348:
      param_3 = (ulong *******)((ulong)pppppppuStack_250 & 0xff);
      param_2 = (ulong *******)0x2;
      func_0x000107c2b730();
      break;
    }
    pppppppuVar15 = (ulong *******)((ulong)pppppppuStack_160 & 0xffff);
    if ((short)pppppppuStack_160 == 0x303) {
      pppppppuStack_200 = (ulong *******)CONCAT44(pppppppuStack_200._4_4_,0x1002b);
      apppppppuStack_220[0] = (ulong *******)&pppppppuStack_200;
      pppppppuStack_1f8 = (ulong *******)0x0;
      uStack_1f0 = 0;
      uStack_238 = uStack_128;
      pppppppuStack_240 = pppppppuStack_130;
      pppppppuVar15 = (ulong *******)&pppppppuStack_240;
      param_3 = (ulong *******)apppppppuStack_220;
      func_0x0001001fa470(pppppppuVar15,&pppppppuStack_250,param_3,1,1);
      if ((int)pppppppuVar15 != 0) {
        if (((ulong)pppppppuStack_200 & 0x1000000) == 0) {
          pppppppuVar15 = (ulong *******)((ulong)pppppppuStack_160 & 0xffff);
          goto code_r0x0001001ea438;
        }
        pppppppuVar15 = pppppppuStack_1f8;
        if (1 < uStack_1f0) {
          uStack_1f0 = uStack_1f0 - 2;
          pppppppuVar15 = (ulong *******)((long)pppppppuStack_1f8 + 2);
          if (uStack_1f0 == 0) {
            pppppppuVar15 =
                 (ulong *******)
                 (ulong)((uint)(*(ushort *)pppppppuStack_1f8 >> 8) |
                        (*(ushort *)pppppppuStack_1f8 & 0xff00ff) << 8);
            pppppppuStack_1f8 = (ulong *******)((long)pppppppuStack_1f8 + 2);
            goto code_r0x0001001ea438;
          }
        }
        pppppppuStack_1f8 = pppppppuVar15;
        pppppppuStack_250 = (ulong *******)CONCAT71(pppppppuStack_250._1_7_,0x32);
      }
      goto code_r0x0001001e9348;
    }
code_r0x0001001ea438:
    pppppppuVar42 = param_1;
    param_2 = pppppppuVar15;
    FUN_1001ef9a4();
    if (((ulong)pppppppuVar42 & 1) == 0) {
      FUN_1004d2c58(0x10,0,0xf0,&UNK_10f6cff25,0x2b9);
      param_2 = (ulong *******)0x2;
      param_3 = (ulong *******)0x46;
      func_0x000107c2b730();
      break;
    }
    ppppppuVar25 = pppppppuVar18[6];
    if ((*(ushort *)((long)ppppppuVar25 + 0xd4) >> 1 & 1) == 0) {
      *(short *)(pppppppuVar18 + 2) = (short)pppppppuVar15;
      *(ushort *)((long)ppppppuVar25 + 0xd4) = *(ushort *)((long)ppppppuVar25 + 0xd4) | 2;
      if (*pppppppuVar18[6][0x21] == (ulong ****)0x0) {
        *(undefined2 *)((long)pppppppuVar18[6][0x21] + 0x26e) = *(undefined2 *)(pppppppuVar18 + 2);
      }
    }
    else if ((uint)*(ushort *)(pppppppuVar18 + 2) != (uint)pppppppuVar15) {
      FUN_1004d2c58(0x10,0,0xf6,&UNK_10f6cff25,0x2c6);
      param_2 = (ulong *******)0x2;
      param_3 = (ulong *******)0x46;
      func_0x000107c2b730();
      break;
    }
    pppppppuVar15 = pppppppuVar18;
    FUN_1001fa5c4();
    if (0x303 < (uint)pppppppuVar15) {
      uVar21 = 5;
      goto code_r0x0001001eab88;
    }
    ppppppuVar25 = param_1[0x31];
    param_1[0x31] = (ulong ******)0x0;
    if (ppppppuVar25 != (ulong ******)0x0) {
      (*(code *)**ppppppuVar25)(ppppppuVar25);
      FUN_1001e33e0(ppppppuVar25);
    }
    ppppppuVar25 = param_1[0x32];
    param_1[0x32] = (ulong ******)0x0;
    if (ppppppuVar25 != (ulong ******)0x0) {
      (*(code *)**ppppppuVar25)(ppppppuVar25);
      FUN_1001e33e0(ppppppuVar25);
    }
    func_0x000107c2b71c(param_1);
    if ((*(uint *)(param_1 + 0xc3) >> 0xc & 1) != 0) {
      *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) & 0xffffbfff;
      FUN_1004d2c58(0x10,0,0x116,&UNK_10f6cff25,0x2df);
      param_2 = (ulong *******)0x2;
      param_3 = (ulong *******)0x46;
      func_0x000107c2b730();
      break;
    }
    ppppppuVar25 = pppppppuVar18[6];
    if (param_1[0xbe] != (ulong ******)0x0) {
      *(undefined4 *)(ppppppuVar25 + 0x1a) = 2;
    }
    ppppppuVar31 = *pppppppuStack_158;
    ppppppuVar43 = pppppppuStack_158[3];
    ppppppuVar16 = pppppppuStack_158[2];
    ppppppuVar25[3] = (ulong *****)pppppppuStack_158[1];
    ppppppuVar25[2] = (ulong *****)ppppppuVar31;
    ppppppuVar25[5] = (ulong *****)ppppppuVar43;
    ppppppuVar25[4] = (ulong *****)ppppppuVar16;
    ppppppuVar25 = pppppppuVar18[6];
    if ((*(ushort *)((long)ppppppuVar25 + 0xd4) >> 5 & 1) != 0) {
code_r0x0001001eb1f8:
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_138) | 0x3000000;
      pppppppuVar15 = (ulong *******)&pppppppuStack_200;
      func_0x000107c60ee0(pppppppuVar15,&PTR_DAT_110c89f08,0x18,0x28,FUN_1001fbef4);
      uVar22 = 4;
      if (param_1[1][8] != (ulong *****)0x0) {
        uVar22 = 0;
      }
      if (((pppppppuVar15 != (ulong *******)0x0) &&
          ((*(uint *)((long)pppppppuVar15 + 0x14) & uVar22) == 0)) &&
         (uVar7 = *(uint *)(pppppppuVar15 + 3), (uVar7 & uVar22) == 0)) {
        if (*(uint *)((long)pppppppuVar15 + 0x14) == 8) {
          pppppppuVar42 = pppppppuVar18;
          FUN_1001fa5c4();
          uVar13 = (uint)pppppppuVar42;
          if (0x303 < uVar13) {
            uVar22 = 0x304;
code_r0x0001001eb324:
            if (uVar13 <= uVar22) {
              if (pppppppuVar18[1] == (ulong ******)0x0) {
                ppppuVar34 = (ulong ****)0x0;
              }
              else {
                pppppuVar23 = pppppppuVar18[1][3];
                if (pppppuVar23 == (ulong *****)0x0) {
                  pppppuVar23 = pppppppuVar18[0xd][0x1d];
                }
                ppppuVar34 = *pppppuVar23;
              }
              func_0x000107c2b5b4(ppppuVar34,0,pppppppuVar15,&UNK_10ae5caf8);
              if ((int)ppppuVar34 != 0) {
                param_1[0xbf] = (ulong ******)pppppppuVar15;
                uVar26 = (ulong)*(byte *)((long)param_1 + 0x643);
                if ((uVar26 == 0) || (uStack_140 != uVar26)) {
code_r0x0001001eb3a8:
                  if (pppppppuVar18[0xb] != (ulong ******)0x0) {
                    FUN_100229eb4(pppppppuVar18 + 0xb,0);
                  }
                  pppppppuVar15 = param_1;
                  FUN_1001fc314();
                  if (((ulong)pppppppuVar15 & 1) == 0) {
                    param_2 = (ulong *******)0x2;
                    param_3 = (ulong *******)0x50;
                    func_0x000107c2b730();
                    break;
                  }
                  ppppppuVar25 = *pppppppuVar1;
                  *(int *)(ppppppuVar25 + 8) = (int)uStack_140;
                  if (uStack_140 != 0) {
                    func_0x000107c610b4((long)ppppppuVar25 + 0x44,pbStack_148);
                    ppppppuVar25 = *pppppppuVar1;
                  }
                  param_3 = (ulong *******)param_1[0xbf];
                  ppppppuVar25[0x1a] = (ulong *****)param_3;
                }
                else {
                  bVar27 = 0;
                  pbVar36 = pbStack_148;
                  pbVar37 = pbVar5;
                  do {
                    bVar27 = *pbVar37 ^ *pbVar36 | bVar27;
                    uVar26 = uVar26 - 1;
                    pbVar36 = pbVar36 + 1;
                    pbVar37 = pbVar37 + 1;
                  } while (uVar26 != 0);
                  if (bVar27 != 0) goto code_r0x0001001eb3a8;
                  ppppppuVar25 = pppppppuVar18[0xb];
                  if ((ppppppuVar25 == (ulong ******)0x0) ||
                     (ppppppuVar31 = pppppppuVar18[6], *(int *)(ppppppuVar31 + 0x1a) == 2)) {
                    FUN_1004d2c58(0x10,0,0x11e,&UNK_10f6cff25,0x31d);
                    param_2 = (ulong *******)0x2;
                    param_3 = (ulong *******)0x2f;
                    func_0x000107c2b730();
                    break;
                  }
                  if (*(short *)((long)ppppppuVar25 + 4) != *(short *)(pppppppuVar18 + 2)) {
                    FUN_1004d2c58(0x10,0,0xbc,&UNK_10f6cff25,0x322);
                    param_2 = (ulong *******)0x2;
                    param_3 = (ulong *******)0x2f;
                    func_0x000107c2b730();
                    break;
                  }
                  if ((ulong *******)ppppppuVar25[0x1a] != pppppppuVar15) {
                    FUN_1004d2c58(0x10,0,0xbb,&UNK_10f6cff25,0x327);
                    param_2 = (ulong *******)0x2;
                    param_3 = (ulong *******)0x2f;
                    func_0x000107c2b730();
                    break;
                  }
                  pppppppuVar15 = param_1;
                  func_0x000107c2b860();
                  if ((int)pppppppuVar15 == 0) {
                    FUN_1004d2c58(0x10,0,0x65,&UNK_10f6cff25,0x32e);
                    param_2 = (ulong *******)0x2;
                    param_3 = (ulong *******)0x2f;
                    func_0x000107c2b730();
                    break;
                  }
                  *(ushort *)((long)ppppppuVar31 + 0xd4) =
                       *(ushort *)((long)ppppppuVar31 + 0xd4) | 0x40;
                  param_3 = (ulong *******)param_1[0xbf];
                }
                pppppppuVar42 = pppppppuVar18;
                FUN_1001fa5c4(pppppppuVar18);
                pppppppuVar15 = param_1 + 0x33;
                FUN_1001fbf44(pppppppuVar15,pppppppuVar42);
                if ((int)pppppppuVar15 == 0) {
code_r0x0001001eb474:
                  param_2 = (ulong *******)0x2;
                  param_3 = (ulong *******)0x50;
                  func_0x000107c2b730();
                }
                else {
                  if (((ulong)pppppppuStack_280 & 1) == 0) {
                    pppppppuVar15 = param_1 + 0x33;
                    param_3 = pppppppuStack_260;
                    func_0x0001001f114c(pppppppuVar15,uStack_268);
                    if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x0001001eb474;
                  }
                  if ((pppppppuVar18[0xb] != (ulong ******)0x0) ||
                     (((ulong)param_1[0xbf][3] & 3) == 0)) {
                    func_0x0001001e6c68(param_1 + 0x33,0);
                  }
                  if (cStack_136 == '\0') {
                    param_2 = (ulong *******)&pppppppuStack_130;
                    pppppppuVar15 = param_1;
                    FUN_1001fff4c();
                    if (((ulong)pppppppuVar15 & 1) == 0) {
                      param_3 = (ulong *******)0xbe;
                      goto code_r0x0001001e9630;
                    }
                    if ((pppppppuVar18[0xb] == (ulong ******)0x0) ||
                       (bVar27 = *(byte *)(pppppppuVar18[0xb] + 0x36),
                       (*(uint *)(param_1 + 0xc3) >> 0x11 & 1) == (bVar27 & 1))) {
                      pppppppuVar15 = pppppppuVar18;
                      (*(code *)(*pppppppuVar18)[4])();
                      if (pppppppuVar18[0xb] == (ulong ******)0x0) {
                        *(undefined4 *)((long)param_1 + 0x14) = 6;
                        goto code_r0x0001001eab8c;
                      }
                      if ((*(char *)(pppppppuVar18[0xd] + 0x3d) == '\x01') &&
                         (((ulong)param_1[0xbf][3] & 3) != 0)) {
                        uVar21 = 9;
                      }
                      else {
                        uVar21 = 0x12;
                      }
                      goto code_r0x0001001eab88;
                    }
                    if ((bVar27 & 1) == 0) {
                      uVar19 = 0xcd;
                      uVar20 = 0x365;
                    }
                    else {
                      uVar19 = 0xcc;
                      uVar20 = 0x363;
                    }
                    FUN_1004d2c58(0x10,0,uVar19,&UNK_10f6cff25,uVar20);
                    param_2 = (ulong *******)0x2;
                    param_3 = (ulong *******)0x28;
                    func_0x000107c2b730();
                  }
                  else {
                    FUN_1004d2c58(0x10,0,0xee,&UNK_10f6cff25,0x356);
                    param_2 = (ulong *******)0x2;
                    param_3 = (ulong *******)0x2f;
                    func_0x000107c2b730();
                  }
                }
                break;
              }
            }
          }
        }
        else {
          if (uVar7 == 8) {
            uVar22 = 0x304;
          }
          else {
            uVar22 = 0x300;
            if (*(int *)((long)pppppppuVar15 + 0x24) != 1) {
              uVar22 = 0x303;
            }
          }
          pppppppuVar42 = pppppppuVar18;
          FUN_1001fa5c4();
          uVar13 = (uint)pppppppuVar42;
          if (uVar22 <= uVar13) {
            uVar22 = 0x303;
            if (uVar7 == 8) {
              uVar22 = 0x304;
            }
            goto code_r0x0001001eb324;
          }
        }
      }
      FUN_1004d2c58(0x10,0,0xf2,&UNK_10f6cff25,0x30b);
      param_2 = (ulong *******)0x2;
      param_3 = (ulong *******)0x2f;
      func_0x000107c2b730();
      break;
    }
    lVar39 = 2;
    if (*(char *)**param_1 == '\0') {
      lVar39 = 6;
    }
    psVar35 = (short *)&UNK_10e52b190;
    if (*(char *)**param_1 == '\0') {
      psVar35 = (short *)&UNK_10e52b194;
    }
    do {
      sVar9 = *psVar35;
      bVar11 = lVar39 != 0;
      lVar39 = lVar39 + -2;
      psVar35 = psVar35 + 1;
    } while (sVar9 != 0x304 && bVar11);
    if (((sVar9 != 0x304) || (0x304 < *(ushort *)((long)param_1 + 0x1c))) ||
       (*(ushort *)((long)param_1 + 0x1e) < 0x304)) goto code_r0x0001001eb1f8;
    lVar39 = 0;
    do {
      if (*(char *)((long)ppppppuVar25 + lVar39 + 0x28) != (&UNK_10e52b2d8)[lVar39]) {
        lVar39 = 0;
        goto code_r0x0001001eb174;
      }
      lVar39 = lVar39 + 1;
    } while (lVar39 != 8);
    goto code_r0x0001001eb1c8;
  case 5:
    pppppppuVar15 = param_1;
    FUN_1001fa5f8();
    pppppppuVar18 = pppppppuVar15;
    pppppppuVar42 = pppppppuVar15;
    if ((int)pppppppuVar15 == 1) {
      uVar21 = 0x15;
code_r0x0001001e9b6c:
      *(undefined4 *)((long)param_1 + 0x14) = uVar21;
      pppppppuVar18 = pppppppuVar15;
    }
    goto code_r0x0001001eb288;
  case 6:
    if (((ulong)param_1[0xbf][3] & 3) == 0) {
code_r0x0001001eab84:
      uVar21 = 7;
      goto code_r0x0001001eab88;
    }
    pppppppuVar15 = (ulong *******)*param_1;
    param_2 = (ulong *******)&uStack_170;
    pppppppuVar42 = pppppppuVar15;
    (*(code *)(*pppppppuVar15)[3])();
    if ((int)pppppppuVar42 == 0) goto code_r0x0001001e9a7c;
    param_2 = (ulong *******)&uStack_170;
    param_3 = (ulong *******)0xb;
    pppppppuVar18 = pppppppuVar15;
    FUN_1001ffd54();
    if ((int)pppppppuVar18 != 0) {
      if (((ulong)uStack_170 & 1) == 0) {
        pppppppuVar18 = param_1 + 0x33;
        param_2 = pppppppuStack_158;
        param_3 = pppppppuStack_150;
        func_0x0001001f114c();
        if ((int)pppppppuVar18 == 0) break;
      }
      pppppppuStack_1f8 = pppppppuStack_160;
      pppppppuStack_200 = pppppppuStack_168;
      pppppppuStack_280 = (ulong *******)CONCAT71(pppppppuStack_280._1_7_,0x32);
      pppppppuVar18 = (ulong *******)&pppppppuStack_280;
      func_0x000107c2b744(pppppppuVar18,*pppppppuVar1 + 0x12,pppppppuVar2,0,&pppppppuStack_200,
                          pppppppuVar15[0xd][0x58]);
      if (((ulong)pppppppuVar18 & 1) == 0) {
        param_3 = (ulong *******)((ulong)pppppppuStack_280 & 0xff);
        param_2 = (ulong *******)0x2;
        func_0x000107c2b730();
        pppppppuVar18 = pppppppuVar15;
      }
      else {
        ppppppuVar25 = *pppppppuVar1;
        if (((ppppppuVar25[0x12] == (ulong *****)0x0) ||
            (*ppppppuVar25[0x12] == (ulong ****)0x0 || pppppppuStack_1f8 != (ulong *******)0x0)) ||
           ((*(code *)pppppppuVar15[0xd][1][6])(), ((ulong)ppppppuVar25 & 1) == 0)) {
          FUN_1004d2c58(0x10,0,0x89,&UNK_10f6cff25,0x3a2);
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0x32;
          func_0x000107c2b730();
          pppppppuVar18 = pppppppuVar15;
        }
        else {
          pppppuVar23 = (*pppppppuVar1)[0x12];
          if ((pppppuVar23 == (ulong *****)0x0) || (*pppppuVar23 == (ulong ****)0x0)) {
            param_3 = (ulong *******)0x0;
          }
          else {
            param_3 = (ulong *******)*pppppuVar23[1];
          }
          param_2 = (ulong *******)*pppppppuVar2;
          pppppppuVar18 = param_1;
          func_0x000107c2b754();
          if (((ulong)pppppppuVar18 & 1) != 0) {
            (*(code *)(*pppppppuVar15)[4])();
            goto code_r0x0001001eab84;
          }
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0x2f;
          func_0x000107c2b730();
          pppppppuVar18 = pppppppuVar15;
        }
      }
    }
    break;
  case 7:
    if ((*(byte *)(param_1 + 0xc3) >> 6 & 1) != 0) {
      pppppppuVar41 = (ulong *******)*param_1;
      param_2 = (ulong *******)&uStack_170;
      pppppppuVar42 = pppppppuVar41;
      (*(code *)(*pppppppuVar41)[3])();
      if ((int)pppppppuVar42 == 0) goto code_r0x0001001e9a7c;
      pppppppuVar15 = pppppppuVar42;
      if (uStack_170._1_1_ == '\x16') {
        if (((ulong)uStack_170 & 1) == 0) {
          pppppppuVar18 = param_1 + 0x33;
          param_2 = pppppppuStack_158;
          param_3 = pppppppuStack_150;
          func_0x0001001f114c();
          if ((int)pppppppuVar18 == 0) break;
        }
        if (((pppppppuStack_160 != (ulong *******)0x0) && ((ulong *******)0x3 < pppppppuStack_160))
           && (*(byte *)pppppppuStack_168 == 1)) {
          param_2 = (ulong *******)0x0;
          lVar39 = 1;
          do {
            param_2 = (ulong *******)
                      ((ulong)*(byte *)((long)pppppppuStack_168 + lVar39) | (long)param_2 << 8);
            lVar39 = lVar39 + 1;
          } while (lVar39 != 4);
          if ((ulong *******)((long)param_2 + -1) < (ulong *******)((long)pppppppuStack_160 + -4) &&
              (ulong *******)((long)pppppppuStack_160 + -4) == param_2) {
            ppppppuVar25 = *pppppppuVar1;
            pppppuVar23 = (ulong *****)((long)pppppppuStack_168 + 4);
            param_3 = (ulong *******)0x0;
            FUN_10020344c();
            pppppuVar17 = ppppppuVar25[0x21];
            ppppppuVar25[0x21] = pppppuVar23;
            if (pppppuVar17 != (ulong *****)0x0) {
              FUN_100229fdc();
            }
            if ((*pppppppuVar1)[0x21] == (ulong *****)0x0) {
              param_2 = (ulong *******)0x2;
              param_3 = (ulong *******)0x50;
              func_0x000107c2b730();
              pppppppuVar18 = pppppppuVar41;
              break;
            }
            (*(code *)(*pppppppuVar41)[4])();
            pppppppuVar15 = pppppppuVar41;
            goto code_r0x0001001e9568;
          }
        }
        FUN_1004d2c58(0x10,0,0x89,&UNK_10f6cff25,0x3d3);
        param_2 = (ulong *******)0x2;
        param_3 = (ulong *******)0x32;
        func_0x000107c2b730();
        pppppppuVar18 = pppppppuVar41;
        break;
      }
    }
code_r0x0001001e9568:
    uVar21 = 8;
    goto code_r0x0001001eab88;
  case 8:
    if (((ulong)param_1[0xbf][3] & 3) == 0) {
      uVar21 = 10;
      pppppppuVar42 = (ulong *******)0x1;
      goto code_r0x0001001e9b6c;
    }
    pppppppuVar15 = param_1;
    FUN_100203bfc();
    iVar12 = (int)pppppppuVar15;
    pppppppuVar18 = pppppppuVar15;
    if (iVar12 != 1) {
      uVar21 = 8;
      uVar30 = 10;
      goto code_r0x0001001e9800;
    }
    break;
  case 9:
    param_2 = (ulong *******)0x1;
    pppppppuVar15 = param_1;
    func_0x000107c2b708();
    iVar12 = (int)pppppppuVar15;
    pppppppuVar18 = pppppppuVar15;
    if (iVar12 != 1) {
      uVar21 = 9;
      uVar30 = 0x12;
code_r0x0001001e9800:
      if (iVar12 != 2) {
        uVar21 = uVar30;
      }
      uVar22 = 0x10;
      if (iVar12 != 2) {
        uVar22 = 1;
      }
      pppppppuVar42 = (ulong *******)(ulong)uVar22;
      goto code_r0x0001001e9b6c;
    }
    break;
  case 10:
    pppppppuVar41 = (ulong *******)*param_1;
    param_2 = (ulong *******)&uStack_170;
    pppppppuVar15 = pppppppuVar41;
    (*(code *)(*pppppppuVar41)[3])();
    pppppppuVar42 = pppppppuVar15;
    if ((int)pppppppuVar15 == 0) goto code_r0x0001001e9a7c;
    if (uStack_170._1_1_ != '\f') {
      if ((*(byte *)((long)param_1[0xbf] + 0x14) >> 1 & 1) != 0) {
        FUN_1004d2c58(0x10,0,0xdf,&UNK_10f6cff25,0x414);
        param_2 = (ulong *******)0x2;
        param_3 = (ulong *******)0xa;
        func_0x000107c2b730();
        pppppppuVar18 = pppppppuVar41;
        break;
      }
code_r0x0001001e9bd8:
      uVar21 = 0xb;
      goto code_r0x0001001eab88;
    }
    if (((ulong)uStack_170 & 1) == 0) {
      pppppppuVar18 = param_1 + 0x33;
      param_2 = pppppppuStack_158;
      param_3 = pppppppuStack_150;
      func_0x0001001f114c();
      if ((int)pppppppuVar18 == 0) break;
    }
    uVar22 = *(uint *)((long)param_1[0xbf] + 0x14);
    pppppppuVar42 = pppppppuStack_160;
    pppppppuVar15 = pppppppuStack_168;
    if ((*(byte *)(param_1[0xbf] + 3) >> 2 & 1) == 0) {
joined_r0x0001001eac50:
      if ((uVar22 >> 1 & 1) == 0) {
        if ((uVar22 >> 2 & 1) == 0) {
          FUN_1004d2c58(0x10,0,0xdf,&UNK_10f6cff25,0x469);
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0xa;
          func_0x000107c2b730();
          pppppppuVar18 = pppppppuVar41;
          break;
        }
code_r0x0001001ead50:
        pppppppuVar32 = pppppppuStack_160;
        pppppppuVar18 = pppppppuStack_168;
        if (((ulong)param_1[0xbf][3] & 3) == 0) {
          if (pppppppuVar42 == (ulong *******)0x0) {
code_r0x0001001eaf84:
            (*(code *)(*pppppppuVar41)[4])();
            pppppppuVar15 = pppppppuVar41;
            goto code_r0x0001001e9bd8;
          }
          FUN_1004d2c58(0x10,0,0x97,&UNK_10f6cff25,0x4b0);
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0x32;
          func_0x000107c2b730();
          pppppppuVar18 = pppppppuVar41;
          break;
        }
        pppppppuVar24 = pppppppuVar41;
        FUN_1001fa5c4();
        if (0x302 < (uint)pppppppuVar24) {
          if (pppppppuVar42 < (ulong *******)0x2) {
            FUN_1004d2c58(0x10,0,0x89,&UNK_10f6cff25,0x47a);
            param_2 = (ulong *******)0x2;
            param_3 = (ulong *******)0x32;
            func_0x000107c2b730();
            pppppppuVar18 = pppppppuVar41;
          }
          else {
            uVar33 = *(ushort *)pppppppuVar15;
            pppppppuStack_200 = (ulong *******)CONCAT71(pppppppuStack_200._1_7_,0x32);
            pppppppuVar24 = param_1;
            FUN_100223ff8(param_1,&pppppppuStack_200,(uint)(uVar33 >> 8) | (uVar33 & 0xff00ff) << 8)
            ;
            if ((int)pppppppuVar24 != 0) {
              *(ushort *)(*pppppppuVar1 + 1) = uVar33 >> 8 | (ushort)((uVar33 & 0xff00ff) << 8);
              pppppppuVar24 = (ulong *******)((long)pppppppuVar42 + -2);
              pppppppuVar15 = (ulong *******)((long)pppppppuVar15 + 2);
              goto code_r0x0001001eaeb8;
            }
            param_3 = (ulong *******)((ulong)pppppppuStack_200 & 0xff);
            param_2 = (ulong *******)0x2;
            func_0x000107c2b730();
            pppppppuVar18 = pppppppuVar41;
          }
          break;
        }
        pppppppuVar24 = pppppppuVar42;
        if ((*(int *)((long)*pppppppuVar2 + 4) != 0x198) && (*(int *)((long)*pppppppuVar2 + 4) != 6)
           ) {
          FUN_1004d2c58(0x10,0,0xc1,&UNK_10f6cff25,0x486);
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0x2b;
          func_0x000107c2b730();
          pppppppuVar18 = pppppppuVar41;
          break;
        }
code_r0x0001001eaeb8:
        if (pppppppuVar24 < (ulong *******)0x2) {
code_r0x0001001eaf98:
          FUN_1004d2c58(0x10,0,0x89,&UNK_10f6cff25,0x48f);
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0x32;
          func_0x000107c2b730();
          pppppppuVar18 = pppppppuVar41;
          break;
        }
        param_2 = (ulong *******)((long)pppppppuVar15 + 2);
        param_3 = (ulong *******)
                  (ulong)((uint)(*(ushort *)pppppppuVar15 >> 8) |
                         (*(ushort *)pppppppuVar15 & 0xff00ff) << 8);
        if ((ulong *******)((long)pppppppuVar24 + -2) != param_3) goto code_r0x0001001eaf98;
        pppppppuStack_1f8 = (ulong *******)0x0;
        pppppppuStack_200 = (ulong *******)0x0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        pppppppuStack_280 = (ulong *******)0x0;
        pppppppuStack_278 = (ulong *******)0x0;
        pppppppuVar15 = (ulong *******)&pppppppuStack_200;
        FUN_1001ebea0(pppppppuVar15,((long)pppppppuVar32 - (long)pppppppuVar42) + 0x40);
        if ((int)pppppppuVar15 == 0) {
code_r0x0001001eb0a0:
          FUN_1004d2c58(0x10,0,0x44,&UNK_10f6cff25,0x49f);
          param_3 = (ulong *******)0x50;
        }
        else {
          pppppppuVar15 = (ulong *******)&pppppppuStack_200;
          FUN_1001ed748(pppppppuVar15,pppppppuVar41[6] + 6,0x20);
          if ((int)pppppppuVar15 == 0) goto code_r0x0001001eb0a0;
          pppppppuVar15 = (ulong *******)&pppppppuStack_200;
          FUN_1001ed748(pppppppuVar15,pppppppuVar41[6] + 2,0x20);
          if ((int)pppppppuVar15 == 0) goto code_r0x0001001eb0a0;
          pppppppuVar15 = (ulong *******)&pppppppuStack_200;
          FUN_1001ed748(pppppppuVar15,pppppppuVar18,(long)pppppppuVar32 - (long)pppppppuVar42);
          if ((int)pppppppuVar15 == 0) goto code_r0x0001001eb0a0;
          pppppppuVar15 = (ulong *******)&pppppppuStack_200;
          func_0x0001001ed84c(pppppppuVar15,&pppppppuStack_280);
          pppppppuVar18 = pppppppuStack_280;
          if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x0001001eb0a0;
          pppppppuVar15 = pppppppuVar41;
          FUN_100224594();
          if (((ulong)pppppppuVar15 & 1) != 0) {
            FUN_1001e33e0(pppppppuVar18);
            FUN_1001ed8c0(&pppppppuStack_200);
            goto code_r0x0001001eaf84;
          }
          FUN_1004d2c58(0x10,0,0x72,&UNK_10f6cff25,0x4a7);
          param_3 = (ulong *******)0x33;
        }
        param_2 = (ulong *******)0x2;
        func_0x000107c2b730(pppppppuVar41);
        FUN_1001e33e0(pppppppuStack_280);
        pppppppuVar18 = (ulong *******)&pppppppuStack_200;
        goto code_r0x0001001ea240;
      }
      if (((pppppppuVar42 == (ulong *******)0x0) || (*(byte *)pppppppuVar15 != 3)) ||
         ((pppppppuVar42 < (ulong *******)0x3 || (pppppppuVar42 == (ulong *******)0x3)))) {
code_r0x0001001eac84:
        FUN_1004d2c58(0x10,0,0x89,&UNK_10f6cff25,0x455);
        param_3 = (ulong *******)0x32;
      }
      else {
        pppppppuVar18 = (ulong *******)((long)pppppppuVar42 + -4);
        bVar27 = *(byte *)((long)pppppppuVar15 + 3);
        pppppppuVar32 = (ulong *******)(ulong)bVar27;
        pppppppuVar42 = (ulong *******)((long)pppppppuVar18 - (long)pppppppuVar32);
        if (pppppppuVar18 < pppppppuVar32) goto code_r0x0001001eac84;
        uVar22 = (uint)(*(ushort *)((long)pppppppuVar15 + 1) >> 8) |
                 (*(ushort *)((long)pppppppuVar15 + 1) & 0xff00ff) << 8;
        *(short *)((long)param_1[0xbb] + 6) = (short)uVar22;
        param_2 = (ulong *******)(ulong)uVar22;
        pppppppuVar18 = param_1;
        func_0x000107c2b6ac();
        if (((ulong)pppppppuVar18 & 1) != 0) {
          pppppppuVar18 = (ulong *******)(ulong)uVar22;
          func_0x0001001ec2a0(&pppppppuStack_200);
          pppppppuVar40 = (ulong *******)param_1[0x31];
          param_1[0x31] = (ulong ******)pppppppuStack_200;
          pppppppuVar24 = pppppppuStack_200;
          if (pppppppuVar40 != (ulong *******)0x0) {
            (*(code *)**pppppppuVar40)(pppppppuVar40);
            FUN_1001e33e0();
            pppppppuVar24 = (ulong *******)param_1[0x31];
            pppppppuVar18 = pppppppuVar40;
          }
          if (pppppppuVar24 != (ulong *******)0x0) {
            pppppppuVar24 = pppppppuVar3;
            param_2 = pppppppuVar32;
            FUN_1001e6684();
            uVar22 = (uint)pppppppuVar24 ^ 1;
            if (bVar27 == 0) {
              uVar22 = 1;
            }
            pppppppuVar18 = pppppppuVar24;
            if ((uVar22 & 1) == 0) {
              pppppppuVar18 = (ulong *******)*pppppppuVar3;
              param_2 = (ulong *******)((long)pppppppuVar15 + 4);
              param_3 = pppppppuVar32;
              func_0x000107c610b4();
            }
            if (((ulong)pppppppuVar24 & 1) != 0) {
              pppppppuVar15 = (ulong *******)((long)pppppppuVar15 + 4 + (long)pppppppuVar32);
              goto code_r0x0001001ead50;
            }
          }
          break;
        }
        FUN_1004d2c58(0x10,0,0xf3,&UNK_10f6cff25,0x45d);
        param_3 = (ulong *******)0x2f;
      }
      param_2 = (ulong *******)0x2;
      func_0x000107c2b730();
      pppppppuVar18 = pppppppuVar41;
    }
    else {
      pppppppuVar15 = (ulong *******)((long)pppppppuStack_160 + -2);
      if (pppppppuStack_160 < (ulong *******)0x2) {
code_r0x0001001ea114:
        FUN_1004d2c58(0x10,0,0x89,&UNK_10f6cff25,0x42a);
        param_3 = (ulong *******)0x32;
      }
      else {
        pppppppuVar32 = (ulong *******)((long)pppppppuStack_168 + 2);
        pppppppuVar18 =
             (ulong *******)
             (ulong)((uint)(*(ushort *)pppppppuStack_168 >> 8) |
                    (*(ushort *)pppppppuStack_168 & 0xff00ff) << 8);
        if (pppppppuVar15 < pppppppuVar18) goto code_r0x0001001ea114;
        pppppppuStack_200 = pppppppuVar32;
        pppppppuStack_1f8 = pppppppuVar18;
        if (pppppppuVar18 < (ulong *******)0x81) {
          if (pppppppuVar18 == (ulong *******)0x0) {
            pppppppuVar42 = (ulong *******)0x0;
          }
          else {
            pppppppuVar42 = pppppppuVar32;
            param_3 = pppppppuVar18;
            func_0x000107c610ac(pppppppuVar32,0);
            if (pppppppuVar42 != (ulong *******)0x0) goto code_r0x0001001ea6f0;
            pppppppuStack_280 = (ulong *******)0x0;
            iVar12 = (int)&pppppppuStack_200;
            param_2 = (ulong *******)&pppppppuStack_280;
            func_0x000107c2b230();
            pppppppuVar42 = pppppppuStack_280;
            if (iVar12 == 0) {
              FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cff25,0x445);
              param_2 = (ulong *******)0x2;
              param_3 = (ulong *******)0x50;
              func_0x000107c2b730();
              pppppppuVar18 = pppppppuVar41;
              break;
            }
          }
          ppppppuVar25 = param_1[0xb4];
          param_1[0xb4] = (ulong ******)pppppppuVar42;
          if (ppppppuVar25 != (ulong ******)0x0) {
            FUN_1001e33e0();
          }
          pppppppuVar42 = (ulong *******)((long)pppppppuVar15 - (long)pppppppuVar18);
          pppppppuVar15 = (ulong *******)((long)pppppppuVar32 + (long)pppppppuVar18);
          goto joined_r0x0001001eac50;
        }
code_r0x0001001ea6f0:
        FUN_1004d2c58(0x10,0,0x88,&UNK_10f6cff25,0x438);
        param_3 = (ulong *******)0x28;
      }
      param_2 = (ulong *******)0x2;
      func_0x000107c2b730();
      pppppppuVar18 = pppppppuVar41;
    }
    break;
  case 0xb:
    if (((ulong)param_1[0xbf][3] & 3) == 0) {
code_r0x0001001e927c:
      uVar21 = 0xc;
      goto code_r0x0001001eab88;
    }
    pppppppuVar15 = (ulong *******)*param_1;
    param_2 = (ulong *******)&uStack_170;
    pppppppuVar42 = pppppppuVar15;
    (*(code *)(*pppppppuVar15)[3])();
    if ((int)pppppppuVar42 == 0) goto code_r0x0001001e9a7c;
    if (uStack_170._1_1_ == '\x0e') {
      pppppppuVar15 = param_1 + 0x33;
      param_2 = (ulong *******)0x0;
      func_0x0001001e6c68();
      goto code_r0x0001001e927c;
    }
    param_2 = (ulong *******)&uStack_170;
    param_3 = (ulong *******)0xd;
    pppppppuVar18 = pppppppuVar15;
    FUN_1001ffd54();
    if ((int)pppppppuVar18 == 0) break;
    if (((ulong)uStack_170 & 1) == 0) {
      pppppppuVar18 = param_1 + 0x33;
      param_2 = pppppppuStack_158;
      param_3 = pppppppuStack_150;
      func_0x0001001f114c();
      if ((int)pppppppuVar18 == 0) break;
    }
    pppppppuStack_1f8 = pppppppuStack_160;
    pppppppuStack_200 = pppppppuStack_168;
    pppppppuVar18 = pppppppuStack_1f8;
    if (pppppppuStack_160 != (ulong *******)0x0) {
      pppppppuVar42 = (ulong *******)((long)pppppppuStack_168 + 1);
      pppppppuVar18 = (ulong *******)((long)pppppppuStack_160 + -1);
      bVar27 = *(byte *)pppppppuStack_168;
      pppppppuVar41 = (ulong *******)(ulong)bVar27;
      pppppppuStack_1f8 = (ulong *******)((long)pppppppuVar18 - (long)pppppppuVar41);
      pppppppuStack_200 = pppppppuVar42;
      if (pppppppuVar41 <= pppppppuVar18) {
        pppppppuStack_200 = (ulong *******)((long)pppppppuVar42 + (long)pppppppuVar41);
        pppppppuVar18 = pppppppuVar4;
        FUN_1001e6684(pppppppuVar4,pppppppuVar41);
        uVar22 = (uint)pppppppuVar18 ^ 1;
        if (bVar27 == 0) {
          uVar22 = 1;
        }
        if ((uVar22 & 1) == 0) {
          func_0x000107c610b4(*pppppppuVar4,pppppppuVar42,pppppppuVar41);
        }
        if (((ulong)pppppppuVar18 & 1) == 0) {
          param_2 = (ulong *******)0x2;
          param_3 = (ulong *******)0x50;
          func_0x000107c2b730();
          pppppppuVar18 = pppppppuVar15;
          break;
        }
        pppppppuVar18 = pppppppuVar15;
        FUN_1001fa5c4();
        if (0x302 < (uint)pppppppuVar18) {
          pppppppuVar18 = (ulong *******)((long)pppppppuStack_1f8 + -2);
          pppppppuVar42 = pppppppuStack_1f8;
          if ((ulong *******)0x1 < pppppppuStack_1f8) {
            pppppppuVar41 = (ulong *******)((long)pppppppuStack_200 + 2);
            pppppppuVar32 =
                 (ulong *******)
                 (ulong)((uint)(*(ushort *)pppppppuStack_200 >> 8) |
                        (*(ushort *)pppppppuStack_200 & 0xff00ff) << 8);
            pppppppuStack_1f8 = (ulong *******)((long)pppppppuVar18 - (long)pppppppuVar32);
            pppppppuStack_200 = pppppppuVar41;
            pppppppuVar42 = pppppppuVar18;
            if (pppppppuVar32 <= pppppppuVar18) {
              pppppppuStack_200 = (ulong *******)((long)pppppppuVar41 + (long)pppppppuVar32);
              pppppppuVar18 = param_1;
              pppppppuStack_280 = pppppppuVar41;
              pppppppuStack_278 = pppppppuVar32;
              func_0x000107c2b6c4(param_1,&pppppppuStack_280);
              pppppppuVar42 = pppppppuStack_1f8;
              if (((ulong)pppppppuVar18 & 1) != 0) goto code_r0x0001001ea7d8;
            }
          }
          pppppppuStack_1f8 = pppppppuVar42;
          func_0x000107c2b730(pppppppuVar15,2,0x32);
          param_3 = (ulong *******)0x89;
          goto code_r0x0001001e9630;
        }
code_r0x0001001ea7d8:
        pppppppuStack_240 = (ulong *******)CONCAT71(pppppppuStack_240._1_7_,0x32);
        param_3 = (ulong *******)&pppppppuStack_200;
        func_0x000107c2b750(&pppppppuStack_280,pppppppuVar15,&pppppppuStack_240);
        if (pppppppuStack_280 == (ulong *******)0x0) {
          param_3 = (ulong *******)((ulong)pppppppuStack_240 & 0xff);
          func_0x000107c2b730(pppppppuVar15,2);
code_r0x0001001eb040:
          pppppppuVar42 = (ulong *******)0x0;
        }
        else {
          if (pppppppuStack_1f8 != (ulong *******)0x0) {
            func_0x000107c2b730(pppppppuVar15,2,0x32);
            param_3 = (ulong *******)0x89;
            FUN_1004d2c58(0x10,0,0x89,&UNK_10f6cff25,0x4f6);
            goto code_r0x0001001eb040;
          }
          *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x20;
          pppppppuStack_280 = (ulong *******)0x0;
          FUN_1001e3370(param_1 + 0xb5);
          (*(code *)pppppppuVar15[0xd][1][10])(param_1);
          (*(code *)(*pppppppuVar15)[4])(pppppppuVar15);
          *(undefined4 *)((long)param_1 + 0x14) = 0xc;
          pppppppuVar42 = (ulong *******)0x1;
        }
        pppppppuVar18 = (ulong *******)&pppppppuStack_280;
        param_2 = (ulong *******)0x0;
        FUN_1001e3370();
        goto code_r0x0001001eb288;
      }
    }
    pppppppuStack_1f8 = pppppppuVar18;
    func_0x000107c2b730(pppppppuVar15,2,0x32);
    param_3 = (ulong *******)0x89;
code_r0x0001001e9630:
    param_2 = (ulong *******)0x0;
    pppppppuVar18 = (ulong *******)0x10;
    FUN_1004d2c58();
    break;
  case 0xc:
    pppppppuVar15 = (ulong *******)*param_1;
    param_2 = (ulong *******)&uStack_170;
    pppppppuVar42 = pppppppuVar15;
    (*(code *)(*pppppppuVar15)[3])();
    if ((int)pppppppuVar42 == 0) goto code_r0x0001001e9a7c;
    param_2 = (ulong *******)&uStack_170;
    param_3 = (ulong *******)0xe;
    pppppppuVar18 = pppppppuVar15;
    FUN_1001ffd54();
    if ((int)pppppppuVar18 != 0) {
      if (((ulong)uStack_170 & 1) == 0) {
        pppppppuVar18 = param_1 + 0x33;
        param_2 = pppppppuStack_158;
        param_3 = pppppppuStack_150;
        func_0x0001001f114c();
        if ((int)pppppppuVar18 == 0) break;
      }
      if (pppppppuStack_160 == (ulong *******)0x0) {
        pppppppuVar18 = pppppppuVar15;
        (*(code *)(*pppppppuVar15)[5])();
        if ((int)pppppppuVar18 == 0) {
          (*(code *)(*pppppppuVar15)[4])();
          uVar21 = 0xd;
          goto code_r0x0001001eab88;
        }
        func_0x000107c2b730(pppppppuVar15,2,10);
        param_3 = (ulong *******)0xff;
      }
      else {
        func_0x000107c2b730(pppppppuVar15,2,0x32);
        param_3 = (ulong *******)0x89;
      }
      goto code_r0x0001001e9630;
    }
    break;
  case 0xd:
    if ((*(byte *)(param_1 + 0xc3) >> 5 & 1) != 0) {
      pppppppuVar15 = (ulong *******)*param_1;
      if (*(int *)(pppppppuVar15[6] + 0x1a) == 2) {
        if (pppppppuVar15[1] != (ulong ******)0x0) {
          FUN_10022a7e4(pppppppuVar15[1][4]);
        }
      }
      else {
        ppppuVar34 = param_1[1][4][9];
        if (ppppuVar34 != (ulong ****)0x0) {
          param_2 = (ulong *******)param_1[1][4][10];
          pppppppuVar18 = pppppppuVar15;
          (*(code *)ppppuVar34)();
          if ((int)pppppppuVar18 == 0) {
            func_0x000107c2b730(pppppppuVar15,2,0x50);
            param_3 = (ulong *******)0x7e;
            goto code_r0x0001001e9630;
          }
          if ((int)pppppppuVar18 < 0) {
            *(undefined4 *)((long)param_1 + 0x14) = 0xd;
            pppppppuVar42 = (ulong *******)0x8;
            goto code_r0x0001001eb288;
          }
        }
      }
      pppppppuVar15 = param_1;
      func_0x000107c2b740();
      if (((ulong)pppppppuVar15 & 1) == 0) {
        param_2 = (ulong *******)0x0;
        func_0x0001001e6c68(param_1 + 0x33);
      }
      pppppppuVar18 = param_1;
      func_0x000107c2b758();
      if (((int)pppppppuVar18 == 0) ||
         (pppppppuVar18 = param_1, func_0x000107c2b714(), pppppppuVar15 = pppppppuVar18,
         (int)pppppppuVar18 == 0)) break;
    }
    uVar21 = 0xe;
    goto code_r0x0001001eab88;
  case 0xe:
    ppppppuVar31 = *param_1;
    pppppppuStack_278 = (ulong *******)0x0;
    pppppppuStack_280 = (ulong *******)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    param_2 = (ulong *******)&pppppppuStack_280;
    param_3 = (ulong *******)&pppppppuStack_240;
    ppppppuVar25 = ppppppuVar31;
    (*(code *)(*ppppppuVar31)[0xb])();
    if (((ulong)ppppppuVar25 & 1) == 0) {
      pppppppuVar42 = (ulong *******)0x0;
    }
    else {
      pppppppuStack_250 = (ulong *******)0x0;
      lStack_248 = 0;
      uVar22 = *(uint *)((long)param_1[0xbf] + 0x14);
      uVar7 = *(uint *)(param_1[0xbf] + 3);
      if ((uVar7 & 3) != 0) {
        uStack_170 = (ulong *******)(*param_1[0xbb][0x12][1])[1];
        pppppppuStack_168 = (ulong *******)(*param_1[0xbb][0x12][1])[2];
        if (((*(byte *)((long)param_1[1] + 0xe9) >> 4 & 1) == 0) &&
           (*(int *)((long)*pppppppuVar2 + 4) == 6)) goto code_r0x0001001e9208;
        param_2 = (ulong *******)(ulong)((uVar22 & 1) << 1);
        uVar26 = 0;
        FUN_100202ed8();
        pppppppuVar15 = param_3;
        if ((uVar26 & 1) != 0) goto code_r0x0001001e9208;
        goto code_r0x0001001ea6b4;
      }
code_r0x0001001e9208:
      if ((uVar7 >> 2 & 1) == 0) {
        ppppppuVar25 = (ulong ******)0x0;
code_r0x0001001e9210:
        if ((uVar22 & 1) != 0) {
          iVar12 = (int)&pppppppuStack_250;
          param_2 = (ulong *******)0x30;
          FUN_1001e6684();
          pppppppuVar15 = param_3;
          if (iVar12 != 0) {
            if (*(int *)((long)*pppppppuVar2 + 4) == 6) {
              pppppuVar23 = (*pppppppuVar2)[1];
              if (pppppuVar23 != (ulong *****)0x0) {
                *(byte *)pppppppuStack_250 = *(byte *)((long)param_1 + 0x61d);
                *(byte *)((long)pppppppuStack_250 + 1) = *(byte *)((long)param_1 + 0x61c);
                FUN_1001e47a4((ushort *)((long)pppppppuStack_250 + 2),0x2e,&UNK_10e525a20);
                iVar12 = (int)&pppppppuStack_240;
                param_2 = (ulong *******)&pppppppuStack_200;
                pppppppuVar15 = (ulong *******)0x2;
                FUN_1001ec3c0();
                if (iVar12 != 0) {
                  pppppuVar17 = pppppuVar23;
                  func_0x000107c2b4c8();
                  pppppppuVar15 = (ulong *******)((ulong)pppppuVar17 & 0xffffffff);
                  iVar12 = (int)&pppppppuStack_200;
                  param_2 = (ulong *******)apppppppuStack_220;
                  func_0x000107c2b224();
                  param_3 = apppppppuStack_220[0];
                  if (iVar12 != 0) {
                    func_0x000107c2b4c8(pppppuVar23);
                    param_2 = &ppppppuStack_258;
                    func_0x000107c2b4d4();
                    pppppppuVar15 = param_3;
                    if ((int)pppppuVar23 != 0) {
                      ppppppuVar16 = (ulong ******)
                                     ((long)pppppppuStack_200[1] + (long)ppppppuStack_258);
                      if (((pppppppuStack_1f8 == (ulong *******)0x0) &&
                          (!CARRY8((ulong)pppppppuStack_200[1],(ulong)ppppppuStack_258))) &&
                         (ppppppuVar16 <= pppppppuStack_200[2])) {
                        pppppppuStack_200[1] = ppppppuVar16;
                        iVar12 = (int)&pppppppuStack_240;
                        FUN_1001ebf4c();
                        pppppppuVar15 = param_3;
                        if (iVar12 != 0) goto code_r0x0001001ea628;
                      }
                    }
                  }
                }
                goto code_r0x0001001ea6b4;
              }
            }
            else {
              FUN_1004d2c58(6,0,0x6b,&UNK_10f6c5fb5,0xf1);
            }
            pppppppuVar15 = (ulong *******)0x44;
            uVar19 = 0x59e;
            goto code_r0x0001001ea6b0;
          }
          goto code_r0x0001001ea6b4;
        }
        if ((uVar22 >> 1 & 1) != 0) {
          iVar12 = (int)&pppppppuStack_240;
          param_2 = (ulong *******)&pppppppuStack_200;
          pppppppuVar15 = (ulong *******)0x1;
          FUN_1001ec3c0();
          if (iVar12 != 0) {
            apppppppuStack_220[0] = (ulong *******)CONCAT71(apppppppuStack_220[0]._1_7_,0x32);
            ppppppuVar16 = param_1[0x31];
            param_2 = (ulong *******)&pppppppuStack_200;
            param_3 = (ulong *******)&pppppppuStack_250;
            (*(code *)(*ppppppuVar16)[4])();
            if (((ulong)ppppppuVar16 & 1) == 0) {
              pppppppuVar15 = (ulong *******)((ulong)apppppppuStack_220[0] & 0xff);
              param_2 = (ulong *******)0x2;
              func_0x000107c2b730(ppppppuVar31);
            }
            else {
              iVar12 = (int)&pppppppuStack_240;
              FUN_1001ebf4c();
              pppppppuVar15 = param_3;
              if (iVar12 != 0) {
                ppppppuVar16 = param_1[0x31];
                param_1[0x31] = (ulong ******)0x0;
                if (ppppppuVar16 != (ulong ******)0x0) {
                  (*(code *)**ppppppuVar16)(ppppppuVar16);
                  FUN_1001e33e0(ppppppuVar16);
                }
                ppppppuVar16 = param_1[0x32];
                param_1[0x32] = (ulong ******)0x0;
                if (ppppppuVar16 != (ulong ******)0x0) {
                  (*(code *)**ppppppuVar16)(ppppppuVar16);
                  FUN_1001e33e0(ppppppuVar16);
                }
                FUN_1001e33e0(*pppppppuVar3);
                *pppppppuVar3 = (ulong ******)0x0;
                param_1[0x54] = (ulong ******)0x0;
                goto code_r0x0001001ea628;
              }
            }
          }
          goto code_r0x0001001ea6b4;
        }
        if ((uVar22 >> 2 & 1) == 0) {
          func_0x000107c2b730(ppppppuVar31,2,0x28);
          uVar19 = 0x5d1;
          pppppppuVar15 = (ulong *******)0x44;
          goto code_r0x0001001ea6b0;
        }
        param_2 = (ulong *******)((ulong)ppppppuVar25 & 0xffffffff);
        iVar12 = (int)&pppppppuStack_250;
        FUN_1001e6684();
        pppppppuVar15 = param_3;
        if (iVar12 == 0) goto code_r0x0001001ea6b4;
        if (lStack_248 != 0) {
          func_0x000107c60ee4(pppppppuStack_250);
        }
code_r0x0001001ea628:
        if ((uVar7 >> 2 & 1) != 0) {
          pppppppuStack_1f8 = (ulong *******)0x0;
          pppppppuStack_200 = (ulong *******)0x0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          pppppppuVar15 = (ulong *******)&pppppppuStack_200;
          FUN_1001ebea0(pppppppuVar15,lStack_248 + (ulong)((int)ppppppuVar25 + 4));
          if ((int)pppppppuVar15 != 0) {
            pppppppuVar15 = (ulong *******)&pppppppuStack_200;
            FUN_1001ec3c0(pppppppuVar15,apppppppuStack_220,2);
            if ((int)pppppppuVar15 != 0) {
              pppppppuVar15 = (ulong *******)apppppppuStack_220;
              FUN_1001ed748(pppppppuVar15,pppppppuStack_250,lStack_248);
              if ((int)pppppppuVar15 != 0) {
                pppppppuVar15 = (ulong *******)&pppppppuStack_200;
                FUN_1001ec3c0(pppppppuVar15,apppppppuStack_220,2);
                if ((int)pppppppuVar15 != 0) {
                  param_3 = (ulong *******)((ulong)ppppppuVar25 & 0xffffffff);
                  pppppppuVar15 = (ulong *******)apppppppuStack_220;
                  FUN_1001ed748(pppppppuVar15,&uStack_170);
                  if ((int)pppppppuVar15 != 0) {
                    pppppppuVar15 = (ulong *******)&pppppppuStack_200;
                    func_0x0001001ed84c(pppppppuVar15,&pppppppuStack_250);
                    if (((ulong)pppppppuVar15 & 1) != 0) {
                      FUN_1001ed8c0(&pppppppuStack_200);
                      goto code_r0x0001001ea62c;
                    }
                  }
                }
              }
            }
          }
          param_2 = (ulong *******)0x0;
          pppppppuVar15 = (ulong *******)0x41;
          FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cff25,0x5e0);
          FUN_1001ed8c0(&pppppppuStack_200);
          goto code_r0x0001001ea6b4;
        }
code_r0x0001001ea62c:
        param_2 = (ulong *******)&pppppppuStack_280;
        FUN_100229178();
        pppppppuVar15 = param_3;
        if ((int)ppppppuVar31 == 0) goto code_r0x0001001ea6b4;
        param_2 = (ulong *******)(param_1[0xbb] + 2);
        pppppppuVar18 = param_1;
        pppppppuVar15 = pppppppuStack_250;
        func_0x000107c2b8c8();
        ppppppuVar25 = *pppppppuVar1;
        *(int *)((long)ppppppuVar25 + 0xc) = (int)pppppppuVar18;
        if ((int)pppppppuVar18 == 0) goto code_r0x0001001ea6b4;
        *(byte *)(ppppppuVar25 + 0x36) =
             *(byte *)(ppppppuVar25 + 0x36) & 0xfe | (byte)(*(uint *)(param_1 + 0xc3) >> 0x11) & 1;
        *(undefined4 *)((long)param_1 + 0x14) = 0xf;
        pppppppuVar42 = (ulong *******)0x1;
      }
      else {
        if (param_1[1][8] == (ulong *****)0x0) {
          uVar19 = 0x576;
          pppppppuVar15 = (ulong *******)0xc4;
code_r0x0001001ea6b0:
          param_2 = (ulong *******)0x0;
          FUN_1004d2c58(0x10,0,pppppppuVar15,&UNK_10f6cff25,uVar19);
        }
        else {
          uStack_180 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          pppppppuStack_1f8 = (ulong *******)0x0;
          pppppppuStack_200 = (ulong *******)0x0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          ppppppuVar25 = ppppppuVar31;
          (*(code *)param_1[1][8])
                    (ppppppuVar31,param_1[0xb4],&pppppppuStack_200,0x81,&uStack_170,0x100);
          if ((int)ppppppuVar25 == 0) {
            FUN_1004d2c58(0x10,0,0xc3,&UNK_10f6cff25,0x580);
            param_2 = (ulong *******)0x2;
            pppppppuVar15 = (ulong *******)0x28;
            func_0x000107c2b730(ppppppuVar31);
          }
          else {
            ppppppuVar16 = *pppppppuVar1;
            pppppppuVar15 = (ulong *******)&pppppppuStack_200;
            func_0x0001001e6ec8();
            pppppuVar23 = ppppppuVar16[0x11];
            ppppppuVar16[0x11] = (ulong *****)pppppppuVar15;
            if (pppppuVar23 != (ulong *****)0x0) {
              FUN_1001e33e0();
            }
            if ((*pppppppuVar1)[0x11] == (ulong *****)0x0) {
              pppppppuVar15 = (ulong *******)0x41;
              uVar19 = 0x588;
              goto code_r0x0001001ea6b0;
            }
            iVar12 = (int)&pppppppuStack_240;
            param_2 = (ulong *******)apppppppuStack_220;
            pppppppuVar15 = (ulong *******)0x2;
            FUN_1001ec3c0();
            if (iVar12 != 0) {
              param_3 = (ulong *******)0x0;
              do {
                if (*(byte *)((long)&pppppppuStack_200 + (long)param_3) == 0) break;
                param_3 = (ulong *******)((long)param_3 + 1);
              } while (param_3 != (ulong *******)0x81);
              iVar12 = (int)apppppppuStack_220;
              param_2 = (ulong *******)&pppppppuStack_200;
              FUN_1001ed748();
              pppppppuVar15 = param_3;
              if (iVar12 != 0) {
                iVar12 = (int)&pppppppuStack_240;
                FUN_1001ebf4c();
                pppppppuVar15 = param_3;
                if (iVar12 != 0) goto code_r0x0001001e9210;
              }
            }
          }
        }
code_r0x0001001ea6b4:
        pppppppuVar42 = (ulong *******)0x0;
      }
      FUN_1001e33e0(pppppppuStack_250);
      param_3 = pppppppuVar15;
    }
    pppppppuVar18 = (ulong *******)&pppppppuStack_280;
code_r0x0001001ea6c4:
    FUN_1001ed8c0();
    goto code_r0x0001001eb288;
  case 0xf:
    if ((*(byte *)(param_1 + 0xc3) >> 5 & 1) != 0) {
      ppppppuVar25 = *param_1;
      pppppppuVar15 = param_1;
      func_0x000107c2b740();
      if (((ulong)pppppppuVar15 & 1) != 0) {
        pppppppuStack_168 = (ulong *******)0x0;
        uStack_170 = (ulong *******)0x0;
        pppppppuStack_158 = (ulong *******)0x0;
        pppppppuStack_160 = (ulong *******)0x0;
        param_2 = (ulong *******)&uStack_170;
        param_3 = (ulong *******)&pppppppuStack_200;
        ppppppuVar31 = ppppppuVar25;
        (*(code *)(*ppppppuVar25)[0xb])();
        if (((ulong)ppppppuVar31 & 1) == 0) {
code_r0x0001001eaa70:
          pppppppuVar42 = (ulong *******)0x0;
        }
        else {
          pppppppuVar15 = param_1;
          func_0x000107c2b6c8(param_1,&pppppppuStack_250);
          if (((ulong)pppppppuVar15 & 1) == 0) {
            param_2 = (ulong *******)0x2;
            param_3 = (ulong *******)0x28;
            func_0x000107c2b730(ppppppuVar25);
            goto code_r0x0001001eaa70;
          }
          ppppppuVar31 = ppppppuVar25;
          FUN_1001fa5c4();
          if (0x302 < (uint)ppppppuVar31) {
            pppppppuVar15 = (ulong *******)&pppppppuStack_200;
            FUN_1001ec108(pppppppuVar15,(ulong)pppppppuStack_250 & 0xffff);
            if ((int)pppppppuVar15 == 0) {
              param_2 = (ulong *******)0x0;
              param_3 = (ulong *******)0x44;
              FUN_1004d2c58(0x10,0,0x44,&UNK_10f6cff25,0x60e);
              goto code_r0x0001001eaa70;
            }
          }
          ppppppuVar31 = param_1[0xb9];
          if (((ppppppuVar31 == (ulong ******)0x0) || (ppppppuVar31[2] == (ulong *****)0x0)) ||
             (ppppuVar34 = ppppppuVar31[2][0xc], ppppuVar34 == (ulong ****)0x0)) {
            pppppppuVar15 = (ulong *******)0x0;
          }
          else {
            (*(code *)ppppuVar34)();
            pppppppuVar15 = (ulong *******)(long)(int)ppppppuVar31;
          }
          iVar12 = (int)&pppppppuStack_200;
          param_2 = (ulong *******)&pppppppuStack_280;
          param_3 = (ulong *******)0x2;
          FUN_1001ec3c0();
          if (iVar12 == 0) goto code_r0x0001001eaa70;
          iVar12 = (int)&pppppppuStack_280;
          param_2 = (ulong *******)&pppppppuStack_240;
          param_3 = pppppppuVar15;
          func_0x000107c2b224();
          if (iVar12 == 0) goto code_r0x0001001eaa70;
          param_3 = (ulong *******)apppppppuStack_220;
          pppppppuVar18 = param_1;
          param_2 = pppppppuStack_240;
          apppppppuStack_220[0] = pppppppuVar15;
          func_0x000107c2b834();
          if ((int)pppppppuVar18 != 1) {
            if ((int)pppppppuVar18 != 2) {
              pppppppuVar42 = (ulong *******)0x0;
              ppppppuVar31 = (ulong ******)
                             ((long)pppppppuStack_280[1] + (long)apppppppuStack_220[0]);
              if ((pppppppuStack_278 != (ulong *******)0x0) ||
                 (CARRY8((ulong)pppppppuStack_280[1],(ulong)apppppppuStack_220[0])))
              goto code_r0x0001001eaa74;
              if (ppppppuVar31 <= pppppppuStack_280[2]) {
                pppppppuStack_280[1] = ppppppuVar31;
                param_2 = (ulong *******)&uStack_170;
                FUN_100229178();
                if ((int)ppppppuVar25 != 0) {
                  param_2 = (ulong *******)0x0;
                  func_0x0001001e6c68(param_1 + 0x33);
                  pppppppuVar42 = (ulong *******)0x1;
                  uVar21 = 0x10;
                  goto code_r0x0001001eab48;
                }
              }
            }
            goto code_r0x0001001eaa70;
          }
          pppppppuVar42 = (ulong *******)0x9;
          uVar21 = 0xf;
code_r0x0001001eab48:
          *(undefined4 *)((long)param_1 + 0x14) = uVar21;
        }
code_r0x0001001eaa74:
        pppppppuVar18 = (ulong *******)&uStack_170;
        goto code_r0x0001001ea6c4;
      }
    }
    uVar21 = 0x10;
    goto code_r0x0001001eab88;
  case 0x10:
    pppppppuVar15 = (ulong *******)*param_1;
    *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x800000;
    pppppppuVar18 = pppppppuVar15;
    (*(code *)(*pppppppuVar15)[0xe])();
    if ((int)pppppppuVar18 != 0) {
      pppppppuVar18 = (ulong *******)*param_1;
      param_3 = param_1 + 0xc0;
      param_2 = (ulong *******)0x1;
      func_0x000107c2b8c4();
      if ((int)pppppppuVar18 != 0) {
        uVar22 = *(uint *)(param_1 + 0xc3);
        if ((uVar22 >> 0xf & 1) == 0) {
joined_r0x0001001e9f94:
          if ((uVar22 >> 0x18 & 1) != 0) {
            pppppppuStack_168 = (ulong *******)0x0;
            uStack_170 = (ulong *******)0x0;
            pppppppuStack_158 = (ulong *******)0x0;
            pppppppuStack_160 = (ulong *******)0x0;
            param_3 = (ulong *******)&pppppppuStack_200;
            pppppppuVar18 = pppppppuVar15;
            (*(code *)(*pppppppuVar15)[0xb])(pppppppuVar15,&uStack_170,param_3,0xcb);
            if (((int)pppppppuVar18 != 0) &&
               (pppppppuVar18 = param_1, func_0x000107c2b6cc(param_1,&pppppppuStack_200),
               (int)pppppppuVar18 != 0)) {
              param_2 = (ulong *******)&uStack_170;
              FUN_100229178();
              if (((ulong)pppppppuVar15 & 1) != 0) {
                FUN_1001ed8c0(&uStack_170);
                goto code_r0x0001001e9168;
              }
            }
            uVar19 = 0x655;
            goto code_r0x0001001ea238;
          }
code_r0x0001001e9168:
          pppppppuVar18 = param_1;
          func_0x000107c2b710();
          if ((int)pppppppuVar18 == 0) break;
          *(undefined4 *)((long)param_1 + 0x14) = 0x11;
code_r0x0001001ea9b4:
          pppppppuVar42 = (ulong *******)0x4;
          goto code_r0x0001001eb288;
        }
        iVar12 = *(int *)(pppppppuVar15[6] + 0x3b);
        pppppppuStack_168 = (ulong *******)0x0;
        uStack_170 = (ulong *******)0x0;
        pppppppuStack_158 = (ulong *******)0x0;
        pppppppuStack_160 = (ulong *******)0x0;
        pppppppuVar18 = pppppppuVar15;
        (*(code *)(*pppppppuVar15)[0xb])(pppppppuVar15,&uStack_170,&pppppppuStack_200,0x43);
        if ((int)pppppppuVar18 != 0) {
          pppppppuVar18 = (ulong *******)&pppppppuStack_200;
          FUN_1001ec3c0(pppppppuVar18,&pppppppuStack_280,1);
          if ((int)pppppppuVar18 != 0) {
            pppppppuVar18 = (ulong *******)&pppppppuStack_280;
            FUN_1001ed748(pppppppuVar18,pppppppuVar15[6][0x3a],pppppppuVar15[6][0x3b]);
            if ((int)pppppppuVar18 != 0) {
              pppppppuVar18 = (ulong *******)&pppppppuStack_200;
              FUN_1001ec3c0(pppppppuVar18,&pppppppuStack_280,1);
              if ((int)pppppppuVar18 != 0) {
                param_3 = (ulong *******)(0x20 - ((ulong)(iVar12 + 2) & 0x1f));
                pppppppuVar18 = (ulong *******)&pppppppuStack_280;
                FUN_1001ed748(pppppppuVar18,&UNK_10e52ad1d);
                if ((int)pppppppuVar18 != 0) {
                  param_2 = (ulong *******)&uStack_170;
                  pppppppuVar18 = pppppppuVar15;
                  FUN_100229178();
                  if (((ulong)pppppppuVar18 & 1) != 0) {
                    FUN_1001ed8c0(&uStack_170);
                    uVar22 = *(uint *)(param_1 + 0xc3);
                    goto joined_r0x0001001e9f94;
                  }
                }
              }
            }
          }
        }
        uVar19 = 0x64a;
code_r0x0001001ea238:
        param_3 = (ulong *******)0x44;
        param_2 = (ulong *******)0x0;
        FUN_1004d2c58(0x10,0,0x44,&UNK_10f6cff25,uVar19);
        pppppppuVar18 = (ulong *******)&uStack_170;
code_r0x0001001ea240:
        FUN_1001ed8c0();
      }
    }
    break;
  case 0x11:
    ppppppuVar25 = *param_1;
    if (ppppppuVar25[0xb] != (ulong *****)0x0) {
      uVar21 = 0x15;
      goto code_r0x0001001eab88;
    }
    pppppppuVar15 = param_1;
    func_0x000107c2b6d0();
    pppppppuVar18 = pppppppuVar15;
    if ((int)pppppppuVar15 == 0) break;
    *(undefined4 *)((long)param_1 + 0x14) = 0x12;
    if ((*(char *)((long)ppppppuVar25 + 0x84) < '\0') &&
       (ppppppuVar31 = *param_1, ((ulong)**ppppppuVar31 & 1) == 0)) {
      pppppuVar23 = ppppppuVar31[6];
      ppppuVar34 = pppppuVar23[0x22];
      if ((ppppuVar34 == (ulong ****)0x0) ||
         (((*(byte *)((long)ppppuVar34 + 0x619) >> 3 & 1) == 0 ||
          ((*(byte *)((long)ppppppuVar31 + 0xa4) & 1) != 0)))) {
        ppppppuVar16 = ppppppuVar31 + 2;
      }
      else {
        ppppppuVar16 = (ulong ******)((long)ppppuVar34[0xbc] + 4);
      }
      if ((((((*(short *)ppppppuVar16 == 0x303) && (*(int *)((long)param_1[0xbf] + 0x14) == 2)) &&
            (*(int *)(param_1[0xbf] + 4) == 2)) && (*(int *)(pppppuVar23 + 0x1a) != 2)) &&
          ((((*(ushort *)(ppppppuVar31[0xd] + 0x5e) >> 8 & 1) != 0 ||
            (pppppuVar23[0x3d] != (ulong ****)0x0)) || (pppppuVar23[0x3b] != (ulong ****)0x0)))) &&
         ((*(ushort *)((long)ppppppuVar25[6] + 0xd4) >> 5 & 1) == 0)) {
        *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x4400;
        pppppppuVar42 = (ulong *******)0xc;
        goto code_r0x0001001eb288;
      }
    }
    goto code_r0x0001001eab8c;
  case 0x12:
    if ((*(byte *)((long)param_1 + 0x61a) & 1) == 0) goto code_r0x0001001e9738;
    pppppppuVar15 = (ulong *******)*param_1;
    param_2 = (ulong *******)&uStack_170;
    pppppppuVar42 = pppppppuVar15;
    (*(code *)(*pppppppuVar15)[3])();
    if ((int)pppppppuVar42 == 0) goto code_r0x0001001e9a7c;
    param_2 = (ulong *******)&uStack_170;
    param_3 = (ulong *******)0x4;
    pppppppuVar18 = pppppppuVar15;
    FUN_1001ffd54();
    if ((int)pppppppuVar18 != 0) {
      if (((ulong)uStack_170 & 1) == 0) {
        pppppppuVar18 = param_1 + 0x33;
        param_2 = pppppppuStack_158;
        param_3 = pppppppuStack_150;
        func_0x0001001f114c();
        if ((int)pppppppuVar18 == 0) break;
      }
      pppppppuVar42 = pppppppuStack_168;
      if ((ulong *******)0x3 < pppppppuStack_160) {
        lVar39 = 0;
        uVar22 = 0;
        do {
          uVar22 = (uint)*(byte *)((long)pppppppuStack_168 + lVar39) | uVar22 << 8;
          lVar39 = lVar39 + 1;
        } while (lVar39 != 4);
        if ((((ulong)pppppppuStack_160 & 0xfffffffffffffffe) != 4) &&
           (pppppppuVar41 =
                 (ulong *******)
                 (ulong)((uint)(*(ushort *)((long)pppppppuStack_168 + 4) >> 8) |
                        (*(ushort *)((long)pppppppuStack_168 + 4) & 0xff00ff) << 8),
           (ulong *******)((long)pppppppuStack_160 + -6) == pppppppuVar41)) {
          if (pppppppuVar41 == (ulong *******)0x0) {
            *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) & 0xfffeffff;
            (*(code *)(*pppppppuVar15)[4])();
          }
          else {
            if (pppppppuVar15[0xb] == (ulong ******)0x0) {
              ppppppuVar25 = *pppppppuVar1;
            }
            else {
              FUN_100229944(&pppppppuStack_200,pppppppuVar15[0xb],2);
              pppppppuVar18 = pppppppuStack_200;
              pppppppuStack_200 = (ulong *******)0x0;
              FUN_100229eb4(pppppppuVar1,pppppppuVar18);
              pppppppuVar18 = (ulong *******)&pppppppuStack_200;
              FUN_100229eb4(pppppppuVar18,0);
              ppppppuVar25 = *pppppppuVar1;
              if (ppppppuVar25 == (ulong ******)0x0) {
                param_2 = (ulong *******)0x0;
                break;
              }
            }
            FUN_100237b5c(pppppppuVar15,ppppppuVar25);
            ppppppuVar25 = *pppppppuVar1;
            pppppppuVar18 = (ulong *******)(ppppppuVar25 + 0x1e);
            param_2 = pppppppuVar41;
            FUN_1001e6684();
            if ((int)pppppppuVar18 == 0) break;
            func_0x000107c610b4(ppppppuVar25[0x1e],(ushort *)((long)pppppppuVar42 + 6),pppppppuVar41
                               );
            ppppppuVar25 = param_1[0xbb];
            *(uint *)((long)ppppppuVar25 + 0x174) = uVar22;
            param_3 = (ulong *******)((long)ppppppuVar25 + 0x44);
            FUN_100237f68((ushort *)((long)pppppppuVar42 + 6));
            *(undefined4 *)(param_1[0xbb] + 8) = 0x20;
            (*(code *)(*pppppppuVar15)[4])();
            param_2 = pppppppuVar41;
          }
code_r0x0001001e9738:
          *(undefined4 *)((long)param_1 + 0x14) = 0x13;
          pppppppuVar18 = pppppppuVar15;
          pppppppuVar42 = (ulong *******)0xf;
          goto code_r0x0001001eb288;
        }
      }
      func_0x000107c2b730(pppppppuVar15,2,0x32);
      param_3 = (ulong *******)0x89;
      goto code_r0x0001001e9630;
    }
    break;
  case 0x13:
    pppppppuVar15 = (ulong *******)*param_1;
    param_3 = param_1 + 0xc0;
    param_2 = (ulong *******)0x0;
    func_0x000107c2b8c4();
    pppppppuVar18 = pppppppuVar15;
    if ((int)pppppppuVar15 != 0) {
      uVar21 = 0x14;
      goto code_r0x0001001eab88;
    }
    break;
  case 0x14:
    ppppppuVar25 = *param_1;
    pppppppuVar15 = param_1;
    func_0x000107c2b70c();
    pppppppuVar18 = pppppppuVar15;
    pppppppuVar42 = pppppppuVar15;
    if ((int)pppppppuVar15 == 1) {
      uVar21 = 0x15;
      if (ppppppuVar25[0xb] != (ulong *****)0x0) {
        uVar21 = 0x10;
      }
      goto code_r0x0001001e9b6c;
    }
    goto code_r0x0001001eb288;
  case 0x15:
    pppppppuVar42 = (ulong *******)*param_1;
    if (*(int *)(pppppppuVar42[6] + 0x1a) == 2) {
      *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 2;
      func_0x000107c2b730(pppppppuVar42,2,0x79);
      param_3 = (ulong *******)0x13f;
      goto code_r0x0001001e9630;
    }
    (*(code *)(*pppppppuVar42)[0x10])(pppppppuVar42);
    ppppppuVar25 = *pppppppuVar1;
    if (ppppppuVar25 == (ulong ******)0x0) {
      param_2 = (ulong *******)pppppppuVar42[0xb];
      if (param_2 != (ulong *******)0x0) {
        iVar12 = *(int *)param_2;
        do {
          if (iVar12 == -1) break;
          iVar6 = *(int *)param_2;
          if (iVar6 == iVar12) {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(param_2,0x10);
            if (bVar11) {
              *(int *)param_2 = iVar12 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
            bVar11 = cVar10 == '\0';
          }
          else {
            bVar11 = false;
            ClearExclusiveLocal();
          }
          iVar12 = iVar6;
        } while (!bVar11);
      }
      pppppppuVar15 = (ulong *******)(pppppppuVar42[6] + 0x39);
    }
    else {
      FUN_100229944(&uStack_170,ppppppuVar25,3);
      param_2 = uStack_170;
      uStack_170 = (ulong *******)0x0;
      FUN_100229eb4(pppppppuVar42[6] + 0x39);
      pppppppuVar18 = uStack_170;
      uStack_170 = (ulong *******)0x0;
      if (pppppppuVar18 != (ulong *******)0x0) {
        FUN_100229edc();
      }
      pppppuVar23 = pppppppuVar42[6][0x39];
      if (pppppuVar23 == (ulong *****)0x0) break;
      if ((*(ushort *)((long)pppppppuVar42[6] + 0xd4) >> 5 & 1) == 0) {
        *(byte *)(pppppuVar23 + 0x36) = *(byte *)(pppppuVar23 + 0x36) & 0xfb;
      }
      param_2 = (ulong *******)0x0;
      pppppppuVar15 = pppppppuVar1;
    }
    FUN_100229eb4();
    *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 8;
    *(ushort *)((long)pppppppuVar42[6] + 0xd4) = *(ushort *)((long)pppppppuVar42[6] + 0xd4) | 0x20;
    if (ppppppuVar25 != (ulong ******)0x0) {
      FUN_10022a114();
      pppppppuVar15 = pppppppuVar42;
    }
    uVar21 = 0x16;
code_r0x0001001eab88:
    *(undefined4 *)((long)param_1 + 0x14) = uVar21;
code_r0x0001001eab8c:
    pppppppuVar18 = pppppppuVar15;
    pppppppuVar42 = (ulong *******)0x1;
    goto code_r0x0001001eb288;
  case 0x16:
    pppppppuVar18 = (ulong *******)*param_1;
    ppppppuVar25 = pppppppuVar18[0xc];
    if ((ppppppuVar25 != (ulong ******)0x0) ||
       (ppppppuVar25 = (ulong ******)pppppppuVar18[0xd][0x30], ppppppuVar25 != (ulong ******)0x0)) {
      param_2 = (ulong *******)0x20;
      param_3 = (ulong *******)0x1;
      (*(code *)ppppppuVar25)();
    }
    pppppppuVar42 = (ulong *******)0x1;
    goto LAB_1001eb6f8;
  }
  goto LAB_1001eb284;
  while (lVar39 = lVar39 + 1, lVar39 != 8) {
code_r0x0001001eb174:
    if (*(char *)((long)ppppppuVar25 + lVar39 + 0x28) != (&UNK_10e52b2e0)[lVar39]) {
      lVar39 = 0;
      goto code_r0x0001001eb1a4;
    }
  }
  goto code_r0x0001001eb1c8;
  while (lVar39 = lVar39 + 1, lVar39 != 8) {
code_r0x0001001eb1a4:
    if (*(char *)((long)ppppppuVar25 + lVar39 + 0x28) != (&UNK_10e52b2e8)[lVar39])
    goto code_r0x0001001eb1f8;
  }
code_r0x0001001eb1c8:
  FUN_1004d2c58(0x10,0,0x129,&UNK_10f6cff25,0x2fb);
  param_2 = (ulong *******)0x2;
  param_3 = (ulong *******)0x2f;
  func_0x000107c2b730();
LAB_1001eb284:
  pppppppuVar42 = (ulong *******)0x0;
code_r0x0001001eb288:
  if (*(int *)((long)param_1 + 0x14) != iVar8) {
    pppppppuVar18 = (ulong *******)*param_1;
    ppppppuVar25 = pppppppuVar18[0xc];
    if ((ppppppuVar25 != (ulong ******)0x0) ||
       (ppppppuVar25 = (ulong ******)pppppppuVar18[0xd][0x30], ppppppuVar25 != (ulong ******)0x0)) {
      param_2 = (ulong *******)0x1001;
      param_3 = (ulong *******)0x1;
      (*(code *)ppppppuVar25)();
    }
  }
  pppppppuVar15 = pppppppuVar18;
  if ((int)pppppppuVar42 != 1) goto LAB_1001eb6f8;
  goto LAB_1001e8fbc;
LAB_1001eb6f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppppuVar42;
  }
  func_0x000107c60e78();
  FUN_1001ed8c0(&pppppppuStack_200);
  FUN_1001e33e0(pppppppuStack_250);
  FUN_1001ed8c0(&pppppppuStack_280);
  func_0x000107c60bd8();
  ppppppuVar25 = *pppppppuVar18;
  uVar22 = *(uint *)(ppppppuVar25 + 0x10);
  if (*(char *)*ppppppuVar25 != '\0') {
    uVar22 = uVar22 & 0xe0000000 | uVar22 & 0xfffffff | (uVar22 >> 0x1a & 1) << 0x1c;
  }
  uVar33 = *(ushort *)((long)pppppppuVar18[1] + 10);
  if (uVar33 - 0x301 < 4) {
LAB_1001eb818:
    uVar29 = *(ushort *)(pppppppuVar18[1] + 1);
    if (3 < uVar29 - 0x301) {
      if (uVar29 == 0xfefd) {
        uVar29 = 0x303;
      }
      else {
        if (uVar29 != 0xfeff) goto LAB_1001eb8ec;
        uVar29 = 0x302;
      }
    }
    bVar11 = false;
    if (ppppppuVar25[0x13] != (ulong *****)0x0) {
      uVar33 = 0x304;
    }
    puVar38 = (ushort *)&UNK_10e52b170;
    lVar39 = 4;
    do {
      uVar28 = *puVar38;
      if (uVar33 <= uVar28) {
        if (uVar29 < uVar28) break;
        if ((*(uint *)(puVar38 + 2) & uVar22) == 0) {
          if (!bVar11) {
            uVar33 = uVar28;
          }
          bVar11 = true;
        }
        else {
          if (bVar11) {
            uVar29 = puVar38[-4];
            goto LAB_1001eb91c;
          }
          bVar11 = false;
        }
      }
      puVar38 = puVar38 + 4;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
    if (bVar11) {
LAB_1001eb91c:
      *(ushort *)param_2 = uVar33;
      *(ushort *)param_3 = uVar29;
      return (ulong *******)0x1;
    }
    uVar19 = 0x118;
    uVar20 = 0xea;
  }
  else {
    if (uVar33 == 0xfefd) {
      uVar33 = 0x303;
      goto LAB_1001eb818;
    }
    if (uVar33 == 0xfeff) {
      uVar33 = 0x302;
      goto LAB_1001eb818;
    }
LAB_1001eb8ec:
    uVar19 = 0x44;
    uVar20 = 0xbb;
  }
  FUN_1004d2c58(0x10,0,uVar19,&UNK_10f6d115c,uVar20);
  return (ulong *******)0x0;
}



/* Entry: 1001eb7dc; end: 1001eb937;  */

undefined8 FUN_1001eb7dc(long *param_1,ushort *param_2,ushort *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort *puVar9;
  long lVar10;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *(uint *)(puVar1 + 0x10);
  if (*(char *)*puVar1 != '\0') {
    uVar2 = uVar2 & 0xe0000000 | uVar2 & 0xfffffff | (uVar2 >> 0x1a & 1) << 0x1c;
  }
  uVar8 = *(ushort *)(param_1[1] + 10);
  if (uVar8 - 0x301 < 4) {
LAB_1001eb818:
    uVar7 = *(ushort *)(param_1[1] + 8);
    if (3 < uVar7 - 0x301) {
      if (uVar7 == 0xfefd) {
        uVar7 = 0x303;
      }
      else {
        if (uVar7 != 0xfeff) goto LAB_1001eb8ec;
        uVar7 = 0x302;
      }
    }
    bVar4 = false;
    if (puVar1[0x13] != 0) {
      uVar8 = 0x304;
    }
    puVar9 = (ushort *)&UNK_10e52b170;
    lVar10 = 4;
    do {
      uVar3 = *puVar9;
      if (uVar8 <= uVar3) {
        if (uVar7 < uVar3) break;
        if ((*(uint *)(puVar9 + 2) & uVar2) == 0) {
          if (!bVar4) {
            uVar8 = uVar3;
          }
          bVar4 = true;
        }
        else {
          if (bVar4) {
            uVar7 = puVar9[-4];
            goto LAB_1001eb91c;
          }
          bVar4 = false;
        }
      }
      puVar9 = puVar9 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if (bVar4) {
LAB_1001eb91c:
      *param_2 = uVar8;
      *param_3 = uVar7;
      return 1;
    }
    uVar5 = 0x118;
    uVar6 = 0xea;
  }
  else {
    if (uVar8 == 0xfefd) {
      uVar8 = 0x303;
      goto LAB_1001eb818;
    }
    if (uVar8 == 0xfeff) {
      uVar8 = 0x302;
      goto LAB_1001eb818;
    }
LAB_1001eb8ec:
    uVar5 = 0x44;
    uVar6 = 0xbb;
  }
  FUN_1004d2c58(0x10,0,uVar5,&UNK_10f6d115c,uVar6);
  return 0;
}



/* Entry: 1001eb938; end: 1001ebc0f;  */

bool FUN_1001eb938(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort **ppuVar5;
  bool bVar6;
  int iVar7;
  ushort **ppuVar8;
  long **pplVar9;
  undefined8 *puVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  ushort **ppuStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  char cStack_c1;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ushort *puStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  ushort *puStack_78;
  ulong uStack_70;
  
  *param_4 = 0;
  if (0x303 < *(ushort *)(param_1 + 0x1e)) {
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 0xe0);
    if (lVar11 != 0) {
      if (lVar11 != 1) {
        puVar12 = *(ushort **)(*(long *)(param_1 + 8) + 0xd8);
        puStack_78 = puVar12 + 1;
        uVar4 = *puVar12;
        uStack_70 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
        if ((uStack_70 <= lVar11 - 2U) && (uStack_70 != 0 && lVar11 - 2U == uStack_70)) {
          do {
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            puStack_90 = (ushort *)0x0;
            lStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            ppuVar8 = &puStack_78;
            func_0x000107c34fbc(ppuVar8,&uStack_c0,&cStack_c1,0);
            if (((ulong)ppuVar8 & 1) == 0) {
              bVar6 = false;
              goto LAB_1001ebad4;
            }
            if ((cStack_c1 == '\x01') && ((short)uStack_80 == 0x20)) {
              ppuStack_100 = (ushort **)0x0;
              puVar12 = puStack_90;
              uVar13 = uStack_88;
              ppuVar5 = ppuStack_100;
LAB_1001eba18:
              ppuStack_100 = ppuVar5;
              if (uVar13 != 0) {
                if ((uVar13 == 1) || ((uVar13 & 0xfffffffffffffffe) == 2)) goto LAB_1001eba98;
                lVar11 = 0;
                uVar4 = *puVar12;
                puVar1 = puVar12 + 2;
                uVar13 = uVar13 - 4;
                uVar3 = puVar12[1];
                do {
                  (**(code **)((long)&PTR_DAT_110c89b30 + lVar11))();
                  puVar12 = puVar1;
                  ppuVar5 = ppuStack_100;
                  if (*(ushort *)ppuVar8 == (ushort)(uVar3 >> 8 | uVar3 << 8)) {
                    if (((ushort)(uVar4 >> 8 | uVar4 << 8) == 1) &&
                       (ppuVar5 = ppuVar8, ppuStack_100 != (ushort **)0x0)) {
                      ppuVar5 = ppuStack_100;
                    }
                    break;
                  }
                  lVar11 = lVar11 + 8;
                } while (lVar11 != 0x18);
                goto LAB_1001eba18;
              }
              if (ppuStack_100 != (ushort **)0x0) {
                uStack_e8 = 0;
                plStack_f0 = (long *)0x0;
                uStack_d8 = 0;
                lStack_e0 = 0;
                pplVar9 = &plStack_f0;
                FUN_1001ebea0(pplVar9,lStack_b8 + 8);
                if ((int)pplVar9 == 0) {
LAB_1001ebbbc:
                  FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cfc38,0x2a1);
LAB_1001ebbd8:
                  bVar6 = false;
                }
                else {
                  pplVar9 = &plStack_f0;
                  FUN_1001ed748(pplVar9,&UNK_10e52ac74,8);
                  if ((int)pplVar9 == 0) goto LAB_1001ebbbc;
                  pplVar9 = &plStack_f0;
                  FUN_1001ed748(pplVar9,uStack_c0,lStack_b8);
                  if ((int)pplVar9 == 0) goto LAB_1001ebbbc;
                  lVar2 = lStack_e0 + (uStack_d8 & 0xff);
                  lVar11 = param_1 + 0x2c0;
                  func_0x000107c2b524(lVar11,param_2,param_4,param_3,&UNK_110c7cc38,&UNK_110c7cc78,
                                      ppuStack_100,uStack_b0,uStack_a8,lVar2 + *plStack_f0,
                                      plStack_f0[1] - lVar2);
                  if ((int)lVar11 == 0) goto LAB_1001ebbd8;
                  iVar7 = (int)param_1 + 0x1c0;
                  FUN_1001e6c04();
                  if (iVar7 == 0) goto LAB_1001ebbd8;
                  puVar10 = &uStack_c0;
                  func_0x000107c2b6a0(puVar10);
                  uStack_f8 = 0;
                  FUN_10022a550((long *)(param_1 + 0x5f0),puVar10);
                  FUN_10022a550(&uStack_f8,0);
                  bVar6 = *(long *)(param_1 + 0x5f0) != 0;
                }
                FUN_1001ed8c0(&plStack_f0);
LAB_1001ebad4:
                FUN_1001e33e0(uStack_c0);
                return bVar6;
              }
            }
LAB_1001eba98:
            FUN_1001e33e0(uStack_c0);
            if (uStack_70 == 0) {
              return true;
            }
          } while( true );
        }
      }
      return false;
    }
  }
  return true;
}



/* Entry: 1001ebc10; end: 1001ebe9f;  */

undefined8 * FUN_1001ebc10(long *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  long lStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *param_1;
  puVar4 = (undefined8 *)param_1[0x31];
  param_1[0x31] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_1001e33e0(puVar4);
  }
  puVar4 = (undefined8 *)param_1[0x32];
  param_1[0x32] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_1001e33e0(puVar4);
  }
  FUN_1001e33e0(param_1[0x49]);
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  if (*(ushort *)((long)param_1 + 0x1e) < 0x304) {
    return (undefined8 *)0x1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  puVar4 = &uStack_60;
  FUN_1001ebea0(puVar4,0x40);
  if ((int)puVar4 != 0) {
    if ((int)param_2 == 0) {
      if ((*(ushort *)(*(long *)(lVar6 + 0x68) + 0x2f0) >> 5 & 1) != 0) {
        uVar1 = (*(byte *)((long)param_1 + 0x645) | 0xe) & 0xfa;
        puVar4 = &uStack_60;
        FUN_1001ec108(puVar4,uVar1 | uVar1 << 8);
        if ((int)puVar4 != 0) {
          puVar4 = &uStack_60;
          FUN_1001ec108(puVar4,1);
          if ((int)puVar4 != 0) {
            puVar4 = &uStack_60;
            func_0x0001001ec260(puVar4,0);
            if ((int)puVar4 != 0) goto LAB_1001ebdd4;
          }
        }
        goto LAB_1001ebe44;
      }
LAB_1001ebdd4:
      lVar6 = *(long *)(param_1[1] + 0x68);
      if (lVar6 == 0) {
        uVar5 = 0;
        param_2 = 0x1d;
      }
      else {
        puVar3 = *(ushort **)(param_1[1] + 0x60);
        uVar5 = *puVar3;
        param_2 = (ulong)uVar5;
        if (uVar5 != 0x4138) goto LAB_1001ebcbc;
        if (lVar6 == 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = puVar3[1];
        }
        param_2 = 0x4138;
      }
    }
    else {
LAB_1001ebcbc:
      uVar5 = 0;
    }
    func_0x0001001ec2a0(&lStack_88,param_2);
    puVar4 = (undefined8 *)param_1[0x31];
    param_1[0x31] = lStack_88;
    lVar6 = lStack_88;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      FUN_1001e33e0(puVar4);
      lVar6 = param_1[0x31];
    }
    if (lVar6 != 0) {
      puVar4 = &uStack_60;
      FUN_1001ec108(puVar4,param_2);
      if ((int)puVar4 != 0) {
        puVar4 = &uStack_60;
        FUN_1001ec3c0(puVar4,auStack_80,2);
        if ((int)puVar4 != 0) {
          plVar2 = (long *)param_1[0x31];
          (**(code **)(*plVar2 + 0x18))(plVar2,auStack_80);
          if (((ulong)plVar2 & 1) != 0) {
            if (uVar5 == 0) {
LAB_1001ebdb4:
              puVar4 = &uStack_60;
              func_0x0001001ed84c(puVar4,param_1 + 0x49);
              goto LAB_1001ebe48;
            }
            func_0x0001001ec2a0(&lStack_88,uVar5);
            puVar4 = (undefined8 *)param_1[0x32];
            param_1[0x32] = lStack_88;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4);
              FUN_1001e33e0(puVar4);
              lStack_88 = param_1[0x32];
            }
            if (lStack_88 != 0) {
              puVar4 = &uStack_60;
              FUN_1001ec108(puVar4,uVar5);
              if ((int)puVar4 != 0) {
                puVar4 = &uStack_60;
                FUN_1001ec3c0(puVar4,auStack_80,2);
                if ((int)puVar4 != 0) {
                  plVar2 = (long *)param_1[0x32];
                  (**(code **)(*plVar2 + 0x18))(plVar2,auStack_80);
                  if (((ulong)plVar2 & 1) != 0) goto LAB_1001ebdb4;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1001ebe44:
  puVar4 = (undefined8 *)0x0;
LAB_1001ebe48:
  FUN_1001ed8c0(&uStack_60);
  return puVar4;
}



/* Entry: 1001ebea0; end: 1001ebf4b;  */

undefined8 FUN_1001ebea0(undefined8 *param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (0xfffffffffffffff7 < param_2) {
    return 0;
  }
  puVar1 = (ulong *)(param_2 + 8);
  func_0x000107c610a0();
  if (puVar1 == (ulong *)0x0) {
    if (param_2 != 0) {
      return 0;
    }
    puVar3 = (ulong *)0x0;
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = param_2;
  }
  puVar2 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_1001e33e0(puVar3);
    return 0;
  }
  *puVar2 = 0x20;
  puVar2[1] = puVar3;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  *(undefined2 *)(puVar2 + 4) = 1;
  *param_1 = puVar2 + 1;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  return 1;
}



/* Entry: 1001ebf4c; end: 1001ec107;  */

undefined8 FUN_1001ebf4c(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*(char *)(*param_1 + 0x19) != '\0') {
    return 0;
  }
  lVar2 = param_1[1];
  if ((lVar2 == 0) || (bVar1 = *(byte *)(lVar2 + 0x18), (ulong)bVar1 == 0)) {
LAB_1001ec0e0:
    uVar4 = 1;
  }
  else {
    lVar9 = *(long *)(lVar2 + 0x10);
    FUN_1001ebf4c();
    if ((int)lVar2 != 0) {
      uVar7 = lVar9 + (ulong)bVar1;
      puVar5 = (undefined8 *)param_1[1];
      uVar6 = puVar5[2];
      if (uVar6 <= uVar7) {
        plVar10 = (long *)*param_1;
        uVar8 = plVar10[1] - uVar7;
        if (uVar7 <= (ulong)plVar10[1]) {
          if (*(char *)((long)puVar5 + 0x19) == '\0') {
            uVar11 = (uint)*(byte *)(puVar5 + 3);
          }
          else {
            if (0xfffffffe < uVar8) goto LAB_1001ec0c4;
            if (uVar8 >> 0x18 == 0) {
              if (uVar8 >> 0x10 != 0) {
                uVar12 = 0x83;
                lVar2 = 3;
                goto LAB_1001ec02c;
              }
              if (0xff < uVar8) {
                uVar12 = 0x82;
                lVar2 = 2;
                goto LAB_1001ec02c;
              }
              if (0x7f < uVar8) {
                uVar12 = 0x81;
                lVar2 = 1;
                goto LAB_1001ec02c;
              }
              lVar2 = 0;
              uVar7 = 0;
            }
            else {
              uVar12 = 0x84;
              lVar2 = 4;
LAB_1001ec02c:
              plVar3 = plVar10;
              FUN_1001ec148(plVar10,0,lVar2);
              if ((int)plVar3 == 0) goto LAB_1001ec0c4;
              plVar10[1] = plVar10[1] + lVar2;
              func_0x000107c610b8(*(long *)*param_1 + uVar7 + lVar2,*(long *)*param_1 + uVar7,uVar8)
              ;
              plVar10 = (long *)*param_1;
              puVar5 = (undefined8 *)param_1[1];
              uVar6 = puVar5[2];
              uVar7 = uVar8;
              uVar8 = uVar12;
            }
            lVar9 = *plVar10;
            puVar5[2] = uVar6 + 1;
            *(char *)(lVar9 + uVar6) = (char)uVar8;
            puVar5 = (undefined8 *)param_1[1];
            uVar11 = (uint)lVar2;
            *(char *)(puVar5 + 3) = (char)lVar2;
            uVar8 = uVar7;
          }
          if (uVar11 != 0) {
            uVar7 = (ulong)uVar11 - 1;
            do {
              *(char *)(*(long *)*param_1 + puVar5[2] + uVar7) = (char)uVar8;
              uVar8 = uVar8 >> 8;
              uVar7 = uVar7 - 1;
              puVar5 = (undefined8 *)param_1[1];
            } while (uVar7 < *(byte *)(puVar5 + 3));
          }
          if (uVar8 == 0) {
            *puVar5 = 0;
            param_1[1] = 0;
            goto LAB_1001ec0e0;
          }
        }
      }
    }
LAB_1001ec0c4:
    uVar4 = 0;
    *(undefined1 *)(*param_1 + 0x19) = 1;
  }
  return uVar4;
}



/* Entry: 1001ec108; end: 1001ec147;  */

void FUN_1001ec108(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lStack_38;
  
  plVar1 = param_1;
  FUN_1001ebf4c();
  if ((int)plVar1 == 0) {
    return;
  }
  lVar2 = *param_1;
  param_2 = param_2 & 0xffffffff;
  lVar3 = lVar2;
  FUN_1001ec148(lVar2,&lStack_38);
  if ((int)lVar3 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 2;
    uVar4 = 1;
    do {
      *(char *)(lStack_38 + uVar4) = (char)param_2;
      param_2 = param_2 >> 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 < 2);
    if (param_2 != 0) {
      *(undefined1 *)(lVar2 + 0x19) = 1;
    }
  }
  return;
}



/* Entry: 1001ec148; end: 1001ec25f;  */

undefined8 FUN_1001ec148(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  uVar1 = param_1[1] + param_3;
  if (!CARRY8(param_1[1],param_3)) {
    uVar3 = param_1[2];
    if (uVar1 <= uVar3) {
LAB_1001ec1c0:
      if (param_2 != (long *)0x0) {
        *param_2 = *param_1 + param_1[1];
      }
      return 1;
    }
    if ((char)param_1[3] != '\0') {
      uVar4 = uVar3 * 2;
      if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
        uVar4 = uVar1;
      }
      if (-1 < (long)uVar3) {
        uVar1 = uVar4;
      }
      lVar2 = *param_1;
      FUN_1001e43fc(lVar2,uVar1);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        param_1[2] = uVar1;
        goto LAB_1001ec1c0;
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x19) = 1;
  return 0;
}



/* Entry: 1001ec260; end: 1001ec3bf;  */

void FUN_1001ec260(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puStack_38;
  
  plVar2 = param_1;
  FUN_1001ebf4c();
  if ((int)plVar2 != 0) {
    lVar3 = *param_1;
    lVar1 = lVar3;
    FUN_1001ec148(lVar3,&puStack_38);
    if ((int)lVar1 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
      *puStack_38 = (char)(param_2 & 0xffffffff);
      if ((param_2 & 0xffffffff) >> 8 != 0) {
        *(undefined1 *)(lVar3 + 0x19) = 1;
      }
    }
    return;
  }
  return;
}



/* Entry: 1001ec3c0; end: 1001ec467;  */

void FUN_1001ec3c0(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_1001ebf4c();
  if ((int)plVar1 != 0) {
    lVar4 = *param_1;
    lVar5 = *(long *)(lVar4 + 8);
    uVar3 = (ulong)param_3;
    lVar2 = lVar4;
    FUN_1001ec148(lVar4,&uStack_48,uVar3);
    if ((int)lVar2 != 0) {
      *(ulong *)(lVar4 + 8) = *(long *)(lVar4 + 8) + uVar3;
      if (param_3 != 0) {
        func_0x000107c60ee4(uStack_48,uVar3);
      }
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      *param_2 = *param_1;
      param_1[1] = (long)param_2;
      param_2[2] = lVar5;
      *(char *)(param_2 + 3) = (char)param_3;
      *(undefined2 *)((long)param_2 + 0x19) = 0x100;
    }
  }
  return;
}



/* Entry: 1001ec468; end: 1001ec52f;  */

void FUN_1001ec468(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_168 [40];
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [40];
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_28;
  
  FUN_1001e47a4(param_2,0x20,&UNK_10e525a20);
  *(byte *)param_2 = (byte)*param_2 | 7;
  *(byte *)((long)param_2 + 0x1f) = *(byte *)((long)param_2 + 0x1f) & 0x3f | 0x80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_2[1];
  uStack_40 = param_2[2];
  uStack_50 = *param_2 & 0xfffffffffffffff8;
  uStack_38 = param_2[3] & 0x3fffffffffffffff | 0x4000000000000000;
  FUN_1001ec530(auStack_f0,&uStack_50);
  lStack_118 = lStack_c8 + lStack_a0;
  lStack_110 = lStack_c0 + lStack_98;
  lStack_108 = lStack_b8 + lStack_90;
  lStack_100 = lStack_b0 + lStack_88;
  lStack_f8 = lStack_a8 + lStack_80;
  lStack_140 = (lStack_a0 - lStack_c8) + 0xfffffffffffda;
  lStack_138 = (lStack_98 - lStack_c0) + 0xffffffffffffe;
  lStack_130 = (lStack_90 - lStack_b8) + 0xffffffffffffe;
  lStack_128 = (lStack_88 - lStack_b0) + 0xffffffffffffe;
  lStack_120 = (lStack_80 - lStack_a8) + 0xffffffffffffe;
  func_0x0001001ed36c(auStack_168,&lStack_140);
  puVar3 = auStack_168;
  FUN_1001ecd34(auStack_168,&lStack_118);
  puVar2 = auStack_168;
  FUN_1001ed590();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  lVar4 = 0;
  uVar1 = -((ulong)puVar3 & 0xffffffff);
  do {
    *(ulong *)(param_1 + lVar4) =
         *(ulong *)(puVar2 + lVar4) & uVar1 |
         *(ulong *)(param_1 + lVar4) & (uVar1 ^ 0xffffffffffffffff);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x28);
  lVar4 = 0;
  do {
    *(ulong *)(param_1 + 0x28 + lVar4) =
         *(ulong *)(puVar2 + lVar4 + 0x28) & uVar1 |
         *(ulong *)(param_1 + 0x28 + lVar4) & (uVar1 ^ 0xffffffffffffffff);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x28);
  lVar4 = 0;
  do {
    *(ulong *)(param_1 + 0x50 + lVar4) =
         *(ulong *)(puVar2 + lVar4 + 0x50) & uVar1 |
         *(ulong *)(param_1 + 0x50 + lVar4) & (uVar1 ^ 0xffffffffffffffff);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x28);
  return;
}



/* Entry: 1001ec530; end: 1001ec76b;  */

void FUN_1001ec530(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined8 uVar13;
  byte bVar20;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar21;
  byte bVar28;
  undefined1 auStack_398 [40];
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined1 auStack_320 [40];
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  long lStack_258;
  ulong uStack_250;
  undefined8 *puStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined1 auStack_228 [120];
  ulong auStack_1b0 [20];
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
  byte abStack_98 [63];
  char cStack_59;
  long lStack_58;
  
  lVar9 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    uVar21 = param_2[1];
    uVar13 = *param_2;
    bVar14 = (byte)((ulong)uVar13 >> 8);
    bVar15 = (byte)((ulong)uVar13 >> 0x10);
    bVar16 = (byte)((ulong)uVar13 >> 0x18);
    bVar17 = (byte)((ulong)uVar13 >> 0x20);
    bVar18 = (byte)((ulong)uVar13 >> 0x28);
    bVar19 = (byte)((ulong)uVar13 >> 0x30);
    bVar20 = (byte)((ulong)uVar13 >> 0x38);
    bVar22 = (byte)((ulong)uVar21 >> 8);
    bVar23 = (byte)((ulong)uVar21 >> 0x10);
    bVar24 = (byte)((ulong)uVar21 >> 0x18);
    bVar25 = (byte)((ulong)uVar21 >> 0x20);
    bVar26 = (byte)((ulong)uVar21 >> 0x28);
    bVar27 = (byte)((ulong)uVar21 >> 0x30);
    bVar28 = (byte)((ulong)uVar21 >> 0x38);
    abStack_98[lVar9] = (byte)uVar13 & 0xf;
    abStack_98[lVar9 + 1] = (byte)uVar13 >> 4;
    abStack_98[lVar9 + 2] = bVar14 & 0xf;
    abStack_98[lVar9 + 3] = bVar14 >> 4;
    abStack_98[lVar9 + 4] = bVar15 & 0xf;
    abStack_98[lVar9 + 5] = bVar15 >> 4;
    abStack_98[lVar9 + 6] = bVar16 & 0xf;
    abStack_98[lVar9 + 7] = bVar16 >> 4;
    abStack_98[lVar9 + 8] = bVar17 & 0xf;
    abStack_98[lVar9 + 9] = bVar17 >> 4;
    abStack_98[lVar9 + 10] = bVar18 & 0xf;
    abStack_98[lVar9 + 0xb] = bVar18 >> 4;
    abStack_98[lVar9 + 0xc] = bVar19 & 0xf;
    abStack_98[lVar9 + 0xd] = bVar19 >> 4;
    abStack_98[lVar9 + 0xe] = bVar20 & 0xf;
    abStack_98[lVar9 + 0xf] = bVar20 >> 4;
    abStack_98[lVar9 + 0x10] = (byte)uVar21 & 0xf;
    abStack_98[lVar9 + 0x11] = (byte)uVar21 >> 4;
    abStack_98[lVar9 + 0x12] = bVar22 & 0xf;
    abStack_98[lVar9 + 0x13] = bVar22 >> 4;
    abStack_98[lVar9 + 0x14] = bVar23 & 0xf;
    abStack_98[lVar9 + 0x15] = bVar23 >> 4;
    abStack_98[lVar9 + 0x16] = bVar24 & 0xf;
    abStack_98[lVar9 + 0x17] = bVar24 >> 4;
    abStack_98[lVar9 + 0x18] = bVar25 & 0xf;
    abStack_98[lVar9 + 0x19] = bVar25 >> 4;
    abStack_98[lVar9 + 0x1a] = bVar26 & 0xf;
    abStack_98[lVar9 + 0x1b] = bVar26 >> 4;
    abStack_98[lVar9 + 0x1c] = bVar27 & 0xf;
    abStack_98[lVar9 + 0x1d] = bVar27 >> 4;
    abStack_98[lVar9 + 0x1e] = bVar28 & 0xf;
    abStack_98[lVar9 + 0x1f] = bVar28 >> 4;
    lVar9 = lVar9 + 0x20;
    param_2 = param_2 + 2;
  } while (lVar9 != 0x40);
  lVar9 = 0;
  iVar8 = 0;
  do {
    iVar2 = (uint)abStack_98[lVar9] + iVar8;
    iVar1 = iVar2 + 8;
    iVar8 = iVar1 * 0x1000000 >> 0x1c;
    bVar14 = (byte)iVar1;
    abStack_98[lVar9] = (char)iVar2 - (bVar14 & 0xf0);
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x3f);
  iVar8 = 0;
  cStack_59 = cStack_59 + ((char)bVar14 >> 4);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  puVar4 = param_1 + 5;
  param_1[6] = 0;
  *puVar4 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  uVar12 = 1;
  *puVar4 = 1;
  puVar11 = param_1 + 10;
  param_1[0xb] = 0;
  *puVar11 = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *puVar11 = 1;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  do {
    FUN_1001ec91c(auStack_228,iVar8,(long)(char)abStack_98[uVar12]);
    FUN_1001ecb8c(auStack_1b0,param_1,auStack_228);
    FUN_1001ecf44(param_1,auStack_1b0);
    iVar8 = iVar8 + 1;
    bVar3 = uVar12 < 0x3e;
    uVar12 = uVar12 + 2;
  } while (bVar3);
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_f0 = param_1[4];
  uStack_e0 = param_1[6];
  uStack_e8 = *puVar4;
  uStack_d0 = param_1[8];
  uStack_d8 = param_1[7];
  uStack_c8 = param_1[9];
  uStack_b8 = param_1[0xb];
  uStack_c0 = *puVar11;
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_a0 = param_1[0xe];
  FUN_1001ed110(auStack_1b0,&uStack_110);
  FUN_1001ed328(&uStack_110,auStack_1b0);
  FUN_1001ed110(auStack_1b0,&uStack_110);
  FUN_1001ed328(&uStack_110,auStack_1b0);
  FUN_1001ed110(auStack_1b0,&uStack_110);
  FUN_1001ed328(&uStack_110,auStack_1b0);
  FUN_1001ed110(auStack_1b0,&uStack_110);
  FUN_1001ecf44(param_1,auStack_1b0);
  uVar10 = 0;
  uVar12 = 0;
  do {
    FUN_1001ec91c(auStack_228,uVar10,(long)(char)abStack_98[uVar12]);
    FUN_1001ecb8c(auStack_1b0,param_1,auStack_228);
    puVar5 = auStack_1b0;
    puVar4 = param_1;
    FUN_1001ecf44();
    uVar10 = (ulong)((int)uVar10 + 1);
    bVar3 = uVar12 < 0x3e;
    uVar12 = uVar12 + 2;
  } while (bVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  pcStack_238 = FUN_1001ec76c;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_278 = puVar5[1];
  uStack_270 = puVar5[2];
  uStack_280 = *puVar5 & 0xfffffffffffffff8;
  uStack_268 = puVar5[3] & 0x3fffffffffffffff | 0x4000000000000000;
  uStack_250 = uVar10;
  puStack_248 = param_1;
  puStack_240 = &stack0xfffffffffffffff0;
  FUN_1001ec530(auStack_320,&uStack_280);
  lStack_348 = lStack_2f8 + lStack_2d0;
  lStack_340 = lStack_2f0 + lStack_2c8;
  lStack_338 = lStack_2e8 + lStack_2c0;
  lStack_330 = lStack_2e0 + lStack_2b8;
  lStack_328 = lStack_2d8 + lStack_2b0;
  lStack_370 = (lStack_2d0 - lStack_2f8) + 0xfffffffffffda;
  lStack_368 = (lStack_2c8 - lStack_2f0) + 0xffffffffffffe;
  lStack_360 = (lStack_2c0 - lStack_2e8) + 0xffffffffffffe;
  lStack_358 = (lStack_2b8 - lStack_2e0) + 0xffffffffffffe;
  lStack_350 = (lStack_2b0 - lStack_2d8) + 0xffffffffffffe;
  func_0x0001001ed36c(auStack_398,&lStack_370);
  puVar7 = auStack_398;
  FUN_1001ecd34(auStack_398,&lStack_348);
  puVar6 = auStack_398;
  FUN_1001ed590();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  func_0x000107c60e78();
  lVar9 = 0;
  uVar12 = -((ulong)puVar7 & 0xffffffff);
  do {
    *(ulong *)((long)puVar4 + lVar9) =
         *(ulong *)(puVar6 + lVar9) & uVar12 |
         *(ulong *)((long)puVar4 + lVar9) & (uVar12 ^ 0xffffffffffffffff);
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x28);
  lVar9 = 0;
  do {
    *(ulong *)((long)puVar4 + lVar9 + 0x28) =
         *(ulong *)(puVar6 + lVar9 + 0x28) & uVar12 |
         *(ulong *)((long)puVar4 + lVar9 + 0x28) & (uVar12 ^ 0xffffffffffffffff);
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x28);
  lVar9 = 0;
  do {
    *(ulong *)((long)puVar4 + lVar9 + 0x50) =
         *(ulong *)(puVar6 + lVar9 + 0x50) & uVar12 |
         *(ulong *)((long)puVar4 + lVar9 + 0x50) & (uVar12 ^ 0xffffffffffffffff);
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x28);
  return;
}



/* Entry: 1001ec76c; end: 1001ec88b;  */

void FUN_1001ec76c(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_168 [40];
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [40];
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_2[1];
  uStack_40 = param_2[2];
  uStack_50 = *param_2 & 0xfffffffffffffff8;
  uStack_38 = param_2[3] & 0x3fffffffffffffff | 0x4000000000000000;
  FUN_1001ec530(auStack_f0,&uStack_50);
  lStack_118 = lStack_c8 + lStack_a0;
  lStack_110 = lStack_c0 + lStack_98;
  lStack_108 = lStack_b8 + lStack_90;
  lStack_100 = lStack_b0 + lStack_88;
  lStack_f8 = lStack_a8 + lStack_80;
  lStack_140 = (lStack_a0 - lStack_c8) + 0xfffffffffffda;
  lStack_138 = (lStack_98 - lStack_c0) + 0xffffffffffffe;
  lStack_130 = (lStack_90 - lStack_b8) + 0xffffffffffffe;
  lStack_128 = (lStack_88 - lStack_b0) + 0xffffffffffffe;
  lStack_120 = (lStack_80 - lStack_a8) + 0xffffffffffffe;
  func_0x0001001ed36c(auStack_168,&lStack_140);
  puVar3 = auStack_168;
  FUN_1001ecd34(auStack_168,&lStack_118);
  puVar2 = auStack_168;
  FUN_1001ed590();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  lVar4 = 0;
  uVar1 = -((ulong)puVar3 & 0xffffffff);
  do {
    *(ulong *)(param_1 + lVar4) =
         *(ulong *)(puVar2 + lVar4) & uVar1 |
         *(ulong *)(param_1 + lVar4) & (uVar1 ^ 0xffffffffffffffff);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x28);
  lVar4 = 0;
  do {
    *(ulong *)(param_1 + 0x28 + lVar4) =
         *(ulong *)(puVar2 + lVar4 + 0x28) & uVar1 |
         *(ulong *)(param_1 + 0x28 + lVar4) & (uVar1 ^ 0xffffffffffffffff);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x28);
  lVar4 = 0;
  do {
    *(ulong *)(param_1 + 0x50 + lVar4) =
         *(ulong *)(puVar2 + lVar4 + 0x50) & uVar1 |
         *(ulong *)(param_1 + 0x50 + lVar4) & (uVar1 ^ 0xffffffffffffffff);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x28);
  return;
}



/* Entry: 1001ec88c; end: 1001ec91b;  */

void FUN_1001ec88c(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  uVar1 = -(ulong)param_3;
  do {
    *(ulong *)(param_1 + lVar2) =
         *(ulong *)(param_2 + lVar2) & uVar1 |
         *(ulong *)(param_1 + lVar2) & (uVar1 ^ 0xffffffffffffffff);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x28);
  lVar2 = 0;
  do {
    *(ulong *)(param_1 + 0x28 + lVar2) =
         *(ulong *)(param_2 + 0x28 + lVar2) & uVar1 |
         *(ulong *)(param_1 + 0x28 + lVar2) & (uVar1 ^ 0xffffffffffffffff);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x28);
  lVar2 = 0;
  do {
    *(ulong *)(param_1 + 0x50 + lVar2) =
         *(ulong *)(param_2 + 0x50 + lVar2) & uVar1 |
         *(ulong *)(param_1 + 0x50 + lVar2) & (uVar1 ^ 0xffffffffffffffff);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x28);
  return;
}



/* Entry: 1001ec91c; end: 1001ecaeb;  */

void FUN_1001ec91c(undefined8 *param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
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
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  uVar2 = param_3 + (param_3 & (int)param_3 >> 0x1f) * -2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  lVar1 = (long)param_2 * 0x3c0;
  FUN_1001ec88c(param_1,&UNK_10e518368 + lVar1,((uVar2 ^ 1) & 0xff) - 1 >> 0x1f);
  FUN_1001ec88c(param_1,&UNK_10e5183e0 + lVar1,((uVar2 ^ 2) & 0xff) - 1 >> 0x1f);
  FUN_1001ec88c(param_1,&UNK_10e518458 + lVar1,((uVar2 ^ 3) & 0xff) - 1 >> 0x1f);
  FUN_1001ec88c(param_1,&UNK_10e5184d0 + lVar1,((uVar2 ^ 4) & 0xff) - 1 >> 0x1f);
  FUN_1001ec88c(param_1,&UNK_10e518548 + lVar1,((uVar2 ^ 5) & 0xff) - 1 >> 0x1f);
  FUN_1001ec88c(param_1,&UNK_10e5185c0 + lVar1,((uVar2 ^ 6) & 0xff) - 1 >> 0x1f);
  FUN_1001ec88c(param_1,&UNK_10e518638 + lVar1,((uVar2 ^ 7) & 0xff) - 1 >> 0x1f);
  FUN_1001ec88c(param_1,&UNK_10e5186b0 + lVar1,((uVar2 ^ 8) & 0xff) - 1 >> 0x1f);
  uStack_b8 = param_1[6];
  uStack_c0 = param_1[5];
  uStack_a8 = param_1[8];
  uStack_b0 = param_1[7];
  uStack_a0 = param_1[9];
  uStack_90 = param_1[1];
  uStack_98 = *param_1;
  uStack_80 = param_1[3];
  uStack_88 = param_1[2];
  uStack_78 = param_1[4];
  FUN_1001ecaec(&lStack_f0,param_1 + 10);
  lStack_50 = 0xffffffffffffe - lStack_d0;
  lStack_70 = 0xfffffffffffda - lStack_f0;
  lStack_68 = 0xffffffffffffe - lStack_e8;
  lStack_60 = 0xffffffffffffe - lStack_e0;
  lStack_58 = 0xffffffffffffe - lStack_d8;
  FUN_1001ec88c(param_1,&uStack_c0,param_3 >> 7 & 1);
  return;
}



/* Entry: 1001ecaec; end: 1001ecb8b;  */

void FUN_1001ecaec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_2[1] + (*param_2 >> 0x33);
  uVar2 = param_2[2] + (uVar1 >> 0x33);
  uVar3 = param_2[3] + (uVar2 >> 0x33);
  uVar4 = param_2[4] + (uVar3 >> 0x33);
  uVar5 = (*param_2 & 0x7ffffffffffff) + (uVar4 >> 0x33) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar5 >> 0x33);
  *param_1 = uVar5 & 0x7ffffffffffff;
  param_1[1] = uVar1 & 0x7ffffffffffff;
  param_1[2] = (uVar2 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[3] = uVar3 & 0x7ffffffffffff;
  param_1[4] = uVar4 & 0x7ffffffffffff;
  return;
}



/* Entry: 1001ecb8c; end: 1001ecd33;  */

void FUN_1001ecb8c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2[9];
  lVar2 = param_2[4];
  lVar4 = param_2[5];
  lVar5 = *param_2;
  lVar9 = param_2[3];
  lVar8 = param_2[2];
  lVar7 = param_2[8];
  lVar6 = param_2[7];
  param_1[1] = param_2[1] + param_2[6];
  *param_1 = lVar5 + lVar4;
  param_1[3] = lVar9 + lVar7;
  param_1[2] = lVar8 + lVar6;
  param_1[4] = lVar2 + lVar1;
  func_0x0001001ecb48(param_1 + 5,param_2 + 5,param_2);
  FUN_1001ecd34(&lStack_80,param_1,param_3);
  FUN_1001ecd34(&lStack_58,param_1 + 5,param_3 + 0x28);
  FUN_1001ecd34(&lStack_a8,param_3 + 0x50,param_2 + 0xf);
  lVar1 = param_2[0xe];
  lVar2 = param_2[10];
  lVar5 = param_2[0xd];
  lVar4 = param_2[0xc];
  plVar3 = param_1 + 0xf;
  param_1[0x10] = param_2[0xb] * 2;
  *plVar3 = lVar2 * 2;
  param_1[0x12] = lVar5 * 2;
  param_1[0x11] = lVar4 * 2;
  param_1[0x13] = lVar1 << 1;
  *param_1 = (lStack_80 + 0xfffffffffffda) - lStack_58;
  param_1[1] = (lStack_78 - lStack_50) + 0xffffffffffffe;
  param_1[2] = (lStack_70 - lStack_48) + 0xffffffffffffe;
  param_1[3] = (lStack_68 - lStack_40) + 0xffffffffffffe;
  param_1[4] = (lStack_60 - lStack_38) + 0xffffffffffffe;
  param_1[5] = lStack_58 + lStack_80;
  param_1[6] = lStack_50 + lStack_78;
  param_1[7] = lStack_48 + lStack_70;
  param_1[8] = lStack_40 + lStack_68;
  param_1[9] = lStack_38 + lStack_60;
  func_0x0001001ecaec(&lStack_80,plVar3);
  param_1[10] = lStack_a8 + lStack_80;
  param_1[0xb] = lStack_a0 + lStack_78;
  param_1[0xc] = lStack_98 + lStack_70;
  param_1[0xd] = lStack_90 + lStack_68;
  param_1[0xe] = lStack_88 + lStack_60;
  *plVar3 = (lStack_80 + 0xfffffffffffda) - lStack_a8;
  param_1[0x10] = (lStack_78 - lStack_a0) + 0xffffffffffffe;
  param_1[0x11] = (lStack_70 - lStack_98) + 0xffffffffffffe;
  param_1[0x12] = (lStack_68 - lStack_90) + 0xffffffffffffe;
  param_1[0x13] = (lStack_60 - lStack_88) + 0xffffffffffffe;
  return;
}



/* Entry: 1001ecd34; end: 1001ecf43;  */

void FUN_1001ecd34(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
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
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  long lVar67;
  long lVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  
  uVar5 = param_3[3];
  uVar9 = param_3[4];
  uVar73 = uVar9 * 0x13;
  uVar6 = param_2[3];
  uVar10 = param_2[4];
  uVar7 = param_3[1];
  uVar11 = param_3[2];
  uVar63 = uVar5 * 0x13;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar63;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar10;
  uVar66 = uVar11 * 0x13;
  uVar72 = *param_3;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar7 * 0x13;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar10;
  uVar65 = uVar7 * 0x13 * uVar10;
  uVar74 = param_2[2];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar6;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar66;
  uVar1 = uVar6 * uVar66 + uVar65;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar74;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar63;
  uVar64 = uVar1 + uVar74 * uVar63;
  uVar8 = *param_2;
  uVar12 = param_2[1];
  uVar69 = uVar64 + uVar12 * uVar73;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar12;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar73;
  uVar70 = uVar69 + uVar8 * uVar72;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar8;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar72;
  uVar75 = uVar6 * uVar73 + uVar63 * uVar10;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar6;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar73;
  uVar71 = uVar6 * uVar63 + uVar66 * uVar10;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar66;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar10;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar63;
  uVar2 = uVar71 + uVar74 * uVar73;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar74;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar73;
  uVar3 = uVar2 + uVar72 * uVar12;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar72;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar12;
  uVar4 = uVar3 + uVar8 * uVar7;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar7;
  lVar68 = SUB168(auVar21 * auVar46,8) + SUB168(auVar20 * auVar45,8) +
           (ulong)CARRY8(uVar6 * uVar63,uVar66 * uVar10) + SUB168(auVar22 * auVar47,8) +
           (ulong)CARRY8(uVar71,uVar74 * uVar73) + SUB168(auVar23 * auVar48,8) +
           (ulong)CARRY8(uVar2,uVar72 * uVar12) + SUB168(auVar24 * auVar49,8) +
           (ulong)CARRY8(uVar3,uVar8 * uVar7);
  uVar64 = uVar70 >> 0x33 |
           (SUB168(auVar15 * auVar40,8) + SUB168(auVar14 * auVar39,8) +
            (ulong)CARRY8(uVar6 * uVar66,uVar65) + SUB168(auVar16 * auVar41,8) +
            (ulong)CARRY8(uVar1,uVar74 * uVar63) + SUB168(auVar17 * auVar42,8) +
            (ulong)CARRY8(uVar64,uVar12 * uVar73) + SUB168(auVar18 * auVar43,8) +
           (ulong)CARRY8(uVar69,uVar8 * uVar72)) * 0x2000;
  uVar1 = uVar4 + uVar64;
  if (CARRY8(uVar4,uVar64)) {
    lVar68 = lVar68 + 1;
  }
  uVar64 = uVar75 + uVar12 * uVar7;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar12;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar7;
  uVar69 = uVar64 + uVar72 * uVar74;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar72;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar74;
  uVar71 = uVar69 + uVar8 * uVar11;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar8;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar11;
  lVar67 = SUB168(auVar19 * auVar44,8) + SUB168(auVar13 * auVar38,8) +
           (ulong)CARRY8(uVar6 * uVar73,uVar63 * uVar10) + SUB168(auVar25 * auVar50,8) +
           (ulong)CARRY8(uVar75,uVar12 * uVar7) + SUB168(auVar26 * auVar51,8) +
           (ulong)CARRY8(uVar64,uVar72 * uVar74) + SUB168(auVar27 * auVar52,8) +
           (ulong)CARRY8(uVar69,uVar8 * uVar11);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar73;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = uVar10;
  uVar69 = uVar1 >> 0x33 | lVar68 << 0xd;
  uVar64 = uVar71 + uVar69;
  if (CARRY8(uVar71,uVar69)) {
    lVar67 = lVar67 + 1;
  }
  uVar69 = uVar74 * uVar7 + uVar73 * uVar10;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar74;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar7;
  uVar75 = uVar69 + uVar12 * uVar11;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar12;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar11;
  uVar71 = uVar75 + uVar72 * uVar6;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar72;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = uVar6;
  uVar2 = uVar71 + uVar8 * uVar5;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar8;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar5;
  lVar68 = SUB168(auVar29 * auVar54,8) + SUB168(auVar28 * auVar53,8) +
           (ulong)CARRY8(uVar74 * uVar7,uVar73 * uVar10) + SUB168(auVar30 * auVar55,8) +
           (ulong)CARRY8(uVar69,uVar12 * uVar11) + SUB168(auVar31 * auVar56,8) +
           (ulong)CARRY8(uVar75,uVar72 * uVar6) + SUB168(auVar32 * auVar57,8) +
           (ulong)CARRY8(uVar71,uVar8 * uVar5);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar6;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar7;
  uVar75 = uVar64 >> 0x33 | lVar67 << 0xd;
  uVar69 = uVar2 + uVar75;
  if (CARRY8(uVar2,uVar75)) {
    lVar68 = lVar68 + 1;
  }
  uVar75 = uVar74 * uVar11 + uVar6 * uVar7;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar74;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = uVar11;
  uVar71 = uVar75 + uVar12 * uVar5;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar12;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar5;
  uVar2 = uVar71 + uVar72 * uVar10;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar72;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = uVar10;
  uVar3 = uVar2 + uVar8 * uVar9;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar8;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = uVar9;
  lVar67 = SUB168(auVar34 * auVar59,8) + SUB168(auVar33 * auVar58,8) +
           (ulong)CARRY8(uVar74 * uVar11,uVar6 * uVar7) + SUB168(auVar35 * auVar60,8) +
           (ulong)CARRY8(uVar75,uVar12 * uVar5) + SUB168(auVar36 * auVar61,8) +
           (ulong)CARRY8(uVar71,uVar72 * uVar10) + SUB168(auVar37 * auVar62,8) +
           (ulong)CARRY8(uVar2,uVar8 * uVar9);
  uVar71 = uVar69 >> 0x33 | lVar68 << 0xd;
  uVar75 = uVar3 + uVar71;
  if (CARRY8(uVar3,uVar71)) {
    lVar67 = lVar67 + 1;
  }
  uVar70 = (uVar70 & 0x7ffffffffffff) + (uVar75 >> 0x33 | lVar67 << 0xd) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar70 >> 0x33);
  *param_1 = uVar70 & 0x7ffffffffffff;
  param_1[1] = uVar1 & 0x7ffffffffffff;
  param_1[2] = (uVar64 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[3] = uVar69 & 0x7ffffffffffff;
  param_1[4] = uVar75 & 0x7ffffffffffff;
  return;
}



/* Entry: 1001ecf44; end: 1001ecf97;  */

void FUN_1001ecf44(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
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
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  long lVar67;
  long lVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  
  FUN_1001ecd34(param_1,param_2,param_2 + 0xf);
  FUN_1001ecd34(param_1 + 0x28,param_2 + 5,param_2 + 10);
  FUN_1001ecd34(param_1 + 0x50,param_2 + 10,param_2 + 0xf);
  uVar5 = param_2[8];
  uVar9 = param_2[9];
  uVar73 = uVar9 * 0x13;
  uVar6 = param_2[3];
  uVar10 = param_2[4];
  uVar7 = param_2[6];
  uVar11 = param_2[7];
  uVar63 = uVar5 * 0x13;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar63;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar10;
  uVar66 = uVar11 * 0x13;
  uVar72 = param_2[5];
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar7 * 0x13;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar10;
  uVar65 = uVar7 * 0x13 * uVar10;
  uVar74 = param_2[2];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar6;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar66;
  uVar1 = uVar6 * uVar66 + uVar65;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar74;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar63;
  uVar64 = uVar1 + uVar74 * uVar63;
  uVar8 = *param_2;
  uVar12 = param_2[1];
  uVar69 = uVar64 + uVar12 * uVar73;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar12;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar73;
  uVar70 = uVar69 + uVar8 * uVar72;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar8;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar72;
  uVar75 = uVar6 * uVar73 + uVar63 * uVar10;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar6;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar73;
  uVar71 = uVar6 * uVar63 + uVar66 * uVar10;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar66;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar10;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar63;
  uVar2 = uVar71 + uVar74 * uVar73;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar74;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar73;
  uVar3 = uVar2 + uVar72 * uVar12;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar72;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar12;
  uVar4 = uVar3 + uVar8 * uVar7;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar7;
  lVar68 = SUB168(auVar21 * auVar46,8) + SUB168(auVar20 * auVar45,8) +
           (ulong)CARRY8(uVar6 * uVar63,uVar66 * uVar10) + SUB168(auVar22 * auVar47,8) +
           (ulong)CARRY8(uVar71,uVar74 * uVar73) + SUB168(auVar23 * auVar48,8) +
           (ulong)CARRY8(uVar2,uVar72 * uVar12) + SUB168(auVar24 * auVar49,8) +
           (ulong)CARRY8(uVar3,uVar8 * uVar7);
  uVar64 = uVar70 >> 0x33 |
           (SUB168(auVar15 * auVar40,8) + SUB168(auVar14 * auVar39,8) +
            (ulong)CARRY8(uVar6 * uVar66,uVar65) + SUB168(auVar16 * auVar41,8) +
            (ulong)CARRY8(uVar1,uVar74 * uVar63) + SUB168(auVar17 * auVar42,8) +
            (ulong)CARRY8(uVar64,uVar12 * uVar73) + SUB168(auVar18 * auVar43,8) +
           (ulong)CARRY8(uVar69,uVar8 * uVar72)) * 0x2000;
  uVar1 = uVar4 + uVar64;
  if (CARRY8(uVar4,uVar64)) {
    lVar68 = lVar68 + 1;
  }
  uVar64 = uVar75 + uVar12 * uVar7;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar12;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar7;
  uVar69 = uVar64 + uVar72 * uVar74;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar72;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar74;
  uVar71 = uVar69 + uVar8 * uVar11;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar8;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar11;
  lVar67 = SUB168(auVar19 * auVar44,8) + SUB168(auVar13 * auVar38,8) +
           (ulong)CARRY8(uVar6 * uVar73,uVar63 * uVar10) + SUB168(auVar25 * auVar50,8) +
           (ulong)CARRY8(uVar75,uVar12 * uVar7) + SUB168(auVar26 * auVar51,8) +
           (ulong)CARRY8(uVar64,uVar72 * uVar74) + SUB168(auVar27 * auVar52,8) +
           (ulong)CARRY8(uVar69,uVar8 * uVar11);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar73;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = uVar10;
  uVar69 = uVar1 >> 0x33 | lVar68 << 0xd;
  uVar64 = uVar71 + uVar69;
  if (CARRY8(uVar71,uVar69)) {
    lVar67 = lVar67 + 1;
  }
  uVar69 = uVar74 * uVar7 + uVar73 * uVar10;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar74;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar7;
  uVar75 = uVar69 + uVar12 * uVar11;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar12;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar11;
  uVar71 = uVar75 + uVar72 * uVar6;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar72;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = uVar6;
  uVar2 = uVar71 + uVar8 * uVar5;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar8;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar5;
  lVar68 = SUB168(auVar29 * auVar54,8) + SUB168(auVar28 * auVar53,8) +
           (ulong)CARRY8(uVar74 * uVar7,uVar73 * uVar10) + SUB168(auVar30 * auVar55,8) +
           (ulong)CARRY8(uVar69,uVar12 * uVar11) + SUB168(auVar31 * auVar56,8) +
           (ulong)CARRY8(uVar75,uVar72 * uVar6) + SUB168(auVar32 * auVar57,8) +
           (ulong)CARRY8(uVar71,uVar8 * uVar5);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar6;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar7;
  uVar75 = uVar64 >> 0x33 | lVar67 << 0xd;
  uVar69 = uVar2 + uVar75;
  if (CARRY8(uVar2,uVar75)) {
    lVar68 = lVar68 + 1;
  }
  uVar75 = uVar74 * uVar11 + uVar6 * uVar7;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar74;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = uVar11;
  uVar71 = uVar75 + uVar12 * uVar5;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar12;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar5;
  uVar2 = uVar71 + uVar72 * uVar10;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar72;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = uVar10;
  uVar3 = uVar2 + uVar8 * uVar9;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar8;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = uVar9;
  lVar67 = SUB168(auVar34 * auVar59,8) + SUB168(auVar33 * auVar58,8) +
           (ulong)CARRY8(uVar74 * uVar11,uVar6 * uVar7) + SUB168(auVar35 * auVar60,8) +
           (ulong)CARRY8(uVar75,uVar12 * uVar5) + SUB168(auVar36 * auVar61,8) +
           (ulong)CARRY8(uVar71,uVar72 * uVar10) + SUB168(auVar37 * auVar62,8) +
           (ulong)CARRY8(uVar2,uVar8 * uVar9);
  uVar71 = uVar69 >> 0x33 | lVar68 << 0xd;
  uVar75 = uVar3 + uVar71;
  if (CARRY8(uVar3,uVar71)) {
    lVar67 = lVar67 + 1;
  }
  uVar70 = (uVar70 & 0x7ffffffffffff) + (uVar75 >> 0x33 | lVar67 << 0xd) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar70 >> 0x33);
  *(ulong *)(param_1 + 0x78) = uVar70 & 0x7ffffffffffff;
  *(ulong *)(param_1 + 0x80) = uVar1 & 0x7ffffffffffff;
  *(ulong *)(param_1 + 0x88) = (uVar64 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  *(ulong *)(param_1 + 0x90) = uVar69 & 0x7ffffffffffff;
  *(ulong *)(param_1 + 0x98) = uVar75 & 0x7ffffffffffff;
  return;
}



/* Entry: 1001ecf98; end: 1001ed10f;  */

void FUN_1001ecf98(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
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
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  long lVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  
  uVar48 = param_2[3];
  uVar3 = param_2[4];
  uVar45 = uVar3 * 0x26;
  uVar49 = param_2[2];
  uVar43 = uVar48 * 2;
  uVar40 = uVar49 * 2;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar3 * 0x13;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar3;
  uVar44 = uVar3 * 0x13 * uVar3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar48;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar45;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar48 * 0x13;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar48;
  uVar46 = uVar48 * 0x13 * uVar48;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar49;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar45;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar49;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar48 * 0x26;
  uVar35 = uVar49 * uVar48 * 0x26;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar49;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar49;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar4;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar45;
  uVar1 = uVar4 * uVar45 + uVar35;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar4;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar43;
  uVar38 = uVar1 + uVar2 * uVar2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar2;
  uVar50 = uVar4 * uVar43 + uVar49 * uVar49;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar3 * 2;
  uVar42 = uVar2 * uVar3 * 2;
  uVar3 = uVar50 + uVar42;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar2;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar43;
  lVar36 = SUB168(auVar12 * auVar27,8) + SUB168(auVar10 * auVar25,8) +
           (ulong)CARRY8(uVar4 * uVar43,uVar49 * uVar49) + SUB168(auVar14 * auVar29,8) +
           (ulong)CARRY8(uVar50,uVar42);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar2;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar40;
  uVar50 = uVar4 * uVar40 + uVar44;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar4 * 2;
  uVar37 = uVar2 * uVar4 * 2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar4;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar40;
  uVar42 = uVar50 + uVar2 * uVar43;
  lVar41 = SUB168(auVar18 * auVar33,8) + SUB168(auVar5 * auVar20,8) +
           (ulong)CARRY8(uVar4 * uVar40,uVar44) + SUB168(auVar15 * auVar30,8) +
           (ulong)CARRY8(uVar50,uVar2 * uVar43);
  uVar50 = uVar4 * uVar4 + uVar48 * uVar45;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar4;
  uVar43 = uVar50 + uVar2 * uVar40;
  lVar39 = SUB168(auVar19 * auVar34,8) + SUB168(auVar6 * auVar21,8) +
           (ulong)CARRY8(uVar4 * uVar4,uVar48 * uVar45) + SUB168(auVar16 * auVar31,8) +
           (ulong)CARRY8(uVar50,uVar2 * uVar40);
  uVar50 = uVar49 * uVar45 + uVar46;
  uVar48 = uVar50 + uVar37;
  lVar47 = SUB168(auVar8 * auVar23,8) + SUB168(auVar7 * auVar22,8) +
           (ulong)CARRY8(uVar49 * uVar45,uVar46) + SUB168(auVar17 * auVar32,8) +
           (ulong)CARRY8(uVar50,uVar37);
  uVar50 = uVar38 >> 0x33 |
           (SUB168(auVar11 * auVar26,8) + SUB168(auVar9 * auVar24,8) +
            (ulong)CARRY8(uVar4 * uVar45,uVar35) + SUB168(auVar13 * auVar28,8) +
           (ulong)CARRY8(uVar1,uVar2 * uVar2)) * 0x2000;
  uVar1 = uVar48 + uVar50;
  if (CARRY8(uVar48,uVar50)) {
    lVar47 = lVar47 + 1;
  }
  uVar48 = uVar1 >> 0x33 | lVar47 << 0xd;
  uVar50 = uVar43 + uVar48;
  if (CARRY8(uVar43,uVar48)) {
    lVar39 = lVar39 + 1;
  }
  uVar48 = uVar50 >> 0x33 | lVar39 << 0xd;
  uVar43 = uVar42 + uVar48;
  if (CARRY8(uVar42,uVar48)) {
    lVar41 = lVar41 + 1;
  }
  uVar48 = uVar43 >> 0x33 | lVar41 << 0xd;
  uVar42 = uVar3 + uVar48;
  if (CARRY8(uVar3,uVar48)) {
    lVar36 = lVar36 + 1;
  }
  uVar38 = (uVar38 & 0x7ffffffffffff) + (uVar42 >> 0x33 | lVar36 << 0xd) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar38 >> 0x33);
  *param_1 = uVar38 & 0x7ffffffffffff;
  param_1[1] = uVar1 & 0x7ffffffffffff;
  param_1[2] = (uVar50 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[3] = uVar43 & 0x7ffffffffffff;
  param_1[4] = uVar42 & 0x7ffffffffffff;
  return;
}



/* Entry: 1001ed110; end: 1001ed327;  */

void FUN_1001ed110(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  FUN_1001ecf98(&lStack_90);
  FUN_1001ecf98(&lStack_c0,param_2 + 5);
  FUN_1001ecf98(&uStack_e8,param_2 + 10);
  uVar1 = (uStack_e8 >> 0x32 & 0x1fff) + lStack_e0 * 2;
  uVar2 = (uVar1 >> 0x33) + lStack_d8 * 2;
  uVar3 = (uVar2 >> 0x33) + lStack_d0 * 2;
  uVar4 = (uVar3 >> 0x33) + lStack_c8 * 2;
  uVar5 = (uStack_e8 & 0x3ffffffffffff) * 2 + (uVar4 >> 0x33) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar5 >> 0x33);
  lVar6 = param_2[4];
  lVar7 = param_2[9];
  lVar9 = param_2[5];
  lVar10 = *param_2;
  lVar14 = param_2[3];
  lVar13 = param_2[2];
  lVar12 = param_2[8];
  lVar11 = param_2[7];
  plVar8 = param_1 + 5;
  param_1[6] = param_2[6] + param_2[1];
  *plVar8 = lVar9 + lVar10;
  param_1[8] = lVar12 + lVar14;
  param_1[7] = lVar11 + lVar13;
  param_1[9] = lVar7 + lVar6;
  FUN_1001ecf98(&lStack_110,plVar8);
  *plVar8 = lStack_90 + lStack_c0;
  param_1[6] = lStack_88 + lStack_b8;
  param_1[7] = lStack_80 + lStack_b0;
  param_1[8] = lStack_78 + lStack_a8;
  param_1[9] = lStack_70 + lStack_a0;
  param_1[10] = (lStack_c0 + 0xfffffffffffda) - lStack_90;
  param_1[0xb] = (lStack_b8 - lStack_88) + 0xffffffffffffe;
  param_1[0xc] = (lStack_b0 - lStack_80) + 0xffffffffffffe;
  param_1[0xd] = (lStack_a8 - lStack_78) + 0xffffffffffffe;
  param_1[0xe] = (lStack_a0 - lStack_70) + 0xffffffffffffe;
  FUN_1001ecaec(&lStack_c0,plVar8);
  param_1[1] = (lStack_108 - lStack_b8) + 0xffffffffffffe;
  *param_1 = (lStack_110 - lStack_c0) + 0xfffffffffffda;
  param_1[3] = (lStack_f8 - lStack_a8) + 0xffffffffffffe;
  param_1[2] = (lStack_100 - lStack_b0) + 0xffffffffffffe;
  param_1[4] = (lStack_f0 - lStack_a0) + 0xffffffffffffe;
  FUN_1001ecaec(&lStack_c0,param_1 + 10);
  param_1[0xf] = ((uVar5 & 0x7ffffffffffff) + 0xfffffffffffda) - lStack_c0;
  param_1[0x10] = ((uVar1 & 0x7ffffffffffff) - lStack_b8) + 0xffffffffffffe;
  param_1[0x11] = (((uVar2 & 0x7ffffffffffff) + (uVar1 >> 0x33)) - lStack_b0) + 0xffffffffffffe;
  param_1[0x12] = ((uVar3 & 0x7ffffffffffff) - lStack_a8) + 0xffffffffffffe;
  param_1[0x13] = ((uVar4 & 0x7ffffffffffff) - lStack_a0) + 0xffffffffffffe;
  return;
}



/* Entry: 1001ed328; end: 1001ed58f;  */

void FUN_1001ed328(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
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
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  long lVar67;
  long lVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  
  FUN_1001ecd34(param_1,param_2,param_2 + 0x78);
  FUN_1001ecd34(param_1 + 0x28,param_2 + 0x28,param_2 + 0x50);
  uVar5 = *(ulong *)(param_2 + 0x90);
  uVar9 = *(ulong *)(param_2 + 0x98);
  uVar73 = uVar9 * 0x13;
  uVar6 = *(ulong *)(param_2 + 0x68);
  uVar10 = *(ulong *)(param_2 + 0x70);
  uVar7 = *(ulong *)(param_2 + 0x80);
  uVar11 = *(ulong *)(param_2 + 0x88);
  uVar63 = uVar5 * 0x13;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar63;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar10;
  uVar66 = uVar11 * 0x13;
  uVar72 = *(ulong *)(param_2 + 0x78);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar7 * 0x13;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar10;
  uVar65 = uVar7 * 0x13 * uVar10;
  uVar74 = *(ulong *)(param_2 + 0x60);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar6;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar66;
  uVar1 = uVar6 * uVar66 + uVar65;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar74;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar63;
  uVar64 = uVar1 + uVar74 * uVar63;
  uVar8 = *(ulong *)(param_2 + 0x50);
  uVar12 = *(ulong *)(param_2 + 0x58);
  uVar69 = uVar64 + uVar12 * uVar73;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar12;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar73;
  uVar70 = uVar69 + uVar8 * uVar72;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar8;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar72;
  uVar75 = uVar6 * uVar73 + uVar63 * uVar10;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar6;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar73;
  uVar71 = uVar6 * uVar63 + uVar66 * uVar10;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar66;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar10;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar63;
  uVar2 = uVar71 + uVar74 * uVar73;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar74;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar73;
  uVar3 = uVar2 + uVar72 * uVar12;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar72;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar12;
  uVar4 = uVar3 + uVar8 * uVar7;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar7;
  lVar68 = SUB168(auVar21 * auVar46,8) + SUB168(auVar20 * auVar45,8) +
           (ulong)CARRY8(uVar6 * uVar63,uVar66 * uVar10) + SUB168(auVar22 * auVar47,8) +
           (ulong)CARRY8(uVar71,uVar74 * uVar73) + SUB168(auVar23 * auVar48,8) +
           (ulong)CARRY8(uVar2,uVar72 * uVar12) + SUB168(auVar24 * auVar49,8) +
           (ulong)CARRY8(uVar3,uVar8 * uVar7);
  uVar64 = uVar70 >> 0x33 |
           (SUB168(auVar15 * auVar40,8) + SUB168(auVar14 * auVar39,8) +
            (ulong)CARRY8(uVar6 * uVar66,uVar65) + SUB168(auVar16 * auVar41,8) +
            (ulong)CARRY8(uVar1,uVar74 * uVar63) + SUB168(auVar17 * auVar42,8) +
            (ulong)CARRY8(uVar64,uVar12 * uVar73) + SUB168(auVar18 * auVar43,8) +
           (ulong)CARRY8(uVar69,uVar8 * uVar72)) * 0x2000;
  uVar1 = uVar4 + uVar64;
  if (CARRY8(uVar4,uVar64)) {
    lVar68 = lVar68 + 1;
  }
  uVar64 = uVar75 + uVar12 * uVar7;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar12;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar7;
  uVar69 = uVar64 + uVar72 * uVar74;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar72;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar74;
  uVar71 = uVar69 + uVar8 * uVar11;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar8;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar11;
  lVar67 = SUB168(auVar19 * auVar44,8) + SUB168(auVar13 * auVar38,8) +
           (ulong)CARRY8(uVar6 * uVar73,uVar63 * uVar10) + SUB168(auVar25 * auVar50,8) +
           (ulong)CARRY8(uVar75,uVar12 * uVar7) + SUB168(auVar26 * auVar51,8) +
           (ulong)CARRY8(uVar64,uVar72 * uVar74) + SUB168(auVar27 * auVar52,8) +
           (ulong)CARRY8(uVar69,uVar8 * uVar11);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar73;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = uVar10;
  uVar69 = uVar1 >> 0x33 | lVar68 << 0xd;
  uVar64 = uVar71 + uVar69;
  if (CARRY8(uVar71,uVar69)) {
    lVar67 = lVar67 + 1;
  }
  uVar69 = uVar74 * uVar7 + uVar73 * uVar10;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar74;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar7;
  uVar75 = uVar69 + uVar12 * uVar11;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar12;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar11;
  uVar71 = uVar75 + uVar72 * uVar6;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar72;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = uVar6;
  uVar2 = uVar71 + uVar8 * uVar5;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar8;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar5;
  lVar68 = SUB168(auVar29 * auVar54,8) + SUB168(auVar28 * auVar53,8) +
           (ulong)CARRY8(uVar74 * uVar7,uVar73 * uVar10) + SUB168(auVar30 * auVar55,8) +
           (ulong)CARRY8(uVar69,uVar12 * uVar11) + SUB168(auVar31 * auVar56,8) +
           (ulong)CARRY8(uVar75,uVar72 * uVar6) + SUB168(auVar32 * auVar57,8) +
           (ulong)CARRY8(uVar71,uVar8 * uVar5);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar6;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar7;
  uVar75 = uVar64 >> 0x33 | lVar67 << 0xd;
  uVar69 = uVar2 + uVar75;
  if (CARRY8(uVar2,uVar75)) {
    lVar68 = lVar68 + 1;
  }
  uVar75 = uVar74 * uVar11 + uVar6 * uVar7;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar74;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = uVar11;
  uVar71 = uVar75 + uVar12 * uVar5;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar12;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar5;
  uVar2 = uVar71 + uVar72 * uVar10;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar72;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = uVar10;
  uVar3 = uVar2 + uVar8 * uVar9;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar8;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = uVar9;
  lVar67 = SUB168(auVar34 * auVar59,8) + SUB168(auVar33 * auVar58,8) +
           (ulong)CARRY8(uVar74 * uVar11,uVar6 * uVar7) + SUB168(auVar35 * auVar60,8) +
           (ulong)CARRY8(uVar75,uVar12 * uVar5) + SUB168(auVar36 * auVar61,8) +
           (ulong)CARRY8(uVar71,uVar72 * uVar10) + SUB168(auVar37 * auVar62,8) +
           (ulong)CARRY8(uVar2,uVar8 * uVar9);
  uVar71 = uVar69 >> 0x33 | lVar68 << 0xd;
  uVar75 = uVar3 + uVar71;
  if (CARRY8(uVar3,uVar71)) {
    lVar67 = lVar67 + 1;
  }
  uVar70 = (uVar70 & 0x7ffffffffffff) + (uVar75 >> 0x33 | lVar67 << 0xd) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar70 >> 0x33);
  *(ulong *)(param_1 + 0x50) = uVar70 & 0x7ffffffffffff;
  *(ulong *)(param_1 + 0x58) = uVar1 & 0x7ffffffffffff;
  *(ulong *)(param_1 + 0x60) = (uVar64 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  *(ulong *)(param_1 + 0x68) = uVar69 & 0x7ffffffffffff;
  *(ulong *)(param_1 + 0x70) = uVar75 & 0x7ffffffffffff;
  return;
}



/* Entry: 1001ed590; end: 1001ed747;  */

void FUN_1001ed590(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = (param_2[1] - (ulong)(byte)-(char)(uint)(*param_2 + 0xfff8000000000013U >> 0x33)) +
          0xfff8000000000001;
  uVar2 = (param_2[2] - (ulong)(byte)-(char)(uint)(uVar1 >> 0x33)) + 0xfff8000000000001;
  uVar3 = (param_2[3] - (ulong)(byte)-(char)(uint)(uVar2 >> 0x33)) + 0xfff8000000000001;
  uVar4 = (param_2[4] - (ulong)(byte)-(char)(uint)(uVar3 >> 0x33)) + 0xfff8000000000001;
  uVar8 = -(ulong)((uVar4 & 0x7f8000000000000) != 0);
  uVar5 = (uVar8 & 0x7ffffffffffed) + (*param_2 + 0xfff8000000000013U & 0x7ffffffffffff);
  uVar7 = uVar8 & 0x7ffffffffffff;
  param_1[1] = (char)(uVar5 >> 8);
  param_1[2] = (char)(uVar5 >> 0x10);
  param_1[3] = (char)(uVar5 >> 0x18);
  param_1[4] = (char)(uVar5 >> 0x20);
  param_1[5] = (char)(uVar5 >> 0x28);
  uVar1 = uVar7 + (uVar1 & 0x7ffffffffffff) + (uVar5 >> 0x33);
  *param_1 = (char)uVar5;
  param_1[6] = (byte)(uVar5 >> 0x30) & 7 | (byte)((int)uVar1 << 3);
  param_1[7] = (char)(uVar1 >> 5);
  param_1[8] = (char)(uVar1 >> 0xd);
  param_1[9] = (char)(uVar1 >> 0x15);
  param_1[10] = (char)(uVar1 >> 0x1d);
  uVar6 = (uint)(uVar1 >> 0x20);
  param_1[0xb] = (char)(uVar6 >> 5);
  uVar1 = (uVar2 & 0x7ffffffffffff) + uVar7 + (uVar1 >> 0x33);
  param_1[0xc] = (byte)(uVar6 >> 0xd) & 0x3f | (byte)((int)uVar1 << 6);
  param_1[0xd] = (char)(uVar1 >> 2);
  param_1[0xe] = (char)(uVar1 >> 10);
  param_1[0xf] = (char)(uVar1 >> 0x12);
  param_1[0x10] = (char)(uVar1 >> 0x1a);
  uVar6 = (uint)(uVar1 >> 0x20);
  param_1[0x11] = (char)(uVar6 >> 2);
  param_1[0x12] = (char)(uVar6 >> 10);
  uVar1 = (uVar3 & 0x7ffffffffffff) + uVar7 + (uVar1 >> 0x33);
  param_1[0x13] = (byte)(uVar6 >> 0x12) & 1 | (byte)((int)uVar1 << 1);
  param_1[0x14] = (char)(uVar1 >> 7);
  param_1[0x15] = (char)(uVar1 >> 0xf);
  param_1[0x16] = (char)(uVar1 >> 0x17);
  param_1[0x17] = (char)(uVar1 >> 0x1f);
  uVar6 = (uint)(uVar1 >> 0x20);
  param_1[0x18] = (char)(uVar6 >> 7);
  uVar1 = uVar4 + uVar8 + (uVar1 >> 0x33);
  param_1[0x19] = (byte)(uVar6 >> 0xf) & 0xf | (byte)((int)uVar1 << 4);
  param_1[0x1a] = (char)(uVar1 >> 4);
  param_1[0x1b] = (char)(uVar1 >> 0xc);
  param_1[0x1c] = (char)(uVar1 >> 0x14);
  param_1[0x1d] = (char)(uVar1 >> 0x1c);
  uVar6 = (uint)(uVar1 >> 0x20);
  param_1[0x1e] = (char)(uVar6 >> 4);
  param_1[0x1f] = (byte)(uVar6 >> 0xc) & 0x7f;
  return;
}



/* Entry: 1001ed748; end: 1001ed8bf;  */

void FUN_1001ed748(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_1001ebf4c();
  if ((int)plVar1 != 0) {
    lVar3 = *param_1;
    lVar2 = lVar3;
    FUN_1001ec148(lVar3,&uStack_38,param_3);
    if (((int)lVar2 != 0) && (*(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + param_3, param_3 != 0))
    {
      func_0x000107c610b4(uStack_38,param_2,param_3);
    }
  }
  return;
}



/* Entry: 1001ed8c0; end: 1001ed90b;  */

void FUN_1001ed8c0(long *param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)((long)param_1 + 0x1a) != '\0') {
    return;
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(char *)(puVar1 + 3) != '\0') {
      FUN_1001e33e0(*puVar1);
      puVar1 = (undefined8 *)*param_1;
    }
    FUN_1001e33e0(puVar1);
  }
  *param_1 = 0;
  return;
}



/* Entry: 1001ed90c; end: 1001eda33;  */

ulong *****
FUN_1001ed90c(ulong *****param_1,ulong ******param_2,ulong ******param_3,ulong ******param_4)

{
  undefined1 uVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long **pplVar6;
  ulong ***pppuVar7;
  undefined1 *puVar8;
  ulong ******ppppppuVar9;
  ulong uVar10;
  ulong ******ppppppuVar11;
  ulong ******ppppppuVar12;
  long lVar13;
  ulong ******ppppppuVar14;
  long lVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  ulong ******ppppppuVar18;
  ulong ****ppppuVar19;
  ulong ***pppuVar20;
  ulong ****ppppuVar21;
  ulong ****ppppuStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong *****pppppuStack_1d0;
  ulong ****ppppuStack_1c8;
  long lStack_1c0;
  ulong *****pppppuStack_1b8;
  ulong *****pppppuStack_1b0;
  undefined1 auStack_1a1 [33];
  ulong *****apppppuStack_180 [4];
  ulong ***pppuStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong ****ppppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  ulong ****ppppuStack_98;
  ulong ***pppuStack_90;
  uint auStack_84 [23];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(ushort *)((long)param_1[1] + 0xe9) >> 10 & 1) == 0) {
    pppppuVar16 = (ulong *****)0x1;
  }
  else {
    ppppuStack_98 = (ulong ****)0x0;
    pppuStack_90 = (ulong ***)0x0;
    param_3 = (ulong ******)&UNK_10e525a20;
    FUN_1001e47a4(auStack_84,0x5c);
    pppppuVar16 = &ppppuStack_98;
    param_2 = (ulong ******)0x18;
    FUN_1001e6684();
    if ((int)pppppuVar16 != 0) {
      lVar13 = 0;
      do {
        *(char *)((long)ppppuStack_98 + lVar13) = (char)lVar13;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x18);
      lVar13 = 0;
      do {
        uVar10 = lVar13 + 0x18;
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = auStack_84[lVar13 + 0x16] / uVar10;
        }
        lVar15 = (ulong)auStack_84[lVar13 + 0x16] - uVar3 * uVar10;
        uVar1 = *(undefined1 *)((long)ppppuStack_98 + lVar13 + 0x17);
        *(undefined1 *)((long)ppppuStack_98 + lVar13 + 0x17) =
             *(undefined1 *)((long)ppppuStack_98 + lVar15);
        *(undefined1 *)((long)ppppuStack_98 + lVar15) = uVar1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != -0x17);
      FUN_1001e33e0(param_1[0x55]);
      param_1[0x55] = ppppuStack_98;
      param_1[0x56] = (ulong ****)pppuStack_90;
      ppppuStack_98 = (ulong ****)0x0;
      pppuStack_90 = (ulong ***)0x0;
    }
    param_1 = (ulong *****)ppppuStack_98;
    FUN_1001e33e0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppppuVar16;
  }
  func_0x000107c60e78();
  FUN_1001e33e0(ppppuStack_98);
  func_0x000107c60bd8();
  ppppppuVar14 = (ulong ******)&ppppuStack_1f0;
  iVar4 = (int)&ppppuStack_1f0;
  ppppppuVar18 = (ulong ******)&ppppuStack_1f0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar16 = param_1;
  if (param_1[0xbe] == (ulong ****)0x0) {
    if ((0x303 < *(ushort *)((long)param_1 + 0x1e)) &&
       ((*(ushort *)((long)param_1[1] + 0xe9) & 1) != 0)) {
      ppppppuVar18 = (ulong ******)(ulong)*(byte *)((long)param_1 + 0x64a);
      FUN_1001ec468(&ppppuStack_120,&plStack_140);
      ppppppuVar12 = (ulong ******)&UNK_10e525a20;
      ppppuVar21 = &pppuStack_160;
      FUN_1001e47a4(ppppuVar21,8,&UNK_10e525a20);
      pppuVar7 = pppuStack_160;
      FUN_1009dfe5c();
      bVar2 = *(byte *)((long)ppppuVar21 + 2);
      uStack_158 = 0;
      pppuStack_160 = (ulong ***)0x0;
      uStack_148 = 0;
      lStack_150 = 0;
      iVar4 = (int)&pppuStack_160;
      ppppppuVar11 = (ulong ******)0x100;
      FUN_1001ebea0();
      if (iVar4 == 0) {
LAB_1001edd80:
        pppppuVar17 = (ulong *****)0x0;
      }
      else {
        iVar4 = (int)&pppuStack_160;
        ppppppuVar11 = (ulong ******)0x1;
        FUN_1001ec108();
        if (iVar4 == 0) goto LAB_1001edd80;
        iVar4 = (int)&pppuStack_160;
        ppppppuVar11 = (ulong ******)0x1;
        FUN_1001ec108();
        if (iVar4 == 0) goto LAB_1001edd80;
        iVar4 = (int)&pppuStack_160;
        FUN_1001ec260();
        ppppppuVar11 = ppppppuVar18;
        if (iVar4 == 0) goto LAB_1001edd80;
        ppppuVar21 = &pppuStack_160;
        ppppppuVar11 = apppppuStack_180;
        ppppppuVar12 = (ulong ******)0x2;
        FUN_1001ec3c0(ppppuVar21,ppppppuVar11,2);
        if ((int)ppppuVar21 == 0) goto LAB_1001edd80;
        ppppppuVar18 = apppppuStack_180;
        ppppppuVar11 = (ulong ******)&ppppuStack_120;
        ppppppuVar12 = (ulong ******)0x20;
        func_0x0001001ed748(ppppppuVar18,ppppppuVar11,0x20);
        if ((int)ppppppuVar18 == 0) goto LAB_1001edd80;
        ppppuVar21 = &pppuStack_160;
        ppppppuVar11 = (ulong ******)(auStack_1a1 + 1);
        ppppppuVar12 = (ulong ******)0x2;
        FUN_1001ec3c0(ppppuVar21,ppppppuVar11,2);
        if ((int)ppppuVar21 == 0) goto LAB_1001edd80;
        lVar13 = (ulong)bVar2 + ((ulong)pppuVar7 & 3) * 0x20;
        puVar8 = auStack_1a1 + 1;
        ppppppuVar12 = (ulong ******)(lVar13 + 0x80);
        FUN_1001eecc4(puVar8,&ppppuStack_1f0,ppppppuVar12);
        ppppppuVar11 = ppppppuVar14;
        if ((int)puVar8 == 0) goto LAB_1001edd80;
        ppppppuVar12 = (ulong ******)&UNK_10e525a20;
        FUN_1001e47a4(ppppuStack_1f0,lVar13 + 0x80,&UNK_10e525a20);
        pppppuVar17 = (ulong *****)&pppuStack_160;
        ppppppuVar11 = (ulong ******)(param_1 + 0x43);
        func_0x0001001ed84c(pppppuVar17);
      }
      pppppuVar16 = (ulong *****)&pppuStack_160;
      goto LAB_1001edc2c;
    }
    pppppuVar17 = (ulong *****)0x1;
    ppppppuVar11 = param_2;
    ppppppuVar12 = param_3;
  }
  else {
    ppppuVar19 = *param_1;
    uStack_118 = 0;
    ppppuStack_120 = (ulong ****)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    lStack_130 = 0;
    pppppuStack_1b8 = (ulong *****)0x0;
    pppppuStack_1b0 = (ulong *****)0x0;
    ppppuVar21 = ppppuVar19;
    (*(code *)(*ppppuVar19)[0xb])(ppppuVar19,&ppppuStack_120,&pppuStack_160,1);
    if ((int)ppppuVar21 == 0) {
LAB_1001edbf8:
      param_4 = (ulong ******)&UNK_10f6cfc38;
      ppppppuVar11 = (ulong ******)0x0;
      ppppppuVar12 = (ulong ******)0x44;
      FUN_1004d2c58(0x10,0,0x44,&UNK_10f6cfc38,0x317);
LAB_1001edc14:
      pppppuVar17 = (ulong *****)0x0;
    }
    else {
      pplVar6 = &plStack_140;
      FUN_1001ebea0(pplVar6,0x100);
      if (((((int)pplVar6 == 0) ||
           (pppppuVar17 = param_1, FUN_1001ee204(param_1,&pppuStack_160,1,0), (int)pppppuVar17 == 0)
           ) || (pppppuVar17 = param_1, FUN_1001ee204(param_1,&plStack_140,1,1),
                (int)pppppuVar17 == 0)) ||
         ((pppppuVar17 = param_1,
          FUN_1001ee518(param_1,&pppuStack_160,&plStack_140,auStack_1a1,1,
                        (long)pppuStack_160[1] - (lStack_150 + (uStack_148 & 0xff))),
          (int)pppppuVar17 == 0 ||
          (ppppuVar21 = ppppuVar19,
          (*(code *)(*ppppuVar19)[0xc])(ppppuVar19,&ppppuStack_120,&pppppuStack_1b8),
          ((ulong)ppppuVar21 & 1) == 0)))) goto LAB_1001edbf8;
      if (auStack_1a1[0] == '\x01') {
        ppppppuVar11 = (ulong ******)(param_1 + 0x38);
        ppppppuVar12 = (ulong ******)pppppuStack_1b8;
        param_4 = (ulong ******)pppppuStack_1b0;
        func_0x000107c2b918(param_1,ppppppuVar11,pppppuStack_1b8,pppppuStack_1b0,apppppuStack_180);
        if (((ulong)pppppuVar16 & 1) != 0) {
          lVar13 = lStack_130 + (uStack_128 & 0xff);
          ppppppuVar14 = (ulong ******)(plStack_140[1] - lVar13);
          ppppppuVar12 = (ulong ******)apppppuStack_180[0];
          if ((ppppppuVar14 < apppppuStack_180[0]) || (pppppuStack_1b0 < apppppuStack_180[0]))
          goto LAB_1001edfa4;
          if ((ulong ******)apppppuStack_180[0] != (ulong ******)0x0) {
            func_0x000107c610b4((undefined *)
                                ((long)ppppppuVar14 +
                                ((*plStack_140 + lVar13) - (long)apppppuStack_180[0])),
                                (long)((long)pppppuStack_1b8 + (long)pppppuStack_1b0) -
                                (long)apppppuStack_180[0]);
          }
          goto LAB_1001edbb4;
        }
        goto LAB_1001edc14;
      }
LAB_1001edbb4:
      param_4 = (ulong ******)pppppuStack_1b8;
      func_0x0001001f102c(ppppuVar19,1,0x101,pppppuStack_1b8,pppppuStack_1b0);
      pppppuVar16 = param_1 + 0x38;
      ppppppuVar11 = (ulong ******)pppppuStack_1b8;
      ppppppuVar12 = (ulong ******)pppppuStack_1b0;
      func_0x0001001f114c(pppppuVar16,pppppuStack_1b8,pppppuStack_1b0);
      if ((int)pppppuVar16 == 0) goto LAB_1001edc14;
      pppuVar20 = (ulong ***)(ulong)*(byte *)((long)param_1[0xbe] + 0x42);
      pppuVar7 = ppppuVar19[0x12];
      if (pppuVar7 == (ulong ***)0x0) {
        lVar13 = (long)pppuVar20 + 9;
      }
      else {
        func_0x000107c613d0();
        lVar13 = 0;
        if (pppuVar7 <= pppuVar20) {
          lVar13 = (long)pppuVar20 - (long)pppuVar7;
        }
      }
      ppppuStack_1c8 = (ulong ****)0x0;
      lStack_1c0 = 0;
      iVar5 = (int)&plStack_140;
      ppppppuVar11 = (ulong ******)
                     (((ulong)~(~((int)lStack_130 + (uint)(byte)uStack_128) + (int)plStack_140[1] +
                               (int)lVar13) & 0x1f) + lVar13);
      FUN_1001eed20();
      if (iVar5 == 0) {
LAB_1001edf64:
        pppppuVar17 = (ulong *****)0x0;
      }
      else {
        pplVar6 = &plStack_140;
        ppppppuVar11 = (ulong ******)&ppppuStack_1c8;
        func_0x0001001ed84c();
        lVar13 = lStack_1c0;
        if (((ulong)pplVar6 & 1) == 0) goto LAB_1001edf64;
        ppppuVar19 = param_1[0x59];
        ppppuVar21 = param_1[0x58];
        (*(code *)ppppuVar21[1])();
        ppppppuVar14 = (ulong ******)(lVar13 + (ulong)*(byte *)((long)pplVar6 + 2));
        iVar5 = (int)&ppppuStack_120;
        ppppppuVar11 = (ulong ******)0x100;
        pppppuStack_1d0 = (ulong *****)ppppppuVar14;
        FUN_1001ebea0();
        if (iVar5 == 0) goto LAB_1001edf64;
        ppppppuVar11 = (ulong ******)(ulong)*(ushort *)ppppuVar19;
        iVar5 = (int)&ppppuStack_120;
        FUN_1001ec108();
        if (iVar5 == 0) goto LAB_1001edf64;
        ppppppuVar11 = (ulong ******)(ulong)*(ushort *)ppppuVar21;
        iVar5 = (int)&ppppuStack_120;
        FUN_1001ec108();
        if (iVar5 == 0) goto LAB_1001edf64;
        ppppppuVar11 = (ulong ******)(ulong)*(byte *)((long)param_1[0xbe] + 0x43);
        iVar5 = (int)&ppppuStack_120;
        FUN_1001ec260();
        if (iVar5 == 0) goto LAB_1001edf64;
        pppppuVar16 = &ppppuStack_120;
        ppppppuVar11 = apppppuStack_180;
        ppppppuVar12 = (ulong ******)0x2;
        FUN_1001ec3c0(pppppuVar16,ppppppuVar11,2);
        if ((int)pppppuVar16 == 0) goto LAB_1001edf64;
        ppppppuVar9 = apppppuStack_180;
        func_0x0001001ed748(ppppppuVar9,param_2,param_3);
        ppppppuVar11 = param_2;
        ppppppuVar12 = param_3;
        if ((int)ppppppuVar9 == 0) goto LAB_1001edf64;
        pppppuVar16 = &ppppuStack_120;
        ppppppuVar11 = (ulong ******)(auStack_1a1 + 1);
        ppppppuVar12 = (ulong ******)0x2;
        FUN_1001ec3c0(pppppuVar16,ppppppuVar11,2);
        if ((int)pppppuVar16 == 0) goto LAB_1001edf64;
        iVar5 = (int)auStack_1a1 + 1;
        ppppppuVar11 = ppppppuVar14;
        FUN_1001eed20();
        if (iVar5 == 0) goto LAB_1001edf64;
        uVar10 = 0;
        ppppppuVar11 = (ulong ******)(param_1 + 0x43);
        func_0x0001001ed84c();
        if ((uVar10 & 1) == 0) goto LAB_1001edf64;
        uStack_1e8 = 0;
        ppppuStack_1f0 = (ulong ****)0x0;
        uStack_1d8 = 0;
        lStack_1e0 = 0;
        FUN_1001ebea0(&ppppuStack_1f0,0x100);
        if ((iVar4 == 0) ||
           (pppppuVar16 = param_1, FUN_1001ee204(param_1,&ppppuStack_1f0,2,0), (int)pppppuVar16 == 0
           )) {
LAB_1001edf74:
          param_4 = (ulong ******)&UNK_10f6cfc38;
          ppppppuVar11 = (ulong ******)0x0;
          ppppppuVar12 = (ulong ******)0x44;
          FUN_1004d2c58(0x10,0,0x44,&UNK_10f6cfc38,0x365);
LAB_1001edf90:
          pppppuVar17 = (ulong *****)0x0;
        }
        else {
          param_4 = (ulong ******)auStack_1a1;
          ppppppuVar12 = (ulong ******)0x0;
          pppppuVar16 = param_1;
          FUN_1001ee518(param_1,&ppppuStack_1f0,0,param_4,2,
                        (long)ppppuStack_1f0[1] - (lStack_1e0 + (uStack_1d8 & 0xff)));
          if (((ulong)pppppuVar16 & 1) == 0) goto LAB_1001edf74;
          ppppppuVar11 = ppppppuVar18;
          if (param_1[0x44] < ppppppuVar14) goto LAB_1001edfa4;
          ppppppuVar11 = (ulong ******)
                         ((long)param_1[0x44] + ((long)param_1[0x43] - (long)ppppppuVar14));
          lVar15 = lStack_1e0 + (uStack_1d8 & 0xff);
          param_1 = param_1 + 0x58;
          ppppppuVar12 = &pppppuStack_1d0;
          param_4 = ppppppuVar14;
          func_0x000107c2b528(param_1,ppppppuVar11,ppppppuVar12,ppppppuVar14,ppppuStack_1c8,lVar13,
                              lVar15 + (long)*ppppuStack_1f0,(long)ppppuStack_1f0[1] - lVar15);
          if ((int)param_1 == 0) goto LAB_1001edf90;
          pppppuVar17 = (ulong *****)(ulong)((ulong ******)pppppuStack_1d0 == ppppppuVar14);
        }
        FUN_1001ed8c0(&ppppuStack_1f0);
      }
      FUN_1001e33e0(ppppuStack_1c8);
    }
    FUN_1001e33e0(pppppuStack_1b8);
    FUN_1001ed8c0(&plStack_140);
    pppppuVar16 = &ppppuStack_120;
LAB_1001edc2c:
    FUN_1001ed8c0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pppppuVar17;
  }
  func_0x000107c60e78();
LAB_1001edfa4:
  func_0x000107c60ebc();
  FUN_1001ed8c0(&ppppuStack_1f0);
  FUN_1001e33e0(ppppuStack_1c8);
  FUN_1001e33e0(pppppuStack_1b8);
  FUN_1001ed8c0(&plStack_140);
  FUN_1001ed8c0(&ppppuStack_120);
  func_0x000107c60bd8(pppppuVar16);
  ppppppuVar14 = ppppppuVar11;
  FUN_1001ebea0(ppppppuVar11,0x40);
  if ((((int)ppppppuVar14 == 0) ||
      (ppppppuVar14 = ppppppuVar11, FUN_1001ec260(ppppppuVar11,param_4), (int)ppppppuVar14 == 0)) ||
     (ppppppuVar14 = ppppppuVar11, FUN_1001ec3c0(ppppppuVar11,ppppppuVar12,3),
     (int)ppppppuVar14 == 0)) {
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6d0013,0xb0);
    FUN_1001ed8c0(ppppppuVar11);
    pppppuVar16 = (ulong *****)0x0;
  }
  else {
    pppppuVar16 = (ulong *****)0x1;
  }
  return pppppuVar16;
}



/* Entry: 1001eda34; end: 1001edfff;  */

ulong ****
FUN_1001eda34(ulong *****param_1,ulong ******param_2,ulong ******param_3,ulong ******param_4)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long **pplVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong ***pppuVar8;
  undefined1 *puVar9;
  ulong ******ppppppuVar10;
  ulong uVar11;
  ulong ******ppppppuVar12;
  ulong ******ppppppuVar13;
  long lVar14;
  ulong ******ppppppuVar15;
  ulong ******ppppppuVar16;
  ulong ****ppppuVar17;
  ulong ***pppuVar18;
  ulong ****ppppuVar19;
  ulong ****ppppuStack_150;
  undefined8 uStack_148;
  long lStack_140;
  ulong uStack_138;
  ulong *****pppppuStack_130;
  ulong ****ppppuStack_128;
  long lStack_120;
  ulong *****pppppuStack_118;
  ulong *****pppppuStack_110;
  undefined1 auStack_101 [33];
  ulong *****apppppuStack_e0 [4];
  ulong ***pppuStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong ****ppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  ppppppuVar15 = (ulong ******)&ppppuStack_150;
  iVar3 = (int)&ppppuStack_150;
  ppppppuVar16 = (ulong ******)&ppppuStack_150;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar7 = param_1;
  if (param_1[0xbe] == (ulong ****)0x0) {
    if ((0x303 < *(ushort *)((long)param_1 + 0x1e)) &&
       ((*(ushort *)((long)param_1[1] + 0xe9) & 1) != 0)) {
      ppppppuVar16 = (ulong ******)(ulong)*(byte *)((long)param_1 + 0x64a);
      FUN_1001ec468(&ppppuStack_80,&plStack_a0);
      ppppppuVar13 = (ulong ******)&UNK_10e525a20;
      ppppuVar19 = &pppuStack_c0;
      FUN_1001e47a4(ppppuVar19,8,&UNK_10e525a20);
      pppuVar8 = pppuStack_c0;
      FUN_1009dfe5c();
      bVar2 = *(byte *)((long)ppppuVar19 + 2);
      uStack_b8 = 0;
      pppuStack_c0 = (ulong ***)0x0;
      uStack_a8 = 0;
      lStack_b0 = 0;
      iVar3 = (int)&pppuStack_c0;
      ppppppuVar12 = (ulong ******)0x100;
      FUN_1001ebea0();
      if (iVar3 == 0) {
LAB_1001edd80:
        ppppuVar19 = (ulong ****)0x0;
      }
      else {
        iVar3 = (int)&pppuStack_c0;
        ppppppuVar12 = (ulong ******)0x1;
        FUN_1001ec108();
        if (iVar3 == 0) goto LAB_1001edd80;
        iVar3 = (int)&pppuStack_c0;
        ppppppuVar12 = (ulong ******)0x1;
        FUN_1001ec108();
        if (iVar3 == 0) goto LAB_1001edd80;
        iVar3 = (int)&pppuStack_c0;
        FUN_1001ec260();
        ppppppuVar12 = ppppppuVar16;
        if (iVar3 == 0) goto LAB_1001edd80;
        ppppuVar19 = &pppuStack_c0;
        ppppppuVar12 = apppppuStack_e0;
        ppppppuVar13 = (ulong ******)0x2;
        FUN_1001ec3c0(ppppuVar19,ppppppuVar12,2);
        if ((int)ppppuVar19 == 0) goto LAB_1001edd80;
        ppppppuVar16 = apppppuStack_e0;
        ppppppuVar12 = (ulong ******)&ppppuStack_80;
        ppppppuVar13 = (ulong ******)0x20;
        func_0x0001001ed748(ppppppuVar16,ppppppuVar12,0x20);
        if ((int)ppppppuVar16 == 0) goto LAB_1001edd80;
        ppppuVar19 = &pppuStack_c0;
        ppppppuVar12 = (ulong ******)(auStack_101 + 1);
        ppppppuVar13 = (ulong ******)0x2;
        FUN_1001ec3c0(ppppuVar19,ppppppuVar12,2);
        if ((int)ppppuVar19 == 0) goto LAB_1001edd80;
        lVar14 = (ulong)bVar2 + ((ulong)pppuVar8 & 3) * 0x20;
        puVar9 = auStack_101 + 1;
        ppppppuVar13 = (ulong ******)(lVar14 + 0x80);
        FUN_1001eecc4(puVar9,&ppppuStack_150,ppppppuVar13);
        ppppppuVar12 = ppppppuVar15;
        if ((int)puVar9 == 0) goto LAB_1001edd80;
        ppppppuVar13 = (ulong ******)&UNK_10e525a20;
        FUN_1001e47a4(ppppuStack_150,lVar14 + 0x80,&UNK_10e525a20);
        ppppuVar19 = &pppuStack_c0;
        ppppppuVar12 = (ulong ******)(param_1 + 0x43);
        func_0x0001001ed84c(ppppuVar19);
      }
      pppppuVar7 = (ulong *****)&pppuStack_c0;
      goto LAB_1001edc2c;
    }
    ppppuVar19 = (ulong ****)0x1;
    ppppppuVar12 = param_2;
    ppppppuVar13 = param_3;
  }
  else {
    ppppuVar17 = *param_1;
    uStack_78 = 0;
    ppppuStack_80 = (ulong ****)0x0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    plStack_a0 = (long *)0x0;
    uStack_88 = 0;
    lStack_90 = 0;
    pppppuStack_118 = (ulong *****)0x0;
    pppppuStack_110 = (ulong *****)0x0;
    ppppuVar19 = ppppuVar17;
    (*(code *)(*ppppuVar17)[0xb])(ppppuVar17,&ppppuStack_80,&pppuStack_c0,1);
    if ((int)ppppuVar19 == 0) {
LAB_1001edbf8:
      param_4 = (ulong ******)&UNK_10f6cfc38;
      ppppppuVar12 = (ulong ******)0x0;
      ppppppuVar13 = (ulong ******)0x44;
      FUN_1004d2c58(0x10,0,0x44,&UNK_10f6cfc38,0x317);
LAB_1001edc14:
      ppppuVar19 = (ulong ****)0x0;
    }
    else {
      pplVar5 = &plStack_a0;
      FUN_1001ebea0(pplVar5,0x100);
      if (((((int)pplVar5 == 0) ||
           (pppppuVar6 = param_1, FUN_1001ee204(param_1,&pppuStack_c0,1,0), (int)pppppuVar6 == 0))
          || (pppppuVar6 = param_1, FUN_1001ee204(param_1,&plStack_a0,1,1), (int)pppppuVar6 == 0))
         || ((pppppuVar6 = param_1,
             FUN_1001ee518(param_1,&pppuStack_c0,&plStack_a0,auStack_101,1,
                           (long)pppuStack_c0[1] - (lStack_b0 + (uStack_a8 & 0xff))),
             (int)pppppuVar6 == 0 ||
             (ppppuVar19 = ppppuVar17,
             (*(code *)(*ppppuVar17)[0xc])(ppppuVar17,&ppppuStack_80,&pppppuStack_118),
             ((ulong)ppppuVar19 & 1) == 0)))) goto LAB_1001edbf8;
      if (auStack_101[0] == '\x01') {
        ppppppuVar12 = (ulong ******)(param_1 + 0x38);
        ppppppuVar13 = (ulong ******)pppppuStack_118;
        param_4 = (ulong ******)pppppuStack_110;
        func_0x000107c2b918(param_1,ppppppuVar12,pppppuStack_118,pppppuStack_110,apppppuStack_e0);
        if (((ulong)pppppuVar7 & 1) != 0) {
          lVar14 = lStack_90 + (uStack_88 & 0xff);
          ppppppuVar15 = (ulong ******)(plStack_a0[1] - lVar14);
          ppppppuVar13 = (ulong ******)apppppuStack_e0[0];
          if ((ppppppuVar15 < apppppuStack_e0[0]) || (pppppuStack_110 < apppppuStack_e0[0]))
          goto LAB_1001edfa4;
          if ((ulong ******)apppppuStack_e0[0] != (ulong ******)0x0) {
            func_0x000107c610b4((undefined *)
                                ((long)ppppppuVar15 +
                                ((*plStack_a0 + lVar14) - (long)apppppuStack_e0[0])),
                                (long)((long)pppppuStack_118 + (long)pppppuStack_110) -
                                (long)apppppuStack_e0[0]);
          }
          goto LAB_1001edbb4;
        }
        goto LAB_1001edc14;
      }
LAB_1001edbb4:
      param_4 = (ulong ******)pppppuStack_118;
      func_0x0001001f102c(ppppuVar17,1,0x101,pppppuStack_118,pppppuStack_110);
      pppppuVar7 = param_1 + 0x38;
      ppppppuVar12 = (ulong ******)pppppuStack_118;
      ppppppuVar13 = (ulong ******)pppppuStack_110;
      func_0x0001001f114c(pppppuVar7,pppppuStack_118,pppppuStack_110);
      if ((int)pppppuVar7 == 0) goto LAB_1001edc14;
      pppuVar18 = (ulong ***)(ulong)*(byte *)((long)param_1[0xbe] + 0x42);
      pppuVar8 = ppppuVar17[0x12];
      if (pppuVar8 == (ulong ***)0x0) {
        lVar14 = (long)pppuVar18 + 9;
      }
      else {
        func_0x000107c613d0();
        lVar14 = 0;
        if (pppuVar8 <= pppuVar18) {
          lVar14 = (long)pppuVar18 - (long)pppuVar8;
        }
      }
      ppppuStack_128 = (ulong ****)0x0;
      lStack_120 = 0;
      iVar4 = (int)&plStack_a0;
      ppppppuVar12 = (ulong ******)
                     (((ulong)~(~((int)lStack_90 + (uint)(byte)uStack_88) + (int)plStack_a0[1] +
                               (int)lVar14) & 0x1f) + lVar14);
      FUN_1001eed20();
      if (iVar4 == 0) {
LAB_1001edf64:
        ppppuVar19 = (ulong ****)0x0;
      }
      else {
        pplVar5 = &plStack_a0;
        ppppppuVar12 = (ulong ******)&ppppuStack_128;
        func_0x0001001ed84c();
        lVar14 = lStack_120;
        if (((ulong)pplVar5 & 1) == 0) goto LAB_1001edf64;
        ppppuVar17 = param_1[0x59];
        ppppuVar19 = param_1[0x58];
        (*(code *)ppppuVar19[1])();
        ppppppuVar15 = (ulong ******)(lVar14 + (ulong)*(byte *)((long)pplVar5 + 2));
        iVar4 = (int)&ppppuStack_80;
        ppppppuVar12 = (ulong ******)0x100;
        pppppuStack_130 = (ulong *****)ppppppuVar15;
        FUN_1001ebea0();
        if (iVar4 == 0) goto LAB_1001edf64;
        ppppppuVar12 = (ulong ******)(ulong)*(ushort *)ppppuVar17;
        iVar4 = (int)&ppppuStack_80;
        FUN_1001ec108();
        if (iVar4 == 0) goto LAB_1001edf64;
        ppppppuVar12 = (ulong ******)(ulong)*(ushort *)ppppuVar19;
        iVar4 = (int)&ppppuStack_80;
        FUN_1001ec108();
        if (iVar4 == 0) goto LAB_1001edf64;
        ppppppuVar12 = (ulong ******)(ulong)*(byte *)((long)param_1[0xbe] + 0x43);
        iVar4 = (int)&ppppuStack_80;
        FUN_1001ec260();
        if (iVar4 == 0) goto LAB_1001edf64;
        pppppuVar7 = &ppppuStack_80;
        ppppppuVar12 = apppppuStack_e0;
        ppppppuVar13 = (ulong ******)0x2;
        FUN_1001ec3c0(pppppuVar7,ppppppuVar12,2);
        if ((int)pppppuVar7 == 0) goto LAB_1001edf64;
        ppppppuVar10 = apppppuStack_e0;
        func_0x0001001ed748(ppppppuVar10,param_2,param_3);
        ppppppuVar12 = param_2;
        ppppppuVar13 = param_3;
        if ((int)ppppppuVar10 == 0) goto LAB_1001edf64;
        pppppuVar7 = &ppppuStack_80;
        ppppppuVar12 = (ulong ******)(auStack_101 + 1);
        ppppppuVar13 = (ulong ******)0x2;
        FUN_1001ec3c0(pppppuVar7,ppppppuVar12,2);
        if ((int)pppppuVar7 == 0) goto LAB_1001edf64;
        iVar4 = (int)auStack_101 + 1;
        ppppppuVar12 = ppppppuVar15;
        FUN_1001eed20();
        if (iVar4 == 0) goto LAB_1001edf64;
        uVar11 = 0;
        ppppppuVar12 = (ulong ******)(param_1 + 0x43);
        func_0x0001001ed84c();
        if ((uVar11 & 1) == 0) goto LAB_1001edf64;
        uStack_148 = 0;
        ppppuStack_150 = (ulong ****)0x0;
        uStack_138 = 0;
        lStack_140 = 0;
        FUN_1001ebea0(&ppppuStack_150,0x100);
        if ((iVar3 == 0) ||
           (pppppuVar7 = param_1, FUN_1001ee204(param_1,&ppppuStack_150,2,0), (int)pppppuVar7 == 0))
        {
LAB_1001edf74:
          param_4 = (ulong ******)&UNK_10f6cfc38;
          ppppppuVar12 = (ulong ******)0x0;
          ppppppuVar13 = (ulong ******)0x44;
          FUN_1004d2c58(0x10,0,0x44,&UNK_10f6cfc38,0x365);
LAB_1001edf90:
          ppppuVar19 = (ulong ****)0x0;
        }
        else {
          param_4 = (ulong ******)auStack_101;
          ppppppuVar13 = (ulong ******)0x0;
          pppppuVar7 = param_1;
          FUN_1001ee518(param_1,&ppppuStack_150,0,param_4,2,
                        (long)ppppuStack_150[1] - (lStack_140 + (uStack_138 & 0xff)));
          if (((ulong)pppppuVar7 & 1) == 0) goto LAB_1001edf74;
          ppppppuVar12 = ppppppuVar16;
          if (param_1[0x44] < ppppppuVar15) goto LAB_1001edfa4;
          ppppppuVar12 = (ulong ******)
                         ((long)param_1[0x44] + ((long)param_1[0x43] - (long)ppppppuVar15));
          lVar1 = lStack_140 + (uStack_138 & 0xff);
          param_1 = param_1 + 0x58;
          ppppppuVar13 = &pppppuStack_130;
          param_4 = ppppppuVar15;
          func_0x000107c2b528(param_1,ppppppuVar12,ppppppuVar13,ppppppuVar15,ppppuStack_128,lVar14,
                              lVar1 + (long)*ppppuStack_150,(long)ppppuStack_150[1] - lVar1);
          if ((int)param_1 == 0) goto LAB_1001edf90;
          ppppuVar19 = (ulong ****)(ulong)((ulong ******)pppppuStack_130 == ppppppuVar15);
        }
        FUN_1001ed8c0(&ppppuStack_150);
      }
      FUN_1001e33e0(ppppuStack_128);
    }
    FUN_1001e33e0(pppppuStack_118);
    FUN_1001ed8c0(&plStack_a0);
    pppppuVar7 = &ppppuStack_80;
LAB_1001edc2c:
    FUN_1001ed8c0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppuVar19;
  }
  func_0x000107c60e78();
LAB_1001edfa4:
  func_0x000107c60ebc();
  FUN_1001ed8c0(&ppppuStack_150);
  FUN_1001e33e0(ppppuStack_128);
  FUN_1001e33e0(pppppuStack_118);
  FUN_1001ed8c0(&plStack_a0);
  FUN_1001ed8c0(&ppppuStack_80);
  func_0x000107c60bd8(pppppuVar7);
  ppppppuVar15 = ppppppuVar12;
  FUN_1001ebea0(ppppppuVar12,0x40);
  if ((((int)ppppppuVar15 == 0) ||
      (ppppppuVar15 = ppppppuVar12, FUN_1001ec260(ppppppuVar12,param_4), (int)ppppppuVar15 == 0)) ||
     (ppppppuVar15 = ppppppuVar12, FUN_1001ec3c0(ppppppuVar12,ppppppuVar13,3),
     (int)ppppppuVar15 == 0)) {
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6d0013,0xb0);
    FUN_1001ed8c0(ppppppuVar12);
    ppppuVar19 = (ulong ****)0x0;
  }
  else {
    ppppuVar19 = (ulong ****)0x1;
  }
  return ppppuVar19;
}



/* Entry: 1001ee000; end: 1001ee08f;  */

undefined8
FUN_1001ee000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1001ebea0(param_2,0x40);
  if ((((int)uVar1 == 0) || (uVar1 = param_2, FUN_1001ec260(param_2,param_4), (int)uVar1 == 0)) ||
     (uVar1 = param_2, FUN_1001ec3c0(param_2,param_3,3), (int)uVar1 == 0)) {
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6d0013,0xb0);
    FUN_1001ed8c0(param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1001ee090; end: 1001ee203;  */

long * FUN_1001ee090(ulong *param_1)

{
  long *plVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_71;
  long alStack_70 [2];
  long lStack_60;
  byte bStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar4 = (long *)*param_1;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar3 = 0;
  if (param_1[0xbe] != 0) {
    uVar3 = 2;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  plVar1 = plVar4;
  (**(code **)(*plVar4 + 0x58))(plVar4,&uStack_50,alStack_70,1);
  if (((((int)plVar1 == 0) ||
       (puVar2 = param_1, FUN_1001ee204(param_1,alStack_70,uVar3,0), (int)puVar2 == 0)) ||
      (puVar2 = param_1,
      FUN_1001ee518(param_1,alStack_70,0,&cStack_71,uVar3,
                    *(long *)(alStack_70[0] + 8) - (lStack_60 + (ulong)bStack_58)), (int)puVar2 == 0
      )) || ((plVar1 = plVar4, (**(code **)(*plVar4 + 0x60))(plVar4,&uStack_50,&uStack_88),
             ((ulong)plVar1 & 1) == 0 ||
             ((cStack_71 == '\x01' &&
              (func_0x000107c2b918(param_1,param_1 + 0x33,uStack_88,uStack_80,0), (int)param_1 == 0)
              ))))) {
    plVar4 = (long *)0x0;
  }
  else {
    uStack_98 = uStack_88;
    uStack_90 = uStack_80;
    uStack_88 = 0;
    uStack_80 = 0;
    (**(code **)(*plVar4 + 0x68))(plVar4,&uStack_98);
    FUN_1001e33e0(uStack_98);
    uStack_98 = 0;
    uStack_90 = 0;
  }
  FUN_1001e33e0(uStack_88);
  FUN_1001ed8c0(&uStack_50);
  return plVar4;
}



/* Entry: 1001ee204; end: 1001ee517;  */

void FUN_1001ee204(long *param_1,undefined8 param_2,int param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  bool bVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long *plVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  ushort uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ushort uVar17;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  int iVar4;
  
  iVar3 = (int)auStack_a0;
  iVar4 = (int)auStack_a0;
  puVar14 = (undefined8 *)*param_1;
  uVar6 = param_2;
  FUN_1001ec108(param_2,*(undefined2 *)((long)param_1 + 0x61c));
  if ((int)uVar6 != 0) {
    if (param_3 == 1) {
      plVar8 = param_1 + 0x3d;
    }
    else {
      plVar8 = (long *)(puVar14[6] + 0x30);
    }
    uVar6 = param_2;
    FUN_1001ed748(param_2,plVar8,0x20);
    if (((((int)uVar6 != 0) &&
         (uVar6 = param_2, FUN_1001ec3c0(param_2,auStack_a0,1), (int)uVar6 != 0)) &&
        (((param_4 & 1) != 0 ||
         (((*(ushort *)(puVar14[6] + 0xd4) >> 5 & 1) != 0 ||
          (FUN_1001ed748(auStack_a0,(long)param_1 + 0x623,*(undefined1 *)((long)param_1 + 0x643)),
          iVar3 != 0)))))) &&
       ((*(char *)*puVar14 == '\0' ||
        ((uVar6 = param_2, FUN_1001ec3c0(param_2,auStack_a0,1), (int)uVar6 != 0 &&
         (FUN_1001ed748(auStack_a0,puVar14[7] + 1,*(undefined8 *)(puVar14[7] + 0x108)), iVar4 != 0))
        )))) {
      lVar2 = *param_1;
      uVar10 = 4;
      if (*(long *)(param_1[1] + 0x40) != 0) {
        uVar10 = 0;
      }
      uVar6 = param_2;
      FUN_1001ec3c0(param_2,auStack_80,2);
      if ((int)uVar6 != 0) {
        if ((*(ushort *)(*(long *)(lVar2 + 0x68) + 0x2f0) >> 5 & 1) != 0) {
          uVar1 = (*(byte *)((long)param_1 + 0x644) | 0xe) & 0xfa;
          puVar7 = auStack_80;
          FUN_1001ec108(puVar7,uVar1 | uVar1 << 8);
          if ((int)puVar7 == 0) {
            return;
          }
        }
        if (0x303 < *(ushort *)((long)param_1 + 0x1e)) {
          puVar7 = auStack_80;
          FUN_1001ec108(puVar7,0x1301);
          if ((int)puVar7 == 0) {
            return;
          }
          puVar7 = auStack_80;
          FUN_1001ec108(puVar7,0x1302);
          if ((int)puVar7 == 0) {
            return;
          }
          puVar7 = auStack_80;
          FUN_1001ec108(puVar7,0x1303);
          if ((int)puVar7 == 0) {
            return;
          }
        }
        if ((param_3 != 1) && (*(ushort *)((long)param_1 + 0x1c) < 0x304)) {
          if (*(long *)(lVar2 + 8) != 0) {
            puVar14 = *(undefined8 **)(*(long *)(lVar2 + 8) + 0x18);
            if (puVar14 == (undefined8 *)0x0) {
              puVar14 = *(undefined8 **)(*(long *)(lVar2 + 0x68) + 0xe8);
            }
            puVar13 = (ulong *)*puVar14;
            if ((puVar13 != (ulong *)0x0) && (uVar15 = *puVar13, uVar15 != 0)) {
              bVar9 = false;
              uVar16 = 0;
LAB_1001ee3c0:
              do {
                if (uVar16 < *puVar13) {
                  lVar11 = *(long *)(puVar13[1] + uVar16 * 8);
                }
                else {
                  lVar11 = 0;
                }
                if (((*(uint *)(lVar11 + 0x14) & uVar10) == 0) &&
                   (uVar1 = *(uint *)(lVar11 + 0x18), (uVar1 & uVar10) == 0)) {
                  if (*(uint *)(lVar11 + 0x14) == 8) {
                    if (0x303 < *(ushort *)((long)param_1 + 0x1e)) {
                      uVar17 = 0x304;
LAB_1001ee440:
                      if (*(ushort *)((long)param_1 + 0x1c) <= uVar17) goto LAB_1001ee45c;
                    }
                  }
                  else {
                    uVar17 = 0x303;
                    if (uVar1 == 8) {
                      uVar12 = 0x304;
                    }
                    else {
                      uVar12 = 0x300;
                      if (*(int *)(lVar11 + 0x24) != 1) {
                        uVar12 = uVar17;
                      }
                    }
                    if (uVar12 <= *(ushort *)((long)param_1 + 0x1e)) {
                      if (uVar1 == 8) {
                        uVar17 = 0x304;
                      }
                      goto LAB_1001ee440;
                    }
                  }
                }
                uVar16 = uVar16 + 1;
                if (uVar15 == uVar16) {
                  if (!bVar9) break;
                  goto LAB_1001ee4b0;
                }
              } while( true );
            }
          }
          if (*(ushort *)((long)param_1 + 0x1e) < 0x304) {
            FUN_1004d2c58(0x10,0,0xaf,&UNK_10f6cff25,0x110);
            return;
          }
        }
LAB_1001ee4b0:
        if ((*(byte *)(lVar2 + 0x85) >> 2 & 1) != 0) {
          puVar7 = auStack_80;
          FUN_1001ec108(puVar7,0x5600);
          if ((int)puVar7 == 0) {
            return;
          }
        }
        uVar6 = param_2;
        FUN_1001ebf4c();
        if (((int)uVar6 != 0) && (uVar6 = param_2, FUN_1001ec260(param_2,1), (int)uVar6 != 0)) {
          FUN_1001ec260(param_2,0);
        }
      }
    }
  }
  return;
LAB_1001ee45c:
  puVar7 = auStack_80;
  FUN_1001ec108(puVar7,*(undefined2 *)(lVar11 + 0x10));
  if ((int)puVar7 == 0) {
    return;
  }
  bVar9 = true;
  bVar5 = uVar15 - 1 == uVar16;
  uVar16 = uVar16 + 1;
  if (bVar5) goto LAB_1001ee4b0;
  goto LAB_1001ee3c0;
}



/* Entry: 1001ee518; end: 1001eec3b;  */

bool FUN_1001ee518(long *param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  long *plVar6;
  long **pplVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  long *aplStack_d0 [2];
  long lStack_c0;
  byte bStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  
  *param_4 = 0;
  puVar14 = (undefined8 *)*param_1;
  if ((int)param_5 != 1) {
    plVar6 = param_2;
    FUN_1001ec3c0(param_2,&plStack_90,2);
    if ((int)plVar6 == 0) {
      uVar8 = 0xd71;
      goto LAB_1001ee9dc;
    }
    *(undefined4 *)(param_1 + 0x2f) = 0;
    if ((*(ushort *)(puVar14[0xd] + 0x2f0) >> 5 & 1) != 0) {
      uVar16 = (*(byte *)((long)param_1 + 0x646) | 0xe) & 0xfa;
      pplVar7 = &plStack_90;
      FUN_1001eec3c(pplVar7,uVar16 | uVar16 << 8,0);
      if ((int)pplVar7 == 0) {
        return false;
      }
    }
    uVar13 = 0;
    do {
      lVar10 = lStack_80;
      uVar17 = uVar13;
      if (param_1[0x56] != 0) {
        uVar17 = (ulong)*(byte *)(param_1[0x55] + uVar13);
      }
      lVar9 = plStack_90[1];
      uVar15 = uStack_78 & 0xff;
      plVar6 = param_1;
      (*(code *)(&PTR_FUN_110c89b50)[uVar17 * 5])(param_1,&plStack_90,&plStack_90,param_5);
      if ((int)plVar6 == 0) {
        FUN_1004d2c58(0x10,0,0x93,&UNK_10f6cfd23,0xd88);
        func_0x000107c2b2a4(&UNK_10f6cfd94);
        return false;
      }
      lVar9 = lVar9 - (lVar10 + uVar15);
      lVar10 = plStack_90[1] - (lStack_80 + (uStack_78 & 0xff));
      if (lVar10 != lVar9) {
        *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) | 1 << (ulong)((uint)uVar17 & 0x1f);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x18);
    uVar16 = (uint)(lVar10 - lVar9 == 4);
    if ((*(ushort *)(puVar14[0xd] + 0x2f0) >> 5 & 1) != 0) {
      uVar16 = *(byte *)((long)param_1 + 0x647) & 0xf0;
      uVar2 = uVar16 | 10;
      uVar2 = uVar2 | uVar2 << 8;
      uVar1 = uVar2 ^ 0x1010;
      if (uVar16 != (*(byte *)((long)param_1 + 0x646) & 0xf0)) {
        uVar1 = uVar2;
      }
      pplVar7 = &plStack_90;
      FUN_1001eec3c(pplVar7,uVar1,1);
      uVar16 = 0;
      if ((int)pplVar7 == 0) {
        return false;
      }
    }
    lVar10 = *param_1;
    plVar6 = param_1;
    func_0x0001001efe8c(param_1,param_5);
    if ((int)plVar6 == 0) {
      lVar10 = 0;
    }
    else {
      lVar9 = *(long *)(lVar10 + 0x58);
      func_0x0001001fe454();
      lVar10 = (ulong)*(uint *)(lVar9 + 4) + *(long *)(*(long *)(lVar10 + 0x58) + 0xf8) + 0xf;
    }
    if ((((*(byte *)*puVar14 & 1) == 0) && (puVar14[0x13] == 0)) &&
       (-1 < *(short *)(puVar14[6] + 0xd4))) {
      lVar9 = (param_6 + lVar10 + plStack_90[1]) - (lStack_80 + (uStack_78 & 0xff));
      uVar13 = lVar9 + 6;
      uVar16 = uVar16 & lVar10 == 0;
      uVar15 = (ulong)uVar16;
      uVar17 = lVar9 + 0xb;
      if (uVar16 == 0) {
        uVar17 = uVar13;
      }
      if ((uVar17 & 0xffffffffffffff00) == 0x100) {
        if (uVar13 < 0x1fc) {
          uVar15 = 0x1fc - uVar13;
          goto LAB_1001eeb6c;
        }
        uVar15 = 1;
      }
      else {
LAB_1001eeb6c:
        if (uVar15 == 0) goto LAB_1001eea54;
      }
      pplVar7 = &plStack_90;
      FUN_1001eec3c(pplVar7,0x15,uVar15);
      if ((int)pplVar7 == 0) {
        return false;
      }
    }
LAB_1001eea54:
    FUN_1001eff24(param_1,&plStack_90,param_4,param_5);
    if (((ulong)param_1 & 1) != 0) {
      if ((plStack_90[1] == lStack_80 + (uStack_78 & 0xff)) &&
         (puVar14 = (undefined8 *)param_2[1], puVar14 != (undefined8 *)0x0)) {
        *(undefined8 *)(*param_2 + 8) = puVar14[2];
        *puVar14 = 0;
        param_2[1] = 0;
      }
      FUN_1001ebf4c();
      return (int)param_2 != 0;
    }
    uVar8 = 0xdd2;
LAB_1001ee9dc:
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6cfd23,uVar8);
    return false;
  }
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_98 = 0;
  lStack_a0 = 0;
  plVar6 = param_2;
  FUN_1001ec3c0(param_2,aplStack_d0,2);
  if (((int)plVar6 == 0) || (uVar8 = param_3, FUN_1001ec3c0(param_3,auStack_f0,2), (int)uVar8 == 0))
  {
LAB_1001ee990:
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6cfd23,0xd05);
  }
  else {
    pplVar7 = &plStack_90;
    FUN_1001ebea0(pplVar7,0x40);
    if ((int)pplVar7 == 0) goto LAB_1001ee990;
    pplVar7 = &plStack_b0;
    FUN_1001ebea0(pplVar7,0x40);
    if ((int)pplVar7 == 0) goto LAB_1001ee990;
    *(undefined4 *)((long)param_1 + 0x17c) = 0;
    if ((*(ushort *)(puVar14[0xd] + 0x2f0) >> 5 & 1) == 0) {
LAB_1001ee5f4:
      uVar13 = 0;
      do {
        lVar9 = lStack_80;
        lVar10 = lStack_c0;
        uVar17 = uVar13;
        if (param_1[0x56] != 0) {
          uVar17 = (ulong)*(byte *)(param_1[0x55] + uVar13);
        }
        lVar11 = aplStack_d0[0][1];
        uVar18 = (ulong)bStack_b8;
        lVar12 = plStack_90[1];
        uVar15 = uStack_78 & 0xff;
        plVar6 = param_1;
        (*(code *)(&PTR_FUN_110c89b50)[uVar17 * 5])(param_1,aplStack_d0,&plStack_90,1);
        if (((ulong)plVar6 & 1) == 0) {
          FUN_1004d2c58(0x10,0,0x93,&UNK_10f6cfd23,0xd1d);
          func_0x000107c2b2a4(&UNK_10f6cfd94);
          goto LAB_1001ee9ac;
        }
        lVar12 = lVar12 - (lVar9 + uVar15);
        lVar9 = plStack_90[1] - (lStack_80 + (uStack_78 & 0xff));
        if (aplStack_d0[0][1] - (lStack_c0 + (ulong)bStack_b8) != lVar11 - (lVar10 + uVar18) ||
            lVar9 != lVar12) {
          *(uint *)((long)param_1 + 0x17c) =
               *(uint *)((long)param_1 + 0x17c) | 1 << (ulong)((uint)uVar17 & 0x1f);
        }
        if (lVar9 != lVar12) {
          pplVar7 = &plStack_b0;
          FUN_1001ec108(pplVar7,*(undefined2 *)(&UNK_110c89b48 + uVar17 * 0x28));
          if ((int)pplVar7 == 0) goto LAB_1001ee9ac;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x18);
      if ((*(ushort *)(puVar14[0xd] + 0x2f0) >> 5 & 1) == 0) {
LAB_1001ee748:
        puVar5 = auStack_f0;
        FUN_1001ed748(puVar5,lStack_c0 + (ulong)bStack_b8 + *aplStack_d0[0],
                      aplStack_d0[0][1] - (lStack_c0 + (ulong)bStack_b8));
        if ((int)puVar5 != 0) {
          lVar10 = lStack_80 + (uStack_78 & 0xff);
          lVar9 = plStack_90[1] - lVar10;
          if (lVar9 == 0) {
LAB_1001ee78c:
            lVar10 = lStack_c0;
            lVar9 = aplStack_d0[0][1];
            uVar13 = (ulong)bStack_b8;
            FUN_1001eff24(param_1,aplStack_d0,param_4,1);
            if ((int)param_1 != 0) {
              lVar9 = lVar9 - (lVar10 + uVar13);
              puVar5 = auStack_f0;
              FUN_1001ed748(puVar5,*aplStack_d0[0] + lStack_c0 + (ulong)bStack_b8 + lVar9,
                            (aplStack_d0[0][1] - (lStack_c0 + (ulong)bStack_b8)) - lVar9);
              if (((int)puVar5 != 0) && (FUN_1001ebf4c(), (int)param_2 != 0)) {
                FUN_1001ebf4c(param_3);
                bVar3 = (int)param_3 != 0;
                goto LAB_1001ee9b0;
              }
            }
          }
          else {
            pplVar7 = aplStack_d0;
            FUN_1001ed748(pplVar7,*plStack_90 + lVar10,lVar9);
            if ((int)pplVar7 != 0) {
              puVar5 = auStack_f0;
              FUN_1001ec108(puVar5,0xfd00);
              if ((int)puVar5 != 0) {
                puVar5 = auStack_f0;
                FUN_1001ec3c0(puVar5,auStack_110,2);
                if ((int)puVar5 != 0) {
                  puVar5 = auStack_110;
                  FUN_1001ec3c0(puVar5,auStack_130,1);
                  if ((int)puVar5 != 0) {
                    lVar10 = lStack_a0 + (uStack_98 & 0xff);
                    puVar5 = auStack_130;
                    FUN_1001ed748(puVar5,lVar10 + *plStack_b0,plStack_b0[1] - lVar10);
                    if ((int)puVar5 != 0) {
                      iVar4 = (int)auStack_f0;
                      FUN_1001ebf4c();
                      if (iVar4 != 0) goto LAB_1001ee78c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar16 = *(byte *)((long)param_1 + 0x647) & 0xf0;
        uVar2 = uVar16 | 10;
        uVar2 = uVar2 | uVar2 << 8;
        uVar1 = uVar2 ^ 0x1010;
        if (uVar16 != (*(byte *)((long)param_1 + 0x646) & 0xf0)) {
          uVar1 = uVar2;
        }
        pplVar7 = &plStack_90;
        FUN_1001eec3c(pplVar7,uVar1,1);
        if ((int)pplVar7 != 0) {
          pplVar7 = &plStack_b0;
          FUN_1001ec108(pplVar7,uVar1);
          if ((int)pplVar7 != 0) goto LAB_1001ee748;
        }
      }
    }
    else {
      uVar16 = (*(byte *)((long)param_1 + 0x646) | 0xe) & 0xfa;
      uVar16 = uVar16 | uVar16 << 8;
      pplVar7 = &plStack_90;
      FUN_1001eec3c(pplVar7,uVar16,0);
      if ((int)pplVar7 != 0) {
        pplVar7 = &plStack_b0;
        FUN_1001ec108(pplVar7,uVar16);
        if ((int)pplVar7 != 0) goto LAB_1001ee5f4;
      }
    }
  }
LAB_1001ee9ac:
  bVar3 = false;
LAB_1001ee9b0:
  FUN_1001ed8c0(&plStack_b0);
  FUN_1001ed8c0(&plStack_90);
  return bVar3;
}



/* Entry: 1001eec3c; end: 1001eecc3;  */

bool FUN_1001eec3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_40;
  uVar3 = param_1;
  FUN_1001ec108();
  if ((((int)uVar3 == 0) || (uVar3 = param_1, FUN_1001ec3c0(param_1,auStack_40,2), (int)uVar3 == 0))
     || (FUN_1001eed20(auStack_40,param_3), iVar1 == 0)) {
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6cfd23,0xcf0);
    bVar2 = false;
  }
  else {
    FUN_1001ebf4c(param_1);
    bVar2 = (int)param_1 != 0;
  }
  return bVar2;
}



/* Entry: 1001eecc4; end: 1001eed1f;  */

void FUN_1001eecc4(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_1001ebf4c();
  if ((int)plVar1 != 0) {
    lVar3 = *param_1;
    lVar2 = lVar3;
    FUN_1001ec148(lVar3,param_2,param_3);
    if ((int)lVar2 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + param_3;
    }
  }
  return;
}



/* Entry: 1001eed20; end: 1001eed67;  */

void FUN_1001eed20(undefined8 param_1,long param_2)

{
  undefined8 uStack_28;
  
  FUN_1001eecc4(param_1,&uStack_28,param_2);
  if (((int)param_1 != 0) && (param_2 != 0)) {
    func_0x000107c60ee4(uStack_28,param_2);
  }
  return;
}



/* Entry: 1001eed68; end: 1001eee47;  */

void FUN_1001eed68(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  iVar1 = (int)auStack_90;
  if (param_4 == 2) {
    lVar5 = *(long *)(param_1[0xbe] + 0x20);
    lVar2 = *(long *)(param_1[0xbe] + 0x28);
  }
  else {
    lVar5 = *(long *)(*param_1 + 0x90);
    if (lVar5 == 0) {
      return;
    }
    lVar2 = lVar5;
    func_0x000107c613d0(lVar5);
  }
  uVar3 = param_2;
  FUN_1001ec108(param_2,0);
  if (((int)uVar3 != 0) && (uVar3 = param_2, FUN_1001ec3c0(param_2,auStack_50,2), (int)uVar3 != 0))
  {
    puVar4 = auStack_50;
    FUN_1001ec3c0(puVar4,auStack_70,2);
    if ((int)puVar4 != 0) {
      puVar4 = auStack_70;
      FUN_1001ec260(puVar4,0);
      if ((int)puVar4 != 0) {
        puVar4 = auStack_70;
        FUN_1001ec3c0(puVar4,auStack_90,2);
        if (((int)puVar4 != 0) && (FUN_1001ed748(auStack_90,lVar5,lVar2), iVar1 != 0)) {
          FUN_1001ebf4c(param_2);
        }
      }
    }
  }
  return;
}



/* Entry: 1001eee48; end: 1001ef007;  */

void FUN_1001eee48(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar3;
  undefined1 auStack_40 [32];
  int iVar2;
  
  iVar1 = (int)auStack_40;
  iVar2 = (int)auStack_40;
  if (param_4 == 1) {
    uVar3 = param_2;
    FUN_1001ec108(param_2,0xfe0d);
    if (((int)uVar3 != 0) && (uVar3 = param_2, FUN_1001ec108(param_2,1), (int)uVar3 != 0)) {
      FUN_1001ec260(param_2,1);
    }
  }
  else if ((((*(long *)(param_1 + 0x220) != 0) &&
            (uVar3 = param_2, FUN_1001ec108(param_2,0xfe0d), (int)uVar3 != 0)) &&
           (uVar3 = param_2, FUN_1001ec3c0(param_2,auStack_40,2), (int)uVar3 != 0)) &&
          ((FUN_1001ec260(auStack_40,0), iVar1 != 0 &&
           (FUN_1001ed748(auStack_40,*(undefined8 *)(param_1 + 0x218),
                          *(undefined8 *)(param_1 + 0x220)), iVar2 != 0)))) {
    FUN_1001ebf4c(param_2);
  }
  return;
}



/* Entry: 1001ef008; end: 1001ef10f;  */

void FUN_1001ef008(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  short *psVar6;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  iVar2 = (int)auStack_80;
  lVar5 = *param_1;
  uVar3 = param_3;
  FUN_1001ec108(param_3,10);
  if (((int)uVar3 != 0) && (uVar3 = param_3, FUN_1001ec3c0(param_3,auStack_60,2), (int)uVar3 != 0))
  {
    puVar4 = auStack_60;
    FUN_1001ec3c0(puVar4,auStack_80,2);
    if ((int)puVar4 != 0) {
      if (((*(ushort *)(*(long *)(lVar5 + 0x68) + 0x2f0) >> 5 & 1) != 0) &&
         (uVar1 = (*(byte *)((long)param_1 + 0x645) | 0xe) & 0xfa,
         FUN_1001ec108(auStack_80,uVar1 | uVar1 << 8), iVar2 == 0)) {
        return;
      }
      lVar5 = *(long *)(param_1[1] + 0x68);
      if (lVar5 == 0) {
        psVar6 = (short *)&UNK_10e52ac82;
        lVar5 = 3;
      }
      else {
        psVar6 = *(short **)(param_1[1] + 0x60);
      }
      lVar5 = lVar5 << 1;
      do {
        if (((*psVar6 != 0x4138) || (0x303 < *(ushort *)((long)param_1 + 0x1e))) &&
           (iVar2 = (int)auStack_80, FUN_1001ec108(), iVar2 == 0)) {
          return;
        }
        psVar6 = psVar6 + 1;
        lVar5 = lVar5 + -2;
      } while (lVar5 != 0);
      FUN_1001ebf4c(param_3);
    }
  }
  return;
}



/* Entry: 1001ef110; end: 1001ef133;  */

undefined1 * FUN_1001ef110(long param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  if ((param_4 != 1) && (*(ushort *)(param_1 + 0x1c) < 0x304)) {
    puVar1 = auStack_60;
    puVar2 = param_2;
    FUN_1001ec108(param_2,0xb);
    if (((int)puVar2 != 0) &&
       (puVar2 = param_2, FUN_1001ec3c0(param_2,auStack_40,2), (int)puVar2 != 0)) {
      puVar2 = auStack_40;
      FUN_1001ec3c0(puVar2,auStack_60,1);
      if (((int)puVar2 != 0) && (FUN_1001ec260(auStack_60,0), puVar2 = puVar1, (int)puVar1 != 0)) {
        FUN_1001ebf4c(param_2);
        puVar2 = (undefined1 *)(ulong)((int)param_2 != 0);
      }
    }
    return puVar2;
  }
  return (undefined1 *)0x1;
}



/* Entry: 1001ef134; end: 1001ef1ab;  */

void FUN_1001ef134(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_60;
  uVar2 = param_1;
  FUN_1001ec108(param_1,0xb);
  if (((int)uVar2 != 0) && (uVar2 = param_1, FUN_1001ec3c0(param_1,auStack_40,2), (int)uVar2 != 0))
  {
    puVar3 = auStack_40;
    FUN_1001ec3c0(puVar3,auStack_60,1);
    if (((int)puVar3 != 0) && (FUN_1001ec260(auStack_60,0), iVar1 != 0)) {
      FUN_1001ebf4c(param_1);
    }
  }
  return;
}



/* Entry: 1001ef1ac; end: 1001ef28b;  */

void FUN_1001ef1ac(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [32];
  
  if ((param_4 != 1) && (*(ushort *)((long)param_1 + 0x1c) < 0x304)) {
    iVar1 = (int)auStack_50;
    lVar4 = *param_1;
    if ((*(byte *)(lVar4 + 0x81) >> 6 & 1) == 0) {
      if (((((*(ushort *)(*(long *)(lVar4 + 0x30) + 0xd4) >> 5 & 1) == 0) &&
           (lVar2 = *(long *)(lVar4 + 0x58), lVar2 != 0)) && (*(long *)(lVar2 + 0xf8) != 0)) &&
         (FUN_1001fde80(), (uint)lVar2 < 0x304)) {
        uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x58) + 0xf0);
        uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x58) + 0xf8);
      }
      else {
        uVar5 = 0;
        uVar6 = 0;
      }
      uVar3 = param_2;
      FUN_1001ec108(param_2,0x23);
      if ((((int)uVar3 != 0) &&
          (uVar3 = param_2, FUN_1001ec3c0(param_2,auStack_50,2), (int)uVar3 != 0)) &&
         (FUN_1001ed748(auStack_50,uVar6,uVar5), iVar1 != 0)) {
        FUN_1001ebf4c(param_2);
      }
    }
  }
  return;
}



/* Entry: 1001ef28c; end: 1001ef48b;  */

void FUN_1001ef28c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_60;
  if (*(long *)(param_1[1] + 0x80) == 0) {
    if (*(long *)(*param_1 + 0x98) != 0) {
      FUN_1004d2c58(0x10,0,0x133,&UNK_10f6cfd23,0x58e);
    }
  }
  else if ((((*(ushort *)(*(long *)(*param_1 + 0x30) + 0xd4) >> 5 & 1) == 0) &&
           (uVar2 = param_3, FUN_1001ec108(param_3,0x10), (int)uVar2 != 0)) &&
          (uVar2 = param_3, FUN_1001ec3c0(param_3,auStack_40,2), (int)uVar2 != 0)) {
    puVar3 = auStack_40;
    FUN_1001ec3c0(puVar3,auStack_60,2);
    if (((int)puVar3 != 0) &&
       (FUN_1001ed748(auStack_60,*(undefined8 *)(param_1[1] + 0x78),
                      *(undefined8 *)(param_1[1] + 0x80)), iVar1 != 0)) {
      FUN_1001ebf4c(param_3);
    }
  }
  return;
}


