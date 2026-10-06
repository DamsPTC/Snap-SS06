/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077b8194; end: 1077b81b3;  */

void FUN_1077b8194(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dbae8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077b8318; end: 1077b8347;  */

void FUN_1077b8318(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109dbb38;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1077b8774; end: 1077b8787;  */

void FUN_1077b8774(void)

{
  func_0x0001077b8748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077b8aec; end: 1077b8aff;  */

void FUN_1077b8aec(void)

{
  func_0x0001077b8ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077b8de0; end: 1077b9ceb;  */

void FUN_1077b8de0(undefined8 *param_1,undefined *******param_2,long *param_3,long *param_4)

{
  undefined ******ppppppuVar1;
  double *pdVar2;
  uint uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  undefined *****pppppuVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  undefined *******pppppppuVar14;
  undefined ******ppppppuVar15;
  undefined *****pppppuVar16;
  undefined ****ppppuVar17;
  undefined ******ppppppuVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 extraout_x8;
  long lVar21;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar22;
  undefined8 extraout_x8_06;
  undefined ******ppppppuVar23;
  undefined ******ppppppuVar24;
  undefined8 extraout_x9;
  undefined ****ppppuVar25;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  uint uVar26;
  int iVar27;
  undefined ******ppppppuVar28;
  undefined ******ppppppuVar29;
  undefined ****ppppuVar30;
  ulong uVar31;
  undefined ******ppppppuVar32;
  undefined ******ppppppuVar34;
  double dVar35;
  double dVar36;
  undefined ***pppuVar37;
  double dVar38;
  ushort uVar39;
  undefined *****pppppuStack_230;
  undefined *****pppppuStack_228;
  undefined *****pppppuStack_220;
  undefined *****pppppuStack_218;
  undefined *****pppppuStack_210;
  undefined *****pppppuStack_208;
  undefined *****pppppuStack_200;
  undefined *****pppppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  int iStack_1a4;
  undefined ****ppppuStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint uStack_17c;
  undefined *****pppppuStack_178;
  undefined *****pppppuStack_170;
  undefined *****pppppuStack_168;
  undefined *****pppppuStack_160;
  undefined8 *puStack_158;
  undefined *****pppppuStack_150;
  undefined ****ppppuStack_148;
  undefined1 uStack_140;
  undefined *****apppppuStack_138 [3];
  undefined ******ppppppuStack_120;
  undefined *****apppppuStack_118 [3];
  undefined ******ppppppuStack_100;
  undefined ******ppppppuStack_f0;
  undefined ****ppppuStack_e8;
  undefined1 uStack_e0;
  undefined ******appppppuStack_d8 [3];
  undefined ******ppppppuStack_c0;
  undefined *****apppppuStack_b8 [3];
  undefined ******ppppppuStack_a0;
  undefined8 uStack_90;
  undefined ******ppppppuVar33;
  
  pppppppuVar14 = param_2;
  func_0x0001077be83c();
  lVar21 = *param_3;
  uVar26 = *(uint *)(lVar21 + 0x14);
  dVar38 = (double)uVar26 / 512.0;
  bVar12 = *(char *)(lVar21 + 0x18) == '\x01';
  uVar13 = bVar12 && *(int *)pppppppuVar14 == 0;
  uStack_90 = extraout_x8;
  if (bVar12 && *(int *)pppppppuVar14 == 0) {
    pppppppuVar14 = param_2;
    func_0x0001072bf8d0();
    lVar21 = *param_3;
    if (**pppppppuVar14 == (*pppppppuVar14)[1]) {
      uVar26 = *(uint *)(lVar21 + 0x14);
      uVar13 = true;
      goto LAB_1077b8efc;
    }
    ppppuStack_148 = (undefined ****)0x2;
    uStack_140 = 0;
    apppppuStack_138[0] = (undefined *****)&PTR_DAT_1109dbcf8;
    ppppppuStack_100 = (undefined ******)0x0;
    dVar35 = (double)NEON_ucvtf((ulong)*(ushort *)(lVar21 + 0x1a));
    pppppuStack_150 =
         (undefined *****)
         ((ulong)CONCAT43(CONCAT22((short)((ulong)pppppuStack_150 >> 0x30),
                                   (short)*(undefined4 *)(lVar21 + 0x14)),
                          CONCAT21((short)(int)(dVar38 * dVar35),*(undefined1 *)(lVar21 + 0x1c))) <<
         8);
    ppppppuStack_120 = apppppuStack_138;
    func_0x000107459868(&pppppuStack_220);
    pppppuVar9 = pppppuStack_218;
    pppppuVar16 = pppppuStack_220;
    if ((undefined ******)pppppuStack_218 != (undefined ******)0x0) {
      do {
        func_0x0001077be93c();
      } while (extraout_w10 != 0);
    }
    ppppppuVar15 = (undefined ******)*param_3;
    ppppppuVar23 = (undefined ******)param_3[1];
    pppppuStack_168 = (undefined *****)ppppppuVar15;
    pppppuStack_160 = (undefined *****)ppppppuVar23;
    pppppuStack_200 = (undefined *****)ppppppuVar15;
    if (ppppppuVar23 == (undefined ******)0x0) {
      pppppuStack_178 = (undefined *****)0x0;
      pppppuStack_170 = (undefined *****)0x0;
      pppppuStack_208 = pppppuVar9;
      pppppuStack_1f8 = (undefined *****)0x0;
    }
    else {
      do {
        func_0x0001077be93c();
      } while (extraout_w10_00 != 0);
      pppppuStack_178 = (undefined *****)0x0;
      pppppuStack_170 = (undefined *****)0x0;
      pppppuStack_208 = pppppuVar9;
      pppppuStack_1f8 = (undefined *****)ppppppuVar23;
      do {
        func_0x0001077be93c();
      } while (extraout_w10_01 != 0);
    }
    pppppuStack_210 = pppppuVar16;
    func_0x0001077bea4c();
    *pppppppuVar14 = (undefined ******)&PTR_DAT_1109dbfa8;
    pppppppuVar14[1] = (undefined ******)pppppuVar16;
    pppppuStack_210 = (undefined *****)0x0;
    pppppuStack_208 = (undefined *****)0x0;
    pppppppuVar14[2] = (undefined ******)pppppuVar9;
    pppppppuVar14[3] = ppppppuVar15;
    pppppppuVar14[4] = ppppppuVar23;
    if (ppppppuVar23 != (undefined ******)0x0) {
      do {
        func_0x0001077be93c();
      } while (extraout_w10_02 != 0);
    }
    if (ppppppuStack_120 == apppppuStack_138) {
      appppppuStack_d8[0] = (undefined ******)pppppppuVar14;
      func_0x0001077bed3c();
      func_0x0001077bed50(ppppppuStack_120);
      ppppppuStack_120 = appppppuStack_d8[0];
      appppppuStack_d8[0] = (undefined ******)&ppppppuStack_f0;
    }
    else {
      appppppuStack_d8[0] = ppppppuStack_120;
      ppppppuStack_120 = (undefined ******)pppppppuVar14;
    }
    func_0x0001077ba390(&ppppppuStack_f0);
    func_0x0001077b9cec(&pppppuStack_210);
    pppppppuVar14 = (undefined *******)&pppppuStack_178;
    func_0x0001077b9cec();
    if ((undefined ******)pppppuStack_218 != (undefined ******)0x0) {
      do {
        func_0x0001077be93c();
      } while (extraout_w10_03 != 0);
    }
    ppppppuVar15 = (undefined ******)*param_3;
    ppppppuVar23 = (undefined ******)param_3[1];
    pppppuStack_168 = (undefined *****)ppppppuVar15;
    pppppuStack_160 = (undefined *****)ppppppuVar23;
    if (ppppppuVar23 != (undefined ******)0x0) {
      do {
        func_0x0001077be93c();
      } while (extraout_w10_04 != 0);
    }
    pppppuStack_210 = pppppuStack_220;
    pppppuStack_208 = pppppuStack_218;
    pppppuStack_178 = (undefined *****)0x0;
    pppppuStack_170 = (undefined *****)0x0;
    pppppuStack_200 = (undefined *****)ppppppuVar15;
    pppppuStack_1f8 = (undefined *****)ppppppuVar23;
    if (ppppppuVar23 != (undefined ******)0x0) {
      do {
        func_0x0001077be93c();
      } while (extraout_w10_05 != 0);
    }
    func_0x0001077bea4c();
    *pppppppuVar14 = (undefined ******)&PTR_DAT_1109dc0f0;
    pppppppuVar14[1] = (undefined ******)pppppuStack_220;
    pppppuStack_210 = (undefined *****)0x0;
    pppppuStack_208 = (undefined *****)0x0;
    pppppppuVar14[2] = (undefined ******)pppppuStack_218;
    pppppppuVar14[3] = ppppppuVar15;
    pppppppuVar14[4] = ppppppuVar23;
    if (ppppppuVar23 != (undefined ******)0x0) {
      do {
        func_0x0001077be93c();
      } while (extraout_w10_06 != 0);
    }
    if (ppppppuStack_100 == apppppuStack_118) {
      appppppuStack_d8[0] = (undefined ******)pppppppuVar14;
      func_0x0001077bed3c();
      func_0x0001077bed50(ppppppuStack_100);
      ppppppuStack_100 = appppppuStack_d8[0];
      appppppuStack_d8[0] = (undefined ******)&ppppppuStack_f0;
    }
    else {
      appppppuStack_d8[0] = ppppppuStack_100;
      ppppppuStack_100 = (undefined ******)pppppppuVar14;
    }
    func_0x0001077bc620(&ppppppuStack_f0);
    func_0x0001077b9d0c(&pppppuStack_210);
    func_0x0001077b9d0c(&pppppuStack_178);
    ppppppuVar15 = (undefined ******)0x98;
    __Znwm();
    func_0x0001072bf8d0(param_2);
    *ppppppuVar15 = (undefined *****)&PTR_DAT_1109dbd88;
    ppppuStack_e8 = ppppuStack_148;
    ppppppuStack_f0 = (undefined ******)pppppuStack_150;
    uStack_e0 = uStack_140;
    ppppppuStack_c0 = ppppppuStack_120;
    if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
      if (ppppppuStack_120 == apppppuStack_138) {
        ppppppuStack_c0 = (undefined ******)appppppuStack_d8;
        func_0x0001077bec38();
        (*extraout_x8_00)();
      }
      else {
        pppppppuVar14 = (undefined *******)ppppppuStack_120;
        (*(code *)(*ppppppuStack_120)[2])();
        ppppppuStack_c0 = (undefined ******)pppppppuVar14;
      }
    }
    ppppppuStack_a0 = ppppppuStack_100;
    if ((undefined *******)ppppppuStack_100 != (undefined *******)0x0) {
      if (ppppppuStack_100 == apppppuStack_118) {
        ppppppuStack_a0 = apppppuStack_b8;
        func_0x0001077bec38();
        (*extraout_x8_01)();
      }
      else {
        pppppppuVar14 = (undefined *******)ppppppuStack_100;
        (*(code *)(*ppppppuStack_100)[2])();
        ppppppuStack_a0 = (undefined ******)pppppppuVar14;
      }
    }
    func_0x0001072c0298(ppppppuVar15 + 1,param_2);
    ppppppuVar15[4] = (undefined *****)ppppuStack_e8;
    ppppppuVar15[3] = (undefined *****)ppppppuStack_f0;
    *(undefined1 *)(ppppppuVar15 + 5) = uStack_e0;
    if ((undefined *******)ppppppuStack_c0 == (undefined *******)0x0) {
      ppppppuVar15[9] = (undefined *****)0x0;
    }
    else if ((undefined *******)ppppppuStack_c0 == appppppuStack_d8) {
      ppppppuVar15[9] = (undefined *****)(ppppppuVar15 + 6);
      func_0x0001077bec38();
      (*extraout_x8_02)();
    }
    else {
      ppppppuVar15[9] = (undefined *****)ppppppuStack_c0;
      ppppppuStack_c0 = (undefined ******)0x0;
    }
    if ((undefined *******)ppppppuStack_a0 == (undefined *******)0x0) {
      ppppppuVar15[0xd] = (undefined *****)0x0;
    }
    else if (ppppppuStack_a0 == apppppuStack_b8) {
      ppppppuVar15[0xd] = (undefined *****)(ppppppuVar15 + 10);
      func_0x0001077bec38();
      (*extraout_x8_03)();
    }
    else {
      ppppppuVar15[0xd] = (undefined *****)ppppppuStack_a0;
      ppppppuStack_a0 = (undefined ******)0x0;
    }
    ppppppuVar23 = ppppppuVar15 + 0xe;
    ppppppuVar15[0xf] = (undefined *****)0x0;
    *ppppppuVar23 = (undefined *****)0x0;
    ppppppuVar15[0x11] = (undefined *****)0x0;
    ppppppuVar15[0x10] = (undefined *****)0x0;
    *(undefined4 *)(ppppppuVar15 + 0x12) = 0x3f800000;
    cVar7 = *(char *)((long)ppppppuVar15 + 0x19);
    pppppuStack_1f8 = (undefined *****)0x0;
    pppppuStack_200 = (undefined *****)0x0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    pppppuStack_208 = (undefined *****)0x0;
    pppppuStack_210 = (undefined *****)0x0;
    uStack_1e0 = 0x40;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    lStack_1d8 = 0;
    ppppuVar25 = *ppppppuVar15[1];
    ppppuVar30 = ppppppuVar15[1][1];
    if ((long)ppppuVar30 - (long)ppppuVar25 != 0) {
      uVar22 = ((long)ppppuVar30 - (long)ppppuVar25) / 0x70;
      if (0x666666666666666 < uVar22) goto LAB_1077b9ac4;
      FUN_1077baa48(&pppppuStack_178,uVar22,0,&uStack_1c8);
      func_0x0001077bea6c();
      func_0x0001077bea18();
      ppppuVar25 = *ppppppuVar15[1];
      ppppuVar30 = ppppppuVar15[1][1];
    }
    ppppppuVar34 = (undefined ******)0x0;
    for (; ppppuVar25 != ppppuVar30; ppppuVar25 = ppppuVar25 + 0xe) {
      if (ppppppuVar15[0xd] == (undefined *****)0x0) {
        ppppuVar17 = ppppuVar25;
        func_0x000104c2d3c0();
        func_0x0001077ba7a4(*ppppuVar17,ppppuVar17[1]);
        if (uStack_1d0 < uStack_1c8) {
          func_0x0001077bedb4();
          *(undefined8 *)(extraout_x8_04 + 0x20) = 0;
          uStack_1d0 = extraout_x8_04 + 0x28;
        }
        else {
          func_0x0001077beaa4((long)(uStack_1d0 - lStack_1d8) / 0x28,&lStack_1d8);
          func_0x0001077beda8();
          func_0x0001077bec50();
          func_0x0001077bedb4(pppppuStack_168);
          *(undefined8 *)(extraout_x8_05 + 0x20) = 0;
          pppppuStack_168 = (undefined *****)(extraout_x8_05 + 0x28);
          func_0x0001077bea6c();
          uVar22 = uStack_1d0;
          func_0x0001077bea18();
          uStack_1d0 = uVar22;
        }
      }
      else {
        pppppuVar16 = ppppppuVar15[9];
        if (pppppuVar16 == (undefined *****)0x0) {
          func_0x000104bfeb48();
          goto LAB_1077b9ac8;
        }
        (*(code *)(*pppppuVar16)[6])(&uStack_190,pppppuVar16,ppppuVar25 + 4);
        ppppuVar17 = ppppuVar25;
        func_0x000104c2d3c0();
        pppppuVar16 = (undefined *****)*ppppuVar17;
        pppuVar37 = ppppuVar17[1];
        func_0x0001077ba7a4();
        uVar22 = uStack_1d0;
        ppppuStack_1a0 = (undefined ****)pppppuVar16;
        ppuStack_198 = (undefined **)pppuVar37;
        if (uStack_1d0 < uStack_1c8) {
          func_0x0001077bed24(uStack_1d0,&ppppuStack_1a0);
          uVar22 = uVar22 + 0x28;
        }
        else {
          func_0x0001077beaa4((long)(uStack_1d0 - lStack_1d8) / 0x28,&lStack_1d8);
          func_0x0001077beda8();
          func_0x0001077bec50();
          func_0x0001077bed24(pppppuStack_168,&ppppuStack_1a0);
          pppppuStack_168 = pppppuStack_168 + 5;
          func_0x0001077bea6c();
          uVar22 = uStack_1d0;
          func_0x0001077bea18();
        }
        uStack_1d0 = uVar22;
        func_0x0001077beb70();
      }
      ppppppuVar34 = (undefined ******)(ulong)((int)ppppppuVar34 + 1);
    }
    ppppppuVar32 = &pppppuStack_210;
    func_0x0001077ba830(ppppppuVar32,lStack_1d8,uStack_1d0);
    func_0x0001077bece0();
    ppppppuVar1 = ppppppuVar15 + 0x10;
    pppppuStack_168 = (undefined *****)0x1;
    pppppuStack_178 = (undefined *****)ppppppuVar32;
    pppppuStack_170 = (undefined *****)ppppppuVar1;
    *ppppppuVar32 = (undefined *****)0x0;
    *(char *)(ppppppuVar32 + 2) = cVar7 + '\x01';
    ppppppuVar18 = ppppppuVar32 + 3;
    FUN_1077ba568(ppppppuVar18,&pppppuStack_210);
    ppppppuVar32[1] = (undefined *****)(ulong)*(byte *)(ppppppuVar32 + 2);
    func_0x0001077bec94();
    if (((ulong)ppppppuVar18 & 1) != 0) {
      pppppuStack_178 = (undefined *****)0x0;
    }
    func_0x0001077bea88();
    func_0x0001077beca0();
    for (uVar26 = (uint)*(byte *)((long)ppppppuVar15 + 0x19);
        uVar20 = (uint)*(byte *)(ppppppuVar15 + 3), uVar13 = uVar26 == uVar20,
        (int)uVar20 <= (int)uVar26; uVar26 = uVar26 - 1) {
      uVar20 = uVar26 + 1;
      ppppppuVar29 = (undefined ******)((ulong)uVar20 & 0xff);
      ppppppuVar28 = (undefined ******)ppppppuVar15[0xf];
      if (ppppppuVar28 != (undefined ******)0x0) {
        uVar22 = (long)ppppppuVar28 - 1;
        if (((ulong)ppppppuVar28 & uVar22) == 0) {
          ppppppuVar34 = (undefined ******)((ulong)((uint)ppppppuVar28 - 1) & (ulong)ppppppuVar29);
        }
        else {
          ppppppuVar34 = ppppppuVar29;
          if (ppppppuVar28 <= ppppppuVar29) {
            uVar3 = (uint)ppppppuVar28 & 0xff;
            uVar8 = 0;
            if (((ulong)ppppppuVar28 & 0xff) != 0) {
              uVar8 = (uVar20 & 0xff) / uVar3;
            }
            ppppppuVar34 = (undefined ******)(ulong)((uVar20 & 0xff) - uVar8 * uVar3);
          }
        }
        ppppppuVar32 = (undefined ******)0x0;
        ppppppuVar33 = (undefined ******)(*ppppppuVar23)[(long)ppppppuVar34];
        if ((undefined ******)(*ppppppuVar23)[(long)ppppppuVar34] != (undefined ******)0x0) {
          do {
            while( true ) {
              ppppppuVar32 = (undefined ******)*ppppppuVar33;
              if (ppppppuVar32 == (undefined ******)0x0) goto LAB_1077b9670;
              ppppppuVar24 = (undefined ******)ppppppuVar32[1];
              ppppppuVar33 = ppppppuVar32;
              if (ppppppuVar24 != ppppppuVar29) break;
              if ((uint)*(byte *)(ppppppuVar32 + 2) == (uVar20 & 0xff)) goto LAB_1077b979c;
            }
            if (((ulong)ppppppuVar28 & uVar22) == 0) {
              ppppppuVar24 = (undefined ******)((ulong)ppppppuVar24 & uVar22);
            }
            else if (ppppppuVar28 <= ppppppuVar24) {
              uVar31 = 0;
              if (ppppppuVar28 != (undefined ******)0x0) {
                uVar31 = (ulong)ppppppuVar24 / (ulong)ppppppuVar28;
              }
              ppppppuVar24 = (undefined ******)((long)ppppppuVar24 - uVar31 * (long)ppppppuVar28);
            }
          } while (ppppppuVar24 == ppppppuVar34);
        }
      }
LAB_1077b9670:
      func_0x0001077bece0();
      func_0x0001077bec08();
      *ppppppuVar18 = (undefined *****)0x0;
      ppppppuVar18[1] = (undefined *****)ppppppuVar29;
      *(char *)(ppppppuVar18 + 2) = (char)uVar20;
      ppppppuVar18[4] = (undefined *****)0x0;
      ppppppuVar18[3] = (undefined *****)0x0;
      ppppppuVar18[6] = (undefined *****)0x0;
      ppppppuVar18[5] = (undefined *****)0x0;
      ppppppuVar18[8] = (undefined *****)0x0;
      ppppppuVar18[7] = (undefined *****)0x0;
      ppppppuVar18[9] = (undefined *****)0x0;
      ppppppuVar18[10] = (undefined *****)0x0;
      *(undefined1 *)(ppppppuVar18 + 9) = 0x40;
      ppppppuVar18[0xb] = (undefined *****)0x0;
      ppppppuVar18[0xc] = (undefined *****)0x0;
      if ((ppppppuVar28 == (undefined ******)0x0) ||
         (*(float *)(ppppppuVar15 + 0x12) * (float)ppppppuVar28 <
          (float)((long)ppppppuVar15[0x11] + 1))) {
        bVar11 = (undefined ******)0x2 < ppppppuVar28;
        bVar12 = ppppppuVar28 == (undefined ******)0x3;
        uVar22 = 1;
        if (bVar11) {
          uVar22 = (ulong)(((ulong)ppppppuVar28 & (long)ppppppuVar28 - 1U) != 0);
        }
        func_0x0001077bebd8(uVar22 | (long)ppppppuVar28 << 1);
        uVar4 = extraout_x8_06;
        if (!bVar11 || bVar12) {
          uVar4 = extraout_x9;
        }
        func_0x0001077ba5d4(ppppppuVar23,uVar4);
        ppppppuVar28 = (undefined ******)ppppppuVar15[0xf];
        if (((ulong)ppppppuVar28 & (long)ppppppuVar28 - 1U) == 0) {
          ppppppuVar34 = (undefined ******)((ulong)((int)ppppppuVar28 - 1) & (ulong)ppppppuVar29);
        }
        else {
          uVar22 = 0;
          if (ppppppuVar28 != (undefined ******)0x0) {
            uVar22 = (ulong)ppppppuVar29 / (ulong)ppppppuVar28;
          }
          ppppppuVar34 = ppppppuVar29;
          if (ppppppuVar28 <= ppppppuVar29) {
            ppppppuVar34 = (undefined ******)((long)ppppppuVar29 - uVar22 * (long)ppppppuVar28);
          }
        }
      }
      pppppuVar16 = *ppppppuVar23;
      ppppuVar25 = pppppuVar16[(long)ppppppuVar34];
      if (ppppuVar25 == (undefined ****)0x0) {
        *ppppppuVar32 = *ppppppuVar1;
        *ppppppuVar1 = (undefined *****)ppppppuVar32;
        pppppuVar16[(long)ppppppuVar34] = (undefined ****)ppppppuVar1;
        if (*ppppppuVar32 != (undefined *****)0x0) {
          ppppppuVar34 = (undefined ******)(*ppppppuVar32)[1];
          if (((ulong)ppppppuVar28 & (long)ppppppuVar28 - 1U) == 0) {
            ppppppuVar34 = (undefined ******)((ulong)ppppppuVar34 & (long)ppppppuVar28 - 1U);
          }
          else if (ppppppuVar28 <= ppppppuVar34) {
            uVar22 = 0;
            if (ppppppuVar28 != (undefined ******)0x0) {
              uVar22 = (ulong)ppppppuVar34 / (ulong)ppppppuVar28;
            }
            ppppppuVar34 = (undefined ******)((long)ppppppuVar34 - uVar22 * (long)ppppppuVar28);
          }
          pppppuVar16[(long)ppppppuVar34] = (undefined ****)ppppppuVar32;
        }
      }
      else {
        *ppppppuVar32 = (undefined *****)*ppppuVar25;
        *ppppuVar25 = (undefined ***)ppppppuVar32;
      }
      pppppuStack_178 = (undefined *****)0x0;
      ppppppuVar15[0x11] = (undefined *****)((long)ppppppuVar15[0x11] + 1);
      func_0x0001077bea88();
LAB_1077b979c:
      iVar27 = (uVar26 & 0xff) + 1;
      ppppppuVar34 = ppppppuVar32 + 3;
      _exp2((double)uVar26);
      lVar21 = 0;
      pppppuStack_1f8 = (undefined *****)0x0;
      pppppuStack_200 = (undefined *****)0x0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      pppppuStack_208 = (undefined *****)0x0;
      pppppuStack_210 = (undefined *****)0x0;
      uStack_1e0 = 0x40;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      lStack_1d8 = 0;
      uVar22 = ((long)ppppppuVar32[0xb] - (long)ppppppuVar32[10]) / 0x28;
      if (0x7fffffe < uVar22) {
        uVar22 = 0x7ffffff;
      }
      for (; uVar22 * 0x28 - lVar21 != 0; lVar21 = lVar21 + 0x28) {
        pppppuVar16 = ppppppuVar32[10];
        pdVar2 = (double *)((long)pppppuVar16 + lVar21);
        if ((*(byte *)((long)pdVar2 + 0x1c) & 1) == 0) {
          *(undefined1 *)((long)pdVar2 + 0x1c) = 1;
          uVar20 = *(uint *)(pdVar2 + 2);
          uStack_17c = uVar20;
          pppppuStack_178 = (undefined *****)ppppppuVar34;
          pppppuStack_170 = (undefined *****)&uStack_17c;
          func_0x0001077bea3c(ppppppuVar32[4],*pdVar2,pdVar2[1]);
          func_0x0001077be984();
          func_0x0001077bb134();
          if (pdVar2[4] == 0.0) {
            uStack_190 = 0;
            uStack_188 = 0;
            func_0x000107269c1c(&uStack_190);
          }
          else {
            func_0x000107268400(&uStack_190);
          }
          uVar31 = uStack_1d0;
          if ((undefined *****)(ulong)uStack_17c < ppppppuVar15[4]) {
            if (uStack_1d0 < uStack_1c8) {
              func_0x0001077beb94(uStack_1d0,pdVar2);
              uVar31 = uVar31 + 0x28;
            }
            else {
              func_0x0001077beaa4((long)(uStack_1d0 - lStack_1d8) / 0x28,&lStack_1d8);
              func_0x0001077beda8();
              func_0x0001077bec44();
              func_0x0001077beb94(pppppuStack_168,pdVar2);
              func_0x0001077bea90();
              uVar31 = uStack_1d0;
              func_0x0001077bea18();
            }
            uStack_1d0 = uVar31;
            if (1 < uStack_17c) {
              pppppuStack_178 = (undefined *****)ppppppuVar34;
              pppppuStack_170 = (undefined *****)&pppppuStack_210;
              func_0x0001077bea3c(ppppppuVar32[4],*pdVar2,pdVar2[1]);
              func_0x0001077be984();
              func_0x0001077bb3a4();
            }
          }
          else {
            dVar38 = (double)uVar20;
            ppuStack_198 = (undefined **)(pdVar2[1] * dVar38);
            ppppuStack_1a0 = (undefined ****)(*pdVar2 * dVar38);
            iStack_1a4 = iVar27;
            pppppuStack_178 = (undefined *****)ppppppuVar34;
            pppppuStack_170 = (undefined *****)&iStack_1a4;
            pppppuStack_168 = &ppppuStack_1a0;
            pppppuStack_160 = (undefined *****)(ppppppuVar15 + 3);
            puStack_158 = &uStack_190;
            func_0x0001077bea3c(ppppppuVar32[4],*pdVar2,pdVar2[1]);
            func_0x0001077be984();
            func_0x0001077bb280();
            uVar31 = uStack_1d0;
            *(int *)((long)pppppuVar16 + lVar21 + 0x18) = iStack_1a4;
            dStack_1c0 = (double)ppppuStack_1a0 / (double)uStack_17c;
            dStack_1b8 = (double)ppuStack_198 / (double)uStack_17c;
            if (uStack_1d0 < uStack_1c8) {
              func_0x0001077bab4c(uStack_1d0,&dStack_1c0,uStack_17c,iStack_1a4,&uStack_190);
              uStack_1d0 = uVar31 + 0x28;
            }
            else {
              func_0x0001077beaa4((long)(uStack_1d0 - lStack_1d8) / 0x28,&lStack_1d8);
              func_0x0001077beda8();
              func_0x0001077bec44();
              func_0x0001077bab4c(pppppuStack_168,&dStack_1c0,uStack_17c,iStack_1a4,&uStack_190);
              func_0x0001077bea90();
              uVar31 = uStack_1d0;
              func_0x0001077bea18();
              uStack_1d0 = uVar31;
            }
          }
          func_0x0001077beb70();
        }
        iVar27 = iVar27 + 0x20;
      }
      ppppppuVar18 = &pppppuStack_210;
      func_0x0001077ba830(ppppppuVar18,lStack_1d8,uStack_1d0);
      func_0x0001077bece0();
      func_0x0001077bec08();
      *ppppppuVar18 = (undefined *****)0x0;
      *(char *)(ppppppuVar18 + 2) = (char)uVar26;
      ppppppuVar18 = ppppppuVar18 + 3;
      FUN_1077ba568(ppppppuVar18,&pppppuStack_210);
      ppppppuVar32[1] = (undefined *****)(ulong)*(byte *)(ppppppuVar32 + 2);
      func_0x0001077bec94();
      if (((ulong)ppppppuVar18 & 1) != 0) {
        pppppuStack_178 = (undefined *****)0x0;
      }
      func_0x0001077bea88();
      func_0x0001077beca0();
    }
    func_0x0001077bc5f4(&ppppppuStack_f0);
    *param_1 = ppppppuVar15;
    puVar19 = (undefined8 *)0x20;
    ppppppuStack_f0 = ppppppuVar15;
    __Znwm();
    *puVar19 = &PTR_DAT_1109dc180;
    puVar19[1] = 0;
    puVar19[2] = 0;
    puVar19[3] = ppppppuVar15;
    param_1[1] = puVar19;
    ppppppuStack_f0 = (undefined ******)0x0;
    func_0x0001077be680(&ppppppuStack_f0);
    func_0x0001073c672c(&pppppuStack_220);
    func_0x0001077bc5f4(&pppppuStack_150);
  }
  else {
LAB_1077b8efc:
    bVar5 = *(byte *)(lVar21 + 1);
    uVar39 = *(ushort *)(lVar21 + 4);
    dVar35 = *(double *)(lVar21 + 8);
    uVar6 = *(undefined1 *)(lVar21 + 0x10);
    if (*param_4 == 0) {
      func_0x0001073af4e0(&pppppuStack_150);
      ppppuStack_e8 = ppppuStack_148;
      ppppppuStack_f0 = (undefined ******)pppppuStack_150;
      pppppuStack_150 = (undefined *****)0x0;
      ppppuStack_148 = (undefined ****)0x0;
      func_0x0001073139fc(param_4,&ppppppuStack_f0);
      func_0x00010724b8b8(&ppppppuStack_f0);
      pppppppuVar14 = (undefined *******)&pppppuStack_150;
      func_0x00010724b8b8();
    }
    func_0x0001077bea4c();
    pppppuStack_228 = (undefined *****)param_4[1];
    pppppuStack_230 = (undefined *****)*param_4;
    *param_4 = 0;
    param_4[1] = 0;
    *pppppppuVar14 = (undefined ******)&PTR_DAT_1109dbdf8;
    ppppppuVar15 = (undefined ******)0x80;
    __Znwm();
    ppppppuVar15[1] = (undefined *****)0x0;
    ppppppuVar15[2] = (undefined *****)0x0;
    *ppppppuVar15 = (undefined *****)&PTR_DAT_1109dbe58;
    func_0x0001072bffec(&pppppuStack_210,param_2,&pppppuStack_178);
    dVar36 = (double)NEON_ucvtf((ulong)uVar39);
    pppppuVar16 = (undefined *****)(dVar38 * dVar35);
    ppppppuVar15[8] = (undefined *****)0x0;
    ppppppuVar15[7] = (undefined *****)(ppppppuVar15 + 8);
    ppppppuVar15[3] = pppppuVar16;
    *(short *)(ppppppuVar15 + 4) = (short)uVar26;
    *(short *)((long)ppppppuVar15 + 0x22) = (short)(int)(dVar38 * dVar36);
    *(undefined1 *)((long)ppppppuVar15 + 0x24) = uVar6;
    *(undefined2 *)((long)ppppppuVar15 + 0x25) = 0;
    *(byte *)((long)ppppppuVar15 + 0x27) = bVar5;
    *(undefined1 *)(ppppppuVar15 + 5) = 5;
    *(undefined4 *)((long)ppppppuVar15 + 0x2c) = 100000;
    *(undefined1 *)(ppppppuVar15 + 6) = 0;
    ppppppuVar15[9] = (undefined *****)0x0;
    ppppppuVar15[0xc] = (undefined *****)0x0;
    ppppppuVar15[0xb] = (undefined *****)0x0;
    *(undefined4 *)(ppppppuVar15 + 10) = 0;
    ppppppuVar15[0xe] = (undefined *****)0x0;
    ppppppuVar15[0xd] = (undefined *****)0x0;
    *(undefined4 *)(ppppppuVar15 + 0xf) = 0x3f800000;
    func_0x0001072bfb0c(&ppppppuStack_f0,
                        ((double)pppppuVar16 / (double)(uVar26 & 0xffff)) /
                        (double)(uint)(1 << (ulong)(bVar5 & 0x1f)),&pppppuStack_210,0);
    dVar38 = (double)NEON_ucvtf((ulong)*(ushort *)((long)ppppppuVar15 + 0x22));
    dVar35 = (double)NEON_ucvtf((ulong)*(ushort *)(ppppppuVar15 + 4));
    func_0x0001072bfc4c(&pppppuStack_150,dVar38 / dVar35,&ppppppuStack_f0,
                        *(undefined1 *)((long)ppppppuVar15 + 0x24));
    func_0x0001077bc8a0(ppppppuVar15 + 3,&pppppuStack_150,0,0,0,0,0,0);
    func_0x0001072c3ca8(&pppppuStack_150);
    func_0x0001072c3ca8(&ppppppuStack_f0);
    func_0x00010726dd08(&pppppuStack_210);
    pppppppuVar14[1] = ppppppuVar15 + 3;
    pppppppuVar14[2] = ppppppuVar15;
    pppppppuVar14[4] = (undefined ******)pppppuStack_228;
    pppppppuVar14[3] = (undefined ******)pppppuStack_230;
    pppppuStack_230 = (undefined *****)0x0;
    pppppuStack_228 = (undefined *****)0x0;
    *param_1 = pppppppuVar14;
    puVar19 = (undefined8 *)0x20;
    ppppppuStack_f0 = (undefined ******)pppppppuVar14;
    __Znwm();
    *puVar19 = &PTR_DAT_1109dc1f8;
    puVar19[1] = 0;
    puVar19[2] = 0;
    puVar19[3] = pppppppuVar14;
    param_1[1] = puVar19;
    ppppppuStack_f0 = (undefined ******)0x0;
    func_0x0001077be718(&ppppppuStack_f0);
    func_0x00010724b8b8(&pppppuStack_230);
  }
  func_0x0001077be7ec(uStack_90);
  if ((bool)uVar13) {
    return;
  }
  ___stack_chk_fail();
LAB_1077b9ac4:
  func_0x0001077ba998();
LAB_1077b9ac8:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1077b9acc);
  (*pcVar10)();
}



/* Entry: 1077b9e94; end: 1077b9e9f;  */

undefined ** FUN_1077b9e94(void)

{
  return &PTR_DAT_1109dbd68;
}



/* Entry: 1077ba568; end: 1077ba5d3;  */

void FUN_1077ba568(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



/* Entry: 1077baa48; end: 1077baab3;  */

long * FUN_1077baa48(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001077bebc0();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x666666666666666 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001077baad8();
      return param_1;
    }
    lVar1 = unaff_x20 * 0x28;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x28;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x28;
  return unaff_x19;
}



/* Entry: 1077bad1c; end: 1077bad8f;  */

long * FUN_1077bad1c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010727d278();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1077bb330; end: 1077bb3a3;  */

void FUN_1077bb330(long *param_1,ulong param_2)

{
  double *pdVar1;
  long *plVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  pdVar3 = (double *)(*(long *)(*param_1 + 0x38) + (param_2 & 0xffffffff) * 0x28);
  if ((*(byte *)((long)pdVar3 + 0x1c) & 1) == 0) {
    *(undefined1 *)((long)pdVar3 + 0x1c) = 1;
    pdVar1 = (double *)param_1[2];
    *(undefined4 *)(pdVar3 + 3) = *(undefined4 *)param_1[1];
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(pdVar3 + 2));
    dVar5 = *pdVar3;
    pdVar1[1] = pdVar3[1] * dVar4 + pdVar1[1];
    *pdVar1 = dVar5 * dVar4 + *pdVar1;
    plVar2 = *(long **)(param_1[3] + 0x50);
    if ((plVar2 != (long *)0x0) && (pdVar3[4] != 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x0001077bb39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1[4]);
      return;
    }
  }
  return;
}



/* Entry: 1077bb840; end: 1077bbab7;  */

/* WARNING: Possible PIC construction at 0x0001077bb98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077bbb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077bbb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077bb9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077bb900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077bb9d4) */
/* WARNING: Removing unreachable block (ram,0x0001077bbb64) */
/* WARNING: Removing unreachable block (ram,0x0001077bbb80) */
/* WARNING: Removing unreachable block (ram,0x0001077bbb94) */
/* WARNING: Removing unreachable block (ram,0x0001077bbc24) */
/* WARNING: Removing unreachable block (ram,0x0001077bbbc8) */
/* WARNING: Removing unreachable block (ram,0x0001077bbbf0) */
/* WARNING: Removing unreachable block (ram,0x0001077bbc00) */
/* WARNING: Removing unreachable block (ram,0x0001077bbc28) */
/* WARNING: Removing unreachable block (ram,0x0001077bbc8c) */
/* WARNING: Removing unreachable block (ram,0x0001077bbca4) */
/* WARNING: Removing unreachable block (ram,0x0001077bbcc8) */
/* WARNING: Removing unreachable block (ram,0x0001077bbcd8) */
/* WARNING: Removing unreachable block (ram,0x0001077bbcf4) */
/* WARNING: Removing unreachable block (ram,0x0001077bbd48) */
/* WARNING: Removing unreachable block (ram,0x0001077bbd54) */
/* WARNING: Removing unreachable block (ram,0x0001077bbd60) */
/* WARNING: Removing unreachable block (ram,0x0001077bbd8c) */
/* WARNING: Removing unreachable block (ram,0x0001077bbdac) */
/* WARNING: Removing unreachable block (ram,0x0001077bbe70) */
/* WARNING: Removing unreachable block (ram,0x0001077bbda0) */
/* WARNING: Removing unreachable block (ram,0x0001077be9c8) */
/* WARNING: Removing unreachable block (ram,0x0001077bbce8) */
/* WARNING: Removing unreachable block (ram,0x0001077bbb3c) */
/* WARNING: Removing unreachable block (ram,0x0001077bb990) */
/* WARNING: Removing unreachable block (ram,0x0001077bb9ec) */
/* WARNING: Removing unreachable block (ram,0x0001077bb904) */
/* WARNING: Removing unreachable block (ram,0x0001077bb9f8) */
/* WARNING: Removing unreachable block (ram,0x0001077bba04) */
/* WARNING: Removing unreachable block (ram,0x0001077bb938) */
/* WARNING: Removing unreachable block (ram,0x0001077bba38) */
/* WARNING: Removing unreachable block (ram,0x0001077bba48) */
/* WARNING: Removing unreachable block (ram,0x0001077bba68) */
/* WARNING: Removing unreachable block (ram,0x0001077bba9c) */
/* WARNING: Removing unreachable block (ram,0x0001077bbab4) */
/* WARNING: Removing unreachable block (ram,0x0001077bba54) */
/* WARNING: Removing unreachable block (ram,0x0001077bed48) */

undefined1 * FUN_1077bb840(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  double *pdVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 **ppuVar12;
  undefined *puVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined1 auStack_380 [15];
  undefined1 auStack_371 [57];
  undefined1 auStack_338 [56];
  undefined1 auStack_300 [64];
  undefined1 auStack_2c0 [120];
  undefined1 auStack_248 [216];
  undefined1 auStack_170 [8];
  undefined4 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_148;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 *puStack_a0;
  undefined4 auStack_88 [2];
  ulong uStack_80;
  
  plVar8 = param_1;
  func_0x0001077be83c();
  puVar7 = (undefined8 *)*plVar8;
  pdVar9 = (double *)(*(long *)(plVar8[1] + 0x38) + (param_2 & 0xffffffff) * 0x28);
  dVar14 = (double)NEON_ucvtf((ulong)*(uint *)plVar8[2]);
  dVar16 = (double)NEON_ucvtf((ulong)*(ushort *)((long)puVar7 + 0x14));
  puVar10 = (undefined1 *)
            (ulong)(uint)(int)((*pdVar9 * dVar14 - (double)*(int *)plVar8[3]) * dVar16);
  NEON_ucvtf((ulong)*(uint *)plVar8[4]);
  puStack_d0 = &stack0xfffffffffffffff0;
  if (*(int *)(pdVar9 + 2) == 1) {
    lVar11 = *(long *)*puVar7 + (ulong)*(uint *)((long)pdVar9 + 0x14) * 0x70;
    if (*(char *)(puVar7 + 4) == '\x01') {
      auStack_88[0] = 3;
      uStack_80 = (ulong)*(uint *)((long)pdVar9 + 0x14);
    }
    else {
      func_0x000107269bac(auStack_88,lVar11 + 0x30);
    }
    puVar7 = (undefined8 *)param_1[5];
    func_0x0001072c5cdc(puVar7);
    plVar8 = (long *)*puVar7;
    puVar10 = (undefined1 *)plVar8[1];
    uVar2 = puVar10 == (undefined1 *)plVar8[2];
    if (puVar10 < (undefined1 *)plVar8[2]) {
      uStack_c8 = 0x1077bb990;
      puStack_a0 = puVar10;
    }
    else {
      func_0x0001077bed0c(((long)puVar10 - *plVar8) / 0x70);
      func_0x0001077bed88();
      func_0x0001077bec5c();
      uStack_c8 = 0x1077bb9d4;
    }
    puVar6 = auStack_88;
    puVar5 = (undefined8 *)(lVar11 + 0x20);
    puVar10 = puStack_a0;
    func_0x0001077be83c();
    uVar4 = SUB84(&stack0xfffffffffffffef8,0);
    func_0x0001072c720c();
    func_0x0001077becd0();
    func_0x0001077be7ec(extraout_x8);
    if ((bool)uVar2) {
      return puStack_a0;
    }
    ___stack_chk_fail();
    func_0x0001077becd0();
    func_0x0001077be8c4();
    puVar1 = auStack_170;
    ppuVar12 = (undefined1 **)&stack0xfffffffffffffee0;
    puVar3 = puVar10;
    puVar7 = puVar5;
    func_0x0001077be83c();
    uStack_168 = 6;
    uStack_160 = uVar4;
    uStack_148 = extraout_x8_00;
    func_0x0001072c6f80();
    uVar15 = *puVar5;
    *(undefined8 *)(puVar3 + 0x28) = puVar5[1];
    *(undefined8 *)(puVar3 + 0x20) = uVar15;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar3 = puVar3 + 0x30;
    func_0x0001072692b0(puVar3,puVar6);
    func_0x0001077becd0();
    func_0x0001077be7ec(uStack_148);
    if ((bool)uVar2) {
      return puVar10;
    }
    puVar13 = &UNK_1077bbf6c;
    ___stack_chk_fail();
  }
  else {
    puVar6 = (undefined4 *)param_1[5];
    uStack_c8 = 0x1077bb904;
    ppuVar12 = &puStack_d0;
    puVar1 = auStack_380;
    func_0x0001077bebc0(auStack_c0,pdVar9);
    func_0x0001077be83c();
    func_0x000100060964(auStack_300,&DAT_10f3dcac7);
    auStack_371[0] = 1;
    func_0x000107396da0(auStack_2c0,auStack_300,auStack_371);
    puVar3 = auStack_248;
    func_0x000100060964(auStack_338,&UNK_10f406adb);
    puVar7 = (undefined8 *)(ulong)(uint)puVar6[5];
    puVar13 = &UNK_1077bbb3c;
  }
  *(undefined4 **)(puVar1 + -0x20) = puVar6;
  *(undefined1 **)(puVar1 + -0x18) = puVar10;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar12;
  *(undefined **)(puVar1 + -8) = puVar13;
  func_0x000104c318bc();
  *(undefined4 *)(puVar3 + 0x38) = 5;
  *(undefined8 **)(puVar3 + 0x40) = puVar7;
  return puVar3;
}



/* Entry: 1077bc210; end: 1077bc343;  */

/* WARNING: Possible PIC construction at 0x0001077bc2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077bc3ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077bc2dc) */
/* WARNING: Removing unreachable block (ram,0x0001077bc320) */
/* WARNING: Removing unreachable block (ram,0x0001077bc2e4) */
/* WARNING: Removing unreachable block (ram,0x0001077bc3b0) */

void FUN_1077bc210(long param_1,uint param_2,ulong param_3,uint param_4,ulong param_5,
                  undefined8 param_6)

{
  long lVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double unaff_d9;
  double unaff_d12;
  double unaff_d14;
  double unaff_d15;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  uint uStack_7c;
  long lStack_78;
  uint *puStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 uStack_55;
  uint uStack_54;
  
  puStack_90 = &uStack_7c;
  lVar6 = param_1 + 0x68;
  lStack_a8 = param_1;
  uStack_a0 = param_3;
  uStack_98 = param_5;
  uStack_88 = param_6;
  uStack_7c = param_4;
  uStack_54 = param_2;
  func_0x0001077bb658(lVar6,param_2 & 0x1f);
  if (lVar6 == 0) {
    func_0x0001077be94c();
    func_0x0001077be84c();
  }
  else {
    uVar10 = (ulong)(param_2 >> 5);
    lVar1 = *(long *)(lVar6 + 0x50);
    uVar7 = (*(long *)(lVar6 + 0x58) - lVar1) / 0x28;
    in_CY = uVar10 <= uVar7;
    in_ZR = uVar7 == uVar10;
    if ((bool)in_CY && !(bool)in_ZR) {
      dVar12 = (double)NEON_ucvtf((ulong)*(ushort *)(param_1 + 0x12));
      dVar11 = (double)(ulong)*(ushort *)(param_1 + 0x14);
      func_0x0001077beba4(dVar11);
      puVar9 = (undefined8 *)(lVar1 + uVar10 * 0x28);
      uStack_55 = 0;
      lStack_78 = lVar6 + 0x18;
      puStack_70 = &uStack_54;
      plStack_68 = &lStack_a8;
      puStack_60 = &uStack_55;
      func_0x0001077bea3c(*(undefined8 *)(lVar6 + 0x20),*puVar9,puVar9[1],
                          dVar12 / (dVar11 * unaff_d9));
      param_3 = 0;
      param_5 = 0;
      goto code_r0x0001077bc344;
    }
    func_0x0001077be94c();
    func_0x0001077be84c();
  }
  func_0x0001077be824();
  func_0x0001077beb68();
  func_0x0001077be8c4();
code_r0x0001077bc344:
  func_0x0001077be874();
  uVar7 = param_3;
  uVar8 = param_4;
  uVar10 = param_5;
  func_0x0001077be76c();
  do {
    func_0x0001077beaac();
    if ((bool)in_ZR) {
      return;
    }
    func_0x0001077be8cc();
    if (!(bool)in_CY || (bool)in_ZR) {
      while( true ) {
        uVar8 = (uint)param_3;
        bVar4 = param_4 <= uVar8;
        bVar5 = uVar8 == param_4;
        if (bVar4 && !bVar5) break;
        func_0x0001077be800();
        if (!bVar4 || bVar5) {
          func_0x0001077be964();
          func_0x0001077bc3f4();
        }
        param_3 = (ulong)(uVar8 + 1);
      }
      return;
    }
    func_0x0001077be79c();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001077be954();
      func_0x0001077bc3f4();
    }
    in_ZR = (param_5 & 0xff) == 0;
    cVar2 = '\0';
    in_CY = false;
    cVar3 = '\0';
    if ((bool)in_ZR) {
      func_0x0001077beb04();
      if (!(bool)in_CY || (bool)in_ZR) break;
      func_0x0001077bebcc();
      if (cVar2 != cVar3) {
        return;
      }
    }
    else {
      in_CY = unaff_d15 <= unaff_d12;
      in_ZR = unaff_d12 == unaff_d15;
      if (!(bool)in_CY || (bool)in_ZR) break;
      in_CY = unaff_d15 <= unaff_d14;
      in_ZR = unaff_d14 == unaff_d15;
      if (unaff_d14 < unaff_d15) {
        return;
      }
    }
    func_0x0001077bebb4();
  } while( true );
  param_5 = uVar10;
  param_4 = uVar8;
  param_3 = uVar7;
  func_0x0001077be7c0();
  goto code_r0x0001077bc344;
}



/* Entry: 1077bc66c; end: 1077bc81b;  */

void FUN_1077bc66c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [88];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  func_0x0001077be83c();
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  uVar4 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 1);
  lVar5 = param_1[1];
  lStack_150 = lVar5;
  lStack_148 = lVar1;
  uStack_58 = extraout_x8;
  if (lVar1 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10 != 0);
  }
  func_0x0001073af260();
  (**(code **)(*param_1 + 0x20))(&uStack_140);
  uStack_a8 = uStack_138;
  uStack_b0 = uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_a0 = uStack_130;
  uStack_98 = uVar4;
  uStack_90 = uVar3;
  lStack_88 = lVar5;
  lStack_80 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001077bd444(auStack_78,param_3);
  func_0x0001077bd4a0(auStack_128,&uStack_b0);
  uStack_b8 = 0;
  uVar4 = 0x60;
  __Znwm();
  func_0x0001077bebf8();
  func_0x0001077bd4a0();
  uStack_b8 = uVar4;
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_d0);
  func_0x0001006393ec(auStack_d0);
  func_0x0001077bdbb0(auStack_128);
  func_0x0001077bdbb0(&uStack_b0);
  func_0x00010725b1d4(&uStack_140);
  func_0x0001077bd3f4(&lStack_150);
  func_0x0001077be7ec(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001006393ec(auStack_d0);
    func_0x0001077bdbb0(auStack_128);
    func_0x0001077bdbb0(&uStack_b0);
    func_0x00010725b1d4(&uStack_140);
    func_0x0001077bd3f4(&lStack_150);
    func_0x0001077be8c4();
    func_0x000107330058(extraout_x8_00);
    return;
  }
  return;
}



/* Entry: 1077bd210; end: 1077bd24f;  */

long * FUN_1077bd210(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072c8e94(lVar1 + 0x18);
    }
    func_0x0001077be9c0();
  }
  return param_1;
}



/* Entry: 1077bd52c; end: 1077bd52f;  */

undefined8 FUN_1077bd52c(undefined8 param_1)

{
  func_0x0001077bebf8();
  func_0x0001077bdbb0();
  return param_1;
}



/* Entry: 1077bd8dc; end: 1077bd957;  */

void FUN_1077bd8dc(void)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077bebc0();
  func_0x0001077bebf8();
  func_0x000107283e34();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10 != 0);
  }
  func_0x0001077bd444(unaff_x19 + 0x40,unaff_x20 + 0x38);
  return;
}



/* Entry: 1077bdad4; end: 1077bdafb;  */

void FUN_1077bdad4(undefined8 param_1)

{
  func_0x0001077beab8();
  func_0x0001077bea20(param_1,&PTR_DAT_1109dbf78);
  func_0x0001077be974();
  return;
}



/* Entry: 1077bdc68; end: 1077bde03;  */

undefined ** FUN_1077bdc68(undefined8 *param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined8 extraout_x8;
  long lVar3;
  int extraout_w10;
  undefined **unaff_x19;
  long lVar4;
  undefined8 uStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [56];
  undefined1 auStack_d0 [64];
  undefined1 uStack_90;
  undefined1 auStack_88 [64];
  undefined8 uStack_48;
  
  func_0x0001077be83c();
  if (*(long *)(*param_3 + 0x18) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    func_0x0001077be7ec(extraout_x8);
    if ((bool)in_ZR) {
      func_0x0001072752cc(param_1);
      func_0x000104c3329c();
      return unaff_x19;
    }
  }
  else {
    puStack_128 = &UNK_10e52b660;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    lVar3 = *(long *)(param_2 + 0x18);
    lVar4 = *(long *)(lVar3 + 0x20);
    uStack_48 = extraout_x8;
    while (uVar1 = lVar4 == lVar3 + 0x28, !(bool)uVar1) {
      func_0x00010729c0e4(*(long *)(param_2 + 8) + 0x20,param_3);
      uStack_138 = *(undefined8 *)(param_2 + 8);
      lStack_130 = *(long *)(param_2 + 0x10);
      if (lStack_130 != 0) {
        do {
          func_0x0001077be93c();
        } while (extraout_w10 != 0);
      }
      auStack_d0[0] = 0;
      uStack_90 = 0;
      func_0x0001077bde90(auStack_88);
      func_0x000107262e9c(auStack_108,lVar4 + 0x20);
      func_0x000107267f10(&puStack_128,auStack_108);
      func_0x000104c3302c();
      func_0x000104c2f714(auStack_108);
      func_0x000104c3323c(auStack_88);
      func_0x000107267ed0(auStack_d0);
      func_0x0001077be318(&uStack_138);
      func_0x00010002c7d4();
    }
    func_0x000104c33260(param_1,&puStack_128);
    ppuVar2 = &puStack_128;
    func_0x000104c33548();
    func_0x0001077be7ec(uStack_48);
    if ((bool)uVar1) {
      return ppuVar2;
    }
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_128;
  func_0x000104c33548(ppuVar2);
  func_0x0001077be8c4();
  func_0x0001077beab8();
  func_0x0001077bea20();
  func_0x0001077be974();
  return ppuVar2;
}



/* Entry: 1077be1c4; end: 1077be203;  */

undefined8 * FUN_1077be1c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc068;
  func_0x00010737c464(param_1 + 0x10);
  func_0x00010737c444(param_1 + 7);
  *param_1 = &PTR_DAT_110998b48;
  func_0x0001072978d8(param_1 + 1);
  return param_1;
}



/* Entry: 1077be3a0; end: 1077be3c3;  */

void FUN_1077be3a0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109dc0f0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1077be658; end: 1077be6ab;  */

void FUN_1077be658(long param_1)

{
  if (param_1 != 0) {
    func_0x0001077bb5f0(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1077be744; end: 1077bee27;  */

void FUN_1077be744(void)

{
  return;
}



/* Entry: 1077bf148; end: 1077bf277;  */

void FUN_1077bf148(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  int iVar7;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long lVar8;
  int extraout_w11;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001077bf790();
  lVar9 = *(long *)(param_2 + 8);
  uStack_38 = extraout_x8_00;
  func_0x0001077bf7c8(&uStack_50);
  lVar4 = lStack_40;
  func_0x0001077bf7e0();
  lVar8 = lVar9;
  func_0x0001077b706c(lVar4 + 0x18);
  lVar5 = lStack_40;
  iVar7 = (int)lVar8;
  *(undefined ***)(lVar4 + 0x18) = &PTR_DAT_1109dc398;
  uVar11 = *(undefined8 *)(lVar9 + 0x88);
  uVar10 = *(undefined8 *)(lVar9 + 0x80);
  uVar13 = *(undefined8 *)(lVar9 + 0x98);
  uVar12 = *(undefined8 *)(lVar9 + 0x90);
  uVar15 = *(undefined8 *)(lVar9 + 0xa8);
  uVar14 = *(undefined8 *)(lVar9 + 0xa0);
  uVar16 = *(undefined8 *)(lVar9 + 0xb0);
  *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar9 + 0xb8);
  *(undefined8 *)(lVar4 + 200) = uVar16;
  *(undefined8 *)(lVar4 + 0xc0) = uVar15;
  *(undefined8 *)(lVar4 + 0xb8) = uVar14;
  *(undefined8 *)(lVar4 + 0xb0) = uVar13;
  *(undefined8 *)(lVar4 + 0xa8) = uVar12;
  *(undefined8 *)(lVar4 + 0xa0) = uVar11;
  *(undefined8 *)(lVar4 + 0x98) = uVar10;
  lVar8 = *(long *)(lVar9 + 200);
  uVar10 = *(undefined8 *)(lVar9 + 0xc0);
  *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(lVar9 + 200);
  *(undefined8 *)(lVar4 + 0xd8) = uVar10;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_40 = 0;
  func_0x0001077bf464(&uStack_50);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001077bf280(&uStack_50);
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar6 = &uStack_50;
  func_0x0001077b57e8();
  func_0x0001077bf7d8();
  func_0x0001077bf76c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar7 == 0) {
      func_0x0001077bf7d0();
    }
    else {
      __ZNSt3__119__shared_weak_countD2Ev(lVar5 + 0x18);
      func_0x0001077bf464(&uStack_50);
    }
    func_0x000104bd46a0(puVar6);
    func_0x000107346060(puVar6 + 0x10);
    if (extraout_x8 != 0) {
      do {
        func_0x00010734740c();
      } while (extraout_w11 != 0);
    }
    func_0x0001073269a0();
    func_0x0001073460e8();
    return;
  }
  return;
}



/* Entry: 1077bf400; end: 1077bf403;  */

void FUN_1077bf400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc2c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077bf4ec; end: 1077bf517;  */

void FUN_1077bf4ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109dc318;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1077bf8c4; end: 1077bf8d7;  */

void FUN_1077bf8c4(void)

{
  func_0x0001077bf898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bfcf8; end: 1077bfd07;  */

bool FUN_1077bfcf8(undefined8 param_1,long param_2)

{
  return *(char *)(param_2 + 0x18) == '\x01';
}



/* Entry: 1077bff80; end: 1077bffbf;  */

undefined8 * FUN_1077bff80(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109dc430;
  func_0x0001077bffe8(param_1 + 3);
  return param_1;
}



/* Entry: 1077c0108; end: 1077c0143;  */

undefined8 * FUN_1077c0108(undefined8 *param_1)

{
  if (*(int *)(param_1 + 0xf) == 0) {
    return param_1 + 1;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0xf) == 1) {
    return param_1 + 1;
  }
  func_0x00010563ab98();
  *param_1 = &PTR_DAT_1109dc490;
  func_0x000104c2f714(param_1 + 2);
  return param_1;
}



/* Entry: 1077c04c0; end: 1077c04ef;  */

undefined8 * FUN_1077c04c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_DAT_1109dc490;
  param_1[1] = uVar1;
  func_0x000104c2fe00(param_1 + 2,param_2 + 1);
  return param_1;
}



/* Entry: 1077c087c; end: 1077c08b7;  */

void FUN_1077c087c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  FUN_1077b5880();
  *param_1 = &PTR_DAT_1109dc538;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 0x1f) = param_4;
  return;
}



/* Entry: 1077c0a74; end: 1077c0a87;  */

void FUN_1077c0a74(void)

{
  func_0x0001077c0a48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c0da8; end: 1077c0dc3;  */

void FUN_1077c0da8(void)

{
  func_0x0001077c1418();
  func_0x0001077c0dc4();
  return;
}



/* Entry: 1077c0ed8; end: 1077c0f13;  */

void FUN_1077c0ed8(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001077c1450();
  func_0x0001077c1964();
  func_0x0001073267a8(auStack_30);
  return;
}



/* Entry: 1077c101c; end: 1077c1043;  */

long FUN_1077c101c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077c1244; end: 1077c12b3;  */

/* WARNING: Possible PIC construction at 0x0001077c127c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077c1280) */
/* WARNING: Removing unreachable block (ram,0x0001077c129c) */
/* WARNING: Removing unreachable block (ram,0x0001077c12b0) */
/* WARNING: Removing unreachable block (ram,0x0001077c1294) */
/* WARNING: Removing unreachable block (ram,0x0001077c1388) */

void FUN_1077c1244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  func_0x0001077c1374();
  func_0x0001077c1440(auStack_50);
  func_0x0001077c1428(uStack_40,param_2,param_3);
  func_0x0001077c12dc();
  return;
}



/* Entry: 1077c1708; end: 1077c1963;  */

void FUN_1077c1708(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 in_ZR;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  ulong *unaff_x19;
  ulong *unaff_x21;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [24];
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined2 uStack_114;
  undefined1 uStack_112;
  ulong uStack_110;
  
  puVar5 = param_4;
  func_0x0001077c2904();
  func_0x0001077c2804();
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  func_0x0001077c1a50();
  uStack_114 = 0;
  uStack_118 = 0x1f802000;
  uStack_112 = 1;
  uVar12 = unaff_x21[1];
  uStack_110 = *unaff_x21;
  uStack_120 = param_1;
  func_0x0001077c1be0();
  uVar3 = uStack_110;
  do {
    uStack_130 = uVar3;
    uStack_128 = uVar12;
    if (uVar3 == 0) {
      func_0x0001077c27e8(extraout_x8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001077c1d38();
        func_0x0001077c2814();
        FUN_1077b5880();
        *unaff_x19 = (ulong)&PTR_DAT_1109dc670;
        uVar12 = *puVar5;
        unaff_x19[0x11] = puVar5[1];
        unaff_x19[0x10] = uVar12;
        *puVar5 = 0;
        puVar5[1] = 0;
        unaff_x19[0x12] = 0;
        unaff_x19[0x13] = 0;
        return;
      }
      return;
    }
    uStack_110 = uStack_110 & 0xffffffff00000000;
    func_0x0001072c0298(&stack0xfffffffffffffef8,uVar12 + 0x38);
    puVar5 = (ulong *)(ulong)*(uint *)((long)param_4 + 4);
    func_0x0001072bf928(auStack_148,&uStack_110,(char)*param_4,puVar5,(int)param_4[1],&uStack_120);
    func_0x000107327aec(&uStack_110);
    func_0x00010732e918(&uStack_160,auStack_148);
    Hint_Prefetch(*unaff_x19,0,2,0);
    uVar8 = uVar12;
    func_0x000104c2fe38(*unaff_x19);
    lVar9 = 0;
    uVar10 = *unaff_x19;
    uVar7 = unaff_x19[2];
    uVar6 = uVar10 >> 0xc ^ uVar8 >> 7;
    bVar2 = (byte)uVar8;
    uVar13 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar6 = uVar6 & uVar7;
      uVar14 = *(undefined8 *)(uVar10 + uVar6);
      cVar15 = (char)((ulong)uVar14 >> 8);
      cVar16 = (char)((ulong)uVar14 >> 0x10);
      cVar17 = (char)((ulong)uVar14 >> 0x18);
      cVar18 = (char)((ulong)uVar14 >> 0x20);
      cVar19 = (char)((ulong)uVar14 >> 0x28);
      bVar11 = (byte)((ulong)uVar14 >> 0x30);
      bVar20 = (byte)((ulong)uVar14 >> 0x38);
      for (uVar8 = CONCAT17(-(bVar20 == (bVar2 & 0x7f)),
                            CONCAT16(-(bVar11 == (bVar2 & 0x7f)),
                                     CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                              CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                       CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                                CONCAT12(-(cVar16 ==
                                                                          (char)(uVar13 >> 0x10)),
                                                                         CONCAT11(-(cVar15 ==
                                                                                   (char)(uVar13 >>
                                                                                         8)),
                                                                                  -((char)uVar14 ==
                                                                                   (char)uVar13)))))
                                             ))) & 0x8080808080808080; uVar8 != 0;
          uVar8 = uVar8 - 1 & uVar8) {
        uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar4 = &uStack_110;
        uStack_110 = uVar12;
        func_0x0001077c1d14(puVar4,unaff_x19[1] +
                                   (uVar6 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) &
                                   uVar7) * 0x48);
        if (((ulong)puVar4 & 1) != 0) goto LAB_1077c18b8;
      }
      bVar11 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                   CONCAT16(-(bVar11 == 0x80),
                                            CONCAT15(-(cVar19 == -0x80),
                                                     CONCAT14(-(cVar18 == -0x80),
                                                              CONCAT13(-(cVar17 == -0x80),
                                                                       CONCAT12(-(cVar16 == -0x80),
                                                                                CONCAT11(-(cVar15 ==
                                                                                          -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
      if ((bVar11 & 1) != 0) break;
      lVar9 = lVar9 + 8;
      uVar6 = lVar9 + uVar6;
    }
    puVar4 = unaff_x19;
    FUN_1077c1c1c();
    lVar9 = param_2[1] + (long)puVar4 * 0x48;
    func_0x000104c2fe00(lVar9,uVar12);
    *(undefined8 *)(lVar9 + 0x40) = uStack_158;
    *(undefined8 *)(lVar9 + 0x38) = uStack_160;
    uStack_160 = 0;
    uStack_158 = 0;
LAB_1077c18b8:
    func_0x000107331610(&uStack_160);
    func_0x0001072c8f3c(auStack_148);
    uStack_130 = uVar3 + 1;
    uStack_128 = uVar12 + 0x48;
    func_0x0001077c1be0();
    uVar12 = uStack_128;
    uVar3 = uStack_130;
  } while( true );
}



/* Entry: 1077c1c1c; end: 1077c1d13;  */

long * FUN_1077c1c1c(long *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 extraout_x8;
  long lVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001077c287c();
  func_0x0001077c2804();
  func_0x000100061de0();
  lVar3 = *unaff_x19;
  if ((*(long *)(lVar3 + -8) == 0) && (*(char *)(lVar3 + (long)param_1) != -2)) {
    if (((ulong)unaff_x19[2] < 9) || ((ulong)(unaff_x19[2] * 0x19) < (ulong)(unaff_x19[3] << 5))) {
      func_0x0001077c1aa4();
    }
    else {
      func_0x00010ae6c914();
    }
    param_1 = unaff_x19;
    param_2 = unaff_x20;
    func_0x000100061de0();
    lVar3 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar2 = *(char *)(lVar3 + (long)param_1) == -0x80;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) - (ulong)bVar2;
  bVar1 = (byte)unaff_x20 & 0x7f;
  uVar4 = unaff_x19[2];
  *(byte *)(lVar3 + (long)param_1) = bVar1;
  *(byte *)(lVar3 + (uVar4 & (long)param_1 - 7U) + (uVar4 & 7)) = bVar1;
  func_0x0001077c27e8(extraout_x8);
  if (bVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return (long *)(ulong)(unaff_x20 == param_2);
}



/* Entry: 1077c1e50; end: 1077c1e6f;  */

void FUN_1077c1e50(void)

{
  undefined1 uStack_11;
  
  func_0x0001077c1e70(&uStack_11);
  return;
}



/* Entry: 1077c20f4; end: 1077c2117;  */

void FUN_1077c20f4(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077c2904(param_2,param_1 + 8);
  *param_2 = &PTR_DAT_1109dc720;
  func_0x000107283e34(param_2 + 1);
  func_0x0001077c1f34(param_2 + 4,unaff_x21 + 0x18);
  func_0x0001077c2038(unaff_x19 + 0x68,unaff_x21 + 0x60);
  return;
}



/* Entry: 1077c2450; end: 1077c2463;  */

void FUN_1077c2450(void)

{
  func_0x0001077c2424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c25d8; end: 1077c26b7;  */

void FUN_1077c25d8(void)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  long unaff_x21;
  long lStack_40;
  long lStack_38;
  
  func_0x0001077c2904();
  func_0x0001077c26b8();
  lVar2 = *(long *)(unaff_x21 + 0x18);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x0001077c1a50();
    func_0x0001077c2714();
    lStack_40 = unaff_x21;
    while (lStack_40 != 0) {
      lStack_38 = lVar1;
      func_0x000104c2fe38(lVar1);
      func_0x00010ae6c8b4();
      func_0x0001077c2840((uint)lVar1 & 0x7f);
      func_0x0001077c2700();
      func_0x0001077c27b4(&lStack_40);
      lVar1 = lStack_38;
    }
    unaff_x19[3] = lVar2;
    *(long *)(*unaff_x19 + -8) = *(long *)(*unaff_x19 + -8) - lVar2;
  }
  return;
}



/* Entry: 1077c2a04; end: 1077c2a77;  */

void FUN_1077c2a04(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077c2e5c(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077c3444();
  return;
}



/* Entry: 1077c2e34; end: 1077c2e5b;  */

long FUN_1077c2e34(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077c2fb0; end: 1077c2fdf;  */

void FUN_1077c2fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001077c2fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1077c33cc; end: 1077c33fb;  */

undefined8 * FUN_1077c33cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_DAT_1109dc8c8;
  param_1[1] = uVar1;
  func_0x000104c2fe00(param_1 + 2,param_2 + 1);
  return param_1;
}



/* Entry: 1077c35b8; end: 1077c3667;  */

void FUN_1077c35b8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0x3e0;
  __Znwm();
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x0001077c3a60(*param_4);
  *param_1 = uVar1;
  func_0x0001072aa180(&uStack_60);
  func_0x00010724bd50(&uStack_50);
  return;
}



/* Entry: 1077c3898; end: 1077c38bf;  */

void FUN_1077c3898(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 8);
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001077c94b0(param_1,*(long *)(lVar2 + 0xe8) - *(long *)(lVar2 + 0xe0) >> 3);
  lVar1 = *(long *)(lVar2 + 0xe8);
  for (lVar2 = *(long *)(lVar2 + 0xe0); lVar2 != lVar1; lVar2 = lVar2 + 8) {
    func_0x0001077ca074();
    func_0x0001077c9528();
  }
  return;
}



/* Entry: 1077c39dc; end: 1077c39f3;  */

void FUN_1077c39dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107410da4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077c406c; end: 1077c4083;  */

void FUN_1077c406c(long param_1)

{
  func_0x0001077c3f44(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c52ec; end: 1077c5907;  */

/* WARNING: Possible PIC construction at 0x0001077c532c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077c5330) */
/* WARNING: Removing unreachable block (ram,0x0001077c57e8) */
/* WARNING: Removing unreachable block (ram,0x0001077c5854) */
/* WARNING: Removing unreachable block (ram,0x0001077c533c) */
/* WARNING: Removing unreachable block (ram,0x0001077c53e8) */
/* WARNING: Removing unreachable block (ram,0x0001077c5424) */
/* WARNING: Removing unreachable block (ram,0x0001077c54bc) */
/* WARNING: Removing unreachable block (ram,0x0001077c54c4) */
/* WARNING: Removing unreachable block (ram,0x0001077c54ec) */
/* WARNING: Removing unreachable block (ram,0x0001077c54f4) */
/* WARNING: Removing unreachable block (ram,0x0001077c5430) */
/* WARNING: Removing unreachable block (ram,0x0001077c5434) */
/* WARNING: Removing unreachable block (ram,0x0001077c5518) */
/* WARNING: Removing unreachable block (ram,0x0001077c5528) */
/* WARNING: Removing unreachable block (ram,0x0001077c552c) */
/* WARNING: Removing unreachable block (ram,0x0001077c5534) */
/* WARNING: Removing unreachable block (ram,0x0001077c5538) */
/* WARNING: Removing unreachable block (ram,0x0001077c539c) */
/* WARNING: Removing unreachable block (ram,0x0001077c5498) */
/* WARNING: Removing unreachable block (ram,0x0001077c54a4) */
/* WARNING: Removing unreachable block (ram,0x0001077c54a8) */
/* WARNING: Removing unreachable block (ram,0x0001077c54b0) */
/* WARNING: Removing unreachable block (ram,0x0001077c53a4) */
/* WARNING: Removing unreachable block (ram,0x0001077c53b4) */
/* WARNING: Removing unreachable block (ram,0x0001077c53b8) */
/* WARNING: Removing unreachable block (ram,0x0001077c53c0) */
/* WARNING: Removing unreachable block (ram,0x0001077c53c4) */
/* WARNING: Removing unreachable block (ram,0x0001077c53d0) */
/* WARNING: Removing unreachable block (ram,0x0001077c5454) */
/* WARNING: Removing unreachable block (ram,0x0001077c545c) */
/* WARNING: Removing unreachable block (ram,0x0001077c5480) */
/* WARNING: Removing unreachable block (ram,0x0001077c55b8) */
/* WARNING: Removing unreachable block (ram,0x0001077c5614) */
/* WARNING: Removing unreachable block (ram,0x0001077c5698) */
/* WARNING: Removing unreachable block (ram,0x0001077c5638) */
/* WARNING: Removing unreachable block (ram,0x0001077c56a0) */
/* WARNING: Removing unreachable block (ram,0x0001077c56f4) */
/* WARNING: Removing unreachable block (ram,0x0001077c56bc) */
/* WARNING: Removing unreachable block (ram,0x0001077c56fc) */
/* WARNING: Removing unreachable block (ram,0x0001077c571c) */
/* WARNING: Removing unreachable block (ram,0x0001077c572c) */
/* WARNING: Removing unreachable block (ram,0x0001077c5724) */
/* WARNING: Removing unreachable block (ram,0x0001077c56c4) */
/* WARNING: Removing unreachable block (ram,0x0001077c56d0) */
/* WARNING: Removing unreachable block (ram,0x0001077c5754) */
/* WARNING: Removing unreachable block (ram,0x0001077c55e8) */
/* WARNING: Removing unreachable block (ram,0x0001077c5688) */
/* WARNING: Removing unreachable block (ram,0x0001077c55f0) */
/* WARNING: Removing unreachable block (ram,0x0001077c55fc) */
/* WARNING: Removing unreachable block (ram,0x0001077c5648) */
/* WARNING: Removing unreachable block (ram,0x0001077c5650) */
/* WARNING: Removing unreachable block (ram,0x0001077c5674) */
/* WARNING: Removing unreachable block (ram,0x0001077c5680) */
/* WARNING: Removing unreachable block (ram,0x0001077c5690) */
/* WARNING: Removing unreachable block (ram,0x0001077c57a4) */
/* WARNING: Removing unreachable block (ram,0x0001077c57ac) */
/* WARNING: Removing unreachable block (ram,0x0001077c57bc) */
/* WARNING: Removing unreachable block (ram,0x0001077c5864) */
/* WARNING: Removing unreachable block (ram,0x0001077c5878) */
/* WARNING: Removing unreachable block (ram,0x0001077c5904) */
/* WARNING: Removing unreachable block (ram,0x0001077c57c8) */
/* WARNING: Removing unreachable block (ram,0x0001077c565c) */
/* WARNING: Removing unreachable block (ram,0x0001077c5604) */
/* WARNING: Removing unreachable block (ram,0x0001077c5468) */
/* WARNING: Removing unreachable block (ram,0x0001077c53d8) */

undefined8 FUN_1077c52ec(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined1 auStack_a0 [64];
  
  func_0x0001077c9d00();
  func_0x0001077b5514(auStack_a0,*param_2);
  plVar1 = (long *)(unaff_x19 + 0xb8);
  plVar2 = plVar1;
  func_0x0001077c91e8(plVar1,auStack_a0);
  if (plVar2 < (long *)(*(long *)(unaff_x19 + 0xc0) - *plVar1 >> 3)) {
    uVar3 = *(undefined8 *)(*plVar1 + (long)plVar2 * 8);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1077c5be0; end: 1077c5c13;  */

void FUN_1077c5be0(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077c98e8(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077c9e6c();
  return;
}



/* Entry: 1077c5f30; end: 1077c5f37;  */

void FUN_1077c5f30(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  
  func_0x0001077c9de8(param_1 + -8);
  func_0x0001077ca29c();
  func_0x0001077ca0b8();
  func_0x0001077ca268(*(undefined8 *)(extraout_x8 + 0x18));
  func_0x0001077ca0b8();
                    /* WARNING: Could not recover jumptable at 0x0001077ca0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8_00 + 0x48))();
  return;
}



/* Entry: 1077c62ec; end: 1077c6303;  */

void FUN_1077c62ec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w11;
  long unaff_x19;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x0001077c9d00(param_1 + -0x10);
  uStack_38 = extraout_x8;
  func_0x000107781c60(auStack_70,param_2);
  uVar4 = unaff_x19 + 0xe0;
  func_0x0001077c95fc(uVar4,auStack_70);
  uVar1 = *(long *)(unaff_x19 + 0xe8) - *(long *)(unaff_x19 + 0xe0) >> 3;
  uVar2 = uVar1 <= uVar4;
  uVar3 = uVar4 == uVar1;
  if (!(bool)uVar2) {
    func_0x0001077ca22c(*(undefined8 *)(unaff_x19 + 0xf8));
    func_0x0001077ca2f8();
    if ((bool)uVar2) goto code_r0x0001077c62cc;
    func_0x0001077ca0f4();
    if (extraout_x9 != 0) {
      do {
        func_0x0001077c9f04();
      } while (extraout_w11 != 0);
    }
    func_0x0001077ca2d8();
    func_0x0001073ad4c4();
    func_0x0001074f4098((undefined8 *)(unaff_x19 + 0xf8),auStack_90);
    func_0x0001077c9eb8();
  }
  func_0x0001077ca090();
  func_0x0001077c9e90();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8_00 + 0x48);
  func_0x0001077c9cec(uStack_38);
  if ((bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001077c62c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ___stack_chk_fail();
code_r0x0001077c62cc:
  func_0x0001077c9cd8();
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1077c62d4);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 1077c650c; end: 1077c6533;  */

void FUN_1077c650c(long param_1)

{
  func_0x0001072bc324(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1077c6ddc; end: 1077c6e6b;  */

/* WARNING: Possible PIC construction at 0x0001077c6e1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077c6e20) */
/* WARNING: Removing unreachable block (ram,0x0001077c6e2c) */
/* WARNING: Removing unreachable block (ram,0x0001077c6e3c) */
/* WARNING: Removing unreachable block (ram,0x0001077c6e4c) */

void FUN_1077c6ddc(void)

{
  undefined8 uVar1;
  undefined8 *in_x3;
  undefined8 *in_x4;
  
  func_0x0001077c9de8();
  func_0x0001077c6d7c();
  uVar1 = *in_x4;
  func_0x000104c2fc44(uVar1,*in_x3);
  if ((int)uVar1 != 0) {
    *in_x3 = 0;
    in_x3[1] = 0;
    func_0x00010747cf60(in_x3,in_x4);
    func_0x0001077ca318();
    func_0x00010747cf60();
    func_0x0001077c9f94();
    return;
  }
  return;
}



/* Entry: 1077c71d8; end: 1077c71f3;  */

undefined8 FUN_1077c71d8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107529454(param_1 + 0x18,*(undefined8 *)(param_1 + 0x28));
  func_0x00010752ada0(param_1 + 0x18);
  func_0x0001075294d4();
  return unaff_x19;
}



/* Entry: 1077c72f8; end: 1077c731b;  */

void FUN_1077c72f8(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001077c9e24(param_2,param_1 + 8);
  *param_2 = &PTR_DAT_1109dcc80;
  func_0x0001077c64dc(param_2 + 1);
  func_0x0001077c6448(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 1077c76b8; end: 1077c76d7;  */

undefined8 * FUN_1077c76b8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dcd00;
  func_0x0001077c49a0(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1077c8364; end: 1077c83b7;  */

void FUN_1077c8364(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001077c9e08();
  func_0x0001077ca234();
  func_0x0001077ca248();
  if (param_1 != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    *(undefined1 *)(lVar1 + 0x21) = 1;
    (**(code **)(**(long **)(lVar1 + 0x3a8) + 0x38))();
  }
  func_0x0001077c9e40();
  return;
}



/* Entry: 1077c8548; end: 1077c856f;  */

void FUN_1077c8548(undefined8 param_1)

{
  func_0x0001077c9e84();
  func_0x0001077c9e30(param_1,&PTR_DAT_1109dce70);
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077c8794; end: 1077c87b3;  */

undefined8 * FUN_1077c8794(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dce90;
  func_0x0001077c49fc(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1077c8a70; end: 1077c8a8f;  */

undefined8 * FUN_1077c8a70(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001077c9d68();
  *param_1 = &PTR_DAT_1109dcf20;
  func_0x0001077c4a14(param_1 + 1,unaff_x19 + 8);
  return param_1;
}



/* Entry: 1077c8bf4; end: 1077c8c13;  */

undefined8 * FUN_1077c8bf4(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dcfb0;
  func_0x0001077c4a2c(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1077c8d3c; end: 1077c8dc7;  */

void FUN_1077c8d3c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_60;
  func_0x0001077c9de8();
  func_0x0001077ca06c();
  func_0x0001077ca080();
  if ((int)puVar1 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    func_0x0001077ca260();
    puVar2 = puVar1;
    func_0x0001077ca338();
    func_0x0001072668e8();
    uStack_40 = 0;
    uStack_38 = 0;
    puStack_50 = puVar2;
    puStack_48 = puVar1;
    func_0x0001077c634c(&uStack_40);
    func_0x0001077c529c(lVar3 + 0x368,&puStack_50);
    func_0x0001077c634c(&puStack_50);
  }
  func_0x0001077c9e40();
  return;
}



/* Entry: 1077c8f10; end: 1077c8f37;  */

void FUN_1077c8f10(undefined8 param_1)

{
  func_0x0001077c9e84();
  func_0x0001077c9e30(param_1,&PTR_DAT_1109dd140);
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077c918c; end: 1077c91a3;  */

void FUN_1077c918c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010752948c(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1077c9408; end: 1077c9447;  */

long FUN_1077c9408(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001077c9e9c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 8) {
    func_0x0001077c9ffc();
    func_0x000107563bc8();
    unaff_x19 = unaff_x19 + 8;
  }
  return unaff_x19;
}



/* Entry: 1077c9674; end: 1077c96d3;  */

undefined1 * FUN_1077c9674(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar1 = auStack_60;
  func_0x0001077c9d00();
  uStack_28 = extraout_x8;
  func_0x000107781c60(auStack_60,*param_2);
  func_0x000104c32db4(auStack_60,*unaff_x19);
  puVar2 = puVar1;
  func_0x0001077c9eb0();
  func_0x0001077c9cec(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001077c9e08();
  func_0x000104c2f714();
  func_0x0001077c9da4();
  func_0x0001077ca2ec();
  func_0x0001077c96fc();
  return puVar2;
}



/* Entry: 1077c9898; end: 1077c98b3;  */

void FUN_1077c9898(undefined8 *param_1,long *param_2)

{
  long unaff_x19;
  
  func_0x0001077c9de8(param_2,*param_2 + *(long *)*param_1 * 0x10);
  func_0x0001077c96d4(unaff_x19 + 0x10,param_2[1]);
  func_0x0001074f9904();
  return;
}



/* Entry: 1077c9a44; end: 1077c9a67;  */

void FUN_1077c9a44(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x0001077c9e24();
  *param_2 = &PTR_DAT_1109dd160;
  uVar2 = *puVar1;
  param_2[2] = puVar1[1];
  param_2[1] = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_2 + 3,puVar1 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x30,unaff_x20 + 0x28);
  return;
}



/* Entry: 1077c9dc8; end: 1077ca3cf;  */

void FUN_1077c9dc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x28);
  return;
}



/* Entry: 1077cab38; end: 1077cab93;  */

void FUN_1077cab38(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x0001077ee9f8();
  iVar1 = (int)*param_1;
  func_0x0001077cfdc0();
  if (iVar1 != 0) {
    lVar2 = *unaff_x21;
    func_0x0001077cfdc8();
    if ((*(ushort *)(lVar2 + 0x16) >> 10 & 1) != 0) {
      func_0x0001077f0704();
      func_0x0001077efec4();
      func_0x000100066230();
      func_0x0001077ef60c();
    }
  }
  return;
}



/* Entry: 1077caea0; end: 1077caf03;  */

undefined1  [16] FUN_1077caea0(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077ee6bc();
  uStack_28 = extraout_x8;
  func_0x0001077efb9c();
  puVar1 = auStack_38;
  uStack_30 = param_1;
  func_0x0001077da5b4();
  func_0x0001077ef55c();
  func_0x0001077ee344(uStack_28);
  if ((bool)in_ZR) {
    auVar4._8_8_ = param_2 & 0xff;
    auVar4._0_8_ = puVar1;
    return auVar4;
  }
  ___stack_chk_fail();
  func_0x0001077eecd4();
  func_0x0001077ef068();
  puStack_48 = &UNK_1077caf04;
  uStack_60 = param_2;
  puStack_58 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x0001077efd7c();
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar3 = &uStack_78;
  uVar2 = extraout_x9;
  func_0x0001077caf68(&uStack_a8,extraout_x9,puVar3);
  if ((bStack_80 & 1) != 0) {
    *(undefined8 *)(puVar1 + 0x148) = uStack_a0;
    *(undefined8 *)(puVar1 + 0x140) = uStack_a8;
    *(undefined8 *)(puVar1 + 0x158) = uStack_90;
    *(undefined8 *)(puVar1 + 0x150) = uStack_98;
    puVar1[0x160] = uStack_88;
  }
  func_0x0001077f02ec();
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 1077cb3ac; end: 1077cb417;  */

void FUN_1077cb3ac(int param_1)

{
  long unaff_x19;
  long alStack_38 [3];
  
  func_0x0001077ef424();
  func_0x0001077f06fc();
  if (param_1 != 0) {
    func_0x0001077f06f4();
    func_0x0001077af25c(alStack_38);
    if (*(long *)(alStack_38[0] + 0x18) != 0) {
      func_0x0001077d5e30(unaff_x19 + 0x298,alStack_38);
    }
    func_0x00010726b264(alStack_38);
  }
  return;
}



/* Entry: 1077d4ed4; end: 1077d5213;  */

/* WARNING: Possible PIC construction at 0x0001077d52b0: Changing call to branch */

undefined1 * FUN_1077d4ed4(undefined1 *param_1,undefined ***param_2,undefined8 param_3)

{
  uint uVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined8 extraout_x8;
  undefined1 *unaff_x20;
  undefined ***unaff_x21;
  long lVar8;
  long lVar9;
  undefined1 auStack_4e0 [8];
  undefined ***pppuStack_4d8;
  undefined1 auStack_4d0 [56];
  undefined1 auStack_498 [64];
  undefined1 auStack_458 [232];
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  char cStack_318;
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined4 uStack_2d0;
  undefined1 auStack_2c8 [88];
  undefined **ppuStack_270;
  undefined1 *puStack_268;
  undefined ***pppuStack_258;
  undefined1 *puStack_188;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_78;
  int iStack_20;
  undefined **ppuStack_18;
  undefined ***pppuStack_10;
  undefined8 uStack_8;
  
  func_0x0001077f0928();
  func_0x0001077ee6bc();
  uStack_8 = extraout_x8;
  func_0x0001077f0954();
  uVar4 = 0;
  puVar6 = param_1;
  if ((bool)in_ZR) {
    pppuVar7 = param_2;
    func_0x0001078696e8(auStack_308);
    lVar9 = *(long *)(param_1 + 0x2a0);
    for (lVar8 = *(long *)(param_1 + 0x298); uVar4 = lVar8 == lVar9, !(bool)uVar4;
        lVar8 = lVar8 + 0x18) {
      ppuStack_270 = &PTR_DAT_1109dde78;
      pppuVar7 = &ppuStack_270;
      puStack_268 = auStack_308;
      pppuStack_258 = &ppuStack_270;
      func_0x000107869948(lVar8);
      func_0x000107277390(&ppuStack_270);
    }
    FUN_107751284(&ppuStack_270);
    puStack_188 = auStack_308;
    uVar1 = *(uint *)param_2;
    unaff_x21 = &ppuStack_98;
    pppuVar2 = (undefined ***)(param_2[1] + 3);
    lVar8 = (ulong)uVar1 * 0x30;
    param_2 = pppuVar7;
    lVar9 = (ulong)uVar1 * 3;
    while (lVar9 != 0) {
      if ((*(ushort *)((long)pppuVar2 + 0x16) >> 10 & 1) == 0) {
        ppuStack_18 = &PTR_DAT_1131ad2e8;
        iVar5 = (int)&ppuStack_18;
        pppuStack_10 = pppuVar2;
        FUN_107766098();
        if (iVar5 == 0) {
LAB_1077d50d8:
          ppuStack_330 = (undefined **)((ulong)ppuStack_330 & 0xffffffffffffff00);
          cStack_318 = '\0';
        }
        else {
          uStack_2d0 = 3;
          func_0x0001077ef09c(auStack_2c8,auStack_2d8);
          func_0x0001072c9884(auStack_2d8);
          uVar3 = (ulong)ppuStack_e0 >> 0x28;
          uVar1 = (uint)ppuStack_e0;
          ppuStack_e0._0_5_ = (uint5)(uVar1 & 0xffffff00);
          ppuStack_e0 = (undefined **)CONCAT35((int3)uVar3,(uint5)ppuStack_e0);
          ppuStack_98 = (undefined **)((ulong)ppuStack_98 & 0xffffffffffffff00);
          uStack_78 = 0;
          param_2 = &ppuStack_18;
          func_0x000107771274(auStack_2f0,auStack_2c8,param_2,param_3,&ppuStack_e0,&ppuStack_98);
          func_0x0001072c94e0(&ppuStack_98);
          if (cStack_2e0 != '\x01') {
LAB_1077d50d0:
            func_0x0001077f1330();
            func_0x0001077f1380();
            goto LAB_1077d50d8;
          }
          uStack_a0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_d8 = 0;
          ppuStack_e0 = (undefined **)0x0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          param_2 = &ppuStack_270;
          func_0x000107753050(&ppuStack_98,auStack_2f0[0],param_2,&ppuStack_e0);
          func_0x00010724b3d8(&ppuStack_e0);
          if (iStack_20 != 1) {
LAB_1077d50cc:
            func_0x0001077f11fc();
            goto LAB_1077d50d0;
          }
          pppuVar7 = &ppuStack_98;
          func_0x0001073405dc();
          if (*(int *)(pppuVar7 + 0xd) != 3) goto LAB_1077d50cc;
          func_0x0001073405dc(&ppuStack_98);
          func_0x000107573ddc();
          func_0x00010724ef84(&ppuStack_e0);
          uStack_328 = uStack_d8;
          ppuStack_330 = ppuStack_e0;
          uStack_320 = uStack_d0;
          uStack_d0 = 0;
          ppuStack_e0 = (undefined **)0x0;
          uStack_d8 = 0;
          cStack_318 = '\x01';
          func_0x0001077ef73c();
          func_0x0001077f11fc();
          func_0x0001077f1330();
          func_0x0001077f1380();
        }
        func_0x0001072f5f6c(&ppuStack_18);
      }
      else {
        param_2 = (undefined ***)pppuVar2[1];
        if ((*(ushort *)((long)pppuVar2 + 0x16) & 0x1000) != 0) {
          param_2 = pppuVar2;
        }
        func_0x00010002b838(&ppuStack_98);
        uStack_328 = uStack_90;
        ppuStack_330 = ppuStack_98;
        uStack_320 = uStack_88;
        uStack_90 = 0;
        uStack_88 = 0;
        ppuStack_98 = (undefined **)0x0;
        cStack_318 = '\x01';
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      uVar4 = cStack_318 == '\x01';
      if ((bool)uVar4) {
        if ((*(ushort *)((long)pppuVar2 + -2) >> 0xc & 1) == 0) {
          pppuVar7 = (undefined ***)pppuVar2[-2];
        }
        else {
          pppuVar7 = pppuVar2 + -3;
        }
        func_0x00010002b838(&ppuStack_98,pppuVar7);
        func_0x000100608100(param_1 + 0x2d0,&ppuStack_98);
        param_2 = &ppuStack_330;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_98);
      }
      func_0x0001001148fc(&ppuStack_330);
      pppuVar2 = pppuVar2 + 6;
      lVar8 = lVar8 + -0x30;
      lVar9 = lVar8;
    }
    func_0x000107267da8(&ppuStack_270);
    puVar6 = auStack_308;
    func_0x00010726b264();
    unaff_x20 = param_1;
  }
  func_0x0001077ee344(uStack_8);
  if ((bool)uVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = auStack_308;
  func_0x00010726b264(puVar6);
  func_0x0001077ef068();
  func_0x0001077ee434();
  uVar4 = *(short *)((long)param_2 + 0x16) == 4;
  if ((bool)uVar4) {
    func_0x0001077eec18();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    func_0x000100060964(auStack_4d0,&UNK_10f42a4c8);
    func_0x0001072627ac(auStack_498,auStack_4d0);
    func_0x0001077efb9c();
    pppuStack_4d8 = unaff_x21;
    FUN_1077b3ffc(auStack_458,puVar6 + 8,auStack_498,auStack_4e0,unaff_x20);
    func_0x0001072f5f6c(auStack_4e0);
    func_0x00010724b3d8(auStack_498);
    func_0x000104c2f714(auStack_4d0);
    func_0x0001077f1b58();
    if ((bool)uVar4) goto code_r0x0001077d530c;
    puVar6 = auStack_458;
    func_0x000107266948(puVar6);
  }
  func_0x0001077ee314();
  if ((bool)uVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001077f086c();
  func_0x000107266948();
  func_0x0001077ef068();
code_r0x0001077d530c:
  func_0x0001077ef34c();
  func_0x0001077da3b8();
  func_0x0001077ef474();
  func_0x00010733ecf0();
  return unaff_x20;
}



/* Entry: 1077d5b64; end: 1077d5b77;  */

long FUN_1077d5b64(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1077d5df0; end: 1077d5e2f;  */

void FUN_1077d5df0(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    func_0x000107410dc8();
  }
  return;
}



/* Entry: 1077d5fcc; end: 1077d70df;  */

void FUN_1077d5fcc(void)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  char **ppcVar4;
  undefined **ppuVar5;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  code *extraout_x9;
  long unaff_x19;
  uint auStack_748 [12];
  uint uStack_718;
  undefined4 auStack_710 [12];
  undefined4 uStack_6e0;
  undefined4 auStack_6d8 [12];
  undefined4 uStack_6a8;
  undefined4 auStack_6a0 [12];
  undefined4 uStack_670;
  undefined4 auStack_668 [12];
  undefined4 uStack_638;
  undefined4 auStack_630 [12];
  undefined4 uStack_600;
  undefined4 auStack_5f8 [12];
  undefined4 uStack_5c8;
  undefined4 auStack_5c0 [12];
  undefined4 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 uStack_56a;
  undefined1 uStack_569;
  undefined *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [16];
  char cStack_540;
  undefined4 uStack_520;
  uint *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_4e8;
  undefined *puStack_4e0;
  undefined1 auStack_4d8 [8];
  char cStack_4d0;
  char *pcStack_468;
  undefined1 auStack_460 [8];
  char cStack_458;
  undefined4 uStack_454;
  undefined4 uStack_438;
  undefined4 uStack_420;
  undefined *apuStack_3f0 [2];
  undefined4 uStack_3dc;
  undefined4 uStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_370;
  char *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *apuStack_2b0 [15];
  char *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  char cStack_1b0;
  undefined1 auStack_148 [120];
  undefined4 auStack_d0 [12];
  undefined4 uStack_a0;
  char cStack_98;
  char cStack_80;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_28;
  undefined1 auStack_20 [16];
  char cStack_10;
  undefined8 uStack_8;
  
  func_0x0001077f0928();
  func_0x0001077ef6e4();
  func_0x0001077ee3c0();
  uStack_8 = extraout_x8;
  func_0x0001077f02a8();
  func_0x0001077ee848(&puStack_1c0);
  if (cStack_1b0 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      pcStack_238 = "from";
      func_0x0001077ee75c();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077ef490();
    func_0x0001077eed7c(auStack_5c0,&puStack_1c0);
    func_0x0001077ef648();
  }
  else {
    auStack_5c0[0] = 0;
    uStack_590 = 1;
  }
  func_0x0001077efd60();
  func_0x0001077efd58();
  func_0x0001077f02a8();
  func_0x0001077ef754();
  func_0x0001077ee848(&puStack_1c0);
  if (cStack_1b0 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      pcStack_238 = "to";
      func_0x0001077ee75c();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077ef490();
    func_0x0001077eed7c(auStack_5f8,&puStack_1c0);
    func_0x0001077ef648();
  }
  else {
    auStack_5f8[0] = 0;
    uStack_5c8 = 1;
  }
  func_0x0001077efd60();
  func_0x0001077efd58();
  func_0x0001077f02a8();
  func_0x0001077ef754();
  func_0x0001077ee848(&puStack_1c0);
  if (cStack_1b0 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      pcStack_238 = "duration";
      func_0x0001077ee75c();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077ef490();
    func_0x0001077eed7c(auStack_630,&puStack_1c0);
    func_0x0001077ef648();
  }
  else {
    auStack_630[0] = 0;
    uStack_600 = 1;
  }
  func_0x0001077efd60();
  func_0x0001077efd58();
  func_0x0001077f02a8();
  func_0x0001077ef754();
  func_0x0001077ee848(&puStack_1c0);
  uVar3 = cStack_1b0 == '\x01';
  if ((bool)uVar3) {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      pcStack_238 = "delay";
      func_0x0001077ee75c();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077ef490();
    func_0x0001077eed7c(auStack_668,&puStack_1c0);
    func_0x0001077ef648();
  }
  else {
    auStack_668[0] = 0;
    uStack_638 = 1;
  }
  func_0x0001077efd60();
  func_0x0001077efd58();
  uStack_230 = 0;
  pcStack_238 = (char *)0x0;
  uStack_228 = 0;
  func_0x0001077ef754();
  func_0x0001077ee848(apuStack_2b0);
  func_0x0001077f163c();
  if ((bool)uVar3) {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      puStack_1c0 = &UNK_10f42a4e7;
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077d7830(&puStack_1c0);
    func_0x0001077f027c();
    func_0x000107339874();
    func_0x0001077eec74(auStack_148,apuStack_2b0);
    func_0x0001077ef43c();
    ppuVar5 = &puStack_1c0;
  }
  else {
    func_0x0001077d7830(auStack_d0);
    func_0x0001077efd50(auStack_148);
    ppuVar5 = (undefined **)auStack_d0;
  }
  func_0x000104c2f714(ppuVar5);
  func_0x0001077f04a0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_238);
  func_0x0001077f01b4();
  func_0x0001077ef754();
  func_0x0001077ee848(&pcStack_328);
  uVar3 = (char)uStack_318 == '\x01';
  if ((bool)uVar3) {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      pcStack_238 = "operation-type";
      func_0x0001077ee75c();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077d7834(&pcStack_238);
    func_0x0001077f027c();
    func_0x000107339874();
    func_0x0001077eec74(&puStack_1c0,&pcStack_328);
    func_0x0001077ef43c();
    ppcVar4 = &pcStack_238;
  }
  else {
    func_0x0001077d7834(auStack_d0);
    func_0x0001077efd50(&puStack_1c0);
    ppcVar4 = (char **)auStack_d0;
  }
  func_0x000104c2f714(ppcVar4);
  func_0x0001072f5f4c(&pcStack_328);
  func_0x0001077efc08();
  uStack_320 = 0;
  pcStack_328 = (char *)0x0;
  uStack_318 = 0;
  func_0x0001077ef754();
  func_0x0001077ee848(&puStack_3a0);
  func_0x0001077f109c();
  if ((bool)uVar3) {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      apuStack_2b0[0] = &UNK_10f40a410;
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077d7838(apuStack_2b0);
    func_0x0001077f027c();
    func_0x000107339874();
    func_0x0001077eec74(&pcStack_238,&puStack_3a0);
    func_0x0001077ef43c();
    ppuVar5 = apuStack_2b0;
  }
  else {
    func_0x0001077d7838(auStack_d0);
    func_0x0001077efd50(&pcStack_238);
    ppuVar5 = (undefined **)auStack_d0;
  }
  func_0x000104c2f714(ppuVar5);
  func_0x0001077ef7f8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_328);
  uStack_398 = 0;
  puStack_3a0 = (undefined *)0x0;
  uStack_390 = 0;
  func_0x0001077ef754();
  func_0x0001077ee848(&pcStack_468);
  if (cStack_458 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      pcStack_328 = "source";
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077d783c(&pcStack_328);
    func_0x0001077f027c();
    func_0x000107339874();
    func_0x0001077eec74(apuStack_2b0,&pcStack_468);
    func_0x0001077ef43c();
    ppcVar4 = &pcStack_328;
  }
  else {
    func_0x0001077d783c(auStack_d0);
    func_0x0001077efd50(apuStack_2b0);
    ppcVar4 = (char **)auStack_d0;
  }
  func_0x000104c2f714(ppcVar4);
  func_0x0001072f5f4c(&pcStack_468);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3a0);
  func_0x0001077f0224();
  func_0x0001077ef754();
  func_0x0001077ee848(&puStack_4e0);
  uVar3 = cStack_4d0 == '\x01';
  if ((bool)uVar3) {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      puStack_3a0 = &UNK_10f41700e;
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077d7840(&puStack_3a0);
    func_0x0001077f027c();
    func_0x000107339874();
    func_0x0001077eec74(&pcStack_328,&puStack_4e0);
    func_0x0001077ef43c();
    ppuVar5 = &puStack_3a0;
  }
  else {
    func_0x0001077d7840(auStack_d0);
    func_0x0001077efd50(&pcStack_328);
    ppuVar5 = (undefined **)auStack_d0;
  }
  func_0x000104c2f714(ppuVar5);
  func_0x0001077f021c();
  func_0x0001077efd48();
  func_0x0001077f020c();
  func_0x0001077ef754();
  func_0x0001077ee848(apuStack_3f0);
  func_0x0001077f062c();
  if ((bool)uVar3) {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      puStack_3a0 = &DAT_10f3b93c3;
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    puStack_3a0 = (undefined *)((ulong)puStack_3a0 & 0xffffffff00000000);
    uStack_370 = 1;
    func_0x0001077f0224();
    func_0x0001077f027c();
    func_0x0001077f02b8();
    func_0x0001077d79b8();
    uVar3 = cStack_98 == '\0';
    ppuVar5 = (undefined **)&DAT_10f3b93c3;
    if ((bool)uVar3) {
      ppuVar5 = &puStack_3a0;
    }
    func_0x0001077d79d4(auStack_6a0,ppuVar5);
    func_0x0001077d7a64(auStack_d0);
    func_0x0001077efd48();
    func_0x00010755fea8(&puStack_3a0);
  }
  else {
    auStack_6a0[0] = 0;
    uStack_670 = 1;
  }
  func_0x0001077ef3a4();
  func_0x0001077efd40();
  func_0x0001077f020c();
  func_0x0001077ef754();
  func_0x0001077ee848(apuStack_3f0);
  func_0x0001077f062c();
  if ((bool)uVar3) {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      pcStack_468 = "property";
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    FUN_1077d78e4(&pcStack_468);
    func_0x0001077f027c();
    func_0x000107339874();
    func_0x0001077eec74(&puStack_3a0,apuStack_3f0);
    func_0x0001077ef43c();
    ppcVar4 = &pcStack_468;
  }
  else {
    FUN_1077d78e4(auStack_d0);
    func_0x0001077efd50(&puStack_3a0);
    ppcVar4 = (char **)auStack_d0;
  }
  func_0x000104c2f714(ppcVar4);
  func_0x0001077ef3a4();
  func_0x0001077efd40();
  func_0x0001077f0224();
  func_0x0001077ef754();
  func_0x0001077ee848(&puStack_4e0);
  if (cStack_4d0 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      apuStack_3f0[0] = &UNK_10f42a503;
      func_0x0001077ee924();
      func_0x0001077eec68();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077ef490();
    func_0x0001077eed7c(auStack_6d8,&puStack_4e0);
    func_0x0001077ef648();
  }
  else {
    auStack_6d8[0] = 0;
    uStack_6a8 = 1;
  }
  func_0x0001077f021c();
  func_0x0001077efd48();
  func_0x0001077f0224();
  func_0x0001077ef754();
  func_0x0001077ee848(&puStack_4e0);
  if (cStack_4d0 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      apuStack_3f0[0] = &UNK_10f42a50f;
      func_0x0001077ee924();
      func_0x0001077eec68();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077ef490();
    func_0x0001077eed7c(auStack_710,&puStack_4e0);
    func_0x0001077ef648();
  }
  else {
    auStack_710[0] = 0;
    uStack_6e0 = 1;
  }
  func_0x0001077f021c();
  func_0x0001077efd48();
  func_0x0001077f0ea8();
  func_0x0001077ef754();
  func_0x0001077ee848(&puStack_58);
  if ((char)uStack_48 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      pcStack_468 = "animation-direction";
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    pcStack_468 = (char *)((ulong)pcStack_468 & 0xffffffff00000000);
    uStack_438 = 1;
    func_0x0001077f020c();
    func_0x0001077f02b8(auStack_d0,&puStack_518,&puStack_58,&puStack_4e0);
    func_0x00010755caf8();
    cVar2 = cStack_98;
    auStack_748[0] = auStack_748[0] & 0xffffff00;
    uStack_718 = 0xffffffff;
    func_0x0001077f0c08();
    ppcVar4 = (char **)auStack_d0;
    if (cVar2 == '\0') {
      ppcVar4 = &pcStack_468;
    }
    uVar1 = *(uint *)(ppcVar4 + 6);
    if (uVar1 != 0xffffffff) {
      ppcVar4 = (char **)auStack_d0;
      if (cVar2 == '\0') {
        ppcVar4 = &pcStack_468;
      }
      puStack_518 = auStack_748;
      (*(code *)(&PTR_DAT_1109dd3e8)[uVar1])(&puStack_518,ppcVar4);
      uStack_718 = uVar1;
    }
    func_0x0001077d7ab4(auStack_d0);
    func_0x0001077efd40();
    func_0x000107560d40(&pcStack_468);
  }
  else {
    auStack_748[0] = 0;
    uStack_718 = 1;
  }
  func_0x0001072f5f4c(&puStack_58);
  func_0x0001077ef7f0();
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001077ef754();
  func_0x0001077ee848(&puStack_518);
  if ((char)uStack_508 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      pcStack_468 = "interpolator";
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    pcStack_468 = (char *)((ulong)pcStack_468 & 0xffffffffffffff00);
    uStack_454 = 0;
    uStack_420 = 1;
    func_0x0001077f020c();
    puStack_568 = (undefined *)((ulong)puStack_568 & 0xffffffffffffff00);
    auStack_550[0] = extraout_w8;
    func_0x00010733b920(auStack_d0,&puStack_518,&puStack_4e0);
    ppcVar4 = (char **)auStack_d0;
    if (cStack_80 == '\0') {
      ppcVar4 = &pcStack_468;
    }
    func_0x00010733b93c(apuStack_3f0,ppcVar4);
    func_0x00010733b9dc(auStack_d0);
    func_0x0001077efd40();
    func_0x00010733acb4(&pcStack_468);
  }
  else {
    apuStack_3f0[0] = (undefined *)((ulong)apuStack_3f0[0] & 0xffffffffffffff00);
    uStack_3dc = 0;
    uStack_3a8 = 1;
  }
  func_0x0001077f0a58();
  func_0x0001077f01cc();
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001077ef754();
  func_0x0001077ee848(&puStack_518);
  if ((char)uStack_508 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      puStack_4e0 = &UNK_10f42a53d;
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    FUN_1077d78e4(&puStack_4e0);
    func_0x0001077f027c();
    func_0x000107339874();
    func_0x0001077eec74(&pcStack_468,&puStack_518);
    func_0x0001077ef43c();
    ppuVar5 = &puStack_4e0;
  }
  else {
    func_0x0001077d78e8(auStack_d0);
    func_0x0001077efd50(&pcStack_468);
    ppuVar5 = (undefined **)auStack_d0;
  }
  func_0x000104c2f714(ppuVar5);
  func_0x0001077f0a58();
  func_0x0001077f01cc();
  uStack_510 = 0;
  puStack_518 = (uint *)0x0;
  uStack_508 = 0;
  func_0x0001077ef754();
  func_0x0001077ee848(auStack_550);
  if (cStack_540 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      puStack_58 = &UNK_10f40a808;
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    func_0x0001077d78ec(&puStack_58);
    func_0x0001077f027c();
    func_0x000107339874();
    func_0x0001077eec74(&puStack_4e0,auStack_550);
    func_0x0001077ef43c();
    ppuVar5 = &puStack_58;
  }
  else {
    func_0x0001077d78ec(auStack_d0);
    func_0x0001077efd50(&puStack_4e0);
    ppuVar5 = (undefined **)auStack_d0;
  }
  func_0x000104c2f714(ppuVar5);
  func_0x0001077f0a04();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_518);
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001077ef754();
  func_0x0001077ee848(auStack_550);
  if (cStack_540 == '\x01') {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      puStack_568 = &UNK_10f42a552;
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    auStack_d0[0] = 0x42700000;
    uStack_a0 = 1;
    func_0x0001077eed7c(&puStack_518,auStack_550);
    func_0x0001077ef648();
  }
  else {
    puStack_518 = (uint *)CONCAT44(puStack_518._4_4_,0x42700000);
    uStack_4e8 = 1;
  }
  func_0x0001077f0a04();
  func_0x0001077f01cc();
  uStack_588 = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  func_0x0001077ef754();
  func_0x0001077ef238(auStack_20);
  (*extraout_x9)();
  uVar3 = cStack_10 == '\x01';
  if ((bool)uVar3) {
    if ((bRam00000001131ad3b0 & 1) == 0) {
      puStack_58 = &UNK_10f42a55d;
      func_0x0001077ee924();
      func_0x0001077ef070();
      func_0x0001077ef44c();
      func_0x0001077ef288();
    }
    puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,1);
    uStack_28 = 1;
    puStack_568 = (undefined *)0x0;
    uStack_560 = 0;
    uStack_558 = 0;
    uStack_569 = 1;
    uStack_56a = 0;
    func_0x00010733e5bc(auStack_d0,auStack_20,&puStack_568);
    uVar3 = cStack_98 == '\0';
    ppuVar5 = (undefined **)auStack_d0;
    if ((bool)uVar3) {
      ppuVar5 = &puStack_58;
    }
    func_0x00010727fe7c(auStack_550,ppuVar5);
    func_0x00010733e5d8(auStack_d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_568);
    func_0x00010727fc1c(&puStack_58);
  }
  else {
    auStack_550[0] = 1;
    uStack_520 = 1;
  }
  func_0x0001072f5f4c(auStack_20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_588);
  func_0x00010727d9cc();
  func_0x00010727d9cc(unaff_x19 + 0x38,auStack_5f8);
  func_0x00010727d9cc(unaff_x19 + 0x70,auStack_630);
  func_0x00010727d9cc(unaff_x19 + 0xa8,auStack_668);
  func_0x0001077eff18(unaff_x19 + 0xe8);
  func_0x0001073244ec(unaff_x19 + 0x160,auStack_1b8);
  func_0x0001073244ec(unaff_x19 + 0x1d8,&uStack_230);
  func_0x0001077f124c(unaff_x19 + 0x250);
  func_0x0001077f1350(unaff_x19 + 0x2c8);
  func_0x00010755fe44(unaff_x19 + 0x338,auStack_6a0);
  func_0x0001073244ec(unaff_x19 + 0x378,&uStack_398);
  func_0x00010727d9cc(unaff_x19 + 1000,auStack_6d8);
  func_0x00010727d9cc(unaff_x19 + 0x420,auStack_710);
  func_0x000107560cdc(unaff_x19 + 0x458,auStack_748);
  func_0x00010733ac4c(unaff_x19 + 0x490,apuStack_3f0);
  func_0x0001073244ec(unaff_x19 + 0x4e8,auStack_460);
  func_0x0001073244ec(unaff_x19 + 0x560,auStack_4d8);
  func_0x00010727d9cc(unaff_x19 + 0x5d0,&puStack_518);
  func_0x000107310b20(unaff_x19 + 0x608,auStack_550);
  func_0x00010727fc1c(auStack_550);
  func_0x000107266a30(&puStack_518);
  func_0x00010732442c(auStack_4d8);
  func_0x00010732442c(auStack_460);
  func_0x00010733acb4(apuStack_3f0);
  func_0x0001077f0c08();
  func_0x000107266a30(auStack_710);
  func_0x000107266a30(auStack_6d8);
  func_0x00010732442c(&uStack_398);
  func_0x00010755fea8(auStack_6a0);
  func_0x0001077f0afc();
  func_0x0001077ef43c();
  func_0x00010732442c(&uStack_230);
  func_0x00010732442c(auStack_1b8);
  func_0x0001077efc94();
  func_0x000107266a30(auStack_668);
  func_0x000107266a30(auStack_630);
  func_0x000107266a30(auStack_5f8);
  func_0x000107266a30(auStack_5c0);
  func_0x0001077ee344(uStack_8);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eeab4();
  func_0x0001072f5f4c(auStack_20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_588);
  func_0x000107266a30(&puStack_518);
  func_0x0001077ef378(&puStack_4e0);
  func_0x0001077ef378(&pcStack_468);
  func_0x00010733acb4(apuStack_3f0);
  func_0x0001077f0c08();
  do {
    func_0x000107266a30(auStack_710);
    func_0x000107266a30(auStack_6d8);
    func_0x0001077ef378(&puStack_3a0);
    func_0x00010755fea8(auStack_6a0);
    func_0x0001077ef378(&pcStack_328);
    func_0x0001077ef378(apuStack_2b0);
    func_0x0001077ef378(&pcStack_238);
    func_0x0001077ef378(&puStack_1c0);
    func_0x0001077ef378(auStack_148);
    func_0x000107266a30(auStack_668);
    func_0x000107266a30(auStack_630);
    func_0x000107266a30(auStack_5f8);
    func_0x000107266a30(auStack_5c0);
    func_0x0001077ef068();
    func_0x0001077ef7f0();
  } while( true );
}



/* Entry: 1077d78e4; end: 1077d78ef;  */

void FUN_1077d78e4(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077d7a94; end: 1077d7b1b;  */

void FUN_1077d7a94(long param_1)

{
  long unaff_x19;
  
  func_0x0001077ef908();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 1077d8030; end: 1077d8037;  */

void FUN_1077d8030(void)

{
  return;
}



/* Entry: 1077d8510; end: 1077d8577;  */

void FUN_1077d8510(void)

{
  undefined8 extraout_x9;
  undefined1 auStack_88 [88];
  
  func_0x0001077ef100();
  func_0x0001077ef9d8();
  func_0x0001077ef9c0();
  func_0x00010733b904(extraout_x9);
  func_0x0001077f0e88();
  func_0x00010727d614();
  func_0x00010727e950(auStack_88);
  func_0x0001077efc64();
  return;
}



/* Entry: 1077d8b38; end: 1077d8ba7;  */

long FUN_1077d8b38(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x0001073834c0(param_1);
  }
  return param_1;
}



/* Entry: 1077d917c; end: 1077d91bb;  */

void FUN_1077d917c(void)

{
  func_0x0001077ef1b8();
  func_0x0001077d9344();
  return;
}



/* Entry: 1077d9514; end: 1077d9573;  */

void FUN_1077d9514(void)

{
  undefined1 auStack_b8 [80];
  undefined1 auStack_68 [56];
  
  func_0x0001077eea7c();
  func_0x0001077d97f0(auStack_68);
  func_0x0001077ef0e0(auStack_b8);
  func_0x0001077d98cc();
  func_0x0001077d9cd4();
  func_0x00010727e9d0(auStack_b8);
  func_0x0001075610b8(auStack_68);
  return;
}



/* Entry: 1077d9a98; end: 1077d9acf;  */

void FUN_1077d9a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 uStack_11;
  
  func_0x00010755d0c4(&uStack_11,param_1,param_2,param_3,*param_4,*param_5);
  return;
}



/* Entry: 1077d9ca8; end: 1077d9cd3;  */

void FUN_1077d9ca8(undefined8 param_1,undefined8 param_2)

{
  char *pcStack_18;
  
  pcStack_18 = "text";
  func_0x0001077ef088();
  func_0x0001077ef070(param_1,param_2,&pcStack_18);
  return;
}



/* Entry: 1077d9f98; end: 1077d9fb7;  */

void FUN_1077d9f98(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107339bc0();
  }
  return;
}



/* Entry: 1077da31c; end: 1077da347;  */

void FUN_1077da31c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001077f0bc0();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_1109dde78;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1077da598; end: 1077da5f3;  */

void FUN_1077da598(void)

{
  func_0x0001077eeaec();
  func_0x000107554ccc();
  return;
}



/* Entry: 1077dcb34; end: 1077dcb5f;  */

long FUN_1077dcb34(long param_1)

{
  func_0x0001072ca648(param_1 + 0x48);
  func_0x0001072ca648(param_1);
  return param_1;
}



/* Entry: 1077dd3c4; end: 1077dd4ef;  */

ulong FUN_1077dd3c4(void)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x9;
  long lVar4;
  long extraout_x9_00;
  long extraout_x10;
  long lVar5;
  long extraout_x10_00;
  int extraout_w11;
  int iVar6;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  long unaff_x19;
  ulong uVar7;
  
  func_0x0001077ee3c0();
  func_0x0001077f13b4();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df040();
  func_0x0001077df000();
  func_0x0001077df060();
  func_0x0001077df060();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df040();
  func_0x0001077df020();
  func_0x0001077df060();
  func_0x0001077df020();
  uVar3 = unaff_x19 + 0x498;
  func_0x0001077df020();
  func_0x0001077f0bf8();
  func_0x0001077ee5f4();
  uVar7 = extraout_x8;
  lVar4 = extraout_x9;
  lVar5 = extraout_x10;
  iVar6 = extraout_w11;
  while( true ) {
    uVar2 = lVar4 == lVar5 && (int)uVar7 == iVar6;
    uVar7 = (ulong)(byte)uVar2;
    if (((bool)uVar2) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar4 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar2) {
      uVar1 = extraout_w8 + 1;
    }
    uVar7 = (ulong)uVar1;
    lVar5 = extraout_x10_00;
    iVar6 = extraout_w11_00;
  }
  func_0x0001077eff98();
  func_0x0001077ee2e4();
  if ((bool)uVar2) {
    return uVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107266a30(uVar3 + 0x490);
  func_0x000107266a30(uVar3 + 0x458);
  func_0x000107432d98(uVar3 + 0x410);
  func_0x000107266a30(uVar3 + 0x3d8);
  func_0x0001072ca524(uVar3 + 0x398);
  func_0x000107266a30(uVar3 + 0x360);
  func_0x000107266a30(uVar3 + 0x328);
  func_0x000107266a30(uVar3 + 0x2f0);
  func_0x000107266a30(uVar3 + 0x2b8);
  func_0x000107266a30(uVar3 + 0x280);
  func_0x000107432d98(uVar3 + 0x238);
  func_0x000107432d98(uVar3 + 0x1f0);
  func_0x0001072ca37c(uVar3 + 0x158);
  func_0x0001072ca524(uVar3 + 0x110);
  func_0x000107266a30(uVar3 + 0xd8);
  func_0x000107266a30(uVar3 + 0xa0);
  func_0x0001077f1244();
  return uVar3;
}



/* Entry: 1077dd7a4; end: 1077dd84f;  */

/* WARNING: Possible PIC construction at 0x0001077dd898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077dd8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077dd89c) */
/* WARNING: Removing unreachable block (ram,0x0001077dd8f4) */
/* WARNING: Removing unreachable block (ram,0x0001077dd904) */
/* WARNING: Removing unreachable block (ram,0x0001077dd908) */
/* WARNING: Removing unreachable block (ram,0x0001077dd910) */

undefined1 *
FUN_1077dd7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  ulong unaff_x19;
  undefined1 *unaff_x20;
  undefined2 uStack_1e0;
  undefined1 uStack_1de;
  undefined5 uStack_1dd;
  undefined8 uStack_1b8;
  undefined1 auStack_180 [32];
  undefined **ppuStack_160;
  undefined1 *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [256];
  long lStack_40;
  long lStack_38;
  
  puVar3 = auStack_180;
  func_0x0001077ef34c();
  func_0x0001077ee374();
  func_0x000105988308(auStack_180,param_3,param_4);
  puStack_158 = auStack_140;
  uStack_148 = 0x100;
  lStack_150 = 0;
  ppuStack_160 = &PTR_DAT_1109965d0;
  lStack_40 = 0;
  puVar5 = (undefined1 *)0xdd;
  func_0x0001003a9984(&ppuStack_160);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined1 *)(lStack_150 + lStack_40);
  }
  ___stack_chk_fail();
  uVar4 = unaff_x19;
  func_0x0001077ee3e4();
  if (uVar4 < 0x26) {
    uStack_1de = 0;
    unaff_x20 = &uStack_1de;
    unaff_x20[unaff_x19] = 0;
    uVar4 = 0x26;
    uStack_1e0 = (short)unaff_x19;
  }
  else {
    uVar2 = unaff_x19 == 0x51;
    if (unaff_x19 < 0x52) {
      func_0x0001077f12fc(&uStack_1e0);
      puVar1 = (undefined2 *)CONCAT53(uStack_1dd,CONCAT12(uStack_1de,uStack_1e0));
      *puVar1 = (short)unaff_x19;
      *(undefined1 *)((long)puVar1 + unaff_x19 + 2) = 0;
      unaff_x20 = (undefined1 *)(CONCAT53(uStack_1dd,CONCAT12(uStack_1de,uStack_1e0)) + 2);
      uVar4 = 0x52;
    }
    else {
      uStack_1b8 = extraout_x8;
      func_0x0001077dd9a0(&uStack_1e0);
      func_0x0001077efeb8();
      func_0x0001072625b4();
      func_0x0001077ef56c();
      func_0x0001077ee344(uStack_1b8);
      if ((bool)uVar2) {
        return puVar3;
      }
      ___stack_chk_fail();
      func_0x0001077ef244();
      func_0x000104c2f784();
      func_0x0001077ef068();
      puVar5 = puVar3;
    }
  }
  puVar3 = unaff_x20;
  func_0x0001077ef5bc(uVar4);
  func_0x0001073a3de0();
  unaff_x20[(long)puVar3] = 0;
  return puVar5;
}



/* Entry: 1077ddb8c; end: 1077ddbcf;  */

void FUN_1077ddb8c(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef424();
  func_0x0001074730f4();
  iVar1 = *(int *)(unaff_x20 + 0x78);
  if (iVar1 != -1) {
    func_0x0001077eebf8(&PTR_DAT_1109de068);
    *(int *)(unaff_x19 + 0x78) = iVar1;
  }
  return;
}



/* Entry: 1077ddd30; end: 1077ddd3b;  */

void FUN_1077ddd30(void)

{
  func_0x0001077eed88();
  func_0x0001077ddd5c();
  return;
}



/* Entry: 1077ddefc; end: 1077ddf3f;  */

void FUN_1077ddefc(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    func_0x0001077f0c6c();
    func_0x0001077ddf74();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x18;
  }
  else {
    func_0x0001077ddf68();
    func_0x0001077f0638();
    func_0x0001077f0a90();
    func_0x0001077ddfc0();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1077de0a8; end: 1077de0cf;  */

void FUN_1077de0a8(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001077f0638();
  func_0x0001077f0a90();
  func_0x0001077de0d0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1077de230; end: 1077de267;  */

void FUN_1077de230(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077efa58();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001077efe94();
    func_0x0001077de268();
  }
  return;
}



/* Entry: 1077de5c8; end: 1077de687;  */

undefined8 FUN_1077de5c8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x0001077ee9f8();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x0001077dea58(param_1 + 0x10);
  lVar3 = *unaff_x21;
  lVar2 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - unaff_x19);
  unaff_x21[1] = unaff_x19;
  func_0x0001077dea58(unaff_x21 + 2);
  unaff_x20[1] = lVar2 + ((unaff_x19 - lVar3) / -0x88) * 0x88;
  lVar3 = *unaff_x21;
  unaff_x21[1] = lVar3;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar3;
  lVar3 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar3;
  lVar3 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar3;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}


