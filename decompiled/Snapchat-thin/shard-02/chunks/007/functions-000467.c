/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10206847c; end: 102068b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206847c(double param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  bool bVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  long unaff_x20;
  long lVar25;
  undefined1 uVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  double dVar31;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long alStack_a8 [3];
  undefined1 auStack_90 [32];
  
  lVar7 = _DAT_112e543b0;
  func_0x000107c61428(unaff_x20 + _DAT_112e543b0,auStack_90,1,0);
  lVar9 = _DAT_112e543c0;
  lVar8 = _DAT_112e543b8;
  lVar6 = _DAT_112e54388;
  lVar12 = *(long *)(unaff_x20 + lVar7);
  uVar23 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar30 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar30 = ~(-1L << (uVar23 & 0x3f));
  }
  uVar30 = uVar30 & *(ulong *)(lVar12 + 0x40);
  func_0x000107c61434();
  lVar24 = 0;
  do {
    while (uVar30 == 0) {
      bVar11 = SCARRY8(lVar24,1);
      lVar24 = lVar24 + 1;
      if (bVar11) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x102068b04);
        (*pcVar10)();
      }
      if ((long)(uVar23 + 0x3f >> 6) <= lVar24) {
        func_0x000107c61574(lVar12);
        puVar27 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        uVar16 = *(undefined8 *)(unaff_x20 + lVar7);
        *(undefined **)(unaff_x20 + lVar7) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        func_0x000107c6142c(uVar16);
        func_0x000107c61428(unaff_x20 + lVar8,alStack_a8,1,0);
        uVar16 = *(undefined8 *)(unaff_x20 + lVar8);
        *(undefined **)(unaff_x20 + lVar8) = puVar27;
        func_0x000107c6142c(uVar16);
        func_0x000107c61428(unaff_x20 + lVar9,auStack_c0,1,0);
        uVar16 = *(undefined8 *)(unaff_x20 + lVar9);
        *(undefined **)(unaff_x20 + lVar9) = puVar27;
        func_0x000107c6142c(uVar16);
        lVar6 = _DAT_112e543c8;
        func_0x000107c61428(unaff_x20 + _DAT_112e543c8,auStack_d8,1,0);
        uVar16 = *(undefined8 *)(unaff_x20 + lVar6);
        *(undefined **)(unaff_x20 + lVar6) = puVar27;
        func_0x000107c6142c(uVar16);
        lVar6 = _DAT_112e543d0;
        func_0x000107c61428(unaff_x20 + _DAT_112e543d0,auStack_f0,1,0);
        uVar16 = *(undefined8 *)(unaff_x20 + lVar6);
        *(undefined **)(unaff_x20 + lVar6) = puVar27;
        func_0x000107c6142c(uVar16);
        return;
      }
      uVar30 = ((ulong *)(lVar12 + 0x40))[lVar24];
    }
    uVar5 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar21 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar24 << 6;
    plVar1 = (long *)(*(long *)(lVar12 + 0x30) + uVar21 * 0x10);
    lVar18 = *plVar1;
    uVar5 = plVar1[1];
    plVar22 = (long *)(*(long *)(lVar12 + 0x38) + uVar21 * 0x70);
    lVar19 = *plVar22;
    plVar1 = (long *)plVar22[1];
    lVar14 = plVar22[2];
    lVar29 = plVar22[7];
    lVar2 = plVar22[8];
    lVar20 = plVar22[9];
    lVar3 = plVar22[10];
    lVar28 = plVar22[0xc];
    lVar4 = plVar22[0xd];
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x000107c61434(plVar1);
    func_0x000107c61174();
    func_0x000107c61434(lVar2);
    func_0x000107c61434(lVar3);
    FUN_10206b040(lVar18,uVar5);
    func_0x000107c61428(unaff_x20 + lVar8,alStack_a8,0x20,0);
    lVar25 = *(long *)(unaff_x20 + lVar8);
    if (*(long *)(lVar25 + 0x10) == 0) {
LAB_1020687cc:
      func_0x000107c614a8(alStack_a8);
      dVar31 = 0.0;
    }
    else {
      func_0x000107c61434(lVar25);
      lVar15 = lVar18;
      uVar21 = uVar5;
      func_0x000100029284();
      if ((uVar21 & 1) == 0) {
        func_0x000107c6142c(lVar25);
        goto LAB_1020687cc;
      }
      uVar16 = *(undefined8 *)(*(long *)(lVar25 + 0x38) + lVar15 * 8);
      func_0x000107c61174(uVar16);
      func_0x000107c614a8(alStack_a8);
      func_0x000107c6142c(lVar25);
      func_0x000107c3cf50(uVar16);
      func_0x000107c61170(uVar16);
      dVar31 = param_1 * 1000.0;
    }
    func_0x000107c61428(unaff_x20 + lVar9,alStack_a8,0x20,0);
    lVar25 = *(long *)(unaff_x20 + lVar9);
    if (*(long *)(lVar25 + 0x10) == 0) {
LAB_102068844:
      func_0x000107c6142c(uVar5);
      uVar16 = 0;
    }
    else {
      func_0x000107c61434(lVar25);
      uVar21 = uVar5;
      func_0x000100029284();
      if ((uVar21 & 1) == 0) {
        func_0x000107c6142c(lVar25);
        goto LAB_102068844;
      }
      uVar16 = *(undefined8 *)(*(long *)(lVar25 + 0x38) + lVar18 * 8);
      func_0x000107c61434(uVar16);
      func_0x000107c6142c(lVar25);
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c614a8(alStack_a8);
    if (*(long *)(lVar14 + _DAT_113815280) == 0) {
      uVar26 = 0;
    }
    else {
      uVar26 = *(undefined1 *)(*(long *)(lVar14 + _DAT_113815280) + _DAT_11308ee38);
    }
    func_0x0001046a0100(0);
    func_0x000107c610f8();
    uVar17 = param_2;
    func_0x000107c61174(param_2);
    func_0x00010469f9f4(uVar16,uVar17,uVar26);
    if (0x7fefffffffffffff < (ulong)ABS(dVar31)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x102068b08);
      (*pcVar10)();
    }
    if (dVar31 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x102068b0c);
      (*pcVar10)();
    }
    param_1 = 9.223372036854776e+18;
    if (9.223372036854776e+18 <= dVar31) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x102068b10);
      (*pcVar10)();
    }
    uVar17 = uVar16;
    func_0x000107c61174();
    lVar18 = 4;
    FUN_10206543c(4,lVar14);
    plVar22 = alStack_a8;
    func_0x000107c61428(unaff_x20 + lVar6,plVar22,0x20,0);
    lVar25 = *(long *)(unaff_x20 + lVar6);
    if (*(long *)(lVar25 + 0x10) == 0) {
LAB_102068988:
      func_0x000107c614a8(alStack_a8);
      puVar27 = (undefined *)0x0;
    }
    else {
      func_0x000107c61434(lVar25);
      plVar22 = plVar1;
      func_0x000100029284();
      if (((ulong)plVar22 & 1) == 0) {
        func_0x000107c6142c(lVar25);
        goto LAB_102068988;
      }
      param_1 = *(double *)(*(long *)(lVar25 + 0x38) + lVar19 * 8);
      func_0x000107c614a8(alStack_a8);
      func_0x000107c6142c(lVar25);
      puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0();
    }
    lVar19 = lVar18;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar19 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(plVar22);
    }
    func_0x000107c61174(puVar27);
    lVar25 = 0;
    if (lVar3 != 0) {
      func_0x000107c5fadc(lVar20,lVar3);
      lVar25 = lVar20;
    }
    if (lVar4 == 0) {
      lVar28 = 0;
    }
    else {
      func_0x000107c5fadc();
    }
    if (lVar2 == 0) {
      lVar29 = 0;
    }
    else {
      func_0x000107c5fadc(lVar29,lVar2);
    }
    uVar30 = uVar30 - 1 & uVar30;
    puVar13 = PTR_PTR_1126b9088;
    func_0x000107c610f8(PTR_PTR_1126b9088);
    func_0x000107c30cc8();
    func_0x000107c61170(puVar27);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar25);
    func_0x000107c61170(lVar28);
    func_0x000107c61170(lVar29);
    func_0x00010469f074(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar17);
    func_0x000107c61174();
    func_0x000107c61174(puVar13);
    lVar19 = lVar18;
    func_0x00010469ea20(lVar18,puVar13,uVar16);
    alStack_a8[0] = lVar19;
    func_0x0001002a64a8(alStack_a8);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(puVar27);
    func_0x000107c6142c(lVar4);
    func_0x000107c6142c(lVar3);
    func_0x000107c6142c(lVar2);
    func_0x000107c61170(lVar14);
    func_0x000107c6142c(plVar1);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar17);
  } while( true );
}



/* Entry: 102068b10; end: 102068b8b;  */

void FUN_102068b10(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x00010469f49c(0);
    func_0x00010469f350();
    FUN_10206847c();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102068b8c; end: 102068b93;  */

void FUN_102068b8c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x00010469f49c(0);
    func_0x00010469f350();
    FUN_10206847c();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102068b94; end: 102068be7;  */

void FUN_102068b94(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102068bf0();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102068be8; end: 102068bef;  */

void FUN_102068be8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102068bf0();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102068bf0; end: 102068fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102068bf0(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_112e54378;
  func_0x000107c61428(unaff_x20 + _DAT_112e54378,auStack_78,0,0);
  lVar14 = _DAT_112e543a8;
  lVar7 = *(long *)(unaff_x20 + lVar3);
  uVar11 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(lVar7 + 0x40);
  func_0x000107c61434();
  lVar15 = 0;
  do {
    while (uVar18 == 0) {
      bVar5 = SCARRY8(lVar15,1);
      lVar15 = lVar15 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102068fc8);
        (*pcVar4)();
      }
      if ((long)(uVar11 + 0x3f >> 6) <= lVar15) {
        func_0x000107c61574(lVar7);
        lVar3 = _DAT_112e54380;
        func_0x000107c61428(unaff_x20 + _DAT_112e54380,auStack_90,1,0);
        lVar14 = *(long *)(unaff_x20 + lVar3);
        puVar16 = (ulong *)(lVar14 + 0x40);
        uVar11 = -1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
        uVar18 = 0xffffffffffffffff;
        if (-uVar11 < 0x40) {
          uVar18 = ~(-1L << (-uVar11 & 0x3f));
        }
        uVar18 = uVar18 & *puVar16;
        func_0x000107c61438(lVar14,2);
        lVar15 = 0;
        lVar7 = lVar15;
        while( true ) {
          for (; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
            uVar2 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
            uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            func_0x000107c498f8(*(undefined8 *)
                                 (*(long *)(lVar14 + 0x38) +
                                  LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 + lVar7 * 0x200));
            lVar15 = lVar7;
          }
          bVar5 = SCARRY8(lVar7,1);
          lVar7 = lVar7 + 1;
          if (bVar5) break;
          if ((long)(0x3f - uVar11 >> 6) <= lVar7) {
            func_0x000107c6142c(lVar14);
            func_0x000100cdf270(lVar14,puVar16,~uVar11,lVar15,0);
            uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
            *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
            func_0x000107c6142c(uVar8);
            return;
          }
          uVar18 = puVar16[lVar7];
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102068fcc);
        (*pcVar4)();
      }
      uVar18 = ((ulong *)(lVar7 + 0x40))[lVar15];
    }
    uVar2 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    plVar1 = (long *)(*(long *)(lVar7 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                     lVar15 * 0x400);
    lVar9 = *plVar1;
    uVar2 = plVar1[1];
    func_0x000107c61428(unaff_x20 + lVar3,auStack_90,0x20,0);
    lVar12 = *(long *)(unaff_x20 + lVar3);
    lVar17 = *(long *)(lVar12 + 0x10);
    func_0x000107c61434(uVar2);
    if (lVar17 == 0) {
LAB_102068c90:
      func_0x000107c614a8(auStack_90);
    }
    else {
      func_0x000107c61434(lVar12);
      lVar17 = lVar9;
      uVar10 = uVar2;
      func_0x000100029284();
      if ((uVar10 & 1) == 0) {
        func_0x000107c6142c(lVar12);
        goto LAB_102068c90;
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + lVar17 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_90);
      func_0x000107c6142c(lVar12);
      func_0x000107c498f8(uVar8);
      func_0x000107c61428(unaff_x20 + lVar3,auStack_90,0x21,0);
      uVar13 = *(undefined8 *)(unaff_x20 + lVar3);
      func_0x000107c61434(uVar13);
      lVar12 = lVar9;
      uVar10 = uVar2;
      func_0x000100029284();
      func_0x000107c6142c(uVar13);
      if ((uVar10 & 1) != 0) {
        iVar6 = (int)*(undefined8 *)(unaff_x20 + lVar3);
        func_0x000107c61558();
        lVar17 = *(long *)(unaff_x20 + lVar3);
        *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
        if (iVar6 == 0) {
          FUN_10206455c();
        }
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar17 + 0x30) + lVar12 * 0x10 + 8));
        func_0x000107c61170(*(undefined8 *)(*(long *)(lVar17 + 0x38) + lVar12 * 8));
        FUN_102064bc8(lVar12,lVar17);
        *(long *)(unaff_x20 + lVar3) = lVar17;
      }
      func_0x000107c614a8(auStack_90);
      func_0x000107c61428(unaff_x20 + lVar14,auStack_90,0x21,0);
      uVar13 = *(undefined8 *)(unaff_x20 + lVar14);
      func_0x000107c61434(uVar13);
      uVar10 = uVar2;
      func_0x000100029284();
      func_0x000107c6142c(uVar13);
      if ((uVar10 & 1) != 0) {
        iVar6 = (int)*(undefined8 *)(unaff_x20 + lVar14);
        func_0x000107c61558();
        lVar12 = *(long *)(unaff_x20 + lVar14);
        *(undefined8 *)(unaff_x20 + lVar14) = 0x8000000000000000;
        if (iVar6 == 0) {
          func_0x000101432c98();
        }
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar12 + 0x30) + lVar9 * 0x10 + 8));
        FUN_102064a18(lVar9,lVar12);
        *(long *)(unaff_x20 + lVar14) = lVar12;
      }
      func_0x000107c614a8(auStack_90);
      func_0x000107c61170(uVar8);
    }
    uVar18 = uVar18 - 1 & uVar18;
    func_0x000107c6142c(uVar2);
  } while( true );
}



/* Entry: 102068fcc; end: 102068fd3;  */

void FUN_102068fcc(void)

{
  return;
}



/* Entry: 102068fd4; end: 102069097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102068fd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  lVar1 = lStack_48;
  if (lStack_48 != 0) {
    uVar2 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    lVar3 = lVar1;
    func_0x000107c5df18();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
    if (lVar3 == 0) {
      func_0x0001000d224c(&lStack_48);
      if (lStack_48 != 0) {
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c4532c(lStack_48);
        func_0x000107c615e8(lStack_48);
        func_0x000107c61170(param_1);
      }
    }
  }
  return;
}



/* Entry: 102069098; end: 102069383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102069098(ulong *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_108 [112];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar9 = *(ulong *)(unaff_x20 + _DAT_112e54338);
  func_0x000107c614f0();
  FUN_102058808();
  if ((uVar9 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1[2] + _DAT_113815278);
    func_0x0001084c1950();
    if (iVar1 != 0) {
      uVar9 = *param_1;
      FUN_102069f30(uVar9,param_1[1]);
      if ((uVar9 & 1) == 0) {
        return;
      }
      uVar7 = 1;
      goto LAB_1020691e4;
    }
  }
  lVar8 = _DAT_112e54390;
  uVar9 = *param_1;
  uVar10 = param_1[1];
  func_0x000107c61428(unaff_x20 + _DAT_112e54390,auStack_68,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar8);
  func_0x000107c61434(uVar6);
  uVar11 = uVar9;
  func_0x0001000f66f0(uVar9,uVar10,uVar6);
  func_0x000107c6142c(uVar6);
  lVar8 = _DAT_112e54378;
  func_0x000107c61428(unaff_x20 + _DAT_112e54378,auStack_108,0x20,0);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    func_0x000100029284();
    if ((uVar10 & 1) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar9 * 8);
      func_0x000107c61174(uVar6);
      func_0x000107c614a8(auStack_108);
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(lVar8);
      return;
    }
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c614a8(auStack_108);
  if ((uVar11 & 1) != 0) {
    return;
  }
  uVar7 = 0;
LAB_1020691e4:
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSTimer_1126af1b0);
  puVar3 = &UNK_1104c2828;
  func_0x000107c613fc(&UNK_1104c2828,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1104c29c8;
  func_0x000107c613fc(&UNK_1104c29c8,0x89,7);
  uVar11 = param_1[5];
  uVar10 = param_1[4];
  uVar9 = param_1[6];
  *(ulong *)(puVar4 + 0x50) = param_1[7];
  *(ulong *)(puVar4 + 0x48) = uVar9;
  uVar9 = param_1[8];
  uVar13 = param_1[0xb];
  uVar12 = param_1[10];
  *(ulong *)(puVar4 + 0x60) = param_1[9];
  *(ulong *)(puVar4 + 0x58) = uVar9;
  *(ulong *)(puVar4 + 0x70) = uVar13;
  *(ulong *)(puVar4 + 0x68) = uVar12;
  uVar9 = param_1[0xc];
  *(ulong *)(puVar4 + 0x80) = param_1[0xd];
  *(ulong *)(puVar4 + 0x78) = uVar9;
  uVar9 = *param_1;
  uVar13 = param_1[3];
  uVar12 = param_1[2];
  *(ulong *)(puVar4 + 0x20) = param_1[1];
  *(ulong *)(puVar4 + 0x18) = uVar9;
  *(ulong *)(puVar4 + 0x30) = uVar13;
  *(ulong *)(puVar4 + 0x28) = uVar12;
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(ulong *)(puVar4 + 0x40) = uVar11;
  *(ulong *)(puVar4 + 0x38) = uVar10;
  puVar4[0x88] = uVar7;
  uStack_78 = 0x10206be3c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100fef460;
  puStack_80 = &UNK_1104c29e0;
  ppuVar5 = &puStack_98;
  puStack_70 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar3 = puStack_70;
  func_0x00010205f3b0(param_1,auStack_108);
  func_0x000107c61574(puVar3);
  func_0x000107c51924(0x3fb9a027525460aa,puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  lVar8 = _DAT_112e54378;
  uVar9 = *param_1;
  uVar10 = param_1[1];
  func_0x000107c61428(unaff_x20 + _DAT_112e54378,auStack_108,0x21,0);
  func_0x000107c61434(uVar10);
  func_0x000107c61174(puVar2);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar8);
  func_0x000107c61558(uVar6);
  puStack_98 = *(undefined **)(unaff_x20 + lVar8);
  *(undefined8 *)(unaff_x20 + lVar8) = 0x8000000000000000;
  FUN_10206e190(puVar2,uVar9,uVar10,uVar6);
  func_0x000107c6142c(uVar10);
  *(undefined **)(unaff_x20 + lVar8) = puStack_98;
  func_0x000107c614a8(auStack_108);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102069384; end: 102069c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102069384(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long alStack_88 [3];
  
  lVar10 = _DAT_112e543b8;
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  func_0x000107c61428(unaff_x20 + _DAT_112e543b8,alStack_88,0x20,0);
  lVar9 = *(long *)(unaff_x20 + lVar10);
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_102069428:
    func_0x000107c614a8(alStack_88);
    puVar12 = PTR_PTR_1126b46f0;
    func_0x000107c610f8();
    func_0x000107c61434(plVar2);
    func_0x000107c453e4();
    func_0x000107c61428(unaff_x20 + lVar10,alStack_88,0x21,0);
    if (puVar12 == (undefined *)0x0) {
      lVar9 = lVar1;
      func_0x000102064474(lVar1,plVar2);
      func_0x000107c6142c(plVar2);
      func_0x000107c61170(lVar9);
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x20 + lVar10);
      func_0x000107c61558(uVar4);
      uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
      *(undefined8 *)(unaff_x20 + lVar10) = 0x8000000000000000;
      func_0x00010206e1ac(puVar12,lVar1,plVar2,uVar4);
      func_0x000107c6142c(plVar2);
      *(undefined8 *)(unaff_x20 + lVar10) = uVar8;
    }
    func_0x000107c614a8(alStack_88);
    lVar11 = 6;
    FUN_10206543c(6,param_2[2]);
    lVar9 = _DAT_112e54388;
    plVar7 = alStack_88;
    func_0x000107c61428(unaff_x20 + _DAT_112e54388,plVar7,0x20,0);
    lVar9 = *(long *)(unaff_x20 + lVar9);
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_102069570:
      func_0x000107c614a8(alStack_88);
      puVar12 = (undefined *)0x0;
    }
    else {
      func_0x000107c61434(lVar9);
      lVar13 = lVar1;
      plVar7 = plVar2;
      func_0x000100029284();
      if (((ulong)plVar7 & 1) == 0) {
        func_0x000107c6142c(lVar9);
        goto LAB_102069570;
      }
      param_1 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + lVar13 * 8);
      func_0x000107c614a8(alStack_88);
      func_0x000107c6142c(lVar9);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(param_1);
    }
    lVar9 = lVar11;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar9 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(plVar7);
    }
    lVar13 = param_2[10];
    if (lVar13 == 0) {
      func_0x000107c61174(puVar12);
      lVar14 = 0;
      lVar13 = 0;
      if (param_2[0xd] != 0) goto LAB_1020695e0;
LAB_102069600:
      lVar5 = 0;
    }
    else {
      lVar14 = param_2[9];
      func_0x000107c61174(puVar12);
      func_0x000107c5fadc(lVar14,lVar13);
      lVar13 = lVar14;
      if (param_2[0xd] == 0) goto LAB_102069600;
LAB_1020695e0:
      lVar5 = param_2[0xc];
      func_0x000107c5fadc();
      lVar14 = lVar13;
    }
    if (param_2[8] == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = param_2[7];
      func_0x000107c5fadc();
    }
    puVar6 = PTR_PTR_1126b9088;
    func_0x000107c610f8(PTR_PTR_1126b9088);
    func_0x000107c30cc8();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar13);
    func_0x00010469f074(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174(puVar6);
    lVar9 = lVar11;
    func_0x00010469ea20(lVar11,puVar6,0);
    alStack_88[0] = lVar9;
    func_0x0001002a64a8(alStack_88);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar12);
  }
  else {
    func_0x000107c61434(lVar9);
    lVar11 = lVar1;
    plVar7 = plVar2;
    func_0x000100029284();
    if (((ulong)plVar7 & 1) == 0) {
      func_0x000107c6142c(lVar9);
      goto LAB_102069428;
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + lVar11 * 8);
    func_0x000107c61174(uVar4);
    func_0x000107c614a8(alStack_88);
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(lVar9);
  }
  func_0x000107c61428(unaff_x20 + lVar10,alStack_88,0x20,0);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  if (*(long *)(lVar10 + 0x10) == 0) {
LAB_102069790:
    func_0x000107c614a8(alStack_88);
  }
  else {
    func_0x000107c61434(lVar10);
    lVar9 = lVar1;
    plVar7 = plVar2;
    func_0x000100029284();
    if (((ulong)plVar7 & 1) == 0) {
      func_0x000107c6142c(lVar10);
      goto LAB_102069790;
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + lVar9 * 8);
    func_0x000107c61174(uVar4);
    func_0x000107c614a8(alStack_88);
    func_0x000107c6142c(lVar10);
    func_0x000107c5ba38(uVar4);
    func_0x000107c61170(uVar4);
  }
  lVar10 = _DAT_112e543c8;
  func_0x000107c61428(unaff_x20 + _DAT_112e543c8,alStack_88,0x20,0);
  lVar9 = *(long *)(unaff_x20 + lVar10);
  if (*(long *)(lVar9 + 0x10) != 0) {
    func_0x000107c61434(lVar9);
    plVar7 = plVar2;
    func_0x000100029284(lVar1);
    if (((ulong)plVar7 & 1) != 0) {
      func_0x000107c614a8(alStack_88);
      func_0x000107c6142c(lVar9);
      return;
    }
    func_0x000107c6142c(lVar9);
  }
  func_0x000107c614a8(alStack_88);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e54330);
  puVar12 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac(uVar4);
  func_0x000107c51b38(puVar12);
  func_0x000107c61428(unaff_x20 + lVar10,alStack_88,0x21,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x000107c61558(uVar4);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
  *(undefined8 *)(unaff_x20 + lVar10) = 0x8000000000000000;
  FUN_10206e030(param_1,lVar1,plVar2,uVar4);
  *(undefined8 *)(unaff_x20 + lVar10) = uVar8;
  func_0x000107c614a8(alStack_88);
  lVar10 = _DAT_112e543d0;
  func_0x000107c61428(unaff_x20 + _DAT_112e543d0,alStack_88,0x20,0);
  lVar9 = *(long *)(unaff_x20 + lVar10);
  if (*(long *)(lVar9 + 0x10) != 0) {
    func_0x000107c61434(lVar9);
    lVar11 = lVar1;
    plVar7 = plVar2;
    func_0x000100029284();
    if (((ulong)plVar7 & 1) != 0) {
      lVar11 = *(long *)(*(long *)(lVar9 + 0x38) + lVar11 * 8);
      func_0x000107c614a8(alStack_88);
      func_0x000107c6142c(lVar9);
      lVar9 = lVar11 + 1;
      if (lVar11 == -1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020698e4);
        (*pcVar3)();
      }
      goto LAB_1020698f8;
    }
    func_0x000107c6142c(lVar9);
  }
  func_0x000107c614a8(alStack_88);
  lVar9 = 0;
LAB_1020698f8:
  func_0x000107c61428(unaff_x20 + lVar10,alStack_88,0x21,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x000107c61558(uVar4);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
  *(undefined8 *)(unaff_x20 + lVar10) = 0x8000000000000000;
  FUN_10195f270(lVar9,lVar1,plVar2,uVar4);
  *(undefined8 *)(unaff_x20 + lVar10) = uVar8;
  func_0x000107c614a8(alStack_88);
  return;
}



/* Entry: 102069c44; end: 102069d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102069c44(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  FUN_102068bf0();
  uVar2 = 0;
  func_0x00010469f49c(0);
  func_0x00010469f360();
  FUN_10206847c();
  func_0x000107c61170(uVar2);
  FUN_102069d8c();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010fe67c();
  lVar1 = _DAT_112e543a8;
  func_0x000107c61428(unaff_x20 + _DAT_112e543a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c6142c(uVar2);
  func_0x0001010fe67c();
  lVar1 = _DAT_112e54388;
  func_0x000107c61428(unaff_x20 + _DAT_112e54388,auStack_60,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  func_0x000107c6142c(uVar2);
  lVar1 = _DAT_112e54390;
  func_0x000107c61428(unaff_x20 + _DAT_112e54390,auStack_78,1,0);
  puVar4 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar2);
  lVar1 = _DAT_112e54398;
  func_0x000107c61428(unaff_x20 + _DAT_112e54398,auStack_90,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  func_0x000107c6142c(uVar2);
  lVar1 = _DAT_112e543a0;
  func_0x000107c61428(unaff_x20 + _DAT_112e543a0,auStack_a8,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102069d8c; end: 102069f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102069d8c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = _DAT_112e54390;
  func_0x000107c61428(unaff_x20 + _DAT_112e54390,auStack_78,0,0);
  lVar4 = _DAT_112e543a0;
  lVar9 = *(long *)(unaff_x20 + lVar9);
  func_0x000107c61428(unaff_x20 + _DAT_112e543a0,auStack_90,0,0);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar4);
  lStack_98 = lVar9;
  func_0x000107c61434(lVar9);
  func_0x000107c61434(uVar10);
  func_0x00010105ba6c();
  lVar4 = lStack_98;
  lVar9 = 0;
  puVar11 = (ulong *)(lStack_98 + 0x38);
  uVar8 = 1L << ((ulong)*(byte *)(lStack_98 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lStack_98 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar11;
  while( true ) {
    while (uVar12 != 0) {
      uVar3 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 - 1 & uVar12;
      puVar1 = (undefined8 *)
               (*(long *)(lVar4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar9 * 0x400);
      uVar10 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c61434(uVar2);
      func_0x0001000d224c(&lStack_98);
      lVar5 = lStack_98;
      if (lStack_98 == 0) {
        func_0x000107c6142c(uVar2);
      }
      else {
        func_0x000107c5fadc(uVar10,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c45320(lVar5);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(uVar10);
      }
    }
    bVar7 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar7) break;
    if ((long)(uVar8 + 0x3f >> 6) <= lVar9) {
      func_0x000107c61574(lVar4);
      return;
    }
    uVar12 = puVar11[lVar9];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102069f30);
  (*pcVar6)();
}



/* Entry: 102069f30; end: 10206a087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102069f30(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar5 = _DAT_112e54378;
  func_0x000107c61428(unaff_x20 + _DAT_112e54378,auStack_58,0x20,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    uVar1 = param_1;
    uVar3 = param_2;
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar1 * 8);
      func_0x000107c61174(uVar2);
      func_0x000107c614a8(auStack_58);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(lVar5);
      uVar4 = 0;
      goto LAB_10206a06c;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c614a8(auStack_58);
  lVar5 = _DAT_112e54390;
  func_0x000107c61428(unaff_x20 + _DAT_112e54390,auStack_58,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c61434(uVar2);
  uVar1 = param_1;
  func_0x0001000f66f0(param_1,param_2,uVar2);
  func_0x000107c6142c(uVar2);
  lVar5 = _DAT_112e54398;
  if ((uVar1 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    func_0x000107c61428(unaff_x20 + _DAT_112e54398,auStack_70,0,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x000107c61434(uVar2);
    func_0x0001000f66f0(param_1,param_2,uVar2);
    func_0x000107c6142c(uVar2);
    uVar4 = (uint)param_1 ^ 1;
  }
LAB_10206a06c:
  return uVar4 & 1;
}



/* Entry: 10206a088; end: 10206aff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206a088(undefined8 param_1,long param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  ulong uStack_f8;
  long alStack_d8 [3];
  long lStack_c0;
  undefined8 uStack_b8;
  long alStack_a8 [3];
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar12 = _DAT_112e54388;
  if (param_2 == 0) {
    return;
  }
  dVar16 = (double)param_3[5];
  uVar1 = *param_3;
  plVar7 = (long *)param_3[1];
  func_0x000107c61428(param_2 + _DAT_112e54388,alStack_a8,0x20,0);
  lVar11 = *(long *)(param_2 + lVar12);
  lVar14 = *(long *)(lVar11 + 0x10);
  func_0x000107c61438(plVar7,2);
  if (lVar14 == 0) {
LAB_10206a15c:
    func_0x000107c614a8(alStack_a8);
    dVar17 = dVar16;
  }
  else {
    func_0x000107c61434(lVar11);
    uVar15 = uVar1;
    plVar8 = plVar7;
    func_0x000100029284();
    if (((ulong)plVar8 & 1) == 0) {
      func_0x000107c6142c(lVar11);
      goto LAB_10206a15c;
    }
    dVar17 = *(double *)(*(long *)(lVar11 + 0x38) + uVar15 * 8);
    func_0x000107c614a8(alStack_a8);
    func_0x000107c6142c(lVar11);
    if (dVar16 < dVar17) {
      dVar17 = dVar16;
    }
  }
  func_0x000107c61428(param_2 + lVar12,alStack_a8,0x21,0);
  uVar4 = *(undefined8 *)(param_2 + lVar12);
  func_0x000107c61558(uVar4);
  lStack_c0 = *(long *)(param_2 + lVar12);
  *(undefined8 *)(param_2 + lVar12) = 0x8000000000000000;
  FUN_10206e030(dVar17,uVar1,plVar7,uVar4);
  *(long *)(param_2 + lVar12) = lStack_c0;
  func_0x000107c614a8(alStack_a8);
  lVar2 = _DAT_112e543a8;
  func_0x000107c61428(param_2 + _DAT_112e543a8,alStack_a8,0x21,0);
  uVar5 = *(ulong *)(param_2 + lVar2);
  func_0x000107c61558();
  lVar14 = *(long *)(param_2 + lVar2);
  *(undefined8 *)(param_2 + lVar2) = 0x8000000000000000;
  uVar15 = uVar1;
  plVar8 = plVar7;
  lStack_c0 = lVar14;
  func_0x000100029284();
  uVar10 = (ulong)~(uint)plVar8 & 1;
  lVar11 = *(long *)(lVar14 + 0x10) + uVar10;
  if (SCARRY8(*(long *)(lVar14 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10206a888);
    (*pcVar3)();
  }
  if (*(long *)(lVar14 + 0x18) < lVar11) {
    func_0x000101432e00(lVar11,uVar5);
    lVar14 = lStack_c0;
    uVar15 = uVar1;
    plVar9 = plVar7;
    func_0x000100029284();
    if (((uint)plVar8 & 1) != ((uint)plVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10206a8b0);
      (*pcVar3)();
    }
    *(long *)(param_2 + lVar2) = lVar14;
joined_r0x00010206a898:
    if (((ulong)plVar8 & 1) != 0) goto LAB_10206a290;
LAB_10206a25c:
    func_0x00010206dfa0(0,uVar15,uVar1,plVar7,lVar14);
    func_0x000107c6157c(lVar14);
  }
  else {
    if ((uVar5 & 1) == 0) {
      func_0x000101432c98();
      *(long *)(param_2 + lVar2) = lStack_c0;
      lVar14 = lStack_c0;
      goto joined_r0x00010206a898;
    }
    *(long *)(param_2 + lVar2) = lVar14;
    if (((ulong)plVar8 & 1) == 0) goto LAB_10206a25c;
LAB_10206a290:
    func_0x000107c6157c(lVar14);
    func_0x000107c6142c(plVar7);
  }
  *(double *)(*(long *)(lVar14 + 0x38) + uVar15 * 8) =
       *(double *)(*(long *)(lVar14 + 0x38) + uVar15 * 8) + 0.1001;
  func_0x000107c614a8(alStack_a8);
  func_0x000107c61574(lVar14);
  if ((param_4 & 1) == 0) {
    if (*(long *)(lVar14 + 0x10) == 0) {
LAB_10206a49c:
      func_0x000107c61170(param_2);
      func_0x000107c6142c(plVar7);
      return;
    }
    func_0x000107c61434(lVar14);
    uVar15 = uVar1;
    plVar8 = plVar7;
    func_0x000100029284();
    if (((ulong)plVar8 & 1) == 0) {
      func_0x000107c61170(param_2);
      func_0x000107c6142c(plVar7);
      func_0x000107c61574(lVar14);
      return;
    }
    dVar16 = *(double *)(*(long *)(lVar14 + 0x38) + uVar15 * 8);
    func_0x000107c61574(lVar14);
    if (dVar16 < *(double *)(param_2 + _DAT_112e54350)) goto LAB_10206a49c;
    lVar11 = 1;
    FUN_10206543c(1,param_3[2]);
    plVar8 = alStack_a8;
    func_0x000107c61428(param_2 + lVar12,plVar8,0x20,0);
    lVar12 = *(long *)(param_2 + lVar12);
    if (*(long *)(lVar12 + 0x10) == 0) {
LAB_10206a564:
      func_0x000107c614a8(alStack_a8);
      puVar13 = (undefined *)0x0;
    }
    else {
      func_0x000107c61434(lVar12);
      uVar15 = uVar1;
      plVar8 = plVar7;
      func_0x000100029284();
      if (((ulong)plVar8 & 1) == 0) {
        func_0x000107c6142c(lVar12);
        goto LAB_10206a564;
      }
      uVar4 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar15 * 8);
      func_0x000107c614a8(alStack_a8);
      func_0x000107c6142c(lVar12);
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(uVar4);
    }
    lVar12 = lVar11;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar12 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(plVar8);
    }
    uVar15 = param_3[10];
    if (uVar15 == 0) {
      func_0x000107c61174(puVar13);
      uStack_f8 = 0;
      if (param_3[0xd] != 0) goto LAB_10206a5cc;
LAB_10206a5f0:
      uVar15 = 0;
    }
    else {
      uStack_f8 = param_3[9];
      func_0x000107c61174(puVar13);
      func_0x000107c5fadc(uStack_f8,uVar15);
      if (param_3[0xd] == 0) goto LAB_10206a5f0;
LAB_10206a5cc:
      uVar15 = param_3[0xc];
      func_0x000107c5fadc();
    }
    if (param_3[8] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_3[7];
      func_0x000107c5fadc();
    }
    puVar6 = PTR_PTR_1126b9088;
    func_0x000107c610f8(PTR_PTR_1126b9088);
    func_0x000107c30cc8();
    func_0x000107c61170(puVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar5);
    func_0x00010469f074(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174(puVar6);
    lVar12 = lVar11;
    func_0x00010469ea20(lVar11,puVar6,0);
    alStack_a8[0] = lVar12;
    func_0x0001002a64a8(alStack_a8);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar13);
    func_0x000107c61428(param_2 + _DAT_112e54390,alStack_a8,0x21,0);
    func_0x000100403b00(&lStack_c0,uVar1,plVar7);
    func_0x000107c614a8(alStack_a8);
    func_0x000107c6142c(uStack_b8);
    lVar12 = _DAT_112e54378;
    func_0x000107c61428(param_2 + _DAT_112e54378,alStack_a8,0x20,0);
    lVar11 = *(long *)(param_2 + lVar12);
    if (*(long *)(lVar11 + 0x10) != 0) {
      func_0x000107c61434(lVar11);
      uVar15 = uVar1;
      plVar8 = plVar7;
      func_0x000100029284();
      if (((ulong)plVar8 & 1) != 0) {
        lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + uVar15 * 8);
        func_0x000107c61174(lVar14);
        func_0x000107c614a8(alStack_a8);
        func_0x000107c6142c(lVar11);
        func_0x000107c498f8(lVar14);
        func_0x000107c61428(param_2 + lVar12,alStack_a8,0x21,0);
        func_0x000107c61434(plVar7);
        uVar15 = uVar1;
        FUN_102064460(uVar1,plVar7);
        func_0x000107c614a8(alStack_a8);
        func_0x000107c6142c(plVar7);
        func_0x000107c61170(uVar15);
        func_0x000107c61428(param_2 + lVar2,alStack_a8,0x21,0);
        FUN_10206439c(uVar1,plVar7);
        plVar7 = alStack_a8;
LAB_10206a834:
        func_0x000107c614a8(plVar7);
        func_0x000107c61170(param_2);
        param_2 = lVar14;
        goto LAB_10206a85c;
      }
      func_0x000107c6142c(lVar11);
    }
    plVar7 = alStack_a8;
  }
  else {
    func_0x000107c6142c(plVar7);
    func_0x00010206a8b0(param_3);
    func_0x00010206ac58(param_3);
    lVar12 = _DAT_112e54390;
    func_0x000107c61428(param_2 + _DAT_112e54390,alStack_a8,0,0);
    uVar4 = *(undefined8 *)(param_2 + lVar12);
    func_0x000107c61434(uVar4);
    uVar15 = uVar1;
    func_0x0001000f66f0(uVar1,plVar7,uVar4);
    func_0x000107c6142c(uVar4);
    lVar12 = _DAT_112e54398;
    if ((uVar15 & 1) == 0) goto LAB_10206a85c;
    func_0x000107c61428(param_2 + _DAT_112e54398,&lStack_c0,0,0);
    uVar4 = *(undefined8 *)(param_2 + lVar12);
    func_0x000107c61434(uVar4);
    uVar15 = uVar1;
    func_0x0001000f66f0(uVar1,plVar7,uVar4);
    func_0x000107c6142c(uVar4);
    lVar12 = _DAT_112e54378;
    if ((uVar15 & 1) == 0) goto LAB_10206a85c;
    func_0x000107c61428(param_2 + _DAT_112e54378,alStack_d8,0x20,0);
    lVar11 = *(long *)(param_2 + lVar12);
    if (*(long *)(lVar11 + 0x10) != 0) {
      func_0x000107c61434(lVar11);
      uVar15 = uVar1;
      plVar8 = plVar7;
      func_0x000100029284();
      if (((ulong)plVar8 & 1) == 0) {
        func_0x000107c6142c(lVar11);
        goto LAB_10206a554;
      }
      lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + uVar15 * 8);
      func_0x000107c61174(lVar14);
      func_0x000107c614a8(alStack_d8);
      func_0x000107c6142c(lVar11);
      func_0x000107c498f8(lVar14);
      func_0x000107c61428(param_2 + lVar12,alStack_d8,0x21,0);
      func_0x000107c61434(plVar7);
      uVar15 = uVar1;
      FUN_102064460(uVar1,plVar7);
      func_0x000107c614a8(alStack_d8);
      func_0x000107c6142c(plVar7);
      func_0x000107c61170(uVar15);
      func_0x000107c61428(param_2 + lVar2,alStack_d8,0x21,0);
      FUN_10206439c(uVar1,plVar7);
      plVar7 = alStack_d8;
      goto LAB_10206a834;
    }
LAB_10206a554:
    plVar7 = alStack_d8;
  }
  func_0x000107c614a8(plVar7);
LAB_10206a85c:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10206aff4; end: 10206b03f;  */

void FUN_10206aff4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10206b040; end: 10206b663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206b040(double param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  undefined1 auStack_88 [24];
  
  lVar3 = _DAT_112e543c8;
  func_0x000107c61428(unaff_x20 + _DAT_112e543c8,auStack_88,0x20,0);
  lVar11 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10206b150:
    func_0x000107c614a8(auStack_88);
    return;
  }
  func_0x000107c61434(lVar11);
  lVar5 = param_2;
  uVar9 = param_3;
  func_0x000100029284();
  if ((uVar9 & 1) == 0) {
    func_0x000107c6142c(lVar11);
    goto LAB_10206b150;
  }
  dVar14 = *(double *)(*(long *)(lVar11 + 0x38) + lVar5 * 8);
  func_0x000107c614a8(auStack_88);
  func_0x000107c6142c(lVar11);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e54330);
  puVar6 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac(uVar12);
  func_0x000107c51b38(puVar6);
  lVar11 = _DAT_112e543d0;
  func_0x000107c61428(unaff_x20 + _DAT_112e543d0,auStack_88,0x20,0);
  lVar11 = *(long *)(unaff_x20 + lVar11);
  if (*(long *)(lVar11 + 0x10) == 0) {
    uVar12 = 0;
  }
  else {
    func_0x000107c61434(lVar11);
    lVar5 = param_2;
    uVar9 = param_3;
    func_0x000100029284();
    if ((uVar9 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + lVar5 * 8);
    }
    func_0x000107c6142c(lVar11);
  }
  func_0x000107c614a8(auStack_88);
  uVar7 = 0;
  func_0x00010469e51c(0);
  func_0x000107c610f8();
  func_0x00010469e134(dVar14,param_1 - dVar14,uVar12,uVar7);
  lVar2 = _DAT_112e543c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e543c0,auStack_88,0x21,0);
  uVar8 = *(ulong *)(unaff_x20 + lVar2);
  func_0x000107c61558();
  lVar13 = *(long *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
  lVar5 = param_2;
  uVar9 = param_3;
  func_0x000100029284();
  uVar10 = (ulong)~(uint)uVar9 & 1;
  lVar11 = *(long *)(lVar13 + 0x10) + uVar10;
  if (SCARRY8(*(long *)(lVar13 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10206b31c);
    (*pcVar4)();
  }
  if (*(long *)(lVar13 + 0x18) < lVar11) {
    func_0x00010206e5cc(lVar11,uVar8);
    lVar5 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar9 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10206b248);
      (*pcVar4)();
    }
  }
  else if ((uVar8 & 1) == 0) {
    func_0x0001020646e4();
    *(long *)(unaff_x20 + lVar2) = lVar13;
    goto joined_r0x00010206b354;
  }
  *(long *)(unaff_x20 + lVar2) = lVar13;
joined_r0x00010206b354:
  if ((uVar9 & 1) == 0) {
    func_0x00010206dfe8();
    func_0x000107c61434(param_3);
  }
  puVar1 = (ulong *)(*(long *)(lVar13 + 0x38) + lVar5 * 8);
  func_0x000107c61174();
  func_0x00010206b804();
  uVar8 = *puVar1 & 0xffffffffffffff8;
  uVar9 = *(ulong *)(uVar8 + 0x10);
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar9) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_10206b874(uVar8,uVar9 + 1,1);
    *puVar1 = uVar8;
    uVar8 = uVar8 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar8 + 0x10) = uVar9 + 1;
  *(undefined8 *)(uVar8 + uVar9 * 8 + 0x20) = uVar12;
  func_0x000107c614a8(auStack_88);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_88,0x21,0);
  FUN_10206439c(param_2,param_3);
  func_0x000107c614a8(auStack_88);
  func_0x000107c61170(uVar12);
  return;
}



/* Entry: 10206b664; end: 10206b783;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10206b664(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,undefined1 param_7)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar6 = 0xf000000000000000;
    uVar4 = param_2;
  }
  else {
    uVar2 = param_2;
    uVar6 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    uVar4 = uVar6;
    func_0x000107c61170(uVar2);
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    uVar2 = uVar4;
  }
  if (param_6 == 0) {
    param_6 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  uVar3 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,uVar6,param_3,param_4,param_5,uVar2,param_6,uVar4,param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  if (uVar6 >> 0x3c < 0xf) {
    uVar5 = (uint)(uVar6 >> 0x3e);
    if (uVar5 == 1) {
      param_2 = uVar6 & 0x3fffffffffffffff;
    }
    else if (uVar5 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 10206b784; end: 10206b873;  */

undefined * FUN_10206b784(undefined *param_1,undefined *param_2)

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
    FUN_102064340();
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



/* Entry: 10206b874; end: 10206ba93;  */

ulong FUN_10206b874(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10206b99c);
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
  FUN_10206b784(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10206b998);
      (*pcVar1)();
    }
    func_0x00010206b99c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10206ba94; end: 10206bdab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206ba94(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar8 = param_3;
  func_0x000107c3d458();
  func_0x000107c61180();
  uVar16 = 0;
  if (uVar8 != 0) {
    uVar4 = param_3;
    func_0x000107c45330();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c49820();
      func_0x000107c61170(uVar4);
      uVar4 = param_3;
      func_0x000107c42ba4();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar6 = uVar4;
        func_0x000107c49820();
        func_0x000107c61170();
        func_0x000103bfcc68();
        if (((uVar4 & 1) == 0) || (*(int *)(uVar8 + _DAT_113815200) != 7)) {
          uVar4 = param_3;
          func_0x000107c3f740();
          func_0x000107c61180();
          if (uVar4 != 0) {
            func_0x000107c4223c();
            func_0x000107c61170(uVar4);
            uVar16 = param_2;
          }
          uStack_80 = 0;
          uStack_78 = 0;
          uVar4 = param_3;
          func_0x000107c406e0();
          func_0x000107c61180();
          if (uVar4 == 0) {
            pcStack_d8 = (code *)0x0;
            puStack_d0 = (undefined *)0x0;
          }
          else {
            puStack_d0 = &UNK_1104c2a18;
            func_0x000107c613fc(&UNK_1104c2a18,0x18,7);
            *(undefined8 **)(puStack_d0 + 0x10) = &uStack_80;
            puVar1 = &UNK_1104c2a40;
            param_4 = 0x20;
            func_0x000107c613fc(&UNK_1104c2a40,0x20,7);
            pcStack_d8 = FUN_10206be5c;
            *(code **)(puVar1 + 0x10) = FUN_10206be5c;
            *(undefined **)(puVar1 + 0x18) = puStack_d0;
            uStack_90 = 0x10206be8c;
            puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a8 = 0x42000000;
            pcStack_a0 = FUN_10206b664;
            puStack_98 = &UNK_1104c2a58;
            ppuVar2 = &puStack_b0;
            puStack_88 = puVar1;
            func_0x000107c60bc4(ppuVar2);
            func_0x000107c61574(puStack_88);
            func_0x000107c4c5a4(uVar4);
            func_0x000107c60bd0(ppuVar2);
            func_0x000107c61170(uVar4);
          }
          uVar7 = *(undefined8 *)(uVar8 + _DAT_11308f130);
          uVar11 = ((undefined8 *)(uVar8 + _DAT_11308f130))[1];
          func_0x000107c61434(uVar11);
          uVar4 = param_3;
          func_0x000107c4998c();
          uVar3 = param_3;
          func_0x000107c40674();
          func_0x000107c61180();
          if (uVar3 == 0) {
            uVar14 = 0;
            uVar15 = 0;
            uVar12 = param_4;
          }
          else {
            uVar14 = uVar3;
            func_0x000107c5faec();
            uVar12 = param_4;
            func_0x000107c61170(uVar3);
            uVar15 = param_4;
          }
          uVar13 = uStack_78;
          uVar9 = uStack_80;
          func_0x000107c61434(uStack_78);
          uVar3 = param_3;
          func_0x000107c44b54();
          func_0x000107c42120();
          func_0x000107c61180();
          if (param_3 == 0) {
            uVar10 = 0;
            uVar12 = 0;
          }
          else {
            uVar10 = param_3;
            func_0x000107c5faec();
            func_0x000107c61170(param_3);
          }
          func_0x000107c6142c(uStack_78);
          func_0x00010206be4c(pcStack_d8,puStack_d0);
          uVar4 = uVar4 & 0xffffffff;
          uVar3 = uVar3 & 0xffffffff;
          goto LAB_10206bb90;
        }
      }
    }
    func_0x000107c61170(uVar8);
    uVar8 = 0;
  }
  uVar11 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar9 = 0;
  uVar13 = 0;
  uVar10 = 0;
  uVar12 = 0;
  uVar3 = 0;
  uVar4 = 0;
LAB_10206bb90:
  *param_1 = uVar7;
  param_1[1] = uVar11;
  param_1[2] = uVar8;
  param_1[3] = uVar6;
  param_1[4] = uVar5;
  param_1[5] = uVar16;
  param_1[6] = uVar4;
  param_1[7] = uVar14;
  param_1[8] = uVar15;
  param_1[9] = uVar9;
  param_1[10] = uVar13;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar10;
  param_1[0xd] = uVar12;
  return;
}



/* Entry: 10206bdac; end: 10206be27;  */

undefined8 FUN_10206bdac(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e54400;
  func_0x0001000285a8(0x112e54400,&UNK_10da557d8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10206be28; end: 10206be5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206be28(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long alStack_a8 [3];
  undefined1 auStack_90 [32];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(*(undefined8 *)(unaff_x20 + 0x98),lVar8 + 0x10,auStack_90,0,0,
                      *(undefined8 *)(unaff_x20 + 0x90));
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    return;
  }
  lVar2 = 5;
  FUN_10206543c(5,*(undefined8 *)(unaff_x20 + 0x28));
  lVar9 = _DAT_112e54388;
  lVar6 = *(long *)(unaff_x20 + 0x18);
  plVar1 = *(long **)(unaff_x20 + 0x20);
  plVar7 = alStack_a8;
  func_0x000107c61428(lVar8 + _DAT_112e54388,plVar7,0x20,0);
  lVar9 = *(long *)(lVar8 + lVar9);
  lVar10 = *(long *)(lVar9 + 0x10);
  func_0x000107c61434(plVar1);
  if (lVar10 != 0) {
    func_0x000107c61434(lVar9);
    lVar10 = lVar6;
    plVar7 = plVar1;
    func_0x000100029284();
    if (((ulong)plVar7 & 1) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + lVar10 * 8);
      func_0x000107c614a8(alStack_a8);
      func_0x000107c6142c(lVar9);
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(uVar12);
      goto LAB_10206b454;
    }
    func_0x000107c6142c(lVar9);
  }
  func_0x000107c614a8(alStack_a8);
  puVar11 = (undefined *)0x0;
LAB_10206b454:
  lVar9 = lVar2;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(plVar7);
    lVar10 = *(long *)(unaff_x20 + 0x68);
  }
  else {
    lVar10 = *(long *)(unaff_x20 + 0x68);
  }
  if (lVar10 == 0) {
    uVar12 = 0;
    func_0x000107c61174(puVar11);
    lVar10 = *(long *)(unaff_x20 + 0x80);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
    func_0x000107c61174(puVar11);
    func_0x000107c5fadc(uVar12,lVar10);
    lVar10 = *(long *)(unaff_x20 + 0x80);
  }
  if (lVar10 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
    func_0x000107c5fadc();
  }
  if (*(long *)(unaff_x20 + 0x58) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x000107c5fadc();
  }
  puVar5 = PTR_PTR_1126b9088;
  func_0x000107c610f8(PTR_PTR_1126b9088);
  func_0x000107c30cc8();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x00010469f074(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  lVar9 = lVar2;
  func_0x00010469ea20(lVar2,puVar5,0);
  alStack_a8[0] = lVar9;
  func_0x0001002a64a8(alStack_a8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar11);
  func_0x000107c61428(lVar8 + _DAT_112e54380,alStack_a8,0x21,0);
  FUN_102064460(lVar6,plVar1);
  func_0x000107c614a8(alStack_a8);
  func_0x000107c61170(lVar8);
  func_0x000107c6142c(plVar1);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 10206be5c; end: 10206bebb;  */

void FUN_10206be5c(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = in_x4;
  puVar1[1] = in_x5;
  func_0x000107c61434(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10206bebc; end: 10206beeb;  */

void FUN_10206bebc(long param_1,long param_2)

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



/* Entry: 10206beec; end: 10206bf9f;  */

void FUN_10206beec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
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
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  return;
}



/* Entry: 10206bfa0; end: 10206bfd3;  */

void FUN_10206bfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
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
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  return;
}



/* Entry: 10206bfd4; end: 10206cc07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10206bfd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long **pplVar14;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long lVar22;
  long alStack_190 [2];
  code *pcStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  code *pcStack_140;
  long lStack_120;
  long lStack_118;
  undefined8 auStack_110 [3];
  code *pcStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  long lStack_e0;
  code *apcStack_d8 [3];
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  long lStack_80;
  
  uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307b528);
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  lVar18 = *(long *)(unaff_x20 + 0x30);
  uVar16 = *(undefined8 *)(lVar18 + _DAT_11308b850);
  func_0x000107c61174();
  uStack_168 = uVar15;
  func_0x000107c61174();
  uVar1 = uVar16;
  func_0x0001000bda74();
  func_0x000107c61170(uVar16);
  func_0x0001000285a8(0x112dbe700,&UNK_10d990210);
  uVar16 = *(undefined8 *)(lVar18 + _DAT_11308b848);
  func_0x000107c61174();
  uVar15 = uVar16;
  func_0x0001000bda74();
  uStack_158 = uVar15;
  func_0x000107c61170(uVar16);
  func_0x0001000285a8(0x112d4e908,&UNK_10d914b00);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c4d48c();
  func_0x000107c61180();
  uVar15 = uVar16;
  func_0x0001000bda74();
  uStack_160 = uVar15;
  func_0x000107c61170(uVar16);
  func_0x0001000285a8(0x112e54408,&UNK_10da557e8);
  uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113069510);
  func_0x000107c61174();
  uVar2 = uVar15;
  func_0x0001000bda74();
  func_0x000107c61170(uVar15);
  uVar15 = 0;
  func_0x000107c5fcec();
  pcVar3 = FUN_10206cc08;
  pcStack_180 = (code *)uVar15;
  FUN_10206cc34();
  lStack_178 = *(long *)(unaff_x20 + 0x58);
  lStack_170 = _DAT_11304a478;
  uVar15 = *(undefined8 *)(lStack_178 + _DAT_11304a478);
  func_0x000107c6157c(uVar15);
  func_0x0001000d224c(&plStack_b0);
  func_0x000107c61574(uVar15);
  plVar13 = plStack_b0;
  lVar18 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113091b70);
  func_0x000107c41b80();
  func_0x000107c61180();
  lVar22 = *(long *)(unaff_x20 + 0x70);
  puVar4 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  plStack_148 = (long *)puVar4;
  FUN_10206d7e8(*(long *)(unaff_x20 + 0x60) + _DAT_113068c20,&plStack_b0);
  plVar5 = (long *)0x0;
  func_0x000102061644();
  plVar6 = plVar5;
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c6157c(pcVar3);
  func_0x000107c615f0(lVar22);
  func_0x000107c61174();
  func_0x000107c615f0(plStack_b0);
  func_0x000107c453e4();
  plVar6[0xc] = (long)puVar4;
  plVar6[0xd] = 0;
  puVar4 = PTR_PTR_1126b7800;
  func_0x000107c610f8();
  func_0x000107c453e4();
  plVar6[0xe] = (long)puVar4;
  FUN_10206d7e8(&plStack_b0,plVar6 + 2);
  plVar6[7] = (long)pcVar3;
  plVar6[8] = lVar22;
  plVar6[9] = lVar18;
  plVar6[10] = (long)plStack_b0;
  plVar6[0xb] = lStack_a8;
  plVar7 = plStack_b0;
  func_0x000107c614f0(plStack_b0);
  func_0x000107c615f0(plStack_b0);
  FUN_10205f554(plVar7,lStack_a8);
  func_0x000107c539f8(puVar4);
  func_0x000107c615e8(plStack_b0);
  func_0x0001000834e4(&plStack_b0);
  plStack_88 = plStack_b0;
  lStack_80 = lStack_a8;
  pcVar11 = FUN_10206d0a8;
  lStack_150 = lVar18;
  pcStack_140 = pcVar3;
  pcStack_a0 = pcVar3;
  plStack_98 = (long *)lVar22;
  ppuStack_90 = (undefined **)lVar18;
  FUN_10206cc34(FUN_10206d0a8,&plStack_b0,
                "SponsoredSnapFeedImpressionTrackerServicesImpl/SponsoredSnapFeedImpressionTrackerServicesProvider.swift"
                ,0x67,2,0x69,&UNK_1104c2b58);
  ppuStack_90 = &PTR_DAT_1104c2158;
  uVar15 = 0;
  plStack_b0 = plVar6;
  plStack_98 = plVar5;
  func_0x000102070078();
  ppuStack_b8 = &PTR_DAT_1104c2bb0;
  lVar8 = 0;
  apcStack_d8[0] = pcVar11;
  pcStack_c0 = (code *)uVar15;
  FUN_1020680f0();
  lVar12 = lVar8;
  func_0x000107c610f8();
  lVar18 = _DAT_112e54348;
  uVar16 = uStack_168;
  func_0x000107c61174();
  func_0x000107c615f0(lVar22);
  func_0x000107c615f0(plVar13);
  func_0x000107c6157c(uVar1);
  func_0x000104041ed0();
  *(undefined8 *)(lVar12 + lVar18) = param_1;
  lVar18 = _DAT_112e54350;
  func_0x000104041f10();
  *(undefined8 *)(lVar12 + lVar18) = param_1;
  *(undefined8 *)(lVar12 + _DAT_112e54358) = 0x4000000000000000;
  *(undefined8 *)(lVar12 + _DAT_112e54360) = 0x3fb9a027525460aa;
  lVar18 = _DAT_112e54308;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar12 + lVar18) = puVar4;
  lVar18 = _DAT_112e54368;
  uVar15 = 0;
  FUN_10206e170();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar12 + lVar18) = uVar15;
  puVar21 = (undefined8 *)(lVar12 + _DAT_112e54370);
  *puVar21 = 0;
  puVar21[1] = 0;
  lVar18 = _DAT_112e542f8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10205886c();
  *(undefined **)(lVar12 + lVar18) = puVar9;
  lVar18 = _DAT_112e54378;
  puVar9 = puVar4;
  FUN_102058a28();
  *(undefined **)(lVar12 + lVar18) = puVar9;
  lVar18 = _DAT_112e54380;
  puVar9 = puVar4;
  FUN_102058a28();
  *(undefined **)(lVar12 + lVar18) = puVar9;
  lVar18 = _DAT_112e54388;
  puVar9 = puVar4;
  func_0x0001010fe67c();
  *(undefined **)(lVar12 + lVar18) = puVar9;
  puVar9 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar12 + _DAT_112e54390) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar12 + _DAT_112e54398) = puVar9;
  *(undefined **)(lVar12 + _DAT_112e543a0) = puVar9;
  lVar18 = _DAT_112e543a8;
  puVar9 = puVar4;
  func_0x0001010fe67c();
  *(undefined **)(lVar12 + lVar18) = puVar9;
  lVar18 = _DAT_112e543b0;
  puVar9 = puVar4;
  FUN_10205886c();
  *(undefined **)(lVar12 + lVar18) = puVar9;
  lVar18 = _DAT_112e543b8;
  puVar9 = puVar4;
  func_0x000102058a3c();
  *(undefined **)(lVar12 + lVar18) = puVar9;
  lVar18 = _DAT_112e543c0;
  puVar9 = puVar4;
  func_0x000102058b48();
  *(undefined **)(lVar12 + lVar18) = puVar9;
  lVar18 = _DAT_112e543c8;
  puVar9 = puVar4;
  func_0x0001010fe67c();
  *(undefined **)(lVar12 + lVar18) = puVar9;
  lVar18 = _DAT_112e543d0;
  func_0x0001006bf964();
  *(undefined **)(lVar12 + lVar18) = puVar4;
  lVar18 = _DAT_112e54300;
  uVar15 = 0x112e53f80;
  func_0x0001000285a8(0x112e53f80,&UNK_10da55460);
  func_0x000107c613fc();
  func_0x0001000c2754();
  plVar6 = plStack_148;
  *(undefined8 *)(lVar12 + lVar18) = uVar15;
  *(undefined8 *)(lVar12 + _DAT_112e54320) = uVar16;
  *(undefined8 *)(lVar12 + _DAT_112e54328) = uVar1;
  *(long **)(lVar12 + _DAT_112e54330) = plStack_148;
  puVar21 = (undefined8 *)(lVar12 + _DAT_112e54338);
  *puVar21 = plVar13;
  puVar21[1] = lStack_a8;
  FUN_10206d7e8(&plStack_b0,lVar12 + _DAT_112e54310);
  FUN_10206d7e8(apcStack_d8,lVar12 + _DAT_112e54318);
  *(long *)(lVar12 + _DAT_112e54340) = lVar22;
  puVar4 = PTR_s_init_1125d9248;
  lStack_e8 = lVar12;
  lStack_e0 = lVar8;
  func_0x000107c61174();
  func_0x000107c615f0(lVar22);
  func_0x000107c615f0(plVar13);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  plVar7 = &lStack_e8;
  func_0x000107c61154(plVar7,puVar4);
  FUN_10206535c();
  uStack_168 = uVar16;
  func_0x000107c61170(uVar16);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(plVar6);
  plStack_148 = plVar13;
  func_0x000107c615e8(plVar13);
  func_0x000107c615e8(lVar22);
  func_0x0001000834e4(apcStack_d8);
  func_0x0001000834e4(&plStack_b0);
  func_0x0001000285a8(0x112e54410,&UNK_10da557f8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  pcVar3 = FUN_10206d7e0;
  func_0x0001000bdd8c(FUN_10206d7e0,uVar2);
  alStack_190[1] = *(long *)(unaff_x20 + 0x28);
  uVar17 = *(undefined8 *)(alStack_190[1] + _DAT_112fee3d0);
  uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + 0x80) + _DAT_113011448);
  uVar20 = *(undefined8 *)(lStack_178 + lStack_170);
  pcVar10 = (code *)0x0;
  pcStack_180 = pcVar3;
  lStack_170 = uVar20;
  func_0x000102065118();
  pcVar11 = pcVar10;
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126a9e50;
  func_0x000107c610f8();
  uVar16 = uStack_158;
  func_0x000107c6157c(uStack_158);
  func_0x000107c61174();
  uVar15 = uStack_160;
  lStack_178 = uVar17;
  func_0x000107c6157c(uStack_160);
  func_0x000107c61174();
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(uVar20);
  func_0x000107c453e4();
  *(undefined **)(pcVar11 + 0x10) = puVar4;
  ppuStack_90 = &PTR_DAT_1104c2890;
  ppuStack_b8 = &PTR_DAT_1104c27e0;
  lVar22 = 0;
  apcStack_d8[0] = pcVar11;
  pcStack_c0 = pcVar10;
  plStack_b0 = plVar7;
  plStack_98 = (long *)lVar8;
  FUN_10205d750();
  lVar8 = lVar22;
  func_0x000107c610f8();
  func_0x0001000c6518(apcStack_d8,pcVar10);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(pcVar10 + -8) + 0x40));
  puVar21 = (undefined8 *)((long)alStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar21);
  lVar18 = _DAT_112e540a0;
  auStack_110[0] = *puVar21;
  ppuStack_f0 = &PTR_DAT_1104c27e0;
  puVar4 = PTR_PTR_1126ae810;
  pcStack_f8 = pcVar10;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c6157c(pcVar11);
  func_0x000107c453e4();
  lVar12 = lStack_178;
  pcVar3 = pcStack_180;
  *(undefined **)(lVar8 + lVar18) = puVar4;
  *(code **)(lVar8 + _DAT_112e54060) = pcStack_180;
  *(undefined8 *)(lVar8 + _DAT_112e54068) = uVar16;
  *(long *)(lVar8 + _DAT_112e54070) = lStack_178;
  *(undefined8 *)(lVar8 + _DAT_112e54078) = uVar15;
  FUN_10206d7e8(&plStack_b0,lVar8 + _DAT_112e54080);
  lVar18 = lStack_170;
  *(undefined8 *)(lVar8 + _DAT_112e54088) = uVar19;
  *(long *)(lVar8 + _DAT_112e54090) = lStack_170;
  FUN_10206d7e8(auStack_110,lVar8 + _DAT_112e54098);
  puVar4 = PTR_s_init_1125d9248;
  lStack_120 = lVar8;
  lStack_118 = lVar22;
  func_0x000107c6157c(uVar16);
  func_0x000107c61174();
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(lVar18);
  func_0x000107c6157c(pcVar3);
  plVar6 = &lStack_120;
  func_0x000107c61154(plVar6,puVar4);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar16);
  func_0x000107c61170(lVar12);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(lVar18);
  func_0x000107c61170(plVar7);
  func_0x000107c61574(pcVar11);
  func_0x0001000834e4(&plStack_b0);
  func_0x0001000834e4(auStack_110);
  func_0x0001000834e4(apcStack_d8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x88);
  *(long **)(unaff_x20 + 0x88) = plVar6;
  func_0x000107c61174();
  func_0x000107c61170(uVar17);
  FUN_102058d38();
  func_0x000107c61170(plVar6);
  func_0x0001000d224c(&plStack_b0);
  plVar6 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    func_0x000107c3e7c0(plStack_b0);
    func_0x000107c615e8(plVar6);
  }
  func_0x0001000d224c(&plStack_b0);
  plVar6 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    func_0x000107c3e7b0(plStack_b0);
    func_0x000107c615e8(plVar6);
  }
  func_0x0001000d224c(&plStack_b0);
  plVar6 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar13 = plStack_b0;
    func_0x000107c3d320(plStack_b0);
    func_0x000107c61180();
    func_0x000107c615e8(plVar6);
    lVar18 = (long)plVar7 + _DAT_112e54310;
    uVar17 = *(undefined8 *)(lVar18 + 0x18);
    lVar12 = *(long *)(lVar18 + 0x20);
    func_0x0001000a8868(lVar18,uVar17);
    (**(code **)(lVar12 + 0x18))(plVar13,uVar17,lVar12);
    func_0x000107c61170(plVar13);
  }
  FUN_10206d158(uVar16,uVar15);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_1104c2a90;
  func_0x000107c613fc(&UNK_1104c2a90,0x18,7);
  *(long **)(puVar4 + 0x10) = plVar7;
  ppuStack_90 = (undefined **)FUN_10206d82c;
  plStack_b0 = (long *)PTR___NSConcreteStackBlock_11034bd00;
  lStack_a8 = 0x42000000;
  pcStack_a0 = FUN_10206d634;
  plStack_98 = (long *)&UNK_1104c2aa8;
  pplVar14 = &plStack_b0;
  plStack_88 = (long *)puVar4;
  func_0x000107c60bc4(pplVar14);
  plVar6 = plStack_88;
  func_0x000107c61174(plVar7);
  func_0x000107c61574(plVar6);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(pplVar14);
  uVar17 = 0;
  FUN_102087eb0(0);
  func_0x000107c610f8();
  func_0x000102087df4(puVar9,uVar17);
  func_0x000107c61170(uStack_168);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcStack_140);
  func_0x000107c615e8(plStack_148);
  func_0x000107c61170(lStack_150);
  func_0x000107c61170(plVar7);
  return puVar9;
}



/* Entry: 10206cc08; end: 10206cc33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206cc08(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + _DAT_112fbd0c8);
  func_0x000107c6157c();
  return;
}



/* Entry: 10206cc34; end: 10206cdeb;  */

undefined8
FUN_10206cc34(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,ulong param_7)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_1;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar3 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10206cdec);
    (*pcVar1)();
  }
  func_0x000107c613fc(param_7,0x20,7);
  *(code **)(param_7 + 0x10) = param_1;
  *(undefined8 *)(param_7 + 0x18) = param_2;
  (*param_1)(&uStack_70);
  if (unaff_x21 == 0) {
    uVar2 = param_7;
    func_0x000107c61544(param_7,"",0,0,0,0);
    func_0x000107c61574(param_7);
    param_2 = uStack_70;
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10206cd50);
      (*pcVar1)();
    }
  }
  else {
    uVar2 = param_7;
    func_0x000107c61544(param_7,"",0,0,0,0);
    func_0x000107c61574(param_7);
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10206ccf0);
      (*pcVar1)();
    }
  }
  return param_2;
}



/* Entry: 10206cdec; end: 10206cfa3;  */

ulong FUN_10206cdec(code *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  ulong uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_1;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar4 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10206cfa4);
    (*pcVar1)();
  }
  puVar2 = &UNK_1104c2ae0;
  func_0x000107c613fc(&UNK_1104c2ae0,0x20,7);
  *(code **)(puVar2 + 0x10) = param_1;
  *(ulong *)(puVar2 + 0x18) = param_2;
  (*param_1)(&uStack_70);
  if (unaff_x21 == 0) {
    param_2 = uStack_70 & 0xff;
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10206cf08);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10206cea8);
      (*pcVar1)();
    }
  }
  return param_2;
}



/* Entry: 10206cfa4; end: 10206d0a7;  */

void FUN_10206cfa4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  func_0x000102070078();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x38) = puVar2;
  puVar2 = PTR_PTR_1126b7800;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x40) = puVar2;
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  uVar3 = param_5;
  func_0x000107c614f0(param_5);
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  FUN_10206f49c(uVar3,param_6);
  func_0x000107c539f8(puVar2);
  func_0x000107c61170(puVar2);
  *param_1 = lVar1;
  return;
}



/* Entry: 10206d0a8; end: 10206d0c7;  */

void FUN_10206d0a8(void)

{
  long unaff_x20;
  
  FUN_10206cfa4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 10206d0c8; end: 10206d157;  */

void FUN_10206d0c8(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  lVar1 = 0;
  func_0x000102058d00();
  lVar2 = lVar1;
  func_0x000107c613fc();
  if (lStack_38 == 0) {
    func_0x000107c61464();
    lVar2 = 0;
    lVar1 = 0;
    ppuVar3 = (undefined **)0x0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *(long *)(lVar2 + 0x10) = lStack_38;
    ppuVar3 = &PTR_DAT_1104c2058;
  }
  *param_1 = lVar2;
  param_1[3] = lVar1;
  param_1[4] = (long)ppuVar3;
  return;
}



/* Entry: 10206d158; end: 10206d633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206d158(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long alStack_f0 [2];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_88 [3];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_113083868);
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  puVar4 = *(undefined **)(*(long *)(unaff_x20 + 0x48) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    (**(code **)(lVar11 + 0x68))
              (lVar13,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
    puVar5 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar2 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010f05e6f0);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar2);
    (**(code **)(lVar11 + 8))(lVar13,lVar1);
  }
  else {
    uVar2 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010f05e6f0);
    puVar5 = puVar4;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(uVar2);
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + _DAT_11304a478);
  uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x78) + _DAT_113010968);
  puVar6 = (undefined *)0x0;
  func_0x000102065118();
  puVar7 = puVar6;
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126a9e50;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar14);
  func_0x000107c453e4();
  *(undefined **)(puVar7 + 0x10) = puVar4;
  ppuStack_a8 = &PTR_DAT_1104c27e0;
  lVar8 = 0;
  puStack_c8 = puVar7;
  puStack_b0 = puVar6;
  FUN_10206427c();
  lVar11 = lVar8;
  func_0x000107c610f8();
  func_0x0001000c6518(&puStack_c8,puVar6);
  alStack_f0[1] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar12);
  lVar1 = _DAT_112e54200;
  auStack_88[0] = *puVar12;
  ppuStack_68 = &PTR_DAT_1104c27e0;
  puVar4 = PTR_PTR_1126ae810;
  puStack_70 = puVar6;
  func_0x000107c610f8();
  func_0x000107c615f0(puVar5);
  func_0x000107c6157c(puVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar11 + lVar1) = puVar4;
  lVar1 = _DAT_112e54208;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010fe67c();
  *(undefined **)(lVar11 + lVar1) = puVar4;
  *(undefined **)(lVar11 + _DAT_112e54210) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(lVar11 + _DAT_112e541c8) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112e541d0) = param_1;
  *(undefined8 *)(lVar11 + _DAT_112e541d8) = param_2;
  *(undefined8 *)(lVar11 + _DAT_112e541e0) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_112e541e8) = uVar14;
  FUN_10206d7e8(auStack_88,lVar11 + _DAT_112e541f0);
  *(undefined **)(lVar11 + _DAT_112e541f8) = puVar5;
  puVar4 = PTR_s_init_1125d9248;
  lStack_98 = lVar11;
  lStack_90 = lVar8;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar14);
  func_0x000107c615f0(puVar5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  plVar9 = &lStack_98;
  func_0x000107c61154(plVar9,puVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar14);
  func_0x000107c615e8(puVar5);
  func_0x000107c61574(puVar7);
  func_0x0001000834e4(auStack_88);
  func_0x0001000834e4(&puStack_c8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  *(long **)(unaff_x20 + 0x90) = plVar9;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)((long)plVar9 + _DAT_112e541f8);
  puVar4 = &UNK_1104c2b08;
  func_0x000107c613fc(&UNK_1104c2b08,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,plVar9);
  ppuStack_a8 = (undefined **)FUN_10206d8fc;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1104c2b20;
  ppuVar10 = &puStack_c8;
  puStack_a0 = puVar4;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_a0);
  func_0x000107c4e524(uVar2);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(puVar5);
  func_0x000107c61170(plVar9);
  return;
}



/* Entry: 10206d634; end: 10206d66b;  */

void FUN_10206d634(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10206d66c; end: 10206d7bb;  */

/* WARNING: Possible PIC construction at 0x00010206d678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010206d688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010206d698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010206d6a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010206d6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010206d6c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010206d6e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010206d6f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010206d6e4) */
/* WARNING: Removing unreachable block (ram,0x00010206d6cc) */
/* WARNING: Removing unreachable block (ram,0x00010206d6bc) */
/* WARNING: Removing unreachable block (ram,0x00010206d6ac) */
/* WARNING: Removing unreachable block (ram,0x00010206d69c) */
/* WARNING: Removing unreachable block (ram,0x00010206d68c) */
/* WARNING: Removing unreachable block (ram,0x00010206d67c) */
/* WARNING: Removing unreachable block (ram,0x00010206d6f4) */

void FUN_10206d66c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10206d7bc; end: 10206d7df;  */

void FUN_10206d7bc(undefined8 *param_1,undefined8 param_2)

{
  FUN_10206bfd4();
  *param_1 = param_2;
  return;
}



/* Entry: 10206d7e0; end: 10206d7e7;  */

void FUN_10206d7e0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  lVar1 = 0;
  func_0x000102058d00();
  lVar2 = lVar1;
  func_0x000107c613fc();
  if (lStack_38 == 0) {
    func_0x000107c61464();
    lVar2 = 0;
    lVar1 = 0;
    ppuVar3 = (undefined **)0x0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *(long *)(lVar2 + 0x10) = lStack_38;
    ppuVar3 = &PTR_DAT_1104c2058;
  }
  *param_1 = lVar2;
  param_1[3] = lVar1;
  param_1[4] = (long)ppuVar3;
  return;
}



/* Entry: 10206d7e8; end: 10206d82b;  */

long FUN_10206d7e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10206d82c; end: 10206d84f;  */

void FUN_10206d82c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10206d850; end: 10206d8fb;  */

void FUN_10206d850(undefined8 param_1)

{
  if (lRam0000000112e54440 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6ac9ec);
  return;
}



/* Entry: 10206d8fc; end: 10206d90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206d8fc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001000d224c(&puStack_98);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    if (puStack_98 != (undefined *)0x0) {
      puVar2 = puStack_98;
      func_0x000107c5b840(puStack_98);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_98);
      puVar3 = puVar2;
      func_0x000107c4da88(puVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      puVar2 = &UNK_1104c24a8;
      func_0x000107c613fc(&UNK_1104c24a8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,lVar1);
      pcStack_78 = (code *)0x1020642c0;
      puStack_98 = puVar6;
      uStack_90 = 0x42000000;
      uStack_88 = 0x1020650f0;
      puStack_80 = &UNK_1104c24e8;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_70);
      puVar2 = puVar3;
      func_0x000107c5c320(puVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c3e924(puVar2);
      func_0x000107c61170(puVar2);
    }
    func_0x0001000d224c(&puStack_98);
    puVar2 = puStack_98;
    if (puStack_98 != (undefined *)0x0) {
      puVar3 = puStack_98;
      func_0x000107c43fb8();
      func_0x000107c61180();
      func_0x000107c615e8(puVar2);
      if (puVar3 != (undefined *)0x0) {
        puVar2 = puVar3;
        func_0x000107c5b850(puVar3);
        func_0x000107c61180();
        puVar5 = puVar2;
        func_0x000107c4da88();
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        puVar2 = &UNK_1104c24a8;
        func_0x000107c613fc(&UNK_1104c24a8,0x18,7);
        func_0x000107c61614(puVar2 + 0x10,lVar1);
        pcStack_78 = FUN_10206429c;
        puStack_98 = puVar6;
        uStack_90 = 0x42000000;
        uStack_88 = 0x1020650ec;
        puStack_80 = &UNK_1104c24c0;
        ppuVar4 = &puStack_98;
        puStack_70 = puVar2;
        func_0x000107c60bc4(ppuVar4);
        func_0x000107c61574(puStack_70);
        puVar6 = puVar5;
        func_0x000107c5c320(puVar5);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(puVar5);
        uVar7 = *(undefined8 *)(lVar1 + _DAT_112e54200);
        func_0x000107c61174(uVar7);
        func_0x000107c3e924(puVar6);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c615e8(puVar3);
        return;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10206d90c; end: 10206dcab;  */

/* WARNING: Possible PIC construction at 0x00010206d9a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010206d9a4) */
/* WARNING: Removing unreachable block (ram,0x00010206d9a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206d90c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x00010206dab0();
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c61434(lVar2);
    func_0x000100029284(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
    return;
  }
  func_0x000107c5eea0(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar5 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  lVar1 = lVar2;
  func_0x000107c61558(lVar2);
  lStack_68 = lVar2;
  FUN_10206e030(param_1,param_2,param_3,lVar1);
  lVar2 = lStack_68;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e54568);
  lVar1 = lStack_68;
  func_0x000107c5f9dc(lStack_68,PTR___sSSN_11034da80,PTR___sSdN_11034dd90,PTR___sSSSHsWP_11034da90);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f05e720);
  func_0x000107c56bcc(uVar4);
  func_0x000107c61574(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10206dcac; end: 10206deef;  */

undefined * FUN_10206dcac(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [32];
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar7 = 0x112d5df98;
    func_0x0001000285a8(0x112d5df98,&UNK_10d9246a0);
    func_0x000107c60498(puVar11,uVar7);
    puVar12 = puVar11;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434(param_1);
  lVar13 = 0;
  while( true ) {
    while (uVar14 != 0) {
      uVar3 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar13 << 6;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar8 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      uStack_a0 = uVar3;
      uStack_98 = uVar2;
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar8 * 0x20,auStack_90);
      func_0x0001000bb420(auStack_90,auStack_c0);
      func_0x000107c61434(uVar2);
      iVar6 = (int)auStack_d0;
      func_0x000107c6147c(auStack_d0,auStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
      uVar7 = auStack_d0[0];
      if (iVar6 == 0) {
        FUN_101e90ec8(&uStack_a0);
        func_0x000107c61574(puVar12);
        func_0x000107c61574(param_1);
        return (undefined *)0x0;
      }
      uVar14 = uVar14 - 1 & uVar14;
      func_0x000107c61434(uVar2);
      FUN_101e90ec8(&uStack_a0);
      uVar8 = uVar3;
      uVar9 = uVar2;
      func_0x000100029284();
      if ((uVar9 & 1) == 0) {
        if (*(ulong *)(puVar12 + 0x18) <= *(ulong *)(puVar12 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10206deec);
          (*pcVar4)();
        }
        uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar12 + uVar9 + 0x40) =
             *(ulong *)(puVar12 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar8 * 8) = uVar7;
        if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10206def0);
          (*pcVar4)();
        }
        *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      }
      else {
        puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar8 * 0x10);
        uVar9 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        func_0x000107c6142c(uVar9);
        *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar8 * 8) = uVar7;
      }
    }
    bVar5 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10206dee8);
      (*pcVar4)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar13) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  func_0x000107c61574(param_1);
  return puVar12;
}



/* Entry: 10206def0; end: 10206df5b; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl30SponsoredSnapPersistentStorage init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206def0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e54568;
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168();
  func_0x000107c5ba34();
  func_0x000107c61180();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10206df5c; end: 10206df8f;  */

void FUN_10206df5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10206df90; end: 10206e02f; -[_TtC46SponsoredSnapFeedImpressionTrackerServicesImpl30SponsoredSnapPersistentStorage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206df90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e54568));
  return;
}



/* Entry: 10206e030; end: 10206e16f;  */

void FUN_10206e030(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10206e0f8);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    func_0x000101432e00(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10206e0c8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101432c98();
    lVar6 = *unaff_x20;
    goto joined_r0x00010206e10c;
  }
  lVar6 = *unaff_x20;
joined_r0x00010206e10c:
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10206e170);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10206e170; end: 10206e18f;  */

void FUN_10206e170(void)

{
  func_0x000107c61168(&PTR_PTR_11281aca0);
  return;
}



/* Entry: 10206e190; end: 10206e1c7;  */

void FUN_10206e190(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10206e2bc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x00010206e338(lVar6,param_4 & 1,0x112e53f98,&UNK_10da55478);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10206e280);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10206455c();
    lVar6 = *unaff_x20;
    goto joined_r0x00010206e2d0;
  }
  lVar6 = *unaff_x20;
joined_r0x00010206e2d0:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10206e338);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10206e1c8; end: 10206e867;  */

void FUN_10206e1c8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,code *param_7)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10206e2bc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x00010206e338(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10206e280);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    (*param_7)();
    lVar6 = *unaff_x20;
    goto joined_r0x00010206e2d0;
  }
  lVar6 = *unaff_x20;
joined_r0x00010206e2d0:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10206e338);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10206e868; end: 10206ec3b;  */

void FUN_10206e868(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined1 auStack_160 [112];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e53fa0;
  func_0x0001000285a8(0x112e53fa0,&UNK_10da55480);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_10206ec04:
    func_0x000107c61574(lVar15);
LAB_10206ec0c:
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar9 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar19 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10206ec38);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar15);
            goto LAB_10206ec0c;
          }
          uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
            *puVar17 = -1L << (uVar16 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_10206ec04;
        }
        uVar16 = puVar17[lVar19];
        lVar9 = lVar9 + 1;
      } while (uVar16 == 0);
      uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar19 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar19 << 6;
    if ((param_2 & 1) == 0) {
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar8 * 0x10);
      uVar6 = *puVar10;
      uVar18 = puVar10[1];
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x70);
      uStack_1b0 = puVar10[7];
      uStack_c0 = puVar10[6];
      uStack_190 = puVar10[9];
      uStack_1a8 = puVar10[8];
      uStack_98 = puVar10[0xb];
      uStack_188 = puVar10[10];
      uStack_178 = puVar10[0xd];
      uStack_168 = puVar10[0xc];
      uStack_1c0 = puVar10[3];
      uStack_1d8 = puVar10[2];
      uVar20 = puVar10[5];
      uStack_1b8 = puVar10[4];
      uStack_1e0 = puVar10[1];
      uStack_1c8 = *puVar10;
      uVar3 = (undefined1)uStack_98;
      uVar2 = (undefined1)uStack_c0;
      uStack_f0 = uStack_1c8;
      uStack_e8 = uStack_1e0;
      uStack_e0 = uStack_1d8;
      uStack_d8 = uStack_1c0;
      uStack_d0 = uStack_1b8;
      uStack_c8 = uVar20;
      uStack_b8 = uStack_1b0;
      uStack_b0 = uStack_1a8;
      uStack_a8 = uStack_190;
      uStack_a0 = uStack_188;
      uStack_90 = uStack_168;
      uStack_88 = uStack_178;
      func_0x000107c61434(uVar18);
      func_0x00010205f3b0(&uStack_f0,auStack_160);
    }
    else {
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar8 * 0x10);
      uVar6 = *puVar10;
      uVar18 = puVar10[1];
      puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x70);
      uStack_1c8 = *puVar10;
      uStack_1d8 = puVar10[2];
      uStack_1e0 = puVar10[1];
      uStack_1c0 = puVar10[3];
      uStack_1b8 = puVar10[4];
      uVar20 = puVar10[5];
      uVar2 = *(undefined1 *)(puVar10 + 6);
      uStack_188 = puVar10[10];
      uStack_190 = puVar10[9];
      uStack_1a8 = puVar10[8];
      uStack_1b0 = puVar10[7];
      uVar3 = *(undefined1 *)(puVar10 + 0xb);
      uStack_168 = puVar10[0xc];
      uStack_178 = puVar10[0xd];
    }
    func_0x000107c6068c(&uStack_f0,*(undefined8 *)(lVar7 + 0x28));
    puVar10 = &uStack_f0;
    func_0x000107c5fb58(puVar10,uVar6,uVar18);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar10 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar8 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar4 = false;
      uVar8 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar8) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10206ec3c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar8) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar8 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar10 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar8 * 0x10);
    *puVar10 = uVar6;
    puVar10[1] = uVar18;
    puVar10 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 0x70);
    *puVar10 = uStack_1c8;
    puVar10[2] = uStack_1d8;
    puVar10[1] = uStack_1e0;
    puVar10[3] = uStack_1c0;
    puVar10[4] = uStack_1b8;
    puVar10[5] = uVar20;
    *(undefined1 *)(puVar10 + 6) = uVar2;
    puVar10[10] = uStack_188;
    puVar10[9] = uStack_190;
    puVar10[8] = uStack_1a8;
    puVar10[7] = uStack_1b0;
    *(undefined1 *)(puVar10 + 0xb) = uVar3;
    puVar10[0xc] = uStack_168;
    puVar10[0xd] = uStack_178;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar9 = lVar19;
  } while( true );
}



/* Entry: 10206ec3c; end: 10206edaf;  */

void FUN_10206ec3c(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lStack_88 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar9 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10206edb0);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
          FUN_10206edb0(param_1,param_2,lStack_88,param_3);
          return;
        }
        uVar10 = ((ulong *)(param_3 + 0x40))[lVar9];
        lVar6 = lVar6 + 1;
      } while (uVar10 == 0);
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar8 = uVar5 | lVar9 << 6;
    puVar4 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10);
    uStack_70 = *puVar4;
    uVar1 = puVar4[1];
    uStack_58 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar8 * 8);
    uStack_68 = uVar1;
    func_0x000107c61434(uVar1);
    puVar4 = &uStack_70;
    (*param_4)(puVar4,&uStack_58);
    func_0x000107c6142c(uVar1);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar9;
    if (((ulong)puVar4 & 1) != 0) {
      uVar8 = (uVar5 & 0xffffffffffffffc0 | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(lStack_88,1);
      lStack_88 = lStack_88 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10206ed74);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 10206edb0; end: 10206efe7;  */

undefined * FUN_10206edb0(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_b8 [72];
  
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar6 = param_4;
    }
    else {
      func_0x0001000285a8(0x112d5df98,&UNK_10d9246a0);
      puVar6 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = *param_1;
      }
      lVar9 = 0;
      do {
        if (uVar13 == 0) {
          do {
            lVar14 = lVar9 + 1;
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10206efe0);
              (*pcVar4)();
            }
            if (param_2 <= lVar14) {
              return puVar6;
            }
            uVar13 = param_1[lVar14];
            lVar9 = lVar9 + 1;
          } while (uVar13 == 0);
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
        }
        else {
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
          lVar14 = lVar9;
        }
        uVar8 = LZCOUNT(uVar8) | lVar14 << 6;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar8 * 0x10);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar15 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar8 * 8);
        func_0x000107c6068c(auStack_b8,*(undefined8 *)(puVar6 + 0x28));
        func_0x000107c61434(uVar3);
        puVar7 = auStack_b8;
        func_0x000107c5fb58(puVar7,uVar2,uVar3);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar10 = uVar11 >> 6;
        uVar8 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar8 == 0) {
          bVar5 = false;
          uVar8 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar10 + 1;
            if ((uVar11 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10206efe4);
              (*pcVar4)();
            }
            uVar10 = 0;
            if (uVar11 != uVar8) {
              uVar10 = uVar11;
            }
            bVar5 = (bool)(uVar11 == uVar8 | bVar5);
          } while (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar8 = ~*(ulong *)(puVar6 + uVar10 * 8 + 0x40);
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
        }
        else {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar6 + uVar10 + 0x40) =
             1L << (uVar8 & 0x3f) | *(ulong *)(puVar6 + uVar10 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar8 * 8) = uVar15;
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        bVar5 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10206efe8);
          (*pcVar4)();
        }
        lVar9 = lVar14;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar6;
}



/* Entry: 10206efe8; end: 10206f0b3;  */

void FUN_10206efe8(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10206f0b4);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_10206ec3c(param_2,param_3,param_4,param_5,param_6);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10206f0b0);
  (*pcVar1)();
}



/* Entry: 10206f0b4; end: 10206f0d3;  */

bool FUN_10206f0b4(double param_1)

{
  long unaff_x20;
  
  return *(double *)(unaff_x20 + 0x10) - param_1 <= 7200.0;
}



/* Entry: 10206f0d4; end: 10206f23b;  */

void FUN_10206f0d4(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lStack_70;
  
  lStack_70 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  lVar7 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar9 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10206f23c);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar9) {
          FUN_10206edb0(param_1,param_2,lStack_70,param_3);
          return;
        }
        uVar10 = ((ulong *)(param_3 + 0x40))[lVar9];
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = lVar7;
    }
    uVar6 = LZCOUNT(uVar5);
    uVar11 = uVar6 | lVar9 << 6;
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar11 * 0x10);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar11 * 8);
    func_0x000107c61434(uVar2);
    (*param_4)(uVar12,uVar5,uVar2);
    func_0x000107c6142c(uVar2);
    lVar7 = lVar9;
    if ((uVar5 & 1) != 0) {
      uVar5 = (uVar6 & 0xffffffffffffffc0 | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar5) = *(ulong *)(param_1 + uVar5) | 1L << (uVar6 & 0x3f);
      bVar4 = SCARRY8(lStack_70,1);
      lStack_70 = lStack_70 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10206f200);
        (*pcVar3)();
      }
    }
  } while( true );
}



/* Entry: 10206f23c; end: 10206f45f;  */

undefined1 * FUN_10206f23c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *unaff_x21;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined1 *apuStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)((1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f)) + 0x3fU >> 6);
  uVar7 = (long)puVar6 * 8;
  uStack_70 = param_2;
  uStack_68 = param_3;
  if ((*(byte *)(param_1 + 4) & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar2 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar2 == 0) || (uVar4 = uVar7, func_0x000107c61594(uVar7,8), (uVar4 & 1) == 0)) {
      func_0x000107c6158c(uVar7,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_10206efe8(apuStack_90,uVar7,puVar6,param_1,FUN_10206f460,auStack_80,&puStack_98);
      puVar3 = apuStack_90[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar3 = puStack_98;
      }
      puVar6 = (undefined8 *)0xffffffffffffffff;
      func_0x000107c61590(uVar7,0xffffffffffffffff,0xffffffffffffffff);
      puVar1 = puVar3;
      goto joined_r0x00010206f414;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = auStack_a0 + -(uVar7 + 0xf & 0x3ffffffffffffff0);
  func_0x000107c60ee4(puVar3,uVar7);
  FUN_10206f0d4(puVar3,puVar6,param_1,param_2,param_3);
  puVar1 = unaff_x21;
joined_r0x00010206f414:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c61574();
  }
  else {
    iVar2 = 2;
    puVar6 = (undefined8 *)0x12;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      puVar6 = (undefined8 *)0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_98,puVar6,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574();
    puVar3 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    uVar5 = *param_1;
    (**(code **)(puVar3 + 0x10))(*puVar6,uVar5,param_1[1]);
    return (undefined1 *)(ulong)((uint)uVar5 & 1);
  }
  return puVar3;
}



/* Entry: 10206f460; end: 10206f49b;  */

uint FUN_10206f460(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_1;
  (**(code **)(unaff_x20 + 0x10))(*param_2,uVar1,param_1[1]);
  return (uint)uVar1 & 1;
}



/* Entry: 10206f49c; end: 10206f50b;  */

long FUN_10206f49c(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  uStack_30 = 0xd000000000000035;
  uStack_28 = 0x800000010f05e7e0;
  uStack_20 = 1;
  (**(code **)(param_2 + 8))
            (&lStack_18,&uStack_30,&UNK_110738448,&PTR_DAT_11304a4e0,param_1,param_2);
  if (lStack_18 < 0) {
    lStack_18 = 1;
  }
  return lStack_18;
}



/* Entry: 10206f50c; end: 10206f687;  */

void FUN_10206f50c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar4 = &UNK_1104c2bd0;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_1104c2bd0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1020700b8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101218f4c;
  puStack_68 = &UNK_1104c2be8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c3e924(param_1);
  func_0x000107c61170(param_1);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c613fc(&UNK_1104c2bd0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_60 = (code *)0x1020700dc;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100c1de60;
  puStack_68 = &UNK_1104c2c10;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c5c320(uVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c3e924(uVar6);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 10206f688; end: 10206f71f;  */

void FUN_10206f688(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_50 [2];
  undefined8 uStack_40;
  long lStack_38;
  
  alStack_50[0] = 0;
  uVar2 = 0;
  FUN_1020618e4(0);
  func_0x000107c5fc50(param_1,alStack_50,uVar2);
  lVar1 = alStack_50[0];
  if (alStack_50[0] != 0) {
    uVar2 = 0;
    func_0x000107c5fcec(0);
    lStack_38 = lVar1;
    uStack_40 = param_2;
    FUN_10206cdec(0x1020700fc,alStack_50,
                  "SponsoredSnapFeedImpressionTrackerServicesImpl/SponsoredSnapPlayableAttachmentPreloader.swift"
                  ,0x5d,2,0x30,uVar2);
    func_0x000107c6142c(lVar1);
  }
  return;
}



/* Entry: 10206f720; end: 10206f7a3;  */

void FUN_10206f720(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10206f7a4(param_3);
    func_0x000107c61574(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 10206f7a4; end: 10206fc33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206f7a4(double param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x20;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  double dVar24;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  char acStack_79 [9];
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar16 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c614f0(uVar15);
  puStack_b0 = (undefined *)0xd000000000000032;
  uStack_a8 = 0x800000010f05e7a0;
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  (**(code **)(lVar16 + 8))(acStack_79,&puStack_b0,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar15,lVar16);
  if (acStack_79[0] == '\x01') {
    if (param_2 >> 0x3e == 0) {
      uVar17 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar17 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar17 = param_2;
      }
      func_0x000107c60480();
    }
    if (uVar17 != 0) {
      uVar20 = 0;
      lVar16 = *(long *)(unaff_x20 + 0x40);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
      do {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10206fbf4);
            (*pcVar4)();
          }
          uVar6 = *(ulong *)(param_2 + 0x20 + uVar20 * 8);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar20;
          FUN_102061928(uVar20,param_2);
        }
        bVar5 = SCARRY8(uVar20,1);
        uVar20 = uVar20 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10206fbf0);
          (*pcVar4)();
        }
        uVar7 = uVar6;
        func_0x000107c3d458();
        func_0x000107c61180();
        if (uVar7 == 0) {
LAB_10206f888:
          func_0x000107c61170(uVar6);
        }
        else {
          uVar22 = uVar6;
          func_0x000107c3f740();
          func_0x000107c61180();
          if (uVar22 == 0) {
LAB_10206f880:
            func_0x000107c61170(uVar7);
            goto LAB_10206f888;
          }
          func_0x000107c4223c();
          dVar24 = param_1;
          func_0x000107c61170(uVar22);
          bVar5 = param_1 <= 0.0;
          param_1 = dVar24;
          if ((bVar5) || (uVar22 = *(ulong *)(uVar7 + _DAT_113815208), uVar22 == 0))
          goto LAB_10206f880;
          uVar18 = uVar22 & 0xffffffffffffff8;
          if (uVar22 >> 0x3e == 0) {
            uVar23 = *(ulong *)(uVar18 + 0x10);
          }
          else {
            uVar23 = uVar22;
            if (-1 < (long)uVar22) {
              uVar23 = uVar18;
            }
            func_0x000107c60480();
            param_1 = dVar24;
          }
          if (uVar23 != 0) {
            uVar21 = 0;
            do {
              if ((uVar22 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar18 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10206fbec);
                  (*pcVar4)();
                }
                uVar8 = *(ulong *)(uVar22 + uVar21 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar8 = uVar21;
                func_0x000100e471e4(uVar21,uVar22);
              }
              uVar1 = uVar21 + 1;
              if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10206fbe8);
                (*pcVar4)();
              }
              uVar9 = uVar8;
              func_0x000107c3dde0();
              func_0x000107c61180();
              func_0x000107c61170(uVar8);
              if (uVar9 != 0) {
                lVar19 = *(long *)(uVar9 + _DAT_11308faf8);
                lVar10 = lVar19;
                func_0x000107c61174();
                func_0x000107c61170(uVar9);
                if ((lVar19 != 0) &&
                   (bVar2 = *(byte *)(lVar10 + _DAT_113815358), func_0x000107c61170(lVar10),
                   (bVar2 & 1) != 0)) {
                  uVar11 = *(undefined8 *)(uVar7 + _DAT_11308f130);
                  func_0x000107c5fadc(uVar11,((undefined8 *)(uVar7 + _DAT_11308f130))[1]);
                  lVar10 = lVar16;
                  func_0x000107c4d9d8();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar11);
                  if (lVar10 == 0) {
                    uVar11 = uVar15;
                    func_0x000107c3e2e8(uVar15);
                    func_0x000107c61180();
                    puVar12 = &UNK_1104c2bd0;
                    func_0x000107c613fc(&UNK_1104c2bd0,0x18,7);
                    func_0x000107c61644(puVar12 + 0x10,unaff_x20);
                    puVar13 = &UNK_1104c2c48;
                    func_0x000107c613fc(&UNK_1104c2c48,0x20,7);
                    *(undefined **)(puVar13 + 0x10) = puVar12;
                    *(ulong *)(puVar13 + 0x18) = uVar7;
                    puVar12 = &UNK_1104c2c70;
                    func_0x000107c613fc(&UNK_1104c2c70,0x20,7);
                    *(code **)(puVar12 + 0x10) = FUN_102070114;
                    *(undefined **)(puVar12 + 0x18) = puVar13;
                    uStack_90 = 0x10207011c;
                    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_a8 = 0x42000000;
                    uStack_a0 = 0x102062118;
                    puStack_98 = &UNK_1104c2c88;
                    ppuVar14 = &puStack_b0;
                    puStack_88 = puVar12;
                    func_0x000107c60bc4(ppuVar14);
                    puVar3 = puStack_88;
                    func_0x000107c61174(uVar7);
                    func_0x000107c6157c(puVar12);
                    func_0x000107c61574(puVar3);
                    func_0x000107c4c754(uVar11);
                    func_0x000107c61170(uVar7);
                    func_0x000107c61170(uVar6);
                    func_0x000107c60bd0(ppuVar14);
                    func_0x000107c61574(puVar13);
                    func_0x000107c61170(uVar11);
                    puVar13 = puVar12;
                    func_0x000107c61544(puVar12,"",0xa1,0x50,0x57,1);
                    func_0x000107c61574(puVar12);
                    if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x10206fc34);
                      (*pcVar4)();
                    }
                  }
                  else {
                    func_0x000107c61170(uVar7);
                    func_0x000107c61170(uVar6);
                    func_0x000107c615e8(lVar10);
                  }
                  goto LAB_10206f890;
                }
              }
              uVar21 = uVar21 + 1;
            } while (uVar1 != uVar23);
          }
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar6);
        }
LAB_10206f890:
      } while (uVar20 != uVar17);
    }
  }
  return;
}



/* Entry: 10206fc34; end: 10206fc93;  */

void FUN_10206fc34(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5fcec(0);
  func_0x000100f7a598(FUN_1020700e4,param_2,
                      "SponsoredSnapFeedImpressionTrackerServicesImpl/SponsoredSnapPlayableAttachmentPreloader.swift"
                      ,0x5d,2,0x36);
  return;
}



/* Entry: 10206fc94; end: 10206fd13;  */

void FUN_10206fc94(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c4fe7c(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10206fd14; end: 10206ff53;  */

void FUN_10206fd14(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  ppuVar5 = &puStack_b0;
  ppuVar6 = &puStack_b0;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174();
      lVar2 = param_1;
      func_0x000104191a9c();
      if ((int)lVar2 == 9) {
        func_0x0001000d224c(&lStack_80);
        lVar2 = lStack_80;
        func_0x000107c4ed74(lStack_80);
        func_0x000107c61180();
        func_0x000107c615e8(lStack_80);
        puVar3 = &UNK_1104c2bd0;
        func_0x000107c613fc(&UNK_1104c2bd0,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,param_2);
        puVar4 = &UNK_1104c2cc0;
        func_0x000107c613fc(&UNK_1104c2cc0,0x20,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined8 *)(puVar4 + 0x18) = param_3;
        puVar3 = &UNK_1104c2ce8;
        func_0x000107c613fc(&UNK_1104c2ce8,0x20,7);
        *(code **)(puVar3 + 0x10) = FUN_102070150;
        *(undefined **)(puVar3 + 0x18) = puVar4;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x102070158;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        pcStack_a0 = FUN_102060ab0;
        puStack_98 = &UNK_1104c2d00;
        puStack_88 = puVar3;
        func_0x000107c60bc4(&puStack_b0);
        puVar3 = puStack_88;
        func_0x000107c61174(param_3);
        func_0x000107c61574(puVar3);
        puVar3 = &UNK_1104c2d38;
        func_0x000107c613fc(&UNK_1104c2d38,0x20,7);
        *(undefined8 *)(puVar3 + 0x10) = 0x102070160;
        *(long *)(puVar3 + 0x18) = param_2;
        uStack_90 = 0x102070164;
        puStack_b0 = puVar1;
        uStack_a8 = 0x42000000;
        pcStack_a0 = (code *)&UNK_100e27b38;
        puStack_98 = &UNK_1104c2d50;
        puStack_88 = puVar3;
        func_0x000107c60bc4(&puStack_b0);
        puVar3 = puStack_88;
        func_0x000107c6157c(param_2);
        func_0x000107c61574(puVar3);
        func_0x000107c4c754(lVar2);
        func_0x000107c61574(param_2);
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61574(param_2);
        func_0x000107c61574(puVar4);
        param_1 = lVar2;
      }
      else {
        func_0x000107c61574(param_2);
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 10206ff54; end: 10207002b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10206ff54(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x40);
      uVar2 = *(undefined8 *)(param_3 + _DAT_11308f130);
      uVar1 = ((undefined8 *)(param_3 + _DAT_11308f130))[1];
      func_0x000107c615f0(param_1);
      func_0x000107c61174(uVar3);
      func_0x000107c5fadc(uVar2,uVar1);
      func_0x000107c56bcc(uVar3);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 10207002c; end: 102070097;  */

void FUN_10207002c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102070098; end: 1020700b7;  */

void FUN_102070098(void)

{
  FUN_10206f50c();
  return;
}



/* Entry: 1020700b8; end: 1020700e3;  */

void FUN_1020700b8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_50 [2];
  
  alStack_50[0] = 0;
  uVar2 = 0;
  FUN_1020618e4(0);
  func_0x000107c5fc50(param_1,alStack_50,uVar2);
  lVar1 = alStack_50[0];
  if (alStack_50[0] != 0) {
    uVar2 = 0;
    func_0x000107c5fcec(0);
    FUN_10206cdec(0x1020700fc,alStack_50,
                  "SponsoredSnapFeedImpressionTrackerServicesImpl/SponsoredSnapPlayableAttachmentPreloader.swift"
                  ,0x5d,2,0x30,uVar2);
    func_0x000107c6142c(lVar1);
  }
  return;
}



/* Entry: 1020700e4; end: 102070113;  */

void FUN_1020700e4(void)

{
  FUN_10206fc94();
  return;
}



/* Entry: 102070114; end: 102070123;  */

void FUN_102070114(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar7 = &puStack_b0;
  ppuVar8 = &puStack_b0;
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174();
      lVar4 = param_1;
      func_0x000104191a9c();
      if ((int)lVar4 == 9) {
        func_0x0001000d224c(&lStack_80);
        lVar4 = lStack_80;
        func_0x000107c4ed74(lStack_80);
        func_0x000107c61180();
        func_0x000107c615e8(lStack_80);
        puVar5 = &UNK_1104c2bd0;
        func_0x000107c613fc(&UNK_1104c2bd0,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,lVar3);
        puVar6 = &UNK_1104c2cc0;
        func_0x000107c613fc(&UNK_1104c2cc0,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(undefined8 *)(puVar6 + 0x18) = uVar1;
        puVar5 = &UNK_1104c2ce8;
        func_0x000107c613fc(&UNK_1104c2ce8,0x20,7);
        *(code **)(puVar5 + 0x10) = FUN_102070150;
        *(undefined **)(puVar5 + 0x18) = puVar6;
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x102070158;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        pcStack_a0 = FUN_102060ab0;
        puStack_98 = &UNK_1104c2d00;
        puStack_88 = puVar5;
        func_0x000107c60bc4(&puStack_b0);
        puVar5 = puStack_88;
        func_0x000107c61174(uVar1);
        func_0x000107c61574(puVar5);
        puVar5 = &UNK_1104c2d38;
        func_0x000107c613fc(&UNK_1104c2d38,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = 0x102070160;
        *(long *)(puVar5 + 0x18) = lVar3;
        uStack_90 = 0x102070164;
        puStack_b0 = puVar2;
        uStack_a8 = 0x42000000;
        pcStack_a0 = (code *)&UNK_100e27b38;
        puStack_98 = &UNK_1104c2d50;
        puStack_88 = puVar5;
        func_0x000107c60bc4(&puStack_b0);
        puVar5 = puStack_88;
        func_0x000107c6157c(lVar3);
        func_0x000107c61574(puVar5);
        func_0x000107c4c754(lVar4);
        func_0x000107c61574(lVar3);
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61574(lVar3);
        func_0x000107c61574(puVar6);
        param_1 = lVar4;
      }
      else {
        func_0x000107c61574(lVar3);
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 102070124; end: 10207014f;  */

void FUN_102070124(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102070150; end: 10207018b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102070150(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      uVar6 = *(undefined8 *)(lVar4 + 0x40);
      puVar1 = (undefined8 *)(lVar3 + _DAT_11308f130);
      uVar5 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c615f0(param_1);
      func_0x000107c61174(uVar6);
      func_0x000107c5fadc(uVar5,uVar2);
      func_0x000107c56bcc(uVar6);
      func_0x000107c61574(lVar4);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
    }
  }
  return;
}



/* Entry: 10207018c; end: 1020701f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10207018c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102070580();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e54668) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1020701f8; end: 102070263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020701f8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e54668) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102070264; end: 1020702c3; -[_TtC58SponsoredSnapFriendsFeedBannerScopedFactoryServiceProvider44SponsoredSnapFriendsFeedBannerScopedServices init] */

void FUN_102070264(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapFriendsFeedBannerScopedFactoryServiceProvider.SponsoredSnapFriendsFeedBannerScopedServices"
                      ,0x67,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102070290);
  (*pcVar1)();
}



/* Entry: 1020702c4; end: 1020702d3; -[_TtC58SponsoredSnapFriendsFeedBannerScopedFactoryServiceProvider44SponsoredSnapFriendsFeedBannerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020702c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e54668));
  return;
}



/* Entry: 1020702d4; end: 10207033f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020702d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104c2f40;
  func_0x000107c613fc(&UNK_1104c2f40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102070618,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102070340; end: 1020703db;  */

void FUN_102070340(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104c2e50;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104c2e50;
  return;
}



/* Entry: 1020703dc; end: 102070413;  */

void FUN_1020703dc(long *param_1)

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



/* Entry: 102070414; end: 10207041b;  */

undefined8 FUN_102070414(void)

{
  return 0x1b;
}



/* Entry: 10207041c; end: 10207054f;  */

void FUN_10207041c(undefined8 *param_1)

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
  puVar1 = &UNK_1104c2f68;
  func_0x000107c613fc(&UNK_1104c2f68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1020705f0;
  func_0x00010058fa64(FUN_1020705f0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102070550; end: 10207057f;  */

undefined ** FUN_102070550(void)

{
  return &PTR_DAT_112e54f78;
}



/* Entry: 102070580; end: 10207059f;  */

void FUN_102070580(void)

{
  func_0x000107c61168(&PTR_PTR_11281ad58);
  return;
}



/* Entry: 1020705a0; end: 1020705ef;  */

undefined1  [16] FUN_1020705a0(void)

{
  return ZEXT816(0x1104c2ea0);
}



/* Entry: 1020705f0; end: 102070617;  */

void FUN_1020705f0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102070618; end: 10207061b;  */

void FUN_102070618(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10207061c; end: 1020708c3;  */

void FUN_10207061c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e546d0,&UNK_10da55c60);
  puVar1 = &UNK_1104c2fa8;
  func_0x000107c613fc(&UNK_1104c2fa8,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_10;
  *(undefined8 *)(puVar1 + 0x28) = param_11;
  *(undefined8 *)(puVar1 + 0x30) = param_12;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_4;
  *(undefined8 *)(puVar1 + 0x50) = param_3;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  *(undefined8 *)(puVar1 + 0x60) = param_6;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_1;
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1020708c4,puVar1);
  return;
}



/* Entry: 1020708c4; end: 1020708ff;  */

void FUN_1020708c4(void)

{
  long unaff_x20;
  
  func_0x000102070758(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102070900; end: 10207090f;  */

undefined1  [16] FUN_102070900(void)

{
  return ZEXT816(0x1104c2fd0);
}



/* Entry: 102070910; end: 102070e8f;  */

void FUN_102070910(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_70 [2];
  
  uVar16 = *param_2;
  func_0x0001000285a8(0x112e546e0,&UNK_10da55cb8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar16;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001020728f0();
  pcVar3 = "AdAttachmentHandlerScopeExposerSubjectServiceProvider";
  func_0x000100082720("AdAttachmentHandlerScopeExposerSubjectServiceProvider",0x35,2);
  FUN_10207293c();
  pcVar4 = "SCFriendActionSheetScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendActionSheetScopeExposerSubjectServiceProvider",0x35,2);
  FUN_102072988();
  pcVar5 = "SCFriendProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendProfileScopeExposerSubjectServiceProvider",0x31,2);
  func_0x000102072a08();
  func_0x000100082720("SponsoredSnapPlaybackScopeExposerSubjectServiceProvider",0x37,2);
  puVar6 = puVar2;
  FUN_102072930();
  func_0x000100082720("AdAttachmentHandlerScopeExposerObservableServiceProvider",0x38,2);
  pcVar7 = pcVar3;
  FUN_10207297c();
  func_0x000100082720("SCFriendActionSheetScopeExposerObservableServiceProvider",0x38,2);
  pcVar8 = pcVar4;
  FUN_1020729c8();
  func_0x000100082720("SCFriendProfileScopeExposerObservableServiceProvider",0x34,2);
  pcVar9 = pcVar5;
  FUN_102072a94();
  func_0x000100082720("SponsoredSnapPlaybackScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_1020703dc;
  func_0x0001000823a8(FUN_1020703dc,0);
  func_0x000100082720("SponsoredSnapFriendsFeedBannerScopedServicesCleanupRelayServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112e546e8,&UNK_10da55cd0);
  puVar11 = &UNK_1104c3018;
  func_0x000107c613fc(&UNK_1104c3018,0xa0,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar1;
  *(undefined8 *)(puVar11 + 0x18) = param_3;
  *(undefined8 *)(puVar11 + 0x20) = param_4;
  *(undefined8 *)(puVar11 + 0x28) = param_5;
  *(undefined8 *)(puVar11 + 0x30) = param_6;
  *(undefined8 *)(puVar11 + 0x38) = param_7;
  *(undefined8 *)(puVar11 + 0x40) = param_8;
  *(undefined8 *)(puVar11 + 0x48) = param_9;
  *(undefined8 *)(puVar11 + 0x50) = param_10;
  *(undefined8 *)(puVar11 + 0x58) = param_11;
  *(undefined8 *)(puVar11 + 0x60) = param_12;
  *(undefined8 *)(puVar11 + 0x68) = param_13;
  *(undefined8 *)(puVar11 + 0x70) = param_14;
  *(undefined8 *)(puVar11 + 0x78) = param_15;
  *(char **)(puVar11 + 0x80) = pcVar7;
  *(char **)(puVar11 + 0x88) = pcVar9;
  *(undefined8 **)(puVar11 + 0x90) = puVar6;
  *(char **)(puVar11 + 0x98) = pcVar8;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar8);
  uVar16 = 0x102070f54;
  func_0x0001000823a8(0x102070f54,puVar11);
  func_0x000100082720("SponsoredSnapFriendsFeedBannerEntryPointWrapperServiceProvider",0x3e,2);
  puVar12 = puVar2;
  FUN_102072640(puVar2,pcVar3,pcVar4,pcVar5);
  func_0x000100082720("SponsoredSnapFriendsFeedBannerScopeGraphBridgeServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e546f0,&UNK_10da55cc0);
  puVar11 = &UNK_1104c3040;
  func_0x000107c613fc(&UNK_1104c3040,0x30,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar16;
  *(undefined8 **)(puVar11 + 0x18) = puVar1;
  *(undefined8 **)(puVar11 + 0x20) = puVar12;
  *(code **)(puVar11 + 0x28) = pcVar10;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(puVar12);
  func_0x000107c6157c(pcVar10);
  pcVar13 = FUN_102070f98;
  func_0x0001000823a8(FUN_102070f98,puVar11);
  func_0x000100082720("SponsoredSnapFriendsFeedBannerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112e54670,&UNK_10da559f0);
  func_0x000107c6157c(pcVar13);
  uVar14 = 0x102070fa4;
  func_0x0001000823a8(0x102070fa4,pcVar13);
  func_0x000100082720("SponsoredSnapFriendsFeedBannerScopeInitializationServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e54660,&UNK_10da559e0);
  func_0x000107c6157c(uVar14);
  uVar15 = 0x102070fac;
  func_0x0001000823a8(0x102070fac,uVar14);
  func_0x000100082720("SponsoredSnapFriendsFeedBannerScopedServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar11 = &UNK_1104c3068;
  func_0x000107c613fc(&UNK_1104c3068,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar15;
  *(code **)(puVar11 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  uVar15 = 0x102070fb4;
  func_0x0001000823a8(0x102070fb4,puVar11);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(uVar14);
  func_0x000100082720("SponsoredSnapFriendsFeedBannerScopeEntryPointProvider",0x35,2);
  *param_1 = uVar15;
  return;
}



/* Entry: 102070e90; end: 102070f97;  */

void FUN_102070e90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102070f98; end: 102070fbb;  */

void FUN_102070f98(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102071cec(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SponsoredSnapFriendsFeedBannerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102070fbc; end: 102071a73;  */

void FUN_102070fbc(long *param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  FUN_102071c3c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_98;
  *(undefined8 *)(param_2 + 0x60) = uStack_a0;
  *(undefined8 *)(param_2 + 0x68) = uStack_a8;
  *(undefined8 *)(param_2 + 0x70) = uStack_b0;
  *(undefined8 *)(param_2 + 0x78) = uStack_b8;
  *(undefined8 *)(param_2 + 0x80) = uStack_c0;
  *(undefined8 *)(param_2 + 0x88) = uStack_c8;
  *(undefined8 *)(param_2 + 0x90) = uStack_d0;
  *(undefined8 *)(param_2 + 0x98) = uStack_d8;
  func_0x0001000285a8(0x112e4cce0,&UNK_10da46da0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar15;
  func_0x0001000285a8(0x112e51e28,&UNK_10da55ce0);
  func_0x000107c610f8();
  uVar14 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x20) = puVar16;
  func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
  func_0x000107c610f8();
  uVar14 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  func_0x00010017da58();
  puVar17 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x28) = puVar17;
  func_0x0001000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar14 = uStack_f8;
  func_0x000107c6157c(uStack_f8);
  func_0x0001003b3b80();
  puVar18 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x30) = puVar18;
  FUN_102084040();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = uVar19;
  func_0x000102082dd0(uVar19,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                      uVar12,uVar13,puVar15,puVar16,puVar17,puVar18);
  *(undefined8 *)(param_2 + 0x10) = uVar14;
  func_0x000107c6157c();
  FUN_102083f48();
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(uStack_e8);
  func_0x000107c61574(uStack_f0);
  func_0x000107c61574(uStack_f8);
  func_0x000107c61574(uVar14);
  *param_1 = param_2;
  return;
}



/* Entry: 102071a74; end: 102071b37;  */

void FUN_102071a74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102071b38; end: 102071b3f;  */

undefined8 FUN_102071b38(void)

{
  return 0x1b;
}



/* Entry: 102071b40; end: 102071bc3;  */

void FUN_102071b40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102071c7c,param_2,FUN_102071c80,param_2,FUN_102071ca8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102071bc4; end: 102071c0b;  */

undefined8 FUN_102071bc4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000102083f68();
  func_0x000107c61574(uStack_28);
  return param_1;
}


