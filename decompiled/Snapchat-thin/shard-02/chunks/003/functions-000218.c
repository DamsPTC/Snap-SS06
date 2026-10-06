/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bb0a28; end: 101bb0cc3;  */

void FUN_101bb0a28(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e06fa0;
  func_0x0001000285a8(0x112e06fa0,&UNK_10d9db0e0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101bb0c90:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101bb0cc0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101bb0c90;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101bb0cc4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101bb0cc4; end: 101bb0cd7;  */

/* WARNING: Removing unreachable block (ram,0x000101baf58c) */

void FUN_101bb0cc4(void)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined4 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long lVar25;
  undefined8 uVar26;
  int iVar27;
  undefined1 *puVar28;
  undefined8 uVar29;
  long unaff_x20;
  undefined1 *puVar30;
  ulong *puVar31;
  undefined1 *puVar32;
  ulong uVar33;
  undefined4 uStack_a4;
  undefined1 *puStack_68;
  
  puVar4 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar20 = *(long *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  func_0x0001000d224c(&puStack_68);
  puVar9 = puStack_68;
  if (puStack_68 != (undefined1 *)0x0) {
    lVar25 = lVar1;
    func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
    puVar4 = puVar9;
    func_0x000107c4310c();
    func_0x000107c61180();
    func_0x000107c61170(lVar25);
    if (puVar4 != (undefined1 *)0x0) {
      puVar24 = (undefined1 *)0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      puVar5 = puVar4;
      func_0x000107c5fc54();
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar28 = *(undefined1 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar28 = (undefined1 *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined1 *)0x7fffffffffffffff < puVar5) {
          puVar28 = puVar5;
        }
        func_0x000107c60480();
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
      if (puVar28 == (undefined1 *)0x0) {
        func_0x000107c6142c(puVar5);
        func_0x000107c61170(puVar4);
        **(undefined8 **)(*(long *)(lVar20 + 0x40) + 0x28) = puVar8;
        func_0x000107c61450(lVar20);
      }
      else {
        puVar7 = (undefined1 *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar5 & 0xc000000000000001) == 0) {
              if (*(undefined1 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101baf51c);
                (*pcVar3)();
              }
              puVar30 = *(undefined1 **)(puVar5 + (long)puVar7 * 8 + 0x20);
              func_0x000107c615f0(puVar30);
              puVar17 = puVar24;
            }
            else {
              puVar30 = puVar7;
              puVar17 = puVar5;
              func_0x000100fb0ba0();
            }
            if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101baf518);
              (*pcVar3)();
            }
            puVar32 = puVar7 + 1;
            puVar6 = puVar30;
            func_0x000107c5b2d0();
            func_0x000107c61180();
            if (puVar6 == (undefined1 *)0x0) break;
            puVar7 = puVar6;
            func_0x000107c5faec();
            puVar24 = puVar17;
            func_0x000107c61170(puVar6);
            puVar16 = puVar8;
            func_0x000107c61558();
            puVar15 = puVar8;
            if (((ulong)puVar16 & 1) == 0) {
              puVar24 = (undefined1 *)(*(long *)(puVar8 + 0x10) + 1);
              puVar15 = (undefined *)0x0;
              func_0x000100fb4d7c(0,puVar24,1,puVar8);
            }
            uVar23 = *(ulong *)(puVar15 + 0x10);
            puVar6 = (undefined1 *)(uVar23 + 1);
            puVar8 = puVar15;
            if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar23) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
              puVar24 = puVar6;
              func_0x000100fb4d7c(puVar8,puVar6,1,puVar15);
            }
            *(undefined1 **)(puVar8 + 0x10) = puVar6;
            *(undefined1 **)(puVar8 + uVar23 * 0x18 + 0x20) = puVar7;
            *(undefined1 **)(puVar8 + uVar23 * 0x18 + 0x28) = puVar17;
            *(undefined1 **)(puVar8 + uVar23 * 0x18 + 0x30) = puVar30;
            puVar7 = puVar32;
            if (puVar32 == puVar28) goto LAB_101baf0f0;
          }
          func_0x000107c615e8(puVar30);
          puVar24 = puVar17;
          puVar7 = puVar7 + 1;
        } while (puVar32 != puVar28);
LAB_101baf0f0:
        puVar24 = *(undefined1 **)(puVar8 + 0x10);
        puStack_68 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        if (puVar24 != (undefined1 *)0x0) {
          func_0x0001000285a8(0x112d508b8,&UNK_10d9172e0);
          func_0x000107c60498();
          puStack_68 = puVar24;
        }
        FUN_101bb0cd8(puVar8,1,&puStack_68);
        func_0x000107c6142c(puVar5);
        func_0x000107c6142c(puVar8);
        puVar24 = puStack_68;
        if ((bVar2 & 1) == 0) {
          func_0x000107c61170(puVar4);
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_101bb0f7c();
        }
        else {
          puVar5 = puVar9;
          func_0x000107c42f94();
          func_0x000107c61180();
          func_0x000107c61170(puVar4);
          uVar29 = 0x112d511e8;
          func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
          puVar8 = puVar5;
          func_0x000107c5f9e8(puVar5,PTR___sSSN_11034da80,uVar29,PTR___sSSSHsWP_11034da90);
          func_0x000107c61170(puVar5);
        }
        uVar23 = *(ulong *)(lVar1 + 0x10);
        puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar23 != 0) {
          uVar33 = 0;
LAB_101baf268:
          uVar11 = uVar33;
          if (uVar33 <= uVar23) {
            uVar11 = uVar23;
          }
          puVar31 = (ulong *)(lVar1 + 0x28 + uVar33 * 0x10);
          uVar33 = uVar33 + 1;
          do {
            if (uVar33 - uVar11 == 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101baf520);
              (*pcVar3)();
            }
            if (*(long *)(puVar24 + 0x10) != 0) {
              uVar13 = puVar31[-1];
              uVar22 = *puVar31;
              func_0x000107c61434(uVar22);
              func_0x000107c6157c(puVar24);
              uVar10 = uVar13;
              uVar19 = uVar22;
              func_0x000100029284();
              if ((uVar19 & 1) != 0) goto LAB_101baf2f4;
              func_0x000107c6142c(uVar22);
              func_0x000107c61574(puVar24);
            }
            uVar33 = uVar33 + 1;
            puVar31 = puVar31 + 2;
            if (uVar33 - uVar23 == 1) break;
          } while( true );
        }
LAB_101baf4e8:
        func_0x000107c6142c(puVar8);
        func_0x000107c61574(puVar24);
        **(undefined8 **)(*(long *)(lVar20 + 0x40) + 0x28) = puVar16;
        func_0x000107c61450();
      }
      func_0x000107c615e8(puVar9);
      return;
    }
    func_0x000107c615e8();
    puVar4 = puVar9;
  }
  func_0x00010118a534();
  puVar8 = &UNK_1106c4d48;
  func_0x000107c613f8(&UNK_1106c4d48,puVar4,0,0);
  *puVar4 = 0;
  uVar29 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar18 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar18 = puVar8;
  func_0x000107c61454(lVar20,uVar29);
  return;
LAB_101baf2f4:
  uVar29 = *(undefined8 *)(*(long *)(puVar24 + 0x38) + uVar10 * 8);
  func_0x000107c615f0(uVar29);
  func_0x000107c61574(puVar24);
  if ((bVar2 & 1) == 0) {
    func_0x000107c615f0(uVar29);
  }
  else {
    lVar25 = *(long *)(puVar8 + 0x10);
    func_0x000107c615f0(uVar29);
    if (lVar25 != 0) {
      func_0x000107c61434(puVar8);
      uVar11 = uVar13;
      uVar10 = uVar22;
      func_0x000100029284();
      if ((uVar10 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        uStack_a4 = 2;
      }
      else {
        uVar26 = *(undefined8 *)(*(long *)(puVar8 + 0x38) + uVar11 * 8);
        func_0x000107c615f0(uVar26);
        func_0x000107c6142c(puVar8);
        uVar12 = uVar26;
        func_0x000107c42998();
        uStack_a4 = (undefined4)uVar12;
        func_0x000107c307b0();
        func_0x000107c615e8(uVar26);
      }
      goto LAB_101baf3ac;
    }
  }
  uStack_a4 = 2;
LAB_101baf3ac:
  iVar27 = (int)uVar29;
  func_0x000107c307a8();
  func_0x000103a76890(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar22);
  uVar21 = 1;
  if (iVar27 != 0) {
    uVar21 = 2;
  }
  func_0x000103a765a4(uVar13,uVar22,0,0xf000000000000000,uVar21,uStack_a4);
  func_0x000107c6142c(uVar22);
  func_0x000107c615ec(uVar29,2);
  puVar15 = puVar16;
  func_0x000107c61550();
  if (((((ulong)puVar15 & 1) == 0) || ((long)puVar16 < 0)) ||
     (puVar15 = puVar16, ((ulong)puVar16 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar16 >> 0x3e == 0) {
      puVar14 = *(undefined **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar14 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar16) {
        puVar14 = puVar16;
      }
      func_0x000107c60480(puVar14);
    }
    puVar15 = (undefined *)0x0;
    func_0x000100fb5154(0,puVar14 + 1,1,puVar16);
  }
  uVar22 = (ulong)puVar15 & 0xffffffffffffff8;
  uVar11 = *(ulong *)(uVar22 + 0x10);
  puVar16 = puVar15;
  if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar11) {
    puVar16 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
    func_0x000100fb5154(puVar16,uVar11 + 1,1,puVar15);
    uVar22 = (ulong)puVar16 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar22 + 0x10) = uVar11 + 1;
  *(ulong *)(uVar22 + uVar11 * 8 + 0x20) = uVar13;
  if (uVar33 == uVar23) goto LAB_101baf4e8;
  goto LAB_101baf268;
}



/* Entry: 101bb0cd8; end: 101bb0f7b;  */

void FUN_101bb0cd8(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  lVar10 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c615f0(uVar12);
  uVar5 = uVar2;
  uVar6 = uVar3;
  func_0x000100029284();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar8 = (ulong)~(uint)uVar6 & 1;
  lVar13 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_101bb0f74:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101bb0f78);
    (*pcVar4)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar13) {
    func_0x000100fb636c(lVar13,param_2 & 1);
    uVar5 = uVar2;
    uVar8 = uVar3;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar8 & 1)) {
LAB_101bb0d88:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101bb0d98);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    func_0x000100fb5c8c();
    lVar13 = *param_3;
    goto joined_r0x000101bb0df8;
  }
  lVar13 = *param_3;
joined_r0x000101bb0df8:
  if ((uVar6 & 1) == 0) {
    lVar7 = lVar13 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
    if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
LAB_101bb0f78:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101bb0f7c);
      (*pcVar4)();
    }
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    func_0x000107c615f0(uVar11);
    func_0x000107c615e8(uVar12);
    func_0x000107c6142c(uVar3);
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar11;
    func_0x000107c615e8(uVar12);
  }
  if (lVar9 != 1) {
    lVar9 = lVar9 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar12 = *puVar14;
      lVar10 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar12);
      uVar5 = uVar2;
      uVar6 = uVar3;
      func_0x000100029284();
      lVar7 = *(long *)(lVar10 + 0x10);
      uVar8 = (ulong)~(uint)uVar6 & 1;
      lVar13 = lVar7 + uVar8;
      if (SCARRY8(lVar7,uVar8)) goto LAB_101bb0f74;
      if (*(long *)(lVar10 + 0x18) < lVar13) {
        func_0x000100fb636c(lVar13,1);
        uVar5 = uVar2;
        uVar8 = uVar3;
        func_0x000100029284();
        if (((uint)uVar6 & 1) != ((uint)uVar8 & 1)) goto LAB_101bb0d88;
      }
      lVar13 = *param_3;
      if ((uVar6 & 1) == 0) {
        lVar7 = lVar13 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
        if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_101bb0f78;
        *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      }
      else {
        uVar11 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        func_0x000107c615f0(uVar11);
        func_0x000107c615e8(uVar12);
        func_0x000107c6142c(uVar3);
        uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar11;
        func_0x000107c615e8(uVar12);
      }
      puVar14 = puVar14 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



/* Entry: 101bb0f7c; end: 101bb1077;  */

undefined * FUN_101bb0f7c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e06c18,&UNK_10d9dabf0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101bb1074);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101bb1078);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101bb1078; end: 101bb10af;  */

void FUN_101bb1078(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined1 *puStack_38;
  
  puVar3 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&puStack_38);
  if (puStack_38 == (undefined1 *)0x0) {
    func_0x00010118a534();
    puVar5 = &UNK_1106c4d48;
    func_0x000107c613f8(&UNK_1106c4d48,puVar3,0,0);
    *puVar3 = 0;
    uVar6 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar7 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar7 = puVar5;
    func_0x000107c61454(lVar1,uVar6);
    return;
  }
  puVar3 = puStack_38;
  func_0x000107c432fc();
  puVar4 = puVar3;
  func_0x000107c5eac8();
  if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101baead0);
    (*pcVar2)();
  }
  if (puVar4 == (undefined1 *)0x0) {
    if (puVar3 == (undefined1 *)0x0) goto LAB_101bae9d0;
  }
  else if (puVar3 == puVar4) {
LAB_101bae9d0:
    func_0x00010118a534();
    puVar5 = &UNK_1106c4d48;
    func_0x000107c613f8(&UNK_1106c4d48,puVar4,0,0);
    *puVar4 = 0;
    uVar6 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar7 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar7 = puVar5;
    func_0x000107c61454(lVar1,uVar6);
    goto LAB_101baeab0;
  }
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = puVar3;
  func_0x000107c61450(lVar1);
LAB_101baeab0:
  func_0x000107c615e8(puStack_38);
  return;
}



/* Entry: 101bb10b0; end: 101bb1107;  */

void FUN_101bb10b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = 0;
  (**(code **)(unaff_x20 + 0x10))();
  if (lVar1 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    FUN_101bb12e4(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  }
  *param_1 = lVar1;
  param_1[3] = lVar2;
  return;
}



/* Entry: 101bb1108; end: 101bb12e3;  */

undefined * FUN_101bb1108(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  uVar5 = 0x112d511e8;
  func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
  func_0x000107c5fc48(param_2,uVar5);
  lVar7 = param_1;
  func_0x000105727098(param_1,param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  lVar3 = lVar7;
  func_0x000107c5fc54(lVar7,PTR___sSSN_11034da80);
  func_0x000107c61170(lVar7);
  lVar7 = *(long *)(lVar3 + 0x10);
  lVar4 = lVar3;
  if ((lVar7 == 0) && ((param_3 & 1) != 0)) {
    func_0x0001057276ac(param_1,0x1e);
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c5fc54();
    func_0x000107c6142c(lVar3);
    func_0x000107c61170(param_1);
    lVar7 = *(long *)(lVar4 + 0x10);
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar7 == 0) {
    func_0x000107c6142c(lVar4);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    FUN_101bb41ac(0,lVar7,0);
    uVar5 = 0;
    func_0x000103a76890(0);
    puVar9 = (undefined8 *)(lVar4 + 0x28);
    do {
      uVar6 = puVar9[-1];
      uVar2 = *puVar9;
      func_0x000107c610f8(uVar5);
      func_0x000107c61434(uVar2);
      func_0x000103a765a4(uVar6,uVar2,0,0xf000000000000000,1,2);
      uVar1 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        FUN_101bb41ac(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puVar9 + 2;
      *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar8 + uVar1 * 8 + 0x20) = uVar6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    func_0x000107c6142c(lVar4);
  }
  return puVar8;
}



/* Entry: 101bb12e4; end: 101bb1323;  */

void FUN_101bb12e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101bb1324; end: 101bb1387;  */

void FUN_101bb1324(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bb1388;
  plVar4[2] = param_1;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_101baf5fc;
  *(undefined1 *)(plVar3 + 0xe) = 0;
  plVar3[0xb] = lVar1;
  plVar3[0xc] = lVar2;
  func_0x000107c614f0();
  plVar3[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101baed50,0,0);
  return;
}



/* Entry: 101bb1388; end: 101bb13c3;  */

void FUN_101bb1388(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bb13c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bb13c4; end: 101bb141b;  */

void FUN_101bb13c4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101bb1434;
  plVar2[2] = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101baeb1c;
  plVar1[0xc] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bae870,0,0);
  return;
}



/* Entry: 101bb141c; end: 101bb1437;  */

void FUN_101bb141c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bb06e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bb1438; end: 101bb1627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb1438(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x00010079b778();
  func_0x000107c61170(lVar2);
  uVar6 = param_2;
  func_0x000107c4cac0();
  func_0x000107c615e8(param_2);
  if ((int)uVar6 == 0) {
    func_0x0001000285a8(0x112d51728,&UNK_10d918550);
    func_0x000100083b20(&lStack_48);
    lVar2 = lStack_48;
    func_0x000107c4cd6c();
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    lVar1 = lVar2;
    func_0x0001000bda74();
    func_0x000107c61170(lVar2);
    func_0x0001000285a8(0x112e04c88,&UNK_10d9d8600);
    func_0x000107c613fc();
    func_0x000107c6157c(param_5);
    pcVar3 = FUN_101bb1700;
    func_0x0001000bdd8c(FUN_101bb1700,param_5);
    lVar4 = 0;
    FUN_101bb0574();
    lVar2 = lVar4;
    func_0x000107c610f8();
    *(long *)(lVar2 + _DAT_112e06f68) = lVar1;
    *(code **)(lVar2 + _DAT_112e06f70) = pcVar3;
    plVar5 = &lStack_58;
    lStack_58 = lVar2;
    lStack_50 = lVar4;
    func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    ppuVar7 = &PTR_DAT_110450a18;
  }
  else {
    func_0x000100083b20(&lStack_48);
    uVar6 = *(undefined8 *)(lStack_48 + _DAT_112fd9ce8);
    func_0x000107c6157c(uVar6);
    func_0x000107c61170(lStack_48);
    lVar1 = 0;
    FUN_101bb4028();
    lVar2 = lVar1;
    func_0x000107c610f8();
    *(undefined8 *)(lVar2 + _DAT_112e06fb8) = uVar6;
    plVar5 = &lStack_68;
    lStack_68 = lVar2;
    lStack_60 = lVar1;
    func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    ppuVar7 = &PTR_DAT_110450c40;
  }
  uVar6 = 0;
  func_0x0001002ca8ec(0);
  func_0x000107c610f8();
  func_0x000103a76d08(plVar5,ppuVar7,uVar6);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 101bb1628; end: 101bb1643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb1628(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&lStack_48,uVar8,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = lStack_48;
  func_0x00010079b778();
  func_0x000107c61170(lVar4);
  uVar2 = uVar8;
  func_0x000107c4cac0();
  func_0x000107c615e8(uVar8);
  if ((int)uVar2 == 0) {
    func_0x0001000285a8(0x112d51728,&UNK_10d918550);
    func_0x000100083b20(&lStack_48);
    lVar4 = lStack_48;
    func_0x000107c4cd6c();
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    lVar3 = lVar4;
    func_0x0001000bda74();
    func_0x000107c61170(lVar4);
    func_0x0001000285a8(0x112e04c88,&UNK_10d9d8600);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar1);
    pcVar5 = FUN_101bb1700;
    func_0x0001000bdd8c(FUN_101bb1700,uVar1);
    lVar6 = 0;
    FUN_101bb0574();
    lVar4 = lVar6;
    func_0x000107c610f8();
    *(long *)(lVar4 + _DAT_112e06f68) = lVar3;
    *(code **)(lVar4 + _DAT_112e06f70) = pcVar5;
    plVar7 = &lStack_58;
    lStack_58 = lVar4;
    lStack_50 = lVar6;
    func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
    ppuVar9 = &PTR_DAT_110450a18;
  }
  else {
    func_0x000100083b20(&lStack_48);
    uVar8 = *(undefined8 *)(lStack_48 + _DAT_112fd9ce8);
    func_0x000107c6157c(uVar8);
    func_0x000107c61170(lStack_48);
    lVar3 = 0;
    FUN_101bb4028();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112e06fb8) = uVar8;
    plVar7 = &lStack_68;
    lStack_68 = lVar4;
    lStack_60 = lVar3;
    func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
    ppuVar9 = &PTR_DAT_110450c40;
  }
  uVar8 = 0;
  func_0x0001002ca8ec(0);
  func_0x000107c610f8();
  func_0x000103a76d08(plVar7,ppuVar9,uVar8);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 101bb1644; end: 101bb16ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb1644(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = auStack_60;
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_11305e778);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x0001000a8868(auStack_60,uStack_48);
  uVar2 = 2;
  func_0x00010043c5c0(2,0xc,0,uStack_48,uStack_40,puVar1);
  func_0x0001000d224c(param_1);
  func_0x000107c61574(uVar2);
  func_0x0001000834e4(auStack_60);
  return;
}



/* Entry: 101bb1700; end: 101bb1707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb1700(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = auStack_60;
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_11305e778);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x0001000a8868(auStack_60,uStack_48);
  uVar2 = 2;
  func_0x00010043c5c0(2,0xc,0,uStack_48,uStack_40,puVar1);
  func_0x0001000d224c(param_1);
  func_0x000107c61574(uVar2);
  func_0x0001000834e4(auStack_60);
  return;
}



/* Entry: 101bb1708; end: 101bb18cb;  */

undefined * FUN_101bb1708(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb18cc);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x000103a76890(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x000100fb0d50(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        func_0x000103a76890(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 101bb18cc; end: 101bb18e3;  */

void FUN_101bb18cc(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb18e4,0,0);
  return;
}



/* Entry: 101bb18e4; end: 101bb1973;  */

/* WARNING: Removing unreachable block (ram,0x000101bb1908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb18e4(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000107c5fd64();
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x28) + _DAT_112e06fb8);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bb1974;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101bb1974; end: 101bb19eb;  */

void FUN_101bb1974(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar2 + 0x10);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x40) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101bb19ec;
                    /* WARNING: Could not recover jumptable at 0x000101bb19e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb456c();
  return;
}



/* Entry: 101bb19ec; end: 101bb1a3f;  */

void FUN_101bb19ec(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  *(undefined1 *)(lVar1 + 0x68) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb1a40,0,0);
  return;
}



/* Entry: 101bb1a40; end: 101bb1bd3;  */

void FUN_101bb1a40(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  if (*(char *)(unaff_x22 + 0x68) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x18) = uVar5;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101bb1ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  puVar2 = PTR_PTR_1126a8bb8;
  func_0x000107c610f8(PTR_PTR_1126a8bb8);
  func_0x000107c453e4();
  func_0x000107c53288();
  FUN_101bb4ed0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = 0;
  func_0x000107c6010c(0);
  func_0x000107c557c4(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c4433c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar3 = uVar5;
  func_0x000103edf20c();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  func_0x000107c61170(uVar5);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bb1bd4;
                    /* WARNING: Could not recover jumptable at 0x000101bb1bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb444c();
  return;
}



/* Entry: 101bb1bd4; end: 101bb1c27;  */

void FUN_101bb1bd4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  *(undefined1 *)(lVar1 + 0x69) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb1c28,0,0);
  return;
}



/* Entry: 101bb1c28; end: 101bb1d1f;  */

void FUN_101bb1c28(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x69);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  if (cVar2 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x68);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
    FUN_101bb47ac(uVar6,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bb1cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  uVar5 = uVar6;
  func_0x000107c5d388(uVar6);
  func_0x000100cc8524(uVar6,cVar2);
  FUN_101bb47ac(uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bb1d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 101bb1d20; end: 101bb1d6b;  */

void FUN_101bb1d20(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bb1d6c;
  plVar1[5] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb18e4,0,0);
  return;
}



/* Entry: 101bb1d6c; end: 101bb1ddf;  */

void FUN_101bb1d6c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb1db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb1de0,0,0);
  return;
}



/* Entry: 101bb1de0; end: 101bb1e2b;  */

void FUN_101bb1de0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  *puVar2 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000101bb1e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bb1e2c; end: 101bb1f57; -[_TtC24MemoriesDataServicesImpl26MemoriesMemTwoDataProvider fetchTotalMemoryEntryCountFuture:] */

void FUN_101bb1e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = &UNK_10d905070;
  uVar5 = param_3;
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x00010007c020(param_3);
  puVar2 = &UNK_110450e78;
  func_0x000107c613fc(&UNK_110450e78,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  uVar3 = uVar1;
  func_0x000104887c7c(uVar1,puVar4,uVar5,4,0xd000000000000024,0x800000010f002030,&UNK_10d9db178,
                      puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010007d980(uVar1,puVar4,uVar5);
  func_0x00010488b12c();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101bb1f58; end: 101bb1f9f;  */

void FUN_101bb1f58(undefined8 param_1,undefined1 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb1fa0,0,0);
  return;
}



/* Entry: 101bb1fa0; end: 101bb21f7;  */

/* WARNING: Removing unreachable block (ram,0x000101bb1fd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb1fa0(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  long *plVar10;
  
  func_0x000107c5fd64();
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
  *(long *)(unaff_x22 + 0x58) = lVar6;
  if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb21a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  plVar8 = *(long **)(*(long *)(unaff_x22 + 0x40) + _DAT_112e06fb8);
  if (*(char *)(unaff_x22 + 0xb8) == '\x01') {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    *(long *)(unaff_x22 + 0x28) = *(long *)(unaff_x22 + 0x38);
    lVar6 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x60) = uVar2;
    lVar6 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar2,1,1,lVar6);
    puVar3 = &UNK_110450c70;
    func_0x000107c613fc(&UNK_110450c70,0x20,7);
    *(undefined **)(unaff_x22 + 0x68) = puVar3;
    *(long **)(puVar3 + 0x10) = plVar8;
    *(undefined8 *)(puVar3 + 0x18) = uVar9;
    plVar10 = (long *)0xe0;
    func_0x000107c6157c(plVar8);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar10;
    lVar6 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    lVar7 = 0x112e06fe8;
    func_0x0001000285a8(0x112e06fe8,&UNK_10d9db108);
    lVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    lVar5 = lVar4;
    func_0x000101bb4c5c();
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101bb21f8;
    puVar1 = PTR___ss5ErrorWS_11034ee10;
    plVar10[0x16] = unaff_x22 + 0x28;
    plVar10[0x17] = unaff_x22 + 0x30;
    plVar10[0x14] = lVar5;
    plVar10[0x15] = (long)puVar1;
    plVar10[0x12] = lVar7;
    plVar10[0x13] = lVar4;
    plVar10[0x10] = (long)puVar3;
    plVar10[0x11] = lVar6;
    plVar10[0xe] = uVar2;
    plVar10[0xf] = (long)&UNK_10d9db0f8;
    lVar6 = *(long *)(lVar4 + -8);
    plVar10[0x18] = lVar6;
    uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar10[0x19] = uVar2;
    puVar3 = &UNK_10488ea3c;
  }
  else {
    plVar10 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101bb23a8;
    plVar10[5] = unaff_x22 + 0x10;
    plVar10[6] = (long)plVar8;
    lVar7 = *(long *)(*plVar8 + 0x50);
    plVar10[7] = lVar7;
    lVar6 = 0;
    __sSqMa(0,lVar7);
    plVar10[8] = lVar6;
    lVar6 = *(long *)(lVar6 + -8);
    plVar10[9] = lVar6;
    uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar10[10] = uVar2;
    lVar6 = *(long *)(lVar7 + -8);
    plVar10[0xb] = lVar6;
    uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar10[0xc] = uVar2;
    puVar3 = &UNK_104875f90;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(puVar3,0,0);
  return;
}



/* Entry: 101bb21f8; end: 101bb227b;  */

void FUN_101bb21f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x78) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x70));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x60);
    uVar2 = *(undefined8 *)(lVar4 + 0x68);
    func_0x0001000abe54(uVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c615c0(uVar1);
    pcVar3 = FUN_101bb227c;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar4 + 0x68));
    pcVar3 = FUN_101bb2b70;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 101bb227c; end: 101bb23a7;  */

void FUN_101bb227c(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar8 = 0;
  lVar9 = *(long *)(unaff_x22 + 0x78);
  uVar10 = *(ulong *)(lVar9 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    if (uVar10 == uVar8) {
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000101bb23a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puVar6);
      return;
    }
    if (*(ulong *)(lVar9 + 0x10) <= uVar8) break;
    lVar3 = *(long *)(lVar9 + 0x20 + uVar8 * 8);
    uVar8 = uVar8 + 1;
    if (lVar3 != 0) {
      func_0x000107c61174();
      puVar5 = puVar6;
      func_0x000107c61550();
      if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
         (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar4 = puVar6;
          }
          func_0x000107c60480(puVar4);
        }
        puVar5 = (undefined *)0x0;
        func_0x000100fb5154(0,puVar4 + 1,1,puVar6);
      }
      uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar7 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x000100fb5154(puVar6,uVar1 + 1,1,puVar5);
        uVar7 = (ulong)puVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
      *(long *)(uVar7 + uVar1 * 8 + 0x20) = lVar3;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb23a8);
  (*pcVar2)();
}



/* Entry: 101bb23a8; end: 101bb241f;  */

void FUN_101bb23a8(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar2 + 0x10);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x90) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101bb2420;
                    /* WARNING: Could not recover jumptable at 0x000101bb241c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb456c();
  return;
}



/* Entry: 101bb2420; end: 101bb2473;  */

void FUN_101bb2420(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  *(undefined1 *)(lVar1 + 0xb9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb2474,0,0);
  return;
}



/* Entry: 101bb2474; end: 101bb25c3;  */

void FUN_101bb2474(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  if (*(char *)(unaff_x22 + 0xb9) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000101bb2504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
  func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
  func_0x000107c442f0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar4;
  func_0x000103edf20c();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  func_0x000107c61170(uVar4);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bb25c4;
                    /* WARNING: Could not recover jumptable at 0x000101bb25c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb468c();
  return;
}



/* Entry: 101bb25c4; end: 101bb2617;  */

void FUN_101bb25c4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
  *(undefined1 *)(lVar1 + 0xba) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb2618,0,0);
  return;
}



/* Entry: 101bb2618; end: 101bb2b6f;  */

/* WARNING: Possible PIC construction at 0x000101bb2698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bb26d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bb29a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bb2b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bb2934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bb2b30) */
/* WARNING: Removing unreachable block (ram,0x000101bb29ac) */
/* WARNING: Removing unreachable block (ram,0x000101bb2a0c) */
/* WARNING: Removing unreachable block (ram,0x000101bb2a14) */
/* WARNING: Removing unreachable block (ram,0x000101bb2a7c) */
/* WARNING: Removing unreachable block (ram,0x000101bb2a80) */
/* WARNING: Removing unreachable block (ram,0x000101bb2a8c) */
/* WARNING: Removing unreachable block (ram,0x000101bb2b0c) */
/* WARNING: Removing unreachable block (ram,0x000101bb2b14) */
/* WARNING: Removing unreachable block (ram,0x000101bb2a94) */
/* WARNING: Removing unreachable block (ram,0x000101bb2a9c) */
/* WARNING: Removing unreachable block (ram,0x000101bb2a84) */
/* WARNING: Removing unreachable block (ram,0x000101bb2ab8) */
/* WARNING: Removing unreachable block (ram,0x000101bb2ae8) */
/* WARNING: Removing unreachable block (ram,0x000101bb2acc) */
/* WARNING: Removing unreachable block (ram,0x000101bb2ae4) */
/* WARNING: Removing unreachable block (ram,0x000101bb26d4) */
/* WARNING: Removing unreachable block (ram,0x000101bb271c) */
/* WARNING: Removing unreachable block (ram,0x000101bb2870) */
/* WARNING: Removing unreachable block (ram,0x000101bb287c) */
/* WARNING: Removing unreachable block (ram,0x000101bb2728) */
/* WARNING: Removing unreachable block (ram,0x000101bb2890) */
/* WARNING: Removing unreachable block (ram,0x000101bb2734) */
/* WARNING: Removing unreachable block (ram,0x000101bb2b6c) */
/* WARNING: Removing unreachable block (ram,0x000101bb2754) */
/* WARNING: Removing unreachable block (ram,0x000101bb276c) */
/* WARNING: Removing unreachable block (ram,0x000101bb2784) */
/* WARNING: Removing unreachable block (ram,0x000101bb2778) */
/* WARNING: Removing unreachable block (ram,0x000101bb2790) */
/* WARNING: Removing unreachable block (ram,0x000101bb2814) */
/* WARNING: Removing unreachable block (ram,0x000101bb27e8) */
/* WARNING: Removing unreachable block (ram,0x000101bb2810) */
/* WARNING: Removing unreachable block (ram,0x000101bb2834) */
/* WARNING: Removing unreachable block (ram,0x000101bb28a4) */
/* WARNING: Removing unreachable block (ram,0x000101bb2848) */
/* WARNING: Removing unreachable block (ram,0x000101bb28ac) */
/* WARNING: Removing unreachable block (ram,0x000101bb28f4) */
/* WARNING: Removing unreachable block (ram,0x000101bb2914) */
/* WARNING: Removing unreachable block (ram,0x000101bb291c) */
/* WARNING: Removing unreachable block (ram,0x000101bb28c8) */
/* WARNING: Removing unreachable block (ram,0x000101bb269c) */
/* WARNING: Removing unreachable block (ram,0x000101bb2938) */
/* WARNING: Removing unreachable block (ram,0x000101bb2944) */
/* WARNING: Removing unreachable block (ram,0x000101bb2b20) */
/* WARNING: Removing unreachable block (ram,0x000101bb2954) */
/* WARNING: Removing unreachable block (ram,0x000101bb2b68) */
/* WARNING: Removing unreachable block (ram,0x000101bb2960) */
/* WARNING: Removing unreachable block (ram,0x000101bb2968) */
/* WARNING: Removing unreachable block (ram,0x000101bb2930) */
/* WARNING: Removing unreachable block (ram,0x000101bb2990) */

void FUN_101bb2618(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xba) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xb0);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101bb2b70; end: 101bb2baf;  */

void FUN_101bb2b70(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000abe54(uVar1);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bb2bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bb2bb0; end: 101bb2bd3;  */

void FUN_101bb2bb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb2bd4,0,0);
  return;
}



/* Entry: 101bb2bd4; end: 101bb2c53;  */

/* WARNING: Removing unreachable block (ram,0x000101bb2bf8) */

void FUN_101bb2bd4(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c5fd64();
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bb2c54;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 101bb2c54; end: 101bb2cb7;  */

void FUN_101bb2c54(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x58) = plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_101bb2cb8;
  plVar5 = *(long **)(lVar3 + 0x30);
  plVar1[5] = lVar3 + 0x10;
  plVar1[6] = (long)plVar5;
  lVar4 = *(long *)(*plVar5 + 0x50);
  plVar1[7] = lVar4;
  lVar3 = 0;
  __sSqMa(0,lVar4);
  plVar1[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[9] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar2;
  lVar3 = *(long *)(lVar4 + -8);
  plVar1[0xb] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101bb2cb8; end: 101bb2d2f;  */

void FUN_101bb2cb8(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(lVar2 + 0x10);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x68) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101bb2d30;
                    /* WARNING: Could not recover jumptable at 0x000101bb2d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb456c();
  return;
}



/* Entry: 101bb2d30; end: 101bb2d83;  */

void FUN_101bb2d30(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  *(undefined1 *)(lVar1 + 0x90) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb2d84,0,0);
  return;
}



/* Entry: 101bb2d84; end: 101bb2ecb;  */

void FUN_101bb2d84(void)

{
  undefined8 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  if (*(char *)(unaff_x22 + 0x90) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x18) = uVar5;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
    **(undefined8 **)(unaff_x22 + 0x38) = uVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
    func_0x0001000285a8(0x112e06ff8,&UNK_10d9db110);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c442ec();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = uVar5;
    func_0x000103edf20c();
    *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
    func_0x000107c61170(uVar5);
    plVar4 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = (code *)0x101bb47c0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101bb2ecc;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bb2ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bb2ecc; end: 101bb2f1f;  */

void FUN_101bb2ecc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  *(undefined1 *)(lVar1 + 0x91) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb2f20,0,0);
  return;
}



/* Entry: 101bb2f20; end: 101bb311b;  */

void FUN_101bb2f20(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar11 = *(long *)(unaff_x22 + 0x88);
  if (*(char *)(unaff_x22 + 0x91) == '\x01') {
    *(long *)(unaff_x22 + 0x20) = lVar11;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar10 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar10,PTR___ss5ErrorWS_11034ee10);
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x90);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000100cc8524(uVar9,1);
    FUN_101bb47ac(uVar10,uVar1);
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c61434(uVar10);
    lVar4 = lVar11;
    func_0x000107c5b198(lVar11);
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar4);
    lVar4 = lVar11;
    func_0x000107c5b134();
    func_0x000107c61180();
    lVar6 = lVar4;
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar4);
    uVar8 = 2;
    if ((int)lVar6 != 1) {
      uVar8 = 0;
    }
    if ((int)lVar6 == 0) {
      uVar8 = 1;
    }
    func_0x000107c5b134();
    func_0x000107c61180();
    lVar4 = lVar11;
    func_0x000107c42998();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    lVar11 = lVar4;
    if (lVar4 != 0) {
      func_0x000107c49820(lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c307b0(lVar11);
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x91);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x90);
    uVar7 = 0;
    func_0x000103a76890(0);
    func_0x000107c610f8();
    func_0x000103a765a4(uVar10,uVar9,lVar5,param_2,uVar8,lVar11,uVar7);
    func_0x000100cc8524(uVar12,uVar1);
    FUN_101bb47ac(uVar13,uVar2);
  }
  **(undefined8 **)(unaff_x22 + 0x28) = uVar10;
                    /* WARNING: Could not recover jumptable at 0x000101bb3118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bb311c; end: 101bb3177;  */

void FUN_101bb311c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bb3178;
  *(undefined1 *)(plVar1 + 0x17) = 0;
  plVar1[7] = param_3;
  plVar1[8] = param_2;
  func_0x000107c614f0();
  plVar1[9] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb1fa0,0,0);
  return;
}



/* Entry: 101bb3178; end: 101bb31eb;  */

void FUN_101bb3178(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb31c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb31ec,0,0);
  return;
}



/* Entry: 101bb31ec; end: 101bb3287;  */

void FUN_101bb31ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar1 = uVar3;
  FUN_101bb1708(uVar3);
  func_0x000107c6142c(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar1);
  func_0x000107c45788();
  func_0x000107c61170(uVar3);
  *puVar4 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x000101bb3284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bb3288; end: 101bb33d3; -[_TtC24MemoriesDataServicesImpl26MemoriesMemTwoDataProvider fetchSnapsFuture:snapIds:] */

void FUN_101bb3288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = param_3;
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  puVar4 = &UNK_10d91cd60;
  func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x00010007c020(param_3);
  puVar2 = &UNK_110450e50;
  func_0x000107c613fc(&UNK_110450e50,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_4);
  uVar3 = uVar1;
  func_0x000104887c7c(uVar1,puVar4,uVar5,4,0xd00000000000001c,0x800000010f002010,&UNK_10d9db168,
                      puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010007d980(uVar1,puVar4,uVar5);
  func_0x00010488b12c();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101bb33d4; end: 101bb351b;  */

undefined1  [16] FUN_101bb33d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  puVar2 = &UNK_110450d60;
  func_0x000107c613fc(&UNK_110450d60,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar1);
  uVar3 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10d9db158,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x0001000b6d30(0);
  puVar2 = &UNK_110450d88;
  func_0x000107c613fc(&UNK_110450d88,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  pcVar4 = FUN_101bb4dfc;
  func_0x000104885df0(FUN_101bb4dfc,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar1);
  auVar5._8_8_ = &PTR_DAT_1107aaa40;
  auVar5._0_8_ = pcVar4;
  return auVar5;
}



/* Entry: 101bb351c; end: 101bb3573;  */

void FUN_101bb351c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bb3574;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)param_2;
  lVar4 = *(long *)(*param_2 + 0x50);
  plVar1[7] = lVar4;
  lVar2 = 0;
  __sSqMa(0,lVar4);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar4 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101bb3574; end: 101bb35eb;  */

void FUN_101bb3574(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar2 + 0x10);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x50) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101bb35ec;
                    /* WARNING: Could not recover jumptable at 0x000101bb35e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb456c();
  return;
}



/* Entry: 101bb35ec; end: 101bb363f;  */

void FUN_101bb35ec(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  *(undefined1 *)(lVar1 + 0x60) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb3640,0,0);
  return;
}



/* Entry: 101bb3640; end: 101bb39a3;  */

/* WARNING: Removing unreachable block (ram,0x000101bb36e4) */

void FUN_101bb3640(void)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  code *pcVar15;
  
  if (*(char *)(unaff_x22 + 0x60) == '\x01') {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x18) = uVar14;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar7,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
    *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
    lVar3 = 0;
    func_0x000107c5fcbc();
    lVar13 = *(long *)(lVar3 + -8);
    uVar4 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    func_0x000107c614b0(uVar14);
    uVar7 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar5 = uVar4;
    func_0x000107c6147c(uVar4,unaff_x22 + 0x20,uVar7,lVar3,0);
    if ((int)uVar5 == 0) {
      func_0x000107c615c0(uVar4);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x20));
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(unaff_x22 + 0x28) = puVar6;
      func_0x000100087f6c(unaff_x22 + 0x28);
      func_0x000107c61170(puVar6);
      func_0x000100c7f554();
      func_0x000107c614ac(uVar14);
    }
    else {
      func_0x000107c614ac(uVar14);
      (**(code **)(lVar13 + 8))(uVar4,lVar3);
      func_0x000107c615c0(uVar4);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x20));
    }
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c5fd64();
    uVar1 = *(undefined1 *)(unaff_x22 + 0x60);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    puVar6 = PTR_PTR_1126a8bb8;
    func_0x000107c610f8(PTR_PTR_1126a8bb8);
    func_0x000107c453e4();
    func_0x000107c53288();
    FUN_101bb4ed0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = 0;
    func_0x000107c6010c(0);
    func_0x000107c557c4(puVar6);
    func_0x000107c61170(uVar7);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c56498(puVar6);
    func_0x000107c61170(puVar8);
    uVar7 = uVar12;
    func_0x000107c4da58(0x41dfffffffc00000,uVar12);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    uVar9 = uVar7;
    func_0x000107c5cb30(uVar7);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    uVar7 = uVar9;
    func_0x0001000b637c(uVar9);
    func_0x000107c61170(uVar9);
    uVar9 = 0;
    FUN_101bb4ed0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    pcVar10 = FUN_101bb39a4;
    func_0x0001000d5158(FUN_101bb39a4,0,uVar9);
    func_0x000107c61574(uVar7);
    pcVar15 = *(code **)(*(long *)pcVar10 + 0x70);
    func_0x000107c61580(lVar3,2);
    pcVar11 = FUN_101bb4e3c;
    lVar13 = lVar3;
    (*pcVar15)(FUN_101bb4e3c,lVar3,FUN_101bb4e64,lVar3);
    func_0x000107c61578(lVar3,2);
    func_0x000107c61574(pcVar10);
    pcVar10 = pcVar11;
    func_0x000107c614f0(pcVar11);
    (**(code **)(lVar13 + 0x18))(uVar14,pcVar10,lVar13);
    func_0x000107c615e8(pcVar11);
    FUN_101bb47ac(uVar12,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000101bb39a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bb39a4; end: 101bb3ef7;  */

void FUN_101bb39a4(undefined8 *param_1,double param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long extraout_x8;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined1 auStack_130 [8];
  long lStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long alStack_80 [2];
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  uVar17 = *param_3;
  alStack_80[0] = 0;
  puVar5 = &UNK_110450db0;
  func_0x000107c613fc(&UNK_110450db0,0x18,7);
  *(long **)(puVar5 + 0x10) = alStack_80;
  puVar12 = &UNK_110450dd8;
  func_0x000107c613fc(&UNK_110450dd8,0x20,7);
  *(code **)(puVar12 + 0x10) = FUN_101bb4e68;
  *(undefined **)(puVar12 + 0x18) = puVar5;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = (code *)0x101bb4e94;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101379b3c;
  puStack_98 = &UNK_110450df0;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar12;
  func_0x000107c60bc4(ppuVar6);
  puVar13 = puStack_88;
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar13);
  pcStack_90 = FUN_101bb3ef8;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = puVar11;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e27b38;
  puStack_98 = &UNK_110450e18;
  ppuVar7 = &puStack_b0;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_88);
  func_0x000107c4c754(uVar17);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  if (alStack_80[0] == 0) {
    lVar4 = 0;
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar8 = alStack_80[0];
    lStack_118 = lVar19;
    puStack_110 = puVar5;
    puStack_108 = puVar12;
    func_0x000107c61174();
    lVar19 = lVar8;
    func_0x000107c600f4(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000100e15a08();
    func_0x000107c601c0(&puStack_b0,lVar4,lVar19);
    puVar5 = PTR___sypN_11034f1a8;
    if (puStack_98 == (undefined *)0x0) {
      puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lStack_128 = lVar8;
      puStack_120 = param_1;
      do {
        func_0x000100102924(&puStack_b0,auStack_d0);
        func_0x0001000bb420(auStack_d0,auStack_f0);
        uVar17 = 0;
        FUN_101bb4ed0(0,0x112e07010,&PTR_PTR_1126a8bc0);
        plVar9 = &lStack_f8;
        puVar15 = auStack_f0;
        func_0x000107c6147c(plVar9,puVar15,puVar5 + 8,uVar17,6);
        lVar2 = lStack_f8;
        if ((int)plVar9 == 0) {
LAB_101bb3c98:
          func_0x000100183ab8(auStack_d0);
        }
        else {
          lVar10 = lStack_f8;
          func_0x000107c4ca80();
          func_0x000107c61180();
          if (lVar10 == 0) {
LAB_101bb3c90:
            func_0x000107c61170(lVar2);
            goto LAB_101bb3c98;
          }
          func_0x000107c4223c();
          dVar20 = param_2;
          func_0x000107c61170(lVar10);
          bVar1 = param_2 <= 0.0;
          param_2 = dVar20;
          if (bVar1) goto LAB_101bb3c90;
          lVar10 = lVar2;
          func_0x000107c4c994();
          func_0x000107c61180();
          param_2 = dVar20;
          if (lVar10 == 0) goto LAB_101bb3c90;
          func_0x000107c4223c();
          param_2 = dVar20;
          func_0x000107c61170(lVar10);
          if (dVar20 <= 0.0) goto LAB_101bb3c90;
          lVar8 = lVar2;
          func_0x000107c44fcc();
          func_0x000107c61180();
          lVar10 = lVar8;
          func_0x000107c5faec();
          func_0x000107c61170(lVar8);
          lVar8 = lVar2;
          func_0x000107c42998();
          func_0x000107c61180();
          if (lVar8 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = lVar8;
            func_0x000107c49820();
            func_0x000107c61170(lVar8);
            func_0x000107c307b0(lVar18);
          }
          uVar17 = 0;
          func_0x000103a76890(0);
          func_0x000107c610f8();
          func_0x000103a765a4(lVar10,puVar15,0,0xf000000000000000,1,lVar18,uVar17);
          func_0x000107c61170(lVar2);
          func_0x000100183ab8(auStack_d0);
          puVar5 = puStack_100;
          puVar12 = puStack_100;
          func_0x000107c61550();
          param_1 = puStack_120;
          if (((((ulong)puVar12 & 1) == 0) || ((long)puVar5 < 0)) ||
             (((ulong)puVar5 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar5 >> 0x3e == 0) {
              puVar12 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar12 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar5) {
                puVar12 = puVar5;
              }
              func_0x000107c60480(puVar12);
            }
            puVar11 = (undefined *)0x0;
            func_0x000100fb5154(0,puVar12 + 1,1,puVar5);
            puVar5 = puVar11;
          }
          uVar16 = (ulong)puVar5 & 0xffffffffffffff8;
          uVar14 = *(ulong *)(uVar16 + 0x10);
          puStack_100 = puVar5;
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar14) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
            func_0x000100fb5154(puVar12,uVar14 + 1,1,puVar5);
            uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
            puStack_100 = puVar12;
          }
          *(ulong *)(uVar16 + 0x10) = uVar14 + 1;
          *(long *)(uVar16 + uVar14 * 8 + 0x20) = lVar10;
          puVar5 = PTR___sypN_11034f1a8;
          lVar8 = lStack_128;
        }
        func_0x000107c601c0(&puStack_b0,lVar4,lVar19);
      } while (puStack_98 != (undefined *)0x0);
    }
    (**(code **)(lStack_118 + 8))(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    puVar12 = puStack_100;
    puVar13 = puStack_100;
    FUN_101bb1708(puStack_100);
    func_0x000107c6142c(puVar12);
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    puVar12 = puVar13;
    func_0x000107c5fc48(puVar13,puVar5 + 8);
    func_0x000107c6142c(puVar13);
    func_0x000107c45788();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar12);
    lVar4 = alStack_80[0];
    puVar12 = puStack_108;
    puVar5 = puStack_110;
  }
  *param_1 = puVar11;
  func_0x000107c61574(puVar5);
  func_0x000107c61170(lVar4);
  puVar5 = puVar12;
  func_0x000107c61544(puVar12,"",99,0x88,0x31,1);
  func_0x000107c61574(puVar12);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb3ef4);
    (*pcVar3)();
  }
  uVar14 = 0;
  func_0x000107c61544(0,"",99,0x88,0x4a,1);
  if ((uVar14 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb3ef8);
  (*pcVar3)();
}



/* Entry: 101bb3ef8; end: 101bb3efb;  */

void FUN_101bb3ef8(void)

{
  return;
}



/* Entry: 101bb3efc; end: 101bb3fb7; -[_TtC24MemoriesDataServicesImpl26MemoriesMemTwoDataProvider observeMemoryPhotoSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb3efc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112e06fb8);
  puVar2 = &UNK_110450d38;
  func_0x000107c613fc(&UNK_110450d38,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(long *)(puVar2 + 0x18) = lVar1;
  func_0x0001000285a8(0x112d6c540,&UNK_10d92f3c0);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar5);
  pcVar3 = FUN_101bb4d40;
  func_0x0001000b64ac(FUN_101bb4d40,puVar2);
  pcVar4 = pcVar3;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar4);
  return;
}



/* Entry: 101bb3fb8; end: 101bb4017; -[_TtC24MemoriesDataServicesImpl26MemoriesMemTwoDataProvider init] */

void FUN_101bb3fb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesDataServicesImpl.MemoriesMemTwoDataProvider",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb3fe4);
  (*pcVar1)();
}



/* Entry: 101bb4018; end: 101bb4027; -[_TtC24MemoriesDataServicesImpl26MemoriesMemTwoDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb4018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e06fb8));
  return;
}



/* Entry: 101bb4028; end: 101bb408f;  */

void FUN_101bb4028(void)

{
  func_0x000107c61168(&PTR_PTR_1127fbcf0);
  return;
}



/* Entry: 101bb4090; end: 101bb40ef;  */

void FUN_101bb4090(long param_1,undefined1 param_2)

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
  plVar1[1] = (long)FUN_101bb40f0;
  *(undefined1 *)(plVar1 + 0x17) = param_2;
  plVar1[7] = param_1;
  plVar1[8] = lVar2;
  func_0x000107c614f0();
  plVar1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb1fa0,0,0);
  return;
}



/* Entry: 101bb40f0; end: 101bb4137;  */

void FUN_101bb40f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bb4134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bb4138; end: 101bb414b;  */

void FUN_101bb4138(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb414c,0,0);
  return;
}



/* Entry: 101bb414c; end: 101bb41ab;  */

void FUN_101bb414c(undefined1 *param_1)

{
  long unaff_x22;
  
  func_0x00010118a534();
  func_0x000107c613f8(&UNK_1106c4d48,param_1,0,0);
  *param_1 = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bb41a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bb41ac; end: 101bb41e3;  */

void FUN_101bb41ac(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101bb41e4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101bb41e4; end: 101bb444b;  */

undefined * FUN_101bb41e4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb4308);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000100fb0a84();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000103a76890(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101bb444c; end: 101bb4463;  */

void FUN_101bb444c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb4464,0,0);
  return;
}



/* Entry: 101bb4464; end: 101bb452b;  */

void FUN_101bb4464(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101bb44ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bb452c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110450d10;
  func_0x000107c613fc(&UNK_110450d10,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101bb4ce4,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bb452c; end: 101bb456b;  */

void FUN_101bb452c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bb4fd8,0,0);
  return;
}



/* Entry: 101bb456c; end: 101bb4583;  */

void FUN_101bb456c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb4584,0,0);
  return;
}



/* Entry: 101bb4584; end: 101bb464b;  */

void FUN_101bb4584(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101bb45cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bb464c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110450ce8;
  func_0x000107c613fc(&UNK_110450ce8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101bb4cc4,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bb464c; end: 101bb468b;  */

void FUN_101bb464c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bb4fe0,0,0);
  return;
}



/* Entry: 101bb468c; end: 101bb46a3;  */

void FUN_101bb468c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb46a4,0,0);
  return;
}



/* Entry: 101bb46a4; end: 101bb476b;  */

void FUN_101bb46a4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101bb46ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bb476c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110450cc0;
  func_0x000107c613fc(&UNK_110450cc0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101bb4cb8,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bb476c; end: 101bb47ab;  */

void FUN_101bb476c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bb4fdc,0,0);
  return;
}



/* Entry: 101bb47ac; end: 101bb47d7;  */

void FUN_101bb47ac(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 101bb47d8; end: 101bb489f;  */

void FUN_101bb47d8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101bb4820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bb48a0;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110450c98;
  func_0x000107c613fc(&UNK_110450c98,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101bb4cac,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bb48a0; end: 101bb48df;  */

void FUN_101bb48a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb48e0,0,0);
  return;
}



/* Entry: 101bb48e0; end: 101bb48ef;  */

void FUN_101bb48e0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101bb48ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101bb48f0; end: 101bb4ba3;  */

void FUN_101bb48f0(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  lVar11 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  uVar5 = uVar2;
  uVar6 = uVar3;
  func_0x000100029284();
  lVar7 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar13 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
LAB_101bb4b9c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101bb4ba0);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar13) {
    FUN_101bb0a28(lVar13,param_2 & 1);
    uVar5 = uVar2;
    uVar9 = uVar3;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
LAB_101bb49a4:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101bb49b4);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_101bb08b8();
    lVar13 = *param_3;
    goto joined_r0x000101bb4a18;
  }
  lVar13 = *param_3;
joined_r0x000101bb4a18:
  if ((uVar6 & 1) == 0) {
    lVar7 = lVar13 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
    if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
LAB_101bb4ba0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101bb4ba4);
      (*pcVar4)();
    }
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    func_0x000107c61174();
    func_0x000107c61170(uVar12);
    func_0x000107c6142c(uVar3);
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar8;
    func_0x000107c61170(uVar12);
  }
  if (lVar10 != 1) {
    lVar10 = lVar10 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar12 = *puVar14;
      lVar11 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar5 = uVar2;
      uVar6 = uVar3;
      func_0x000100029284();
      lVar7 = *(long *)(lVar11 + 0x10);
      uVar9 = (ulong)~(uint)uVar6 & 1;
      lVar13 = lVar7 + uVar9;
      if (SCARRY8(lVar7,uVar9)) goto LAB_101bb4b9c;
      if (*(long *)(lVar11 + 0x18) < lVar13) {
        FUN_101bb0a28(lVar13,1);
        uVar5 = uVar2;
        uVar9 = uVar3;
        func_0x000100029284();
        if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) goto LAB_101bb49a4;
      }
      lVar13 = *param_3;
      if ((uVar6 & 1) == 0) {
        lVar7 = lVar13 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
        if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_101bb4ba0;
        *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      }
      else {
        uVar8 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        func_0x000107c61174();
        func_0x000107c61170(uVar12);
        func_0x000107c6142c(uVar3);
        uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar8;
        func_0x000107c61170(uVar12);
      }
      puVar14 = puVar14 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 101bb4ba4; end: 101bb4c1f;  */

void FUN_101bb4ba4(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bb4c20;
  plVar4[5] = param_1;
  plVar4[6] = lVar1;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  plVar4[7] = param_3;
  plVar4[8] = lVar1;
  plVar4[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb2bd4,0,0,uVar3);
  return;
}



/* Entry: 101bb4c20; end: 101bb4cab;  */

void FUN_101bb4c20(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bb4c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bb4cac; end: 101bb4cef;  */

void FUN_101bb4cac(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*(code *)0x101bb4fe8)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101bb4cf0; end: 101bb4d3f;  */

void FUN_101bb4cf0(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101bb4d40; end: 101bb4d47;  */

undefined1  [16] FUN_101bb4d40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  puVar3 = &UNK_110450d60;
  func_0x000107c613fc(&UNK_110450d60,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uVar1;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar2);
  uVar4 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10d9db158,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x0001000b6d30(0);
  puVar3 = &UNK_110450d88;
  func_0x000107c613fc(&UNK_110450d88,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  pcVar5 = FUN_101bb4dfc;
  func_0x000104885df0(FUN_101bb4dfc,puVar3);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar2);
  auVar6._8_8_ = &PTR_DAT_1107aaa40;
  auVar6._0_8_ = pcVar5;
  return auVar6;
}



/* Entry: 101bb4d48; end: 101bb4dbf;  */

void FUN_101bb4d48(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bb4dc0;
  plVar3[6] = lVar6;
  plVar3[7] = lVar4;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  plVar3[8] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_101bb3574;
  plVar2[5] = (long)(plVar3 + 2);
  plVar2[6] = (long)plVar1;
  lVar6 = *(long *)(*plVar1 + 0x50);
  plVar2[7] = lVar6;
  lVar4 = 0;
  __sSqMa(0,lVar6);
  plVar2[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[9] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[10] = uVar5;
  lVar4 = *(long *)(lVar6 + -8);
  plVar2[0xb] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101bb4dc0; end: 101bb4dfb;  */

void FUN_101bb4dc0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bb4df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bb4dfc; end: 101bb4e3b;  */

void FUN_101bb4dfc(void)

{
  long unaff_x20;
  
  func_0x000107c5fd50(*(undefined8 *)(unaff_x20 + 0x10),PTR___sytN_11034f1b0 + 8,
                      PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000100c82230();
  return;
}



/* Entry: 101bb4e3c; end: 101bb4e63;  */

void FUN_101bb4e3c(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 101bb4e64; end: 101bb4e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb4e64(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + _DAT_113096918);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_113096918))[1];
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101bb4e68; end: 101bb4eb3;  */

void FUN_101bb4e68(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101bb4eb4; end: 101bb4ecf;  */

void FUN_101bb4eb4(long param_1,long param_2)

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



/* Entry: 101bb4ed0; end: 101bb4f0f;  */

void FUN_101bb4ed0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101bb4f10; end: 101bb4f73;  */

void FUN_101bb4f10(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101bb4ff0;
  plVar4[2] = param_1;
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_101bb3178;
  *(undefined1 *)(plVar3 + 0x17) = 0;
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
  func_0x000107c614f0();
  plVar3[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb1fa0,0,0);
  return;
}



/* Entry: 101bb4f74; end: 101bb4fcb;  */

void FUN_101bb4f74(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101bb4ff4;
  plVar2[2] = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101bb1d6c;
  plVar1[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb18e4,0,0);
  return;
}



/* Entry: 101bb4fcc; end: 101bb5007;  */

void FUN_101bb4fcc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bb4134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bb5008; end: 101bb507b;  */

void FUN_101bb5008(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c51690();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101bb507c; end: 101bb5097;  */

void FUN_101bb507c(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &UNK_110451048;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110451008;
  return;
}



/* Entry: 101bb5098; end: 101bb5277;  */

undefined * FUN_101bb5098(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c46c8;
  func_0x000107c610f8(PTR_PTR_1126c46c8);
  func_0x000107c453e4();
  func_0x000107c59874();
  if (*(long *)(param_2 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c5fadc(uVar2);
  }
  func_0x000107c58bd0(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c5705c(puVar1);
  func_0x000108e01dd0(*(undefined8 *)(param_2 + 8));
  func_0x000107c59558(puVar1);
  if (*(char *)(param_2 + 0x38) != '\x01') {
    func_0x000107c2bcf4(*(undefined8 *)(param_2 + 0x30));
  }
  if (*(long *)(param_2 + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c5fadc(uVar2);
  }
  func_0x000107c53200(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c56498(puVar1);
  func_0x000107c53044(puVar1);
  func_0x000107c5a770(puVar1);
  if (*(long *)(param_2 + 0x58) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    func_0x000107c5fadc(uVar2);
  }
  func_0x000107c545ec(puVar1);
  func_0x000107c61170(uVar2);
  if (*(long *)(param_2 + 0x68) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    func_0x000107c5fadc(uVar2);
  }
  func_0x000107c56420(puVar1);
  func_0x000107c61170(uVar2);
  if (*(long *)(param_2 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    func_0x000107c5fadc(uVar2);
  }
  func_0x000107c593e4(puVar1);
  func_0x000107c61170(uVar2);
  if (*(char *)(param_2 + 0x88) != '\x01') {
    func_0x000107c58bc8(puVar1);
  }
  return puVar1;
}


