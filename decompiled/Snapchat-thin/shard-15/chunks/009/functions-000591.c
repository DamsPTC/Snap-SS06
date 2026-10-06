/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd48ae4; end: 10bd48fa7;  */

undefined1  [16] FUN_10bd48ae4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  ulong uVar8;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int iVar9;
  ulong uVar10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar11;
  uint extraout_w12;
  uint extraout_w12_00;
  ulong extraout_x12;
  ulong extraout_x12_00;
  int iVar12;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  
  uVar15 = param_1 & 0xfffffffffffff;
  if ((param_1 & 0x7ff0000000000000) == 0) {
    if (uVar15 == 0) {
      iVar20 = 0;
      uVar8 = 0;
      goto LAB_10bd48e34;
    }
    uVar14 = 0xfffffbce;
LAB_10bd48b30:
    iVar20 = (int)(uVar14 * 0x134413) >> 0x16;
    lVar18 = ((long)((ulong)(uVar14 * 0x134413) << 0x20) >> 0x36) + -2;
    uVar13 = (ulong)(2U - iVar20);
    FUN_10bd48fa8();
    uVar21 = uVar14 + ((int)((2U - iVar20) * 0x1a934f) >> 0x13);
    uVar17 = (ulong)uVar21;
    uVar11 = uVar15 * 2;
    uVar19 = uVar15 << 1 | 1;
    uVar8 = uVar19 << (uVar17 & 0x3f);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar8;
    uVar10 = SUB168(auVar1 * auVar4,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar8;
    if (CARRY8(SUB168(auVar2 * auVar5,8),param_3 * uVar8)) {
      uVar10 = uVar10 + 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    uVar8 = SUB168(auVar3 * ZEXT816(0x83126e978d4fdf3c),8) >> 9;
    uVar16 = (int)uVar10 + (int)uVar8 * -1000;
    uVar21 = (uint)(param_3 >> ((ulong)~uVar21 & 0x3f));
    if (uVar16 <= uVar21) {
      if (uVar21 == uVar16) {
        uVar19 = uVar11 - 1;
        if ((((uVar15 & 1) == 0) && (uVar15 = uVar19, func_0x00010bd4d33c(), (uVar15 & 1) != 0)) ||
           (func_0x00010bd490b8(uVar19,uVar13,param_3,uVar17), (int)uVar19 != 0))
        goto LAB_10bd48c94;
      }
      else {
        if (((uVar16 != 0) || ((uVar15 & 1) == 0)) || (func_0x00010bd4d33c(), (int)uVar19 == 0)) {
LAB_10bd48c94:
          func_0x00010bd4d17c();
          bVar6 = 7 < extraout_x10;
          bVar7 = extraout_x10 == 8;
          if (bVar6) {
            func_0x00010bd4ce9c();
            uVar15 = extraout_x10_00;
            iVar20 = extraout_w8_01;
            if (!bVar6 || bVar7) {
              func_0x00010bd4d1e8();
              uVar15 = extraout_x10_01;
              uVar8 = extraout_x13;
              while( true ) {
                uVar14 = (uint)uVar15;
                iVar12 = (int)uVar8;
                iVar9 = extraout_w9_00;
                iVar20 = extraout_w8_02;
                if ((extraout_w9_00 == iVar12) ||
                   (uVar15 = (ulong)(uVar14 * extraout_w11), iVar9 = iVar12,
                   extraout_w12 < uVar14 * extraout_w11)) break;
                uVar8 = (ulong)(iVar12 + 1);
              }
              goto LAB_10bd48e28;
            }
          }
          else {
            uVar15 = extraout_x10;
            iVar20 = extraout_w8_00;
            if (extraout_x10 == 0) goto LAB_10bd48dec;
          }
          uVar14 = (uint)(uVar8 / 100000000);
LAB_10bd48dcc:
          iVar9 = (int)uVar8 + uVar14 * -100000000;
          if (0x33333333 < (uint)(iVar9 * -0x33333333)) goto LAB_10bd48dec;
          if (uVar15 == 1 || 0x33333333 < (uint)(iVar9 * -0x3d70a3d7)) {
            uVar8 = (ulong)((uint)(iVar9 * -0x33333333) >> 1) + (ulong)uVar14 * 10000000;
            iVar9 = 1;
          }
          else if (uVar15 == 2 || 0x33333333 < (uint)(iVar9 * 0x26e978d5)) {
            uVar8 = (ulong)((uint)(iVar9 * -0x3d70a3d7) >> 2) + (ulong)uVar14 * 1000000;
            iVar9 = 2;
          }
          else if (uVar15 == 3 || 0x33333333 < (uint)(iVar9 * 0x3afb7e91)) {
            uVar8 = (ulong)((uint)(iVar9 * 0x26e978d5) >> 3) + (ulong)uVar14 * 100000;
            iVar9 = 3;
          }
          else if (uVar15 == 4 || 0x33333333 < (uint)(iVar9 * 0xbcbe61d)) {
            uVar8 = (ulong)((uint)(iVar9 * 0x3afb7e91) >> 4) + (ulong)uVar14 * 10000;
            iVar9 = 4;
          }
          else if (uVar15 == 5 || 0x33333333 < (uint)(iVar9 * 0x68c26139)) {
            uVar8 = (ulong)((uint)(iVar9 * 0xbcbe61d) >> 5) + (ulong)uVar14 * 1000;
            iVar9 = 5;
          }
          else if (uVar15 == 6 || 0x33333333 < (uint)(iVar9 * -0x5172b95b)) {
            uVar8 = (ulong)((uint)(iVar9 * 0x68c26139) >> 6) + (ulong)uVar14 * 100;
            iVar9 = 6;
          }
          else {
            uVar8 = (ulong)((uint)(iVar9 * -0x5172b95b) >> 7) + (ulong)uVar14 * 10;
            iVar9 = 7;
          }
          goto LAB_10bd48e30;
        }
        uVar8 = uVar8 - 1;
        uVar16 = 1000;
      }
    }
    uVar16 = uVar16 - (uVar21 >> 1);
    uVar21 = uVar16 + 0x32;
    if ((uVar21 & 3) == 0) {
      uVar21 = (uVar21 >> 2) * 0xa429;
      uVar8 = uVar8 * 10 + (ulong)(uVar21 >> 0x14);
      if ((uVar21 & 0xff) < 0xb) {
        uVar15 = uVar11;
        func_0x00010bd490b8(uVar11,uVar13,param_3,uVar17);
        if ((uint)uVar15 == (uVar16 & 1)) {
          if ((int)uVar14 < 0x57) {
            if ((int)uVar14 < 10) {
              if (((int)uVar14 < -4) &&
                 (uVar15 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1,
                 uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2,
                 uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4,
                 uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8,
                 uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10,
                 (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) <= (int)((int)lVar18 - uVar14)))
              goto LAB_10bd48e34;
            }
            else {
              lVar18 = lVar18 * 0x10;
              if (*(ulong *)(&UNK_10e60d320 + lVar18) <= *(long *)(&UNK_10e60d318 + lVar18) * uVar11
                  && *(long *)(&UNK_10e60d318 + lVar18) * uVar11 -
                     *(ulong *)(&UNK_10e60d320 + lVar18) != 0) goto LAB_10bd48e34;
            }
            uVar8 = uVar8 & 0xfffffffffffffffe;
          }
        }
        else {
          uVar8 = uVar8 - 1;
        }
      }
    }
    else {
      uVar8 = uVar8 * 10 + (ulong)(uVar21 * 0xa3d8 >> 0x16);
    }
  }
  else {
    uVar14 = (uint)((param_1 & 0x7ff0000000000000) >> 0x34) - 0x433;
    if (uVar15 != 0) {
      uVar15 = uVar15 | 0x10000000000000;
      goto LAB_10bd48b30;
    }
    func_0x00010bd4d4e0();
    iVar20 = (int)(extraout_w9 + uVar14 * extraout_w8) >> 0x16;
    iVar9 = uVar14 + (iVar20 * -0x1a934f >> 0x13);
    FUN_10bd48fa8(-iVar20);
    uVar8 = (ulong)(0xb - iVar9);
    uVar15 = param_3 - (param_3 >> 0x36) >> (uVar8 & 0x3f);
    if ((uVar14 & 0xfffffffe) != 2) {
      uVar15 = uVar15 + 1;
    }
    uVar8 = (param_3 + (param_3 >> 0x35) >> (uVar8 & 0x3f)) / 10;
    if (uVar8 * 10 < uVar15) {
      uVar8 = (param_3 >> ((ulong)(10 - iVar9) & 0x3f)) + 1 >> 1;
      if (uVar14 == 0xffffffb3) {
        uVar8 = uVar8 & 0x7ffffffffffffffe;
      }
      else if (uVar8 < uVar15) {
        uVar8 = uVar8 + 1;
      }
      goto LAB_10bd48e34;
    }
    func_0x00010bd4d17c();
    bVar6 = 7 < extraout_x10_02;
    bVar7 = extraout_x10_02 == 8;
    if (bVar6) {
      func_0x00010bd4ce9c();
      uVar15 = extraout_x10_03;
      uVar19 = extraout_x12_00;
      iVar20 = extraout_w8_04;
      if (bVar6 && !bVar7) goto LAB_10bd48dbc;
      func_0x00010bd4d1e8();
      uVar15 = extraout_x10_04;
      uVar8 = extraout_x13_00;
      while( true ) {
        uVar14 = (uint)uVar15;
        iVar12 = (int)uVar8;
        iVar9 = extraout_w9_01;
        iVar20 = extraout_w8_05;
        if ((extraout_w9_01 == iVar12) ||
           (uVar15 = (ulong)(uVar14 * extraout_w11_00), iVar9 = iVar12,
           extraout_w12_00 < uVar14 * extraout_w11_00)) break;
        uVar8 = (ulong)(iVar12 + 1);
      }
LAB_10bd48e28:
      uVar8 = (ulong)(uVar14 >> (ulong)(iVar9 - 8U & 0x1f));
    }
    else {
      uVar15 = extraout_x10_02;
      uVar19 = extraout_x12;
      iVar20 = extraout_w8_03;
      if (extraout_x10_02 != 0) {
LAB_10bd48dbc:
        uVar14 = (uint)(uVar19 / 1000000000);
        goto LAB_10bd48dcc;
      }
LAB_10bd48dec:
      iVar9 = 0;
    }
LAB_10bd48e30:
    iVar20 = iVar20 + iVar9;
  }
LAB_10bd48e34:
  auVar22._8_4_ = iVar20;
  auVar22._0_8_ = uVar8;
  auVar22._12_4_ = 0;
  return auVar22;
}



/* Entry: 10bd48fa8; end: 10bd490e7;  */

undefined1  [16] FUN_10bd48fa8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  
  uVar1 = param_1 + 0x124;
  uVar4 = (uVar1 & 0xffff) / 0x1b;
  iVar2 = uVar4 * 0x1b + -0x124;
  lVar14 = (ulong)uVar4 * 0x10;
  lVar9 = *(long *)(&UNK_10e60d710 + lVar14);
  uVar15 = *(ulong *)(&UNK_10e60d718 + lVar14);
  iVar3 = param_1 - iVar2;
  if (iVar3 != 0) {
    uVar12 = *(ulong *)(&UNK_10e60d880 + (long)iVar3 * 8);
    uVar4 = (param_1 * 0x1a934f >> 0x13) - (iVar3 + (iVar2 * 0x1a934f >> 0x13));
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar15;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar12;
    lVar14 = SUB168(auVar5 * auVar7,8);
    uVar10 = (ulong)(param_1 < 5);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = lVar9 - uVar10;
    uVar13 = SUB168(auVar6 * auVar8,8);
    uVar11 = uVar13 + uVar15 * uVar12;
    if (CARRY8(uVar13,uVar15 * uVar12)) {
      lVar14 = lVar14 + 1;
    }
    uVar15 = (lVar14 << 1) << ((ulong)~uVar4 & 0x3f) | uVar11 >> ((ulong)uVar4 & 0x3f);
    uVar11 = uVar11 * 2 << ((ulong)~uVar4 & 0x3f) |
             uVar12 * (lVar9 - uVar10) >> ((ulong)uVar4 & 0x3f);
    if (CARRY8(uVar11,uVar10)) {
      uVar15 = uVar15 + 1;
    }
    lVar9 = uVar11 + uVar10 +
            (ulong)(*(uint *)(&UNK_10e60d958 + (ulong)(uVar1 >> 4) * 4) >>
                    (ulong)((uVar1 & 0xf) << 1) & 3);
  }
  auVar16._8_8_ = uVar15;
  auVar16._0_8_ = lVar9;
  return auVar16;
}



/* Entry: 10bd490e8; end: 10bd49133;  */

void FUN_10bd490e8(undefined8 param_1,long *param_2)

{
  func_0x00010bd4ccc8();
  func_0x00010bd4d2fc();
  (**(code **)(*param_2 + 0x28))(param_1);
  func_0x00010bd4cf10();
  return;
}



/* Entry: 10bd49134; end: 10bd49177;  */

long * FUN_10bd49134(long *param_1)

{
  func_0x00010bd4ccc8();
  func_0x00010bd4d2fc();
  (**(code **)(*param_1 + 0x20))();
  func_0x00010bd4cf10();
  return param_1;
}



/* Entry: 10bd49178; end: 10bd491bb;  */

long * FUN_10bd49178(long *param_1)

{
  func_0x00010bd4ccc8();
  func_0x00010bd4d2fc();
  (**(code **)(*param_1 + 0x18))();
  func_0x00010bd4cf10();
  return param_1;
}



/* Entry: 10bd491bc; end: 10bd49413;  */

int FUN_10bd491bc(uint param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  undefined1 uVar14;
  char *pcVar15;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined1 uStack_77;
  undefined1 auStack_76 [6];
  byte *pbVar7;
  char *pcVar16;
  
  uVar4 = (uint)(param_2 >> 0x20);
  uVar5 = uVar4 & 0xff;
  uVar3 = param_1 - 1;
  if (0x7fffffff < param_1) {
    uVar3 = 5;
  }
  if ((param_2 >> 0x20 & 0xfe) != 0) {
    uVar3 = param_1;
  }
  puVar11 = (undefined2 *)auStack_76;
  uStack_77 = 0x25;
  if ((uVar5 == 3) && ((uVar4 >> 0x14 & 1) != 0)) {
    puVar11 = (undefined2 *)(auStack_76 + 1);
    auStack_76[0] = 0x23;
  }
  puVar12 = puVar11;
  if (-1 < (int)uVar3) {
    puVar12 = puVar11 + 1;
    *puVar11 = 0x2a2e;
  }
  uVar9 = 0x61;
  if ((param_2 >> 0x20 & 0x10000) != 0) {
    uVar9 = 0x41;
  }
  uVar14 = 0x65;
  if (uVar5 == 2) {
    uVar14 = 0x66;
  }
  if (uVar5 != 3) {
    uVar9 = uVar14;
  }
  *(undefined1 *)puVar12 = uVar9;
  *(undefined1 *)((long)puVar12 + 1) = 0;
  lVar19 = param_3[2];
LAB_10bd49278:
  do {
    lVar20 = param_3[1];
    uVar1 = lVar20 + lVar19;
    lVar10 = param_3[3];
    uVar18 = uVar1;
    _snprintf(uVar1,lVar10 - lVar19,&uStack_77);
    if ((int)uVar18 < 0) goto LAB_10bd492d4;
    uVar8 = uVar18 & 0xffffffff;
    if ((uVar18 & 0xffffffff) < (ulong)(lVar10 - lVar19)) {
      if (uVar5 == 2) {
        if (param_1 != 0) {
          iVar17 = -1;
          pbVar6 = (byte *)(uVar1 + uVar8);
          do {
            pbVar7 = pbVar6;
            pbVar6 = pbVar7 + -1;
            iVar17 = iVar17 + 1;
          } while (*pbVar6 - 0x30 < 10);
          _memmove(pbVar6,pbVar7,iVar17);
          func_0x00010bd4ce7c();
          return -iVar17;
        }
      }
      else if (uVar5 != 3) {
        lVar10 = 1 - (uVar18 & 0xffffffff);
        lVar13 = -2;
        pcVar15 = (char *)(lVar20 + lVar19 + (uVar18 & 0xffffffff));
        do {
          pcVar16 = pcVar15;
          pcVar15 = pcVar16 + -1;
          lVar13 = lVar13 + 1;
          lVar10 = lVar10 + 1;
        } while (*pcVar15 != 'e');
        iVar17 = 0;
        lVar13 = -lVar13;
        uVar18 = -lVar10;
        do {
          iVar17 = (int)*(char *)(uVar1 + uVar8 + lVar13) + iVar17 * 10 + -0x30;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0);
        iVar2 = -iVar17;
        if (*pcVar16 != '-') {
          iVar2 = iVar17;
        }
        if (lVar10 == 0) {
          uVar18 = 0;
        }
        else {
          do {
            pcVar15 = (char *)(lVar20 + lVar19 + uVar18);
            uVar18 = uVar18 - 1;
          } while (*pcVar15 == '0');
          _memmove(uVar1 + 1,uVar1 + 2,uVar18 & 0xffffffff);
        }
        func_0x00010bd4ce7c();
        return iVar2 - (int)uVar18;
      }
      func_0x00010bd4ce7c();
      return 0;
    }
    uVar8 = lVar19 + 1 + uVar8;
  } while (uVar8 <= (ulong)param_3[3]);
  goto LAB_10bd492e4;
LAB_10bd492d4:
  if (param_3[3] != -1) {
    uVar8 = param_3[3] + 1;
LAB_10bd492e4:
    (**(code **)*param_3)(param_3,uVar8);
  }
  goto LAB_10bd49278;
}



/* Entry: 10bd49414; end: 10bd49bc3;  */

undefined1  [16]
FUN_10bd49414(double param_1,undefined ***param_2,undefined ***param_3,undefined ***param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  ulong uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined ***pppuVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined2 *puVar22;
  undefined2 *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 extraout_x9;
  undefined1 uVar26;
  char *pcVar27;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  undefined **ppuVar33;
  ulong uVar34;
  ulong uVar35;
  undefined **ppuVar36;
  ulong uVar37;
  undefined8 unaff_x30;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined **ppuStack_370;
  uint uStack_368;
  uint uStack_364;
  int iStack_360;
  undefined1 uStack_35c;
  uint uStack_354;
  long lStack_350;
  int iStack_348;
  undefined **ppuStack_340;
  undefined1 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_320 [136];
  undefined4 uStack_298;
  undefined **ppuStack_290;
  undefined1 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [136];
  undefined4 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [136];
  undefined4 uStack_138;
  undefined **ppuStack_130;
  undefined1 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  double dStack_100;
  double dStack_f8;
  undefined1 uStack_e7;
  undefined1 auStack_e6 [6];
  byte *pbVar8;
  char *pcVar28;
  
  pppuVar16 = param_2;
  func_0x000107c3a9b4();
  uVar35 = (ulong)param_3 & 0xff00000000;
  uVar3 = param_1 == 0.0;
  uVar18 = (uint)param_2;
  if (param_1 <= 0.0) {
    uVar3 = 0 < (int)uVar18 && uVar35 == 0x200000000;
    if ((bool)uVar3) {
      pppuVar16 = (undefined ***)((ulong)param_2 & 0xffffffff);
      func_0x00010bd4ce7c();
      ppuVar33 = param_4[1];
      while( true ) {
        iVar6 = (int)param_2;
        uVar17 = iVar6 - 1;
        uVar3 = uVar17 == 0;
        param_2 = (undefined ***)(ulong)uVar17;
        if (iVar6 < 1) break;
        *(undefined1 *)ppuVar33 = 0x30;
        ppuVar33 = (undefined **)((long)ppuVar33 + 1);
      }
      param_3 = (undefined ***)(ulong)-uVar18;
    }
    else {
      ppuStack_130 = (undefined **)CONCAT71(ppuStack_130._1_7_,0x30);
      pppuVar16 = &ppuStack_130;
      func_0x00010bd4cd60();
      param_3 = (undefined ***)0x0;
    }
  }
  else {
    uVar17 = (uint)((ulong)param_3 >> 0x20);
    if ((uVar17 >> 0x13 & 1) == 0) {
      func_0x000107c3a9a8(extraout_x8);
      pppuVar16 = param_3;
      if ((bool)uVar3) {
        func_0x000107c3aaf4();
        uVar17 = (uint)((ulong)param_3 >> 0x20);
        uVar19 = uVar17 & 0xff;
        uVar5 = (uint)param_2;
        uVar18 = uVar5 - 1;
        if (0x7fffffff < uVar5) {
          uVar18 = 5;
        }
        if (((ulong)param_3 >> 0x20 & 0xfe) != 0) {
          uVar18 = uVar5;
        }
        puVar22 = (undefined2 *)auStack_e6;
        uStack_e7 = 0x25;
        if ((uVar19 == 3) && ((uVar17 >> 0x14 & 1) != 0)) {
          puVar22 = (undefined2 *)(auStack_e6 + 1);
          auStack_e6[0] = 0x23;
        }
        puVar23 = puVar22;
        if (-1 < (int)uVar18) {
          puVar23 = puVar22 + 1;
          *puVar22 = 0x2a2e;
        }
        uVar3 = 0x61;
        if (((ulong)param_3 >> 0x20 & 0x10000) != 0) {
          uVar3 = 0x41;
        }
        uVar26 = 0x65;
        if (uVar19 == 2) {
          uVar26 = 0x66;
        }
        if (uVar19 != 3) {
          uVar3 = uVar26;
        }
        *(undefined1 *)puVar23 = uVar3;
        *(undefined1 *)((long)puVar23 + 1) = 0;
        ppuVar33 = param_4[2];
LAB_10bd49278:
        while( true ) {
          ppuVar36 = param_4[1];
          uVar35 = (long)ppuVar36 + (long)ppuVar33;
          ppuVar20 = param_4[3];
          dStack_100 = param_1;
          if (-1 < (int)uVar18) {
            dStack_100 = (double)(ulong)uVar18;
            dStack_f8 = param_1;
          }
          uVar29 = uVar35;
          _snprintf(uVar35,(long)ppuVar20 - (long)ppuVar33,&uStack_e7);
          if ((int)uVar29 < 0) goto LAB_10bd492d4;
          uVar13 = uVar29 & 0xffffffff;
          if ((uVar29 & 0xffffffff) < (ulong)((long)ppuVar20 - (long)ppuVar33)) break;
          ppuVar20 = (undefined **)((long)ppuVar33 + uVar13 + 1);
          if (param_4[3] < ppuVar20) goto LAB_10bd492e4;
        }
        if (uVar19 == 2) {
          if (uVar5 != 0) {
            iVar6 = -1;
            pbVar7 = (byte *)(uVar35 + uVar13);
            do {
              pbVar8 = pbVar7;
              pbVar7 = pbVar8 + -1;
              iVar6 = iVar6 + 1;
            } while (*pbVar7 - 0x30 < 10);
            _memmove(pbVar7,pbVar8,iVar6);
            uVar13 = (ulong)((int)uVar29 - 1);
            func_0x00010bd4ce7c();
            uVar35 = (ulong)(uint)-iVar6;
            goto LAB_10bd493f0;
          }
        }
        else {
          if (uVar19 != 3) {
            lVar21 = 1 - (uVar29 & 0xffffffff);
            lVar24 = -2;
            pcVar27 = (char *)((long)ppuVar36 + (long)ppuVar33 + (uVar29 & 0xffffffff));
            do {
              pcVar28 = pcVar27;
              pcVar27 = pcVar28 + -1;
              lVar24 = lVar24 + 1;
              lVar21 = lVar21 + 1;
            } while (*pcVar27 != 'e');
            iVar6 = 0;
            lVar24 = -lVar24;
            uVar29 = -lVar21;
            do {
              iVar6 = (int)*(char *)(uVar35 + uVar13 + lVar24) + iVar6 * 10 + -0x30;
              lVar24 = lVar24 + 1;
            } while (lVar24 != 0);
            iVar31 = -iVar6;
            if (*pcVar28 != '-') {
              iVar31 = iVar6;
            }
            if (lVar21 == 0) {
              uVar29 = 0;
            }
            else {
              do {
                pcVar27 = (char *)((long)ppuVar36 + (long)ppuVar33 + uVar29);
                uVar29 = uVar29 - 1;
              } while (*pcVar27 == '0');
              _memmove(uVar35 + 1,uVar35 + 2,uVar29 & 0xffffffff);
            }
            uVar13 = (long)ppuVar33 + (uVar29 & 0xffffffff) + 1;
            func_0x00010bd4ce7c();
            uVar35 = (ulong)(uint)(iVar31 - (int)uVar29);
            goto LAB_10bd493f0;
          }
          uVar13 = (long)ppuVar33 + uVar13;
        }
        func_0x00010bd4ce7c();
        uVar35 = 0;
LAB_10bd493f0:
        auVar38._8_8_ = uVar13;
        auVar38._0_8_ = uVar35;
        return auVar38;
      }
      goto LAB_10bd49b7c;
    }
    if ((int)uVar18 < 0) {
      if ((uVar17 >> 0x12 & 1) == 0) {
        FUN_10bd48ae4(param_1);
        func_0x000107c3175c(param_4,pppuVar16);
      }
      else {
        FUN_10bd48740((float)param_1);
        param_3 = (undefined ***)((ulong)pppuVar16 >> 0x20);
        func_0x000107c31758(param_4,pppuVar16);
      }
    }
    else {
      FUN_10bd4c058(param_1,&ppuStack_130);
      ppuVar33 = ppuStack_130;
      puVar14 = puStack_128;
      FUN_10bd49bc4();
      iVar6 = (int)puVar14;
      uVar29 = (ulong)(-iVar6 - 0x7c);
      puVar15 = &uStack_354;
      func_0x00010bd49bec(uVar29,puVar15);
      func_0x00010bd49c44(ppuVar33,(ulong)puVar14 & 0xffffffff,uVar29,(ulong)puVar15 & 0xffffffff);
      if (0x2fe < uVar18) {
        uVar18 = 0x2ff;
      }
      ppuStack_370 = param_4[1];
      uStack_368 = 0;
      iStack_360 = -uStack_354;
      uVar34 = (ulong)(uint)-iVar6;
      uVar13 = (ulong)ppuVar33 >> (uVar34 & 0x3f);
      uVar29 = uVar13;
      uStack_364 = uVar18;
      uStack_35c = uVar35 == 0x200000000;
      func_0x000107c31734();
      pppuVar16 = &ppuStack_370;
      FUN_10bd4c090(pppuVar16,*(long *)(&UNK_10e60cdd8 + (long)(int)uVar29 * 8) << (uVar34 & 0x3f),
                    (ulong)ppuVar33 / 10,uVar29);
      iVar6 = (int)pppuVar16;
      if (iVar6 == 0) {
        lVar21 = 1L << (uVar34 & 0x3f);
        uVar37 = lVar21 - 1;
        uVar30 = uVar37 & (ulong)ppuVar33;
        uVar32 = (long)(int)uVar29;
        do {
          uVar18 = (uint)uVar13;
          switch((int)uVar32) {
          case 1:
            uVar13 = 0;
            goto LAB_10bd49688;
          case 2:
            uVar13 = (ulong)(uVar18 % 10);
            uVar18 = uVar18 / 10;
            goto LAB_10bd49688;
          case 3:
            uVar19 = 100;
            break;
          case 4:
            uVar19 = 1000;
            break;
          case 5:
            uVar19 = 10000;
            break;
          case 6:
            uVar19 = 100000;
            break;
          case 7:
            uVar19 = 1000000;
            break;
          case 8:
            uVar19 = 10000000;
            break;
          case 9:
            uVar19 = 100000000;
            break;
          case 10:
            uVar19 = 1000000000;
            break;
          default:
            uVar18 = 0;
            goto LAB_10bd49688;
          }
          uVar5 = 0;
          if (uVar19 != 0) {
            uVar5 = uVar18 / uVar19;
          }
          uVar13 = (ulong)(uVar18 - uVar5 * uVar19);
          uVar18 = uVar5;
LAB_10bd49688:
          pppuVar16 = &ppuStack_370;
          func_0x00010bd4d318(pppuVar16,(int)(char)((char)uVar18 + '0'),
                              *(long *)(&UNK_10e60cdd8 + uVar32 * 8) << (uVar34 & 0x3f),
                              ((uVar13 & 0xffffffff) << (uVar34 & 0x3f)) + uVar30);
          iVar6 = (int)pppuVar16;
          if (iVar6 != 0) {
            uVar29 = (ulong)((int)uVar32 - 1);
            goto LAB_10bd49738;
          }
          uVar29 = uVar32 - 1;
          bVar1 = 1 < (long)uVar32;
          uVar32 = uVar29;
        } while (bVar1);
        lVar24 = 1;
        do {
          uVar13 = uVar30 * 10;
          lVar24 = lVar24 * 10;
          uVar30 = uVar37 & uVar30 * 10;
          uVar29 = (ulong)((int)uVar29 - 1);
          pppuVar16 = &ppuStack_370;
          func_0x00010bd4c118(pppuVar16,(int)(char)((char)(uVar13 >> (uVar34 & 0x3f)) + '0'),lVar21,
                              uVar30,lVar24,0);
          iVar6 = (int)pppuVar16;
        } while (iVar6 == 0);
      }
LAB_10bd49738:
      uVar18 = uStack_364;
      if (iVar6 == 2) {
        iVar6 = (int)uVar29 + ~uStack_354 + uStack_368;
        puStack_128 = auStack_110;
        ppuStack_130 = &PTR_FUN_110d9ec20;
        uStack_118 = 0x20;
        uStack_120 = 0;
        puStack_1d8 = auStack_1c0;
        ppuStack_1e0 = &PTR_FUN_110d9ec20;
        uStack_1c8 = 0x20;
        uStack_1d0 = 0;
        uStack_138 = 0;
        puStack_288 = auStack_270;
        ppuStack_290 = &PTR_FUN_110d9ec20;
        uStack_278 = 0x20;
        uStack_280 = 0;
        uStack_1e8 = 0;
        puStack_338 = auStack_320;
        ppuStack_340 = &PTR_FUN_110d9ec20;
        uStack_328 = 0x20;
        uStack_330 = 0;
        uStack_298 = 0;
        lStack_350 = 0;
        iStack_348 = 0;
        if ((uVar17 >> 0x12 & 1) == 0) {
          iVar31 = (int)&lStack_350;
          FUN_10bd4c058(param_1);
        }
        else {
          iVar31 = (int)&lStack_350;
          func_0x00010bd4c288((float)param_1);
        }
        iVar2 = iStack_348;
        lVar21 = lStack_350;
        uVar19 = 1;
        if (iVar31 != 0) {
          uVar19 = 2;
        }
        pppuVar16 = (undefined ***)(ulong)uVar19;
        lVar24 = lStack_350 << (long)pppuVar16;
        if (iStack_348 < 0) {
          if (iVar6 < 0) {
            FUN_10bd4c384(&ppuStack_130,-iVar6);
            FUN_10bd4c5ec(&ppuStack_290,&ppuStack_130);
            if (iVar31 == 0) {
              pppuVar12 = (undefined ***)0x0;
            }
            else {
              FUN_10bd4c5ec(&ppuStack_340,&ppuStack_130);
              pppuVar12 = &ppuStack_340;
              func_0x00010bd4c304(&ppuStack_340,1);
            }
            FUN_10bd4ca6c(&ppuStack_130,lVar24);
            func_0x00010bd4cdb8(&ppuStack_1e0);
            pppuVar16 = (undefined ***)(ulong)(uVar19 - iVar2);
            pppuVar11 = &ppuStack_1e0;
            func_0x00010bd4c304(pppuVar11,pppuVar16);
          }
          else {
            func_0x00010bd4d07c(&ppuStack_130);
            func_0x00010bd4d278();
            pppuVar16 = (undefined ***)(ulong)(uVar19 - iVar2);
            func_0x00010bd4c304(&ppuStack_1e0,pppuVar16);
            pppuVar11 = &ppuStack_290;
            func_0x00010bd4cdb8();
            if (iVar31 == 0) {
              pppuVar12 = (undefined ***)0x0;
            }
            else {
              pppuVar12 = &ppuStack_340;
              pppuVar11 = &ppuStack_340;
              pppuVar16 = (undefined ***)0x2;
              func_0x00010bd4c2c4(pppuVar11,2);
            }
          }
        }
        else {
          func_0x00010bd4d07c(&ppuStack_130);
          func_0x00010bd4c304(&ppuStack_130,iVar2);
          func_0x00010bd4cdb8(&ppuStack_290);
          func_0x00010bd4c304(&ppuStack_290,iVar2);
          if (iVar31 == 0) {
            pppuVar12 = (undefined ***)0x0;
          }
          else {
            func_0x00010bd4cdb8(&ppuStack_340);
            pppuVar12 = &ppuStack_340;
            func_0x00010bd4c304(&ppuStack_340,iVar2 + 1);
          }
          func_0x00010bd4d278();
          pppuVar11 = &ppuStack_1e0;
          func_0x00010bd4c304(pppuVar11,pppuVar16);
        }
        if ((int)uVar18 < 0) {
          lVar24 = 0;
          pppuVar16 = &ppuStack_290;
          if (pppuVar12 != (undefined ***)0x0) {
            pppuVar16 = pppuVar12;
          }
          ppuVar33 = param_4[1];
          uVar18 = (uint)lVar21 & 1;
          while( true ) {
            func_0x00010bd4cf7c();
            pppuVar9 = &ppuStack_130;
            FUN_10bd4c744(pppuVar9,&ppuStack_290);
            pppuVar10 = &ppuStack_130;
            FUN_10bd4c7d4(pppuVar10,pppuVar16,&ppuStack_1e0);
            *(char *)((long)ppuVar33 + lVar24) = (char)pppuVar11 + '0';
            iVar31 = (int)pppuVar10;
            if ((int)pppuVar9 < (int)(uVar18 ^ 1) || (int)uVar18 <= iVar31) break;
            func_0x00010bd4cd28(&ppuStack_130);
            pppuVar11 = &ppuStack_290;
            func_0x00010bd4cd28();
            if (pppuVar12 != (undefined ***)0x0) {
              pppuVar11 = pppuVar12;
              func_0x00010bd4cd28();
            }
            lVar24 = lVar24 + 1;
          }
          if (((int)(uVar18 ^ 1) <= (int)pppuVar9) ||
             (((int)uVar18 <= iVar31 &&
              ((func_0x00010bd4ccf4(), 0 < iVar31 ||
               ((iVar31 == 0 && (((ulong)pppuVar11 & 1) != 0)))))))) {
            *(char *)((long)ppuVar33 + lVar24) = (char)pppuVar11 + '1';
          }
          pppuVar16 = (undefined ***)(lVar24 + 1U & 0xffffffff);
          func_0x00010bd4ce7c();
          param_3 = (undefined ***)(ulong)(uint)(iVar6 - (int)lVar24);
        }
        else {
          uVar29 = (long)(int)uVar18 - 1;
          uVar19 = iVar6 - (int)uVar29;
          param_3 = (undefined ***)(ulong)uVar19;
          if (uVar18 == 0) {
            pppuVar16 = (undefined ***)0x1;
            func_0x000107c283e0(param_4,1);
            iVar6 = (int)&ppuStack_1e0;
            func_0x00010bd4cd28();
            func_0x00010bd4ccf4();
            uVar3 = 0x30;
            if (0 < iVar6) {
              uVar3 = 0x31;
            }
            *(undefined1 *)param_4[1] = uVar3;
          }
          else {
            pppuVar12 = param_4;
            func_0x00010bd4d310();
            for (uVar13 = 0; cVar4 = (char)pppuVar12, (uVar29 & 0xffffffff) != uVar13;
                uVar13 = uVar13 + 1) {
              func_0x00010bd4cf7c();
              *(char *)((long)param_4[1] + uVar13) = cVar4 + '0';
              pppuVar12 = &ppuStack_130;
              func_0x00010bd4cd28();
            }
            func_0x00010bd4cf7c();
            iVar6 = (int)pppuVar12;
            iVar31 = iVar6;
            func_0x00010bd4ccf4();
            if ((0 < iVar31) || ((iVar31 == 0 && (((ulong)pppuVar12 & 1) != 0)))) {
              if (iVar6 == 9) {
                *(undefined1 *)((long)param_4[1] + uVar29) = 0x3a;
                uVar29 = (ulong)(uVar18 - 2);
                uVar25 = 0x30;
                while( true ) {
                  uVar18 = (int)uVar29 + 1;
                  ppuVar33 = param_4[1];
                  if (((int)uVar18 < 1) || (*(char *)((long)ppuVar33 + (ulong)uVar18) != ':'))
                  break;
                  *(char *)((long)ppuVar33 + (ulong)uVar18) = (char)uVar25;
                  func_0x00010bd4d4f4();
                  uVar29 = extraout_x8_00;
                  uVar25 = extraout_x9;
                }
                if (*(char *)ppuVar33 == ':') {
                  *(char *)ppuVar33 = '1';
                  param_3 = (undefined ***)(ulong)(uVar19 + 1);
                }
                goto LAB_10bd49a7c;
              }
              iVar6 = iVar6 + 1;
            }
            *(char *)((long)param_4[1] + uVar29) = (char)iVar6 + '0';
          }
        }
LAB_10bd49a7c:
        func_0x00010bd4ca50(&ppuStack_340);
        func_0x00010bd4ca50(&ppuStack_290);
        func_0x00010bd4ca50(&ppuStack_1e0);
        func_0x00010bd4ca50(&ppuStack_130);
      }
      else {
        pppuVar16 = (undefined ***)(ulong)uStack_368;
        param_3 = (undefined ***)(ulong)(uint)(iStack_360 + (int)uVar29);
        func_0x00010bd4ce7c();
      }
      uVar3 = uVar35 == 0x200000000;
      if ((!(bool)uVar3) && ((uVar17 >> 0x14 & 1) == 0)) {
        pppuVar16 = (undefined ***)param_4[2];
        iVar6 = (int)pppuVar16;
        iVar31 = (int)param_3;
        pppuVar12 = param_3;
        for (; (param_3 = (undefined ***)(ulong)(uint)(iVar31 + iVar6),
               pppuVar16 != (undefined ***)0x0 &&
               (uVar3 = *(char *)((long)param_4[1] + -1 + (long)pppuVar16) == '0',
               param_3 = pppuVar12, (bool)uVar3)); pppuVar16 = (undefined ***)((long)pppuVar16 + -1)
            ) {
          pppuVar12 = (undefined ***)(ulong)((int)pppuVar12 + 1);
        }
        func_0x00010bd4ce7c();
      }
    }
  }
  func_0x000107c3a9a8(extraout_x8);
  if ((bool)uVar3) {
    func_0x000107c3aaf4(param_3,unaff_x30);
    auVar39._8_8_ = unaff_x30;
    auVar39._0_8_ = param_3;
    return auVar39;
  }
LAB_10bd49b7c:
  ___stack_chk_fail();
  func_0x00010bd4ca50(&ppuStack_340);
  func_0x00010bd4ca50(&ppuStack_290);
  func_0x00010bd4ca50(&ppuStack_1e0);
  pppuVar12 = &ppuStack_130;
  func_0x00010bd4ca50();
  func_0x00010bd4cdc0();
  while( true ) {
    if (((ulong)pppuVar12 >> 0x34 & 1) != 0) break;
    pppuVar12 = (undefined ***)((long)pppuVar12 << 1);
    pppuVar16 = (undefined ***)((ulong)((int)pppuVar16 - 1) | (ulong)pppuVar16 & 0xffffffff00000000)
    ;
  }
  auVar40._0_8_ = (long)pppuVar12 << 0xb;
  auVar40._8_8_ = (ulong)((int)pppuVar16 - 0xb) | (ulong)pppuVar16 & 0xffffffff00000000;
  return auVar40;
LAB_10bd492d4:
  if (param_4[3] != (undefined **)0xffffffffffffffff) {
    ppuVar20 = (undefined **)((long)param_4[3] + 1);
LAB_10bd492e4:
    (*(code *)**param_4)(param_4,ppuVar20);
  }
  goto LAB_10bd49278;
}



/* Entry: 10bd49bc4; end: 10bd49c5b;  */

undefined1  [16] FUN_10bd49bc4(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  while( true ) {
    if ((param_1 >> 0x34 & 1) != 0) break;
    param_1 = param_1 << 1;
    param_2 = (ulong)((int)param_2 - 1) | param_2 & 0xffffffff00000000;
  }
  auVar1._0_8_ = param_1 << 0xb;
  auVar1._8_8_ = (ulong)((int)param_2 - 0xb) | param_2 & 0xffffffff00000000;
  return auVar1;
}



/* Entry: 10bd49c5c; end: 10bd49ce3;  */

int FUN_10bd49c5c(ulong param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = 4;
  while( true ) {
    if (param_2 == 0 && !CARRY8(param_2 - 1,(ulong)(9 < param_1))) {
      return iVar1 + -3;
    }
    if (CARRY8(~(param_2 + (param_1 >= 100)),(ulong)(param_1 < 100))) {
      return iVar1 + -2;
    }
    if (CARRY8(~(param_2 + (param_1 >= 1000)),(ulong)(param_1 < 1000))) {
      return iVar1 + -1;
    }
    if (param_2 >> 4 == 0 &&
        !CARRY8((param_2 >> 4) - 1,(ulong)(0x270 < (param_1 >> 4 | param_2 << 0x3c)))) break;
    ___udivti3();
    iVar1 = iVar1 + 4;
  }
  return iVar1;
}



/* Entry: 10bd49ce4; end: 10bd49d77;  */

undefined2 * FUN_10bd49ce4(long param_1,ulong param_2,long param_3,int param_4)

{
  undefined2 *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  
  puVar1 = (undefined2 *)(param_1 + param_4);
  while (puVar3 = puVar1 + -1, param_3 != 0 || CARRY8(param_3 - 1,(ulong)(99 < param_2))) {
    uVar2 = param_2;
    ___udivti3(param_2,param_3,100,0);
    *puVar3 = *(undefined2 *)(&UNK_10e60d9f4 + (param_2 + uVar2 * -100) * 2);
    param_2 = uVar2;
    puVar1 = puVar3;
  }
  if (CARRY8(~(param_3 + (ulong)(param_2 >= 10)),(ulong)(param_2 < 10))) {
    *(byte *)((long)puVar1 + -1) = (byte)param_2 | 0x30;
  }
  else {
    *puVar3 = *(undefined2 *)(&UNK_10e60d9f4 + param_2 * 2);
  }
  return (undefined2 *)(param_1 + param_4);
}



/* Entry: 10bd49d78; end: 10bd49e2b;  */

undefined8
FUN_10bd49d78(undefined1 *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  if (param_5 == 0) {
    func_0x000107c284c0(param_1);
  }
  else {
    func_0x000107c284c0(param_1 + 1);
    if (param_4 != 0) {
      if (param_4 == 1) {
        *param_1 = param_1[1];
      }
      else {
        _memmove(param_1,param_1 + 1,(long)param_4);
      }
    }
    param_1[param_4] = (char)param_5;
  }
  return param_2;
}



/* Entry: 10bd49e2c; end: 10bd49fa3;  */

int FUN_10bd49e2c(ulong param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = 0xf < param_1;
    param_1 = param_1 >> 4;
  } while (bVar1);
  return iVar2;
}



/* Entry: 10bd49fa4; end: 10bd4a09b;  */

undefined1 * FUN_10bd49fa4(long param_1,undefined1 *param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  uint uVar10;
  undefined1 auStack_42 [10];
  undefined8 uStack_38;
  undefined1 *puVar6;
  
  cVar2 = *(char *)(param_1 + 9);
  uVar8 = (int)cVar2 & 0x100000;
  uVar9 = (ulong)uVar8;
  bVar1 = *(byte *)(param_1 + 8);
  iVar4 = bVar1 - 0x41;
  uVar3 = iVar4 == 0xb;
  switch(iVar4) {
  case 0:
    uVar8 = uVar8 | 0x10000;
code_r0x00010bd49ffc:
    uVar9 = (ulong)(uVar8 | 3);
    break;
  case 1:
  case 2:
  case 3:
  case 7:
  case 8:
  case 9:
  case 10:
LAB_10bd4a090:
    func_0x00010bd4ce90();
    func_0x000107c3a9b4();
    uStack_38 = extraout_x8;
    func_0x000107c284c0(auStack_42);
    puVar5 = auStack_42;
    func_0x00010bd4d020();
    func_0x000107c3a9a8(uStack_38);
    if ((bool)uVar3) {
      return param_2;
    }
    ___stack_chk_fail();
    puVar6 = puVar5;
    func_0x000107c3aa44((ulong)param_2 ^ param_3 >> 0x3f);
    iVar4 = (int)puVar6;
    FUN_10bd49c5c();
    puVar6 = puVar5;
    func_0x000107c28394(puVar5,(long)iVar4 - (param_3 >> 0x3f));
    puVar7 = puVar6;
    func_0x000107c29928();
    if (puVar7 == (undefined1 *)0x0) {
      if (param_3 < 0) {
        func_0x00010bd4d0dc();
      }
      func_0x000107c3aa90(puVar6);
      FUN_10bd4a19c();
    }
    else {
      if (param_3 < 0) {
        *puVar7 = 0x2d;
      }
      func_0x000107c3aa90();
      FUN_10bd49ce4();
      puVar6 = puVar5;
    }
    return puVar6;
  case 4:
    uVar8 = 0x10000;
code_r0x00010bd4a024:
    uVar10 = 0x100000;
    if (*(int *)(param_1 + 4) == 0 && -1 < cVar2) {
      uVar10 = 0;
    }
    uVar9 = (ulong)(uVar8 & 0xffeffffe | uVar10 | 1);
    break;
  case 5:
    uVar8 = 0x10000;
code_r0x00010bd4a058:
    uVar10 = 0x100000;
    if (*(int *)(param_1 + 4) == 0 && -1 < cVar2) {
      uVar10 = 0;
    }
    uVar9 = (ulong)(uVar8 & 0xfffff | uVar10 | 2);
    break;
  case 6:
    uVar9 = (ulong)(uVar8 | 0x10000);
    break;
  case 0xb:
    uVar9 = (ulong)(uVar8 | 0x20000);
    break;
  default:
    iVar4 = bVar1 - 0x61;
    uVar3 = iVar4 == 6;
    switch(iVar4) {
    case 0:
      goto code_r0x00010bd49ffc;
    case 1:
    case 2:
    case 3:
      goto LAB_10bd4a090;
    case 4:
      goto code_r0x00010bd4a024;
    case 5:
      goto code_r0x00010bd4a058;
    case 6:
      break;
    default:
      if (bVar1 != 0) goto LAB_10bd4a090;
      uVar8 = 0x100000;
      if (*(int *)(param_1 + 4) < 1 && -1 < cVar2) {
        uVar8 = 0;
      }
      uVar9 = (ulong)uVar8;
    }
  }
  return (undefined1 *)(uVar9 << 0x20);
}



/* Entry: 10bd4a09c; end: 10bd4a0e3;  */

undefined1 * FUN_10bd4a09c(undefined8 param_1,undefined1 *param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_32 [10];
  undefined8 uStack_28;
  undefined1 *puVar3;
  
  func_0x000107c3a9b4();
  uStack_28 = extraout_x8;
  func_0x000107c284c0(auStack_32);
  puVar2 = auStack_32;
  func_0x00010bd4d020();
  func_0x000107c3a9a8(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  func_0x000107c3aa44((ulong)param_2 ^ param_3 >> 0x3f);
  iVar1 = (int)puVar3;
  FUN_10bd49c5c();
  puVar3 = puVar2;
  func_0x000107c28394(puVar2,(long)iVar1 - (param_3 >> 0x3f));
  puVar4 = puVar3;
  func_0x000107c29928();
  if (puVar4 == (undefined1 *)0x0) {
    if (param_3 < 0) {
      func_0x00010bd4d0dc();
    }
    func_0x000107c3aa90(puVar3);
    FUN_10bd4a19c();
  }
  else {
    if (param_3 < 0) {
      *puVar4 = 0x2d;
    }
    func_0x000107c3aa90();
    FUN_10bd49ce4();
    puVar3 = puVar2;
  }
  return puVar3;
}



/* Entry: 10bd4a0e4; end: 10bd4a19b;  */

undefined1 * FUN_10bd4a0e4(undefined1 *param_1,ulong param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar3;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  func_0x000107c3aa44(param_2 ^ param_3 >> 0x3f);
  iVar1 = (int)puVar2;
  FUN_10bd49c5c();
  puVar2 = param_1;
  func_0x000107c28394(param_1,(long)iVar1 - (param_3 >> 0x3f));
  puVar3 = puVar2;
  func_0x000107c29928();
  if (puVar3 == (undefined1 *)0x0) {
    if (param_3 < 0) {
      func_0x00010bd4d0dc();
    }
    func_0x000107c3aa90(puVar2);
    FUN_10bd4a19c();
  }
  else {
    if (param_3 < 0) {
      *puVar3 = 0x2d;
    }
    func_0x000107c3aa90();
    FUN_10bd49ce4();
    puVar2 = param_1;
  }
  return puVar2;
}



/* Entry: 10bd4a19c; end: 10bd4a1eb;  */

undefined1 *
FUN_10bd4a19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    uVar3 = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c3a9b4(uVar3,param_2,param_3,param_4);
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x4f);
    FUN_10bd49ce4(puVar4);
    param_4 = (undefined1 *)((long)register0x00000008 + -0x4f);
    func_0x00010bd4d020(param_4,puVar4);
    func_0x000107c3a9a8(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) {
      return puVar4;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x70) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar3;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10bd4a1ec;
    func_0x00010bd4d3fc();
    FUN_10bd49c5c();
    puVar4 = unaff_x20;
    func_0x000107c28394(unaff_x20,(long)(int)param_4);
    func_0x000107c3aa24();
    if (puVar4 != (undefined1 *)0x0) break;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined1 **)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    puVar1 = (undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x90);
    puVar2 = (undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = unaff_x23;
    param_2 = unaff_x21;
    param_3 = uVar3;
    unaff_x21 = *puVar1;
    unaff_x23 = *puVar2;
  }
  FUN_10bd49ce4();
  return unaff_x20;
}



/* Entry: 10bd4a1ec; end: 10bd4a267;  */

undefined1 * FUN_10bd4a1ec(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010bd4d3fc();
    FUN_10bd49c5c();
    puVar3 = unaff_x20;
    func_0x000107c28394(unaff_x20,(long)(int)param_1);
    func_0x000107c3aa24();
    if (puVar3 != (undefined1 *)0x0) {
      FUN_10bd49ce4();
      return unaff_x20;
    }
    unaff_x20 = *(undefined1 **)((long)register0x00000008 + -0x20);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar1 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    uVar2 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x000107c3a9b4(unaff_x23,unaff_x21,unaff_x19,param_1);
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x4f);
    FUN_10bd49ce4(puVar3);
    param_1 = (undefined1 *)((long)register0x00000008 + -0x4f);
    func_0x00010bd4d020(param_1,puVar3);
    func_0x000107c3a9a8(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10bd4a1ec;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = unaff_x23;
    unaff_x21 = uVar1;
    unaff_x23 = uVar2;
  }
  return puVar3;
}



/* Entry: 10bd4a268; end: 10bd4a28b;  */

undefined8 FUN_10bd4a268(undefined8 param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = 4;
  if (param_2 == 0) {
    lVar1 = 5;
  }
  pcVar2 = "true";
  if (param_2 == 0) {
    pcVar2 = "false";
  }
  func_0x0001003ac110(param_1,pcVar2,pcVar2 + lVar1);
  return param_1;
}



/* Entry: 10bd4a28c; end: 10bd4a2bf;  */

undefined8 FUN_10bd4a28c(undefined8 param_1)

{
  func_0x000107c28394(param_1,1);
  func_0x000107c283a0();
  return param_1;
}



/* Entry: 10bd4a2c0; end: 10bd4a5d7;  */

/* WARNING: Removing unreachable block (ram,0x00010bd4a59c) */
/* WARNING: Removing unreachable block (ram,0x00010bd4a5a8) */

void FUN_10bd4a2c0(float param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  
  if ((((uint)param_1 ^ 0xffffffff) & 0x7f800000) == 0) {
    uVar2 = 3;
    if ((int)param_1 < 0) {
      uVar2 = 4;
    }
    func_0x000107c28394(param_2,uVar2);
    func_0x00010bd4cd20();
    if ((int)param_1 < 0) {
      func_0x00010bd4cd68();
      func_0x00010bd4cd10();
    }
    pcVar3 = "inf";
    if (ABS(param_1) != INFINITY) {
      pcVar3 = "nan";
    }
    pcVar7 = pcVar3 + 3;
    func_0x000107c283a4(pcVar3,pcVar7,param_2);
    func_0x000107c28398(pcVar7,0,&UNK_10e60db2a);
  }
  else {
    FUN_10bd48740(ABS(param_1));
    lVar6 = param_2;
    func_0x000107c31734();
    iVar5 = (int)lVar6;
    iVar1 = iVar5 + (int)((ulong)param_2 >> 0x20);
    if (iVar1 - 0x11U < 0xffffffec) {
      func_0x00010bd4d23c();
      func_0x00010bd4d0ac();
      if ((int)param_1 < 0) {
        func_0x00010bd4cd68();
        func_0x00010bd4cf44();
      }
      func_0x00010bd4d13c();
      FUN_10bd4a5d8();
      func_0x000107c283a0();
      FUN_10bd4a624(iVar1 + -1,lVar6);
    }
    else {
      if (param_2 < 0) {
        if (iVar1 < 1) {
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = -iVar1;
          }
          func_0x00010bd4d0ac();
          func_0x00010bd4cce4();
          if ((int)param_1 < 0) {
            func_0x00010bd4cd68();
            func_0x00010bd4cf44();
          }
          func_0x00010bd4cf44();
          if (iVar4 != 0 || iVar5 != 0) {
            func_0x00010bd4cf44();
            FUN_10bd4a6e4(lVar6,iVar4,&UNK_10e60db30);
            FUN_10bd4a09c();
          }
        }
        else {
          func_0x00010bd4d0ac();
          func_0x00010bd4cce4();
          if ((int)param_1 < 0) {
            func_0x00010bd4cd68();
            func_0x00010bd4d4a8();
            func_0x00010bd4cf44();
          }
          func_0x00010bd4d13c();
          FUN_10bd4a5d8();
        }
      }
      else {
        func_0x00010bd4d0ac();
        func_0x00010bd4cce4();
        if ((int)param_1 < 0) {
          func_0x00010bd4cd68();
          func_0x00010bd4cf44();
        }
        func_0x00010bd4d13c();
        FUN_10bd4a09c();
        FUN_10bd4a6e4();
      }
      func_0x000107c28398();
    }
  }
  return;
}



/* Entry: 10bd4a5d8; end: 10bd4a623;  */

undefined1 * FUN_10bd4a5d8(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  uint uVar3;
  undefined1 auStack_33 [11];
  undefined8 uStack_28;
  
  func_0x000107c3a9b4();
  puVar1 = auStack_33;
  uStack_28 = extraout_x8;
  FUN_10bd49d78(puVar1);
  puVar2 = auStack_33;
  func_0x00010bd4d020(puVar2,puVar1);
  uVar3 = (uint)puVar2;
  func_0x000107c3a9a8(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if ((int)uVar3 < 0) {
      func_0x00010bd4cd60();
      uVar3 = -uVar3;
    }
    else {
      func_0x00010bd4d4a8(0x2b);
      func_0x00010bd4cd60();
    }
    if (99 < uVar3) {
      if (999 < uVar3) {
        func_0x00010bd4cd60();
      }
      func_0x00010bd4cd60();
    }
    func_0x00010bd4cd60();
    func_0x00010bd4cd60();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 10bd4a624; end: 10bd4a6e3;  */

undefined8 FUN_10bd4a624(ulong param_1,undefined8 param_2)

{
  undefined1 uStack_41;
  
  if ((int)param_1 < 0) {
    uStack_41 = 0x2d;
    func_0x00010bd4cd60(param_1,&uStack_41);
    param_1 = (ulong)(uint)-(int)param_1;
  }
  else {
    func_0x00010bd4d4a8(0x2b);
    func_0x00010bd4cd60();
  }
  if (99 < (uint)param_1) {
    if (999 < (uint)param_1) {
      func_0x00010bd4cd60();
    }
    func_0x00010bd4cd60();
  }
  func_0x00010bd4cd60();
  func_0x00010bd4cd60();
  return param_2;
}



/* Entry: 10bd4a6e4; end: 10bd4a71f;  */

undefined8 FUN_10bd4a6e4(undefined8 param_1,int param_2)

{
  while (0 < param_2) {
    func_0x000107c3aa44();
    func_0x000107c283a0();
    param_2 = param_2 + -1;
  }
  return param_1;
}



/* Entry: 10bd4a720; end: 10bd4a783;  */

void FUN_10bd4a720(double param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar3;
  char *pcVar4;
  uint extraout_w8;
  ulong extraout_x9;
  undefined8 unaff_x19;
  
  func_0x00010bd4d4cc();
  uVar1 = 0;
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar1 = extraout_w8;
  }
  if (((extraout_x9 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
    func_0x00010bd4d44c();
    func_0x000107c28394();
    func_0x00010bd4cd20();
    if ((uVar1 >> 8 & 0xff) != 0) {
      func_0x00010bd4cd68();
      func_0x00010bd4cd10();
    }
    bVar3 = (uVar1 & 0x10000) != 0;
    pcVar2 = "inf";
    if (bVar3) {
      pcVar2 = "INF";
    }
    pcVar4 = "nan";
    if (bVar3) {
      pcVar4 = "NAN";
    }
    if (param_3 == 0) {
      pcVar2 = pcVar4;
    }
    pcVar4 = pcVar2 + 3;
    func_0x000107c283a4(pcVar2,pcVar4,unaff_x19);
    func_0x000107c28398(pcVar4,0,&UNK_10e60db3e);
    return;
  }
  FUN_10bd48ae4(ABS(param_1));
  func_0x00010bd4d2f0();
  return;
}



/* Entry: 10bd4a784; end: 10bd4aabf;  */

void FUN_10bd4a784(undefined8 param_1,long param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  ulong extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  uint uVar16;
  int extraout_w11;
  ulong extraout_x12;
  uint uVar17;
  uint uVar18;
  
  lVar13 = param_2;
  func_0x00010733092c();
  uVar6 = (uint)(param_4 >> 0x20);
  uVar18 = uVar6 >> 8 & 0xff;
  uVar12 = (uint)lVar13;
  uVar2 = uVar12;
  if (uVar18 != 0) {
    uVar2 = uVar12 + 1;
  }
  uVar5 = *(uint *)(param_2 + 8);
  uVar1 = uVar5 + uVar12;
  uVar17 = (uint)param_4;
  if ((param_4 >> 0x20 & 0xff) == 0) {
    if (-4 < (int)uVar1) {
      uVar16 = uVar17;
      if ((int)uVar17 < 1) {
        uVar16 = 0x10;
      }
      if ((int)uVar1 <= (int)uVar16) goto LAB_10bd4a8c0;
    }
  }
  else if ((uVar6 & 0xff) != 1) {
LAB_10bd4a8c0:
    if ((int)uVar5 < 0) {
      if ((int)uVar1 < 1) {
        uVar2 = uVar17;
        if ((int)(uVar17 + uVar1) < 0 == SCARRY4(uVar17,uVar1)) {
          uVar2 = -uVar1;
        }
        if (0x7fffffff < uVar17 || uVar12 != 0) {
          uVar2 = -uVar1;
        }
        func_0x00010bd4cf58();
        func_0x00010bd4cbd4();
        func_0x000107c3a9d0();
        func_0x00010bd4d324();
        if (uVar18 != 0) {
          func_0x00010bd4cbec();
          func_0x00010bd4d030();
        }
        func_0x00010bd4d030();
        if ((uVar2 != 0 || uVar12 != 0) || (param_4 & 0x10000000000000) != 0) {
          func_0x00010bd4d030();
          func_0x00010bd4d378(lVar13);
          func_0x00010bd4d048();
          func_0x0001087a3d3c();
        }
      }
      else {
        func_0x00010bd4cf58();
        func_0x00010bd4cbd4();
        func_0x000107c3a9d0();
        func_0x00010bd4cf38();
        if (uVar18 != 0) {
          func_0x00010bd4cbec();
          func_0x00010bd4d030();
        }
        func_0x00010bd4d048(lVar13);
        func_0x00010bd4ab18();
        if (0 < (int)(uVar17 - uVar12 & (int)(uVar6 << 0xb) >> 0x1f)) {
          func_0x00010bd4d378();
        }
      }
    }
    else {
      bVar10 = (uVar6 & 0xff) != 2 && (uVar17 == uVar1 || (int)(uVar17 - uVar1) < 0);
      func_0x00010bd4d16c((ulong)uVar2 + (ulong)uVar5);
      uVar3 = extraout_x8;
      iVar7 = extraout_w9;
      if (!bVar10) {
        uVar3 = extraout_x12;
        iVar7 = extraout_w11;
      }
      uVar4 = extraout_x8;
      iVar8 = extraout_w9;
      if ((param_4 & 0x10000000000000) != 0) {
        uVar4 = uVar3;
        iVar8 = iVar7;
      }
      lVar14 = 0;
      if (uVar4 <= *param_3) {
        lVar14 = *param_3 - uVar4;
      }
      func_0x00010bd4cbd4();
      lVar14 = extraout_x8_00 + lVar14 * (ulong)*(byte *)((long)param_3 + 0xe);
      func_0x000107c3a9d0();
      func_0x00010bd4cf38();
      if (uVar18 != 0) {
        func_0x00010bd4cbec();
        func_0x00010bd4d030();
      }
      func_0x00010bd4d048(lVar13);
      func_0x0001087a3d3c();
      func_0x00010bd4d10c();
      if (((uVar6 >> 0x14 & 1) != 0) && (func_0x00010bd4cfe4(), 0 < iVar8)) {
        FUN_10bd4a6e4(lVar14,iVar8,&UNK_10e60db44);
      }
    }
    goto LAB_10bd4aab4;
  }
  cVar9 = '\0';
  cVar11 = '\0';
  uVar15 = 0x65;
  if ((param_4 & 0x1000000000000) != 0) {
    uVar15 = 0x45;
  }
  func_0x00010bd4ced0(uVar15);
  if (cVar9 != cVar11) {
    func_0x000107c3a9d0();
    func_0x00010bd4d0e4();
    func_0x00010bd4aac0();
    return;
  }
  func_0x00010bd4cd30();
  func_0x000107c3a9d0();
  func_0x00010bd4d330();
  func_0x00010bd4d0e4();
  func_0x00010bd4aac0();
LAB_10bd4aab4:
  func_0x000107c28398();
  return;
}



/* Entry: 10bd4aac0; end: 10bd4abc7;  */

int * FUN_10bd4aac0(int *param_1)

{
  long unaff_x19;
  
  func_0x000107c3aa64();
  if (*param_1 != 0) {
    func_0x00010bd4ce44();
  }
  func_0x00010bd4d218();
  func_0x00010bd4ab18();
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    func_0x00010bd4d10c();
  }
  func_0x00010bd4d4a8(*(undefined1 *)(unaff_x19 + 0x1c));
  func_0x00010bd4cfe4();
  func_0x00010bd4d36c();
  return param_1;
}



/* Entry: 10bd4abc8; end: 10bd4abcf;  */

/* WARNING: Possible PIC construction at 0x00010bd4ac2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd4ac30) */

long FUN_10bd4abc8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong extraout_x8;
  uint *unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  func_0x00010bd4d3fc(param_1,param_2,0);
  FUN_10bd49e2c();
  uVar1 = (param_1 & 0xffffffff) + 2;
  if (unaff_x19 != (uint *)0x0) {
    uVar3 = 0;
    if (uVar1 <= *unaff_x19) {
      uVar3 = *unaff_x19 - uVar1;
    }
    func_0x00010bd4cd30();
    uVar3 = uVar3 >> (extraout_x8 & 0x3f);
    func_0x000107c28394();
    bVar2 = *(byte *)((long)unaff_x19 + 0xe);
    if ((ulong)bVar2 == 1) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        func_0x0001003a9d9c();
        func_0x0001003a9d4c();
      }
    }
    else {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        unaff_x20 = (long)unaff_x19 + 10 + (ulong)bVar2;
        func_0x0001003a9d20((long)unaff_x19 + 10,unaff_x20);
      }
    }
    return unaff_x20;
  }
  func_0x000107c28394();
  func_0x00010bd4d0e4();
  func_0x00010bd4ac78();
  return unaff_x20;
}



/* Entry: 10bd4abd0; end: 10bd4ad2b;  */

/* WARNING: Possible PIC construction at 0x00010bd4ac2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd4ac30) */

long FUN_10bd4abd0(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong extraout_x8;
  uint *unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  func_0x00010bd4d3fc();
  FUN_10bd49e2c();
  uVar1 = (param_1 & 0xffffffff) + 2;
  if (unaff_x19 != (uint *)0x0) {
    uVar3 = 0;
    if (uVar1 <= *unaff_x19) {
      uVar3 = *unaff_x19 - uVar1;
    }
    func_0x00010bd4cd30();
    uVar3 = uVar3 >> (extraout_x8 & 0x3f);
    func_0x000107c28394();
    bVar2 = *(byte *)((long)unaff_x19 + 0xe);
    if ((ulong)bVar2 == 1) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        func_0x0001003a9d9c();
        func_0x0001003a9d4c();
      }
    }
    else {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        unaff_x20 = (long)unaff_x19 + 10 + (ulong)bVar2;
        func_0x0001003a9d20((long)unaff_x19 + 10,unaff_x20);
      }
    }
    return unaff_x20;
  }
  func_0x000107c28394();
  func_0x00010bd4d0e4();
  func_0x00010bd4ac78();
  return unaff_x20;
}



/* Entry: 10bd4ad2c; end: 10bd4add3;  */

void FUN_10bd4ad2c(byte *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  FUN_10bd48714(param_1,param_1);
  pbVar3 = param_1;
  FUN_10bd48714();
  if ((int)param_1 - 1U < 0xb) {
    return;
  }
  puVar2 = (undefined8 *)&UNK_10f3dbeea;
  FUN_10bd4ad2c();
  uVar1 = 0;
  pbVar4 = (byte *)*puVar2;
  do {
    pbVar5 = pbVar4 + 1;
    if (0xccccccc < uVar1) goto LAB_10bd4add0;
    uVar1 = ((uint)*pbVar4 + uVar1 * 10) - 0x30;
    *puVar2 = pbVar5;
  } while ((pbVar5 != pbVar3) && (pbVar4 = pbVar5, *pbVar5 - 0x30 < 10));
  if (-1 < (int)uVar1) {
    return;
  }
LAB_10bd4add0:
  func_0x00010bd4cec4();
  pbVar4 = pbVar3;
  func_0x000107c28384();
  pbVar5 = pbVar3;
  func_0x000107c3aa44();
  func_0x0001003ab834(pbVar3,pbVar4 + 8,pbVar5);
  if (*(int *)(pbVar3 + 0x10) == 0) {
    func_0x000107c3aad0();
  }
  return;
}



/* Entry: 10bd4add4; end: 10bd4ae03;  */

void FUN_10bd4add4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  func_0x000107c28384();
  lVar2 = param_2;
  func_0x000107c3aa44();
  func_0x0001003ab834(param_2,lVar1 + 8,lVar2);
  if (*(int *)(param_2 + 0x10) == 0) {
    func_0x000107c3aad0();
  }
  return;
}



/* Entry: 10bd4ae04; end: 10bd4ae47;  */

void FUN_10bd4ae04(long param_1,long param_2,undefined8 param_3)

{
  func_0x000106e53d50(*(undefined8 *)(param_2 + 8),param_3);
  func_0x0001003ab834(param_1,*(long *)(param_2 + 0x10) + 8,param_3);
  if (*(int *)(param_1 + 0x10) == 0) {
    func_0x000107c3aad0();
  }
  return;
}



/* Entry: 10bd4ae48; end: 10bd4af13;  */

void FUN_10bd4ae48(long param_1,long param_2,int param_3,long param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  int iStack_58;
  undefined1 uStack_54;
  undefined4 uStack_50;
  
  puVar2 = (undefined8 *)(param_2 + 8);
  iStack_58 = param_3;
  func_0x000106e54098(param_1);
  if (*(int *)(param_1 + 0x10) != 0) {
    return;
  }
  func_0x00010bd4d38c();
  uStack_68 = puVar2[1];
  uStack_70 = *puVar2;
  uStack_50 = 0;
  if (iStack_58 < 0) {
    uStack_54 = 0x2d;
    uStack_50 = 1;
    iStack_58 = -iStack_58;
  }
  else {
    bVar1 = *(byte *)(param_4 + 9) >> 4 & 7;
    if (1 < bVar1) {
      uStack_54 = 0x2b;
      if (bVar1 != 2) {
        uStack_54 = 0x20;
      }
      uStack_50 = 1;
    }
  }
  lStack_60 = param_4;
  FUN_10bd4af14((long)*(char *)(param_4 + 8),&uStack_70);
  *puVar2 = uStack_70;
  return;
}



/* Entry: 10bd4af14; end: 10bd4b43b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd4af14(char ******param_1,char ******param_2)

{
  char *******pppppppcVar1;
  char *******pppppppcVar2;
  bool bVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 in_ZR;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  char ******ppppppcVar12;
  char ******ppppppcVar13;
  char ******ppppppcVar14;
  char *****pppppcVar15;
  int extraout_w8;
  uint uVar16;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar17;
  char ******extraout_x8_01;
  char *extraout_x8_02;
  uint uVar18;
  int iVar19;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  int iVar20;
  char *******extraout_x11;
  char *******extraout_x11_00;
  char *******pppppppcVar21;
  long extraout_x12;
  long lVar22;
  char *pcVar23;
  char *pcVar24;
  int iVar25;
  char *****unaff_x20;
  char *****pppppcVar26;
  ulong unaff_x21;
  char *unaff_x22;
  char *pcVar27;
  char ******unaff_x23;
  char ******unaff_x24;
  char *******unaff_x25;
  char *******unaff_x26;
  undefined1 *unaff_x27;
  ulong unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar28;
  code *unaff_x30;
  undefined8 *in_stack_00000050;
  undefined1 auStack_2d1 [104];
  undefined1 uStack_269;
  char *******pppppppcStack_268;
  long lStack_260;
  char cStack_251;
  char ******ppppppcStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [503];
  char acStack_39 [2];
  undefined7 uStack_37;
  undefined8 uStack_10;
  
  func_0x000107c3aaf8();
  puVar28 = &stack0x00000050;
  puVar6 = auStack_2d1 + 0x61;
  ppppppcVar14 = param_2;
  in_stack_00000050 = unaff_x29;
  func_0x000107c3a9b4();
  iVar11 = (int)param_1;
  if (iVar11 == 0) {
LAB_10bd4af7c:
    func_0x000107c3a9a8(extraout_x8);
    if ((bool)in_ZR) {
      ppppppcVar14 = param_2;
      func_0x00010bd4d054();
      puVar6 = (undefined1 *)register0x00000008;
      param_1 = param_2;
      puVar28 = in_stack_00000050;
      goto code_r0x00010bd4b43c;
    }
LAB_10bd4b408:
    ___stack_chk_fail();
  }
  else {
    iVar19 = (int)unaff_x25;
    uStack_10 = extraout_x8;
    if (iVar11 == 0x42) {
LAB_10bd4b038:
      func_0x00010bd4d4c0();
      if (extraout_w8_00 < 0) {
        func_0x00010bd4cdc8();
      }
      unaff_x21 = 0;
      uVar17 = (ulong)*(uint *)(param_2 + 3);
      do {
        unaff_x21 = unaff_x21 + 1;
        uVar16 = (uint)uVar17;
        uVar10 = uVar16 == 1;
        uVar17 = uVar17 >> 1;
      } while (1 < uVar16);
      func_0x00010bd4d15c();
      ppppppcVar14 = (char ******)((long)acStack_39 + 1);
      func_0x00010bd4cbb0();
      func_0x00010bd4cb84(CONCAT71(uStack_37,acStack_39[1]));
      func_0x000107c3a9d0();
      unaff_x22 = (char *)((ulong)unaff_x26 >> ((ulong)unaff_x27 & 0x3f));
      func_0x00010bd4cc78();
      if (iVar19 != 0) {
        func_0x00010bd4cbc4();
      }
      func_0x00010bd4d4b4();
      func_0x00010bd4cc48();
      unaff_x24 = (char ******)(ulong)*(uint *)(param_2 + 3);
      ppppppcVar13 = ppppppcVar14;
      func_0x00010bd4d018();
      if (ppppppcVar13 == (char ******)0x0) {
        unaff_x25 = &ppppppcStack_250;
        ppppppcVar14 = unaff_x24;
        func_0x00010bd49eb4(&ppppppcStack_250,unaff_x24,unaff_x21);
        ppppppcVar13 = (char ******)&ppppppcStack_250;
        func_0x00010bd4cf24();
      }
      else {
        func_0x00010bd49eb4();
      }
      func_0x00010bd4cca0();
LAB_10bd4b284:
      *param_2 = (char *****)ppppppcVar13;
      param_2 = ppppppcVar13;
      unaff_x23 = ppppppcVar14;
LAB_10bd4b288:
      func_0x000107c3a9a8(uStack_10);
      param_1 = param_2;
      if ((bool)uVar10) {
        return;
      }
      goto LAB_10bd4b408;
    }
    cVar7 = SBORROW4(iVar11,0x4c);
    cVar9 = iVar11 + -0x4c < 0;
    uVar10 = iVar11 == 0x4c;
    if ((bool)uVar10) {
      FUN_10bd490e8(&pppppppcStack_268,param_2[1]);
      func_0x00010bd4d1c4();
      if (extraout_x8_00 == 0) {
        FUN_10bd4b43c();
      }
      else {
        iVar11 = (int)param_2[1];
        FUN_10bd49134();
        uStack_269 = (undefined1)iVar11;
        if (iVar11 == 0) {
          FUN_10bd4b43c();
        }
        else {
          uVar16 = *(uint *)(param_2 + 3);
          pcVar24 = (char *)(ulong)uVar16;
          func_0x000107c31734();
          func_0x00010bd4d3e8();
          pppppppcVar1 = pppppppcStack_268;
          if (cVar9 == cVar7) {
            pppppppcVar1 = extraout_x11;
          }
          lVar22 = lStack_260;
          if (-1 < (int)extraout_x9) {
            lVar22 = extraout_x9;
          }
          pppppppcVar2 = (char *******)((long)pppppppcVar1 + lVar22);
          iVar19 = (int)lVar22;
          iVar11 = (int)pcVar24;
          pcVar23 = pcVar24;
          for (; pppppppcVar21 = pppppppcVar2, pcVar27 = (char *)(ulong)(uint)(iVar11 + iVar19),
              lVar22 != 0; lVar22 = lVar22 + -1) {
            iVar25 = (int)*(char *)pppppppcVar1;
            iVar20 = (int)pcVar24;
            uVar18 = iVar20 - iVar25;
            pcVar24 = (char *)(ulong)uVar18;
            pppppppcVar21 = pppppppcVar1;
            pcVar27 = pcVar23;
            if ((uVar18 == 0 || iVar20 < iVar25) || ((iVar25 - 0x7fU & 0xff) < 0x82)) break;
            pcVar23 = (char *)(ulong)((int)pcVar23 + 1);
            pppppppcVar1 = (char *******)((long)pppppppcVar1 + 1);
          }
          if ((int)extraout_x9 < 0) {
            pppppppcVar1 = (char *******)((long)pppppppcStack_268 + lStack_260);
          }
          else {
            pppppppcVar1 = (char *******)((long)&pppppppcStack_268 + extraout_x9);
          }
          if (pppppppcVar21 == pppppppcVar1) {
            func_0x00010bd4d460();
            pcVar27 = (char *)(ulong)(uint)(extraout_w8_01 + (int)pcVar27);
          }
          func_0x000107c284c0((long)acStack_39 + 1,(char *)(ulong)uVar16);
          func_0x000107c3aa18();
          puStack_248 = auStack_230;
          uStack_238 = 500;
          uStack_240 = 0;
          ppppppcVar14 = (char ******)&ppppppcStack_250;
          ppppppcStack_250 = extraout_x8_01;
          func_0x00010bd4d310(*(undefined4 *)(param_2 + 4));
          unaff_x24 = (char ******)0x0;
          unaff_x25 = (char *******)&pppppppcStack_268;
          unaff_x26 = pppppppcStack_268;
          if (-1 < cStack_251) {
            unaff_x26 = unaff_x25;
          }
          func_0x00010bd4d3d4();
          unaff_x27 = auStack_2d1 + 0x68;
          unaff_x28 = (ulong)unaff_x20 & 0xffffffff;
          unaff_x20 = (char *****)((long)acStack_39 + 1);
          while (unaff_x22 = pcVar27, uVar10 = (int)unaff_x28 == 1, 1 < (int)unaff_x28) {
            uVar17 = unaff_x28 - 1;
            pcVar27 = unaff_x22 + -1;
            *unaff_x22 = acStack_39[unaff_x28];
            cVar9 = *(char *)unaff_x26;
            unaff_x28 = uVar17;
            if ('\0' < cVar9) {
              uVar16 = (int)unaff_x24 + 1;
              unaff_x24 = (char ******)(ulong)uVar16;
              iVar11 = 0;
              iVar19 = (int)cVar9;
              if (iVar19 != 0) {
                iVar11 = (int)uVar16 / iVar19;
              }
              cVar8 = SBORROW4(iVar19,0x7f);
              cVar7 = cVar9 + -0x7f < 0;
              if ((cVar9 != 0x7f) && (uVar16 == iVar11 * iVar19)) {
                func_0x00010bd4d410((char *)((long)unaff_x26 + 1));
                lVar22 = extraout_x12;
                pppppppcVar1 = extraout_x11_00;
                if (cVar7 == cVar8) {
                  lVar22 = extraout_x9_00;
                  pppppppcVar1 = unaff_x25;
                }
                if (extraout_x8_02 != (char *)((long)pppppppcVar1 + lVar22)) {
                  unaff_x26 = (char *******)((long)unaff_x26 + 1);
                  uVar16 = 0;
                }
                unaff_x24 = (char ******)(ulong)uVar16;
                ppppppcVar14 = (char ******)(auStack_2d1 + 0x68);
                func_0x0001087a36e4(ppppppcVar14,&pppppppcStack_268,pcVar27);
                pcVar27 = unaff_x22 + -2;
              }
            }
          }
          *unaff_x22 = acStack_39[1];
          if (*(int *)(param_2 + 4) != 0) {
            unaff_x22[-1] = '-';
          }
          func_0x00010bd4cd80();
          func_0x000107c28394();
          unaff_x21 = (ulong)unaff_x24 >> ((ulong)unaff_x25 & 0x3f);
          func_0x00010bd4d26c();
          func_0x00010bd4d09c();
          func_0x00010bd4d06c((long)unaff_x24 - unaff_x21);
          *param_2 = (char *****)ppppppcVar14;
          func_0x00010bd4d0cc();
          param_2 = ppppppcVar14;
        }
      }
      func_0x00010bd4d094();
      goto LAB_10bd4b288;
    }
    if (iVar11 == 0x58) {
LAB_10bd4afa4:
      func_0x00010bd4d4c0();
      if (extraout_w8 < 0) {
        func_0x00010bd4cdc8();
      }
      unaff_x21 = 0;
      uVar17 = (ulong)*(uint *)(param_2 + 3);
      do {
        unaff_x21 = unaff_x21 + 1;
        uVar16 = (uint)uVar17;
        uVar17 = uVar17 >> 4;
      } while (0xf < uVar16);
      func_0x00010bd4d15c();
      ppppppcVar12 = (char ******)&ppppppcStack_250;
      func_0x00010bd4cbb0();
      func_0x00010bd4cb84(ppppppcStack_250);
      func_0x000107c3a9d0();
      unaff_x22 = (char *)((ulong)unaff_x26 >> ((ulong)unaff_x27 & 0x3f));
      func_0x00010bd4cc78();
      if (iVar19 != 0) {
        func_0x00010bd4cbc4();
      }
      acStack_39[1] = '0';
      func_0x00010bd4cc48();
      unaff_x24 = (char ******)(ulong)*(uint *)(param_2 + 3);
      bVar5 = *(byte *)(param_2[2] + 1);
      unaff_x25 = (char *******)(ulong)bVar5;
      ppppppcVar13 = ppppppcVar12;
      func_0x00010bd4d018();
      uVar10 = bVar5 == 0x78;
      if (ppppppcVar13 == (char ******)0x0) {
        func_0x00010bd4d488();
        func_0x00010bd49e74();
        ppppppcVar13 = (char ******)((long)acStack_39 + 1);
        func_0x00010bd4cf24();
      }
      else {
        func_0x00010bd49e74();
        ppppppcVar14 = ppppppcVar12;
      }
      func_0x00010bd4cca0();
      goto LAB_10bd4b284;
    }
    if (iVar11 == 0x62) goto LAB_10bd4b038;
    uVar10 = iVar11 == 99;
    if ((bool)uVar10) {
      ppppppcVar14 = (char ******)*param_2;
      ppppppcStack_250 =
           (char ******)CONCAT71(ppppppcStack_250._1_7_,(char)*(undefined4 *)(param_2 + 3));
      func_0x000107c283a0(ppppppcVar14,&ppppppcStack_250);
      param_2 = ppppppcVar14;
      goto LAB_10bd4b288;
    }
    if (iVar11 == 0x78) goto LAB_10bd4afa4;
    if (iVar11 == 0x6f) {
      unaff_x21 = 0;
      uVar16 = *(uint *)(param_2 + 3);
      uVar17 = (ulong)uVar16;
      do {
        unaff_x21 = unaff_x21 + 1;
        uVar18 = (uint)uVar17;
        uVar10 = uVar18 == 7;
        uVar17 = uVar17 >> 3;
      } while (7 < uVar18);
      unaff_x20 = param_2[2];
      if ((*(char *)((long)unaff_x20 + 9) < '\0') &&
         (bVar3 = (int)unaff_x21 < *(int *)((long)unaff_x20 + 4), uVar10 = bVar3 || uVar16 == 0,
         !bVar3 && uVar16 != 0)) {
        uVar16 = *(uint *)(param_2 + 4);
        *(uint *)(param_2 + 4) = uVar16 + 1;
        *(undefined1 *)((long)param_2 + (ulong)uVar16 + 0x1c) = 0x30;
      }
      func_0x00010bd4d15c();
      ppppppcVar12 = (char ******)&ppppppcStack_250;
      func_0x00010bd4cbb0();
      func_0x00010bd4cb84(ppppppcStack_250);
      func_0x000107c3a9d0();
      unaff_x22 = (char *)((ulong)unaff_x26 >> ((ulong)unaff_x27 & 0x3f));
      func_0x00010bd4cc78();
      if (iVar19 != 0) {
        func_0x00010bd4cbc4();
      }
      acStack_39[1] = '0';
      func_0x00010bd4cc48();
      unaff_x24 = (char ******)(ulong)*(uint *)(param_2 + 3);
      ppppppcVar13 = ppppppcVar12;
      func_0x00010bd4d018();
      if (ppppppcVar13 == (char ******)0x0) {
        func_0x00010bd4d488();
        func_0x00010bd49ed8();
        ppppppcVar13 = (char ******)((long)acStack_39 + 1);
        func_0x00010bd4cf24();
      }
      else {
        func_0x00010bd49ed8();
        ppppppcVar14 = ppppppcVar12;
      }
      func_0x00010bd4cca0();
      goto LAB_10bd4b284;
    }
    in_ZR = 1;
    if (iVar11 == 100) goto LAB_10bd4af7c;
  }
  FUN_10bd4b4fc();
  ppppppcVar14 = param_1;
  func_0x00010bd4d094();
  unaff_x30 = FUN_10bd4b43c;
  func_0x00010bd4cdc0();
code_r0x00010bd4b43c:
  *(ulong *)(puVar6 + -0x60) = unaff_x28;
  *(undefined1 **)(puVar6 + -0x58) = unaff_x27;
  *(char ********)(puVar6 + -0x50) = unaff_x26;
  *(char ********)(puVar6 + -0x48) = unaff_x25;
  *(char *******)(puVar6 + -0x40) = unaff_x24;
  *(char *******)(puVar6 + -0x38) = unaff_x23;
  *(char **)(puVar6 + -0x30) = unaff_x22;
  *(ulong *)(puVar6 + -0x28) = unaff_x21;
  *(char ******)(puVar6 + -0x20) = unaff_x20;
  *(char *******)(puVar6 + -0x18) = param_1;
  *(undefined8 **)(puVar6 + -0x10) = puVar28;
  *(code **)(puVar6 + -8) = unaff_x30;
  func_0x000107c31734(*(undefined4 *)(ppppppcVar14 + 3));
  iVar11 = *(int *)(ppppppcVar14 + 4);
  pppppcVar26 = ppppppcVar14[2];
  pppppcVar15 = (char *****)(puVar6 + -0x78);
  func_0x00010bd4cbb0();
  uVar4 = *(undefined8 *)(puVar6 + -0x70);
  uVar17 = 0;
  if (*(ulong *)(puVar6 + -0x78) <= (ulong)*(uint *)pppppcVar26) {
    uVar17 = (ulong)*(uint *)pppppcVar26 - *(ulong *)(puVar6 + -0x78);
  }
  func_0x00010bd4cc04();
  pppppcVar26 = (char *****)(uVar17 >> (extraout_x9_01 & 0x3f));
  func_0x00010bd4d0bc();
  func_0x000107c28398();
  if (iVar11 != 0) {
    func_0x00010bd4cbc4();
    pppppcVar15 = pppppcVar26;
  }
  puVar6[-0x61] = 0x30;
  func_0x000107c2839c(pppppcVar15,uVar4,puVar6 + -0x61);
  FUN_10bd4a09c();
  func_0x000107c28398();
  *ppppppcVar14 = pppppcVar15;
  return;
}



/* Entry: 10bd4b43c; end: 10bd4b4fb;  */

void FUN_10bd4b43c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong extraout_x9;
  uint *puVar4;
  ulong *puVar5;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  func_0x000107c31734((int)param_1[3]);
  lVar2 = param_1[4];
  puVar4 = (uint *)param_1[2];
  puVar3 = &uStack_78;
  func_0x00010bd4cbb0();
  uVar1 = 0;
  if (uStack_78 <= *puVar4) {
    uVar1 = *puVar4 - uStack_78;
  }
  func_0x00010bd4cc04();
  puVar5 = (ulong *)(uVar1 >> (extraout_x9 & 0x3f));
  func_0x00010bd4d0bc();
  func_0x000107c28398();
  if ((int)lVar2 != 0) {
    func_0x00010bd4cbc4();
    puVar3 = puVar5;
  }
  uStack_61 = 0x30;
  func_0x000107c2839c(puVar3,uStack_70,&uStack_61);
  FUN_10bd4a09c();
  func_0x000107c28398();
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 10bd4b4fc; end: 10bd4b51f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd4b4fc(long *param_1,long *param_2)

{
  char *******pppppppcVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  char *******pppppppcVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 in_ZR;
  bool bVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  undefined1 uVar14;
  int iVar15;
  long *plVar16;
  undefined1 *puVar17;
  code *pcVar18;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  ulong uVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  char *extraout_x8_02;
  int iVar20;
  long extraout_x9;
  long extraout_x9_00;
  int iVar21;
  char *******extraout_x11;
  char *******extraout_x11_00;
  ulong uVar22;
  char *******pppppppcVar23;
  long extraout_x12;
  long lVar24;
  long *plVar25;
  long *plVar26;
  int iVar27;
  ulong unaff_x20;
  uint *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  char *******unaff_x26;
  char *******unaff_x27;
  undefined1 *unaff_x28;
  undefined8 *puVar28;
  undefined8 *in_stack_00000030;
  code *in_stack_00000038;
  undefined1 auStack_2f1 [104];
  undefined1 uStack_289;
  char *******pppppppcStack_288;
  long lStack_280;
  char cStack_271;
  long lStack_270;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [503];
  undefined1 auStack_59 [2];
  undefined7 uStack_57;
  undefined8 uStack_30;
  
  func_0x00010bd4cd78();
  func_0x00010bd4d254();
  func_0x00010bd4cc30();
  func_0x00010bd4cd04();
  func_0x00010bd4d038();
  pcVar18 = FUN_10bd4b520;
  func_0x000107c3aaf8();
  puVar28 = &stack0x00000030;
  puVar9 = auStack_2f1 + 0x61;
  in_stack_00000030 = (undefined8 *)&stack0xfffffffffffffff0;
  in_stack_00000038 = pcVar18;
  func_0x000107c3a9b4();
  iVar15 = (int)param_1;
  if (iVar15 == 0) {
LAB_10bd4b58c:
    func_0x000107c3a9a8(extraout_x8);
    puVar8 = in_stack_00000030;
    if ((bool)in_ZR) {
      plVar16 = param_2;
      pcVar18 = in_stack_00000038;
      func_0x00010bd4d054();
      puVar9 = &stack0xffffffffffffffe0;
      param_1 = param_2;
      puVar28 = puVar8;
      goto code_r0x00010bd4bacc;
    }
LAB_10bd4ba9c:
    ___stack_chk_fail();
  }
  else {
    unaff_x23 = (long *)((long)auStack_59 + 1);
    iVar20 = (int)unaff_x25;
    uStack_30 = extraout_x8;
    if (iVar15 == 0x42) {
LAB_10bd4b654:
      func_0x00010bd4d4c0();
      if (extraout_w8_00 < 0) {
        func_0x00010bd4cdf8();
      }
      unaff_x21 = (uint *)0x0;
      uVar19 = param_2[5];
      uVar22 = param_2[4];
      do {
        uVar2 = uVar19 << 0x3f;
        bVar10 = uVar22 < 2;
        uVar6 = uVar19 + !bVar10;
        uVar14 = uVar6 == 0;
        uVar19 = uVar19 >> 1;
        unaff_x21 = (uint *)((long)unaff_x21 + 1);
        uVar22 = uVar22 >> 1 | uVar2;
      } while (!CARRY8(~uVar6,(ulong)bVar10));
      func_0x00010bd4cf68();
      func_0x00010bd4cbb0();
      func_0x00010bd4cb84(CONCAT71(uStack_57,auStack_59[1]));
      func_0x000107c3a9d0();
      unaff_x22 = (long *)((ulong)unaff_x26 >> ((ulong)unaff_x27 & 0x3f));
      func_0x00010bd4cc78();
      if (iVar20 != 0) {
        func_0x00010bd4cbc4();
      }
      func_0x00010bd4d4b4();
      func_0x00010bd4cc48();
      unaff_x25 = param_2[4];
      unaff_x24 = param_2[5];
      plVar16 = param_1;
      func_0x00010bd4d018();
      if (plVar16 == (long *)0x0) {
        func_0x00010bd4cfd0();
        func_0x00010bd49f44();
        plVar16 = &lStack_270;
        param_1 = (long *)((long)unaff_x27 + (long)unaff_x21);
        func_0x00010bd4cf30();
      }
      else {
        func_0x00010bd49f44();
      }
      func_0x00010bd4cca0();
LAB_10bd4b914:
      *param_2 = (long)plVar16;
      param_2 = plVar16;
      unaff_x23 = param_1;
LAB_10bd4b918:
      func_0x000107c3a9a8(uStack_30);
      param_1 = param_2;
      if ((bool)uVar14) {
        return;
      }
      goto LAB_10bd4ba9c;
    }
    cVar11 = SBORROW4(iVar15,0x4c);
    cVar13 = iVar15 + -0x4c < 0;
    uVar14 = iVar15 == 0x4c;
    if ((bool)uVar14) {
      FUN_10bd490e8(&pppppppcStack_288,param_2[1]);
      func_0x00010bd4d1c4();
      if (extraout_x8_00 == 0) {
        FUN_10bd4bacc();
      }
      else {
        iVar15 = (int)param_2[1];
        FUN_10bd49134();
        uStack_289 = (undefined1)iVar15;
        if (iVar15 == 0) {
          FUN_10bd4bacc();
        }
        else {
          plVar16 = (long *)param_2[4];
          lVar3 = param_2[5];
          plVar26 = plVar16;
          FUN_10bd49c5c(plVar16,lVar3);
          func_0x00010bd4d3e8();
          pppppppcVar7 = pppppppcStack_288;
          if (cVar13 == cVar11) {
            pppppppcVar7 = extraout_x11;
          }
          lVar24 = lStack_280;
          if (-1 < (int)extraout_x9) {
            lVar24 = extraout_x9;
          }
          pppppppcVar1 = (char *******)((long)pppppppcVar7 + lVar24);
          iVar20 = (int)lVar24;
          iVar15 = (int)plVar26;
          plVar25 = plVar26;
          for (; pppppppcVar23 = pppppppcVar1, unaff_x23 = (long *)(ulong)(uint)(iVar15 + iVar20),
              lVar24 != 0; lVar24 = lVar24 + -1) {
            iVar27 = (int)*(char *)pppppppcVar7;
            iVar21 = (int)plVar26;
            uVar4 = iVar21 - iVar27;
            plVar26 = (long *)(ulong)uVar4;
            pppppppcVar23 = pppppppcVar7;
            unaff_x23 = plVar25;
            if ((uVar4 == 0 || iVar21 < iVar27) || ((iVar27 - 0x7fU & 0xff) < 0x82)) break;
            plVar25 = (long *)(ulong)((int)plVar25 + 1);
            pppppppcVar7 = (char *******)((long)pppppppcVar7 + 1);
          }
          if ((int)extraout_x9 < 0) {
            pppppppcVar7 = (char *******)((long)pppppppcStack_288 + lStack_280);
          }
          else {
            pppppppcVar7 = (char *******)((long)&pppppppcStack_288 + extraout_x9);
          }
          if (pppppppcVar23 == pppppppcVar7) {
            func_0x00010bd4d460();
            unaff_x23 = (long *)(ulong)(uint)(extraout_w8_01 + (int)unaff_x23);
          }
          unaff_x24 = (long)auStack_59 + 1;
          FUN_10bd49ce4((long)auStack_59 + 1,plVar16,lVar3);
          func_0x000107c3aa18();
          puStack_268 = auStack_250;
          uStack_258 = 500;
          uStack_260 = 0;
          plVar26 = &lStack_270;
          lStack_270 = extraout_x8_01;
          func_0x00010bd4d310(*(undefined4 *)((long)param_2 + 0x34));
          unaff_x25 = 0;
          unaff_x26 = (char *******)&pppppppcStack_288;
          unaff_x27 = pppppppcStack_288;
          if (-1 < cStack_271) {
            unaff_x27 = unaff_x26;
          }
          func_0x00010bd4d3d4();
          unaff_x28 = auStack_2f1 + 0x68;
          unaff_x20 = unaff_x20 & 0xffffffff;
          while (unaff_x22 = plVar16, uVar14 = (int)unaff_x20 == 1, 1 < (int)unaff_x20) {
            uVar19 = unaff_x20 - 1;
            plVar16 = (long *)((long)unaff_x22 + -1);
            *(undefined1 *)unaff_x22 = auStack_59[unaff_x20];
            cVar13 = *(char *)unaff_x27;
            unaff_x20 = uVar19;
            if ('\0' < cVar13) {
              uVar4 = (int)unaff_x25 + 1;
              unaff_x25 = (ulong)uVar4;
              iVar15 = 0;
              iVar20 = (int)cVar13;
              if (iVar20 != 0) {
                iVar15 = (int)uVar4 / iVar20;
              }
              cVar12 = SBORROW4(iVar20,0x7f);
              cVar11 = cVar13 + -0x7f < 0;
              if ((cVar13 != 0x7f) && (uVar4 == iVar15 * iVar20)) {
                func_0x00010bd4d410((char *)((long)unaff_x27 + 1));
                lVar3 = extraout_x12;
                pppppppcVar7 = extraout_x11_00;
                if (cVar11 == cVar12) {
                  lVar3 = extraout_x9_00;
                  pppppppcVar7 = unaff_x26;
                }
                if (extraout_x8_02 != (char *)((long)pppppppcVar7 + lVar3)) {
                  unaff_x27 = (char *******)((long)unaff_x27 + 1);
                  uVar4 = 0;
                }
                unaff_x25 = (ulong)uVar4;
                plVar26 = (long *)(auStack_2f1 + 0x68);
                func_0x0001087a36e4(plVar26,&pppppppcStack_288,plVar16);
                plVar16 = (long *)((long)unaff_x22 + -2);
              }
            }
          }
          *(undefined1 *)unaff_x22 = auStack_59[1];
          if (*(int *)((long)param_2 + 0x34) != 0) {
            *(undefined1 *)((long)unaff_x22 + -1) = 0x2d;
          }
          func_0x00010bd4cd80();
          func_0x000107c28394();
          unaff_x21 = (uint *)(unaff_x24 >> (unaff_x25 & 0x3f));
          func_0x00010bd4d26c();
          func_0x00010bd4d09c();
          func_0x00010bd4d06c(unaff_x24 - (long)unaff_x21);
          *param_2 = (long)plVar26;
          func_0x00010bd4d0cc();
          param_2 = plVar26;
        }
      }
      func_0x00010bd4d094();
      goto LAB_10bd4b918;
    }
    if (iVar15 == 0x58) {
LAB_10bd4b5b4:
      func_0x00010bd4d4c0();
      if (extraout_w8 < 0) {
        func_0x00010bd4cdf8();
      }
      unaff_x21 = (uint *)0x0;
      uVar19 = param_2[5];
      uVar22 = param_2[4];
      do {
        uVar2 = uVar19 << 0x3c;
        bVar10 = uVar22 < 0x10;
        uVar6 = uVar19 + !bVar10;
        uVar19 = uVar19 >> 4;
        unaff_x21 = (uint *)((long)unaff_x21 + 1);
        uVar22 = uVar22 >> 4 | uVar2;
      } while (!CARRY8(~uVar6,(ulong)bVar10));
      func_0x00010bd4cf68();
      func_0x00010bd4cbb0();
      func_0x00010bd4cb84(CONCAT71(uStack_57,auStack_59[1]));
      func_0x000107c3a9d0();
      unaff_x22 = (long *)((ulong)unaff_x26 >> ((ulong)unaff_x27 & 0x3f));
      func_0x00010bd4cc78();
      if (iVar20 != 0) {
        func_0x00010bd4cbc4();
      }
      func_0x00010bd4d4b4();
      func_0x00010bd4cc48();
      unaff_x25 = param_2[4];
      unaff_x24 = param_2[5];
      bVar5 = *(byte *)(param_2[2] + 8);
      unaff_x27 = (char *******)(ulong)bVar5;
      plVar16 = param_1;
      func_0x00010bd4d018();
      uVar14 = bVar5 == 0x78;
      if (plVar16 == (long *)0x0) {
        func_0x00010bd4cfd0();
        func_0x00010bd49efc();
        plVar16 = &lStack_270;
        param_1 = (long *)((long)unaff_x27 + (long)unaff_x21);
        func_0x00010bd4cf30();
      }
      else {
        func_0x00010bd49efc();
      }
      func_0x00010bd4cca0();
      goto LAB_10bd4b914;
    }
    if (iVar15 == 0x62) goto LAB_10bd4b654;
    uVar14 = iVar15 == 99;
    if ((bool)uVar14) {
      plVar16 = (long *)*param_2;
      lStack_270 = CONCAT71(lStack_270._1_7_,(char)param_2[4]);
      func_0x000107c283a0(plVar16,&lStack_270);
      param_2 = plVar16;
      goto LAB_10bd4b918;
    }
    if (iVar15 == 0x78) goto LAB_10bd4b5b4;
    if (iVar15 == 0x6f) {
      unaff_x20 = 0;
      uVar19 = param_2[4];
      uVar22 = param_2[5];
      do {
        uVar2 = uVar22 << 0x3d;
        bVar10 = uVar19 < 8;
        uVar6 = uVar22 + !bVar10;
        uVar22 = uVar22 >> 3;
        unaff_x20 = unaff_x20 + 1;
        uVar19 = uVar19 >> 3 | uVar2;
      } while (!CARRY8(~uVar6,(ulong)bVar10));
      unaff_x21 = (uint *)param_2[2];
      if ((*(char *)((long)unaff_x21 + 9) < '\0') &&
         ((int)unaff_x21[1] <= (int)unaff_x20 && (param_2[4] != 0 || param_2[5] != 0))) {
        uVar4 = *(uint *)((long)param_2 + 0x34);
        *(uint *)((long)param_2 + 0x34) = uVar4 + 1;
        *(undefined1 *)((long)param_2 + (ulong)uVar4 + 0x30) = 0x30;
      }
      func_0x00010bd4cf68();
      func_0x0001087a3624();
      pppppppcVar7 = (char *******)((ulong)*unaff_x21 - CONCAT71(uStack_57,auStack_59[1]));
      uVar14 = pppppppcVar7 == (char *******)0x0;
      unaff_x26 = (char *******)0x0;
      if (CONCAT71(uStack_57,auStack_59[1]) <= (ulong)*unaff_x21) {
        unaff_x26 = pppppppcVar7;
      }
      unaff_x27 = (char *******)
                  (long)(char)(&UNK_10e60dad6)[(ulong)*(byte *)((long)unaff_x21 + 9) & 0xf];
      func_0x000107c3a9d0();
      unaff_x22 = (long *)((ulong)unaff_x26 >> ((ulong)unaff_x27 & 0x3f));
      func_0x00010bd4cd20();
      if (iVar20 != 0) {
        func_0x00010bd4cbc4();
      }
      func_0x00010bd4d4b4();
      func_0x00010bd4cc48();
      unaff_x25 = param_2[4];
      unaff_x24 = param_2[5];
      plVar16 = param_1;
      func_0x000107c29928();
      if (plVar16 == (long *)0x0) {
        func_0x00010bd4cfd0();
        func_0x00010bd49f74();
        param_1 = (long *)((long)unaff_x27 + unaff_x20);
        func_0x00010bd4cf30(&lStack_270);
      }
      else {
        func_0x00010bd49f74();
      }
      plVar16 = param_1;
      func_0x000107c28398(param_1,(long)unaff_x26 - (long)unaff_x22,(long)unaff_x21 + 10);
      goto LAB_10bd4b914;
    }
    in_ZR = 1;
    if (iVar15 == 100) goto LAB_10bd4b58c;
  }
  FUN_10bd4bb7c();
  plVar16 = param_1;
  func_0x00010bd4d094();
  pcVar18 = FUN_10bd4bacc;
  func_0x00010bd4cdc0();
code_r0x00010bd4bacc:
  *(undefined1 **)(puVar9 + -0x60) = unaff_x28;
  *(char ********)(puVar9 + -0x58) = unaff_x27;
  *(char ********)(puVar9 + -0x50) = unaff_x26;
  *(ulong *)(puVar9 + -0x48) = unaff_x25;
  *(ulong *)(puVar9 + -0x40) = unaff_x24;
  *(long **)(puVar9 + -0x38) = unaff_x23;
  *(long **)(puVar9 + -0x30) = unaff_x22;
  *(uint **)(puVar9 + -0x28) = unaff_x21;
  *(ulong *)(puVar9 + -0x20) = unaff_x20;
  *(long **)(puVar9 + -0x18) = param_1;
  *(undefined8 **)(puVar9 + -0x10) = puVar28;
  *(code **)(puVar9 + -8) = pcVar18;
  FUN_10bd49c5c(plVar16[4],plVar16[5]);
  iVar15 = *(int *)((long)plVar16 + 0x34);
  puVar17 = puVar9 + -0x78;
  func_0x00010bd4cbb0();
  func_0x00010bd4cc04();
  func_0x00010bd4d0bc();
  func_0x00010bd4cc78();
  if (iVar15 != 0) {
    func_0x00010bd4cbc4();
  }
  puVar9[-0x61] = 0x30;
  func_0x00010bd4cc48();
  FUN_10bd4a19c();
  func_0x000107c28398();
  *plVar16 = (long)puVar17;
  return;
}



/* Entry: 10bd4b520; end: 10bd4bacb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd4b520(long *param_1,long *param_2)

{
  char *******pppppppcVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  char *******pppppppcVar7;
  undefined1 *puVar8;
  undefined1 in_ZR;
  bool bVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  undefined1 uVar13;
  int iVar14;
  long *plVar15;
  undefined1 *puVar16;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  ulong uVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  char *extraout_x8_02;
  int iVar18;
  long extraout_x9;
  long extraout_x9_00;
  int iVar19;
  char *******extraout_x11;
  char *******extraout_x11_00;
  ulong uVar20;
  char *******pppppppcVar21;
  long extraout_x12;
  long lVar22;
  long *plVar23;
  long *plVar24;
  int iVar25;
  ulong unaff_x20;
  uint *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  char *******unaff_x26;
  char *******unaff_x27;
  undefined1 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar26;
  code *unaff_x30;
  undefined8 *in_stack_00000050;
  undefined1 auStack_2d1 [104];
  undefined1 uStack_269;
  char *******pppppppcStack_268;
  long lStack_260;
  char cStack_251;
  long lStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [503];
  undefined1 auStack_39 [2];
  undefined7 uStack_37;
  undefined8 uStack_10;
  
  func_0x000107c3aaf8();
  puVar26 = &stack0x00000050;
  puVar8 = auStack_2d1 + 0x61;
  in_stack_00000050 = unaff_x29;
  func_0x000107c3a9b4();
  iVar14 = (int)param_1;
  if (iVar14 == 0) {
LAB_10bd4b58c:
    func_0x000107c3a9a8(extraout_x8);
    if ((bool)in_ZR) {
      plVar15 = param_2;
      func_0x00010bd4d054();
      puVar8 = (undefined1 *)register0x00000008;
      param_1 = param_2;
      puVar26 = in_stack_00000050;
      goto code_r0x00010bd4bacc;
    }
LAB_10bd4ba9c:
    ___stack_chk_fail();
  }
  else {
    unaff_x23 = (long *)((long)auStack_39 + 1);
    iVar18 = (int)unaff_x25;
    uStack_10 = extraout_x8;
    if (iVar14 == 0x42) {
LAB_10bd4b654:
      func_0x00010bd4d4c0();
      if (extraout_w8_00 < 0) {
        func_0x00010bd4cdf8();
      }
      unaff_x21 = (uint *)0x0;
      uVar17 = param_2[5];
      uVar20 = param_2[4];
      do {
        uVar2 = uVar17 << 0x3f;
        bVar9 = uVar20 < 2;
        uVar6 = uVar17 + !bVar9;
        uVar13 = uVar6 == 0;
        uVar17 = uVar17 >> 1;
        unaff_x21 = (uint *)((long)unaff_x21 + 1);
        uVar20 = uVar20 >> 1 | uVar2;
      } while (!CARRY8(~uVar6,(ulong)bVar9));
      func_0x00010bd4cf68();
      func_0x00010bd4cbb0();
      func_0x00010bd4cb84(CONCAT71(uStack_37,auStack_39[1]));
      func_0x000107c3a9d0();
      unaff_x22 = (long *)((ulong)unaff_x26 >> ((ulong)unaff_x27 & 0x3f));
      func_0x00010bd4cc78();
      if (iVar18 != 0) {
        func_0x00010bd4cbc4();
      }
      func_0x00010bd4d4b4();
      func_0x00010bd4cc48();
      unaff_x25 = param_2[4];
      unaff_x24 = param_2[5];
      plVar15 = param_1;
      func_0x00010bd4d018();
      if (plVar15 == (long *)0x0) {
        func_0x00010bd4cfd0();
        func_0x00010bd49f44();
        plVar15 = &lStack_250;
        param_1 = (long *)((long)unaff_x27 + (long)unaff_x21);
        func_0x00010bd4cf30();
      }
      else {
        func_0x00010bd49f44();
      }
      func_0x00010bd4cca0();
LAB_10bd4b914:
      *param_2 = (long)plVar15;
      param_2 = plVar15;
      unaff_x23 = param_1;
LAB_10bd4b918:
      func_0x000107c3a9a8(uStack_10);
      param_1 = param_2;
      if ((bool)uVar13) {
        return;
      }
      goto LAB_10bd4ba9c;
    }
    cVar10 = SBORROW4(iVar14,0x4c);
    cVar12 = iVar14 + -0x4c < 0;
    uVar13 = iVar14 == 0x4c;
    if ((bool)uVar13) {
      FUN_10bd490e8(&pppppppcStack_268,param_2[1]);
      func_0x00010bd4d1c4();
      if (extraout_x8_00 == 0) {
        FUN_10bd4bacc();
      }
      else {
        iVar14 = (int)param_2[1];
        FUN_10bd49134();
        uStack_269 = (undefined1)iVar14;
        if (iVar14 == 0) {
          FUN_10bd4bacc();
        }
        else {
          plVar15 = (long *)param_2[4];
          lVar3 = param_2[5];
          plVar24 = plVar15;
          FUN_10bd49c5c(plVar15,lVar3);
          func_0x00010bd4d3e8();
          pppppppcVar7 = pppppppcStack_268;
          if (cVar12 == cVar10) {
            pppppppcVar7 = extraout_x11;
          }
          lVar22 = lStack_260;
          if (-1 < (int)extraout_x9) {
            lVar22 = extraout_x9;
          }
          pppppppcVar1 = (char *******)((long)pppppppcVar7 + lVar22);
          iVar18 = (int)lVar22;
          iVar14 = (int)plVar24;
          plVar23 = plVar24;
          for (; pppppppcVar21 = pppppppcVar1, unaff_x23 = (long *)(ulong)(uint)(iVar14 + iVar18),
              lVar22 != 0; lVar22 = lVar22 + -1) {
            iVar25 = (int)*(char *)pppppppcVar7;
            iVar19 = (int)plVar24;
            uVar4 = iVar19 - iVar25;
            plVar24 = (long *)(ulong)uVar4;
            pppppppcVar21 = pppppppcVar7;
            unaff_x23 = plVar23;
            if ((uVar4 == 0 || iVar19 < iVar25) || ((iVar25 - 0x7fU & 0xff) < 0x82)) break;
            plVar23 = (long *)(ulong)((int)plVar23 + 1);
            pppppppcVar7 = (char *******)((long)pppppppcVar7 + 1);
          }
          if ((int)extraout_x9 < 0) {
            pppppppcVar7 = (char *******)((long)pppppppcStack_268 + lStack_260);
          }
          else {
            pppppppcVar7 = (char *******)((long)&pppppppcStack_268 + extraout_x9);
          }
          if (pppppppcVar21 == pppppppcVar7) {
            func_0x00010bd4d460();
            unaff_x23 = (long *)(ulong)(uint)(extraout_w8_01 + (int)unaff_x23);
          }
          unaff_x24 = (long)auStack_39 + 1;
          FUN_10bd49ce4((long)auStack_39 + 1,plVar15,lVar3);
          func_0x000107c3aa18();
          puStack_248 = auStack_230;
          uStack_238 = 500;
          uStack_240 = 0;
          plVar24 = &lStack_250;
          lStack_250 = extraout_x8_01;
          func_0x00010bd4d310(*(undefined4 *)((long)param_2 + 0x34));
          unaff_x25 = 0;
          unaff_x26 = (char *******)&pppppppcStack_268;
          unaff_x27 = pppppppcStack_268;
          if (-1 < cStack_251) {
            unaff_x27 = unaff_x26;
          }
          func_0x00010bd4d3d4();
          unaff_x28 = auStack_2d1 + 0x68;
          unaff_x20 = unaff_x20 & 0xffffffff;
          while (unaff_x22 = plVar15, uVar13 = (int)unaff_x20 == 1, 1 < (int)unaff_x20) {
            uVar17 = unaff_x20 - 1;
            plVar15 = (long *)((long)unaff_x22 + -1);
            *(undefined1 *)unaff_x22 = auStack_39[unaff_x20];
            cVar12 = *(char *)unaff_x27;
            unaff_x20 = uVar17;
            if ('\0' < cVar12) {
              uVar4 = (int)unaff_x25 + 1;
              unaff_x25 = (ulong)uVar4;
              iVar14 = 0;
              iVar18 = (int)cVar12;
              if (iVar18 != 0) {
                iVar14 = (int)uVar4 / iVar18;
              }
              cVar11 = SBORROW4(iVar18,0x7f);
              cVar10 = cVar12 + -0x7f < 0;
              if ((cVar12 != 0x7f) && (uVar4 == iVar14 * iVar18)) {
                func_0x00010bd4d410((char *)((long)unaff_x27 + 1));
                lVar3 = extraout_x12;
                pppppppcVar7 = extraout_x11_00;
                if (cVar10 == cVar11) {
                  lVar3 = extraout_x9_00;
                  pppppppcVar7 = unaff_x26;
                }
                if (extraout_x8_02 != (char *)((long)pppppppcVar7 + lVar3)) {
                  unaff_x27 = (char *******)((long)unaff_x27 + 1);
                  uVar4 = 0;
                }
                unaff_x25 = (ulong)uVar4;
                plVar24 = (long *)(auStack_2d1 + 0x68);
                func_0x0001087a36e4(plVar24,&pppppppcStack_268,plVar15);
                plVar15 = (long *)((long)unaff_x22 + -2);
              }
            }
          }
          *(undefined1 *)unaff_x22 = auStack_39[1];
          if (*(int *)((long)param_2 + 0x34) != 0) {
            *(undefined1 *)((long)unaff_x22 + -1) = 0x2d;
          }
          func_0x00010bd4cd80();
          func_0x000107c28394();
          unaff_x21 = (uint *)(unaff_x24 >> (unaff_x25 & 0x3f));
          func_0x00010bd4d26c();
          func_0x00010bd4d09c();
          func_0x00010bd4d06c(unaff_x24 - (long)unaff_x21);
          *param_2 = (long)plVar24;
          func_0x00010bd4d0cc();
          param_2 = plVar24;
        }
      }
      func_0x00010bd4d094();
      goto LAB_10bd4b918;
    }
    if (iVar14 == 0x58) {
LAB_10bd4b5b4:
      func_0x00010bd4d4c0();
      if (extraout_w8 < 0) {
        func_0x00010bd4cdf8();
      }
      unaff_x21 = (uint *)0x0;
      uVar17 = param_2[5];
      uVar20 = param_2[4];
      do {
        uVar2 = uVar17 << 0x3c;
        bVar9 = uVar20 < 0x10;
        uVar6 = uVar17 + !bVar9;
        uVar17 = uVar17 >> 4;
        unaff_x21 = (uint *)((long)unaff_x21 + 1);
        uVar20 = uVar20 >> 4 | uVar2;
      } while (!CARRY8(~uVar6,(ulong)bVar9));
      func_0x00010bd4cf68();
      func_0x00010bd4cbb0();
      func_0x00010bd4cb84(CONCAT71(uStack_37,auStack_39[1]));
      func_0x000107c3a9d0();
      unaff_x22 = (long *)((ulong)unaff_x26 >> ((ulong)unaff_x27 & 0x3f));
      func_0x00010bd4cc78();
      if (iVar18 != 0) {
        func_0x00010bd4cbc4();
      }
      func_0x00010bd4d4b4();
      func_0x00010bd4cc48();
      unaff_x25 = param_2[4];
      unaff_x24 = param_2[5];
      bVar5 = *(byte *)(param_2[2] + 8);
      unaff_x27 = (char *******)(ulong)bVar5;
      plVar15 = param_1;
      func_0x00010bd4d018();
      uVar13 = bVar5 == 0x78;
      if (plVar15 == (long *)0x0) {
        func_0x00010bd4cfd0();
        func_0x00010bd49efc();
        plVar15 = &lStack_250;
        param_1 = (long *)((long)unaff_x27 + (long)unaff_x21);
        func_0x00010bd4cf30();
      }
      else {
        func_0x00010bd49efc();
      }
      func_0x00010bd4cca0();
      goto LAB_10bd4b914;
    }
    if (iVar14 == 0x62) goto LAB_10bd4b654;
    uVar13 = iVar14 == 99;
    if ((bool)uVar13) {
      plVar15 = (long *)*param_2;
      lStack_250 = CONCAT71(lStack_250._1_7_,(char)param_2[4]);
      func_0x000107c283a0(plVar15,&lStack_250);
      param_2 = plVar15;
      goto LAB_10bd4b918;
    }
    if (iVar14 == 0x78) goto LAB_10bd4b5b4;
    if (iVar14 == 0x6f) {
      unaff_x20 = 0;
      uVar17 = param_2[4];
      uVar20 = param_2[5];
      do {
        uVar2 = uVar20 << 0x3d;
        bVar9 = uVar17 < 8;
        uVar6 = uVar20 + !bVar9;
        uVar20 = uVar20 >> 3;
        unaff_x20 = unaff_x20 + 1;
        uVar17 = uVar17 >> 3 | uVar2;
      } while (!CARRY8(~uVar6,(ulong)bVar9));
      unaff_x21 = (uint *)param_2[2];
      if ((*(char *)((long)unaff_x21 + 9) < '\0') &&
         ((int)unaff_x21[1] <= (int)unaff_x20 && (param_2[4] != 0 || param_2[5] != 0))) {
        uVar4 = *(uint *)((long)param_2 + 0x34);
        *(uint *)((long)param_2 + 0x34) = uVar4 + 1;
        *(undefined1 *)((long)param_2 + (ulong)uVar4 + 0x30) = 0x30;
      }
      func_0x00010bd4cf68();
      func_0x0001087a3624();
      pppppppcVar7 = (char *******)((ulong)*unaff_x21 - CONCAT71(uStack_37,auStack_39[1]));
      uVar13 = pppppppcVar7 == (char *******)0x0;
      unaff_x26 = (char *******)0x0;
      if (CONCAT71(uStack_37,auStack_39[1]) <= (ulong)*unaff_x21) {
        unaff_x26 = pppppppcVar7;
      }
      unaff_x27 = (char *******)
                  (long)(char)(&UNK_10e60dad6)[(ulong)*(byte *)((long)unaff_x21 + 9) & 0xf];
      func_0x000107c3a9d0();
      unaff_x22 = (long *)((ulong)unaff_x26 >> ((ulong)unaff_x27 & 0x3f));
      func_0x00010bd4cd20();
      if (iVar18 != 0) {
        func_0x00010bd4cbc4();
      }
      func_0x00010bd4d4b4();
      func_0x00010bd4cc48();
      unaff_x25 = param_2[4];
      unaff_x24 = param_2[5];
      plVar15 = param_1;
      func_0x000107c29928();
      if (plVar15 == (long *)0x0) {
        func_0x00010bd4cfd0();
        func_0x00010bd49f74();
        param_1 = (long *)((long)unaff_x27 + unaff_x20);
        func_0x00010bd4cf30(&lStack_250);
      }
      else {
        func_0x00010bd49f74();
      }
      plVar15 = param_1;
      func_0x000107c28398(param_1,(long)unaff_x26 - (long)unaff_x22,(long)unaff_x21 + 10);
      goto LAB_10bd4b914;
    }
    in_ZR = 1;
    if (iVar14 == 100) goto LAB_10bd4b58c;
  }
  FUN_10bd4bb7c();
  plVar15 = param_1;
  func_0x00010bd4d094();
  unaff_x30 = FUN_10bd4bacc;
  func_0x00010bd4cdc0();
code_r0x00010bd4bacc:
  *(undefined1 **)(puVar8 + -0x60) = unaff_x28;
  *(char ********)(puVar8 + -0x58) = unaff_x27;
  *(char ********)(puVar8 + -0x50) = unaff_x26;
  *(ulong *)(puVar8 + -0x48) = unaff_x25;
  *(ulong *)(puVar8 + -0x40) = unaff_x24;
  *(long **)(puVar8 + -0x38) = unaff_x23;
  *(long **)(puVar8 + -0x30) = unaff_x22;
  *(uint **)(puVar8 + -0x28) = unaff_x21;
  *(ulong *)(puVar8 + -0x20) = unaff_x20;
  *(long **)(puVar8 + -0x18) = param_1;
  *(undefined8 **)(puVar8 + -0x10) = puVar26;
  *(code **)(puVar8 + -8) = unaff_x30;
  FUN_10bd49c5c(plVar15[4],plVar15[5]);
  iVar14 = *(int *)((long)plVar15 + 0x34);
  puVar16 = puVar8 + -0x78;
  func_0x00010bd4cbb0();
  func_0x00010bd4cc04();
  func_0x00010bd4d0bc();
  func_0x00010bd4cc78();
  if (iVar14 != 0) {
    func_0x00010bd4cbc4();
  }
  puVar8[-0x61] = 0x30;
  func_0x00010bd4cc48();
  FUN_10bd4a19c();
  func_0x000107c28398();
  *plVar15 = (long)puVar16;
  return;
}



/* Entry: 10bd4bacc; end: 10bd4bb7b;  */

void FUN_10bd4bacc(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 auStack_78 [2];
  undefined1 uStack_61;
  
  FUN_10bd49c5c(param_1[4],param_1[5]);
  iVar1 = *(int *)((long)param_1 + 0x34);
  puVar2 = auStack_78;
  func_0x00010bd4cbb0();
  func_0x00010bd4cc04();
  func_0x00010bd4d0bc();
  func_0x00010bd4cc78();
  if (iVar1 != 0) {
    func_0x00010bd4cbc4();
  }
  uStack_61 = 0x30;
  func_0x00010bd4cc48();
  FUN_10bd4a19c();
  func_0x000107c28398();
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 10bd4bb7c; end: 10bd4bb9f;  */

long FUN_10bd4bb7c(undefined8 param_1,long param_2,ulong param_3,uint *param_4)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bd4cd78();
  func_0x00010bd4d254();
  func_0x00010bd4cc30();
  func_0x00010bd4cd04();
  func_0x00010bd4d038();
  uVar1 = 0;
  if (param_3 <= *param_4) {
    uVar1 = *param_4 - param_3;
  }
  cVar3 = (&UNK_10e60dad1)[(ulong)*(byte *)((long)param_4 + 9) & 0xf];
  func_0x000107c28394();
  func_0x00010bd4cd20();
  lVar4 = param_2 + param_3;
  func_0x000107c283a4(param_2,lVar4,param_1);
  lVar5 = uVar1 - (uVar1 >> ((long)cVar3 & 0x3fU));
  bVar2 = *(byte *)((long)param_4 + 0xe);
  if ((ulong)bVar2 == 1) {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      lVar4 = (long)param_4 + 10 + (ulong)bVar2;
      func_0x0001003a9d20((long)param_4 + 10,lVar4);
    }
  }
  return lVar4;
}



/* Entry: 10bd4bba0; end: 10bd4bc27;  */

long FUN_10bd4bba0(undefined8 param_1,long param_2,ulong param_3,uint *param_4)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = 0;
  if (param_3 <= *param_4) {
    uVar1 = *param_4 - param_3;
  }
  cVar3 = (&UNK_10e60dad1)[(ulong)*(byte *)((long)param_4 + 9) & 0xf];
  func_0x000107c28394(param_1,param_3 + uVar1 * *(byte *)((long)param_4 + 0xe));
  func_0x00010bd4cd20();
  lVar4 = param_2 + param_3;
  func_0x000107c283a4(param_2,lVar4,param_1);
  lVar5 = uVar1 - (uVar1 >> ((long)cVar3 & 0x3fU));
  bVar2 = *(byte *)((long)param_4 + 0xe);
  if ((ulong)bVar2 == 1) {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      lVar4 = (long)param_4 + 10 + (ulong)bVar2;
      func_0x0001003a9d20((long)param_4 + 10,lVar4);
    }
  }
  return lVar4;
}



/* Entry: 10bd4bc28; end: 10bd4bf37;  */

void FUN_10bd4bc28(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  int extraout_w9;
  uint uVar13;
  int extraout_w11;
  uint uVar14;
  
  uVar5 = (uint)(param_4 >> 0x20);
  uVar14 = uVar5 >> 8 & 0xff;
  uVar3 = *(uint *)(param_2 + 8);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar2 = uVar3;
  if (uVar14 != 0) {
    uVar2 = uVar3 + 1;
  }
  uVar1 = uVar4 + uVar3;
  uVar11 = (uint)param_4;
  if ((param_4 >> 0x20 & 0xff) == 0) {
    if (-4 < (int)uVar1) {
      uVar13 = uVar11;
      if ((int)uVar11 < 1) {
        uVar13 = 0x10;
      }
      if ((int)uVar1 <= (int)uVar13) goto LAB_10bd4bd48;
    }
  }
  else if ((uVar5 & 0xff) != 1) {
LAB_10bd4bd48:
    if ((int)uVar4 < 0) {
      if ((int)uVar1 < 1) {
        uVar2 = uVar11;
        if ((int)(uVar11 + uVar1) < 0 == SCARRY4(uVar11,uVar1)) {
          uVar2 = -uVar1;
        }
        if (0x7fffffff < uVar11 || uVar3 != 0) {
          uVar2 = -uVar1;
        }
        func_0x00010bd4cf58();
        func_0x00010bd4cbd4();
        func_0x000107c28394();
        func_0x00010bd4cd20();
        if (uVar14 != 0) {
          func_0x00010bd4cbec();
          func_0x00010bd4d0dc();
        }
        func_0x00010bd4d0dc();
        if ((uVar3 != 0 || (param_4 & 0x10000000000000) != 0) || uVar2 != 0) {
          func_0x00010bd4d0dc();
          func_0x00010bd4d1dc();
          FUN_10bd4a6e4(param_1,uVar2);
          func_0x00010bd4d048();
          FUN_10bd4c004();
        }
      }
      else {
        func_0x00010bd4cf58();
        func_0x00010bd4cbd4();
        func_0x00010bd4d3bc();
        func_0x00010bd4cf38();
        if (uVar14 != 0) {
          func_0x00010bd4cbec();
          func_0x000107c283a0(param_1);
        }
        func_0x00010bd4d048(param_1);
        FUN_10bd4bf98();
        if (0 < (int)(uVar11 - uVar3 & (int)(uVar5 << 0xb) >> 0x1f)) {
          func_0x00010bd4d1dc();
          func_0x00010bd4d378();
        }
      }
    }
    else {
      bVar9 = (uVar5 & 0xff) != 2 && (uVar11 == uVar1 || (int)(uVar11 - uVar1) < 0);
      func_0x00010bd4d16c((ulong)uVar4 + (ulong)uVar2);
      iVar6 = extraout_w9;
      if (!bVar9) {
        iVar6 = extraout_w11;
      }
      iVar7 = extraout_w9;
      if ((param_4 & 0x10000000000000) != 0) {
        iVar7 = iVar6;
      }
      func_0x00010bd4cbd4();
      func_0x00010bd4d3bc();
      func_0x00010bd4d324();
      if (uVar14 != 0) {
        func_0x00010bd4cbec();
        func_0x000107c283a0(param_1);
      }
      func_0x00010bd4d048(param_1);
      FUN_10bd4c004();
      func_0x00010bd4d1dc();
      FUN_10bd4a6e4();
      if (((uVar5 >> 0x14 & 1) != 0) && (func_0x00010bd4cfe4(), 0 < iVar7)) {
        func_0x00010bd4d1dc();
        FUN_10bd4a6e4(param_1,iVar7);
      }
    }
    goto LAB_10bd4be90;
  }
  cVar8 = '\0';
  cVar10 = '\0';
  uVar12 = 0x65;
  if ((param_4 & 0x1000000000000) != 0) {
    uVar12 = 0x45;
  }
  func_0x00010bd4ced0(uVar12);
  if (cVar8 != cVar10) {
    func_0x000107c28394();
    func_0x00010bd4d0e4();
    FUN_10bd4bf38();
    return;
  }
  func_0x00010bd4cd30();
  func_0x000107c28394();
  func_0x00010bd4d330();
  func_0x00010bd4d0e4();
  FUN_10bd4bf38();
LAB_10bd4be90:
  func_0x000107c28398();
  return;
}



/* Entry: 10bd4bf38; end: 10bd4bf97;  */

int * FUN_10bd4bf38(int *param_1)

{
  long unaff_x19;
  
  func_0x000107c3aa64();
  if (*param_1 != 0) {
    func_0x00010bd4ce44();
  }
  func_0x00010bd4d218();
  FUN_10bd4bf98();
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    func_0x00010bd4d1dc();
    FUN_10bd4a6e4(param_1);
  }
  func_0x00010bd4d4a8(*(undefined1 *)(unaff_x19 + 0x1c));
  func_0x00010bd4cfe4();
  func_0x00010bd4d36c();
  return param_1;
}



/* Entry: 10bd4bf98; end: 10bd4c003;  */

long FUN_10bd4bf98(undefined8 param_1,long param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2 + param_4;
  lVar2 = lVar1;
  func_0x000107c283a4(param_2,lVar1,param_1);
  lVar3 = lVar2;
  if (param_5 != 0) {
    func_0x00010bd4cd60();
    lVar3 = param_2 + param_3;
    func_0x000107c283a4(lVar1,lVar3,lVar2);
  }
  return lVar3;
}



/* Entry: 10bd4c004; end: 10bd4c02f;  */

long FUN_10bd4c004(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_2 + param_3;
  func_0x000107c283a4(param_2,lVar1,param_1);
  return lVar1;
}



/* Entry: 10bd4c030; end: 10bd4c057;  */

void FUN_10bd4c030(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_10bd4abd0(uVar1,param_2,param_1[2]);
  *param_1 = uVar1;
  return;
}



/* Entry: 10bd4c058; end: 10bd4c08f;  */

bool FUN_10bd4c058(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1 & 0xfffffffffffff;
  *param_2 = uVar1;
  uVar2 = (uint)(param_1 >> 0x34) & 0x7ff;
  if (uVar2 == 0) {
    iVar3 = -0x432;
  }
  else {
    *param_2 = uVar1 | 0x10000000000000;
    iVar3 = uVar2 - 0x433;
  }
  *(int *)(param_2 + 1) = iVar3;
  return (uVar1 == 0 && uVar2 != 0) && (uVar1 != 0 || uVar2 != 1);
}



/* Entry: 10bd4c090; end: 10bd4c24b;  */

undefined8 FUN_10bd4c090(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  if (*(char *)((long)param_1 + 0x14) != '\x01') {
    return 0;
  }
  iVar2 = *(int *)((long)param_1 + 0xc);
  param_4 = (int)param_1[2] + param_4;
  iVar1 = param_4 + iVar2;
  *(int *)((long)param_1 + 0xc) = iVar1;
  if (iVar1 == 0 || iVar1 < 0 != SCARRY4(param_4,iVar2)) {
    if (-1 < iVar1) {
      FUN_10bd4c24c(param_2,param_3,10);
      if ((int)param_2 == 0) {
        return 2;
      }
      uVar5 = 0x30;
      if ((int)param_2 == 1) {
        uVar5 = 0x31;
      }
      lVar3 = param_1[1];
      *(int *)(param_1 + 1) = (int)lVar3 + 1;
      *(undefined1 *)(*param_1 + (long)(int)lVar3) = uVar5;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10bd4c24c; end: 10bd4c2c3;  */

undefined8 FUN_10bd4c24c(long param_1,ulong param_2,ulong param_3)

{
  if ((param_2 <= param_1 - param_2) && (param_3 << 1 <= param_1 + param_2 * -2)) {
    return 2;
  }
  if ((param_3 <= param_2) && (param_1 - (param_2 - param_3) <= param_2 - param_3)) {
    return 1;
  }
  return 0;
}



/* Entry: 10bd4c2c4; end: 10bd4c383;  */

void FUN_10bd4c2c4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = *(long *)(param_1 + 8);
  do {
    *(int *)(lVar2 + lVar1 * 4) = (int)param_2;
    lVar1 = lVar1 + 1;
    param_2 = param_2 >> 0x20;
  } while (param_2 != 0);
  FUN_10bd4c978(param_1,lVar1);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 10bd4c384; end: 10bd4c5eb;  */

undefined1 * FUN_10bd4c384(undefined1 *param_1,ulong param_2)

{
  uint *puVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  ulong unaff_x20;
  uint uVar18;
  ulong uVar19;
  undefined **ppuStack_110;
  uint *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint auStack_f0 [34];
  undefined8 uStack_68;
  
  pppuVar5 = &ppuStack_110;
  pppuVar4 = (undefined ***)param_1;
  func_0x000107c3a9b4();
  uVar7 = (uint)param_2;
  if (uVar7 == 0) {
    func_0x000107c3a9a8(extraout_x8);
    uVar8 = param_2;
    if ((bool)in_ZR) {
      **(undefined4 **)(param_1 + 8) = 1;
      puVar6 = param_1;
      FUN_10bd4c978(param_1,1);
      *(undefined4 *)(param_1 + 0xa8) = 0;
      return puVar6;
    }
  }
  else {
    uVar18 = 1;
    do {
      uVar9 = uVar18;
      uVar3 = uVar7 == uVar9;
      uVar18 = uVar9 << 1;
    } while ((int)uVar9 <= (int)uVar7);
    uVar8 = 5;
    pppuVar4 = (undefined ***)param_1;
    uStack_68 = extraout_x8;
    FUN_10bd4c2c4();
    puVar1 = (uint *)(param_1 + 0x20);
    for (uVar9 = (int)uVar9 >> 2; uVar9 != 0; uVar9 = (int)uVar9 >> 1) {
      uStack_100 = 0;
      ppuStack_110 = &PTR_FUN_110d9ec20;
      puStack_108 = *(uint **)(param_1 + 8);
      lVar16 = *(long *)(param_1 + 0x10);
      uStack_f8 = *(undefined8 *)(param_1 + 0x18);
      if (puStack_108 == puVar1) {
        puStack_108 = auStack_f0;
        FUN_10bd4c960(puVar1,puVar1 + lVar16,auStack_f0);
      }
      else {
        *(uint **)(param_1 + 8) = puVar1;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      FUN_10bd4c978(&ppuStack_110,lVar16);
      uVar19 = *(ulong *)(param_1 + 0x10);
      uVar18 = (uint)uVar19;
      uVar8 = (ulong)(uVar18 * 2);
      FUN_10bd4c978(param_1);
      uVar10 = 0;
      uVar11 = 0;
      for (uVar13 = 0; uVar17 = uVar13, puVar15 = puStack_108,
          uVar13 != (uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); uVar13 = uVar13 + 1) {
        for (; uVar17 != 0xffffffffffffffff; uVar17 = uVar17 - 1) {
          bVar2 = CARRY8(uVar10,(ulong)puStack_108[uVar17 & 0xffffffff] * (ulong)*puVar15);
          uVar10 = uVar10 + (ulong)puStack_108[uVar17 & 0xffffffff] * (ulong)*puVar15;
          if (bVar2) {
            uVar11 = uVar11 + 1;
          }
          puVar15 = puVar15 + 1;
        }
        *(int *)(*(long *)(param_1 + 8) + uVar13 * 4) = (int)uVar10;
        uVar10 = uVar10 >> 0x20 | uVar11 << 0x20;
        uVar11 = uVar11 >> 0x20;
      }
      iVar14 = 1;
      for (; (int)uVar19 < (int)(uVar18 * 2); uVar19 = (ulong)((int)uVar19 + 1)) {
        lVar16 = (long)iVar14;
        uVar13 = -(ulong)(uVar18 - 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar18 - 1) << 2;
        while (lVar16 < (int)uVar18) {
          puVar15 = puStack_108 + lVar16;
          lVar16 = lVar16 + 1;
          uVar17 = (ulong)*(uint *)((long)puStack_108 + uVar13) * (ulong)*puVar15;
          bVar2 = CARRY8(uVar10,uVar17);
          uVar10 = uVar10 + uVar17;
          if (bVar2) {
            uVar11 = uVar11 + 1;
          }
          uVar13 = uVar13 - 4;
        }
        *(int *)(*(long *)(param_1 + 8) + (uVar19 & 0xffffffff) * 4) = (int)uVar10;
        uVar10 = uVar10 >> 0x20 | uVar11 << 0x20;
        uVar11 = uVar11 >> 0x20;
        iVar14 = iVar14 + 1;
      }
      FUN_10bd4ca10(param_1);
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) << 1;
      pppuVar4 = &ppuStack_110;
      func_0x00010bd4ca50();
      uVar3 = (uVar9 & uVar7) == 0;
      if (!(bool)uVar3) {
        uVar8 = 5;
        pppuVar4 = (undefined ***)param_1;
        func_0x00010bd4cb04();
      }
    }
    func_0x000107c3a9a8(uStack_68);
    unaff_x20 = param_2;
    if ((bool)uVar3) {
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + (int)uVar7 / 0x20;
      uVar7 = (int)uVar7 % 0x20;
      if (uVar7 != 0) {
        uVar18 = 0;
        lVar12 = *(long *)(param_1 + 0x10);
        for (lVar16 = 0; lVar12 != lVar16; lVar16 = lVar16 + 1) {
          uVar9 = *(uint *)(*(long *)(param_1 + 8) + lVar16 * 4);
          iVar14 = (uVar9 << (ulong)(uVar7 & 0x1f)) + uVar18;
          uVar18 = uVar9 >> (ulong)(0x20 - uVar7 & 0x1f);
          *(int *)(*(long *)(param_1 + 8) + lVar16 * 4) = iVar14;
        }
        if (uVar18 != 0) {
          func_0x00010bd4c9c0(param_1);
        }
      }
      return param_1;
    }
  }
  ___stack_chk_fail();
  puVar6 = (undefined1 *)pppuVar4;
  if ((int)uVar8 != 0) {
    func_0x000104bd46a0();
    func_0x00010bd4ca50(&ppuStack_110);
    puVar6 = (undefined1 *)pppuVar5;
  }
  func_0x00010bd4cdc0();
  func_0x000107c3aa64();
  lVar16 = *(long *)(uVar8 + 0x10);
  FUN_10bd4c978();
  if (lVar16 != 0) {
    puVar6 = *(undefined1 **)((long)pppuVar4 + 8);
    _memmove(puVar6,*(undefined8 *)(unaff_x20 + 8),lVar16 << 2);
  }
  *(undefined4 *)((long)pppuVar4 + 0xa8) = *(undefined4 *)(unaff_x20 + 0xa8);
  return puVar6;
}



/* Entry: 10bd4c5ec; end: 10bd4c743;  */

void FUN_10bd4c5ec(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107c3aa64();
  lVar1 = *(long *)(param_2 + 0x10);
  FUN_10bd4c978();
  if (lVar1 != 0) {
    _memmove(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x20 + 8),lVar1 << 2);
  }
  *(undefined4 *)(unaff_x19 + 0xa8) = *(undefined4 *)(unaff_x20 + 0xa8);
  return;
}



/* Entry: 10bd4c744; end: 10bd4c7d3;  */

undefined4 FUN_10bd4c744(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar9 = (uint)*(ulong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xa8) + uVar9;
  uVar8 = *(uint *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0xa8) + uVar8;
  if (iVar1 != iVar2) {
    uVar4 = 0xffffffff;
    if (iVar2 < iVar1) {
      uVar4 = 1;
    }
    return uVar4;
  }
  uVar10 = *(ulong *)(param_1 + 0x10) & 0xffffffff;
  uVar3 = uVar9 - uVar8 & ((int)(uVar9 - uVar8) >> 0x1f ^ 0xffffffffU);
  uVar5 = uVar3;
  if ((int)uVar9 <= (int)uVar3) {
    uVar5 = uVar9;
  }
  do {
    if ((int)uVar10 <= (int)uVar3) {
      uVar4 = 0xffffffff;
      if ((int)uVar8 < (int)uVar5) {
        uVar4 = 1;
      }
      uVar6 = 0;
      if (uVar5 != uVar8) {
        uVar6 = uVar4;
      }
      return uVar6;
    }
    uVar9 = *(uint *)(*(long *)(param_1 + 8) + -4 + uVar10 * 4);
    uVar10 = uVar10 - 1;
    uVar8 = uVar8 - 1;
    uVar7 = *(uint *)(*(long *)(param_2 + 8) + (ulong)uVar8 * 4);
  } while (uVar9 == uVar7);
  uVar4 = 0xffffffff;
  if (uVar7 < uVar9) {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 10bd4c7d4; end: 10bd4c8e3;  */

int FUN_10bd4c7d4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint extraout_w8;
  ulong uVar6;
  uint extraout_w9;
  uint extraout_w10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  int iVar7;
  ulong uVar8;
  
  iVar4 = *(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(param_2 + 0xa8) + *(int *)(param_2 + 0x10);
  if (iVar4 <= iVar7) {
    iVar4 = iVar7;
  }
  iVar7 = *(int *)(param_3 + 0xa8) + *(int *)(param_3 + 0x10);
  if (iVar4 + 1 < iVar7) {
    iVar4 = -1;
  }
  else if (iVar7 < iVar4) {
    iVar4 = 1;
  }
  else {
    func_0x000107c3aa68();
    uVar8 = 0;
    uVar1 = extraout_w9;
    if ((int)extraout_w8 <= (int)extraout_w9) {
      uVar1 = extraout_w8;
    }
    uVar6 = (ulong)uVar1;
    uVar2 = extraout_w10;
    if ((int)uVar1 <= (int)extraout_w10) {
      uVar2 = uVar1;
    }
    while (iVar4 = (int)uVar6, (int)uVar2 < iVar7) {
      uVar6 = unaff_x21;
      func_0x00010bd4d364();
      uVar5 = unaff_x20;
      func_0x00010bd4d364();
      uVar5 = (uVar5 & 0xffffffff) + (uVar6 & 0xffffffff);
      uVar6 = unaff_x19;
      func_0x00010bd4d364();
      uVar6 = uVar8 | uVar6 & 0xffffffff;
      uVar3 = uVar6 - uVar5;
      if (uVar6 < uVar5) {
        iVar4 = 1;
        break;
      }
      if (1 < uVar3) {
        iVar4 = -1;
        uVar8 = uVar3;
        break;
      }
      uVar8 = uVar3 << 0x20;
      iVar7 = iVar7 + -1;
    }
    if (iVar7 <= (int)uVar2) {
      iVar4 = -(uint)(uVar8 != 0);
    }
  }
  return iVar4;
}



/* Entry: 10bd4c8e4; end: 10bd4c95f;  */

void FUN_10bd4c8e4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) + (*(ulong *)(param_1 + 0x18) >> 1);
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = param_1 + 0xa0;
  func_0x00010731e2e8(lVar2,param_2);
  FUN_10bd4c960(lVar3,lVar3 + *(long *)(param_1 + 0x10) * 4,lVar2);
  *(long *)(param_1 + 8) = lVar2;
  *(ulong *)(param_1 + 0x18) = param_2;
  if (lVar3 != param_1 + 0x20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10bd4c960; end: 10bd4c977;  */

void FUN_10bd4c960(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return;
}



/* Entry: 10bd4c978; end: 10bd4ca0f;  */

void FUN_10bd4c978(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107c3aa64();
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 < param_2) {
    (**(code **)*unaff_x19)();
    uVar1 = unaff_x19[3];
  }
  if (uVar1 <= unaff_x20) {
    unaff_x20 = uVar1;
  }
  unaff_x19[2] = unaff_x20;
  return;
}



/* Entry: 10bd4ca10; end: 10bd4ca6b;  */

void FUN_10bd4ca10(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar3 = (uint)uVar5;
  if (0 < (int)uVar3) {
    uVar3 = 1;
  }
  lVar6 = (uVar5 & 0xffffffff) * 4;
  do {
    lVar6 = lVar6 + -4;
    uVar4 = (uint)uVar5;
    uVar1 = uVar3;
    if ((int)uVar4 < 2) break;
    uVar5 = (ulong)(uVar4 - 1);
    uVar1 = uVar4;
  } while (*(int *)(*(long *)(param_1 + 8) + lVar6) == 0);
  uVar5 = (ulong)uVar1;
  func_0x000107c3aa64();
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 < uVar5) {
    (**(code **)*unaff_x19)();
    uVar2 = unaff_x19[3];
  }
  if (uVar2 <= unaff_x20) {
    unaff_x20 = uVar2;
  }
  unaff_x19[2] = unaff_x20;
  return;
}



/* Entry: 10bd4ca6c; end: 10bd4cad7;  */

void FUN_10bd4ca6c(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  for (lVar3 = 0; lVar4 != lVar3; lVar3 = lVar3 + 1) {
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + lVar3 * 4);
    uVar1 = (param_2 & 0xffffffff) * (ulong)uVar2 + (uVar5 & 0xffffffff);
    uVar5 = (uVar5 >> 0x20) + (param_2 >> 0x20) * (ulong)uVar2 + (uVar1 >> 0x20);
    *(int *)(*(long *)(param_1 + 8) + lVar3 * 4) = (int)uVar1;
  }
  for (; uVar5 != 0; uVar5 = uVar5 >> 0x20) {
    func_0x00010bd4c9c0(param_1,uVar5);
  }
  return;
}



/* Entry: 10bd4cad8; end: 10bd4d507;  */

undefined4 FUN_10bd4cad8(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((iVar1 <= param_2) && (param_2 < iVar1 + *(int *)(param_1 + 0x10))) {
    return *(undefined4 *)(*(long *)(param_1 + 8) + (ulong)(uint)(param_2 - iVar1) * 4);
  }
  return 0;
}



/* Entry: 10bd4d508; end: 10bd4d5b3; -[SCLazy asyncTarget:triggerCreateNowOnQueue:] */

void FUN_10bd4d508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  func_0x00010c0e33e0(param_1);
  iVar2 = (int)param_1 + 0x18;
  _os_unfair_lock_trylock();
  if ((iVar2 == 0) ||
     (cVar1 = *(char *)(param_1 + 0x1c), _os_unfair_lock_unlock(param_1 + 0x18), cVar1 != '\x02')) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10bd4d5b4;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x000107c27d8c(param_4,&puStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10bd4d5b4; end: 10bd4d5d3;  */

void FUN_10bd4d5b4(long param_1)

{
  func_0x00010bf57500(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10bd4d5d4; end: 10bd4d62f; -[SCLazy ifCreatedNonBlocking] */

void FUN_10bd4d5d4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1 + 0x18;
  _os_unfair_lock_trylock();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      uVar2 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bd4d630; end: 10bd4d63f;  */

void FUN_10bd4d630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bd4d63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10bd4d640; end: 10bd4d6eb;  */

void FUN_10bd4d640(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf57500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10bd4d6ec; end: 10bd4d963; -[SCLazy immediateFlatMap:] */

void FUN_10bd4d6ec(long param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    cVar1 = *(char *)(param_1 + 0x1c);
    _os_unfair_lock_unlock(param_1 + 0x18);
    if (cVar1 == '\x02') {
      func_0x00010bf57500(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_98 = &uStack_a0;
      uStack_a0 = 0;
      uStack_90 = 0x3032000000;
      pcStack_88 = FUN_10bd4d964;
      uStack_80 = 0x10bd4d974;
      lStack_78 = 0;
      puStack_b8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b0 = 0x2020000000;
      uStack_a8 = 0;
      puVar2 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
      _objc_opt_new();
      puVar3 = PTR_PTR_1126ae720;
      _objc_alloc(PTR_PTR_1126ae720);
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_10bd4d97c;
      puStack_e8 = &UNK_1108666e0;
      _objc_retain(puVar2);
      puStack_d0 = &uStack_c0;
      puStack_c8 = &uStack_a0;
      puStack_e0 = puVar2;
      lStack_d8 = param_1;
      func_0x00010c01dec0(puVar3);
      _objc_initWeak(auStack_108,puVar3);
      _objc_retain(puVar2);
      _objc_retain(param_3);
      _objc_copyWeak(auStack_110,auStack_108);
      func_0x00010c0e33e0(param_1);
      _objc_destroyWeak(auStack_110);
      _objc_release(param_3);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_108);
      _objc_release(puStack_e0);
      _objc_release(puVar2);
      __Block_object_dispose(&uStack_c0,8);
      __Block_object_dispose(&uStack_a0,8);
      param_1 = lStack_78;
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bd4d964; end: 10bd4d97b;  */

void FUN_10bd4d964(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10bd4d97c; end: 10bd4d9e7;  */

void FUN_10bd4d97c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  func_0x00010bf57500(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  func_0x00010bf57500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd4d9e8; end: 10bd4daf7;  */

void FUN_10bd4d9e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  func_0x00010c0e33e0(uVar2);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 10bd4daf8; end: 10bd4db4f;  */

void FUN_10bd4daf8(long param_1)

{
  long lVar1;
  
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf57500();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 10bd4db50; end: 10bd4db73; -[SCLazy copyWithZone:] */

undefined8 FUN_10bd4db50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bd4db74; end: 10bd4dbc3; -[SCLazyLoadingProxy class] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd4db74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112796a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_class();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bd4dbc4; end: 10bd4dc13; -[SCLazyLoadingProxy isKindOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10bd4dbc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112796a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_isKindOfClass();
  _objc_release(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 10bd4dc14; end: 10bd4dc8b; -[SCLazyLoadingProxy isMemberOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10bd4dc14(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddd08;
  _objc_opt_class(PTR_PTR_1126ddd08);
  func_0x00010c071ae0(param_3,param_2,puVar1);
  if ((param_3 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112796a2c);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c077980();
    _objc_release(uVar3);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10bd4dc8c; end: 10bd4dcdb; -[SCLazyLoadingProxy respondsToSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10bd4dc8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112796a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 10bd4dcdc; end: 10bd4dd5b; -[SCLazyLoadingProxy conformsToProtocol:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10bd4dcdc(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_112796a2c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c318f8(lVar2,param_3);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = (undefined4)lVar3;
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10bd4dd5c; end: 10bd4de4b; -[SCLazyLoadingProxy isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10bd4dd5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126ddd08;
    _objc_opt_class(PTR_PTR_1126ddd08);
    uVar3 = param_3;
    func_0x00010c077980(param_3,param_2,puVar1);
    lVar4 = (long)_DAT_112796a2c;
    uVar2 = param_3;
    if ((int)uVar3 != 0) {
      do {
        param_3 = *(ulong *)(uVar2 + lVar4);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        puVar1 = PTR_PTR_1126ddd08;
        _objc_opt_class(PTR_PTR_1126ddd08);
        uVar3 = param_3;
        func_0x00010c077980(param_3,param_2,puVar1);
        uVar2 = param_3;
      } while ((uVar3 & 1) != 0);
    }
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == param_3) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      func_0x00010c071ae0(uVar2,param_2,param_3);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10bd4de4c; end: 10bd4de93; -[SCLazyLoadingProxy hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10bd4de4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112796a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10bd4de94; end: 10bd4df13; -[SCMainThreadLazy initWithWrappedValue:] */

undefined1 * FUN_10bd4de94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e730;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bd4df14; end: 10bd4dfbb; -[SCMainThreadLazy target] */

undefined * FUN_10bd4df14(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(undefined **)(param_1 + 8);
    if (puVar4 == (undefined *)0x0) {
      lVar1 = *(long *)(param_1 + 0x10);
      (**(code **)(lVar1 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar1;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      _objc_release(uVar3);
      puVar4 = *(undefined **)(param_1 + 8);
    }
    _objc_retain(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  _objc_exception_throw();
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar2 & 1) != 0) {
    return (undefined *)(ulong)(*(long *)(puVar4 + 8) != 0);
  }
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  _objc_exception_throw();
  _objc_storeStrong(puVar4 + 0x10,0);
  puVar4 = puVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar4,0);
  return puVar4;
}



/* Entry: 10bd4dfbc; end: 10bd4e027; -[SCMainThreadLazy isCreated] */

undefined * FUN_10bd4dfbc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar1 & 1) != 0) {
    return (undefined *)(ulong)(*(long *)(param_1 + 8) != 0);
  }
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  _objc_exception_throw();
  _objc_storeStrong(puVar1 + 0x10,0);
  puVar1 = puVar1 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1,0);
  return puVar1;
}



/* Entry: 10bd4e028; end: 10bd4e057; -[SCMainThreadLazy .cxx_destruct] */

void FUN_10bd4e028(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd4e058; end: 10bd4e05f; -[sc_lock_box lock] */

void FUN_10bd4e058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_lock_11034c780)(param_1 + 8);
  return;
}



/* Entry: 10bd4e060; end: 10bd4e067; -[sc_lock_box unlock] */

void FUN_10bd4e060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 10bd4e068; end: 10bd4e06f; -[sc_lock_box tryLock] */

void FUN_10bd4e068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_trylock_11034c788)(param_1 + 8);
  return;
}



/* Entry: 10bd4e070; end: 10bd4e077; -[sc_lock_box assertOwner] */

void FUN_10bd4e070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_assert_owner_11034c778)(param_1 + 8);
  return;
}



/* Entry: 10bd4e078; end: 10bd4e07f; -[sc_lock_box assertNotOwner] */

void FUN_10bd4e078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_assert_not_owner_11034c770)(param_1 + 8);
  return;
}



/* Entry: 10bd4e080; end: 10bd4e207;  */

void FUN_10bd4e080(undefined *param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if ((param_4 & 1) == 0) {
    puVar5 = (undefined8 *)param_3;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf529e0(param_1);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_110;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          if ((param_3 == (undefined1 *)0x0) ||
             (puVar3 = param_3,
             (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lStack_118 + (long)puVar9 * 8)),
             (int)puVar3 != 0)) {
            func_0x00010c066b00(puVar1);
          }
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        puVar2 = param_1;
        puVar5 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(param_1);
    param_1 = puVar1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = &uStack_240;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar7 = *plStack_230;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_230 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          param_1 = *(undefined **)(lStack_238 + (long)puVar8 * 8);
          puVar4 = (undefined1 *)puVar5;
          (**(code **)((long)puVar5 + 0x10))(puVar5,param_1);
          if (((ulong)puVar4 & 1) != 0) {
            _objc_retain(param_1);
            goto LAB_10bd4e2ec;
          }
          puVar8 = puVar8 + 1;
        } while (puVar3 != puVar8);
        puVar3 = param_3;
        puVar6 = &uStack_240;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    param_1 = (undefined *)0x0;
LAB_10bd4e2ec:
    _objc_release(param_3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      puVar3 = (undefined1 *)puVar5;
      func_0x00010bf529e0();
      if (puVar3 <= puVar6) {
        puVar6 = (undefined8 *)puVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c25e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_subarrayWithRange__112675488,0,puVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bd4e208; end: 10bd4e337;  */

void FUN_10bd4e208(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        puVar2 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,uVar4);
        if (((ulong)puVar2 & 1) != 0) {
          _objc_retain(uVar4);
          goto LAB_10bd4e2ec;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_1;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar4 = 0;
LAB_10bd4e2ec:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 <= puVar3) {
    puVar3 = (undefined8 *)puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c25e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_subarrayWithRange__112675488,0,puVar3);
  return;
}



/* Entry: 10bd4e338; end: 10bd4e36b;  */

void FUN_10bd4e338(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (uVar1 <= param_3) {
    param_3 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c25e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_subarrayWithRange__112675488,0,param_3);
  return;
}



/* Entry: 10bd4e36c; end: 10bd4e81b;  */

undefined * FUN_10bd4e36c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  puVar5 = auStack_e8;
  lVar13 = param_1;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lStack_128 + lVar12 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        uVar14 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        if ((uVar14 & 1) == 0) {
          if (uVar2 != 0) {
            func_0x00010befa120(puVar9);
          }
        }
        else {
          func_0x00010befa160(puVar9);
        }
        _objc_release(uVar2);
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      puVar5 = auStack_e8;
      lVar13 = param_1;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar7 = &uStack_260;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010bf529e0(param_3);
    func_0x00010c225ec0();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    _objc_retain(param_3);
    puVar10 = auStack_218;
    uVar2 = param_3;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar13 = *plStack_250;
      do {
        uVar14 = 0;
        do {
          if (*plStack_250 != lVar13) {
            _objc_enumerationMutation(param_3);
          }
          puVar15 = (undefined1 *)puVar4;
          (**(code **)((long)puVar4 + 0x10))(puVar4,*(undefined8 *)(lStack_258 + uVar14 * 8));
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar5;
          if (puVar15 != (undefined1 *)0x0) {
            puVar10 = puVar15;
          }
          _objc_retain(puVar10);
          _objc_release(puVar15);
          if (puVar10 != (undefined1 *)0x0) {
            func_0x00010befa120(puVar9);
          }
          _objc_release(puVar10);
          uVar14 = uVar14 + 1;
        } while (uVar2 != uVar14);
        puVar10 = auStack_218;
        uVar2 = param_3;
        puVar7 = &uStack_260;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    _objc_release(param_3);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      puVar8 = &uStack_390;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar7);
      _objc_retain(puVar10);
      puVar9 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x00010bf529e0(puVar4);
      func_0x00010c0ecd60();
      _objc_retainAutoreleasedReturnValue();
      lStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      plStack_380 = (long *)0x0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      _objc_retain(puVar4);
      puVar5 = (undefined1 *)puVar4;
      func_0x00010bf52a60();
      if (puVar5 != (undefined1 *)0x0) {
        lVar13 = *plStack_380;
        do {
          puVar15 = (undefined1 *)0x0;
          do {
            if (*plStack_380 != lVar13) {
              _objc_enumerationMutation(puVar4);
            }
            puVar6 = (undefined1 *)puVar7;
            (**(code **)((long)puVar7 + 0x10))
                      (puVar7,*(undefined8 *)(lStack_388 + (long)puVar15 * 8));
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar10;
            if (puVar6 != (undefined1 *)0x0) {
              puVar1 = puVar6;
            }
            _objc_retain(puVar1);
            _objc_release(puVar6);
            if (puVar1 != (undefined1 *)0x0) {
              func_0x00010befa120(puVar9);
            }
            _objc_release(puVar1);
            puVar15 = puVar15 + 1;
          } while (puVar5 != puVar15);
          puVar5 = (undefined1 *)puVar4;
          puVar8 = &uStack_390;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined1 *)0x0);
      }
      _objc_release(puVar4);
      _objc_release(puVar10);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
        ___stack_chk_fail();
        lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar8);
        _objc_retain(puVar7);
        puVar5 = (undefined1 *)puVar7;
        func_0x00010bf52a60();
        lVar13 = lRam0000000000000000;
        puVar9 = (undefined *)0x0;
        if (puVar5 != (undefined1 *)0x0) {
          do {
            puVar10 = (undefined1 *)0x0;
            do {
              if (lRam0000000000000000 != lVar13) {
                _objc_enumerationMutation(puVar7);
              }
              puVar15 = (undefined1 *)puVar8;
              (**(code **)((long)puVar8 + 0x10))(puVar8,*(undefined8 *)((long)puVar10 * 8));
              if (((ulong)puVar15 & 1) != 0) {
                puVar9 = (undefined *)0x1;
                goto LAB_10bd4e8f0;
              }
              puVar10 = puVar10 + 1;
            } while (puVar5 != puVar10);
            puVar5 = (undefined1 *)puVar7;
            func_0x00010bf52a60();
          } while (puVar5 != (undefined1 *)0x0);
          puVar9 = (undefined *)0x0;
        }
LAB_10bd4e8f0:
        _objc_release(puVar7);
        _objc_release(puVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
          return puVar9;
        }
        ___stack_chk_fail();
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008340(puVar9);
        _objc_release(puVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 10bd4e81c; end: 10bd4e937;  */

undefined * FUN_10bd4e81c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar6 = (undefined *)0x0;
  if (lVar2 != 0) {
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lVar7 * 8));
        if ((uVar3 & 1) != 0) {
          puVar6 = (undefined *)0x1;
          goto LAB_10bd4e8f0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    puVar6 = (undefined *)0x0;
  }
LAB_10bd4e8f0:
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar6);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 10bd4e938; end: 10bd4e9eb;  */

void FUN_10bd4e938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar1,param_2,puVar2,4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bd4e9ec; end: 10bd4eb2b;  */

void FUN_10bd4e9ec(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_1);
      }
      uVar6 = *(ulong *)(lVar7 * 8);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      uVar3 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar2);
      if ((uVar3 & 1) == 0) {
        func_0x00010befa120(param_3);
      }
      else {
        func_0x00010be85020(uVar6);
      }
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010befa120(puVar2);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
    uVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010bff4000();
    func_0x00010bf529e0();
    if (0 < (long)(param_3 - 1)) {
      do {
        param_3 = param_3 - 1;
        _arc4random_uniform(param_3);
        func_0x00010bf9aac0(puVar2);
      } while (1 < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bd4eb2c; end: 10bd4ec53;  */

void FUN_10bd4eb2c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010bf529e0(param_1);
  func_0x00010bffc4a0(puVar1,param_2,uVar2);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      uVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010befa120(puVar1,param_2,*(undefined8 *)(lStack_108 + uVar4 * 8));
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
      uVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (uVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010bff4000();
    func_0x00010bf529e0();
    if (0 < (long)(param_1 - 1)) {
      do {
        param_1 = param_1 - 1;
        uVar2 = param_1;
        _arc4random_uniform(param_1);
        func_0x00010bf9aac0(puVar1,param_2,param_1,uVar2 & 0xffffffff);
      } while (1 < param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bd4ec54; end: 10bd4ecc7;  */

void FUN_10bd4ec54(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bff4000();
  func_0x00010bf529e0();
  if (0 < (long)(param_1 - 1)) {
    do {
      param_1 = param_1 - 1;
      uVar2 = param_1;
      _arc4random_uniform(param_1);
      func_0x00010bf9aac0(puVar1,param_2,param_1,uVar2 & 0xffffffff);
    } while (1 < param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bd4ecc8; end: 10bd4f0ab;  */

undefined * FUN_10bd4ecc8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined *unaff_x21;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *puVar11;
  undefined *unaff_x28;
  undefined1 auStack_5f8 [256];
  long lStack_4f8;
  undefined *puStack_4f0;
  long lStack_4e8;
  undefined **ppuStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined8 ***pppuStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_3c8;
  undefined **ppuStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010bf529e0();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    puVar2 = param_1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      unaff_x24 = (undefined *)0x0;
      unaff_x27 = *plStack_120;
      do {
        unaff_x28 = (undefined *)0x0;
        do {
          unaff_x25 = unaff_x24;
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
          if (((unaff_x25 == (undefined *)0x0) ||
              (puVar9 = param_3, (**(code **)(param_3 + 0x10))(param_3,unaff_x24,unaff_x25),
              ((ulong)puVar9 & 1) == 0)) &&
             (puVar9 = unaff_x21, func_0x00010bf529e0(), puVar9 != (undefined *)0x0)) {
            unaff_x26 = unaff_x21;
            func_0x00010bf51e00();
            func_0x00010befa120(puVar3);
            _objc_release(unaff_x26);
            func_0x00010c12adc0(unaff_x21);
          }
          func_0x00010befa120(unaff_x21);
          _objc_retain(unaff_x24);
          _objc_release(unaff_x25);
          unaff_x28 = unaff_x28 + 1;
        } while (puVar2 != unaff_x28);
        puVar2 = param_1;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
      _objc_release(unaff_x24);
      unaff_x23 = (undefined *)0x0;
    }
    _objc_release(param_1);
    puVar2 = unaff_x21;
    func_0x00010bf529e0();
    puVar9 = (undefined *)puVar7;
    if (puVar2 != (undefined *)0x0) {
      param_1 = unaff_x21;
      func_0x00010bf51e00();
      puVar9 = param_1;
      func_0x00010befa120(puVar3);
      _objc_release(param_1);
    }
    _objc_release(unaff_x21);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar7 = &uStack_260;
    uStack_138 = 0x10bd4eed0;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    puStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    puStack_160 = param_1;
    puStack_158 = unaff_x21;
    puStack_150 = puVar3;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010bf529e0();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      unaff_x27 = *plStack_250;
      do {
        unaff_x28 = (undefined *)0x0;
        puVar11 = puVar10;
        do {
          if (*plStack_250 != unaff_x27) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x28 * 8);
          func_0x00010befa120(puVar11);
          puVar10 = puVar11;
          func_0x00010bf529e0();
          if (puVar10 == puVar9) {
LAB_10bd4efdc:
            puVar10 = puVar11;
            func_0x00010bf51e00(puVar11);
            func_0x00010befa120(puVar4);
            _objc_release(puVar10);
            puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf0a0e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            unaff_x24 = puVar10;
          }
          else {
            unaff_x25 = puVar2;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar10 = puVar11;
            if (unaff_x24 == unaff_x25) goto LAB_10bd4efdc;
          }
          unaff_x28 = unaff_x28 + 1;
          puVar11 = puVar10;
        } while (puVar3 != unaff_x28);
        puVar3 = puVar2;
        puVar7 = &uStack_260;
        func_0x00010bf52a60();
        unaff_x23 = (undefined *)0x0;
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar3 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar10);
    puVar2 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      pcStack_268 = FUN_10bd4f0ac;
      lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_2a0 = unaff_x24;
      puStack_298 = unaff_x23;
      puStack_290 = puVar10;
      puStack_288 = puVar9;
      puStack_280 = puVar4;
      puStack_278 = puVar3;
      ppuStack_270 = &puStack_140;
      _objc_retain(puVar7);
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      puStack_360 = (undefined8 *)0x0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      _objc_retain(puVar2);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      if (puVar3 != (undefined *)0x0) {
        puVar10 = (undefined *)*puStack_360;
        do {
          unaff_x23 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_360 != puVar10) {
              _objc_enumerationMutation(puVar2);
            }
            puVar9 = (undefined *)puVar7;
            (**(code **)((long)puVar7 + 0x10))
                      (puVar7,*(undefined8 *)(lStack_368 + (long)unaff_x23 * 8));
            if ((int)puVar9 == 0) {
              puVar9 = (undefined *)0x0;
              goto LAB_10bd4f184;
            }
            unaff_x23 = unaff_x23 + 1;
          } while (puVar3 != unaff_x23);
          puVar3 = puVar2;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined *)0x0);
      }
      puVar9 = (undefined *)0x1;
LAB_10bd4f184:
      _objc_release(puVar2);
      puVar4 = (undefined *)puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
        return puVar9;
      }
      ___stack_chk_fail();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar5 = &uStack_490;
      ppuStack_3c0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      pcStack_378 = FUN_10bd4f1cc;
      lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_3b8 = unaff_x25;
      puStack_3b0 = unaff_x24;
      puStack_3a8 = unaff_x23;
      puStack_3a0 = puVar10;
      puStack_398 = puVar9;
      puStack_390 = puVar2;
      puStack_388 = (undefined *)puVar7;
      pppuStack_380 = &ppuStack_270;
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_488 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      puStack_480 = (undefined8 *)0x0;
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      _objc_retain(puVar4);
      puVar9 = puVar4;
      func_0x00010bf52a60();
      if (puVar9 != (undefined *)0x0) {
        unaff_x24 = (undefined *)*puStack_480;
        do {
          unaff_x25 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_480 != unaff_x24) {
              _objc_enumerationMutation(puVar4);
            }
            unaff_x23 = *(undefined **)(lStack_488 + (long)unaff_x25 * 8);
            puVar10 = puVar2;
            func_0x00010bf4b900();
            if (((ulong)puVar10 & 1) == 0) {
              func_0x00010befa120(puVar3);
              func_0x00010befa120(puVar2);
            }
            unaff_x25 = unaff_x25 + 1;
          } while (puVar9 != unaff_x25);
          puVar9 = puVar4;
          puVar5 = &uStack_490;
          func_0x00010bf52a60();
          puVar10 = (undefined *)0x0;
        } while (puVar9 != (undefined *)0x0);
      }
      _objc_release(puVar4);
      puVar9 = puVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
        ___stack_chk_fail();
        ppuStack_4e0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        pcStack_498 = FUN_10bd4f330;
        lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_4f0 = unaff_x28;
        lStack_4e8 = unaff_x27;
        puStack_4d8 = unaff_x25;
        puStack_4d0 = unaff_x24;
        puStack_4c8 = unaff_x23;
        puStack_4c0 = puVar10;
        puStack_4b8 = puVar2;
        puStack_4b0 = puVar3;
        puStack_4a8 = puVar4;
        pppuStack_4a0 = &pppuStack_380;
        func_0x00010c12c080();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c225c20();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(puVar9);
        func_0x00010bf529e0(puVar5);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar5);
        puVar2 = (undefined *)puVar5;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar2 != (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar5);
            }
            puVar6 = puVar10;
            func_0x00010bf4b900();
            if ((int)puVar6 != 0) {
              func_0x00010befa120(puVar3);
              func_0x00010befa120(puVar4);
            }
            puVar11 = puVar11 + 1;
          } while (puVar2 != puVar11);
          puVar2 = (undefined *)puVar5;
          func_0x00010bf52a60();
        }
        _objc_release(puVar5);
        func_0x00010c12c080();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = auStack_5f8;
        puVar2 = puVar9;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar2 != (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar9);
            }
            puVar6 = puVar4;
            func_0x00010bf4b900();
            if (((ulong)puVar6 & 1) == 0) {
              func_0x00010befa120(puVar3);
            }
            puVar11 = puVar11 + 1;
          } while (puVar2 != puVar11);
          puVar8 = auStack_5f8;
          puVar2 = puVar9;
          func_0x00010bf52a60();
        }
        _objc_release(puVar9);
        _objc_release(puVar4);
        _objc_release(puVar10);
        _objc_release(puVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
          ___stack_chk_fail();
          _objc_retain(puVar8);
          func_0x00010c0d3c80(puVar5);
          func_0x00010c130f40();
          _objc_release(puVar8);
          puVar3 = (undefined *)puVar5;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 10bd4f0ac; end: 10bd4f1cb;  */

undefined * FUN_10bd4f0ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 auStack_398 [256];
  long lStack_298;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
      puVar11 = (undefined *)0x1;
LAB_10bd4f184:
      _objc_release(param_1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return puVar11;
      }
      ___stack_chk_fail();
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar5 = &uStack_230;
      lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      plStack_220 = (long *)0x0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      _objc_retain(param_3);
      lVar1 = param_3;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar13 = *plStack_220;
        do {
          lVar10 = 0;
          do {
            if (*plStack_220 != lVar13) {
              _objc_enumerationMutation(param_3);
            }
            puVar4 = puVar3;
            func_0x00010bf4b900();
            if (((ulong)puVar4 & 1) == 0) {
              func_0x00010befa120(puVar11);
              func_0x00010befa120(puVar3);
            }
            lVar10 = lVar10 + 1;
          } while (lVar1 != lVar10);
          lVar1 = param_3;
          puVar5 = &uStack_230;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(param_3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
        ___stack_chk_fail();
        lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
        func_0x00010c12c080();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c225c20();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(puVar3);
        func_0x00010bf529e0(puVar5);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar5);
        puVar4 = (undefined *)puVar5;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar4 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar5);
            }
            puVar8 = puVar6;
            func_0x00010bf4b900();
            if ((int)puVar8 != 0) {
              func_0x00010befa120(puVar11);
              func_0x00010befa120(puVar7);
            }
            puVar14 = puVar14 + 1;
          } while (puVar4 != puVar14);
          puVar4 = (undefined *)puVar5;
          func_0x00010bf52a60();
        }
        _objc_release(puVar5);
        func_0x00010c12c080();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = auStack_398;
        puVar4 = puVar3;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar4 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar3);
            }
            puVar8 = puVar7;
            func_0x00010bf4b900();
            if (((ulong)puVar8 & 1) == 0) {
              func_0x00010befa120(puVar11);
            }
            puVar14 = puVar14 + 1;
          } while (puVar4 != puVar14);
          puVar9 = auStack_398;
          puVar4 = puVar3;
          func_0x00010bf52a60();
        }
        _objc_release(puVar3);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
          ___stack_chk_fail();
          _objc_retain(puVar9);
          func_0x00010c0d3c80(puVar5);
          func_0x00010c130f40();
          _objc_release(puVar9);
          puVar11 = (undefined *)puVar5;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
      return puVar11;
    }
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(param_1);
      }
      lVar2 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lVar12 * 8));
      if ((int)lVar2 == 0) {
        puVar11 = (undefined *)0x0;
        goto LAB_10bd4f184;
      }
      lVar12 = lVar12 + 1;
    } while (lVar1 != lVar12);
    lVar1 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10bd4f1cc; end: 10bd4f32f;  */

void FUN_10bd4f1cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_288 [128];
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_1;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar1,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar12 = param_1;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        uVar9 = *(undefined8 *)(lStack_118 + lVar11 * 8);
        puVar3 = puVar2;
        func_0x00010bf4b900(puVar2,param_2,uVar9);
        if (((ulong)puVar3 & 1) == 0) {
          func_0x00010befa120(puVar1,param_2,uVar9);
          func_0x00010befa120(puVar2,param_2,uVar9);
        }
        lVar11 = lVar11 + 1;
      } while (lVar12 != lVar11);
      lVar12 = param_1;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c12c080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar5 = puVar2;
    func_0x00010bf529e0(puVar2);
    puVar6 = (undefined *)puVar4;
    func_0x00010bf529e0(puVar4);
    func_0x00010bf0a0e0(puVar1,param_2,puVar6 + (long)puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    _objc_retain(puVar4);
    puVar6 = (undefined *)puVar4;
    func_0x00010bf52a60(puVar4,param_2,&uStack_2d0,auStack_208,0x10);
    if (puVar6 != (undefined *)0x0) {
      lVar12 = *plStack_2c0;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_2c0 != lVar12) {
            _objc_enumerationMutation(puVar4);
          }
          uVar9 = *(undefined8 *)(lStack_2c8 + (long)puVar13 * 8);
          puVar7 = puVar3;
          func_0x00010bf4b900(puVar3,param_2,uVar9);
          if ((int)puVar7 != 0) {
            func_0x00010befa120(puVar1,param_2,uVar9);
            func_0x00010befa120(puVar5,param_2,uVar9);
          }
          puVar13 = puVar13 + 1;
        } while (puVar6 != puVar13);
        puVar6 = (undefined *)puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_2d0,auStack_208,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    func_0x00010c12c080();
    _objc_retainAutoreleasedReturnValue();
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    puVar8 = auStack_288;
    puVar6 = puVar2;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar12 = *plStack_300;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_300 != lVar12) {
            _objc_enumerationMutation(puVar2);
          }
          uVar9 = *(undefined8 *)(lStack_308 + (long)puVar13 * 8);
          puVar7 = puVar5;
          func_0x00010bf4b900(puVar5,param_2,uVar9);
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010befa120(puVar1,param_2,uVar9);
          }
          puVar13 = puVar13 + 1;
        } while (puVar6 != puVar13);
        puVar8 = auStack_288;
        puVar6 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_310,puVar8,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_retain(puVar8);
      func_0x00010c0d3c80(puVar4);
      func_0x00010c130f40();
      _objc_release(puVar8);
      puVar1 = (undefined *)puVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bd4f330; end: 10bd4f59b;  */

void FUN_10bd4f330(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c12c080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar8 = param_1;
  func_0x00010bf529e0(param_1);
  puVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar3,param_2,puVar2 + lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_e8,0x10);
  if (puVar4 != (undefined *)0x0) {
    lVar8 = *plStack_1a0;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_1a8 + (long)puVar10 * 8);
        puVar5 = puVar1;
        func_0x00010bf4b900(puVar1,param_2,uVar7);
        if ((int)puVar5 != 0) {
          func_0x00010befa120(puVar3,param_2,uVar7);
          func_0x00010befa120(puVar2,param_2,uVar7);
        }
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(param_3);
  func_0x00010c12c080();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puVar6 = auStack_168;
  lVar8 = param_1;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar9 = *plStack_1e0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1e0 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(undefined8 *)(lStack_1e8 + lVar11 * 8);
        puVar4 = puVar2;
        func_0x00010bf4b900(puVar2,param_2,uVar7);
        if (((ulong)puVar4 & 1) == 0) {
          func_0x00010befa120(puVar3,param_2,uVar7);
        }
        lVar11 = lVar11 + 1;
      } while (lVar8 != lVar11);
      puVar6 = auStack_168;
      lVar8 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_1f0,puVar6,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    func_0x00010c0d3c80(param_3);
    func_0x00010c130f40();
    _objc_release(puVar6);
    puVar3 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bd4f59c; end: 10bd4f5f3;  */

void FUN_10bd4f59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c0d3c80(param_1);
  func_0x00010c130f40();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bd4f5f4; end: 10bd4f70b;  */

ulong FUN_10bd4f5f4(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = param_1;
    func_0x00010bf529e0();
    uVar1 = param_3;
    func_0x00010bf529e0();
    uVar3 = 0;
    if ((param_4 != 0) && (uVar4 == uVar1)) {
      uVar3 = param_1;
      func_0x00010bf529e0();
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      else {
        uVar4 = 0;
        do {
          uVar1 = param_1;
          func_0x00010c0dfd40(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0dfd40(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_4;
          (**(code **)(param_4 + 0x10))(param_4,uVar1,uVar2);
          _objc_release(uVar2);
          _objc_release(uVar1);
          if ((uVar3 & 1) == 0) break;
          uVar4 = uVar4 + 1;
          uVar1 = param_1;
          func_0x00010bf529e0();
        } while (uVar4 < uVar1);
      }
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}


