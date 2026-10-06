/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102654bf0; end: 102654cc3;  */

undefined8 FUN_102654bf0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_102654e38(param_3,param_4);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x00010265522c(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 102654cc4; end: 102654e37;  */

void FUN_102654cc4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102654db4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102654f98(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102654d78);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102654e38(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000102654dd0;
  }
  lVar6 = *unaff_x20;
joined_r0x000102654dd0:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102654e38);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102654e38; end: 102654f97;  */

void FUN_102654e38(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102654f04;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_102654f04:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102654f98);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102654f70;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_102654f70:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102654f98; end: 10265576f;  */

void FUN_102654f98(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
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
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1026551f8:
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
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102655228);
          (*pcVar6)();
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
          goto LAB_1026551f8;
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
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10265522c);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
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
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102655770; end: 102655793;  */

void FUN_102655770(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      func_0x000107c61174(param_1);
      func_0x000107c439a4(uVar2);
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar2);
      FUN_102653b6c(uVar3,param_1);
      lVar4 = *(long *)(lVar1 + 0x60);
      if (lVar4 != 0) {
        func_0x000107c61174();
        func_0x000102653d14();
        func_0x000107c61170(lVar4);
      }
      func_0x000107c61574(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(uVar3);
    }
  }
  return;
}



/* Entry: 102655794; end: 1026557f7;  */

undefined8 FUN_102655794(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1026557f8; end: 102655807;  */

undefined1  [16] FUN_1026557f8(void)

{
  return ZEXT816(0x11052e288);
}



/* Entry: 102655808; end: 102655827;  */

void FUN_102655808(void)

{
  func_0x000107c61168(&PTR_PTR_112eb1848);
  return;
}



/* Entry: 102655828; end: 1026558bf;  */

undefined8 FUN_102655828(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1026558c0; end: 102655aaf;  */

ulong FUN_1026558c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   char param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  long lVar8;
  
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = 0;
  func_0x0001038be9b4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001038be638(param_1,param_2);
  uVar5 = 0;
  func_0x0001038bee3c(0);
  uVar6 = uVar5;
  func_0x000107c610f8();
  func_0x0001038bea34(lVar4,uVar6);
  func_0x000107c610f8();
  func_0x0001038be638(param_3,param_4);
  func_0x000107c610f8(uVar5);
  func_0x0001038bea34(lVar3,uVar5);
  lVar7 = lVar3;
  func_0x0001011452cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 5;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  *(long *)(lVar7 + 0x20) = lVar4;
  *(long *)(lVar7 + 0x28) = lVar3;
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar3);
  lVar8 = lVar3;
  func_0x000107c5ef04(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = (uint)lVar8;
  func_0x000107c5eee8();
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  uVar6 = 5;
  if (param_5 != '\0') {
    uVar6 = 10;
  }
  func_0x0001038bf720(0);
  func_0x000107c610f8();
  uVar9 = (ulong)~uVar1 & 1;
  func_0x0001038bf128(uVar9,uVar6,lVar7);
  func_0x0001038bd84c(0);
  func_0x000107c610f8();
  func_0x0001038bd198(uVar9);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  return uVar9;
}



/* Entry: 102655ab0; end: 102655bff;  */

void FUN_102655ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb1908,&UNK_10dac6260);
  puVar1 = &UNK_11052e2b8;
  func_0x000107c613fc(&UNK_11052e2b8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102655c00,puVar1);
  return;
}



/* Entry: 102655c00; end: 102655c0b;  */

void FUN_102655c00(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_102656094();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_50;
  *(undefined8 *)(lVar2 + 0x18) = uStack_58;
  *(undefined8 *)(lVar2 + 0x20) = uStack_48;
  *(undefined8 *)(lVar2 + 0x28) = uStack_60;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11052e2d0;
  *param_1 = lVar2;
  return;
}



/* Entry: 102655c0c; end: 102655c5b;  */

void FUN_102655c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 102655c5c; end: 102655e23;  */

/* WARNING: Possible PIC construction at 0x000102655ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102655cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102655cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102655d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102655da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102655db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102655e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102655dbc) */
/* WARNING: Removing unreachable block (ram,0x000102655dac) */
/* WARNING: Removing unreachable block (ram,0x000102655d2c) */
/* WARNING: Removing unreachable block (ram,0x000102655e00) */
/* WARNING: Removing unreachable block (ram,0x000102655d4c) */
/* WARNING: Removing unreachable block (ram,0x000102655cfc) */
/* WARNING: Removing unreachable block (ram,0x000102655d00) */
/* WARNING: Removing unreachable block (ram,0x000102655cdc) */
/* WARNING: Removing unreachable block (ram,0x000102655dcc) */
/* WARNING: Removing unreachable block (ram,0x000102655ce0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102655cac) */
/* WARNING: Removing unreachable block (ram,0x000102655de8) */
/* WARNING: Removing unreachable block (ram,0x000102655cb0) */
/* WARNING: Removing unreachable block (ram,0x000102655e08) */
/* WARNING: Removing unreachable block (ram,0x000102655e0c) */

void FUN_102655c5c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5dc04(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102655e24; end: 102656027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102655e24(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_113083f78;
  puVar8 = PTR___sSSN_11034da80;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    lVar13 = *(long *)(unaff_x20 + 0x28);
    uVar10 = *(ulong *)(unaff_x20 + 0x10);
    puVar14 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar7 = puVar14[-1];
      puVar1 = (undefined *)*puVar14;
      uVar12 = *(undefined8 *)(lVar13 + lVar2);
      uStack_70 = uVar7;
      puStack_68 = puVar1;
      func_0x000107c61434(puVar1);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar3 = uVar12;
      func_0x000107c5faec();
      func_0x000107c61170(uVar12);
      uStack_80 = uVar3;
      puStack_78 = param_2;
      func_0x000100e8b654();
      puVar4 = &uStack_80;
      puVar9 = puVar8;
      func_0x000107c60204(puVar4,puVar8,puVar8,uVar12,uVar12);
      func_0x000107c6142c(param_2);
      if (puVar4 == (undefined8 *)0x0) {
LAB_102655e8c:
        func_0x000107c6142c(puVar1);
      }
      else {
        uVar5 = uVar10;
        func_0x000107c4c3ac();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (uVar6 == 0) goto LAB_102655e8c;
        puVar9 = puVar1;
        func_0x000107c5fadc(uVar7);
        uVar5 = uVar6;
        func_0x000107c4e680();
        func_0x000107c61180();
        func_0x000107c615e8(uVar6);
        func_0x000107c61170(uVar7);
        if (uVar5 == 0) goto LAB_102655e8c;
        uVar6 = uVar5;
        func_0x000107c4a3ec();
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(puVar1);
        if ((uVar6 & 1) != 0) break;
      }
      puVar14 = puVar14 + 2;
      lVar11 = lVar11 + -1;
      param_2 = puVar9;
    } while (lVar11 != 0);
  }
  puVar8 = PTR_PTR_1126a63f8;
  func_0x000107c610f8(PTR_PTR_1126a63f8);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  func_0x000107c46a14(puVar8);
  func_0x000107c61170(param_1);
  return puVar8;
}



/* Entry: 102656028; end: 102656063;  */

void FUN_102656028(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102656064; end: 102656083;  */

void FUN_102656064(void)

{
  FUN_102655c5c();
  return;
}



/* Entry: 102656084; end: 102656093;  */

undefined1  [16] FUN_102656084(void)

{
  return ZEXT816(0x11052e2f0);
}



/* Entry: 102656094; end: 1026560b3;  */

void FUN_102656094(void)

{
  func_0x000107c61168(&PTR_PTR_112eb1950);
  return;
}



/* Entry: 1026560b4; end: 1026561ab;  */

void FUN_1026560b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb19c8,&UNK_10dac62f0);
  puVar1 = &UNK_11052e318;
  func_0x000107c613fc(&UNK_11052e318,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026561ac,puVar1);
  return;
}



/* Entry: 1026561ac; end: 1026561b3;  */

void FUN_1026561ac(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  FUN_102656710();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_40;
  *(undefined8 *)(lVar2 + 0x18) = uStack_38;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11052e330;
  *param_1 = lVar2;
  return;
}



/* Entry: 1026561b4; end: 1026561ef;  */

void FUN_1026561b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1026561f0; end: 1026563c3;  */

void FUN_1026561f0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (((param_2 & 1) == 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c61434(uVar2);
    func_0x000102656284(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      func_0x000107c61434(uVar2);
      FUN_1026563c4(uVar1,uVar2);
      func_0x000107c6142c(uVar2);
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1026563c4; end: 1026566b3;  */

/* WARNING: Possible PIC construction at 0x000102656438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265645c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102656500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265660c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102656658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102656668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026565b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026565c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026565bc) */
/* WARNING: Removing unreachable block (ram,0x00010265666c) */
/* WARNING: Removing unreachable block (ram,0x00010265665c) */
/* WARNING: Removing unreachable block (ram,0x000102656610) */
/* WARNING: Removing unreachable block (ram,0x000102656614) */
/* WARNING: Removing unreachable block (ram,0x000102656540) */
/* WARNING: Removing unreachable block (ram,0x000102656544) */
/* WARNING: Removing unreachable block (ram,0x000102656504) */
/* WARNING: Removing unreachable block (ram,0x000102656548) */
/* WARNING: Removing unreachable block (ram,0x000102656550) */
/* WARNING: Removing unreachable block (ram,0x0001026565d0) */
/* WARNING: Removing unreachable block (ram,0x0001026565d4) */
/* WARNING: Removing unreachable block (ram,0x000102656670) */
/* WARNING: Removing unreachable block (ram,0x000102656678) */
/* WARNING: Removing unreachable block (ram,0x000102656680) */
/* WARNING: Removing unreachable block (ram,0x0001026565e8) */
/* WARNING: Removing unreachable block (ram,0x000102656568) */
/* WARNING: Removing unreachable block (ram,0x000102656508) */
/* WARNING: Removing unreachable block (ram,0x000102656460) */
/* WARNING: Removing unreachable block (ram,0x0001026564b8) */
/* WARNING: Removing unreachable block (ram,0x0001026564c0) */
/* WARNING: Removing unreachable block (ram,0x000102656468) */
/* WARNING: Removing unreachable block (ram,0x0001026564cc) */
/* WARNING: Removing unreachable block (ram,0x000102656474) */
/* WARNING: Removing unreachable block (ram,0x0001026566a0) */
/* WARNING: Removing unreachable block (ram,0x00010265647c) */
/* WARNING: Removing unreachable block (ram,0x0001026566b0) */
/* WARNING: Removing unreachable block (ram,0x000102656488) */
/* WARNING: Removing unreachable block (ram,0x000102656490) */
/* WARNING: Removing unreachable block (ram,0x00010265643c) */
/* WARNING: Removing unreachable block (ram,0x0001026564d8) */
/* WARNING: Removing unreachable block (ram,0x000102656440) */
/* WARNING: Removing unreachable block (ram,0x0001026565cc) */
/* WARNING: Removing unreachable block (ram,0x000102656684) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026563c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113072718);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4b6ec(lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1026566b4; end: 1026566df;  */

void FUN_1026566b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026566e0; end: 1026566ff;  */

void FUN_1026566e0(void)

{
  FUN_1026561f0();
  return;
}



/* Entry: 102656700; end: 10265670f;  */

undefined1  [16] FUN_102656700(void)

{
  return ZEXT816(0x11052e350);
}



/* Entry: 102656710; end: 10265672f;  */

void FUN_102656710(void)

{
  func_0x000107c61168(&PTR_PTR_112eb1a10);
  return;
}



/* Entry: 102656730; end: 102656953;  */

undefined8 FUN_102656730(undefined8 param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  long lVar12;
  undefined8 ***pppuStack_78;
  
  if (param_2 != 0) {
    func_0x000107c4f4f0();
    func_0x000107c61180();
    if (param_2 != 0) {
      pppuStack_78 = (undefined8 ****)0x0;
      uVar4 = 0;
      func_0x0001011434e4(0);
      ppppuVar7 = &pppuStack_78;
      func_0x000107c5fc50(param_2,ppppuVar7,uVar4);
      func_0x000107c61170(param_2);
      pppuVar2 = pppuStack_78;
      if ((undefined8 ****)pppuStack_78 != (undefined8 ****)0x0) {
        ppppuVar10 = (undefined8 ****)((ulong)pppuStack_78 & 0xffffffffffffff8);
        if ((ulong)pppuStack_78 >> 0x3e == 0) {
          ppppuVar9 = (undefined8 ****)ppppuVar10[2];
        }
        else {
          ppppuVar9 = (undefined8 ****)pppuStack_78;
          if (-1 < (long)pppuStack_78) {
            ppppuVar9 = ppppuVar10;
          }
          func_0x000107c60480();
        }
        if (ppppuVar9 != (undefined8 ****)0x0) {
          lVar12 = 4;
          do {
            pppuVar11 = (undefined8 ***)(lVar12 + -4);
            if (((ulong)pppuVar2 & 0xc000000000000001) == 0) {
              if (ppppuVar10[2] <= pppuVar11) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102656908);
                (*pcVar3)();
              }
              pppuVar5 = (undefined8 ***)pppuVar2[lVar12];
              func_0x000107c61174();
              ppppuVar8 = ppppuVar7;
            }
            else {
              pppuVar5 = pppuVar11;
              ppppuVar8 = (undefined8 ****)pppuVar2;
              func_0x00010111c554();
            }
            ppppuVar1 = (undefined8 ****)(lVar12 + -3);
            if (SCARRY8((long)pppuVar11,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102656904);
              (*pcVar3)();
            }
            pppuVar11 = pppuVar5;
            func_0x000107c4a8c4();
            func_0x000107c61180();
            ppppuVar7 = ppppuVar8;
            if (pppuVar11 != (undefined8 ***)0x0) {
              pppuVar6 = pppuVar11;
              func_0x000107c5faec();
              ppppuVar7 = ppppuVar8;
              func_0x000107c61170(pppuVar11);
              if ((pppuVar6 == (undefined8 ***)0x6e6f6973726576) &&
                 (ppppuVar8 == (undefined8 ****)0xe700000000000000)) {
                func_0x000107c6142c(0xe700000000000000);
              }
              else {
                ppppuVar7 = ppppuVar8;
                func_0x000107c605b8(pppuVar6,ppppuVar8,0x6e6f6973726576,0xe700000000000000,0);
                func_0x000107c6142c(ppppuVar8);
                if (((ulong)pppuVar6 & 1) == 0) goto LAB_1026567cc;
              }
              pppuVar11 = pppuVar5;
              func_0x000107c5d108();
              func_0x000107c61180();
              if (pppuVar11 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102656950);
                (*pcVar3)();
              }
              pppuVar6 = pppuVar11;
              func_0x000107c5dc3c();
              func_0x000107c61170(pppuVar11);
              if ((int)pppuVar6 == 5) {
                pppuVar11 = pppuVar5;
                func_0x000107c5d108();
                func_0x000107c61180();
                if (pppuVar11 != (undefined8 ***)0x0) {
                  func_0x000107c4223c();
                  func_0x000107c6142c(pppuVar2);
                  func_0x000107c61170(pppuVar11);
                  func_0x000107c61170(pppuVar5);
                  return param_1;
                }
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102656954);
                (*pcVar3)();
              }
            }
LAB_1026567cc:
            func_0x000107c61170(pppuVar5);
            lVar12 = lVar12 + 1;
          } while (ppppuVar1 != ppppuVar9);
        }
        func_0x000107c6142c(pppuVar2);
      }
    }
  }
  return 0;
}



/* Entry: 102656954; end: 1026571ff;  */

ulong FUN_102656954(ulong param_1,ulong param_2)

{
  code *pcVar1;
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
  long lVar12;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_70;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar9 == 0) {
    return 0;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uVar10 = 0;
LAB_1026569c8:
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
LAB_102656e14:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102656e18);
      (*pcVar1)();
    }
    uVar6 = *(ulong *)(param_1 + 0x20 + uVar10 * 8);
    func_0x000107c61174();
    uVar8 = param_2;
  }
  else {
    uVar6 = uVar10;
    uVar8 = param_1;
    func_0x00010111c554();
  }
  uVar11 = uVar10 + 1;
  if (SCARRY8(uVar10,1)) {
LAB_102656e10:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102656e14);
    (*pcVar1)();
  }
  uVar2 = uVar6;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (uVar2 == 0) {
LAB_1026569b4:
    func_0x000107c61170(uVar6);
    param_2 = uVar8;
    goto LAB_1026569bc;
  }
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar7 = uVar8;
  func_0x000107c61170(uVar2);
  uVar2 = uVar8;
  if ((uVar3 != 0x656d616e) || (uVar8 != 0xe400000000000000)) {
    uVar4 = 0;
    uVar7 = 0xe400000000000000;
    func_0x000107c605b8(0x656d616e,0xe400000000000000,uVar3,uVar8,0);
    if ((uVar4 & 1) != 0) goto LAB_102656a6c;
LAB_102656c5c:
    if ((uVar3 == 0x72752d6567616d69) && (uVar2 == 0xe90000000000006c)) {
      func_0x000107c6142c(0xe90000000000006c);
      uVar8 = uVar7;
    }
    else {
      uVar10 = 0x72752d6567616d69;
      uVar8 = 0xe90000000000006c;
      func_0x000107c605b8(0x72752d6567616d69,0xe90000000000006c,uVar3,uVar2,0);
      func_0x000107c6142c(uVar2);
      if ((uVar10 & 1) == 0) goto LAB_1026569b4;
    }
    uVar10 = uVar6;
    func_0x000107c5d108();
    func_0x000107c61180();
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102656e40);
      (*pcVar1)();
    }
    uVar2 = uVar10;
    func_0x000107c5dc3c();
    func_0x000107c61170(uVar10);
    if ((int)uVar2 != 2) goto LAB_1026569b4;
    uVar10 = uVar6;
    func_0x000107c5d108();
    func_0x000107c61180();
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102656e44);
      (*pcVar1)();
    }
    uVar2 = uVar10;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar2 == 0) {
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uStack_80);
      uStack_90 = 0;
      uStack_80 = 0;
      param_2 = uVar8;
    }
    else {
      uStack_90 = uVar2;
      func_0x000107c5faec();
      param_2 = uVar8;
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uStack_80);
      uStack_80 = uVar8;
    }
    goto LAB_1026569bc;
  }
LAB_102656a6c:
  uVar4 = uVar6;
  func_0x000107c5d108();
  func_0x000107c61180();
  if (uVar4 == 0) {
LAB_102656e34:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102656e38);
    (*pcVar1)();
  }
  uVar5 = uVar4;
  func_0x000107c5dc3c();
  func_0x000107c61170(uVar4);
  if ((int)uVar5 != 2) goto LAB_102656c5c;
  func_0x000107c6142c(uVar8);
  uVar8 = uVar6;
  func_0x000107c5d108();
  func_0x000107c61180();
  if (uVar8 == 0) {
LAB_102656e38:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102656e3c);
    (*pcVar1)();
  }
  uVar2 = uVar8;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  if (uVar2 != 0) goto LAB_102656ad8;
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uStack_70);
  uVar4 = uStack_80;
  if (uVar11 != uVar9) {
    lVar12 = uVar10 + 5;
    do {
      uVar10 = lVar12 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) goto LAB_102656e14;
        uVar6 = *(ulong *)(param_1 + lVar12 * 8);
        func_0x000107c61174();
        uVar8 = uVar7;
      }
      else {
        uVar6 = uVar10;
        uVar8 = param_1;
        func_0x00010111c554();
      }
      uVar11 = lVar12 - 3;
      if (SCARRY8(uVar10,1)) goto LAB_102656e10;
      uVar10 = uVar6;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (uVar10 == 0) {
        uStack_88 = 0;
        uStack_70 = 0;
        goto LAB_1026569b4;
      }
      uVar3 = uVar10;
      func_0x000107c5faec();
      uVar7 = uVar8;
      func_0x000107c61170(uVar10);
      if ((uVar3 != 0x656d616e) || (uVar8 != 0xe400000000000000)) {
        uVar10 = 0;
        uVar7 = 0xe400000000000000;
        func_0x000107c605b8(0x656d616e,0xe400000000000000,uVar3,uVar8,0);
        if ((uVar10 & 1) != 0) goto LAB_102656bc8;
LAB_102656c54:
        uStack_88 = 0;
        uStack_70 = 0;
        uVar2 = uVar8;
        goto LAB_102656c5c;
      }
LAB_102656bc8:
      uVar10 = uVar6;
      func_0x000107c5d108();
      func_0x000107c61180();
      if (uVar10 == 0) goto LAB_102656e34;
      uVar2 = uVar10;
      func_0x000107c5dc3c();
      func_0x000107c61170(uVar10);
      if ((int)uVar2 != 2) goto LAB_102656c54;
      func_0x000107c6142c(uVar8);
      uVar10 = uVar6;
      func_0x000107c5d108();
      func_0x000107c61180();
      if (uVar10 == 0) goto LAB_102656e38;
      uVar2 = uVar10;
      func_0x000107c5c1d4();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      if (uVar2 != 0) goto LAB_102656d78;
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(0);
      lVar12 = lVar12 + 1;
      if (uVar11 == uVar9) break;
    } while( true );
  }
  goto LAB_102656dd4;
LAB_102656d78:
  uStack_70 = 0;
LAB_102656ad8:
  uStack_88 = uVar2;
  func_0x000107c5faec();
  param_2 = uVar7;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uStack_70);
  uStack_70 = uVar7;
LAB_1026569bc:
  uVar10 = uVar11;
  if (uVar11 == uVar9) goto LAB_102656d80;
  goto LAB_1026569c8;
LAB_102656d80:
  uVar4 = uStack_80;
  if (uStack_70 != 0) {
    uVar9 = uStack_88 & 0xffffffffffff;
    if ((uStack_70 & 0x2000000000000000) != 0) {
      uVar9 = uStack_70 >> 0x38 & 0xf;
    }
    if (uVar9 != 0) {
      uVar4 = uStack_70;
      if (uStack_80 == 0) goto LAB_102656dd4;
      uVar9 = uStack_90 & 0xffffffffffff;
      if ((uStack_80 & 0x2000000000000000) != 0) {
        uVar9 = uStack_80 >> 0x38 & 0xf;
      }
      if (uVar9 != 0) {
        return uStack_88;
      }
    }
    func_0x000107c6142c(uStack_70);
    uVar4 = uStack_80;
  }
LAB_102656dd4:
  func_0x000107c6142c(uVar4);
  return 0;
}



/* Entry: 102657200; end: 102657367;  */

undefined8 FUN_102657200(double param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = lVar6 - extraout_x12_00;
  lVar2 = unaff_x20;
  func_0x000107c4a984();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5ee94(lVar6);
    func_0x000107c61170(lVar2);
    (**(code **)(lVar8 + 0x20))(uVar4,lVar6,lVar1);
    func_0x000107c5ee84();
    if (param_1 <= -60.0) {
      (**(code **)(lVar8 + 8))(uVar4,lVar1);
    }
    else {
      func_0x000107c41324();
      func_0x000107c61180();
      func_0x000107c5ee94(puVar5);
      func_0x000107c61170(unaff_x20);
      uVar3 = uVar4;
      func_0x000107c5ee78(uVar4,puVar5);
      pcVar7 = *(code **)(lVar8 + 8);
      (*pcVar7)(puVar5,lVar1);
      (*pcVar7)(uVar4,lVar1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 102657368; end: 1026579fb;  */

uint FUN_102657368(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar10;
  ulong unaff_x20;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  uint uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puStack_78 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar9 - extraout_x12_00;
  lVar14 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar19 - extraout_x8_00;
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  uVar20 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar20 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar11 - extraout_x12_02;
  uVar5 = unaff_x20;
  func_0x000107c49cec();
  if ((uVar5 & 1) != 0) {
LAB_1026574d4:
    uVar12 = 0;
    goto LAB_1026579d8;
  }
  lVar6 = param_1;
  func_0x000107c4a984();
  func_0x000107c61180();
  lStack_80 = param_1;
  if (lVar6 != 0) {
    func_0x000107c5ee94(lVar21);
    func_0x000107c61170(lVar6);
  }
  pcVar10 = *(code **)(lVar13 + 0x38);
  (*pcVar10)(lVar21,lVar6 == 0,1,lVar4);
  (*pcVar10)(lVar11,1,1,lVar4);
  lVar14 = (long)*(int *)(lVar14 + 0x30);
  func_0x0001009f0578(lVar21,lVar17);
  func_0x0001009f0578(lVar11,lVar17 + lVar14);
  pcVar10 = *(code **)(lVar13 + 0x30);
  lVar6 = lVar17;
  lStack_88 = lVar13;
  (*pcVar10)(lVar17,1,lVar4);
  if ((int)lVar6 == 1) {
    FUN_1026579fc(lVar11,0x112d373d8,&UNK_10d9014c0);
    FUN_1026579fc(lVar21,0x112d373d8,&UNK_10d9014c0);
    lVar14 = lVar17 + lVar14;
    (*pcVar10)(lVar14,1,lVar4);
    lVar6 = lStack_88;
    if ((int)lVar14 == 1) {
      FUN_1026579fc(lVar17,0x112d373d8,&UNK_10d9014c0);
      uVar12 = 0;
      goto LAB_1026579d8;
    }
LAB_102657650:
    lVar14 = 0x112d373d0;
    FUN_1026579fc(lVar17,0x112d373d0,&UNK_10d90f8f0);
  }
  else {
    func_0x0001009f0578(lVar17,uVar20);
    lVar13 = lVar17 + lVar14;
    (*pcVar10)(lVar13,1,lVar4);
    lVar6 = lStack_88;
    if ((int)lVar13 == 1) {
      FUN_1026579fc(lVar11,0x112d373d8,&UNK_10d9014c0);
      FUN_1026579fc(lVar21,0x112d373d8,&UNK_10d9014c0);
      lVar6 = lStack_88;
      (**(code **)(lStack_88 + 8))(uVar20,lVar4);
      goto LAB_102657650;
    }
    lVar13 = lVar19;
    (**(code **)(lStack_88 + 0x20))(lVar19,lVar17 + lVar14,lVar4);
    func_0x000100df4c40();
    uVar5 = uVar20;
    func_0x000107c5fab8(uVar20,lVar19,lVar4,lVar13);
    pcVar10 = *(code **)(lVar6 + 8);
    (*pcVar10)(lVar19,lVar4);
    lVar14 = 0x112d373d8;
    FUN_1026579fc(lVar11,0x112d373d8,&UNK_10d9014c0);
    FUN_1026579fc(lVar21,0x112d373d8,&UNK_10d9014c0);
    (*pcVar10)(uVar20,lVar4);
    FUN_1026579fc(lVar17,0x112d373d8,&UNK_10d9014c0);
    if ((uVar5 & 1) != 0) goto LAB_1026574d4;
  }
  uVar5 = unaff_x20;
  func_0x000107c41324(unaff_x20);
  func_0x000107c61180();
  func_0x000107c5ee94(lVar9);
  func_0x000107c61170(uVar5);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61168();
  puVar18 = puVar7;
  func_0x000107c5ee70();
  puVar15 = puVar7;
  func_0x000107c43874(0x404e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar18);
  if (puVar15 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    lVar14 = -0x2000000000000000;
  }
  else {
    puVar18 = puVar15;
    func_0x000107c5faec();
    func_0x000107c61170(puVar15);
  }
  puVar1 = puStack_78;
  pcVar10 = *(code **)(lVar6 + 8);
  lVar13 = lVar4;
  (*pcVar10)(lVar9);
  lVar11 = lStack_80;
  func_0x000107c41324(lStack_80);
  func_0x000107c61180();
  func_0x000107c5ee94(puVar1);
  func_0x000107c61170(lVar11);
  func_0x000107c5ee70();
  func_0x000107c43874(0x404e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (puVar7 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    lVar13 = -0x2000000000000000;
  }
  else {
    puVar15 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
  }
  (*pcVar10)(puVar1);
  if ((puVar18 == puVar15) && (lVar14 == lVar13)) {
    func_0x000107c6142c(lVar14);
    func_0x000107c6142c();
    uVar12 = 0;
  }
  else {
    lVar4 = lVar14;
    func_0x000107c605b8(puVar18,lVar14,puVar15,lVar13,0);
    func_0x000107c6142c(lVar14);
    func_0x000107c6142c();
    uVar12 = (uint)puVar18 ^ 1;
  }
  lVar14 = lStack_80;
  func_0x000102656e44();
  lVar11 = lVar13;
  lVar9 = lVar4;
  func_0x000102656e44();
  if ((lVar13 == lVar11) && (lVar4 == lVar9)) {
    func_0x000107c6142c(lVar4);
    func_0x000107c6142c(lVar9);
    uVar2 = (uint)lVar9;
    uVar16 = 0;
  }
  else {
    func_0x000107c605b8(lVar13,lVar4,lVar11,lVar9,0);
    func_0x000107c6142c(lVar4);
    func_0x000107c6142c(lVar9);
    uVar2 = (uint)lVar9;
    uVar16 = (uint)lVar13 ^ 1;
  }
  FUN_102657200();
  uVar3 = uVar2;
  FUN_102657200();
  func_0x000107c3cf1c(unaff_x20);
  func_0x000107c61180();
  uVar8 = 0;
  func_0x00010111ee94(0);
  uVar5 = unaff_x20;
  func_0x000107c5fc54(unaff_x20,uVar8);
  func_0x000107c61170(unaff_x20);
  func_0x000107c3cf1c(lVar14);
  func_0x000107c61180();
  lVar11 = lVar14;
  func_0x000107c5fc54();
  func_0x000107c61170(lVar14);
  uVar20 = uVar5;
  func_0x00010111e064(uVar5,lVar11);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(lVar11);
  uVar12 = uVar12 | uVar16 | uVar2 ^ uVar3 | (uint)uVar20 ^ 1;
LAB_1026579d8:
  return uVar12 & 1;
}



/* Entry: 1026579fc; end: 102657a3b;  */

undefined8 FUN_1026579fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102657a3c; end: 102657af7;  */

void FUN_102657a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb1a78,&UNK_10dac6370);
  puVar1 = &UNK_11052e378;
  func_0x000107c613fc(&UNK_11052e378,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_102657bdc,puVar1);
  return;
}



/* Entry: 102657af8; end: 102657bdb;  */

void FUN_102657af8(long *param_1,long param_2)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_90);
  FUN_1026588a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined2 *)(param_2 + 0x40) = 0x201;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined1 *)(param_2 + 0x48) = 1;
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_88;
  *param_1 = param_2;
  return;
}



/* Entry: 102657bdc; end: 102657beb;  */

void FUN_102657bdc(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_90);
  FUN_1026588a0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined2 *)(lVar1 + 0x40) = 0x201;
  *(undefined4 *)(lVar1 + 0x44) = 0;
  *(undefined1 *)(lVar1 + 0x48) = 1;
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  *(undefined8 *)(lVar1 + 0x18) = uStack_78;
  *(undefined8 *)(lVar1 + 0x20) = uStack_80;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x50) = uStack_90;
  *(undefined8 *)(lVar1 + 0x58) = uStack_88;
  *param_1 = lVar1;
  return;
}



/* Entry: 102657bec; end: 102657c6b;  */

void FUN_102657bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined2 *)(unaff_x20 + 0x40) = 0x201;
  *(undefined4 *)(unaff_x20 + 0x44) = 0;
  *(undefined1 *)(unaff_x20 + 0x48) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  return;
}



/* Entry: 102657c6c; end: 10265804f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102657c6c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c4c3ac();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (uVar6 == 0) {
    return 0;
  }
  uVar5 = *(ulong *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar5 != 0) {
    uVar7 = *(ulong *)(unaff_x20 + 0x28);
    func_0x000107c43e84();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    if (uVar8 == 0) {
      func_0x000107c615e8(uVar6);
LAB_102657de8:
      func_0x000107c61170(uVar5);
      return 0;
    }
    func_0x000107c5fadc(param_5,param_6);
    uVar7 = uVar6;
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c61170(param_5);
    if (uVar7 != 0) {
      if (*(char *)(unaff_x20 + 0x40) != '\x01') {
        dVar15 = *(double *)(unaff_x20 + 0x30);
        dVar14 = *(double *)(unaff_x20 + 0x38);
        func_0x000107c3fc68(uVar7);
        dVar15 = dVar15 - param_1;
        param_3 = 2.220446049250313e-16;
        param_1 = ABS(dVar14 - param_2);
        param_2 = 2.220446049250313e-16;
        bVar2 = false;
        bVar3 = true;
        if (ABS(dVar15) <= 2.220446049250313e-16) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(param_1)) {
            bVar2 = param_1 == 2.220446049250313e-16;
            bVar3 = 2.220446049250313e-16 <= param_1;
          }
        }
        if (!bVar3 || bVar2) {
          func_0x000107c615e8(uVar6);
          func_0x000107c61170(uVar5);
          func_0x000107c615e8(uVar8);
          uVar5 = uVar7;
          goto LAB_102657de8;
        }
      }
      func_0x000107c3fc68(uVar7);
      *(double *)(unaff_x20 + 0x30) = param_1;
      *(double *)(unaff_x20 + 0x38) = param_2;
      *(undefined1 *)(unaff_x20 + 0x40) = 0;
      uVar9 = uVar5;
      func_0x000107c515a0();
      dVar15 = param_1;
      dVar14 = param_2;
      dVar12 = param_3;
      FUN_102658780();
      if ((uVar9 & 1) == 0) {
        dVar15 = 310.0;
        param_3 = param_3 + 310.0;
      }
      else {
        FUN_1026587e0();
        param_3 = (double)SUB84(dVar15,0);
      }
      uVar9 = uVar5;
      func_0x000107c4c458(uVar5);
      func_0x000107c61180();
      func_0x000107c5dfdc();
      dVar11 = dVar15;
      dVar13 = dVar14;
      func_0x000107c615e8(uVar9);
      func_0x000107c3fc68(uVar7);
      bVar2 = false;
      bVar3 = true;
      if (dVar15 <= dVar11) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar11) && !NAN(dVar12)) {
          bVar2 = dVar11 == dVar12;
          bVar3 = dVar12 <= dVar11;
        }
      }
      bVar1 = true;
      bVar4 = false;
      if (!bVar3 || bVar2) {
        bVar1 = false;
        bVar4 = true;
        if (!NAN(dVar13) && !NAN(dVar14)) {
          bVar1 = dVar13 < dVar14;
          bVar4 = false;
        }
      }
      bVar2 = false;
      bVar3 = true;
      if (bVar1 == bVar4) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar13) && !NAN(param_4)) {
          bVar2 = dVar13 == param_4;
          bVar3 = param_4 <= dVar13;
        }
      }
      dVar15 = 16.25;
      if (!bVar3 || bVar2) {
        uVar9 = uVar5;
        func_0x000107c4c458(uVar5);
        func_0x000107c61180();
        func_0x000107c5ea20();
        dVar14 = dVar11;
        func_0x000107c615e8(uVar9);
        if (16.25 < dVar11) {
          uVar9 = uVar5;
          func_0x000107c4c458(uVar5);
          func_0x000107c61180();
          func_0x000107c5ea20();
          func_0x000107c615e8(uVar9);
          dVar15 = dVar14;
        }
      }
      dVar11 = 217.5;
      func_0x000107c3fc68(uVar7);
      dVar13 = dVar15;
      func_0x000108d31578();
      dVar14 = dVar11;
      func_0x000107c3fc68(uVar7);
      uVar9 = uVar5;
      dVar12 = dVar14;
      func_0x000107c4c458(uVar5);
      func_0x000107c61180();
      func_0x000107c41e58();
      func_0x000107c615e8(uVar9);
      func_0x000108d313b8(dVar14,dVar13,(dVar12 * 3.141592653589793) / 180.0 + 3.141592653589793,
                          -(dVar11 * 197.5));
      dVar12 = dVar14;
      func_0x000107c3fc68(uVar7);
      func_0x000107c3ec60(uVar5);
      dVar11 = dVar15;
      func_0x000108d31608(dVar15,dVar12);
      func_0x000107c3e50c(dVar15,uVar8);
      uVar10 = 0;
      func_0x000103b354c8(0);
      func_0x000107c610f8();
      func_0x000103b3520c(dVar14,dVar13,0,dVar15,dVar11,param_1,param_2,param_3);
      func_0x000107c615e8(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar8);
      func_0x000107c61170(uVar7);
      return uVar10;
    }
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(uVar5);
    uVar6 = uVar8;
  }
  func_0x000107c615e8(uVar6);
  return 0;
}



/* Entry: 102658050; end: 1026586f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102658050(double param_1,double param_2,double param_3,double param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4c3ac();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fecfb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
LAB_1026586b4:
      func_0x000107c615e8(lVar5);
    }
    else {
      lVar6 = *(long *)(unaff_x20 + 0x28);
      func_0x000107c43e84();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar7 != 0) {
        uVar17 = 0;
        lVar6 = *(long *)(unaff_x20 + 0x50);
        uVar16 = *(ulong *)(lVar6 + 0x10);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          puVar14 = (undefined8 *)(lVar6 + 0x28 + uVar17 * 0x10);
          do {
            if (uVar16 == uVar17) {
              puVar9 = puVar10;
              func_0x000107c61434();
              FUN_1026415cc();
              func_0x000107c6142c(puVar10);
              if (((ulong)puVar9 & 0xc000000000000001) == 0) {
                puVar8 = *(undefined **)(puVar9 + 0x10);
              }
              else {
                puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar8 = puVar9;
                }
                func_0x000107c6029c();
              }
              if ((long)puVar8 < 1) {
                func_0x000107c615e8(lVar5);
                func_0x000107c61170(lVar4);
                func_0x000107c615e8(lVar7);
                func_0x000107c6142c(puVar10);
                func_0x000107c6142c(puVar9);
                return 0;
              }
              lVar6 = lVar4;
              func_0x000107c4c458();
              func_0x000107c61180();
              lVar11 = lVar6;
              func_0x000107c3f040();
              func_0x000107c61180();
              func_0x000107c615e8(lVar6);
              dVar25 = *(double *)(unaff_x20 + 0x58);
              func_0x000107c515a0(lVar4);
              dVar18 = param_1;
              dVar23 = param_2;
              dVar21 = param_3;
              dVar22 = param_4;
              if (((ulong)puVar9 & 0xc000000000000001) == 0) {
                puVar8 = *(undefined **)(puVar9 + 0x10);
              }
              else {
                puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar8 = puVar9;
                }
                func_0x000107c6029c();
              }
              dVar25 = dVar25 + param_3;
              if (puVar8 != (undefined *)0x1) {
                func_0x000107c6142c(puVar9);
                puVar9 = puVar10;
                FUN_10263a8d4(puVar10);
                func_0x000107c6142c(puVar10);
                puVar10 = puVar9;
                func_0x000107c5fc48(puVar9,PTR___sypN_11034f1a8 + 8);
                func_0x000107c6142c(puVar9);
                pcStack_b8 = FUN_1026586f4;
                uStack_b0 = 0;
                puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
                uVar26 = 0x42000000;
                uStack_d0 = 0x42000000;
                puStack_c8 = &UNK_1011450fc;
                puStack_c0 = &UNK_11052e3b0;
                ppuVar12 = &puStack_d8;
                func_0x000107c60bc4(ppuVar12);
                func_0x000108d31a2c(puVar10,ppuVar12);
                func_0x000107c60bd0(ppuVar12);
                func_0x000107c61170(puVar10);
                lVar6 = lVar4;
                func_0x000107c4c458(lVar4);
                func_0x000107c61180();
                lVar13 = lVar6;
                func_0x000107c3f24c(uVar26,dVar23,dVar21,dVar22,param_1,param_2,dVar25,param_4);
                func_0x000107c61180();
                func_0x000107c61170(lVar4);
                func_0x000107c615e8(lVar6);
                func_0x000107c615e8(lVar7);
                func_0x000107c61170(lVar11);
                func_0x000107c615e8(lVar5);
                return lVar13;
              }
              func_0x000107c6142c(puVar10);
              puVar10 = puVar9;
              func_0x000101144790();
              func_0x000107c6142c(puVar9);
              if (puVar10 != (undefined *)0x0) {
                func_0x000107c4077c(puVar10);
                dVar19 = dVar18;
                dVar24 = dVar23;
                func_0x000107c61170(puVar10);
                if (*(char *)(unaff_x20 + 0x40) == '\x01') {
LAB_102658398:
                  *(double *)(unaff_x20 + 0x30) = dVar18;
                  *(double *)(unaff_x20 + 0x38) = dVar23;
                  *(undefined1 *)(unaff_x20 + 0x40) = 0;
                  dVar27 = 16.25;
                  lVar6 = lVar4;
                  func_0x000107c4c458(lVar4);
                  func_0x000107c61180();
                  func_0x000107c5dfdc();
                  dVar20 = dVar19;
                  func_0x000107c615e8(lVar6);
                  if ((((dVar19 <= dVar18) && (dVar18 <= dVar21)) && (dVar24 <= dVar23)) &&
                     (dVar23 <= dVar22)) {
                    lVar6 = lVar4;
                    func_0x000107c4c458(lVar4);
                    func_0x000107c61180();
                    func_0x000107c5ea20();
                    dVar21 = dVar20;
                    func_0x000107c615e8(lVar6);
                    if (16.25 < dVar20) {
                      lVar6 = lVar4;
                      func_0x000107c4c458(lVar4);
                      func_0x000107c61180();
                      func_0x000107c5ea20();
                      func_0x000107c615e8(lVar6);
                      dVar27 = dVar21;
                    }
                  }
                  dVar21 = dVar18;
                  func_0x000108d31578(dVar18,dVar27);
                  lVar6 = lVar4;
                  dVar22 = dVar21;
                  func_0x000107c4c458(lVar4);
                  func_0x000107c61180();
                  func_0x000107c41e58();
                  func_0x000107c615e8(lVar6);
                  dVar19 = dVar18;
                  func_0x000108d313b8(dVar18,dVar23,
                                      (dVar22 * 3.141592653589793) / 180.0 + 3.141592653589793,
                                      -(dVar21 * 132.0));
                  func_0x000107c3ec60(lVar4);
                  dVar21 = dVar27;
                  func_0x000108d31608(dVar27,dVar18);
                  func_0x000107c3e50c(dVar27,lVar7);
                  uVar26 = *(undefined8 *)(lVar11 + _DAT_112fecff0);
                  lVar6 = 0;
                  func_0x000103b354c8(0);
                  func_0x000107c610f8();
                  func_0x000103b3520c(dVar19,dVar23,uVar26,dVar27,dVar21,param_1,param_2,dVar25);
                  func_0x000107c61170(lVar4);
                  func_0x000107c615e8(lVar7);
                  func_0x000107c61170(lVar11);
                  func_0x000107c615e8(lVar5);
                  return lVar6;
                }
                dVar19 = ABS(*(double *)(unaff_x20 + 0x30) - dVar18);
                dVar24 = 2.220446049250313e-16;
                if (2.220446049250313e-16 < dVar19) goto LAB_102658398;
                dVar19 = ABS(*(double *)(unaff_x20 + 0x38) - dVar23);
                dVar24 = 2.220446049250313e-16;
                if (2.220446049250313e-16 < dVar19) goto LAB_102658398;
              }
              func_0x000107c61170(lVar4);
              func_0x000107c615e8(lVar7);
              func_0x000107c61170(lVar11);
              goto LAB_1026586b4;
            }
            if (*(ulong *)(lVar6 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1026586f4);
              (*pcVar3)();
            }
            uVar17 = uVar17 + 1;
            uVar26 = puVar14[-1];
            uVar2 = *puVar14;
            func_0x000107c61434(uVar2);
            func_0x000107c5fadc(uVar26,uVar2);
            lVar11 = lVar5;
            func_0x000107c4e67c();
            func_0x000107c61180();
            func_0x000107c6142c(uVar2);
            func_0x000107c61170(uVar26);
            puVar14 = puVar14 + 2;
          } while (lVar11 == 0);
          puVar9 = puVar10;
          func_0x000107c61550();
          if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
             (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar10 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar10) {
                puVar8 = puVar10;
              }
              func_0x000107c60480(puVar8);
            }
            puVar9 = (undefined *)0x0;
            FUN_10264996c(0,puVar8 + 1,1,puVar10);
          }
          uVar15 = (ulong)puVar9 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar15 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar1) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
            FUN_10264996c(puVar10,uVar1 + 1,1,puVar9);
            uVar15 = (ulong)puVar10 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar15 + 0x10) = uVar1 + 1;
          *(long *)(uVar15 + uVar1 * 8 + 0x20) = lVar11;
        } while( true );
      }
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(lVar4);
    }
  }
  return 0;
}



/* Entry: 1026586f4; end: 10265877f;  */

undefined1  [16] FUN_1026586f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_3,auStack_50);
  uVar1 = 0;
  func_0x000101132f2c(0);
  puVar2 = &uStack_58;
  func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)puVar2 & 1) == 0) {
    param_1 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c4077c(uStack_58);
    func_0x000107c61170(uStack_58);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 102658780; end: 1026587df;  */

uint FUN_102658780(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  
  uVar4 = (uint)*(byte *)(unaff_x20 + 0x41);
  if (*(byte *)(unaff_x20 + 0x41) == 2) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026587e0);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000109021a9c();
    uVar4 = (uint)lVar3;
    func_0x000107c615e8(lVar2);
    *(char *)(unaff_x20 + 0x41) = (char)lVar3;
  }
  return uVar4 & 1;
}



/* Entry: 1026587e0; end: 10265884b;  */

ulong FUN_1026587e0(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10265884c);
      (*pcVar1)();
    }
    func_0x000109021ab0();
    func_0x000107c615e8(lVar2);
    *(int *)(unaff_x20 + 0x44) = (int)param_1;
    *(undefined1 *)(unaff_x20 + 0x48) = 0;
  }
  else {
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x44);
  }
  return param_1;
}



/* Entry: 10265884c; end: 10265888f;  */

void FUN_10265884c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102658890; end: 10265889f;  */

undefined1  [16] FUN_102658890(void)

{
  return ZEXT816(0x11052e3a0);
}



/* Entry: 1026588a0; end: 1026588bf;  */

void FUN_1026588a0(void)

{
  func_0x000107c61168(&PTR_PTR_112eb1ac0);
  return;
}



/* Entry: 1026588c0; end: 1026588db;  */

void FUN_1026588c0(long param_1,long param_2)

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



/* Entry: 1026588dc; end: 1026589ff;  */

void FUN_1026588dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb1b58,&UNK_10dac6410);
  puVar1 = &UNK_11052e3e8;
  func_0x000107c613fc(&UNK_11052e3e8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102658a00,puVar1);
  return;
}



/* Entry: 102658a00; end: 102658a0b;  */

void FUN_102658a00(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1026590a0();
  func_0x000107c610f8();
  FUN_102658a54(uStack_48,uStack_50,uStack_58);
  *param_1 = uStack_48;
  return;
}



/* Entry: 102658a0c; end: 102658a53;  */

void FUN_102658a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_102658a54(param_1,param_2,param_3);
  return;
}



/* Entry: 102658a54; end: 102658b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102658a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112eb1b60) = 0;
  lVar1 = _DAT_112eb1b68;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112eb1b70;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1b78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1b80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1b88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb1b90) = param_3;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&stack0xffffffffffffffa0,puVar3);
  func_0x000107c61180();
  FUN_102658b94();
  func_0x000107c61170(puVar4);
  func_0x000107c61574(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return puVar4;
}



/* Entry: 102658b94; end: 102658ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102658b94(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112eb1b78;
  ppuVar5 = &puStack_70;
  if (*(long *)(unaff_x20 + _DAT_112eb1b78) == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112eb1b90);
    func_0x000107c4c3ac();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      FUN_102658d54();
      lVar2 = lVar3;
      func_0x000107c4b93c();
      func_0x000107c61180();
      puVar4 = &UNK_11052e4b8;
      func_0x000107c613fc(&UNK_11052e4b8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      pcStack_50 = FUN_1026590c0;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101114e8c;
      puStack_58 = &UNK_11052e4d0;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      lVar6 = lVar2;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar2);
      uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
      *(long *)(unaff_x20 + lVar1) = lVar6;
      func_0x000107c61170(uVar7);
    }
  }
  return;
}



/* Entry: 102658cd0; end: 102658d33; -[_TtC27MapFocusCardsImplementation26MapFocusCardViewportTarget camera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102658cd0(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  func_0x00010006c804();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eb1b60);
  func_0x000107c61174(uVar1);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102658d34; end: 102658d3b; -[_TtC27MapFocusCardsImplementation26MapFocusCardViewportTarget transition] */

void FUN_102658d34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102658d3c; end: 102658d4b; -[_TtC27MapFocusCardsImplementation26MapFocusCardViewportTarget viewportTargetObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102658d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb1b70));
  return;
}



/* Entry: 102658d4c; end: 102658d53; -[_TtC27MapFocusCardsImplementation26MapFocusCardViewportTarget shouldBeOverriddenByGestureRecognizer:] */

undefined8 FUN_102658d4c(void)

{
  return 1;
}



/* Entry: 102658d54; end: 102658e2f;  */

/* WARNING: Possible PIC construction at 0x000102658df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102658df4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102658d54(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb1b80) + 0x50);
  if (*(long *)(lVar1 + 0x10) != 0) {
    if (*(long *)(lVar1 + 0x10) == 1) {
      param_1 = *(long *)(lVar1 + 0x20);
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      func_0x000107c61434(uVar2);
      FUN_102657c6c(param_1,uVar2);
      func_0x000107c6142c(uVar2);
    }
    else {
      FUN_102658050();
    }
    if (param_1 != 0) {
      func_0x00010006c804();
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112eb1b60);
      *(long *)(unaff_x20 + _DAT_112eb1b60) = param_1;
      func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 102658e30; end: 102658e83;  */

void FUN_102658e30(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102658d54();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102658e84; end: 102658ee3; -[_TtC27MapFocusCardsImplementation26MapFocusCardViewportTarget init] */

void FUN_102658e84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusCardsImplementation.MapFocusCardViewportTarget",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102658eb0);
  (*pcVar1)();
}



/* Entry: 102658ee4; end: 102658eeb;  */

void FUN_102658ee4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102658eec; end: 102658f37;  */

undefined8 * FUN_102658eec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 102658f38; end: 102658f73;  */

undefined8 * FUN_102658f38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 102658f74; end: 102659017;  */

int FUN_102658f74(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102659018; end: 10265909f; -[_TtC27MapFocusCardsImplementation26MapFocusCardViewportTarget .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102659044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102659064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102659084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102659068) */
/* WARNING: Removing unreachable block (ram,0x000102659048) */
/* WARNING: Removing unreachable block (ram,0x000102659088) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102659018(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb1b80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb1b88));
  return;
}



/* Entry: 1026590a0; end: 1026590bf;  */

void FUN_1026590a0(void)

{
  func_0x000107c61168(&PTR_PTR_112855a08);
  return;
}



/* Entry: 1026590c0; end: 1026590eb;  */

void FUN_1026590c0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102658d54();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1026590ec; end: 102659707;  */

void FUN_1026590ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_78 [24];
  
  uVar6 = *unaff_x20;
  lVar2 = unaff_x20[0x1b];
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c61428(unaff_x20 + 0x11,auStack_78,0x21,0);
    uVar1 = unaff_x20[0x14];
    lVar2 = unaff_x20[0x15];
    func_0x0001000c6518(unaff_x20 + 0x11,uVar1);
    pcVar7 = *(code **)(lVar2 + 0x18);
    func_0x000107c61434(param_3);
    (*pcVar7)(param_2,param_3,uVar1,lVar2);
    func_0x000107c614a8(auStack_78);
    puVar4 = &UNK_11052e8f0;
    func_0x000107c613fc(&UNK_11052e8f0,0x30,7);
    *(undefined8 **)(puVar4 + 0x10) = unaff_x20;
    *(long *)(puVar4 + 0x18) = lVar3;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = uVar6;
    puVar5 = &UNK_11052e918;
    func_0x000107c613fc(&UNK_11052e918,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10dac65e8;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    func_0x000107c6157c();
    func_0x000107c615f0(lVar3);
    uVar6 = 0x12;
    func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10dac65f0,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 102659708; end: 102659753;  */

void FUN_102659708(void)

{
  long unaff_x20;
  
  func_0x00010265941c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 102659754; end: 1026598fb;  */

long FUN_102659754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined **)(unaff_x20 + 0x108) = puVar1;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x120) = puVar1;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x128) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined1 *)(unaff_x20 + 0x160) = 2;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  func_0x000100cfe02c(param_1,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x20 + 200) = param_3;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x100) = param_9;
  func_0x000100cfe02c(param_10,unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0xf0) = param_11;
  *(undefined8 *)(unaff_x20 + 0x80) = param_12;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_13;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_14;
  func_0x000100cfe02c(param_15,unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x48) = param_16;
  *(undefined8 *)(unaff_x20 + 0x170) = param_17;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_19;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_20;
  return unaff_x20;
}



/* Entry: 1026598fc; end: 10265aecb;  */

/* WARNING: Possible PIC construction at 0x000102659994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102659a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102659ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102659bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102659c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265a094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265a214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265a238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265a284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265aa10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265aa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265aa88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265ad9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265ae84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265aea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102659aa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265aea8) */
/* WARNING: Removing unreachable block (ram,0x00010265ae88) */
/* WARNING: Removing unreachable block (ram,0x00010265ada0) */
/* WARNING: Removing unreachable block (ram,0x00010265aa8c) */
/* WARNING: Removing unreachable block (ram,0x00010265abd8) */
/* WARNING: Removing unreachable block (ram,0x00010265abdc) */
/* WARNING: Removing unreachable block (ram,0x00010265abe0) */
/* WARNING: Removing unreachable block (ram,0x00010265ac84) */
/* WARNING: Removing unreachable block (ram,0x00010265ad08) */
/* WARNING: Removing unreachable block (ram,0x00010265ad18) */
/* WARNING: Removing unreachable block (ram,0x00010265ad1c) */
/* WARNING: Removing unreachable block (ram,0x00010265ad20) */
/* WARNING: Removing unreachable block (ram,0x00010265aa2c) */
/* WARNING: Removing unreachable block (ram,0x00010265aa14) */
/* WARNING: Removing unreachable block (ram,0x00010265a288) */
/* WARNING: Removing unreachable block (ram,0x00010265a6c4) */
/* WARNING: Removing unreachable block (ram,0x00010265a6ac) */
/* WARNING: Removing unreachable block (ram,0x00010265a6c8) */
/* WARNING: Removing unreachable block (ram,0x00010265a218) */
/* WARNING: Removing unreachable block (ram,0x00010265a098) */
/* WARNING: Removing unreachable block (ram,0x000102659c64) */
/* WARNING: Removing unreachable block (ram,0x000102659bc8) */
/* WARNING: Removing unreachable block (ram,0x000102659be0) */
/* WARNING: Removing unreachable block (ram,0x000102659be4) */
/* WARNING: Removing unreachable block (ram,0x000102659be8) */
/* WARNING: Removing unreachable block (ram,0x000102659bec) */
/* WARNING: Removing unreachable block (ram,0x000102659bf0) */
/* WARNING: Removing unreachable block (ram,0x000102659bf4) */
/* WARNING: Removing unreachable block (ram,0x000102659a0c) */
/* WARNING: Removing unreachable block (ram,0x000102659998) */
/* WARNING: Removing unreachable block (ram,0x00010265999c) */
/* WARNING: Removing unreachable block (ram,0x0001026599cc) */
/* WARNING: Removing unreachable block (ram,0x000102659ab0) */
/* WARNING: Removing unreachable block (ram,0x000102659ab4) */
/* WARNING: Removing unreachable block (ram,0x000102659ac0) */
/* WARNING: Removing unreachable block (ram,0x0001026599fc) */
/* WARNING: Removing unreachable block (ram,0x000102659b4c) */
/* WARNING: Removing unreachable block (ram,0x000102659c0c) */
/* WARNING: Removing unreachable block (ram,0x000102659c10) */
/* WARNING: Removing unreachable block (ram,0x000102659d14) */
/* WARNING: Removing unreachable block (ram,0x000102659d5c) */
/* WARNING: Removing unreachable block (ram,0x000102659d3c) */
/* WARNING: Removing unreachable block (ram,0x000102659d64) */
/* WARNING: Removing unreachable block (ram,0x00010265aec8) */
/* WARNING: Removing unreachable block (ram,0x000102659f70) */
/* WARNING: Removing unreachable block (ram,0x00010265a09c) */
/* WARNING: Removing unreachable block (ram,0x00010265a0a4) */
/* WARNING: Removing unreachable block (ram,0x00010265a23c) */
/* WARNING: Removing unreachable block (ram,0x00010265a1c8) */
/* WARNING: Removing unreachable block (ram,0x00010265a21c) */
/* WARNING: Removing unreachable block (ram,0x00010265a220) */
/* WARNING: Removing unreachable block (ram,0x00010265a1ec) */
/* WARNING: Removing unreachable block (ram,0x00010265a078) */
/* WARNING: Removing unreachable block (ram,0x000102659c48) */
/* WARNING: Removing unreachable block (ram,0x000102659b90) */
/* WARNING: Removing unreachable block (ram,0x000102659a04) */
/* WARNING: Removing unreachable block (ram,0x000102659aac) */

void FUN_1026598fc(void)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  long lStack_120;
  undefined1 auStack_c8 [72];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x38);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c614f0();
  (**(code **)(lVar1 + 0x50))();
  if ((uVar2 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + 0x88,auStack_c8,0,0);
    FUN_10265bc74(unaff_x20 + 0x88,auStack_140);
    func_0x0001000a8868(auStack_140,uStack_128);
    (**(code **)(lStack_120 + 0x48))(uStack_128,lStack_120);
    puVar3 = auStack_140;
    func_0x0001000834e4();
    FUN_102648a50();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x170)) + 0x70))
              ();
    if (puVar3 == (undefined1 *)0x0) {
      return;
    }
    func_0x000107c4c318();
  }
  else {
    puVar3 = *(undefined1 **)(unaff_x20 + 0xc0);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar4 == (undefined1 *)0x0) {
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x170)) + 0x70
                  ))();
      if (puVar3 == (undefined1 *)0x0) {
        return;
      }
      func_0x000107c4c318();
    }
    else {
      func_0x000107c509b4(puVar4);
      func_0x000107c61180();
      puVar3 = puVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar3);
  return;
}



/* Entry: 10265aecc; end: 10265b07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10265aecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0xf8);
  func_0x000107c4b8d8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0xd0) + _DAT_112fecfb0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = *(long *)(unaff_x20 + 0xf0);
        func_0x000107c43e84();
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 != 0) {
          lVar4 = *(long *)(unaff_x20 + 200);
          func_0x000107c3fa04();
          func_0x000107c61180();
          if (lVar4 != 0) {
            func_0x0001090221fc();
            func_0x000107c615e8(lVar4);
            func_0x000107c3e50c(param_1,lVar5);
            puVar6 = PTR_PTR_1126b1e08;
            func_0x000107c61168(PTR_PTR_1126b1e08);
            func_0x000107c4077c(lVar2);
            func_0x000107c3f0e4(puVar6,param_3,lVar3);
            func_0x000107c61180();
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c615e8(lVar5);
            return puVar6;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10265b080);
          (*pcVar1)();
        }
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      func_0x000107c61170(lVar2);
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10265b080; end: 10265b0f3;  */

undefined * FUN_10265b080(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x168);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    FUN_10265b14c();
    puVar2 = PTR_PTR_1126b1f18;
    func_0x000107c610f8();
    func_0x000107c46f24();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x168);
    *(undefined **)(unaff_x20 + 0x168) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 10265b0f4; end: 10265b14b;  */

undefined8 FUN_10265b0f4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (param_1 == 2) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c61174(uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10265b14c; end: 10265b1ab;  */

uint FUN_10265b14c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  
  uVar4 = (uint)*(byte *)(unaff_x20 + 0x160);
  if (*(byte *)(unaff_x20 + 0x160) == 2) {
    lVar2 = *(long *)(unaff_x20 + 200);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10265b1ac);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000109021ad0();
    uVar4 = (uint)lVar3;
    func_0x000107c615e8(lVar2);
    *(char *)(unaff_x20 + 0x160) = (char)lVar3;
  }
  return uVar4 & 1;
}



/* Entry: 10265b1ac; end: 10265b23f;  */

void FUN_10265b1ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(param_1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10265b240; end: 10265b4f7;  */

void FUN_10265b240(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar6 = *(long *)(unaff_x20 + 0x118);
  if (lVar6 != 0) {
    lVar1 = lVar6;
    func_0x000107c615f0(lVar6);
    func_0x000107c4c428();
    func_0x000107c61180();
    puVar2 = &UNK_11052e6f0;
    func_0x000107c613fc(&UNK_11052e6f0,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_11052e788;
    func_0x000107c613fc(&UNK_11052e788,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = lVar6;
    uStack_50 = 0x10265bea0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1011314ac;
    puStack_58 = &UNK_11052e7a0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c615f0(lVar6);
    func_0x000107c61574(puVar2);
    lVar5 = lVar1;
    func_0x000107c5c320(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c3e924(lVar5);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 10265b4f8; end: 10265b51f; -[_TtC27MapFocusCardsImplementation22MapFocusCardsPresenter presentFocusCards] */

void FUN_10265b4f8(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_1026598fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10265b520; end: 10265b59f; -[_TtC27MapFocusCardsImplementation22MapFocusCardsPresenter closeFocusCardsWithExitType:] */

void FUN_10265b520(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c6157c();
  func_0x000107c311c0();
  func_0x000107c61180();
  if (param_3 == 0) {
    lVar1 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    lVar1 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
  }
  FUN_1026590ec(0,lVar1,param_2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10265b5a0; end: 10265b60f;  */

void FUN_10265b5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10265b610,uVar1,uVar2);
  return;
}



/* Entry: 10265b610; end: 10265b657;  */

void FUN_10265b610(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  lVar1 = *(long *)(lVar1 + 0x118);
  if (lVar1 != 0) {
    func_0x000107c50048(*(undefined8 *)(unaff_x22 + 0x18),param_2,lVar1,0,
                        *(undefined8 *)(unaff_x22 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010265b654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10265b658; end: 10265b6b7;  */

void FUN_10265b658(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1026590ec(0,0,0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10265b6b8; end: 10265b8d3;  */

void FUN_10265b6b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar2 = &UNK_11052e7d8;
    func_0x000107c613fc(&UNK_11052e7d8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(long *)(puVar2 + 0x18) = param_2;
    puVar3 = &UNK_11052e800;
    func_0x000107c613fc(&UNK_11052e800,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10265bea8;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_10265beb0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_10114375c;
    puStack_90 = &UNK_11052e818;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c615f0(param_3);
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11052e850;
    func_0x000107c613fc(&UNK_11052e850,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10265bed0;
    *(long *)(puVar3 + 0x18) = param_2;
    pcStack_88 = FUN_10265bed8;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1011437a4;
    puStack_90 = &UNK_11052e868;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_80;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11052e8a0;
    func_0x000107c613fc(&UNK_11052e8a0,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10265bef8;
    *(long *)(puVar3 + 0x18) = param_2;
    pcStack_88 = FUN_10265bef8;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_10006eb60;
    puStack_90 = &UNK_11052e8b8;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar6);
    puVar3 = puStack_80;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c4c7c0(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61578(param_2,3);
  }
  return;
}



/* Entry: 10265b8d4; end: 10265ba9b;  */

void FUN_10265b8d4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [40];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_1 == 2) {
    if (*(long *)(param_4 + 0x140) == 0) {
      func_0x000107c61428(param_4 + 0x88,auStack_d8,0,0);
      FUN_10265bc74(param_4 + 0x88,&uStack_b0);
      func_0x0001000a8868(&uStack_b0,uStack_98);
      (**(code **)(lStack_90 + 0x50))(param_2,uStack_98,lStack_90);
      func_0x0001000834e4(&uStack_b0);
    }
  }
  else {
    func_0x000107c40fb4();
    if (param_3 == 2) {
      lStack_90 = *(undefined8 *)(param_4 + 0x158);
      lStack_a8 = *(long *)(param_4 + 0x140);
      uStack_b0 = *(undefined8 *)(param_4 + 0x138);
      uStack_98 = *(undefined8 *)(param_4 + 0x150);
      uStack_a0 = *(undefined8 *)(param_4 + 0x148);
      if (lStack_a8 != 0) {
        uStack_80 = uStack_b0;
        lStack_78 = lStack_a8;
        uStack_70 = uStack_98;
        uStack_68 = lStack_90;
        FUN_10265bf04(&uStack_b0,auStack_d8,0x112eb0f10,&UNK_10dac57d0);
        func_0x000100402194(&uStack_80,auStack_d8);
        FUN_10265bf04(&uStack_70,auStack_d8,0x112eb0ea8,&UNK_10dac5750);
        FUN_10265bf04(&uStack_68,auStack_d8,0x112eb0eb0,&UNK_10dac5758);
        FUN_10263800c(&uStack_b0,1);
        func_0x000100bcb1dc(&uStack_80);
        func_0x00010265bf4c(&uStack_70,0x112eb0ea8,&UNK_10dac5750);
        func_0x00010265bf4c(&uStack_68,0x112eb0eb0,&UNK_10dac5758);
        func_0x00010265bf4c(&uStack_b0,0x112eb0f10,&UNK_10dac57d0);
        uVar1 = *(undefined8 *)(param_4 + 0x138);
        uVar3 = *(undefined8 *)(param_4 + 0x140);
        uVar2 = *(undefined8 *)(param_4 + 0x148);
        uVar4 = *(undefined8 *)(param_4 + 0x150);
        uVar5 = *(undefined8 *)(param_4 + 0x158);
        *(undefined8 *)(param_4 + 0x158) = 0;
        *(undefined8 *)(param_4 + 0x140) = 0;
        *(undefined8 *)(param_4 + 0x138) = 0;
        *(undefined8 *)(param_4 + 0x150) = 0;
        *(undefined8 *)(param_4 + 0x148) = 0;
        func_0x000102637e30(uVar1,uVar3,uVar2,uVar4,uVar5);
      }
    }
  }
  return;
}



/* Entry: 10265ba9c; end: 10265baf3;  */

void FUN_10265ba9c(long param_1,long param_2)

{
  if (param_1 == 2) {
    if (*(long *)(param_2 + 0x140) == 0) {
      FUN_1026590ec(0,0,0);
    }
  }
  else if ((*(byte *)(param_2 + 0x130) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x130) = 1;
    FUN_10264d10c();
  }
  return;
}



/* Entry: 10265baf4; end: 10265bc73;  */

/* WARNING: Possible PIC construction at 0x00010265bb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265bb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010265bbd4) */
/* WARNING: Removing unreachable block (ram,0x00010265bbb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265baf4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  FUN_10263800c(&uStack_60,0);
  lVar1 = *(long *)(unaff_x20 + 0x110);
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112eb1430);
    if (lVar3 != 0) {
      func_0x000107c61174();
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c41848();
        goto code_r0x000107c615e8;
      }
      func_0x000107c61170(lVar1);
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  func_0x000107c61170(uVar2);
  lVar3 = *(long *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 10265bc74; end: 10265bcb7;  */

long FUN_10265bc74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10265bcb8; end: 10265bd0b;  */

void FUN_10265bcb8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10264a6b4(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10265bd0c; end: 10265be17;  */

void FUN_10265bd0c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x0001000834e4(unaff_x20 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x0001000834e4(unaff_x20 + 0x88);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000102637e30(*(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  return;
}



/* Entry: 10265be18; end: 10265be2f;  */

undefined8 FUN_10265be18(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (param_1 == 2) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c61174(uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10265be30; end: 10265be67;  */

void FUN_10265be30(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10265be68; end: 10265be77;  */

undefined1  [16] FUN_10265be68(void)

{
  return ZEXT816(0x11052e768);
}



/* Entry: 10265be78; end: 10265be97;  */

void FUN_10265be78(void)

{
  func_0x000107c61168(&PTR_PTR_112eb1c08);
  return;
}



/* Entry: 10265be98; end: 10265beaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265be98(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(lVar1);
    FUN_102648800(*(undefined8 *)(lVar3 + _DAT_112fed870),
                  ((undefined8 *)(lVar3 + _DAT_112fed870))[1]);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10265beb0; end: 10265becf;  */

void FUN_10265beb0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10265bed0; end: 10265bed7;  */

void FUN_10265bed0(long param_1)

{
  long unaff_x20;
  
  if (param_1 == 2) {
    if (*(long *)(unaff_x20 + 0x140) == 0) {
      FUN_1026590ec(0,0,0);
    }
  }
  else if ((*(byte *)(unaff_x20 + 0x130) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x130) = 1;
    FUN_10264d10c();
  }
  return;
}



/* Entry: 10265bed8; end: 10265bef7;  */

void FUN_10265bed8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10265bef8; end: 10265bf03;  */

/* WARNING: Possible PIC construction at 0x00010265bb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265bb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265bb8c) */
/* WARNING: Removing unreachable block (ram,0x00010265bbd4) */
/* WARNING: Removing unreachable block (ram,0x00010265bbb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10265bef8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  FUN_10263800c(&uStack_60,0);
  lVar1 = *(long *)(unaff_x20 + 0x110);
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112eb1430);
    if (lVar3 != 0) {
      func_0x000107c61174();
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c41848();
        goto code_r0x000107c615e8;
      }
      func_0x000107c61170(lVar1);
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  func_0x000107c61170(uVar2);
  lVar3 = *(long *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 10265bf04; end: 10265bf8b;  */

undefined8 FUN_10265bf04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10265bf8c; end: 10265bfd3;  */

void FUN_10265bf8c(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10265bfd4; end: 10265c037;  */

void FUN_10265bfd4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10265c038;
  plVar4[3] = lVar1;
  plVar4[4] = lVar2;
  plVar4[2] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[5] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10265b610,lVar2,lVar3);
  return;
}



/* Entry: 10265c038; end: 10265c073;  */

void FUN_10265c038(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010265c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


