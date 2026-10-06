/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103751efc; end: 103752237;  */

ulong * FUN_103751efc(double param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uStack_70;
  uint uStack_64;
  
  lVar3 = 0;
  func_0x000103f707cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (ulong *)((long)&uStack_70 + lVar1);
  lVar9 = 0x112d36580;
  puVar8 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar7 - extraout_x8_00;
  uVar4 = param_2;
  func_0x000107c44fc0();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uVar10 = 0;
    puVar11 = (undefined *)0xe000000000000000;
    puVar13 = puVar8;
  }
  else {
    uVar10 = uVar4;
    func_0x000107c5faec();
    puVar13 = puVar8;
    func_0x000107c61170(uVar4);
    uVar10 = uVar10 & 0xffffffffffff;
    puVar11 = puVar8;
  }
  func_0x000107c6142c(puVar11);
  if (((ulong)puVar11 & 0x2000000000000000) != 0) {
    uVar10 = (ulong)puVar11 >> 0x38 & 0xf;
  }
  uVar4 = param_2;
  if (uVar10 == 0) {
    func_0x000107c424f8();
    func_0x000107c61180();
  }
  else {
    func_0x000107c44fc0();
    func_0x000107c61180();
  }
  uStack_64 = (uint)(uVar10 != 0);
  if (uVar4 == 0) {
    uStack_70 = 0;
    puVar11 = (undefined *)0xe000000000000000;
    puVar8 = puVar13;
  }
  else {
    uVar10 = uVar4;
    func_0x000107c5faec();
    puVar8 = puVar13;
    uStack_70 = uVar10;
    func_0x000107c61170(uVar4);
    puVar11 = puVar13;
  }
  uVar4 = param_2;
  func_0x000107c41540();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uVar10 = 0;
    puVar12 = (undefined *)0xe000000000000000;
    puVar13 = puVar8;
  }
  else {
    uVar10 = uVar4;
    func_0x000107c5faec();
    puVar13 = puVar8;
    func_0x000107c61170(uVar4);
    uVar10 = uVar10 & 0xffffffffffff;
    puVar12 = puVar8;
  }
  func_0x000107c6142c(puVar12);
  if (((ulong)puVar12 & 0x2000000000000000) != 0) {
    uVar10 = (ulong)puVar12 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    puVar8 = (undefined *)0x1;
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar9,1,1,lVar5);
  }
  else {
    uVar4 = param_2;
    func_0x000107c41540();
    func_0x000107c61180();
    if (uVar4 == 0) {
      uVar10 = 0;
      puVar13 = (undefined *)0xe000000000000000;
    }
    else {
      uVar10 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
    }
    puVar8 = puVar13;
    func_0x000107c5edd0(lVar9,uVar10);
    func_0x000107c6142c(puVar13);
  }
  uVar4 = param_2;
  func_0x000107c5cab0();
  func_0x000107c61180();
  uVar10 = uVar4;
  func_0x000107c5faec();
  puVar13 = puVar8;
  func_0x000107c61170(uVar4);
  uVar4 = param_2;
  func_0x000107c5c38c();
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  FUN_10375281c(lVar9,(long)puVar7 + (long)*(int *)(lVar3 + 0x1c),0x112d36580,&UNK_10d9016d0);
  func_0x000107c43370(param_2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103752230);
    (*pcVar2)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103752234);
    (*pcVar2)();
  }
  if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103752238);
    (*pcVar2)();
  }
  *puVar7 = uVar10;
  *(undefined **)(&stack0xffffffffffffff98 + lVar1) = puVar8;
  *(ulong *)(&stack0xffffffffffffffa0 + lVar1) = uVar6;
  *(undefined **)(&stack0xffffffffffffffa8 + lVar1) = puVar13;
  *(ulong *)(&stack0xffffffffffffffb0 + lVar1) = uStack_70;
  *(undefined **)(&stack0xffffffffffffffb8 + lVar1) = puVar11;
  (&stack0xffffffffffffffc0)[lVar1] = (char)uStack_64;
  *(long *)((long)puVar7 + (long)*(int *)(lVar3 + 0x20)) = (long)param_1;
  func_0x000103f77110(0);
  func_0x000107c610f8();
  func_0x000103f76d4c(puVar7);
  func_0x000103752864(lVar9,0x112d36580,&UNK_10d9016d0);
  return puVar7;
}



/* Entry: 103752238; end: 1037524b3;  */

void FUN_103752238(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  lVar11 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  uVar5 = uVar2;
  uVar7 = uVar3;
  func_0x000100029284();
  lVar8 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar7 & 1;
  lVar12 = lVar8 + uVar9;
  if (SCARRY8(lVar8,uVar9)) {
LAB_1037524ac:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1037524b0);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar12) {
    FUN_10375c03c(lVar12,param_2 & 1);
    uVar5 = uVar2;
    uVar9 = uVar3;
    func_0x000100029284();
    if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) {
LAB_1037522ec:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1037522fc);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_10375be8c();
    lVar12 = *param_3;
    goto joined_r0x000103752344;
  }
  lVar12 = *param_3;
joined_r0x000103752344:
  if ((uVar7 & 1) == 0) {
    lVar8 = lVar12 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
    if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
LAB_1037524b0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1037524b4);
      (*pcVar4)();
    }
    *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
  }
  else {
    func_0x000107c6142c(uVar3);
    uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
    func_0x000107c61170(uVar6);
  }
  if (lVar10 != 1) {
    lVar10 = lVar10 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar13 = *puVar14;
      lVar11 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar5 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      lVar8 = *(long *)(lVar11 + 0x10);
      uVar9 = (ulong)~(uint)uVar7 & 1;
      lVar12 = lVar8 + uVar9;
      if (SCARRY8(lVar8,uVar9)) goto LAB_1037524ac;
      if (*(long *)(lVar11 + 0x18) < lVar12) {
        FUN_10375c03c(lVar12,1);
        uVar5 = uVar2;
        uVar9 = uVar3;
        func_0x000100029284();
        if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) goto LAB_1037522ec;
      }
      lVar12 = *param_3;
      if ((uVar7 & 1) == 0) {
        lVar8 = lVar12 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
        if (SCARRY8(*(long *)(lVar12 + 0x10),1)) goto LAB_1037524b0;
        *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar3);
        uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
        func_0x000107c61170(uVar6);
      }
      puVar14 = puVar14 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 1037524b4; end: 1037526d7;  */

/* WARNING: Removing unreachable block (ram,0x0001037526d0) */

void FUN_1037524b4(undefined *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_68;
  
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar9 = param_1;
  }
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar11 = puVar9;
    }
    func_0x000107c60480();
  }
  if (puVar11 == (undefined *)0x0) {
    func_0x000107c61434(param_1);
    func_0x000107c6142c(puVar9);
    puVar9 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = puVar10;
    func_0x000107c61434(param_1);
    FUN_10375c4d0(0,(ulong)puVar11 & ((long)puVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037526d0);
      (*pcVar3)();
    }
    puVar10 = (undefined *)0x0;
    do {
      puVar2 = puStack_68;
      puVar8 = puVar9;
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        puVar4 = *(undefined **)(puVar9 + (long)puVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar10;
        FUN_103757ee0();
      }
      puVar5 = puVar4;
      func_0x000107c3e8c8();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c5faec();
      func_0x000107c61170(puVar5);
      puVar5 = puVar4;
      func_0x000107c3f334();
      func_0x000107c61180();
      puVar7 = puVar5;
      FUN_103751efc();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_10375c4d0(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      puVar2 = puStack_68;
      puVar10 = puVar10 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_68 + uVar1 * 0x18 + 0x20) = puVar6;
      *(undefined **)(puStack_68 + uVar1 * 0x18 + 0x28) = puVar8;
      *(undefined **)(puStack_68 + uVar1 * 0x18 + 0x30) = puVar7;
    } while (puVar11 != puVar10);
    func_0x000107c6142c(puVar9);
    puVar9 = *(undefined **)(puVar2 + 0x10);
    puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar10;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f8fea0,&UNK_10dc08080);
    func_0x000107c60498();
    puVar10 = puVar9;
  }
  puStack_68 = puVar10;
  FUN_103752238(puVar2,1,&puStack_68);
  func_0x000107c6142c(puVar2);
  return;
}



/* Entry: 1037526d8; end: 10375271b;  */

void FUN_1037526d8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6142c(*param_1);
  *param_1 = uVar1;
  func_0x000107c61434(uVar1);
  return;
}



/* Entry: 10375271c; end: 103752757;  */

void FUN_10375271c(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103752758; end: 103752773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103752758(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long unaff_x20;
  long lVar22;
  ulong uVar23;
  undefined4 uStack_13c;
  long lStack_120;
  long lStack_108;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar8 + 0x10,auStack_80,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  lVar6 = _DAT_112f8ff98;
  lVar5 = _DAT_112f8ff80;
  if (lVar8 != 0) {
    uVar18 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar23 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar23 = ~(-1L << (uVar18 & 0x3f));
    }
    uVar23 = uVar23 & *(ulong *)(param_1 + 0x40);
    uVar18 = uVar18 + 0x3f >> 6;
    func_0x000107c61434(param_1);
    lVar22 = 0;
joined_r0x000103750e7c:
    if (uVar23 == 0) {
      uVar23 = uVar18;
      if ((long)uVar18 <= lVar22 + 1) {
        uVar23 = lVar22 + 1;
      }
      lVar20 = uVar23 - 1;
      lVar11 = lVar22;
      do {
        lVar22 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1037513b4);
          (*pcVar7)();
        }
        if ((long)uVar18 <= lVar22) {
          uVar23 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          goto LAB_103750ed8;
        }
        uVar23 = ((ulong *)(param_1 + 0x40))[lVar22];
        lVar11 = lVar11 + 1;
      } while (uVar23 == 0);
    }
    uVar14 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar23 = uVar23 - 1 & uVar23;
    uVar17 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar22 << 6;
    puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar17 * 0x10);
    uStack_e0 = *puVar1;
    uVar14 = puVar1[1];
    uStack_d8 = uVar14;
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar17 * 0x20,&uStack_d0);
    func_0x000107c61434(uVar14);
    lVar20 = lVar22;
LAB_103750ed8:
    uVar17 = uStack_d8;
    uVar14 = uStack_e0;
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    if (uStack_d8 != 0) {
      func_0x000100102924(&uStack_a0,&uStack_e0);
      func_0x0001000bb420(&uStack_e0,auStack_100);
      uVar9 = 0;
      FUN_10375279c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      plVar10 = &lStack_108;
      func_0x000107c6147c(plVar10,auStack_100,PTR___sypN_11034f1a8 + 8,uVar9,6);
      lVar11 = lStack_108;
      lVar22 = lVar20;
      if (((ulong)plVar10 & 1) == 0) {
        func_0x000100183ab8(&uStack_e0);
        func_0x000107c6142c(uVar17);
      }
      else {
        func_0x000107c61428(lVar4 + 0x10,auStack_100,0x20,0);
        lVar20 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar20 + 0x10) == 0) {
LAB_103750fb8:
          func_0x000107c614a8(auStack_100);
          lStack_120 = 0;
          func_0x000107c60110();
        }
        else {
          func_0x000107c61434(lVar20);
          uVar13 = uVar14;
          uVar16 = uVar17;
          func_0x000100029284();
          if ((uVar16 & 1) == 0) {
            func_0x000107c6142c(lVar20);
            goto LAB_103750fb8;
          }
          lStack_120 = *(long *)(*(long *)(lVar20 + 0x38) + uVar13 * 8);
          func_0x000107c61174();
          func_0x000107c614a8(auStack_100);
          func_0x000107c6142c(lVar20);
        }
        func_0x000107c61428(lVar4 + 0x10,auStack_100,0x21,0);
        func_0x000107c61174();
        uVar12 = *(ulong *)(lVar4 + 0x10);
        func_0x000107c61558();
        lVar21 = *(long *)(lVar4 + 0x10);
        *(undefined8 *)(lVar4 + 0x10) = 0x8000000000000000;
        uVar13 = uVar14;
        uVar16 = uVar17;
        lStack_108 = lVar21;
        func_0x000100029284();
        uVar19 = (ulong)~(uint)uVar16 & 1;
        lVar20 = *(long *)(lVar21 + 0x10) + uVar19;
        if (SCARRY8(*(long *)(lVar21 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1037513b8);
          (*pcVar7)();
        }
        if (*(long *)(lVar21 + 0x18) < lVar20) {
          func_0x000101b3da54(lVar20,uVar12);
          uVar13 = uVar14;
          uVar12 = uVar17;
          func_0x000100029284();
          if (((uint)uVar16 & 1) != ((uint)uVar12 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1037513cc);
            (*pcVar7)();
          }
        }
        else if ((uVar12 & 1) == 0) {
          func_0x000101b3d774();
        }
        lVar20 = lStack_108;
        if ((uVar16 & 1) == 0) {
          lVar21 = lStack_108 + (uVar13 >> 6) * 8;
          *(ulong *)(lVar21 + 0x40) = *(ulong *)(lVar21 + 0x40) | 1L << (uVar13 & 0x3f);
          puVar1 = (ulong *)(*(long *)(lStack_108 + 0x30) + uVar13 * 0x10);
          *puVar1 = uVar14;
          puVar1[1] = uVar17;
          *(long *)(*(long *)(lStack_108 + 0x38) + uVar13 * 8) = lVar11;
          if (SCARRY8(*(long *)(lStack_108 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1037513bc);
            (*pcVar7)();
          }
          *(long *)(lStack_108 + 0x10) = *(long *)(lStack_108 + 0x10) + 1;
          func_0x000107c61434(uVar17);
        }
        else {
          uVar9 = *(undefined8 *)(*(long *)(lStack_108 + 0x38) + uVar13 * 8);
          *(long *)(*(long *)(lStack_108 + 0x38) + uVar13 * 8) = lVar11;
          func_0x000107c61170(uVar9);
        }
        *(long *)(lVar4 + 0x10) = lVar20;
        func_0x000107c614a8(auStack_100);
        lVar20 = lVar11;
        func_0x000107c49820();
        lVar21 = lStack_120;
        func_0x000107c49820();
        if (lVar21 < lVar20) {
          func_0x000107c61428(lVar8 + lVar5,auStack_100,0x20,0);
          lVar20 = *(long *)(lVar8 + lVar5);
          if (*(long *)(lVar20 + 0x10) == 0) {
LAB_1037511d0:
            func_0x000107c614a8(auStack_100);
            func_0x000107c61170(lVar11);
            func_0x000107c6142c(uVar17);
          }
          else {
            func_0x000107c61434(lVar20);
            uVar13 = uVar14;
            uVar16 = uVar17;
            func_0x000100029284();
            if ((uVar16 & 1) == 0) {
              func_0x000107c6142c(lVar20);
              goto LAB_1037511d0;
            }
            puVar2 = (undefined8 *)(*(long *)(lVar20 + 0x38) + uVar13 * 0x10);
            uVar9 = *puVar2;
            uVar3 = puVar2[1];
            func_0x00010006c00c(uVar9,uVar3);
            func_0x000107c614a8(auStack_100);
            func_0x000107c6142c(lVar20);
            uVar13 = 0xd000000000000025;
            func_0x000107c5fbb4(0xd000000000000025,0x800000010f163400,uVar14,uVar17);
            if ((uVar13 & 1) == 0) {
              uVar13 = 0xd00000000000001f;
              func_0x000107c5fbb4(0xd00000000000001f,0x800000010f163430,uVar14,uVar17);
              if ((uVar13 & 1) == 0) {
                uVar13 = 0xd000000000000021;
                func_0x000107c5fbb4(0xd000000000000021,0x800000010f163450,uVar14,uVar17);
                uStack_13c = 2;
                if ((uVar13 & 1) == 0) {
                  uStack_13c = 0;
                }
              }
              else {
                uStack_13c = 1;
              }
            }
            else {
              uStack_13c = 0;
            }
            func_0x000107c61428(lVar8 + lVar6,auStack_100,0x20,0);
            lVar20 = *(long *)(lVar8 + lVar6);
            if (*(long *)(lVar20 + 0x10) == 0) {
LAB_1037512b4:
              func_0x000107c6142c(uVar17);
              uVar15 = 0;
            }
            else {
              func_0x000107c61434(lVar20);
              uVar13 = uVar17;
              func_0x000100029284();
              if ((uVar13 & 1) == 0) {
                func_0x000107c6142c(lVar20);
                goto LAB_1037512b4;
              }
              uVar15 = *(undefined8 *)(*(long *)(lVar20 + 0x38) + uVar14 * 8);
              func_0x000107c61174(uVar15);
              func_0x000107c6142c(lVar20);
              func_0x000107c6142c(uVar17);
            }
            func_0x000107c614a8(auStack_100);
            FUN_1037513cc(uVar9,uVar3,uStack_13c,uVar15);
            func_0x000107c61170(lStack_120);
            func_0x000107c61170(uVar15);
            func_0x00010006c090(uVar9,uVar3);
            lStack_120 = lVar11;
          }
          func_0x000107c61170(lStack_120);
          func_0x000100183ab8(&uStack_e0);
        }
        else {
          func_0x000100183ab8(&uStack_e0);
          func_0x000107c6142c(uVar17);
          func_0x000107c61170(lStack_120);
          func_0x000107c61170(lVar11);
        }
      }
      goto joined_r0x000103750e7c;
    }
    func_0x000107c61170(lVar8);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103752774; end: 10375279b;  */

void FUN_103752774(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_103751910(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                0x112e07750,&PTR_PTR_1126b15a8);
  return;
}



/* Entry: 10375279c; end: 1037527db;  */

void FUN_10375279c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1037527dc; end: 10375280b;  */

void FUN_1037527dc(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10375280c; end: 10375281b;  */

void FUN_10375280c(void)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  iVar1 = *(int *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10374f400(iVar1 != 0);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10375281c; end: 1037528a3;  */

undefined8 FUN_10375281c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1037528a4; end: 1037528cb;  */

void FUN_1037528a4(long param_1,long param_2)

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



/* Entry: 1037528cc; end: 103752923; -[_TtC32SCPlusSyncServicesImplementation22PlusSyncFSTServiceImpl activeCampaign] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037528cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8fff8);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_28);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 103752924; end: 10375294b; -[_TtC32SCPlusSyncServicesImplementation22PlusSyncFSTServiceImpl activeCampaignObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103752924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f90000));
  return;
}



/* Entry: 10375294c; end: 1037529bb;  */

void FUN_10375294c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1037529bc(param_1,param_3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1037529bc; end: 103752a87;  */

/* WARNING: Possible PIC construction at 0x000103752a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103752a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103752f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103752fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037531d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037531e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037531fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037533c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037533d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037533e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037533f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037535c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037536e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037535ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037535fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375360c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375361c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037534b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037534c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037534d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037534e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037534f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375347c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375348c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037530ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037530bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103752a5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037530c0) */
/* WARNING: Removing unreachable block (ram,0x0001037530d8) */
/* WARNING: Removing unreachable block (ram,0x0001037530b0) */
/* WARNING: Removing unreachable block (ram,0x000103753424) */
/* WARNING: Removing unreachable block (ram,0x00010375343c) */
/* WARNING: Removing unreachable block (ram,0x000103753454) */
/* WARNING: Removing unreachable block (ram,0x000103753490) */
/* WARNING: Removing unreachable block (ram,0x000103753430) */
/* WARNING: Removing unreachable block (ram,0x000103753480) */
/* WARNING: Removing unreachable block (ram,0x0001037534f8) */
/* WARNING: Removing unreachable block (ram,0x0001037534e8) */
/* WARNING: Removing unreachable block (ram,0x0001037534d8) */
/* WARNING: Removing unreachable block (ram,0x0001037534c8) */
/* WARNING: Removing unreachable block (ram,0x0001037534b8) */
/* WARNING: Removing unreachable block (ram,0x000103753610) */
/* WARNING: Removing unreachable block (ram,0x000103753698) */
/* WARNING: Removing unreachable block (ram,0x000103753600) */
/* WARNING: Removing unreachable block (ram,0x000103753620) */
/* WARNING: Removing unreachable block (ram,0x00010375369c) */
/* WARNING: Removing unreachable block (ram,0x000103753668) */
/* WARNING: Removing unreachable block (ram,0x0001037536d0) */
/* WARNING: Removing unreachable block (ram,0x000103753680) */
/* WARNING: Removing unreachable block (ram,0x000103753604) */
/* WARNING: Removing unreachable block (ram,0x0001037536e4) */
/* WARNING: Removing unreachable block (ram,0x0001037535f0) */
/* WARNING: Removing unreachable block (ram,0x0001037535c8) */
/* WARNING: Removing unreachable block (ram,0x0001037536dc) */
/* WARNING: Removing unreachable block (ram,0x000103753408) */
/* WARNING: Removing unreachable block (ram,0x0001037533f8) */
/* WARNING: Removing unreachable block (ram,0x0001037533e8) */
/* WARNING: Removing unreachable block (ram,0x0001037533d8) */
/* WARNING: Removing unreachable block (ram,0x0001037533c8) */
/* WARNING: Removing unreachable block (ram,0x000103753200) */
/* WARNING: Removing unreachable block (ram,0x000103753248) */
/* WARNING: Removing unreachable block (ram,0x000103753414) */
/* WARNING: Removing unreachable block (ram,0x000103753268) */
/* WARNING: Removing unreachable block (ram,0x000103753478) */
/* WARNING: Removing unreachable block (ram,0x00010375328c) */
/* WARNING: Removing unreachable block (ram,0x000103753498) */
/* WARNING: Removing unreachable block (ram,0x0001037532cc) */
/* WARNING: Removing unreachable block (ram,0x0001037531e8) */
/* WARNING: Removing unreachable block (ram,0x0001037531d8) */
/* WARNING: Removing unreachable block (ram,0x000103753198) */
/* WARNING: Removing unreachable block (ram,0x000103753058) */
/* WARNING: Removing unreachable block (ram,0x000103752fe8) */
/* WARNING: Removing unreachable block (ram,0x0001037530a8) */
/* WARNING: Removing unreachable block (ram,0x000103753000) */
/* WARNING: Removing unreachable block (ram,0x0001037530fc) */
/* WARNING: Removing unreachable block (ram,0x000103753104) */
/* WARNING: Removing unreachable block (ram,0x000103753040) */
/* WARNING: Removing unreachable block (ram,0x000103752f0c) */
/* WARNING: Removing unreachable block (ram,0x000103752f1c) */
/* WARNING: Removing unreachable block (ram,0x000103752f28) */
/* WARNING: Removing unreachable block (ram,0x000103752f30) */
/* WARNING: Removing unreachable block (ram,0x000103752f38) */
/* WARNING: Removing unreachable block (ram,0x000103752fc8) */
/* WARNING: Removing unreachable block (ram,0x000103752fd4) */
/* WARNING: Removing unreachable block (ram,0x000103752f44) */
/* WARNING: Removing unreachable block (ram,0x000103752f50) */
/* WARNING: Removing unreachable block (ram,0x000103752f68) */
/* WARNING: Removing unreachable block (ram,0x000103752fa4) */
/* WARNING: Removing unreachable block (ram,0x000103752f80) */
/* WARNING: Removing unreachable block (ram,0x000103752a6c) */
/* WARNING: Removing unreachable block (ram,0x000103752db0) */
/* WARNING: Removing unreachable block (ram,0x000103752df0) */
/* WARNING: Removing unreachable block (ram,0x000103753500) */
/* WARNING: Removing unreachable block (ram,0x000103753518) */
/* WARNING: Removing unreachable block (ram,0x000103752e00) */
/* WARNING: Removing unreachable block (ram,0x00010375305c) */
/* WARNING: Removing unreachable block (ram,0x000103753078) */
/* WARNING: Removing unreachable block (ram,0x000103752e14) */
/* WARNING: Removing unreachable block (ram,0x000103753070) */
/* WARNING: Removing unreachable block (ram,0x000103752e40) */
/* WARNING: Removing unreachable block (ram,0x000103753540) */
/* WARNING: Removing unreachable block (ram,0x000103753544) */
/* WARNING: Removing unreachable block (ram,0x000103752e78) */
/* WARNING: Removing unreachable block (ram,0x000103752e7c) */
/* WARNING: Removing unreachable block (ram,0x000103752e9c) */
/* WARNING: Removing unreachable block (ram,0x000103752fe0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000103752ea4) */
/* WARNING: Removing unreachable block (ram,0x000103752f94) */
/* WARNING: Removing unreachable block (ram,0x000103752ea8) */
/* WARNING: Removing unreachable block (ram,0x00010375353c) */
/* WARNING: Removing unreachable block (ram,0x000103752eb4) */
/* WARNING: Removing unreachable block (ram,0x000103752ec0) */
/* WARNING: Removing unreachable block (ram,0x000103753538) */
/* WARNING: Removing unreachable block (ram,0x000103752ecc) */
/* WARNING: Removing unreachable block (ram,0x000103752a18) */
/* WARNING: Removing unreachable block (ram,0x000103752a60) */
/* WARNING: Removing unreachable block (ram,0x000103752a24) */
/* WARNING: Removing unreachable block (ram,0x000103753088) */
/* WARNING: Removing unreachable block (ram,0x000103753554) */
/* WARNING: Removing unreachable block (ram,0x0001037535d4) */
/* WARNING: Removing unreachable block (ram,0x000103753608) */
/* WARNING: Removing unreachable block (ram,0x0001037535d8) */
/* WARNING: Removing unreachable block (ram,0x0001037535c0) */
/* WARNING: Removing unreachable block (ram,0x0001037530a0) */
/* WARNING: Removing unreachable block (ram,0x000103753458) */

void FUN_1037529bc(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + *param_2);
  lVar1 = lVar3;
  func_0x000107c61174(lVar3);
  lVar2 = param_1;
  func_0x000107c61174();
  if (param_1 == lVar3) {
    func_0x000107c61170(lVar2);
  }
  else if (lVar2 != 0) {
    func_0x000107c49cec(lVar1);
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 103752a88; end: 103752c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103752a88(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f90008);
  puVar1 = &UNK_11068e550;
  func_0x000107c613fc(&UNK_11068e550,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_11068e578;
  func_0x000107c613fc(&UNK_11068e578,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_40 = FUN_103752c18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11068e590;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103752c18; end: 103752c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103752c18(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112f90040) == 0) {
      func_0x0001000d224c(&uStack_50);
      uVar2 = uStack_50;
      func_0x000107c432e4(uStack_50);
      func_0x000107c61180();
      func_0x000107c615e8(uStack_50);
      func_0x000107c61170(uVar2);
    }
    FUN_103752db0();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103752c3c; end: 103752c6b; -[_TtC32SCPlusSyncServicesImplementation22PlusSyncFSTServiceImpl loadActiveCampaignIfNeededWithRequestor:] */

void FUN_103752c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103752a88(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103752c6c; end: 103752d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103752c6c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong uStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f8fff8);
  lVar3 = param_2;
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&uStack_48);
  func_0x000107c61574(uVar4);
  if (uStack_48 != 0) {
    uVar1 = uStack_48;
    func_0x000107c3f33c();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    if (uVar2 == param_1 && lVar3 == param_2) {
      func_0x000107c6142c(lVar3);
    }
    else {
      func_0x000107c605b8(uVar2,lVar3,param_1,param_2,0);
      func_0x000107c6142c(lVar3);
      if ((uVar2 & 1) == 0) {
        func_0x000107c61170(uStack_48);
        uStack_48 = 0;
      }
    }
  }
  return uStack_48;
}



/* Entry: 103752d48; end: 103752daf; -[_TtC32SCPlusSyncServicesImplementation22PlusSyncFSTServiceImpl activeCampaignWithCampaignId:] */

void FUN_103752d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103752c6c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103752db0; end: 103753557;  */

/* WARNING: Possible PIC construction at 0x000103752f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103752fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037531d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037531e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037531fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037533c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037533d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037533e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037533f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037535c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037536e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037535ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037535fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375360c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375361c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037534b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037534c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037534d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037534e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037534f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375347c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010375348c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037530ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037530bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103753084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037530c0) */
/* WARNING: Removing unreachable block (ram,0x0001037530d8) */
/* WARNING: Removing unreachable block (ram,0x0001037530b0) */
/* WARNING: Removing unreachable block (ram,0x000103753424) */
/* WARNING: Removing unreachable block (ram,0x00010375343c) */
/* WARNING: Removing unreachable block (ram,0x000103753454) */
/* WARNING: Removing unreachable block (ram,0x000103753490) */
/* WARNING: Removing unreachable block (ram,0x000103753430) */
/* WARNING: Removing unreachable block (ram,0x000103753480) */
/* WARNING: Removing unreachable block (ram,0x0001037534f8) */
/* WARNING: Removing unreachable block (ram,0x0001037534e8) */
/* WARNING: Removing unreachable block (ram,0x0001037534d8) */
/* WARNING: Removing unreachable block (ram,0x0001037534c8) */
/* WARNING: Removing unreachable block (ram,0x0001037534b8) */
/* WARNING: Removing unreachable block (ram,0x000103753610) */
/* WARNING: Removing unreachable block (ram,0x000103753698) */
/* WARNING: Removing unreachable block (ram,0x000103753600) */
/* WARNING: Removing unreachable block (ram,0x000103753620) */
/* WARNING: Removing unreachable block (ram,0x00010375369c) */
/* WARNING: Removing unreachable block (ram,0x000103753668) */
/* WARNING: Removing unreachable block (ram,0x0001037536d0) */
/* WARNING: Removing unreachable block (ram,0x000103753680) */
/* WARNING: Removing unreachable block (ram,0x000103753604) */
/* WARNING: Removing unreachable block (ram,0x0001037536e4) */
/* WARNING: Removing unreachable block (ram,0x0001037535f0) */
/* WARNING: Removing unreachable block (ram,0x0001037535c8) */
/* WARNING: Removing unreachable block (ram,0x0001037536dc) */
/* WARNING: Removing unreachable block (ram,0x000103753408) */
/* WARNING: Removing unreachable block (ram,0x0001037533f8) */
/* WARNING: Removing unreachable block (ram,0x0001037533e8) */
/* WARNING: Removing unreachable block (ram,0x0001037533d8) */
/* WARNING: Removing unreachable block (ram,0x0001037533c8) */
/* WARNING: Removing unreachable block (ram,0x000103753200) */
/* WARNING: Removing unreachable block (ram,0x000103753248) */
/* WARNING: Removing unreachable block (ram,0x000103753414) */
/* WARNING: Removing unreachable block (ram,0x000103753268) */
/* WARNING: Removing unreachable block (ram,0x000103753478) */
/* WARNING: Removing unreachable block (ram,0x00010375328c) */
/* WARNING: Removing unreachable block (ram,0x000103753498) */
/* WARNING: Removing unreachable block (ram,0x0001037532cc) */
/* WARNING: Removing unreachable block (ram,0x0001037531e8) */
/* WARNING: Removing unreachable block (ram,0x0001037531d8) */
/* WARNING: Removing unreachable block (ram,0x000103753198) */
/* WARNING: Removing unreachable block (ram,0x000103753058) */
/* WARNING: Removing unreachable block (ram,0x000103752fe8) */
/* WARNING: Removing unreachable block (ram,0x0001037530a8) */
/* WARNING: Removing unreachable block (ram,0x000103753000) */
/* WARNING: Removing unreachable block (ram,0x0001037530fc) */
/* WARNING: Removing unreachable block (ram,0x000103753104) */
/* WARNING: Removing unreachable block (ram,0x000103753040) */
/* WARNING: Removing unreachable block (ram,0x000103752f0c) */
/* WARNING: Removing unreachable block (ram,0x000103752f1c) */
/* WARNING: Removing unreachable block (ram,0x000103752f28) */
/* WARNING: Removing unreachable block (ram,0x000103752f30) */
/* WARNING: Removing unreachable block (ram,0x000103752f38) */
/* WARNING: Removing unreachable block (ram,0x000103752fc8) */
/* WARNING: Removing unreachable block (ram,0x000103752fd4) */
/* WARNING: Removing unreachable block (ram,0x000103752f44) */
/* WARNING: Removing unreachable block (ram,0x000103752f50) */
/* WARNING: Removing unreachable block (ram,0x000103752f68) */
/* WARNING: Removing unreachable block (ram,0x000103752fa4) */
/* WARNING: Removing unreachable block (ram,0x000103752f80) */
/* WARNING: Removing unreachable block (ram,0x000103753088) */
/* WARNING: Removing unreachable block (ram,0x0001037530a0) */
/* WARNING: Removing unreachable block (ram,0x000103753458) */
/* WARNING: Removing unreachable block (ram,0x000103753538) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103752db0(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long alStack_130 [4];
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112f90040);
  if ((lVar7 == 0) || (lVar5 = *(long *)(unaff_x20 + _DAT_112f90048), lVar5 == 0)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    func_0x000107c60e78();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f8fff8);
    func_0x000107c6157c(uVar3);
    func_0x0001000c74f0(alStack_130);
    func_0x000107c61574(uVar3);
    lVar7 = alStack_130[0];
    func_0x000107c61174(alStack_130[0]);
    lVar4 = param_1;
    func_0x000107c61174(param_1);
    if ((alStack_130[0] != param_1) && (param_1 != 0)) {
      func_0x000107c49cec(lVar7);
    }
  }
  else {
    lVar4 = *(long *)(lVar7 + _DAT_112f90290);
    if (lVar4 == 0) {
      func_0x000107c61174(lVar7);
      func_0x000107c61174(lVar5);
      FUN_103753558(0);
      lVar4 = lVar7;
    }
    else {
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar2 = lVar4;
      func_0x000107c445a0();
      lVar5 = _DAT_112f90280;
      if (lVar2 != 0) {
        uVar8 = *(ulong *)(*(long *)(lVar7 + _DAT_112f90280) + _DAT_113036748);
        uVar6 = uVar8 & 0xffffffffffffff8;
        if (uVar8 >> 0x3e == 0) {
          uVar9 = *(ulong *)(uVar6 + 0x10);
        }
        else {
          uVar9 = uVar6;
          if (0x7fffffffffffffff < uVar8) {
            uVar9 = uVar8;
          }
          func_0x000107c60480();
        }
        func_0x000107c61434(uVar8);
        if (uVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8);
          return;
        }
        if ((uVar8 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103753540);
            (*pcVar1)();
          }
          uVar3 = *(undefined8 *)(uVar8 + 0x20);
          func_0x000107c61174(uVar3);
        }
        else {
          uVar3 = 0;
          FUN_1036c8bb0(0,uVar8);
        }
        lVar4 = *(long *)(*(long *)(lVar7 + lVar5) + _DAT_113036750);
        func_0x000107c61174(lVar4);
        func_0x000106c6bca0(uVar3,lVar4);
        func_0x000107c61180();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 103753558; end: 10375383f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103753558(char *param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  long unaff_x20;
  undefined8 uVar6;
  char *apcStack_60 [2];
  char *pcStack_50;
  
  lVar1 = _DAT_112f8fff8;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f8fff8);
  func_0x000107c6157c(uVar6);
  func_0x0001000c74f0(apcStack_60);
  func_0x000107c61574(uVar6);
  pcVar2 = apcStack_60[0];
  func_0x000107c61174();
  pcVar3 = param_1;
  func_0x000107c61174();
  if (apcStack_60[0] == param_1) {
    func_0x000107c61170(pcVar3);
    func_0x000107c61170(pcVar2);
    pcVar3 = pcVar2;
  }
  else {
    if (param_1 == (char *)0x0) {
      func_0x000107c61170(pcVar3);
      func_0x000107c61170(pcVar2);
      func_0x000107c61170(pcVar2);
    }
    else {
      pcVar4 = pcVar2;
      func_0x000107c49cec();
      func_0x000107c61170(pcVar3);
      func_0x000107c61170(pcVar2);
      func_0x000107c61170(pcVar2);
      if (((ulong)pcVar4 & 1) != 0) {
        return;
      }
    }
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    pcStack_50 = param_1;
    func_0x000107c6157c(uVar6);
    ppcVar5 = apcStack_60;
    func_0x000100075034(FUN_103753ae8,ppcVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar6);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f90000);
    if (param_1 == (char *)0x0) {
      FUN_103753b2c(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
      pcVar3 = "";
      func_0x000107c60124("",0,2);
    }
    else {
      func_0x000107c3f33c();
      func_0x000107c61180();
      if (pcVar3 == (char *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(ppcVar5);
      }
    }
    func_0x000107c4d664(uVar6);
  }
  func_0x000107c61170(pcVar3);
  return;
}



/* Entry: 103753840; end: 10375389b;  */

void FUN_103753840(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103753558(param_3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10375389c; end: 10375392b;  */

void FUN_10375389c(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  long alStack_50 [4];
  
  if (param_1 == 0) {
    alStack_50[0] = 0;
    uVar1 = 0;
    alStack_50[1] = 0;
    alStack_50[2] = 0;
  }
  else {
    uVar1 = 0;
    FUN_103753b2c(0,0x112f90080,&PTR_PTR_1126ad690);
    alStack_50[0] = param_1;
  }
  alStack_50[3] = uVar1;
  func_0x000107c61174(param_1);
  (*param_3)(alStack_50,param_2);
  func_0x00010006e7f4(alStack_50);
  return;
}



/* Entry: 10375392c; end: 1037539a3;  */

/* WARNING: Possible PIC construction at 0x000103753988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010375398c) */

void FUN_10375392c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1037539a4; end: 103753a03; -[_TtC32SCPlusSyncServicesImplementation22PlusSyncFSTServiceImpl init] */

void FUN_1037539a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusSyncServicesImplementation.PlusSyncFSTServiceImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037539d0);
  (*pcVar1)();
}



/* Entry: 103753a04; end: 103753acb; -[_TtC32SCPlusSyncServicesImplementation22PlusSyncFSTServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103753a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103753a24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103753a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f90010));
  return;
}



/* Entry: 103753acc; end: 103753ae7;  */

void FUN_103753acc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100672b50(param_1,&puStack_70);
  if (puStack_58 == (undefined *)0x0) {
    func_0x00010006e7f4(&puStack_70);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_103753b2c(0,0x112f90080,&PTR_PTR_1126ad690);
    puVar4 = &uStack_78;
    func_0x000107c6147c(puVar4,&puStack_70,PTR___sypN_11034f1a8 + 8,uVar3,6);
    uVar3 = uStack_78;
    if ((int)puVar4 == 0) {
      uVar3 = 0;
    }
  }
  puVar5 = &UNK_11068e640;
  func_0x000107c613fc(&UNK_11068e640,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar3;
  uStack_50 = 0x103753adc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11068e658;
  ppuVar6 = &puStack_70;
  puStack_48 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_48;
  func_0x000107c614b0(param_2);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 103753ae8; end: 103753b2b;  */

void FUN_103753ae8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 103753b2c; end: 103753b6b;  */

void FUN_103753b2c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103753b6c; end: 103753b7f;  */

void FUN_103753b6c(long param_1,long param_2)

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



/* Entry: 103753b80; end: 103753cb3;  */

undefined8 FUN_103753b80(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fe14(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  uStack_68 = uVar7;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      func_0x000107c61434(uVar3);
      func_0x000100403b00(auStack_78,uVar7,uVar3);
      func_0x000107c6142c(uStack_70);
      lVar9 = lVar1;
    }
    bVar6 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      FUN_10375a470(param_1,puVar8,~uVar10,lVar9,0);
      return uStack_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x103753cb4);
  (*pcVar5)();
}



/* Entry: 103753cb4; end: 103753eff;  */

undefined * FUN_103753cb4(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_178 [280];
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    func_0x00010375c50c(0,lVar13,0);
    uVar1 = param_1 + 0x40;
    uVar5 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar14 = 0;
    do {
      if (uVar5 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103753ef0);
        (*pcVar4)();
      }
      uVar10 = uVar5 >> 6;
      uVar11 = 1L << (uVar5 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar10 * 8) & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103753ef4);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar5 * 8);
      func_0x000107c61174(uVar6);
      func_0x000103f73eb0(auStack_178);
      func_0x000107c61170(uVar6);
      uVar9 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar9) {
        func_0x00010375c50c(1 < *(ulong *)(puVar3 + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar9 + 1;
      func_0x000107c610b4(puVar3 + uVar9 * 0x110 + 0x20,auStack_178,0x110);
      uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar9 <= uVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103753ef8);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(uVar1 + uVar10 * 8);
      if ((uVar7 & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103753efc);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103753f00);
        (*pcVar4)();
      }
      uVar7 = uVar7 & -2L << (uVar5 & 0x3f);
      if (uVar7 == 0) {
        lVar12 = uVar10 << 6;
        puVar8 = (ulong *)(param_1 + 0x48 + uVar10 * 8);
        do {
          uVar10 = uVar10 + 1;
          if (uVar9 + 0x3f >> 6 <= uVar10) {
            FUN_10375ae94(uVar5,iVar2,0);
            goto LAB_103753d60;
          }
          uVar11 = *puVar8;
          lVar12 = lVar12 + 0x40;
          puVar8 = puVar8 + 1;
        } while (uVar11 == 0);
        FUN_10375ae94(uVar5,iVar2,0);
        uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) + lVar12;
      }
      else {
        uVar10 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
LAB_103753d60:
      lVar14 = lVar14 + 1;
      uVar5 = uVar9;
    } while (lVar14 != lVar13);
  }
  return puVar3;
}



/* Entry: 103753f00; end: 103753f5f; -[_TtC32SCPlusSyncServicesImplementation21PlusSyncRefreshResult init] */

void FUN_103753f00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusSyncServicesImplementation.PlusSyncRefreshResult",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103753f2c);
  (*pcVar1)();
}



/* Entry: 103753f60; end: 103753f6f; -[_TtC32SCPlusSyncServicesImplementation21PlusSyncRefreshResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103753f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f900d8));
  return;
}



/* Entry: 103753f70; end: 103753f7f; -[_TtC32SCPlusSyncServicesImplementation19PlusSyncServiceImpl internalSyncStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103753f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f90088));
  return;
}



/* Entry: 103753f80; end: 103754203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103753f80(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar7 = &uStack_110;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f90090);
  func_0x000107c6157c(uVar8);
  func_0x0001000c74f0(&lStack_98);
  func_0x000107c61574(uVar8);
  lVar1 = lStack_98;
  if (lStack_98 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f90098);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f900a0);
    lVar3 = *(long *)(unaff_x20 + _DAT_112f900a8);
    func_0x000107c5c360();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar4;
      func_0x000107c41050(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
    }
    func_0x0001000d224c(&lStack_98);
    lVar4 = lStack_98;
    func_0x000107c5bf08(lStack_98);
    func_0x000107c615e8(lStack_98);
    FUN_103758e98(&lStack_e0,uVar8,uVar11,lVar3,lVar4);
    func_0x000107c61170(lVar3);
    if (lStack_d8 != 0) {
      lStack_98 = lStack_e0;
      lStack_90 = lStack_d8;
      uStack_80 = uStack_c8;
      uStack_88 = uStack_d0;
      uStack_70 = uStack_b8;
      uStack_78 = uStack_c0;
      uStack_60 = uStack_a8;
      uStack_68 = uStack_b0;
      uStack_58 = uStack_a0;
      plVar5 = &lStack_98;
      func_0x000103759edc(plVar5,lVar1);
      lVar3 = *(long *)((long)plVar5 + _DAT_112f90280);
      func_0x000107c61174();
      func_0x000107c61170(plVar5);
      func_0x0001000d224c(&uStack_e8);
      lVar9 = *(long *)(lVar3 + _DAT_113036748);
      lVar4 = lVar9;
      func_0x000107c61434();
      func_0x00010375a20c();
      func_0x000107c6142c(lVar9);
      puVar10 = *(undefined **)(lVar4 + 0x10);
      if (puVar10 == (undefined *)0x0) {
        func_0x000107c6142c(lVar4);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar6 = puVar10;
        func_0x00010109b448(puVar10,0);
        FUN_103758a6c(&uStack_110,puVar6 + 0x20,puVar10,lVar4);
        FUN_10375a470(uStack_110,uStack_108,uStack_100,uStack_f8,uStack_f0);
        if (puVar7 != (undefined8 *)puVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10375416c);
          (*pcVar2)();
        }
      }
      puVar10 = puVar6;
      func_0x000107c5fc48(puVar6,PTR___sSSN_11034da80);
      func_0x000107c61574(puVar6);
      func_0x000107c4ed9c(uStack_e8);
      FUN_10375a4bc(&lStack_e0,0x112f900b8,&UNK_10dc08228);
      func_0x000107c615e8(uStack_e8);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar1);
      return lVar3;
    }
    func_0x000107c61170(lVar1);
  }
  return 0;
}



/* Entry: 103754204; end: 103754237; -[_TtC32SCPlusSyncServicesImplementation19PlusSyncServiceImpl fetchCachedSyncState] */

void FUN_103754204(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103753f80();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103754238; end: 10375435f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103754238(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f90098);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f900a0);
  lVar1 = *(long *)(unaff_x20 + _DAT_112f900a8);
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c41050(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  func_0x0001000d224c(&uStack_90);
  uVar3 = uStack_90;
  func_0x000107c5bf08(uStack_90);
  func_0x000107c615e8(uStack_90);
  FUN_103758e98(auStack_88,uVar4,uVar5,lVar1,uVar3);
  func_0x000107c61170(lVar1);
  if (lStack_80 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uStack_48;
    FUN_10375946c(uStack_48);
    FUN_10375a4bc(auStack_88,0x112f900b8,&UNK_10dc08228);
  }
  return uVar4;
}



/* Entry: 103754360; end: 103754393; -[_TtC32SCPlusSyncServicesImplementation19PlusSyncServiceImpl fetchCachedProfileConfig] */

void FUN_103754360(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103754238();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103754394; end: 103754647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103754394(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar7 = &lStack_110;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f90098);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f900a0);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f900a8);
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar8 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar8 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar8;
    func_0x000107c41050(lVar8);
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
  }
  func_0x0001000d224c(&uStack_98);
  uVar3 = uStack_98;
  func_0x000107c5bf08(uStack_98);
  func_0x000107c615e8(uStack_98);
  FUN_103758e98(&uStack_e0,uVar9,uVar10,lVar2,uVar3);
  func_0x000107c61170(lVar2);
  if (lStack_d8 == 0) {
    lVar8 = 0;
  }
  else {
    uStack_98 = uStack_e0;
    lStack_90 = lStack_d8;
    uStack_80 = uStack_c8;
    uStack_88 = uStack_d0;
    uStack_70 = uStack_b8;
    uStack_78 = uStack_c0;
    uStack_60 = uStack_a8;
    uStack_68 = uStack_b0;
    uStack_58 = uStack_a0;
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f90090);
    func_0x000107c6157c(uVar9);
    func_0x0001000c74f0(&lStack_110);
    func_0x000107c61574(uVar9);
    lVar2 = lStack_110;
    if (lStack_110 == 0) {
      func_0x000103fdcad8(0);
      func_0x000107c610f8();
      lVar2 = 0;
      func_0x000103fdc9dc(0);
    }
    puVar4 = &uStack_98;
    func_0x000103759edc(puVar4,lVar2);
    lVar5 = *(long *)((long)puVar4 + _DAT_112f90280);
    func_0x000107c61174();
    func_0x000107c61170(puVar4);
    func_0x0001000d224c(&uStack_e8);
    lVar11 = *(long *)(lVar5 + _DAT_113036748);
    lVar8 = lVar11;
    func_0x000107c61434();
    func_0x00010375a20c();
    func_0x000107c6142c(lVar11);
    puVar12 = *(undefined **)(lVar8 + 0x10);
    if (puVar12 == (undefined *)0x0) {
      func_0x000107c6142c(lVar8);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar6 = puVar12;
      func_0x00010109b448(puVar12,0);
      FUN_103758a6c(&lStack_110,puVar6 + 0x20,puVar12,lVar8);
      FUN_10375a470(lStack_110,uStack_108,uStack_100,uStack_f8,uStack_f0);
      if (plVar7 != (long *)puVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037545a0);
        (*pcVar1)();
      }
    }
    puVar12 = puVar6;
    func_0x000107c5fc48(puVar6,PTR___sSSN_11034da80);
    func_0x000107c61574(puVar6);
    func_0x000107c4ed9c(uStack_e8);
    func_0x000107c615e8(uStack_e8);
    func_0x000107c61170(puVar12);
    lVar8 = lVar5;
    FUN_1037548c8(lVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar5);
    FUN_10375a4bc(&uStack_e0,0x112f900b8,&UNK_10dc08228);
  }
  return lVar8;
}



/* Entry: 103754648; end: 10375467b; -[_TtC32SCPlusSyncServicesImplementation19PlusSyncServiceImpl fetchCachedUpsellInfo] */

void FUN_103754648(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103754394();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10375467c; end: 103754693;  */

undefined8 FUN_10375467c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uVar1 = 0;
  FUN_1037550b4(0,param_1);
  uStack_40 = 0x10375afe4;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103754694;
  puStack_48 = &UNK_11068e680;
  func_0x000107c60bc4(&puStack_60);
  uVar3 = uVar1;
  func_0x000107c4c280(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar1);
  return uVar3;
}



/* Entry: 103754694; end: 103754717;  */

void FUN_103754694(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103754718; end: 103754747; -[_TtC32SCPlusSyncServicesImplementation19PlusSyncServiceImpl fetchSyncStateFromRequestor:] */

void FUN_103754718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c61174();
  uVar1 = 0;
  FUN_1037550b4(0,param_3);
  uStack_50 = 0x10375afe4;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103754694;
  puStack_58 = &UNK_11068e770;
  func_0x000107c60bc4(&puStack_70);
  uVar3 = uVar1;
  func_0x000107c4c280(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103754748; end: 1037547eb;  */

undefined8
FUN_103754748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  FUN_1037550b4(param_2,param_1);
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103754694;
  uStack_48 = param_4;
  uStack_40 = param_3;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = param_2;
  func_0x000107c4c280(param_2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_2);
  return uVar2;
}



/* Entry: 1037547ec; end: 103754803; -[_TtC32SCPlusSyncServicesImplementation19PlusSyncServiceImpl fetchSyncStateFromNetworkFromRequestor:] */

void FUN_1037547ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c61174();
  uVar1 = 1;
  FUN_1037550b4(1,param_3);
  uStack_50 = 0x10375afe8;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103754694;
  puStack_58 = &UNK_11068e748;
  func_0x000107c60bc4(&puStack_70);
  uVar3 = uVar1;
  func_0x000107c4c280(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103754804; end: 1037548c7;  */

void FUN_103754804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  func_0x000107c61174();
  FUN_1037550b4(param_4,param_3);
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103754694;
  uStack_58 = param_6;
  uStack_50 = param_5;
  func_0x000107c60bc4(&puStack_70);
  uVar2 = param_4;
  func_0x000107c4c280(param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037548c8; end: 103754e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1037548c8(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint uVar16;
  long unaff_x20;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000103f7bef4();
  func_0x000107c610f8();
  puVar4 = (undefined *)0x0;
  func_0x000103f7bdf8();
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112f900a8);
  func_0x000107c5c360();
  func_0x000107c61180();
  puVar13 = puVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar13 == (undefined *)0x0) goto LAB_103754d58;
  puVar6 = puVar13;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  puVar5 = puVar13;
  if (puVar6 == (undefined *)0x0) goto LAB_103754d58;
  func_0x0001000d224c(&puStack_70);
  puVar5 = puStack_70;
  puVar13 = puStack_70;
  func_0x000107c3e524();
  func_0x000107c615e8(puVar5);
  func_0x000106c6c5fc();
  puVar7 = puVar6;
  func_0x000106c6a5fc();
  func_0x000107c61180();
  puVar5 = puVar6;
  if (puVar7 != (undefined *)0x0) {
    uVar20 = *(ulong *)(param_1 + _DAT_113036748);
    uVar18 = uVar20 & 0xffffffffffffff8;
    if (uVar20 >> 0x3e == 0) {
      uVar21 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar21 = uVar18;
      if (0x7fffffffffffffff < uVar20) {
        uVar21 = uVar20;
      }
      func_0x000107c60480();
    }
    uVar17 = *(undefined8 *)(param_1 + _DAT_113036750);
    uVar19 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (uVar21 != uVar19) {
      if ((uVar20 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar18 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103754df4);
          (*pcVar3)();
        }
        uVar8 = *(ulong *)(uVar20 + uVar19 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar19;
        FUN_1036c8bb0(uVar19,uVar20);
      }
      uVar1 = uVar19 + 1;
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103754df0);
        (*pcVar3)();
      }
      uVar9 = uVar8;
      func_0x000106c6bca0(uVar8,uVar17);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      uVar19 = uVar19 + 1;
      if (uVar9 != 0) {
        puVar11 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar11 == 0) || ((long)puVar5 < 0)) ||
           (puVar11 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar10 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar10 = puVar5;
            }
            func_0x000107c60480(puVar10);
          }
          puVar11 = (undefined *)0x0;
          FUN_1037580a4(0,puVar10 + 1,1,puVar5,FUN_10375bde8,FUN_1037584c8);
        }
        uVar8 = (ulong)puVar11 & 0xffffffffffffff8;
        uVar19 = *(ulong *)(uVar8 + 0x10);
        puVar5 = puVar11;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar19) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_1037580a4(puVar5,uVar19 + 1,1,puVar11,FUN_10375bde8,FUN_1037584c8);
          uVar8 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar19 + 1;
        *(ulong *)(uVar8 + uVar19 * 8 + 0x20) = uVar9;
        uVar19 = uVar1;
      }
    }
    uVar17 = *(undefined8 *)(param_1 + _DAT_113036758);
    uVar2 = ((undefined8 *)(param_1 + _DAT_113036758))[1];
    puVar11 = PTR_PTR_1126ad698;
    func_0x000107c610f8();
    uVar12 = 0;
    func_0x00010375af34(0,0x112f8ffc8,&PTR_PTR_1126d1d40);
    func_0x000107c61174(puVar7);
    puVar10 = puVar5;
    func_0x000107c5fc48(puVar5,uVar12);
    func_0x000107c6142c(puVar5);
    func_0x000107c5ee20(uVar17,uVar2);
    param_3 = (undefined *)((ulong)puVar13 & 0xffffffff);
    func_0x000107c458b8(puVar11);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar17);
    puVar5 = *(undefined **)(unaff_x20 + _DAT_112f900c0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      puVar13 = puVar5;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(puVar5);
      if (puVar13 != (undefined *)0x0) {
        puVar10 = puVar13;
        func_0x000107c4a850();
        func_0x000107c61180();
        func_0x000107c615e8(puVar13);
        if (puVar10 != (undefined *)0x0) {
          puVar13 = (undefined *)0x0;
          func_0x00010375af34(0,0x112f900c8,&PTR_PTR_1126dea60);
          func_0x000107c614e8();
          puStack_70 = (undefined *)0x0;
          param_3 = puVar10;
          func_0x000107c505d0();
          func_0x000107c61180();
          puVar5 = puStack_70;
          if (puVar13 == (undefined *)0x0) {
            puVar13 = puStack_70;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(puVar13);
            func_0x000107c61654();
            func_0x000107c61170(puVar11);
            func_0x000107c615e8(puVar10);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar6);
            func_0x000107c614ac(puVar5);
            goto LAB_103754d58;
          }
          func_0x000107c61174();
          puVar5 = puVar13;
          param_3 = puVar11;
          func_0x000107c50608();
          func_0x000107c61180();
          puVar15 = puVar5;
          func_0x000107c3f450();
          puVar14 = puVar5;
          func_0x000107c3f454();
          func_0x000107c610f8();
          uVar16 = 0x100;
          if ((int)puVar14 == 0) {
            uVar16 = 0;
          }
          puVar15 = (undefined *)(ulong)(uVar16 | (uint)puVar15);
          func_0x000103f7bdf8();
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar11);
          func_0x000107c615e8(puVar10);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar6);
          puVar5 = puVar13;
          puVar4 = puVar15;
          goto LAB_103754d54;
        }
      }
    }
    func_0x000107c610f8();
    puVar13 = (undefined *)0x0;
    func_0x000103f7bdf8();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    puVar5 = puVar11;
    puVar4 = puVar13;
  }
LAB_103754d54:
  func_0x000107c61170(puVar5);
LAB_103754d58:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x000107c61174(param_3);
    func_0x000107c61174(puVar5);
    puVar13 = param_3;
    FUN_1037548c8(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  return puVar4;
}



/* Entry: 103754e0c; end: 10375507f; -[_TtC32SCPlusSyncServicesImplementation19PlusSyncServiceImpl upsellInfoForSyncState:] */

void FUN_103754e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1037548c8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103755080; end: 1037550b3; -[_TtC32SCPlusSyncServicesImplementation19PlusSyncServiceImpl invalidateCache] */

void FUN_103755080(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103754e68();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037550b4; end: 1037551f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1037550b4(undefined1 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f900d0);
  puVar3 = &UNK_11068e6e0;
  func_0x000107c613fc(&UNK_11068e6e0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_11068e7a8;
  func_0x000107c613fc(&UNK_11068e7a8,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  puVar4[0x20] = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(long *)(puVar4 + 0x30) = lVar1;
  pcStack_60 = FUN_10375a4fc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11068e7c0;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar5);
  puVar3 = puVar2;
  func_0x000107c43bf4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1037551f4; end: 1037556ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037551f4(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f90130;
  if (param_1 == 0) {
    lVar1 = -0x2fffffffffffffed;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f163560);
    lVar2 = lVar1;
    func_0x000106c7723c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lStack_b8 = lVar2;
    func_0x000107c5ed2c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c3fef8(param_2);
  }
  else if (*(long *)(param_1 + _DAT_112f90130) == 0) {
    lVar3 = *(long *)(param_1 + _DAT_112f900a8);
    func_0x000107c5c360();
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 == 0) {
      lStack_b8 = 0;
    }
    else {
      lStack_b8 = lVar1;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
    }
    uVar12 = *(undefined8 *)(param_1 + _DAT_112f900b0);
    uVar13 = *(undefined8 *)(param_1 + _DAT_112f90118);
    uVar11 = *(undefined8 *)(param_1 + _DAT_112f90098);
    uVar9 = *(undefined8 *)(param_1 + _DAT_112f900a0);
    uVar10 = *(undefined8 *)(param_1 + _DAT_112f900d0);
    uVar8 = *(undefined8 *)(param_1 + _DAT_112f90110);
    func_0x000107c6157c(uVar12);
    func_0x000107c61174(uVar13);
    func_0x000107c615f0(uVar11);
    func_0x000107c61174(uVar9);
    func_0x000107c615f0(uVar10);
    func_0x000107c61174(uVar8);
    uVar4 = uVar12;
    func_0x000103755530(uVar12,uVar13,uVar11,uVar9,uVar10,uVar8,lStack_b8,param_3 & 1,param_4);
    func_0x000107c61574(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(uVar10);
    func_0x000107c61170(uVar8);
    uVar13 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar4;
    func_0x000107c61174(uVar4);
    func_0x000107c61170(uVar13);
    puVar5 = &UNK_11068e6e0;
    func_0x000107c613fc(&UNK_11068e6e0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_1);
    puVar6 = &UNK_11068e7f8;
    func_0x000107c613fc(&UNK_11068e7f8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    pcStack_88 = FUN_10375a544;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x10375afec;
    puStack_90 = &UNK_11068e810;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_80;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c5dc64(uVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar4);
  }
  else {
    func_0x000106c77a8c(*(long *)(param_1 + _DAT_112f90130),param_2,
                        *(undefined8 *)(param_1 + _DAT_112f900d0));
    lStack_b8 = param_1;
  }
  func_0x000107c61170(lStack_b8);
  return;
}



/* Entry: 1037556f0; end: 1037558bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037556f0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  long lStack_60;
  
  if (param_1 == 0) {
    if (param_2 == 0) goto LAB_1037557f8;
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_a0,0,0);
    lVar1 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112f90090);
      lVar2 = param_1;
      func_0x000107c61174();
      func_0x000107c6157c(uVar3);
      func_0x000107c61170(lVar1);
      lStack_60 = lVar2;
      func_0x000100075034(FUN_10375a54c,auStack_70,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar3);
    }
    if (param_2 == 0) {
      func_0x000107c3fefc(param_4);
      goto LAB_1037557f8;
    }
  }
  func_0x000107c614b0(param_2);
  lVar1 = param_2;
  func_0x000107c5ed2c(param_2);
  lVar2 = lVar1;
  func_0x000107c5ed2c();
  func_0x000107c61170(lVar1);
  func_0x000107c3fef8(param_4);
  func_0x000107c61170(lVar2);
  func_0x000107c614ac(param_2);
LAB_1037557f8:
  func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f90130);
    *(undefined8 *)(lVar1 + _DAT_112f90130) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar3);
  }
  if (param_1 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      uVar3 = *(undefined8 *)(param_3 + _DAT_112f90120);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar3);
      func_0x000107c61170(param_3);
      func_0x000107c4d664(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1037558c0; end: 103756de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037558c0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined4 param_13,undefined4 param_14,long param_15)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_1d0 [8];
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lStack_1b8 = param_15;
  uStack_1c0 = param_10;
  uStack_1b0 = param_9;
  lVar1 = 0;
  uStack_1a0 = param_8;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  uStack_1a8 = param_5;
  uStack_198 = param_7;
  if ((param_3 & 1) == 0) {
    func_0x0001000d224c(&puStack_d0);
    puVar2 = puStack_d0;
    func_0x000107c5bf08(puStack_d0);
    func_0x000107c615e8(puStack_d0);
    FUN_103758e98(&puStack_160,param_4,param_5,param_6,puVar2);
    if (lStack_158 != 0) {
      puStack_118 = puStack_160;
      lStack_110 = lStack_158;
      puStack_100 = puStack_148;
      puStack_108 = puStack_150;
      puStack_f0 = puStack_138;
      uStack_f8 = uStack_140;
      uStack_e0 = uStack_128;
      uStack_e8 = uStack_130;
      uStack_d8 = uStack_120;
      if (param_1 != 0) {
        FUN_10375aeb0(&puStack_160,&puStack_d0,0x112f900b8,&UNK_10dc08228);
        func_0x000107c61174();
        ppuVar3 = &puStack_118;
        func_0x000103759edc(ppuVar3,param_1);
        uVar4 = uStack_d8;
        FUN_10375a600();
        uVar12 = *(undefined8 *)(*(long *)((long)ppuVar3 + _DAT_112f90280) + _DAT_113036748);
        uVar5 = uVar12;
        func_0x000107c61434(uVar12);
        func_0x00010375a20c();
        func_0x000107c6142c(uVar12);
        func_0x0001000d224c(&puStack_190);
        uVar6 = 0;
        func_0x000103f7b3a4(0);
        uVar12 = uVar5;
        func_0x000107c5f9dc(uVar5,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(uVar5);
        puVar7 = puStack_190;
        func_0x000107c43258(puStack_190);
        func_0x000107c61180();
        func_0x000107c615e8(puStack_190);
        func_0x000107c61170(uVar12);
        puVar2 = &UNK_11068e938;
        func_0x000107c613fc(&UNK_11068e938,0x30,7);
        *(undefined ***)(puVar2 + 0x10) = ppuVar3;
        *(long *)(puVar2 + 0x18) = lStack_1b8;
        *(undefined8 *)(puVar2 + 0x20) = uVar4;
        *(long *)(puVar2 + 0x28) = param_1;
        puVar9 = &UNK_11068e960;
        func_0x000107c613fc(&UNK_11068e960,0x20,7);
        *(code **)(puVar9 + 0x10) = FUN_10375a86c;
        *(undefined **)(puVar9 + 0x18) = puVar2;
        puVar10 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x10375a878;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        lStack_c8 = 0x42000000;
        puStack_c0 = &UNK_101ce99e0;
        puStack_b8 = &UNK_11068e978;
        ppuVar8 = &puStack_d0;
        puStack_a8 = puVar9;
        func_0x000107c60bc4(ppuVar8);
        puVar2 = puStack_a8;
        func_0x000107c61174();
        lStack_1b8 = param_1;
        func_0x000107c61174();
        ppuStack_1c8 = ppuVar3;
        func_0x000107c61434(uVar4);
        func_0x000107c61574(puVar2);
        puVar9 = puVar7;
        func_0x000107c4c280(puVar7);
        func_0x000107c61180();
        func_0x000107c6142c(uVar4);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(puVar7);
        puVar2 = &UNK_11068e9b0;
        func_0x000107c613fc(&UNK_11068e9b0,0x80,7);
        uVar12 = uStack_198;
        uVar5 = uStack_1a0;
        uVar4 = uStack_1a8;
        *(undefined8 *)(puVar2 + 0x10) = uStack_1a0;
        *(undefined8 *)(puVar2 + 0x18) = param_6;
        *(undefined8 *)(puVar2 + 0x20) = uStack_1b0;
        *(undefined8 *)(puVar2 + 0x28) = uStack_198;
        *(undefined **)(puVar2 + 0x58) = puStack_f0;
        *(undefined8 *)(puVar2 + 0x50) = uStack_f8;
        *(undefined8 *)(puVar2 + 0x68) = uStack_e0;
        *(undefined8 *)(puVar2 + 0x60) = uStack_e8;
        *(long *)(puVar2 + 0x38) = lStack_110;
        *(undefined **)(puVar2 + 0x30) = puStack_118;
        *(undefined **)(puVar2 + 0x48) = puStack_100;
        *(undefined **)(puVar2 + 0x40) = puStack_108;
        *(undefined8 *)(puVar2 + 0x70) = uStack_d8;
        *(undefined8 *)(puVar2 + 0x78) = uStack_1a8;
        pcStack_170 = (code *)0x10375a880;
        puStack_190 = puVar10;
        uStack_188 = 0x42000000;
        uStack_180 = 0x10375aff0;
        puStack_178 = &UNK_11068e9c8;
        ppuVar3 = &puStack_190;
        puStack_168 = puVar2;
        func_0x000107c60bc4(ppuVar3);
        puVar2 = puStack_168;
        FUN_10375aeb0(&puStack_160,&puStack_d0,0x112f900b8,&UNK_10dc08228);
        func_0x000107c61174(param_6);
        func_0x000107c6157c(uVar12);
        func_0x000107c61174(uVar4);
        func_0x000107c61174(uVar5);
        func_0x000107c61574(puVar2);
        func_0x000107c5dc64(puVar9);
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61170(lStack_1b8);
        func_0x000107c61170(ppuStack_1c8);
        func_0x000107c61170(puVar9);
        FUN_10375a4bc(&puStack_160,0x112f900b8,&UNK_10dc08228);
        ppuVar3 = &puStack_160;
        goto LAB_103755f58;
      }
    }
    puStack_a8 = puStack_138;
    uStack_b0 = uStack_140;
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    uStack_90 = uStack_120;
    lStack_c8 = lStack_158;
    puStack_d0 = puStack_160;
    puStack_b8 = puStack_148;
    puStack_c0 = puStack_150;
  }
  else {
    uStack_90 = 0;
    puStack_a8 = (undefined *)0x0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_c8 = 0;
    puStack_d0 = (undefined *)0x0;
    puStack_b8 = (undefined *)0x0;
    puStack_c0 = (undefined *)0x0;
  }
  uVar4 = uStack_1c0;
  puVar2 = puStack_c0;
  func_0x000107c5eea0(auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar13 + 8))(auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar9 = *(undefined **)(param_12 + _DAT_113042550);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
    puVar10 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar9 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c451b0(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
  }
  else {
    puVar10 = puVar9;
    func_0x000107c4ab00();
    func_0x000107c61180();
    func_0x000107c615e8(puVar9);
  }
  puVar7 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c61174(puVar10);
  func_0x000107c453e4();
  puVar9 = &UNK_11068e898;
  func_0x000107c613fc(&UNK_11068e898,0x28,7);
  *(long *)(puVar9 + 0x10) = param_1;
  *(undefined **)(puVar9 + 0x18) = puVar7;
  *(undefined8 *)(puVar9 + 0x20) = param_11;
  pcStack_170 = FUN_10375a5e8;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0x42000000;
  uStack_180 = 0x10375affc;
  puStack_178 = &UNK_11068e8b0;
  ppuVar3 = &puStack_190;
  puStack_168 = puVar9;
  func_0x000107c60bc4(ppuVar3);
  puVar9 = puStack_168;
  lVar1 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(param_11);
  func_0x000107c61574(puVar9);
  func_0x000107c5dc64(puVar10);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar10);
  puVar11 = puVar7;
  func_0x000107c43bf4(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar10);
  puVar9 = &UNK_11068e8e8;
  func_0x000107c613fc(&UNK_11068e8e8,0x58,7);
  uVar6 = uStack_198;
  uVar12 = uStack_1a0;
  uVar5 = uStack_1a8;
  *(undefined8 *)(puVar9 + 0x10) = uStack_1a0;
  *(long *)(puVar9 + 0x18) = param_1;
  *(undefined8 *)(puVar9 + 0x20) = uStack_198;
  *(undefined8 *)(puVar9 + 0x28) = param_6;
  *(undefined8 *)(puVar9 + 0x30) = uStack_1b0;
  *(undefined **)(puVar9 + 0x38) = puVar2;
  *(undefined8 *)(puVar9 + 0x40) = uStack_1a8;
  *(undefined8 *)(puVar9 + 0x48) = uVar4;
  *(long *)(puVar9 + 0x50) = lStack_1b8;
  pcStack_170 = (code *)0x10375a5f4;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0x42000000;
  uStack_180 = 0x10375aff4;
  puStack_178 = &UNK_11068e900;
  ppuVar3 = &puStack_190;
  puStack_168 = puVar9;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_168;
  func_0x000107c61174(param_6);
  func_0x000107c6157c(uVar6);
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar4);
  func_0x000107c61174(lVar1);
  func_0x000107c61174(uVar12);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc64(puVar11);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar11);
  ppuVar3 = &puStack_d0;
LAB_103755f58:
  FUN_10375a4bc(ppuVar3,0x112f900b8,&UNK_10dc08228);
  return;
}



/* Entry: 103756de4; end: 103757587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103756de4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long *plVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_440;
  long lStack_438;
  undefined *puStack_408;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined1 auStack_3d0 [88];
  undefined *puStack_378;
  undefined1 uStack_370;
  undefined1 uStack_36f;
  undefined6 uStack_36e;
  undefined8 uStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [288];
  
  uStack_1a0 = 0;
  uVar7 = 0;
  func_0x000103f79ac8(0);
  func_0x000107c5f9e4(param_1,&uStack_1a0,PTR___sSSN_11034da80,uVar7,PTR___sSSSHsWP_11034da90);
  uVar22 = uStack_1a0;
  if (uStack_1a0 == 0) {
    FUN_10375a49c();
    lVar18 = param_1;
    func_0x000107c610f8();
    *(long *)(lVar18 + _DAT_112f900d8) = param_2;
    *(undefined1 *)(lVar18 + _DAT_112f900e0) = 0;
    puVar12 = PTR_s_init_1125d9248;
    lStack_210 = lVar18;
    lStack_208 = param_1;
    func_0x000107c61174(param_2);
    func_0x000107c61154(&lStack_210,puVar12);
  }
  else {
    uVar25 = uStack_1a0;
    func_0x000107c61434();
    FUN_103753b80();
    uVar8 = uVar25;
    func_0x000101117e30();
    func_0x000107c6142c(uVar25);
    lVar18 = *(long *)(param_2 + _DAT_112f90280);
    uVar25 = *(ulong *)(lVar18 + _DAT_113036748);
    uVar26 = uVar25 & 0xffffffffffffff8;
    if (uVar25 >> 0x3e == 0) {
      uVar23 = *(ulong *)(uVar26 + 0x10);
    }
    else {
      uVar23 = uVar26;
      if (0x7fffffffffffffff < uVar25) {
        uVar23 = uVar25;
      }
      func_0x000107c60480();
    }
    lVar17 = _DAT_113042768;
    func_0x000107c61434(uVar25);
    if (uVar23 == 0) {
      puStack_408 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_408 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar19 = 0;
LAB_103756ef4:
      do {
        if ((uVar25 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar26 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103757574);
            (*pcVar6)();
          }
          uVar9 = *(ulong *)(uVar25 + uVar19 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar9 = uVar19;
          FUN_1036c8bb0(uVar19,uVar25);
        }
        if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103757570);
          (*pcVar6)();
        }
        uVar21 = uVar19 + 1;
        if (*(long *)(uVar22 + 0x10) == 0) {
          func_0x000107c61170();
        }
        else {
          plVar14 = (long *)(*(long *)(uVar9 + _DAT_1130367b0) + _DAT_1130368c8);
          lVar10 = *plVar14;
          uVar2 = plVar14[1];
          func_0x000107c61434(uVar22);
          func_0x000107c61434(uVar2);
          uVar16 = uVar2;
          func_0x000100029284();
          if ((uVar16 & 1) == 0) {
            func_0x000107c61170(uVar9);
            func_0x000107c6142c(uVar2);
            func_0x000107c6142c(uVar22);
          }
          else {
            lVar10 = *(long *)(*(long *)(uVar22 + 0x38) + lVar10 * 8);
            func_0x000107c61174();
            func_0x000107c6142c(uVar22);
            func_0x000107c6142c(uVar2);
            uVar16 = *(ulong *)(uVar9 + _DAT_1130367a0);
            uVar3 = ((ulong *)(uVar9 + _DAT_1130367a0))[1];
            uVar2 = uVar16 & 0xffffffffffff;
            if ((uVar3 & 0x2000000000000000) != 0) {
              uVar2 = uVar3 >> 0x38 & 0xf;
            }
            if (uVar2 != 0) {
              if ((*(byte *)(param_5 + lVar17) & 1) == 0) {
                uStack_440 = 0;
                lStack_438 = 0;
                uVar7 = 0;
              }
              else {
                if (((undefined8 *)(uVar9 + _DAT_1130367a8))[1] == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = *(undefined8 *)(uVar9 + _DAT_1130367a8);
                  func_0x000107c5fadc(uVar7);
                }
                lStack_438 = lVar10;
                func_0x000106c6ac4c(lVar10,uVar7);
                func_0x000107c61180();
                func_0x000107c61170(uVar7);
                if (lStack_438 == 0) {
                  uStack_440 = 0;
                  lStack_438 = 0;
                  uVar7 = 0;
                }
                else {
                  uStack_440 = *(undefined8 *)(lStack_438 + _DAT_1130369b0);
                  uVar7 = ((undefined8 *)(lStack_438 + _DAT_1130369b0))[1];
                  func_0x000107c61434(uVar7);
                }
              }
              func_0x000103f73eb0(auStack_180);
              uStack_190 = uStack_440;
              uStack_1a0 = uVar16;
              uStack_198 = uVar3;
              uStack_188 = uVar7;
              func_0x000103f76008(0);
              func_0x000107c610f8();
              func_0x000107c61434(uVar3);
              puVar11 = &uStack_1a0;
              func_0x000103f75d84();
              func_0x000107c61170(lStack_438);
              uVar7 = *(undefined8 *)((long)puVar11 + _DAT_1130367a0);
              uVar28 = ((undefined8 *)((long)puVar11 + _DAT_1130367a0))[1];
              uVar4 = *(undefined8 *)((long)puVar11 + _DAT_1130367a8);
              uVar30 = ((undefined8 *)((long)puVar11 + _DAT_1130367a8))[1];
              func_0x000107c61434(uVar30);
              func_0x000107c61434(uVar28);
              func_0x000103f73eb0(&puStack_320);
              func_0x000107c61170(uVar9);
              func_0x000107c61170(puVar11);
              func_0x000107c61170(lVar10);
              puVar12 = puStack_408;
              func_0x000107c61558();
              if (((ulong)puVar12 & 1) == 0) {
                plVar14 = (long *)(puStack_408 + 0x10);
                puStack_408 = (undefined *)0x0;
                FUN_103758324(0,*plVar14 + 1,1);
              }
              uVar19 = *(ulong *)(puStack_408 + 0x10);
              if (*(ulong *)(puStack_408 + 0x18) >> 1 <= uVar19) {
                puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_408 + 0x18));
                FUN_103758324(puVar12,uVar19 + 1,1,puStack_408);
                puStack_408 = puVar12;
              }
              *(ulong *)(puStack_408 + 0x10) = uVar19 + 1;
              *(undefined8 *)(puStack_408 + uVar19 * 0x130 + 0x20) = uVar7;
              *(undefined8 *)(puStack_408 + uVar19 * 0x130 + 0x28) = uVar28;
              *(undefined8 *)(puStack_408 + uVar19 * 0x130 + 0x30) = uVar4;
              *(undefined8 *)(puStack_408 + uVar19 * 0x130 + 0x38) = uVar30;
              func_0x000107c610b4(puStack_408 + uVar19 * 0x130 + 0x40,&puStack_320,0x110);
              uVar19 = uVar21;
              if (uVar21 == uVar23) break;
              goto LAB_103756ef4;
            }
            func_0x000107c61170();
            func_0x000107c61170(lVar10);
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar21 != uVar23);
    }
    func_0x000107c6142c(uVar22);
    func_0x000107c6142c(uVar25);
    uStack_370 = *(undefined1 *)(*(long *)(lVar18 + _DAT_113036750) + _DAT_113042760);
    uStack_36f = *(undefined1 *)(*(long *)(lVar18 + _DAT_113036750) + _DAT_113042768);
    uVar7 = *(undefined8 *)(lVar18 + _DAT_113036758);
    uVar4 = ((undefined8 *)(lVar18 + _DAT_113036758))[1];
    lVar17 = *(long *)(lVar18 + _DAT_113036760);
    if (lVar17 == 0) {
      uVar22 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar30 = 0;
    }
    else {
      uVar27 = *(undefined8 *)(lVar17 + _DAT_113036aa0);
      uVar28 = *(undefined8 *)(lVar17 + _DAT_113036aa8);
      uVar30 = ((undefined8 *)(lVar17 + _DAT_113036aa8))[1];
      uVar22 = 0x100;
      if (*(char *)(lVar17 + _DAT_113036a98) == '\0') {
        uVar22 = 0;
      }
      uVar22 = uVar22 | *(byte *)(lVar17 + _DAT_113036a90);
      func_0x000107c61434(uVar27);
      func_0x00010006c00c(uVar28,uVar30);
    }
    uVar20 = *(undefined8 *)(lVar18 + _DAT_113036770);
    uVar1 = *(undefined8 *)(lVar18 + _DAT_113036768);
    uVar5 = ((undefined8 *)(lVar18 + _DAT_113036768))[1];
    puStack_378 = puStack_408;
    uVar24 = *(undefined8 *)(param_2 + _DAT_112f90288);
    uVar29 = *(undefined8 *)(param_2 + _DAT_112f90290);
    uStack_318 = CONCAT62(uStack_36e,CONCAT11(uStack_36f,uStack_370));
    puStack_320 = puStack_408;
    lVar17 = 0;
    uStack_368 = uVar7;
    uStack_360 = uVar4;
    uStack_358 = uVar22;
    uStack_350 = uVar27;
    uStack_348 = uVar28;
    uStack_340 = uVar30;
    uStack_338 = uVar1;
    uStack_330 = uVar5;
    uStack_328 = uVar20;
    uStack_310 = uVar7;
    uStack_308 = uVar4;
    uStack_300 = uVar22;
    uStack_2f8 = uVar27;
    uStack_2f0 = uVar28;
    uStack_2e8 = uVar30;
    uStack_2e0 = uVar1;
    uStack_2d8 = uVar5;
    uStack_2d0 = uVar20;
    uStack_2c8 = uVar24;
    uStack_2c0 = uVar29;
    FUN_10375dee4();
    lVar18 = lVar17;
    func_0x000107c610f8();
    uStack_1d8 = uStack_350;
    uStack_1e0 = uStack_358;
    uStack_1c8 = uStack_340;
    uStack_1d0 = uStack_348;
    uStack_1b8 = uStack_330;
    uStack_1c0 = uStack_338;
    uStack_1b0 = uStack_328;
    uStack_1f8 = CONCAT62(uStack_36e,CONCAT11(uStack_36f,uStack_370));
    puStack_200 = puStack_378;
    uStack_1e8 = uStack_360;
    uStack_1f0 = uStack_368;
    func_0x000103f75a80(0);
    func_0x000107c610f8();
    func_0x00010006c00c(uVar7,uVar4);
    func_0x00010006c00c(uVar1,uVar5);
    func_0x000107c61434(uVar20);
    func_0x00010374e944(&puStack_378,auStack_3d0);
    func_0x000107c61174(uVar29);
    func_0x000107c61174(uVar24);
    func_0x00010374e944(&puStack_320,auStack_3d0);
    ppuVar13 = &puStack_200;
    func_0x000103f75280();
    uVar7 = uStack_2c0;
    *(undefined ***)(lVar18 + _DAT_112f90280) = ppuVar13;
    *(undefined8 *)(lVar18 + _DAT_112f90288) = uStack_2c8;
    *(undefined8 *)(lVar18 + _DAT_112f90290) = uStack_2c0;
    puVar12 = PTR_s_init_1125d9248;
    lStack_3e0 = lVar18;
    lStack_3d8 = lVar17;
    func_0x000107c61174();
    func_0x000107c61174(uVar7);
    plVar14 = &lStack_3e0;
    func_0x000107c61154(plVar14,puVar12);
    ppuVar13 = &puStack_320;
    func_0x00010375a8c8();
    FUN_10375a49c();
    ppuVar15 = ppuVar13;
    func_0x000107c610f8();
    puVar12 = PTR_s_init_1125d9248;
    *(long **)((long)ppuVar15 + _DAT_112f900d8) = plVar14;
    *(byte *)((long)ppuVar15 + _DAT_112f900e0) = (byte)uVar8 & 1;
    ppuStack_3f0 = ppuVar15;
    ppuStack_3e8 = ppuVar13;
    func_0x000107c61174(plVar14);
    func_0x000107c61154(&ppuStack_3f0,puVar12);
    func_0x00010375a8fc(&puStack_378);
    func_0x000107c61170(plVar14);
  }
  return;
}



/* Entry: 103757588; end: 1037579d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103757588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  puVar3 = PTR_PTR_1126d1e20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c57444();
  func_0x000107c54ff4(puVar3);
  puVar9 = PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
  func_0x000107c61168();
  func_0x000107c415f8();
  func_0x000107c61180();
  puVar4 = puVar9;
  func_0x000107c5bf10();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  if (puVar4 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    param_2 = 0xe000000000000000;
  }
  else {
    puVar8 = puVar4;
    func_0x000107c40860(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar9 = puVar8;
    func_0x000107c5faec(puVar8);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c5fadc(puVar9,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c527d0(puVar3);
  func_0x000107c61170(puVar9);
  if (param_1 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar9 = PTR_PTR_1126d1c18;
      func_0x000107c610f8(PTR_PTR_1126d1c18);
      func_0x000107c453e4();
      uVar5 = *(undefined8 *)(param_1 + _DAT_113042728);
      uVar1 = ((undefined8 *)(param_1 + _DAT_113042728))[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c5a02c(puVar9);
      func_0x000107c61170(uVar5);
      uVar5 = *(undefined8 *)(param_1 + _DAT_113042730);
      uVar1 = ((undefined8 *)(param_1 + _DAT_113042730))[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c570c8(puVar9);
      func_0x000107c61170(uVar5);
      puVar4 = puVar3;
      func_0x000107c3df4c();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1037579d4);
        (*pcVar2)();
      }
      func_0x000107c55adc();
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar4);
    }
  }
  puVar9 = &UNK_11068ea50;
  func_0x000107c613fc(&UNK_11068ea50,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = param_4;
  uVar5 = 0;
  func_0x00010375af34(0,0x112f90188,&PTR_PTR_1126ad6a8);
  puVar4 = PTR_PTR_1126ae988;
  func_0x000107c610f8(PTR_PTR_1126ae988);
  uStack_60 = 0x10375aea8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101201f78;
  puStack_68 = &UNK_11068ea68;
  puStack_58 = puVar9;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c614e8(uVar5);
  func_0x000107c61174(param_4);
  func_0x000107c46c68(puVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_5 == 0) {
    puVar8 = (undefined *)0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f1635f0);
    puVar9 = puVar8;
    func_0x000106c7723c();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar8 = puVar9;
    func_0x000107c5ed2c(puVar9);
    func_0x000107c61170(puVar9);
    func_0x000107c3fef8(param_4);
  }
  else {
    uVar5 = 0x800000010f163610;
    puVar7 = (undefined *)0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f163610);
    puVar9 = puVar3;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      uVar5 = 0xc000000000000000;
    }
    else {
      puVar8 = puVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar9);
    }
    puVar9 = puVar8;
    func_0x000107c5ee20(puVar8,uVar5);
    func_0x00010006c090(puVar8,uVar5);
    puVar8 = PTR_PTR_1126ae748;
    func_0x000107c61168(PTR_PTR_1126ae748);
    func_0x000107c3edf4();
    func_0x000107c61180();
    func_0x000107c5d1d4(param_5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(param_5);
    puVar3 = puVar7;
    puVar4 = puVar9;
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 1037579d4; end: 103757b2f;  */

void FUN_1037579d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    lVar1 = param_2;
    func_0x000107c5ed2c(param_2);
    func_0x000107c3fef8(param_3);
    func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  FUN_10375aeb0(param_1,auStack_50,0x112d387f8,&UNK_10d902650);
  if (lStack_38 == 0) {
    FUN_10375a4bc(auStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar2 = 0;
    func_0x00010375af34(0,0x112f90188,&PTR_PTR_1126ad6a8);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,auStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000107c3fefc(param_3);
      uVar4 = uStack_58;
      goto LAB_103757b14;
    }
  }
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f163630);
  uVar2 = uVar4;
  func_0x000106c7723c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar2;
  func_0x000107c5ed2c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c3fef8(param_3);
LAB_103757b14:
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 103757b30; end: 103757ba7;  */

/* WARNING: Possible PIC construction at 0x000103757b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103757b90) */

void FUN_103757b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103757ba8; end: 103757c03; -[_TtC32SCPlusSyncServicesImplementation19PlusSyncServiceImpl init] */

void FUN_103757ba8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusSyncServicesImplementation.PlusSyncServiceImpl",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103757bd4);
  (*pcVar1)();
}



/* Entry: 103757c04; end: 103757cfb; -[_TtC32SCPlusSyncServicesImplementation19PlusSyncServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103757c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103757c34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103757c04(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f90088));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f900b0));
  return;
}



/* Entry: 103757cfc; end: 103757d23;  */

ulong FUN_103757cfc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103757e08);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103757e0c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ad670;
    func_0x000107c61168(PTR_PTR_1126ad670);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ad670;
    func_0x000107c61168(PTR_PTR_1126ad670);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010375af34(0,0x112f8ffe8,&PTR_PTR_1126ad670);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103757ee0);
  (*pcVar2)();
}



/* Entry: 103757d24; end: 103757edf;  */

ulong FUN_103757d24(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103757e08);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103757e0c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010375af34(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103757ee0);
  (*pcVar2)();
}



/* Entry: 103757ee0; end: 103757ef3;  */

ulong FUN_103757ee0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103757e08);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103757e0c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ad6b0;
    func_0x000107c61168(PTR_PTR_1126ad6b0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ad6b0;
    func_0x000107c61168(PTR_PTR_1126ad6b0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010375af34(0,0x112f90190,&PTR_PTR_1126ad6b0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103757ee0);
  (*pcVar2)();
}



/* Entry: 103757ef4; end: 10375808f;  */

ulong FUN_103757ef4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103757fc4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103757fc8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103f79ac8(0);
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
    func_0x000103f79ac8(0);
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
  func_0x000107c5fb78(0xd000000000000017,0x800000010f163540);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103758090);
  (*pcVar2)();
}



/* Entry: 103758090; end: 1037580a3;  */

ulong FUN_103758090(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037581e0);
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
  FUN_103758448(uVar2,uVar4,FUN_10375bde8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037581dc);
      (*pcVar1)();
    }
    FUN_1037584c8(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1037580a4; end: 1037581df;  */

ulong FUN_1037580a4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037581e0);
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
  FUN_103758448(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037581dc);
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



/* Entry: 1037581e0; end: 103758323;  */

undefined * FUN_1037581e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103758324);
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
    puVar3 = (undefined *)0x112f90178;
    func_0x0001000285a8(0x112f90178,&UNK_10dc08280);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f90180;
    func_0x0001000285a8(0x112f90180,&UNK_10dc08288);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103758324; end: 103758447;  */

undefined * FUN_103758324(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103758448);
        (*pcVar2)();
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f90160;
    func_0x0001000285a8(0x112f90160,&UNK_10dc08270);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x130) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110727cd8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x130 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x130);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103758448; end: 1037584c7;  */

undefined * FUN_103758448(undefined *param_1,undefined *param_2,code *param_3)

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



/* Entry: 1037584c8; end: 1037586d7;  */

long FUN_1037584c8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037585dc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1037585e0);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x00010375af34(0,0x112f8ffc8,&PTR_PTR_1126d1d40);
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
      func_0x00010375af34(0,0x112f8ffc8,&PTR_PTR_1126d1d40);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1037585d8);
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



/* Entry: 1037586d8; end: 103758a6b;  */

void FUN_1037586d8(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 != 0) {
    uVar13 = *(ulong *)(param_1 + 0x20);
    uVar12 = *(ulong *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    lVar10 = *param_3;
    func_0x000107c61434(uVar12);
    func_0x000107c61174();
    uVar14 = uVar13;
    uVar5 = uVar12;
    func_0x000100029284();
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
LAB_1037589b4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037589b8);
      (*pcVar3)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar1) {
      func_0x00010375c064(lVar1,param_2 & 1);
      uVar14 = uVar13;
      uVar8 = uVar12;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_103758790:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1037587a0);
        (*pcVar3)();
      }
    }
    else if ((param_2 & 1) == 0) {
      func_0x00010375beb4();
    }
    if ((uVar5 & 1) != 0) {
LAB_1037587a8:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c614b0(puVar4);
      uVar6 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar6 & 1) == 0) {
        func_0x000107c6142c(param_1);
        func_0x000107c6142c(uVar12);
        func_0x000107c61170(uVar11);
        func_0x000107c614ac(puVar4);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      uStack_80 = uVar13;
      uStack_78 = uVar12;
      func_0x000107c603d0(&uStack_80,&uStack_70,PTR___sSSN_11034da80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103758a6c);
      (*pcVar3)();
    }
    lVar7 = *param_3;
    lVar1 = lVar7 + (uVar14 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar14 & 0x3f);
    puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar13;
    puVar2[1] = uVar12;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar14 * 8) = uVar11;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_1037589b8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037589bc);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    if (uVar6 != 1) {
      puVar15 = (undefined8 *)(param_1 + 0x48);
      uVar14 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1037589c0);
          (*pcVar3)();
        }
        uVar13 = puVar15[-2];
        uVar12 = puVar15[-1];
        uVar11 = *puVar15;
        lVar10 = *param_3;
        func_0x000107c61434(uVar12);
        func_0x000107c61174();
        uVar5 = uVar13;
        uVar8 = uVar12;
        func_0x000100029284();
        lVar7 = *(long *)(lVar10 + 0x10);
        uVar9 = (ulong)~(uint)uVar8 & 1;
        lVar1 = lVar7 + uVar9;
        if (SCARRY8(lVar7,uVar9)) goto LAB_1037589b4;
        if (*(long *)(lVar10 + 0x18) < lVar1) {
          func_0x00010375c064(lVar1,1);
          uVar5 = uVar13;
          uVar9 = uVar12;
          func_0x000100029284();
          if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) goto LAB_103758790;
        }
        if ((uVar8 & 1) != 0) goto LAB_1037587a8;
        lVar7 = *param_3;
        lVar1 = lVar7 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 0x10);
        *puVar2 = uVar13;
        puVar2[1] = uVar12;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar5 * 8) = uVar11;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_1037589b8;
        uVar14 = uVar14 + 1;
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        puVar15 = puVar15 + 3;
      } while (uVar6 != uVar14);
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 103758a6c; end: 103758bbb;  */

long FUN_103758a6c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103758bbc);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103758bb8);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_103758b7c;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      func_0x000107c61434();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    func_0x000107c61434();
  }
LAB_103758b7c:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Entry: 103758bbc; end: 103758dd7;  */

undefined1  [16] FUN_103758bbc(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if (param_2 == 0) {
    uVar6 = 0xe200000000000000;
    uVar7 = 0x6b73;
  }
  else if (param_2 == 2) {
    uVar6 = 0xe400000000000000;
    uVar7 = 0x6b636f6d;
  }
  else {
    if (param_2 != 1) {
      lStack_60 = param_2;
      func_0x000107c60614(&UNK_11068eaa0,&lStack_60,&UNK_11068eaa0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103758dd8);
      (*pcVar3)();
    }
    uVar6 = 0xe400000000000000;
    uVar7 = 0x70616e73;
  }
  lStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x11);
  func_0x000107c5fb78(uVar7,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  uVar6 = param_1;
  func_0x000107c4a564();
  bVar4 = (int)uVar6 == 0;
  uVar6 = 0x65757274;
  if (bVar4) {
    uVar6 = 0x65736c6166;
  }
  uVar7 = 0xe400000000000000;
  if (bVar4) {
    uVar7 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  uVar6 = param_1;
  func_0x000107c5bd00();
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  uStack_68 = uVar6;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  func_0x000107c5c35c(param_1);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar5 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fddc(&lStack_60,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  uVar6 = param_1;
  func_0x000107c4a568();
  bVar4 = (int)uVar6 == 0;
  uVar6 = 0x65757274;
  if (bVar4) {
    uVar6 = 0x65736c6166;
  }
  uVar7 = 0xe400000000000000;
  if (bVar4) {
    uVar7 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  func_0x000107c42db8();
  uStack_68 = CONCAT44(uStack_68._4_4_,(int)param_1);
  uVar6 = 0;
  func_0x00010374e380(0);
  func_0x000107c603d0(&uStack_68,&lStack_60,uVar6,puVar5,puVar2);
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = lStack_60;
  return auVar1;
}



/* Entry: 103758dd8; end: 103758e97;  */

/* WARNING: Removing unreachable block (ram,0x000103759168) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103758dd8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  ulong *extraout_x8;
  long extraout_x8_00;
  ulong unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_240 [8];
  ulong uStack_238;
  ulong uStack_230;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1c8 [280];
  long lStack_40;
  long lStack_38;
  
  plVar10 = &lStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  lStack_40 = 0;
  uVar11 = param_1;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar3 = lStack_40;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  uVar4 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(uVar4 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  if (uVar11 != 0) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_2 == 0) {
      func_0x000107c61170(uVar11);
      uVar4 = uVar11;
    }
    else {
      uVar5 = 0x6e79732d73756c70;
      func_0x000107c5fadc(0x6e79732d73756c70,0xef65746174732d63);
      uVar6 = param_2;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) {
        func_0x000107c61170(param_2);
        func_0x000107c61170(uVar11);
        uVar4 = uVar11;
      }
      else {
        uVar5 = 0;
        FUN_10375da20(0);
        uVar7 = uVar6;
        func_0x000107c61480(uVar6,uVar5);
        if (uVar7 == 0) {
          func_0x000107c61170(param_2);
          func_0x000107c61170(uVar11);
LAB_103759070:
          func_0x000107c615e8(uVar6);
          uVar4 = uVar6;
        }
        else {
          uVar8 = uVar11;
          uStack_1f0 = param_2;
          uStack_1e0 = uVar6;
          FUN_103758bbc();
          puVar15 = (ulong *)(uVar7 + _DAT_112f90220);
          uVar6 = *puVar15;
          uStack_1e8 = uVar7;
          if (uVar6 == uVar8 && (long *)puVar15[1] == plVar10) {
            func_0x000107c6142c(plVar10);
          }
          else {
            func_0x000107c605b8();
            func_0x000107c6142c(plVar10);
            if ((uVar6 & 1) == 0) {
              func_0x000107c61170(uVar11);
              func_0x000107c61170(uStack_1f0);
              uVar6 = uStack_1e0;
              goto LAB_103759070;
            }
          }
          uVar5 = 0xd000000000000027;
          func_0x000107c5fadc(0xd000000000000027,0x800000010f163650);
          func_0x000107c4c0d0();
          func_0x000107c61170(uVar5);
          if ((double)lVar3 / 1000.0 <= *(double *)(uStack_1e8 + _DAT_112f90228)) {
            puStack_1f8 = (ulong *)_DAT_112f90228;
            puVar9 = (ulong *)(uStack_1e8 + _DAT_112f90238);
            uVar6 = *puVar9;
            uVar7 = puVar9[1];
            uStack_210 = uVar11;
            puStack_200 = puVar15;
            func_0x000107c610f8(PTR_PTR_1126ad6a8);
            func_0x00010006c00c(uVar6,uVar7);
            uVar8 = uVar6;
            FUN_103758dd8(uVar6,uVar7);
            func_0x00010006c090(uVar6,uVar7);
            uVar11 = uVar8;
            puStack_208 = puVar9;
            func_0x000107c4d690();
            puVar15 = puStack_1f8;
            lStack_228 = _DAT_112f90248;
            dVar17 = (double)uVar11 / 1000.0;
            dVar18 = *(double *)(uStack_1e8 + (long)puStack_1f8) + 300.0;
            if ((*(byte *)(uStack_1e8 + _DAT_112f90248) & dVar18 < dVar17) == 0) {
              dVar18 = dVar17;
            }
            func_0x000107c5eea0(auStack_240 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
            func_0x000107c5ee8c();
            (**(code **)(lVar14 + 8))
                      (auStack_240 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),uVar4);
            uVar4 = uStack_1e0;
            uVar11 = uStack_210;
            if (dVar17 < dVar18) {
              uStack_220 = *(ulong *)(uStack_1e8 + (long)puVar15);
              uVar6 = *puStack_200;
              uVar1 = puStack_200[1];
              uVar12 = *(ulong *)(uStack_1e8 + _DAT_112f90230);
              uVar7 = *puStack_208;
              uVar13 = puStack_208[1];
              puStack_1f8 = *(ulong **)(uStack_1e8 + _DAT_112f90240);
              uStack_218 = uVar1;
              if ((ulong)puStack_1f8 >> 0x3e == 0) {
                puVar15 = *(ulong **)(((ulong)puStack_1f8 & 0xffffffffffffff8) + 0x10);
                if (puVar15 == (ulong *)0x0) goto LAB_103759420;
LAB_1037592d0:
                uStack_238 = uVar6;
                uStack_230 = uVar8;
                func_0x000107c61434(uVar1);
                func_0x00010006c00c(uVar7,uVar13);
                puStack_1d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x00010375c50c(0,(ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU)
                                    ,0);
                puStack_200 = puVar15;
                if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10375946c);
                  (*pcVar2)();
                }
                puVar15 = (ulong *)0x0;
                puStack_208 = (ulong *)((ulong)puStack_1f8 & 0xc000000000000001);
                puVar16 = puStack_1d8;
                do {
                  if (puStack_208 == (ulong *)0x0) {
                    puVar9 = (ulong *)puStack_1f8[(long)puVar15 + 4];
                    func_0x000107c61174(puVar9);
                  }
                  else {
                    puVar9 = puVar15;
                    FUN_103757ef4(puVar15);
                  }
                  func_0x000107c61174();
                  func_0x000103f73eb0(auStack_1c8);
                  func_0x000107c61170(puVar9);
                  func_0x000107c61170(puVar9);
                  uVar11 = *(ulong *)(puVar16 + 0x10);
                  puStack_1d8 = puVar16;
                  if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar11) {
                    func_0x00010375c50c(1 < *(ulong *)(puVar16 + 0x18),uVar11 + 1,1);
                  }
                  puVar16 = puStack_1d8;
                  puVar15 = (ulong *)((long)puVar15 + 1);
                  *(ulong *)(puStack_1d8 + 0x10) = uVar11 + 1;
                  func_0x000107c610b4(puStack_1d8 + uVar11 * 0x110 + 0x20,auStack_1c8,0x110);
                  uVar4 = uStack_1e0;
                } while (puStack_200 != puVar15);
                func_0x000107c61170(uStack_1f0);
                func_0x000107c61170(uStack_210);
                uVar8 = uStack_230;
                uVar6 = uStack_238;
              }
              else {
                puVar15 = (ulong *)((ulong)puStack_1f8 & 0xffffffffffffff8);
                if ((ulong *)0x7fffffffffffffff < puStack_1f8) {
                  puVar15 = puStack_1f8;
                }
                func_0x000107c60480();
                if (puVar15 != (ulong *)0x0) goto LAB_1037592d0;
LAB_103759420:
                func_0x000107c61434(uVar1);
                func_0x00010006c00c(uVar7,uVar13);
                func_0x000107c61170(uStack_1f0);
                func_0x000107c61170(uVar11);
                puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              uVar11 = (ulong)*(byte *)(uStack_1e8 + lStack_228);
              func_0x000107c615e8(uVar4);
              goto LAB_1037591ac;
            }
            func_0x000107c615e8(uStack_1e0);
            func_0x000107c61170(uVar8);
          }
          else {
            func_0x000107c615e8(uStack_1e0);
          }
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uStack_1f0);
          uVar4 = uStack_1f0;
        }
      }
    }
  }
  uVar12 = 0;
  uVar8 = 0;
  uVar7 = 0;
  puVar16 = (undefined *)0x0;
  uVar13 = 0;
  uVar6 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uVar11 = 0;
LAB_1037591ac:
  *extraout_x8 = uVar6;
  extraout_x8[1] = uStack_218;
  extraout_x8[2] = uStack_220;
  extraout_x8[3] = uVar12;
  extraout_x8[4] = uVar7;
  extraout_x8[5] = uVar13;
  extraout_x8[6] = (ulong)puVar16;
  extraout_x8[7] = uVar11;
  extraout_x8[8] = uVar8;
  return uVar4;
}



/* Entry: 103758e98; end: 10375946b;  */

/* WARNING: Removing unreachable block (ram,0x000103759168) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103758e98(ulong *param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  undefined *puVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_200 [8];
  ulong uStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_188 [280];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  if (param_4 != 0) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_3 == 0) {
      func_0x000107c61170(param_4);
    }
    else {
      uVar3 = 0x6e79732d73756c70;
      func_0x000107c5fadc(0x6e79732d73756c70,0xef65746174732d63);
      lVar4 = param_3;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (lVar4 == 0) {
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
      }
      else {
        uVar3 = 0;
        FUN_10375da20(0);
        lVar5 = lVar4;
        func_0x000107c61480(lVar4,uVar3);
        if (lVar5 == 0) {
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_4);
LAB_103759070:
          func_0x000107c615e8(lVar4);
        }
        else {
          uVar6 = param_4;
          lStack_1b0 = param_3;
          lStack_1a0 = lVar4;
          FUN_103758bbc();
          puVar14 = (ulong *)(lVar5 + _DAT_112f90220);
          uVar7 = *puVar14;
          lStack_1a8 = lVar5;
          if (uVar7 == uVar6 && puVar14[1] == param_5) {
            func_0x000107c6142c(param_5);
          }
          else {
            func_0x000107c605b8();
            func_0x000107c6142c(param_5);
            if ((uVar7 & 1) == 0) {
              func_0x000107c61170(param_4);
              func_0x000107c61170(lStack_1b0);
              lVar4 = lStack_1a0;
              goto LAB_103759070;
            }
          }
          uVar3 = 0xd000000000000027;
          func_0x000107c5fadc(0xd000000000000027,0x800000010f163650);
          func_0x000107c4c0d0();
          func_0x000107c61170(uVar3);
          if ((double)param_2 / 1000.0 <= *(double *)(lStack_1a8 + _DAT_112f90228)) {
            puStack_1b8 = (ulong *)_DAT_112f90228;
            puVar9 = (ulong *)(lStack_1a8 + _DAT_112f90238);
            uVar7 = *puVar9;
            uVar6 = puVar9[1];
            uStack_1d0 = param_4;
            puStack_1c0 = puVar14;
            func_0x000107c610f8(PTR_PTR_1126ad6a8);
            func_0x00010006c00c(uVar7,uVar6);
            uVar8 = uVar7;
            FUN_103758dd8(uVar7,uVar6);
            func_0x00010006c090(uVar7,uVar6);
            uVar7 = uVar8;
            puStack_1c8 = puVar9;
            func_0x000107c4d690();
            puVar14 = puStack_1b8;
            lStack_1e8 = _DAT_112f90248;
            dVar16 = (double)uVar7 / 1000.0;
            dVar17 = *(double *)(lStack_1a8 + (long)puStack_1b8) + 300.0;
            if ((*(byte *)(lStack_1a8 + _DAT_112f90248) & dVar17 < dVar16) == 0) {
              dVar17 = dVar16;
            }
            func_0x000107c5eea0(auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x000107c5ee8c();
            (**(code **)(lVar13 + 8))
                      (auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
            lVar2 = lStack_1a0;
            param_4 = uStack_1d0;
            if (dVar16 < dVar17) {
              uStack_1e0 = *(ulong *)(lStack_1a8 + (long)puVar14);
              uVar7 = *puStack_1c0;
              uVar10 = puStack_1c0[1];
              uVar11 = *(ulong *)(lStack_1a8 + _DAT_112f90230);
              uVar6 = *puStack_1c8;
              uVar12 = puStack_1c8[1];
              puStack_1b8 = *(ulong **)(lStack_1a8 + _DAT_112f90240);
              uStack_1d8 = uVar10;
              if ((ulong)puStack_1b8 >> 0x3e == 0) {
                puVar14 = *(ulong **)(((ulong)puStack_1b8 & 0xffffffffffffff8) + 0x10);
                if (puVar14 == (ulong *)0x0) goto LAB_103759420;
LAB_1037592d0:
                uStack_1f8 = uVar7;
                uStack_1f0 = uVar8;
                func_0x000107c61434(uVar10);
                func_0x00010006c00c(uVar6,uVar12);
                puStack_198 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x00010375c50c(0,(ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU)
                                    ,0);
                puStack_1c0 = puVar14;
                if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10375946c);
                  (*pcVar1)();
                }
                puVar14 = (ulong *)0x0;
                puStack_1c8 = (ulong *)((ulong)puStack_1b8 & 0xc000000000000001);
                puVar15 = puStack_198;
                do {
                  if (puStack_1c8 == (ulong *)0x0) {
                    puVar9 = (ulong *)puStack_1b8[(long)puVar14 + 4];
                    func_0x000107c61174(puVar9);
                  }
                  else {
                    puVar9 = puVar14;
                    FUN_103757ef4(puVar14);
                  }
                  func_0x000107c61174();
                  func_0x000103f73eb0(auStack_188);
                  func_0x000107c61170(puVar9);
                  func_0x000107c61170(puVar9);
                  uVar7 = *(ulong *)(puVar15 + 0x10);
                  puStack_198 = puVar15;
                  if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar7) {
                    func_0x00010375c50c(1 < *(ulong *)(puVar15 + 0x18),uVar7 + 1,1);
                  }
                  puVar15 = puStack_198;
                  puVar14 = (ulong *)((long)puVar14 + 1);
                  *(ulong *)(puStack_198 + 0x10) = uVar7 + 1;
                  func_0x000107c610b4(puStack_198 + uVar7 * 0x110 + 0x20,auStack_188,0x110);
                  lVar2 = lStack_1a0;
                } while (puStack_1c0 != puVar14);
                func_0x000107c61170(lStack_1b0);
                func_0x000107c61170(uStack_1d0);
                uVar8 = uStack_1f0;
                uVar7 = uStack_1f8;
              }
              else {
                puVar14 = (ulong *)((ulong)puStack_1b8 & 0xffffffffffffff8);
                if ((ulong *)0x7fffffffffffffff < puStack_1b8) {
                  puVar14 = puStack_1b8;
                }
                func_0x000107c60480();
                if (puVar14 != (ulong *)0x0) goto LAB_1037592d0;
LAB_103759420:
                func_0x000107c61434(uVar10);
                func_0x00010006c00c(uVar6,uVar12);
                func_0x000107c61170(lStack_1b0);
                func_0x000107c61170(param_4);
                puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              uVar10 = (ulong)*(byte *)(lStack_1a8 + lStack_1e8);
              func_0x000107c615e8(lVar2);
              goto LAB_1037591ac;
            }
            func_0x000107c615e8(lStack_1a0);
            func_0x000107c61170(uVar8);
          }
          else {
            func_0x000107c615e8(lStack_1a0);
          }
          func_0x000107c61170(param_4);
          func_0x000107c61170(lStack_1b0);
        }
      }
    }
  }
  uVar11 = 0;
  uVar8 = 0;
  uVar6 = 0;
  puVar15 = (undefined *)0x0;
  uVar12 = 0;
  uVar7 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uVar10 = 0;
LAB_1037591ac:
  *param_1 = uVar7;
  param_1[1] = uStack_1d8;
  param_1[2] = uStack_1e0;
  param_1[3] = uVar11;
  param_1[4] = uVar6;
  param_1[5] = uVar12;
  param_1[6] = (ulong)puVar15;
  param_1[7] = uVar10;
  param_1[8] = uVar8;
  return;
}



/* Entry: 10375946c; end: 10375967b;  */

void FUN_10375946c(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar9 = param_1;
  func_0x000107c44a50();
  if ((int)puVar9 != 0) {
    puVar9 = param_1;
    func_0x000107c4f368();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103759668);
      (*pcVar1)();
    }
    puVar2 = puVar9;
    func_0x000107c4d370();
    func_0x000107c61170(puVar9);
    puVar9 = param_1;
    func_0x000107c4f368();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10375966c);
      (*pcVar1)();
    }
    puVar3 = puVar9;
    func_0x000107c4441c();
    func_0x000107c61170(puVar9);
    puVar9 = param_1;
    func_0x000107c4f368();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103759670);
      (*pcVar1)();
    }
    puVar4 = puVar9;
    func_0x000107c5c75c();
    func_0x000107c61170(puVar9);
    if (((puVar2 != (undefined *)0x0) || (puVar3 != (undefined *)0x0)) ||
       (puVar4 != (undefined *)0x0)) {
      puVar9 = param_1;
      func_0x000107c4f368();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103759674);
        (*pcVar1)();
      }
      puVar4 = puVar9;
      func_0x000107c5c758();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103759678);
        (*pcVar1)();
      }
      puVar5 = puVar4;
      func_0x000107c3db60();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puVar9 = PTR___sypN_11034f1a8 + 8;
      puVar4 = puVar5;
      func_0x000107c5fc54(puVar5,puVar9);
      func_0x000107c61170(puVar5);
      puVar5 = puVar4;
      func_0x000101158fcc();
      func_0x000107c6142c(puVar4);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar5 != (undefined *)0x0) {
        puVar4 = puVar5;
      }
      puVar5 = puVar4;
      func_0x000100403a6c(puVar4);
      func_0x000107c6142c(puVar4);
      func_0x000107c4f368();
      func_0x000107c61180();
      if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10375967c);
        (*pcVar1)();
      }
      puVar4 = param_1;
      func_0x000107c41214();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (puVar4 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        puVar9 = (undefined *)0xc000000000000000;
      }
      else {
        puVar8 = puVar4;
        func_0x000107c5ee30(puVar4);
        func_0x000107c61170(puVar4);
      }
      uVar6 = 0;
      func_0x000103f7bc90(0);
      func_0x000107c610f8();
      iVar7 = 0x100;
      if (puVar3 == (undefined *)0x0) {
        iVar7 = 0;
      }
      if (puVar2 != (undefined *)0x0) {
        iVar7 = iVar7 + 1;
      }
      func_0x000103f7ba98(iVar7,puVar5,puVar8,puVar9,uVar6);
    }
  }
  return;
}



/* Entry: 10375967c; end: 10375a46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375967c(long param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  char cVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 **ppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined *puVar18;
  undefined8 ****ppppuVar19;
  ulong uVar20;
  undefined8 ****ppppuVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 ****ppppuVar24;
  undefined *puVar25;
  undefined8 ****ppppuVar26;
  long lVar27;
  undefined8 ****ppppuVar28;
  undefined8 ****ppppuVar29;
  undefined8 ****ppppuVar30;
  undefined8 ***pppuVar31;
  ulong uVar32;
  undefined8 *puStack_2f8;
  undefined *puStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined1 uStack_2a8;
  undefined1 uStack_2a7;
  long lStack_2a0;
  undefined8 ***pppuStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 ***pppuStack_278;
  long lStack_270;
  undefined8 ***pppuStack_268;
  undefined8 **ppuStack_260;
  undefined8 **ppuStack_1a0;
  undefined8 ***pppuStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [280];
  
  lVar27 = param_1;
  ppppuVar26 = param_2;
  func_0x000107c4f218();
  func_0x000107c61180();
  if (lVar27 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103759ed0);
    (*pcVar10)();
  }
  lVar11 = lVar27;
  func_0x000107c3df44();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103759ed4);
    (*pcVar10)();
  }
  lVar27 = lVar11;
  func_0x000107c4e858();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  ppppuVar29 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar27 != 0) {
    pppuStack_198 = (undefined8 ****)0x0;
    uVar12 = 0;
    func_0x00010375af34(0,0x112f90168,&PTR_PTR_1126ad6a0);
    ppppuVar26 = &pppuStack_198;
    func_0x000107c5fc50(lVar27,ppppuVar26,uVar12);
    func_0x000107c61170(lVar27);
    if ((undefined8 ****)pppuStack_198 != (undefined8 ****)0x0) {
      ppppuVar29 = (undefined8 ****)pppuStack_198;
    }
  }
  ppppuVar28 = (undefined8 ****)((ulong)ppppuVar29 & 0xffffffffffffff8);
  if ((ulong)ppppuVar29 >> 0x3e == 0) {
    ppppuVar30 = (undefined8 ****)ppppuVar28[2];
  }
  else {
    ppppuVar30 = ppppuVar28;
    if ((undefined8 ****)0x7fffffffffffffff < ppppuVar29) {
      ppppuVar30 = ppppuVar29;
    }
    func_0x000107c60480();
  }
  lVar27 = _DAT_113042768;
  if (ppppuVar30 == (undefined8 ****)0x0) {
    puStack_2b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_2b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppppuVar17 = (undefined8 ****)0x0;
    do {
      while( true ) {
        if (((ulong)ppppuVar29 & 0xc000000000000001) == 0) {
          if (ppppuVar28[2] <= ppppuVar17) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x103759c6c);
            (*pcVar10)();
          }
          ppppuVar13 = (undefined8 ****)ppppuVar29[(long)((long)ppppuVar17 + 4)];
          func_0x000107c61174();
          ppppuVar16 = ppppuVar26;
        }
        else {
          ppppuVar13 = ppppuVar17;
          ppppuVar16 = ppppuVar29;
          FUN_103757d24(ppppuVar17,ppppuVar29,&PTR_PTR_1126ad6a0,0x112f90168);
        }
        ppppuVar1 = (undefined8 ****)((long)ppppuVar17 + 1);
        if (SCARRY8((long)ppppuVar17,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x103759c68);
          (*pcVar10)();
        }
        ppppuVar14 = ppppuVar13;
        func_0x000107c4f31c();
        func_0x000107c61180();
        if (ppppuVar14 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x103759ec8);
          (*pcVar10)();
        }
        ppppuVar21 = ppppuVar14;
        func_0x000107c5faec();
        ppppuVar26 = ppppuVar16;
        func_0x000107c61170(ppppuVar14);
        if (param_2[2] != (undefined8 ***)0x0) break;
LAB_103759798:
        func_0x000107c6142c(ppppuVar16);
        func_0x000107c61170(ppppuVar13);
LAB_1037597a4:
        ppppuVar17 = (undefined8 ****)((long)ppppuVar17 + 1);
        if (ppppuVar1 == ppppuVar30) goto LAB_103759af0;
      }
      func_0x000107c61434(param_2);
      ppppuVar14 = ppppuVar16;
      func_0x000100029284();
      if (((ulong)ppppuVar14 & 1) == 0) {
        func_0x000107c6142c(ppppuVar16);
        ppppuVar16 = param_2;
        ppppuVar26 = ppppuVar14;
        goto LAB_103759798;
      }
      ppuVar15 = param_2[7][(long)ppppuVar21];
      func_0x000107c61174();
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(ppppuVar16);
      ppppuVar26 = ppppuVar13;
      func_0x000107c4fb40();
      func_0x000107c61180();
      if (ppppuVar26 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x103759ecc);
        (*pcVar10)();
      }
      ppppuVar16 = ppppuVar26;
      func_0x000107c5faec();
      ppppuVar19 = ppppuVar14;
      func_0x000107c61170(ppppuVar26);
      ppppuVar21 = ppppuVar13;
      func_0x000107c4f46c();
      func_0x000107c61180();
      if (ppppuVar21 == (undefined8 ****)0x0) {
        ppppuVar24 = (undefined8 ****)0x0;
        ppppuVar21 = (undefined8 ****)0x0;
        ppppuVar26 = ppppuVar19;
      }
      else {
        ppppuVar24 = ppppuVar21;
        func_0x000107c5faec();
        ppppuVar26 = ppppuVar19;
        func_0x000107c61170(ppppuVar21);
        ppppuVar21 = ppppuVar19;
      }
      uVar32 = (ulong)ppppuVar16 & 0xffffffffffff;
      if (((ulong)ppppuVar14 & 0x2000000000000000) != 0) {
        uVar32 = (ulong)ppppuVar14 >> 0x38 & 0xf;
      }
      if (uVar32 == 0) {
        func_0x000107c6142c(ppppuVar14);
        func_0x000107c61170(ppuVar15);
        func_0x000107c61170(ppppuVar13);
        func_0x000107c6142c(ppppuVar21);
        goto LAB_1037597a4;
      }
      if ((*(byte *)(param_3 + lVar27) & 1) == 0) {
LAB_103759998:
        uVar12 = 0;
        uVar23 = 0;
        puStack_2f8 = (undefined8 **)0x0;
      }
      else {
        if (ppppuVar21 == (undefined8 ****)0x0) {
          ppppuVar24 = (undefined8 ****)0x0;
        }
        else {
          func_0x000107c5fadc(ppppuVar24,ppppuVar21);
        }
        puStack_2f8 = ppuVar15;
        ppppuVar26 = ppppuVar24;
        func_0x000106c6ac4c();
        func_0x000107c61180();
        func_0x000107c61170(ppppuVar24);
        if ((undefined8 **)puStack_2f8 == (undefined8 **)0x0) goto LAB_103759998;
        uVar12 = *(undefined8 *)((long)puStack_2f8 + _DAT_1130369b0);
        uVar23 = ((undefined8 *)((long)puStack_2f8 + _DAT_1130369b0))[1];
        func_0x000107c61434(uVar23);
      }
      func_0x000103f73eb0(auStack_178);
      pppuStack_198 = ppppuVar16;
      pppuStack_190 = ppppuVar14;
      uStack_188 = uVar12;
      uStack_180 = uVar23;
      func_0x000103f76008(0);
      func_0x000107c610f8();
      func_0x000107c61434(ppppuVar14);
      ppppuVar17 = &pppuStack_198;
      func_0x000103f75d84();
      func_0x000107c61170(puStack_2f8);
      func_0x000107c6142c(ppppuVar14);
      func_0x000107c61170(ppuVar15);
      func_0x000107c61170(ppppuVar13);
      func_0x000107c6142c(ppppuVar21);
      puVar25 = puStack_2b8;
      func_0x000107c61550();
      if ((((int)puVar25 == 0) || ((long)puStack_2b8 < 0)) ||
         (((ulong)puStack_2b8 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_2b8 >> 0x3e == 0) {
          puVar25 = *(undefined **)(((ulong)puStack_2b8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar25 = (undefined *)((ulong)puStack_2b8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_2b8) {
            puVar25 = puStack_2b8;
          }
          func_0x000107c60480();
        }
        ppppuVar26 = (undefined8 ****)(puVar25 + 1);
        puVar25 = (undefined *)0x0;
        FUN_1037580a4(0,ppppuVar26,1,puStack_2b8,0x10375be04,0x1037585e0);
        puStack_2b8 = puVar25;
      }
      uVar20 = (ulong)puStack_2b8 & 0xffffffffffffff8;
      uVar32 = *(ulong *)(uVar20 + 0x10);
      ppppuVar13 = (undefined8 ****)(uVar32 + 1);
      if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar32) {
        puVar25 = (undefined *)(ulong)(1 < *(ulong *)(uVar20 + 0x18));
        ppppuVar26 = ppppuVar13;
        FUN_1037580a4(puVar25,ppppuVar13,1,puStack_2b8,0x10375be04,0x1037585e0);
        uVar20 = (ulong)puVar25 & 0xffffffffffffff8;
        puStack_2b8 = puVar25;
      }
      *(undefined8 *****)(uVar20 + 0x10) = ppppuVar13;
      *(undefined8 *****)(uVar20 + uVar32 * 8 + 0x20) = ppppuVar17;
      ppppuVar17 = ppppuVar1;
    } while (ppppuVar1 != ppppuVar30);
  }
LAB_103759af0:
  func_0x000107c6142c(ppppuVar29);
  if ((ulong)puStack_2b8 >> 0x3e == 0) {
    puVar25 = *(undefined **)(((ulong)puStack_2b8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar25 = (undefined *)((ulong)puStack_2b8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_2b8) {
      puVar25 = puStack_2b8;
    }
    func_0x000107c60480();
  }
  if (puVar25 != (undefined *)0x0) {
    ppuStack_1a0 = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010375c528(0,(ulong)puVar25 & ((long)puVar25 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar25 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x103759ec4);
      (*pcVar10)();
    }
    puVar22 = (undefined *)0x0;
    pppuVar31 = (undefined8 ***)ppuStack_1a0;
    if (((ulong)puStack_2b8 & 0xc000000000000001) == 0) goto LAB_103759b64;
    do {
      puVar18 = puVar22;
      FUN_1036c8bb0();
      while( true ) {
        ppuVar15 = *(undefined8 ***)(puVar18 + _DAT_1130367a0);
        ppuVar4 = *(undefined8 ***)((long)(puVar18 + _DAT_1130367a0) + 8);
        ppuVar2 = *(undefined8 ***)(puVar18 + _DAT_1130367a8);
        ppuVar5 = *(undefined8 ***)((long)(puVar18 + _DAT_1130367a8) + 8);
        func_0x000107c61434(ppuVar5);
        func_0x000107c61174(puVar18);
        func_0x000107c61434(ppuVar4);
        func_0x000103f73eb0(&ppuStack_2b0);
        func_0x000107c61170(puVar18);
        func_0x000107c61170(puVar18);
        ppuVar3 = pppuVar31[2];
        ppuStack_1a0 = pppuVar31;
        if ((undefined8 **)((ulong)pppuVar31[3] >> 1) <= ppuVar3) {
          func_0x00010375c528((undefined8 **)0x1 < pppuVar31[3],(undefined8 **)((long)ppuVar3 + 1U),
                              1);
        }
        pppuVar31 = (undefined8 ***)ppuStack_1a0;
        ppuStack_1a0[2] = (undefined8 **)((long)ppuVar3 + 1U);
        ppuStack_1a0[(long)ppuVar3 * 0x26 + 4] = ppuVar15;
        ppuStack_1a0[(long)ppuVar3 * 0x26 + 5] = ppuVar4;
        ppuStack_1a0[(long)ppuVar3 * 0x26 + 6] = ppuVar2;
        ppuStack_1a0[(long)ppuVar3 * 0x26 + 7] = ppuVar5;
        ppppuVar26 = (undefined8 ****)&ppuStack_2b0;
        func_0x000107c610b4(ppuStack_1a0 + (long)ppuVar3 * 0x26 + 8,ppppuVar26,0x110);
        if (puVar25 + -1 == puVar22) {
          func_0x000107c6142c(puStack_2b8);
          goto LAB_103759cac;
        }
        puVar22 = puVar22 + 1;
        if (((ulong)puStack_2b8 & 0xc000000000000001) != 0) break;
LAB_103759b64:
        puVar18 = *(undefined **)(puStack_2b8 + (long)puVar22 * 8 + 0x20);
        func_0x000107c61174();
      }
    } while( true );
  }
  func_0x000107c6142c();
  pppuVar31 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_103759cac:
  uVar6 = *(undefined1 *)(param_3 + _DAT_113042760);
  uVar7 = *(undefined1 *)(param_3 + lVar27);
  lVar27 = param_1;
  func_0x000107c5c330();
  func_0x000107c61180();
  if (lVar27 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103759ed8);
    (*pcVar10)();
  }
  lVar11 = lVar27;
  func_0x000107c41214();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  if (lVar11 == 0) {
    puStack_2b8 = (undefined *)0x0;
    ppppuVar28 = (undefined8 ****)0xc000000000000000;
    ppppuVar29 = ppppuVar26;
  }
  else {
    puStack_2b8 = (undefined *)lVar11;
    func_0x000107c5ee30();
    ppppuVar29 = ppppuVar26;
    func_0x000107c61170(lVar11);
    ppppuVar28 = ppppuVar26;
  }
  lVar27 = param_1;
  FUN_10375946c();
  if (lVar27 == 0) {
    uVar32 = 0;
    uVar23 = 0;
    uVar12 = 0;
    ppppuVar26 = (undefined8 ****)0x0;
  }
  else {
    bVar8 = *(byte *)(lVar27 + _DAT_113036a90);
    cVar9 = *(char *)(lVar27 + _DAT_113036a98);
    uVar23 = *(undefined8 *)(lVar27 + _DAT_113036aa0);
    uVar12 = *(undefined8 *)(lVar27 + _DAT_113036aa8);
    ppppuVar26 = (undefined8 ****)((undefined8 *)(lVar27 + _DAT_113036aa8))[1];
    func_0x000107c61434(uVar23);
    ppppuVar29 = ppppuVar26;
    func_0x00010006c00c(uVar12);
    func_0x000107c61170(lVar27);
    uVar32 = 0x100;
    if (cVar9 == '\0') {
      uVar32 = 0;
    }
    uVar32 = uVar32 | bVar8;
  }
  lVar27 = param_1;
  func_0x000107c4fb58();
  func_0x000107c61180();
  if (lVar27 != 0) {
    lVar11 = lVar27;
    func_0x000107c41214();
    func_0x000107c61180();
    func_0x000107c61170(lVar27);
    if (lVar11 == 0) {
      lVar27 = 0;
      ppppuVar29 = (undefined8 ****)0xc000000000000000;
    }
    else {
      lVar27 = lVar11;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar11);
    }
    func_0x000107c42bc8();
    func_0x000107c61180();
    ppuStack_260 = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 != 0) {
      ppuStack_2b0 = (undefined8 ***)0x0;
      func_0x000107c5fc50();
      func_0x000107c61170(param_1);
      if ((undefined8 ***)ppuStack_2b0 != (undefined8 ***)0x0) {
        ppuStack_260 = ppuStack_2b0;
      }
    }
    lStack_2a0 = (long)puStack_2b8;
    ppuStack_2b0 = pppuVar31;
    uStack_2a8 = uVar6;
    uStack_2a7 = uVar7;
    pppuStack_298 = ppppuVar28;
    uStack_290 = uVar32;
    uStack_288 = uVar23;
    uStack_280 = uVar12;
    pppuStack_278 = ppppuVar26;
    lStack_270 = lVar27;
    pppuStack_268 = ppppuVar29;
    func_0x000103f75a80(0);
    func_0x000107c610f8();
    func_0x000103f75280(&ppuStack_2b0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x103759edc);
  (*pcVar10)();
}



/* Entry: 10375a470; end: 10375a49b;  */

void FUN_10375a470(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10375a49c; end: 10375a4bb;  */

void FUN_10375a49c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e96b0);
  return;
}



/* Entry: 10375a4bc; end: 10375a4fb;  */

undefined8 FUN_10375a4bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10375a4fc; end: 10375a50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375a4fc(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112f90130;
  if (lVar3 == 0) {
    lVar4 = -0x2fffffffffffffed;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f163560);
    lVar3 = lVar4;
    func_0x000106c7723c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lStack_b8 = lVar3;
    func_0x000107c5ed2c(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c3fef8(uVar1);
  }
  else if (*(long *)(lVar3 + _DAT_112f90130) == 0) {
    lVar5 = *(long *)(lVar3 + _DAT_112f900a8);
    func_0x000107c5c360();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
      lStack_b8 = 0;
    }
    else {
      lStack_b8 = lVar6;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
    }
    uVar16 = *(undefined8 *)(lVar3 + _DAT_112f900b0);
    uVar17 = *(undefined8 *)(lVar3 + _DAT_112f90118);
    uVar15 = *(undefined8 *)(lVar3 + _DAT_112f90098);
    uVar13 = *(undefined8 *)(lVar3 + _DAT_112f900a0);
    uVar14 = *(undefined8 *)(lVar3 + _DAT_112f900d0);
    uVar12 = *(undefined8 *)(lVar3 + _DAT_112f90110);
    func_0x000107c6157c(uVar16);
    func_0x000107c61174(uVar17);
    func_0x000107c615f0(uVar15);
    func_0x000107c61174(uVar13);
    func_0x000107c615f0(uVar14);
    func_0x000107c61174(uVar12);
    uVar7 = uVar16;
    func_0x000103755530(uVar16,uVar17,uVar15,uVar13,uVar14,uVar12,lStack_b8,bVar2 & 1,uVar11);
    func_0x000107c61574(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c615e8(uVar15);
    func_0x000107c61170(uVar13);
    func_0x000107c615e8(uVar14);
    func_0x000107c61170(uVar12);
    uVar11 = *(undefined8 *)(lVar3 + lVar4);
    *(undefined8 *)(lVar3 + lVar4) = uVar7;
    func_0x000107c61174(uVar7);
    func_0x000107c61170(uVar11);
    puVar8 = &UNK_11068e6e0;
    func_0x000107c613fc(&UNK_11068e6e0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,lVar3);
    puVar9 = &UNK_11068e7f8;
    func_0x000107c613fc(&UNK_11068e7f8,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined8 *)(puVar9 + 0x18) = uVar1;
    pcStack_88 = FUN_10375a544;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x10375afec;
    puStack_90 = &UNK_11068e810;
    ppuVar10 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar8 = puStack_80;
    func_0x000107c61174(uVar1);
    func_0x000107c61574(puVar8);
    func_0x000107c5dc64(uVar7);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar7);
  }
  else {
    func_0x000106c77a8c(*(long *)(lVar3 + _DAT_112f90130),uVar1,
                        *(undefined8 *)(lVar3 + _DAT_112f900d0));
    lStack_b8 = lVar3;
  }
  func_0x000107c61170(lStack_b8);
  return;
}



/* Entry: 10375a50c; end: 10375a543;  */

void FUN_10375a50c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10375a544; end: 10375a54b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375a544(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  long lStack_60;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 == 0) {
    if (param_2 == 0) goto LAB_1037557f8;
  }
  else {
    func_0x000107c61428(lVar3 + 0x10,auStack_a0,0,0);
    lVar1 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112f90090);
      lVar2 = param_1;
      func_0x000107c61174();
      func_0x000107c6157c(uVar4);
      func_0x000107c61170(lVar1);
      lStack_60 = lVar2;
      func_0x000100075034(FUN_10375a54c,auStack_70,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar4);
    }
    if (param_2 == 0) {
      func_0x000107c3fefc(uVar5);
      goto LAB_1037557f8;
    }
  }
  func_0x000107c614b0(param_2);
  lVar1 = param_2;
  func_0x000107c5ed2c(param_2);
  lVar2 = lVar1;
  func_0x000107c5ed2c();
  func_0x000107c61170(lVar1);
  func_0x000107c3fef8(uVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c614ac(param_2);
LAB_1037557f8:
  func_0x000107c61428(lVar3 + 0x10,auStack_70,0,0);
  lVar1 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112f90130);
    *(undefined8 *)(lVar1 + _DAT_112f90130) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar5);
  }
  if (param_1 != 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + _DAT_112f90120);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c4d664(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 10375a54c; end: 10375a5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375a54c(undefined8 *param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = *(undefined8 *)(*(long *)(lVar1 + _DAT_112f90280) + _DAT_113036750);
  func_0x000107c61174();
  return;
}



/* Entry: 10375a5ac; end: 10375a5e7;  */

void FUN_10375a5ac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1037558c0(param_1,param_2,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 10375a5e8; end: 10375a5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375a5e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  ppuVar6 = &puStack_80;
  puVar3 = PTR_PTR_1126d1e20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c57444();
  func_0x000107c54ff4(puVar3);
  puVar11 = PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
  func_0x000107c61168();
  func_0x000107c415f8();
  func_0x000107c61180();
  puVar4 = puVar11;
  func_0x000107c5bf10();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  if (puVar4 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    param_2 = 0xe000000000000000;
  }
  else {
    puVar10 = puVar4;
    func_0x000107c40860(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar11 = puVar10;
    func_0x000107c5faec(puVar10);
    func_0x000107c61170(puVar10);
  }
  func_0x000107c5fadc(puVar11,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c527d0(puVar3);
  func_0x000107c61170(puVar11);
  if (param_1 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar11 = PTR_PTR_1126d1c18;
      func_0x000107c610f8(PTR_PTR_1126d1c18);
      func_0x000107c453e4();
      uVar5 = *(undefined8 *)(param_1 + _DAT_113042728);
      uVar1 = ((undefined8 *)(param_1 + _DAT_113042728))[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c5a02c(puVar11);
      func_0x000107c61170(uVar5);
      uVar5 = *(undefined8 *)(param_1 + _DAT_113042730);
      uVar1 = ((undefined8 *)(param_1 + _DAT_113042730))[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c570c8(puVar11);
      func_0x000107c61170(uVar5);
      puVar4 = puVar3;
      func_0x000107c3df4c();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1037579d4);
        (*pcVar2)();
      }
      func_0x000107c55adc();
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar4);
    }
  }
  puVar11 = &UNK_11068ea50;
  func_0x000107c613fc(&UNK_11068ea50,0x18,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar8;
  uVar5 = 0;
  func_0x00010375af34(0,0x112f90188,&PTR_PTR_1126ad6a8);
  puVar4 = PTR_PTR_1126ae988;
  func_0x000107c610f8(PTR_PTR_1126ae988);
  uStack_60 = 0x10375aea8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101201f78;
  puStack_68 = &UNK_11068ea68;
  puStack_58 = puVar11;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c614e8(uVar5);
  func_0x000107c61174(uVar8);
  func_0x000107c46c68(puVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 == 0) {
    puVar10 = (undefined *)0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f1635f0);
    puVar11 = puVar10;
    func_0x000106c7723c();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    puVar10 = puVar11;
    func_0x000107c5ed2c(puVar11);
    func_0x000107c61170(puVar11);
    func_0x000107c3fef8(uVar8);
  }
  else {
    uVar8 = 0x800000010f163610;
    puVar7 = (undefined *)0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f163610);
    puVar11 = puVar3;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      uVar8 = 0xc000000000000000;
    }
    else {
      puVar10 = puVar11;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar11);
    }
    puVar11 = puVar10;
    func_0x000107c5ee20(puVar10,uVar8);
    func_0x00010006c090(puVar10,uVar8);
    puVar10 = PTR_PTR_1126ae748;
    func_0x000107c61168(PTR_PTR_1126ae748);
    func_0x000107c3edf4();
    func_0x000107c61180();
    func_0x000107c5d1d4(lVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(lVar9);
    puVar3 = puVar7;
    puVar4 = puVar11;
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 10375a600; end: 10375a86b;  */

undefined * FUN_10375a600(long param_1,undefined8 *****param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 ****ppppuStack_68;
  
  func_0x000107c4f218();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10375a868);
    (*pcVar2)();
  }
  lVar3 = param_1;
  func_0x000107c3df44();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10375a86c);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  func_0x000107c4e858();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  pppppuVar13 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    ppppuStack_68 = (undefined8 *****)0x0;
    uVar5 = 0;
    func_0x00010375af34(0,0x112f90168,&PTR_PTR_1126ad6a0);
    param_2 = &ppppuStack_68;
    func_0x000107c5fc50(lVar4,param_2,uVar5);
    func_0x000107c61170(lVar4);
    if ((undefined8 *****)ppppuStack_68 != (undefined8 *****)0x0) {
      pppppuVar13 = (undefined8 *****)ppppuStack_68;
    }
  }
  pppppuVar16 = (undefined8 *****)((ulong)pppppuVar13 & 0xffffffffffffff8);
  if ((ulong)pppppuVar13 >> 0x3e == 0) {
    pppppuVar14 = (undefined8 *****)pppppuVar16[2];
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppppuVar14 = pppppuVar16;
    if ((undefined8 *****)0x7fffffffffffffff < pppppuVar13) {
      pppppuVar14 = pppppuVar13;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (pppppuVar14 != (undefined8 *****)0x0) {
    pppppuVar8 = (undefined8 *****)0x0;
    do {
      while( true ) {
        if (((ulong)pppppuVar13 & 0xc000000000000001) == 0) {
          if (pppppuVar16[2] <= pppppuVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10375a808);
            (*pcVar2)();
          }
          pppppuVar6 = (undefined8 *****)pppppuVar13[(long)((long)pppppuVar8 + 4)];
          func_0x000107c61174();
          pppppuVar12 = param_2;
        }
        else {
          pppppuVar6 = pppppuVar8;
          pppppuVar12 = pppppuVar13;
          FUN_103757d24(pppppuVar8,pppppuVar13,&PTR_PTR_1126ad6a0,0x112f90168);
        }
        if (SCARRY8((long)pppppuVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10375a804);
          (*pcVar2)();
        }
        pppppuVar15 = (undefined8 *****)((long)pppppuVar8 + 1);
        func_0x000107c61174();
        pppppuVar7 = pppppuVar6;
        func_0x000107c4f31c();
        func_0x000107c61180();
        if (pppppuVar7 == (undefined8 *****)0x0) break;
        pppppuVar8 = pppppuVar7;
        func_0x000107c5faec();
        param_2 = pppppuVar12;
        func_0x000107c61170(pppppuVar6);
        func_0x000107c61170(pppppuVar6);
        func_0x000107c61170(pppppuVar7);
        puVar9 = puVar11;
        func_0x000107c61558();
        puVar10 = puVar11;
        if (((ulong)puVar9 & 1) == 0) {
          param_2 = (undefined8 *****)(*(long *)(puVar11 + 0x10) + 1);
          puVar10 = (undefined *)0x0;
          func_0x0001000d182c(0,param_2,1,puVar11);
        }
        uVar1 = *(ulong *)(puVar10 + 0x10);
        pppppuVar6 = (undefined8 *****)(uVar1 + 1);
        puVar11 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          param_2 = pppppuVar6;
          func_0x0001000d182c(puVar11,pppppuVar6,1,puVar10);
        }
        *(undefined8 ******)(puVar11 + 0x10) = pppppuVar6;
        *(undefined8 ******)(puVar11 + uVar1 * 0x10 + 0x20) = pppppuVar8;
        *(undefined8 ******)(puVar11 + uVar1 * 0x10 + 0x28) = pppppuVar12;
        pppppuVar8 = pppppuVar15;
        if (pppppuVar15 == pppppuVar14) goto LAB_10375a824;
      }
      func_0x000107c61170(pppppuVar6);
      func_0x000107c61170(pppppuVar6);
      param_2 = pppppuVar12;
      pppppuVar8 = (undefined8 *****)((long)pppppuVar8 + 1);
    } while (pppppuVar15 != pppppuVar14);
  }
LAB_10375a824:
  func_0x000107c6142c(pppppuVar13);
  puVar9 = puVar11;
  func_0x000100403a6c(puVar11);
  func_0x000107c6142c(puVar11);
  return puVar9;
}



/* Entry: 10375a86c; end: 10375a893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375a86c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  long *plVar16;
  undefined **ppuVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  long unaff_x20;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_440;
  long lStack_438;
  undefined *puStack_408;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined1 auStack_3d0 [88];
  undefined *puStack_378;
  undefined1 uStack_370;
  undefined1 uStack_36f;
  undefined6 uStack_36e;
  undefined8 uStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [288];
  
  lVar14 = *(long *)(unaff_x20 + 0x10);
  lVar19 = *(long *)(unaff_x20 + 0x28);
  uStack_1a0 = 0;
  uVar8 = 0;
  func_0x000103f79ac8(0,lVar14,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c5f9e4(param_1,&uStack_1a0,PTR___sSSN_11034da80,uVar8,PTR___sSSSHsWP_11034da90);
  uVar24 = uStack_1a0;
  if (uStack_1a0 == 0) {
    FUN_10375a49c();
    lVar19 = param_1;
    func_0x000107c610f8();
    *(long *)(lVar19 + _DAT_112f900d8) = lVar14;
    *(undefined1 *)(lVar19 + _DAT_112f900e0) = 0;
    puVar13 = PTR_s_init_1125d9248;
    lStack_210 = lVar19;
    lStack_208 = param_1;
    func_0x000107c61174(lVar14);
    func_0x000107c61154(&lStack_210,puVar13);
  }
  else {
    uVar27 = uStack_1a0;
    func_0x000107c61434();
    FUN_103753b80();
    uVar9 = uVar27;
    func_0x000101117e30();
    func_0x000107c6142c(uVar27);
    lVar20 = *(long *)(lVar14 + _DAT_112f90280);
    uVar27 = *(ulong *)(lVar20 + _DAT_113036748);
    uVar28 = uVar27 & 0xffffffffffffff8;
    if (uVar27 >> 0x3e == 0) {
      uVar25 = *(ulong *)(uVar28 + 0x10);
    }
    else {
      uVar25 = uVar28;
      if (0x7fffffffffffffff < uVar27) {
        uVar25 = uVar27;
      }
      func_0x000107c60480();
    }
    lVar6 = _DAT_113042768;
    func_0x000107c61434(uVar27);
    if (uVar25 == 0) {
      puStack_408 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_408 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar21 = 0;
LAB_103756ef4:
      do {
        if ((uVar27 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar28 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x103757574);
            (*pcVar7)();
          }
          uVar10 = *(ulong *)(uVar27 + uVar21 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar10 = uVar21;
          FUN_1036c8bb0(uVar21,uVar27);
        }
        if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x103757570);
          (*pcVar7)();
        }
        uVar23 = uVar21 + 1;
        if (*(long *)(uVar24 + 0x10) == 0) {
          func_0x000107c61170();
        }
        else {
          plVar16 = (long *)(*(long *)(uVar10 + _DAT_1130367b0) + _DAT_1130368c8);
          lVar11 = *plVar16;
          uVar2 = plVar16[1];
          func_0x000107c61434(uVar24);
          func_0x000107c61434(uVar2);
          uVar18 = uVar2;
          func_0x000100029284();
          if ((uVar18 & 1) == 0) {
            func_0x000107c61170(uVar10);
            func_0x000107c6142c(uVar2);
            func_0x000107c6142c(uVar24);
          }
          else {
            lVar11 = *(long *)(*(long *)(uVar24 + 0x38) + lVar11 * 8);
            func_0x000107c61174();
            func_0x000107c6142c(uVar24);
            func_0x000107c6142c(uVar2);
            uVar18 = *(ulong *)(uVar10 + _DAT_1130367a0);
            uVar3 = ((ulong *)(uVar10 + _DAT_1130367a0))[1];
            uVar2 = uVar18 & 0xffffffffffff;
            if ((uVar3 & 0x2000000000000000) != 0) {
              uVar2 = uVar3 >> 0x38 & 0xf;
            }
            if (uVar2 != 0) {
              if ((*(byte *)(lVar19 + lVar6) & 1) == 0) {
                uStack_440 = 0;
                lStack_438 = 0;
                uVar8 = 0;
              }
              else {
                if (((undefined8 *)(uVar10 + _DAT_1130367a8))[1] == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)(uVar10 + _DAT_1130367a8);
                  func_0x000107c5fadc(uVar8);
                }
                lStack_438 = lVar11;
                func_0x000106c6ac4c(lVar11,uVar8);
                func_0x000107c61180();
                func_0x000107c61170(uVar8);
                if (lStack_438 == 0) {
                  uStack_440 = 0;
                  lStack_438 = 0;
                  uVar8 = 0;
                }
                else {
                  uStack_440 = *(undefined8 *)(lStack_438 + _DAT_1130369b0);
                  uVar8 = ((undefined8 *)(lStack_438 + _DAT_1130369b0))[1];
                  func_0x000107c61434(uVar8);
                }
              }
              func_0x000103f73eb0(auStack_180);
              uStack_190 = uStack_440;
              uStack_1a0 = uVar18;
              uStack_198 = uVar3;
              uStack_188 = uVar8;
              func_0x000103f76008(0);
              func_0x000107c610f8();
              func_0x000107c61434(uVar3);
              puVar12 = &uStack_1a0;
              func_0x000103f75d84();
              func_0x000107c61170(lStack_438);
              uVar8 = *(undefined8 *)((long)puVar12 + _DAT_1130367a0);
              uVar30 = ((undefined8 *)((long)puVar12 + _DAT_1130367a0))[1];
              uVar4 = *(undefined8 *)((long)puVar12 + _DAT_1130367a8);
              uVar32 = ((undefined8 *)((long)puVar12 + _DAT_1130367a8))[1];
              func_0x000107c61434(uVar32);
              func_0x000107c61434(uVar30);
              func_0x000103f73eb0(&puStack_320);
              func_0x000107c61170(uVar10);
              func_0x000107c61170(puVar12);
              func_0x000107c61170(lVar11);
              puVar13 = puStack_408;
              func_0x000107c61558();
              if (((ulong)puVar13 & 1) == 0) {
                plVar16 = (long *)(puStack_408 + 0x10);
                puStack_408 = (undefined *)0x0;
                FUN_103758324(0,*plVar16 + 1,1);
              }
              uVar21 = *(ulong *)(puStack_408 + 0x10);
              if (*(ulong *)(puStack_408 + 0x18) >> 1 <= uVar21) {
                puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puStack_408 + 0x18));
                FUN_103758324(puVar13,uVar21 + 1,1,puStack_408);
                puStack_408 = puVar13;
              }
              *(ulong *)(puStack_408 + 0x10) = uVar21 + 1;
              *(undefined8 *)(puStack_408 + uVar21 * 0x130 + 0x20) = uVar8;
              *(undefined8 *)(puStack_408 + uVar21 * 0x130 + 0x28) = uVar30;
              *(undefined8 *)(puStack_408 + uVar21 * 0x130 + 0x30) = uVar4;
              *(undefined8 *)(puStack_408 + uVar21 * 0x130 + 0x38) = uVar32;
              func_0x000107c610b4(puStack_408 + uVar21 * 0x130 + 0x40,&puStack_320,0x110);
              uVar21 = uVar23;
              if (uVar23 == uVar25) break;
              goto LAB_103756ef4;
            }
            func_0x000107c61170();
            func_0x000107c61170(lVar11);
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar23 != uVar25);
    }
    func_0x000107c6142c(uVar24);
    func_0x000107c6142c(uVar27);
    uStack_370 = *(undefined1 *)(*(long *)(lVar20 + _DAT_113036750) + _DAT_113042760);
    uStack_36f = *(undefined1 *)(*(long *)(lVar20 + _DAT_113036750) + _DAT_113042768);
    uVar8 = *(undefined8 *)(lVar20 + _DAT_113036758);
    uVar4 = ((undefined8 *)(lVar20 + _DAT_113036758))[1];
    lVar19 = *(long *)(lVar20 + _DAT_113036760);
    if (lVar19 == 0) {
      uVar24 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar32 = 0;
    }
    else {
      uVar29 = *(undefined8 *)(lVar19 + _DAT_113036aa0);
      uVar30 = *(undefined8 *)(lVar19 + _DAT_113036aa8);
      uVar32 = ((undefined8 *)(lVar19 + _DAT_113036aa8))[1];
      uVar24 = 0x100;
      if (*(char *)(lVar19 + _DAT_113036a98) == '\0') {
        uVar24 = 0;
      }
      uVar24 = uVar24 | *(byte *)(lVar19 + _DAT_113036a90);
      func_0x000107c61434(uVar29);
      func_0x00010006c00c(uVar30,uVar32);
    }
    uVar22 = *(undefined8 *)(lVar20 + _DAT_113036770);
    uVar1 = *(undefined8 *)(lVar20 + _DAT_113036768);
    uVar5 = ((undefined8 *)(lVar20 + _DAT_113036768))[1];
    puStack_378 = puStack_408;
    uVar26 = *(undefined8 *)(lVar14 + _DAT_112f90288);
    uVar31 = *(undefined8 *)(lVar14 + _DAT_112f90290);
    uStack_318 = CONCAT62(uStack_36e,CONCAT11(uStack_36f,uStack_370));
    puStack_320 = puStack_408;
    lVar19 = 0;
    uStack_368 = uVar8;
    uStack_360 = uVar4;
    uStack_358 = uVar24;
    uStack_350 = uVar29;
    uStack_348 = uVar30;
    uStack_340 = uVar32;
    uStack_338 = uVar1;
    uStack_330 = uVar5;
    uStack_328 = uVar22;
    uStack_310 = uVar8;
    uStack_308 = uVar4;
    uStack_300 = uVar24;
    uStack_2f8 = uVar29;
    uStack_2f0 = uVar30;
    uStack_2e8 = uVar32;
    uStack_2e0 = uVar1;
    uStack_2d8 = uVar5;
    uStack_2d0 = uVar22;
    uStack_2c8 = uVar26;
    uStack_2c0 = uVar31;
    FUN_10375dee4();
    lVar14 = lVar19;
    func_0x000107c610f8();
    uStack_1d8 = uStack_350;
    uStack_1e0 = uStack_358;
    uStack_1c8 = uStack_340;
    uStack_1d0 = uStack_348;
    uStack_1b8 = uStack_330;
    uStack_1c0 = uStack_338;
    uStack_1b0 = uStack_328;
    uStack_1f8 = CONCAT62(uStack_36e,CONCAT11(uStack_36f,uStack_370));
    puStack_200 = puStack_378;
    uStack_1e8 = uStack_360;
    uStack_1f0 = uStack_368;
    func_0x000103f75a80(0);
    func_0x000107c610f8();
    func_0x00010006c00c(uVar8,uVar4);
    func_0x00010006c00c(uVar1,uVar5);
    func_0x000107c61434(uVar22);
    func_0x00010374e944(&puStack_378,auStack_3d0);
    func_0x000107c61174(uVar31);
    func_0x000107c61174(uVar26);
    func_0x00010374e944(&puStack_320,auStack_3d0);
    ppuVar15 = &puStack_200;
    func_0x000103f75280();
    uVar8 = uStack_2c0;
    *(undefined ***)(lVar14 + _DAT_112f90280) = ppuVar15;
    *(undefined8 *)(lVar14 + _DAT_112f90288) = uStack_2c8;
    *(undefined8 *)(lVar14 + _DAT_112f90290) = uStack_2c0;
    puVar13 = PTR_s_init_1125d9248;
    lStack_3e0 = lVar14;
    lStack_3d8 = lVar19;
    func_0x000107c61174();
    func_0x000107c61174(uVar8);
    plVar16 = &lStack_3e0;
    func_0x000107c61154(plVar16,puVar13);
    ppuVar15 = &puStack_320;
    func_0x00010375a8c8();
    FUN_10375a49c();
    ppuVar17 = ppuVar15;
    func_0x000107c610f8();
    puVar13 = PTR_s_init_1125d9248;
    *(long **)((long)ppuVar17 + _DAT_112f900d8) = plVar16;
    *(byte *)((long)ppuVar17 + _DAT_112f900e0) = (byte)uVar9 & 1;
    ppuStack_3f0 = ppuVar17;
    ppuStack_3e8 = ppuVar15;
    func_0x000107c61174(plVar16);
    func_0x000107c61154(&ppuStack_3f0,puVar13);
    func_0x00010375a8fc(&puStack_378);
    func_0x000107c61170(plVar16);
  }
  return;
}



/* Entry: 10375a894; end: 10375a92f;  */

undefined8 FUN_10375a894(undefined8 param_1)

{
  (*(code *)(undefined *)0x10374e434)();
  return param_1;
}



/* Entry: 10375a930; end: 10375abab;  */

void FUN_10375a930(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  lVar11 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  uVar5 = uVar2;
  uVar7 = uVar3;
  func_0x000100029284();
  lVar8 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar7 & 1;
  lVar12 = lVar8 + uVar9;
  if (SCARRY8(lVar8,uVar9)) {
LAB_10375aba4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10375aba8);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar12) {
    func_0x00010375c078(lVar12,param_2 & 1);
    uVar5 = uVar2;
    uVar9 = uVar3;
    func_0x000100029284();
    if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) {
LAB_10375a9e4:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10375a9f4);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    func_0x00010375bec8();
    lVar12 = *param_3;
    goto joined_r0x00010375aa3c;
  }
  lVar12 = *param_3;
joined_r0x00010375aa3c:
  if ((uVar7 & 1) == 0) {
    lVar8 = lVar12 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
    if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
LAB_10375aba8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10375abac);
      (*pcVar4)();
    }
    *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
  }
  else {
    func_0x000107c6142c(uVar3);
    uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
    func_0x000107c61170(uVar6);
  }
  if (lVar10 != 1) {
    lVar10 = lVar10 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar13 = *puVar14;
      lVar11 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar5 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      lVar8 = *(long *)(lVar11 + 0x10);
      uVar9 = (ulong)~(uint)uVar7 & 1;
      lVar12 = lVar8 + uVar9;
      if (SCARRY8(lVar8,uVar9)) goto LAB_10375aba4;
      if (*(long *)(lVar11 + 0x18) < lVar12) {
        func_0x00010375c078(lVar12,1);
        uVar5 = uVar2;
        uVar9 = uVar3;
        func_0x000100029284();
        if (((uint)uVar7 & 1) != ((uint)uVar9 & 1)) goto LAB_10375a9e4;
      }
      lVar12 = *param_3;
      if ((uVar7 & 1) == 0) {
        lVar8 = lVar12 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
        if (SCARRY8(*(long *)(lVar12 + 0x10),1)) goto LAB_10375aba8;
        *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar3);
        uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8) = uVar13;
        func_0x000107c61170(uVar6);
      }
      puVar14 = puVar14 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 10375abac; end: 10375ae4b;  */

/* WARNING: Removing unreachable block (ram,0x00010375ae40) */

undefined * FUN_10375abac(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_68;
  
  uVar13 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar12 = *(ulong *)(uVar13 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar13;
    if (0x7fffffffffffffff < param_1) {
      uVar12 = param_1;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar12 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10375ad38);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
          func_0x000107c61174();
          uVar10 = param_2;
        }
        else {
          uVar4 = uVar6;
          uVar10 = param_1;
          FUN_103757d24(uVar6,param_1,&PTR_PTR_1126ad6a0,0x112f90168);
        }
        uVar1 = uVar6 + 1;
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10375ad34);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c4f31c();
        func_0x000107c61180();
        if (uVar5 != 0) break;
        func_0x000107c61170(uVar4);
        param_2 = uVar10;
        uVar6 = uVar6 + 1;
        if (uVar1 == uVar12) goto LAB_10375ad54;
      }
      uVar6 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      param_2 = 0;
      uVar5 = uVar4;
      func_0x000106c6ba68();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      puVar11 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar11 & 1) == 0) {
        param_2 = *(long *)(puVar8 + 0x10) + 1;
        puVar7 = (undefined *)0x0;
        FUN_1037581e0(0,param_2,1,puVar8);
      }
      uVar2 = *(ulong *)(puVar7 + 0x10);
      uVar4 = uVar2 + 1;
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        param_2 = uVar4;
        FUN_1037581e0(puVar8,uVar4,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar4;
      *(ulong *)(puVar8 + uVar2 * 0x18 + 0x20) = uVar6;
      *(ulong *)(puVar8 + uVar2 * 0x18 + 0x28) = uVar10;
      *(ulong *)(puVar8 + uVar2 * 0x18 + 0x30) = uVar5;
      uVar6 = uVar1;
    } while (uVar1 != uVar12);
  }
LAB_10375ad54:
  puVar11 = *(undefined **)(puVar8 + 0x10);
  puStack_68 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar9 = 0x112f90170;
    func_0x0001000285a8(0x112f90170,&UNK_10dc083b0);
    func_0x000107c60498(puVar11,uVar9);
    puStack_68 = puVar11;
  }
  FUN_10375a930(puVar8,1,&puStack_68);
  func_0x000107c6142c(puVar8);
  puVar8 = puStack_68;
  func_0x0001000d224c(&puStack_68);
  puVar11 = puStack_68;
  uVar9 = 0;
  func_0x000103f7b3a4(0);
  puVar7 = puVar8;
  func_0x000107c5f9dc(puVar8,PTR___sSSN_11034da80,uVar9,PTR___sSSSHsWP_11034da90);
  func_0x000107c61574(puVar8);
  puVar8 = puVar11;
  func_0x000107c43258(puVar11);
  func_0x000107c61180();
  func_0x000107c615e8(puVar11);
  func_0x000107c61170(puVar7);
  return puVar8;
}



/* Entry: 10375ae4c; end: 10375ae57;  */

void FUN_10375ae4c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (*(code *)0x103756928)
            (*(undefined8 *)(unaff_x20 + 0x38),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10375ae58; end: 10375ae93;  */

void FUN_10375ae58(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  
  (*param_3)(*(undefined8 *)(unaff_x20 + 0x38),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10375ae94; end: 10375aeaf;  */

void FUN_10375ae94(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 10375aeb0; end: 10375af73;  */

undefined8 FUN_10375aeb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10375af74; end: 10375b017;  */

void FUN_10375af74(long param_1,long param_2)

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



/* Entry: 10375b018; end: 10375b057;  */

void FUN_10375b018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc082a0;
  func_0x000107c61520(&UNK_10dc082a0,&UNK_11068eaa0);
  puRam0000000112f90198 = puVar1;
  return;
}



/* Entry: 10375b058; end: 10375b103;  */

void FUN_10375b058(void)

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


