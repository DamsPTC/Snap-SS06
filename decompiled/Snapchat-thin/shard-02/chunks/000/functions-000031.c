/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016f86c4; end: 1016f8803;  */

void FUN_1016f86c4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112dc3298,&UNK_10d9e4e00);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f8804);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1016f87e4;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
    } while( true );
  }
LAB_1016f87e4:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1016f8804; end: 1016f8a57;  */

void FUN_1016f8804(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112dc3298;
  func_0x0001000285a8(0x112dc3298,&UNK_10d9e4e00);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1016f8a24:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f8a54);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_1016f8a24;
        }
        uVar12 = puVar14[lVar16];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar16 << 6));
    uVar15 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar15 = uVar15 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar15 >> 6;
    uVar7 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar15 = uVar9 + 1;
        if ((uVar15 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f8a58);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar15 != uVar7) {
          uVar9 = uVar15;
        }
        bVar3 = (bool)(uVar15 == uVar7 | bVar3);
        uVar15 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar16;
  } while( true );
}



/* Entry: 1016f8a58; end: 1016f8b53;  */

void FUN_1016f8a58(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1016bcd1c();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,PTR___sSSN_11034da80);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_1016f8b54(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_1016f8f68(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 1016f8b54; end: 1016f8f67;  */

void FUN_1016f8b54(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long unaff_x21;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar21 = param_3[1];
  if (0 < lVar21) {
    lVar12 = 0;
    do {
      lVar20 = lVar12 + 1;
      if (lVar20 < lVar21) {
        lVar17 = *param_3;
        puVar18 = (ulong *)(lVar17 + lVar20 * 0x10);
        uVar19 = *puVar18;
        puVar16 = (ulong *)(lVar17 + lVar12 * 0x10);
        if (uVar19 == *puVar16 && puVar18[1] == puVar16[1]) {
          uVar19 = 0;
        }
        else {
          func_0x000107c605b8();
        }
        lVar15 = lVar12 + 2;
        lVar20 = lVar15;
        if (lVar15 < lVar21) {
          puVar18 = puVar16 + 3;
          do {
            uVar14 = puVar18[1];
            if (uVar14 == puVar18[-1] && puVar18[2] == *puVar18) {
              if ((uVar19 & 1) != 0) goto LAB_1016f8c4c;
            }
            else {
              func_0x000107c605b8();
              lVar20 = lVar15;
              if ((((uint)uVar19 ^ (uint)uVar14) & 1) != 0) break;
            }
            lVar15 = lVar15 + 1;
            puVar18 = puVar18 + 2;
            lVar20 = lVar21;
          } while (lVar21 != lVar15);
        }
        lVar15 = lVar20;
        if ((uVar19 & 1) != 0) {
LAB_1016f8c4c:
          if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f3c);
            (*pcVar6)();
          }
          lVar20 = lVar15;
          if (lVar12 < lVar15) {
            lVar11 = lVar15 << 4;
            lVar13 = lVar12 << 4;
            lVar21 = lVar12;
            do {
              lVar15 = lVar15 + -1;
              if (lVar21 != lVar15) {
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f5c);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar17 + lVar13);
                lVar2 = lVar17 + lVar11;
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar22 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar22;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar5;
              }
              lVar21 = lVar21 + 1;
              lVar11 = lVar11 + -0x10;
              lVar13 = lVar13 + 0x10;
            } while (lVar21 < lVar15);
          }
        }
      }
      lVar21 = param_3[1];
      lVar17 = lVar20;
      if (lVar20 < lVar21) {
        if (SBORROW8(lVar20,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f38);
          (*pcVar6)();
        }
        if (lVar20 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f40);
            (*pcVar6)();
          }
          lVar15 = lVar12 + param_4;
          if (lVar21 <= lVar12 + param_4) {
            lVar15 = lVar21;
          }
          if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f44);
            (*pcVar6)();
          }
          if (lVar20 != lVar15) {
            lVar13 = *param_3;
            puVar18 = (ulong *)(lVar13 + lVar20 * 0x10);
            lVar21 = lVar12 - lVar20;
            do {
              puVar16 = (ulong *)(lVar13 + lVar20 * 0x10);
              uVar19 = *puVar16;
              uVar14 = puVar16[1];
              puVar16 = puVar18;
              lVar17 = lVar21;
              do {
                if ((uVar19 == puVar16[-2] && uVar14 == puVar16[-1]) ||
                   (func_0x000107c605b8(), (uVar19 & 1) == 0)) break;
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f48);
                  (*pcVar6)();
                }
                uVar19 = *puVar16;
                uVar14 = puVar16[1];
                puVar16[1] = puVar16[-1];
                *puVar16 = puVar16[-2];
                puVar16[-1] = uVar14;
                puVar16 = puVar16 + -2;
                *puVar16 = uVar19;
                bVar7 = lVar17 != -1;
                lVar17 = lVar17 + 1;
              } while (bVar7);
              lVar20 = lVar20 + 1;
              puVar18 = puVar18 + 2;
              lVar21 = lVar21 + -1;
              lVar17 = lVar15;
            } while (lVar20 != lVar15);
          }
        }
      }
      puVar10 = puStack_58;
      if (lVar17 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f28);
        (*pcVar6)();
      }
      puVar8 = puStack_58;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar19 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar19) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        func_0x0001000a91e0(puVar10,uVar19 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar19 + 1;
      *(long *)(puVar10 + uVar19 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar10 + uVar19 * 0x10 + 0x28) = lVar17;
      puStack_58 = puVar10;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f60);
        (*pcVar6)();
      }
      FUN_1016f9034(&puStack_58,*param_1,param_3);
      puVar10 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1016f8ef8;
      lVar21 = param_3[1];
      lVar12 = lVar17;
    } while (lVar17 < lVar21);
  }
  puVar10 = puStack_58;
  lVar21 = *param_1;
  if (lVar21 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f68);
    (*pcVar6)();
  }
  puVar8 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar18 = (ulong *)(puVar10 + 0x10);
  uVar19 = *puVar18;
  while( true ) {
    if (uVar19 < 2) {
      func_0x000107c6142c(puVar10);
      return;
    }
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f64);
      (*pcVar6)();
    }
    plVar3 = (long *)(puVar10 + uVar19 * 0x10);
    lVar20 = *plVar3;
    puVar16 = puVar18 + uVar19 * 2;
    uVar14 = puVar16[1];
    FUN_1016f929c(lVar12 + lVar20 * 0x10,lVar12 + *puVar16 * 0x10,lVar12 + uVar14 * 0x10,lVar21);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar20) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f2c);
      (*pcVar6)();
    }
    if (*puVar18 <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f30);
      (*pcVar6)();
    }
    *plVar3 = lVar20;
    plVar3[1] = uVar14;
    uVar14 = *puVar18;
    lVar12 = uVar14 - uVar19;
    if (uVar14 < uVar19) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1016f8f34);
      (*pcVar6)();
    }
    uVar19 = uVar14 - 1;
    func_0x000107c610b8(puVar16,puVar16 + 2,lVar12 * 0x10);
    *puVar18 = uVar19;
  }
LAB_1016f8ef8:
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 1016f8f68; end: 1016f9033;  */

void FUN_1016f8f68(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (ulong *)(lVar5 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      puVar8 = (ulong *)(lVar5 + param_3 * 0x10);
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      lVar7 = param_1;
      puVar8 = puVar6;
      do {
        if ((uVar3 == puVar8[-2] && uVar4 == puVar8[-1]) ||
           (func_0x000107c605b8(), (uVar3 & 1) == 0)) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f9034);
          (*pcVar1)();
        }
        uVar3 = *puVar8;
        uVar4 = puVar8[1];
        puVar8[1] = puVar8[-1];
        *puVar8 = puVar8[-2];
        puVar8[-1] = uVar4;
        puVar8 = puVar8 + -2;
        *puVar8 = uVar3;
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1016f9034; end: 1016f929b;  */

undefined8 FUN_1016f9034(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1016f9108;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9284);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1016f916c:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9274);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f927c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f925c);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9260);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9268);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9270);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1016f9108:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9264);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f926c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9278);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9280);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1016f916c;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9288);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9250);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f929c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1016f929c(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9254);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f9258);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1016f929c; end: 1016f94d7;  */

undefined8 FUN_1016f929c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar1 = lVar8 + 0xf;
  if (-1 < lVar8) {
    lVar1 = lVar8;
  }
  lVar1 = lVar1 >> 4;
  lVar10 = (long)param_3 - (long)param_2;
  lVar3 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 4;
  if (lVar1 < lVar3) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 << 4);
    }
    puVar7 = param_4 + lVar1 * 2;
    puVar4 = param_1;
    if (0xf < lVar8) {
      do {
        if (param_3 <= param_2) break;
        uVar11 = *param_2;
        if ((uVar11 == *param_4 && param_2[1] == param_4[1]) ||
           (func_0x000107c605b8(), (uVar11 & 1) == 0)) {
          puVar5 = param_4 + 2;
          puVar6 = param_4;
        }
        else {
          puVar5 = param_4;
          puVar6 = param_2;
          param_2 = param_2 + 2;
        }
        param_4 = puVar5;
        if (puVar4 != puVar6) {
          uVar11 = *puVar6;
          puVar4[1] = puVar6[1];
          *puVar4 = uVar11;
        }
        puVar4 = puVar4 + 2;
      } while (param_4 < puVar7);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar3 * 2 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar3 << 4);
    }
    puVar6 = param_4 + lVar3 * 2;
    puVar4 = param_2;
    puVar7 = puVar6;
    if ((param_1 < param_2) && (0xf < lVar10)) {
      do {
        puVar9 = param_2 + -2;
        puVar5 = param_3;
        while( true ) {
          param_3 = puVar5 + -2;
          puVar7 = puVar6 + -2;
          uVar11 = *puVar7;
          if ((uVar11 != param_2[-2] || puVar6[-1] != param_2[-1]) &&
             (func_0x000107c605b8(), (uVar11 & 1) != 0)) break;
          if (puVar5 != puVar6) {
            uVar11 = *puVar7;
            puVar5[-1] = puVar6[-1];
            *param_3 = uVar11;
          }
          puVar4 = param_2;
          puVar6 = puVar7;
          puVar5 = param_3;
          if (puVar7 <= param_4) goto LAB_1016f947c;
        }
        if (puVar5 != param_2) {
          uVar11 = *puVar9;
          puVar5[-1] = param_2[-1];
          *param_3 = uVar11;
        }
        puVar4 = puVar9;
        puVar7 = puVar6;
      } while ((param_1 < puVar9) && (param_2 = puVar9, param_4 < puVar6));
    }
  }
LAB_1016f947c:
  uVar2 = (long)puVar7 - (long)param_4;
  uVar11 = uVar2 + 0xf;
  if (-1 < (long)uVar2) {
    uVar11 = uVar2;
  }
  if ((puVar4 != param_4) || ((ulong *)((long)param_4 + (uVar11 & 0xfffffffffffffff0)) <= puVar4)) {
    func_0x000107c610b8(puVar4,param_4,((long)uVar11 >> 4) << 4);
  }
  return 1;
}



/* Entry: 1016f94d8; end: 1016f94fb;  */

void FUN_1016f94d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_6;
  *(undefined8 *)(unaff_x22 + 0x118) = param_7;
  *(undefined8 *)(unaff_x22 + 0x100) = param_4;
  *(undefined8 *)(unaff_x22 + 0x108) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f94fc,0,0);
  return;
}



/* Entry: 1016f94fc; end: 1016f9773;  */

void FUN_1016f94fc(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0xe8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000100083b20(unaff_x22 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  func_0x0001000a8868(unaff_x22 + 0x40,uVar9);
  (**(code **)(lVar3 + 8))(lVar2,uVar7,uVar9,lVar3);
  *(long *)(unaff_x22 + 0x120) = lVar2;
  func_0x0001000834e4(unaff_x22 + 0x40);
  lVar3 = lVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
    *(long *)(unaff_x22 + 0x128) = lVar4;
    *(undefined8 *)(unaff_x22 + 0x130) = uVar7;
    func_0x000100083b20(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar2 = *(long *)(unaff_x22 + 0x88);
    func_0x0001000a8868(unaff_x22 + 0x68,uVar9);
    func_0x00010006c00c(lVar4,uVar7);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1016f04e0();
    *(undefined8 *)(unaff_x22 + 0x10) = 0x6973754d7465472f;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xee006b6361725463;
    *(long *)(unaff_x22 + 0x20) = lVar4;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
    *(undefined1 *)(unaff_x22 + 0x30) = 0;
    *(undefined **)(unaff_x22 + 0x38) = puVar5;
    piVar8 = *(int **)(lVar2 + 0x10);
    iVar1 = *piVar8;
    plVar6 = (long *)(ulong)(uint)piVar8[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x138) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1016f9774;
                    /* WARNING: Could not recover jumptable at 0x0001016f9658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar8))
              (plVar6,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0xf8),
               *(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),uVar9,lVar2);
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c602fc(0x2b);
  func_0x000107c6142c(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 200) = uVar9;
  puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(0x800000010efb8990);
  uVar9 = 0x636973756d;
  func_0x000107c5fadc(0x636973756d,0xe500000000000000);
  uVar7 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010efb89c0);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61654();
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016f9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f9774; end: 1016f97df;  */

void FUN_1016f9774(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x140) = param_1;
  *(undefined8 *)(lVar2 + 0x148) = param_2;
  *(long *)(lVar2 + 0x150) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x138));
  FUN_1016e8b44(lVar2 + 0x10);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1016f97e0;
  }
  else {
    pcVar1 = FUN_1016f9bd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1016f97e0; end: 1016f9a97;  */

void FUN_1016f97e0(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x148);
  lVar11 = *(long *)(unaff_x22 + 0x150);
  lVar9 = *(long *)(unaff_x22 + 0x140);
  func_0x0001000834e4(unaff_x22 + 0x68);
  func_0x000107c610f8(PTR_PTR_1126bfda0);
  FUN_1016e8bc0(lVar9,uVar2);
  FUN_1016e8b78(lVar9,uVar2 & 0xdfffffffffffffff);
  func_0x0001016e8bc8(*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x148));
  if (lVar11 == 0) {
    if (lVar9 != 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x120);
      func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x130));
      func_0x000107c61170(uVar14);
      func_0x0001016e8bc8(uVar12,uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001016f99c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(lVar9);
      return;
    }
  }
  else {
    func_0x000107c614ac(lVar11);
  }
  lVar11 = *(long *)(unaff_x22 + 0x100);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c602fc(0x32);
  func_0x000107c6142c(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar12;
  puVar7 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(0x800000010efb8a30);
  if (lVar11 != 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
    func_0x000100083b20(unaff_x22 + 0x90);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar11 = *(long *)(unaff_x22 + 0xb0);
    func_0x0001000a8868(unaff_x22 + 0x90,uVar12);
    piVar8 = *(int **)(lVar11 + 0x18);
    iVar1 = *piVar8;
    plVar4 = (long *)(ulong)(uint)piVar8[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x158) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1016f9a98;
                    /* WARNING: Could not recover jumptable at 0x0001016f996c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar8))
              (uVar14,*(undefined8 *)(unaff_x22 + 0xf8),uVar10,uVar12,lVar11);
    return;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = 0x636973756d;
  func_0x000107c5fadc(0x636973756d,0xe500000000000000);
  uVar6 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efb8a70);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61654();
  func_0x00010006c090(uVar10,uVar3);
  func_0x000107c61170(uVar13);
  func_0x0001016e8bc8(uVar12,uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001016f9a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f9a98; end: 1016f9adf;  */

void FUN_1016f9a98(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f9ae0,0,0);
  return;
}



/* Entry: 1016f9ae0; end: 1016f9bd7;  */

void FUN_1016f9ae0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  func_0x0001000834e4(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = 0x636973756d;
  func_0x000107c5fadc(0x636973756d,0xe500000000000000);
  uVar6 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efb8a70);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61654();
  func_0x00010006c090(uVar2,uVar4);
  func_0x000107c61170(uVar7);
  func_0x0001016e8bc8(uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001016f9bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f9bd8; end: 1016f9d1f;  */

void FUN_1016f9bd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x0001000834e4(unaff_x22 + 0x68);
  func_0x000107c602fc(0x3e);
  *(undefined8 *)(unaff_x22 + 0xb8) = 0;
  *(undefined8 *)(unaff_x22 + 0xc0) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000031,0x800000010efb89f0);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar6;
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x3a726f727265202c,0xe900000000000020);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar5;
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0((undefined8 *)(unaff_x22 + 0xd8),(undefined8 *)(unaff_x22 + 0xb8),uVar5,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61654();
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001016f9d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f9d20; end: 1016f9d63;  */

void FUN_1016f9d20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc2f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a79f0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dc2f28 = puVar1;
  return;
}



/* Entry: 1016f9d64; end: 1016f9eaf;  */

/* WARNING: Removing unreachable block (ram,0x0001016f9ea4) */

undefined1  [16] FUN_1016f9d64(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_1016f6b20();
  uStack_58 = param_2;
  func_0x000107c61434();
  FUN_1016f8a58(&uStack_58);
  func_0x000107c6142c(param_2);
  uVar2 = uStack_58;
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar3;
  func_0x00010011d734();
  uVar5 = 0x2d;
  uVar6 = 0xe100000000000000;
  func_0x000107c5fa80(0x2d,0xe100000000000000,uVar3,uVar4);
  func_0x000107c61574(uVar2);
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(uStack_50);
  uStack_58 = 0xd000000000000023;
  uStack_50 = 0x800000010efb8960;
  puVar7 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  auVar1._8_8_ = uStack_50;
  auVar1._0_8_ = uStack_58;
  return auVar1;
}



/* Entry: 1016f9eb0; end: 1016f9ecf;  */

void FUN_1016f9eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f9ed0,0,0);
  return;
}



/* Entry: 1016f9ed0; end: 1016f9f47;  */

void FUN_1016f9ed0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x70);
  lVar4 = *(long *)(unaff_x22 + 0x78);
  FUN_1016f9d64();
  *(long *)(unaff_x22 + 0x98) = lVar2;
  *(long *)(unaff_x22 + 0xa0) = lVar4;
  plVar3 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1016f9f48;
  lVar5 = *(long *)(unaff_x22 + 0x90);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x70);
  plVar3[0x22] = *(long *)(unaff_x22 + 0x80);
  plVar3[0x23] = lVar5;
  plVar3[0x20] = lVar4;
  plVar3[0x21] = 0x40f5180000000000;
  plVar3[0x1e] = lVar1;
  plVar3[0x1f] = lVar2;
  plVar3[0x1d] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f94fc,0,0);
  return;
}



/* Entry: 1016f9f48; end: 1016f9fb7;  */

void FUN_1016f9f48(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
  if (unaff_x20 != 0) {
    func_0x000107c6142c(*(undefined8 *)(lVar1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x0001016f9f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f9fb8,0,0);
  return;
}



/* Entry: 1016f9fb8; end: 1016fa217;  */

void FUN_1016f9fb8(void)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  
  iVar3 = (int)*(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c449b0();
  if (iVar3 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c602fc(0x23);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
    puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c6142c(0x800000010efb88a0);
    lVar8 = 0;
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0xb0);
    func_0x000100083b20(unaff_x22 + 0x10);
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x28));
    func_0x000107c4d2ac();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fa218);
      (*pcVar2)();
    }
    lVar8 = lVar10;
    (**(code **)(lVar1 + 0x10))();
    func_0x000107c61170(lVar10);
    if (lVar8 == 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
      func_0x0001000834e4(unaff_x22 + 0x10);
      func_0x000107c602fc(0x2c);
      func_0x000107c6142c(0xe000000000000000);
      *(undefined8 *)(unaff_x22 + 0x68) = uVar7;
      puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(0x800000010efb8900);
      func_0x000100083b20(unaff_x22 + 0x38);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar8 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(unaff_x22 + 0x38,uVar7);
      piVar6 = *(int **)(lVar8 + 0x18);
      iVar3 = *piVar6;
      plVar4 = (long *)(ulong)(uint)piVar6[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb8) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1016fa218;
                    /* WARNING: Could not recover jumptable at 0x0001016fa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar3 + (long)piVar6))
                (0x40f5180000000000,*(undefined8 *)(unaff_x22 + 0x98),
                 *(undefined8 *)(unaff_x22 + 0xa0),uVar7,lVar8);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c61170(uVar7);
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001016fa108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar8);
  return;
}



/* Entry: 1016fa218; end: 1016fa25f;  */

void FUN_1016fa218(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016fa260,0,0);
  return;
}



/* Entry: 1016fa260; end: 1016fa32f;  */

void FUN_1016fa260(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x0001000834e4(unaff_x22 + 0x38);
  uVar1 = 0x636973756d;
  func_0x000107c5fadc(0x636973756d,0xe500000000000000);
  uVar2 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efb8930);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61654();
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001016fa32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016fa330; end: 1016fa33f;  */

undefined1  [16] FUN_1016fa330(void)

{
  return ZEXT816(0x1103fc1e0);
}



/* Entry: 1016fa340; end: 1016fa3a3;  */

long FUN_1016fa340(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1016fa3a4; end: 1016fa483;  */

undefined8 * FUN_1016fa3a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 1016fa484; end: 1016fa4d7;  */

undefined8 * FUN_1016fa484(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1016fa4d8; end: 1016fa57f;  */

int FUN_1016fa4d8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016fa580; end: 1016fa5cb;  */

void FUN_1016fa580(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016fa5cc; end: 1016fa65f;  */

void FUN_1016fa5cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  plVar9 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1016fa660;
  plVar9[3] = lVar7;
  plVar8 = (long *)0x110;
  func_0x000107c615b8();
  plVar9[4] = (long)plVar8;
  *plVar8 = (long)plVar9;
  plVar8[1] = (long)FUN_1016f79f8;
  plVar8[0x11] = lVar3;
  plVar8[0x12] = lVar4;
  plVar8[0x10] = lVar5;
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar6 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x13] = uVar6;
  lVar7 = 0;
  func_0x000107c5ede0();
  plVar8[0x14] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar8[0x15] = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x16] = uVar6;
  plVar9 = (long *)0x160;
  func_0x000107c615b8();
  plVar8[0x17] = (long)plVar9;
  *plVar9 = (long)plVar8;
  plVar9[1] = (long)FUN_1016f6eac;
  plVar9[0x22] = lVar1;
  plVar9[0x23] = lVar2;
  plVar9[0x20] = 0;
  plVar9[0x21] = 0;
  plVar9[0x1e] = lVar10;
  plVar9[0x1f] = 0;
  plVar9[0x1d] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f94fc,0,0);
  return;
}



/* Entry: 1016fa660; end: 1016fa69b;  */

void FUN_1016fa660(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016fa698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016fa69c; end: 1016fa6af;  */

void FUN_1016fa69c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1016fa6b0; end: 1016fa6eb;  */

void FUN_1016fa6b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016fa6ec; end: 1016fa70b;  */

void FUN_1016fa6ec(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f7df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016fa70c; end: 1016fa823;  */

undefined * FUN_1016fa70c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bfda8;
  func_0x000107c610f8(PTR_PTR_1126bfda8);
  func_0x000107c453e4();
  func_0x000107c59fd0();
  lVar2 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar3 = PTR_PTR_1126bfdb0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126bfdb8;
  func_0x000107c610f8(PTR_PTR_1126bfdb8);
  func_0x000107c453e4();
  func_0x000107c56890(puVar3);
  func_0x000107c61170(puVar4);
  uVar5 = 0;
  FUN_1016fabfc(0,0x112dc2b68,&PTR_PTR_1126bfdb0);
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  *(undefined **)(lVar2 + 0x20) = puVar3;
  uVar5 = 0;
  FUN_1016fabfc(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c600f0(lVar2,uVar5);
  func_0x000107c57df0(puVar1);
  func_0x000107c61170(lVar2);
  return puVar1;
}



/* Entry: 1016fa824; end: 1016faab3;  */

undefined * FUN_1016fa824(long param_1)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    FUN_1016e79bc(0,lVar13,0);
    uVar1 = param_1 + 0x38;
    uVar14 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar16 = 0;
    do {
      if (uVar14 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1016faaa4);
        (*pcVar5)();
      }
      uVar10 = uVar14 >> 6;
      uVar11 = 1L << (uVar14 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar10 * 8) & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1016faaa8);
        (*pcVar5)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      cVar3 = *(char *)(*(long *)(param_1 + 0x30) + uVar14);
      puVar6 = PTR_PTR_1126bfdb0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      if (cVar3 == '\0') {
        puVar7 = PTR_PTR_1126bfdc8;
        func_0x000107c610f8(PTR_PTR_1126bfdc8);
        func_0x000107c453e4();
        func_0x000107c528fc(puVar6);
      }
      else if (cVar3 == '\x01') {
        puVar7 = PTR_PTR_1126bfdc0;
        func_0x000107c610f8(PTR_PTR_1126bfdc0);
        func_0x000107c453e4();
        func_0x000107c59a88(puVar6);
      }
      else {
        puVar7 = PTR_PTR_1126a7a28;
        func_0x000107c610f8(PTR_PTR_1126a7a28);
        func_0x000107c453e4();
        func_0x000107c5a084(puVar6);
      }
      func_0x000107c61170(puVar7);
      uVar15 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar15) {
        FUN_1016e79bc(1 < *(ulong *)(puVar4 + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar15 + 1;
      *(undefined **)(puVar4 + uVar15 * 8 + 0x20) = puVar6;
      uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar15 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1016faaac);
        (*pcVar5)();
      }
      uVar8 = *(ulong *)(uVar1 + uVar10 * 8);
      if ((uVar8 & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1016faab0);
        (*pcVar5)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1016faab4);
        (*pcVar5)();
      }
      uVar8 = uVar8 & -2L << (uVar14 & 0x3f);
      if (uVar8 == 0) {
        lVar12 = uVar10 << 6;
        puVar9 = (ulong *)(param_1 + 0x40 + uVar10 * 8);
        do {
          uVar10 = uVar10 + 1;
          if (uVar15 + 0x3f >> 6 <= uVar10) {
            FUN_1016fa69c(uVar14,iVar2,0);
            uVar14 = uVar15;
            goto LAB_1016fa8c0;
          }
          uVar11 = *puVar9;
          lVar12 = lVar12 + 0x40;
          puVar9 = puVar9 + 1;
        } while (uVar11 == 0);
        FUN_1016fa69c(uVar14,iVar2,0);
        uVar14 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + lVar12;
      }
      else {
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar14 & 0x7fffffffffffffc0;
      }
LAB_1016fa8c0:
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar13);
  }
  return puVar4;
}



/* Entry: 1016faab4; end: 1016fabdb;  */

long FUN_1016faab4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_48;
  
  FUN_1016fa70c();
  lVar1 = param_1;
  func_0x000107c503cc();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puStack_48 = (undefined *)0x0;
    uVar2 = 0;
    FUN_1016fabfc(0,0x112dc2b68,&PTR_PTR_1126bfdb0);
    func_0x000107c5fc50(lVar1,&puStack_48,uVar2);
    func_0x000107c61170(lVar1);
    if (puStack_48 != (undefined *)0x0) {
      puVar6 = puStack_48;
    }
  }
  puStack_48 = puVar6;
  FUN_1016fa824(param_2);
  FUN_1016fc258();
  puVar6 = puStack_48;
  puVar3 = puStack_48;
  FUN_1016f2790(puStack_48);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar5 = puVar3;
  func_0x000107c5fc48(puVar3,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar3);
  func_0x000107c45788(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c57df0(param_1);
  func_0x000107c6142c(puVar6);
  func_0x000107c61170(puVar4);
  return param_1;
}



/* Entry: 1016fabdc; end: 1016fabfb;  */

undefined1  [16] FUN_1016fabdc(void)

{
  return ZEXT816(0x1103fc310);
}



/* Entry: 1016fabfc; end: 1016fac3b;  */

void FUN_1016fabfc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016fac3c; end: 1016fac5b;  */

void FUN_1016fac3c(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &UNK_1103fc388;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1103fc340;
  return;
}



/* Entry: 1016fac5c; end: 1016fae23;  */

undefined * FUN_1016fac5c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar9 = param_1;
  func_0x000107c4271c();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1016fae20);
    (*pcVar4)();
  }
  lVar5 = lVar9;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar9);
  uVar3 = (uint)(param_2 >> 0x20);
  uVar8 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar8 == 0) {
      uVar7 = param_2;
      func_0x00010006c090(lVar5);
      uVar2 = param_2 & 0xff000000000000;
      param_2 = uVar7;
      if (uVar2 == 0) {
        return (undefined *)0x0;
      }
    }
    else {
      func_0x00010006c090(lVar5);
      if ((long)(int)lVar5 == lVar5 >> 0x20) {
        return (undefined *)0x0;
      }
    }
  }
  else {
    if (uVar8 != 2) {
      func_0x00010006c090(lVar5);
      return (undefined *)0x0;
    }
    lVar9 = *(long *)(lVar5 + 0x10);
    lVar1 = *(long *)(lVar5 + 0x18);
    func_0x00010006c090(lVar5);
    if (lVar9 == lVar1) {
      return (undefined *)0x0;
    }
  }
  func_0x000107c42720();
  lVar9 = param_1;
  func_0x000107c4271c();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1016fae24);
    (*pcVar4)();
  }
  lVar5 = lVar9;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar9);
  puVar6 = PTR_PTR_1126aff98;
  func_0x000107c610f8(PTR_PTR_1126aff98);
  lVar9 = lVar5;
  func_0x000107c5ee20(lVar5,param_2);
  func_0x000107c47064(puVar6);
  func_0x000107c61170(lVar9);
  func_0x00010006c090(lVar5,param_2);
  func_0x000107c42718();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar5 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    lVar9 = lVar5;
    func_0x000107c5ee20(lVar5,param_2);
    func_0x00010006c090(lVar5,param_2);
  }
  func_0x000107c55938(puVar6);
  func_0x000107c61170(lVar9);
  return puVar6;
}



/* Entry: 1016fae24; end: 1016faeef;  */

undefined * FUN_1016fae24(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x000107c40500();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5faec();
    uVar2 = uVar2 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x000107c4a190(param_1);
      func_0x000107c6142c(param_2);
      puVar3 = PTR_PTR_1126aff90;
      func_0x000107c610f8(PTR_PTR_1126aff90);
      func_0x000107c49148();
      func_0x000107c61170(uVar1);
      FUN_1016fac5c();
      if (param_1 == 0) {
        return puVar3;
      }
      func_0x000107c54570(puVar3);
      func_0x000107c61170(param_1);
      return puVar3;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c61170(uVar1);
  }
  return (undefined *)0x0;
}



/* Entry: 1016faef0; end: 1016fb35f;  */

undefined * FUN_1016faef0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar2 = param_1;
  func_0x000107c5cda4();
  func_0x000107c2bb54();
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016fafe8);
    (*pcVar1)();
  }
  lVar4 = param_1;
  func_0x000107c3e19c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126d95b0;
    func_0x000107c610f8(PTR_PTR_1126d95b0);
    func_0x000107c48e1c();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    lVar2 = param_1;
    func_0x000107c44844();
    if ((int)lVar2 != 0) {
      func_0x000107c42790();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016faff8);
        (*pcVar1)();
      }
      lVar2 = param_1;
      FUN_1016fae24();
      func_0x000107c61170(param_1);
      func_0x000107c525e4(puVar5,param_2,lVar2);
      func_0x000107c61170(lVar2);
    }
    return puVar5;
  }
  func_0x000107c61170(lVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016faff4);
  (*pcVar1)();
}



/* Entry: 1016fb360; end: 1016fb8a7;  */

undefined * FUN_1016fb360(undefined *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  puVar10 = param_1;
  func_0x000107c44848();
  if ((int)puVar10 != 0) {
    puVar10 = param_1;
    func_0x000107c42794();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fb880);
      (*pcVar2)();
    }
    puVar3 = puVar10;
    FUN_1016fae24();
    func_0x000107c61170(puVar10);
    if (puVar3 != (undefined *)0x0) {
      puVar10 = param_1;
      func_0x000107c5cda4(param_1);
      func_0x000107c2bb54();
      func_0x000107c61180();
      puVar4 = param_1;
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fb884);
        (*pcVar2)();
      }
      puVar5 = param_1;
      func_0x000107c3e1a4();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c61170(puVar4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fb890);
        (*pcVar2)();
      }
      func_0x000107c61174(puVar3);
      puVar6 = param_1;
      func_0x000107c5bb48(param_1);
      func_0x000107c4a274(param_1);
      puVar7 = PTR_PTR_1126d95a8;
      func_0x000107c610f8(PTR_PTR_1126d95a8);
      func_0x000107c48e20((double)((ulong)puVar6 & 0xffffffff));
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      uVar11 = 0x112d38c88;
      FUN_1016fbc54(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar10 = param_1;
      func_0x000107c49d1c(param_1);
      func_0x000107c6010c();
      func_0x000107c5563c(puVar7);
      func_0x000107c61170(puVar10);
      puVar10 = param_1;
      func_0x000107c4a624(param_1);
      func_0x000107c6010c();
      func_0x000107c55898(puVar7);
      func_0x000107c61170(puVar10);
      puVar10 = param_1;
      func_0x000107c44844();
      if ((int)puVar10 != 0) {
        puVar10 = param_1;
        func_0x000107c42790();
        func_0x000107c61180();
        if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fb89c);
          (*pcVar2)();
        }
        puVar4 = puVar10;
        FUN_1016fae24();
        func_0x000107c61170(puVar10);
        func_0x000107c525e4(puVar7);
        func_0x000107c61170(puVar4);
      }
      puVar10 = param_1;
      func_0x000107c447cc();
      if ((int)puVar10 != 0) {
        puVar10 = param_1;
        func_0x000107c404d4();
        func_0x000107c61180();
        if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fb8a0);
          (*pcVar2)();
        }
        puVar4 = puVar10;
        func_0x000107c41214();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        if (puVar4 != (undefined *)0x0) {
          puVar10 = puVar4;
          func_0x000107c5ee30(puVar4);
          func_0x000107c61170(puVar4);
          puVar4 = puVar10;
          func_0x000107c5ee20(puVar10,uVar11);
          func_0x00010006c090(puVar10);
        }
        func_0x000107c54538(puVar7);
        func_0x000107c61170(puVar4);
      }
      puVar10 = param_1;
      func_0x000107c4a760();
      func_0x000107c61180();
      if (puVar10 != (undefined *)0x0) {
        puVar4 = puVar10;
        func_0x000107c5faec();
        uVar12 = uVar11;
        func_0x000107c61170(puVar10);
        func_0x000107c6142c(uVar11);
        uVar1 = (ulong)puVar4 & 0xffffffffffff;
        if ((uVar11 & 0x2000000000000000) != 0) {
          uVar1 = uVar11 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          puVar10 = param_1;
          func_0x000107c4a760(param_1);
          func_0x000107c61180();
          func_0x000107c558fc(puVar7);
          func_0x000107c61170(puVar10);
        }
        puVar10 = param_1;
        func_0x000107c42ccc();
        func_0x000107c61180();
        if (puVar10 != (undefined *)0x0) {
          puVar4 = puVar10;
          func_0x000107c5faec();
          func_0x000107c61170(puVar10);
          func_0x000107c6142c(uVar12);
          uVar11 = (ulong)puVar4 & 0xffffffffffff;
          if ((uVar12 & 0x2000000000000000) != 0) {
            uVar11 = uVar12 >> 0x38 & 0xf;
          }
          if (uVar11 != 0) {
            puVar10 = param_1;
            func_0x000107c42ccc(param_1);
            func_0x000107c61180();
            func_0x000107c5481c(puVar7);
            func_0x000107c61170(puVar10);
          }
          puVar10 = param_1;
          func_0x000107c44a84();
          if ((int)puVar10 != 0) {
            puVar10 = param_1;
            func_0x000107c4fd3c();
            func_0x000107c61180();
            if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fb8a4);
              (*pcVar2)();
            }
            puVar4 = puVar10;
            FUN_1016faef0();
            func_0x000107c61170(puVar10);
            func_0x000107c57c74(puVar7);
            func_0x000107c61170(puVar4);
          }
          puVar10 = param_1;
          func_0x000107c44b68();
          if ((int)puVar10 == 0) {
            puVar10 = (undefined *)0x0;
          }
          else {
            puVar4 = param_1;
            func_0x000107c5c384();
            func_0x000107c61180();
            if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fb8a8);
              (*pcVar2)();
            }
            puVar10 = puVar4;
            func_0x0001016faff8();
            func_0x000107c61170(puVar4);
          }
          puVar4 = param_1;
          func_0x000107c42388();
          puVar5 = puVar10;
          if (puVar4 != (undefined *)0x0) {
            func_0x000107c42388(param_1);
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c490d8();
            func_0x000107c5436c(puVar7);
            func_0x000107c61170(puVar4);
            func_0x000107c42388();
            if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fb87c);
              (*pcVar2)();
            }
            lVar8 = 0x112d36008;
            func_0x0001000285a8(0x112d36008,&UNK_10d900720);
            func_0x000107c613fc();
            *(undefined8 *)(lVar8 + 0x18) = 4;
            *(undefined8 *)(lVar8 + 0x10) = 2;
            puVar6 = PTR___sSis7CVarArgsWP_11034df08;
            puVar4 = PTR___sSiN_11034deb0;
            *(undefined **)(lVar8 + 0x38) = PTR___sSiN_11034deb0;
            *(undefined **)(lVar8 + 0x40) = puVar6;
            *(ulong *)(lVar8 + 0x20) = (ulong)param_1 / 0x3c;
            *(undefined **)(lVar8 + 0x60) = puVar4;
            *(undefined **)(lVar8 + 0x68) = puVar6;
            *(ulong *)(lVar8 + 0x48) = (ulong)param_1 % 0x3c;
            uVar9 = 0x643230253a6425;
            uVar13 = 0xe700000000000000;
            func_0x000107c5fb00(0x643230253a6425,0xe700000000000000,lVar8);
            if (puVar10 == (undefined *)0x0) {
              puVar5 = PTR_PTR_1126b3040;
              func_0x000107c610f8(PTR_PTR_1126b3040);
              func_0x000107c453e4();
              puVar10 = (undefined *)0x0;
            }
            func_0x000107c61174(puVar10);
            func_0x000107c5fadc(uVar9,uVar13);
            func_0x000107c6142c(uVar13);
            func_0x000107c54374(puVar5);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(uVar9);
          }
          func_0x000107c59a88(puVar7);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar3);
          return puVar7;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fb898);
        (*pcVar2)();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016fb894);
      (*pcVar2)();
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1016fb8a8; end: 1016fbc33;  */

undefined * FUN_1016fb8a8(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_70;
  
  FUN_1016fb360();
  if (param_1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126b2ee8;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c5ee20(param_2);
    func_0x000107c48e00(0);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    if (param_4 != (undefined *)0x0) {
      puVar14 = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
      if ((ulong)param_4 >> 0x3e == 0) {
        puVar13 = *(undefined **)(puVar14 + 0x10);
      }
      else {
        puVar13 = param_4;
        if (-1 < (long)param_4) {
          puVar13 = puVar14;
        }
        func_0x000107c60480();
      }
      if (puVar13 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          while( true ) {
            if (((ulong)param_4 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar14 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1016fbbc8);
                (*pcVar3)();
              }
              puVar4 = *(undefined **)(param_4 + (long)puVar9 * 8 + 0x20);
              func_0x000107c61174();
              puVar8 = param_3;
            }
            else {
              puVar4 = puVar9;
              puVar8 = param_4;
              func_0x0001016f0394();
            }
            puVar1 = puVar9 + 1;
            if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1016fbbc4);
              (*pcVar3)();
            }
            puVar5 = puVar4;
            func_0x000107c44724();
            param_3 = puVar8;
            if ((int)puVar5 != 0) break;
LAB_1016fb984:
            func_0x000107c61170(puVar4);
            puVar9 = puVar9 + 1;
            if (puVar1 == puVar13) goto LAB_1016fbb5c;
          }
          puVar5 = puVar4;
          func_0x000107c3e1a0();
          func_0x000107c61180();
          param_3 = puVar8;
          if (puVar5 == (undefined *)0x0) goto LAB_1016fb984;
          puVar6 = puVar5;
          func_0x000107c4f60c();
          func_0x000107c61180();
          if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1016fbc30);
            (*pcVar3)();
          }
          puVar7 = puVar6;
          func_0x000107c5faec();
          param_3 = puVar8;
          func_0x000107c61170(puVar6);
          func_0x000107c6142c(puVar8);
          uVar2 = (ulong)puVar7 & 0xffffffffffff;
          if (((ulong)puVar8 & 0x2000000000000000) != 0) {
            uVar2 = (ulong)puVar8 >> 0x38 & 0xf;
          }
          if (uVar2 == 0) {
            func_0x000107c61170(puVar5);
            goto LAB_1016fb984;
          }
          puVar9 = puVar5;
          func_0x000107c4f60c();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1016fbc34);
            (*pcVar3)();
          }
          puVar8 = PTR_PTR_1126a79c0;
          func_0x000107c610f8();
          func_0x000107c481cc();
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar4);
          puVar9 = puStack_70;
          func_0x000107c61550();
          if ((((int)puVar9 == 0) || ((long)puStack_70 < 0)) ||
             (((ulong)puStack_70 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_70 >> 0x3e == 0) {
              param_3 = *(undefined **)(((ulong)puStack_70 & 0xffffffffffffff8) + 0x10);
            }
            else {
              param_3 = (undefined *)((ulong)puStack_70 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_70) {
                param_3 = puStack_70;
              }
              func_0x000107c60480();
            }
            param_3 = param_3 + 1;
            puVar9 = (undefined *)0x0;
            FUN_1016e76e4(0,param_3,1,puStack_70);
            puStack_70 = puVar9;
          }
          uVar11 = (ulong)puStack_70 & 0xffffffffffffff8;
          uVar2 = *(ulong *)(uVar11 + 0x10);
          puVar9 = (undefined *)(uVar2 + 1);
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
            puVar4 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
            param_3 = puVar9;
            FUN_1016e76e4(puVar4,puVar9,1,puStack_70);
            uVar11 = (ulong)puVar4 & 0xffffffffffffff8;
            puStack_70 = puVar4;
          }
          *(undefined **)(uVar11 + 0x10) = puVar9;
          *(undefined **)(uVar11 + uVar2 * 8 + 0x20) = puVar8;
          puVar9 = puVar1;
        } while (puVar1 != puVar13);
LAB_1016fbb5c:
        if ((ulong)puStack_70 >> 0x3e == 0) {
          puVar14 = *(undefined **)(((ulong)puStack_70 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar14 = (undefined *)((ulong)puStack_70 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_70) {
            puVar14 = puStack_70;
          }
          func_0x000107c60480();
        }
        if (puVar14 == (undefined *)0x0) {
          func_0x000107c6142c(puStack_70);
        }
        else {
          uVar10 = 0;
          FUN_1016fbc54(0,0x112dc2b58,&PTR_PTR_1126a79c0);
          puVar14 = puStack_70;
          func_0x000107c5fc48(puStack_70,uVar10);
          func_0x000107c6142c(puStack_70);
          func_0x000107c52908(puVar12);
          func_0x000107c61170(puVar14);
        }
      }
    }
    func_0x000107c61170(param_1);
  }
  return puVar12;
}



/* Entry: 1016fbc34; end: 1016fbc53;  */

undefined1  [16] FUN_1016fbc34(void)

{
  return ZEXT816(0x1103fc368);
}



/* Entry: 1016fbc54; end: 1016fbc93;  */

void FUN_1016fbc54(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016fbc94; end: 1016fbcd3;  */

void FUN_1016fbc94(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &UNK_1103fc3e0;
  param_1[4] = &PTR_DAT_1103fc3a0;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016fbcd4; end: 1016fbe63;  */

void FUN_1016fbcd4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x70);
  puVar2 = PTR_PTR_1126a7a30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x80) = puVar2;
  if (lVar7 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    param_2 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c5fadc(uVar3);
    func_0x000107c53a20(puVar2);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c56354(puVar2);
  puVar4 = puVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    *(undefined **)(unaff_x22 + 0x88) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x90) = param_2;
    func_0x000100083b20(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar7 = *(long *)(unaff_x22 + 0x60);
    func_0x0001000a8868(unaff_x22 + 0x40,uVar3);
    func_0x00010006c00c(puVar2,param_2);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1016f04e0();
    *(undefined8 *)(unaff_x22 + 0x10) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x800000010efb8840;
    *(undefined **)(unaff_x22 + 0x20) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x28) = param_2;
    *(undefined1 *)(unaff_x22 + 0x30) = 1;
    *(undefined **)(unaff_x22 + 0x38) = puVar4;
    piVar6 = *(int **)(lVar7 + 0x10);
    iVar1 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1016fbe64;
                    /* WARNING: Could not recover jumptable at 0x0001016fbe34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))(plVar5,unaff_x22 + 0x10,0,0,0,uVar3,lVar7);
    return;
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016fbe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016fbe64; end: 1016fbecf;  */

void FUN_1016fbe64(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xa0) = param_1;
  *(undefined8 *)(lVar2 + 0xa8) = param_2;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  FUN_1016e8b44(lVar2 + 0x10);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1016fbed0;
  }
  else {
    pcVar1 = FUN_1016fc074;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1016fbed0; end: 1016fc073;  */

void FUN_1016fbed0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined *apuStack_58 [2];
  
  uVar1 = *(ulong *)(unaff_x22 + 0xa8);
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  lVar9 = *(long *)(unaff_x22 + 0xa0);
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c610f8(PTR_PTR_1126a7a38);
  FUN_1016e8bc0(lVar9,uVar1);
  lVar4 = lVar9;
  FUN_1016fc178(lVar9,uVar1 & 0xdfffffffffffffff);
  func_0x0001016e8bc8(lVar9,uVar1);
  if (lVar5 == 0) {
    lVar5 = lVar4;
    func_0x000107c42944();
    func_0x000107c61180();
    if (lVar5 == 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
      func_0x000107c61170(lVar4);
      func_0x0001016e8bc8(uVar2,uVar3);
      func_0x000107c61170(uVar8);
    }
    else {
      apuStack_58[0] = (undefined *)0x0;
      uVar6 = 0;
      func_0x0001012122bc(0);
      func_0x000107c5fc50(lVar5,apuStack_58,uVar6);
      func_0x000107c61170(lVar5);
      puVar7 = apuStack_58[0];
      uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
      if (apuStack_58[0] != (undefined *)0x0) {
        func_0x00010006c090(uVar6,uVar10);
        func_0x000107c61170(lVar4);
        func_0x0001016e8bc8(uVar2,uVar3);
        func_0x000107c61170(uVar8);
        goto LAB_1016fc054;
      }
      func_0x000107c61170(lVar4);
      func_0x0001016e8bc8(uVar2,uVar3);
      func_0x000107c61170(uVar8);
    }
    func_0x00010006c090(uVar6,uVar10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90));
    func_0x000107c61170(uVar10);
    func_0x0001016e8bc8(uVar6,uVar2);
    func_0x000107c614ac(lVar5);
    puVar7 = (undefined *)0x0;
  }
LAB_1016fc054:
                    /* WARNING: Could not recover jumptable at 0x0001016fc070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar7);
  return;
}



/* Entry: 1016fc074; end: 1016fc0c7;  */

void FUN_1016fc074(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016fc0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016fc0c8; end: 1016fc133;  */

void FUN_1016fc0c8(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016fc134;
  plVar1[0xe] = param_2;
  plVar1[0xf] = lVar2;
  *(undefined4 *)(plVar1 + 0x17) = param_3;
  plVar1[0xd] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016fbcd4,0,0);
  return;
}



/* Entry: 1016fc134; end: 1016fc177;  */

void FUN_1016fc134(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016fc174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1016fc178; end: 1016fc237;  */

undefined1  [16] FUN_1016fc178(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = unaff_x20;
    return auVar3;
  }
  func_0x000107c60e78();
  return ZEXT816(0x1103fc3c0);
}



/* Entry: 1016fc238; end: 1016fc257;  */

undefined1  [16] FUN_1016fc238(void)

{
  return ZEXT816(0x1103fc3c0);
}



/* Entry: 1016fc258; end: 1016fc453;  */

void FUN_1016fc258(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_1016fd844(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1016fd8f4(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016fc340);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016fc344);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016fc33c);
  (*pcVar1)();
}



/* Entry: 1016fc454; end: 1016fc48f;  */

/* WARNING: Possible PIC construction at 0x0001016fc47c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016fc480) */

void FUN_1016fc454(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = &UNK_1103fc538;
  param_1[4] = &PTR_DAT_1103fc478;
  *param_1 = uVar2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016fc490; end: 1016fc52b;  */

void FUN_1016fc490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1016ffa28;
                    /* WARNING: Could not recover jumptable at 0x0001016fc528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016fda5c(param_1,param_2,param_3,param_4,param_5,param_7);
  return;
}



/* Entry: 1016fc52c; end: 1016fc6ff;  */

undefined8
FUN_1016fc52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long alStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar5 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&uStack_80 + lVar1;
  func_0x0001000285a8(0x112d7a640,&UNK_10d939e90);
  func_0x000107c613fc();
  lVar6 = 0;
  func_0x00010095c380();
  (**(code **)(lVar12 + 0x10))(lVar14,param_1,lVar5);
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar7 = &UNK_1103fc438;
  func_0x000107c613fc(&UNK_1103fc438,uVar11 + 0x20,uVar9 | 7);
  *(long *)(puVar7 + 0x10) = lVar6;
  *(undefined8 *)(puVar7 + 0x18) = param_6;
  *(undefined8 *)(puVar7 + 0x20) = param_7;
  (**(code **)(lVar12 + 0x20))(puVar7 + uVar13,lVar14,lVar5);
  uVar4 = uStack_68;
  uVar3 = uStack_70;
  uVar2 = uStack_78;
  uVar8 = uStack_80;
  *(undefined8 *)(puVar7 + uVar11) = uStack_80;
  *(undefined8 *)((long)(puVar7 + uVar11) + 8) = uStack_78;
  *(undefined8 *)(puVar7 + uVar11 + 0x10) = uStack_70;
  *(undefined8 *)((long)(puVar7 + uVar11 + 0x10) + 8) = uStack_68;
  func_0x000107c6157c(lVar6);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000100de78a0(uVar8,uVar2);
  func_0x000100de78a0(uVar3,uVar4);
  *(undefined **)((long)alStack_90 + lVar1) = PTR___sytN_11034f1b0 + 8;
  uVar8 = 1;
  func_0x0001001ca524(1,3,0x50,4,0,0,&UNK_10d980768,puVar7);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar8);
  uVar8 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(lVar6);
  return uVar8;
}



/* Entry: 1016fc700; end: 1016fc79f;  */

void FUN_1016fc700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016fc7a0;
                    /* WARNING: Could not recover jumptable at 0x0001016fc79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016fda5c(param_5,param_6,param_7,param_8,param_9,param_4);
  return;
}



/* Entry: 1016fc7a0; end: 1016fc7ef;  */

void FUN_1016fc7a0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016fc7f0,0,0);
  return;
}



/* Entry: 1016fc7f0; end: 1016fc833;  */

void FUN_1016fc7f0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000100b60084();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016fc830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016fc834; end: 1016fc8db;  */

void FUN_1016fc834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1016ffa2c;
                    /* WARNING: Could not recover jumptable at 0x0001016fc8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1016fe0ec)(param_1,param_2,param_3,param_4,param_5,param_6,param_8);
  return;
}



/* Entry: 1016fc8dc; end: 1016fcacf;  */

undefined8
FUN_1016fc8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long alStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = 0;
  uStack_98 = param_7;
  uStack_90 = param_8;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_6;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar7 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar12 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112dc32c0,&UNK_10d980780);
  func_0x000107c613fc();
  lVar8 = 0;
  func_0x00010095c380();
  (**(code **)(lVar14 + 0x10))(auStack_a0 + lVar1,param_1,lVar7);
  uVar11 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar15 = uVar11 + 0x28 & (uVar11 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar9 = &UNK_1103fc460;
  func_0x000107c613fc(&UNK_1103fc460,uVar13 + 0x28,uVar11 | 7);
  uVar10 = uStack_90;
  *(long *)(puVar9 + 0x10) = lVar8;
  *(undefined8 *)(puVar9 + 0x18) = param_7;
  *(undefined8 *)(puVar9 + 0x20) = uStack_90;
  (**(code **)(lVar14 + 0x20))(puVar9 + uVar15,auStack_a0 + lVar1,lVar7);
  uVar6 = uStack_68;
  uVar5 = uStack_70;
  uVar4 = uStack_78;
  uVar3 = uStack_80;
  uVar2 = uStack_88;
  *(undefined8 *)(puVar9 + uVar13) = uStack_88;
  *(undefined8 *)((long)(puVar9 + uVar13) + 8) = uStack_80;
  *(undefined8 *)(puVar9 + uVar13 + 0x10) = uStack_78;
  *(undefined8 *)((long)(puVar9 + uVar13 + 0x10) + 8) = uStack_70;
  *(undefined8 *)(puVar9 + uVar13 + 0x20) = uStack_68;
  func_0x000107c6157c(lVar8);
  func_0x000107c6157c(uStack_98);
  func_0x000107c6157c(uVar10);
  func_0x000100de78a0(uVar2,uVar3);
  func_0x000100de78a0(uVar4,uVar5);
  func_0x000107c61174(uVar6);
  *(undefined **)((long)alStack_b0 + lVar1) = PTR___sytN_11034f1b0 + 8;
  uVar10 = 1;
  func_0x0001001ca524(1,3,0x50,4,0,0,&UNK_10d980790,puVar9);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar10);
  uVar10 = *(undefined8 *)(lVar8 + 0x10);
  func_0x000107c6157c(uVar10);
  func_0x000107c61574(lVar8);
  return uVar10;
}



/* Entry: 1016fcad0; end: 1016fcb77;  */

void FUN_1016fcad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016fcb78;
                    /* WARNING: Could not recover jumptable at 0x0001016fcb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1016fe0ec)(param_5,param_6,param_7,param_8,param_9,param_10,param_4);
  return;
}



/* Entry: 1016fcb78; end: 1016fcbc7;  */

void FUN_1016fcb78(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ffa18,0,0);
  return;
}



/* Entry: 1016fcbc8; end: 1016fcc33;  */

void FUN_1016fcbc8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1016ffa1c;
                    /* WARNING: Could not recover jumptable at 0x0001016fcc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016ff1f4(param_1,param_2);
  return;
}



/* Entry: 1016fcc34; end: 1016fce7b;  */

void FUN_1016fcc34(ulong *param_1,undefined4 param_2,long *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined *puStack_68;
  
  lVar12 = *param_3;
  lVar4 = lVar12;
  func_0x000107c5c5d8();
  func_0x000107c61180();
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = puVar11;
  if (lVar4 != 0) {
    puStack_68 = (undefined *)0x0;
    uVar5 = 0;
    func_0x0001016ff9d8(0,0x112dc2f20,&PTR_PTR_1126a79e8);
    func_0x000107c5fc50(lVar4,&puStack_68,uVar5);
    func_0x000107c61170(lVar4);
    if (puStack_68 != (undefined *)0x0) {
      puVar2 = puStack_68;
    }
  }
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar2) {
      puVar14 = puVar2;
    }
    func_0x000107c60480();
  }
  if (puVar14 == (undefined *)0x0) {
    func_0x000107c6142c(puVar2);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = puVar11;
    puVar9 = (undefined *)((ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x0001016e79f8(0,puVar9,0);
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016fce78);
      (*pcVar3)();
    }
    puVar13 = (undefined *)0x0;
    do {
      puVar11 = puStack_68;
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10) <= (long)puVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1016fce74);
          (*pcVar3)();
        }
        puVar6 = *(undefined **)(puVar2 + (long)puVar13 * 8 + 0x20);
        func_0x000107c61174();
        puVar10 = puVar9;
        uVar15 = param_2;
      }
      else {
        puVar6 = puVar13;
        puVar10 = puVar2;
        func_0x0001016f03bc();
        uVar15 = param_2;
      }
      puVar7 = puVar6;
      func_0x000107c5c5a4();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016fce7c);
        (*pcVar3)();
      }
      puVar8 = puVar7;
      func_0x000107c5faec();
      puVar9 = puVar10;
      func_0x000107c61170(puVar7);
      func_0x000107c4db10(puVar6);
      param_2 = uVar15;
      func_0x000107c61170(puVar6);
      uVar1 = *(ulong *)(puVar11 + 0x10);
      puVar6 = (undefined *)(uVar1 + 1);
      puStack_68 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        puVar9 = puVar6;
        func_0x0001016e79f8(1 < *(ulong *)(puVar11 + 0x18),puVar6,1);
      }
      puVar11 = puStack_68;
      puVar13 = puVar13 + 1;
      *(undefined **)(puStack_68 + 0x10) = puVar6;
      *(undefined **)(puStack_68 + uVar1 * 0x18 + 0x20) = puVar8;
      *(undefined **)(puStack_68 + uVar1 * 0x18 + 0x28) = puVar10;
      *(undefined4 *)(puStack_68 + uVar1 * 0x18 + 0x30) = uVar15;
    } while (puVar14 != puVar13);
    func_0x000107c6142c(puVar2);
  }
  func_0x000107c4db10(lVar12);
  uVar15 = param_2;
  func_0x000107c4db14(lVar12);
  *param_1 = (ulong)puVar11;
  param_1[1] = CONCAT44(uVar15,param_2);
  return;
}



/* Entry: 1016fce7c; end: 1016fceeb;  */

void FUN_1016fce7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016fceec;
                    /* WARNING: Could not recover jumptable at 0x0001016fcee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016ff1f4(param_5,param_3);
  return;
}



/* Entry: 1016fceec; end: 1016fcf3f;  */

void FUN_1016fceec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined8 *)(lVar1 + 0x40) = param_2;
  *(undefined8 *)(lVar1 + 0x48) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016fcf40,0,0);
  return;
}



/* Entry: 1016fcf40; end: 1016fcf93;  */

void FUN_1016fcf40(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x38);
  *(int *)(unaff_x22 + 0x20) = (int)*(undefined8 *)(unaff_x22 + 0x48);
  *(char *)(unaff_x22 + 0x24) = (char)((ulong)*(undefined8 *)(unaff_x22 + 0x48) >> 0x20);
  func_0x000100b60084();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016fcf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016fcf94; end: 1016fd02f;  */

void FUN_1016fcf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 8);
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1016ffa30;
                    /* WARNING: Could not recover jumptable at 0x0001016fd02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016fda5c(param_1,param_2,param_3,param_4,param_5,uVar2);
  return;
}



/* Entry: 1016fd030; end: 1016fd037;  */

undefined8
FUN_1016fd030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *unaff_x20;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long alStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar10 = *unaff_x20;
  uVar1 = unaff_x20[1];
  lVar7 = 0;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar7 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = -(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&uStack_80 + lVar2;
  func_0x0001000285a8(0x112d7a640,&UNK_10d939e90);
  func_0x000107c613fc();
  lVar8 = 0;
  func_0x00010095c380();
  (**(code **)(lVar14 + 0x10))(lVar16,param_1,lVar7);
  uVar11 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar15 = uVar11 + 0x28 & (uVar11 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar9 = &UNK_1103fc438;
  func_0x000107c613fc(&UNK_1103fc438,uVar13 + 0x20,uVar11 | 7);
  *(long *)(puVar9 + 0x10) = lVar8;
  *(undefined8 *)(puVar9 + 0x18) = uVar10;
  *(undefined8 *)(puVar9 + 0x20) = uVar1;
  (**(code **)(lVar14 + 0x20))(puVar9 + uVar15,lVar16,lVar7);
  uVar6 = uStack_68;
  uVar5 = uStack_70;
  uVar4 = uStack_78;
  uVar3 = uStack_80;
  *(undefined8 *)(puVar9 + uVar13) = uStack_80;
  *(undefined8 *)((long)(puVar9 + uVar13) + 8) = uStack_78;
  *(undefined8 *)(puVar9 + uVar13 + 0x10) = uStack_70;
  *(undefined8 *)((long)(puVar9 + uVar13 + 0x10) + 8) = uStack_68;
  func_0x000107c6157c(lVar8);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000100de78a0(uVar3,uVar4);
  func_0x000100de78a0(uVar5,uVar6);
  *(undefined **)((long)alStack_90 + lVar2) = PTR___sytN_11034f1b0 + 8;
  uVar10 = 1;
  func_0x0001001ca524(1,3,0x50,4,0,0,&UNK_10d980768,puVar9);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar10);
  uVar10 = *(undefined8 *)(lVar8 + 0x10);
  func_0x000107c6157c(uVar10);
  func_0x000107c61574(lVar8);
  return uVar10;
}



/* Entry: 1016fd038; end: 1016fd0df;  */

void FUN_1016fd038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 8);
  plVar1 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016fd0e0;
                    /* WARNING: Could not recover jumptable at 0x0001016fd0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1016fe0ec)(param_1,param_2,param_3,param_4,param_5,param_6,uVar2);
  return;
}



/* Entry: 1016fd0e0; end: 1016fd123;  */

void FUN_1016fd0e0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016fd120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1016fd124; end: 1016fd12b;  */

undefined8
FUN_1016fd124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long alStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar10 = *unaff_x20;
  uStack_90 = unaff_x20[1];
  lVar7 = 0;
  uStack_98 = uVar10;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_6;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar7 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar12 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112dc32c0,&UNK_10d980780);
  func_0x000107c613fc();
  lVar8 = 0;
  func_0x00010095c380();
  (**(code **)(lVar14 + 0x10))(auStack_a0 + lVar1,param_1,lVar7);
  uVar11 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar15 = uVar11 + 0x28 & (uVar11 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar9 = &UNK_1103fc460;
  func_0x000107c613fc(&UNK_1103fc460,uVar13 + 0x28,uVar11 | 7);
  uVar2 = uStack_90;
  *(long *)(puVar9 + 0x10) = lVar8;
  *(undefined8 *)(puVar9 + 0x18) = uVar10;
  *(undefined8 *)(puVar9 + 0x20) = uStack_90;
  (**(code **)(lVar14 + 0x20))(puVar9 + uVar15,auStack_a0 + lVar1,lVar7);
  uVar6 = uStack_68;
  uVar5 = uStack_70;
  uVar4 = uStack_78;
  uVar3 = uStack_80;
  uVar10 = uStack_88;
  *(undefined8 *)(puVar9 + uVar13) = uStack_88;
  *(undefined8 *)((long)(puVar9 + uVar13) + 8) = uStack_80;
  *(undefined8 *)(puVar9 + uVar13 + 0x10) = uStack_78;
  *(undefined8 *)((long)(puVar9 + uVar13 + 0x10) + 8) = uStack_70;
  *(undefined8 *)(puVar9 + uVar13 + 0x20) = uStack_68;
  func_0x000107c6157c(lVar8);
  func_0x000107c6157c(uStack_98);
  func_0x000107c6157c(uVar2);
  func_0x000100de78a0(uVar10,uVar3);
  func_0x000100de78a0(uVar4,uVar5);
  func_0x000107c61174(uVar6);
  *(undefined **)((long)alStack_b0 + lVar1) = PTR___sytN_11034f1b0 + 8;
  uVar10 = 1;
  func_0x0001001ca524(1,3,0x50,4,0,0,&UNK_10d980790,puVar9);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar10);
  uVar10 = *(undefined8 *)(lVar8 + 0x10);
  func_0x000107c6157c(uVar10);
  func_0x000107c61574(lVar8);
  return uVar10;
}



/* Entry: 1016fd12c; end: 1016fd197;  */

void FUN_1016fd12c(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016fd198;
                    /* WARNING: Could not recover jumptable at 0x0001016fd194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016ff1f4(param_1,uVar2);
  return;
}



/* Entry: 1016fd198; end: 1016fd1f3;  */

void FUN_1016fd198(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016fd1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3 & 0xffffffffff);
  return;
}



/* Entry: 1016fd1f4; end: 1016fd2f7;  */

undefined8 FUN_1016fd1f4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar4 = *unaff_x20;
  uVar1 = unaff_x20[1];
  func_0x0001000285a8(0x112dc32c8,&UNK_10d9807a8);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  puVar3 = &UNK_1103fc580;
  func_0x000107c613fc(&UNK_1103fc580,0x30,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  uVar4 = 1;
  func_0x0001001ca524(1,3,0x50,4,0,0,&UNK_10d9808a0,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar2);
  return uVar4;
}



/* Entry: 1016fd2f8; end: 1016fd363;  */

void FUN_1016fd2f8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1016ff878();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1016fd364; end: 1016fd51f; -[_TtC19SCMusicServicesImpl25MusicTrackAssetLoaderImpl loadLyricStickerData:stickerType:encryptionKey:encryptionIv:] */

void FUN_1016fd364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar5,param_3);
  if (param_5 == 0) {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_6);
    func_0x000107c6157c(param_1);
    uVar1 = 0xf000000000000000;
    uVar6 = param_2;
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_6);
    func_0x000107c6157c(param_1);
    lVar2 = param_5;
    func_0x000107c61174(param_5);
    func_0x000107c5ee30(param_5);
    uVar6 = param_2;
    func_0x000107c61170(lVar2);
    uVar1 = param_2;
  }
  if (param_6 == 0) {
    lVar2 = 0;
    uVar6 = 0xf000000000000000;
  }
  else {
    lVar2 = param_6;
    func_0x000107c5ee30(param_6);
    func_0x000107c61170(param_6);
  }
  func_0x000100083b20(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  puVar3 = puVar5;
  (**(code **)(lStack_68 + 0x20))(puVar5,param_5,uVar1,lVar2,uVar6,param_4,uStack_70,lStack_68);
  puVar4 = puVar3;
  func_0x00010488b298();
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar3);
  func_0x0001000b44c0(lVar2,uVar6);
  func_0x0001000b44c0(param_5,uVar1);
  func_0x000107c61170(param_4);
  (**(code **)(lStack_98 + 8))(puVar5,lStack_90);
  func_0x0001000834e4(auStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1016fd520; end: 1016fd5ab;  */

void FUN_1016fd520(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined1 *)((long)param_2 + 0x14);
    uVar3 = *param_2;
    uVar4 = *(undefined4 *)(param_2 + 2);
    func_0x000103fcc318(0);
    func_0x000107c610f8();
    func_0x000107c61434(lVar2);
    func_0x000103fcac18(uVar4,uVar3,lVar2,uVar1);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 1016fd5ac; end: 1016fd683; -[_TtC19SCMusicServicesImpl25MusicTrackAssetLoaderImpl loadLyricData:] */

void FUN_1016fd5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c6157c();
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x30))(param_3,uStack_50,lStack_48);
  uVar1 = 0x112dc32d8;
  func_0x0001000285a8(0x112dc32d8,&UNK_10d9807c8);
  uVar2 = 0;
  func_0x000100775264(0,1,FUN_1016fd520,0,uVar1);
  func_0x000107c61574(param_3);
  puVar3 = auStack_68;
  func_0x0001000834e4(puVar3);
  func_0x00010488b298();
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1016fd684; end: 1016fd81f; -[_TtC19SCMusicServicesImpl25MusicTrackAssetLoaderImpl loadAlbumArt:encryptionKey:encryptionIv:] */

void FUN_1016fd684(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar6 = auStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5edb4(puVar6,param_3);
  if (param_4 == 0) {
    func_0x000107c61174(param_5);
    func_0x000107c6157c(param_1);
    uVar1 = 0xf000000000000000;
    uVar7 = param_2;
  }
  else {
    func_0x000107c61174(param_5);
    func_0x000107c6157c(param_1);
    lVar2 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    uVar7 = param_2;
    func_0x000107c61170(lVar2);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    lVar2 = 0;
    uVar7 = 0xf000000000000000;
  }
  else {
    lVar2 = param_5;
    func_0x000107c5ee30(param_5);
    func_0x000107c61170(param_5);
  }
  func_0x000100083b20(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  puVar3 = puVar6;
  (**(code **)(lStack_68 + 0x10))(puVar6,param_4,uVar1,lVar2,uVar7,uStack_70,lStack_68);
  puVar4 = puVar3;
  func_0x00010488b298();
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar3);
  func_0x0001000b44c0(lVar2,uVar7);
  func_0x0001000b44c0(param_4,uVar1);
  (**(code **)(lVar5 + 8))(puVar6,lStack_90);
  func_0x0001000834e4(auStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1016fd820; end: 1016fd843;  */

void FUN_1016fd820(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016fd844; end: 1016fd8f3;  */

void FUN_1016fd844(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_1016e71a4();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1016fd8f4; end: 1016fda5b;  */

ulong FUN_1016fd8f4(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016fda5c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016fda50);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x0001016ff9d8(0,0x112dc2b68,&PTR_PTR_1126bfdb0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016fda54);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016fda58);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_1016f01b0(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1016fda5c; end: 1016fda7b;  */

void FUN_1016fda5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016fda7c,0,0);
  return;
}



/* Entry: 1016fda7c; end: 1016fdc0f;  */

void FUN_1016fda7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x48);
  lVar7 = *(long *)(unaff_x22 + 0x48);
  lVar1 = lVar7;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x80) = lVar7;
  func_0x000107c61170(lVar1);
  if (lVar7 != 0) {
    lVar1 = lVar7;
    func_0x000107c614f0();
    lVar3 = lVar1;
    func_0x000107c5ed70();
    *(long *)(unaff_x22 + 0x10) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x18) = param_2;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x736568637261;
    *(undefined8 *)(unaff_x22 + 0x28) = 0xe600000000000000;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x6567616d69;
    *(undefined8 *)(unaff_x22 + 0x38) = 0xe500000000000000;
    *(undefined8 *)(unaff_x22 + 0x40) = 2;
    plVar4 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1016fdc10;
    plVar4[0xc] = lVar1;
    plVar4[0xd] = lVar7;
    plVar4[0xb] = unaff_x22 + 0x10;
    lVar1 = 0;
    func_0x000107c5eea4();
    plVar4[0xe] = lVar1;
    lVar1 = *(long *)(lVar1 + -8);
    plVar4[0xf] = lVar1;
    uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x10] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1016eb99c,0,0);
    return;
  }
  func_0x000107c602fc(0x2a);
  func_0x000107c6142c(0xe000000000000000);
  uVar5 = 0;
  func_0x000107c5ede0(0);
  uVar6 = uVar5;
  func_0x000100f15b10();
  func_0x000107c6057c(uVar5,uVar6);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(0x800000010efb8c50);
                    /* WARNING: Could not recover jumptable at 0x0001016fdc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016fdc10; end: 1016fdc6f;  */

void FUN_1016fdc10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x80);
  *(undefined8 *)(lVar2 + 0x90) = param_1;
  *(undefined8 *)(lVar2 + 0x98) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  FUN_1016f5da8(lVar2 + 0x10);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016fdc70,0,0);
  return;
}



/* Entry: 1016fdc70; end: 1016fdfd7;  */

void FUN_1016fdc70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x22;
  undefined8 uStack_60;
  
  uVar16 = *(ulong *)(unaff_x22 + 0x98);
  if (0xe < uVar16 >> 0x3c) {
    func_0x000107c602fc(0x2a);
    func_0x000107c6142c(0xe000000000000000);
    uStack_60 = 0x800000010efb8c50;
    uVar6 = 0;
    func_0x000107c5ede0(0);
    uVar9 = uVar6;
    func_0x000100f15b10();
    func_0x000107c6057c(uVar6,uVar9);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar9);
LAB_1016fdd14:
    func_0x000107c6142c(uStack_60);
    puVar7 = (undefined *)0x0;
    goto LAB_1016fde5c;
  }
  uVar12 = *(ulong *)(unaff_x22 + 0x60);
  if (uVar12 >> 0x3c < 0xf) {
    uVar5 = (uint)(uVar12 >> 0x20);
    uVar13 = uVar5 >> 0x1e;
    if (uVar5 >> 0x1e < 2) {
      if (uVar13 == 0) {
        if (((uVar12 & 0xff000000000000) != 0) &&
           (uVar16 = *(ulong *)(unaff_x22 + 0x70), uVar16 >> 0x3c < 0xf)) {
LAB_1016fdda8:
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar13 = uVar5 >> 0x1e;
          if (uVar5 >> 0x1e < 2) {
            if (uVar13 != 0) {
              lVar8 = *(long *)(unaff_x22 + 0x68);
              lVar14 = (long)(int)lVar8;
              lVar15 = lVar8 >> 0x20;
              goto LAB_1016fddf4;
            }
            if ((uVar16 & 0xff000000000000) == 0) goto LAB_1016fddd8;
LAB_1016fde8c:
            uVar12 = *(ulong *)(unaff_x22 + 0x60);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
            func_0x0001016ec27c(uVar10,uVar12,*(undefined8 *)(unaff_x22 + 0x68),uVar16,
                                *(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98))
            ;
            uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
            uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
            uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
            uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
            uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
            if (uVar12 >> 0x3c < 0xf) {
              puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
              func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
              uVar11 = uVar10;
              func_0x000107c5ee20(uVar10,uVar12);
              func_0x000107c51770(puVar7);
              func_0x000107c61180();
              func_0x000107c61170(uVar11);
              func_0x0001000b44c0(uVar10,uVar12);
              func_0x0001000b44c0(uVar6,uVar3);
              func_0x0001000b44c0(uVar1,uVar4);
              func_0x0001000b44c0(uVar9,uVar2);
              goto LAB_1016fde5c;
            }
            func_0x000107c602fc(0x2c);
            func_0x000107c6142c(0xe000000000000000);
            uStack_60 = 0x800000010efb8c80;
            uVar11 = 0;
            func_0x000107c5ede0(0);
            uVar10 = uVar11;
            func_0x000100f15b10();
            func_0x000107c6057c(uVar11,uVar10);
            func_0x000107c5fb78();
            func_0x000107c6142c(uVar10);
            func_0x0001000b44c0(uVar9,uVar2);
            func_0x0001000b44c0(uVar6,uVar3);
            func_0x0001000b44c0(uVar1,uVar4);
            goto LAB_1016fdd14;
          }
          if (uVar13 == 2) {
            lVar8 = *(long *)(unaff_x22 + 0x68);
            lVar14 = *(long *)(lVar8 + 0x10);
            lVar15 = *(long *)(lVar8 + 0x18);
LAB_1016fddf4:
            if (lVar14 != lVar15) {
              func_0x00010006c00c(lVar8,uVar16);
              uVar16 = *(ulong *)(unaff_x22 + 0x70);
              goto LAB_1016fde8c;
            }
          }
          else {
LAB_1016fddd8:
            func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x68),uVar16);
          }
        }
      }
      else {
        if ((long)(int)*(long *)(unaff_x22 + 0x58) == *(long *)(unaff_x22 + 0x58) >> 0x20)
        goto LAB_1016fde08;
LAB_1016fdd90:
        uVar16 = *(ulong *)(unaff_x22 + 0x70);
        func_0x00010006c00c();
        if (uVar16 >> 0x3c < 0xf) {
          uVar16 = *(ulong *)(unaff_x22 + 0x70);
          goto LAB_1016fdda8;
        }
      }
    }
    else if (uVar13 == 2) {
      if (*(long *)(*(long *)(unaff_x22 + 0x58) + 0x10) !=
          *(long *)(*(long *)(unaff_x22 + 0x58) + 0x18)) goto LAB_1016fdd90;
      goto LAB_1016fde08;
    }
    func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
    uVar16 = *(ulong *)(unaff_x22 + 0x98);
  }
LAB_1016fde08:
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar9 = uVar6;
  func_0x000107c5ee20(uVar6,uVar16);
  func_0x000107c51770(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x0001000b44c0(uVar6,uVar16);
LAB_1016fde5c:
                    /* WARNING: Could not recover jumptable at 0x0001016fde7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar7);
  return;
}



/* Entry: 1016fdfd8; end: 1016fe0af;  */

void FUN_1016fdfd8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  lVar8 = 0;
  func_0x000107c5ede0();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x28 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  plVar9 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1016fe0b0;
  plVar9[3] = lVar8;
  plVar7 = (long *)0xa0;
  func_0x000107c615b8(0xa0,FUN_1016fda5c,uVar4);
  plVar9[4] = (long)plVar7;
  *plVar7 = (long)plVar9;
  plVar7[1] = (long)FUN_1016fc7a0;
                    /* WARNING: Could not recover jumptable at 0x0001016fc79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016fda5c(unaff_x20 + uVar12,uVar2,uVar5,uVar3,uVar6,uVar11);
  return;
}



/* Entry: 1016fe0b0; end: 1016fe1f7;  */

void FUN_1016fe0b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016fe0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016fe1f8; end: 1016fe55f;  */

void FUN_1016fe1f8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x22;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_58;
  
  uVar10 = *(ulong *)(unaff_x22 + 0xc0);
  uVar11 = *(ulong *)(unaff_x22 + 0xb0);
  if (uVar11 >> 0x3c < 0xf && uVar10 >> 0x3c < 0xf) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    func_0x000100de78a0(uVar3,uVar11);
    uVar8 = uVar5;
    uVar4 = uVar10;
    func_0x000100de78a0();
    func_0x000107c5ed70();
    func_0x000107c61434(uVar4);
    func_0x00010006c00c(uVar3,uVar11);
    func_0x00010006c00c(uVar5,uVar10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
    (**(code **)(*(long *)(unaff_x22 + 0x110) + 0x10))
              (uVar3,*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x108));
    func_0x0001016ffd64(unaff_x22 + 0x48,uVar3);
    uVar4 = *(ulong *)(unaff_x22 + 0x50);
    if (uVar4 == 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
      func_0x000107c602fc(0x28);
      uVar3 = 0xe000000000000000;
      func_0x000107c6142c(0xe000000000000000);
      uStack_58 = 0x800000010efb8bc0;
      func_0x000100f15b10();
      func_0x000107c6057c(uVar5,uVar3);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar3);
      goto LAB_1016fe500;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c61434(uVar4);
    func_0x00010006c00c(uVar5,uVar12);
    func_0x00010006c00c(uVar3,uVar6);
  }
  *(ulong *)(unaff_x22 + 0x148) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar3;
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
  func_0x000100083b20(unaff_x22 + 0x98);
  lVar7 = *(long *)(unaff_x22 + 0x98);
  lVar1 = lVar7;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x158) = lVar7;
  func_0x000107c61170(lVar1);
  if (lVar7 != 0) {
    lVar1 = lVar7;
    func_0x000107c614f0();
    *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
    *(ulong *)(unaff_x22 + 0x18) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x736568637261;
    *(undefined8 *)(unaff_x22 + 0x28) = 0xe600000000000000;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x626f6c4261746144;
    *(undefined8 *)(unaff_x22 + 0x38) = 0xe800000000000000;
    *(undefined8 *)(unaff_x22 + 0x40) = 2;
    plVar9 = (long *)0xa0;
    func_0x000107c61434(uVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x160) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_1016fe560;
    plVar9[0xc] = lVar1;
    plVar9[0xd] = lVar7;
    plVar9[0xb] = unaff_x22 + 0x10;
    lVar1 = 0;
    func_0x000107c5eea4();
    plVar9[0xe] = lVar1;
    lVar1 = *(long *)(lVar1 + -8);
    plVar9[0xf] = lVar1;
    uVar10 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar9[0x10] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1016eb99c,0,0);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x108);
  FUN_1016ff944(*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x120),uVar12,uVar6,
                uVar8,uVar5);
  func_0x000107c602fc(0x2f);
  uVar2 = 0xe000000000000000;
  func_0x000107c6142c(0xe000000000000000);
  uStack_58 = 0x800000010efb8bf0;
  func_0x000100f15b10();
  func_0x000107c6057c(uVar13,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x00010006c090(uVar12,uVar6);
  func_0x00010006c090(uVar8,uVar5);
LAB_1016fe500:
  func_0x000107c6142c(uStack_58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001016fe55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016fe560; end: 1016fe5bf;  */

void FUN_1016fe560(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x158);
  *(undefined8 *)(lVar2 + 0x168) = param_1;
  *(undefined8 *)(lVar2 + 0x170) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x160));
  FUN_1016f5da8(lVar2 + 0x10);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016fe5c0,0,0);
  return;
}



/* Entry: 1016fe5c0; end: 1016feb3f;  */

void FUN_1016fe5c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_60;
  
  if (*(ulong *)(unaff_x22 + 0x170) >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar7 = *(ulong *)(unaff_x22 + 0x128);
    func_0x0001016ec27c(uVar2,uVar7,*(undefined8 *)(unaff_x22 + 0x130),
                        *(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x168));
    if (uVar7 >> 0x3c < 0xf) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar4 = *(long *)(unaff_x22 + 0xf0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
      puVar18 = PTR_PTR_1126d9180;
      func_0x000107c610f8();
      func_0x000107c489fc();
      uVar20 = 0;
      func_0x000107c5ee24(0,uVar8,uVar1);
      uVar1 = 0;
      func_0x000107c5ee24(0,uVar3,uVar15);
      func_0x000107c5ec14(uVar16,uVar19,uVar14);
      (**(code **)(lVar4 + 0x30))(uVar16,1,uVar13);
      if ((int)uVar16 == 1) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
        lVar4 = *(long *)(unaff_x22 + 0x110);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x100);
        uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar8);
        FUN_1016ff998(uVar1,0x112d4b5b0,&UNK_10d912140);
        (**(code **)(lVar4 + 0x38))(uVar15,1,1,uVar14);
LAB_1016fe9c4:
        FUN_1016ff998(*(undefined8 *)(unaff_x22 + 0x100),0x112d36580,&UNK_10d9016d0);
        uVar13 = 0;
      }
      else {
        lVar4 = *(long *)(unaff_x22 + 0xf8);
        plVar9 = *(long **)(unaff_x22 + 0xe0);
        (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x20))
                  (lVar4,plVar9,*(undefined8 *)(unaff_x22 + 0xe8));
        func_0x000107c5ebc4();
        if (lVar4 == 0) {
          func_0x000107c5ebc8(PTR___swiftEmptyArrayStorage_11034f1c8);
        }
        else {
          func_0x000107c6142c();
        }
        pcVar5 = (code *)(unaff_x22 + 0x78);
        func_0x000107c5ebc0();
        if (*plVar9 != 0) {
          lVar4 = 0x112d70260;
          func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
          lVar6 = 0;
          func_0x000107c5ebbc();
          lVar12 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
          uVar10 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
          uVar17 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
          func_0x000107c613fc(lVar4,uVar17 + lVar12 * 2,uVar10 | 7);
          *(undefined8 *)(lVar4 + 0x18) = 4;
          *(undefined8 *)(lVar4 + 0x10) = 2;
          lVar6 = lVar4 + uVar17;
          func_0x000107c61434(uVar8);
          func_0x000107c5ebb0(lVar6,0x79656b,0xe300000000000000,uVar20,uVar8);
          func_0x000107c6142c(uVar8);
          func_0x000107c61434(uVar3);
          func_0x000107c5ebb0(lVar6 + lVar12,0x7669,0xe200000000000000,uVar1,uVar3);
          func_0x000107c6142c(uVar3);
          func_0x0001016fc344(lVar4);
        }
        uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
        lVar4 = *(long *)(unaff_x22 + 0x110);
        uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
        uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
        lVar6 = *(long *)(unaff_x22 + 0xf0);
        (*pcVar5)(unaff_x22 + 0x78,0);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar8);
        func_0x000107c5ebe8(uVar13);
        (**(code **)(lVar6 + 8))(uVar15,uVar1);
        uVar15 = 1;
        (**(code **)(lVar4 + 0x30))(uVar13,1,uVar14);
        if ((int)uVar13 == 1) goto LAB_1016fe9c4;
        uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
        lVar4 = *(long *)(unaff_x22 + 0x110);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
        func_0x000107c5ed70();
        (**(code **)(lVar4 + 8))(uVar1,uVar14);
        func_0x000107c5fadc(uVar13,uVar15);
        func_0x000107c6142c(uVar15);
      }
      uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
      func_0x000107c56168(puVar18);
      func_0x000107c61170(uVar13);
      func_0x000107c5fb04(uVar15);
      uVar14 = uVar2;
      uVar10 = uVar7;
      func_0x000107c5faf0(uVar2,uVar7,uVar15);
      if (uVar10 == 0) {
        uVar14 = 0;
      }
      else {
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar10);
      }
      uVar15 = *(undefined8 *)(unaff_x22 + 0x168);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x170);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
      func_0x000107c56160(puVar18);
      func_0x000107c61170(uVar14);
      func_0x0001000b44c0(uVar2,uVar7);
      func_0x0001000b44c0(uVar15,uVar19);
      func_0x000107c6142c(uVar1);
      func_0x00010006c090(uVar3,uVar8);
      func_0x00010006c090(uVar16,uVar13);
      FUN_1016ff944(uVar20,uVar11,uVar3,uVar8,uVar16,uVar13);
      goto LAB_1016feae8;
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x108);
    FUN_1016ff944(*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x120),uVar13,
                  uVar15,uVar8,uVar14);
    func_0x000107c602fc(0x31);
    uVar3 = 0xe000000000000000;
    func_0x000107c6142c(0xe000000000000000);
    uStack_60 = 0x800000010efb8c20;
    func_0x000100f15b10();
    func_0x000107c6057c(uVar20,uVar3);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
    func_0x0001000b44c0(uVar1,uVar19);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x108);
    FUN_1016ff944(*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x120),uVar13,
                  uVar15,uVar8,uVar14);
    func_0x000107c602fc(0x2f);
    uVar1 = 0xe000000000000000;
    func_0x000107c6142c(0xe000000000000000);
    uStack_60 = 0x800000010efb8bf0;
    func_0x000100f15b10();
    func_0x000107c6057c(uVar19,uVar1);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
  }
  func_0x000107c6142c(uVar2);
  func_0x00010006c090(uVar13,uVar15);
  func_0x00010006c090(uVar8,uVar14);
  func_0x000107c6142c(uStack_60);
  puVar18 = (undefined *)0x0;
LAB_1016feae8:
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001016feb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar18);
  return;
}



/* Entry: 1016feb40; end: 1016fec23;  */

void FUN_1016feb40(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  ulong uVar13;
  
  lVar8 = 0;
  func_0x000107c5ede0();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar13 = uVar10 + 0x28 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + uVar13 + 7 & 0xfffffffffffffff8;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + uVar10);
  uVar5 = ((undefined8 *)(unaff_x20 + uVar10))[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  uVar11 = *(undefined8 *)(unaff_x20 + (uVar10 + 0x27 & 0xffffffffffffff8));
  plVar9 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x1016ffa34;
  plVar9[3] = lVar8;
  plVar7 = (long *)0x180;
  func_0x000107c615b8(0x180,0x1016fe0ec,uVar4);
  plVar9[4] = (long)plVar7;
  *plVar7 = (long)plVar9;
  plVar7[1] = (long)FUN_1016fcb78;
                    /* WARNING: Could not recover jumptable at 0x0001016fcb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1016fe0ec)(unaff_x20 + uVar13,uVar2,uVar5,uVar3,uVar6,uVar11,uVar12);
  return;
}



/* Entry: 1016fec24; end: 1016fece3;  */

code * FUN_1016fec24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  code *unaff_x20;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == (code *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    lVar2 = lVar1;
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    lVar2 = lVar1;
    lVar1 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  *(long *)(lVar1 + 0x98) = lVar2;
  *(undefined8 *)(lVar1 + 0xa0) = param_2;
  pcVar3 = FUN_1016fecfc;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016fecfc,0,0);
  return pcVar3;
}



/* Entry: 1016fece4; end: 1016fecfb;  */

void FUN_1016fece4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016fecfc,0,0);
  return;
}



/* Entry: 1016fecfc; end: 1016feed3;  */

void FUN_1016fecfc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  puVar3 = PTR_PTR_1126a7a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0xa8) = puVar3;
  func_0x000107c59fd0();
  puVar4 = puVar3;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar3 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    *(undefined **)(unaff_x22 + 0xb0) = puVar3;
    *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
    func_0x000100083b20(unaff_x22 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar2 = *(long *)(unaff_x22 + 0x60);
    func_0x0001000a8868(unaff_x22 + 0x40,uVar7);
    func_0x00010006c00c(puVar3,param_2);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1016f04e0();
    *(undefined8 *)(unaff_x22 + 0x10) = 0xd000000000000014;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x800000010efb8820;
    *(undefined **)(unaff_x22 + 0x20) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x28) = param_2;
    *(undefined1 *)(unaff_x22 + 0x30) = 0;
    *(undefined **)(unaff_x22 + 0x38) = puVar4;
    piVar6 = *(int **)(lVar2 + 0x10);
    iVar1 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1016feed4;
                    /* WARNING: Could not recover jumptable at 0x0001016fee34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))(plVar5,unaff_x22 + 0x10,0,0,0,uVar7,lVar2);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c602fc(0x2d);
  func_0x000107c6142c(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c6142c(0x800000010efb8b30);
                    /* WARNING: Could not recover jumptable at 0x0001016feed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}


