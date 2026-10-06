/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10840839c; end: 10840845f;  */

undefined8 FUN_10840839c(long *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar4 = (ulong)*(uint *)((long)param_1 + 0x14) + 1;
    puVar2 = (uint *)(lVar3 + 0x84);
    while (puVar6 = puVar2, lVar4 = lVar4 + -1, lVar4 != 0) {
      uVar1 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      puVar2 = puVar6 + 3;
      if ((uVar1 >> 0x10 | uVar1 << 0x10) == param_2) {
        *param_3 = param_2;
        uVar1 = (puVar6[2] & 0xff00ff00) >> 8 | (puVar6[2] & 0xff00ff) << 8;
        param_3[2] = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar1 = (puVar6[1] & 0xff00ff00) >> 8 | (puVar6[1] & 0xff00ff) << 8;
        uVar5 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
        *(ulong *)(param_3 + 4) = lVar3 + uVar5;
        uVar1 = *(uint *)(lVar3 + uVar5);
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        param_3[1] = uVar1 >> 0x10 | uVar1 << 0x10;
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 108408460; end: 108408f8b;  */

byte FUN_108408460(uint *param_1,ulong param_2,uint *param_3,uint param_4,undefined8 *param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  byte bVar22;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w9;
  uint extraout_w9_00;
  ulong uVar23;
  uint uVar24;
  byte *pbVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 auStack_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  uint uStack_a8;
  undefined8 *puStack_a0;
  undefined4 uStack_90;
  undefined8 *puStack_88;
  
  if (param_5 == (undefined8 *)0x0) {
    bVar22 = 0;
    goto LAB_108408f84;
  }
  puVar20 = param_5;
  _bzero(param_5,0x3d0);
  iVar19 = (int)puVar20;
  if (0x83 < param_2) {
    *param_5 = param_1;
    uVar24 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar11 = uVar24 >> 0x10 | uVar24 << 0x10;
    *(uint *)(param_5 + 1) = uVar11;
    uVar5 = param_1[2];
    uVar6 = param_1[4];
    uVar24 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    *(uint *)((long)param_5 + 0xc) = uVar24 >> 0x10 | uVar24 << 0x10;
    uVar7 = param_1[5];
    uVar24 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar12 = uVar24 >> 0x10 | uVar24 << 0x10;
    *(uint *)(param_5 + 2) = uVar12;
    uVar8 = param_1[9];
    uVar24 = param_1[0x11];
    uVar2 = param_1[0x12];
    uVar9 = param_1[0x13];
    uVar13 = (param_1[0x20] & 0xff00ff00) >> 8 | (param_1[0x20] & 0xff00ff) << 8;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    *(uint *)((long)param_5 + 0x14) = uVar13;
    if ((((uVar8 == 0x70736361) &&
         ((uVar11 <= param_2 && (ulong)uVar13 * 0xc + 0x84 <= (ulong)uVar11) && (uVar5 & 0xff) < 5))
        && (uVar24 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8,
           fVar33 = (float)(int)(uVar24 >> 0x10 | uVar24 << 0x10) / 65536.0,
           ABS(fVar33 + -0.9642) <= 0.01)) &&
       ((uVar24 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8,
        fVar34 = (float)(int)(uVar24 >> 0x10 | uVar24 << 0x10) / 65536.0, ABS(fVar34 + -1.0) <= 0.01
        && (uVar24 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8,
           fVar35 = (float)(int)(uVar24 >> 0x10 | uVar24 << 0x10) / 65536.0,
           ABS(fVar35 + -0.8249) <= 0.01)))) {
      param_1 = param_1 + 0x23;
      lVar28 = (ulong)uVar13 + 1;
      do {
        lVar28 = lVar28 + -1;
        if (lVar28 == 0) {
          if (uVar12 != 0x58595a20 && uVar12 != 0x4c616220) break;
          if (uVar6 == 0x59415247) {
            func_0x00010840aa3c();
            FUN_10840839c();
            bVar17 = iVar19 == 0;
            iVar19 = 0;
            if (bVar17) goto LAB_108408660;
            func_0x00010840a978(puStack_88,uStack_90,param_5 + 3);
            if ((int)puStack_88 == 0) break;
            param_5[8] = param_5[4];
            param_5[7] = param_5[3];
            param_5[10] = param_5[6];
            param_5[9] = param_5[5];
            param_5[0xc] = param_5[4];
            param_5[0xb] = param_5[3];
            param_5[0xe] = param_5[6];
            param_5[0xd] = param_5[5];
            *(undefined1 *)((long)param_5 + 0x3c4) = 1;
            puVar20 = puStack_88;
            if (uVar7 == 0x205a5958) {
              *(float *)(param_5 + 0xf) = fVar33;
              *(float *)(param_5 + 0x11) = fVar34;
              *(float *)(param_5 + 0x13) = fVar35;
              goto LAB_108408658;
            }
          }
          else {
LAB_108408660:
            func_0x00010840aa3c();
            FUN_10840839c();
            if (iVar19 != 0) {
              func_0x00010840aa3c();
              FUN_10840839c();
              if (iVar19 != 0) {
                func_0x00010840aa3c();
                FUN_10840839c();
                if (iVar19 != 0) {
                  puVar20 = puStack_a0;
                  func_0x00010840a978(puStack_a0,uStack_a8,param_5 + 3);
                  if ((((int)puVar20 == 0) ||
                      (func_0x00010840a978(uStack_b8,uStack_c0,param_5 + 7), (int)uStack_b8 == 0))
                     || (func_0x00010840a978(uStack_d0,uStack_d8,param_5 + 0xb), (int)uStack_d0 == 0
                        )) break;
                  *(undefined1 *)((long)param_5 + 0x3c4) = 1;
                }
              }
            }
            puVar20 = param_5;
            FUN_10840839c(param_5,0x7258595a,auStack_f8);
            if ((((int)puVar20 != 0) &&
                (puVar20 = param_5, FUN_10840839c(param_5,0x6758595a,auStack_110), (int)puVar20 != 0
                )) && (puVar20 = param_5, FUN_10840839c(param_5,0x6258595a,auStack_128),
                      (int)puVar20 != 0)) {
              puVar21 = auStack_f8;
              func_0x000108408404(puVar21,param_5 + 0xf,(long)param_5 + 0x84,param_5 + 0x12);
              if ((int)puVar21 == 0) break;
              puVar21 = auStack_110;
              func_0x000108408404(puVar21,(long)param_5 + 0x7c,param_5 + 0x11,(long)param_5 + 0x94);
              if ((int)puVar21 == 0) break;
              puVar20 = auStack_128;
              func_0x000108408404(puVar20,param_5 + 0x10,(long)param_5 + 0x8c,param_5 + 0x13);
              if ((int)puVar20 == 0) break;
LAB_108408658:
              *(undefined1 *)((long)param_5 + 0x3c5) = 1;
            }
          }
          uVar29 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU));
          uVar30 = uVar29;
          puVar14 = param_3;
          goto joined_r0x00010840878c;
        }
        puVar14 = param_1 + -1;
        uVar24 = *param_1;
        param_1 = param_1 + 3;
        uVar2 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
        uVar24 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
        uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
      } while (3 < uVar24 && (ulong)uVar24 + (ulong)(uVar2 >> 0x10 | uVar2 << 0x10) <= (ulong)uVar11
              );
    }
  }
  goto LAB_108408f5c;
joined_r0x00010840878c:
  if (uVar30 == 0) goto joined_r0x0001084087b8;
  if (2 < *puVar14) goto LAB_108408f5c;
  func_0x00010840a9bc();
  puVar15 = puStack_a0;
  iVar19 = (int)puVar20;
  if (((ulong)puVar20 & 1) != 0) {
    bVar17 = iStack_ac == 0x6d414220;
    if (!bVar17) {
      func_0x00010840aa30();
      if (bVar17) {
        uVar30 = (ulong)uStack_a8;
        uVar16 = 0x33 < uStack_a8;
        uVar18 = uStack_a8 == 0x34;
        if (((!(bool)uVar16) || (func_0x00010840a99c(), iVar19 == 0)) ||
           ((func_0x00010840a9cc(uRam0000000041324260), !(bool)uVar16 || (bool)uVar18 ||
            (func_0x00010840aa70(), !(bool)uVar16 || (bool)uVar18)))) goto LAB_108408f5c;
        puVar20 = (undefined8 *)0x41324264;
        func_0x00010840a5d8(0x41324264,uVar30 - 0x34,2,
                            ((extraout_w8 & 0xff00ff00) >> 8 | (extraout_w8 & 0xff00ff) << 8) &
                            0xffff,((extraout_w9 & 0xff00ff00) >> 8 | (extraout_w9 & 0xff00ff) << 8)
                                   & 0xffff,param_5 + 0x14);
        if ((int)puVar20 == 0) goto LAB_108408f5c;
      }
      else {
        func_0x00010840aa30();
        if (((!bVar17) || (uVar30 = (ulong)uStack_a8, uStack_a8 < 0x30)) ||
           (func_0x00010840a99c(), iVar19 == 0)) goto LAB_108408f5c;
        puVar20 = (undefined8 *)0x41324260;
        func_0x00010840a5d8(0x41324260,uVar30 - 0x30,1,0x100,0x100,param_5 + 0x14);
        if (((ulong)puVar20 & 1) == 0) goto LAB_108408f5c;
      }
      uVar24 = *(uint *)(param_5 + 0x26);
      goto LAB_108408964;
    }
    uVar30 = (ulong)uStack_a8;
    if (uStack_a8 < 0x20) goto LAB_108408f5c;
    bVar22 = *(byte *)(puStack_a0 + 1);
    *(uint *)(param_5 + 0x26) = (uint)bVar22;
    bVar10 = *(byte *)((long)puStack_a0 + 9);
    *(uint *)((long)param_5 + 0x1cc) = (uint)bVar10;
    if ((bVar10 != 3 || 4 < bVar22) || (uVar24 = *(uint *)((long)puStack_a0 + 0xc), uVar24 == 0))
    goto LAB_108408f5c;
    uVar2 = *(uint *)(puStack_a0 + 2);
    iVar19 = *(int *)((long)puStack_a0 + 0x14);
    uVar5 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
    uVar24 = *(uint *)(puStack_a0 + 3);
    iVar3 = *(int *)((long)puStack_a0 + 0x1c);
    puVar20 = puStack_a0;
    FUN_10840a6b4(puStack_a0,uVar30,uVar5 >> 0x10 | uVar5 << 0x10,bVar10,param_5 + 0x3a);
    if ((int)puVar20 == 0) goto LAB_108408f5c;
    if (iVar19 == 0) {
      if (uVar2 != 0) goto LAB_108408f5c;
      *(undefined4 *)(param_5 + 0x39) = 0;
    }
    else {
      if (uVar2 == 0) goto LAB_108408f5c;
      *(undefined4 *)(param_5 + 0x39) = *(undefined4 *)((long)param_5 + 0x1cc);
      func_0x00010840a9fc();
      if (((int)puVar20 == 0) ||
         (uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8,
         uVar30 < (ulong)(uVar2 >> 0x10 | uVar2 << 0x10) + 0x30)) goto LAB_108408f5c;
      uVar32 = 0x3f800000;
      uVar31 = 0x3fffff00;
      if (uVar7 != 0x205a5958) {
        uVar31 = 0x3f800000;
      }
      func_0x00010840a8dc();
      *(undefined4 *)(param_5 + 0x33) = uVar32;
      func_0x00010840a8dc();
      *(undefined4 *)((long)param_5 + 0x19c) = uVar32;
      func_0x00010840a8dc();
      *(undefined4 *)(param_5 + 0x34) = uVar32;
      func_0x00010840a8dc();
      *(undefined4 *)(param_5 + 0x35) = uVar32;
      func_0x00010840a8dc();
      *(undefined4 *)((long)param_5 + 0x1ac) = uVar32;
      func_0x00010840a8dc();
      *(undefined4 *)(param_5 + 0x36) = uVar32;
      func_0x00010840a8dc();
      *(undefined4 *)(param_5 + 0x37) = uVar32;
      func_0x00010840a8dc();
      *(undefined4 *)((long)param_5 + 0x1bc) = uVar32;
      func_0x00010840a8dc();
      *(undefined4 *)(param_5 + 0x38) = uVar32;
      func_0x00010840a8dc();
      *(undefined4 *)((long)param_5 + 0x1a4) = uVar32;
      func_0x00010840a8dc();
      *(undefined4 *)((long)param_5 + 0x1b4) = uVar32;
      func_0x00010840aa1c();
      *(undefined4 *)((long)param_5 + 0x1c4) = uVar31;
    }
    if (iVar3 == 0) {
      if ((uVar24 != 0) || (*(int *)(param_5 + 0x26) != *(int *)((long)param_5 + 0x1cc)))
      goto LAB_108408f5c;
      *(undefined4 *)(param_5 + 0x26) = 0;
      goto LAB_1084089ac;
    }
    if ((uVar24 == 0) || (func_0x00010840a9fc(), (int)puVar20 == 0)) goto LAB_108408f5c;
    uVar24 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
    uVar27 = (ulong)(uVar24 >> 0x10 | uVar24 << 0x10);
    uVar23 = uVar27 + 0x14;
    if (uVar30 < uVar23) goto LAB_108408f5c;
    pbVar1 = (byte *)((long)puVar15 + uVar27);
    if (pbVar1[0x10] == 2) {
      param_5[0x24] = 0;
      pbVar25 = pbVar1 + 0x14;
    }
    else {
      if (pbVar1[0x10] != 1) goto LAB_108408f5c;
      pbVar25 = (byte *)0x0;
      param_5[0x24] = pbVar1 + 0x14;
    }
    param_5[0x25] = pbVar25;
    uVar27 = (ulong)(*(int *)((long)param_5 + 0x1cc) * (uint)pbVar1[0x10]);
    uVar24 = *(uint *)(param_5 + 0x26);
    uVar26 = (ulong)uVar24;
    pbVar25 = (byte *)((long)param_5 + 0x134);
    goto joined_r0x000108408edc;
  }
  puVar14 = puVar14 + 1;
  uVar30 = uVar30 - 1;
  goto joined_r0x00010840878c;
joined_r0x000108408edc:
  if (uVar26 == 0) goto LAB_108408efc;
  bVar22 = *pbVar1;
  *pbVar25 = bVar22;
  if ((ulong)bVar22 < 2) goto LAB_108408f5c;
  uVar27 = uVar27 * bVar22;
  uVar26 = uVar26 - 1;
  pbVar1 = pbVar1 + 1;
  pbVar25 = pbVar25 + 1;
  goto joined_r0x000108408edc;
joined_r0x000108408f30:
  if (uVar27 == 0) goto LAB_108408f50;
  bVar22 = *pbVar1;
  *pbVar25 = bVar22;
  if ((ulong)bVar22 < 2) goto LAB_108408f5c;
  uVar23 = uVar23 * bVar22;
  uVar27 = uVar27 - 1;
  pbVar1 = pbVar1 + 1;
  pbVar25 = pbVar25 + 1;
  goto joined_r0x000108408f30;
LAB_108408f50:
  if (uVar23 + uVar29 <= uVar30) {
LAB_108408bd0:
    if (((uVar24 != 0) && (FUN_10840a448(param_5 + 0x46), 1 < *(uint *)(param_5 + 0x52))) &&
       (FUN_10840a448(param_5 + 0x4a), 2 < *(uint *)(param_5 + 0x52))) {
      FUN_10840a448(param_5 + 0x4e);
    }
    if (((*(int *)((long)param_5 + 0x294) != 0) &&
        (FUN_10840a448(param_5 + 0x53), 1 < *(uint *)((long)param_5 + 0x294))) &&
       (FUN_10840a448(param_5 + 0x57), 2 < *(uint *)((long)param_5 + 0x294))) {
      FUN_10840a448(param_5 + 0x5b);
    }
    if (((*(int *)((long)param_5 + 0x3bc) != 0) &&
        (FUN_10840a448(param_5 + 0x65), 1 < *(uint *)((long)param_5 + 0x3bc))) &&
       ((FUN_10840a448(param_5 + 0x69), 2 < *(uint *)((long)param_5 + 0x3bc) &&
        (FUN_10840a448(param_5 + 0x6d), 3 < *(uint *)((long)param_5 + 0x3bc))))) {
      FUN_10840a448(param_5 + 0x71);
    }
    *(undefined1 *)((long)param_5 + 0x3c7) = 1;
LAB_1084087d8:
    puVar20 = param_5;
    FUN_10840839c(param_5,0x63696370,auStack_b0);
    if ((int)puVar20 != 0) {
      if (iStack_ac != 0x63696370 || uStack_a8 < 0xc) goto LAB_108408f5c;
      *(undefined1 *)(param_5 + 0x78) = *(undefined1 *)(puStack_a0 + 1);
      *(undefined1 *)((long)param_5 + 0x3c1) = *(undefined1 *)((long)puStack_a0 + 9);
      *(undefined1 *)((long)param_5 + 0x3c2) = *(undefined1 *)((long)puStack_a0 + 10);
      *(undefined1 *)((long)param_5 + 0x3c3) = *(undefined1 *)((long)puStack_a0 + 0xb);
      *(undefined1 *)(param_5 + 0x79) = 1;
    }
    if ((*(byte *)((long)param_5 + 0x3c6) & 1) != 0) {
      bVar22 = 1;
      goto LAB_108408f84;
    }
    if (*(char *)((long)param_5 + 0x3c4) == '\x01') {
      bVar22 = *(byte *)((long)param_5 + 0x3c5);
      goto LAB_108408f84;
    }
  }
  goto LAB_108408f5c;
LAB_108408efc:
  if (uVar27 + uVar23 <= uVar30) {
LAB_108408964:
    if (uVar24 != 0) {
      puVar20 = param_5 + 0x14;
      FUN_10840a448();
      if (1 < *(uint *)(param_5 + 0x26)) {
        puVar20 = param_5 + 0x18;
        FUN_10840a448();
        if (2 < *(uint *)(param_5 + 0x26)) {
          puVar20 = param_5 + 0x1c;
          FUN_10840a448();
          if (3 < *(uint *)(param_5 + 0x26)) {
            puVar20 = param_5 + 0x20;
            FUN_10840a448();
          }
        }
      }
    }
LAB_1084089ac:
    if (*(int *)(param_5 + 0x39) != 0) {
      puVar20 = param_5 + 0x27;
      FUN_10840a448();
      if (1 < *(uint *)(param_5 + 0x39)) {
        puVar20 = param_5 + 0x2b;
        FUN_10840a448();
        if (2 < *(uint *)(param_5 + 0x39)) {
          puVar20 = param_5 + 0x2f;
          FUN_10840a448();
        }
      }
    }
    if (*(int *)((long)param_5 + 0x1cc) != 0) {
      puVar20 = param_5 + 0x3a;
      FUN_10840a448();
      if (1 < *(uint *)((long)param_5 + 0x1cc)) {
        puVar20 = param_5 + 0x3e;
        FUN_10840a448();
        if (2 < *(uint *)((long)param_5 + 0x1cc)) {
          puVar20 = param_5 + 0x42;
          FUN_10840a448();
        }
      }
    }
    *(undefined1 *)((long)param_5 + 0x3c6) = 1;
joined_r0x0001084087b8:
    do {
      if (uVar29 == 0) goto LAB_1084087d8;
      if (2 < *param_3) break;
      func_0x00010840a9bc();
      puVar15 = puStack_a0;
      iVar19 = (int)puVar20;
      if (((ulong)puVar20 & 1) != 0) {
        bVar17 = iStack_ac == 0x6d424120;
        if (!bVar17) {
          func_0x00010840aa30();
          if (bVar17) {
            uVar30 = (ulong)uStack_a8;
            uVar16 = 0x33 < uStack_a8;
            uVar18 = uStack_a8 == 0x34;
            if ((((!(bool)uVar16) || (func_0x00010840a98c(), iVar19 == 0)) ||
                (func_0x00010840a9cc((short)param_3[0xd]), !(bool)uVar16 || (bool)uVar18)) ||
               (func_0x00010840aa70(), !(bool)uVar16 || (bool)uVar18)) break;
            param_3 = param_3 + 0xe;
            func_0x00010840a7ac(param_3,uVar30 - 0x34,2,
                                ((extraout_w8_00 & 0xff00ff00) >> 8 |
                                (extraout_w8_00 & 0xff00ff) << 8) & 0xffff,
                                ((extraout_w9_00 & 0xff00ff00) >> 8 |
                                (extraout_w9_00 & 0xff00ff) << 8) & 0xffff,param_5 + 0x46);
            if ((int)param_3 == 0) break;
          }
          else {
            func_0x00010840aa30();
            if (((!bVar17) || (uVar30 = (ulong)uStack_a8, uStack_a8 < 0x30)) ||
               (func_0x00010840a98c(), iVar19 == 0)) break;
            param_3 = param_3 + 0xd;
            func_0x00010840a7ac(param_3,uVar30 - 0x30,1,0x100,0x100,param_5 + 0x46);
            if (((ulong)param_3 & 1) == 0) break;
          }
          uVar24 = *(uint *)(param_5 + 0x52);
          goto LAB_108408bd0;
        }
        uVar30 = (ulong)uStack_a8;
        if (uStack_a8 < 0x20) break;
        bVar22 = *(byte *)(puStack_a0 + 1);
        *(uint *)(param_5 + 0x52) = (uint)bVar22;
        bVar10 = *(byte *)((long)puStack_a0 + 9);
        *(uint *)((long)param_5 + 0x3bc) = (uint)bVar10;
        if ((bVar22 != 3 || bVar10 - 5 < 0xfffffffe) || (*(int *)((long)puStack_a0 + 0xc) == 0))
        break;
        uVar24 = *(uint *)(puStack_a0 + 2);
        iVar3 = *(int *)((long)puStack_a0 + 0x14);
        uVar2 = *(uint *)(puStack_a0 + 3);
        iVar4 = *(int *)((long)puStack_a0 + 0x1c);
        func_0x00010840a908();
        if (iVar19 == 0) break;
        if (iVar3 == 0) {
          if (uVar24 != 0) break;
          *(undefined4 *)((long)param_5 + 0x294) = 0;
        }
        else {
          if (uVar24 == 0) break;
          *(undefined4 *)((long)param_5 + 0x294) = *(undefined4 *)(param_5 + 0x52);
          func_0x00010840a908();
          if ((iVar19 == 0) ||
             (uVar24 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8,
             uVar30 < (ulong)(uVar24 >> 0x10 | uVar24 << 0x10) + 0x30)) break;
          uVar32 = 0x3f800000;
          uVar31 = 0x3f000080;
          if (uVar7 != 0x205a5958) {
            uVar31 = 0x3f800000;
          }
          func_0x00010840a8dc();
          *(undefined4 *)(param_5 + 0x5f) = uVar32;
          func_0x00010840a8dc();
          *(undefined4 *)((long)param_5 + 0x2fc) = uVar32;
          func_0x00010840a8dc();
          *(undefined4 *)(param_5 + 0x60) = uVar32;
          func_0x00010840a8dc();
          *(undefined4 *)(param_5 + 0x61) = uVar32;
          func_0x00010840a8dc();
          *(undefined4 *)((long)param_5 + 0x30c) = uVar32;
          func_0x00010840a8dc();
          *(undefined4 *)(param_5 + 0x62) = uVar32;
          func_0x00010840a8dc();
          *(undefined4 *)(param_5 + 99) = uVar32;
          func_0x00010840a8dc();
          *(undefined4 *)((long)param_5 + 0x31c) = uVar32;
          func_0x00010840a8dc();
          *(undefined4 *)(param_5 + 100) = uVar32;
          func_0x00010840a8dc();
          *(undefined4 *)((long)param_5 + 0x304) = uVar32;
          func_0x00010840a8dc();
          *(undefined4 *)((long)param_5 + 0x314) = uVar32;
          func_0x00010840aa1c();
          *(undefined4 *)((long)param_5 + 0x324) = uVar31;
        }
        if (iVar4 == 0) {
          if ((uVar2 != 0) ||
             (uVar24 = *(uint *)(param_5 + 0x52), uVar24 != *(uint *)((long)param_5 + 0x3bc)))
          break;
          *(undefined4 *)((long)param_5 + 0x3bc) = 0;
          goto LAB_108408bd0;
        }
        if ((uVar2 == 0) || (func_0x00010840a908(), iVar19 == 0)) break;
        uVar24 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        uVar23 = (ulong)(uVar24 >> 0x10 | uVar24 << 0x10);
        uVar29 = uVar23 + 0x14;
        if (uVar30 < uVar29) break;
        pbVar1 = (byte *)((long)puVar15 + uVar23);
        if (pbVar1[0x10] == 2) {
          param_5[0x75] = 0;
          pbVar25 = pbVar1 + 0x14;
        }
        else {
          if (pbVar1[0x10] != 1) break;
          pbVar25 = (byte *)0x0;
          param_5[0x75] = pbVar1 + 0x14;
        }
        param_5[0x76] = pbVar25;
        uVar23 = (ulong)(*(int *)((long)param_5 + 0x3bc) * (uint)pbVar1[0x10]);
        uVar24 = *(uint *)(param_5 + 0x52);
        uVar27 = (ulong)uVar24;
        pbVar25 = (byte *)(param_5 + 0x77);
        goto joined_r0x000108408f30;
      }
      uVar29 = uVar29 - 1;
      param_3 = param_3 + 1;
    } while( true );
  }
LAB_108408f5c:
  bVar22 = 0;
LAB_108408f84:
  return bVar22 & 1;
}



/* Entry: 108408f8c; end: 10840918b;  */

bool FUN_108408f8c(undefined8 param_1,float param_2,uint *param_3,uint param_4,uint *param_5,
                  undefined4 *param_6)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *extraout_x8;
  float *extraout_x8_00;
  float *extraout_x8_01;
  float *extraout_x8_02;
  float fVar6;
  float fVar7;
  
  if (param_3 == (uint *)0x0) {
    return false;
  }
  if (param_4 < 4) {
    return false;
  }
  uVar3 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (uVar3 == 0x63757276) {
    if (0xb < param_4) {
      uVar3 = param_3[2];
      uVar4 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar1 = (ulong)uVar4 * 2 + 0xc;
      if (uVar1 <= param_4) {
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = (int)uVar1;
        }
        if (uVar4 < 2) {
          *param_5 = 0;
          param_5[2] = 0x3f800000;
          param_5[5] = 0;
          param_5[6] = 0;
          param_5[3] = 0;
          param_5[4] = 0;
          param_5[7] = 0;
          if (uVar3 == 0) {
            param_5[1] = 0x3f800000;
          }
          else {
            param_5[1] = (uint)((float)(ushort)((ushort)param_3[3] >> 8 | (ushort)param_3[3] << 8) /
                               256.0);
          }
        }
        else {
          param_5[2] = 0;
          param_5[3] = 0;
          *(uint **)(param_5 + 4) = param_3 + 3;
          *param_5 = uVar4;
        }
        return true;
      }
    }
    return false;
  }
  if (uVar3 != 0x70617261) {
    return false;
  }
  if (param_4 < 0xc) {
    return false;
  }
  uVar2 = (ushort)param_3[2];
  if (4 < ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) {
    return false;
  }
  uVar3 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
  if ((ulong)param_4 < (ulong)*(uint *)(&UNK_10df2cea0 + (ulong)uVar3 * 4) + 0xc) {
    return false;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = (int)((ulong)*(uint *)(&UNK_10df2cea0 + (ulong)uVar3 * 4) + 0xc);
  }
  *param_5 = 0;
  param_5[2] = 0x3f800000;
  param_5[5] = 0;
  param_5[6] = 0;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[7] = 0;
  uVar4 = (param_3[3] & 0xff00ff00) >> 8 | (param_3[3] & 0xff00ff) << 8;
  fVar6 = (float)(int)(uVar4 >> 0x10 | uVar4 << 0x10) / 65536.0;
  pfVar5 = (float *)(param_5 + 1);
  *pfVar5 = fVar6;
  switch(uVar3) {
  case 1:
    func_0x00010840aa84();
    if (fVar6 == 0.0) {
      return false;
    }
    fVar6 = -param_2 / fVar6;
    pfVar5 = extraout_x8;
    goto code_r0x000108409114;
  case 2:
    func_0x00010840aa84();
    uVar3 = (param_3[6] & 0xff00ff00) >> 8 | (param_3[6] & 0xff00ff) << 8;
    fVar7 = (float)(int)(uVar3 >> 0x10 | uVar3 << 0x10) / 65536.0;
    param_5[6] = (uint)fVar7;
    if (fVar6 == 0.0) {
      return false;
    }
    param_5[5] = (uint)(-param_2 / fVar6);
    param_5[7] = (uint)fVar7;
    pfVar5 = extraout_x8_02;
    break;
  case 3:
    func_0x00010840a938();
    pfVar5 = extraout_x8_00;
code_r0x000108409114:
    param_5[5] = (uint)fVar6;
    break;
  case 4:
    func_0x00010840a938();
    param_5[5] = (uint)fVar6;
    uVar3 = (param_3[8] & 0xff00ff00) >> 8 | (param_3[8] & 0xff00ff) << 8;
    param_5[6] = (uint)((float)(int)(uVar3 >> 0x10 | uVar3 << 0x10) / 65536.0);
    uVar3 = (param_3[9] & 0xff00ff00) >> 8 | (param_3[9] & 0xff00ff) << 8;
    param_5[7] = (uint)((float)(int)(uVar3 >> 0x10 | uVar3 << 0x10) / 65536.0);
    pfVar5 = extraout_x8_01;
  }
  func_0x00010840a8fc(pfVar5);
  return (int)pfVar5 == 1;
}



/* Entry: 10840918c; end: 1084092db;  */

byte * FUN_10840918c(float param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                    undefined8 *param_5,byte *param_6,undefined8 *param_7,int param_8,
                    undefined8 *param_9)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long extraout_x8;
  undefined4 *extraout_x8_00;
  undefined4 *extraout_x8_01;
  undefined4 *extraout_x8_02;
  undefined4 *extraout_x8_03;
  undefined4 *extraout_x8_04;
  undefined4 *extraout_x8_05;
  undefined4 *extraout_x8_06;
  undefined4 *extraout_x8_07;
  undefined4 *extraout_x8_08;
  undefined4 *extraout_x8_09;
  undefined4 *extraout_x8_10;
  undefined4 *extraout_x8_11;
  undefined4 *extraout_x8_12;
  undefined4 *extraout_x8_13;
  undefined4 *extraout_x8_14;
  undefined4 *extraout_x8_15;
  undefined4 *extraout_x8_16;
  undefined4 *extraout_x8_17;
  undefined4 *puVar12;
  ulong uVar13;
  long extraout_x8_18;
  undefined4 uVar14;
  long extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *extraout_x9_03;
  long *extraout_x9_04;
  undefined8 *extraout_x9_05;
  long extraout_x9_06;
  undefined4 *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w12_04;
  int extraout_w12_05;
  int extraout_w12_06;
  int extraout_w12_07;
  int extraout_w12_08;
  int extraout_w12_09;
  int extraout_w12_10;
  int extraout_w12_11;
  int extraout_w12_12;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 auStack_900 [15];
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined4 uStack_868;
  undefined1 uStack_53b;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined4 uStack_510;
  undefined4 ***pppuStack_500;
  undefined4 **ppuStack_4f8;
  undefined ***pppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined4 *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 auStack_4d0 [3];
  undefined4 uStack_4b8;
  undefined4 auStack_4a8 [8];
  undefined4 uStack_488;
  undefined8 auStack_484 [3];
  undefined4 uStack_468;
  undefined8 auStack_464 [3];
  undefined8 uStack_448;
  undefined *apuStack_440 [31];
  ulong uStack_348;
  undefined4 auStack_340 [30];
  undefined8 uStack_2c8;
  long lStack_250;
  byte abStack_240 [504];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  if (param_2 == param_3) {
LAB_1084092a4:
    pbVar3 = (byte *)0x1;
  }
  else {
    param_4 = 0x3d0;
    puVar19 = param_2;
    _memcmp();
    if ((int)puVar19 == 0) goto LAB_1084092a4;
    iVar20 = *(int *)((long)param_2 + 0xc);
    if ((iVar20 == 0x434d594b) == (*(int *)((long)param_3 + 0xc) != 0x434d594b)) {
      pbVar3 = (byte *)0x0;
    }
    else {
      uVar10 = 0xc;
      if (iVar20 != 0x434d594b) {
        uVar10 = 10;
      }
      puVar19 = (undefined8 *)(ulong)uVar10;
      lStack_250 = 0x3f;
      if (iVar20 != 0x434d594b) {
        lStack_250 = 0x54;
      }
      pbVar3 = &UNK_10df2cccc;
      param_9 = (undefined8 *)&UNK_10df2c8e0;
      param_6 = abStack_240 + 0xfc;
      param_4 = 1;
      puVar8 = puVar19;
      func_0x00010840a9e4();
      param_5 = param_2;
      if ((int)pbVar3 != 0) {
        pbVar3 = &UNK_10df2cccc;
        param_9 = (undefined8 *)&UNK_10df2c8e0;
        param_6 = abStack_240;
        param_4 = 1;
        func_0x00010840a9e4();
        puVar8 = puVar19;
        param_5 = param_3;
        if ((int)pbVar3 != 0) {
          lVar11 = 0;
          do {
            pbVar3 = (byte *)(ulong)(lVar11 == 0xfc);
            if (lVar11 == 0xfc) break;
            uVar1 = (uint)abStack_240[lVar11 + 0xfc] - (uint)abStack_240[lVar11];
            uVar10 = -uVar1;
            if (-1 < (int)uVar1) {
              uVar10 = uVar1;
            }
            lVar11 = lVar11 + 1;
          } while (uVar10 < 2);
        }
      }
    }
  }
  func_0x00010840a914(uStack_48);
  if (extraout_x9 == extraout_x8) {
    return pbVar3;
  }
  ___stack_chk_fail();
  uStack_2c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_7;
  puVar19 = puVar8;
  FUN_10840a184();
  puVar5 = puVar8;
  FUN_10840a184();
  pbVar6 = (byte *)0x0;
  if (((ulong)((long)puVar4 * lStack_250) >> 0x1f != 0) ||
     ((ulong)((long)puVar5 * lStack_250) >> 0x1f != 0)) goto LAB_108409a58;
  puVar7 = (undefined8 *)&UNK_10df2c510;
  if (param_5 != (undefined8 *)0x0) {
    puVar7 = param_5;
  }
  puVar9 = (undefined8 *)&UNK_10df2c510;
  if (param_9 != (undefined8 *)0x0) {
    puVar9 = param_9;
  }
  if (param_6 == pbVar3 && puVar4 != puVar5) {
LAB_108409978:
    pbVar6 = (byte *)0x0;
  }
  else {
    ppuStack_4f8 = &puStack_4e0;
    pppuStack_4f0 = &ppuStack_4e8;
    pppuStack_500 = &ppuStack_4f8;
    uStack_468 = 0;
    iVar20 = (int)puVar8;
    uStack_488 = 0;
    auStack_4a8[0] = 0;
    switch(iVar20 >> 1) {
    case 0:
      func_0x00010840a8ec();
      uStack_348 = uStack_348 & 0xffffffff00000000;
      puVar15 = extraout_x8_08;
      goto code_r0x0001084094e0;
    case 1:
      func_0x00010840a8ec();
      uVar14 = 1;
      puVar15 = extraout_x8_09;
      break;
    case 2:
      func_0x00010840a8ec();
      uVar14 = 2;
      puVar15 = extraout_x8_06;
      break;
    case 3:
      func_0x00010840a8ec();
      uVar14 = 4;
      puVar15 = extraout_x8_07;
      break;
    case 4:
      func_0x00010840a8ec();
      uVar14 = 3;
      puVar15 = extraout_x8_03;
      break;
    case 5:
      func_0x00010840a8ec();
      uVar14 = 5;
      puVar15 = extraout_x8_10;
      break;
    case 6:
      func_0x00010840a8ec();
      uVar14 = 6;
      puVar15 = extraout_x8_12;
      break;
    case 7:
      puVar15 = auStack_340;
      param_1 = 8.40779e-45;
      uStack_348 = 0x2500000006;
      ppuVar16 = apuStack_440 + 1;
      apuStack_440[0] = &UNK_10df2c52c;
      puStack_4e0 = puVar15;
      goto code_r0x0001084094f0;
    case 8:
      func_0x00010840a8ec();
      uVar14 = 7;
      puVar15 = extraout_x8_14;
      break;
    case 9:
      func_0x00010840a8ec();
      uVar14 = 10;
      puVar15 = extraout_x8_05;
      break;
    case 10:
      func_0x00010840a8ec();
      uVar14 = 0xb;
      puVar15 = extraout_x8_13;
      break;
    case 0xb:
      func_0x00010840a8ec();
      uVar14 = 0xc;
      puVar15 = extraout_x8_02;
      break;
    case 0xc:
      func_0x00010840a8ec();
      uVar14 = 0xd;
      puVar15 = extraout_x8_04;
      break;
    case 0xd:
    case 0xf:
      func_0x00010840a8ec();
      uVar14 = 0xe;
      puVar15 = extraout_x8_00;
      break;
    case 0xe:
    case 0x10:
      func_0x00010840a8ec();
      uVar14 = 0xf;
      puVar15 = extraout_x8_01;
      break;
    case 0x11:
      func_0x00010840a8ec();
      uVar14 = 0x10;
      puVar15 = extraout_x8_11;
      break;
    case 0x12:
      func_0x00010840a8ec();
      uVar14 = 0x11;
      puVar15 = extraout_x8_16;
      break;
    case 0x13:
      func_0x00010840a8ec();
      uVar14 = 8;
      puVar15 = extraout_x8_17;
      break;
    case 0x14:
      func_0x00010840a8ec();
      uVar14 = 9;
      puVar15 = extraout_x8_15;
      break;
    default:
      goto LAB_108409978;
    }
    uStack_348 = CONCAT44(uStack_348._4_4_,uVar14);
code_r0x0001084094e0:
    ppuVar16 = apuStack_440;
code_r0x0001084094f0:
    uStack_448 = 0;
    puVar12 = puVar15;
    ppuStack_4e8 = ppuVar16;
    if (iVar20 == 0x1c || iVar20 == 0x1a) {
      puVar12 = puVar15 + 1;
      *puVar15 = 0x13;
      ppuStack_4e8 = ppuVar16 + 1;
      *ppuVar16 = (undefined *)0x0;
      puStack_4e0 = puVar12;
    }
    if (((ulong)puVar8 & 1) != 0) {
      puStack_4e0 = puVar12 + 1;
      *puVar12 = 0x12;
      *ppuStack_4e8 = (undefined *)0x0;
      ppuStack_4e8 = ppuStack_4e8 + 1;
    }
    iVar20 = (int)param_7 >> 1;
    puVar8 = puVar9;
    if (iVar20 == 4 || iVar20 == 2) {
      _memcpy(auStack_900,puVar9,0x3d0);
      uStack_53b = 1;
      uStack_868 = 0x3f800000;
      param_1 = 1.0;
      uStack_880 = 0;
      uStack_888 = 0x3f800000;
      uStack_870 = 0;
      uStack_878 = 0x3f800000;
      puVar8 = auStack_900;
      puVar19 = puVar9;
    }
    func_0x00010840a924();
    if (*(int *)((long)puVar7 + 0xc) == extraout_w12) {
      uVar14 = 0x14;
code_r0x0001084095a4:
      *puStack_4e0 = uVar14;
      puStack_4e0 = puStack_4e0 + 1;
      func_0x00010840a8c8();
      iVar18 = extraout_w12_00;
    }
    else {
      if (param_4 == 0) {
        uVar14 = 0x15;
        goto code_r0x0001084095a4;
      }
      iVar18 = extraout_w12;
      if (param_4 == 2) {
        uVar14 = 0x17;
        goto code_r0x0001084095a4;
      }
    }
    if (puVar8 != puVar7) {
      if ((*(byte *)((long)puVar8 + 0x3c7) & 1) == 0) {
        if ((((*(char *)((long)puVar8 + 0x3c4) != '\x01') ||
             (*(char *)((long)puVar8 + 0x3c5) != '\x01')) || (*(int *)(puVar8 + 3) != 0)) ||
           ((*(int *)(puVar8 + 7) != 0 || (*(int *)(puVar8 + 0xb) != 0)))) goto LAB_108409978;
        pbVar6 = (byte *)((long)puVar8 + 0x1c);
        puVar19 = (undefined8 *)((ulong)auStack_4a8 | 4);
        FUN_108409f3c(pbVar6,puVar19);
        if ((int)pbVar6 == 0) goto LAB_108409a58;
        pbVar6 = (byte *)((long)puVar8 + 0x3c);
        puVar19 = auStack_484;
        FUN_108409f3c(pbVar6,puVar19);
        if ((int)pbVar6 == 0) goto LAB_108409a58;
        pbVar6 = (byte *)((long)puVar8 + 0x5c);
        puVar19 = auStack_464;
        FUN_108409f3c(pbVar6,puVar19);
        if ((int)pbVar6 == 0) goto LAB_108409a58;
        pbVar6 = (byte *)(puVar8 + 0xf);
        puVar19 = &uStack_530;
        FUN_108409de0(pbVar6,puVar19);
        func_0x00010840a924();
        iVar18 = extraout_w12_06;
        if ((int)pbVar6 == 0) goto LAB_108409a58;
      }
      if (*(char *)((long)puVar7 + 0x3c6) == '\x01') {
        if (*(int *)(puVar7 + 0x26) != 0) {
          puVar9 = puVar7 + 0x14;
          puVar19 = puVar9;
          FUN_10840a1a8(&pppuStack_500,puVar9);
          func_0x00010840a924();
          func_0x00010840a8ac(puStack_4e0);
          func_0x00010840a980();
          func_0x00010840a890();
          *extraout_x9_00 = puVar9;
          iVar18 = extraout_w12_01;
        }
        if (*(int *)(puVar7 + 0x39) == 3) {
          func_0x00010840a930(&pppuStack_500,puVar7 + 0x27);
          puVar9 = puVar7 + 0x33;
          iVar2 = 0xdf2ce1c;
          puVar19 = puVar9;
          _memcmp(&UNK_10df2ce1c,puVar9,0x30);
          func_0x00010840a924();
          iVar18 = extraout_w12_02;
          if (iVar2 != 0) {
            func_0x00010840a980();
            func_0x00010840a890();
            *extraout_x9_01 = puVar9;
            iVar18 = extraout_w12_03;
          }
        }
        if (*(int *)((long)puVar7 + 0x1cc) == 3) {
          puVar19 = puVar7 + 0x3a;
          func_0x00010840a930(&pppuStack_500,puVar19);
          func_0x00010840a924();
          iVar18 = extraout_w12_04;
        }
        if (*(int *)(puVar7 + 2) == 0x4c616220) {
          func_0x00010840a8ac(puStack_4e0);
          iVar18 = extraout_w12_05;
        }
      }
      else {
        if ((*(char *)((long)puVar7 + 0x3c4) != '\x01') ||
           (*(char *)((long)puVar7 + 0x3c5) != '\x01')) goto LAB_108409978;
        puVar19 = puVar7 + 3;
        func_0x00010840a930(&pppuStack_500,puVar19);
        func_0x00010840a924();
        iVar18 = extraout_w12_07;
      }
      if (*(char *)((long)puVar8 + 0x3c7) == '\x01') {
        if ((*(byte *)((long)puVar7 + 0x3c6) & 1) == 0) {
          puVar15 = *ppuStack_4f8;
          *puVar15 = 0x18;
          *ppuStack_4f8 = puVar15 + 1;
          ppuVar16 = *pppuStack_4f0;
          *pppuStack_4f0 = ppuVar16 + 1;
          *ppuVar16 = (undefined *)(puVar7 + 0xf);
        }
        if (*(int *)(puVar8 + 2) == 0x4c616220) {
          func_0x00010840a8ac(puStack_4e0);
          iVar18 = extraout_w12_08;
        }
        puVar7 = puVar8 + 0x46;
        if (*(int *)(puVar8 + 0x52) == 3) {
          puVar19 = puVar7;
          func_0x00010840a930(&pppuStack_500,puVar7);
          func_0x00010840a924();
          iVar18 = extraout_w12_09;
        }
        if (*(int *)((long)puVar8 + 0x294) == 3) {
          iVar18 = 0xdf2ce4c;
          _memcmp(&UNK_10df2ce4c,puVar8 + 0x5f,0x30);
          if (iVar18 != 0) {
            func_0x00010840a980();
            func_0x00010840a890();
            *extraout_x9_02 = puVar8 + 0x5f;
          }
          puVar19 = puVar8 + 0x53;
          func_0x00010840a930(&pppuStack_500,puVar19);
          func_0x00010840a924();
          iVar18 = extraout_w12_10;
        }
        if (*(int *)((long)puVar8 + 0x3bc) == 0) goto code_r0x000108409830;
        func_0x00010840a8ac(puStack_4e0);
        func_0x00010840a980();
        func_0x00010840a890();
        *extraout_x9_03 = puVar7;
        puVar19 = puVar8 + 0x65;
        FUN_10840a1a8(&pppuStack_500,puVar19);
      }
      else {
        puVar19 = (undefined8 *)&UNK_10df2ce7c;
        if (*(byte *)((long)puVar7 + 0x3c6) == 0) {
          puVar19 = puVar7 + 0xf;
        }
        puVar7 = puVar8 + 0xf;
        _memcmp(puVar7,puVar19,0x24);
        if ((int)puVar7 != 0) {
          FUN_108409b48(&uStack_4d8,&uStack_530,puVar19);
          uStack_528 = auStack_4d0[0];
          uStack_530 = uStack_4d8;
          uStack_518 = auStack_4d0[2];
          uStack_520 = auStack_4d0[1];
          uStack_510 = uStack_4b8;
          func_0x00010840a980();
          param_1 = (float)uStack_4d8;
          func_0x00010840a890();
          *extraout_x9_04 = (long)&uStack_530;
        }
        puVar15 = auStack_4a8;
        puVar19 = (undefined8 *)0x3;
        FUN_10840a244(puVar15,3,&uStack_4d8);
        puVar7 = auStack_4d0;
        for (uVar13 = (ulong)((uint)puVar15 & ((int)(uint)puVar15 >> 0x1f ^ 0xffffffffU));
            uVar13 != 0; uVar13 = uVar13 - 1) {
          puVar17 = (undefined *)*puVar7;
          puVar15 = *ppuStack_4f8;
          *puVar15 = *(undefined4 *)(puVar7 + -1);
          *ppuStack_4f8 = puVar15 + 1;
          ppuVar16 = *pppuStack_4f0;
          *pppuStack_4f0 = ppuVar16 + 1;
          *ppuVar16 = puVar17;
          puVar7 = puVar7 + 2;
        }
      }
      func_0x00010840a924();
      iVar18 = extraout_w12_11;
    }
code_r0x000108409830:
    if ((int)param_7 < 0x1e) {
      func_0x00010840a8ac(puStack_4e0);
      iVar18 = extraout_w12_12;
    }
    if (*(int *)((long)puVar8 + 0xc) == iVar18) {
      uVar14 = 0x14;
code_r0x00010840992c:
      *puStack_4e0 = uVar14;
      puStack_4e0 = puStack_4e0 + 1;
      func_0x00010840a8c8();
    }
    else {
      if (param_8 == 0) {
        uVar14 = 0x15;
        goto code_r0x00010840992c;
      }
      if (param_8 == 2) {
        uVar14 = 0x16;
        goto code_r0x00010840992c;
      }
    }
    if (((ulong)param_7 & 1) != 0) {
      func_0x00010840a8ac(puStack_4e0);
    }
    uVar14 = 0x3b;
    switch(iVar20) {
    case 0:
      break;
    case 1:
      uVar14 = 0x3c;
      break;
    case 2:
      uVar14 = 0x3d;
      break;
    case 3:
      uVar14 = 0x3f;
      break;
    case 4:
      uVar14 = 0x3e;
      break;
    case 5:
      uVar14 = 0x40;
      break;
    case 7:
      func_0x00010840a980();
      func_0x00010840a890();
      *extraout_x9_05 = &UNK_10df2ccb0;
    case 6:
      uVar14 = 0x41;
      break;
    case 8:
      uVar14 = 0x42;
      break;
    case 9:
      uVar14 = 0x43;
      break;
    case 10:
      uVar14 = 0x44;
      break;
    case 0xb:
      uVar14 = 0x45;
      break;
    case 0xc:
      uVar14 = 0x46;
      break;
    case 0xd:
    case 0xf:
      uVar14 = 0x49;
      break;
    case 0xe:
    case 0x10:
      uVar14 = 0x4a;
      break;
    case 0x11:
      uVar14 = 0x4b;
      break;
    case 0x12:
      uVar14 = 0x4c;
      break;
    case 0x13:
      uVar14 = 0x47;
      break;
    case 0x14:
      uVar14 = 0x48;
      break;
    default:
      goto LAB_108409978;
    }
    *puStack_4e0 = uVar14;
    puStack_4e0 = puStack_4e0 + 1;
    func_0x00010840a8c8();
    puVar19 = &uStack_448;
    FUN_10840aaa8(&uStack_348,puVar19,(long)puStack_4e0 - (long)&uStack_348 >> 2,pbVar3,param_6,
                  lStack_250,puVar5,puVar4);
    pbVar6 = (byte *)0x1;
  }
LAB_108409a58:
  func_0x00010840a914(uStack_2c8);
  if (extraout_x9_06 == extraout_x8_18) {
    return pbVar6;
  }
  ___stack_chk_fail();
  if ((pbVar6 != (byte *)0x0) && (pbVar6[0x3c4] == 1)) {
    iVar20 = (int)pbVar6 + 0x18;
    FUN_10840837c();
    if (iVar20 != 0) {
      pbVar3 = pbVar6 + 0x38;
      FUN_10840837c(pbVar3,puVar19);
      if ((int)pbVar3 != 0) {
        FUN_108408218(pbVar6 + 0x58,puVar19);
        return (byte *)(ulong)(param_1 < 0.001953125);
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 1084092dc; end: 108409a8b;  */

undefined8 *
FUN_1084092dc(float param_1,long param_2,undefined8 *param_3,int param_4,undefined8 *param_5,
             long param_6,undefined8 *param_7,int param_8,undefined8 *param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined4 *extraout_x8_01;
  undefined4 *extraout_x8_02;
  undefined4 *extraout_x8_03;
  undefined4 *extraout_x8_04;
  undefined4 *extraout_x8_05;
  undefined4 *extraout_x8_06;
  undefined4 *extraout_x8_07;
  undefined4 *extraout_x8_08;
  undefined4 *extraout_x8_09;
  undefined4 *extraout_x8_10;
  undefined4 *extraout_x8_11;
  undefined4 *extraout_x8_12;
  undefined4 *extraout_x8_13;
  undefined4 *extraout_x8_14;
  undefined4 *extraout_x8_15;
  undefined4 *extraout_x8_16;
  undefined4 *puVar7;
  ulong uVar8;
  long extraout_x8_17;
  undefined4 uVar9;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 *extraout_x9_02;
  long *extraout_x9_03;
  undefined8 *extraout_x9_04;
  long extraout_x9_05;
  undefined4 *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w12_04;
  int extraout_w12_05;
  int extraout_w12_06;
  int extraout_w12_07;
  int extraout_w12_08;
  int extraout_w12_09;
  int extraout_w12_10;
  int extraout_w12_11;
  int extraout_w12_12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 auStack_6b0 [15];
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined4 uStack_618;
  undefined1 uStack_2eb;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 ***pppuStack_2b0;
  undefined4 **ppuStack_2a8;
  undefined ***pppuStack_2a0;
  undefined **ppuStack_298;
  undefined4 *puStack_290;
  undefined8 uStack_288;
  undefined8 auStack_280 [3];
  undefined4 uStack_268;
  undefined4 auStack_258 [8];
  undefined4 uStack_238;
  undefined8 auStack_234 [3];
  undefined4 uStack_218;
  undefined8 auStack_214 [3];
  undefined8 uStack_1f8;
  undefined *apuStack_1f0 [31];
  ulong uStack_f8;
  undefined4 auStack_f0 [30];
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_7;
  puVar6 = param_3;
  FUN_10840a184();
  puVar4 = param_3;
  FUN_10840a184();
  puVar5 = (undefined8 *)0x0;
  if (((ulong)((long)puVar3 * param_10) >> 0x1f != 0) ||
     ((ulong)((long)puVar4 * param_10) >> 0x1f != 0)) goto LAB_108409a58;
  puVar1 = (undefined8 *)&UNK_10df2c510;
  if (param_5 != (undefined8 *)0x0) {
    puVar1 = param_5;
  }
  puVar5 = (undefined8 *)&UNK_10df2c510;
  if (param_9 != (undefined8 *)0x0) {
    puVar5 = param_9;
  }
  if (param_6 == param_2 && puVar3 != puVar4) {
LAB_108409978:
    puVar5 = (undefined8 *)0x0;
  }
  else {
    ppuStack_2a8 = &puStack_290;
    pppuStack_2a0 = &ppuStack_298;
    pppuStack_2b0 = &ppuStack_2a8;
    uStack_218 = 0;
    iVar15 = (int)param_3;
    uStack_238 = 0;
    auStack_258[0] = 0;
    switch(iVar15 >> 1) {
    case 0:
      func_0x00010840a8ec();
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puVar10 = extraout_x8_07;
      goto code_r0x0001084094e0;
    case 1:
      func_0x00010840a8ec();
      uVar9 = 1;
      puVar10 = extraout_x8_08;
      break;
    case 2:
      func_0x00010840a8ec();
      uVar9 = 2;
      puVar10 = extraout_x8_05;
      break;
    case 3:
      func_0x00010840a8ec();
      uVar9 = 4;
      puVar10 = extraout_x8_06;
      break;
    case 4:
      func_0x00010840a8ec();
      uVar9 = 3;
      puVar10 = extraout_x8_02;
      break;
    case 5:
      func_0x00010840a8ec();
      uVar9 = 5;
      puVar10 = extraout_x8_09;
      break;
    case 6:
      func_0x00010840a8ec();
      uVar9 = 6;
      puVar10 = extraout_x8_11;
      break;
    case 7:
      puVar10 = auStack_f0;
      param_1 = 8.40779e-45;
      uStack_f8 = 0x2500000006;
      ppuVar11 = apuStack_1f0 + 1;
      apuStack_1f0[0] = &UNK_10df2c52c;
      puStack_290 = puVar10;
      goto code_r0x0001084094f0;
    case 8:
      func_0x00010840a8ec();
      uVar9 = 7;
      puVar10 = extraout_x8_13;
      break;
    case 9:
      func_0x00010840a8ec();
      uVar9 = 10;
      puVar10 = extraout_x8_04;
      break;
    case 10:
      func_0x00010840a8ec();
      uVar9 = 0xb;
      puVar10 = extraout_x8_12;
      break;
    case 0xb:
      func_0x00010840a8ec();
      uVar9 = 0xc;
      puVar10 = extraout_x8_01;
      break;
    case 0xc:
      func_0x00010840a8ec();
      uVar9 = 0xd;
      puVar10 = extraout_x8_03;
      break;
    case 0xd:
    case 0xf:
      func_0x00010840a8ec();
      uVar9 = 0xe;
      puVar10 = extraout_x8;
      break;
    case 0xe:
    case 0x10:
      func_0x00010840a8ec();
      uVar9 = 0xf;
      puVar10 = extraout_x8_00;
      break;
    case 0x11:
      func_0x00010840a8ec();
      uVar9 = 0x10;
      puVar10 = extraout_x8_10;
      break;
    case 0x12:
      func_0x00010840a8ec();
      uVar9 = 0x11;
      puVar10 = extraout_x8_15;
      break;
    case 0x13:
      func_0x00010840a8ec();
      uVar9 = 8;
      puVar10 = extraout_x8_16;
      break;
    case 0x14:
      func_0x00010840a8ec();
      uVar9 = 9;
      puVar10 = extraout_x8_14;
      break;
    default:
      goto LAB_108409978;
    }
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar9);
code_r0x0001084094e0:
    ppuVar11 = apuStack_1f0;
code_r0x0001084094f0:
    uStack_1f8 = 0;
    puVar7 = puVar10;
    ppuStack_298 = ppuVar11;
    if (iVar15 == 0x1c || iVar15 == 0x1a) {
      puVar7 = puVar10 + 1;
      *puVar10 = 0x13;
      ppuStack_298 = ppuVar11 + 1;
      *ppuVar11 = (undefined *)0x0;
      puStack_290 = puVar7;
    }
    if (((ulong)param_3 & 1) != 0) {
      puStack_290 = puVar7 + 1;
      *puVar7 = 0x12;
      *ppuStack_298 = (undefined *)0x0;
      ppuStack_298 = ppuStack_298 + 1;
    }
    iVar15 = (int)param_7 >> 1;
    puVar14 = puVar5;
    if (iVar15 == 4 || iVar15 == 2) {
      _memcpy(auStack_6b0,puVar5,0x3d0);
      uStack_2eb = 1;
      uStack_618 = 0x3f800000;
      param_1 = 1.0;
      uStack_630 = 0;
      uStack_638 = 0x3f800000;
      uStack_620 = 0;
      uStack_628 = 0x3f800000;
      puVar14 = auStack_6b0;
      puVar6 = puVar5;
    }
    func_0x00010840a924();
    if (*(int *)((long)puVar1 + 0xc) == extraout_w12) {
      uVar9 = 0x14;
code_r0x0001084095a4:
      *puStack_290 = uVar9;
      puStack_290 = puStack_290 + 1;
      func_0x00010840a8c8();
      iVar13 = extraout_w12_00;
    }
    else {
      if (param_4 == 0) {
        uVar9 = 0x15;
        goto code_r0x0001084095a4;
      }
      iVar13 = extraout_w12;
      if (param_4 == 2) {
        uVar9 = 0x17;
        goto code_r0x0001084095a4;
      }
    }
    if (puVar14 != puVar1) {
      if ((*(byte *)((long)puVar14 + 0x3c7) & 1) == 0) {
        if ((((*(char *)((long)puVar14 + 0x3c4) != '\x01') ||
             (*(char *)((long)puVar14 + 0x3c5) != '\x01')) || (*(int *)(puVar14 + 3) != 0)) ||
           ((*(int *)(puVar14 + 7) != 0 || (*(int *)(puVar14 + 0xb) != 0)))) goto LAB_108409978;
        puVar5 = (undefined8 *)((long)puVar14 + 0x1c);
        puVar6 = (undefined8 *)((ulong)auStack_258 | 4);
        FUN_108409f3c(puVar5,puVar6);
        if ((int)puVar5 == 0) goto LAB_108409a58;
        puVar5 = (undefined8 *)((long)puVar14 + 0x3c);
        puVar6 = auStack_234;
        FUN_108409f3c(puVar5,puVar6);
        if ((int)puVar5 == 0) goto LAB_108409a58;
        puVar5 = (undefined8 *)((long)puVar14 + 0x5c);
        puVar6 = auStack_214;
        FUN_108409f3c(puVar5,puVar6);
        if ((int)puVar5 == 0) goto LAB_108409a58;
        puVar5 = puVar14 + 0xf;
        puVar6 = &uStack_2e0;
        FUN_108409de0(puVar5,puVar6);
        func_0x00010840a924();
        iVar13 = extraout_w12_06;
        if ((int)puVar5 == 0) goto LAB_108409a58;
      }
      if (*(char *)((long)puVar1 + 0x3c6) == '\x01') {
        if (*(int *)(puVar1 + 0x26) != 0) {
          puVar5 = puVar1 + 0x14;
          puVar6 = puVar5;
          FUN_10840a1a8(&pppuStack_2b0,puVar5);
          func_0x00010840a924();
          func_0x00010840a8ac(puStack_290);
          func_0x00010840a980();
          func_0x00010840a890();
          *extraout_x9 = puVar5;
          iVar13 = extraout_w12_01;
        }
        if (*(int *)(puVar1 + 0x39) == 3) {
          func_0x00010840a930(&pppuStack_2b0,puVar1 + 0x27);
          puVar5 = puVar1 + 0x33;
          iVar2 = 0xdf2ce1c;
          puVar6 = puVar5;
          _memcmp(&UNK_10df2ce1c,puVar5,0x30);
          func_0x00010840a924();
          iVar13 = extraout_w12_02;
          if (iVar2 != 0) {
            func_0x00010840a980();
            func_0x00010840a890();
            *extraout_x9_00 = puVar5;
            iVar13 = extraout_w12_03;
          }
        }
        if (*(int *)((long)puVar1 + 0x1cc) == 3) {
          puVar6 = puVar1 + 0x3a;
          func_0x00010840a930(&pppuStack_2b0,puVar6);
          func_0x00010840a924();
          iVar13 = extraout_w12_04;
        }
        if (*(int *)(puVar1 + 2) == 0x4c616220) {
          func_0x00010840a8ac(puStack_290);
          iVar13 = extraout_w12_05;
        }
      }
      else {
        if ((*(char *)((long)puVar1 + 0x3c4) != '\x01') ||
           (*(char *)((long)puVar1 + 0x3c5) != '\x01')) goto LAB_108409978;
        puVar6 = puVar1 + 3;
        func_0x00010840a930(&pppuStack_2b0,puVar6);
        func_0x00010840a924();
        iVar13 = extraout_w12_07;
      }
      if (*(char *)((long)puVar14 + 0x3c7) == '\x01') {
        if ((*(byte *)((long)puVar1 + 0x3c6) & 1) == 0) {
          puVar10 = *ppuStack_2a8;
          *puVar10 = 0x18;
          *ppuStack_2a8 = puVar10 + 1;
          ppuVar11 = *pppuStack_2a0;
          *pppuStack_2a0 = ppuVar11 + 1;
          *ppuVar11 = (undefined *)(puVar1 + 0xf);
        }
        if (*(int *)(puVar14 + 2) == 0x4c616220) {
          func_0x00010840a8ac(puStack_290);
          iVar13 = extraout_w12_08;
        }
        puVar5 = puVar14 + 0x46;
        if (*(int *)(puVar14 + 0x52) == 3) {
          puVar6 = puVar5;
          func_0x00010840a930(&pppuStack_2b0,puVar5);
          func_0x00010840a924();
          iVar13 = extraout_w12_09;
        }
        if (*(int *)((long)puVar14 + 0x294) == 3) {
          iVar13 = 0xdf2ce4c;
          _memcmp(&UNK_10df2ce4c,puVar14 + 0x5f,0x30);
          if (iVar13 != 0) {
            func_0x00010840a980();
            func_0x00010840a890();
            *extraout_x9_01 = puVar14 + 0x5f;
          }
          puVar6 = puVar14 + 0x53;
          func_0x00010840a930(&pppuStack_2b0,puVar6);
          func_0x00010840a924();
          iVar13 = extraout_w12_10;
        }
        if (*(int *)((long)puVar14 + 0x3bc) == 0) goto code_r0x000108409830;
        func_0x00010840a8ac(puStack_290);
        func_0x00010840a980();
        func_0x00010840a890();
        *extraout_x9_02 = puVar5;
        puVar6 = puVar14 + 0x65;
        FUN_10840a1a8(&pppuStack_2b0,puVar6);
      }
      else {
        puVar5 = (undefined8 *)&UNK_10df2ce7c;
        if (*(byte *)((long)puVar1 + 0x3c6) == 0) {
          puVar5 = puVar1 + 0xf;
        }
        puVar6 = puVar14 + 0xf;
        _memcmp(puVar6,puVar5,0x24);
        if ((int)puVar6 != 0) {
          FUN_108409b48(&uStack_288,&uStack_2e0,puVar5);
          uStack_2d8 = auStack_280[0];
          uStack_2e0 = uStack_288;
          uStack_2c8 = auStack_280[2];
          uStack_2d0 = auStack_280[1];
          uStack_2c0 = uStack_268;
          func_0x00010840a980();
          param_1 = (float)uStack_288;
          func_0x00010840a890();
          *extraout_x9_03 = (long)&uStack_2e0;
        }
        puVar10 = auStack_258;
        puVar6 = (undefined8 *)0x3;
        FUN_10840a244(puVar10,3,&uStack_288);
        puVar5 = auStack_280;
        for (uVar8 = (ulong)((uint)puVar10 & ((int)(uint)puVar10 >> 0x1f ^ 0xffffffffU)); uVar8 != 0
            ; uVar8 = uVar8 - 1) {
          puVar12 = (undefined *)*puVar5;
          puVar10 = *ppuStack_2a8;
          *puVar10 = *(undefined4 *)(puVar5 + -1);
          *ppuStack_2a8 = puVar10 + 1;
          ppuVar11 = *pppuStack_2a0;
          *pppuStack_2a0 = ppuVar11 + 1;
          *ppuVar11 = puVar12;
          puVar5 = puVar5 + 2;
        }
      }
      func_0x00010840a924();
      iVar13 = extraout_w12_11;
    }
code_r0x000108409830:
    if ((int)param_7 < 0x1e) {
      func_0x00010840a8ac(puStack_290);
      iVar13 = extraout_w12_12;
    }
    if (*(int *)((long)puVar14 + 0xc) == iVar13) {
      uVar9 = 0x14;
code_r0x00010840992c:
      *puStack_290 = uVar9;
      puStack_290 = puStack_290 + 1;
      func_0x00010840a8c8();
    }
    else {
      if (param_8 == 0) {
        uVar9 = 0x15;
        goto code_r0x00010840992c;
      }
      if (param_8 == 2) {
        uVar9 = 0x16;
        goto code_r0x00010840992c;
      }
    }
    if (((ulong)param_7 & 1) != 0) {
      func_0x00010840a8ac(puStack_290);
    }
    uVar9 = 0x3b;
    switch(iVar15) {
    case 0:
      break;
    case 1:
      uVar9 = 0x3c;
      break;
    case 2:
      uVar9 = 0x3d;
      break;
    case 3:
      uVar9 = 0x3f;
      break;
    case 4:
      uVar9 = 0x3e;
      break;
    case 5:
      uVar9 = 0x40;
      break;
    case 7:
      func_0x00010840a980();
      func_0x00010840a890();
      *extraout_x9_04 = &UNK_10df2ccb0;
    case 6:
      uVar9 = 0x41;
      break;
    case 8:
      uVar9 = 0x42;
      break;
    case 9:
      uVar9 = 0x43;
      break;
    case 10:
      uVar9 = 0x44;
      break;
    case 0xb:
      uVar9 = 0x45;
      break;
    case 0xc:
      uVar9 = 0x46;
      break;
    case 0xd:
    case 0xf:
      uVar9 = 0x49;
      break;
    case 0xe:
    case 0x10:
      uVar9 = 0x4a;
      break;
    case 0x11:
      uVar9 = 0x4b;
      break;
    case 0x12:
      uVar9 = 0x4c;
      break;
    case 0x13:
      uVar9 = 0x47;
      break;
    case 0x14:
      uVar9 = 0x48;
      break;
    default:
      goto LAB_108409978;
    }
    *puStack_290 = uVar9;
    puStack_290 = puStack_290 + 1;
    func_0x00010840a8c8();
    puVar6 = &uStack_1f8;
    FUN_10840aaa8(&uStack_f8,puVar6,(long)puStack_290 - (long)&uStack_f8 >> 2,param_2,param_6,
                  param_10,puVar4,puVar3);
    puVar5 = (undefined8 *)0x1;
  }
LAB_108409a58:
  func_0x00010840a914(uStack_78);
  if (extraout_x9_05 == extraout_x8_17) {
    return puVar5;
  }
  ___stack_chk_fail();
  if ((puVar5 != (undefined8 *)0x0) && (*(char *)((long)puVar5 + 0x3c4) == '\x01')) {
    iVar15 = (int)puVar5 + 0x18;
    FUN_10840837c();
    if (iVar15 != 0) {
      puVar3 = puVar5 + 7;
      FUN_10840837c(puVar3,puVar6);
      if ((int)puVar3 != 0) {
        FUN_108408218(puVar5 + 0xb,puVar6);
        return (undefined8 *)(ulong)(param_1 < 0.001953125);
      }
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 108409a8c; end: 108409aef;  */

bool FUN_108409a8c(float param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x3c4) == '\x01')) {
    iVar1 = (int)param_2 + 0x18;
    FUN_10840837c();
    if (iVar1 != 0) {
      lVar2 = param_2 + 0x38;
      FUN_10840837c(lVar2,param_3);
      if ((int)lVar2 != 0) {
        FUN_108408218(param_2 + 0x58,param_3);
        return param_1 < 0.001953125;
      }
    }
  }
  return false;
}



/* Entry: 108409af0; end: 108409b47;  */

ulong FUN_108409af0(long param_1,float *param_2)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong auStack_10 [2];
  
  auStack_10[0] = 0;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  pfVar2 = (float *)(param_1 + 8);
  for (lVar1 = 0; lVar1 != 0xc; lVar1 = lVar1 + 4) {
    *(float *)((long)auStack_10 + lVar1) = fVar4 * pfVar2[-1] + fVar3 * pfVar2[-2] + fVar5 * *pfVar2
    ;
    pfVar2 = pfVar2 + 3;
  }
  return auStack_10[0] & 0xffffffff;
}



/* Entry: 108409b48; end: 108409bbb;  */

void FUN_108409b48(undefined8 *param_1,long param_2,long param_3)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  for (lVar2 = 0; lVar2 != 3; lVar2 = lVar2 + 1) {
    pfVar4 = (float *)(param_2 + lVar2 * 0xc);
    fVar1 = *pfVar4;
    fVar5 = pfVar4[1];
    fVar6 = pfVar4[2];
    pfVar4 = (float *)(param_3 + 0xc);
    for (lVar3 = 0; lVar3 != 0xc; lVar3 = lVar3 + 4) {
      *(float *)((long)param_1 + lVar3) = fVar5 * *pfVar4 + pfVar4[-3] * fVar1 + pfVar4[3] * fVar6;
      pfVar4 = pfVar4 + 1;
    }
    param_1 = (undefined8 *)((long)param_1 + 0xc);
  }
  return;
}



/* Entry: 108409bbc; end: 108409ddf;  */

float * FUN_108409bbc(float param_1,float param_2,float param_3,float param_4,float param_5,
                     float param_6,float param_7,float param_8,undefined8 *param_9)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float afStack_140 [5];
  undefined8 uStack_12c;
  undefined4 uStack_124;
  float fStack_120;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float afStack_e4 [3];
  undefined1 auStack_d8 [36];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  float afStack_6c [3];
  
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 == 1.0;
      bVar2 = 1.0 <= param_1;
    }
  }
  if (!bVar2 || bVar1) {
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= param_2) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_2)) {
        bVar1 = param_2 == 1.0;
        bVar2 = 1.0 <= param_2;
      }
    }
    if (!bVar2 || bVar1) {
      bVar1 = false;
      bVar2 = true;
      if (0.0 <= param_3) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(param_3)) {
          bVar1 = param_3 == 1.0;
          bVar2 = 1.0 <= param_3;
        }
      }
      if (!bVar2 || bVar1) {
        bVar1 = false;
        bVar2 = true;
        if (0.0 <= param_4) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(param_4)) {
            bVar1 = param_4 == 1.0;
            bVar2 = 1.0 <= param_4;
          }
        }
        if (!bVar2 || bVar1) {
          bVar1 = false;
          bVar2 = true;
          if (0.0 <= param_5) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(param_5)) {
              bVar1 = param_5 == 1.0;
              bVar2 = 1.0 <= param_5;
            }
          }
          if (!bVar2 || bVar1) {
            bVar1 = false;
            bVar2 = true;
            if (0.0 <= param_6) {
              bVar1 = false;
              bVar2 = true;
              if (!NAN(param_6)) {
                bVar1 = param_6 == 1.0;
                bVar2 = 1.0 <= param_6;
              }
            }
            if (!bVar2 || bVar1) {
              bVar1 = false;
              bVar2 = true;
              if (0.0 <= param_7) {
                bVar1 = false;
                bVar2 = true;
                if (!NAN(param_7)) {
                  bVar1 = param_7 == 1.0;
                  bVar2 = 1.0 <= param_7;
                }
              }
              if (!bVar2 || bVar1) {
                bVar1 = false;
                bVar2 = true;
                if (0.0 <= param_8) {
                  bVar1 = false;
                  bVar2 = true;
                  if (!NAN(param_8)) {
                    bVar1 = param_8 == 1.0;
                    bVar2 = 1.0 <= param_8;
                  }
                }
                if (bVar2 && !bVar1) {
                  return (float *)0x0;
                }
                if (param_9 == (undefined8 *)0x0) {
                  return (float *)0x0;
                }
                fStack_9c = (1.0 - param_1) - param_2;
                fStack_98 = (1.0 - param_3) - param_4;
                fStack_94 = (1.0 - param_5) - param_6;
                pfVar3 = &fStack_b4;
                fStack_b4 = param_1;
                fStack_b0 = param_3;
                fStack_ac = param_5;
                fStack_a8 = param_2;
                fStack_a4 = param_4;
                fStack_a0 = param_6;
                fStack_100 = fStack_98;
                FUN_108409de0(pfVar3,auStack_d8);
                if ((int)pfVar3 == 0) {
                  return pfVar3;
                }
                afStack_e4[1] = 1.0;
                fStack_110 = (1.0 - param_7) - param_8;
                fVar8 = fStack_110 / param_8;
                afStack_e4[0] = param_7 / param_8;
                afStack_e4[2] = fVar8;
                FUN_108409af0(auStack_d8,afStack_e4);
                uStack_10c = 0;
                uStack_108 = 0;
                uStack_104 = 0;
                uStack_fc = 0;
                uStack_f8 = 0;
                uStack_f4 = 0;
                fStack_f0 = param_3;
                FUN_108409b48(&uStack_90,&fStack_b4,&fStack_110);
                uStack_108 = (undefined4)uStack_88;
                uStack_104 = (undefined4)((ulong)uStack_88 >> 0x20);
                fStack_110 = (float)uStack_90;
                uStack_10c = (undefined4)((ulong)uStack_90 >> 0x20);
                uStack_f8 = (undefined4)uStack_78;
                uStack_f4 = (undefined4)((ulong)uStack_78 >> 0x20);
                fStack_100 = (float)uStack_80;
                uStack_fc = (undefined4)((ulong)uStack_80 >> 0x20);
                fStack_f0 = (float)uStack_70;
                afStack_6c[1] = 1.0;
                uVar5 = uStack_90;
                uVar7 = uStack_80;
                afStack_6c[0] = param_7 / param_8;
                afStack_6c[2] = fVar8;
                FUN_108409af0(&UNK_10df2cdd4,afStack_6c);
                fVar8 = param_3;
                fVar4 = (float)uVar5;
                fVar6 = (float)uVar7;
                FUN_108409af0(&UNK_10df2cdd4,&UNK_10df2cdc8);
                afStack_140[0] = fVar4 / (float)uVar5;
                afStack_140[4] = fVar6 / (float)uVar7;
                afStack_140[1] = 0.0;
                afStack_140[2] = 0.0;
                afStack_140[3] = 0.0;
                uStack_12c = 0;
                uStack_124 = 0;
                fStack_120 = fVar8 / param_3;
                FUN_108409b48(&uStack_90,afStack_140,&UNK_10df2cdd4);
                func_0x00010840aa5c();
                FUN_108409b48(&uStack_90,&UNK_10df2cdf8,afStack_140);
                func_0x00010840aa5c();
                FUN_108409b48(&uStack_90,afStack_140,&fStack_110);
                param_9[1] = uStack_88;
                *param_9 = uStack_90;
                param_9[3] = uStack_78;
                param_9[2] = uStack_80;
                *(undefined4 *)(param_9 + 4) = uStack_70;
                return pfVar3;
              }
            }
          }
        }
      }
    }
  }
  return (float *)0x0;
}



/* Entry: 108409de0; end: 108409f3b;  */

undefined8 FUN_108409de0(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar11 = *param_1;
  fVar15 = param_1[1];
  fVar12 = param_1[3];
  fVar13 = param_1[6];
  fVar16 = param_1[7];
  fVar14 = param_1[4];
  fVar5 = -(fVar15 * fVar12) + fVar14 * fVar11;
  fVar4 = -(fVar15 * fVar13) + fVar16 * fVar11;
  fVar2 = -(fVar14 * fVar13) + fVar16 * fVar12;
  fVar3 = -(param_1[5] * fVar4) + param_1[8] * fVar5 + param_1[2] * fVar2;
  if (((fVar3 != 0.0) && (fVar3 = 1.0 / fVar3, ABS(fVar3) <= 3.4028235e+38)) && (fVar3 * 0.0 == 0.0)
     ) {
    lVar9 = 0;
    fVar7 = fVar3 * param_1[2];
    fVar8 = fVar3 * param_1[5];
    fVar6 = fVar3 * param_1[8];
    *param_2 = -(fVar16 * fVar8) + fVar6 * fVar14;
    param_2[1] = fVar6 * -fVar15 + fVar7 * fVar16;
    param_2[2] = fVar7 * -fVar14 + fVar8 * fVar15;
    *(ulong *)(param_2 + 5) = CONCAT44(fVar2 * fVar3,-(fVar11 * fVar8) + fVar7 * fVar12);
    *(ulong *)(param_2 + 3) =
         CONCAT44(-(fVar13 * fVar7) + fVar6 * fVar11,-(fVar12 * fVar6) + fVar8 * fVar13);
    param_2[7] = -(fVar3 * fVar4);
    param_2[8] = fVar5 * fVar3;
    do {
      if (lVar9 == 3) {
        return 1;
      }
      lVar10 = 0;
      while (lVar10 != 0xc) {
        pfVar1 = (float *)((long)param_2 + lVar10);
        lVar10 = lVar10 + 4;
        if (*pfVar1 * 0.0 != 0.0) {
          return 0;
        }
      }
      lVar9 = lVar9 + 1;
      param_2 = param_2 + 3;
    } while( true );
  }
  return 0;
}



/* Entry: 108409f3c; end: 10840a183;  */

bool FUN_108409f3c(undefined4 param_1,undefined4 param_2,float *param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  undefined1 auStack_90 [12];
  undefined8 uStack_84;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  
  pfVar3 = param_3;
  func_0x000108407f34(param_3,&fStack_78,auStack_90);
  bVar1 = false;
  switch((ulong)pfVar3 & 0xffffffff) {
  case 0:
    goto LAB_10840a128;
  default:
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    uStack_98._0_4_ = 0.0;
    uStack_98._4_4_ = 0.0;
    fVar8 = param_3[3];
    fVar13 = param_3[6];
    fVar9 = param_3[1];
    fVar12 = param_3[2];
    fVar10 = fVar13 + param_3[4] * fVar8;
    fVar7 = *param_3;
    fVar5 = fVar12 + param_3[4] * fVar9;
    FUN_108407de8(fVar5,fVar7);
    fVar11 = param_3[5];
    if (ABS(fVar10 - (fVar5 + fVar11)) <= 0.001953125) {
      fVar5 = 0.0;
      if (0.0 < fVar10) {
        fVar5 = 1.0 / fVar8;
        uStack_98._4_4_ = -fVar13 / fVar8;
        fStack_a0 = fVar5;
      }
      fStack_9c = fVar10;
      fVar8 = fVar9;
      FUN_108407de8(fVar9,-fVar7);
      fVar11 = -(fVar8 * fVar11);
      uStack_98._0_4_ = -fVar12 / fVar9;
      if (0.0 <= fVar8) {
        if (fVar11 + fVar10 * fVar8 < 0.0) {
          fVar11 = fVar10 * -fVar8;
        }
        iVar2 = (int)&fStack_ac;
        fStack_ac = 1.0 / fVar7;
        fStack_a8 = fVar8;
        fStack_a4 = fVar11;
        func_0x00010840a8fc();
        if (iVar2 == 1) {
          fVar9 = 1.0;
          FUN_108408088(param_3);
          if (fVar9 * 0.0 == 0.0) {
            fVar12 = -1.0;
            if (0.0 <= fVar9) {
              fVar12 = 1.0;
            }
            fVar9 = fVar9 * fVar12;
            if (fVar10 <= fVar9) {
              fVar11 = fVar11 + fVar9 * fVar8;
              FUN_108407de8(fVar11,1.0 / fVar7);
              uStack_98 = CONCAT44(uStack_98._4_4_,1.0 - fVar11 * fVar12);
            }
            else {
              uStack_98 = CONCAT44(fVar9 * -(fVar5 * fVar12) + 1.0,(float)uStack_98);
            }
            param_4[1] = CONCAT44(fStack_a0,fStack_a4);
            *param_4 = CONCAT44(fStack_a8,fStack_ac);
            *(undefined8 *)((long)param_4 + 0x14) = uStack_98;
            *(ulong *)((long)param_4 + 0xc) = CONCAT44(fStack_9c,fStack_a0);
            func_0x00010840a8fc(param_4);
            return (int)param_4 == 1;
          }
        }
      }
    }
    return false;
  case 2:
    *(undefined4 *)param_4 = 0xc0000000;
    *(float *)((long)param_4 + 4) = -fStack_78;
    *(undefined4 *)(param_4 + 1) = uStack_6c;
    *(float *)((long)param_4 + 0xc) = 1.0 / fStack_64;
    *(undefined4 *)(param_4 + 2) = uStack_74;
    *(float *)((long)param_4 + 0x14) = -fStack_68;
    *(float *)(param_4 + 3) = 1.0 / fStack_70;
    goto code_r0x00010840a00c;
  case 3:
    func_0x00010840aa48(0);
    uVar4 = 0xc0800000;
    break;
  case 4:
    func_0x00010840aa48(0);
    uVar4 = 0xc0400000;
  }
  *(undefined4 *)param_4 = uVar4;
  uVar6 = NEON_fmov(0x3f800000,4);
  *(ulong *)((long)param_4 + 4) =
       CONCAT44((float)((ulong)uVar6 >> 0x20) / SUB84(auStack_90._0_8_,4),
                (float)uVar6 / (float)auStack_90._0_8_);
  *(undefined4 *)((long)param_4 + 0xc) = param_1;
  param_4[2] = uStack_84;
  *(undefined4 *)(param_4 + 3) = param_2;
code_r0x00010840a00c:
  bVar1 = true;
LAB_10840a128:
  return bVar1;
}



/* Entry: 10840a184; end: 10840a1a7;  */

undefined8 FUN_10840a184(int param_1)

{
  if ((uint)(param_1 >> 1) < 0x15) {
    return *(undefined8 *)(&UNK_10df2cf68 + (ulong)(uint)(param_1 >> 1) * 8);
  }
  return 0;
}



/* Entry: 10840a1a8; end: 10840a243;  */

float * FUN_10840a1a8(undefined8 *param_1,float *param_2,undefined8 param_3)

{
  ulong *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float *pfVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong extraout_x8;
  ulong uVar7;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  float *pfVar14;
  int *piVar15;
  float *pfVar16;
  long lVar17;
  undefined *puVar18;
  undefined4 auStack_68 [2];
  undefined8 auStack_60 [7];
  undefined8 uStack_28;
  
  func_0x00010840a914(param_3);
  puVar6 = auStack_68;
  uVar5 = extraout_x8;
  uStack_28 = extraout_x9;
  FUN_10840a244();
  puVar3 = auStack_60;
  for (uVar7 = (ulong)((uint)param_2 & ((int)(uint)param_2 >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
      uVar7 = uVar7 - 1) {
    puVar8 = (undefined8 *)*param_1;
    uVar10 = *puVar3;
    puVar11 = (undefined8 *)*puVar8;
    puVar12 = (undefined4 *)*puVar11;
    *puVar12 = *(undefined4 *)(puVar3 + -1);
    *puVar11 = puVar12 + 1;
    plVar9 = (long *)puVar8[1];
    puVar8 = (undefined8 *)*plVar9;
    *plVar9 = (long)(puVar8 + 1);
    *puVar8 = uVar10;
    puVar3 = puVar3 + 2;
  }
  func_0x00010840a914(uStack_28);
  if (extraout_x9_00 != extraout_x8_00) {
    ___stack_chk_fail();
    pfVar14 = (float *)0x0;
    uVar7 = uVar5 & 0xffffffff;
    puVar18 = &UNK_10df2cef8 + (uVar5 & 0xffffffff) * 0x18;
    pfVar4 = param_2;
    pfVar2 = param_2 + uVar7 * 8;
    do {
      pfVar16 = pfVar2 + -8;
      puVar1 = (ulong *)(puVar6 + (long)pfVar14 * 4);
      uVar13 = (uint)pfVar14;
      if ((int)uVar7 < 1) {
        if (2 < uVar13) {
          uVar7 = puVar1[-2];
          piVar15 = (int *)&UNK_10df2cebc;
          lVar17 = 0x50;
          do {
            if (((((int)uVar7 == piVar15[-2]) && ((int)puVar1[-4] == piVar15[-1])) &&
                ((int)puVar1[-6] == *piVar15)) &&
               ((func_0x00010840a9f0(), (int)pfVar4 == 0 &&
                (func_0x00010840a9f0(), (int)pfVar4 == 0)))) {
              *(int *)(puVar1 + -6) = piVar15[1];
              return (float *)(ulong)(uVar13 - 2);
            }
            lVar17 = lVar17 + -0x10;
            piVar15 = piVar15 + 4;
          } while (lVar17 != 0);
        }
        return pfVar14;
      }
      uVar7 = uVar7 - 1;
      if (*pfVar16 == 0.0) {
        pfVar14 = param_2 + uVar7 * 8 + 1;
        pfVar4 = pfVar2 + -7;
        if (((*pfVar4 <= 0.0 ||
              (byte)((~-((float)*(undefined8 *)(pfVar2 + -6) == 1.0) & 1U) +
                     (~-((float)((ulong)*(undefined8 *)(pfVar2 + -6) >> 0x20) == 0.0) & 2U) +
                    (~-((float)*(undefined8 *)(pfVar2 + -4) == 0.0) & 4U) +
                    (~-((float)((ulong)*(undefined8 *)(pfVar2 + -4) >> 0x20) == 0.0) & 8U)) != '\0')
            || (pfVar2[-2] != 0.0)) || (pfVar2[-1] != 0.0)) {
          func_0x00010840a8fc();
                    /* WARNING: Could not recover jumptable at 0x00010840a354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10df2c507)[(ulong)pfVar4 & 0xffffffff] * 4 + 0x10840a358))
                    (0);
          return pfVar4;
        }
        if (*pfVar4 == 1.0) {
          pfVar14 = (float *)0x0;
          pfVar4 = (float *)0x0;
        }
        else {
          pfVar4 = (float *)(ulong)*(uint *)(puVar18 + -0xc);
        }
      }
      else {
        pfVar4 = (float *)(ulong)*(uint *)(puVar18 + 8);
        pfVar14 = pfVar16;
      }
      *puVar1 = (ulong)pfVar4;
      puVar1[1] = (ulong)pfVar14;
      if (pfVar14 != (float *)0x0) {
        uVar13 = uVar13 + 1;
      }
      pfVar14 = (float *)(ulong)uVar13;
      puVar18 = puVar18 + -0x18;
      pfVar2 = pfVar16;
    } while( true );
  }
  return param_2;
}



/* Entry: 10840a244; end: 10840a447;  */

float * FUN_10840a244(ulong param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  int *piVar3;
  uint uVar4;
  float *pfVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined *puVar10;
  
  pfVar5 = (float *)0x0;
  uVar7 = param_2 & 0xffffffff;
  puVar10 = &UNK_10df2cef8 + (param_2 & 0xffffffff) * 0x18;
  uVar2 = param_1;
  piVar6 = (int *)(param_1 + uVar7 * 0x20);
  do {
    piVar8 = piVar6 + -8;
    puVar1 = (ulong *)(param_3 + (long)pfVar5 * 0x10);
    uVar4 = (uint)pfVar5;
    if ((int)uVar7 < 1) {
      if (2 < uVar4) {
        uVar7 = puVar1[-2];
        piVar6 = (int *)&UNK_10df2cebc;
        lVar9 = 0x50;
        do {
          if (((((int)uVar7 == piVar6[-2]) && ((int)puVar1[-4] == piVar6[-1])) &&
              ((int)puVar1[-6] == *piVar6)) &&
             ((func_0x00010840a9f0(), (int)uVar2 == 0 && (func_0x00010840a9f0(), (int)uVar2 == 0))))
          {
            *(int *)(puVar1 + -6) = piVar6[1];
            return (float *)(ulong)(uVar4 - 2);
          }
          lVar9 = lVar9 + -0x10;
          piVar6 = piVar6 + 4;
        } while (lVar9 != 0);
      }
      return pfVar5;
    }
    uVar7 = uVar7 - 1;
    if (*piVar8 == 0) {
      piVar3 = (int *)(param_1 + uVar7 * 0x20 + 4);
      pfVar5 = (float *)(piVar6 + -7);
      if (((*pfVar5 <= 0.0 ||
            (byte)((~-((float)*(undefined8 *)(piVar6 + -6) == 1.0) & 1U) +
                   (~-((float)((ulong)*(undefined8 *)(piVar6 + -6) >> 0x20) == 0.0) & 2U) +
                  (~-((float)*(undefined8 *)(piVar6 + -4) == 0.0) & 4U) +
                  (~-((float)((ulong)*(undefined8 *)(piVar6 + -4) >> 0x20) == 0.0) & 8U)) != '\0')
          || ((float)piVar6[-2] != 0.0)) || ((float)piVar6[-1] != 0.0)) {
        func_0x00010840a8fc();
                    /* WARNING: Could not recover jumptable at 0x00010840a354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df2c507)[(ulong)pfVar5 & 0xffffffff] * 4 + 0x10840a358))(0);
        return pfVar5;
      }
      if (*pfVar5 == 1.0) {
        piVar3 = (int *)0x0;
        uVar2 = 0;
      }
      else {
        uVar2 = (ulong)*(uint *)(puVar10 + -0xc);
      }
    }
    else {
      uVar2 = (ulong)*(uint *)(puVar10 + 8);
      piVar3 = piVar8;
    }
    *puVar1 = uVar2;
    puVar1[1] = (ulong)piVar3;
    if (piVar3 != (int *)0x0) {
      uVar4 = uVar4 + 1;
    }
    pfVar5 = (float *)(ulong)uVar4;
    puVar10 = puVar10 + -0x18;
    piVar6 = piVar8;
  } while( true );
}



/* Entry: 10840a448; end: 10840a583;  */

void FUN_10840a448(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = *param_1;
  if (0 < (int)uVar1) {
    fVar13 = 1.0 / (float)(uVar1 << 1);
    fVar14 = 0.0;
    fVar7 = 0.0;
    FUN_1084082c0();
    fVar3 = -INFINITY;
    fVar4 = INFINITY;
    uVar6 = 1;
    for (uVar5 = 1; uVar1 != uVar5; uVar5 = uVar5 + 1) {
      fVar12 = (1.0 / (float)(uVar1 - 1)) * (float)uVar5;
      fVar8 = fVar12;
      FUN_1084082c0(param_1);
      fVar10 = ((fVar13 + fVar8) - fVar7) / fVar12;
      fVar11 = ((fVar8 - fVar13) - fVar7) / fVar12;
      bVar2 = true;
      if ((fVar3 <= fVar10) && (bVar2 = false, !NAN(fVar4) && !NAN(fVar11))) {
        bVar2 = fVar4 < fVar11;
      }
      if (bVar2) break;
      if (fVar10 <= fVar4) {
        fVar4 = fVar10;
      }
      if (fVar3 <= fVar11) {
        fVar3 = fVar11;
      }
      fVar12 = (fVar8 - fVar7) / fVar12;
      if (fVar12 <= fVar4 && fVar3 <= fVar12) {
        uVar6 = uVar5 + 1;
        fVar14 = fVar12;
      }
    }
    bVar2 = false;
    if ((uVar1 == uVar6) && (bVar2 = false, !NAN(fVar14))) {
      bVar2 = fVar14 == 1.0;
    }
    if ((bVar2) && (fVar7 == 0.0)) {
      *param_1 = 0;
      uVar9 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 1) = uVar9;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
    }
  }
  return;
}



/* Entry: 10840a584; end: 10840a6b3;  */

bool FUN_10840a584(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  ulong uVar5;
  
  bVar4 = false;
  *(undefined4 *)(param_2 + 0x128) = 0;
  bVar1 = *(byte *)(param_1 + 8);
  uVar5 = (ulong)bVar1;
  *(uint *)(param_2 + 0x90) = (uint)bVar1;
  bVar2 = *(byte *)(param_1 + 9);
  *(uint *)(param_2 + 300) = (uint)bVar2;
  if (bVar2 == 3 && 0xfffffffb < bVar1 - 5) {
    pbVar3 = (byte *)(param_2 + 0x94);
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar3 = *(byte *)(param_1 + 10);
      pbVar3 = pbVar3 + 1;
    }
    bVar4 = 1 < *(byte *)(param_2 + 0x94);
  }
  return bVar4;
}



/* Entry: 10840a6b4; end: 10840a753;  */

bool FUN_10840a6b4(long param_1,uint param_2,ulong param_3,ulong param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uStack_44;
  
  uVar3 = 0;
  do {
    bVar1 = (param_4 & 0xffffffff) <= uVar3;
    if (bVar1 || param_2 < (uint)param_3) {
      return bVar1;
    }
    lVar2 = param_1 + (param_3 & 0xffffffff);
    FUN_108408f8c(lVar2,param_2 - (uint)param_3,param_5,&uStack_44);
    if ((int)lVar2 == 0) {
      return false;
    }
    if (0xfffffffc < uStack_44) {
      return false;
    }
    param_3 = ((ulong)(uStack_44 + 3) & 0xfffffffc) + (param_3 & 0xffffffff);
    uVar3 = uVar3 + 1;
    param_5 = param_5 + 0x20;
  } while (param_3 >> 0x20 == 0);
  return false;
}



/* Entry: 10840a754; end: 10840aaa7;  */

bool FUN_10840a754(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  
  bVar3 = false;
  *(undefined4 *)(param_2 + 100) = 0;
  bVar1 = *(byte *)(param_1 + 8);
  *(uint *)(param_2 + 0x60) = (uint)bVar1;
  bVar2 = *(byte *)(param_1 + 9);
  *(uint *)(param_2 + 0x18c) = (uint)bVar2;
  if (bVar1 == 3 && 0xfffffffd < bVar2 - 5) {
    for (lVar4 = 0; lVar4 != 3; lVar4 = lVar4 + 1) {
      ((byte *)(param_2 + 0x188))[lVar4] = *(byte *)(param_1 + 10);
    }
    bVar3 = 1 < *(byte *)(param_2 + 0x188);
  }
  return bVar3;
}



/* Entry: 10840aaa8; end: 10840ac0b;  */

void FUN_10840aaa8(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4,ulong param_5
                  ,uint param_6,long param_7,long param_8)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  long extraout_x9_00;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_170 [32];
  undefined8 uStack_70;
  
  uVar2 = param_5;
  func_0x00010840deec(0);
  uStack_70 = extraout_x9;
  for (uVar4 = extraout_x8; (param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU)) != uVar4;
      uVar4 = uVar4 + 1) {
    auStack_170[uVar4] = (&PTR_FUN_110a47e08)[*(int *)((long)param_1 + uVar4 * 4)];
  }
  lVar6 = 0;
  lVar5 = 0;
  uVar4 = 0;
  NEON_fmov(0x3f800000,4);
  uVar3 = param_6;
  while( true ) {
    iVar1 = (int)uVar2;
    if ((int)uVar3 < 4) break;
    param_1 = auStack_170;
    func_0x00010840dfa0(auStack_170[0]);
    param_3 = param_4;
    uVar2 = uVar4;
    (*extraout_x8_00)();
    uVar4 = (ulong)((int)uVar4 + 4);
    lVar5 = lVar5 + param_8 * 4;
    lVar6 = lVar6 + param_7 * 4;
    uVar3 = uVar3 - 4;
  }
  if (0 < (int)uVar3) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    _memcpy(&uStack_1b0,param_4 + lVar6,param_7 * (ulong)param_6 - lVar6);
    NEON_fmov(0x3f800000,4);
    func_0x00010840dfa0(auStack_170[0],auStack_170);
    iVar1 = 0;
    (*extraout_x8_01)();
    param_3 = param_8 * (ulong)param_6 - lVar5;
    param_1 = (undefined8 *)(param_5 + lVar5);
    param_2 = &uStack_1b0;
    _memcpy(param_1,param_2);
  }
  func_0x00010840deec(uStack_70);
  if (extraout_x9_00 == extraout_x8_02) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined4 *)(param_3 + (long)iVar1);
  uVar7 = (undefined1)((uint)uVar8 >> 8);
  auVar9._6_2_ = 0;
  auVar9._0_6_ = (uint6)CONCAT14(uVar7,(uint)CONCAT12(uVar7,(ushort)(byte)uVar8)) & 0xffff0000ffff;
  auVar9[8] = (char)((uint)uVar8 >> 0x10);
  auVar9._9_3_ = 0;
  auVar9[0xc] = (char)((uint)uVar8 >> 0x18);
  auVar9._13_3_ = 0;
  NEON_ucvtf(auVar9,4);
                    /* WARNING: Could not recover jumptable at 0x00010840dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[1])(param_1 + 1,param_2 + 1);
  return;
}



/* Entry: 10840ac0c; end: 10840b407;  */

void FUN_10840ac0c(long param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined4 *)(param_3 + param_5);
  uVar1 = (undefined1)((uint)uVar2 >> 8);
  auVar3._6_2_ = 0;
  auVar3._0_6_ = (uint6)CONCAT14(uVar1,(uint)CONCAT12(uVar1,(ushort)(byte)uVar2)) & 0xffff0000ffff;
  auVar3[8] = (char)((uint)uVar2 >> 0x10);
  auVar3._9_3_ = 0;
  auVar3[0xc] = (char)((uint)uVar2 >> 0x18);
  auVar3._13_3_ = 0;
  NEON_ucvtf(auVar3,4);
                    /* WARNING: Could not recover jumptable at 0x00010840dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))((undefined8 *)(param_1 + 8),param_2 + 8);
  return;
}



/* Entry: 10840b408; end: 10840b6ab;  */

void FUN_10840b408(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint3 uVar3;
  float in_register_00005008;
  float in_register_0000500c;
  undefined1 auVar4 [16];
  undefined1 in_q1 [16];
  float in_register_00005048;
  float in_register_0000504c;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined1 auVar7 [15];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar14._0_4_ = (float)param_1 * 1.0371292;
  auVar14._4_4_ = (float)((ulong)param_1 >> 0x20) * 1.0371292;
  auVar14._8_4_ = in_register_00005008 * 1.0371292;
  auVar14._12_4_ = in_register_0000500c * 1.0371292;
  auVar4._0_4_ = (float)param_2 * 1.2122682;
  auVar4._4_4_ = (float)((ulong)param_2 >> 0x20) * 1.2122682;
  auVar4._8_4_ = in_register_00005048 * 1.2122682;
  auVar4._12_4_ = in_register_0000504c * 1.2122682;
  auVar5 = ZEXT216(0);
  NEON_fmov(0x3f800000,4);
  auVar8 = NEON_scvtf(auVar14,4);
  fVar10 = (float)(SUB43(auVar14._0_4_,0) & 0x7fffff | 0x3f000000);
  fVar11 = (float)(SUB43(auVar14._4_4_,0) & 0x7fffff | 0x3f000000);
  fVar12 = (float)(SUB43(auVar14._8_4_,0) & 0x7fffff | 0x3f000000);
  fVar13 = (float)(SUB43(auVar14._12_4_,0) & 0x7fffff | 0x3f000000);
  fVar10 = ((auVar8._0_4_ * 1.1920929e-07 + -124.22552 + fVar10 * -1.4980303) -
           1.72588 / (fVar10 + 0.35208872)) * 0.33333334;
  fVar11 = ((auVar8._4_4_ * 1.1920929e-07 + -124.22552 + fVar11 * -1.4980303) -
           1.72588 / (fVar11 + 0.35208872)) * 0.33333334;
  fVar12 = ((auVar8._8_4_ * 1.1920929e-07 + -124.22552 + fVar12 * -1.4980303) -
           1.72588 / (fVar12 + 0.35208872)) * 0.33333334;
  fVar13 = ((auVar8._12_4_ * 1.1920929e-07 + -124.22552 + fVar13 * -1.4980303) -
           1.72588 / (fVar13 + 0.35208872)) * 0.33333334;
  auVar15._0_4_ =
       (fVar10 + 121.274055 + (fVar10 - (float)(int)fVar10) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar10 - (float)(int)fVar10))) * 8388608.0;
  auVar15._4_4_ =
       (fVar11 + 121.274055 + (fVar11 - (float)(int)fVar11) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar11 - (float)(int)fVar11))) * 8388608.0;
  auVar15._8_4_ =
       (fVar12 + 121.274055 + (fVar12 - (float)(int)fVar12) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar12 - (float)(int)fVar12))) * 8388608.0;
  auVar15._12_4_ =
       (fVar13 + 121.274055 + (fVar13 - (float)(int)fVar13) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar13 - (float)(int)fVar13))) * 8388608.0;
  auVar8 = NEON_fmax(auVar15,auVar5,4);
  auVar1._8_4_ = 0x4eff0000;
  auVar1._0_8_ = 0x4eff00004eff0000;
  auVar1._12_4_ = 0x4eff0000;
  NEON_fmin(auVar8,auVar1,4);
  auVar8 = NEON_scvtf(in_q1,4);
  fVar10 = ((auVar8._0_4_ * 1.1920929e-07 + -124.22552 +
            (float)CONCAT13(0x3f,in_q1._0_3_ & 0x7fffff) * -1.4980303) -
           1.72588 / ((float)CONCAT13(0x3f,in_q1._0_3_ & 0x7fffff) + 0.35208872)) * 0.33333334;
  fVar11 = ((auVar8._4_4_ * 1.1920929e-07 + -124.22552 +
            (float)CONCAT13(0x3f,in_q1._4_3_ & 0x7fffff) * -1.4980303) -
           1.72588 / ((float)CONCAT13(0x3f,in_q1._4_3_ & 0x7fffff) + 0.35208872)) * 0.33333334;
  fVar12 = ((auVar8._8_4_ * 1.1920929e-07 + -124.22552 +
            (float)(in_q1._8_3_ & 0x7fffff | 0x3f000000) * -1.4980303) -
           1.72588 / ((float)(in_q1._8_3_ & 0x7fffff | 0x3f000000) + 0.35208872)) * 0.33333334;
  fVar13 = ((auVar8._12_4_ * 1.1920929e-07 + -124.22552 +
            (float)(CONCAT13(0x3f,in_q1._12_3_) & 0xff7fffff) * -1.4980303) -
           1.72588 / ((float)(CONCAT13(0x3f,in_q1._12_3_) & 0xff7fffff) + 0.35208872)) * 0.33333334;
  auVar9._0_4_ = (fVar10 + 121.274055 + (fVar10 - (float)(int)fVar10) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar10 - (float)(int)fVar10))) * 8388608.0;
  auVar9._4_4_ = (fVar11 + 121.274055 + (fVar11 - (float)(int)fVar11) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar11 - (float)(int)fVar11))) * 8388608.0;
  auVar9._8_4_ = (fVar12 + 121.274055 + (fVar12 - (float)(int)fVar12) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar12 - (float)(int)fVar12))) * 8388608.0;
  auVar9._12_4_ =
       (fVar13 + 121.274055 + (fVar13 - (float)(int)fVar13) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar13 - (float)(int)fVar13))) * 8388608.0;
  auVar8 = NEON_fmax(auVar9,auVar5,4);
  auVar2._8_4_ = 0x4eff0000;
  auVar2._0_8_ = 0x4eff00004eff0000;
  auVar2._12_4_ = 0x4eff0000;
  NEON_fmin(auVar8,auVar2,4);
  auVar8 = NEON_scvtf(auVar4,4);
  uVar3 = SUB43(auVar4._8_4_,0) & 0x7fffff;
  auVar7._0_12_ = ZEXT312(uVar3) << 0x40;
  auVar7[0xc] = SUB41(auVar4._12_4_,0);
  auVar7[0xd] = (char)((uint)auVar4._12_4_ >> 8);
  auVar7[0xe] = (byte)((uint)auVar4._12_4_ >> 0x10) & 0x7f;
  uVar6 = (ulong)(CONCAT16((char)((uint)auVar4._4_4_ >> 0x10),
                           CONCAT15((char)((uint)auVar4._4_4_ >> 8),
                                    CONCAT14(SUB41(auVar4._4_4_,0),
                                             (uint)(SUB43(auVar4._0_4_,0) & 0x7fffff)))) &
                 0x7fffffffffffff) | 0x3f0000003f000000;
  fVar12 = (float)(uVar3 | 0x3f000000);
  fVar13 = (float)(auVar7._12_3_ | 0x3f000000);
  fVar10 = (float)uVar6;
  fVar11 = (float)(uVar6 >> 0x20);
  fVar10 = ((auVar8._0_4_ * 1.1920929e-07 + -124.22552 + fVar10 * -1.4980303) -
           1.72588 / (fVar10 + 0.35208872)) * 0.33333334;
  fVar11 = ((auVar8._4_4_ * 1.1920929e-07 + -124.22552 + fVar11 * -1.4980303) -
           1.72588 / (fVar11 + 0.35208872)) * 0.33333334;
  fVar12 = ((auVar8._8_4_ * 1.1920929e-07 + -124.22552 + fVar12 * -1.4980303) -
           1.72588 / (fVar12 + 0.35208872)) * 0.33333334;
  fVar13 = ((auVar8._12_4_ * 1.1920929e-07 + -124.22552 + fVar13 * -1.4980303) -
           1.72588 / (fVar13 + 0.35208872)) * 0.33333334;
  fVar11 = (fVar11 + 121.274055 + (fVar11 - (float)(int)fVar11) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar11 - (float)(int)fVar11))) * 8388608.0;
  fVar12 = (fVar12 + 121.274055 + (fVar12 - (float)(int)fVar12) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar12 - (float)(int)fVar12))) * 8388608.0;
  fVar13 = (fVar13 + 121.274055 + (fVar13 - (float)(int)fVar13) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar13 - (float)(int)fVar13))) * 8388608.0;
  auVar8[4] = SUB41(fVar11,0);
  auVar8._0_4_ = (fVar10 + 121.274055 + (fVar10 - (float)(int)fVar10) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar10 - (float)(int)fVar10))) * 8388608.0;
  auVar8[5] = (char)((uint)fVar11 >> 8);
  auVar8[6] = (char)((uint)fVar11 >> 0x10);
  auVar8[7] = (char)((uint)fVar11 >> 0x18);
  auVar8[8] = SUB41(fVar12,0);
  auVar8[9] = (char)((uint)fVar12 >> 8);
  auVar8[10] = (char)((uint)fVar12 >> 0x10);
  auVar8[0xb] = (char)((uint)fVar12 >> 0x18);
  auVar8[0xc] = SUB41(fVar13,0);
  auVar8[0xd] = (char)((uint)fVar13 >> 8);
  auVar8[0xe] = (char)((uint)fVar13 >> 0x10);
  auVar8[0xf] = (char)((uint)fVar13 >> 0x18);
  auVar8 = NEON_fmax(auVar8,auVar5,4);
  auVar5._8_4_ = 0x4eff0000;
  auVar5._0_8_ = 0x4eff00004eff0000;
  auVar5._12_4_ = 0x4eff0000;
  NEON_fmin(auVar8,auVar5,4);
  NEON_fmov(0xc1800000,4);
                    /* WARNING: Could not recover jumptable at 0x00010840b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 8))((undefined8 *)(param_3 + 8),param_4 + 8);
  return;
}



/* Entry: 10840b6ac; end: 10840ba63;  */

void FUN_10840b6ac(long param_1,long param_2)

{
  NEON_fmov(0x3f800000,4);
  func_0x00010840db84(param_1,param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010840de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))();
  return;
}



/* Entry: 10840ba64; end: 10840bcd3;  */

void FUN_10840ba64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  float in_register_00005008;
  float in_register_0000500c;
  float in_register_00005028;
  float in_register_0000502c;
  float in_register_00005048;
  float in_register_0000504c;
  float fVar6;
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint7 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  pfVar4 = (float *)*param_5;
  fVar6 = *pfVar4;
  fVar17 = pfVar4[1];
  fVar18 = pfVar4[2];
  uVar13 = SUB41(fVar18,0);
  uVar14 = (undefined1)((uint)fVar18 >> 8);
  uVar15 = (undefined1)((uint)fVar18 >> 0x10);
  uVar16 = (undefined1)((uint)fVar18 >> 0x18);
  fVar20 = fVar18 + ABS((float)param_1) * fVar17;
  fVar21 = (float)CONCAT13(uVar16,CONCAT12(uVar15,(short)(CONCAT15(uVar14,CONCAT14(uVar13,fVar18))
                                                         >> 0x20))) +
           ABS((float)((ulong)param_1 >> 0x20)) * fVar17;
  fVar22 = fVar18 + ABS(in_register_00005008) * fVar17;
  fVar23 = (float)CONCAT13(uVar16,CONCAT12(uVar15,(short)(CONCAT15(uVar14,CONCAT14(uVar13,fVar18))
                                                         >> 0x20))) +
           ABS(in_register_0000500c) * fVar17;
  NEON_fmov(0x3f800000,4);
  auVar2[4] = SUB41(fVar21,0);
  auVar2._0_4_ = fVar20;
  auVar2[5] = (char)((uint)fVar21 >> 8);
  auVar2[6] = (char)((uint)fVar21 >> 0x10);
  auVar2[7] = (char)((uint)fVar21 >> 0x18);
  auVar2[8] = SUB41(fVar22,0);
  auVar2[9] = (char)((uint)fVar22 >> 8);
  auVar2[10] = (char)((uint)fVar22 >> 0x10);
  auVar2[0xb] = (char)((uint)fVar22 >> 0x18);
  auVar2[0xc] = SUB41(fVar23,0);
  auVar2[0xd] = (char)((uint)fVar23 >> 8);
  auVar2[0xe] = (char)((uint)fVar23 >> 0x10);
  auVar2[0xf] = (char)((uint)fVar23 >> 0x18);
  auVar19 = NEON_scvtf(auVar2,4);
  fVar20 = (float)(SUB43(fVar20,0) & 0x7fffff | 0x3f000000);
  fVar21 = (float)(SUB43(fVar21,0) & 0x7fffff | 0x3f000000);
  fVar22 = (float)(SUB43(fVar22,0) & 0x7fffff | 0x3f000000);
  fVar23 = (float)(SUB43(fVar23,0) & 0x7fffff | 0x3f000000);
  fVar20 = fVar6 * ((auVar19._0_4_ * 1.1920929e-07 + -124.22552 + fVar20 * -1.4980303) -
                   1.72588 / (fVar20 + 0.35208872));
  fVar21 = fVar6 * ((auVar19._4_4_ * 1.1920929e-07 + -124.22552 + fVar21 * -1.4980303) -
                   1.72588 / (fVar21 + 0.35208872));
  fVar22 = fVar6 * ((auVar19._8_4_ * 1.1920929e-07 + -124.22552 + fVar22 * -1.4980303) -
                   1.72588 / (fVar22 + 0.35208872));
  fVar23 = fVar6 * ((auVar19._12_4_ * 1.1920929e-07 + -124.22552 + fVar23 * -1.4980303) -
                   1.72588 / (fVar23 + 0.35208872));
  auVar7._0_4_ = (fVar20 + 121.274055 + (fVar20 - (float)(int)fVar20) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar20 - (float)(int)fVar20))) * 8388608.0;
  auVar7._4_4_ = (fVar21 + 121.274055 + (fVar21 - (float)(int)fVar21) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar21 - (float)(int)fVar21))) * 8388608.0;
  auVar7._8_4_ = (fVar22 + 121.274055 + (fVar22 - (float)(int)fVar22) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar22 - (float)(int)fVar22))) * 8388608.0;
  auVar7._12_4_ =
       (fVar23 + 121.274055 + (fVar23 - (float)(int)fVar23) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar23 - (float)(int)fVar23))) * 8388608.0;
  auVar8 = NEON_fmax(auVar7,ZEXT216(0),4);
  auVar19._8_4_ = 0x4eff0000;
  auVar19._0_8_ = 0x4eff00004eff0000;
  auVar19._12_4_ = 0x4eff0000;
  NEON_fmin(auVar8,auVar19,4);
  auVar9._0_4_ = fVar18 + ABS((float)param_2) * fVar17;
  auVar9._4_4_ = (float)(CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,fVar18))))
                        >> 0x20) + ABS((float)((ulong)param_2 >> 0x20)) * fVar17;
  auVar9._8_4_ = fVar18 + ABS(in_register_00005028) * fVar17;
  auVar9._12_4_ =
       (float)(CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,fVar18)))) >> 0x20) +
       ABS(in_register_0000502c) * fVar17;
  auVar19 = NEON_scvtf(auVar9,4);
  uVar11 = (uint)(SUB43(auVar9._0_4_,0) & 0x7fffff);
  uVar12 = CONCAT16((char)((uint)auVar9._12_4_ >> 0x10),
                    CONCAT15((char)((uint)auVar9._12_4_ >> 8),
                             CONCAT14(SUB41(auVar9._12_4_,0),
                                      (uint)(SUB43(auVar9._8_4_,0) & 0x7fffff)))) & 0x7fffff00ffffff
  ;
  fVar20 = (float)(uVar11 | 0x3f000000);
  fVar21 = (float)((uint3)(CONCAT16((char)((uint)auVar9._4_4_ >> 0x10),
                                    CONCAT15((char)((uint)auVar9._4_4_ >> 8),
                                             CONCAT14(SUB41(auVar9._4_4_,0),uVar11))) >> 0x20) &
                   0x7fffff | 0x3f000000);
  fVar22 = (float)((uint)uVar12 | 0x3f000000);
  fVar23 = (float)((uint3)(uVar12 >> 0x20) | 0x3f000000);
  fVar20 = fVar6 * ((auVar19._0_4_ * 1.1920929e-07 + -124.22552 + fVar20 * -1.4980303) -
                   1.72588 / (fVar20 + 0.35208872));
  fVar21 = fVar6 * ((auVar19._4_4_ * 1.1920929e-07 + -124.22552 + fVar21 * -1.4980303) -
                   1.72588 / (fVar21 + 0.35208872));
  fVar22 = fVar6 * ((auVar19._8_4_ * 1.1920929e-07 + -124.22552 + fVar22 * -1.4980303) -
                   1.72588 / (fVar22 + 0.35208872));
  fVar23 = fVar6 * ((auVar19._12_4_ * 1.1920929e-07 + -124.22552 + fVar23 * -1.4980303) -
                   1.72588 / (fVar23 + 0.35208872));
  auVar10._0_4_ =
       (fVar20 + 121.274055 + (fVar20 - (float)(int)fVar20) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar20 - (float)(int)fVar20))) * 8388608.0;
  auVar10._4_4_ =
       (fVar21 + 121.274055 + (fVar21 - (float)(int)fVar21) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar21 - (float)(int)fVar21))) * 8388608.0;
  auVar10._8_4_ =
       (fVar22 + 121.274055 + (fVar22 - (float)(int)fVar22) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar22 - (float)(int)fVar22))) * 8388608.0;
  auVar10._12_4_ =
       (fVar23 + 121.274055 + (fVar23 - (float)(int)fVar23) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar23 - (float)(int)fVar23))) * 8388608.0;
  auVar19 = NEON_fmax(auVar10,ZEXT216(0),4);
  auVar8._8_4_ = 0x4eff0000;
  auVar8._0_8_ = 0x4eff00004eff0000;
  auVar8._12_4_ = 0x4eff0000;
  NEON_fmin(auVar19,auVar8,4);
  fVar20 = fVar18 + ABS((float)param_3) * fVar17;
  fVar21 = fVar18 + ABS((float)((ulong)param_3 >> 0x20)) * fVar17;
  fVar22 = fVar18 + ABS(in_register_00005048) * fVar17;
  fVar18 = fVar18 + ABS(in_register_0000504c) * fVar17;
  uVar13 = (undefined1)((uint)fVar18 >> 8);
  uVar14 = (undefined1)((uint)fVar18 >> 0x10);
  auVar3[4] = SUB41(fVar21,0);
  auVar3._0_4_ = fVar20;
  auVar3[5] = (char)((uint)fVar21 >> 8);
  auVar3[6] = (char)((uint)fVar21 >> 0x10);
  auVar3[7] = (char)((uint)fVar21 >> 0x18);
  auVar3[8] = SUB41(fVar22,0);
  auVar3[9] = (char)((uint)fVar22 >> 8);
  auVar3[10] = (char)((uint)fVar22 >> 0x10);
  auVar3[0xb] = (char)((uint)fVar22 >> 0x18);
  auVar3[0xc] = SUB41(fVar18,0);
  auVar3[0xd] = uVar13;
  auVar3[0xe] = uVar14;
  auVar3[0xf] = (char)((uint)fVar18 >> 0x18);
  auVar19 = NEON_scvtf(auVar3,4);
  uVar12 = CONCAT16(uVar14,CONCAT15(uVar13,CONCAT14(SUB41(fVar18,0),
                                                    (uint)(SUB43(fVar22,0) & 0x7fffff)))) &
           0x7fffff00ffffff;
  fVar18 = (float)(SUB43(fVar20,0) & 0x7fffff | 0x3f000000);
  fVar20 = (float)(SUB43(fVar21,0) & 0x7fffff | 0x3f000000);
  fVar21 = (float)((uint)uVar12 | 0x3f000000);
  fVar22 = (float)((uint3)(uVar12 >> 0x20) | 0x3f000000);
  fVar18 = fVar6 * ((auVar19._0_4_ * 1.1920929e-07 + -124.22552 + fVar18 * -1.4980303) -
                   1.72588 / (fVar18 + 0.35208872));
  fVar20 = fVar6 * ((auVar19._4_4_ * 1.1920929e-07 + -124.22552 + fVar20 * -1.4980303) -
                   1.72588 / (fVar20 + 0.35208872));
  fVar21 = fVar6 * ((auVar19._8_4_ * 1.1920929e-07 + -124.22552 + fVar21 * -1.4980303) -
                   1.72588 / (fVar21 + 0.35208872));
  fVar6 = fVar6 * ((auVar19._12_4_ * 1.1920929e-07 + -124.22552 + fVar22 * -1.4980303) -
                  1.72588 / (fVar22 + 0.35208872));
  auVar5._0_4_ = (fVar18 + 121.274055 + (fVar18 - (float)(int)fVar18) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar18 - (float)(int)fVar18))) * 8388608.0;
  auVar5._4_4_ = (fVar20 + 121.274055 + (fVar20 - (float)(int)fVar20) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar20 - (float)(int)fVar20))) * 8388608.0;
  auVar5._8_4_ = (fVar21 + 121.274055 + (fVar21 - (float)(int)fVar21) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar21 - (float)(int)fVar21))) * 8388608.0;
  auVar5._12_4_ =
       (fVar6 + 121.274055 + (fVar6 - (float)(int)fVar6) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar6 - (float)(int)fVar6))) * 8388608.0;
  auVar19 = NEON_fmax(auVar5,ZEXT216(0),4);
  auVar1._8_4_ = 0x4eff0000;
  auVar1._0_8_ = 0x4eff00004eff0000;
  auVar1._12_4_ = 0x4eff0000;
  NEON_fmin(auVar19,auVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010840de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 8))((undefined8 *)(param_4 + 8),param_5 + 1);
  return;
}



/* Entry: 10840bcd4; end: 10840be83;  */

void FUN_10840bcd4(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar7;
  int iVar8;
  undefined1 in_q0 [16];
  int iVar9;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
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
  undefined1 auVar26 [16];
  undefined1 in_q30 [16];
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  
  uVar1 = *(undefined4 *)(*param_2 + 4);
  auVar26._4_4_ = uVar1;
  auVar26._0_4_ = uVar1;
  auVar26._8_4_ = uVar1;
  auVar26._12_4_ = uVar1;
  auVar6 = ZEXT416(*(uint *)(*param_2 + 0xc));
  iVar2 = -(uint)(in_q0._0_4_ == 0.0);
  iVar7 = -(uint)(in_q0._4_4_ == 0.0);
  iVar8 = -(uint)(in_q0._8_4_ == 0.0);
  iVar9 = -(uint)(in_q0._12_4_ == 0.0);
  bVar10 = ~(byte)iVar2;
  bVar11 = ~(byte)((uint)iVar2 >> 8);
  bVar12 = ~(byte)((uint)iVar2 >> 0x10);
  bVar13 = ~(byte)((uint)iVar2 >> 0x18);
  bVar14 = ~(byte)iVar7;
  bVar15 = ~(byte)((uint)iVar7 >> 8);
  bVar16 = ~(byte)((uint)iVar7 >> 0x10);
  bVar17 = ~(byte)((uint)iVar7 >> 0x18);
  bVar18 = ~(byte)iVar8;
  bVar19 = ~(byte)((uint)iVar8 >> 8);
  bVar20 = ~(byte)((uint)iVar8 >> 0x10);
  bVar21 = ~(byte)((uint)iVar8 >> 0x18);
  bVar22 = ~(byte)iVar9;
  bVar23 = ~(byte)((uint)iVar9 >> 8);
  bVar24 = ~(byte)((uint)iVar9 >> 0x10);
  bVar25 = ~(byte)((uint)iVar9 >> 0x18);
  auVar3._0_8_ = func_0x00010840dc54(param_1,param_2 + 1);
  auVar3._8_8_ = extraout_var;
  NEON_fmax(auVar6,auVar3,4);
  auVar4._0_8_ = func_0x00010840df20();
  auVar4._8_8_ = extraout_var_00;
  NEON_fmax(auVar26,auVar4,4);
  auVar5._0_8_ = func_0x00010840dd18();
  auVar5._8_8_ = extraout_var_01;
  auVar6[1] = bVar11;
  auVar6[0] = bVar10;
  auVar6[2] = bVar12;
  auVar6[3] = bVar13;
  auVar6[4] = bVar14;
  auVar6[5] = bVar15;
  auVar6[6] = bVar16;
  auVar6[7] = bVar17;
  auVar6[8] = bVar18;
  auVar6[9] = bVar19;
  auVar6[10] = bVar20;
  auVar6[0xb] = bVar21;
  auVar6[0xc] = bVar22;
  auVar6[0xd] = bVar23;
  auVar6[0xe] = bVar24;
  auVar6[0xf] = bVar25;
  auVar6 = NEON_fmax(auVar6,auVar5,4);
  NEON_fmin(auVar6,in_q30,4);
                    /* WARNING: Could not recover jumptable at 0x00010840de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))();
  return;
}



/* Entry: 10840be84; end: 10840c18f;  */

void FUN_10840be84(undefined8 param_1,long param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar13;
  float in_register_00005008;
  int iVar14;
  float in_register_0000500c;
  int iVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 extraout_d1;
  undefined8 extraout_d1_00;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 extraout_d2;
  undefined8 extraout_var_01;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar25 [16];
  float fVar29;
  float fVar31;
  undefined1 auVar26 [16];
  int iVar32;
  float fVar33;
  float fVar34;
  int iVar35;
  float fVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  float fVar40;
  float fVar41;
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
  undefined1 auVar54 [16];
  undefined4 uVar55;
  ulong uVar56;
  undefined1 auVar58 [16];
  float fVar60;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined1 auVar62 [16];
  byte bVar77;
  float fVar78;
  float extraout_s17;
  float extraout_s17_00;
  float extraout_s18;
  float extraout_var_02;
  float extraout_s19;
  float extraout_var_03;
  float fVar79;
  float fVar80;
  float extraout_s20;
  float extraout_var_04;
  float fVar81;
  float fVar82;
  float fVar83;
  float extraout_s21;
  float fVar84;
  float extraout_var_05;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float extraout_s22;
  float extraout_var_06;
  float fVar89;
  float fVar90;
  float extraout_s23;
  float fVar91;
  float extraout_var_07;
  float fVar92;
  float fVar93;
  float fVar94;
  float extraout_s24;
  float extraout_var_08;
  float fVar95;
  float fVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float extraout_s26;
  float extraout_var_09;
  float fVar99;
  float extraout_s27;
  float extraout_var_10;
  float fVar100;
  float fVar101;
  undefined4 extraout_s28;
  undefined4 extraout_var_11;
  undefined4 uVar102;
  undefined1 extraout_b30;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
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
  undefined1 uVar113;
  undefined1 uVar114;
  float fVar116;
  float fVar117;
  undefined1 auVar115 [16];
  float fVar118;
  undefined1 auVar16 [16];
  undefined1 auVar57 [12];
  undefined1 auVar59 [16];
  
  fVar86 = (float)((ulong)param_1 >> 0x20);
  lVar7 = *param_3;
  fVar34 = ABS((float)param_1);
  fVar29 = ABS(fVar86);
  uVar103 = SUB41(fVar29,0);
  uVar104 = (undefined1)((uint)fVar29 >> 8);
  uVar105 = (undefined1)((uint)fVar29 >> 0x10);
  uVar106 = (undefined1)((uint)fVar29 >> 0x18);
  fVar79 = ABS(in_register_00005008);
  uVar107 = SUB41(fVar79,0);
  uVar108 = (undefined1)((uint)fVar79 >> 8);
  uVar109 = (undefined1)((uint)fVar79 >> 0x10);
  uVar110 = (undefined1)((uint)fVar79 >> 0x18);
  fVar81 = ABS(in_register_0000500c);
  uVar111 = SUB41(fVar81,0);
  uVar112 = (undefined1)((uint)fVar81 >> 8);
  uVar113 = (undefined1)((uint)fVar81 >> 0x10);
  uVar114 = (undefined1)((uint)fVar81 >> 0x18);
  fVar31 = *(float *)(lVar7 + 4);
  fVar78 = *(float *)(lVar7 + 8);
  fVar96 = *(float *)(lVar7 + 0xc);
  iVar9 = -(uint)((float)param_1 == 0.0);
  iVar13 = -(uint)(fVar86 == 0.0);
  iVar14 = -(uint)(in_register_00005008 == 0.0);
  iVar15 = -(uint)(in_register_0000500c == 0.0);
  auVar23 = ZEXT216(0);
  auVar24 = NEON_fmov(0x3f800000,4);
  iVar32 = -(uint)(fVar34 == auVar24._0_4_);
  iVar35 = -(uint)(fVar29 == auVar24._4_4_);
  iVar37 = -(uint)(fVar79 == auVar24._8_4_);
  iVar39 = -(uint)(fVar81 == auVar24._12_4_);
  auVar10[0] = ~(byte)iVar9 & ~(byte)iVar32;
  auVar10[1] = ~(byte)((uint)iVar9 >> 8) & ~(byte)((uint)iVar32 >> 8);
  auVar10[2] = ~(byte)((uint)iVar9 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
  auVar10[3] = ~(byte)((uint)iVar9 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
  auVar10[4] = ~(byte)iVar13 & ~(byte)iVar35;
  auVar10[5] = ~(byte)((uint)iVar13 >> 8) & ~(byte)((uint)iVar35 >> 8);
  auVar10[6] = ~(byte)((uint)iVar13 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  auVar10[7] = ~(byte)((uint)iVar13 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  auVar10[8] = ~(byte)iVar14 & ~(byte)iVar37;
  auVar10[9] = ~(byte)((uint)iVar14 >> 8) & ~(byte)((uint)iVar37 >> 8);
  auVar10[10] = ~(byte)((uint)iVar14 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
  auVar10[0xb] = ~(byte)((uint)iVar14 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
  auVar10[0xc] = ~(byte)iVar15 & ~(byte)iVar39;
  auVar10[0xd] = ~(byte)((uint)iVar15 >> 8) & ~(byte)((uint)iVar39 >> 8);
  auVar10[0xe] = ~(byte)((uint)iVar15 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
  auVar10[0xf] = ~(byte)((uint)iVar15 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
  auVar4[4] = uVar103;
  auVar4._0_4_ = fVar34;
  auVar4[5] = uVar104;
  auVar4[6] = uVar105;
  auVar4[7] = uVar106;
  auVar4[8] = uVar107;
  auVar4[9] = uVar108;
  auVar4[10] = uVar109;
  auVar4[0xb] = uVar110;
  auVar4[0xc] = uVar111;
  auVar4[0xd] = uVar112;
  auVar4[0xe] = uVar113;
  auVar4[0xf] = uVar114;
  auVar62 = NEON_ucvtf(auVar4,4);
  fVar33 = 1.1920929e-07;
  fVar36 = 1.1920929e-07;
  fVar38 = 1.1920929e-07;
  fVar40 = 1.1920929e-07;
  bVar74 = 0xff;
  bVar75 = 0xff;
  bVar76 = 0x7f;
  bVar77 = 0;
  bVar61 = 0xff;
  bVar63 = 0xff;
  bVar64 = 0x7f;
  bVar65 = 0;
  bVar66 = 0xff;
  bVar67 = 0xff;
  bVar68 = 0x7f;
  bVar69 = 0;
  bVar70 = 0xff;
  bVar71 = 0xff;
  bVar72 = 0x7f;
  bVar73 = 0;
  fVar83 = (float)(SUB43(fVar34,0) & 0x7fffff | 0x3f000000);
  fVar84 = (float)(SUB43(fVar29,0) & 0x7fffff | 0x3f000000);
  fVar85 = (float)(SUB43(fVar79,0) & 0x7fffff | 0x3f000000);
  fVar87 = (float)(SUB43(fVar81,0) & 0x7fffff | 0x3f000000);
  fVar29 = -124.22552;
  fVar79 = -1.4980303;
  fVar81 = 0.35208872;
  fVar86 = 1.72588;
  fVar90 = ((auVar62._0_4_ * 1.1920929e-07 + -124.22552 + fVar83 * -1.4980303) -
           1.72588 / (fVar83 + 0.35208872)) * fVar96;
  fVar91 = ((auVar62._4_4_ * 1.1920929e-07 + -124.22552 + fVar84 * -1.4980303) -
           1.72588 / (fVar84 + 0.35208872)) * fVar96;
  fVar92 = ((auVar62._8_4_ * 1.1920929e-07 + -124.22552 + fVar85 * -1.4980303) -
           1.72588 / (fVar85 + 0.35208872)) * fVar96;
  fVar93 = ((auVar62._12_4_ * 1.1920929e-07 + -124.22552 + fVar87 * -1.4980303) -
           1.72588 / (fVar87 + 0.35208872)) * fVar96;
  fVar83 = 121.274055;
  fVar84 = -1.4901291;
  fVar85 = 4.8425255;
  fVar87 = 27.728024;
  fVar100 = 8388608.0;
  fVar101 = 8388608.0;
  auVar1._4_4_ = (fVar91 + 121.274055 + (fVar91 - (float)(int)fVar91) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar91 - (float)(int)fVar91))) * 8388608.0;
  auVar1._0_4_ = (fVar90 + 121.274055 + (fVar90 - (float)(int)fVar90) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar90 - (float)(int)fVar90))) * 8388608.0;
  auVar1._8_4_ = (fVar92 + 121.274055 + (fVar92 - (float)(int)fVar92) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar92 - (float)(int)fVar92))) * 8388608.0;
  auVar1._12_4_ =
       (fVar93 + 121.274055 + (fVar93 - (float)(int)fVar93) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar93 - (float)(int)fVar93))) * 8388608.0;
  auVar62 = NEON_fmax(auVar1,auVar23,4);
  uVar8 = 0x4eff0000;
  auVar2._8_4_ = 0x4eff0000;
  auVar2._0_8_ = 0x4eff00004eff0000;
  auVar2._12_4_ = 0x4eff0000;
  auVar62 = NEON_fmin(auVar62,auVar2,4);
  auVar115._0_4_ = (int)auVar62._0_4_;
  auVar115._4_4_ = (int)auVar62._4_4_;
  auVar115._8_4_ = (int)auVar62._8_4_;
  auVar115._12_4_ = (int)auVar62._12_4_;
  auVar5[4] = uVar103;
  auVar5._0_4_ = fVar34;
  auVar5[5] = uVar104;
  auVar5[6] = uVar105;
  auVar5[7] = uVar106;
  auVar5[8] = uVar107;
  auVar5[9] = uVar108;
  auVar5[10] = uVar109;
  auVar5[0xb] = uVar110;
  auVar5[0xc] = uVar111;
  auVar5[0xd] = uVar112;
  auVar5[0xe] = uVar113;
  auVar5[0xf] = uVar114;
  auVar11[4] = uVar103;
  auVar11._0_4_ = fVar34;
  auVar11[5] = uVar104;
  auVar11[6] = uVar105;
  auVar11[7] = uVar106;
  auVar11[8] = uVar107;
  auVar11[9] = uVar108;
  auVar11[10] = uVar109;
  auVar11[0xb] = uVar110;
  auVar11[0xc] = uVar111;
  auVar11[0xd] = uVar112;
  auVar11[0xe] = uVar113;
  auVar11[0xf] = uVar114;
  auVar11 = auVar11 ^ (auVar5 ^ auVar115) & auVar10;
  fVar34 = fVar31 + auVar11._4_4_ * fVar78;
  fVar90 = fVar31 + auVar11._8_4_ * fVar78;
  fVar91 = fVar31 + auVar11._12_4_ * fVar78;
  auVar6[4] = SUB41(fVar34,0);
  auVar6._0_4_ = fVar31 + auVar11._0_4_ * fVar78;
  auVar6[5] = (char)((uint)fVar34 >> 8);
  auVar6[6] = (char)((uint)fVar34 >> 0x10);
  auVar6[7] = (char)((uint)fVar34 >> 0x18);
  auVar6[8] = SUB41(fVar90,0);
  auVar6[9] = (char)((uint)fVar90 >> 8);
  auVar6[10] = (char)((uint)fVar90 >> 0x10);
  auVar6[0xb] = (char)((uint)fVar90 >> 0x18);
  auVar6[0xc] = SUB41(fVar91,0);
  auVar6[0xd] = (char)((uint)fVar91 >> 8);
  auVar6[0xe] = (char)((uint)fVar91 >> 0x10);
  auVar6[0xf] = (char)((uint)fVar91 >> 0x18);
  auVar62 = NEON_fmax(auVar6,auVar23,4);
  fVar34 = *(float *)(lVar7 + 0x10);
  fVar41 = *(float *)(lVar7 + 0x14);
  auVar12._0_4_ = auVar62._0_4_ / (fVar34 + auVar11._0_4_ * fVar41);
  auVar12._4_4_ = auVar62._4_4_ / (fVar34 + auVar11._4_4_ * fVar41);
  auVar12._8_4_ = auVar62._8_4_ / (fVar34 + auVar11._8_4_ * fVar41);
  auVar12._12_4_ = auVar62._12_4_ / (fVar34 + auVar11._12_4_ * fVar41);
  NEON_scvtf(auVar12,4);
  fVar93 = fVar29;
  fVar80 = fVar79;
  fVar82 = fVar81;
  fVar88 = fVar86;
  fVar89 = fVar83;
  fVar94 = fVar84;
  fVar95 = fVar85;
  fVar99 = fVar87;
  uVar102 = uVar8;
  fVar27 = fVar31;
  fVar28 = fVar31;
  fVar30 = fVar31;
  fVar116 = fVar34;
  fVar117 = fVar34;
  fVar118 = fVar34;
  func_0x00010840dfdc(param_2,param_3 + 1);
  func_0x00010840de7c();
  auVar17._0_4_ = ABS((float)extraout_d1);
  auVar17._4_4_ = ABS((float)((ulong)extraout_d1 >> 0x20));
  auVar17._8_4_ = ABS((float)extraout_var);
  auVar17._12_4_ = ABS((float)((ulong)extraout_var >> 0x20));
  auVar62 = NEON_ucvtf(auVar17,4);
  fVar90 = auVar62._0_4_ * fVar33;
  fVar91 = auVar62._4_4_ * fVar36;
  fVar78 = auVar62._8_4_ * fVar38;
  fVar92 = auVar62._12_4_ * fVar40;
  func_0x00010840dfdc();
  auVar58._0_4_ = fVar90 * fVar96;
  auVar58._4_4_ = fVar91 * fVar96;
  auVar58._8_4_ = fVar78 * fVar96;
  auVar58._12_4_ = fVar92 * fVar96;
  func_0x00010840de7c();
  auVar16._8_8_ = extraout_var_00;
  auVar16._0_8_ = extraout_d1_00;
  auVar17 = auVar17 ^ (auVar17 ^ auVar58) & auVar16;
  auVar54._0_4_ = fVar31 + auVar17._0_4_ * extraout_s17;
  auVar54._4_4_ = fVar27 + auVar17._4_4_ * extraout_s17;
  auVar54._8_4_ = fVar28 + auVar17._8_4_ * extraout_s17;
  auVar54._12_4_ = fVar30 + auVar17._12_4_ * extraout_s17;
  auVar62 = NEON_fmax(auVar54,auVar23,4);
  auVar18._0_4_ = auVar62._0_4_ / (fVar34 + auVar17._0_4_ * fVar41);
  auVar18._4_4_ = auVar62._4_4_ / (fVar116 + auVar17._4_4_ * fVar41);
  auVar18._8_4_ = auVar62._8_4_ / (fVar117 + auVar17._8_4_ * fVar41);
  auVar18._12_4_ = auVar62._12_4_ / (fVar118 + auVar17._12_4_ * fVar41);
  NEON_scvtf(auVar18,4);
  func_0x00010840dfdc();
  func_0x00010840de7c();
  fVar90 = ABS((float)extraout_d2);
  fVar60 = (float)((ulong)extraout_d2 >> 0x20);
  fVar91 = ABS(fVar60);
  bVar42 = SUB41(fVar91,0);
  bVar43 = (byte)((uint)fVar91 >> 8);
  bVar44 = (byte)((uint)fVar91 >> 0x10);
  bVar45 = (byte)((uint)fVar91 >> 0x18);
  fVar78 = ABS((float)extraout_var_01);
  bVar46 = SUB41(fVar78,0);
  bVar47 = (byte)((uint)fVar78 >> 8);
  bVar48 = (byte)((uint)fVar78 >> 0x10);
  bVar49 = (byte)((uint)fVar78 >> 0x18);
  fVar22 = (float)((ulong)extraout_var_01 >> 0x20);
  fVar92 = ABS(fVar22);
  bVar50 = SUB41(fVar92,0);
  bVar51 = (byte)((uint)fVar92 >> 8);
  bVar52 = (byte)((uint)fVar92 >> 0x10);
  bVar53 = (byte)((uint)fVar92 >> 0x18);
  iVar9 = -(uint)((float)extraout_d2 == 0.0);
  iVar13 = -(uint)(fVar60 == 0.0);
  iVar14 = -(uint)((float)extraout_var_01 == 0.0);
  iVar15 = -(uint)(fVar22 == 0.0);
  iVar32 = -(uint)(fVar90 == auVar24._0_4_);
  iVar35 = -(uint)(fVar91 == auVar24._4_4_);
  iVar37 = -(uint)(fVar78 == auVar24._8_4_);
  iVar39 = -(uint)(fVar92 == auVar24._12_4_);
  auVar19[0] = ~(byte)iVar9 & ~(byte)iVar32;
  auVar19[1] = ~(byte)((uint)iVar9 >> 8) & ~(byte)((uint)iVar32 >> 8);
  auVar19[2] = ~(byte)((uint)iVar9 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
  auVar19[3] = ~(byte)((uint)iVar9 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
  auVar19[4] = ~(byte)iVar13 & ~(byte)iVar35;
  auVar19[5] = ~(byte)((uint)iVar13 >> 8) & ~(byte)((uint)iVar35 >> 8);
  auVar19[6] = ~(byte)((uint)iVar13 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  auVar19[7] = ~(byte)((uint)iVar13 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  auVar19[8] = ~(byte)iVar14 & ~(byte)iVar37;
  auVar19[9] = ~(byte)((uint)iVar14 >> 8) & ~(byte)((uint)iVar37 >> 8);
  auVar19[10] = ~(byte)((uint)iVar14 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
  auVar19[0xb] = ~(byte)((uint)iVar14 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
  auVar19[0xc] = ~(byte)iVar15 & ~(byte)iVar39;
  auVar19[0xd] = ~(byte)((uint)iVar15 >> 8) & ~(byte)((uint)iVar39 >> 8);
  auVar19[0xe] = ~(byte)((uint)iVar15 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
  auVar19[0xf] = ~(byte)((uint)iVar15 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
  auVar24[4] = bVar42;
  auVar24._0_4_ = fVar90;
  auVar24[5] = bVar43;
  auVar24[6] = bVar44;
  auVar24[7] = bVar45;
  auVar24[8] = bVar46;
  auVar24[9] = bVar47;
  auVar24[10] = bVar48;
  auVar24[0xb] = bVar49;
  auVar24[0xc] = bVar50;
  auVar24[0xd] = bVar51;
  auVar24[0xe] = bVar52;
  auVar24[0xf] = bVar53;
  auVar24 = NEON_ucvtf(auVar24,4);
  uVar55 = CONCAT13((byte)((uint)fVar90 >> 0x18) & bVar65,
                    CONCAT12((byte)((uint)fVar90 >> 0x10) & bVar64,
                             CONCAT11((byte)((uint)fVar90 >> 8) & bVar63,SUB41(fVar90,0) & bVar61)))
  ;
  auVar57._0_8_ =
       CONCAT17(bVar45 & bVar69,
                CONCAT16(bVar44 & bVar68,CONCAT15(bVar43 & bVar67,CONCAT14(bVar42 & bVar66,uVar55)))
               );
  auVar57[8] = bVar46 & bVar70;
  auVar57[9] = bVar47 & bVar71;
  auVar57[10] = bVar48 & bVar72;
  auVar57[0xb] = bVar49 & bVar73;
  auVar59[0xc] = bVar50 & bVar74;
  auVar59._0_12_ = auVar57;
  auVar59[0xd] = bVar51 & bVar75;
  auVar59[0xe] = bVar52 & bVar76;
  auVar59[0xf] = bVar53 & bVar77;
  uVar56 = CONCAT44((int)((ulong)auVar57._0_8_ >> 0x20),uVar55) | 0x3f0000003f000000;
  fVar92 = (float)(auVar57._8_4_ | 0x3f000000);
  fVar60 = (float)(auVar59._12_4_ | 0x3f000000);
  fVar91 = (float)uVar56;
  fVar78 = (float)(uVar56 >> 0x20);
  fVar91 = ((auVar24._0_4_ * fVar33 + extraout_s18 + extraout_s19 * fVar91) -
           extraout_s21 / (fVar91 + extraout_s20)) * fVar96;
  fVar78 = ((auVar24._4_4_ * fVar36 + extraout_var_02 + extraout_var_03 * fVar78) -
           extraout_var_05 / (fVar78 + extraout_var_04)) * fVar96;
  fVar92 = ((auVar24._8_4_ * fVar38 + fVar29 + fVar79 * fVar92) - fVar86 / (fVar92 + fVar81)) *
           fVar96;
  fVar96 = ((auVar24._12_4_ * fVar40 + fVar93 + fVar80 * fVar60) - fVar88 / (fVar60 + fVar82)) *
           fVar96;
  auVar97._0_4_ =
       (fVar91 + extraout_s22 + extraout_s23 * (fVar91 - (float)(int)fVar91) +
       extraout_s26 / (extraout_s24 - (fVar91 - (float)(int)fVar91))) * extraout_s27;
  auVar97._4_4_ =
       (fVar78 + extraout_var_06 + extraout_var_07 * (fVar78 - (float)(int)fVar78) +
       extraout_var_09 / (extraout_var_08 - (fVar78 - (float)(int)fVar78))) * extraout_var_10;
  auVar97._8_4_ =
       (fVar92 + fVar83 + fVar84 * (fVar92 - (float)(int)fVar92) +
       fVar87 / (fVar85 - (fVar92 - (float)(int)fVar92))) * fVar100;
  auVar97._12_4_ =
       (fVar96 + fVar89 + fVar94 * (fVar96 - (float)(int)fVar96) +
       fVar99 / (fVar95 - (fVar96 - (float)(int)fVar96))) * fVar101;
  auVar24 = NEON_fmax(auVar97,auVar23,4);
  auVar3._4_4_ = extraout_var_11;
  auVar3._0_4_ = extraout_s28;
  auVar3._8_4_ = uVar8;
  auVar3._12_4_ = uVar102;
  auVar24 = NEON_fmin(auVar24,auVar3,4);
  auVar98._0_4_ = (int)auVar24._0_4_;
  auVar98._4_4_ = (int)auVar24._4_4_;
  auVar98._8_4_ = (int)auVar24._8_4_;
  auVar98._12_4_ = (int)auVar24._12_4_;
  auVar62[4] = bVar42;
  auVar62._0_4_ = fVar90;
  auVar62[5] = bVar43;
  auVar62[6] = bVar44;
  auVar62[7] = bVar45;
  auVar62[8] = bVar46;
  auVar62[9] = bVar47;
  auVar62[10] = bVar48;
  auVar62[0xb] = bVar49;
  auVar62[0xc] = bVar50;
  auVar62[0xd] = bVar51;
  auVar62[0xe] = bVar52;
  auVar62[0xf] = bVar53;
  auVar20[4] = bVar42;
  auVar20._0_4_ = fVar90;
  auVar20[5] = bVar43;
  auVar20[6] = bVar44;
  auVar20[7] = bVar45;
  auVar20[8] = bVar46;
  auVar20[9] = bVar47;
  auVar20[10] = bVar48;
  auVar20[0xb] = bVar49;
  auVar20[0xc] = bVar50;
  auVar20[0xd] = bVar51;
  auVar20[0xe] = bVar52;
  auVar20[0xf] = bVar53;
  auVar20 = auVar20 ^ (auVar62 ^ auVar98) & auVar19;
  auVar25._0_4_ = fVar31 + auVar20._0_4_ * extraout_s17_00;
  auVar25._4_4_ = fVar27 + auVar20._4_4_ * extraout_s17_00;
  auVar25._8_4_ = fVar28 + auVar20._8_4_ * extraout_s17_00;
  auVar25._12_4_ = fVar30 + auVar20._12_4_ * extraout_s17_00;
  auVar24 = NEON_fmax(auVar25,auVar23,4);
  auVar21._0_4_ = auVar24._0_4_ / (fVar34 + auVar20._0_4_ * fVar41);
  auVar21._4_4_ = auVar24._4_4_ / (fVar116 + auVar20._4_4_ * fVar41);
  auVar21._8_4_ = auVar24._8_4_ / (fVar117 + auVar20._8_4_ * fVar41);
  auVar21._12_4_ = auVar24._12_4_ / (fVar118 + auVar20._12_4_ * fVar41);
  auVar24 = NEON_scvtf(auVar21,4);
  fVar34 = (float)(CONCAT13((byte)((uint)auVar21._0_4_ >> 0x18) & bVar65,
                            CONCAT12((byte)((uint)auVar21._0_4_ >> 0x10) & bVar64,
                                     CONCAT11((byte)((uint)auVar21._0_4_ >> 8) & bVar63,
                                              SUB41(auVar21._0_4_,0) & bVar61))) | 0x3f000000);
  fVar90 = (float)(CONCAT13((byte)((uint)auVar21._4_4_ >> 0x18) & bVar69,
                            CONCAT12((byte)((uint)auVar21._4_4_ >> 0x10) & bVar68,
                                     CONCAT11((byte)((uint)auVar21._4_4_ >> 8) & bVar67,
                                              SUB41(auVar21._4_4_,0) & bVar66))) | 0x3f000000);
  fVar91 = (float)(CONCAT13((byte)((uint)auVar21._8_4_ >> 0x18) & bVar73,
                            CONCAT12((byte)((uint)auVar21._8_4_ >> 0x10) & bVar72,
                                     CONCAT11((byte)((uint)auVar21._8_4_ >> 8) & bVar71,
                                              SUB41(auVar21._8_4_,0) & bVar70))) | 0x3f000000);
  fVar78 = (float)(CONCAT13((byte)((uint)auVar21._12_4_ >> 0x18) & bVar77,
                            CONCAT12((byte)((uint)auVar21._12_4_ >> 0x10) & bVar76,
                                     CONCAT11((byte)((uint)auVar21._12_4_ >> 8) & bVar75,
                                              SUB41(auVar21._12_4_,0) & bVar74))) | 0x3f000000);
  fVar31 = (float)CONCAT13(extraout_var_14,
                           CONCAT12(extraout_var_13,CONCAT11(extraout_var_12,extraout_b30)));
  fVar34 = ((auVar24._0_4_ * fVar33 + extraout_s18 + extraout_s19 * fVar34) -
           extraout_s21 / (fVar34 + extraout_s20)) * fVar31;
  fVar90 = ((auVar24._4_4_ * fVar36 + extraout_var_02 + extraout_var_03 * fVar90) -
           extraout_var_05 / (fVar90 + extraout_var_04)) * fVar31;
  fVar29 = ((auVar24._8_4_ * fVar38 + fVar29 + fVar79 * fVar91) - fVar86 / (fVar91 + fVar81)) *
           fVar31;
  fVar31 = ((auVar24._12_4_ * fVar40 + fVar93 + fVar80 * fVar78) - fVar88 / (fVar78 + fVar82)) *
           fVar31;
  auVar26._0_4_ =
       (fVar34 + extraout_s22 + extraout_s23 * (fVar34 - (float)(int)fVar34) +
       extraout_s26 / (extraout_s24 - (fVar34 - (float)(int)fVar34))) * extraout_s27;
  auVar26._4_4_ =
       (fVar90 + extraout_var_06 + extraout_var_07 * (fVar90 - (float)(int)fVar90) +
       extraout_var_09 / (extraout_var_08 - (fVar90 - (float)(int)fVar90))) * extraout_var_10;
  auVar26._8_4_ =
       (fVar29 + fVar83 + fVar84 * (fVar29 - (float)(int)fVar29) +
       fVar87 / (fVar85 - (fVar29 - (float)(int)fVar29))) * fVar100;
  auVar26._12_4_ =
       (fVar31 + fVar89 + fVar94 * (fVar31 - (float)(int)fVar31) +
       fVar99 / (fVar95 - (fVar31 - (float)(int)fVar31))) * fVar101;
  auVar24 = NEON_fmax(auVar26,auVar23,4);
  auVar23._4_4_ = extraout_var_11;
  auVar23._0_4_ = extraout_s28;
  auVar23._8_4_ = uVar8;
  auVar23._12_4_ = uVar102;
  NEON_fmin(auVar24,auVar23,4);
                    /* WARNING: Could not recover jumptable at 0x00010840c18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 8))();
  return;
}



/* Entry: 10840c190; end: 10840c27f;  */

void FUN_10840c190(long param_1)

{
  func_0x00010840de2c();
  NEON_fmov(0x3f800000,4);
  func_0x00010840d814();
                    /* WARNING: Could not recover jumptable at 0x00010840de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))();
  return;
}



/* Entry: 10840c280; end: 10840c587;  */

void FUN_10840c280(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  float in_register_00005008;
  float in_register_0000500c;
  float in_register_00005028;
  float in_register_0000502c;
  undefined1 auVar10 [16];
  float in_register_00005048;
  float in_register_0000504c;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  undefined1 auVar19 [16];
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  lVar9 = *param_5;
  fVar14 = *(float *)(lVar9 + 4);
  fVar13 = *(float *)(lVar9 + 8);
  fVar12 = *(float *)(lVar9 + 0xc);
  fVar16 = ABS((float)((ulong)param_1 >> 0x20));
  fVar24 = ABS((float)param_1) * fVar14;
  fVar25 = fVar16 * fVar14;
  fVar26 = ABS(in_register_00005008) * fVar14;
  fVar27 = ABS(in_register_0000500c) * fVar14;
  NEON_fmov(0x3f800000,4);
  auVar8[4] = SUB41(fVar25,0);
  auVar8._0_4_ = fVar24;
  auVar8[5] = (char)((uint)fVar25 >> 8);
  auVar8[6] = (char)((uint)fVar25 >> 0x10);
  auVar8[7] = (char)((uint)fVar25 >> 0x18);
  auVar8[8] = SUB41(fVar26,0);
  auVar8[9] = (char)((uint)fVar26 >> 8);
  auVar8[10] = (char)((uint)fVar26 >> 0x10);
  auVar8[0xb] = (char)((uint)fVar26 >> 0x18);
  auVar8[0xc] = SUB41(fVar27,0);
  auVar8[0xd] = (char)((uint)fVar27 >> 8);
  auVar8[0xe] = (char)((uint)fVar27 >> 0x10);
  auVar8[0xf] = (char)((uint)fVar27 >> 0x18);
  auVar23 = NEON_scvtf(auVar8,4);
  fVar24 = (float)(SUB43(fVar24,0) & 0x7fffff | 0x3f000000);
  fVar25 = (float)(SUB43(fVar25,0) & 0x7fffff | 0x3f000000);
  fVar26 = (float)(SUB43(fVar26,0) & 0x7fffff | 0x3f000000);
  fVar27 = (float)(SUB43(fVar27,0) & 0x7fffff | 0x3f000000);
  fVar24 = ((auVar23._0_4_ * 1.1920929e-07 + -124.22552 + fVar24 * -1.4980303) -
           1.72588 / (fVar24 + 0.35208872)) * fVar13;
  fVar25 = ((auVar23._4_4_ * 1.1920929e-07 + -124.22552 + fVar25 * -1.4980303) -
           1.72588 / (fVar25 + 0.35208872)) * fVar13;
  fVar26 = ((auVar23._8_4_ * 1.1920929e-07 + -124.22552 + fVar26 * -1.4980303) -
           1.72588 / (fVar26 + 0.35208872)) * fVar13;
  fVar27 = ((auVar23._12_4_ * 1.1920929e-07 + -124.22552 + fVar27 * -1.4980303) -
           1.72588 / (fVar27 + 0.35208872)) * fVar13;
  auVar1._4_4_ = (fVar25 + 121.274055 + (fVar25 - (float)(int)fVar25) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar25 - (float)(int)fVar25))) * 8388608.0;
  auVar1._0_4_ = (fVar24 + 121.274055 + (fVar24 - (float)(int)fVar24) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar24 - (float)(int)fVar24))) * 8388608.0;
  auVar1._8_4_ = (fVar26 + 121.274055 + (fVar26 - (float)(int)fVar26) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar26 - (float)(int)fVar26))) * 8388608.0;
  auVar1._12_4_ =
       (fVar27 + 121.274055 + (fVar27 - (float)(int)fVar27) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar27 - (float)(int)fVar27))) * 8388608.0;
  auVar23 = NEON_fmax(auVar1,ZEXT216(0),4);
  auVar2._8_4_ = 0x4eff0000;
  auVar2._0_8_ = 0x4eff00004eff0000;
  auVar2._12_4_ = 0x4eff0000;
  NEON_fmin(auVar23,auVar2,4);
  fVar24 = *(float *)(lVar9 + 0x14);
  fVar25 = (ABS((float)param_1) - fVar24) * fVar12 * 1.442695;
  fVar26 = (fVar16 - fVar24) * fVar12 * 1.442695;
  fVar27 = (ABS(in_register_00005008) - fVar24) * fVar12 * 1.442695;
  fVar16 = (ABS(in_register_0000500c) - fVar24) * fVar12 * 1.442695;
  auVar17._0_4_ =
       (fVar25 + 121.274055 + (fVar25 - (float)(int)fVar25) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar25 - (float)(int)fVar25))) * 8388608.0;
  auVar17._4_4_ =
       (fVar26 + 121.274055 + (fVar26 - (float)(int)fVar26) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar26 - (float)(int)fVar26))) * 8388608.0;
  auVar17._8_4_ =
       (fVar27 + 121.274055 + (fVar27 - (float)(int)fVar27) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar27 - (float)(int)fVar27))) * 8388608.0;
  auVar17._12_4_ =
       (fVar16 + 121.274055 + (fVar16 - (float)(int)fVar16) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar16 - (float)(int)fVar16))) * 8388608.0;
  auVar23 = NEON_fmax(auVar17,ZEXT216(0),4);
  auVar3._8_4_ = 0x4eff0000;
  auVar3._0_8_ = 0x4eff00004eff0000;
  auVar3._12_4_ = 0x4eff0000;
  NEON_fmin(auVar23,auVar3,4);
  fVar26 = ABS((float)((ulong)param_2 >> 0x20));
  auVar18._0_4_ = ABS((float)param_2) * fVar14;
  auVar18._4_4_ = fVar26 * fVar14;
  auVar18._8_4_ = ABS(in_register_00005028) * fVar14;
  auVar18._12_4_ = ABS(in_register_0000502c) * fVar14;
  auVar23 = NEON_scvtf(auVar18,4);
  uVar21 = (uint)(SUB43(auVar18._0_4_,0) & 0x7fffff);
  uVar22 = (uint)(SUB43(auVar18._8_4_,0) & 0x7fffff);
  fVar25 = (float)(uVar21 | 0x3f000000);
  fVar27 = (float)((uint3)(CONCAT16((char)((uint)auVar18._4_4_ >> 0x10),
                                    CONCAT15((char)((uint)auVar18._4_4_ >> 8),
                                             CONCAT14(SUB41(auVar18._4_4_,0),uVar21))) >> 0x20) &
                   0x7fffff | 0x3f000000);
  fVar16 = (float)(uVar22 | 0x3f000000);
  fVar20 = (float)((uint3)(CONCAT16((char)((uint)auVar18._12_4_ >> 0x10),
                                    CONCAT15((char)((uint)auVar18._12_4_ >> 8),
                                             CONCAT14(SUB41(auVar18._12_4_,0),uVar22))) >> 0x20) &
                   0x7fffff | 0x3f000000);
  fVar25 = ((auVar23._0_4_ * 1.1920929e-07 + -124.22552 + fVar25 * -1.4980303) -
           1.72588 / (fVar25 + 0.35208872)) * fVar13;
  fVar27 = ((auVar23._4_4_ * 1.1920929e-07 + -124.22552 + fVar27 * -1.4980303) -
           1.72588 / (fVar27 + 0.35208872)) * fVar13;
  fVar16 = ((auVar23._8_4_ * 1.1920929e-07 + -124.22552 + fVar16 * -1.4980303) -
           1.72588 / (fVar16 + 0.35208872)) * fVar13;
  fVar20 = ((auVar23._12_4_ * 1.1920929e-07 + -124.22552 + fVar20 * -1.4980303) -
           1.72588 / (fVar20 + 0.35208872)) * fVar13;
  auVar19._0_4_ =
       (fVar25 + 121.274055 + (fVar25 - (float)(int)fVar25) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar25 - (float)(int)fVar25))) * 8388608.0;
  auVar19._4_4_ =
       (fVar27 + 121.274055 + (fVar27 - (float)(int)fVar27) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar27 - (float)(int)fVar27))) * 8388608.0;
  auVar19._8_4_ =
       (fVar16 + 121.274055 + (fVar16 - (float)(int)fVar16) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar16 - (float)(int)fVar16))) * 8388608.0;
  auVar19._12_4_ =
       (fVar20 + 121.274055 + (fVar20 - (float)(int)fVar20) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar20 - (float)(int)fVar20))) * 8388608.0;
  auVar23 = NEON_fmax(auVar19,ZEXT216(0),4);
  auVar4._8_4_ = 0x4eff0000;
  auVar4._0_8_ = 0x4eff00004eff0000;
  auVar4._12_4_ = 0x4eff0000;
  NEON_fmin(auVar23,auVar4,4);
  fVar25 = (ABS((float)param_2) - fVar24) * fVar12 * 1.442695;
  fVar26 = (fVar26 - fVar24) * fVar12 * 1.442695;
  fVar27 = (ABS(in_register_00005028) - fVar24) * fVar12 * 1.442695;
  fVar16 = (ABS(in_register_0000502c) - fVar24) * fVar12 * 1.442695;
  auVar10._0_4_ =
       (fVar25 + 121.274055 + (fVar25 - (float)(int)fVar25) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar25 - (float)(int)fVar25))) * 8388608.0;
  auVar10._4_4_ =
       (fVar26 + 121.274055 + (fVar26 - (float)(int)fVar26) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar26 - (float)(int)fVar26))) * 8388608.0;
  auVar10._8_4_ =
       (fVar27 + 121.274055 + (fVar27 - (float)(int)fVar27) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar27 - (float)(int)fVar27))) * 8388608.0;
  auVar10._12_4_ =
       (fVar16 + 121.274055 + (fVar16 - (float)(int)fVar16) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar16 - (float)(int)fVar16))) * 8388608.0;
  auVar23 = NEON_fmax(auVar10,ZEXT216(0),4);
  auVar5._8_4_ = 0x4eff0000;
  auVar5._0_8_ = 0x4eff00004eff0000;
  auVar5._12_4_ = 0x4eff0000;
  NEON_fmin(auVar23,auVar5,4);
  fVar16 = ABS((float)((ulong)param_3 >> 0x20));
  fVar25 = ABS((float)param_3) * fVar14;
  fVar26 = fVar16 * fVar14;
  fVar27 = ABS(in_register_00005048) * fVar14;
  fVar14 = ABS(in_register_0000504c) * fVar14;
  auVar23[4] = SUB41(fVar26,0);
  auVar23._0_4_ = fVar25;
  auVar23[5] = (char)((uint)fVar26 >> 8);
  auVar23[6] = (char)((uint)fVar26 >> 0x10);
  auVar23[7] = (char)((uint)fVar26 >> 0x18);
  auVar23[8] = SUB41(fVar27,0);
  auVar23[9] = (char)((uint)fVar27 >> 8);
  auVar23[10] = (char)((uint)fVar27 >> 0x10);
  auVar23[0xb] = (char)((uint)fVar27 >> 0x18);
  auVar23[0xc] = SUB41(fVar14,0);
  auVar23[0xd] = (char)((uint)fVar14 >> 8);
  auVar23[0xe] = (char)((uint)fVar14 >> 0x10);
  auVar23[0xf] = (char)((uint)fVar14 >> 0x18);
  auVar23 = NEON_scvtf(auVar23,4);
  fVar25 = (float)(SUB43(fVar25,0) & 0x7fffff | 0x3f000000);
  fVar26 = (float)(SUB43(fVar26,0) & 0x7fffff | 0x3f000000);
  fVar27 = (float)(SUB43(fVar27,0) & 0x7fffff | 0x3f000000);
  fVar20 = (float)(SUB43(fVar14,0) & 0x7fffff | 0x3f000000);
  fVar14 = ((auVar23._0_4_ * 1.1920929e-07 + -124.22552 + fVar25 * -1.4980303) -
           1.72588 / (fVar25 + 0.35208872)) * fVar13;
  fVar25 = ((auVar23._4_4_ * 1.1920929e-07 + -124.22552 + fVar26 * -1.4980303) -
           1.72588 / (fVar26 + 0.35208872)) * fVar13;
  fVar26 = ((auVar23._8_4_ * 1.1920929e-07 + -124.22552 + fVar27 * -1.4980303) -
           1.72588 / (fVar27 + 0.35208872)) * fVar13;
  fVar13 = ((auVar23._12_4_ * 1.1920929e-07 + -124.22552 + fVar20 * -1.4980303) -
           1.72588 / (fVar20 + 0.35208872)) * fVar13;
  auVar15._0_4_ =
       (fVar14 + 121.274055 + (fVar14 - (float)(int)fVar14) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar14 - (float)(int)fVar14))) * 8388608.0;
  auVar15._4_4_ =
       (fVar25 + 121.274055 + (fVar25 - (float)(int)fVar25) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar25 - (float)(int)fVar25))) * 8388608.0;
  auVar15._8_4_ =
       (fVar26 + 121.274055 + (fVar26 - (float)(int)fVar26) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar26 - (float)(int)fVar26))) * 8388608.0;
  auVar15._12_4_ =
       (fVar13 + 121.274055 + (fVar13 - (float)(int)fVar13) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar13 - (float)(int)fVar13))) * 8388608.0;
  auVar23 = NEON_fmax(auVar15,ZEXT216(0),4);
  auVar6._8_4_ = 0x4eff0000;
  auVar6._0_8_ = 0x4eff00004eff0000;
  auVar6._12_4_ = 0x4eff0000;
  NEON_fmin(auVar23,auVar6,4);
  fVar14 = (ABS((float)param_3) - fVar24) * fVar12 * 1.442695;
  fVar25 = (fVar16 - fVar24) * fVar12 * 1.442695;
  fVar26 = (ABS(in_register_00005048) - fVar24) * fVar12 * 1.442695;
  fVar24 = (ABS(in_register_0000504c) - fVar24) * fVar12 * 1.442695;
  auVar11._0_4_ =
       (fVar14 + 121.274055 + (fVar14 - (float)(int)fVar14) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar14 - (float)(int)fVar14))) * 8388608.0;
  auVar11._4_4_ =
       (fVar25 + 121.274055 + (fVar25 - (float)(int)fVar25) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar25 - (float)(int)fVar25))) * 8388608.0;
  auVar11._8_4_ =
       (fVar26 + 121.274055 + (fVar26 - (float)(int)fVar26) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar26 - (float)(int)fVar26))) * 8388608.0;
  auVar11._12_4_ =
       (fVar24 + 121.274055 + (fVar24 - (float)(int)fVar24) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar24 - (float)(int)fVar24))) * 8388608.0;
  auVar23 = NEON_fmax(auVar11,ZEXT216(0),4);
  auVar7._8_4_ = 0x4eff0000;
  auVar7._0_8_ = 0x4eff00004eff0000;
  auVar7._12_4_ = 0x4eff0000;
  NEON_fmin(auVar23,auVar7,4);
                    /* WARNING: Could not recover jumptable at 0x00010840de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 8))((undefined8 *)(param_4 + 8),param_5 + 1);
  return;
}



/* Entry: 10840c588; end: 10840c677;  */

void FUN_10840c588(long param_1)

{
  func_0x00010840de54();
  NEON_fmov(0x3f800000,4);
  func_0x00010840d948();
                    /* WARNING: Could not recover jumptable at 0x00010840de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))();
  return;
}



/* Entry: 10840c678; end: 10840c96f;  */

void FUN_10840c678(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  float in_register_00005008;
  float in_register_0000500c;
  float in_register_00005028;
  float in_register_0000502c;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float in_register_00005048;
  float in_register_0000504c;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  uint uVar19;
  uint7 uVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar6 = *param_5;
  fVar11 = *(float *)(lVar6 + 8);
  fVar13 = *(float *)(lVar6 + 0x18) + 1.0;
  fVar14 = ABS((float)param_1) / fVar13;
  fVar16 = ABS((float)((ulong)param_1 >> 0x20)) / fVar13;
  fVar17 = ABS(in_register_00005008) / fVar13;
  fVar18 = ABS(in_register_0000500c) / fVar13;
  NEON_fmov(0x3f800000,4);
  auVar21[4] = SUB41(fVar16,0);
  auVar21._0_4_ = fVar14;
  auVar21[5] = (char)((uint)fVar16 >> 8);
  auVar21[6] = (char)((uint)fVar16 >> 0x10);
  auVar21[7] = (char)((uint)fVar16 >> 0x18);
  auVar21[8] = SUB41(fVar17,0);
  auVar21[9] = (char)((uint)fVar17 >> 8);
  auVar21[10] = (char)((uint)fVar17 >> 0x10);
  auVar21[0xb] = (char)((uint)fVar17 >> 0x18);
  auVar21[0xc] = SUB41(fVar18,0);
  auVar21[0xd] = (char)((uint)fVar18 >> 8);
  auVar21[0xe] = (char)((uint)fVar18 >> 0x10);
  auVar21[0xf] = (char)((uint)fVar18 >> 0x18);
  auVar21 = NEON_scvtf(auVar21,4);
  fVar22 = (float)(SUB43(fVar14,0) & 0x7fffff | 0x3f000000);
  fVar23 = (float)(SUB43(fVar16,0) & 0x7fffff | 0x3f000000);
  fVar24 = (float)(SUB43(fVar17,0) & 0x7fffff | 0x3f000000);
  fVar25 = (float)(SUB43(fVar18,0) & 0x7fffff | 0x3f000000);
  fVar22 = ((auVar21._0_4_ * 1.1920929e-07 + -124.22552 + fVar22 * -1.4980303) -
           1.72588 / (fVar22 + 0.35208872)) * fVar11;
  fVar23 = ((auVar21._4_4_ * 1.1920929e-07 + -124.22552 + fVar23 * -1.4980303) -
           1.72588 / (fVar23 + 0.35208872)) * fVar11;
  fVar24 = ((auVar21._8_4_ * 1.1920929e-07 + -124.22552 + fVar24 * -1.4980303) -
           1.72588 / (fVar24 + 0.35208872)) * fVar11;
  fVar25 = ((auVar21._12_4_ * 1.1920929e-07 + -124.22552 + fVar25 * -1.4980303) -
           1.72588 / (fVar25 + 0.35208872)) * fVar11;
  auVar2._4_4_ = (fVar23 + 121.274055 + (fVar23 - (float)(int)fVar23) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar23 - (float)(int)fVar23))) * 8388608.0;
  auVar2._0_4_ = (fVar22 + 121.274055 + (fVar22 - (float)(int)fVar22) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar22 - (float)(int)fVar22))) * 8388608.0;
  auVar2._8_4_ = (fVar24 + 121.274055 + (fVar24 - (float)(int)fVar24) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar24 - (float)(int)fVar24))) * 8388608.0;
  auVar2._12_4_ =
       (fVar25 + 121.274055 + (fVar25 - (float)(int)fVar25) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar25 - (float)(int)fVar25))) * 8388608.0;
  auVar21 = NEON_fmax(auVar2,ZEXT216(0),4);
  auVar3._8_4_ = 0x4eff0000;
  auVar3._0_8_ = 0x4eff00004eff0000;
  auVar3._12_4_ = 0x4eff0000;
  NEON_fmin(auVar21,auVar3,4);
  fVar22 = *(float *)(lVar6 + 0x10);
  fVar16 = fVar16 - fVar22;
  fVar17 = fVar17 - fVar22;
  fVar18 = fVar18 - fVar22;
  auVar1[4] = SUB41(fVar16,0);
  auVar1._0_4_ = fVar14 - fVar22;
  auVar1[5] = (char)((uint)fVar16 >> 8);
  auVar1[6] = (char)((uint)fVar16 >> 0x10);
  auVar1[7] = (char)((uint)fVar16 >> 0x18);
  auVar1[8] = SUB41(fVar17,0);
  auVar1[9] = (char)((uint)fVar17 >> 8);
  auVar1[10] = (char)((uint)fVar17 >> 0x10);
  auVar1[0xb] = (char)((uint)fVar17 >> 0x18);
  auVar1[0xc] = SUB41(fVar18,0);
  auVar1[0xd] = (char)((uint)fVar18 >> 8);
  auVar1[0xe] = (char)((uint)fVar18 >> 0x10);
  auVar1[0xf] = (char)((uint)fVar18 >> 0x18);
  NEON_scvtf(auVar1,4);
  auVar7._0_4_ = ABS((float)param_2) / fVar13;
  auVar7._4_4_ = ABS((float)((ulong)param_2 >> 0x20)) / fVar13;
  auVar7._8_4_ = ABS(in_register_00005028) / fVar13;
  auVar7._12_4_ = ABS(in_register_0000502c) / fVar13;
  auVar21 = NEON_scvtf(auVar7,4);
  uVar19 = (uint)(SUB43(auVar7._0_4_,0) & 0x7fffff);
  uVar20 = CONCAT16((char)((uint)auVar7._12_4_ >> 0x10),
                    CONCAT15((char)((uint)auVar7._12_4_ >> 8),
                             CONCAT14(SUB41(auVar7._12_4_,0),
                                      (uint)(SUB43(auVar7._8_4_,0) & 0x7fffff)))) & 0x7fffff00ffffff
  ;
  fVar14 = (float)(uVar19 | 0x3f000000);
  fVar16 = (float)((uint3)(CONCAT16((char)((uint)auVar7._4_4_ >> 0x10),
                                    CONCAT15((char)((uint)auVar7._4_4_ >> 8),
                                             CONCAT14(SUB41(auVar7._4_4_,0),uVar19))) >> 0x20) &
                   0x7fffff | 0x3f000000);
  fVar17 = (float)((uint)uVar20 | 0x3f000000);
  fVar18 = (float)((uint3)(uVar20 >> 0x20) | 0x3f000000);
  fVar14 = ((auVar21._0_4_ * 1.1920929e-07 + -124.22552 + fVar14 * -1.4980303) -
           1.72588 / (fVar14 + 0.35208872)) * fVar11;
  fVar16 = ((auVar21._4_4_ * 1.1920929e-07 + -124.22552 + fVar16 * -1.4980303) -
           1.72588 / (fVar16 + 0.35208872)) * fVar11;
  fVar17 = ((auVar21._8_4_ * 1.1920929e-07 + -124.22552 + fVar17 * -1.4980303) -
           1.72588 / (fVar17 + 0.35208872)) * fVar11;
  fVar18 = ((auVar21._12_4_ * 1.1920929e-07 + -124.22552 + fVar18 * -1.4980303) -
           1.72588 / (fVar18 + 0.35208872)) * fVar11;
  auVar15._0_4_ =
       (fVar14 + 121.274055 + (fVar14 - (float)(int)fVar14) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar14 - (float)(int)fVar14))) * 8388608.0;
  auVar15._4_4_ =
       (fVar16 + 121.274055 + (fVar16 - (float)(int)fVar16) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar16 - (float)(int)fVar16))) * 8388608.0;
  auVar15._8_4_ =
       (fVar17 + 121.274055 + (fVar17 - (float)(int)fVar17) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar17 - (float)(int)fVar17))) * 8388608.0;
  auVar15._12_4_ =
       (fVar18 + 121.274055 + (fVar18 - (float)(int)fVar18) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar18 - (float)(int)fVar18))) * 8388608.0;
  auVar21 = NEON_fmax(auVar15,ZEXT216(0),4);
  auVar4._8_4_ = 0x4eff0000;
  auVar4._0_8_ = 0x4eff00004eff0000;
  auVar4._12_4_ = 0x4eff0000;
  NEON_fmin(auVar21,auVar4,4);
  auVar8._0_4_ = auVar7._0_4_ - fVar22;
  auVar8._4_4_ = auVar7._4_4_ - fVar22;
  auVar8._8_4_ = auVar7._8_4_ - fVar22;
  auVar8._12_4_ = auVar7._12_4_ - fVar22;
  NEON_scvtf(auVar8,4);
  auVar9._0_4_ = ABS((float)param_3) / fVar13;
  auVar9._4_4_ = ABS((float)((ulong)param_3 >> 0x20)) / fVar13;
  auVar9._8_4_ = ABS(in_register_00005048) / fVar13;
  auVar9._12_4_ = ABS(in_register_0000504c) / fVar13;
  auVar21 = NEON_scvtf(auVar9,4);
  fVar14 = ((auVar21._0_4_ * 1.1920929e-07 + -124.22552 +
            (float)CONCAT13(0x3f,SUB43(auVar9._0_4_,0) & 0x7fffff) * -1.4980303) -
           1.72588 / ((float)CONCAT13(0x3f,SUB43(auVar9._0_4_,0) & 0x7fffff) + 0.35208872)) * fVar11
  ;
  fVar16 = ((auVar21._4_4_ * 1.1920929e-07 + -124.22552 +
            (float)CONCAT13(0x3f,SUB43(auVar9._4_4_,0) & 0x7fffff) * -1.4980303) -
           1.72588 / ((float)CONCAT13(0x3f,SUB43(auVar9._4_4_,0) & 0x7fffff) + 0.35208872)) * fVar11
  ;
  fVar17 = ((auVar21._8_4_ * 1.1920929e-07 + -124.22552 +
            (float)(SUB43(auVar9._8_4_,0) & 0x7fffff | 0x3f000000) * -1.4980303) -
           1.72588 / ((float)(SUB43(auVar9._8_4_,0) & 0x7fffff | 0x3f000000) + 0.35208872)) * fVar11
  ;
  fVar11 = ((auVar21._12_4_ * 1.1920929e-07 + -124.22552 +
            (float)(CONCAT13(0x3f,SUB43(auVar9._12_4_,0)) & 0xff7fffff) * -1.4980303) -
           1.72588 / ((float)(CONCAT13(0x3f,SUB43(auVar9._12_4_,0)) & 0xff7fffff) + 0.35208872)) *
           fVar11;
  auVar12._0_4_ =
       (fVar14 + 121.274055 + (fVar14 - (float)(int)fVar14) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar14 - (float)(int)fVar14))) * 8388608.0;
  auVar12._4_4_ =
       (fVar16 + 121.274055 + (fVar16 - (float)(int)fVar16) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar16 - (float)(int)fVar16))) * 8388608.0;
  auVar12._8_4_ =
       (fVar17 + 121.274055 + (fVar17 - (float)(int)fVar17) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar17 - (float)(int)fVar17))) * 8388608.0;
  auVar12._12_4_ =
       (fVar11 + 121.274055 + (fVar11 - (float)(int)fVar11) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar11 - (float)(int)fVar11))) * 8388608.0;
  auVar21 = NEON_fmax(auVar12,ZEXT216(0),4);
  auVar5._8_4_ = 0x4eff0000;
  auVar5._0_8_ = 0x4eff00004eff0000;
  auVar5._12_4_ = 0x4eff0000;
  NEON_fmin(auVar21,auVar5,4);
  auVar10._0_4_ = auVar9._0_4_ - fVar22;
  auVar10._4_4_ = auVar9._4_4_ - fVar22;
  auVar10._8_4_ = auVar9._8_4_ - fVar22;
  auVar10._12_4_ = auVar9._12_4_ - fVar22;
  NEON_scvtf(auVar10,4);
                    /* WARNING: Could not recover jumptable at 0x00010840de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 8))((undefined8 *)(param_4 + 8),param_5 + 1);
  return;
}



/* Entry: 10840c970; end: 10840cd6f;  */

void FUN_10840c970(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [12];
  long lVar6;
  int *piVar7;
  undefined1 *extraout_x9;
  undefined1 *extraout_x10;
  undefined1 *extraout_x11;
  undefined4 extraout_w12;
  undefined4 extraout_var;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 in_q0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_var_00;
  
  piVar7 = (int *)*param_2;
  auVar15 = NEON_fmov(0x3f800000,4);
  auVar10 = NEON_fmin(in_q0,auVar15,4);
  auVar10 = NEON_fmax(auVar10,ZEXT216(0),4);
  fVar1 = (float)(*piVar7 - 1);
  fVar2 = auVar10._0_4_ * fVar1;
  fVar3 = auVar10._4_4_ * fVar1;
  fVar4 = auVar10._8_4_ * fVar1;
  fVar1 = auVar10._12_4_ * fVar1;
  auVar10._0_4_ = (int)fVar2;
  auVar10._4_4_ = (int)fVar3;
  auVar10._8_4_ = (int)fVar4;
  auVar10._12_4_ = (int)fVar1;
  auVar16._0_4_ = (int)(float)((int)(fVar2 + auVar15._0_4_) + -1);
  auVar16._4_4_ = (int)(float)((int)(fVar3 + auVar15._4_4_) + -1);
  auVar16._8_4_ = (int)(float)((int)(fVar4 + auVar15._8_4_) + -1);
  auVar16._12_4_ = (int)(float)((int)(fVar1 + auVar15._12_4_) + -1);
  if (*(long *)(piVar7 + 2) == 0) {
    lVar6 = *(long *)(piVar7 + 4);
    uVar9 = NEON_rev16(CONCAT26(*(undefined2 *)(lVar6 + auVar10._12_4_ * 2),
                                CONCAT24(*(undefined2 *)(lVar6 + auVar10._8_4_ * 2),
                                         CONCAT22(*(undefined2 *)(lVar6 + auVar10._4_4_ * 2),
                                                  *(undefined2 *)(lVar6 + auVar10._0_4_ * 2)))),1);
    auVar15._2_2_ = 0;
    auVar15._0_2_ = (ushort)uVar9;
    auVar15._4_2_ = (short)((ulong)uVar9 >> 0x10);
    auVar15._6_2_ = 0;
    auVar15._8_2_ = (short)((ulong)uVar9 >> 0x20);
    auVar15._10_2_ = 0;
    auVar15._12_2_ = (short)((ulong)uVar9 >> 0x30);
    auVar15._14_2_ = 0;
    NEON_ucvtf(auVar15,4);
    func_0x00010840ddd0();
  }
  else {
    auVar11._0_8_ = func_0x00010840dec8();
    auVar11._8_8_ = extraout_var_00;
    auVar12._1_15_ = auVar11._1_15_;
    auVar12[0] = *extraout_x9;
    auVar13._3_13_ = auVar11._3_13_;
    auVar13._0_2_ = auVar12._0_2_;
    auVar13[2] = *extraout_x10;
    auVar5._1_11_ = auVar11._5_11_;
    auVar5[0] = *extraout_x11;
    uVar8 = CONCAT26((short)CONCAT91(auVar11._7_9_,
                                     *(undefined1 *)CONCAT44(extraout_var,extraout_w12)),
                     CONCAT24(auVar5._0_2_,CONCAT22(auVar13._2_2_,auVar13._0_2_))) &
            0xff00ff00ff00ff;
    auVar14._2_2_ = 0;
    auVar14._0_2_ = (ushort)uVar8;
    auVar14._4_2_ = (short)(uVar8 >> 0x10);
    auVar14._6_2_ = 0;
    auVar14._8_2_ = (short)(uVar8 >> 0x20);
    auVar14._10_2_ = 0;
    auVar14._12_2_ = (short)(uVar8 >> 0x30);
    auVar14._14_2_ = 0;
    NEON_ucvtf(auVar14,4);
    func_0x00010840dd94();
  }
  NEON_ucvtf(auVar16,4);
  NEON_scvtf(auVar10,4);
                    /* WARNING: Could not recover jumptable at 0x00010840dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))((undefined8 *)(param_1 + 8),param_2 + 1);
  return;
}



/* Entry: 10840cd70; end: 10840ce87;  */

void FUN_10840cd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long *unaff_x22;
  long unaff_x23;
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 extraout_d3;
  undefined8 auStack_80 [2];
  undefined8 auStack_70 [2];
  undefined8 auStack_60 [2];
  undefined8 auStack_50 [2];
  
  auStack_80[0] = param_3;
  func_0x00010840df54();
  lVar1 = *unaff_x22;
  iVar2 = *(int *)(lVar1 + 0x90);
  auStack_50[0] = extraout_d3;
  FUN_10840d2fc(iVar2,*(undefined4 *)(lVar1 + 300),lVar1 + 0x94,*(undefined8 *)(lVar1 + 0x80),
                *(undefined8 *)(lVar1 + 0x88),auStack_60,auStack_70,auStack_80,auStack_50);
  iVar2 = -(uint)(iVar2 == 4);
  auVar3 = NEON_fmov(0x3f800000,4);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x23 + 8);
  func_0x00010840df3c(auStack_60[0],auStack_70[0],auStack_80[0],
                      param_4 ^ (param_4 ^ auVar3._0_8_) & CONCAT44(iVar2,iVar2));
                    /* WARNING: Could not recover jumptable at 0x00010840ce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10840ce88; end: 10840d2fb;  */

void FUN_10840ce88(void)

{
  long in_x3;
  int in_w4;
  undefined8 in_d3;
  float in_register_00005068;
  float in_register_0000506c;
  
  *(uint *)(in_x3 + in_w4) =
       CONCAT13((char)(int)(in_register_0000506c * 255.0 + 0.5),
                CONCAT12((char)(int)(in_register_00005068 * 255.0 + 0.5),
                         CONCAT11((char)(int)((float)((ulong)in_d3 >> 0x20) * 255.0 + 0.5),
                                  (char)(int)((float)in_d3 * 255.0 + 0.5))));
  return;
}



/* Entry: 10840d2fc; end: 10840d813;  */

void FUN_10840d2fc(uint param_1,int param_2,long param_3,long param_4,long param_5,
                  undefined8 *param_6,float *param_7,float *param_8,undefined8 param_9)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 uVar5;
  undefined1 uVar6;
  float *extraout_x8;
  long extraout_x8_00;
  uint uVar7;
  undefined8 extraout_x9;
  long lVar8;
  long extraout_x9_00;
  float *extraout_x9_01;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float in_s6;
  ulong uVar24;
  unkbyte9 Var25;
  uint uVar30;
  uint uVar31;
  uint uVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ushort uVar34;
  ulong uVar36;
  undefined1 uVar42;
  float fVar43;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar45;
  undefined1 auVar39 [16];
  undefined8 uVar44;
  undefined1 auVar40 [16];
  uint uVar46;
  ulong uVar48;
  undefined1 in_q16 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar47;
  int iVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  ushort uVar54;
  float in_s17;
  ulong uVar55;
  float in_register_00005224;
  float in_register_00005228;
  float in_register_0000522c;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 extraout_b18;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 in_register_00005248;
  undefined1 in_register_00005249;
  undefined1 in_register_0000524a;
  undefined1 in_register_0000524b;
  undefined1 in_register_0000524c;
  undefined1 in_register_0000524d;
  undefined1 in_register_0000524e;
  undefined1 in_register_0000524f;
  float fVar61;
  undefined8 auStack_190 [4];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  float afStack_150 [2];
  undefined8 uStack_148;
  float fStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_48;
  undefined4 uVar35;
  undefined1 auVar37 [14];
  unkuint9 Var56;
  undefined1 auVar57 [12];
  undefined1 auVar58 [14];
  
  func_0x00010840deec(param_9);
  uStack_48 = extraout_x9;
  auStack_190[1] = param_6[1];
  auStack_190[0] = *param_6;
  auStack_190[3] = *(undefined8 *)(param_7 + 2);
  auStack_190[2] = *(undefined8 *)param_7;
  uStack_168 = *(undefined8 *)(param_8 + 2);
  uStack_170 = *(undefined8 *)param_8;
  uStack_158 = *(undefined8 *)(extraout_x8 + 2);
  uStack_160 = *(undefined8 *)extraout_x8;
  lVar8 = (ulong)(param_1 + 3) << 4;
  iVar47 = 1;
  auVar12 = NEON_fmov(0x3f800000,4);
  for (uVar10 = param_1 - 1; -1 < (int)uVar10; uVar10 = uVar10 - 1) {
    bVar1 = *(byte *)(param_3 + (ulong)uVar10);
    fVar16 = (float)(int)(bVar1 - 1);
    fVar13 = (float)auStack_190[(ulong)uVar10 * 2] * fVar16;
    fVar14 = (float)((ulong)auStack_190[(ulong)uVar10 * 2] >> 0x20) * fVar16;
    fVar15 = (float)auStack_190[(ulong)uVar10 * 2 + 1] * fVar16;
    fVar16 = (float)((ulong)auStack_190[(ulong)uVar10 * 2 + 1] >> 0x20) * fVar16;
    auVar17._0_4_ = (int)fVar13;
    auVar17._4_4_ = (int)fVar14;
    auVar17._8_4_ = (int)fVar15;
    auVar17._12_4_ = (int)fVar16;
    in_s6 = (float)(iVar47 * auVar17._0_4_);
    uVar24 = (ulong)uVar10;
    *(int *)(&uStack_c8 + uVar24 * 2) = iVar47 * auVar17._8_4_;
    *(int *)((long)&uStack_c8 + uVar24 * 0x10 + 4) = iVar47 * auVar17._12_4_;
    (&fStack_d0)[uVar24 * 4] = in_s6;
    (&uStack_cc)[uVar24 * 4] = iVar47 * auVar17._4_4_;
    *(ulong *)((long)&uStack_c8 + lVar8) =
         CONCAT44(iVar47 * (int)(float)((int)(fVar16 + auVar12._12_4_) + -1),
                  iVar47 * (int)(float)((int)(fVar15 + auVar12._8_4_) + -1));
    *(ulong *)((long)&fStack_d0 + lVar8) =
         CONCAT44(iVar47 * (int)(float)((int)(fVar14 + auVar12._4_4_) + -1),
                  iVar47 * (int)(float)((int)(fVar13 + auVar12._0_4_) + -1));
    iVar47 = iVar47 * (uint)bVar1;
    auVar17 = NEON_scvtf(auVar17,4);
    fVar13 = fVar13 - auVar17._0_4_;
    fVar14 = fVar14 - auVar17._4_4_;
    fVar15 = fVar15 - auVar17._8_4_;
    fVar16 = fVar16 - auVar17._12_4_;
    uVar24 = (ulong)uVar10;
    *(float *)(&uStack_148 + uVar24 * 2) = auVar12._8_4_ - fVar15;
    *(float *)((long)&uStack_148 + uVar24 * 0x10 + 4) = auVar12._12_4_ - fVar16;
    afStack_150[uVar24 * 4] = auVar12._0_4_ - fVar13;
    afStack_150[uVar24 * 4 + 1] = auVar12._4_4_ - fVar14;
    *(ulong *)((long)&uStack_148 + lVar8) = CONCAT44(fVar16,fVar15);
    *(ulong *)((long)afStack_150 + lVar8) = CONCAT44(fVar14,fVar13);
    lVar8 = lVar8 + -0x10;
  }
  param_8[2] = 0.0;
  param_8[3] = 0.0;
  param_8[0] = 0.0;
  param_8[1] = 0.0;
  param_7[2] = 0.0;
  param_7[3] = 0.0;
  param_7[0] = 0.0;
  param_7[1] = 0.0;
  param_6[1] = 0;
  *param_6 = 0;
  if (param_2 == 4) {
    extraout_x8[0] = 0.0;
    extraout_x8[1] = 0.0;
    extraout_x8[2] = 0.0;
    extraout_x8[3] = 0.0;
  }
  uVar7 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar2 = 1 << (ulong)(param_1 & 0x1f);
  lVar8 = param_4 + -1;
  lVar11 = param_5 + -2;
  do {
    if ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) == uVar10) {
      func_0x00010840deec(uStack_48);
      if (extraout_x9_00 != extraout_x8_00) {
        ___stack_chk_fail();
        auVar12[1] = extraout_var;
        auVar12[0] = extraout_b18;
        auVar12[2] = extraout_var_00;
        auVar12[3] = extraout_var_01;
        auVar12[4] = extraout_var_02;
        auVar12[5] = extraout_var_03;
        auVar12[6] = extraout_var_04;
        auVar12[7] = extraout_var_05;
        auVar12[8] = in_register_00005248;
        auVar12[9] = in_register_00005249;
        auVar12[10] = in_register_0000524a;
        auVar12[0xb] = in_register_0000524b;
        auVar12[0xc] = in_register_0000524c;
        auVar12[0xd] = in_register_0000524d;
        auVar12[0xe] = in_register_0000524e;
        auVar12[0xf] = in_register_0000524f;
        auVar12 = NEON_scvtf(auVar12,4);
        fVar14 = (float)(CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b18)) & 0x7fffff |
                        0x3f000000);
        fVar15 = (float)(CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02)) &
                         0x7fffff | 0x3f000000);
        fVar16 = (float)(CONCAT12(in_register_0000524a,
                                  CONCAT11(in_register_00005249,in_register_00005248)) & 0x7fffff |
                        0x3f000000);
        fVar61 = (float)(CONCAT12(in_register_0000524e,
                                  CONCAT11(in_register_0000524d,in_register_0000524c)) & 0x7fffff |
                        0x3f000000);
        fVar13 = in_q16._0_4_;
        fVar14 = (auVar12._0_4_ * 1.1920929e-07 + -124.22552 + fVar14 * -1.4980303 +
                 -1.72588 / (fVar14 + 0.35208872)) * fVar13;
        fVar15 = (auVar12._4_4_ * 1.1920929e-07 + -124.22552 + fVar15 * -1.4980303 +
                 -1.72588 / (fVar15 + 0.35208872)) * fVar13;
        fVar16 = (auVar12._8_4_ * 1.1920929e-07 + -124.22552 + fVar16 * -1.4980303 +
                 -1.72588 / (fVar16 + 0.35208872)) * fVar13;
        fVar13 = (auVar12._12_4_ * 1.1920929e-07 + -124.22552 + fVar61 * -1.4980303 +
                 -1.72588 / (fVar61 + 0.35208872)) * fVar13;
        auVar52._0_4_ =
             (fVar14 + 121.274055 + (fVar14 - (float)(int)fVar14) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar14 - (float)(int)fVar14))) * 8388608.0;
        auVar52._4_4_ =
             (fVar15 + 121.274055 + (fVar15 - (float)(int)fVar15) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar15 - (float)(int)fVar15))) * 8388608.0;
        auVar52._8_4_ =
             (fVar16 + 121.274055 + (fVar16 - (float)(int)fVar16) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar16 - (float)(int)fVar16))) * 8388608.0;
        auVar52._12_4_ =
             (fVar13 + 121.274055 + (fVar13 - (float)(int)fVar13) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar13 - (float)(int)fVar13))) * 8388608.0;
        auVar12 = NEON_fmax(auVar52,ZEXT216(0),4);
        auVar3._8_4_ = 0x4eff0000;
        auVar3._0_8_ = 0x4eff00004eff0000;
        auVar3._12_4_ = 0x4eff0000;
        NEON_fmin(auVar12,auVar3,4);
        fVar13 = *extraout_x9_01;
        fVar14 = (in_s17 - fVar13) * in_s6 * 1.442695;
        fVar15 = (in_register_00005224 - fVar13) * in_s6 * 1.442695;
        fVar16 = (in_register_00005228 - fVar13) * in_s6 * 1.442695;
        fVar13 = (in_register_0000522c - fVar13) * in_s6 * 1.442695;
        auVar29._0_4_ =
             (fVar14 + 121.274055 + (fVar14 - (float)(int)fVar14) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar14 - (float)(int)fVar14))) * 8388608.0;
        auVar29._4_4_ =
             (fVar15 + 121.274055 + (fVar15 - (float)(int)fVar15) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar15 - (float)(int)fVar15))) * 8388608.0;
        auVar29._8_4_ =
             (fVar16 + 121.274055 + (fVar16 - (float)(int)fVar16) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar16 - (float)(int)fVar16))) * 8388608.0;
        auVar29._12_4_ =
             (fVar13 + 121.274055 + (fVar13 - (float)(int)fVar13) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar13 - (float)(int)fVar13))) * 8388608.0;
        auVar12 = NEON_fmax(auVar29,ZEXT216(0),4);
        auVar4._8_4_ = 0x4eff0000;
        auVar4._0_8_ = 0x4eff00004eff0000;
        auVar4._12_4_ = 0x4eff0000;
        NEON_fmin(auVar12,auVar4,4);
        return;
      }
      return;
    }
    uVar46 = uVar9 & 4;
    uVar24 = (ulong)uVar46;
    fVar13 = (&fStack_d0)[uVar24 * 4];
    uVar30 = (&uStack_cc)[uVar24 * 4];
    uVar31 = *(uint *)(&uStack_c8 + uVar24 * 2);
    uVar33 = *(uint *)((long)&uStack_c8 + uVar24 * 0x10 + 4);
    uVar22 = (&uStack_148)[(ulong)uVar46 * 2];
    uVar19 = *(undefined8 *)(afStack_150 + (ulong)uVar46 * 4);
    switch(param_1 - 1 & 3) {
    case 3:
      uVar46 = uVar10 >> 1 & 4 | 3;
      uVar24 = (ulong)uVar46;
      fVar13 = (float)((int)(&fStack_d0)[uVar24 * 4] + (int)fVar13);
      uVar30 = (&uStack_cc)[uVar24 * 4] + uVar30;
      uVar31 = *(int *)(&uStack_c8 + uVar24 * 2) + uVar31;
      uVar33 = *(int *)((long)&uStack_c8 + uVar24 * 0x10 + 4) + uVar33;
      uVar24 = (ulong)uVar46;
      uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) * afStack_150[uVar24 * 4 + 1],
                        (float)uVar19 * afStack_150[uVar24 * 4]);
      uVar22 = CONCAT44((float)((ulong)uVar22 >> 0x20) *
                        *(float *)((long)&uStack_148 + uVar24 * 0x10 + 4),
                        (float)uVar22 * *(float *)(&uStack_148 + uVar24 * 2));
    case 2:
      uVar46 = uVar10 & 4 | 2;
      uVar24 = (ulong)uVar46;
      fVar13 = (float)((int)(&fStack_d0)[uVar24 * 4] + (int)fVar13);
      uVar30 = (&uStack_cc)[uVar24 * 4] + uVar30;
      uVar31 = *(int *)(&uStack_c8 + uVar24 * 2) + uVar31;
      uVar33 = *(int *)((long)&uStack_c8 + uVar24 * 0x10 + 4) + uVar33;
      uVar24 = (ulong)uVar46;
      uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) * afStack_150[uVar24 * 4 + 1],
                        (float)uVar19 * afStack_150[uVar24 * 4]);
      uVar22 = CONCAT44((float)((ulong)uVar22 >> 0x20) *
                        *(float *)((long)&uStack_148 + uVar24 * 0x10 + 4),
                        (float)uVar22 * *(float *)(&uStack_148 + uVar24 * 2));
    case 1:
      uVar46 = uVar7 & 4 | 1;
      uVar24 = (ulong)uVar46;
      fVar13 = (float)((int)(&fStack_d0)[uVar24 * 4] + (int)fVar13);
      uVar30 = (&uStack_cc)[uVar24 * 4] + uVar30;
      uVar31 = *(int *)(&uStack_c8 + uVar24 * 2) + uVar31;
      uVar33 = *(int *)((long)&uStack_c8 + uVar24 * 0x10 + 4) + uVar33;
      uVar24 = (ulong)uVar46;
      uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) * afStack_150[uVar24 * 4 + 1],
                        (float)uVar19 * afStack_150[uVar24 * 4]);
      uVar22 = CONCAT44((float)((ulong)uVar22 >> 0x20) *
                        *(float *)((long)&uStack_148 + uVar24 * 0x10 + 4),
                        (float)uVar22 * *(float *)(&uStack_148 + uVar24 * 2));
    case 0:
      if (param_2 == 3) {
        if (param_4 == 0) {
          uVar24 = *(ulong *)(lVar11 + (long)(int)uVar31 * 6);
          uVar32 = *(undefined8 *)(lVar11 + (long)(int)uVar33 * 6);
          uVar36 = *(ulong *)(lVar11 + (long)(int)fVar13 * 6);
          uVar44 = *(undefined8 *)(lVar11 + (long)(int)uVar30 * 6);
          uVar55 = uVar24 >> 8 & 0xff00ff00ff00;
          uVar48 = uVar36 >> 8 & 0xff00ff00ff00;
          uVar6 = (undefined1)((ulong)uVar44 >> 0x10);
          uVar5 = (undefined1)((ulong)uVar44 >> 0x20);
          uVar42 = (undefined1)((ulong)uVar44 >> 0x18);
          auVar37[10] = (undefined1)((ulong)uVar44 >> 0x28);
          auVar37[0xc] = (undefined1)((ulong)uVar44 >> 0x38);
          uVar34 = CONCAT11((char)(uVar48 >> 8),(char)(uVar36 >> 0x18));
          uVar35 = CONCAT13((char)(uVar48 >> 0x18),CONCAT12((char)(uVar36 >> 0x28),uVar34));
          auVar37._0_9_ =
               CONCAT18(uVar42,(ulong)CONCAT15((char)(uVar48 >> 0x28),
                                               CONCAT14((char)(uVar36 >> 0x38),uVar35)));
          auVar37[9] = uVar6;
          auVar37[0xb] = uVar5;
          auVar37[0xd] = (char)((ulong)uVar44 >> 0x30);
          uVar54 = CONCAT11((char)(uVar55 >> 8),(char)(uVar24 >> 0x18));
          uVar46 = CONCAT13((char)(uVar55 >> 0x18),CONCAT12((char)(uVar24 >> 0x28),uVar54));
          Var56 = CONCAT18((char)((ulong)uVar32 >> 0x18),
                           (ulong)CONCAT15((char)(uVar55 >> 0x28),
                                           CONCAT14((char)(uVar24 >> 0x38),uVar46)));
          auVar57._0_10_ = CONCAT19((char)((ulong)uVar32 >> 0x10),Var56);
          auVar57[10] = (char)((ulong)uVar32 >> 0x28);
          auVar57[0xb] = (char)((ulong)uVar32 >> 0x20);
          auVar58[0xc] = (char)((ulong)uVar32 >> 0x38);
          auVar58._0_12_ = auVar57;
          auVar58[0xd] = (char)((ulong)uVar32 >> 0x30);
          uVar24 = (ulong)(ushort)((uint)uVar35 >> 0x10);
          Var25 = CONCAT18(auVar37[10],uVar24);
          fVar13 = (float)(ulong)uVar34 * 1.5259022e-05;
          fVar14 = (float)(ushort)(CONCAT19(uVar6,CONCAT18(uVar42,(ulong)uVar34)) >> 0x40) *
                   1.5259022e-05;
          fVar15 = (float)uVar54 * 1.5259022e-05;
          fVar16 = (float)(ushort)((unkuint10)auVar57._0_10_ >> 0x40) * 1.5259022e-05;
          fVar61 = (float)uVar24 * 1.5259022e-05;
          fVar41 = (float)(ushort)(CONCAT19(uVar5,Var25) >> 0x40) * 1.5259022e-05;
          fVar43 = (float)(uVar46 >> 0x10) * 1.5259022e-05;
          fVar45 = (float)auVar57._10_2_ * 1.5259022e-05;
          in_s17 = (float)(unkint9)(auVar37._0_9_ >> 0x20 & 0xffffffff) * 1.5259022e-05;
          in_register_00005224 = (float)(auVar37._8_6_ >> 0x20) * 1.5259022e-05;
          in_register_00005228 = (float)(unkint9)(Var56 >> 0x20 & 0xffffffff) * 1.5259022e-05;
          in_register_0000522c = (float)(auVar58._8_6_ >> 0x20) * 1.5259022e-05;
        }
        else {
          uVar46 = *(uint *)(lVar8 + (-(ulong)((uint)fVar13 >> 0x1f) & 0xfffffffe00000000 |
                                     (ulong)(uint)fVar13 << 1) + (long)(int)fVar13);
          uVar30 = *(uint *)(lVar8 + (-(ulong)(uVar30 >> 0x1f) & 0xfffffffe00000000 |
                                     (ulong)uVar30 << 1) + (long)(int)uVar30);
          uVar31 = *(uint *)(lVar8 + (-(ulong)(uVar31 >> 0x1f) & 0xfffffffe00000000 |
                                     (ulong)uVar31 << 1) + (long)(int)uVar31);
          uVar33 = *(uint *)(lVar8 + (-(ulong)(uVar33 >> 0x1f) & 0xfffffffe00000000 |
                                     (ulong)uVar33 << 1) + (long)(int)uVar33);
          auVar26._0_5_ = CONCAT14((char)(uVar30 >> 8),uVar46 >> 8) & 0xff000000ff;
          auVar26._5_3_ = 0;
          auVar26[8] = (undefined1)(uVar31 >> 8);
          auVar26._9_3_ = 0;
          auVar26[0xc] = (undefined1)(uVar33 >> 8);
          auVar26._13_3_ = 0;
          auVar12 = NEON_ucvtf(auVar26,4);
          fVar13 = auVar12._0_4_ * 0.003921569;
          fVar14 = auVar12._4_4_ * 0.003921569;
          fVar15 = auVar12._8_4_ * 0.003921569;
          fVar16 = auVar12._12_4_ * 0.003921569;
          auVar38._0_8_ = CONCAT44(uVar30 >> 0x10,uVar46 >> 0x10) & 0xffff00ffffff00ff;
          auVar38._8_4_ = uVar31 >> 0x10 & 0xffff00ff;
          auVar38._12_4_ = uVar33 >> 0x10 & 0xffff00ff;
          auVar12 = NEON_ucvtf(auVar38,4);
          fVar61 = auVar12._0_4_ * 0.003921569;
          fVar41 = auVar12._4_4_ * 0.003921569;
          fVar43 = auVar12._8_4_ * 0.003921569;
          fVar45 = auVar12._12_4_ * 0.003921569;
          auVar49._0_4_ = uVar46 >> 0x18;
          auVar49._4_4_ = uVar30 >> 0x18;
          auVar49._8_4_ = uVar31 >> 0x18;
          auVar49._12_4_ = uVar33 >> 0x18;
          auVar12 = NEON_ucvtf(auVar49,4);
          in_s17 = auVar12._0_4_ * 0.003921569;
          in_register_00005224 = auVar12._4_4_ * 0.003921569;
          in_register_00005228 = auVar12._8_4_ * 0.003921569;
          in_register_0000522c = auVar12._12_4_ * 0.003921569;
        }
        in_q16 = ZEXT216(0);
      }
      else if (param_4 == 0) {
        iVar47 = (int)fVar13 << 3;
        iVar53 = uVar30 << 3;
        uVar31 = uVar31 << 3;
        uVar33 = uVar33 << 3;
        uVar32 = NEON_rev16(CONCAT26(*(undefined2 *)(param_5 + (int)uVar33),
                                     CONCAT24(*(undefined2 *)(param_5 + (int)uVar31),
                                              CONCAT22(*(undefined2 *)(param_5 + iVar53),
                                                       *(undefined2 *)(param_5 + iVar47)))),1);
        auVar28._2_2_ = 0;
        auVar28._0_2_ = (ushort)uVar32;
        auVar28._4_2_ = (short)((ulong)uVar32 >> 0x10);
        auVar28._6_2_ = 0;
        auVar28._8_2_ = (short)((ulong)uVar32 >> 0x20);
        auVar28._10_2_ = 0;
        auVar28._12_2_ = (short)((ulong)uVar32 >> 0x30);
        auVar28._14_2_ = 0;
        auVar12 = NEON_ucvtf(auVar28,4);
        uVar24 = CONCAT44(iVar53,iVar47) | 0x200000002;
        fVar13 = auVar12._0_4_ * 1.5259022e-05;
        fVar14 = auVar12._4_4_ * 1.5259022e-05;
        fVar15 = auVar12._8_4_ * 1.5259022e-05;
        fVar16 = auVar12._12_4_ * 1.5259022e-05;
        uVar32 = NEON_rev16(CONCAT26(*(undefined2 *)(param_5 + (int)(uVar33 | 2)),
                                     CONCAT24(*(undefined2 *)(param_5 + (int)(uVar31 | 2)),
                                              CONCAT22(*(undefined2 *)
                                                        (param_5 + (int)(uVar24 >> 0x20)),
                                                       *(undefined2 *)(param_5 + (int)uVar24)))),1);
        auVar40._2_2_ = 0;
        auVar40._0_2_ = (ushort)uVar32;
        auVar40._4_2_ = (short)((ulong)uVar32 >> 0x10);
        auVar40._6_2_ = 0;
        auVar40._8_2_ = (short)((ulong)uVar32 >> 0x20);
        auVar40._10_2_ = 0;
        auVar40._12_2_ = (short)((ulong)uVar32 >> 0x30);
        auVar40._14_2_ = 0;
        auVar12 = NEON_ucvtf(auVar40,4);
        uVar24 = CONCAT44(iVar53,iVar47) | 0x400000004;
        fVar61 = auVar12._0_4_ * 1.5259022e-05;
        fVar41 = auVar12._4_4_ * 1.5259022e-05;
        fVar43 = auVar12._8_4_ * 1.5259022e-05;
        fVar45 = auVar12._12_4_ * 1.5259022e-05;
        uVar32 = NEON_rev16(CONCAT26(*(undefined2 *)(param_5 + (int)(uVar33 | 4)),
                                     CONCAT24(*(undefined2 *)(param_5 + (int)(uVar31 | 4)),
                                              CONCAT22(*(undefined2 *)
                                                        (param_5 + (int)(uVar24 >> 0x20)),
                                                       *(undefined2 *)(param_5 + (int)uVar24)))),1);
        auVar60._2_2_ = 0;
        auVar60._0_2_ = (ushort)uVar32;
        auVar60._4_2_ = (short)((ulong)uVar32 >> 0x10);
        auVar60._6_2_ = 0;
        auVar60._8_2_ = (short)((ulong)uVar32 >> 0x20);
        auVar60._10_2_ = 0;
        auVar60._12_2_ = (short)((ulong)uVar32 >> 0x30);
        auVar60._14_2_ = 0;
        auVar12 = NEON_ucvtf(auVar60,4);
        in_s17 = auVar12._0_4_ * 1.5259022e-05;
        in_register_00005224 = auVar12._4_4_ * 1.5259022e-05;
        in_register_00005228 = auVar12._8_4_ * 1.5259022e-05;
        in_register_0000522c = auVar12._12_4_ * 1.5259022e-05;
        uVar24 = CONCAT44(iVar53,iVar47) | 0x600000006;
        uVar32 = NEON_rev16(CONCAT26(*(undefined2 *)(param_5 + (int)(uVar33 | 6)),
                                     CONCAT24(*(undefined2 *)(param_5 + (int)(uVar31 | 6)),
                                              CONCAT22(*(undefined2 *)
                                                        (param_5 + (int)(uVar24 >> 0x20)),
                                                       *(undefined2 *)(param_5 + (int)uVar24)))),1);
        auVar51._2_2_ = 0;
        auVar51._0_2_ = (ushort)uVar32;
        auVar51._4_2_ = (short)((ulong)uVar32 >> 0x10);
        auVar51._6_2_ = 0;
        auVar51._8_2_ = (short)((ulong)uVar32 >> 0x20);
        auVar51._10_2_ = 0;
        auVar51._12_2_ = (short)((ulong)uVar32 >> 0x30);
        auVar51._14_2_ = 0;
        auVar12 = NEON_ucvtf(auVar51,4);
        in_q16._0_4_ = auVar12._0_4_ * 1.5259022e-05;
        in_q16._4_4_ = auVar12._4_4_ * 1.5259022e-05;
        in_q16._8_4_ = auVar12._8_4_ * 1.5259022e-05;
        in_q16._12_4_ = auVar12._12_4_ * 1.5259022e-05;
      }
      else {
        uVar46 = *(uint *)(param_4 + ((int)fVar13 << 2));
        uVar30 = *(uint *)(param_4 + (int)(uVar30 << 2));
        uVar31 = *(uint *)(param_4 + (int)(uVar31 << 2));
        uVar33 = *(uint *)(param_4 + (int)(uVar33 << 2));
        auVar27._0_5_ = CONCAT14((char)uVar30,uVar46) & 0xff000000ff;
        auVar27._5_3_ = 0;
        auVar27[8] = (char)uVar31;
        auVar27._9_3_ = 0;
        auVar27[0xc] = (char)uVar33;
        auVar27._13_3_ = 0;
        auVar12 = NEON_ucvtf(auVar27,4);
        fVar13 = auVar12._0_4_ * 0.003921569;
        fVar14 = auVar12._4_4_ * 0.003921569;
        fVar15 = auVar12._8_4_ * 0.003921569;
        fVar16 = auVar12._12_4_ * 0.003921569;
        auVar39._0_5_ = CONCAT14((char)(uVar30 >> 8),uVar46 >> 8) & 0xff000000ff;
        auVar39._5_3_ = 0;
        auVar39[8] = (undefined1)(uVar31 >> 8);
        auVar39._9_3_ = 0;
        auVar39[0xc] = (char)(uVar33 >> 8);
        auVar39._13_3_ = 0;
        auVar12 = NEON_ucvtf(auVar39,4);
        fVar61 = auVar12._0_4_ * 0.003921569;
        fVar41 = auVar12._4_4_ * 0.003921569;
        fVar43 = auVar12._8_4_ * 0.003921569;
        fVar45 = auVar12._12_4_ * 0.003921569;
        auVar59._0_8_ = CONCAT44(uVar30 >> 0x10,uVar46 >> 0x10) & 0xffff00ffffff00ff;
        auVar59._8_4_ = uVar31 >> 0x10 & 0xffff00ff;
        auVar59._12_4_ = uVar33 >> 0x10 & 0xffff00ff;
        auVar12 = NEON_ucvtf(auVar59,4);
        in_s17 = auVar12._0_4_ * 0.003921569;
        in_register_00005224 = auVar12._4_4_ * 0.003921569;
        in_register_00005228 = auVar12._8_4_ * 0.003921569;
        in_register_0000522c = auVar12._12_4_ * 0.003921569;
        auVar50._0_4_ = uVar46 >> 0x18;
        auVar50._4_4_ = uVar30 >> 0x18;
        auVar50._8_4_ = uVar31 >> 0x18;
        auVar50._12_4_ = uVar33 >> 0x18;
        auVar12 = NEON_ucvtf(auVar50,4);
        in_q16._0_4_ = auVar12._0_4_ * 0.003921569;
        in_q16._4_4_ = auVar12._4_4_ * 0.003921569;
        in_q16._8_4_ = auVar12._8_4_ * 0.003921569;
        in_q16._12_4_ = auVar12._12_4_ * 0.003921569;
      }
      fVar18 = (float)uVar19;
      fVar20 = (float)((ulong)uVar19 >> 0x20);
      fVar21 = (float)uVar22;
      fVar23 = (float)((ulong)uVar22 >> 0x20);
      fVar14 = (float)((ulong)*param_6 >> 0x20) + fVar14 * fVar20;
      fVar15 = (float)param_6[1] + fVar15 * fVar21;
      in_register_00005248 = SUB41(fVar15,0);
      in_register_00005249 = (undefined1)((uint)fVar15 >> 8);
      in_register_0000524a = (undefined1)((uint)fVar15 >> 0x10);
      in_register_0000524b = (undefined1)((uint)fVar15 >> 0x18);
      fVar16 = (float)((ulong)param_6[1] >> 0x20) + fVar16 * fVar23;
      in_register_0000524c = SUB41(fVar16,0);
      in_register_0000524d = (undefined1)((uint)fVar16 >> 8);
      in_register_0000524e = (undefined1)((uint)fVar16 >> 0x10);
      in_register_0000524f = (undefined1)((uint)fVar16 >> 0x18);
      param_6[1] = CONCAT17(in_register_0000524f,
                            CONCAT16(in_register_0000524e,
                                     CONCAT15(in_register_0000524d,
                                              CONCAT14(in_register_0000524c,fVar15))));
      *param_6 = CONCAT17((char)((uint)fVar14 >> 0x18),
                          CONCAT16((char)((uint)fVar14 >> 0x10),
                                   CONCAT15((char)((uint)fVar14 >> 8),
                                            CONCAT14(SUB41(fVar14,0),
                                                     (float)*param_6 + fVar13 * fVar18))));
      param_7[2] = param_7[2] + fVar43 * fVar21;
      param_7[3] = param_7[3] + fVar45 * fVar23;
      *param_7 = *param_7 + fVar61 * fVar18;
      param_7[1] = param_7[1] + fVar41 * fVar20;
      param_8[2] = param_8[2] + in_register_00005228 * fVar21;
      param_8[3] = param_8[3] + in_register_0000522c * fVar23;
      *param_8 = *param_8 + in_s17 * fVar18;
      param_8[1] = param_8[1] + in_register_00005224 * fVar20;
      in_s6 = *extraout_x8 + in_q16._0_4_ * fVar18;
      extraout_x8[2] = extraout_x8[2] + in_q16._8_4_ * fVar21;
      extraout_x8[3] = extraout_x8[3] + in_q16._12_4_ * fVar23;
      *extraout_x8 = in_s6;
      extraout_x8[1] = extraout_x8[1] + in_q16._4_4_ * fVar20;
      uVar10 = uVar10 + 1;
      uVar9 = uVar9 + 4;
      uVar7 = uVar7 + 2;
    }
  } while( true );
}



/* Entry: 10840d814; end: 10840e01b;  */

void FUN_10840d814(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float *in_x9;
  float in_s6;
  undefined1 auVar3 [16];
  float in_s16;
  undefined1 auVar4 [16];
  float in_s17;
  float in_register_00005224;
  float in_register_00005228;
  float in_register_0000522c;
  undefined1 in_b18;
  undefined1 in_register_00005241;
  undefined1 in_register_00005242;
  undefined1 in_register_00005243;
  undefined1 in_register_00005244;
  undefined1 in_register_00005245;
  undefined1 in_register_00005246;
  undefined1 in_register_00005247;
  undefined1 in_register_00005248;
  undefined1 in_register_00005249;
  undefined1 in_register_0000524a;
  undefined1 in_register_0000524b;
  undefined1 in_register_0000524c;
  undefined1 in_register_0000524d;
  undefined1 in_register_0000524e;
  undefined1 in_register_0000524f;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  auVar5[1] = in_register_00005241;
  auVar5[0] = in_b18;
  auVar5[2] = in_register_00005242;
  auVar5[3] = in_register_00005243;
  auVar5[4] = in_register_00005244;
  auVar5[5] = in_register_00005245;
  auVar5[6] = in_register_00005246;
  auVar5[7] = in_register_00005247;
  auVar5[8] = in_register_00005248;
  auVar5[9] = in_register_00005249;
  auVar5[10] = in_register_0000524a;
  auVar5[0xb] = in_register_0000524b;
  auVar5[0xc] = in_register_0000524c;
  auVar5[0xd] = in_register_0000524d;
  auVar5[0xe] = in_register_0000524e;
  auVar5[0xf] = in_register_0000524f;
  auVar5 = NEON_scvtf(auVar5,4);
  fVar6 = (float)(CONCAT12(in_register_00005242,CONCAT11(in_register_00005241,in_b18)) & 0x7fffff |
                 0x3f000000);
  fVar7 = (float)(CONCAT12(in_register_00005246,CONCAT11(in_register_00005245,in_register_00005244))
                  & 0x7fffff | 0x3f000000);
  fVar8 = (float)(CONCAT12(in_register_0000524a,CONCAT11(in_register_00005249,in_register_00005248))
                  & 0x7fffff | 0x3f000000);
  fVar9 = (float)(CONCAT12(in_register_0000524e,CONCAT11(in_register_0000524d,in_register_0000524c))
                  & 0x7fffff | 0x3f000000);
  fVar6 = (auVar5._0_4_ * 1.1920929e-07 + -124.22552 + fVar6 * -1.4980303 +
          -1.72588 / (fVar6 + 0.35208872)) * in_s16;
  fVar7 = (auVar5._4_4_ * 1.1920929e-07 + -124.22552 + fVar7 * -1.4980303 +
          -1.72588 / (fVar7 + 0.35208872)) * in_s16;
  fVar8 = (auVar5._8_4_ * 1.1920929e-07 + -124.22552 + fVar8 * -1.4980303 +
          -1.72588 / (fVar8 + 0.35208872)) * in_s16;
  fVar9 = (auVar5._12_4_ * 1.1920929e-07 + -124.22552 + fVar9 * -1.4980303 +
          -1.72588 / (fVar9 + 0.35208872)) * in_s16;
  auVar4._0_4_ = (fVar6 + 121.274055 + (fVar6 - (float)(int)fVar6) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar6 - (float)(int)fVar6))) * 8388608.0;
  auVar4._4_4_ = (fVar7 + 121.274055 + (fVar7 - (float)(int)fVar7) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar7 - (float)(int)fVar7))) * 8388608.0;
  auVar4._8_4_ = (fVar8 + 121.274055 + (fVar8 - (float)(int)fVar8) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar8 - (float)(int)fVar8))) * 8388608.0;
  auVar4._12_4_ =
       (fVar9 + 121.274055 + (fVar9 - (float)(int)fVar9) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar9 - (float)(int)fVar9))) * 8388608.0;
  auVar5 = NEON_fmax(auVar4,ZEXT216(0),4);
  auVar1._8_4_ = 0x4eff0000;
  auVar1._0_8_ = 0x4eff00004eff0000;
  auVar1._12_4_ = 0x4eff0000;
  NEON_fmin(auVar5,auVar1,4);
  fVar6 = *in_x9;
  fVar7 = (in_s17 - fVar6) * in_s6 * 1.442695;
  fVar8 = (in_register_00005224 - fVar6) * in_s6 * 1.442695;
  fVar9 = (in_register_00005228 - fVar6) * in_s6 * 1.442695;
  fVar6 = (in_register_0000522c - fVar6) * in_s6 * 1.442695;
  auVar3._0_4_ = (fVar7 + 121.274055 + (fVar7 - (float)(int)fVar7) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar7 - (float)(int)fVar7))) * 8388608.0;
  auVar3._4_4_ = (fVar8 + 121.274055 + (fVar8 - (float)(int)fVar8) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar8 - (float)(int)fVar8))) * 8388608.0;
  auVar3._8_4_ = (fVar9 + 121.274055 + (fVar9 - (float)(int)fVar9) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar9 - (float)(int)fVar9))) * 8388608.0;
  auVar3._12_4_ =
       (fVar6 + 121.274055 + (fVar6 - (float)(int)fVar6) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar6 - (float)(int)fVar6))) * 8388608.0;
  auVar5 = NEON_fmax(auVar3,ZEXT216(0),4);
  auVar2._8_4_ = 0x4eff0000;
  auVar2._0_8_ = 0x4eff00004eff0000;
  auVar2._12_4_ = 0x4eff0000;
  NEON_fmin(auVar5,auVar2,4);
  return;
}



/* Entry: 10840e01c; end: 10840e15b;  */

undefined8 FUN_10840e01c(byte *param_1,long param_2,long param_3,long *param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  char acStack_4 [4];
  
  lVar8 = 0;
  pbVar1 = param_1 + param_2;
  do {
    lVar9 = lVar8;
    if (pbVar1 <= param_1) {
LAB_10840e148:
      *param_4 = (long)(int)lVar9;
      return 0;
    }
    iVar10 = 0;
    pbVar4 = param_1;
    do {
      param_1 = pbVar4 + 1;
      bVar3 = *pbVar4;
      if (bVar3 == 0) goto LAB_10840e148;
      iVar6 = iVar10;
      if (0x20 < bVar3) {
        uVar11 = (uint)bVar3;
        if (uVar11 - 0x7b < 0xffffffb0) {
          return 2;
        }
        cVar2 = (&UNK_10df2d01c)[uVar11 - 0x2b];
        acStack_4[iVar10] = cVar2;
        if (cVar2 < '\0') {
          if (uVar11 != 0x3d) {
            return 2;
          }
        }
        else {
          iVar6 = iVar10 + 1;
          if (*param_1 != 0) goto LAB_10840e088;
          if (iVar10 == 3) break;
          bVar7 = iVar10 == -1;
          iVar10 = iVar10 + 1;
          if (bVar7) goto LAB_10840e148;
        }
        bVar7 = iVar10 == 2;
        if (iVar10 < 2) {
          return 1;
        }
        bVar5 = true;
        goto joined_r0x00010840e110;
      }
LAB_10840e088:
      iVar10 = iVar6;
      pbVar4 = param_1;
    } while (iVar10 < 4);
    bVar7 = false;
    bVar5 = false;
joined_r0x00010840e110:
    if (param_3 == 0) {
      if (bVar7) {
        lVar9 = lVar8 + 1;
        goto LAB_10840e148;
      }
      if (bVar5) goto LAB_10840e12c;
    }
    else {
      *(byte *)(param_3 + lVar8) = (byte)acStack_4[1] >> 4 | acStack_4[0] << 2;
      lVar9 = lVar8 + 1;
      if (bVar7) goto LAB_10840e148;
      *(byte *)(param_3 + lVar9) = (byte)acStack_4[2] >> 2 | acStack_4[1] << 4;
      if (bVar5) {
LAB_10840e12c:
        lVar9 = lVar8 + 2;
        goto LAB_10840e148;
      }
      *(char *)(param_3 + 2 + lVar8) = acStack_4[3] | acStack_4[2] << 6;
    }
    lVar8 = lVar8 + 3;
  } while( true );
}



/* Entry: 10840e15c; end: 10840e257;  */

void FUN_10840e15c(double param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  param_3[0xc] = param_2[6];
  dVar1 = param_2[7];
  param_3[0xd] = dVar1;
  dVar5 = param_2[3];
  dVar4 = param_2[2];
  dVar2 = *param_2 + (dVar4 - *param_2) * param_1;
  dVar3 = param_2[1] + (dVar5 - param_2[1]) * param_1;
  dVar7 = param_2[5];
  dVar6 = param_2[4];
  dVar4 = dVar4 + (dVar6 - dVar4) * param_1;
  dVar5 = dVar5 + (dVar7 - dVar5) * param_1;
  dVar6 = dVar6 + (param_2[6] - dVar6) * param_1;
  dVar7 = dVar7 + (dVar1 - dVar7) * param_1;
  param_3[3] = dVar3;
  param_3[2] = dVar2;
  dVar2 = dVar2 + (dVar4 - dVar2) * param_1;
  dVar3 = dVar3 + (dVar5 - dVar3) * param_1;
  param_3[5] = dVar3;
  param_3[4] = dVar2;
  dVar4 = dVar4 + (dVar6 - dVar4) * param_1;
  dVar5 = dVar5 + (dVar7 - dVar5) * param_1;
  param_3[9] = dVar5;
  param_3[8] = dVar4;
  param_3[0xb] = dVar7;
  param_3[10] = dVar6;
  param_3[7] = dVar3 + (dVar5 - dVar3) * param_1;
  param_3[6] = dVar2 + (dVar4 - dVar2) * param_1;
  return;
}



/* Entry: 10840e258; end: 10840e2ab;  */

bool FUN_10840e258(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010840e220(param_1,param_3);
  if ((param_3 != 0) && (param_1 != 0)) {
    _memcpy(param_2,param_1,param_3);
  }
  return param_1 != 0;
}



/* Entry: 10840e2ac; end: 10840e2f3;  */

void FUN_10840e2ac(long *param_1,long param_2,long param_3)

{
  if (((param_3 != 0) && (param_2 != 0)) && (*param_1 != 0)) {
    _memcpy(param_1[1],param_2,param_3);
  }
  param_1[1] = param_1[1] + param_3;
  return;
}



/* Entry: 10840e2f4; end: 10840e363;  */

long FUN_10840e2f4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = param_1[1];
  lVar3 = *param_1;
  uVar4 = lVar2 - lVar3;
  uVar5 = uVar4 + 3 & 0xfffffffffffffffc;
  if (lVar3 != 0 && uVar5 != uVar4) {
    uVar1 = uVar5 + lVar3;
    if (uVar1 <= lVar2 + 1U) {
      uVar1 = lVar2 + 1;
    }
    _bzero(lVar2,uVar1 - lVar2);
    lVar2 = param_1[1];
  }
  param_1[1] = lVar2 + (uVar5 - uVar4);
  return uVar5 - uVar4;
}



/* Entry: 10840e364; end: 10840e6bf;  */

double * FUN_10840e364(double param_1,double param_2,double param_3,double param_4,double *param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  ulong uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  bVar2 = true;
  if ((param_2 != 0.0) && (bVar2 = false, !NAN(ABS(param_2)))) {
    bVar2 = ABS(param_2) < 1.1920928955078125e-07;
  }
  if (bVar2) {
    bVar2 = true;
    if ((param_1 != 0.0) && (bVar2 = false, !NAN(ABS(param_1)))) {
      bVar2 = ABS(param_1) < 1.1920928955078125e-07;
    }
    if (!bVar2) {
LAB_10840e3b8:
      bVar2 = true;
      if ((param_4 != 0.0) && (bVar2 = false, !NAN(ABS(param_4)))) {
        bVar2 = ABS(param_4) < 1.1920928955078125e-07;
      }
      pdVar8 = param_5;
      if (bVar2) {
        FUN_10840ef7c();
        uVar7 = (ulong)pdVar8 & 0xffffffff;
        pdVar4 = param_5;
        do {
          if (uVar7 == 0) {
            param_5[(ulong)pdVar8 & 0xffffffff] = 0.0;
            return (double *)(ulong)((int)pdVar8 + 1);
          }
          dVar10 = ABS(*pdVar4);
          uVar7 = uVar7 - 1;
          bVar2 = true;
          if ((*pdVar4 != 0.0) && (bVar2 = false, !NAN(dVar10))) {
            bVar2 = dVar10 < 1.1920928955078125e-07;
          }
          pdVar4 = pdVar4 + 1;
        } while (!bVar2);
      }
      else {
        dVar10 = param_1 + param_2 + param_3 + param_4;
        dVar11 = ABS(dVar10);
        bVar2 = true;
        if ((dVar10 != 0.0) && (bVar2 = false, !NAN(dVar11))) {
          bVar2 = dVar11 < 1.1920928955078125e-07;
        }
        if (bVar2) {
          FUN_10840ef7c(param_1,param_1 + param_2,-param_4);
          pdVar4 = pdVar8;
          uVar7 = (ulong)pdVar8 & 0xffffffff;
          pdVar5 = param_5;
          do {
            if (uVar7 == 0) {
              param_5[(ulong)pdVar8 & 0xffffffff] = 1.0;
              return (double *)(ulong)((int)pdVar8 + 1);
            }
            FUN_10840eabc(*pdVar5);
            uVar7 = uVar7 - 1;
            pdVar5 = pdVar5 + 1;
          } while (((ulong)pdVar4 & 1) == 0);
        }
        else {
          param_1 = 1.0 / param_1;
          param_2 = param_2 * param_1;
          dVar10 = param_2 * param_2;
          dVar13 = (dVar10 + -(param_1 * param_3) * 3.0) / 9.0;
          dVar14 = (param_2 * 9.0 * -(param_1 * param_3) + param_2 * (dVar10 + dVar10) +
                   param_1 * param_4 * 27.0) / 54.0;
          dVar12 = dVar14 * dVar14;
          dVar11 = dVar13 * dVar13 * dVar13;
          dVar10 = dVar12 - dVar11;
          if (NAN(dVar10 - dVar10)) {
            pdVar8 = (double *)0x0;
          }
          else {
            param_2 = param_2 / 3.0;
            if (0.0 <= dVar10) {
              dVar9 = ABS(dVar14) + SQRT(dVar10);
              _cbrt();
              dVar10 = -dVar9;
              if (dVar14 <= 0.0) {
                dVar10 = dVar9;
              }
              bVar2 = true;
              if ((dVar9 != 0.0) && (bVar2 = false, !NAN(ABS(dVar9)))) {
                bVar2 = ABS(dVar9) < 1.1920928955078125e-07;
              }
              if (!bVar2) {
                dVar10 = dVar10 + dVar13 / dVar10;
              }
              pdVar8 = param_5 + 1;
              *param_5 = dVar10 - param_2;
              bVar2 = true;
              if ((dVar12 != 0.0) && (bVar2 = false, !NAN(ABS(dVar12)))) {
                bVar2 = ABS(dVar12) < 1.1920928955078125e-07;
              }
              if (!bVar2) {
                uVar7 = 0x10;
                func_0x00010840ee28(dVar12,dVar11);
                if ((int)uVar7 != 0) {
                  func_0x00010840ead4(dVar10 - param_2);
                  if ((uVar7 & 1) == 0) {
                    pdVar8 = param_5 + 2;
                    param_5[1] = dVar10 * -0.5 - param_2;
                  }
                }
              }
            }
            else {
              dVar10 = 1.0;
              if (dVar14 / SQRT(dVar11) <= 1.0) {
                dVar10 = dVar14 / SQRT(dVar11);
              }
              if (dVar10 <= -1.0) {
                dVar10 = -1.0;
              }
              pdVar5 = param_5;
              _acos();
              dVar12 = SQRT(dVar13) * -2.0;
              dVar10 = dVar10 / 3.0;
              _cos();
              dVar11 = dVar12 * dVar10 - param_2;
              *param_5 = dVar11;
              dVar10 = 6.283185307179586;
              func_0x00010840eac8();
              dVar10 = dVar12 * dVar10 - param_2;
              FUN_10840e6c0(dVar11,dVar10);
              pdVar4 = param_5 + 1;
              if (((ulong)pdVar5 & 1) == 0) {
                pdVar4 = param_5 + 2;
                param_5[1] = dVar10;
              }
              dVar10 = -6.283185307179586;
              func_0x00010840eac8();
              func_0x00010840ead4(dVar11);
              pdVar8 = pdVar4;
              if ((((ulong)pdVar5 & 1) == 0) &&
                 (((long)pdVar4 - (long)param_5 == 8 ||
                  (func_0x00010840ead4(param_5[1]), ((ulong)pdVar5 & 1) == 0)))) {
                pdVar8 = pdVar4 + 1;
                *pdVar4 = -param_2 + dVar10 * dVar12;
              }
            }
            pdVar8 = (double *)((ulong)((long)pdVar8 - (long)param_5) >> 3);
          }
        }
      }
      return pdVar8;
    }
  }
  else if (1e-07 <= ABS(param_1 / param_2)) goto LAB_10840e3b8;
  if ((param_2 == 0.0) || (1e+16 <= ABS(param_3 / param_2))) {
    dVar11 = -param_4 / param_3;
    dVar10 = ABS(dVar11);
    uVar6 = (uint)(param_4 == 0.0);
    if (ABS(param_4) < 1.1920928955078125e-07) {
      uVar6 = 1;
    }
    bVar2 = true;
    if ((param_3 != 0.0) && (bVar2 = false, !NAN(ABS(param_3)))) {
      bVar2 = ABS(param_3) < 1.1920928955078125e-07;
    }
    if (bVar2) {
      dVar11 = 0.0;
    }
    uVar1 = (uint)((ulong)dVar10 < 0x7ff0000000000000);
    if (bVar2) {
      uVar1 = uVar6;
    }
    pdVar8 = (double *)(ulong)uVar1;
    *param_5 = dVar11;
  }
  else {
    param_3 = param_3 * -0.5;
    FUN_10840eecc();
    if (((ulong)param_2 < 0x8000000000000000 &&
         (long)ABS(param_2) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
        (long)param_2 - 1U < 0xfffffffffffff) || ABS(param_2) == 0.0) {
      bVar2 = true;
      if ((1.1920928955078125e-07 <= ABS(param_3)) && (bVar2 = false, !NAN(param_3))) {
        bVar2 = param_3 == 0.0;
      }
      dVar10 = 0.0;
      if (!bVar2) {
        dVar10 = param_3;
      }
      if ((ulong)ABS(dVar10) < 0x7ff0000000000000) {
        *param_5 = dVar10;
      }
      pdVar8 = (double *)(ulong)((ulong)ABS(dVar10) < 0x7ff0000000000000);
      bVar2 = true;
      if ((1.1920928955078125e-07 <= ABS(param_4)) && (bVar2 = false, !NAN(param_4))) {
        bVar2 = param_4 == 0.0;
      }
      dVar11 = 0.0;
      if (!bVar2) {
        dVar11 = param_4;
      }
      if ((ulong)ABS(dVar11) < 0x7ff0000000000000) {
        param_5[(long)pdVar8] = dVar11;
        pdVar8 = (double *)0x1;
        if ((ulong)ABS(dVar10) < 0x7ff0000000000000) {
          iVar3 = 0x10;
          func_0x00010840ee28(*param_5,param_5[1]);
          uVar6 = 1;
          if (iVar3 == 0) {
            uVar6 = 2;
          }
          pdVar8 = (double *)(ulong)uVar6;
        }
      }
    }
    else {
      pdVar8 = (double *)0x0;
    }
  }
  return pdVar8;
}



/* Entry: 10840e6c0; end: 10840e6ff;  */

bool FUN_10840e6c0(double param_1,double param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  bVar1 = true;
  if ((param_1 != 0.0) && (bVar1 = false, !NAN(ABS(param_1)))) {
    bVar1 = ABS(param_1) < 1.1920928955078125e-07;
  }
  if (bVar1) {
    return ABS(param_2) < 1.1920928955078125e-07 || param_2 == 0.0;
  }
  if (param_1 == param_2) {
    return true;
  }
  dVar2 = 2.2250738585072014e-308;
  if (2.2250738585072014e-308 <= (double)((ulong)param_1 & 0x7ff0000000000000)) {
    dVar2 = (double)((ulong)param_1 & 0x7ff0000000000000);
  }
  dVar3 = (double)((ulong)param_2 & 0x7ff0000000000000);
  if ((double)((ulong)param_2 & 0x7ff0000000000000) <= dVar2) {
    dVar3 = dVar2;
  }
  return ABS(param_2 - param_1) < dVar3 * 3.774758283725532e-15;
}



/* Entry: 10840e700; end: 10840e86b;  */

ulong FUN_10840e700(double param_1,double param_2,double param_3,double param_4,double *param_5)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double unaff_d11;
  double adStack_110 [7];
  double adStack_d8 [4];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  double *pdStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  double adStack_80 [4];
  
  pdVar6 = adStack_80;
  adStack_80[3] = *(double *)PTR____stack_chk_guard_11034bdc0;
  adStack_80[0] = 0.0;
  adStack_80[1] = 0.0;
  adStack_80[2] = 0.0;
  FUN_10840e364();
  uVar8 = 0;
  uVar4 = (uint)pdVar6;
  for (lVar9 = 0; bVar3 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) << 3 == lVar9, !bVar3;
      lVar9 = lVar9 + 8) {
    unaff_d11 = *(double *)((long)adStack_80 + lVar9);
    iVar5 = (int)uVar8;
    if ((unaff_d11 < 1.0) || (1.00005 < unaff_d11)) {
      if (-5e-05 <= unaff_d11) {
        param_1 = 1.1920928955078125e-07;
        bVar3 = true;
        if ((0.0 < unaff_d11) && (bVar3 = false, !NAN(unaff_d11))) {
          bVar3 = unaff_d11 < 1.1920928955078125e-07;
        }
        if (bVar3) {
          unaff_d11 = 0.0;
          if (0 < iVar5) {
            param_2 = ABS(*param_5);
            param_1 = 1.1920928955078125e-07;
            bVar3 = true;
            if ((*param_5 != 0.0) && (bVar3 = false, !NAN(param_2))) {
              bVar3 = param_2 < 1.1920928955078125e-07;
            }
            if (bVar3) goto LAB_10840e830;
            if (iVar5 != 1) {
              param_2 = ABS(param_5[1]);
              param_1 = 1.1920928955078125e-07;
              bVar3 = true;
              if ((param_5[1] != 0.0) && (bVar3 = false, !NAN(param_2))) {
                bVar3 = param_2 < 1.1920928955078125e-07;
              }
              if (bVar3) goto LAB_10840e830;
            }
          }
          goto LAB_10840e828;
        }
      }
      bVar3 = false;
      if ((0.0 < unaff_d11) && (bVar3 = false, !NAN(unaff_d11))) {
        bVar3 = unaff_d11 < 1.0;
      }
      if (!bVar3) goto LAB_10840e830;
LAB_10840e828:
      param_5[iVar5] = unaff_d11;
      uVar8 = (ulong)(iVar5 + 1);
    }
    else {
      unaff_d11 = 1.0;
      if (iVar5 < 1) goto LAB_10840e828;
      param_1 = *param_5;
      FUN_10840eabc();
      if (((ulong)pdVar6 & 1) == 0) {
        if (iVar5 != 1) {
          param_1 = param_5[1];
          FUN_10840eabc();
          if (((ulong)pdVar6 & 1) != 0) goto LAB_10840e830;
        }
        goto LAB_10840e828;
      }
    }
LAB_10840e830:
  }
  func_0x00010840eadc(adStack_80[3]);
  if (bVar3) {
    return uVar8;
  }
  ___stack_chk_fail();
  uStack_b8 = 0xbf0a36e2eb1c432d;
  uStack_b0 = 0x3ff000346dc5d639;
  uStack_a8 = 0x3ff0000000000000;
  pcStack_88 = FUN_10840e86c;
  adStack_d8[2] = *(double *)PTR____stack_chk_guard_11034bdc0;
  dVar10 = (param_1 - param_1) * param_2 * param_3 * param_4;
  adStack_d8[3] = unaff_d11;
  uStack_a0 = uVar8;
  pdStack_98 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  if (NAN(dVar10)) {
    uVar8 = 0;
    bVar3 = false;
    goto LAB_10840ea94;
  }
  adStack_110[3] = 0.0;
  adStack_110[2] = 0.0;
  adStack_110[5] = 1.0;
  adStack_110[4] = 0.0;
  adStack_110[0] = 0.0;
  adStack_110[1] = 0.0;
  adStack_d8[0] = 0.0;
  adStack_d8[1] = 0.0;
  pdVar7 = adStack_d8;
  FUN_10840ef7c(param_1 * 3.0,param_2 + param_2);
  iVar5 = 0;
  for (lVar9 = 0; ((ulong)pdVar7 & 0xffffffff) << 3 != lVar9; lVar9 = lVar9 + 8) {
    dVar10 = *(double *)((long)adStack_d8 + lVar9);
    bVar3 = false;
    bVar2 = true;
    if (0.0 <= dVar10) {
      bVar3 = false;
      bVar2 = true;
      if (!NAN(dVar10)) {
        bVar3 = dVar10 == 1.0;
        bVar2 = 1.0 <= dVar10;
      }
    }
    if (!bVar2 || bVar3) {
      adStack_110[iVar5] = dVar10;
      iVar5 = iVar5 + 1;
    }
  }
  if (iVar5 == 2) {
    adStack_110[3] = adStack_110[1];
    if (adStack_110[0] <= adStack_110[1]) {
      adStack_110[3] = adStack_110[0];
    }
    dVar10 = adStack_110[1];
    if (adStack_110[1] <= adStack_110[0]) {
      dVar10 = adStack_110[0];
    }
LAB_10840e964:
    adStack_110[4] = dVar10;
  }
  else {
    dVar10 = adStack_110[0];
    if (iVar5 == 1) goto LAB_10840e964;
  }
  uVar8 = 0;
  dVar10 = 1e-08;
  lVar9 = (long)(2 - iVar5);
  while (bVar3 = lVar9 == 2, lVar9 < 3) {
    dVar11 = adStack_110[lVar9 + 2];
    lVar1 = lVar9 + 1;
    dVar12 = param_4 + (param_3 + (param_2 + param_1 * dVar11) * dVar11) * dVar11;
    if (ABS(dVar12) < 1e-08) {
LAB_10840e9a8:
      lVar9 = lVar1;
      if ((0.0 <= dVar11) &&
         ((iVar5 = (int)uVar8, iVar5 < 1 ||
          ((1e-08 <= ABS(*pdVar6 - dVar11) && ((iVar5 == 1 || (1e-08 <= ABS(pdVar6[1] - dVar11))))))
          ))) {
        pdVar6[iVar5] = dVar11;
        uVar8 = (ulong)(iVar5 + 1);
      }
    }
    else {
      dVar13 = adStack_110[lVar9 + 3];
      dVar14 = param_4 + (param_3 + (param_2 + param_1 * dVar13) * dVar13) * dVar13;
      lVar9 = lVar1;
      if (((!NAN((dVar12 - dVar12) * dVar14)) && ((dVar12 <= 0.0 || (dVar14 <= 0.0)))) &&
         ((0.0 <= dVar12 || (0.0 <= dVar14)))) {
        iVar5 = 1000;
        dVar14 = dVar11;
        do {
          dVar11 = (dVar13 + dVar14) * 0.5;
          dVar15 = param_4 + (param_3 + (param_2 + param_1 * dVar11) * dVar11) * dVar11;
          if (ABS(dVar15) < 1e-08) goto LAB_10840e9a8;
          bVar3 = 0.0 <= dVar12;
          if ((0.0 <= dVar15 || bVar3) && (dVar15 <= 0.0 || (dVar12 == 0.0 || !bVar3))) {
            dVar13 = dVar11;
          }
          if ((0.0 <= dVar15 || bVar3) && (dVar15 <= 0.0 || (dVar12 == 0.0 || !bVar3))) {
            dVar11 = dVar14;
          }
          iVar5 = iVar5 + -1;
          dVar14 = dVar11;
        } while (iVar5 != 0);
      }
    }
  }
LAB_10840ea94:
  func_0x00010840eadc(adStack_d8[2],uVar8);
  if (bVar3) {
    return uVar8;
  }
  ___stack_chk_fail();
  if (dVar10 == 1.0) {
    return 1;
  }
  dVar11 = 2.2250738585072014e-308;
  if (2.2250738585072014e-308 <= (double)((ulong)dVar10 & 0x7ff0000000000000)) {
    dVar11 = (double)((ulong)dVar10 & 0x7ff0000000000000);
  }
  dVar12 = 1.0;
  if (1.0 <= dVar11) {
    dVar12 = dVar11;
  }
  return (ulong)(ABS(1.0 - dVar10) < dVar12 * 3.774758283725532e-15);
}



/* Entry: 10840e86c; end: 10840eabb;  */

ulong FUN_10840e86c(double param_1,double param_2,double param_3,double param_4,double *param_5)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double adStack_90 [7];
  double adStack_58 [3];
  
  adStack_58[2] = *(double *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = (param_1 - param_1) * param_2 * param_3 * param_4;
  if (NAN(dVar8)) {
    uVar6 = 0;
    bVar2 = false;
    goto LAB_10840ea94;
  }
  adStack_90[3] = 0.0;
  adStack_90[2] = 0.0;
  adStack_90[5] = 1.0;
  adStack_90[4] = 0.0;
  adStack_90[0] = 0.0;
  adStack_90[1] = 0.0;
  adStack_58[0] = 0.0;
  adStack_58[1] = 0.0;
  pdVar5 = adStack_58;
  FUN_10840ef7c(param_1 * 3.0,param_2 + param_2);
  iVar4 = 0;
  for (lVar7 = 0; ((ulong)pdVar5 & 0xffffffff) << 3 != lVar7; lVar7 = lVar7 + 8) {
    dVar8 = *(double *)((long)adStack_58 + lVar7);
    bVar2 = false;
    bVar3 = true;
    if (0.0 <= dVar8) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar8)) {
        bVar2 = dVar8 == 1.0;
        bVar3 = 1.0 <= dVar8;
      }
    }
    if (!bVar3 || bVar2) {
      adStack_90[iVar4] = dVar8;
      iVar4 = iVar4 + 1;
    }
  }
  if (iVar4 == 2) {
    adStack_90[3] = adStack_90[1];
    if (adStack_90[0] <= adStack_90[1]) {
      adStack_90[3] = adStack_90[0];
    }
    dVar8 = adStack_90[1];
    if (adStack_90[1] <= adStack_90[0]) {
      dVar8 = adStack_90[0];
    }
LAB_10840e964:
    adStack_90[4] = dVar8;
  }
  else {
    dVar8 = adStack_90[0];
    if (iVar4 == 1) goto LAB_10840e964;
  }
  uVar6 = 0;
  dVar8 = 1e-08;
  lVar7 = (long)(2 - iVar4);
  while (bVar2 = lVar7 == 2, lVar7 < 3) {
    dVar9 = adStack_90[lVar7 + 2];
    lVar1 = lVar7 + 1;
    dVar10 = param_4 + (param_3 + (param_2 + param_1 * dVar9) * dVar9) * dVar9;
    if (ABS(dVar10) < 1e-08) {
LAB_10840e9a8:
      lVar7 = lVar1;
      if ((0.0 <= dVar9) &&
         ((iVar4 = (int)uVar6, iVar4 < 1 ||
          ((1e-08 <= ABS(*param_5 - dVar9) && ((iVar4 == 1 || (1e-08 <= ABS(param_5[1] - dVar9))))))
          ))) {
        param_5[iVar4] = dVar9;
        uVar6 = (ulong)(iVar4 + 1);
      }
    }
    else {
      dVar11 = adStack_90[lVar7 + 3];
      dVar12 = param_4 + (param_3 + (param_2 + param_1 * dVar11) * dVar11) * dVar11;
      lVar7 = lVar1;
      if (((!NAN((dVar10 - dVar10) * dVar12)) && ((dVar10 <= 0.0 || (dVar12 <= 0.0)))) &&
         ((0.0 <= dVar10 || (0.0 <= dVar12)))) {
        iVar4 = 1000;
        dVar12 = dVar9;
        do {
          dVar9 = (dVar11 + dVar12) * 0.5;
          dVar13 = param_4 + (param_3 + (param_2 + param_1 * dVar9) * dVar9) * dVar9;
          if (ABS(dVar13) < 1e-08) goto LAB_10840e9a8;
          bVar2 = 0.0 <= dVar10;
          if ((0.0 <= dVar13 || bVar2) && (dVar13 <= 0.0 || (dVar10 == 0.0 || !bVar2))) {
            dVar11 = dVar9;
          }
          if ((0.0 <= dVar13 || bVar2) && (dVar13 <= 0.0 || (dVar10 == 0.0 || !bVar2))) {
            dVar9 = dVar12;
          }
          iVar4 = iVar4 + -1;
          dVar12 = dVar9;
        } while (iVar4 != 0);
      }
    }
  }
LAB_10840ea94:
  func_0x00010840eadc(adStack_58[2],uVar6);
  if (bVar2) {
    return uVar6;
  }
  ___stack_chk_fail();
  if (dVar8 == 1.0) {
    return 1;
  }
  dVar9 = 2.2250738585072014e-308;
  if (2.2250738585072014e-308 <= (double)((ulong)dVar8 & 0x7ff0000000000000)) {
    dVar9 = (double)((ulong)dVar8 & 0x7ff0000000000000);
  }
  dVar10 = 1.0;
  if (1.0 <= dVar9) {
    dVar10 = dVar9;
  }
  return (ulong)(ABS(1.0 - dVar8) < dVar10 * 3.774758283725532e-15);
}



/* Entry: 10840eabc; end: 10840eaef;  */

bool FUN_10840eabc(double param_1)

{
  double dVar1;
  double dVar2;
  
  if (param_1 == 1.0) {
    return true;
  }
  dVar1 = 2.2250738585072014e-308;
  if (2.2250738585072014e-308 <= (double)((ulong)param_1 & 0x7ff0000000000000)) {
    dVar1 = (double)((ulong)param_1 & 0x7ff0000000000000);
  }
  dVar2 = 1.0;
  if (1.0 <= dVar1) {
    dVar2 = dVar1;
  }
  return ABS(1.0 - param_1) < dVar2 * 3.774758283725532e-15;
}



/* Entry: 10840eaf0; end: 10840eb3b;  */

long FUN_10840eaf0(long param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  plVar3 = (long *)*(long *)(param_1 + 0x10);
  while (plVar3 != (long *)0x0) {
    plVar4 = (long *)*plVar3;
    bVar1 = plVar3 != (long *)lVar2;
    plVar3 = plVar4;
    if (bVar1) {
      _free();
    }
  }
  return param_1;
}



/* Entry: 10840eb3c; end: 10840ed0b;  */

void FUN_10840eb3c(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) * (long)param_2 + 0x28);
  FUN_108410808(puVar1,2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = (long)puVar1 + lVar2 * param_2 + 0x28;
  return;
}



/* Entry: 10840ed0c; end: 10840eecb;  */

void FUN_10840ed0c(long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *(long *)(param_2 + 0x20);
  param_1[2] = lVar1;
  if (param_3 == 0) {
    plVar3 = (long *)(param_2 + 0x10);
    do {
      plVar3 = (long *)*plVar3;
      *param_1 = (long)plVar3;
      if (plVar3 == (long *)0x0) goto LAB_10840ed58;
      lVar1 = plVar3[2];
    } while (lVar1 == 0);
  }
  else {
    plVar3 = (long *)(param_2 + 0x18);
    do {
      lVar2 = *plVar3;
      *param_1 = lVar2;
      if (lVar2 == 0) goto LAB_10840ed58;
      plVar3 = (long *)(lVar2 + 8);
    } while (*(long *)(lVar2 + 0x18) == 0);
    lVar1 = *(long *)(lVar2 + 0x18) - lVar1;
  }
LAB_10840ed5c:
  param_1[1] = lVar1;
  return;
LAB_10840ed58:
  lVar1 = 0;
  goto LAB_10840ed5c;
}



/* Entry: 10840eecc; end: 10840ef7b;  */

void FUN_10840eecc(void)

{
  func_0x00010840ee90();
  return;
}



/* Entry: 10840ef7c; end: 10840f0f7;  */

ulong FUN_10840ef7c(double param_1,double param_2,double param_3,double *param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  ulong uVar6;
  double dVar7;
  
  if ((param_1 == 0.0) || (1e+16 <= ABS(param_2 / param_1))) {
    dVar7 = -param_3 / param_2;
    dVar4 = ABS(dVar7);
    uVar5 = (uint)(param_3 == 0.0);
    if (ABS(param_3) < 1.1920928955078125e-07) {
      uVar5 = 1;
    }
    bVar2 = true;
    if ((param_2 != 0.0) && (bVar2 = false, !NAN(ABS(param_2)))) {
      bVar2 = ABS(param_2) < 1.1920928955078125e-07;
    }
    if (bVar2) {
      dVar7 = 0.0;
    }
    uVar1 = (uint)((ulong)dVar4 < 0x7ff0000000000000);
    if (bVar2) {
      uVar1 = uVar5;
    }
    uVar6 = (ulong)uVar1;
    *param_4 = dVar7;
  }
  else {
    param_2 = param_2 * -0.5;
    FUN_10840eecc();
    if (((ulong)param_1 < 0x8000000000000000 &&
         (long)ABS(param_1) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
        (long)param_1 - 1U < 0xfffffffffffff) || ABS(param_1) == 0.0) {
      bVar2 = true;
      if ((1.1920928955078125e-07 <= ABS(param_2)) && (bVar2 = false, !NAN(param_2))) {
        bVar2 = param_2 == 0.0;
      }
      dVar4 = 0.0;
      if (!bVar2) {
        dVar4 = param_2;
      }
      if ((ulong)ABS(dVar4) < 0x7ff0000000000000) {
        *param_4 = dVar4;
      }
      uVar6 = (ulong)((ulong)ABS(dVar4) < 0x7ff0000000000000);
      bVar2 = true;
      if ((1.1920928955078125e-07 <= ABS(param_3)) && (bVar2 = false, !NAN(param_3))) {
        bVar2 = param_3 == 0.0;
      }
      dVar7 = 0.0;
      if (!bVar2) {
        dVar7 = param_3;
      }
      if ((ulong)ABS(dVar7) < 0x7ff0000000000000) {
        param_4[uVar6] = dVar7;
        uVar6 = 1;
        if ((ulong)ABS(dVar4) < 0x7ff0000000000000) {
          iVar3 = 0x10;
          func_0x00010840ee28(*param_4,param_4[1]);
          uVar5 = 1;
          if (iVar3 == 0) {
            uVar5 = 2;
          }
          uVar6 = (ulong)uVar5;
        }
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}



/* Entry: 10840f0f8; end: 10840f117;  */

void FUN_10840f0f8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  return;
}



/* Entry: 10840f118; end: 10840f21f;  */

long FUN_10840f118(long param_1)

{
  _free(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10840f220; end: 10840f277;  */

void FUN_10840f220(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (0 < param_3) {
    lVar1 = param_1;
    FUN_10840f278(param_1,-param_3);
    FUN_10840f2ec(param_1,param_2,param_3 + (int)param_2,*(undefined4 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 0x10) < (int)lVar1) {
      func_0x00010840f1a4(param_1,lVar1);
    }
    *(int *)(param_1 + 0x14) = (int)lVar1;
    return;
  }
  return;
}



/* Entry: 10840f278; end: 10840f2eb;  */

int FUN_10840f278(long param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((param_2 + iVar1 < 0 == SCARRY4(param_2,iVar1)) && (-1 < iVar1 + param_2)) {
    return iVar1 + param_2;
  }
  FUN_10841076c(&UNK_10f494a41);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10840f2ec);
  (*pcVar2)();
}



/* Entry: 10840f2ec; end: 10840f327;  */

void FUN_10840f2ec(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == param_3 || param_4 == param_3) {
    return;
  }
  iVar1 = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)
            (*(long *)(param_1 + 2) + (long)(iVar1 * param_2),
             *(long *)(param_1 + 2) + (long)(iVar1 * param_3),(long)(iVar1 * (param_4 - param_3)));
  return;
}



/* Entry: 10840f328; end: 10840f36f;  */

void FUN_10840f328(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10840f278(param_1,0xffffffff);
  FUN_10840f2ec(param_1,param_2,*(int *)(param_1 + 0x14) + -1);
  if (*(int *)(param_1 + 0x10) < (int)lVar1) {
    func_0x00010840f1a4(param_1,lVar1);
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return;
}



/* Entry: 10840f370; end: 10840f3bf;  */

/* WARNING: Removing unreachable block (ram,0x00010840f420) */

long FUN_10840f370(int *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[5];
  piVar2 = param_1;
  FUN_10840f278(param_1,1);
  func_0x00010840f168(param_1,piVar2);
  FUN_10840f2ec(param_1,(int)param_2 + 1,param_2,iVar1);
  return *(long *)(param_1 + 2) + (long)*param_1 * (long)(int)param_2;
}



/* Entry: 10840f3c0; end: 10840f45f;  */

long FUN_10840f3c0(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_3;
  iVar4 = (int)param_2;
  if (0 < iVar3) {
    iVar1 = param_1[5];
    piVar2 = param_1;
    FUN_10840f278(param_1,param_3);
    func_0x00010840f168(param_1,piVar2);
    FUN_10840f2ec(param_1,iVar3 + iVar4,param_2,iVar1);
    if (param_4 != 0) {
      _memmove(*(long *)(param_1 + 2) + (long)(*param_1 * iVar4),param_4,(long)(*param_1 * iVar3));
    }
  }
  return *(long *)(param_1 + 2) + (long)*param_1 * (long)iVar4;
}



/* Entry: 10840f460; end: 10840f46b;  */

long FUN_10840f460(int *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = param_1[5];
  iVar4 = (int)param_3;
  if (0 < iVar4) {
    iVar1 = param_1[5];
    piVar3 = param_1;
    FUN_10840f278(param_1,param_3);
    func_0x00010840f168(param_1,piVar3);
    FUN_10840f2ec(param_1,iVar4 + iVar2,iVar2,iVar1);
    if (param_2 != 0) {
      _memmove(*(long *)(param_1 + 2) + (long)(*param_1 * iVar2),param_2,(long)(*param_1 * iVar4));
    }
  }
  return *(long *)(param_1 + 2) + (long)*param_1 * (long)iVar2;
}



/* Entry: 10840f46c; end: 10840f4bf;  */

bool FUN_10840f46c(int *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1[5];
  if (iVar1 != *(int *)(param_2 + 0x14)) {
    return false;
  }
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 2);
    _memcmp(uVar2,*(undefined8 *)(param_2 + 8),(long)*param_1 * (long)iVar1);
    return (int)uVar2 == 0;
  }
  return true;
}



/* Entry: 10840f4c0; end: 10840f4cb;  */

void FUN_10840f4c0(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x10) < (int)param_2) {
    func_0x00010840f1a4(param_1,param_2);
  }
  *(int *)(param_1 + 0x14) = (int)param_2;
  return;
}



/* Entry: 10840f4cc; end: 10840f5ab;  */

ulong FUN_10840f4cc(long param_1,int param_2,undefined8 param_3,ulong param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar7;
  ulong uVar6;
  
  if (param_2 < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar7 = 0;
    uVar6 = (ulong)(param_2 - 1);
    do {
      while( true ) {
        iVar5 = (int)uVar6;
        if (iVar5 <= iVar7) {
          uVar2 = *(ulong *)(param_1 + param_5 * uVar6);
          uVar3 = uVar2;
          FUN_10840f6c4();
          if (((int)uVar3 == 0) && (_strlen(), uVar2 <= param_4)) {
            return uVar6;
          }
          return (ulong)(uint)~(iVar5 - ((int)uVar3 >> 0x1f));
        }
        uVar1 = (uint)(iVar7 + iVar5) >> 1;
        uVar3 = (ulong)uVar1;
        uVar4 = *(ulong *)(param_1 + param_5 * uVar3);
        uVar2 = uVar4;
        FUN_10840f6c4();
        if (-1 < (int)uVar2) break;
        iVar7 = uVar1 + 1;
      }
      uVar6 = uVar3;
    } while (((int)uVar2 != 0) || (_strlen(), param_4 < uVar4));
  }
  return uVar3;
}



/* Entry: 10840f5ac; end: 10840f5f7;  */

ulong FUN_10840f5ac(long param_1,int param_2,ulong param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar7;
  ulong uVar6;
  
  _strlen();
  if (param_2 < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar7 = 0;
    uVar6 = (ulong)(param_2 - 1);
    do {
      while( true ) {
        iVar5 = (int)uVar6;
        if (iVar5 <= iVar7) {
          uVar2 = *(ulong *)(param_1 + param_4 * uVar6);
          uVar3 = uVar2;
          FUN_10840f6c4();
          if (((int)uVar3 == 0) && (_strlen(), uVar2 <= param_3)) {
            return uVar6;
          }
          return (ulong)(uint)~(iVar5 - ((int)uVar3 >> 0x1f));
        }
        uVar1 = (uint)(iVar7 + iVar5) >> 1;
        uVar3 = (ulong)uVar1;
        uVar4 = *(ulong *)(param_1 + param_4 * uVar3);
        uVar2 = uVar4;
        FUN_10840f6c4();
        if (-1 < (int)uVar2) break;
        iVar7 = uVar1 + 1;
      }
      uVar6 = uVar3;
    } while (((int)uVar2 != 0) || (_strlen(), param_3 < uVar4));
  }
  return uVar3;
}



/* Entry: 10840f5f8; end: 10840f68f;  */

long * FUN_10840f5f8(long *param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  
  if ((long)param_3 < 0) {
    param_3 = param_2;
    _strlen();
  }
  param_1[1] = param_3;
  if (param_3 < 0x41) {
    plVar2 = param_1 + 2;
  }
  else {
    plVar2 = (long *)(param_3 + 1);
    FUN_108410808(plVar2,2);
  }
  *param_1 = (long)plVar2;
  uVar4 = param_3 - 1;
  iVar3 = (int)uVar4;
  while (-1 < iVar3) {
    cVar1 = *(char *)(param_2 + (uVar4 & 0x7fffffff));
    if (-1 < cVar1) {
      ___tolower();
    }
    *(char *)((long)plVar2 + (uVar4 & 0x7fffffff)) = cVar1;
    uVar4 = uVar4 - 1;
    iVar3 = (int)uVar4;
  }
  *(undefined1 *)((long)plVar2 + param_3) = 0;
  return param_1;
}



/* Entry: 10840f690; end: 10840f6c3;  */

long * FUN_10840f690(long *param_1)

{
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 10840f6c4; end: 10840f6cf;  */

void FUN_10840f6c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strncmp_11034cc00)();
  return;
}



/* Entry: 10840f6d0; end: 10840f737;  */

long * FUN_10840f6d0(long *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2 + (param_3 & 0xffffffff);
  FUN_10840f9ec(param_1 + 3,param_3,param_4);
  if (param_3 < 9) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[1] = FUN_10840f738;
    FUN_10840faa4();
  }
  return param_1;
}



/* Entry: 10840f738; end: 10840f73f;  */

undefined8 FUN_10840f738(void)

{
  return 0;
}



/* Entry: 10840f740; end: 10840f767;  */

undefined8 * FUN_10840f740(undefined8 *param_1)

{
  FUN_10840f768(*param_1);
  return param_1;
}



/* Entry: 10840f768; end: 10840f797;  */

void FUN_10840f768(long param_1)

{
  byte bVar1;
  
  for (; param_1 != 0; param_1 = param_1 - (ulong)bVar1) {
    bVar1 = *(byte *)(param_1 + -1);
    (**(code **)(param_1 + -9))();
  }
  return;
}



/* Entry: 10840f798; end: 10840f7a3;  */

long FUN_10840f798(long param_1)

{
  return (param_1 + -0xd) - (ulong)*(uint *)(param_1 + -0xd);
}



/* Entry: 10840f7a4; end: 10840f87b;  */

undefined8 FUN_10840f7a4(long param_1)

{
  FUN_10840f768(*(undefined8 *)(param_1 + -0x11));
  _free((undefined8 *)(param_1 + -0x11));
  return 0;
}



/* Entry: 10840f87c; end: 10840f8cf;  */

int FUN_10840f87c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  iVar2 = *(int *)(((ulong)uVar1 & 0x3f) * 4 + 0x113256134);
  uVar4 = (uint)((ulong)uVar1 & 0x3f);
  if (uVar4 < 0x2e) {
    uVar3 = 0;
    if (uVar1 >> 6 != 0) {
      uVar3 = 0xffffffff / (uVar1 >> 6);
    }
    if (*(uint *)((ulong)(uVar4 + 1) * 4 + 0x113256134) < uVar3) {
      *param_1 = uVar1 & 0xffffffc0 | uVar1 + 1 & 0x3f;
    }
  }
  return (uVar1 >> 6) * iVar2;
}



/* Entry: 10840f8d0; end: 10840f97b;  */

void FUN_10840f8d0(long *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = (ulong)((int)param_3 - 1);
  while( true ) {
    piVar1 = (int *)*param_1;
    piVar2 = (int *)param_1[1];
    uVar5 = 0;
    if (piVar2 != piVar1) {
      uVar5 = 0xd;
    }
    if ((piVar2 != (int *)0x0) &&
       ((long)(ulong)(uVar5 + param_2) <=
        (long)(param_1[2] - ((long)piVar2 + uVar4 + uVar5 & ~uVar4)))) break;
    func_0x00010840f7d0(param_1,(ulong)(uVar5 + param_2),param_3);
  }
  if (piVar2 != piVar1) {
    *piVar2 = (int)piVar2 - (int)piVar1;
    lVar3 = param_1[1];
    param_1[1] = lVar3 + 4;
    *(code **)(lVar3 + 4) = FUN_10840f798;
    FUN_10840faa4();
  }
  return;
}



/* Entry: 10840f97c; end: 10840f9eb;  */

void FUN_10840f97c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10840f6d0();
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  return;
}



/* Entry: 10840f9ec; end: 10840fa53;  */

uint * FUN_10840f9ec(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uVar1 = 0x400;
  if (param_2 != 0) {
    uVar1 = param_2;
  }
  if (param_3 != 0) {
    uVar1 = param_3;
  }
  uVar2 = uVar1 << 6;
  *param_1 = uVar2;
  if ((uVar1 & 0x3ffffff) == 0) {
    FUN_10840fa54(&uStack_21);
    uVar2 = *param_1;
  }
  if (0xffffffbf < uVar2) {
    func_0x00010840fa7c(&uStack_22);
  }
  return param_1;
}



/* Entry: 10840fa54; end: 10840faa3;  */

void FUN_10840fa54(void)

{
  code *pcVar1;
  
  func_0x00010840fac4(&UNK_10f494afb);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10840fa7c);
  (*pcVar1)();
}



/* Entry: 10840faa4; end: 10840fb43;  */

void FUN_10840faa4(void)

{
  long lVar1;
  long *unaff_x19;
  
  lVar1 = unaff_x19[1];
  unaff_x19[1] = lVar1 + 8;
  *(undefined1 *)(lVar1 + 8) = 0;
  *unaff_x19 = unaff_x19[1] + 1;
  unaff_x19[1] = unaff_x19[1] + 1;
  return;
}



/* Entry: 10840fb44; end: 10840fc3f;  */

void FUN_10840fb44(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2 == param_1 + 2) {
    *(undefined8 *)((long)param_2 + 0x14) = 0x20;
    goto LAB_10840fbd0;
  }
  lVar2 = *param_2;
  plVar3 = (long *)param_2[1];
  *plVar3 = lVar2;
  if (lVar2 == 0) {
    *param_1 = plVar3;
  }
  else {
    *(long **)(lVar2 + 8) = plVar3;
  }
  if (param_1[3] == 0) {
    if ((int)param_2[2] < 1) goto LAB_10840fbc8;
  }
  else {
    if ((int)param_2[2] <= *(int *)(param_1[3] + 0x10)) {
LAB_10840fbc8:
      __ZdlPv(param_2);
      goto LAB_10840fbd0;
    }
    __ZdlPv();
  }
  *(undefined4 *)((long)param_2 + 0x14) = 0xffffffff;
  param_1[3] = param_2;
LAB_10840fbd0:
  uVar5 = param_1[1];
  if ((uVar5 & 0x1fffffc0000) != 0) {
    uVar4 = (uint)uVar5 >> 0x10 & 3;
    if (uVar5 >> 0x2a != 0 || uVar4 == 2) {
      iVar6 = (int)(uVar5 >> 0x12);
      uVar7 = (uint)(uVar5 >> 0x29);
      uVar1 = uVar5 >> 0x18 & 0xfffffc0000 | (uVar5 >> 0x2a) << 0x29;
      if (uVar4 == 2) {
        uVar1 = (uVar5 >> 0x12) << 0x29 | ((ulong)(uVar7 - iVar6) & 0x7fffff) << 0x12;
      }
      uVar1 = uVar1 | uVar5 & 0x3ffff;
      if (uVar4 == 1) {
        uVar1 = uVar5 & 0x1ffffffffff | (ulong)(uVar7 - iVar6) << 0x29;
      }
      param_1[1] = uVar1;
    }
  }
  return;
}



/* Entry: 10840fc40; end: 10840fcdb;  */

void FUN_10840fc40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  ppuVar1 = &puStack_38;
  puStack_38 = param_1;
  FUN_108270170();
  ppuStack_48 = ppuVar1;
  uStack_40 = param_2;
  while (ppuStack_48 != (undefined8 **)0x0) {
    if (ppuStack_48 == (undefined8 **)(param_1 + 2)) {
      *param_1 = ppuStack_48;
      *ppuStack_48 = (undefined8 *)0x0;
      *(undefined8 *)((long)ppuStack_48 + 0x14) = 0x20;
      *(undefined4 *)((long)ppuStack_48 + 0x1c) = 0;
      FUN_10840fcdc(param_1);
    }
    else {
      __ZdlPv();
    }
    func_0x000108270228(&ppuStack_48);
  }
  param_1[1] = (param_1[1] & 0x10000) << 2 | param_1[1] & 0x3ffff | 0x20000000000;
  return;
}



/* Entry: 10840fcdc; end: 10840fe1b;  */

void FUN_10840fcdc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZdlPv();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10840fe1c; end: 10840fe23;  */

void FUN_10840fe1c(void)

{
  return;
}



/* Entry: 10840fe24; end: 10840feaf;  */

void FUN_10840fe24(double param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  
  uVar6 = param_2[1];
  if ((long)uVar6 < (long)(int)param_3) {
    FUN_10841076c(&UNK_10f494c1a);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10840feb0);
    (*pcVar2)();
  }
  bVar3 = false;
  bVar4 = true;
  bVar5 = false;
  if (0 < (int)param_3) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(param_1)) {
      bVar3 = param_1 < 1.0;
      bVar4 = param_1 == 1.0;
      bVar5 = false;
    }
  }
  if (!bVar4 && bVar3 == bVar5) {
    uVar1 = (ulong)((int)(long)(param_1 * (double)param_3) + 7U & 0xfffffff8);
    if ((long)(uVar6 - 8) <= (long)(param_1 * (double)param_3)) {
      uVar1 = uVar6;
    }
    param_3 = (uint)uVar1;
  }
  uVar6 = *param_2 * (long)(int)param_3;
  if (uVar6 == 0) {
    return;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  FUN_108410808(uVar6,2);
  func_0x00010840fef4();
  return;
}



/* Entry: 10840feb0; end: 10840ff33;  */

void FUN_10840feb0(ulong param_1)

{
  if (param_1 != 0) {
    if (param_1 < 9) {
      param_1 = 8;
    }
    FUN_108410808(param_1,2);
    func_0x00010840fef4();
    return;
  }
  return;
}



/* Entry: 10840ff34; end: 10840ffdb;  */

uint FUN_10840ff34(float param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  
  if (NAN(param_1)) {
    uVar2 = 0x7c01;
  }
  else {
    fVar1 = ABS(param_1);
    if (0x477fffff < (uint)fVar1) {
      fVar1 = 65536.0;
    }
    fVar3 = 0.5;
    if (0.5 <= fVar1 * 8192.0) {
      fVar3 = fVar1 * 8192.0;
    }
    uVar2 = (int)(fVar1 + (float)((uint)fVar3 & 0x7f800000)) + (((uint)fVar3 & 0x7f800000) >> 0xd) +
            0x800 | ((uint)param_1 >> 0x1f) << 0xf;
  }
  return uVar2 & 0xffff;
}



/* Entry: 10840ffdc; end: 10840fff3;  */

/* WARNING: Removing unreachable block (ram,0x00010841082c) */

undefined8 FUN_10840ffdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000108410038();
  uVar1 = param_1;
  _malloc();
  FUN_1084107ec(param_1,uVar1);
  return uVar1;
}



/* Entry: 10840fff4; end: 108410023;  */

undefined8 FUN_10840fff4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000108410038(param_2,param_3);
  if (param_2 == 0) {
    _free(param_1);
    param_1 = 0;
  }
  else {
    _realloc();
    FUN_1084107ec(param_2,param_1);
  }
  return param_1;
}



/* Entry: 108410024; end: 108410073;  */

void FUN_108410024(void)

{
  func_0x000108410038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)();
  return;
}



/* Entry: 108410074; end: 10841009f;  */

long FUN_108410074(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108410224();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1084100a0; end: 108410127;  */

void FUN_1084100a0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  char cVar4;
  char cStack_31;
  
  pcVar1 = (char *)(param_1 + 4);
  cStack_31 = *pcVar1;
  cVar4 = cStack_31;
  if (cStack_31 != '\0') goto LAB_108410100;
  pcVar2 = pcVar1;
  func_0x00010841038c(pcVar1,&cStack_31);
  if ((int)pcVar2 == 0) {
    do {
      cVar4 = *pcVar1;
LAB_108410100:
    } while (cVar4 != '\x02');
  }
  else {
    uVar3 = 8;
    __Znwm();
    func_0x000108410248();
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined1 *)(param_1 + 4) = 2;
  }
  FUN_108410128(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



/* Entry: 108410128; end: 1084101d3;  */

void FUN_108410128(undefined8 *param_1,int param_2)

{
  while (0 < param_2) {
    _dispatch_semaphore_signal(*param_1);
    param_2 = param_2 + -1;
  }
  return;
}



/* Entry: 1084101d4; end: 1084101df;  */

void FUN_1084101d4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_wait_11034c138)(*param_1,0xffffffffffffffff);
  return;
}



/* Entry: 1084101e0; end: 10841021b;  */

void FUN_1084101e0(int *param_1)

{
  int iStack_14;
  
  iStack_14 = *param_1;
  if (0 < iStack_14) {
    FUN_10841021c(param_1,&iStack_14,iStack_14 + -1,2);
  }
  return;
}



/* Entry: 10841021c; end: 108410223;  */

undefined8 FUN_10841021c(int *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 2;
  if (param_4 != 4) {
    iVar3 = param_4;
  }
  iVar4 = 0;
  if (param_4 != 3) {
    iVar4 = iVar3;
  }
  switch(param_4) {
  case 1:
  case 2:
    if ((1 < iVar4 - 1U) && (iVar4 == 5)) break;
code_r0x000108410300:
    iVar3 = *param_1;
    if (iVar3 != *param_2) goto LAB_108410340;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = param_3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    goto LAB_108410334;
  case 3:
    if ((iVar4 - 1U < 2) || (iVar4 == 5)) break;
    iVar4 = *param_2;
    iVar3 = *param_1;
    goto code_r0x000108410328;
  case 4:
  case 5:
    break;
  default:
    if (iVar4 - 1U < 2) goto code_r0x000108410300;
    if (iVar4 != 5) {
      iVar3 = *param_1;
      if (iVar3 == *param_2) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = param_3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        bVar2 = cVar1 == '\0';
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      goto LAB_108410348;
    }
  }
  iVar4 = *param_2;
  iVar3 = *param_1;
code_r0x000108410328:
  if (iVar3 == iVar4) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = param_3;
      cVar1 = ExclusiveMonitorsStatus();
    }
LAB_108410334:
    bVar2 = cVar1 == '\0';
  }
  else {
LAB_108410340:
    bVar2 = false;
    ClearExclusiveLocal();
  }
LAB_108410348:
  if (!bVar2) {
    *param_2 = iVar3;
    return 0;
  }
  return 1;
}



/* Entry: 108410224; end: 10841026f;  */

undefined8 * FUN_108410224(undefined8 *param_1)

{
  _dispatch_release(*param_1);
  return param_1;
}



/* Entry: 108410270; end: 1084103a3;  */

undefined8 FUN_108410270(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 2;
  if (param_5 != 4) {
    iVar3 = param_5;
  }
  iVar4 = 0;
  if (param_5 != 3) {
    iVar4 = iVar3;
  }
  switch(param_4) {
  case 1:
  case 2:
    if ((1 < iVar4 - 1U) && (iVar4 == 5)) break;
code_r0x000108410300:
    iVar3 = *param_1;
    if (iVar3 != *param_2) goto LAB_108410340;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = param_3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    goto LAB_108410334;
  case 3:
    if ((iVar4 - 1U < 2) || (iVar4 == 5)) break;
    iVar4 = *param_2;
    iVar3 = *param_1;
    goto code_r0x000108410328;
  case 4:
  case 5:
    break;
  default:
    if (iVar4 - 1U < 2) goto code_r0x000108410300;
    if (iVar4 != 5) {
      iVar3 = *param_1;
      if (iVar3 == *param_2) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = param_3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        bVar2 = cVar1 == '\0';
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      goto LAB_108410348;
    }
  }
  iVar4 = *param_2;
  iVar3 = *param_1;
code_r0x000108410328:
  if (iVar3 == iVar4) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = param_3;
      cVar1 = ExclusiveMonitorsStatus();
    }
LAB_108410334:
    bVar2 = cVar1 == '\0';
  }
  else {
LAB_108410340:
    bVar2 = false;
    ClearExclusiveLocal();
  }
LAB_108410348:
  if (!bVar2) {
    *param_2 = iVar3;
    return 0;
  }
  return 1;
}



/* Entry: 1084103a4; end: 10841043b;  */

int FUN_1084103a4(byte *param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte *pbVar5;
  
  if ((param_1 == (byte *)0x0) && (param_2 != 0)) {
LAB_1084103c4:
    iVar4 = -1;
  }
  else {
    iVar4 = 0;
    pbVar5 = param_1;
    while (pbVar5 < param_1 + param_2) {
      uVar2 = (ulong)*pbVar5;
      FUN_10841043c();
      if ((int)uVar2 < 1 || param_1 + param_2 < pbVar5 + (int)uVar2) goto LAB_1084103c4;
      pbVar1 = pbVar5 + (uVar2 & 0xffffffff);
      while( true ) {
        pbVar5 = pbVar5 + 1;
        if ((int)uVar2 < 2) break;
        uVar2 = (ulong)((int)uVar2 - 1);
        uVar3 = (ulong)*pbVar5;
        FUN_108410480();
        if ((uVar3 & 1) == 0) goto LAB_1084103c4;
      }
      iVar4 = iVar4 + 1;
      pbVar5 = pbVar1;
    }
  }
  return iVar4;
}



/* Entry: 10841043c; end: 10841047f;  */

int FUN_10841043c(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1 & 0xfe) != 0xc0) {
    iVar2 = (-0x1b000000 >> (param_1 >> 3 & 0x1e) & 3U) + 1;
  }
  iVar1 = -1;
  if (param_1 < 0xf5) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (0xbf < param_1) {
    iVar2 = iVar1;
  }
  iVar1 = 1;
  if ((param_1 & 0x80) != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Entry: 108410480; end: 10841049b;  */

bool FUN_108410480(int param_1)

{
  FUN_10841043c();
  return param_1 == 0;
}



/* Entry: 10841049c; end: 10841051b;  */

int FUN_10841049c(ushort *param_1,ulong param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = -1;
  if ((param_1 != (ushort *)0x0) && ((((uint)param_2 | (uint)param_1) & 1) == 0)) {
    iVar3 = 0;
    puVar1 = (ushort *)((long)param_1 + (param_2 & 0xfffffffffffffffe));
    while (param_1 < puVar1) {
      uVar2 = *param_1;
      if ((uVar2 & 0xfc00) == 0xd800) {
        if (puVar1 <= param_1 + 1) {
          return -1;
        }
        if ((param_1[1] & 0xfc00) != 0xdc00) {
          return -1;
        }
        param_1 = param_1 + 2;
      }
      else {
        param_1 = param_1 + 1;
        if ((uVar2 & 0xfc00) == 0xdc00) {
          return -1;
        }
      }
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



/* Entry: 10841051c; end: 1084105df;  */

uint FUN_10841051c(long *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = 0xffffffff;
  if ((param_1 != (long *)0x0) && (param_2 != (byte *)0x0)) {
    pbVar4 = (byte *)*param_1;
    if (pbVar4 != (byte *)0x0 && pbVar4 < param_2) {
      bVar1 = *pbVar4;
      uVar2 = (uint)bVar1;
      uVar6 = (uint)bVar1;
      FUN_10841043c();
      if ((int)uVar6 < 1) {
LAB_1084105bc:
        uVar2 = 0xffffffff;
      }
      else {
        if ((char)bVar1 < '\0') {
          iVar5 = (uint)bVar1 << 0x19;
          uVar6 = 0xffffffc0;
          do {
            pbVar4 = pbVar4 + 1;
            if (param_2 <= pbVar4) goto LAB_1084105bc;
            bVar1 = *pbVar4;
            uVar3 = (uint)bVar1;
            FUN_108410480();
            if (uVar3 == 0) goto LAB_1084105bc;
            uVar2 = bVar1 & 0x3f | uVar2 << 6;
            uVar6 = uVar6 << 5;
            iVar5 = iVar5 << 1;
          } while (iVar5 < 0);
          uVar2 = uVar2 & (uVar6 ^ 0xffffffff);
        }
        param_2 = pbVar4 + 1;
      }
    }
    *param_1 = (long)param_2;
  }
  return uVar2;
}


