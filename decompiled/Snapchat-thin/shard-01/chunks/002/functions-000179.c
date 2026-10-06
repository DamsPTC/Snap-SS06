/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e27b40; end: 100e27b83;  */

void FUN_100e27b40(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e27b84; end: 100e27b9f;  */

ulong FUN_100e27b84(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *param_2;
  uVar3 = param_2[1];
  cVar4 = (char)param_2[2];
  bVar5 = (byte)param_1[2];
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      if (cVar4 == '\0') {
        if ((uVar6 == uVar1) && (uVar2 == uVar3)) {
          return 1;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(uVar6,uVar2,uVar1,uVar3,0);
        return uVar6;
      }
    }
    else if (cVar4 == '\x01') {
LAB_100e287fc:
      return (ulong)(((uint)uVar1 ^ (uint)uVar6 ^ 1) & 1);
    }
  }
  else if (bVar5 == 2) {
    if (cVar4 == '\x02') goto LAB_100e287fc;
  }
  else if (uVar6 == 0 && uVar2 == 0) {
    if ((cVar4 == '\x03') && (uVar3 == 0 && uVar1 == 0)) {
      return 1;
    }
  }
  else {
    if (uVar6 == 1 && uVar2 == 0) {
      if (cVar4 != '\x03') {
        return 0;
      }
      if (uVar1 != 1) {
        return 0;
      }
    }
    else {
      if (cVar4 != '\x03') {
        return 0;
      }
      if (uVar1 != 2) {
        return 0;
      }
    }
    if (uVar3 == 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 100e27ba0; end: 100e27bf7;  */

uint FUN_100e27ba0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_100e2887c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e27bf8; end: 100e2836b;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000100e27dc4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100e27bf8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined1 in_b0;
  byte bVar17;
  undefined1 in_register_00005001;
  byte bVar18;
  undefined1 in_register_00005002;
  byte bVar19;
  undefined1 in_register_00005003;
  byte bVar20;
  undefined1 in_register_00005004;
  byte bVar21;
  undefined1 in_register_00005005;
  byte bVar22;
  undefined1 in_register_00005006;
  byte bVar23;
  undefined1 in_register_00005007;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lVar11 = *param_1;
  lVar2 = param_1[1];
  lVar1 = param_1[2];
  lVar3 = param_1[3];
  puVar10 = (undefined *)param_1[4];
  lVar4 = param_1[5];
  bVar17 = *(byte *)(param_1 + 6);
  func_0x000107c40f00(*(undefined8 *)(unaff_x20 + 0x20));
  dVar5 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  bVar18 = bVar17 >> 5;
  if (bVar18 < 2) {
    if (bVar18 == 0) {
      uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
      puVar10 = PTR_PTR_1126aed08;
      func_0x000107c61168(PTR_PTR_1126aed08);
      func_0x000107c5fadc(lVar11,lVar2);
      func_0x000107c43208(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                          dVar5 - *(double *)(unaff_x20 + 0x70),puVar10);
    }
    else {
      uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
      puVar10 = PTR_PTR_1126aed08;
      func_0x000107c61168(PTR_PTR_1126aed08);
      func_0x000107c5fadc(lVar11,lVar2);
      func_0x000107c409ac(puVar10);
    }
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
LAB_100e28124:
    func_0x000107c4bcd4(uVar15);
LAB_100e28134:
    func_0x000107c61170(puVar10);
  }
  else {
    if (bVar18 == 2) {
      uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
      puVar8 = PTR_PTR_1126aed08;
      func_0x000107c61168(PTR_PTR_1126aed08);
      func_0x000107c5dd08();
      func_0x000107c61180();
      func_0x000107c4bcd4(uVar15);
      func_0x000107c61170(puVar8);
      lVar9 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 != 0) {
        lVar7 = lVar11;
        func_0x000107c5fadc(lVar11,lVar2);
        func_0x000107c4bc88(lVar9);
        func_0x000107c615e8(lVar9);
        func_0x000107c61170(lVar7);
      }
      uStack_b8 = *(undefined8 *)(unaff_x20 + 0x38);
      uStack_c0 = *(undefined8 *)(unaff_x20 + 0x30);
      uStack_b0 = *(undefined8 *)(unaff_x20 + 0x40);
      uStack_a8 = *(undefined8 *)(unaff_x20 + 0x48);
      uStack_98 = *(undefined8 *)(unaff_x20 + 0x58);
      uStack_a0 = *(undefined8 *)(unaff_x20 + 0x50);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x60);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x68);
      *(long *)(unaff_x20 + 0x30) = lVar11;
      *(long *)(unaff_x20 + 0x38) = lVar2;
      *(long *)(unaff_x20 + 0x40) = lVar1;
      *(long *)(unaff_x20 + 0x48) = lVar3;
      *(undefined **)(unaff_x20 + 0x50) = puVar10;
      *(long *)(unaff_x20 + 0x58) = lVar4;
      *(byte *)(unaff_x20 + 0x60) = bVar17;
      *(double *)(unaff_x20 + 0x68) = dVar5;
      func_0x000107c61434(lVar2);
      goto LAB_100e28164;
    }
    if (bVar18 != 3) {
      if ((((lVar1 == 0 && lVar2 == 0) && (lVar11 == 0 && lVar3 == 0)) &&
           (puVar10 == (undefined *)0x0 && lVar4 == 0)) && (bVar17 == 0x80)) {
        return;
      }
      if (((bVar17 == 0x80) && (lVar11 == 1)) &&
         (((lVar1 == 0 && lVar2 == 0) && lVar3 == 0) && (puVar10 == (undefined *)0x0 && lVar4 == 0))
         ) {
        uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
        puVar8 = PTR_PTR_1126aed08;
        func_0x000107c61168(PTR_PTR_1126aed08);
        func_0x000107c5bc5c();
        func_0x000107c61180();
        func_0x000107c4bcd4(uVar15);
        func_0x000107c61170(puVar8);
        uStack_b8 = *(undefined8 *)(unaff_x20 + 0x38);
        uStack_c0 = *(undefined8 *)(unaff_x20 + 0x30);
        uStack_b0 = *(undefined8 *)(unaff_x20 + 0x40);
        uStack_a8 = *(undefined8 *)(unaff_x20 + 0x48);
        uStack_98 = *(undefined8 *)(unaff_x20 + 0x58);
        uStack_a0 = *(undefined8 *)(unaff_x20 + 0x50);
        uStack_90 = *(undefined8 *)(unaff_x20 + 0x60);
        uStack_88 = *(undefined8 *)(unaff_x20 + 0x68);
        *(undefined8 *)(unaff_x20 + 0x30) = 1;
        *(long *)(unaff_x20 + 0x38) = lVar2;
        *(long *)(unaff_x20 + 0x40) = lVar1;
        *(long *)(unaff_x20 + 0x48) = lVar3;
        *(undefined **)(unaff_x20 + 0x50) = puVar10;
        *(long *)(unaff_x20 + 0x58) = lVar4;
        *(undefined1 *)(unaff_x20 + 0x60) = 0x80;
        *(double *)(unaff_x20 + 0x68) = dVar5;
        FUN_100e27238(&uStack_c0);
        *(double *)(unaff_x20 + 0x70) = dVar5;
        return;
      }
      if (((bVar17 != 0x80) || (lVar11 != 2)) ||
         (((lVar1 != 0 || lVar2 != 0) || lVar3 != 0) || (puVar10 != (undefined *)0x0 || lVar4 != 0))
         ) {
        if (((bVar17 == 0x80) && (lVar11 == 3)) &&
           (((lVar1 == 0 && lVar2 == 0) && lVar3 == 0) &&
            (puVar10 == (undefined *)0x0 && lVar4 == 0))) {
          uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
          puVar8 = PTR_PTR_1126aed08;
          func_0x000107c61168(PTR_PTR_1126aed08);
          func_0x000107c43210();
          func_0x000107c61180();
          func_0x000107c4bcd4(uVar15);
          func_0x000107c61170(puVar8);
          uStack_b8 = *(undefined8 *)(unaff_x20 + 0x38);
          uStack_c0 = *(undefined8 *)(unaff_x20 + 0x30);
          uStack_b0 = *(undefined8 *)(unaff_x20 + 0x40);
          uStack_a8 = *(undefined8 *)(unaff_x20 + 0x48);
          uStack_98 = *(undefined8 *)(unaff_x20 + 0x58);
          uStack_a0 = *(undefined8 *)(unaff_x20 + 0x50);
          uStack_90 = *(undefined8 *)(unaff_x20 + 0x60);
          uStack_88 = *(undefined8 *)(unaff_x20 + 0x68);
          *(undefined8 *)(unaff_x20 + 0x30) = 3;
          *(long *)(unaff_x20 + 0x38) = lVar2;
          *(long *)(unaff_x20 + 0x40) = lVar1;
          *(long *)(unaff_x20 + 0x48) = lVar3;
          *(undefined **)(unaff_x20 + 0x50) = puVar10;
          *(long *)(unaff_x20 + 0x58) = lVar4;
          *(undefined1 *)(unaff_x20 + 0x60) = 0x80;
          *(double *)(unaff_x20 + 0x68) = dVar5;
        }
        else {
          uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
          uVar15 = *(undefined8 *)(unaff_x20 + 0x48);
          bVar17 = *(byte *)(unaff_x20 + 0x38) | (byte)uVar15;
          bVar18 = *(byte *)(unaff_x20 + 0x39) | (byte)((ulong)uVar15 >> 8);
          bVar19 = *(byte *)(unaff_x20 + 0x3a) | (byte)((ulong)uVar15 >> 0x10);
          bVar20 = *(byte *)(unaff_x20 + 0x3b) | (byte)((ulong)uVar15 >> 0x18);
          bVar21 = *(byte *)(unaff_x20 + 0x3c) | (byte)((ulong)uVar15 >> 0x20);
          bVar22 = *(byte *)(unaff_x20 + 0x3d) | (byte)((ulong)uVar15 >> 0x28);
          bVar23 = *(byte *)(unaff_x20 + 0x3e) | (byte)((ulong)uVar15 >> 0x30);
          bVar24 = *(byte *)(unaff_x20 + 0x3f) | (byte)((ulong)uVar15 >> 0x38);
          bVar25 = *(byte *)(unaff_x20 + 0x40) | (byte)uVar13;
          bVar26 = *(byte *)(unaff_x20 + 0x41) | (byte)((ulong)uVar13 >> 8);
          bVar27 = *(byte *)(unaff_x20 + 0x42) | (byte)((ulong)uVar13 >> 0x10);
          bVar28 = *(byte *)(unaff_x20 + 0x43) | (byte)((ulong)uVar13 >> 0x18);
          bVar29 = *(byte *)(unaff_x20 + 0x44) | (byte)((ulong)uVar13 >> 0x20);
          bVar30 = *(byte *)(unaff_x20 + 0x45) | (byte)((ulong)uVar13 >> 0x28);
          bVar31 = *(byte *)(unaff_x20 + 0x46) | (byte)((ulong)uVar13 >> 0x30);
          bVar32 = *(byte *)(unaff_x20 + 0x47) | (byte)((ulong)uVar13 >> 0x38);
          auVar33[1] = bVar18;
          auVar33[0] = bVar17;
          auVar33[2] = bVar19;
          auVar33[3] = bVar20;
          auVar33[4] = bVar21;
          auVar33[5] = bVar22;
          auVar33[6] = bVar23;
          auVar33[7] = bVar24;
          auVar33[8] = bVar25;
          auVar33[9] = bVar26;
          auVar33[10] = bVar27;
          auVar33[0xb] = bVar28;
          auVar33[0xc] = bVar29;
          auVar33[0xd] = bVar30;
          auVar33[0xe] = bVar31;
          auVar33[0xf] = bVar32;
          auVar6[1] = bVar18;
          auVar6[0] = bVar17;
          auVar6[2] = bVar19;
          auVar6[3] = bVar20;
          auVar6[4] = bVar21;
          auVar6[5] = bVar22;
          auVar6[6] = bVar23;
          auVar6[7] = bVar24;
          auVar6[8] = bVar25;
          auVar6[9] = bVar26;
          auVar6[10] = bVar27;
          auVar6[0xb] = bVar28;
          auVar6[0xc] = bVar29;
          auVar6[0xd] = bVar30;
          auVar6[0xe] = bVar31;
          auVar6[0xf] = bVar32;
          auVar33 = NEON_ext(auVar33,auVar6,8,1);
          uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
          puVar8 = PTR_PTR_1126aed08;
          func_0x000107c61168(PTR_PTR_1126aed08);
          func_0x000107c409b8(CONCAT17(bVar24 | auVar33[7],
                                       CONCAT16(bVar23 | auVar33[6],
                                                CONCAT15(bVar22 | auVar33[5],
                                                         CONCAT14(bVar21 | auVar33[4],
                                                                  CONCAT13(bVar20 | auVar33[3],
                                                                           CONCAT12(bVar19 | auVar33
                                                  [2],CONCAT11(bVar18 | auVar33[1],
                                                               bVar17 | auVar33[0]))))))),
                              dVar5 - *(double *)(unaff_x20 + 0x70));
          func_0x000107c61180();
          func_0x000107c4bcd4(uVar15);
          func_0x000107c61170(puVar8);
          uStack_b8 = *(undefined8 *)(unaff_x20 + 0x38);
          uStack_c0 = *(undefined8 *)(unaff_x20 + 0x30);
          uStack_b0 = *(undefined8 *)(unaff_x20 + 0x40);
          uStack_a8 = *(undefined8 *)(unaff_x20 + 0x48);
          uStack_98 = *(undefined8 *)(unaff_x20 + 0x58);
          uStack_a0 = *(undefined8 *)(unaff_x20 + 0x50);
          uStack_90 = *(undefined8 *)(unaff_x20 + 0x60);
          uStack_88 = *(undefined8 *)(unaff_x20 + 0x68);
          *(undefined8 *)(unaff_x20 + 0x30) = 4;
          *(long *)(unaff_x20 + 0x38) = lVar2;
          *(long *)(unaff_x20 + 0x40) = lVar1;
          *(long *)(unaff_x20 + 0x48) = lVar3;
          *(undefined **)(unaff_x20 + 0x50) = puVar10;
          *(long *)(unaff_x20 + 0x58) = lVar4;
          *(undefined1 *)(unaff_x20 + 0x60) = 0x80;
          *(double *)(unaff_x20 + 0x68) = dVar5;
        }
        goto LAB_100e28164;
      }
      uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
      puVar10 = PTR_PTR_1126aed08;
      func_0x000107c61168(PTR_PTR_1126aed08);
      func_0x000107c4f770(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                          dVar5 - *(double *)(unaff_x20 + 0x70));
LAB_100e2811c:
      func_0x000107c61180();
      goto LAB_100e28124;
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    lVar9 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 != 0) {
      func_0x000107c5fadc(lVar11,lVar2);
      func_0x000107c4bc84(lVar9);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(lVar11);
    }
    if (1 < (bVar17 & 0x1f)) {
      if ((bVar17 & 0x1f) == 2) {
        uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
        puVar10 = PTR_PTR_1126aed08;
        func_0x000107c61168(PTR_PTR_1126aed08);
        func_0x000107c5dcf4(CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                            dVar5 - *(double *)(unaff_x20 + 0x70));
      }
      else if (puVar10 == (undefined *)0x0 && lVar4 == 0) {
        uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
        puVar10 = PTR_PTR_1126aed08;
        func_0x000107c61168(PTR_PTR_1126aed08);
        func_0x000107c5dd00(CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                            dVar5 - *(double *)(unaff_x20 + 0x70));
      }
      else {
        if (puVar10 != (undefined *)0x1 || lVar4 != 0) {
          uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
          puVar12 = PTR_PTR_1126aed08;
          func_0x000107c61168(PTR_PTR_1126aed08);
          puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar10 = PTR___sSiN_11034deb0;
          uStack_c0 = 0x67;
          uStack_b8 = 0xe100000000000000;
          puVar14 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          lStack_78 = lVar1;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar14);
          func_0x000107c5fb78(0x705f,0xe200000000000000);
          lStack_78 = lVar3;
          func_0x000107c6057c(puVar10,puVar8);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar8);
          uVar15 = uStack_b8;
          uVar13 = uStack_c0;
          func_0x000107c5fadc(uStack_c0,uStack_b8);
          func_0x000107c6142c(uVar15);
          func_0x000107c5dcfc(CONCAT17(in_register_00005007,
                                       CONCAT16(in_register_00005006,
                                                CONCAT15(in_register_00005005,
                                                         CONCAT14(in_register_00005004,
                                                                  CONCAT13(in_register_00005003,
                                                                           CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                              dVar5 - *(double *)(unaff_x20 + 0x70),puVar12);
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          func_0x000107c4bcd4(uVar16);
          func_0x000107c61170(puVar12);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar7 != 0) {
            func_0x000107c4bc8c();
            func_0x000107c615e8(lVar7);
          }
          goto LAB_100e28138;
        }
        uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
        puVar10 = PTR_PTR_1126aed08;
        func_0x000107c61168(PTR_PTR_1126aed08);
        func_0x000107c5dcf8(CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                            dVar5 - *(double *)(unaff_x20 + 0x70));
      }
      goto LAB_100e2811c;
    }
    if ((bVar17 & 0x1f) != 0) {
      uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
      puVar10 = PTR_PTR_1126aed08;
      func_0x000107c61168(PTR_PTR_1126aed08);
      func_0x000107c5dd04(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                          dVar5 - *(double *)(unaff_x20 + 0x70));
      goto LAB_100e2811c;
    }
    uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar8 = PTR_PTR_1126aed08;
    func_0x000107c61168(PTR_PTR_1126aed08);
    func_0x000107c4c064(CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                        dVar5 - *(double *)(unaff_x20 + 0x70));
    func_0x000107c61180();
    func_0x000107c4bcd4(uVar15);
    func_0x000107c61170(puVar8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c5fadc(puVar10,lVar4);
      func_0x000107c4bc90(lVar7);
      func_0x000107c615e8(lVar7);
      goto LAB_100e28134;
    }
  }
LAB_100e28138:
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 0x80;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xbff0000000000000;
LAB_100e28164:
  FUN_100e27238(&uStack_c0);
  return;
}



/* Entry: 100e2836c; end: 100e283d3;  */

void FUN_100e2836c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100e28460(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined1 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e283d4; end: 100e2844b;  */

/* WARNING: Possible PIC construction at 0x000100e28420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e28424) */
/* WARNING: Removing unreachable block (ram,0x000100e2844c) */
/* WARNING: Removing unreachable block (ram,0x000100e28458) */
/* WARNING: Removing unreachable block (ram,0x000100e28454) */

void FUN_100e283d4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint in_w6;
  
  uVar1 = in_w6 >> 5 & 7;
  if (uVar1 < 2) {
    if ((uVar1 != 0) && (uVar1 != 1)) {
      return;
    }
  }
  else if ((uVar1 != 2) && (uVar1 != 3)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 100e2844c; end: 100e2845f;  */

void FUN_100e2844c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 100e28460; end: 100e284d7;  */

/* WARNING: Possible PIC construction at 0x000100e284ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e284b0) */
/* WARNING: Removing unreachable block (ram,0x000100e27330) */
/* WARNING: Removing unreachable block (ram,0x000100e2733c) */
/* WARNING: Removing unreachable block (ram,0x000100e27338) */

void FUN_100e28460(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint in_w6;
  
  uVar1 = in_w6 >> 5 & 7;
  if (uVar1 < 2) {
    if ((uVar1 != 0) && (uVar1 != 1)) {
      return;
    }
  }
  else if ((uVar1 != 2) && (uVar1 != 3)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100e284d8; end: 100e28603;  */

undefined8 * FUN_100e284d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_100e283d4(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 100e28604; end: 100e2865f;  */

undefined8 * FUN_100e28604(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_100e28460(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 100e28660; end: 100e2872f;  */

int FUN_100e28660(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3b < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0x3c;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 0xc) >> 5) | (*(byte *)(param_1 + 0xc) >> 2 & 7) << 3) ^ 0x3f;
  if (0x3a < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100e28730; end: 100e2879f;  */

uint FUN_100e28730(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = (uint)&uStack_a0;
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_70 = *(undefined1 *)(param_1 + 6);
  dVar2 = (double)param_1[7];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = *(undefined1 *)(param_2 + 6);
  dVar3 = (double)param_2[7];
  FUN_100e2887c(&uStack_a0,&uStack_60);
  return uVar1 & dVar2 == dVar3;
}



/* Entry: 100e287a0; end: 100e2887b;  */

ulong FUN_100e287a0(ulong param_1,long param_2,byte param_3,ulong param_4,long param_5,char param_6)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
        if ((param_1 == param_4) && (param_2 == param_5)) {
          return 1;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(param_1,param_2,param_4,param_5,0);
        return param_1;
      }
    }
    else if (param_6 == '\x01') {
LAB_100e287fc:
      return (ulong)(((uint)param_4 ^ (uint)param_1 ^ 1) & 1);
    }
  }
  else if (param_3 == 2) {
    if (param_6 == '\x02') goto LAB_100e287fc;
  }
  else if (param_1 == 0 && param_2 == 0) {
    if ((param_6 == '\x03') && (param_5 == 0 && param_4 == 0)) {
      return 1;
    }
  }
  else {
    if (param_1 == 1 && param_2 == 0) {
      if (param_6 != '\x03') {
        return 0;
      }
      if (param_4 != 1) {
        return 0;
      }
    }
    else {
      if (param_6 != '\x03') {
        return 0;
      }
      if (param_4 != 2) {
        return 0;
      }
    }
    if (param_5 == 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 100e2887c; end: 100e28bc3;  */

/* WARNING: Possible PIC construction at 0x000100e28a6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e28a70) */
/* WARNING: Removing unreachable block (ram,0x000100e28a74) */

ulong FUN_100e2887c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
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
  undefined1 auVar30 [16];
  
  uVar8 = *param_1;
  uVar13 = param_1[1];
  bVar14 = (byte)param_1[6];
  bVar15 = bVar14 >> 5;
  if (bVar15 < 2) {
    if (bVar15 == 0) {
      if (0x1f < (byte)param_2[6]) {
        return 0;
      }
    }
    else if ((param_2[6] & 0xe0) != 0x20) {
      return 0;
    }
  }
  else {
    if (bVar15 != 2) {
      uVar1 = param_1[2];
      uVar3 = param_1[3];
      uVar9 = param_1[4];
      uVar10 = param_1[5];
      if (bVar15 != 3) {
        if ((((uVar1 == 0 && uVar13 == 0) && (uVar8 == 0 && uVar3 == 0)) &&
             (uVar9 == 0 && uVar10 == 0)) && (bVar14 == 0x80)) {
          if (((char)param_2[6] < -0x60) && ((char)param_2[6] == -0x80)) {
            uVar13 = param_2[5];
            uVar8 = param_2[4];
            bVar14 = (byte)param_2[2] | (byte)uVar8;
            bVar15 = *(byte *)((long)param_2 + 0x11) | (byte)(uVar8 >> 8);
            bVar16 = *(byte *)((long)param_2 + 0x12) | (byte)(uVar8 >> 0x10);
            bVar17 = *(byte *)((long)param_2 + 0x13) | (byte)(uVar8 >> 0x18);
            bVar18 = *(byte *)((long)param_2 + 0x14) | (byte)(uVar8 >> 0x20);
            bVar19 = *(byte *)((long)param_2 + 0x15) | (byte)(uVar8 >> 0x28);
            bVar20 = *(byte *)((long)param_2 + 0x16) | (byte)(uVar8 >> 0x30);
            bVar21 = *(byte *)((long)param_2 + 0x17) | (byte)(uVar8 >> 0x38);
            bVar22 = (byte)param_2[3] | (byte)uVar13;
            bVar23 = *(byte *)((long)param_2 + 0x19) | (byte)(uVar13 >> 8);
            bVar24 = *(byte *)((long)param_2 + 0x1a) | (byte)(uVar13 >> 0x10);
            bVar25 = *(byte *)((long)param_2 + 0x1b) | (byte)(uVar13 >> 0x18);
            bVar26 = *(byte *)((long)param_2 + 0x1c) | (byte)(uVar13 >> 0x20);
            bVar27 = *(byte *)((long)param_2 + 0x1d) | (byte)(uVar13 >> 0x28);
            bVar28 = *(byte *)((long)param_2 + 0x1e) | (byte)(uVar13 >> 0x30);
            bVar29 = *(byte *)((long)param_2 + 0x1f) | (byte)(uVar13 >> 0x38);
            auVar5[1] = bVar15;
            auVar5[0] = bVar14;
            auVar5[2] = bVar16;
            auVar5[3] = bVar17;
            auVar5[4] = bVar18;
            auVar5[5] = bVar19;
            auVar5[6] = bVar20;
            auVar5[7] = bVar21;
            auVar5[8] = bVar22;
            auVar5[9] = bVar23;
            auVar5[10] = bVar24;
            auVar5[0xb] = bVar25;
            auVar5[0xc] = bVar26;
            auVar5[0xd] = bVar27;
            auVar5[0xe] = bVar28;
            auVar5[0xf] = bVar29;
            auVar6[1] = bVar15;
            auVar6[0] = bVar14;
            auVar6[2] = bVar16;
            auVar6[3] = bVar17;
            auVar6[4] = bVar18;
            auVar6[5] = bVar19;
            auVar6[6] = bVar20;
            auVar6[7] = bVar21;
            auVar6[8] = bVar22;
            auVar6[9] = bVar23;
            auVar6[10] = bVar24;
            auVar6[0xb] = bVar25;
            auVar6[0xc] = bVar26;
            auVar6[0xd] = bVar27;
            auVar6[0xe] = bVar28;
            auVar6[0xf] = bVar29;
            auVar30 = NEON_ext(auVar5,auVar6,8,1);
            if ((CONCAT17(bVar21 | auVar30[7],
                          CONCAT16(bVar20 | auVar30[6],
                                   CONCAT15(bVar19 | auVar30[5],
                                            CONCAT14(bVar18 | auVar30[4],
                                                     CONCAT13(bVar17 | auVar30[3],
                                                              CONCAT12(bVar16 | auVar30[2],
                                                                       CONCAT11(bVar15 | auVar30[1],
                                                                                bVar14 | auVar30[0])
                                                                      )))))) == 0 && param_2[1] == 0
                ) && *param_2 == 0) {
              return 1;
            }
          }
          return 0;
        }
        if ((bVar14 == 0x80) &&
           ((uVar8 == 1 &&
            (((uVar1 == 0 && uVar13 == 0) && uVar3 == 0) && (uVar9 == 0 && uVar10 == 0))))) {
          if (-0x61 < (char)param_2[6]) {
            return 0;
          }
          if ((char)param_2[6] != -0x80) {
            return 0;
          }
          if (*param_2 != 1) {
            return 0;
          }
        }
        else if ((bVar14 == 0x80) &&
                ((uVar8 == 2 &&
                 (((uVar1 == 0 && uVar13 == 0) && uVar3 == 0) && (uVar9 == 0 && uVar10 == 0))))) {
          if (-0x61 < (char)param_2[6]) {
            return 0;
          }
          if ((char)param_2[6] != -0x80) {
            return 0;
          }
          if (*param_2 != 2) {
            return 0;
          }
        }
        else if ((bVar14 == 0x80) &&
                ((uVar8 == 3 &&
                 (((uVar1 == 0 && uVar13 == 0) && uVar3 == 0) && (uVar9 == 0 && uVar10 == 0))))) {
          if (-0x61 < (char)param_2[6]) {
            return 0;
          }
          if ((char)param_2[6] != -0x80) {
            return 0;
          }
          if (*param_2 != 3) {
            return 0;
          }
        }
        else {
          if (-0x61 < (char)param_2[6]) {
            return 0;
          }
          if ((char)param_2[6] != -0x80) {
            return 0;
          }
          if (*param_2 != 4) {
            return 0;
          }
        }
        uVar13 = param_2[5];
        uVar8 = param_2[4];
        bVar14 = (byte)param_2[2] | (byte)uVar8;
        bVar15 = *(byte *)((long)param_2 + 0x11) | (byte)(uVar8 >> 8);
        bVar16 = *(byte *)((long)param_2 + 0x12) | (byte)(uVar8 >> 0x10);
        bVar17 = *(byte *)((long)param_2 + 0x13) | (byte)(uVar8 >> 0x18);
        bVar18 = *(byte *)((long)param_2 + 0x14) | (byte)(uVar8 >> 0x20);
        bVar19 = *(byte *)((long)param_2 + 0x15) | (byte)(uVar8 >> 0x28);
        bVar20 = *(byte *)((long)param_2 + 0x16) | (byte)(uVar8 >> 0x30);
        bVar21 = *(byte *)((long)param_2 + 0x17) | (byte)(uVar8 >> 0x38);
        bVar22 = (byte)param_2[3] | (byte)uVar13;
        bVar23 = *(byte *)((long)param_2 + 0x19) | (byte)(uVar13 >> 8);
        bVar24 = *(byte *)((long)param_2 + 0x1a) | (byte)(uVar13 >> 0x10);
        bVar25 = *(byte *)((long)param_2 + 0x1b) | (byte)(uVar13 >> 0x18);
        bVar26 = *(byte *)((long)param_2 + 0x1c) | (byte)(uVar13 >> 0x20);
        bVar27 = *(byte *)((long)param_2 + 0x1d) | (byte)(uVar13 >> 0x28);
        bVar28 = *(byte *)((long)param_2 + 0x1e) | (byte)(uVar13 >> 0x30);
        bVar29 = *(byte *)((long)param_2 + 0x1f) | (byte)(uVar13 >> 0x38);
        auVar30[1] = bVar15;
        auVar30[0] = bVar14;
        auVar30[2] = bVar16;
        auVar30[3] = bVar17;
        auVar30[4] = bVar18;
        auVar30[5] = bVar19;
        auVar30[6] = bVar20;
        auVar30[7] = bVar21;
        auVar30[8] = bVar22;
        auVar30[9] = bVar23;
        auVar30[10] = bVar24;
        auVar30[0xb] = bVar25;
        auVar30[0xc] = bVar26;
        auVar30[0xd] = bVar27;
        auVar30[0xe] = bVar28;
        auVar30[0xf] = bVar29;
        auVar7[1] = bVar15;
        auVar7[0] = bVar14;
        auVar7[2] = bVar16;
        auVar7[3] = bVar17;
        auVar7[4] = bVar18;
        auVar7[5] = bVar19;
        auVar7[6] = bVar20;
        auVar7[7] = bVar21;
        auVar7[8] = bVar22;
        auVar7[9] = bVar23;
        auVar7[10] = bVar24;
        auVar7[0xb] = bVar25;
        auVar7[0xc] = bVar26;
        auVar7[0xd] = bVar27;
        auVar7[0xe] = bVar28;
        auVar7[0xf] = bVar29;
        auVar30 = NEON_ext(auVar30,auVar7,8,1);
        if (CONCAT17(bVar21 | auVar30[7],
                     CONCAT16(bVar20 | auVar30[6],
                              CONCAT15(bVar19 | auVar30[5],
                                       CONCAT14(bVar18 | auVar30[4],
                                                CONCAT13(bVar17 | auVar30[3],
                                                         CONCAT12(bVar16 | auVar30[2],
                                                                  CONCAT11(bVar15 | auVar30[1],
                                                                           bVar14 | auVar30[0]))))))
                    ) == 0 && param_2[1] == 0) {
          return 1;
        }
        return 0;
      }
      bVar15 = (byte)param_2[6];
      if ((bVar15 & 0xe0) != 0x60) {
        return 0;
      }
      uVar2 = param_2[2];
      uVar4 = param_2[3];
      uVar11 = param_2[4];
      uVar12 = param_2[5];
      if (((uVar8 != *param_2) || (uVar13 != param_2[1])) &&
         (func_0x000107c605b8(uVar8,uVar13,*param_2,param_2[1],0), (uVar8 & 1) == 0)) {
        return 0;
      }
      if (uVar1 != uVar2) {
        return 0;
      }
      if (uVar3 != uVar4) {
        return 0;
      }
      bVar16 = bVar15 & 0x1f;
      if (1 < (bVar14 & 0x1f)) {
        if ((bVar14 & 0x1f) != 2) {
          if (uVar9 == 0 && uVar10 == 0) {
            if (bVar16 != 3) {
              return 0;
            }
            if (uVar12 != 0 || uVar11 != 0) {
              return 0;
            }
            return 1;
          }
          if (uVar9 == 1 && uVar10 == 0) {
            if (bVar16 != 3) {
              return 0;
            }
            if (uVar11 != 1) {
              return 0;
            }
          }
          else {
            if (bVar16 != 3) {
              return 0;
            }
            if (uVar11 != 2) {
              return 0;
            }
          }
          if (uVar12 != 0) {
            return 0;
          }
          return 1;
        }
        if (bVar16 != 2) {
          return 0;
        }
LAB_100e28b04:
        if ((((uint)uVar11 ^ (uint)uVar9) & 1) == 0) {
          return 1;
        }
        return 0;
      }
      if ((bVar14 & 0x1f) != 0) {
        if (bVar16 != 1) {
          return 0;
        }
        goto LAB_100e28b04;
      }
      if ((bVar15 & 0x1f) != 0) {
        return 0;
      }
      if ((uVar9 == uVar11) && (uVar10 == uVar12)) {
        return 1;
      }
      goto code_r0x000107c605b8;
    }
    if ((param_2[6] & 0xe0) != 0x40) {
      return 0;
    }
  }
  uVar11 = *param_2;
  uVar12 = param_2[1];
  uVar9 = uVar8;
  uVar10 = uVar13;
  if (uVar8 == uVar11 && uVar13 == uVar12) {
    return 1;
  }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(uVar9,uVar10,uVar11,uVar12,0);
  return uVar9;
}



/* Entry: 100e28bc4; end: 100e28bdb;  */

/* WARNING: Possible PIC construction at 0x000100e284ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e284b0) */
/* WARNING: Removing unreachable block (ram,0x000100e27330) */
/* WARNING: Removing unreachable block (ram,0x000100e2733c) */
/* WARNING: Removing unreachable block (ram,0x000100e27338) */

undefined8 FUN_100e28bc4(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  bVar1 = *(byte *)(param_1 + 6) >> 5;
  if (bVar1 < 2) {
    if ((bVar1 != 0) && (bVar1 != 1)) {
      return *param_1;
    }
  }
  else if ((bVar1 != 2) && (bVar1 != 3)) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (uVar2,uVar2,param_1[2],param_1[3],param_1[4],param_1[5]);
  return uVar2;
}



/* Entry: 100e28bdc; end: 100e28cdf;  */

undefined8 * FUN_100e28bdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_100e283d4(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 100e28ce0; end: 100e28cfb;  */

void FUN_100e28ce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100e28cfc; end: 100e28d4f;  */

undefined8 * FUN_100e28cfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_100e28460(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 100e28d50; end: 100e28e9b;  */

int FUN_100e28d50(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3b < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x3c;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 0xc) >> 5) | (*(byte *)(param_1 + 0xc) >> 2 & 7) << 3) ^ 0x3f;
  if (0x3a < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100e28e9c; end: 100e28f37;  */

undefined8 * FUN_100e28e9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100e2844c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100e28f38; end: 100e28f7b;  */

undefined8 * FUN_100e28f38(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000100e27330(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100e28f7c; end: 100e29063;  */

int FUN_100e28f7c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100e29064; end: 100e29117;  */

long FUN_100e29064(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x48);
  lVar1 = lVar3;
  if (lVar3 == 1) {
    lVar1 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c3e270();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x000107c4f800(lVar2,param_2,2,0x33,1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x48) = lVar1;
    func_0x000107c61174(lVar1);
    FUN_100e2a604(uVar4);
  }
  func_0x000100e2a888(lVar3);
  return lVar1;
}



/* Entry: 100e29118; end: 100e2922b;  */

void FUN_100e29118(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [40];
  
  func_0x000107c61428(unaff_x20 + 0x50,auStack_80,0,0);
  FUN_100e2a794(unaff_x20 + 0x50,auStack_a8);
  if (lStack_90 == 0) {
    FUN_100e2a614(auStack_a8,0x112d3a398,&UNK_10d903ea0);
    puVar1 = PTR_PTR_1126a5df8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar2 = 0;
    func_0x000100e27b64();
    lVar3 = lVar2;
    func_0x000107c613fc();
    *(undefined **)(lVar3 + 0x10) = puVar1;
    param_1[3] = lVar2;
    param_1[4] = (long)&PTR_DAT_110357330;
    *param_1 = lVar3;
    func_0x000100e2a7e4(param_1,auStack_68);
    func_0x000107c61428(unaff_x20 + 0x50,auStack_a8,0x21,0);
    func_0x000100e2a828(auStack_68,unaff_x20 + 0x50,0x112d3a398,&UNK_10d903ea0);
    func_0x000107c614a8(auStack_a8);
  }
  else {
    FUN_100e2a870(auStack_a8,auStack_68);
    FUN_100e2a870(auStack_68,param_1);
  }
  return;
}



/* Entry: 100e2922c; end: 100e292cb;  */

long FUN_100e2922c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return unaff_x20;
}



/* Entry: 100e292cc; end: 100e2964b;  */

/* WARNING: Possible PIC construction at 0x000100e29568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e29624: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2956c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e292cc(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar10;
  undefined8 auStack_e0 [4];
  long lStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [3];
  long *plStack_98;
  undefined **ppuStack_90;
  long *aplStack_88 [3];
  long *plStack_70;
  undefined **ppuStack_68;
  
  FUN_100e29064();
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_1126af370;
    func_0x000107c61168(PTR_PTR_1126af370);
    func_0x000107c42a28();
    func_0x000107c61180();
    lVar9 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar9 != 0) {
      func_0x000107c4e3f0();
      func_0x000107c615e8(lVar9);
    }
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0x10,0,0);
    if (iVar1 == 0) {
      func_0x000107c61168(PTR_PTR_1126af370);
      func_0x000107c42a28();
      func_0x000107c61180();
      lVar9 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c4168c();
      func_0x000107c61180();
      if (lVar9 != 0) {
        func_0x000107c4e3f0();
        func_0x000107c615e8(lVar9);
      }
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
      func_0x000107c4c038();
      func_0x000107c61180();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c4c040();
      func_0x000107c61180();
      plVar4 = (long *)0x0;
      auStack_e0[2] = uVar3;
      FUN_100e21b4c();
      plVar5 = plVar4;
      func_0x000107c613fc();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c6157c();
      func_0x000107c4ac74();
      func_0x000107c61180();
      puVar6 = &UNK_110357510;
      auStack_e0[1] = uVar3;
      func_0x000107c613fc(&UNK_110357510,0x18,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar2;
      func_0x0001000285a8(0x112d3a388,&UNK_10d903e90);
      func_0x000107c613fc();
      func_0x000107c61174();
      pcVar7 = FUN_100e296fc;
      auStack_e0[3] = uVar2;
      func_0x0001000bdd8c(FUN_100e296fc,puVar6);
      ppuStack_68 = &PTR_DAT_110356508;
      lVar8 = 0;
      aplStack_88[0] = plVar5;
      plStack_70 = plVar4;
      FUN_100e23250();
      lVar9 = lVar8;
      func_0x000107c610f8();
      func_0x0001000c6518(aplStack_88,plVar4);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar4[-1] + 0x40));
      puVar10 = (undefined8 *)((long)auStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar10);
      auStack_b0[0] = *puVar10;
      ppuStack_90 = &PTR_DAT_110356508;
      *(undefined1 *)(lVar9 + _DAT_112d3a1a0) = 0;
      *(undefined8 *)(lVar9 + _DAT_112d3a1a8) = 0;
      *(undefined8 *)(lVar9 + _DAT_112d3a1b0) = 0;
      *(undefined8 *)(lVar9 + _DAT_112d3a178) = auStack_e0[2];
      plStack_98 = plVar4;
      func_0x000100e2a7e4(auStack_b0,lVar9 + _DAT_112d3a180);
      *(undefined8 *)(lVar9 + _DAT_112d3a188) = auStack_e0[1];
      *(code **)(lVar9 + _DAT_112d3a190) = pcVar7;
      *(undefined **)(lVar9 + _DAT_112d3a198) = param_1;
      puVar6 = PTR_s_init_1125d9248;
      lStack_c0 = lVar9;
      lStack_b8 = lVar8;
      func_0x000107c61174(param_1);
      plVar4 = &lStack_c0;
      func_0x000107c61154(plVar4,puVar6);
      func_0x0001000834e4(auStack_b0);
      func_0x0001000834e4(aplStack_88);
      func_0x000107c61574(plVar5);
      ppuStack_68 = &PTR_DAT_110356720;
      aplStack_88[0] = plVar4;
      plStack_70 = (long *)lVar8;
      func_0x000107c61428(unaff_x20 + 0x78,auStack_b0,0x21,0);
      func_0x000100e2a828(aplStack_88,unaff_x20 + 0x78,0x112d3a390,&UNK_10d903e98);
      func_0x000107c614a8(auStack_b0);
      func_0x000107c5cfd8(*(undefined8 *)(unaff_x20 + 0x10));
      FUN_100e29704();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e2964c; end: 100e296fb;  */

void FUN_100e2964c(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126a5e00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = 0;
  func_0x000100e283b4();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined1 *)(lVar4 + 0x60) = 0x80;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0xbff0000000000000;
  *(undefined8 *)(lVar4 + 0x10) = param_2;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  *(undefined **)(lVar4 + 0x20) = puVar2;
  *(undefined8 *)(lVar4 + 0x28) = 9;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1103573c0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 100e296fc; end: 100e29703;  */

void FUN_100e296fc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126a5e00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = 0;
  func_0x000100e283b4();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined1 *)(lVar4 + 0x60) = 0x80;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0xbff0000000000000;
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  *(undefined **)(lVar4 + 0x20) = puVar2;
  *(undefined8 *)(lVar4 + 0x28) = 9;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1103573c0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar5);
  return;
}



/* Entry: 100e29704; end: 100e2998f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e29704(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  code *pcVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long alStack_a0 [3];
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  plVar1 = alStack_a0;
  func_0x000107c61428(unaff_x20 + 0x78,auStack_78,0,0);
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    func_0x000100e2a7e4(unaff_x20 + 0x78,alStack_a0);
    func_0x0001000a8868(alStack_a0,uStack_88);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = uVar10;
    func_0x000107c4f094();
    func_0x000107c61180();
    func_0x000107c4c02c();
    func_0x000107c61180();
    lVar11 = *plVar1;
    uVar9 = 0x112d3a488;
    func_0x0001000285a8(0x112d3a488,&UNK_10d903f28);
    func_0x000107c613fc();
    uVar3 = 1;
    func_0x00010008747c(1,uVar9);
    uVar9 = *(undefined8 *)(lVar11 + _DAT_112d3a198);
    func_0x000107c614f0(uVar9);
    puVar4 = &UNK_110357550;
    func_0x000107c613fc(&UNK_110357550,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar11);
    puVar5 = &UNK_110357578;
    func_0x000107c613fc(&UNK_110357578,0x38,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar3;
    *(undefined8 *)(puVar5 + 0x20) = param_1;
    *(undefined8 *)(puVar5 + 0x28) = uVar2;
    *(undefined8 *)(puVar5 + 0x30) = uVar10;
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(uVar3);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar10);
    func_0x00010090569c(FUN_100e2a700,puVar5,uVar9);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar5);
    FUN_100e2a710();
    func_0x00010487d6d4();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar10);
    func_0x000107c61574(uVar3);
    pcVar6 = "startPasskeyLogin(trigger:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
    plVar1 = (long *)pcVar6;
    func_0x000100471e0c();
    func_0x000107c61574(puVar5);
    func_0x000107c615e8(pcVar6);
    func_0x0001000834e4(alStack_a0);
    puVar4 = &UNK_1103575a0;
    func_0x000107c613fc(&UNK_1103575a0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    puVar5 = &UNK_1103575c8;
    func_0x000107c613fc(&UNK_1103575c8,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    pcVar7 = FUN_100e2a750;
    puVar4 = puVar5;
    (**(code **)(*plVar1 + 0x60))(FUN_100e2a750);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(puVar5);
    pcVar8 = pcVar7;
    func_0x000107c614f0(pcVar7);
    (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + 0x40),pcVar8,puVar4);
    func_0x000107c615e8(pcVar7);
  }
  return;
}



/* Entry: 100e29990; end: 100e29a7f;  */

void FUN_100e29990(undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  uVar5 = param_1[1];
  uVar4 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  uVar3 = param_1[4];
  cVar1 = *(char *)(param_1 + 5);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if (cVar1 == -3) {
    if (param_3 == 1) goto LAB_100e29a64;
    lVar2 = *(long *)(param_2 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
  }
  else {
    if (cVar1 == -2) goto LAB_100e29a64;
    if (cVar1 != -1) {
      uStack_60 = uVar4;
      uStack_58 = uVar5;
      uStack_50 = uVar6;
      uStack_48 = uVar7;
      uStack_40 = uVar3;
      cStack_38 = cVar1;
      FUN_100e29a80(param_3,&uStack_60);
      goto LAB_100e29a64;
    }
    if (param_3 != 1) goto LAB_100e29a64;
    lVar2 = *(long *)(param_2 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
  }
  if (lVar2 != 0) {
    func_0x000107c4e3ec();
    func_0x000107c615e8(lVar2);
  }
LAB_100e29a64:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 100e29a80; end: 100e29f9f;  */

/* WARNING: Possible PIC construction at 0x000100e29f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e29cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e29bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e29e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e29e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e29b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e29c98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e29b94) */
/* WARNING: Removing unreachable block (ram,0x000100e29e44) */
/* WARNING: Removing unreachable block (ram,0x000100e29e1c) */
/* WARNING: Removing unreachable block (ram,0x000100e29f98) */
/* WARNING: Removing unreachable block (ram,0x000100e29e2c) */
/* WARNING: Removing unreachable block (ram,0x000100e29bf0) */
/* WARNING: Removing unreachable block (ram,0x000100e29cf4) */
/* WARNING: Removing unreachable block (ram,0x000100e29f20) */
/* WARNING: Removing unreachable block (ram,0x000100e29f6c) */
/* WARNING: Removing unreachable block (ram,0x000100e29c9c) */

void FUN_100e29a80(undefined *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar4 = (undefined *)*param_2;
  puVar5 = (undefined *)param_2[1];
  uVar9 = param_2[3];
  bVar2 = (byte)param_2[5];
  uVar8 = (ulong)*(uint *)((long)param_2 + 0x11) << 8 |
          (ulong)*(uint3 *)((long)param_2 + 0x15) << 0x28 | (ulong)(byte)param_2[2];
  if (bVar2 < 3) {
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        puVar4 = PTR_PTR_1126af370;
        func_0x000107c61168(PTR_PTR_1126af370);
        func_0x000107c5fadc(puVar5,uVar8);
        func_0x000107c4f97c(puVar4);
        func_0x000107c61180();
      }
      else {
        if ((((byte)param_2[2] & 1) == 0) || (uVar9 == 0)) {
          puVar7 = &UNK_1103575a0;
          func_0x000107c613fc(&UNK_1103575a0,0x18,7);
          func_0x000107c61644(puVar7 + 0x10);
          func_0x000107c6157c(puVar7);
          FUN_100e29fa0(0,0,puVar4,puVar5,0x100e2a8a4,puVar7);
LAB_100e29f78:
          func_0x000107c61578(puVar7,2);
          return;
        }
        puVar5 = PTR_PTR_1126af370;
        func_0x000107c61168(PTR_PTR_1126af370);
        func_0x000107c61174(uVar9);
        func_0x000107c4b96c(puVar5);
        func_0x000107c61180();
        lVar6 = *(long *)(unaff_x20 + 0x10);
        func_0x000107c4168c();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c4e3f0();
          func_0x000107c615e8(lVar6);
        }
      }
      goto code_r0x000107c61170;
    }
    puVar5 = PTR_PTR_1126af370;
    func_0x000107c61168(PTR_PTR_1126af370);
    func_0x000107c5c3c0();
    func_0x000107c61180();
    lVar6 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4168c();
  }
  else {
    uVar10 = param_2[4];
    if (bVar2 < 5) {
      if (bVar2 != 3) {
        puVar7 = PTR_PTR_1126af370;
        func_0x000107c61168(PTR_PTR_1126af370);
        func_0x000107c5fadc(puVar4,puVar5);
        func_0x000107c5fadc(uVar8,uVar9);
        func_0x000107c4fb00(puVar7);
        func_0x000107c61180();
        puVar5 = puVar4;
        goto code_r0x000107c61170;
      }
      if (uVar10 != 0) {
        uVar1 = uVar9 & 0xffffffffffff;
        if ((uVar10 & 0x2000000000000000) != 0) {
          uVar1 = uVar10 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          puVar7 = &UNK_1103575a0;
          func_0x000107c613fc(&UNK_1103575a0,0x18,7);
          func_0x000107c61644(puVar7 + 0x10);
          func_0x000107c6157c(puVar7);
          FUN_100e29fa0(puVar5,uVar8,uVar9,uVar10,FUN_100e2a758,puVar7);
          goto LAB_100e29f78;
        }
      }
      if ((param_1 == (undefined *)0x1) || (2 < ((ulong)puVar4 & 0xff))) {
        func_0x000108b9aaec();
        func_0x000107c61180();
        if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100e29fa0);
          (*pcVar3)();
        }
        func_0x000107c5faec();
        puVar5 = param_1;
        goto code_r0x000107c61170;
      }
      puVar5 = PTR_PTR_1126af370;
      func_0x000107c61168(PTR_PTR_1126af370);
      func_0x000107c42a28();
      func_0x000107c61180();
      lVar6 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c4168c();
    }
    else {
      if (bVar2 == 5) {
        puVar4 = PTR_PTR_1126af370;
        func_0x000107c61168(PTR_PTR_1126af370);
        func_0x000107c5ee20(puVar5,uVar8);
        func_0x000107c407f0(puVar4);
        func_0x000107c61180();
        goto code_r0x000107c61170;
      }
      if ((((uVar9 == 0 && puVar5 == (undefined *)0x0) && puVar4 == (undefined *)0x0) && uVar10 == 0
          ) && uVar8 == 0) {
        func_0x000106b24600();
        func_0x000107c61180();
        if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100e29f98);
          (*pcVar3)();
        }
        func_0x000107c5faec();
        puVar5 = param_1;
        goto code_r0x000107c61170;
      }
      if ((puVar4 == (undefined *)0x1) &&
         (((uVar9 == 0 && puVar5 == (undefined *)0x0) && uVar8 == 0) && uVar10 == 0)) {
        puVar5 = PTR_PTR_1126af370;
        func_0x000107c61168(PTR_PTR_1126af370);
        func_0x000107c3f508();
        func_0x000107c61180();
        lVar6 = *(long *)(unaff_x20 + 0x10);
        func_0x000107c4168c();
      }
      else {
        puVar5 = PTR_PTR_1126af370;
        func_0x000107c61168(PTR_PTR_1126af370);
        func_0x000107c414c0();
        func_0x000107c61180();
        lVar6 = *(long *)(unaff_x20 + 0x10);
        func_0x000107c4168c();
      }
    }
  }
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c4e3f0();
    func_0x000107c615e8(lVar6);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 100e29fa0; end: 100e2a18f;  */

/* WARNING: Possible PIC construction at 0x000100e2a100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2a110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2a160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2a114) */
/* WARNING: Removing unreachable block (ram,0x000100e2a104) */
/* WARNING: Removing unreachable block (ram,0x000100e2a164) */

void FUN_100e29fa0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar4 = &puStack_90;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c4e3f4();
    func_0x000107c615e8(lVar5);
  }
  lVar5 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar5 == 0) {
    if (param_2 != 0) {
      func_0x000107c5fadc(param_1,param_2);
    }
    func_0x000107c5fadc(param_3,param_4);
    func_0x000108b9a8c4();
    func_0x000107c61180();
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e2a190);
      (*pcVar2)();
    }
    puVar3 = PTR_PTR_1126d0968;
    func_0x000107c61168(PTR_PTR_1126d0968);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110357608;
    uStack_70 = param_5;
    uStack_68 = param_6;
    func_0x000107c60bc4(&puStack_90);
    uVar1 = uStack_68;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(uVar1);
    func_0x000107c42a2c(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100e2a190; end: 100e2a29f;  */

void FUN_100e2a190(uint param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_70 [3];
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  plVar1 = alStack_70;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_100e29118(alStack_70);
    func_0x0001000a8868(alStack_70,uStack_58);
    uVar4 = *(undefined8 *)(*plVar1 + 0x10);
    puVar2 = PTR_PTR_1126aed10;
    func_0x000107c61168(PTR_PTR_1126aed10);
    func_0x000107c4c04c();
    func_0x000107c61180();
    func_0x000107c4bcd4(uVar4);
    func_0x000107c61170(puVar2);
    func_0x0001000834e4(alStack_70);
    if ((param_1 & 1) == 0) {
      puVar2 = PTR_PTR_1126af370;
      func_0x000107c61168(PTR_PTR_1126af370);
      func_0x000107c42a28();
      func_0x000107c61180();
      lVar3 = *(long *)(param_2 + 0x10);
      func_0x000107c4168c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4e3f0();
        func_0x000107c615e8(lVar3);
      }
      func_0x000107c61170(puVar2);
    }
    else {
      FUN_100e29704(1);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100e2a2a0; end: 100e2a4db;  */

/* WARNING: Possible PIC construction at 0x000100e2a448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2a458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2a468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2a49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2a4b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2a4a0) */
/* WARNING: Removing unreachable block (ram,0x000100e2a46c) */
/* WARNING: Removing unreachable block (ram,0x000100e2a45c) */
/* WARNING: Removing unreachable block (ram,0x000100e2a44c) */
/* WARNING: Removing unreachable block (ram,0x000100e2a4b4) */

void FUN_100e2a2a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c4e3f4();
    func_0x000107c615e8(lVar5);
  }
  lVar5 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c5d17c();
    func_0x000107c61180();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000108b9a8ac();
    func_0x000107c61180();
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2a4d8);
      (*pcVar1)();
    }
    func_0x000108b9a87c();
    func_0x000107c61180();
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2a4dc);
      (*pcVar1)();
    }
    puVar2 = PTR_PTR_1126d0968;
    func_0x000107c61168(PTR_PTR_1126d0968);
    puVar3 = PTR_PTR_1126a5de8;
    func_0x000107c610f8(PTR_PTR_1126a5de8);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_1103575e0;
    ppuVar4 = &puStack_90;
    uStack_70 = param_5;
    uStack_68 = param_6;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c6157c(param_6);
    func_0x000107c45a20(puVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(uStack_68);
    func_0x000107c401bc(puVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100e2a4dc; end: 100e2a57f;  */

void FUN_100e2a4dc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126af370;
    func_0x000107c61168(PTR_PTR_1126af370);
    func_0x000107c42a28();
    func_0x000107c61180();
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4e3f0();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(puVar1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100e2a580; end: 100e2a603;  */

void FUN_100e2a580(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100e2a604(*(undefined8 *)(unaff_x20 + 0x48));
  FUN_100e2a614(unaff_x20 + 0x50,0x112d3a398,&UNK_10d903ea0);
  FUN_100e2a614(unaff_x20 + 0x78,0x112d3a390,&UNK_10d903e98);
  return;
}



/* Entry: 100e2a604; end: 100e2a613;  */

void FUN_100e2a604(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100e2a614; end: 100e2a653;  */

undefined8 FUN_100e2a614(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100e2a654; end: 100e2a673;  */

void FUN_100e2a654(void)

{
  FUN_100e2a580();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e2a674; end: 100e2a693;  */

void FUN_100e2a674(void)

{
  FUN_100e292cc();
  return;
}



/* Entry: 100e2a694; end: 100e2a69b;  */

undefined8 FUN_100e2a694(void)

{
  return 0;
}



/* Entry: 100e2a69c; end: 100e2a6bb;  */

void FUN_100e2a69c(void)

{
  func_0x000107c61168(&PTR_PTR_112d3a3e0);
  return;
}



/* Entry: 100e2a6bc; end: 100e2a6ff; -[_TtC21SCPasskeyLoginFeature22PasskeyLoginEntryPoint alertViewDismissed] */

void FUN_100e2a6bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c6157c();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100e2a700; end: 100e2a70f;  */

void FUN_100e2a700(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 3;
    func_0x000100087c34(&uStack_90);
  }
  else {
    FUN_100e223a0(uVar1,uVar3,uVar5,uVar2);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 100e2a710; end: 100e2a74f;  */

void FUN_100e2a710(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3a490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d903b74;
  func_0x000107c61520(&UNK_10d903b74,&UNK_110356710);
  puRam0000000112d3a490 = puVar1;
  return;
}



/* Entry: 100e2a750; end: 100e2a757;  */

void FUN_100e2a750(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar6 = param_1[1];
  uVar5 = *param_1;
  uVar8 = param_1[3];
  uVar7 = param_1[2];
  uVar4 = param_1[4];
  cVar1 = *(char *)(param_1 + 5);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  if (cVar1 == -3) {
    if (lVar3 == 1) goto LAB_100e29a64;
    lVar3 = *(long *)(lVar2 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
  }
  else {
    if (cVar1 == -2) goto LAB_100e29a64;
    if (cVar1 != -1) {
      uStack_60 = uVar5;
      uStack_58 = uVar6;
      uStack_50 = uVar7;
      uStack_48 = uVar8;
      uStack_40 = uVar4;
      cStack_38 = cVar1;
      FUN_100e29a80(lVar3,&uStack_60);
      goto LAB_100e29a64;
    }
    if (lVar3 != 1) goto LAB_100e29a64;
    lVar3 = *(long *)(lVar2 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
  }
  if (lVar3 != 0) {
    func_0x000107c4e3ec();
    func_0x000107c615e8(lVar3);
  }
LAB_100e29a64:
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 100e2a758; end: 100e2a76f;  */

void FUN_100e2a758(void)

{
  FUN_100e2a4dc();
  return;
}



/* Entry: 100e2a770; end: 100e2a793;  */

void FUN_100e2a770(uint param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long alStack_70 [3];
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  plVar2 = alStack_70;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_100e29118(alStack_70);
    func_0x0001000a8868(alStack_70,uStack_58);
    uVar5 = *(undefined8 *)(*plVar2 + 0x10);
    puVar3 = PTR_PTR_1126aed10;
    func_0x000107c61168(PTR_PTR_1126aed10);
    func_0x000107c4c04c();
    func_0x000107c61180();
    func_0x000107c4bcd4(uVar5);
    func_0x000107c61170(puVar3);
    func_0x0001000834e4(alStack_70);
    if ((param_1 & 1) == 0) {
      puVar3 = PTR_PTR_1126af370;
      func_0x000107c61168(PTR_PTR_1126af370);
      func_0x000107c42a28();
      func_0x000107c61180();
      lVar4 = *(long *)(lVar1 + 0x10);
      func_0x000107c4168c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c4e3f0();
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c61170(puVar3);
    }
    else {
      FUN_100e29704(1);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100e2a794; end: 100e2a86f;  */

undefined8 FUN_100e2a794(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d3a398;
  func_0x0001000285a8(0x112d3a398,&UNK_10d903ea0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100e2a870; end: 100e2a8a7;  */

undefined8 * FUN_100e2a870(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100e2a8a8; end: 100e2a8b3; -[SCPasskeyLoginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a8a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a498;
  func_0x000107c61428(param_1 + _DAT_112d3a498,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2a8b4; end: 100e2a8bf; -[SCPasskeyLoginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a8b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a498;
  func_0x000107c61428(param_1 + _DAT_112d3a498,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2a8c0; end: 100e2a8cb; -[SCPasskeyLoginEntryPoint loginOptionsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a8c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a4a0;
  func_0x000107c61428(param_1 + _DAT_112d3a4a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2a8cc; end: 100e2a8d7; -[SCPasskeyLoginEntryPoint setLoginOptionsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a4a0;
  func_0x000107c61428(param_1 + _DAT_112d3a4a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2a8d8; end: 100e2a8e3; -[SCPasskeyLoginEntryPoint loginServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a8d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a4a8;
  func_0x000107c61428(param_1 + _DAT_112d3a4a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2a8e4; end: 100e2a8ef; -[SCPasskeyLoginEntryPoint setLoginServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a8e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a4a8;
  func_0x000107c61428(param_1 + _DAT_112d3a4a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2a8f0; end: 100e2a8fb; -[SCPasskeyLoginEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a8f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a4b0;
  func_0x000107c61428(param_1 + _DAT_112d3a4b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2a8fc; end: 100e2a907; -[SCPasskeyLoginEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a8fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a4b0;
  func_0x000107c61428(param_1 + _DAT_112d3a4b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2a908; end: 100e2a913; -[SCPasskeyLoginEntryPoint loginLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a908(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a4b8;
  func_0x000107c61428(param_1 + _DAT_112d3a4b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2a914; end: 100e2a957;  */

void FUN_100e2a914(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e2a958; end: 100e2a963; -[SCPasskeyLoginEntryPoint setLoginLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a958(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a4b8;
  func_0x000107c61428(param_1 + _DAT_112d3a4b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2a964; end: 100e2a9b7;  */

void FUN_100e2a964(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2a9b8; end: 100e2a9ff; -[SCPasskeyLoginEntryPoint alertViewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2a9b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a4c0;
  func_0x000107c61428(param_1 + _DAT_112d3a4c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100e2aa00; end: 100e2aa63; -[SCPasskeyLoginEntryPoint setAlertViewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2aa00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a4c0;
  func_0x000107c61428(param_1 + _DAT_112d3a4c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100e2aa64; end: 100e2acc7;  */

/* WARNING: Possible PIC construction at 0x000100e2abc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2abd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2abe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2ac8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2ac9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2ac6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2ac7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2ac5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2ac80) */
/* WARNING: Removing unreachable block (ram,0x000100e2ac70) */
/* WARNING: Removing unreachable block (ram,0x000100e2aca0) */
/* WARNING: Removing unreachable block (ram,0x000100e2ac90) */
/* WARNING: Removing unreachable block (ram,0x000100e2abe8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100e2abd8) */
/* WARNING: Removing unreachable block (ram,0x000100e2abc8) */
/* WARNING: Removing unreachable block (ram,0x000100e2ac60) */

void FUN_100e2aa64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4c044();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4c054();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3e274();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4c03c();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c3db04();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_100e2a69c();
              func_0x000107c613fc();
              func_0x0001000c6560(0);
              func_0x000107c613fc();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              lVar7 = unaff_x20;
              func_0x0001000c6580();
              *(long *)(lVar6 + 0x40) = lVar7;
              *(undefined8 *)(lVar6 + 0x48) = 1;
              *(undefined8 *)(lVar6 + 0x58) = 0;
              *(undefined8 *)(lVar6 + 0x50) = 0;
              *(undefined8 *)(lVar6 + 0x68) = 0;
              *(undefined8 *)(lVar6 + 0x60) = 0;
              *(undefined8 *)(lVar6 + 0x78) = 0;
              *(undefined8 *)(lVar6 + 0x70) = 0;
              *(undefined8 *)(lVar6 + 0x88) = 0;
              *(undefined8 *)(lVar6 + 0x80) = 0;
              *(undefined8 *)(lVar6 + 0x98) = 0;
              *(undefined8 *)(lVar6 + 0x90) = 0;
              *(long *)(lVar6 + 0x10) = lVar1;
              *(long *)(lVar6 + 0x18) = lVar2;
              *(long *)(lVar6 + 0x20) = lVar3;
              *(long *)(lVar6 + 0x28) = lVar4;
              *(long *)(lVar6 + 0x30) = lVar5;
              *(long *)(lVar6 + 0x38) = unaff_x20;
              FUN_100e292cc();
              lVar1 = unaff_x20;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100e2acc8; end: 100e2acef; -[SCPasskeyLoginEntryPoint begin] */

void FUN_100e2acc8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e2aa64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e2acf0; end: 100e2ad33; -[SCPasskeyLoginEntryPoint end] */

void FUN_100e2acf0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2ad34; end: 100e2b083;  */

void FUN_100e2ad34(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ed670)) ||
       (func_0x000107c605b8(0xd000000000000014,0x800000010ef12990,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c56108();
    }
    else {
      uVar2 = 0;
      if (((param_2 == 0x7265536e69676f6c) && (param_3 == -0x12ffff8c9a9c968a)) ||
         (func_0x000107c605b8(0x7265536e69676f6c,0xed00007365636976,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56114();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10ed650)) ||
           (func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52954();
        }
        else {
          if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10ed630)) {
            uVar2 = 0xd000000000000013;
            func_0x000107c605b8(0xd000000000000013,0x800000010ef129d0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000015;
              if (((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10ed610)) &&
                 (func_0x000107c605b8(0xd000000000000015,0x800000010ef129f0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SCPasskeyLoginFeature/SCPasskeyLoginEntryPoint.swift",0x34,2,
                                    0x43,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2b084);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5260c();
              goto LAB_100e2adc0;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56104();
        }
      }
    }
  }
LAB_100e2adc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e2b084; end: 100e2b12f; -[SCPasskeyLoginEntryPoint setValue:forIvarName:] */

void FUN_100e2b084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100e2ad34(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e2b130; end: 100e2b1eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2b130(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d3a498,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3a4a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3a4a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3a4b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3a4b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d3a4c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d3a4c8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e2b1ec; end: 100e2b20b; -[SCPasskeyLoginEntryPoint init] */

void FUN_100e2b1ec(void)

{
  FUN_100e2b130();
  return;
}



/* Entry: 100e2b20c; end: 100e2b23f;  */

void FUN_100e2b20c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e2b240; end: 100e2b2c7; -[SCPasskeyLoginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2b240(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3a498);
  func_0x000107c61610(param_1 + _DAT_112d3a4a0);
  func_0x000107c61610(param_1 + _DAT_112d3a4a8);
  func_0x000107c61610(param_1 + _DAT_112d3a4b0);
  func_0x000107c61610(param_1 + _DAT_112d3a4b8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3a4c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3a4c8));
  return;
}



/* Entry: 100e2b2c8; end: 100e2b2e7;  */

void FUN_100e2b2c8(void)

{
  func_0x000107c61168(&PTR_PTR_11279a5c8);
  return;
}



/* Entry: 100e2b2e8; end: 100e2b36f;  */

bool FUN_100e2b2e8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  uVar3 = param_2[1];
  cVar4 = (char)param_2[2];
  if ((char)param_1[2] == '\x01') {
    if (uVar1 != 0 || uVar2 != 0) {
      if (uVar1 != 1 || uVar2 != 0) {
        if (cVar4 != '\x01') {
          return false;
        }
        if (uVar3 != 0 || CARRY8(uVar3 - 1,(ulong)(1 < uVar5))) {
          return true;
        }
        return false;
      }
      uVar5 = uVar5 ^ 1;
    }
    if (cVar4 == '\x01' && (uVar5 == 0 && uVar3 == 0)) {
      return true;
    }
  }
  else if (cVar4 != '\x01') {
    return uVar1 == uVar5 && uVar2 == uVar3;
  }
  return false;
}



/* Entry: 100e2b370; end: 100e2b6f3;  */

void FUN_100e2b370(double param_1,long param_2,long param_3,long param_4,char param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  func_0x000107c40f00(*(undefined8 *)(unaff_x20 + 0x18));
  if (param_5 == '\x01') {
    if (param_3 != 0 || param_4 != 0) {
      if (param_3 == 1 && param_4 == 0) {
        uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar4 = 0x6e776f6e6b6e75;
        if (param_2 == 1) {
          uVar4 = 0x6e69676f6c;
        }
        uVar1 = 0xe700000000000000;
        if (param_2 == 1) {
          uVar1 = 0xe500000000000000;
        }
        uVar3 = 0x6863746566657270;
        if (param_2 != 0) {
          uVar3 = uVar4;
        }
        uVar4 = 0xe800000000000000;
        if (param_2 != 0) {
          uVar4 = uVar1;
        }
        puVar5 = PTR_PTR_1126aed18;
        func_0x000107c61168(PTR_PTR_1126aed18);
        func_0x000107c5fadc(uVar3,uVar4);
        func_0x000107c6142c(uVar4);
        func_0x000107c43218(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        func_0x000107c4bcd4(uVar8);
        func_0x000107c61170(puVar5);
        *(long *)(unaff_x20 + 0x20) = param_3;
        *(long *)(unaff_x20 + 0x28) = param_4;
        *(undefined1 *)(unaff_x20 + 0x30) = 1;
        *(double *)(unaff_x20 + 0x38) = param_1;
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar4 = 0x6e776f6e6b6e75;
        if (param_2 == 1) {
          uVar4 = 0x6e69676f6c;
        }
        uVar1 = 0xe700000000000000;
        if (param_2 == 1) {
          uVar1 = 0xe500000000000000;
        }
        uVar3 = 0x6863746566657270;
        if (param_2 != 0) {
          uVar3 = uVar4;
        }
        uVar4 = 0xe800000000000000;
        if (param_2 != 0) {
          uVar4 = uVar1;
        }
        puVar5 = PTR_PTR_1126aed18;
        func_0x000107c61168(PTR_PTR_1126aed18);
        func_0x000107c5fadc(uVar3,uVar4);
        func_0x000107c6142c(uVar4);
        func_0x000107c4321c(param_1 - *(double *)(unaff_x20 + 0x38),puVar5);
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        func_0x000107c4bcd4(uVar8);
        func_0x000107c61170(puVar5);
        *(undefined8 *)(unaff_x20 + 0x20) = 0;
        *(undefined8 *)(unaff_x20 + 0x28) = 0;
        *(undefined1 *)(unaff_x20 + 0x30) = 1;
        *(undefined8 *)(unaff_x20 + 0x38) = 0xbff0000000000000;
      }
    }
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar4 = 0x6e776f6e6b6e75;
    if (param_2 == 1) {
      uVar4 = 0x6e69676f6c;
    }
    uVar1 = 0xe700000000000000;
    if (param_2 == 1) {
      uVar1 = 0xe500000000000000;
    }
    uVar3 = 0x6863746566657270;
    if (param_2 != 0) {
      uVar3 = uVar4;
    }
    uVar4 = 0xe800000000000000;
    if (param_2 != 0) {
      uVar4 = uVar1;
    }
    puVar2 = PTR_PTR_1126aed18;
    func_0x000107c61168(PTR_PTR_1126aed18);
    func_0x000107c5fadc(uVar3,uVar4);
    func_0x000107c6142c(uVar4);
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar5 = PTR___sSiN_11034deb0;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x705f,0xe200000000000000);
    func_0x000107c6057c(puVar5,puVar7);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar7);
    uVar4 = 0x67;
    func_0x000107c5fadc(0x67,0xe100000000000000);
    func_0x000107c6142c(0xe100000000000000);
    func_0x000107c4320c(param_1 - *(double *)(unaff_x20 + 0x38),puVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c4bcd4(uVar8);
    func_0x000107c61170(puVar2);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
    *(undefined8 *)(unaff_x20 + 0x38) = 0xbff0000000000000;
  }
  return;
}



/* Entry: 100e2b6f4; end: 100e2b71f;  */

void FUN_100e2b6f4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e2b720; end: 100e2b7bb;  */

bool FUN_100e2b720(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  cVar5 = (char)param_2[2];
  if ((char)param_1[2] == '\x01') {
    if (uVar1 == 0 && uVar3 == 0) {
      if (cVar5 == '\x01' && (uVar4 == 0 && uVar2 == 0)) goto LAB_100e2b7b0;
    }
    else if (uVar1 == 1 && uVar3 == 0) {
      if ((cVar5 == '\x01') && (uVar2 == 1 && uVar4 == 0)) {
LAB_100e2b7b0:
        return (double)param_1[3] == (double)param_2[3];
      }
    }
    else if ((cVar5 == '\x01') && (uVar4 != 0 || CARRY8(uVar4 - 1,(ulong)(1 < uVar2))))
    goto LAB_100e2b7b0;
  }
  else if ((cVar5 != '\x01') && (uVar1 == uVar2 && uVar3 == uVar4)) goto LAB_100e2b7b0;
  return false;
}



/* Entry: 100e2b7bc; end: 100e2b7db;  */

void FUN_100e2b7bc(void)

{
  func_0x000107c61168(&PTR_PTR_112d3a538);
  return;
}



/* Entry: 100e2b7dc; end: 100e2b807;  */

long FUN_100e2b7dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100e2b808; end: 100e2b863;  */

int FUN_100e2b808(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 100e2b864; end: 100e2b8b3;  */

void FUN_100e2b864(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d3a5a8 != 0) {
    return;
  }
  puVar1 = &UNK_110357748;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d3a5a8 = param_1;
  return;
}



/* Entry: 100e2b8b4; end: 100e2b953;  */

int FUN_100e2b8b4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 100e2b954; end: 100e2b9cb;  */

void FUN_100e2b954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_100e2b9e8(param_2,param_3,param_4);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100e2b9cc; end: 100e2b9e7;  */

void FUN_100e2b9cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_100e2b9e8(uVar2,uVar1,uVar3);
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 100e2b9e8; end: 100e2bcf7;  */

void FUN_100e2b9e8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar9 = &puStack_a0;
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100bc7fa4();
  if (param_3 != 0) {
    puVar2 = &UNK_110357970;
    func_0x000107c613fc(&UNK_110357970,0x20,7);
    *(long *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    func_0x000107c61428(unaff_x20 + 0x58,&puStack_a0,0x21,0);
    uVar12 = *(ulong *)(unaff_x20 + 0x58);
    func_0x000107c6157c(param_4);
    uVar3 = uVar12;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + 0x58) = uVar12;
    uVar10 = uVar12;
    if ((uVar3 & 1) == 0) {
      uVar10 = 0;
      FUN_100e2cdcc(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *(ulong *)(unaff_x20 + 0x58) = uVar10;
    }
    uVar3 = *(ulong *)(uVar10 + 0x10);
    uVar12 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar3) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_100e2cdcc(uVar12,uVar3 + 1,1,uVar10);
    }
    *(ulong *)(uVar12 + 0x10) = uVar3 + 1;
    lVar4 = uVar12 + uVar3 * 0x10;
    *(code **)(lVar4 + 0x20) = FUN_100e2cda8;
    *(undefined **)(lVar4 + 0x28) = puVar2;
    *(ulong *)(unaff_x20 + 0x58) = uVar12;
    func_0x000107c614a8(&puStack_a0);
  }
  if ((*(byte *)(unaff_x20 + 0x50) & 1) == 0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      *(undefined1 *)(unaff_x20 + 0x50) = 1;
      plVar5 = (long *)(unaff_x20 + 0x18);
      func_0x0001000a8868(plVar5,*(undefined8 *)(unaff_x20 + 0x30));
      lVar14 = *plVar5;
      func_0x000107c40f00(*(undefined8 *)(lVar14 + 0x18));
      uVar13 = *(undefined8 *)(lVar14 + 0x10);
      uVar1 = 0x6e776f6e6b6e75;
      if (param_2 == 1) {
        uVar1 = 0x6e69676f6c;
      }
      uVar11 = 0xe700000000000000;
      if (param_2 == 1) {
        uVar11 = 0xe500000000000000;
      }
      uVar6 = 0x6863746566657270;
      if (param_2 != 0) {
        uVar6 = uVar1;
      }
      uVar1 = 0xe800000000000000;
      if (param_2 != 0) {
        uVar1 = uVar11;
      }
      puVar2 = PTR_PTR_1126aed18;
      func_0x000107c61168();
      uVar11 = uVar1;
      func_0x000107c5fadc(uVar6,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c43218();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c4bcd4(uVar13);
      func_0x000107c61170();
      *(undefined8 *)(lVar14 + 0x28) = 0;
      *(undefined8 *)(lVar14 + 0x20) = 1;
      *(undefined1 *)(lVar14 + 0x30) = 1;
      *(undefined8 *)(lVar14 + 0x38) = param_1;
      func_0x00010011df08();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar11);
      }
      puVar7 = &UNK_110357830;
      func_0x000107c613fc(&UNK_110357830,0x18,7);
      func_0x000107c61644(puVar7 + 0x10);
      puVar8 = &UNK_110357920;
      func_0x000107c613fc(&UNK_110357920,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(long *)(puVar8 + 0x18) = param_2;
      pcStack_80 = FUN_100e2cd84;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_100e2c194;
      puStack_88 = &UNK_110357938;
      puStack_78 = puVar8;
      func_0x000107c60bc4(&puStack_a0);
      func_0x000107c61574(puStack_78);
      func_0x000107c43198(lVar4);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 100e2bcf8; end: 100e2bf1b; -[_TtC33SCPasskeyLoginOptionsServicesImpl31PasskeyLoginOptionsProviderImpl fetchLoginOptionsWithTrigger:completion:] */

/* WARNING: Possible PIC construction at 0x000100e2bdec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2bdf0) */

void FUN_100e2bcf8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = &UNK_1103578f8;
    func_0x000107c613fc(&UNK_1103578f8,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    uVar4 = 0x100e2ccf0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c614f0(uVar5);
  puVar1 = &UNK_110357830;
  func_0x000107c613fc(&UNK_110357830,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1103578d0;
  func_0x000107c613fc(&UNK_1103578d0,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  *(undefined **)(puVar2 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar1);
  func_0x000100e2b9d8(uVar4,puVar3);
  func_0x00010090569c(0x100e2cf40,puVar2,uVar5);
  FUN_100e2cce0(uVar4,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100e2bf1c; end: 100e2c193;  */

void FUN_100e2bf1c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x000107c4e3cc();
    func_0x000107c61180();
    func_0x0001000a8868(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30));
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x000107c4458c(param_2);
      func_0x000107c4f544(param_2);
      FUN_100e2b370(param_3,lVar1,param_2,0);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c466bc();
      puVar4 = puVar3;
      func_0x000107c5ed2c();
      func_0x000107c61170(puVar3);
      func_0x000107c42d78(puVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000100e2c0d0(puVar2);
      func_0x000107c61574(param_1);
    }
    else {
      FUN_100e2b370(param_3,2,0,1);
      FUN_100e2df78();
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = param_3;
      func_0x000107c61174();
      func_0x000107c61170(uVar5);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      func_0x000100e2c0d0(puVar2);
      func_0x000107c61574(param_1);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 100e2c194; end: 100e2c1df;  */

void FUN_100e2c194(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100e2c1e0; end: 100e2c2db;  */

void FUN_100e2c1e0(long param_1,code *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long alStack_80 [3];
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  plVar1 = alStack_80;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_100e2c2e8();
    func_0x000100e2cd40(param_1 + 0x18,alStack_80);
    func_0x0001000a8868(alStack_80,uStack_68);
    uVar4 = *(undefined8 *)(*plVar1 + 0x10);
    puVar2 = PTR_PTR_1126aed18;
    func_0x000107c61168(PTR_PTR_1126aed18);
    func_0x000107c4f784();
    func_0x000107c61180();
    func_0x000107c4bcd4(uVar4);
    func_0x000107c61170(puVar2);
    func_0x0001000834e4(alStack_80);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    uVar4 = uVar3;
    func_0x000107c61174(uVar3);
    (*param_2)(uVar3);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 100e2c2dc; end: 100e2c2e7;  */

void FUN_100e2c2dc(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long alStack_80 [3];
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  plVar3 = alStack_80;
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_100e2c2e8();
    func_0x000100e2cd40(lVar2 + 0x18,alStack_80);
    func_0x0001000a8868(alStack_80,uStack_68);
    uVar6 = *(undefined8 *)(*plVar3 + 0x10);
    puVar4 = PTR_PTR_1126aed18;
    func_0x000107c61168(PTR_PTR_1126aed18);
    func_0x000107c4f784();
    func_0x000107c61180();
    func_0x000107c4bcd4(uVar6);
    func_0x000107c61170(puVar4);
    func_0x0001000834e4(alStack_80);
    uVar5 = *(undefined8 *)(lVar2 + 0x60);
    uVar6 = uVar5;
    func_0x000107c61174(uVar5);
    (*pcVar1)(uVar5);
    func_0x000107c61574(lVar2);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 100e2c2e8; end: 100e2c4bf;  */

void FUN_100e2c2e8(double param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100bc7fa4();
  puVar2 = *(undefined **)(unaff_x20 + 0x60);
  if (puVar2 != (undefined *)0x0) {
    lVar6 = *(long *)(unaff_x20 + 0x48);
    func_0x000107c61174();
    uVar3 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010ef12a50);
    func_0x000107c436e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (lVar6 == 0) {
      dVar11 = 2.0;
      dVar10 = param_1;
    }
    else {
      func_0x000107c4223c(lVar6);
      dVar10 = param_1;
      func_0x000107c61170(lVar6);
      dVar11 = param_1;
    }
    puVar4 = puVar2;
    func_0x000107c42bcc(puVar2);
    func_0x000107c61180();
    func_0x000107c5ee94((long)puVar8 - extraout_x12);
    func_0x000107c61170(puVar4);
    func_0x000107c5eea0(puVar8);
    func_0x000107c5ee68(puVar8);
    pcVar7 = *(code **)(lVar9 + 8);
    (*pcVar7)(puVar8,lVar1);
    (*pcVar7)((long)puVar8 - extraout_x12,lVar1);
    puVar4 = puVar2;
    if (dVar10 < dVar11) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
      *(undefined8 *)(unaff_x20 + 0x60) = 0;
      func_0x000107c61170(uVar3);
      plVar5 = (long *)(unaff_x20 + 0x18);
      func_0x0001000a8868(plVar5,*(undefined8 *)(unaff_x20 + 0x30));
      uVar3 = *(undefined8 *)(*plVar5 + 0x10);
      puVar4 = PTR_PTR_1126aed18;
      func_0x000107c61168(PTR_PTR_1126aed18);
      func_0x000107c42be0();
      func_0x000107c61180();
      func_0x000107c4bcd4(uVar3);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 100e2c4c0; end: 100e2c5b7; -[_TtC33SCPasskeyLoginOptionsServicesImpl31PasskeyLoginOptionsProviderImpl queryLoginOptionsWithCompletion:] */

/* WARNING: Possible PIC construction at 0x000100e2c58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2c59c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e2c590) */
/* WARNING: Removing unreachable block (ram,0x000100e2c5a0) */

void FUN_100e2c4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110357880;
  func_0x000107c613fc(&UNK_110357880,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c614f0(uVar4);
  puVar2 = &UNK_110357830;
  func_0x000107c613fc(&UNK_110357830,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103578a8;
  func_0x000107c613fc(&UNK_1103578a8,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_100e2cc70;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x100e2cf48,puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 100e2c5b8; end: 100e2cb1f;  */

void FUN_100e2c5b8(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  long extraout_x8;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar16 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar12,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x60);
  if (uVar3 == 0) {
    *(ulong *)(param_1 + 0x60) = param_2;
    func_0x000107c61174(param_2);
  }
  else {
    lStack_98 = param_1;
    lStack_80 = lVar2;
    func_0x000107c61174();
    uVar17 = param_2;
    func_0x000107c4fdb4();
    func_0x000107c61180();
    uVar4 = uVar17;
    func_0x000107c5faec();
    puVar13 = puVar12;
    func_0x000107c61170(uVar17);
    func_0x000107c6142c(puVar12);
    uVar17 = uVar4 & 0xffffffffffff;
    if (((ulong)puVar12 & 0x2000000000000000) != 0) {
      uVar17 = (ulong)puVar12 >> 0x38 & 0xf;
    }
    uVar4 = uVar3;
    if (uVar17 != 0) {
      uVar4 = param_2;
    }
    func_0x000107c4fdb4();
    func_0x000107c61180();
    uVar17 = uVar4;
    func_0x000107c5faec();
    uStack_a0 = uVar17;
    puStack_90 = puVar13;
    func_0x000107c61170(uVar4);
    uVar17 = param_2;
    func_0x000107c4d738();
    func_0x000107c61180();
    uVar4 = uVar17;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar17);
    uVar1 = (uint)((ulong)puVar13 >> 0x20);
    uVar15 = uVar1 >> 0x1e;
    uVar17 = uVar3;
    lStack_88 = lVar18;
    if (uVar1 >> 0x1e < 2) {
      if (uVar15 == 0) {
        puVar12 = puVar13;
        func_0x00010006c090(uVar4);
        uVar4 = (ulong)puVar13 & 0xff000000000000;
        puVar13 = puVar12;
        if (uVar4 == 0) goto LAB_100e2c77c;
      }
      else {
        func_0x00010006c090(uVar4);
        lVar2 = (long)(int)uVar4;
        lVar18 = (long)uVar4 >> 0x20;
LAB_100e2c758:
        puVar12 = puVar13;
        if (lVar2 == lVar18) goto LAB_100e2c77c;
      }
      uVar17 = param_2;
      puVar12 = puVar13;
    }
    else {
      if (uVar15 == 2) {
        lVar2 = *(long *)(uVar4 + 0x10);
        lVar18 = *(long *)(uVar4 + 0x18);
        func_0x00010006c090(uVar4);
        goto LAB_100e2c758;
      }
      func_0x00010006c090(uVar4);
      puVar12 = puVar13;
    }
LAB_100e2c77c:
    func_0x000107c4d738(uVar17);
    func_0x000107c61180();
    uVar4 = uVar17;
    func_0x000107c5ee30();
    puVar13 = puVar12;
    func_0x000107c61170(uVar17);
    uVar17 = param_2;
    func_0x000107c5dadc();
    func_0x000107c61180();
    uVar5 = uVar17;
    func_0x000107c5faec();
    puVar14 = puVar13;
    func_0x000107c61170(uVar17);
    func_0x000107c6142c(puVar13);
    uVar17 = uVar5 & 0xffffffffffff;
    if (((ulong)puVar13 & 0x2000000000000000) != 0) {
      uVar17 = (ulong)puVar13 >> 0x38 & 0xf;
    }
    uVar5 = uVar3;
    if (uVar17 != 0) {
      uVar5 = param_2;
    }
    func_0x000107c5dadc();
    func_0x000107c61180();
    uVar17 = uVar5;
    func_0x000107c5faec();
    uStack_b0 = uVar17;
    func_0x000107c61170(uVar5);
    uVar17 = param_2;
    func_0x000107c3dc18();
    func_0x000107c61180();
    uVar6 = 0;
    FUN_100e2cd00(0,0x112d3a1f0,&PTR_PTR_1126a5dc0);
    uVar5 = uVar17;
    func_0x000107c5fc54(uVar17,uVar6);
    func_0x000107c61170(uVar17);
    if (uVar5 >> 0x3e == 0) {
      uVar17 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar17 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar17 = uVar5;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar5);
    uVar5 = uVar3;
    if (uVar17 != 0) {
      uVar5 = param_2;
    }
    uStack_a8 = uVar3;
    func_0x000107c3dc18(uVar5);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar5);
    func_0x00010006c00c(uVar4,puVar12);
    func_0x000107c42bcc(param_2);
    func_0x000107c61180();
    func_0x000107c5ee94(lVar16);
    func_0x000107c61170(param_2);
    puVar7 = PTR_PTR_1126a5e08;
    func_0x000107c610f8();
    puVar13 = puStack_90;
    uVar17 = uStack_a0;
    func_0x000107c5fadc(uStack_a0,puStack_90);
    func_0x000107c6142c(puVar13);
    uVar5 = uVar4;
    func_0x000107c5ee20(uVar4,puVar12);
    uVar8 = uStack_b0;
    func_0x000107c5fadc(uStack_b0,puVar14);
    func_0x000107c6142c(puVar14);
    uVar9 = uVar3;
    func_0x000107c5fc48(uVar3,uVar6);
    func_0x000107c6142c(uVar3);
    func_0x000107c5ee70();
    func_0x000107c482e4();
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x00010006c090(uVar4,puVar12);
    (**(code **)(lStack_88 + 8))(lVar16,lStack_80);
    param_1 = lStack_98;
    lVar2 = *(long *)(lStack_98 + 0x60);
    if (lVar2 == 0) {
      func_0x000107c61174();
      func_0x00010006c090(uVar4,puVar12);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uStack_a8);
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      *(undefined **)(param_1 + 0x60) = puVar7;
      func_0x000107c61170(uVar6);
    }
    else {
      FUN_100e2cd00(0,0x112d3a680,&PTR_PTR_1126a5e08);
      func_0x000107c61174();
      func_0x000107c61174(lVar2);
      puVar10 = puVar7;
      func_0x000107c60118(puVar7,lVar2);
      func_0x00010006c090(uVar4,puVar12);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uStack_a8);
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      *(undefined **)(param_1 + 0x60) = puVar7;
      func_0x000107c61170(uVar6);
      if (((ulong)puVar10 & 1) != 0) goto LAB_100e2cae0;
    }
  }
  plVar11 = (long *)(param_1 + 0x18);
  func_0x0001000a8868(plVar11,*(undefined8 *)(param_1 + 0x30));
  uVar6 = *(undefined8 *)(*plVar11 + 0x10);
  puVar7 = PTR_PTR_1126aed18;
  func_0x000107c61168(PTR_PTR_1126aed18);
  func_0x000107c42be4();
  func_0x000107c61180();
  func_0x000107c4bcd4(uVar6);
  func_0x000107c61170(puVar7);
  puVar7 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  func_0x000100e2c0d0();
  func_0x000107c61170(puVar7);
LAB_100e2cae0:
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 100e2cb20; end: 100e2cb27;  */

void FUN_100e2cb20(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  long extraout_x8;
  long lVar16;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar19 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(ulong *)(unaff_x20 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar16 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_78;
  func_0x000107c61428(lVar19 + 0x10,puVar12,0,0);
  lVar19 = lVar19 + 0x10;
  func_0x000107c61648();
  if (lVar19 == 0) {
    return;
  }
  uVar3 = *(ulong *)(lVar19 + 0x60);
  if (uVar3 == 0) {
    *(ulong *)(lVar19 + 0x60) = uVar7;
    func_0x000107c61174(uVar7);
  }
  else {
    lStack_98 = lVar19;
    lStack_80 = lVar2;
    func_0x000107c61174();
    uVar17 = uVar7;
    func_0x000107c4fdb4();
    func_0x000107c61180();
    uVar4 = uVar17;
    func_0x000107c5faec();
    puVar13 = puVar12;
    func_0x000107c61170(uVar17);
    func_0x000107c6142c(puVar12);
    uVar17 = uVar4 & 0xffffffffffff;
    if (((ulong)puVar12 & 0x2000000000000000) != 0) {
      uVar17 = (ulong)puVar12 >> 0x38 & 0xf;
    }
    uVar4 = uVar3;
    if (uVar17 != 0) {
      uVar4 = uVar7;
    }
    func_0x000107c4fdb4();
    func_0x000107c61180();
    uVar17 = uVar4;
    func_0x000107c5faec();
    uStack_a0 = uVar17;
    puStack_90 = puVar13;
    func_0x000107c61170(uVar4);
    uVar17 = uVar7;
    func_0x000107c4d738();
    func_0x000107c61180();
    uVar4 = uVar17;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar17);
    uVar1 = (uint)((ulong)puVar13 >> 0x20);
    uVar15 = uVar1 >> 0x1e;
    uVar17 = uVar3;
    lStack_88 = lVar18;
    if (uVar1 >> 0x1e < 2) {
      if (uVar15 == 0) {
        puVar12 = puVar13;
        func_0x00010006c090(uVar4);
        uVar4 = (ulong)puVar13 & 0xff000000000000;
        puVar13 = puVar12;
        if (uVar4 == 0) goto LAB_100e2c77c;
      }
      else {
        func_0x00010006c090(uVar4);
        lVar19 = (long)(int)uVar4;
        lVar2 = (long)uVar4 >> 0x20;
LAB_100e2c758:
        puVar12 = puVar13;
        if (lVar19 == lVar2) goto LAB_100e2c77c;
      }
      uVar17 = uVar7;
      puVar12 = puVar13;
    }
    else {
      if (uVar15 == 2) {
        lVar19 = *(long *)(uVar4 + 0x10);
        lVar2 = *(long *)(uVar4 + 0x18);
        func_0x00010006c090(uVar4);
        goto LAB_100e2c758;
      }
      func_0x00010006c090(uVar4);
      puVar12 = puVar13;
    }
LAB_100e2c77c:
    func_0x000107c4d738(uVar17);
    func_0x000107c61180();
    uVar4 = uVar17;
    func_0x000107c5ee30();
    puVar13 = puVar12;
    func_0x000107c61170(uVar17);
    uVar17 = uVar7;
    func_0x000107c5dadc();
    func_0x000107c61180();
    uVar5 = uVar17;
    func_0x000107c5faec();
    puVar14 = puVar13;
    func_0x000107c61170(uVar17);
    func_0x000107c6142c(puVar13);
    uVar17 = uVar5 & 0xffffffffffff;
    if (((ulong)puVar13 & 0x2000000000000000) != 0) {
      uVar17 = (ulong)puVar13 >> 0x38 & 0xf;
    }
    uVar5 = uVar3;
    if (uVar17 != 0) {
      uVar5 = uVar7;
    }
    func_0x000107c5dadc();
    func_0x000107c61180();
    uVar17 = uVar5;
    func_0x000107c5faec();
    uStack_b0 = uVar17;
    func_0x000107c61170(uVar5);
    uVar17 = uVar7;
    func_0x000107c3dc18();
    func_0x000107c61180();
    uVar6 = 0;
    FUN_100e2cd00(0,0x112d3a1f0,&PTR_PTR_1126a5dc0);
    uVar5 = uVar17;
    func_0x000107c5fc54(uVar17,uVar6);
    func_0x000107c61170(uVar17);
    if (uVar5 >> 0x3e == 0) {
      uVar17 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar17 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar17 = uVar5;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar5);
    uVar5 = uVar3;
    if (uVar17 != 0) {
      uVar5 = uVar7;
    }
    uStack_a8 = uVar3;
    func_0x000107c3dc18(uVar5);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar5);
    func_0x00010006c00c(uVar4,puVar12);
    func_0x000107c42bcc(uVar7);
    func_0x000107c61180();
    func_0x000107c5ee94(lVar16);
    func_0x000107c61170(uVar7);
    puVar8 = PTR_PTR_1126a5e08;
    func_0x000107c610f8();
    puVar13 = puStack_90;
    uVar7 = uStack_a0;
    func_0x000107c5fadc(uStack_a0,puStack_90);
    func_0x000107c6142c(puVar13);
    uVar17 = uVar4;
    func_0x000107c5ee20(uVar4,puVar12);
    uVar5 = uStack_b0;
    func_0x000107c5fadc(uStack_b0,puVar14);
    func_0x000107c6142c(puVar14);
    uVar9 = uVar3;
    func_0x000107c5fc48(uVar3,uVar6);
    func_0x000107c6142c(uVar3);
    func_0x000107c5ee70();
    func_0x000107c482e4();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x00010006c090(uVar4,puVar12);
    (**(code **)(lStack_88 + 8))(lVar16,lStack_80);
    lVar19 = lStack_98;
    lVar2 = *(long *)(lStack_98 + 0x60);
    if (lVar2 == 0) {
      func_0x000107c61174();
      func_0x00010006c090(uVar4,puVar12);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(uStack_a8);
      uVar6 = *(undefined8 *)(lVar19 + 0x60);
      *(undefined **)(lVar19 + 0x60) = puVar8;
      func_0x000107c61170(uVar6);
    }
    else {
      FUN_100e2cd00(0,0x112d3a680,&PTR_PTR_1126a5e08);
      func_0x000107c61174();
      func_0x000107c61174(lVar2);
      puVar10 = puVar8;
      func_0x000107c60118(puVar8,lVar2);
      func_0x00010006c090(uVar4,puVar12);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uStack_a8);
      uVar6 = *(undefined8 *)(lVar19 + 0x60);
      *(undefined **)(lVar19 + 0x60) = puVar8;
      func_0x000107c61170(uVar6);
      if (((ulong)puVar10 & 1) != 0) goto LAB_100e2cae0;
    }
  }
  plVar11 = (long *)(lVar19 + 0x18);
  func_0x0001000a8868(plVar11,*(undefined8 *)(lVar19 + 0x30));
  uVar6 = *(undefined8 *)(*plVar11 + 0x10);
  puVar8 = PTR_PTR_1126aed18;
  func_0x000107c61168(PTR_PTR_1126aed18);
  func_0x000107c42be4();
  func_0x000107c61180();
  func_0x000107c4bcd4(uVar6);
  func_0x000107c61170(puVar8);
  puVar8 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  func_0x000100e2c0d0();
  func_0x000107c61170(puVar8);
LAB_100e2cae0:
  func_0x000107c61574(lVar19);
  return;
}



/* Entry: 100e2cb28; end: 100e2cc03; -[_TtC33SCPasskeyLoginOptionsServicesImpl31PasskeyLoginOptionsProviderImpl refreshLoginOptions:] */

void FUN_100e2cb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_110357830;
  func_0x000107c613fc(&UNK_110357830,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110357858;
  func_0x000107c613fc(&UNK_110357858,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x100e2cf44,puVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e2cc04; end: 100e2cc6f;  */

void FUN_100e2cc04(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e2cc70; end: 100e2cc7f;  */

void FUN_100e2cc70(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100e2cc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 100e2cc80; end: 100e2ccdf;  */

void FUN_100e2cc80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100e2cce0; end: 100e2ccff;  */

void FUN_100e2cce0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}


