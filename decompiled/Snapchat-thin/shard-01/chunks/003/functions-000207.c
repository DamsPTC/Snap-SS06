/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e853dc; end: 100e85577;  */

ulong FUN_100e853dc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e854ac);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e854b0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001033a8e58(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001033a8e58(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000014,0x800000010ef15fd0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e85578);
  (*pcVar2)();
}



/* Entry: 100e85578; end: 100e85763;  */

undefined8 FUN_100e85578(ulong *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long alStack_88 [9];
  
  lVar5 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar5 + 0x28));
  uVar4 = param_2;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar4 = uVar4 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
    do {
      uVar3 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar4 * 8);
      if ((int)uVar3 == (int)param_2) {
        uVar1 = 0;
        goto LAB_100e8564c;
      }
      uVar4 = uVar4 + 1 & ~uVar2;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  alStack_88[0] = *unaff_x20;
  FUN_100e85e98(param_2,uVar4,lVar5);
  *unaff_x20 = alStack_88[0];
  uVar1 = 1;
  uVar3 = param_2;
LAB_100e8564c:
  *param_1 = uVar3;
  return uVar1;
}



/* Entry: 100e85764; end: 100e85973;  */

void FUN_100e85764(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112d44f58;
  func_0x0001000285a8(0x112d44f58,&UNK_10d90a400);
  lVar5 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_100e8593c:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100e85970);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) goto LAB_100e8593c;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar7;
    }
    uVar14 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar14;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100e85974);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 100e85974; end: 100e85ab3;  */

void FUN_100e85974(void)

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
  
  func_0x0001000285a8(0x112d44f58,&UNK_10d90a400);
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100e85ab4);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_100e85a94;
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
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_100e85a94:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 100e85ab4; end: 100e85d07;  */

void FUN_100e85ab4(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
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
  uVar4 = 0x112d44f58;
  func_0x0001000285a8(0x112d44f58,&UNK_10d90a400);
  lVar5 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_100e85cd4:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100e85d04);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_100e85cd4;
        }
        uVar12 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar7;
    }
    uVar15 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100e85d08);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 100e85d08; end: 100e85e97;  */

void FUN_100e85d08(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_98 [72];
  
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x38;
  uVar5 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar5 ^ 0xffffffffffffffff);
  uVar6 = 1L << (uVar9 & 0x3f);
  if ((uVar6 & *(ulong *)(lVar1 + (uVar9 >> 6) * 8)) == 0) {
    uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar5 = ~uVar5;
    uVar7 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar5);
    if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) & uVar6) != 0) {
      uVar6 = uVar7 + 1 & uVar5;
      do {
        uVar7 = *(ulong *)(*(long *)(lVar8 + 0x30) + uVar9 * 8);
        func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar8 + 0x28));
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar7 = uVar7 & uVar5;
        if ((long)param_1 < (long)uVar6) {
          if (uVar7 < uVar6) {
LAB_100e85df0:
            if ((long)param_1 < (long)uVar7) goto LAB_100e85d94;
          }
          puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + param_1 * 8);
          puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar9 * 8);
          if ((param_1 != uVar9) || (puVar3 + 1 <= puVar2)) {
            *puVar2 = *puVar3;
            param_1 = uVar9;
          }
        }
        else if (uVar6 <= uVar7) goto LAB_100e85df0;
LAB_100e85d94:
        uVar9 = uVar9 + 1 & uVar5;
      } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
    }
    uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar5) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar5);
  }
  if (SBORROW8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100e85e98);
    (*pcVar4)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
  *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
  return;
}



/* Entry: 100e85e98; end: 100e85fc7;  */

void FUN_100e85e98(ulong param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_78 [72];
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_100e85974();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_100e85764(uVar3 + 1);
    }
    else {
      FUN_100e85ab4();
    }
    lVar4 = *unaff_x20;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar4 + 0x28));
    param_2 = param_1;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((int)*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == (int)param_1) {
          func_0x000107c60620(&UNK_11064aef0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100e85fc8);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(ulong *)(*(long *)(lVar2 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e85fb8);
  (*pcVar1)();
}



/* Entry: 100e85fc8; end: 100e861db;  */

uint FUN_100e85fc8(ulong param_1,uint param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  
  uVar10 = param_4 & 0xff;
  uVar6 = param_2 >> 5 & 7;
  if (uVar6 < 4) {
    if (uVar6 < 2) {
      if (uVar6 == 0) {
        if (uVar10 < 0x20) {
          if (param_1 >> 0x3e == 0) {
            uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar11 = param_1 & 0xffffffffffffff8;
            if ((param_1 & 0x8000000000000000) != 0) {
              uVar11 = param_1;
            }
            func_0x000107c60480();
          }
          if (param_3 >> 0x3e == 0) {
            uVar3 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar3 = param_3 & 0xffffffffffffff8;
            if ((param_3 & 0x8000000000000000) != 0) {
              uVar3 = param_3;
            }
            func_0x000107c60480();
          }
          if (uVar11 == uVar3) {
            if (uVar11 != 0) {
              uVar7 = param_1 & 0xffffffffffffff8;
              uVar3 = uVar7;
              if ((param_1 & 0x8000000000000000) != 0) {
                uVar3 = param_1;
              }
              uVar4 = uVar7 + 0x20;
              if (param_1 >> 0x3e != 0) {
                uVar4 = uVar3;
              }
              uVar8 = param_3 & 0xffffffffffffff8;
              uVar3 = uVar8;
              if ((param_3 & 0x8000000000000000) != 0) {
                uVar3 = param_3;
              }
              uVar5 = uVar8 + 0x20;
              if (param_3 >> 0x3e != 0) {
                uVar5 = uVar3;
              }
              if (uVar4 != uVar5) {
                if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e85274);
                  (*pcVar2)();
                }
                func_0x0001033a8e58(0);
                if (((param_3 | param_1) & 0xc000000000000001) == 0) {
                  lVar14 = *(long *)(uVar7 + 0x10);
                  lVar15 = *(long *)(uVar8 + 0x10);
                  puVar12 = (ulong *)(param_1 + 0x20);
                  puVar13 = (undefined8 *)(param_3 + 0x20);
                  do {
                    uVar11 = uVar11 - 1;
                    if (lVar14 == 0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e85214);
                      (*pcVar2)();
                    }
                    if (lVar15 == 0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e85218);
                      (*pcVar2)();
                    }
                    uVar7 = *puVar12;
                    uVar9 = *puVar13;
                    func_0x000107c61174();
                    func_0x000107c61174(uVar9);
                    uVar3 = uVar7;
                    func_0x000107c60118(uVar7,uVar9);
                    uVar10 = (uint)uVar3;
                    func_0x000107c61170(uVar7);
                    func_0x000107c61170(uVar9);
                    if ((uVar3 & 1) == 0) break;
                    lVar15 = lVar15 + -1;
                    lVar14 = lVar14 + -1;
                    puVar12 = puVar12 + 1;
                    puVar13 = puVar13 + 1;
                  } while (uVar11 != 0);
                }
                else {
                  lVar14 = 4;
                  do {
                    uVar11 = uVar11 - 1;
                    uVar3 = lVar14 - 4;
                    if ((param_1 & 0xc000000000000001) == 0) {
                      if (*(long *)(uVar7 + 0x10) <= (long)uVar3) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x100e8521c);
                        (*pcVar2)();
                      }
                      uVar4 = *(ulong *)(param_1 + lVar14 * 8);
                      func_0x000107c61174();
                      if ((param_3 & 0xc000000000000001) != 0) goto LAB_100e8510c;
LAB_100e8513c:
                      if (*(long *)(uVar8 + 0x10) <= (long)uVar3) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x100e85220);
                        (*pcVar2)();
                      }
                      uVar3 = *(ulong *)(param_3 + lVar14 * 8);
                      func_0x000107c61174(uVar3);
                    }
                    else {
                      uVar4 = uVar3;
                      FUN_100e853dc(uVar3,param_1);
                      if ((param_3 & 0xc000000000000001) == 0) goto LAB_100e8513c;
LAB_100e8510c:
                      FUN_100e853dc(uVar3,param_3);
                    }
                    uVar5 = uVar4;
                    func_0x000107c60118(uVar4,uVar3);
                    uVar10 = (uint)uVar5;
                    func_0x000107c61170(uVar4);
                    func_0x000107c61170(uVar3);
                  } while (((uVar5 & 1) != 0) && (lVar14 = lVar14 + 1, uVar11 != 0));
                }
                goto LAB_100e8524c;
              }
            }
            uVar10 = 1;
          }
          else {
            uVar10 = 0;
          }
LAB_100e8524c:
          return uVar10 & 1;
        }
      }
      else if ((param_4 & 0xe0) == 0x20) {
LAB_100e86054:
        return (uint)((int)param_1 == (int)param_3);
      }
    }
    else if (uVar6 == 2) {
      if ((param_4 & 0xe0) == 0x40) goto LAB_100e86054;
    }
    else if ((param_4 & 0xe0) == 0x60) {
      uVar9 = 0;
      func_0x0001007bbbf8(0);
      func_0x000107c60118(param_1,param_3,uVar9);
      return (uint)param_1 & 1;
    }
  }
  else {
    uVar1 = param_2 & 0xff;
    if (uVar6 < 6) {
      if (uVar6 == 4) {
        if ((char)param_4 < -0x60) goto LAB_100e86054;
      }
      else if ((param_4 & 0xe0) == 0xa0) {
LAB_100e8606c:
        uVar6 = 0;
        if ((int)param_1 == (int)param_3) {
          uVar6 = (uint)(((uVar10 ^ uVar1) & 0x1f) == 0);
        }
        return uVar6;
      }
    }
    else if (uVar6 == 6) {
      if ((param_4 & 0xe0) == 0xc0) goto LAB_100e8606c;
    }
    else {
      uVar11 = ~(long)(char)param_2;
      if ((long)(-0x20 - ((long)(char)param_2 + (ulong)(param_1 >= 3))) < 0 ==
          (SCARRY8(uVar11,-0x20) != SCARRY8(uVar11 - 0x20,(ulong)(param_1 < 3)))) {
        if (param_1 == 0 && uVar1 == 0xe0) {
          if (((0xdf < uVar10) && (param_3 == 0)) && (uVar10 == 0xe0)) {
            return 1;
          }
        }
        else if (uVar1 == 0xe0 && param_1 == 1) {
          if (((0xdf < uVar10) && (param_3 == 1)) && (uVar10 == 0xe0)) {
            return 1;
          }
        }
        else if (((0xdf < uVar10) && (param_3 == 2)) && (uVar10 == 0xe0)) {
          return 1;
        }
      }
      else if (uVar1 == 0xe0 && param_1 == 3) {
        if (((0xdf < uVar10) && (param_3 == 3)) && (uVar10 == 0xe0)) {
          return 1;
        }
      }
      else if (uVar1 == 0xe0 && param_1 == 4) {
        if (((0xdf < uVar10) && (param_3 == 4)) && (uVar10 == 0xe0)) {
          return 1;
        }
      }
      else if (((0xdf < uVar10) && (param_3 == 5)) && (uVar10 == 0xe0)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 100e861dc; end: 100e861f3;  */

bool FUN_100e861dc(int param_1,short param_2,int param_3,short param_4)

{
  return param_1 == param_3 && param_2 == param_4;
}



/* Entry: 100e861f4; end: 100e862c3;  */

undefined8 FUN_100e861f4(char *param_1,char *param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x000100e85274(uVar2,*(undefined8 *)(param_2 + 8));
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ushort *)(param_2 + 0x18) & 0xff;
    if ((*(ushort *)(param_1 + 0x18) & 0xff) == 2) {
      if (uVar1 != 2) {
        return 0;
      }
    }
    else {
      if (uVar1 == 2) {
        return 0;
      }
      if ((int)*(undefined8 *)(param_1 + 0x10) != (int)*(undefined8 *)(param_2 + 0x10)) {
        return 0;
      }
      if (*(ushort *)(param_1 + 0x18) != *(ushort *)(param_2 + 0x18)) {
        return 0;
      }
    }
    if (param_1[0x28] == '\x01') {
      if (param_2[0x28] == '\x01') {
        return 1;
      }
    }
    else if ((param_2[0x28] != '\x01') && (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 100e862c4; end: 100e8632f;  */

void FUN_100e862c4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100e86bcc;
  plVar3[0x14] = lVar2;
  plVar3[0x15] = lVar4;
  plVar3[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8480c,0,0);
  return;
}



/* Entry: 100e86330; end: 100e8639b;  */

void FUN_100e86330(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100e8639c;
  plVar3[0x14] = lVar2;
  plVar3[0x15] = lVar4;
  plVar3[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e84504,0,0);
  return;
}



/* Entry: 100e8639c; end: 100e86403;  */

void FUN_100e8639c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100e863d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100e86404; end: 100e8646f;  */

void FUN_100e86404(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100e86bd0;
  plVar3[0x14] = lVar2;
  plVar3[0x15] = lVar4;
  plVar3[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8480c,0,0);
  return;
}



/* Entry: 100e86470; end: 100e864d3;  */

void FUN_100e86470(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100e86bd4;
  plVar3[0x13] = lVar1;
  plVar3[0x14] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e84298,0,0);
  return;
}



/* Entry: 100e864d4; end: 100e864e3;  */

long FUN_100e864d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 100e864e4; end: 100e864fb;  */

void FUN_100e864e4(long param_1)

{
  FUN_100e864fc(param_1 + 0x20);
  return;
}



/* Entry: 100e864fc; end: 100e8653f;  */

void FUN_100e864fc(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100e86510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100e86540; end: 100e865af;  */

void FUN_100e86540(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = param_1;
  FUN_100e865b0();
  lVar2 = lVar3;
  func_0x000107c5fe14(lVar3,&UNK_11064aef0,lVar1);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    lStack_38 = lVar2;
    do {
      FUN_100e85578(auStack_40,*puVar4);
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 100e865b0; end: 100e865ef;  */

void FUN_100e865b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44f50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbbd0f0;
  func_0x000107c61520(&UNK_10dbbd0f0,&UNK_11064aef0);
  puRam0000000112d44f50 = puVar1;
  return;
}



/* Entry: 100e865f0; end: 100e86947;  */

void FUN_100e865f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 100e86948; end: 100e86987;  */

void FUN_100e86948(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90a440;
  func_0x000107c61520(&UNK_10d90a440,&UNK_11035d8f0);
  puRam0000000112d44f60 = puVar1;
  return;
}



/* Entry: 100e86988; end: 100e8698b;  */

void FUN_100e86988(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90a4a8;
  func_0x000107c61520(&UNK_10d90a4a8,&UNK_11035d860);
  puRam0000000112d44f68 = puVar1;
  return;
}



/* Entry: 100e8698c; end: 100e869cb;  */

void FUN_100e8698c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90a4a8;
  func_0x000107c61520(&UNK_10d90a4a8,&UNK_11035d860);
  puRam0000000112d44f68 = puVar1;
  return;
}



/* Entry: 100e869cc; end: 100e86b23;  */

int FUN_100e869cc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100e86a48;
        goto LAB_100e86a2c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100e86a2c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_100e86a48:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100e86b24; end: 100e86b63;  */

void FUN_100e86b24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90a544;
  func_0x000107c61520(&UNK_10d90a544,&UNK_11035d980);
  puRam0000000112d44f70 = puVar1;
  return;
}



/* Entry: 100e86b64; end: 100e86bd7;  */

void FUN_100e86b64(long param_1)

{
  FUN_100e864fc(param_1 + 0x20);
  return;
}



/* Entry: 100e86bd8; end: 100e86c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e86bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112d44f78;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d44f80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d44f88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d44f90) = param_3;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e86c8c; end: 100e87047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e86c8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined ****ppppuVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined ***apppuStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined1 uStack_b8;
  undefined8 auStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112d44f88) + _DAT_112f60de0);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = _DAT_112d46820;
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d44f80);
    func_0x000107c61428(lVar1 + _DAT_112d46820,apppuStack_e0,0,0);
    lVar1 = lVar1 + lVar3;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c401ec();
      func_0x000107c615e8(lVar1);
    }
  }
  else {
    lVar2 = 0;
    func_0x000100e87388();
    lVar3 = lVar2;
    func_0x000107c613fc();
    puVar4 = PTR_PTR_1126a5e80;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar3 + 0x10) = puVar4;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d44f90);
    func_0x000107c615f0(lVar1);
    func_0x000107c6157c(lVar3);
    func_0x000107c42498();
    func_0x000107c61180();
    ppuStack_68 = &PTR_DAT_11035da30;
    lVar5 = 0;
    alStack_88[0] = lVar3;
    lStack_70 = lVar2;
    FUN_100e84b40();
    lVar11 = lVar5;
    func_0x000107c613fc();
    func_0x0001000c6518(alStack_88,lVar2);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    puVar13 = (undefined8 *)((long)apppuStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar13);
    auStack_b0[0] = *puVar13;
    ppuStack_90 = &PTR_DAT_11035da30;
    *(long *)(lVar11 + 0x50) = lVar1;
    lStack_98 = lVar2;
    FUN_100e87320(auStack_b0,lVar11 + 0x58);
    *(undefined8 *)(lVar11 + 0x80) = uVar10;
    apppuStack_e0[0] = (undefined ***)((ulong)apppuStack_e0[0] & 0xffffffffffffff00);
    apppuStack_e0[1] = (undefined ***)PTR___swiftEmptySetSingleton_11034f1d8;
    apppuStack_e0[2] = (undefined ***)0x0;
    lStack_c8 = CONCAT62(lStack_c8._2_6_,2);
    ppuStack_c0 = (undefined **)0x0;
    uStack_b8 = 1;
    ppppuVar6 = apppuStack_e0;
    func_0x000103dbf4dc();
    func_0x0001000834e4(auStack_b0);
    func_0x0001000834e4(alStack_88);
    ppuStack_c0 = &PTR_DAT_11035d3c0;
    uVar10 = 0;
    apppuStack_e0[0] = (undefined ***)ppppuVar6;
    lStack_c8 = lVar5;
    FUN_100e882e0(0);
    func_0x000107c610f8();
    func_0x0001000c6518(apppuStack_e0,lVar5);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    plVar12 = (long *)((long)apppuStack_e0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_00 + 0x10))(plVar12);
    lVar11 = *plVar12;
    func_0x000107c6157c(ppppuVar6);
    FUN_100e871e8(lVar11,uVar10);
    func_0x0001000834e4(apppuStack_e0);
    uVar10 = *(undefined8 *)(lVar11 + _DAT_112d45070);
    func_0x000107c6157c(ppppuVar6);
    func_0x000107c6157c(uVar10);
    func_0x000103dbf524();
    func_0x000107c61574(uVar10);
    func_0x000103dbf46c();
    func_0x000107c61574(ppppuVar6);
    pcVar7 = FUN_100e87048;
    func_0x0001000c0ebc(FUN_100e87048,0);
    func_0x000107c61574(uVar10);
    puVar4 = &UNK_11035d9f8;
    func_0x000107c613fc(&UNK_11035d9f8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcVar8 = FUN_100e872f8;
    puVar9 = puVar4;
    (**(code **)(*(long *)pcVar7 + 0x60))(FUN_100e872f8);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(puVar4);
    pcVar7 = pcVar8;
    func_0x000107c614f0(pcVar8);
    (**(code **)(puVar9 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d44f78),pcVar7,puVar9);
    func_0x000107c615e8(pcVar8);
    func_0x000107c3e2c0(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d44f80) + _DAT_112d46818));
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(ppppuVar6);
    func_0x000107c61170(lVar11);
  }
  return;
}



/* Entry: 100e87048; end: 100e87057;  */

bool FUN_100e87048(char *param_1)

{
  return *param_1 == '\x02';
}



/* Entry: 100e87058; end: 100e87107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e87058(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112d44f80);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    lVar1 = _DAT_112d46820;
    func_0x000107c61428(lVar2 + _DAT_112d46820,auStack_50,0,0);
    lVar1 = lVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c401ec(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 100e87108; end: 100e87167; -[_TtC26SCConnectedAccountsFeature27ConnectedAccountsEntryPoint init] */

void FUN_100e87108(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConnectedAccountsFeature.ConnectedAccountsEntryPoint",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e87134);
  (*pcVar1)();
}



/* Entry: 100e87168; end: 100e871df; -[_TtC26SCConnectedAccountsFeature27ConnectedAccountsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e87168(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d44f80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d44f88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d44f90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d44f78));
  return;
}



/* Entry: 100e871e0; end: 100e871e7;  */

undefined8 FUN_100e871e0(void)

{
  return 0;
}



/* Entry: 100e871e8; end: 100e872f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100e871e8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_68;
  long lStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  lVar2 = param_2;
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_100e84b40();
  lVar1 = _DAT_112d45070;
  ppuStack_38 = &PTR_DAT_11035d3c0;
  uVar4 = 0x112d44fc0;
  auStack_58[0] = param_1;
  uStack_40 = uVar3;
  func_0x0001000285a8(0x112d44fc0,&UNK_10d90a5e0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_2 + lVar1) = uVar4;
  lVar1 = _DAT_112d45078;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_2 + lVar1) = uVar4;
  *(undefined8 *)(param_2 + _DAT_112d45080) = 0;
  *(undefined **)(param_2 + _DAT_112d45088) = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100e87320(auStack_58,param_2 + _DAT_112d45068);
  plVar5 = &lStack_68;
  lStack_68 = param_2;
  lStack_60 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(auStack_58);
  return plVar5;
}



/* Entry: 100e872f8; end: 100e872ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e872f8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d44f80);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_112d46820;
    func_0x000107c61428(lVar2 + _DAT_112d46820,auStack_50,0,0);
    lVar1 = lVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c401ec(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 100e87300; end: 100e8731f;  */

void FUN_100e87300(void)

{
  func_0x000107c61168(&PTR_PTR_11279c6a0);
  return;
}



/* Entry: 100e87320; end: 100e87363;  */

long FUN_100e87320(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100e87364; end: 100e873a7;  */

void FUN_100e87364(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e873a8; end: 100e874cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e873a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d45080;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d45080);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x000100e8740c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100e874d0; end: 100e875af; -[_TtC26SCConnectedAccountsFeature31ConnectedAccountsViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e874d0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112d45070;
  uVar3 = 0x112d44fc0;
  func_0x0001000285a8(0x112d44fc0,&UNK_10d90a5e0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lVar1 = _DAT_112d45078;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112d45080) = 0;
  *(undefined **)(param_1 + _DAT_112d45088) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCConnectedAccountsFeature/ConnectedAccountsViewController.swift",0x40,2,0x2a
                      ,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e875b0);
  (*pcVar2)();
}



/* Entry: 100e875b0; end: 100e875e3; -[_TtC26SCConnectedAccountsFeature31ConnectedAccountsViewController loadScrollView] */

void FUN_100e875b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e873a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e875e4; end: 100e87637; -[_TtC26SCConnectedAccountsFeature31ConnectedAccountsViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e875e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 5;
  uStack_28 = 0xe0;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100e87638; end: 100e8775f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e87638(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  uVar1 = unaff_x20;
  func_0x000107c44ca0();
  func_0x000107c61180();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef160d0);
  func_0x000107c59e18(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  uVar1 = unaff_x20;
  func_0x000107c44ca0();
  func_0x000107c61180();
  func_0x000107c54210();
  func_0x000107c61170(uVar1);
  func_0x000107c55098();
  FUN_100e873a8();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(unaff_x20);
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(puVar3);
  FUN_100e87760();
  uStack_50 = 0;
  uStack_48 = 0xe0;
  func_0x0001002a64a8(&uStack_50);
  return;
}



/* Entry: 100e87760; end: 100e87a37;  */

/* WARNING: Possible PIC construction at 0x000100e87848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e878e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e87980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e878e8) */
/* WARNING: Removing unreachable block (ram,0x000100e8784c) */
/* WARNING: Removing unreachable block (ram,0x000100e87984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e87760(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112d45068,*(undefined8 *)(unaff_x20 + _DAT_112d45068 + 0x18))
  ;
  plVar1 = (long *)0x0;
  FUN_100e84b40();
  (*(code *)(undefined *)0x100e82e24)();
  puVar2 = &UNK_11035da60;
  func_0x000107c613fc(&UNK_11035da60,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_100e88860;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_100e88860);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d45078),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 100e87a38; end: 100e87a5f; -[_TtC26SCConnectedAccountsFeature31ConnectedAccountsViewController viewDidLoad] */

void FUN_100e87a38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e87638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e87a60; end: 100e87b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e87a60(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112d45088);
    *(undefined8 *)(param_2 + _DAT_112d45088) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c6142c(uVar3);
    lVar1 = param_2;
    func_0x000107c4a714();
    if ((int)lVar1 != 0) {
      FUN_100e873a8();
      func_0x000107c4fd7c();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100e87b74; end: 100e87d77;  */

void FUN_100e87b74(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  lVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (lVar3 != 0) {
      func_0x000100e87bf8(uVar1,lVar3,uVar2,uVar4);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100e87d78; end: 100e87e03;  */

void FUN_100e87d78(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (lVar2 != 0) {
      uStack_78 = uVar1;
      uStack_70 = uVar3;
      lStack_68 = lVar2;
      uStack_60 = uVar4;
      uStack_58 = uVar5;
      FUN_100e87e04(&uStack_78);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100e87e04; end: 100e880cf;  */

void FUN_100e87e04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  uVar1 = param_1[1];
  uVar8 = param_1[2];
  uVar4 = param_1[3];
  uVar10 = param_1[4];
  func_0x000107c5fadc(uVar1,uVar8);
  func_0x000107c5fadc(uVar4,uVar10);
  puVar2 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  func_0x000107c61168(PTR__OBJC_CLASS___UIAlertController_1126aeb78);
  func_0x000107c3dac0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  puVar3 = &UNK_11035da60;
  func_0x000107c613fc(&UNK_11035da60,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  func_0x000107c6157c(puVar3);
  uVar4 = 0x6c65636e6143;
  func_0x000107c5fadc(0x6c65636e6143,0xe600000000000000);
  pcStack_80 = FUN_100e88880;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x100df8ce8;
  puStack_88 = &UNK_11035da78;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  puVar6 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  func_0x000107c61168(PTR__OBJC_CLASS___UIAlertAction_1126aeb80);
  puVar7 = puVar6;
  func_0x000107c3cffc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3d598(puVar2);
  func_0x000107c61170(puVar7);
  puVar3 = &UNK_11035da60;
  func_0x000107c613fc(&UNK_11035da60,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar7 = &UNK_11035dab0;
  func_0x000107c613fc(&UNK_11035dab0,0x40,7);
  *(undefined **)(puVar7 + 0x10) = puVar3;
  uVar4 = *param_1;
  uVar11 = param_1[3];
  uVar1 = param_1[2];
  *(undefined8 *)(puVar7 + 0x20) = param_1[1];
  *(undefined8 *)(puVar7 + 0x18) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar1;
  *(undefined8 *)(puVar7 + 0x38) = param_1[4];
  func_0x000107c6157c(puVar3);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar10);
  uVar8 = 0x656e6e6f63736944;
  func_0x000107c5fadc(0x656e6e6f63736944,0xea00000000007463);
  pcStack_80 = (code *)0x100e888b8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x100df8ce8;
  puStack_88 = &UNK_11035dac8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c3cffc(puVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c3d598(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c4f018();
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 100e880d0; end: 100e881eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e880d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d45070);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_50 = 0xe0;
    uStack_58 = param_3;
    func_0x0001002a64a8(&uStack_58);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100e881ec; end: 100e88217; -[_TtC26SCConnectedAccountsFeature31ConnectedAccountsViewController initWithNibName:bundle:] */

void FUN_100e881ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConnectedAccountsFeature.ConnectedAccountsViewController",0x3a,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e88218);
  (*pcVar1)();
}



/* Entry: 100e88218; end: 100e88277; -[_TtC26SCConnectedAccountsFeature31ConnectedAccountsViewController initWithNibName:bundle:transitionType:] */

void FUN_100e88218(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConnectedAccountsFeature.ConnectedAccountsViewController",0x3a,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e88244);
  (*pcVar1)();
}



/* Entry: 100e88278; end: 100e882df; -[_TtC26SCConnectedAccountsFeature31ConnectedAccountsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e88278(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d45068);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d45070));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d45078));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d45080));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d45088));
  return;
}



/* Entry: 100e882e0; end: 100e882ff;  */

void FUN_100e882e0(void)

{
  func_0x000107c61168(&PTR_PTR_11279c778);
  return;
}



/* Entry: 100e88300; end: 100e88313; -[_TtC26SCConnectedAccountsFeature31ConnectedAccountsViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100e88300(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + _DAT_112d45088) + 0x10);
}



/* Entry: 100e88314; end: 100e88503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e88314(undefined *param_1)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef16070);
  uVar5 = uVar4;
  func_0x000107c5efd4();
  func_0x000107c417dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar5 = 0;
  FUN_100e822dc(0);
  puVar6 = param_1;
  func_0x000107c61480(param_1,uVar5);
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c61170(param_1);
    puVar6 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    func_0x000107c610f8(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar6;
  }
  puVar7 = puVar6;
  func_0x000107c5efe4();
  if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e884f8);
    (*pcVar3)();
  }
  if (*(undefined **)(*(long *)(unaff_x20 + _DAT_112d45088) + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e884fc);
    (*pcVar3)();
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112d45088) + (long)puVar7 * 0x20;
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  uVar10 = *(undefined8 *)(lVar1 + 0x30);
  uVar2 = *(undefined1 *)(lVar1 + 0x38);
  *(undefined ***)(puVar6 + _DAT_112d44d40 + 8) = &PTR_DAT_11035da40;
  func_0x000107c61604();
  func_0x000107c61434(uVar10);
  func_0x000107c61174();
  puVar7 = param_1;
  func_0x000107c5efe4();
  if (-1 < (long)puVar7) {
    puVar8 = puVar7;
    FUN_100e873a8();
    func_0x000107c5eff4();
    puVar9 = puVar8;
    func_0x000107c4d930();
    func_0x000107c61170(puVar8);
    if (-1 < (long)puVar9) {
      func_0x000107c30a60(1,puVar7,puVar9);
      func_0x000107c59a2c(puVar6);
      func_0x000107c61170(param_1);
      FUN_100e81dec(uVar5,uVar4,uVar10,uVar2);
      func_0x000107c6142c(uVar10);
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e88504);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100e88500);
  (*pcVar3)();
}



/* Entry: 100e88504; end: 100e885cb; -[_TtC26SCConnectedAccountsFeature31ConnectedAccountsViewController tableView:cellForRowAtIndexPath:] */

void FUN_100e88504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_100e88314(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e885cc; end: 100e886fb; -[_TtC26SCConnectedAccountsFeature31ConnectedAccountsViewController tableView:heightForRowAtIndexPath:] */

undefined8
FUN_100e885cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5)
  ;
  puVar3 = PTR_PTR_1126b5a18;
  func_0x000107c61168(PTR_PTR_1126b5a18);
  func_0x000107c61174();
  lVar4 = param_2;
  func_0x000107c5efe4();
  if (lVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100e886f8);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  FUN_100e873a8();
  func_0x000107c5eff4();
  lVar6 = lVar5;
  func_0x000107c4d930();
  func_0x000107c61170(lVar5);
  if (-1 < lVar6) {
    func_0x000107c30a60(1,lVar4,lVar6);
    func_0x000107c44dac(puVar3);
    func_0x000107c61170(param_2);
    (**(code **)(lVar7 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e886fc);
  (*pcVar1)();
}



/* Entry: 100e886fc; end: 100e8885f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e886fc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar8 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar6 = lVar7 - extraout_x12;
  FUN_100e873a8();
  lVar4 = lVar3;
  func_0x000107c4534c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    func_0x000107c5efdc(lVar7,lVar4);
    func_0x000107c61170(lVar4);
    uVar5 = uVar6;
    (**(code **)(lVar8 + 0x20))(uVar6,lVar7,lVar2);
    func_0x000107c5efe4();
    lVar3 = _DAT_112d45088;
    if ((long)uVar5 < *(long *)(*(long *)(unaff_x20 + _DAT_112d45088) + 0x10)) {
      func_0x000107c5efe4();
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e8885c);
        (*pcVar1)();
      }
      if (*(ulong *)(*(long *)(unaff_x20 + lVar3) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e88860);
        (*pcVar1)();
      }
      uStack_60 = *(undefined8 *)(*(long *)(unaff_x20 + lVar3) + uVar5 * 0x20 + 0x20);
      uStack_58 = 0x20;
      func_0x0001002a64a8(&uStack_60);
    }
    (**(code **)(lVar8 + 8))(uVar6,lVar2);
  }
  return;
}



/* Entry: 100e88860; end: 100e8887f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e88860(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112d45088);
    *(undefined8 *)(lVar1 + _DAT_112d45088) = uVar3;
    func_0x000107c61434(uVar3);
    func_0x000107c6142c(uVar4);
    lVar2 = lVar1;
    func_0x000107c4a714();
    if ((int)lVar2 != 0) {
      FUN_100e873a8();
      func_0x000107c4fd7c();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100e88880; end: 100e8889b;  */

void FUN_100e88880(void)

{
  FUN_100e880d0();
  return;
}



/* Entry: 100e8889c; end: 100e888c3;  */

void FUN_100e8889c(long param_1,long param_2)

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



/* Entry: 100e888c4; end: 100e888df;  */

void FUN_100e888c4(void)

{
  FUN_100e880d0();
  return;
}



/* Entry: 100e888e0; end: 100e888ef;  */

void FUN_100e888e0(long param_1,long param_2)

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



/* Entry: 100e888f0; end: 100e888fb; -[SCConnectedAccountsEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e888f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d450b8;
  func_0x000107c61428(param_1 + _DAT_112d450b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e888fc; end: 100e88907; -[SCConnectedAccountsEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e888fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d450b8;
  func_0x000107c61428(param_1 + _DAT_112d450b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e88908; end: 100e88913; -[SCConnectedAccountsEntryPoint connectedAccountsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e88908(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d450c0;
  func_0x000107c61428(param_1 + _DAT_112d450c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e88914; end: 100e8891f; -[SCConnectedAccountsEntryPoint setConnectedAccountsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e88914(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d450c0;
  func_0x000107c61428(param_1 + _DAT_112d450c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e88920; end: 100e8892b; -[SCConnectedAccountsEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e88920(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d450c8;
  func_0x000107c61428(param_1 + _DAT_112d450c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e8892c; end: 100e8896f;  */

void FUN_100e8892c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e88970; end: 100e8897b; -[SCConnectedAccountsEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e88970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d450c8;
  func_0x000107c61428(param_1 + _DAT_112d450c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e8897c; end: 100e889cf;  */

void FUN_100e8897c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e889d0; end: 100e88b5f;  */

/* WARNING: Possible PIC construction at 0x000100e88ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e88af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e88b38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e88af8) */
/* WARNING: Removing unreachable block (ram,0x000100e88ae8) */
/* WARNING: Removing unreachable block (ram,0x000100e88b3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e889d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c401f4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5d9b4();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_100e87300();
      lVar5 = lVar4;
      func_0x000107c610f8();
      lVar1 = _DAT_112d44f78;
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar6 = unaff_x20;
      func_0x0001000c6580();
      *(long *)(lVar5 + lVar1) = lVar6;
      *(long *)(lVar5 + _DAT_112d44f80) = lVar2;
      *(long *)(lVar5 + _DAT_112d44f88) = lVar3;
      *(long *)(lVar5 + _DAT_112d44f90) = unaff_x20;
      lStack_70 = lVar5;
      lStack_68 = lVar4;
      func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
      FUN_100e86c8c();
      lVar2 = unaff_x20;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100e88b60; end: 100e88b87; -[SCConnectedAccountsEntryPoint begin] */

void FUN_100e88b60(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e889d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e88b88; end: 100e88bcb; -[SCConnectedAccountsEntryPoint end] */

void FUN_100e88b88(undefined8 param_1)

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



/* Entry: 100e88bcc; end: 100e88dd3;  */

void FUN_100e88bcc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10e9ec0)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010ef16140,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SCConnectedAccountsFeature/SCConnectedAccountsEntryPoint.swift",
                                0x3e,2,0x2d,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100e88dd4);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a368();
        goto LAB_100e88c58;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53760();
  }
LAB_100e88c58:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e88dd4; end: 100e88e7f; -[SCConnectedAccountsEntryPoint setValue:forIvarName:] */

void FUN_100e88dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e88bcc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e88e80; end: 100e88f07; -[SCConnectedAccountsEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e88e80(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d450b8,0);
  func_0x000107c61614(param_1 + _DAT_112d450c0,0);
  func_0x000107c61614(param_1 + _DAT_112d450c8,0);
  *(undefined8 *)(param_1 + _DAT_112d450d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e88f08; end: 100e88f3b;  */

void FUN_100e88f08(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e88f3c; end: 100e88f93; -[SCConnectedAccountsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e88f3c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d450b8);
  func_0x000107c61610(param_1 + _DAT_112d450c0);
  func_0x000107c61610(param_1 + _DAT_112d450c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d450d0));
  return;
}



/* Entry: 100e88f94; end: 100e88fb3;  */

void FUN_100e88f94(void)

{
  func_0x000107c61168(&PTR_PTR_11279c858);
  return;
}



/* Entry: 100e88fb4; end: 100e88fcb;  */

void FUN_100e88fb4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e88fcc,0,0);
  return;
}



/* Entry: 100e88fcc; end: 100e891db;  */

void FUN_100e88fcc(undefined *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int *piVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (cRam0000000112d45688 != '\x01') {
    lVar8 = *(long *)(unaff_x22 + 0xb0);
    puVar2 = (undefined8 *)(lVar8 + 0x10);
    func_0x0001000a8868(puVar2,*(undefined8 *)(lVar8 + 0x28));
    uVar5 = *(undefined8 *)(lVar8 + 0x50);
    uVar4 = *(undefined8 *)(lVar8 + 0x48);
    uVar9 = *(undefined8 *)(lVar8 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar8 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
    uVar5 = *(undefined8 *)(lVar8 + 0x70);
    uVar4 = *(undefined8 *)(lVar8 + 0x68);
    uVar9 = *(undefined8 *)(lVar8 + 0x78);
    uVar11 = *(undefined8 *)(lVar8 + 0x90);
    uVar10 = *(undefined8 *)(lVar8 + 0x88);
    uVar13 = *(undefined8 *)(lVar8 + 0x60);
    uVar12 = *(undefined8 *)(lVar8 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(lVar8 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
    piVar7 = *(int **)(*(long *)*puVar2 + 0x80);
    iVar1 = *piVar7;
    plVar3 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100e891dc;
                    /* WARNING: Could not recover jumptable at 0x000100e890a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))
              (plVar3,unaff_x22 + 0x70,0,0xc000000000000000,unaff_x22 + 0x10);
    return;
  }
  if (bRam0000000112d455c8 < 2) {
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (bRam0000000112d455c8 == 0) goto LAB_100e891c0;
    func_0x000100e8aed8();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 3;
    *(undefined8 *)(param_1 + 0x10) = 1;
    func_0x0001033a8e58(0);
    func_0x000107c610f8();
    uVar4 = 1;
  }
  else {
    if (bRam0000000112d455c8 != 2) {
      func_0x000100e8aed8();
      func_0x000107c613fc();
      *(undefined8 *)(param_1 + 0x18) = 5;
      *(undefined8 *)(param_1 + 0x10) = 2;
      uVar4 = 0;
      func_0x0001033a8e58(0);
      func_0x000107c610f8();
      uVar5 = 1;
      func_0x0001033a8c40();
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      func_0x000107c610f8(uVar4);
      uVar4 = 2;
      func_0x0001033a8c40();
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      puVar6 = param_1;
      goto LAB_100e891c0;
    }
    func_0x000100e8aed8();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 3;
    *(undefined8 *)(param_1 + 0x10) = 1;
    func_0x0001033a8e58(0);
    func_0x000107c610f8();
    uVar4 = 2;
  }
  func_0x0001033a8c40();
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  puVar6 = param_1;
LAB_100e891c0:
                    /* WARNING: Could not recover jumptable at 0x000100e891d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar6);
  return;
}



/* Entry: 100e891dc; end: 100e89237;  */

void FUN_100e891dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100e89238;
  }
  else {
    pcVar1 = FUN_100e894bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e89238; end: 100e894bb;  */

void FUN_100e89238(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  char *pcVar12;
  
  if (((*(ulong *)(unaff_x22 + 0x98) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    FUN_100e89fe4();
    func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 3;
    func_0x000107c61654();
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0x80);
    if ((*(ulong *)(unaff_x22 + 0x98) >> 0x3d & 1) != 0) {
      lVar8 = *(long *)(lVar10 + 0x10);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar8 == 0) {
LAB_100e89484:
        FUN_100e8a024(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000100e894b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(puVar6);
        return;
      }
      lVar11 = 0;
LAB_100e89340:
      pcVar12 = (char *)(lVar10 + 0x28 + lVar11 * 0x20);
      lVar11 = lVar11 + 1;
      do {
        if (*(ulong *)(lVar10 + 0x10) <= lVar11 - 1U) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100e894bc);
          (*pcVar2)();
        }
        if ((*pcVar12 == '\x01') && (lVar9 = *(long *)(pcVar12 + -8), lVar9 != 0)) {
          uVar3 = 0;
          func_0x0001033a8e58(0);
          func_0x000107c610f8();
          func_0x0001033a8c40(lVar9,uVar3);
          if (lVar9 != 0) goto code_r0x000100e893a4;
        }
        lVar11 = lVar11 + 1;
        pcVar12 = pcVar12 + 0x20;
        if (lVar11 - lVar8 == 1) goto LAB_100e89484;
      } while( true );
    }
    lVar8 = *(long *)(unaff_x22 + 0x88);
    FUN_100e89fe4();
    func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
    *param_1 = lVar10;
    param_1[1] = lVar8;
    *(undefined1 *)(param_1 + 2) = 0;
    func_0x000107c61654();
    func_0x000107c61434(lVar8);
  }
  FUN_100e8a024(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000100e89310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
code_r0x000100e893a4:
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
    FUN_100e8992c(0,puVar4 + 1,1,puVar6,0x100e8aed8,FUN_100e89ae8);
  }
  uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar7 + 0x10);
  puVar6 = puVar5;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_100e8992c(puVar6,uVar1 + 1,1,puVar5,0x100e8aed8,FUN_100e89ae8);
    uVar7 = (ulong)puVar6 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
  *(long *)(uVar7 + uVar1 * 8 + 0x20) = lVar9;
  if (lVar11 == lVar8) goto LAB_100e89484;
  goto LAB_100e89340;
}



/* Entry: 100e894bc; end: 100e8952f;  */

void FUN_100e894bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_100e89fe4();
  func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 3;
  func_0x000107c61654();
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100e8952c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e89530; end: 100e8959f;  */

void FUN_100e89530(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  FUN_100e19120(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e895a0; end: 100e89713;  */

void FUN_100e895a0(undefined8 param_1,undefined8 *param_2)

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



/* Entry: 100e89714; end: 100e8973b;  */

void FUN_100e89714(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100e8973c; end: 100e897bf;  */

void FUN_100e8973c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d451d0;
  FUN_100e8a108(0x112d451d0,FUN_100e8a09c,&UNK_10d90a8d0);
  uVar2 = 0x112d451d8;
  FUN_100e8a108(0x112d451d8,FUN_100e8a09c,&UNK_10d90a870);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 100e897c0; end: 100e89837;  */

undefined8 FUN_100e897c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 100e89838; end: 100e8992b;  */

undefined1 * FUN_100e89838(undefined8 param_1,undefined8 param_2)

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



/* Entry: 100e8992c; end: 100e89a67;  */

ulong FUN_100e8992c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e89a68);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100e89a68(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e89a64);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100e89a68; end: 100e89ae7;  */

undefined * FUN_100e89a68(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100e89ae8; end: 100e89bdf;  */

long FUN_100e89ae8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100e89bdc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100e89be0);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001033a8e58(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x0001033a8e58(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e89bd8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100e89be0; end: 100e89bf7;  */

void FUN_100e89be0(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e89bf8,0,0);
  return;
}



/* Entry: 100e89bf8; end: 100e89e17;  */

void FUN_100e89bf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (cRam0000000112d45688 == '\x01') {
    if (bRam0000000112d45608 < 3) {
      if (bRam0000000112d45608 == 0) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
        uVar1 = 0;
        func_0x0001033a8e58(0);
        func_0x000107c610f8();
        func_0x0001033a8c40(uVar4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100e89d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      if (bRam0000000112d45608 == 1) {
        FUN_100e89fe4();
        func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
        puVar2 = param_1 + 2;
        param_1[1] = 0;
        *param_1 = 8;
      }
      else {
        FUN_100e89fe4();
        func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
        puVar2 = param_1 + 2;
        param_1[1] = 0;
        *param_1 = 9;
      }
    }
    else if (bRam0000000112d45608 < 5) {
      if (bRam0000000112d45608 == 3) {
        FUN_100e89fe4();
        func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
        puVar2 = param_1 + 2;
        param_1[1] = 0;
        *param_1 = 10;
      }
      else {
        FUN_100e89fe4();
        func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
        puVar2 = param_1 + 2;
        param_1[1] = 0;
        *param_1 = 0xb;
      }
    }
    else {
      if (bRam0000000112d45608 != 5) {
        FUN_100e89fe4();
        func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
        uVar3 = 0;
        puVar2 = param_1 + 2;
        *param_1 = 0xd000000000000011;
        param_1[1] = 0x800000010ef161a0;
        goto LAB_100e89ca0;
      }
      FUN_100e89fe4();
      func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
      puVar2 = param_1 + 2;
      param_1[1] = 0;
      *param_1 = 0xc;
    }
  }
  else {
    FUN_100e89fe4();
    func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
    puVar2 = param_1 + 2;
    *param_1 = 0;
    param_1[1] = 0;
  }
  uVar3 = 3;
LAB_100e89ca0:
  *(undefined1 *)puVar2 = uVar3;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100e89cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e89e18; end: 100e89e2b;  */

void FUN_100e89e18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e89e2c,0,0);
  return;
}



/* Entry: 100e89e2c; end: 100e89fe3;  */

void FUN_100e89e2c(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  undefined1 uVar2;
  long unaff_x22;
  
  if (cRam0000000112d45688 == '\x01') {
    if (bRam0000000112d45648 < 3) {
      if (bRam0000000112d45648 == 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_100e89ee0;
      }
      if (bRam0000000112d45648 == 1) {
        FUN_100e89fe4();
        func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
        puVar1 = param_1 + 2;
        param_1[1] = 0;
        *param_1 = 0xd;
      }
      else {
        FUN_100e89fe4();
        func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
        puVar1 = param_1 + 2;
        param_1[1] = 0;
        *param_1 = 0xe;
      }
      goto LAB_100e89ecc;
    }
    if (bRam0000000112d45648 == 3) {
      FUN_100e89fe4();
      func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
      puVar1 = param_1 + 2;
      param_1[1] = 0;
      *param_1 = 0xf;
      goto LAB_100e89ecc;
    }
    if (bRam0000000112d45648 == 4) {
      FUN_100e89fe4();
      func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
      puVar1 = param_1 + 2;
      param_1[1] = 0;
      *param_1 = 0x10;
      goto LAB_100e89ecc;
    }
    FUN_100e89fe4();
    func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
    uVar2 = 0;
    puVar1 = param_1 + 2;
    *param_1 = 0xd000000000000011;
    param_1[1] = 0x800000010ef161a0;
  }
  else {
    FUN_100e89fe4();
    func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
    puVar1 = param_1 + 2;
    *param_1 = 0;
    param_1[1] = 0;
LAB_100e89ecc:
    uVar2 = 3;
  }
  *(undefined1 *)puVar1 = uVar2;
  func_0x000107c61654();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100e89ee0:
                    /* WARNING: Could not recover jumptable at 0x000100e89ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


