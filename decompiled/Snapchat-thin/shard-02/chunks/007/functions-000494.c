/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021108bc; end: 1021109ff;  */

undefined *
FUN_1021108bc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102110a00);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar4 = param_5;
    func_0x000107c610a4();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x18 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar2,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 102110a00; end: 102110b53;  */

undefined * FUN_102110a00(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102110b54);
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
    puVar3 = (undefined *)0x112d5ecc8;
    FUN_10210f880(0x112d5ecc8,&PTR_PTR_1126cd678,0x112e59450,&UNK_10da5dbb0);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1021112c8(0,0x112d5ecc8,&PTR_PTR_1126cd678);
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



/* Entry: 102110b54; end: 102110b87;  */

void FUN_102110b54(void)

{
  FUN_10210ee60();
  return;
}



/* Entry: 102110b88; end: 102110c5f;  */

void FUN_102110b88(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7,code *param_8)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102110c60);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    (*param_8)(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102110c5c);
  (*pcVar1)();
}



/* Entry: 102110c60; end: 102110c73;  */

void FUN_102110c60(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 102110c74; end: 102110c8b;  */

void FUN_102110c74(void)

{
  long unaff_x20;
  
  FUN_10210ed78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102110c8c; end: 102110cbf;  */

void FUN_102110c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  func_0x000107c61434(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 102110cc0; end: 10211103b;  */

ulong FUN_102110cc0(long param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x21;
  ulong uVar17;
  long lVar18;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined1 auStack_90 [24];
  ulong auStack_78 [2];
  long lStack_68;
  
  ppuVar3 = &puStack_c0;
  ppuVar4 = &puStack_c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar14 = uVar17 * 8;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar6 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar6 == 0) || (uVar15 = uVar14, func_0x000107c61594(uVar14,8), (uVar15 & 1) == 0)) {
      uVar17 = uVar14;
      func_0x000107c6158c(uVar14,0xffffffffffffffff);
      FUN_102110b88(auStack_78);
      if (unaff_x21 == 0) {
        func_0x000107c61590(uVar17,0xffffffffffffffff,0xffffffffffffffff);
        uVar14 = auStack_78[0];
LAB_102110ee0:
        func_0x000107c61574(param_2);
        func_0x000107c61574(param_1);
        uVar7 = (uint)param_1;
        ppuVar4 = ppuVar3;
      }
      else {
        func_0x000107c61590(uVar17,0xffffffffffffffff,0xffffffffffffffff);
        iVar6 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar6 != 0) {
          uVar8 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c61658(auStack_90,uVar8,PTR___ss5ErrorWS_11034ee10);
        }
        func_0x000107c61574(param_1);
        func_0x000107c61574(param_2);
        uVar7 = (uint)param_2;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
        func_0x000107c60e78();
        *(undefined1 **)((long)ppuVar4 + -0x10) = &stack0xfffffffffffffff0;
        *(code **)((long)ppuVar4 + -8) = FUN_10211103c;
        FUN_10210edd4();
        return (ulong)(uVar7 & 1);
      }
      return uVar14;
    }
  }
  puStack_c0 = (undefined1 *)&puStack_c0;
  uStack_b8 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = (long)&puStack_c0 - (uVar14 + 0xf & 0x1ffffffffffffff0);
  func_0x000107c60ee4(uVar17,uVar14);
  uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x38);
  func_0x000107c6157c(param_2);
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  lVar13 = 0;
  lVar11 = 0;
LAB_102110dc8:
  do {
    if (uVar14 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102110f34);
          (*pcVar2)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar18) {
          func_0x000107c6157c(param_1);
          func_0x0001010aeef0(uVar17,uStack_b8,lVar13,param_1);
          func_0x000107c61574(param_1);
          func_0x000107c61574(param_2);
          ppuVar3 = (undefined1 **)puStack_c0;
          uVar14 = uVar17;
          goto LAB_102110ee0;
        }
        uVar14 = ((ulong *)(param_1 + 0x38))[lVar18];
        lVar11 = lVar11 + 1;
      } while (uVar14 == 0);
      uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar18 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10);
    lVar16 = *(long *)(param_2 + 0x10);
    lVar11 = lVar18;
    if (*(long *)(lVar16 + 0x10) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + (uVar10 | lVar18 << 6) * 0x10);
      uVar8 = *puVar1;
      uVar12 = puVar1[1];
      func_0x000107c61434(uVar12);
      func_0x000107c61434(lVar16);
      uVar9 = uVar12;
      func_0x000100029284(uVar8);
      func_0x000107c6142c(uVar12);
      func_0x000107c6142c(lVar16);
      if ((uVar9 & 1) != 0) goto LAB_102110dc8;
    }
    uVar12 = (uVar10 & 0xffffffffffffffc0 | lVar18 << 6) >> 3;
    *(ulong *)(uVar17 + uVar12) = *(ulong *)(uVar17 + uVar12) | 1L << (uVar10 & 0x3f);
    bVar5 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102110ea8);
      (*pcVar2)();
    }
  } while( true );
}



/* Entry: 10211103c; end: 10211106f;  */

uint FUN_10211103c(uint param_1)

{
  FUN_10210edd4();
  return param_1 & 1;
}



/* Entry: 102111070; end: 1021112c7;  */

void FUN_102111070(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar16 = 0;
  while( true ) {
    while (uVar17 != 0) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar16 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_78 = *puVar1;
      uVar3 = puVar1[1];
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
      uStack_70 = uVar3;
      uStack_68 = uVar15;
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar15);
      (*param_2)(&uStack_90,&uStack_78);
      func_0x000107c61170(uVar15);
      func_0x000107c6142c(uVar3);
      uVar3 = uStack_80;
      uVar4 = uStack_88;
      uVar9 = uStack_90;
      lVar13 = *param_5;
      uVar7 = uStack_90;
      uVar8 = uStack_88;
      func_0x000100029284();
      lVar10 = *(long *)(lVar13 + 0x10);
      uVar12 = (ulong)~(uint)uVar8 & 1;
      lVar14 = lVar10 + uVar12;
      if (SCARRY8(lVar10,uVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021112b4);
        (*pcVar5)();
      }
      if (*(long *)(lVar13 + 0x18) < lVar14) {
        FUN_1021101f8(lVar14,param_4 & 1);
        uVar7 = uVar9;
        uVar12 = uVar4;
        func_0x000100029284();
        if (((uint)uVar8 & 1) != ((uint)uVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1021112c8);
          (*pcVar5)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_102110088();
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar14 = *param_5;
      if ((uVar8 & 1) == 0) {
        lVar10 = lVar14 + (uVar7 >> 6) * 8;
        *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar14 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar9;
        puVar2[1] = uVar4;
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1021112b8);
          (*pcVar5)();
        }
        *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar4);
        uVar15 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        func_0x000107c61170(uVar15);
      }
      param_4 = 1;
    }
    bVar6 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1021112b0);
      (*pcVar5)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar16) break;
    uVar17 = ((ulong *)(param_1 + 0x40))[lVar16];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1021112c8; end: 102111307;  */

void FUN_1021112c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102111308; end: 102111317; -[_TtC31MapContextInFriendsFeedServices31MapContextInFriendsFeedServices mapContextInFriendsFeedProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102111308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e59480));
  return;
}



/* Entry: 102111318; end: 102111327; -[_TtC31MapContextInFriendsFeedServices31MapContextInFriendsFeedServices mapContextInFriendsFeedImpressionTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102111318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e59488));
  return;
}



/* Entry: 102111328; end: 1021113ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102111328(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e59480) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e59488) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021113f0; end: 10211144f; -[_TtC31MapContextInFriendsFeedServices31MapContextInFriendsFeedServices init] */

void FUN_1021113f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapContextInFriendsFeedServices.MapContextInFriendsFeedServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10211141c);
  (*pcVar1)();
}



/* Entry: 102111450; end: 102111487; -[_TtC31MapContextInFriendsFeedServices31MapContextInFriendsFeedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010211146c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102111470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102111450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e59480));
  return;
}



/* Entry: 102111488; end: 1021114a7;  */

void FUN_102111488(void)

{
  func_0x000107c61168(&PTR_PTR_11281e5f8);
  return;
}



/* Entry: 1021114a8; end: 1021114bb;  */

bool FUN_1021114a8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1021114bc; end: 102111593;  */

void FUN_1021114bc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102111594; end: 1021115b3;  */

void FUN_102111594(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1021115b4; end: 1021115f3;  */

void FUN_1021115b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e594b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5dc00;
  func_0x000107c61520(&UNK_10da5dc00,&UNK_1104cc1f0);
  puRam0000000112e594b8 = puVar1;
  return;
}



/* Entry: 1021115f4; end: 102111603;  */

undefined1  [16] FUN_1021115f4(void)

{
  return ZEXT816(0x1104cc1f0);
}



/* Entry: 102111604; end: 10211166f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102111604(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021119f8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e594c8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102111670; end: 1021116db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102111670(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e594c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021116dc; end: 10211173b; -[_TtC48ClearMenuActionSheetScopedFactoryServiceProvider36SCClearMenuActionSheetScopedServices init] */

void FUN_1021116dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ClearMenuActionSheetScopedFactoryServiceProvider.SCClearMenuActionSheetScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102111708);
  (*pcVar1)();
}



/* Entry: 10211173c; end: 10211174b; -[_TtC48ClearMenuActionSheetScopedFactoryServiceProvider36SCClearMenuActionSheetScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211173c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e594c8));
  return;
}



/* Entry: 10211174c; end: 1021117b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211174c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104cc420;
  func_0x000107c613fc(&UNK_1104cc420,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102111ad4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1021117b8; end: 102111853;  */

void FUN_1021117b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104cc330;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104cc330;
  return;
}



/* Entry: 102111854; end: 10211188b;  */

void FUN_102111854(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10211188c; end: 102111893;  */

undefined8 FUN_10211188c(void)

{
  return 0x1b;
}



/* Entry: 102111894; end: 1021119c7;  */

void FUN_102111894(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104cc448;
  func_0x000107c613fc(&UNK_1104cc448,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102111aac;
  func_0x00010058fa64(FUN_102111aac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021119c8; end: 1021119f7;  */

undefined ** FUN_1021119c8(void)

{
  return &PTR_DAT_112e597d8;
}



/* Entry: 1021119f8; end: 102111a17;  */

void FUN_1021119f8(void)

{
  func_0x000107c61168(&PTR_PTR_11281e6c0);
  return;
}



/* Entry: 102111a18; end: 102111a67;  */

undefined1  [16] FUN_102111a18(void)

{
  return ZEXT816(0x1104cc380);
}



/* Entry: 102111a68; end: 102111aab;  */

void FUN_102111a68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e59530 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9ea0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e59530 = puVar1;
  return;
}



/* Entry: 102111aac; end: 102111ad3;  */

void FUN_102111aac(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102111ad4; end: 102111ad7;  */

void FUN_102111ad4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102111ad8; end: 102111c8f;  */

void FUN_102111ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e59538,&UNK_10da5df20);
  puVar1 = &UNK_1104cc488;
  func_0x000107c613fc(&UNK_1104cc488,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_102111c90,puVar1);
  return;
}



/* Entry: 102111c90; end: 102111caf;  */

/* WARNING: Possible PIC construction at 0x000102111c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102111c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102111c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102111c64) */
/* WARNING: Removing unreachable block (ram,0x000102111c54) */
/* WARNING: Removing unreachable block (ram,0x000102111c74) */

void FUN_102111c90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_1104cc4d0;
  func_0x000107c613fc(&UNK_1104cc4d0,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112e59540;
  func_0x0001000285a8(0x112e59540,&UNK_10da5df68);
  func_0x000107c613fc();
  pcVar8 = FUN_1021120b4;
  func_0x0001000841fc(FUN_1021120b4,puVar6,uVar7);
  func_0x000100084214(&UNK_10da5df30,0x32,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102111cb0; end: 102112067;  */

void FUN_102111cb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e59548,&UNK_10da5df70);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1021136c8();
  func_0x000100082720("SCSafetyReportScopeExposerSubjectServiceProvider",0x30,2);
  puVar3 = puVar2;
  FUN_102113754();
  func_0x000100082720("SCSafetyReportScopeExposerObservableServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102111854;
  func_0x0001000823a8(FUN_102111854,0);
  func_0x000100082720("SCClearMenuActionSheetScopedServicesCleanupRelayServiceProvider",0x3f,2);
  puVar5 = puVar2;
  FUN_10211357c();
  func_0x000100082720("ClearMenuActionSheetScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e59550,&UNK_10da5df80);
  puVar6 = &UNK_1104cc4f8;
  func_0x000107c613fc(&UNK_1104cc4f8,0x50,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 **)(puVar6 + 0x48) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1021120c4;
  func_0x0001000823a8(0x1021120c4,puVar6);
  func_0x000100082720("SCClearMenuActionSheetEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e59558,&UNK_10da5df88);
  puVar6 = &UNK_1104cc520;
  func_0x000107c613fc(&UNK_1104cc520,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1021120d8;
  func_0x0001000823a8(0x1021120d8,puVar6);
  func_0x000100082720("SCClearMenuActionSheetScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e594d0,&UNK_10da5dcd0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1021120e4;
  func_0x0001000823a8(0x1021120e4,uVar7);
  func_0x000100082720("SCClearMenuActionSheetScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e594c0,&UNK_10da5dcc0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1021120ec;
  func_0x0001000823a8(0x1021120ec,uVar8);
  func_0x000100082720("SCClearMenuActionSheetScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104cc548;
  func_0x000107c613fc(&UNK_1104cc548,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1021120f4;
  func_0x0001000823a8(0x1021120f4,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCClearMenuActionSheetScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102112068; end: 1021120b3;  */

void FUN_102112068(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021120b4; end: 1021120fb;  */

void FUN_1021120b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112e59548,&UNK_10da5df70);
  puVar3 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  puVar4 = puVar3;
  FUN_1021136c8();
  func_0x000100082720("SCSafetyReportScopeExposerSubjectServiceProvider",0x30,2);
  puVar5 = puVar4;
  FUN_102113754();
  func_0x000100082720("SCSafetyReportScopeExposerObservableServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_102111854;
  func_0x0001000823a8(FUN_102111854,0);
  func_0x000100082720("SCClearMenuActionSheetScopedServicesCleanupRelayServiceProvider",0x3f,2);
  puVar7 = puVar4;
  FUN_10211357c();
  func_0x000100082720("ClearMenuActionSheetScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e59550,&UNK_10da5df80);
  puVar8 = &UNK_1104cc4f8;
  func_0x000107c613fc(&UNK_1104cc4f8,0x50,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar3;
  *(undefined8 *)(puVar8 + 0x18) = uVar9;
  *(undefined8 *)(puVar8 + 0x20) = uVar12;
  *(undefined8 *)(puVar8 + 0x28) = uVar10;
  *(undefined8 *)(puVar8 + 0x30) = uVar1;
  *(undefined8 *)(puVar8 + 0x38) = uVar11;
  *(undefined8 *)(puVar8 + 0x40) = uVar2;
  *(undefined8 **)(puVar8 + 0x48) = puVar5;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar5);
  uVar9 = 0x1021120c4;
  func_0x0001000823a8(0x1021120c4,puVar8);
  func_0x000100082720("SCClearMenuActionSheetEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e59558,&UNK_10da5df88);
  puVar8 = &UNK_1104cc520;
  func_0x000107c613fc(&UNK_1104cc520,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar3;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar9;
  *(code **)(puVar8 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x1021120d8;
  func_0x0001000823a8(0x1021120d8,puVar8);
  func_0x000100082720("SCClearMenuActionSheetScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e594d0,&UNK_10da5dcd0);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1021120e4;
  func_0x0001000823a8(0x1021120e4,uVar10);
  func_0x000100082720("SCClearMenuActionSheetScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e594c0,&UNK_10da5dcc0);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x1021120ec;
  func_0x0001000823a8(0x1021120ec,uVar11);
  func_0x000100082720("SCClearMenuActionSheetScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_1104cc548;
  func_0x000107c613fc(&UNK_1104cc548,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar12;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar12 = 0x1021120f4;
  func_0x0001000823a8(0x1021120f4,puVar8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000100082720("SCClearMenuActionSheetScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar12;
  return;
}



/* Entry: 1021120fc; end: 102112ab3;  */

void FUN_1021120fc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_102112c34();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar8;
  puVar9 = PTR_PTR_1126a9ea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f062ab0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar9);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar9);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar9);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar9);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar9);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a0);
  *param_1 = param_2;
  return;
}



/* Entry: 102112ab4; end: 102112b27;  */

void FUN_102112ab4(void)

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
  return;
}



/* Entry: 102112b28; end: 102112b2f;  */

undefined8 FUN_102112b28(void)

{
  return 0x1b;
}



/* Entry: 102112b30; end: 102112bb3;  */

void FUN_102112b30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102112c74,param_2,FUN_102112c78,param_2,FUN_102112ca0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102112bb4; end: 102112c03;  */

undefined8 FUN_102112bb4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102112c04; end: 102112c33;  */

undefined ** FUN_102112c04(void)

{
  return &PTR_DAT_112e597d8;
}



/* Entry: 102112c34; end: 102112c53;  */

void FUN_102112c34(void)

{
  func_0x000107c61168(&PTR_PTR_112e595c8);
  return;
}



/* Entry: 102112c54; end: 102112c77;  */

undefined1  [16] FUN_102112c54(void)

{
  return ZEXT816(0x1104cc5a0);
}



/* Entry: 102112c78; end: 102112c9f;  */

void FUN_102112c78(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102112ca0; end: 102112ca7;  */

undefined8 FUN_102112ca0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102112ca8; end: 102112ce3;  */

void FUN_102112ca8(undefined8 *param_1,undefined8 param_2)

{
  FUN_102112ce4();
  func_0x0001000a7f38("SCClearMenuActionSheetScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 102112ce4; end: 102112ecf;  */

void FUN_102112ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104cc920;
  ppuVar4 = &PTR_DAT_112e597d8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104cc5f0;
  func_0x000107c613fc(&UNK_1104cc5f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e59660;
  func_0x0001000285a8(0x112e59660,&UNK_10da5e110);
  func_0x0001000a6ee8(&UNK_1104cc7f0,
                      "ClearMenuActionSheetScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_102112ed0,puVar2,uVar3,&UNK_1104cc7f0,&PTR_DAT_112e596f8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104cc5a0,
                      "SCClearMenuActionSheetEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_102112f84,param_3,uVar3,&UNK_1104cc5a0,&PTR_DAT_112e59560);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104cc618;
  func_0x000107c613fc(&UNK_1104cc618,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104cc3c0,
                      "SCClearMenuActionSheetScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_102113034,puVar2,uVar3,&UNK_1104cc3c0,&PTR_DAT_112e594d8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e59668;
  func_0x0001000285a8(0x112e59668,&UNK_10da5e118);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102112ed0; end: 102112f0f;  */

void FUN_102112ed0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1021137fc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ClearMenuActionSheetScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 102112f10; end: 102112f83;  */

void FUN_102112f10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102113070;
  func_0x0001000823a8(0x102113070,param_3);
  func_0x000100082720("SCClearMenuActionSheetEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102112f84; end: 102112f8b;  */

void FUN_102112f84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102113070;
  func_0x0001000823a8();
  func_0x000100082720("SCClearMenuActionSheetEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102112f8c; end: 102113033;  */

void FUN_102112f8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104cc640;
  func_0x000107c613fc(&UNK_1104cc640,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102113068;
  func_0x0001000823a8(FUN_102113068,puVar1);
  func_0x000100082720("SCClearMenuActionSheetScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar2;
  return;
}



/* Entry: 102113034; end: 10211303b;  */

void FUN_102113034(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104cc640;
  func_0x000107c613fc(&UNK_1104cc640,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102113068;
  func_0x0001000823a8(FUN_102113068,puVar3);
  func_0x000100082720("SCClearMenuActionSheetScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 10211303c; end: 102113067;  */

void FUN_10211303c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102113068; end: 102113077;  */

void FUN_102113068(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104cc448;
  func_0x000107c613fc(&UNK_1104cc448,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102111aac;
  func_0x00010058fa64(FUN_102111aac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102113078; end: 102113153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102113078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10211348c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e59670) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e59678) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102113154);
  (*pcVar1)();
}



/* Entry: 102113154; end: 1021131b3; -[_TtC36ClearMenuActionSheetScopeGraphBridge51ClearMenuActionSheetScopeGraphBridgeSaberEntryPoint init] */

void FUN_102113154(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ClearMenuActionSheetScopeGraphBridge.ClearMenuActionSheetScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102113180);
  (*pcVar1)();
}



/* Entry: 1021131b4; end: 1021131eb; -[_TtC36ClearMenuActionSheetScopeGraphBridge51ClearMenuActionSheetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021131d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021131d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021131b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e59670));
  return;
}



/* Entry: 1021131ec; end: 102113213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021131ec(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e59678),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e59670));
  return;
}



/* Entry: 102113214; end: 102113233;  */

void FUN_102113214(void)

{
  func_0x000107c61168(&PTR_PTR_11281e780);
  return;
}



/* Entry: 102113234; end: 1021132bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102113234(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e596a8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e596b0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021132bc);
  (*pcVar2)();
}



/* Entry: 1021132bc; end: 1021133a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021132bc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e596a8);
  *(undefined **)(unaff_x20 + _DAT_112e596a8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e596b0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e596b0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104cc710;
  func_0x000107c613fc(&UNK_1104cc710,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1021133a8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021133a4; end: 1021133af;  */

void FUN_1021133a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021133b0; end: 10211340f; -[_TtC36ClearMenuActionSheetScopeGraphBridge51SCClearMenuActionSheetScopedServicesSaberEntryPoint init] */

void FUN_1021133b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ClearMenuActionSheetScopeGraphBridge.SCClearMenuActionSheetScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021133dc);
  (*pcVar1)();
}



/* Entry: 102113410; end: 102113447; -[_TtC36ClearMenuActionSheetScopeGraphBridge51SCClearMenuActionSheetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102113410(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e596b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e596a8));
  return;
}



/* Entry: 102113448; end: 10211344b;  */

void FUN_102113448(void)

{
  return;
}



/* Entry: 10211344c; end: 10211346b;  */

void FUN_10211344c(void)

{
  FUN_1021132bc();
  return;
}



/* Entry: 10211346c; end: 10211348b;  */

void FUN_10211346c(void)

{
  func_0x000107c61168(&PTR_PTR_11281e848);
  return;
}



/* Entry: 10211348c; end: 10211355b;  */

undefined8 FUN_10211348c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e596e0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10211355c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10211355c; end: 10211357b;  */

void FUN_10211355c(void)

{
  func_0x000107c61168(&PTR_PTR_11281e910);
  return;
}



/* Entry: 10211357c; end: 102113597;  */

void FUN_10211357c(undefined8 param_1)

{
  func_0x0001000285a8(0x112e596e8,&UNK_10da5e1e8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102113604,param_1);
  return;
}



/* Entry: 102113598; end: 102113603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102113598(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10211355c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e596f0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102113604; end: 10211360b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102113604(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10211355c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e596f0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10211360c; end: 102113657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211360c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e596f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102113658; end: 1021136b7; -[_TtC36ClearMenuActionSheetScopeGraphBridge44ClearMenuActionSheetScopeGraphBridgeServices init] */

void FUN_102113658(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ClearMenuActionSheetScopeGraphBridge.ClearMenuActionSheetScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102113684);
  (*pcVar1)();
}



/* Entry: 1021136b8; end: 1021136c7; -[_TtC36ClearMenuActionSheetScopeGraphBridge44ClearMenuActionSheetScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021136b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e596f0));
  return;
}



/* Entry: 1021136c8; end: 102113753;  */

void FUN_1021136c8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102113708,0);
  return;
}



/* Entry: 102113754; end: 10211376f;  */

void FUN_102113754(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021137c0,param_1);
  return;
}



/* Entry: 102113770; end: 1021137bf;  */

void FUN_102113770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1021137c0; end: 1021137f3;  */

void FUN_1021137c0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1021137f4; end: 1021137fb;  */

undefined8 FUN_1021137f4(void)

{
  return 0x1b;
}



/* Entry: 1021137fc; end: 102113973;  */

void FUN_1021137fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104cc758;
  func_0x000107c613fc(&UNK_1104cc758,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102113974,puVar1);
  return;
}



/* Entry: 102113974; end: 10211397b;  */

void FUN_102113974(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e596e0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e596e0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104cc830;
  func_0x000107c613fc(&UNK_1104cc830,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102113a48;
  func_0x00010058fa64(0x102113a48,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10211397c; end: 1021139d7;  */

void FUN_10211397c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e596e0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e596e0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1021139d8; end: 102113a4f;  */

undefined ** FUN_1021139d8(void)

{
  return &PTR_DAT_112e597d8;
}



/* Entry: 102113a50; end: 102113a97; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102113a50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e59748;
  func_0x000107c61428(param_1 + _DAT_112e59748,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102113a98; end: 102113aef; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102113a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e59748;
  func_0x000107c61428(param_1 + _DAT_112e59748,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102113af0; end: 102113b37; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint sCSafetyReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102113af0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e59750;
  func_0x000107c61428(param_1 + _DAT_112e59750,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102113b38; end: 102113b43; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint setSCSafetyReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102113b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e59750;
  func_0x000107c61428(param_1 + _DAT_112e59750,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102113b44; end: 102113b8b; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint clearMenuActionSheetScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102113b44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e59758;
  func_0x000107c61428(param_1 + _DAT_112e59758,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102113b8c; end: 102113b97; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint setClearMenuActionSheetScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102113b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e59758;
  func_0x000107c61428(param_1 + _DAT_112e59758,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102113b98; end: 102113bf7;  */

void FUN_102113b98(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102113bf8; end: 102113db3;  */

/* WARNING: Possible PIC construction at 0x000102113d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102113d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102113d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102113d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102113d48) */
/* WARNING: Removing unreachable block (ram,0x000102113d38) */
/* WARNING: Removing unreachable block (ram,0x000102113d14) */
/* WARNING: Removing unreachable block (ram,0x000102113d8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102113bf8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c51240();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3fad4();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102113214();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10211348c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102113db4);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e59670) = lVar5;
      *(long *)(lVar3 + _DAT_112e59678) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102113db4; end: 102113ddb; -[SCClearMenuActionSheetScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102113db4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102113bf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


