/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ec72f0; end: 100ec73df;  */

int FUN_100ec72f0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf8 < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xf9;
  }
  uVar1 = *(byte *)(param_1 + 0xc) ^ 0xff;
  if (*(byte *)(param_1 + 0xc) < 8) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100ec73e0; end: 100ec7413;  */

void FUN_100ec73e0(undefined8 *param_1)

{
  FUN_100ec7414(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[6]);
  return;
}



/* Entry: 100ec7414; end: 100ec749b;  */

/* WARNING: Possible PIC construction at 0x000100ec7434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec7474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec7438) */
/* WARNING: Removing unreachable block (ram,0x000100ec7478) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_100ec7414(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3c) & 3;
  if (1 < uVar1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61170();
    func_0x00010006c090(param_2,param_3 & 0xcfffffffffffffff);
    param_1 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ec749c; end: 100ec75af;  */

undefined8 * FUN_100ec749c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  FUN_100ec00b8(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = param_2[6];
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100ec75b0; end: 100ec75cb;  */

void FUN_100ec75b0(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100ec75cc; end: 100ec7623;  */

undefined8 * FUN_100ec75cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  FUN_100ec7414(uVar4,uVar5,uVar2,uVar1,uVar3,uVar6);
  uVar5 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61170(uVar5);
  return param_1;
}



/* Entry: 100ec7624; end: 100ec76ef;  */

int FUN_100ec7624(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100ec76f0; end: 100ec7a8b;  */

uint FUN_100ec76f0(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
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
  byte bVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auStack_98 [56];
  
  lVar12 = *param_2;
  uVar15 = *param_1;
  uVar9 = param_1[1];
  uVar11 = param_1[2];
  uVar10 = param_1[3];
  uVar1 = param_1[4];
  uVar3 = param_1[5];
  bVar16 = (byte)param_1[6];
  uVar14 = (ulong)*(uint *)((long)param_1 + 9) << 8 | (ulong)*(uint3 *)((long)param_1 + 0xd) << 0x28
           | (ulong)(byte)uVar9;
  if (bVar16 < 4) {
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        if ((char)param_2[6] != '\x01') {
          return 0;
        }
        goto LAB_100ec787c;
      }
      if ((char)param_2[6] != '\0') {
        return 0;
      }
      lVar13 = param_2[1];
      FUN_100ec7a8c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(uVar15,lVar12);
      uVar11 = uVar14;
    }
    else {
      if (bVar16 != 2) {
        if ((char)param_2[6] != '\x03') {
          return 0;
        }
        lVar13 = param_2[2];
        bVar16 = *(byte *)(param_2 + 1);
        FUN_100ec7a8c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(uVar15,lVar12);
        if ((uVar15 & 1) == 0) {
          return 0;
        }
        if ((((byte)uVar9 ^ bVar16) & 1) != 0) {
          return 0;
        }
        goto LAB_100ec7978;
      }
      if ((char)param_2[6] != '\x02') {
        return 0;
      }
      lVar2 = param_2[1];
      lVar4 = param_2[2];
      uVar9 = param_2[3];
      uVar5 = param_2[4];
      lVar13 = param_2[5];
      FUN_100ec7a8c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(uVar15,lVar12);
      if ((uVar15 & 1) == 0) {
        return 0;
      }
      FUN_100e25fcc(uVar14,uVar11,lVar2,lVar4);
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      uVar11 = uVar3;
      if ((uVar10 == uVar9) && (uVar1 == uVar5)) goto LAB_100ec7978;
      func_0x000107c605b8(uVar10,uVar1,uVar9,uVar5,0);
      uVar15 = uVar10;
    }
    if ((uVar15 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (bVar16 < 6) {
      if (bVar16 != 4) {
        if ((char)param_2[6] != '\x05') {
          return 0;
        }
        if (uVar15 == 0) {
          if (lVar12 != 0) {
            return 0;
          }
          return 1;
        }
        if (lVar12 == 0) {
          return 0;
        }
        FUN_100ec7a8c(0,0x112d48278,&PTR_PTR_1126af238);
        func_0x000100ec7acc(param_2,auStack_98);
        func_0x000100ec7acc(param_1,auStack_98);
        func_0x000107c60118(uVar15,lVar12);
        func_0x000100ec7b00(param_2);
        func_0x000100ec7b00(param_1);
        if ((uVar15 & 1) == 0) {
          return 0;
        }
        return 1;
      }
      if ((char)param_2[6] != '\x04') {
        return 0;
      }
    }
    else {
      if (bVar16 != 6) {
        if ((uVar14 == 0 && uVar11 == 0) &&
            (((uVar15 == 0 && uVar10 == 0) && uVar1 == 0) && uVar3 == 0)) {
          if ((char)param_2[6] != '\a') {
            return 0;
          }
          lVar2 = param_2[5];
          lVar13 = param_2[4];
          bVar16 = *(byte *)(param_2 + 2) | (byte)lVar13;
          bVar17 = *(byte *)((long)param_2 + 0x11) | (byte)((ulong)lVar13 >> 8);
          bVar18 = *(byte *)((long)param_2 + 0x12) | (byte)((ulong)lVar13 >> 0x10);
          bVar19 = *(byte *)((long)param_2 + 0x13) | (byte)((ulong)lVar13 >> 0x18);
          bVar20 = *(byte *)((long)param_2 + 0x14) | (byte)((ulong)lVar13 >> 0x20);
          bVar21 = *(byte *)((long)param_2 + 0x15) | (byte)((ulong)lVar13 >> 0x28);
          bVar22 = *(byte *)((long)param_2 + 0x16) | (byte)((ulong)lVar13 >> 0x30);
          bVar23 = *(byte *)((long)param_2 + 0x17) | (byte)((ulong)lVar13 >> 0x38);
          bVar24 = *(byte *)(param_2 + 3) | (byte)lVar2;
          bVar25 = *(byte *)((long)param_2 + 0x19) | (byte)((ulong)lVar2 >> 8);
          bVar26 = *(byte *)((long)param_2 + 0x1a) | (byte)((ulong)lVar2 >> 0x10);
          bVar27 = *(byte *)((long)param_2 + 0x1b) | (byte)((ulong)lVar2 >> 0x18);
          bVar28 = *(byte *)((long)param_2 + 0x1c) | (byte)((ulong)lVar2 >> 0x20);
          bVar29 = *(byte *)((long)param_2 + 0x1d) | (byte)((ulong)lVar2 >> 0x28);
          bVar30 = *(byte *)((long)param_2 + 0x1e) | (byte)((ulong)lVar2 >> 0x30);
          bVar31 = *(byte *)((long)param_2 + 0x1f) | (byte)((ulong)lVar2 >> 0x38);
          auVar32[1] = bVar17;
          auVar32[0] = bVar16;
          auVar32[2] = bVar18;
          auVar32[3] = bVar19;
          auVar32[4] = bVar20;
          auVar32[5] = bVar21;
          auVar32[6] = bVar22;
          auVar32[7] = bVar23;
          auVar32[8] = bVar24;
          auVar32[9] = bVar25;
          auVar32[10] = bVar26;
          auVar32[0xb] = bVar27;
          auVar32[0xc] = bVar28;
          auVar32[0xd] = bVar29;
          auVar32[0xe] = bVar30;
          auVar32[0xf] = bVar31;
          auVar8[1] = bVar17;
          auVar8[0] = bVar16;
          auVar8[2] = bVar18;
          auVar8[3] = bVar19;
          auVar8[4] = bVar20;
          auVar8[5] = bVar21;
          auVar8[6] = bVar22;
          auVar8[7] = bVar23;
          auVar8[8] = bVar24;
          auVar8[9] = bVar25;
          auVar8[10] = bVar26;
          auVar8[0xb] = bVar27;
          auVar8[0xc] = bVar28;
          auVar8[0xd] = bVar29;
          auVar8[0xe] = bVar30;
          auVar8[0xf] = bVar31;
          auVar32 = NEON_ext(auVar32,auVar8,8,1);
          if ((CONCAT17(bVar23 | auVar32[7],
                        CONCAT16(bVar22 | auVar32[6],
                                 CONCAT15(bVar21 | auVar32[5],
                                          CONCAT14(bVar20 | auVar32[4],
                                                   CONCAT13(bVar19 | auVar32[3],
                                                            CONCAT12(bVar18 | auVar32[2],
                                                                     CONCAT11(bVar17 | auVar32[1],
                                                                              bVar16 | auVar32[0])))
                                                  )))) != 0 || param_2[1] != 0) || lVar12 != 0) {
            return 0;
          }
          return 1;
        }
        if ((uVar15 == 1) &&
           (((uVar14 == 0 && uVar11 == 0) && uVar10 == 0) && (uVar1 == 0 && uVar3 == 0))) {
          if ((char)param_2[6] != '\a') {
            return 0;
          }
          if (lVar12 != 1) {
            return 0;
          }
        }
        else if ((uVar15 == 2) &&
                (((uVar14 == 0 && uVar11 == 0) && uVar10 == 0) && (uVar1 == 0 && uVar3 == 0))) {
          if ((char)param_2[6] != '\a') {
            return 0;
          }
          if (lVar12 != 2) {
            return 0;
          }
        }
        else {
          if ((char)param_2[6] != '\a') {
            return 0;
          }
          if (lVar12 != 3) {
            return 0;
          }
        }
        lVar13 = param_2[5];
        lVar12 = param_2[4];
        bVar16 = *(byte *)(param_2 + 2) | (byte)lVar12;
        bVar17 = *(byte *)((long)param_2 + 0x11) | (byte)((ulong)lVar12 >> 8);
        bVar18 = *(byte *)((long)param_2 + 0x12) | (byte)((ulong)lVar12 >> 0x10);
        bVar19 = *(byte *)((long)param_2 + 0x13) | (byte)((ulong)lVar12 >> 0x18);
        bVar20 = *(byte *)((long)param_2 + 0x14) | (byte)((ulong)lVar12 >> 0x20);
        bVar21 = *(byte *)((long)param_2 + 0x15) | (byte)((ulong)lVar12 >> 0x28);
        bVar22 = *(byte *)((long)param_2 + 0x16) | (byte)((ulong)lVar12 >> 0x30);
        bVar23 = *(byte *)((long)param_2 + 0x17) | (byte)((ulong)lVar12 >> 0x38);
        bVar24 = *(byte *)(param_2 + 3) | (byte)lVar13;
        bVar25 = *(byte *)((long)param_2 + 0x19) | (byte)((ulong)lVar13 >> 8);
        bVar26 = *(byte *)((long)param_2 + 0x1a) | (byte)((ulong)lVar13 >> 0x10);
        bVar27 = *(byte *)((long)param_2 + 0x1b) | (byte)((ulong)lVar13 >> 0x18);
        bVar28 = *(byte *)((long)param_2 + 0x1c) | (byte)((ulong)lVar13 >> 0x20);
        bVar29 = *(byte *)((long)param_2 + 0x1d) | (byte)((ulong)lVar13 >> 0x28);
        bVar30 = *(byte *)((long)param_2 + 0x1e) | (byte)((ulong)lVar13 >> 0x30);
        bVar31 = *(byte *)((long)param_2 + 0x1f) | (byte)((ulong)lVar13 >> 0x38);
        auVar6[1] = bVar17;
        auVar6[0] = bVar16;
        auVar6[2] = bVar18;
        auVar6[3] = bVar19;
        auVar6[4] = bVar20;
        auVar6[5] = bVar21;
        auVar6[6] = bVar22;
        auVar6[7] = bVar23;
        auVar6[8] = bVar24;
        auVar6[9] = bVar25;
        auVar6[10] = bVar26;
        auVar6[0xb] = bVar27;
        auVar6[0xc] = bVar28;
        auVar6[0xd] = bVar29;
        auVar6[0xe] = bVar30;
        auVar6[0xf] = bVar31;
        auVar7[1] = bVar17;
        auVar7[0] = bVar16;
        auVar7[2] = bVar18;
        auVar7[3] = bVar19;
        auVar7[4] = bVar20;
        auVar7[5] = bVar21;
        auVar7[6] = bVar22;
        auVar7[7] = bVar23;
        auVar7[8] = bVar24;
        auVar7[9] = bVar25;
        auVar7[10] = bVar26;
        auVar7[0xb] = bVar27;
        auVar7[0xc] = bVar28;
        auVar7[0xd] = bVar29;
        auVar7[0xe] = bVar30;
        auVar7[0xf] = bVar31;
        auVar32 = NEON_ext(auVar6,auVar7,8,1);
        if (CONCAT17(bVar23 | auVar32[7],
                     CONCAT16(bVar22 | auVar32[6],
                              CONCAT15(bVar21 | auVar32[5],
                                       CONCAT14(bVar20 | auVar32[4],
                                                CONCAT13(bVar19 | auVar32[3],
                                                         CONCAT12(bVar18 | auVar32[2],
                                                                  CONCAT11(bVar17 | auVar32[1],
                                                                           bVar16 | auVar32[0]))))))
                    ) != 0 || param_2[1] != 0) {
          return 0;
        }
        return 1;
      }
      if ((char)param_2[6] != '\x06') {
        return 0;
      }
    }
LAB_100ec787c:
    FUN_100ec7a8c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    uVar11 = uVar15;
    lVar13 = lVar12;
  }
LAB_100ec7978:
  func_0x000107c60118(uVar11,lVar13);
  return (uint)uVar11 & 1;
}



/* Entry: 100ec7a8c; end: 100ec7b37;  */

void FUN_100ec7a8c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100ec7b38; end: 100ec7e9b;  */

uint FUN_100ec7b38(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar14 = param_1[2];
  uVar10 = (uint)(uVar14 >> 0x3c) & 3;
  if (uVar10 < 2) {
    if (uVar10 != 0) {
      if ((param_2[2] & 0x3000000000000000U) != 0x1000000000000000) {
        return 0;
      }
      lVar1 = *param_2;
      lVar11 = param_2[1];
      uVar9 = 0;
      FUN_100ec7a8c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(uVar6,lVar1,uVar9);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      if (uVar7 == 0) {
        if (lVar11 != 0) {
          return 0;
        }
        return 1;
      }
      if (lVar11 == 0) {
        return 0;
      }
      FUN_100ec7a8c(0,0x112d48278,&PTR_PTR_1126af238);
      func_0x000107c61174(lVar11);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(lVar11);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    if ((*(byte *)((long)param_2 + 0x17) & 0x30) != 0) {
      return 0;
    }
    lVar1 = *param_2;
    lVar11 = param_2[1];
    FUN_100ec7a8c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(uVar6,lVar1);
    uVar12 = uVar7;
  }
  else {
    uVar8 = param_1[3];
    uVar3 = param_1[4];
    uVar12 = param_1[5];
    if (uVar10 != 2) {
      if (uVar14 == 0x3000000000000000 &&
          (((uVar8 == 0 && uVar7 == 0) && (uVar6 == 0 && uVar3 == 0)) && uVar12 == 0)) {
        if (((param_2[2] ^ 0xffffffffffffffffU) & 0x3000000000000000) != 0) {
          return 0;
        }
        if (param_2[2] != 0x3000000000000000) {
          return 0;
        }
        if (((param_2[4] != 0 || param_2[5] != 0) || (param_2[3] != 0 || param_2[1] != 0)) ||
            *param_2 != 0) {
          return 0;
        }
        return 1;
      }
      if ((((uVar12 == 0) && (uVar14 == 0x3000000000000000)) && (uVar6 == 1)) &&
         ((uVar8 == 0 && uVar7 == 0) && uVar3 == 0)) {
        if (((param_2[2] ^ 0xffffffffffffffffU) & 0x3000000000000000) != 0) {
          return 0;
        }
        if ((param_2[4] != 0 || param_2[5] != 0) || param_2[3] != 0) {
          return 0;
        }
        if (param_2[2] != 0x3000000000000000) {
          return 0;
        }
        if (param_2[1] != 0) {
          return 0;
        }
        if (*param_2 != 1) {
          return 0;
        }
        return 1;
      }
      if (((uVar12 != 0) || (uVar14 != 0x3000000000000000)) ||
         ((uVar6 != 2 || ((uVar8 != 0 || uVar7 != 0) || uVar3 != 0)))) {
        if (((param_2[2] ^ 0xffffffffffffffffU) & 0x3000000000000000) != 0) {
          return 0;
        }
        if ((param_2[4] != 0 || param_2[5] != 0) || param_2[3] != 0) {
          return 0;
        }
        if (param_2[2] != 0x3000000000000000) {
          return 0;
        }
        if (param_2[1] != 0) {
          return 0;
        }
        if (*param_2 != 3) {
          return 0;
        }
        return 1;
      }
      if (((param_2[2] ^ 0xffffffffffffffffU) & 0x3000000000000000) != 0) {
        return 0;
      }
      if ((param_2[4] != 0 || param_2[5] != 0) || param_2[3] != 0) {
        return 0;
      }
      if (param_2[2] != 0x3000000000000000) {
        return 0;
      }
      if (param_2[1] != 0) {
        return 0;
      }
      if (*param_2 != 2) {
        return 0;
      }
      return 1;
    }
    uVar13 = param_2[2];
    if ((uVar13 & 0x3000000000000000) != 0x2000000000000000) {
      return 0;
    }
    uVar2 = param_2[3];
    uVar4 = param_2[4];
    lVar11 = param_2[5];
    lVar1 = *param_2;
    lVar5 = param_2[1];
    FUN_100ec7a8c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(uVar6,lVar1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    FUN_100e25fcc(uVar7,uVar14 & 0xcfffffffffffffff,lVar5,uVar13 & 0xcfffffffffffffff);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if ((uVar8 == uVar2) && (uVar3 == uVar4)) goto LAB_100ec7c64;
    func_0x000107c605b8(uVar8,uVar3,uVar2,uVar4,0);
    uVar6 = uVar8;
  }
  if ((uVar6 & 1) == 0) {
    return 0;
  }
LAB_100ec7c64:
  func_0x000107c60118(uVar12,lVar11);
  return (uint)uVar12 & 1;
}



/* Entry: 100ec7e9c; end: 100ec7ebf;  */

undefined8 FUN_100ec7e9c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100ec7ec0; end: 100ec80cb;  */

void FUN_100ec7ec0(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_88 [56];
  
  lVar8 = *param_2;
  lVar3 = param_2[1];
  uVar7 = param_2[2];
  lVar5 = param_2[3];
  lVar6 = param_2[4];
  lVar2 = param_2[5];
  bVar1 = *(byte *)(param_2 + 6);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x000107c61174(lVar3);
        func_0x000100ec7acc(param_2,auStack_88);
        uVar7 = 0;
        lVar5 = 0;
        lVar6 = 0;
        lVar2 = lVar3;
        lVar4 = 0;
      }
      else {
        lVar3 = param_3[6];
        func_0x000100ec7acc(param_2,auStack_88);
        func_0x000107c61174(lVar3);
        lVar5 = 0;
        lVar6 = 0;
        uVar7 = 0x1000000000000000;
        lVar2 = 0;
        lVar4 = 0;
      }
    }
    else if (bVar1 == 2) {
      uVar7 = uVar7 | 0x2000000000000000;
      func_0x000100ec7acc(param_2,auStack_88);
      func_0x000107c61174(lVar2);
      lVar4 = lVar2;
    }
    else {
      lVar2 = param_3[6];
      func_0x000107c61174(lVar2);
      lVar3 = 0;
      lVar5 = 0;
      lVar6 = 0;
      lVar4 = 0;
      uVar7 = 0x3000000000000000;
      lVar8 = 3;
    }
    goto LAB_100ec8044;
  }
  if (bVar1 < 6) {
    lVar2 = lVar8;
    if (bVar1 != 4) goto LAB_100ec7fc8;
  }
  else {
    if ((bVar1 != 6) &&
       (((uVar7 != 0 || lVar3 != 0) || (lVar8 != 0 || lVar5 != 0)) || (lVar6 != 0 || lVar2 != 0))) {
      if ((lVar8 == 1) && (((uVar7 == 0 && lVar3 == 0) && lVar5 == 0) && (lVar6 == 0 && lVar2 == 0))
         ) {
        lVar4 = param_3[5];
        lVar2 = param_3[6];
        lVar8 = *param_3;
        lVar3 = param_3[1];
        uVar7 = param_3[2];
        lVar5 = param_3[3];
        lVar6 = param_3[4];
        FUN_100ec80cc(param_3,auStack_88);
      }
      else if ((lVar8 == 2) &&
              (((uVar7 == 0 && lVar3 == 0) && lVar5 == 0) && (lVar6 == 0 && lVar2 == 0))) {
        lVar2 = param_3[6];
        func_0x000107c61174(lVar2);
        lVar3 = 0;
        lVar5 = 0;
        lVar6 = 0;
        lVar4 = 0;
        uVar7 = 0x3000000000000000;
        lVar8 = 1;
      }
      else {
        lVar2 = param_3[6];
        func_0x000107c61174(lVar2);
        lVar3 = 0;
        lVar5 = 0;
        lVar6 = 0;
        lVar4 = 0;
        uVar7 = 0x3000000000000000;
        lVar8 = 2;
      }
      goto LAB_100ec8044;
    }
LAB_100ec7fc8:
    lVar2 = param_3[6];
  }
  func_0x000107c61174(lVar2);
  lVar8 = 0;
  lVar3 = 0;
  lVar5 = 0;
  lVar6 = 0;
  lVar4 = 0;
  uVar7 = 0x3000000000000000;
LAB_100ec8044:
  *param_1 = lVar8;
  param_1[1] = lVar3;
  param_1[2] = uVar7;
  param_1[3] = lVar5;
  param_1[4] = lVar6;
  param_1[5] = lVar4;
  param_1[6] = lVar2;
  return;
}



/* Entry: 100ec80cc; end: 100ec80ff;  */

undefined8 FUN_100ec80cc(undefined8 param_1,undefined8 param_2)

{
  FUN_100ec749c(param_2,param_1,&UNK_110364b58);
  return param_2;
}



/* Entry: 100ec8100; end: 100ec8107;  */

void FUN_100ec8100(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  **(undefined8 **)(unaff_x20 + 0x10) = 0;
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100ec8108; end: 100ec8127;  */

void FUN_100ec8108(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ec8128; end: 100ec814b;  */

void FUN_100ec8128(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100ec814c; end: 100ec817f;  */

void FUN_100ec814c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  **(undefined8 **)(unaff_x20 + 0x10) = param_3;
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100ec8180; end: 100ec818b;  */

void FUN_100ec8180(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x20;
  long *plVar11;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  puVar10 = *(undefined8 **)(unaff_x20 + 0x20);
  lVar4 = param_1;
  plVar7 = plVar1;
  func_0x000107c4d028();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar6 = 0;
    plVar11 = (long *)0x0;
    plVar8 = plVar7;
  }
  else {
    lVar6 = lVar4;
    func_0x000107c5faec();
    plVar8 = plVar7;
    func_0x000107c61170(lVar4);
    plVar11 = plVar7;
  }
  func_0x000107c40860();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x000107c4088c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar9 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    uVar5 = 0;
    func_0x000104872184(0);
    func_0x000107c610f8();
    func_0x000104871870(lVar6,plVar11,lVar9,plVar8,uVar5);
    lVar9 = *(long *)(lVar2 + 0xa8);
    func_0x0001000a8868();
    lVar4 = lVar6;
    FUN_100ec5fa0();
    func_0x000107c61170(lVar6);
    lVar2 = 0;
    if (lVar9 != 0) {
      lVar2 = lVar4;
    }
    lVar6 = plVar1[1];
    lVar4 = -0x2000000000000000;
    if (lVar9 != 0) {
      lVar4 = lVar9;
    }
    *plVar1 = lVar2;
    plVar1[1] = lVar4;
    func_0x000107c6142c(lVar6);
    *puVar10 = 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100ec6eb4);
  (*pcVar3)();
}



/* Entry: 100ec818c; end: 100ec81ef;  */

void FUN_100ec818c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ec81f0; end: 100ec8223;  */

void FUN_100ec81f0(void)

{
  long unaff_x20;
  
  **(undefined8 **)(unaff_x20 + 0x10) = 2;
  return;
}



/* Entry: 100ec8224; end: 100ec830b;  */

undefined8 * FUN_100ec8224(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  FUN_100ec00b8(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  return param_1;
}



/* Entry: 100ec830c; end: 100ec8353;  */

undefined8 * FUN_100ec830c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  FUN_100ec7414(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 100ec8354; end: 100ec8467;  */

int FUN_100ec8354(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 100ec8468; end: 100ec86c3;  */

undefined1  [16] FUN_100ec8468(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe6;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef17880);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef17860);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ec8534);
  (*pcVar1)();
}



/* Entry: 100ec86c4; end: 100ec86cf; -[SCPhoneEmailFirstLogInFeatureEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec86c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48280;
  func_0x000107c61428(param_1 + _DAT_112d48280,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec86d0; end: 100ec86db; -[SCPhoneEmailFirstLogInFeatureEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec86d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48280;
  func_0x000107c61428(param_1 + _DAT_112d48280,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec86dc; end: 100ec86e7; -[SCPhoneEmailFirstLogInFeatureEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec86dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48288;
  func_0x000107c61428(param_1 + _DAT_112d48288,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec86e8; end: 100ec86f3; -[SCPhoneEmailFirstLogInFeatureEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec86e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48288;
  func_0x000107c61428(param_1 + _DAT_112d48288,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec86f4; end: 100ec86ff; -[SCPhoneEmailFirstLogInFeatureEntryPoint ngoCodeVerificationScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec86f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48290;
  func_0x000107c61428(param_1 + _DAT_112d48290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec8700; end: 100ec870b; -[SCPhoneEmailFirstLogInFeatureEntryPoint setNgoCodeVerificationScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48290;
  func_0x000107c61428(param_1 + _DAT_112d48290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec870c; end: 100ec8717; -[SCPhoneEmailFirstLogInFeatureEntryPoint logInServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec870c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48298;
  func_0x000107c61428(param_1 + _DAT_112d48298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec8718; end: 100ec8723; -[SCPhoneEmailFirstLogInFeatureEntryPoint setLogInServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48298;
  func_0x000107c61428(param_1 + _DAT_112d48298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec8724; end: 100ec872f; -[SCPhoneEmailFirstLogInFeatureEntryPoint preferredVerificationMethodServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8724(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d482a0;
  func_0x000107c61428(param_1 + _DAT_112d482a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec8730; end: 100ec873b; -[SCPhoneEmailFirstLogInFeatureEntryPoint setPreferredVerificationMethodServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d482a0;
  func_0x000107c61428(param_1 + _DAT_112d482a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec873c; end: 100ec8747; -[SCPhoneEmailFirstLogInFeatureEntryPoint multiSourceCountryProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec873c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d482a8;
  func_0x000107c61428(param_1 + _DAT_112d482a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec8748; end: 100ec8753; -[SCPhoneEmailFirstLogInFeatureEntryPoint setMultiSourceCountryProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8748(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d482a8;
  func_0x000107c61428(param_1 + _DAT_112d482a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec8754; end: 100ec875f; -[SCPhoneEmailFirstLogInFeatureEntryPoint logInLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d482b0;
  func_0x000107c61428(param_1 + _DAT_112d482b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec8760; end: 100ec876b; -[SCPhoneEmailFirstLogInFeatureEntryPoint setLogInLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d482b0;
  func_0x000107c61428(param_1 + _DAT_112d482b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec876c; end: 100ec8777; -[SCPhoneEmailFirstLogInFeatureEntryPoint authInitialInfoLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec876c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d482b8;
  func_0x000107c61428(param_1 + _DAT_112d482b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec8778; end: 100ec8783; -[SCPhoneEmailFirstLogInFeatureEntryPoint setAuthInitialInfoLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8778(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d482b8;
  func_0x000107c61428(param_1 + _DAT_112d482b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec8784; end: 100ec878f; -[SCPhoneEmailFirstLogInFeatureEntryPoint authFlowTreatmentInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8784(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d482c0;
  func_0x000107c61428(param_1 + _DAT_112d482c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec8790; end: 100ec879b; -[SCPhoneEmailFirstLogInFeatureEntryPoint setAuthFlowTreatmentInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d482c0;
  func_0x000107c61428(param_1 + _DAT_112d482c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec879c; end: 100ec87a7; -[SCPhoneEmailFirstLogInFeatureEntryPoint systemBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec879c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d482c8;
  func_0x000107c61428(param_1 + _DAT_112d482c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec87a8; end: 100ec87b3; -[SCPhoneEmailFirstLogInFeatureEntryPoint setSystemBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec87a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d482c8;
  func_0x000107c61428(param_1 + _DAT_112d482c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec87b4; end: 100ec87bf; -[SCPhoneEmailFirstLogInFeatureEntryPoint cosServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec87b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d482d0;
  func_0x000107c61428(param_1 + _DAT_112d482d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ec87c0; end: 100ec8803;  */

void FUN_100ec87c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ec8804; end: 100ec880f; -[SCPhoneEmailFirstLogInFeatureEntryPoint setCosServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8804(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d482d0;
  func_0x000107c61428(param_1 + _DAT_112d482d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec8810; end: 100ec8863;  */

void FUN_100ec8810(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ec8864; end: 100ec88ab; -[SCPhoneEmailFirstLogInFeatureEntryPoint emailEntryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8864(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d482d8;
  func_0x000107c61428(param_1 + _DAT_112d482d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ec88ac; end: 100ec88b7; -[SCPhoneEmailFirstLogInFeatureEntryPoint setEmailEntryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec88ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d482d8;
  func_0x000107c61428(param_1 + _DAT_112d482d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ec88b8; end: 100ec88ff; -[SCPhoneEmailFirstLogInFeatureEntryPoint phoneEntryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec88b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d482e0;
  func_0x000107c61428(param_1 + _DAT_112d482e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ec8900; end: 100ec890b; -[SCPhoneEmailFirstLogInFeatureEntryPoint setPhoneEntryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8900(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d482e0;
  func_0x000107c61428(param_1 + _DAT_112d482e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ec890c; end: 100ec8953; -[SCPhoneEmailFirstLogInFeatureEntryPoint codeVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec890c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d482e8;
  func_0x000107c61428(param_1 + _DAT_112d482e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ec8954; end: 100ec895f; -[SCPhoneEmailFirstLogInFeatureEntryPoint setCodeVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec8954(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d482e8;
  func_0x000107c61428(param_1 + _DAT_112d482e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ec8960; end: 100ec89bf;  */

void FUN_100ec8960(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100ec89c0; end: 100ec8fdb;  */

/* WARNING: Possible PIC construction at 0x000100ec8c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8e6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec8d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec8d30) */
/* WARNING: Removing unreachable block (ram,0x000100ec8d20) */
/* WARNING: Removing unreachable block (ram,0x000100ec8d50) */
/* WARNING: Removing unreachable block (ram,0x000100ec8d40) */
/* WARNING: Removing unreachable block (ram,0x000100ec8d80) */
/* WARNING: Removing unreachable block (ram,0x000100ec8d70) */
/* WARNING: Removing unreachable block (ram,0x000100ec8dc0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8db0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8da0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8e00) */
/* WARNING: Removing unreachable block (ram,0x000100ec8df0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8de0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8dd0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8e40) */
/* WARNING: Removing unreachable block (ram,0x000100ec8e30) */
/* WARNING: Removing unreachable block (ram,0x000100ec8e20) */
/* WARNING: Removing unreachable block (ram,0x000100ec8e10) */
/* WARNING: Removing unreachable block (ram,0x000100ec8e90) */
/* WARNING: Removing unreachable block (ram,0x000100ec8e80) */
/* WARNING: Removing unreachable block (ram,0x000100ec8e70) */
/* WARNING: Removing unreachable block (ram,0x000100ec8e60) */
/* WARNING: Removing unreachable block (ram,0x000100ec8ef0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8ee0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8ed0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8ec0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8eb0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8f50) */
/* WARNING: Removing unreachable block (ram,0x000100ec8f40) */
/* WARNING: Removing unreachable block (ram,0x000100ec8f30) */
/* WARNING: Removing unreachable block (ram,0x000100ec8f20) */
/* WARNING: Removing unreachable block (ram,0x000100ec8f10) */
/* WARNING: Removing unreachable block (ram,0x000100ec8f00) */
/* WARNING: Removing unreachable block (ram,0x000100ec8fb0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8fa0) */
/* WARNING: Removing unreachable block (ram,0x000100ec8f90) */
/* WARNING: Removing unreachable block (ram,0x000100ec8f80) */
/* WARNING: Removing unreachable block (ram,0x000100ec8f70) */
/* WARNING: Removing unreachable block (ram,0x000100ec8f60) */
/* WARNING: Removing unreachable block (ram,0x000100ec8c90) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100ec8c80) */
/* WARNING: Removing unreachable block (ram,0x000100ec8c70) */
/* WARNING: Removing unreachable block (ram,0x000100ec8c60) */
/* WARNING: Removing unreachable block (ram,0x000100ec8c50) */
/* WARNING: Removing unreachable block (ram,0x000100ec8c40) */
/* WARNING: Removing unreachable block (ram,0x000100ec8c30) */
/* WARNING: Removing unreachable block (ram,0x000100ec8d10) */

void FUN_100ec89c0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c42494();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4e6bc();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c3fcc0();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c4d6a0();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c4bc0c();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c4eccc();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c4d1c8();
                  func_0x000107c61180();
                  if (lVar9 != 0) {
                    lVar10 = unaff_x20;
                    func_0x000107c4bc08();
                    func_0x000107c61180();
                    if (lVar10 != 0) {
                      lVar11 = unaff_x20;
                      func_0x000107c3e430();
                      func_0x000107c61180();
                      if (lVar11 == 0) {
                        func_0x000107c61170(lVar1);
                        lVar1 = lVar2;
                      }
                      else {
                        lVar12 = unaff_x20;
                        func_0x000107c3e42c();
                        func_0x000107c61180();
                        if (lVar12 == 0) {
                          func_0x000107c61170(lVar1);
                          lVar1 = lVar2;
                        }
                        else {
                          lVar13 = unaff_x20;
                          func_0x000107c5c5ec();
                          func_0x000107c61180();
                          if (lVar13 != 0) {
                            func_0x000107c407fc();
                            func_0x000107c61180();
                            if (unaff_x20 != 0) {
                              lVar14 = 0;
                              FUN_100ebd02c();
                              func_0x000107c613fc();
                              *(long *)(lVar14 + 0x10) = lVar1;
                              *(long *)(lVar14 + 0x18) = lVar2;
                              *(long *)(lVar14 + 0x20) = lVar4;
                              *(long *)(lVar14 + 0x28) = lVar3;
                              *(long *)(lVar14 + 0x30) = lVar5;
                              *(long *)(lVar14 + 0x38) = lVar6;
                              *(undefined8 *)(lVar14 + 0x40) = 0;
                              *(long *)(lVar14 + 0x48) = lVar7;
                              *(long *)(lVar14 + 0x50) = lVar8;
                              *(long *)(lVar14 + 0x58) = lVar9;
                              *(long *)(lVar14 + 0x60) = lVar10;
                              *(long *)(lVar14 + 0x68) = lVar11;
                              *(long *)(lVar14 + 0x70) = lVar12;
                              *(long *)(lVar14 + 0x78) = lVar13;
                              *(long *)(lVar14 + 0x80) = unaff_x20;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174(lVar7);
                              func_0x000107c61174(lVar8);
                              func_0x000107c61174(lVar9);
                              func_0x000107c61174(lVar10);
                              func_0x000107c61174(lVar11);
                              func_0x000107c61174(lVar12);
                              func_0x000107c61174(lVar13);
                              func_0x000107c61174(unaff_x20);
                              func_0x000100ebc2ec();
                              lVar1 = unaff_x20;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
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



/* Entry: 100ec8fdc; end: 100ec9003; -[SCPhoneEmailFirstLogInFeatureEntryPoint begin] */

void FUN_100ec8fdc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ec89c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ec9004; end: 100ec9047; -[SCPhoneEmailFirstLogInFeatureEntryPoint end] */

void FUN_100ec9004(undefined8 param_1)

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



/* Entry: 100ec9048; end: 100ec9707;  */

void FUN_100ec9048(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
       (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53414();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e8760)) ||
         (func_0x000107c605b8(0xd000000000000020,0x800000010ef178a0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56aa0();
      }
      else {
        uVar2 = 0;
        if (((param_2 == 0x7265536e49676f6c) && (param_3 == -0x12ffff8c9a9c968a)) ||
           (func_0x000107c605b8(0x7265536e49676f6c,0xed00007365636976,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c560a8();
        }
        else {
          uVar2 = 0xd000000000000023;
          if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef10e8730)) ||
             (func_0x000107c605b8(0xd000000000000023,0x800000010ef178d0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c576b0();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef10e8700)) ||
               (func_0x000107c605b8(0xd000000000000022,0x800000010ef17900,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c567f8();
            }
            else {
              uVar2 = 0xd000000000000013;
              if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef10e8c00)) ||
                 (func_0x000107c605b8(0xd000000000000013,0x800000010ef17400,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c560a4();
              }
              else {
                uVar2 = 0xd00000000000001d;
                if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10e8be0)) ||
                   (func_0x000107c605b8(0xd00000000000001d,0x800000010ef17420,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52a2c();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef10e86d0)) {
                    uVar2 = 0xd00000000000001d;
                    func_0x000107c605b8(0xd00000000000001d,0x800000010ef17930,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef4f0)) {
                        uVar2 = 0;
                        func_0x000107c605b8(0xd000000000000016,0x800000010ef10b10,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          uVar2 = 0x6976726553736f63;
                          if (((param_2 == 0x6976726553736f63) && (param_3 == -0x14ffffffff8c9a9d))
                             || (func_0x000107c605b8(0x6976726553736f63,0xeb00000000736563,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c539ec();
                          }
                          else {
                            if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e86b0)
                               ) {
                              uVar2 = 0;
                              func_0x000107c605b8(0xd000000000000016,0x800000010ef17950,param_2,
                                                  param_3,0);
                              if ((uVar2 & 1) == 0) {
                                if ((param_2 != -0x2fffffffffffffea) ||
                                   (param_3 != -0x7ffffffef10e8690)) {
                                  uVar2 = 0;
                                  func_0x000107c605b8(0xd000000000000016,0x800000010ef17970,param_2,
                                                      param_3,0);
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = 0;
                                    if (((param_2 != -0x2fffffffffffffe4) ||
                                        (param_3 != -0x7ffffffef10e8670)) &&
                                       (func_0x000107c605b8(0xd00000000000001c,0x800000010ef17990,
                                                            param_2,param_3,0), (uVar2 & 1) == 0)) {
                                      func_0x000107c602fc(0x15);
                                      func_0x000107c6142c(0xe000000000000000);
                                      func_0x000107c5fb78(param_2,param_3);
                                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                          0x800000010ef0fc20,
                                                                                                                    
                                                  "PhoneEmailFirstLogInFeature/SCPhoneEmailFirstLogInFeatureEntryPoint.swift"
                                                  ,0x49,2,100,0);
                    /* WARNING: Does not return */
                                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ec9708);
                                      (*pcVar1)();
                                    }
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c53528();
                                    goto LAB_100ec90d4;
                                  }
                                }
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c57358();
                                goto LAB_100ec90d4;
                              }
                            }
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c5444c();
                          }
                          goto LAB_100ec90d4;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c59b50();
                      goto LAB_100ec90d4;
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52a28();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_100ec90d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ec9708; end: 100ec97b3; -[SCPhoneEmailFirstLogInFeatureEntryPoint setValue:forIvarName:] */

void FUN_100ec9708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ec9048(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100ec97b4; end: 100ec98ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec97b4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d48280,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48288,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48290,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48298,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d482a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d482a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d482b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d482b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d482c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d482c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d482d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d482d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d482e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d482e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d482f0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ec9900; end: 100ec991f; -[SCPhoneEmailFirstLogInFeatureEntryPoint init] */

void FUN_100ec9900(void)

{
  FUN_100ec97b4();
  return;
}



/* Entry: 100ec9920; end: 100ec9953;  */

void FUN_100ec9920(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ec9954; end: 100ec9a5b; -[SCPhoneEmailFirstLogInFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec9954(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d48280);
  func_0x000107c61610(param_1 + _DAT_112d48288);
  func_0x000107c61610(param_1 + _DAT_112d48290);
  func_0x000107c61610(param_1 + _DAT_112d48298);
  func_0x000107c61610(param_1 + _DAT_112d482a0);
  func_0x000107c61610(param_1 + _DAT_112d482a8);
  func_0x000107c61610(param_1 + _DAT_112d482b0);
  func_0x000107c61610(param_1 + _DAT_112d482b8);
  func_0x000107c61610(param_1 + _DAT_112d482c0);
  func_0x000107c61610(param_1 + _DAT_112d482c8);
  func_0x000107c61610(param_1 + _DAT_112d482d0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d482d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d482e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d482e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d482f0));
  return;
}



/* Entry: 100ec9a5c; end: 100ec9a7b;  */

void FUN_100ec9a5c(void)

{
  func_0x000107c61168(&PTR_PTR_11279dd18);
  return;
}



/* Entry: 100ec9a7c; end: 100ec9a8b; -[_TtC38NGOPreferredVerificationMethodServices38NGOPreferredVerificationMethodServices preferredVerificationMethodProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec9a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d48320));
  return;
}



/* Entry: 100ec9a8c; end: 100ec9b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec9a8c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d48320) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ec9b24; end: 100ec9b83; -[_TtC38NGOPreferredVerificationMethodServices38NGOPreferredVerificationMethodServices init] */

void FUN_100ec9b24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NGOPreferredVerificationMethodServices.NGOPreferredVerificationMethodServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ec9b50);
  (*pcVar1)();
}



/* Entry: 100ec9b84; end: 100ec9b93; -[_TtC38NGOPreferredVerificationMethodServices38NGOPreferredVerificationMethodServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec9b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d48320));
  return;
}



/* Entry: 100ec9b94; end: 100ec9bb3;  */

void FUN_100ec9b94(void)

{
  func_0x000107c61168(&PTR_PTR_11279de40);
  return;
}



/* Entry: 100ec9bb4; end: 100ec9c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec9bb4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d48350) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ec9c4c; end: 100ec9c7f;  */

void FUN_100ec9c4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ec9c80; end: 100ec9c8f; -[AuthInitialInfoLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec9c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d48350));
  return;
}



/* Entry: 100ec9c90; end: 100ec9caf;  */

void FUN_100ec9c90(void)

{
  func_0x000107c61168(&PTR_PTR_11279df00);
  return;
}



/* Entry: 100ec9cb0; end: 100ec9cdb;  */

bool FUN_100ec9cb0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100ec9cdc; end: 100ec9e0b;  */

void FUN_100ec9cdc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 100ec9e0c; end: 100ec9e83;  */

undefined8 FUN_100ec9e0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 100ec9e84; end: 100ec9fbb;  */

undefined1 * FUN_100ec9e84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 100ec9fbc; end: 100ec9fe3;  */

void FUN_100ec9fbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100ec9fe4; end: 100eca04f;  */

void FUN_100ec9fe4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d483a0;
  FUN_100eca744(0x112d483a0,&UNK_10d90f180);
  uVar2 = 0x112d483e0;
  FUN_100eca744(0x112d483e0,&UNK_10d914f58);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 100eca050; end: 100eca24b;  */

undefined * FUN_100eca050(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x000100ed1bb4();
  lVar1 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar2 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  func_0x000107c61174();
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  uVar2 = 0;
  FUN_100eca24c(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(undefined8 *)(lVar1 + 0x48) = uVar6;
  func_0x000107c61174();
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c3fdc0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar6);
  uVar2 = 0;
  FUN_100eca24c(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  *(undefined8 *)(lVar1 + 0x50) = uVar3;
  lVar4 = lVar1;
  func_0x000100ecbca8(lVar1);
  func_0x000107c61588(lVar1);
  uVar3 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),2,uVar3);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  uVar2 = 0;
  FUN_100eca28c(0);
  uVar3 = 0x112d483a0;
  FUN_100eca744(0x112d483a0,&UNK_10d90f180);
  lVar1 = lVar4;
  func_0x000107c5f9dc(lVar4,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
  func_0x000107c6142c(lVar4);
  func_0x000107c48af8(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar1);
  return puVar5;
}



/* Entry: 100eca24c; end: 100eca28b;  */

void FUN_100eca24c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100eca28c; end: 100eca2db;  */

void FUN_100eca28c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d483c0 != 0) {
    return;
  }
  puVar1 = &UNK_1103650c0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d483c0 = param_1;
  return;
}



/* Entry: 100eca2dc; end: 100eca63f;  */

undefined *
FUN_100eca2dc(undefined8 **param_1,undefined8 param_2,undefined8 **param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 **ppuVar4;
  long lVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long extraout_x8;
  undefined8 uVar11;
  long alStack_100 [2];
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 uStack_d8;
  
  lVar1 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = -extraout_x8;
  lVar7 = (long)&ppuStack_f0 + lVar8;
  lVar1 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar2 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  func_0x000107c61174();
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar9 = uVar2;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  uVar2 = 0;
  FUN_100eca24c(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar1 + 0x28) = uVar9;
  uVar11 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(undefined8 *)(lVar1 + 0x48) = uVar11;
  func_0x000107c61174();
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar9 = uVar11;
  func_0x000107c3fdc0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar11);
  uVar2 = 0;
  FUN_100eca24c(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  *(undefined8 *)(lVar1 + 0x50) = uVar9;
  lVar5 = lVar1;
  func_0x000100ecbca8(lVar1);
  func_0x000107c61588(lVar1);
  uVar9 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),2,uVar9);
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  ppuVar4 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  uVar2 = 0;
  FUN_100eca28c(0);
  uVar9 = 0x112d483a0;
  FUN_100eca744(0x112d483a0,&UNK_10d90f180);
  lVar1 = lVar5;
  func_0x000107c5f9dc(lVar5,uVar2,PTR___sypN_11034f1a8 + 8,uVar9);
  func_0x000107c6142c(lVar5);
  func_0x000107c48af8(puVar3);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(lVar1);
  lVar5 = 0;
  ppuStack_f0 = param_3;
  uStack_e8 = param_4;
  ppuStack_e0 = param_1;
  uStack_d8 = param_2;
  func_0x000107c5ef14();
  lVar1 = lVar7;
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar7,1,1,lVar5);
  FUN_100e8b654();
  *(long *)((long)alStack_100 + lVar8) = lVar1;
  *(long *)((long)alStack_100 + lVar8 + 8) = lVar1;
  pppuVar6 = &ppuStack_f0;
  uVar9 = 0;
  uVar10 = 0;
  func_0x000107c60218();
  FUN_100eca640(lVar7);
  if ((uVar10 & 0xff) != 1) {
    func_0x00010052bbec();
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c43780();
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    ppuStack_f0 = param_1;
    uStack_e8 = param_2;
    ppuStack_e0 = pppuVar6;
    uStack_d8 = uVar9;
    func_0x000107c61434(param_2);
    uVar9 = 0x112d483b0;
    func_0x0001000285a8(0x112d483b0,&UNK_10d90f140);
    uVar2 = uVar9;
    FUN_100eca688();
    func_0x000107c60148(&ppuStack_e0,&ppuStack_f0,uVar9,PTR___sSSN_11034da80,uVar2,lVar1);
    func_0x000107c3d5c4(puVar3);
    func_0x000107c61170(lVar8);
  }
  return puVar3;
}



/* Entry: 100eca640; end: 100eca687;  */

undefined8 FUN_100eca640(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100eca688; end: 100eca743;  */

void FUN_100eca688(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d483b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d483b0;
  func_0x00010002969c(0x112d483b0,&UNK_10d90f140);
  puVar2 = PTR___sSnyxGSXsMc_11034e118;
  func_0x000107c61520(PTR___sSnyxGSXsMc_11034e118,uVar1);
  puRam0000000112d483b8 = puVar2;
  return;
}



/* Entry: 100eca744; end: 100eca783;  */

void FUN_100eca744(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_100eca28c(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100eca784; end: 100ecad7f;  */

long FUN_100eca784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  return unaff_x20;
}



/* Entry: 100ecad80; end: 100ecae7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecad80(long *param_1,long param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (lVar3 == 3) {
      if (param_3 == 1) {
        lVar3 = *(long *)(param_2 + 0x58);
        func_0x000107c42eac();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ecae7c);
          (*pcVar1)();
        }
        lVar2 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar2 != 0) {
          func_0x000107c53eb0(lVar2);
          func_0x000107c61170(lVar2);
        }
      }
      lVar2 = _DAT_112d48ba8;
      lVar3 = *(long *)(param_2 + 0x10);
      func_0x000107c61428(lVar3 + _DAT_112d48ba8,auStack_60,0,0);
      lVar3 = lVar3 + lVar2;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c4eb94();
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100ecae7c; end: 100ecafa3;  */

uint FUN_100ecae7c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c3e944();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c5ee94(puVar5,lVar2);
    func_0x000107c61170(lVar2);
    (**(code **)(lVar6 + 0x20))((long)puVar5 - extraout_x12,puVar5,lVar1);
    uVar4 = 0;
    FUN_100ecfe98(0x10);
    (**(code **)(lVar6 + 8))((long)puVar5 - extraout_x12,lVar1);
  }
  return uVar4 & 1;
}



/* Entry: 100ecafa4; end: 100ecb047;  */

void FUN_100ecafa4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 100ecb048; end: 100ecb067;  */

void FUN_100ecb048(void)

{
  func_0x000100eca844();
  return;
}



/* Entry: 100ecb068; end: 100ecb06f;  */

undefined8 FUN_100ecb068(void)

{
  return 0;
}



/* Entry: 100ecb070; end: 100ecb16f;  */

undefined8 * FUN_100ecb070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 auStack_a0 [5];
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 auStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar1 = 0;
  func_0x000100ed03c4();
  ppuStack_48 = &PTR_DAT_1103656c8;
  lVar2 = 0;
  auStack_68[0] = param_2;
  lStack_50 = lVar1;
  FUN_100ed11b0();
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_68,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = (undefined8 *)((long)auStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar3);
  auStack_a0[2] = *puVar3;
  ppuStack_70 = &PTR_DAT_1103656c8;
  lStack_78 = lVar1;
  FUN_100ecb1a0(auStack_a0 + 2,lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x58) = param_3;
  auStack_a0[0] = 0;
  puVar3 = auStack_a0;
  auStack_a0[1] = param_1;
  func_0x000103dbf4dc(puVar3);
  func_0x0001000834e4(auStack_a0 + 2);
  func_0x0001000834e4(auStack_68);
  return puVar3;
}



/* Entry: 100ecb170; end: 100ecb17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecb170(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *param_1;
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (lVar5 == 3) {
      if ((int)uVar1 == 1) {
        lVar5 = *(long *)(lVar3 + 0x58);
        func_0x000107c42eac();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ecae7c);
          (*pcVar2)();
        }
        lVar4 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar4 != 0) {
          func_0x000107c53eb0(lVar4);
          func_0x000107c61170(lVar4);
        }
      }
      lVar4 = _DAT_112d48ba8;
      lVar5 = *(long *)(lVar3 + 0x10);
      func_0x000107c61428(lVar5 + _DAT_112d48ba8,auStack_60,0,0);
      lVar5 = lVar5 + lVar4;
      func_0x000107c61618();
      if (lVar5 != 0) {
        func_0x000107c4eb94();
        func_0x000107c615e8(lVar5);
      }
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 100ecb180; end: 100ecb19f;  */

void FUN_100ecb180(void)

{
  func_0x000107c61168(&PTR_PTR_112d48428);
  return;
}



/* Entry: 100ecb1a0; end: 100ecb1e3;  */

long FUN_100ecb1a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100ecb1e4; end: 100ecb223;  */

bool FUN_100ecb1e4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100ecb224; end: 100ecb2a7;  */

void FUN_100ecb224(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100ecb2a8; end: 100ecb2f7;  */

undefined8 FUN_100ecb2a8(byte *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *param_1;
  cVar2 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (cVar2 == '\0') {
        return 1;
      }
    }
    else if (cVar2 == '\x01') {
      return 1;
    }
  }
  else if (bVar1 == 2) {
    if (cVar2 == '\x02') {
      return 1;
    }
  }
  else if (cVar2 == '\x03') {
    return 1;
  }
  return 0;
}


