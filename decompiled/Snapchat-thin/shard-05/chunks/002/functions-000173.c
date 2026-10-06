/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c23868; end: 103c238bf;  */

void FUN_103c23868(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 103c238c0; end: 103c23923;  */

void FUN_103c238c0(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 103c23924; end: 103c23a53;  */

void FUN_103c23924(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_103c23868();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c239e8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_103c23bb0(lVar5);
    uVar2 = param_2;
    FUN_103c23868();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_103c215b0(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c239b4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_103c23a54();
    lVar5 = *unaff_x20;
    goto joined_r0x000103c239fc;
  }
  lVar5 = *unaff_x20;
joined_r0x000103c239fc:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c23a54);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 103c23a54; end: 103c23baf;  */

void FUN_103c23a54(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112ff8a88,&UNK_10dc675a8);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_103c23b30;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_103c23b30:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103c23bb0);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_103c23b88;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_103c23b88:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103c23bb0; end: 103c23fc7;  */

void FUN_103c23bb0(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x112ff8a88;
  func_0x0001000285a8(0x112ff8a88,&UNK_10dc675a8);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar14);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_103c23e00:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c23e30);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_103c23e00;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c23e34);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 103c23fc8; end: 103c240cb;  */

undefined * FUN_103c23fc8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112ff8a88);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  FUN_103c23868();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c240cc);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61174();
      uVar3 = uVar9;
      FUN_103c23868();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c2409c);
  (*pcVar1)();
}



/* Entry: 103c240cc; end: 103c24107;  */

void FUN_103c240cc(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  pcVar2 = *(code **)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0,pcVar2,*(undefined8 *)(unaff_x20 + 0x38));
  uVar7 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61428(lVar4 + 0x10,auStack_80,0,0);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  FUN_103c2371c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar6);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar7);
  FUN_103c216ec(lVar5,uVar3,uVar7,uVar6);
  if (lVar5 != 0) {
    (*pcVar2)();
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 103c24108; end: 103c24127;  */

void FUN_103c24108(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103c24128; end: 103c24133;  */

void FUN_103c24128(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = 1;
  (*pcVar2)(0);
  return;
}



/* Entry: 103c24134; end: 103c2418b;  */

void FUN_103c24134(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103c2418c; end: 103c24197;  */

void FUN_103c2418c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1106ebde0;
  func_0x000107c613fc(&UNK_1106ebde0,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_103c22f00;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  pcStack_50 = FUN_103c24198;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103c22f74;
  puStack_58 = &UNK_1106ebdf8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c4c280(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar5 = puVar2;
  func_0x000107c61544(puVar2,"",0x38,0xe9,0x2d,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000107c61174(uVar4);
    (*pcVar1)();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c22f00);
  (*pcVar1)();
}



/* Entry: 103c24198; end: 103c241b7;  */

void FUN_103c24198(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103c241b8; end: 103c2420b;  */

void FUN_103c241b8(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = 1;
  (*pcVar2)(0);
  return;
}



/* Entry: 103c2420c; end: 103c24293;  */

void FUN_103c2420c(long param_1,long param_2)

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



/* Entry: 103c24294; end: 103c242e7; -[SCTRoundCornerView borderWidth] */

undefined8 FUN_103c24294(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c3ec04();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103c242e8; end: 103c24337; -[SCTRoundCornerView setBorderWidth:] */

/* WARNING: Possible PIC construction at 0x000103c24320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c24324) */

void FUN_103c242e8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c52e0c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103c24338; end: 103c24347; -[SCTRoundCornerView borderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c24338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff8a90));
  return;
}



/* Entry: 103c24348; end: 103c243ef; -[SCTRoundCornerView setBorderColor:] */

/* WARNING: Possible PIC construction at 0x000103c2438c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c243c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c243d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c243cc) */
/* WARNING: Removing unreachable block (ram,0x000103c24390) */
/* WARNING: Removing unreachable block (ram,0x000103c243dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c24348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff8a90);
  *(undefined8 *)(param_1 + _DAT_112ff8a90) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103c243f0; end: 103c24427;  */

void FUN_103c243f0(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103c24428(param_1);
  return;
}



/* Entry: 103c24428; end: 103c2456f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c24428(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar1 = _DAT_112ff8a90;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c3ea80();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffb0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c52e0c(param_1);
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c4aba4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  uVar5 = *(undefined8 *)(puVar3 + _DAT_112ff8a90);
  func_0x000107c3ab24(uVar5);
  func_0x000107c61180();
  func_0x000107c52df8(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  puVar4 = puVar3;
  func_0x000107c4aba4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c562fc(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 103c24570; end: 103c2458f; -[SCTRoundCornerView initWithBorderWidth:] */

void FUN_103c24570(void)

{
  FUN_103c24428();
  return;
}



/* Entry: 103c24590; end: 103c245cf;  */

void FUN_103c24590(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_103c245d0(param_1,param_2);
  return;
}



/* Entry: 103c245d0; end: 103c24753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c245d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar1 = _DAT_112ff8a90;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c3ea80();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffa0,PTR_s_initWithFrame__1125e2948);
  uVar5 = *(undefined8 *)(puVar3 + _DAT_112ff8a90);
  *(undefined8 *)(puVar3 + _DAT_112ff8a90) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar3);
  puVar4 = puVar3;
  func_0x000107c4aba4();
  func_0x000107c61180();
  uVar5 = param_2;
  func_0x000107c3ab24(param_2);
  func_0x000107c61180();
  func_0x000107c52df8(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  puVar4 = puVar3;
  func_0x000107c4aba4(puVar3);
  func_0x000107c61180();
  func_0x000107c52e0c(param_1);
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c4aba4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c562fc(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 103c24754; end: 103c2478b; -[SCTRoundCornerView initWithBorderWidth:borderColor:] */

void FUN_103c24754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  FUN_103c245d0(param_1);
  return;
}



/* Entry: 103c2478c; end: 103c2480f; -[SCTRoundCornerView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2478c(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112ff8a90;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c3ea80();
  func_0x000107c61180();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCTalkUI/SCTRoundCornerView.swift",0x21,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c24810);
  (*pcVar2)();
}



/* Entry: 103c24810; end: 103c24893; -[SCTRoundCornerView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c24810(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112ff8a90;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c3ea80();
  func_0x000107c61180();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000017,0x800000010f1afd60,
                      "SCTalkUI/SCTRoundCornerView.swift",0x21,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c24894);
  (*pcVar2)();
}



/* Entry: 103c24894; end: 103c24917; -[SCTRoundCornerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c24894(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112ff8a90;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c3ea80();
  func_0x000107c61180();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010f1afd80,
                      "SCTalkUI/SCTRoundCornerView.swift",0x21,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c24918);
  (*pcVar2)();
}



/* Entry: 103c24918; end: 103c249c3; -[SCTRoundCornerView layoutSubviews] */

void FUN_103c24918(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_2;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_40 = param_2;
  uStack_38 = uVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&uStack_40,puVar1);
  uVar2 = param_2;
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c3ec60(param_2);
  func_0x000107c609cc();
  dVar3 = param_1;
  func_0x000107c3ec60(param_2);
  func_0x000107c609b0();
  if (param_1 <= dVar3) {
    dVar3 = param_1;
  }
  func_0x000107c539d4(dVar3 * 0.5,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103c249c4; end: 103c249f7;  */

void FUN_103c249c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c249f8; end: 103c24a07; -[SCTRoundCornerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c249f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff8a90));
  return;
}



/* Entry: 103c24a08; end: 103c24a27;  */

void FUN_103c24a08(void)

{
  func_0x000107c61168(&PTR_PTR_1129474e0);
  return;
}



/* Entry: 103c24a28; end: 103c24a3f;  */

undefined8 FUN_103c24a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__CGRectGetWidth_1103475a8;
  func_0x000107c61174();
  func_0x000107c438d4();
  (*(code *)puVar1)();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 103c24a40; end: 103c24a83;  */

undefined8 FUN_103c24a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c61174();
  func_0x000107c438d4();
  (*param_4)();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 103c24a84; end: 103c24b27;  */

double FUN_103c24a84(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  long lVar1;
  double dVar2;
  
  func_0x000107c61174();
  func_0x000107c438d4();
  func_0x000107c609b8();
  lVar1 = param_5;
  dVar2 = param_1;
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    dVar2 = 0.0;
  }
  else {
    func_0x000107c3ec60();
    func_0x000107c61170(lVar1);
    func_0x000107c609b0(dVar2,param_2,param_3,param_4);
  }
  func_0x000107c61170(param_5);
  return param_1 - dVar2;
}



/* Entry: 103c24b28; end: 103c24b47; -[_TtC18TalkConfigServices18TalkConfigServices callPageConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c24b28(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff8ac0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c24b48; end: 103c24b67; -[_TtC18TalkConfigServices18TalkConfigServices defaultCommunicationAppConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c24b48(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff8ac8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c24b68; end: 103c24bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c24b68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff8ac0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8ac8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c24bcc; end: 103c24c2b; -[_TtC18TalkConfigServices18TalkConfigServices init] */

void FUN_103c24bcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TalkConfigServices.TalkConfigServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c24bf8);
  (*pcVar1)();
}



/* Entry: 103c24c2c; end: 103c24c63; -[_TtC18TalkConfigServices18TalkConfigServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c24c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c24c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c24c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff8ac0));
  return;
}



/* Entry: 103c24c64; end: 103c24ca3; -[_TtC15TalkContextImpl15TalkContextImpl contextId] */

void FUN_103c24c64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c24ca4; end: 103c24cab; -[_TtC15TalkContextImpl15TalkContextImpl currentConversationObjc] */

void FUN_103c24ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103c24cac; end: 103c24cb3; -[_TtC15TalkContextImpl15TalkContextImpl conversationObservableObjc] */

void FUN_103c24cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 103c24cb4; end: 103c24e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c24cb4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c602fc(0x3e);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f1afdd0);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fb78(0x496f766e6f63202c,0xeb00000000203a64);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307bf50);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fb78(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  uVar5 = 0x800000010f1afdf0;
  func_0x000107c5fb78(0xd000000000000011,0x800000010f1afdf0);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307bf58);
  func_0x000107c61174(uVar2);
  uVar3 = uVar2;
  func_0x000107c417f0();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000107c5fb78(uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 103c24e20; end: 103c24e73;  */

void FUN_103c24e20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c24e74; end: 103c24edb;  */

void FUN_103c24e74(void)

{
  FUN_103c24cb4();
  return;
}



/* Entry: 103c24edc; end: 103c24ef3;  */

void FUN_103c24edc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000cad14();
  uVar1 = 0;
  func_0x0001002b55c4(0);
  func_0x000107c610f8();
  func_0x000103c25f28(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 103c24ef4; end: 103c2511b;  */

void FUN_103c24ef4(long *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c61428(param_2 + 0x10,auStack_78,0x20,0);
  lVar8 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar2 = param_3;
    uVar5 = param_4;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + lVar2 * 8);
      func_0x000107c6157c(lVar9);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar8);
      goto LAB_103c25088;
    }
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c614a8(auStack_78);
  func_0x00010446b724(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_4);
  func_0x000107c61174(param_5);
  lVar8 = param_3;
  func_0x00010446b4f0(param_3,param_4,param_5);
  lVar9 = 0;
  func_0x000103c24e54();
  uVar4 = 0x30;
  func_0x000107c613fc();
  lVar2 = lVar9;
  func_0x000107c5eec4(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar6 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(long *)(lVar9 + 0x20) = lVar2;
  *(undefined8 *)(lVar9 + 0x28) = uVar4;
  *(long *)(lVar9 + 0x10) = lVar8;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  *(undefined **)(lVar9 + 0x18) = puVar3;
LAB_103c25088:
  func_0x000107c61428(param_2 + 0x10,auStack_78,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000107c6157c(lVar9);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61558(uVar4);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0x8000000000000000;
  FUN_103c2564c(lVar9,param_3,param_4,uVar4);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  func_0x000107c614a8(auStack_78);
  *param_1 = lVar9;
  return;
}



/* Entry: 103c2511c; end: 103c251cb; -[_TtC15TalkContextImpl29TalkContextMutableFactoryImpl getTalkContextFor:convoMetadata:] */

void FUN_103c2511c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x000107c5faec();
  uStack_70 = param_1;
  uStack_68 = param_3;
  uStack_60 = param_2;
  uStack_58 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  uVar1 = 0x112ff8c68;
  func_0x0001000285a8(0x112ff8c68,&UNK_10dc676c0);
  func_0x000100087bd4(&uStack_48,FUN_103c25d58,auStack_80,uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_48);
  return;
}



/* Entry: 103c251cc; end: 103c25443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c251cc(ulong *param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_78 [24];
  
  uVar11 = param_2;
  puVar4 = param_3;
  lVar9 = param_4;
  func_0x000107c614f0();
  func_0x00010446afdc();
  func_0x000107c61170(lVar9);
  puVar5 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar5,0x20,0);
  lVar9 = *(long *)(param_3 + 0x10);
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_103c25290:
    func_0x000107c614a8(auStack_78);
    uVar12 = 0;
    puVar10 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c61434(lVar9);
    uVar12 = uVar11;
    puVar5 = puVar4;
    func_0x000100029284();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c6142c(lVar9);
      goto LAB_103c25290;
    }
    lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + uVar12 * 8);
    func_0x000107c6157c(lVar7);
    func_0x000107c614a8(auStack_78);
    func_0x000107c6142c(lVar9);
    uVar12 = *(ulong *)(lVar7 + 0x20);
    puVar10 = *(undefined1 **)(lVar7 + 0x28);
    func_0x000107c61434(puVar10);
    func_0x000107c61574(lVar7);
  }
  func_0x000107c40594();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  if (puVar10 == (undefined1 *)0x0) {
    func_0x000107c6142c(puVar5);
LAB_103c25410:
    func_0x000107c6142c(puVar4);
    uVar11 = 0;
  }
  else {
    if ((uVar12 == uVar2) && (puVar10 == puVar5)) {
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar5);
    }
    else {
      func_0x000107c605b8(uVar12,puVar10,uVar2,puVar5,0);
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar5);
      if ((uVar12 & 1) == 0) goto LAB_103c25410;
    }
    func_0x000107c61428(param_3 + 0x10,auStack_78,0x21,0);
    FUN_103c25590(uVar11,puVar4);
    func_0x000107c614a8(auStack_78);
    func_0x000107c6142c(puVar4);
    if (uVar11 != 0) {
      uVar8 = *(undefined8 *)(param_4 + _DAT_11307bf50);
      uVar1 = ((undefined8 *)(param_4 + _DAT_11307bf50))[1];
      func_0x000107c61428(param_3 + 0x10,auStack_78,0x21,0);
      func_0x000107c61580(uVar11,2);
      func_0x000107c61434(uVar1);
      uVar3 = *(undefined8 *)(param_3 + 0x10);
      func_0x000107c61558(uVar3);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 0x10) = 0x8000000000000000;
      FUN_103c2564c(uVar11,uVar8,uVar1,uVar3);
      func_0x000107c6142c(uVar1);
      *(undefined8 *)(param_3 + 0x10) = uVar6;
      func_0x000107c614a8(auStack_78);
      uVar8 = *(undefined8 *)(uVar11 + 0x10);
      *(long *)(uVar11 + 0x10) = param_4;
      func_0x000107c61174(param_4);
      func_0x000107c61574(uVar11);
      func_0x000107c61170(uVar8);
    }
  }
  *param_1 = uVar11;
  return;
}



/* Entry: 103c25444; end: 103c25527; -[_TtC15TalkContextImpl29TalkContextMutableFactoryImpl updateWithTalkContext:newConversation:] */

void FUN_103c25444(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_48;
  
  uStack_58 = *param_1;
  uStack_70 = param_3;
  puStack_68 = param_1;
  uStack_60 = param_4;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  uVar1 = 0x112ff8c58;
  func_0x0001000285a8(0x112ff8c58,&UNK_10dc676b0);
  func_0x000100087bd4(&puStack_48,0x103c25574,auStack_80,uVar1);
  uVar1 = param_4;
  if (puStack_48 != (undefined8 *)0x0) {
    uVar1 = puStack_48[3];
    func_0x000107c61174(uVar1);
    func_0x000107c4d664();
    func_0x000107c61170(param_4);
    func_0x000107c61574(param_1);
    param_1 = puStack_48;
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(param_3);
  return;
}



/* Entry: 103c25528; end: 103c2558f;  */

void FUN_103c25528(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c25590; end: 103c2564b;  */

undefined8 FUN_103c25590(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000103c2579c();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000103c25ba8(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 103c2564c; end: 103c2590b;  */

void FUN_103c2564c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103c25724);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_103c2590c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c256ec);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103c2579c();
    lVar6 = *unaff_x20;
    goto joined_r0x000103c25738;
  }
  lVar6 = *unaff_x20;
joined_r0x000103c25738:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103c2579c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103c2590c; end: 103c25d57;  */

void FUN_103c2590c(long param_1,ulong param_2)

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
  uVar6 = 0x112ff8c60;
  func_0x0001000285a8(0x112ff8c60,&UNK_10dc676b8);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103c25b74:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103c25ba4);
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
          goto LAB_103c25b74;
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
      func_0x000107c6157c(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103c25ba8);
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



/* Entry: 103c25d58; end: 103c25d73;  */

void FUN_103c25d58(void)

{
  long unaff_x20;
  
  FUN_103c24ef4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 103c25d74; end: 103c25ddf;  */

void FUN_103c25d74(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x000103c25554();
  func_0x000107c613fc();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 103c25de0; end: 103c25def;  */

undefined1  [16] FUN_103c25de0(void)

{
  return ZEXT816(0x1106ec050);
}



/* Entry: 103c25df0; end: 103c25e6f;  */

void FUN_103c25df0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112ff8c80;
  func_0x0001000285a8(0x112ff8c80,&UNK_10dc67740);
  uVar2 = 0x103c25e88;
  func_0x00010072927c(0x103c25e88,0,uVar1);
  uVar1 = uVar2;
  func_0x0001000cad14();
  func_0x000107c61574(uVar2);
  func_0x0001002abf34(0);
  func_0x000107c610f8();
  func_0x00010446b1c8();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c25e70; end: 103c25e93;  */

void FUN_103c25e70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112ff8c80;
  func_0x0001000285a8(0x112ff8c80,&UNK_10dc67740);
  uVar2 = 0x103c25e88;
  func_0x00010072927c(0x103c25e88,0,uVar1);
  uVar1 = uVar2;
  func_0x0001000cad14();
  func_0x000107c61574(uVar2);
  func_0x0001002abf34(0);
  func_0x000107c610f8();
  func_0x00010446b1c8();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c25e94; end: 103c25ea3; -[_TtC27TalkContextInternalServices27TalkContextInternalServices talkContextMutableFactoryObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c25e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff8c90));
  return;
}



/* Entry: 103c25ea4; end: 103c25fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c25ea4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff8c88) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff8c90) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103c25fac; end: 103c2600b; -[_TtC27TalkContextInternalServices27TalkContextInternalServices init] */

void FUN_103c25fac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TalkContextInternalServices.TalkContextInternalServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c25fd8);
  (*pcVar1)();
}



/* Entry: 103c2600c; end: 103c26043; -[_TtC27TalkContextInternalServices27TalkContextInternalServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2600c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff8c88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff8c90));
  return;
}



/* Entry: 103c26044; end: 103c260d3; -[_TtC28ValdiCallingDependenciesImpl36AddliveNativeModuleFactoriesProvider createModuleFactories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c26044(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_103c26164();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ff8cc0);
  func_0x000107c615f0();
  uVar2 = 0x112ff8cf0;
  func_0x0001000285a8(0x112ff8cf0,&UNK_10dc679a0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103c260d4; end: 103c26133; -[_TtC28ValdiCallingDependenciesImpl36AddliveNativeModuleFactoriesProvider init] */

void FUN_103c260d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCallingDependenciesImpl.AddliveNativeModuleFactoriesProvider",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c26100);
  (*pcVar1)();
}



/* Entry: 103c26134; end: 103c26143; -[_TtC28ValdiCallingDependenciesImpl36AddliveNativeModuleFactoriesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c26134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff8cc0));
  return;
}



/* Entry: 103c26144; end: 103c26163;  */

void FUN_103c26144(void)

{
  func_0x000107c61168(&PTR_PTR_112947738);
  return;
}



/* Entry: 103c26164; end: 103c26177;  */

void FUN_103c26164(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8cf8 == (undefined *)0x0 || ((ulong)puRam0000000112ff8cf8 & 1) != 0) {
    puVar1 = &UNK_10e9c8da6;
    func_0x000107c61518(&UNK_10e9c8da6,0x26,0,0);
    puRam0000000112ff8cf8 = puVar1;
  }
  return;
}



/* Entry: 103c26178; end: 103c261eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c26178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff8d00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8d08) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8d10) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c261ec; end: 103c2620b;  */

void FUN_103c261ec(void)

{
  func_0x000107c61168(&PTR_PTR_1129477f8);
  return;
}



/* Entry: 103c2620c; end: 103c2650f;  */

/* WARNING: Possible PIC construction at 0x000103c26254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c26290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c262b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c263a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c264a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c264c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c264ac) */
/* WARNING: Removing unreachable block (ram,0x000103c263a4) */
/* WARNING: Removing unreachable block (ram,0x000103c262bc) */
/* WARNING: Removing unreachable block (ram,0x000103c2632c) */
/* WARNING: Removing unreachable block (ram,0x000103c26348) */
/* WARNING: Removing unreachable block (ram,0x000103c26314) */
/* WARNING: Removing unreachable block (ram,0x000103c264ec) */
/* WARNING: Removing unreachable block (ram,0x000103c26294) */
/* WARNING: Removing unreachable block (ram,0x000103c26258) */
/* WARNING: Removing unreachable block (ram,0x000103c26268) */
/* WARNING: Removing unreachable block (ram,0x000103c264c4) */

void FUN_103c2620c(undefined8 param_1)

{
  func_0x000107c40674();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c26510; end: 103c2679b;  */

/* WARNING: Possible PIC construction at 0x000103c265d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c265f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c2660c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c26674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c266c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c26720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c26738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c266cc) */
/* WARNING: Removing unreachable block (ram,0x000103c266d0) */
/* WARNING: Removing unreachable block (ram,0x000103c26678) */
/* WARNING: Removing unreachable block (ram,0x000103c26610) */
/* WARNING: Removing unreachable block (ram,0x000103c265f4) */
/* WARNING: Removing unreachable block (ram,0x000103c265d8) */
/* WARNING: Removing unreachable block (ram,0x000103c26724) */
/* WARNING: Removing unreachable block (ram,0x000103c26638) */
/* WARNING: Removing unreachable block (ram,0x000103c2663c) */
/* WARNING: Removing unreachable block (ram,0x000103c26690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c26510(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar6 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      uVar5 = param_1;
      if (-1 < (long)param_1) {
        uVar5 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c2679c);
          (*pcVar1)();
        }
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar2 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar3 = lVar2;
      func_0x000107c49ac4();
      if ((int)lVar3 == 0) {
        func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
        lVar3 = param_4 + 0x10;
        func_0x000107c61618();
        if (lVar3 == 0) {
          puVar4 = PTR_PTR_1126b29b8;
          func_0x000107c61168();
          func_0x000107c43a64();
          func_0x000107c61180();
          if (puVar4 != (undefined *)0x0) {
            func_0x000107c61170(puVar4);
          }
          lVar3 = lVar2;
          func_0x000107c439a8();
          func_0x000107c61180();
          if (lVar3 == 0) {
            if (puVar4 != (undefined *)0x0) {
              func_0x000107c61428(param_4 + 0x10,auStack_80,0,0);
              param_4 = param_4 + 0x10;
              func_0x000107c61618();
              if (param_4 != 0) {
                func_0x000107c4d664(*(undefined8 *)(param_4 + _DAT_112ff8d00));
                goto code_r0x000107c61170;
              }
            }
            func_0x000107c61170(lVar2);
            lVar2 = 0;
          }
          else {
            func_0x000107c5c3a4();
            func_0x000107c61180();
            lVar2 = lVar3;
          }
        }
        else {
          func_0x000107c61174(*(undefined8 *)(lVar3 + _DAT_112ff8d10));
          lVar2 = lVar3;
        }
      }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 103c2679c; end: 103c267c3;  */

/* WARNING: Possible PIC construction at 0x000103c265d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c265f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c2660c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c26674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c266c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c26720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c26738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c266cc) */
/* WARNING: Removing unreachable block (ram,0x000103c266d0) */
/* WARNING: Removing unreachable block (ram,0x000103c26678) */
/* WARNING: Removing unreachable block (ram,0x000103c26610) */
/* WARNING: Removing unreachable block (ram,0x000103c265f4) */
/* WARNING: Removing unreachable block (ram,0x000103c265d8) */
/* WARNING: Removing unreachable block (ram,0x000103c26724) */
/* WARNING: Removing unreachable block (ram,0x000103c26638) */
/* WARNING: Removing unreachable block (ram,0x000103c2663c) */
/* WARNING: Removing unreachable block (ram,0x000103c26690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2679c(ulong param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      uVar6 = param_1;
      if (-1 < (long)param_1) {
        uVar6 = uVar7;
      }
      func_0x000107c60480(uVar6,0,*(undefined8 *)(unaff_x20 + 0x10));
    }
    if (uVar6 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c2679c);
          (*pcVar1)();
        }
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar2 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar3 = lVar2;
      func_0x000107c49ac4();
      if ((int)lVar3 == 0) {
        func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
        lVar3 = lVar5 + 0x10;
        func_0x000107c61618();
        if (lVar3 == 0) {
          puVar4 = PTR_PTR_1126b29b8;
          func_0x000107c61168();
          func_0x000107c43a64();
          func_0x000107c61180();
          if (puVar4 != (undefined *)0x0) {
            func_0x000107c61170(puVar4);
          }
          lVar3 = lVar2;
          func_0x000107c439a8();
          func_0x000107c61180();
          if (lVar3 == 0) {
            if (puVar4 != (undefined *)0x0) {
              func_0x000107c61428(lVar5 + 0x10,auStack_80,0,0);
              lVar5 = lVar5 + 0x10;
              func_0x000107c61618();
              if (lVar5 != 0) {
                func_0x000107c4d664(*(undefined8 *)(lVar5 + _DAT_112ff8d00));
                goto code_r0x000107c61170;
              }
            }
            func_0x000107c61170(lVar2);
            lVar2 = 0;
          }
          else {
            func_0x000107c5c3a4();
            func_0x000107c61180();
            lVar2 = lVar3;
          }
        }
        else {
          func_0x000107c61174(*(undefined8 *)(lVar3 + _DAT_112ff8d10));
          lVar2 = lVar3;
        }
      }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 103c267c4; end: 103c26813; -[_TtC28ValdiCallingDependenciesImpl27IncomingCallRequestDelegate onIncomingCallRequestReceivedWithRequest:] */

/* WARNING: Possible PIC construction at 0x000103c267fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c26800) */

void FUN_103c267c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103c2620c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c26814; end: 103c2686f; -[_TtC28ValdiCallingDependenciesImpl27IncomingCallRequestDelegate init] */

void FUN_103c26814(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCallingDependenciesImpl.IncomingCallRequestDelegate",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c26840);
  (*pcVar1)();
}



/* Entry: 103c26870; end: 103c268f7; -[_TtC28ValdiCallingDependenciesImpl27IncomingCallRequestDelegate .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c2688c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c26890) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c26870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff8d00));
  return;
}



/* Entry: 103c268f8; end: 103c26aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c268f8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar10 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  func_0x000100083b20(&puStack_a0);
  uVar3 = *(undefined8 *)(puStack_a0 + _DAT_112ffa940);
  func_0x000107c61174();
  func_0x000107c61170(puStack_a0);
  func_0x000100083b20(&lStack_58);
  lVar4 = lStack_58;
  func_0x000107c5b484();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  if (lVar4 != 0) {
    func_0x000100083b20(&uStack_60);
    uVar5 = uStack_60;
    func_0x000107c5b374();
    func_0x000107c61180();
    func_0x000107c61170(uStack_60);
    lVar6 = 0;
    FUN_103c261ec();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar7 + _DAT_112ff8d00) = uVar3;
    *(long *)(lVar7 + _DAT_112ff8d08) = lVar4;
    *(undefined8 *)(lVar7 + _DAT_112ff8d10) = uVar5;
    plVar8 = &lStack_70;
    lStack_70 = lVar7;
    lStack_68 = lVar6;
    func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
    puVar9 = PTR_PTR_1126ad9b0;
    func_0x000107c610f8();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_103c26bc0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_103c26c88;
    puStack_88 = &UNK_1106ec260;
    uStack_78 = param_2;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c6157c(param_2);
    func_0x000107c46e48();
    func_0x000107c61170(plVar8);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61574(uStack_78);
    pcStack_80 = FUN_103c26bc8;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_103c26c1c;
    puStack_88 = &UNK_1106ec288;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c54edc(puVar9);
    func_0x000107c60bd0(ppuVar11);
    *param_1 = puVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c26af0);
  (*pcVar2)();
}



/* Entry: 103c26af0; end: 103c26b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c26af0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar11 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  func_0x000100083b20(&puStack_a0,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  uVar4 = *(undefined8 *)(puStack_a0 + _DAT_112ffa940);
  func_0x000107c61174();
  func_0x000107c61170(puStack_a0);
  func_0x000100083b20(&lStack_58);
  lVar5 = lStack_58;
  func_0x000107c5b484();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  if (lVar5 != 0) {
    func_0x000100083b20(&uStack_60);
    uVar6 = uStack_60;
    func_0x000107c5b374();
    func_0x000107c61180();
    func_0x000107c61170(uStack_60);
    lVar7 = 0;
    FUN_103c261ec();
    lVar8 = lVar7;
    func_0x000107c610f8();
    *(undefined8 *)(lVar8 + _DAT_112ff8d00) = uVar4;
    *(long *)(lVar8 + _DAT_112ff8d08) = lVar5;
    *(undefined8 *)(lVar8 + _DAT_112ff8d10) = uVar6;
    plVar9 = &lStack_70;
    lStack_70 = lVar8;
    lStack_68 = lVar7;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
    puVar10 = PTR_PTR_1126ad9b0;
    func_0x000107c610f8();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_103c26bc0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_103c26c88;
    puStack_88 = &UNK_1106ec260;
    uStack_78 = uVar1;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c6157c(uVar1);
    func_0x000107c46e48();
    func_0x000107c61170(plVar9);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61574(uStack_78);
    pcStack_80 = FUN_103c26bc8;
    uStack_78 = 0;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_103c26c1c;
    puStack_88 = &UNK_1106ec288;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c54edc(puVar10);
    func_0x000107c60bd0(ppuVar12);
    *param_1 = puVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103c26af0);
  (*pcVar3)();
}



/* Entry: 103c26b0c; end: 103c26bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103c26b0c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = *(long *)(lStack_38 + _DAT_112ffa948);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c49820();
    func_0x000107c61170(lVar3);
    if (lVar2 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c26bc0);
      (*pcVar1)();
    }
    if (0x7fffffff < lVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c26ba0);
      (*pcVar1)();
    }
  }
  return lVar2;
}



/* Entry: 103c26bc0; end: 103c26bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103c26bc0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = *(long *)(lStack_38 + _DAT_112ffa948);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c49820();
    func_0x000107c61170(lVar3);
    if (lVar2 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c26bc0);
      (*pcVar1)();
    }
    if (0x7fffffff < lVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c26ba0);
      (*pcVar1)();
    }
  }
  return lVar2;
}



/* Entry: 103c26bc8; end: 103c26c1b;  */

undefined1  [16] FUN_103c26bc8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = uRam0000000112ff8d58;
  uVar2 = uRam0000000112ff8d50;
  uVar1 = uRam0000000112ff8d50 & 0xffffffffffff;
  if ((uRam0000000112ff8d58 & 0x2000000000000000) != 0) {
    uVar1 = uRam0000000112ff8d58 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(uRam0000000112ff8d58);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 103c26c1c; end: 103c26c87;  */

void FUN_103c26c1c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c5fadc(uVar3,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103c26c88; end: 103c26cbf;  */

undefined8 FUN_103c26c88(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  return uVar3;
}



/* Entry: 103c26cc0; end: 103c26ce3;  */

void FUN_103c26cc0(long param_1,long param_2)

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



/* Entry: 103c26ce4; end: 103c26e4f;  */

void FUN_103c26ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  puVar1 = &UNK_1106ec2c0;
  func_0x000107c613fc(&UNK_1106ec2c0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_103c26e50,puVar1);
  return;
}



/* Entry: 103c26e50; end: 103c26e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c26e50(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_103c2735c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined1 *)(lVar7 + _DAT_112ff8d98) = 0;
  *(long *)(lVar7 + _DAT_112ff8da0) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112ff8da8) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112ff8db0) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112ff8db8) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 103c26e5c; end: 103c26ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c26e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff8d98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8da0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8da8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8db0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8db8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c26ef4; end: 103c27257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103c26ef4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  plVar6 = &lStack_80;
  if ((*(byte *)(unaff_x20 + _DAT_112ff8d98) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112ff8d98) = 1;
    func_0x000100083b20(&puStack_58);
    puVar1 = puStack_58;
    uVar7 = *(undefined8 *)(puStack_58 + _DAT_112ffa910);
    func_0x000107c6157c(uVar7);
    func_0x000107c61170(puVar1);
    func_0x0001000d224c(&puStack_58);
    func_0x000107c61574(uVar7);
    puVar1 = puStack_58;
    func_0x000100083b20(&lStack_60);
    lVar2 = lStack_60;
    uVar7 = *(undefined8 *)(lStack_60 + _DAT_112ffa930);
    func_0x000107c6157c(uVar7);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(&lStack_60);
    func_0x000107c61574(uVar7);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    uVar7 = *(undefined8 *)(lStack_68 + _DAT_112ffa920);
    func_0x000107c6157c(uVar7);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(&lStack_68);
    func_0x000107c61574(uVar7);
    func_0x000100083b20(&lStack_70);
    uVar7 = *(undefined8 *)(lStack_70 + _DAT_1130807f0);
    func_0x000107c615f0(uVar7);
    func_0x000107c61170(lStack_70);
    func_0x000107c61174(puVar1);
    lVar2 = lStack_60;
    func_0x000107c61174(lStack_60);
    lVar5 = lStack_68;
    func_0x000107c61174(lStack_68);
    func_0x000107c61174(uVar7);
    puVar3 = PTR_PTR_1126ad9b8;
    func_0x000107c610f4(PTR_PTR_1126ad9b8);
    puVar4 = PTR_PTR_1126da3a8;
    func_0x000107c610f4(PTR_PTR_1126da3a8);
    func_0x000107c46228();
    func_0x000107c494c8(puVar3);
    func_0x000107c61170(puVar4);
    puVar4 = PTR_PTR_1126dad88;
    func_0x000107c40a90();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61110();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(lVar5);
    func_0x000107c615e8(uVar7);
    lVar5 = 0;
    FUN_103c26144();
    lVar2 = lVar5;
    func_0x000107c610f8();
    *(undefined **)(lVar2 + _DAT_112ff8cc0) = puVar4;
    puVar1 = PTR_s_init_1125d9248;
    lStack_80 = lVar2;
    lStack_78 = lVar5;
    func_0x000107c615f0(puVar4);
    func_0x000107c61154(&lStack_80,puVar1);
    func_0x000100083b20(&puStack_58);
    puVar1 = puStack_58;
    puVar3 = puStack_58;
    func_0x000107c61150(puStack_58,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_registerModuleFactoriesProvider__1126274d0);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107c61170(plVar6);
      func_0x000107c615e8(puVar4);
    }
    else {
      func_0x000107c61174(plVar6);
      func_0x000107c4fc60(puVar1);
      func_0x000107c615e8(puVar1);
      func_0x000107c61170(plVar6);
      func_0x000107c61170(plVar6);
      puVar1 = puVar4;
    }
    func_0x000107c615e8(puVar1);
  }
  func_0x000100083b20(&puStack_58);
  func_0x00010b9677ec(param_1,puStack_58);
  func_0x000107c61170(puStack_58);
  return param_1;
}



/* Entry: 103c27258; end: 103c27293; -[_TtC28ValdiCallingDependenciesImpl30ValdiCallingDependenciesPlugin pushToValdiMarshaller:] */

undefined8 FUN_103c27258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103c26ef4(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 103c27294; end: 103c272f3; -[_TtC28ValdiCallingDependenciesImpl30ValdiCallingDependenciesPlugin init] */

void FUN_103c27294(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCallingDependenciesImpl.ValdiCallingDependenciesPlugin",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c272c0);
  (*pcVar1)();
}



/* Entry: 103c272f4; end: 103c27303;  */

undefined1  [16] FUN_103c272f4(void)

{
  return ZEXT816(0x1106ec2e8);
}



/* Entry: 103c27304; end: 103c2735b; -[_TtC28ValdiCallingDependenciesImpl30ValdiCallingDependenciesPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c27320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c27340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c27324) */
/* WARNING: Removing unreachable block (ram,0x000103c27344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c27304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff8da0));
  return;
}



/* Entry: 103c2735c; end: 103c2737b;  */

void FUN_103c2735c(void)

{
  func_0x000107c61168(&PTR_PTR_1129478d0);
  return;
}



/* Entry: 103c2737c; end: 103c2741f;  */

long FUN_103c2737c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1106ec308;
  func_0x000107c613fc(&UNK_1106ec308,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  uVar2 = 0x112f10c18;
  func_0x0001000285a8(0x112f10c18,&UNK_10db446f0);
  func_0x000107c613fc();
  pcVar3 = FUN_103c27628;
  func_0x0001000bdd8c(FUN_103c27628,puVar1,uVar2);
  func_0x000107c61170(param_1);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 103c27420; end: 103c27627;  */

void FUN_103c27420(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c27628);
    (*pcVar1)();
  }
  uVar7 = 0x64656c6261736964;
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f008540);
  lVar6 = -0x1800000000000000;
  func_0x000107c5fadc(0x64656c6261736964);
  uVar3 = param_2;
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c615e8(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if ((((uVar4 == 0x64656c6261736964 && lVar6 == -0x1800000000000000) ||
       (uVar3 = uVar4, func_0x000107c605b8(uVar4,lVar6,0x64656c6261736964,0xe800000000000000,0),
       (uVar3 & 1) != 0)) || ((uVar4 == 0xd000000000000017 && (lVar6 == -0x7ffffffef0ff7aa0)))) ||
     ((uVar3 = uVar4, func_0x000107c605b8(uVar4,lVar6,0xd000000000000017,0x800000010f008560,0),
      (uVar3 & 1) != 0 ||
      ((((uVar4 == 0xd000000000000011 && (lVar6 == -0x7ffffffef0ff7a80)) ||
        (uVar3 = uVar4, func_0x000107c605b8(uVar4,lVar6,0xd000000000000011,0x800000010f008580,0),
        (uVar3 & 1) != 0)) || ((uVar4 == 0x64656c62616e65 && (lVar6 == -0x1900000000000000)))))))) {
    func_0x000107c6142c(lVar6);
  }
  else {
    func_0x000107c605b8(uVar4,lVar6,0x64656c62616e65,0xe700000000000000,0);
    func_0x000107c6142c(lVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *param_1 = puVar5;
  return;
}



/* Entry: 103c27628; end: 103c2762f;  */

void FUN_103c27628(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c27628);
    (*pcVar1)();
  }
  uVar7 = 0x64656c6261736964;
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f008540);
  lVar6 = -0x1800000000000000;
  func_0x000107c5fadc(0x64656c6261736964);
  uVar3 = uVar5;
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar5 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if ((((uVar5 == 0x64656c6261736964 && lVar6 == -0x1800000000000000) ||
       (uVar3 = uVar5, func_0x000107c605b8(uVar5,lVar6,0x64656c6261736964,0xe800000000000000,0),
       (uVar3 & 1) != 0)) || ((uVar5 == 0xd000000000000017 && (lVar6 == -0x7ffffffef0ff7aa0)))) ||
     ((uVar3 = uVar5, func_0x000107c605b8(uVar5,lVar6,0xd000000000000017,0x800000010f008560,0),
      (uVar3 & 1) != 0 ||
      ((((uVar5 == 0xd000000000000011 && (lVar6 == -0x7ffffffef0ff7a80)) ||
        (uVar3 = uVar5, func_0x000107c605b8(uVar5,lVar6,0xd000000000000011,0x800000010f008580,0),
        (uVar3 & 1) != 0)) || ((uVar5 == 0x64656c62616e65 && (lVar6 == -0x1900000000000000)))))))) {
    func_0x000107c6142c(lVar6);
  }
  else {
    func_0x000107c605b8(uVar5,lVar6,0x64656c62616e65,0xe700000000000000,0);
    func_0x000107c6142c(lVar6);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *param_1 = puVar4;
  return;
}



/* Entry: 103c27630; end: 103c276bf;  */

void FUN_103c27630(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad9d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 103c276c0; end: 103c276c7;  */

void FUN_103c276c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c276c8; end: 103c276eb;  */

void FUN_103c276c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c276ec; end: 103c277fb;  */

void FUN_103c276ec(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112ff8de8,&UNK_10dc67888);
  func_0x000107c613fc();
  pcVar1 = FUN_103c27630;
  func_0x0001000bdd8c(FUN_103c27630,0);
  func_0x0001000285a8(0x112ff8df0,&UNK_10dc67890);
  func_0x000107c613fc();
  uVar2 = 0x103c27660;
  func_0x0001000bdd8c(0x103c27660,0);
  func_0x0001000285a8(0x112ff8df8,&UNK_10dc67898);
  func_0x000107c613fc();
  uVar3 = 0x103c27690;
  func_0x0001000bdd8c(0x103c27690,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001002ac708(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar4);
  func_0x00010045b81c(pcVar1,uVar2,uVar3,uVar4);
  *param_1 = pcVar1;
  return;
}


