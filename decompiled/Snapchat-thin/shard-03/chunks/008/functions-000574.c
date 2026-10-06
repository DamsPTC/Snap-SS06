/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102df6a8c; end: 102df70e3;  */

void FUN_102df6a8c(void)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 *unaff_x20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  undefined *puVar24;
  ulong uVar25;
  long lVar26;
  ulong *puVar27;
  undefined *puStack_120;
  ulong uStack_118;
  undefined1 uStack_d4;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  
  uVar20 = *unaff_x20;
  lVar9 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)&puStack_120 - extraout_x8;
  lVar9 = 0;
  func_0x000107c5eea4();
  lVar26 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  puVar24 = (undefined *)(lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if (*(char *)(unaff_x20 + 0xf) == '\x01') {
    func_0x0001000d224c(&puStack_c0);
    puVar6 = puStack_c0;
    puVar10 = puStack_c0;
    func_0x000107c614f0();
    (**(code **)(lStack_b8 + 0x10))(lVar23);
    lVar11 = lVar23;
    (**(code **)(lVar26 + 0x30))(lVar23,1,lVar9);
    puVar12 = PTR___sytN_11034f1b0;
    if ((int)lVar11 == 1) {
      FUN_102dfa374(lVar23,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      (**(code **)(lVar26 + 0x20))(puVar24,lVar23,lVar9);
      uVar21 = unaff_x20[0xc];
      puStack_b0 = puVar24;
      func_0x000107c6157c(uVar21);
      func_0x000100075034(0x102dfa35c,&puStack_c0,puVar12 + 8);
      func_0x000107c61574(uVar21);
      (**(code **)(lVar26 + 8))(puVar24,lVar9);
    }
    puVar24 = puVar10;
    (**(code **)(lStack_b8 + 0x28))(puVar10,lStack_b8);
    if (*(long *)(puVar24 + 0x10) != 0) {
      func_0x0001007d6c6c(1,0xd00000000000001a,0x800000010f10e5a0,uVar20,&PTR_DAT_1105d5508);
      puVar12 = puVar10;
      (**(code **)(lStack_b8 + 0x18))(puVar10,lStack_b8);
      puVar13 = puVar12;
      func_0x000100403a6c();
      func_0x000107c6142c(puVar12);
      (**(code **)(lStack_b8 + 0x20))(puVar10,lStack_b8);
      puVar14 = puVar10;
      func_0x000100403a6c();
      func_0x000107c6142c(puVar10);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_102df6854();
      puVar27 = (ulong *)(puVar24 + 0x40);
      uStack_118 = -1L << ((ulong)(byte)puVar24[0x20] & 0x3f);
      uVar25 = 0xffffffffffffffff;
      if (-uStack_118 < 0x40) {
        uVar25 = ~(-1L << (-uStack_118 & 0x3f));
      }
      uVar25 = uVar25 & *puVar27;
      uVar16 = 0x3f - uStack_118;
      puStack_120 = puVar14 + 0x38;
      func_0x000107c61434(puVar24);
      lVar9 = 0;
      lVar23 = lVar9;
joined_r0x000102df6d4c:
      if (uVar25 != 0) {
        uVar5 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar9 << 6;
        puVar1 = (ulong *)(*(long *)(puVar24 + 0x30) + uVar17 * 0x10);
        uVar5 = *puVar1;
        uVar3 = puVar1[1];
        uVar17 = *(ulong *)(*(long *)(puVar24 + 0x38) + uVar17 * 8);
        if (*(long *)(puVar13 + 0x10) == 0) {
          func_0x000107c61438(uVar3,2);
        }
        else {
          func_0x000107c6068c(&puStack_c0,*(undefined8 *)(puVar13 + 0x28));
          func_0x000107c61438(uVar3,2);
          ppuVar15 = &puStack_c0;
          func_0x000107c5fb58(ppuVar15,uVar5,uVar3);
          func_0x000107c606a8();
          uVar18 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
          uVar22 = (ulong)ppuVar15 & (uVar18 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar13 + (uVar22 >> 6) * 8 + 0x38) >> (uVar22 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(puVar13 + 0x30) + uVar22 * 0x10);
              uVar19 = *puVar1;
              uVar4 = puVar1[1];
              if ((uVar19 == uVar5 && uVar4 == uVar3) ||
                 (func_0x000107c605b8(uVar19,uVar4,uVar5,uVar3,0), (uVar19 & 1) != 0)) {
                if (*(long *)(puVar14 + 0x10) == 0) goto LAB_102df6fec;
                func_0x000107c6068c(&puStack_c0,*(undefined8 *)(puVar14 + 0x28));
                ppuVar15 = &puStack_c0;
                func_0x000107c5fb58(ppuVar15,uVar5,uVar3);
                func_0x000107c606a8();
                puVar10 = puStack_120;
                uVar18 = -1L << ((ulong)(byte)puVar14[0x20] & 0x3f);
                uVar22 = (ulong)ppuVar15 & (uVar18 ^ 0xffffffffffffffff);
                if ((*(ulong *)(puStack_120 + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) == 0)
                goto LAB_102df6fec;
                goto LAB_102df6fa8;
              }
              uVar22 = uVar22 + 1 & ~uVar18;
            } while ((*(ulong *)(puVar13 + (uVar22 >> 6) * 8 + 0x38) >> (uVar22 & 0x3f) & 1) != 0);
          }
        }
LAB_102df6e58:
        uStack_d4 = 0;
        goto LAB_102df6e5c;
      }
      bVar8 = SCARRY8(lVar9,1);
      lVar9 = lVar9 + 1;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102df70cc);
        (*pcVar7)();
      }
      if (lVar9 < (long)(uVar16 >> 6)) goto code_r0x000102df6d64;
      func_0x000107c6142c(puVar13);
      func_0x000100d276a0(puVar24,puVar27,~uStack_118,lVar23,0);
      uVar20 = unaff_x20[0xc];
      puStack_b0 = puVar12;
      func_0x000107c6157c(uVar20);
      func_0x000100075034(FUN_102dfa340,&puStack_c0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(puVar24);
      func_0x000107c6142c(puVar14);
      func_0x000107c61574(uVar20);
      FUN_102df7214(puVar12);
      puVar24 = puVar12;
    }
    func_0x000107c615e8(puVar6);
    func_0x000107c6142c(puVar24);
  }
  return;
code_r0x000102df6d64:
  uVar25 = puVar27[lVar9];
  goto joined_r0x000102df6d4c;
  while (uVar22 = uVar22 + 1 & ~uVar18,
        (*(ulong *)(puVar10 + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) != 0) {
LAB_102df6fa8:
    puVar1 = (ulong *)(*(long *)(puVar14 + 0x30) + uVar22 * 0x10);
    uVar19 = *puVar1;
    uVar4 = puVar1[1];
    if ((uVar19 == uVar5 && uVar4 == uVar3) ||
       (func_0x000107c605b8(uVar19,uVar4,uVar5,uVar3,0), (uVar19 & 1) != 0)) goto LAB_102df6e58;
  }
LAB_102df6fec:
  uStack_d4 = 1;
LAB_102df6e5c:
  puVar10 = puVar12;
  func_0x000107c61558();
  uVar18 = uVar5;
  uVar22 = uVar3;
  puStack_c0 = puVar12;
  func_0x000100029284();
  uVar19 = (ulong)~(uint)uVar22 & 1;
  lVar23 = *(long *)(puVar12 + 0x10) + uVar19;
  if (SCARRY8(*(long *)(puVar12 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x102df70d0);
    (*pcVar7)();
  }
  if (*(long *)(puVar12 + 0x18) < lVar23) {
    FUN_102df95bc(lVar23,puVar10);
    uVar18 = uVar5;
    uVar19 = uVar3;
    func_0x000100029284();
    if (((uint)uVar22 & 1) != ((uint)uVar19 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102df70e4);
      (*pcVar7)();
    }
  }
  else if (((ulong)puVar10 & 1) == 0) {
    func_0x000102df9444();
  }
  puVar12 = puStack_c0;
  uVar25 = uVar25 - 1 & uVar25;
  uVar17 = uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU);
  lVar23 = lVar9;
  if ((uVar22 & 1) == 0) {
    *(ulong *)(puStack_c0 + (uVar18 >> 6) * 8 + 0x40) =
         *(ulong *)(puStack_c0 + (uVar18 >> 6) * 8 + 0x40) | 1L << (uVar18 & 0x3f);
    puVar1 = (ulong *)(*(long *)(puStack_c0 + 0x30) + uVar18 * 0x10);
    *puVar1 = uVar5;
    puVar1[1] = uVar3;
    puVar2 = (undefined1 *)(*(long *)(puStack_c0 + 0x38) + uVar18 * 0x10);
    *puVar2 = uStack_d4;
    *(ulong *)(puVar2 + 8) = uVar17;
    func_0x000107c6142c(uVar3);
    if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102df70d4);
      (*pcVar7)();
    }
    *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
  }
  else {
    puVar2 = (undefined1 *)(*(long *)(puStack_c0 + 0x38) + uVar18 * 0x10);
    *puVar2 = uStack_d4;
    *(ulong *)(puVar2 + 8) = uVar17;
    func_0x000107c61430(uVar3,2);
  }
  goto joined_r0x000102df6d4c;
}



/* Entry: 102df70e4; end: 102df716b;  */

void FUN_102df70e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_102dfa374(param_1,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_1,param_2,lVar1);
  (**(code **)(lVar2 + 0x38))(param_1,0,1,lVar1);
  return;
}



/* Entry: 102df716c; end: 102df7213;  */

void FUN_102df716c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  FUN_102df6960();
  iVar1 = *(int *)(lVar2 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + iVar1);
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(param_1 + iVar1) = param_2;
  iVar1 = *(int *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + iVar1);
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(param_1 + iVar1) = param_3;
  iVar1 = *(int *)(lVar2 + 0x1c);
  uVar3 = *(undefined8 *)(param_1 + iVar1);
  func_0x000107c61434(param_4);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(param_1 + iVar1) = param_4;
  return;
}



/* Entry: 102df7214; end: 102df7453;  */

void FUN_102df7214(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_98 [56];
  long lStack_60;
  undefined8 uStack_58;
  
  if (*(char *)(unaff_x20 + 0xf) == '\x01') {
    uVar10 = *unaff_x20;
    lStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x18);
    func_0x000107c6142c(uStack_58);
    lStack_60 = -0x2fffffffffffffea;
    uStack_58 = 0x800000010f10e5c0;
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c5f9ec(param_1,PTR___sSSN_11034da80,&UNK_1106a28a8,PTR___sSSSHsWP_11034da90);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    uVar1 = uStack_58;
    func_0x0001007d6c6c(1,lStack_60,uStack_58,uVar10,&PTR_DAT_1105d5508);
    func_0x000107c6142c(uVar1);
    lStack_60 = param_1;
    func_0x0001007d6d78(&lStack_60);
    lVar4 = 0x112dc78d0;
    func_0x0001000285a8(0x112dc78d0,&UNK_10d9881c0);
    puVar7 = auStack_98;
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    ppuVar5 = &PTR____CFConstantStringClassReference_110f31158;
    func_0x000107c5faec();
    lVar12 = 0;
    lVar11 = 0;
    *(undefined8 *)(lVar4 + 0x20) = ppuVar5;
    *(undefined1 **)(lVar4 + 0x28) = puVar7;
    lVar13 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar8 = -lVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar8 < 0x40) {
      uVar9 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(param_1 + 0x40);
    while( true ) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
        uVar8 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = (ulong)*(byte *)(*(long *)(param_1 + 0x38) +
                                 LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 0x10 + lVar11 * 0x400);
        bVar3 = SCARRY8(lVar12,uVar8);
        lVar12 = lVar12 + uVar8;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102df7454);
          (*pcVar2)();
        }
      }
      bVar3 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102df7450);
        (*pcVar2)();
      }
      if ((long)(0x3fU - lVar13 >> 6) <= lVar11) break;
      uVar9 = ((ulong *)(param_1 + 0x40))[lVar11];
    }
    func_0x000107c61434(param_1);
    func_0x000100d276a0();
    *(long *)(lVar4 + 0x30) = lVar12;
    lVar11 = lVar4;
    func_0x0001003d21d8();
    func_0x000107c61588(lVar4);
    FUN_102dfa374((undefined8 *)(lVar4 + 0x20),0x112dc78d8,&UNK_10d9881c8);
    lStack_60 = lVar11;
    func_0x0001007d6d78(&lStack_60);
    func_0x000107c6142c(lVar11);
  }
  return;
}



/* Entry: 102df7454; end: 102df74cf;  */

void FUN_102df7454(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102df74d0; end: 102df7503;  */

void FUN_102df74d0(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102df74e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102df7504; end: 102df7573; -[_TtC28DailyGameBadgingServicesImpl22DailyGameBadgeProvider dailyGameBadgeInfoObservableObjc] */

void FUN_102df7504(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  uVar1 = 0;
  func_0x000101c68d90(0);
  func_0x000107c6157c(param_1);
  pcVar2 = FUN_102df7574;
  func_0x0001000bfde0(FUN_102df7574,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61574(param_1);
  func_0x000107c61574(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 102df7574; end: 102df76e3;  */

void FUN_102df7574(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar11 = *param_2;
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(lVar11 + 0x40);
  func_0x000107c61434(lVar11);
  lVar12 = 0;
  while( true ) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = lVar12 << 10 | LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar8);
      uVar7 = *puVar1;
      uVar3 = puVar1[1];
      pbVar2 = (byte *)(*(long *)(lVar11 + 0x38) + uVar8);
      uVar8 = (ulong)*pbVar2;
      uVar13 = *(undefined8 *)(pbVar2 + 8);
      func_0x0001038a6670(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar3);
      func_0x0001038a6694(uVar8,uVar13);
      func_0x000107c5fadc(uVar7,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c56bcc(puVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
    }
    bVar5 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar5) break;
    if ((long)(uVar9 + 0x3f >> 6) <= lVar12) {
      func_0x000107c61574(lVar11);
      *param_1 = puVar6;
      return;
    }
    uVar10 = ((ulong *)(lVar11 + 0x40))[lVar12];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102df76e4);
  (*pcVar4)();
}



/* Entry: 102df76e4; end: 102df7743;  */

void FUN_102df76e4(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102df7744,0,0);
  return;
}



/* Entry: 102df7744; end: 102df77bb;  */

void FUN_102df7744(void)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x70);
  *(long *)(unaff_x22 + 0x58) = lVar3;
  if (lVar3 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c6157c(lVar3);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102df77bc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102df77bc);
  (*pcVar1)();
}



/* Entry: 102df77bc; end: 102df780b;  */

void FUN_102df77bc(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102df780c,0,0);
  return;
}



/* Entry: 102df780c; end: 102df796b;  */

void FUN_102df780c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(lVar6 + 0x40);
  lVar1 = *(long *)(lVar6 + 0x48);
  func_0x0001000a8868(lVar6 + 0x28,uVar2);
  (**(code **)(lVar1 + 8))(uVar4,uVar2,lVar1);
  FUN_102df7a74();
  if ((uVar4 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x68);
    *(long *)(unaff_x22 + 0x20) = *(long *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c6157c(uVar5);
    uVar2 = 0x112f1b678;
    func_0x0001000285a8(0x112f1b678,&UNK_10db541d8);
    func_0x000100075034(unaff_x22 + 0x30,FUN_102df9c68,unaff_x22 + 0x10,uVar2);
    func_0x000107c61574(uVar5);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x30);
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102df796c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScT5valuexvg_11034fdb8)();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102df7968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102df796c; end: 102df7a17;  */

void FUN_102df796c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x102df79c8;
  }
  else {
    pcVar1 = FUN_102df7a18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102df7a18; end: 102df7a73;  */

void FUN_102df7a18(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102df7a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102df7a74; end: 102df7caf;  */

uint FUN_102df7a74(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  uint uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [16];
  long alStack_80 [2];
  long lStack_70;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar7 - extraout_x12;
  func_0x0001000d224c(alStack_80);
  if (alStack_80[0] != 0) {
    if ((*(byte *)(unaff_x20 + 0x78) & 1) != 0) {
      lVar2 = alStack_80[0];
      func_0x000107c49c08();
      if ((int)lVar2 == 0) {
        (**(code **)(lVar8 + 0x38))(lVar5,1,1,lVar1);
        uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
        lStack_70 = lVar5;
        func_0x000107c6157c(uVar4);
        func_0x000100075034(FUN_102dfa548,alStack_80,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar4);
        func_0x0001009f0578(lVar5,lVar7);
        lVar2 = lVar7;
        (**(code **)(lVar8 + 0x30))(lVar7,1,lVar1);
        if ((int)lVar2 == 1) {
          func_0x000107c615e8(alStack_80[0]);
          FUN_102dfa374(lVar7,0x112d373d8,&UNK_10d9014c0);
          uVar3 = 1;
        }
        else {
          (**(code **)(lVar8 + 0x20))(puVar6,lVar7,lVar1);
          uVar4 = 0x112d58e60;
          func_0x000102dfa508(0x112d58e60,PTR___s10Foundation4DateVSLAAMc_110350bd8);
          func_0x000107c5fa8c(param_1,puVar6,lVar1,uVar4);
          uVar3 = (uint)param_1;
          func_0x000107c615e8(alStack_80[0]);
          (**(code **)(lVar8 + 8))(puVar6,lVar1);
        }
        FUN_102dfa374(lVar5,0x112d373d8,&UNK_10d9014c0);
      }
      else {
        func_0x000107c615e8(alStack_80[0]);
        uVar3 = 1;
      }
      goto LAB_102df7b74;
    }
    func_0x000107c615e8(alStack_80[0]);
  }
  uVar3 = 0;
LAB_102df7b74:
  return uVar3 & 1;
}



/* Entry: 102df7cb0; end: 102df7e13;  */

void FUN_102df7cb0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long alStack_70 [2];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *param_2;
  lVar5 = lVar3;
  if (lVar3 == 0) {
    (**(code **)(lVar9 + 0x10))(&stack0xffffffffffffffa0 + lVar1,param_4,lVar2);
    uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
    uVar7 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
    puVar4 = &UNK_1105d5580;
    func_0x000107c613fc(&UNK_1105d5580,uVar7 + lVar8,uVar6 | 7);
    *(undefined8 *)(puVar4 + 0x10) = param_3;
    (**(code **)(lVar9 + 0x20))(puVar4 + uVar7,&stack0xffffffffffffffa0 + lVar1,lVar2);
    func_0x000107c6157c(param_3);
    *(undefined **)((long)alStack_70 + lVar1) = PTR___sytN_11034f1b0 + 8;
    lVar5 = 0xb;
    func_0x000100859150(0xb,4,0x38,4,0,0,&UNK_10db542e0,puVar4);
    func_0x000107c61574(puVar4);
    *param_2 = lVar5;
    func_0x000107c6157c(lVar5);
    lVar3 = 0;
  }
  *param_1 = lVar5;
  func_0x000107c6157c(lVar3);
  return;
}



/* Entry: 102df7e14; end: 102df7e2b;  */

void FUN_102df7e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102df7e2c,0,0);
  return;
}



/* Entry: 102df7e2c; end: 102df7eb3;  */

void FUN_102df7e2c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102df7eb4;
                    /* WARNING: Could not recover jumptable at 0x000102df7eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 102df7eb4; end: 102df7f1f;  */

void FUN_102df7eb4(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    pcVar1 = FUN_102df7f20;
  }
  else {
    pcVar1 = FUN_102df7fc4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102df7f20; end: 102df7fc3;  */

void FUN_102df7f20(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar3 = uVar4;
  FUN_102df8038(uVar4,uVar2);
  func_0x000107c6142c(uVar4);
  FUN_102df7214(uVar3);
  func_0x000107c6142c(uVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x68);
  func_0x000107c6157c(uVar4);
  func_0x000100075034(FUN_102df92ac,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102df7fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102df7fc4; end: 102df8037;  */

void FUN_102df7fc4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x68);
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_102df92ac,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102df8034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102df8038; end: 102df8aa3;  */

undefined * FUN_102df8038(long param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long extraout_x8;
  long lVar17;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  ulong *puVar19;
  long extraout_x8_02;
  code *pcVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  ulong uVar26;
  code *pcVar27;
  undefined8 *unaff_x20;
  long lVar28;
  code *pcVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong auStack_160 [3];
  undefined *puStack_d8;
  undefined *puStack_c8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *apuStack_70 [2];
  
  uVar30 = *unaff_x20;
  lVar5 = 0;
  func_0x0001038a5e54();
  auStack_160[2] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar17 = (long)auStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar31 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar31 + 0x40));
  lVar21 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar21 - extraout_x12;
  lVar7 = 0;
  func_0x000102dfb40c();
  lVar28 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar28 + 0x40));
  puVar19 = (ulong *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar22 = (long)puVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar32 = lVar22 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar32 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar23 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  auStack_160[1] = lVar24 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar33 = (lVar24 - extraout_x12_03) - extraout_x12_04;
  puStack_a0 = (undefined *)0x0;
  lStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x1f);
  func_0x000107c6142c(lStack_98);
  puStack_a0 = (undefined *)0xd000000000000010;
  lStack_98 = -0x7ffffffef0ef1a20;
  lVar5 = lVar7;
  func_0x000107c5fc58(param_1,lVar7);
  func_0x000107c5fb78();
  func_0x000107c6142c(lVar5);
  func_0x000107c5fb78(0x74616420726f6620,0xeb00000000203a65);
  uVar16 = 0x112d5b7b8;
  func_0x000102dfa508(0x112d5b7b8,PTR___s10Foundation4DateVs23CustomStringConvertibleAAMc_110350bf0)
  ;
  func_0x000107c6057c(lVar6,uVar16);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar16);
  lVar5 = lStack_98;
  func_0x0001007d6c6c(1,puStack_a0,lStack_98,uVar30,&PTR_DAT_1105d5508);
  func_0x000107c6142c(lVar5);
  puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d21d8();
  pcVar20 = *(code **)(lVar31 + 0x38);
  apuStack_70[0] = puStack_d8;
  (*pcVar20)(lVar33,1,1,lVar6);
  puVar8 = puStack_c8;
  FUN_102df6854();
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
  }
  else {
    param_1 = param_1 + ((ulong)*(byte *)(lVar28 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar28 + 0x50) ^ 0xffffffffffffffff));
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar28 = *(long *)(lVar28 + 0x48);
    do {
      FUN_102dfa46c(param_1,puVar19,0x102dfb40c);
      uVar12 = *puVar19;
      uVar14 = puVar19[1];
      uVar26 = puVar19[2];
      cVar3 = (char)puVar19[3];
      func_0x000107c61434(uVar14);
      puVar10 = apuStack_70[0];
      puVar13 = apuStack_70[0];
      func_0x000107c61558();
      puStack_a0 = puVar10;
      uVar9 = uVar12;
      uVar15 = uVar14;
      func_0x000100029284();
      uVar25 = (ulong)~(uint)uVar15 & 1;
      lVar11 = *(long *)(puVar10 + 0x10) + uVar25;
      if (SCARRY8(*(long *)(puVar10 + 0x10),uVar25)) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x102df8a88);
        (*pcVar20)();
      }
      if (*(long *)(puVar10 + 0x18) < lVar11) {
        func_0x00010113678c(lVar11,puVar13);
        uVar9 = uVar12;
        uVar25 = uVar14;
        func_0x000100029284();
        if (((uint)uVar15 & 1) != ((uint)uVar25 & 1)) goto LAB_102df8a94;
      }
      else if (((ulong)puVar13 & 1) == 0) {
        func_0x000101136368();
      }
      puStack_d8 = puStack_a0;
      uVar26 = uVar26 & ((long)uVar26 >> 0x3f ^ 0xffffffffffffffffU);
      if ((uVar15 & 1) == 0) {
        *(ulong *)(puStack_a0 + (uVar9 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_a0 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puStack_a0 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar12;
        puVar2[1] = uVar14;
        *(ulong *)(*(long *)(puStack_a0 + 0x38) + uVar9 * 8) = uVar26;
        if (SCARRY8(*(long *)(puStack_a0 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x102df8a90);
          (*pcVar20)();
        }
        *(long *)(puStack_a0 + 0x10) = *(long *)(puStack_a0 + 0x10) + 1;
        func_0x000107c61434(uVar14);
      }
      else {
        *(ulong *)(*(long *)(puStack_a0 + 0x38) + uVar9 * 8) = uVar26;
      }
      apuStack_70[0] = puStack_d8;
      puVar10 = puVar8;
      func_0x000107c61558();
      uVar9 = uVar12;
      uVar15 = uVar14;
      puStack_a0 = puVar8;
      func_0x000100029284();
      uVar25 = (ulong)~(uint)uVar15 & 1;
      lVar11 = *(long *)(puVar8 + 0x10) + uVar25;
      if (SCARRY8(*(long *)(puVar8 + 0x10),uVar25)) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x102df8a8c);
        (*pcVar20)();
      }
      if (*(long *)(puVar8 + 0x18) < lVar11) {
        FUN_102df95bc(lVar11,puVar10);
        uVar9 = uVar12;
        uVar25 = uVar14;
        func_0x000100029284();
        if (((uint)uVar15 & 1) != ((uint)uVar25 & 1)) {
LAB_102df8a94:
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x102df8aa4);
          (*pcVar20)();
        }
      }
      else if (((ulong)puVar10 & 1) == 0) {
        func_0x000102df9444();
      }
      puVar8 = puStack_a0;
      if ((uVar15 & 1) == 0) {
        *(ulong *)(puStack_a0 + (uVar9 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_a0 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puStack_a0 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar12;
        puVar2[1] = uVar14;
        pcVar1 = (char *)(*(long *)(puStack_a0 + 0x38) + uVar9 * 0x10);
        *pcVar1 = cVar3;
        *(ulong *)(pcVar1 + 8) = uVar26;
        if (SCARRY8(*(long *)(puStack_a0 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x102df8a94);
          (*pcVar20)();
        }
        *(long *)(puStack_a0 + 0x10) = *(long *)(puStack_a0 + 0x10) + 1;
        func_0x000107c61434(uVar14);
        if (cVar3 != '\0') goto LAB_102df85bc;
LAB_102df864c:
        func_0x000107c6142c(uVar14);
      }
      else {
        pcVar1 = (char *)(*(long *)(puStack_a0 + 0x38) + uVar9 * 0x10);
        *pcVar1 = cVar3;
        *(ulong *)(pcVar1 + 8) = uVar26;
        if (cVar3 == '\0') goto LAB_102df864c;
LAB_102df85bc:
        puVar10 = puStack_c8;
        func_0x000107c61558();
        puVar13 = puStack_c8;
        if (((ulong)puVar10 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puStack_c8 + 0x10) + 1,1,puStack_c8);
        }
        uVar9 = *(ulong *)(puVar13 + 0x10);
        puStack_c8 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar9) {
          puStack_c8 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          func_0x0001000d182c(puStack_c8,uVar9 + 1,1,puVar13);
        }
        *(ulong *)(puStack_c8 + 0x10) = uVar9 + 1;
        *(ulong *)(puStack_c8 + uVar9 * 0x10 + 0x20) = uVar12;
        *(ulong *)(puStack_c8 + uVar9 * 0x10 + 0x28) = uVar14;
      }
      func_0x0001009f0578(lVar33,lVar32);
      pcVar29 = *(code **)(lVar31 + 0x30);
      lVar11 = lVar32;
      (*pcVar29)(lVar32,1,lVar6);
      if ((int)lVar11 == 1) {
        FUN_102dfa374(lVar33,0x112d373d8,&UNK_10d9014c0);
        uVar16 = 1;
      }
      else {
        pcVar27 = *(code **)(lVar31 + 0x20);
        (*pcVar27)(lVar21,lVar32,lVar6);
        iVar4 = *(int *)(lVar7 + 0x1c);
        uVar16 = 0x112d58e60;
        func_0x000102dfa508(0x112d58e60,PTR___s10Foundation4DateVSLAAMc_110350bd8);
        uVar12 = (long)puVar19 + (long)iVar4;
        func_0x000107c5fa88(uVar12,lVar21,lVar6,uVar16);
        FUN_102dfa374(lVar33,0x112d373d8,&UNK_10d9014c0);
        if ((uVar12 & 1) == 0) {
          (*pcVar27)(lVar23,lVar21,lVar6);
        }
        else {
          (**(code **)(lVar31 + 8))(lVar21,lVar6);
          (**(code **)(lVar31 + 0x10))(lVar23,(long)puVar19 + (long)iVar4,lVar6);
        }
        uVar16 = 0;
      }
      (*pcVar20)(lVar23,uVar16,1,lVar6);
      func_0x0001003a4c00(lVar23,lVar22);
      lVar11 = lVar22;
      (*pcVar29)(lVar22,1,lVar6);
      if ((int)lVar11 == 1) {
        (**(code **)(lVar31 + 0x10))(lVar24,(long)puVar19 + (long)*(int *)(lVar7 + 0x1c),lVar6);
        func_0x000102dfa4cc(puVar19,0x102dfb40c);
        lVar11 = lVar22;
        (*pcVar29)(lVar22,1,lVar6);
        if ((int)lVar11 != 1) {
          FUN_102dfa374(lVar22,0x112d373d8,&UNK_10d9014c0);
        }
      }
      else {
        func_0x000102dfa4cc(puVar19,0x102dfb40c);
        (**(code **)(lVar31 + 0x20))(lVar24,lVar22,lVar6);
      }
      (*pcVar20)(lVar24,0,1,lVar6);
      func_0x0001003a4c00(lVar24,lVar33);
      param_1 = param_1 + lVar28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  uVar12 = auStack_160[1];
  func_0x0001009f0578(lVar33,auStack_160[1]);
  pcVar20 = *(code **)(lVar31 + 0x30);
  uVar14 = uVar12;
  (*pcVar20)(uVar12,1,lVar6);
  if ((int)uVar14 == 1) {
    pcVar29 = *(code **)(lVar31 + 0x10);
    (*pcVar29)(lVar18,param_2,lVar6);
    uVar14 = uVar12;
    (*pcVar20)(uVar12,1,lVar6);
    if ((int)uVar14 != 1) {
      FUN_102dfa374(uVar12,0x112d373d8,&UNK_10d9014c0);
    }
  }
  else {
    (**(code **)(lVar31 + 0x20))(lVar18,uVar12,lVar6);
    pcVar29 = *(code **)(lVar31 + 0x10);
  }
  (*pcVar29)(lVar17,param_2,lVar6);
  uVar12 = auStack_160[2];
  (*pcVar29)(lVar17 + *(int *)(auStack_160[2] + 0x14),lVar18,lVar6);
  *(undefined **)(lVar17 + *(int *)(uVar12 + 0x18)) = puStack_c8;
  *(undefined **)(lVar17 + *(int *)(uVar12 + 0x1c)) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar17 + *(int *)(uVar12 + 0x20)) = puStack_d8;
  func_0x000107c61434(puStack_c8);
  func_0x000107c61434(puStack_d8);
  func_0x0001000d224c(&puStack_a0);
  lVar5 = lStack_98;
  puVar10 = puStack_a0;
  puVar13 = puStack_a0;
  func_0x000107c614f0(puStack_a0);
  (**(code **)(lVar5 + 0x30))(lVar17,puVar13,lVar5);
  func_0x000107c615e8(puVar10);
  uVar16 = unaff_x20[0xc];
  ppuStack_80 = apuStack_70;
  lStack_90 = lVar18;
  puStack_88 = puVar8;
  func_0x000107c6157c(uVar16);
  func_0x000100075034(FUN_102dfa4b0,&puStack_a0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar16);
  func_0x000102dfa4cc(lVar17,&SUB_1038a5e54);
  FUN_102dfa374(lVar33,0x112d373d8,&UNK_10d9014c0);
  (**(code **)(lVar31 + 8))(lVar18,lVar6);
  puVar10 = apuStack_70[0];
  func_0x000107c6142c(puStack_c8);
  func_0x000107c6142c(puVar10);
  return puVar8;
}



/* Entry: 102df8aa4; end: 102df8b9b;  */

void FUN_102df8aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_102dfa374(param_1,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar2);
  (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar2);
  lVar2 = 0;
  FUN_102df6960();
  iVar1 = *(int *)(lVar2 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + iVar1);
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(param_1 + iVar1) = param_3;
  iVar1 = *(int *)(lVar2 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(param_1 + iVar1));
  *(undefined **)(param_1 + iVar1) = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar4 = *param_4;
  iVar1 = *(int *)(lVar2 + 0x1c);
  uVar3 = *(undefined8 *)(param_1 + iVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(param_1 + iVar1) = uVar4;
  return;
}



/* Entry: 102df8b9c; end: 102df8c1b;  */

void FUN_102df8b9c(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102df8be0;
  plVar3[7] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5eea4();
  plVar3[8] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[9] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[10] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102df7744,0,0);
  return;
}



/* Entry: 102df8c1c; end: 102df8e23;  */

void FUN_102df8c1c(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_2 != 0) {
    uVar7 = *unaff_x20;
    uStack_90 = 0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x17);
    func_0x000107c6142c(uStack_88);
    uStack_90 = 0x203a6449736e656c;
    uStack_88 = 0xe800000000000000;
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0x6c65732073617720,0xed00006465746365);
    uVar6 = uStack_88;
    func_0x0001007d6c6c(1,uStack_90,uStack_88,uVar7,&PTR_DAT_1105d5508);
    func_0x000107c6142c(uVar6);
    lStack_58 = 0;
    uVar6 = unaff_x20[0xc];
    plStack_70 = &lStack_60;
    plStack_68 = &lStack_58;
    lStack_60 = 0;
    uStack_80 = param_1;
    lStack_78 = param_2;
    func_0x000107c6157c(uVar6);
    func_0x000100075034(0x102df9c80,&uStack_90,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar6);
    lVar5 = lStack_58;
    lVar1 = lStack_60;
    if (lStack_60 != 0) {
      if (lStack_58 == 0) {
        func_0x000107c6142c(lStack_60);
        lVar5 = lStack_58;
      }
      else {
        func_0x000107c61434(lStack_60);
        func_0x0001000d224c(&uStack_a8);
        puVar8 = *(undefined8 **)(lVar1 + 0x10);
        if (puVar8 == (undefined8 *)0x0) {
          func_0x000107c6142c(lVar1);
          puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar3 = puVar8;
          func_0x00010109b448(puVar8,0);
          puVar4 = &uStack_90;
          func_0x00010109b930(puVar4,puVar3 + 4,puVar8,lVar1);
          func_0x000100d276a0(uStack_90,uStack_88,uStack_80,lStack_78,plStack_70);
          if (puVar4 != puVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102df8da0);
            (*pcVar2)();
          }
        }
        uVar6 = uStack_a8;
        func_0x000107c614f0(uStack_a8);
        (**(code **)(lStack_a0 + 0x38))(puVar3,uVar6,lStack_a0);
        func_0x000107c615e8(uStack_a8);
        func_0x000107c61574(puVar3);
        FUN_102df7214(lVar5);
        func_0x000107c6142c(lVar5);
        lVar5 = lVar1;
      }
    }
    func_0x000107c6142c(lVar5);
  }
  return;
}



/* Entry: 102df8e24; end: 102df8f6f;  */

void FUN_102df8e24(long param_1,long param_2,ulong param_3,undefined8 *param_4,long *param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  FUN_102df6960();
  lVar10 = (long)*(int *)(lVar4 + 0x14);
  lVar8 = *(long *)(param_1 + lVar10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar5 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      pcVar1 = (char *)(*(long *)(lVar8 + 0x38) + lVar5 * 0x10);
      cVar2 = *pcVar1;
      uVar7 = *(ulong *)(pcVar1 + 8);
      func_0x000107c6142c(lVar8);
      if (cVar2 != '\x01') {
        return;
      }
      iVar3 = *(int *)(lVar4 + 0x18);
      func_0x000107c61434(param_3);
      func_0x000100403b00(&lStack_70,param_2,param_3);
      func_0x000107c6142c(uStack_68);
      uVar6 = *(undefined8 *)(param_1 + lVar10);
      func_0x000107c61558(uVar6);
      lStack_70 = *(long *)(param_1 + lVar10);
      FUN_102df92dc(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),param_2,param_3,uVar6);
      lVar4 = lStack_70;
      *(long *)(param_1 + lVar10) = lStack_70;
      uVar9 = *(undefined8 *)(param_1 + iVar3);
      uVar6 = *param_4;
      *param_4 = uVar9;
      func_0x000107c6157c(lStack_70);
      func_0x000107c61434(uVar9);
      func_0x000107c6142c(uVar6);
      lVar8 = *param_5;
      *param_5 = lVar4;
    }
    func_0x000107c6142c(lVar8);
  }
  return;
}



/* Entry: 102df8f70; end: 102df8f73;  */

void FUN_102df8f70(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_2 != 0) {
    uVar7 = *unaff_x20;
    uStack_90 = 0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x17);
    func_0x000107c6142c(uStack_88);
    uStack_90 = 0x203a6449736e656c;
    uStack_88 = 0xe800000000000000;
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0x6c65732073617720,0xed00006465746365);
    uVar6 = uStack_88;
    func_0x0001007d6c6c(1,uStack_90,uStack_88,uVar7,&PTR_DAT_1105d5508);
    func_0x000107c6142c(uVar6);
    lStack_58 = 0;
    uVar6 = unaff_x20[0xc];
    plStack_70 = &lStack_60;
    plStack_68 = &lStack_58;
    lStack_60 = 0;
    uStack_80 = param_1;
    lStack_78 = param_2;
    func_0x000107c6157c(uVar6);
    func_0x000100075034(0x102df9c80,&uStack_90,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar6);
    lVar5 = lStack_58;
    lVar1 = lStack_60;
    if (lStack_60 != 0) {
      if (lStack_58 == 0) {
        func_0x000107c6142c(lStack_60);
        lVar5 = lStack_58;
      }
      else {
        func_0x000107c61434(lStack_60);
        func_0x0001000d224c(&uStack_a8);
        puVar8 = *(undefined8 **)(lVar1 + 0x10);
        if (puVar8 == (undefined8 *)0x0) {
          func_0x000107c6142c(lVar1);
          puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar3 = puVar8;
          func_0x00010109b448(puVar8,0);
          puVar4 = &uStack_90;
          func_0x00010109b930(puVar4,puVar3 + 4,puVar8,lVar1);
          func_0x000100d276a0(uStack_90,uStack_88,uStack_80,lStack_78,plStack_70);
          if (puVar4 != puVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102df8da0);
            (*pcVar2)();
          }
        }
        uVar6 = uStack_a8;
        func_0x000107c614f0(uStack_a8);
        (**(code **)(lStack_a0 + 0x38))(puVar3,uVar6,lStack_a0);
        func_0x000107c615e8(uStack_a8);
        func_0x000107c61574(puVar3);
        FUN_102df7214(lVar5);
        func_0x000107c6142c(lVar5);
        lVar5 = lVar1;
      }
    }
    func_0x000107c6142c(lVar5);
  }
  return;
}



/* Entry: 102df8f74; end: 102df915b;  */

void FUN_102df8f74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_60;
  long lStack_58;
  
  uVar6 = *unaff_x20;
  uStack_a0 = 0;
  lStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x26);
  func_0x000107c6142c(lStack_98);
  uStack_a0 = 0x203a6449736e656c;
  lStack_98 = -0x1800000000000000;
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x436b616572747320,0xee00203a746e756f);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  lStack_58 = param_3;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x6470752073617720,0xec00000064657461);
  lVar1 = lStack_98;
  func_0x0001007d6c6c(1,uStack_a0,lStack_98,uVar6,&PTR_DAT_1105d5508);
  func_0x000107c6142c(lVar1);
  lStack_58 = 0;
  lStack_60 = 0;
  uVar6 = unaff_x20[0xc];
  plStack_70 = &lStack_60;
  uStack_90 = param_1;
  uStack_88 = param_2;
  lStack_80 = param_3;
  plStack_78 = &lStack_58;
  func_0x000107c6157c(uVar6);
  func_0x000100075034(0x102df9c9c,&uStack_a0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar6);
  lVar3 = lStack_58;
  lVar1 = lStack_60;
  if ((lStack_58 != 0) && (lStack_60 != 0)) {
    func_0x0001000d224c(&uStack_a0);
    lVar2 = lStack_98;
    uVar6 = uStack_a0;
    uVar4 = uStack_a0;
    func_0x000107c614f0(uStack_a0);
    (**(code **)(lVar2 + 0x40))(lVar3,uVar4,lVar2);
    func_0x000107c615e8(uVar6);
    FUN_102df7214(lVar1);
  }
  func_0x000107c6142c(lStack_60);
  func_0x000107c6142c(lVar3);
  return;
}



/* Entry: 102df915c; end: 102df92a7;  */

void FUN_102df915c(long param_1,long param_2,ulong param_3,ulong param_4,undefined8 *param_5,
                  long *param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  FUN_102df6960();
  lVar8 = (long)*(int *)(lVar2 + 0x14);
  lVar7 = *(long *)(param_1 + lVar8);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    lVar5 = param_2;
    uVar4 = param_3;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar1 = *(undefined1 *)(*(long *)(lVar7 + 0x38) + lVar5 * 0x10);
      func_0x000107c6142c(lVar7);
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x000107c61558(uVar3);
      lVar5 = *(long *)(param_1 + lVar8);
      FUN_102df92dc(uVar1,param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU),param_2,param_3,
                    uVar3);
      *(long *)(param_1 + lVar8) = lVar5;
      lVar2 = (long)*(int *)(lVar2 + 0x1c);
      func_0x000107c6157c(lVar5);
      uVar3 = *(undefined8 *)(param_1 + lVar2);
      func_0x000107c61558(uVar3);
      uVar6 = *(undefined8 *)(param_1 + lVar2);
      func_0x000101687ce0(param_4,param_2,param_3,uVar3);
      *(undefined8 *)(param_1 + lVar2) = uVar6;
      uVar3 = *param_5;
      *param_5 = uVar6;
      func_0x000107c6157c();
      func_0x000107c6142c(uVar3);
      lVar7 = *param_6;
      *param_6 = lVar5;
    }
    func_0x000107c6142c(lVar7);
  }
  return;
}



/* Entry: 102df92a8; end: 102df92ab;  */

void FUN_102df92a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_60;
  long lStack_58;
  
  uVar6 = *unaff_x20;
  uStack_a0 = 0;
  lStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x26);
  func_0x000107c6142c(lStack_98);
  uStack_a0 = 0x203a6449736e656c;
  lStack_98 = -0x1800000000000000;
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x436b616572747320,0xee00203a746e756f);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  lStack_58 = param_3;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x6470752073617720,0xec00000064657461);
  lVar1 = lStack_98;
  func_0x0001007d6c6c(1,uStack_a0,lStack_98,uVar6,&PTR_DAT_1105d5508);
  func_0x000107c6142c(lVar1);
  lStack_58 = 0;
  lStack_60 = 0;
  uVar6 = unaff_x20[0xc];
  plStack_70 = &lStack_60;
  uStack_90 = param_1;
  uStack_88 = param_2;
  lStack_80 = param_3;
  plStack_78 = &lStack_58;
  func_0x000107c6157c(uVar6);
  func_0x000100075034(0x102df9c9c,&uStack_a0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar6);
  lVar3 = lStack_58;
  lVar1 = lStack_60;
  if ((lStack_58 != 0) && (lStack_60 != 0)) {
    func_0x0001000d224c(&uStack_a0);
    lVar2 = lStack_98;
    uVar6 = uStack_a0;
    uVar4 = uStack_a0;
    func_0x000107c614f0(uStack_a0);
    (**(code **)(lVar2 + 0x40))(lVar3,uVar4,lVar2);
    func_0x000107c615e8(uVar6);
    FUN_102df7214(lVar1);
  }
  func_0x000107c6142c(lStack_60);
  func_0x000107c6142c(lVar3);
  return;
}



/* Entry: 102df92ac; end: 102df92db;  */

void FUN_102df92ac(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 102df92dc; end: 102df95bb;  */

void FUN_102df92dc(byte param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  byte *pbVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x000100029284();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102df93bc);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    FUN_102df95bc(lVar7,param_5 & 1);
    uVar4 = param_3;
    uVar8 = param_4;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102df9380);
      (*pcVar3)();
    }
  }
  else if ((param_5 & 1) == 0) {
    func_0x000102df9444();
    lVar7 = *unaff_x20;
    goto joined_r0x000102df93d0;
  }
  lVar7 = *unaff_x20;
joined_r0x000102df93d0:
  if ((uVar5 & 1) != 0) {
    pbVar1 = (byte *)(*(long *)(lVar7 + 0x38) + uVar4 * 0x10);
    *pbVar1 = param_1 & 1;
    *(undefined8 *)(pbVar1 + 8) = param_2;
    return;
  }
  lVar6 = lVar7 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  pbVar1 = (byte *)(*(long *)(lVar7 + 0x38) + uVar4 * 0x10);
  *pbVar1 = param_1 & 1;
  *(undefined8 *)(pbVar1 + 8) = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102df9444);
    (*pcVar3)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 102df95bc; end: 102df9c67;  */

void FUN_102df95bc(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x112f1b660;
  func_0x0001000285a8(0x112f1b660,&UNK_10db541b8);
  lVar8 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar7);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102df983c:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar8;
    return;
  }
  puVar19 = (ulong *)(lVar17 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar18 = uVar18 & *puVar19;
  lVar1 = lVar8 + 0x40;
  lVar11 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar20 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102df986c);
          (*pcVar6)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1) != 0) {
            uVar18 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar19 = -1L << (uVar18 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar19,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102df983c;
        }
        uVar18 = puVar19[lVar20];
        lVar11 = lVar11 + 1;
      } while (uVar18 == 0);
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar20 = lVar11;
    }
    lVar11 = (LZCOUNT(uVar10) | lVar20 << 6) * 0x10;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + lVar11);
    uVar7 = *puVar2;
    uVar3 = puVar2[1];
    puVar9 = (undefined1 *)(*(long *)(lVar17 + 0x38) + lVar11);
    uVar4 = *puVar9;
    uVar12 = *(undefined8 *)(puVar9 + 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    puVar9 = auStack_a8;
    func_0x000107c5fb58(puVar9,uVar7,uVar3);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar9 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar10 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102df9870);
          (*pcVar6)();
        }
        uVar13 = 0;
        if (uVar15 != uVar10) {
          uVar13 = uVar15;
        }
        bVar5 = (bool)(uVar15 == uVar10 | bVar5);
        uVar15 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar13 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar10 * 0x10);
    *puVar2 = uVar7;
    puVar2[1] = uVar3;
    puVar9 = (undefined1 *)(*(long *)(lVar8 + 0x38) + uVar10 * 0x10);
    *puVar9 = uVar4;
    *(undefined8 *)(puVar9 + 8) = uVar12;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar11 = lVar20;
  } while( true );
}



/* Entry: 102df9c68; end: 102df9cbb;  */

void FUN_102df9c68(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102df7cb0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102df9cbc; end: 102df9dd3;  */

long * FUN_102df9cbc(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
    lVar8 = *(long *)(lVar3 + -8);
    plVar4 = param_2;
    (**(code **)(lVar8 + 0x30))(param_2,1,lVar3);
    if ((int)plVar4 == 0) {
      (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar3);
      (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      lVar3 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = *(undefined8 *)((long)param_2 + (long)iVar1);
    *(undefined8 *)((long)param_1 + (long)iVar1) = uVar7;
    uVar6 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) = uVar6;
    func_0x000107c61434();
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar6);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar5 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102df9dd4; end: 102df9e53;  */

/* WARNING: Possible PIC construction at 0x000102df9e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102df9e30) */

void FUN_102df9dd4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 8))(param_1,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 102df9e54; end: 102df9f3f;  */

long FUN_102df9e54(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  lVar3 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 102df9f40; end: 102dfa097;  */

long FUN_102df9f40(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar3 = param_1;
  (*pcVar6)(param_1,1,lVar1);
  lVar2 = param_2;
  (*pcVar6)(param_2,1,lVar1);
  if ((int)lVar3 == 0) {
    if ((int)lVar2 == 0) {
      (**(code **)(lVar5 + 0x18))(param_1,param_2,lVar1);
      goto LAB_102dfa010;
    }
    (**(code **)(lVar5 + 8))(param_1,lVar1);
  }
  else if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
    goto LAB_102dfa010;
  }
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
LAB_102dfa010:
  lVar3 = (long)*(int *)(param_3 + 0x14);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  lVar3 = (long)*(int *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  lVar3 = (long)*(int *)(param_3 + 0x1c);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  return param_1;
}



/* Entry: 102dfa098; end: 102dfa16f;  */

long FUN_102dfa098(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar2);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 102dfa170; end: 102dfa2af;  */

long FUN_102dfa170(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar4 = param_1;
  (*pcVar6)(param_1,1,lVar1);
  lVar2 = param_2;
  (*pcVar6)(param_2,1,lVar1);
  if ((int)lVar4 == 0) {
    if ((int)lVar2 == 0) {
      (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar1);
      goto LAB_102dfa240;
    }
    (**(code **)(lVar5 + 8))(param_1,lVar1);
  }
  else if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
    goto LAB_102dfa240;
  }
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
LAB_102dfa240:
  lVar4 = (long)*(int *)(param_3 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
  func_0x000107c6142c(uVar3);
  lVar4 = (long)*(int *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
  func_0x000107c6142c(uVar3);
  lVar4 = (long)*(int *)(param_3 + 0x1c);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
  func_0x000107c6142c(uVar3);
  return param_1;
}



/* Entry: 102dfa2b0; end: 102dfa2c7;  */

void FUN_102dfa2b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102dfa2c8; end: 102dfa33f;  */

void FUN_102dfa2c8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBbWV_11034d660 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    func_0x000107c6153c(param_1,0x100,4,&lStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 102dfa340; end: 102dfa373;  */

void FUN_102dfa340(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102df716c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102dfa374; end: 102dfa3b3;  */

undefined8 FUN_102dfa374(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102dfa3b4; end: 102dfa42f;  */

void FUN_102dfa3b4(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102dfa430;
  plVar2[7] = lVar1;
  plVar2[8] = unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102df7e2c,0,0);
  return;
}



/* Entry: 102dfa430; end: 102dfa46b;  */

void FUN_102dfa430(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102dfa468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102dfa46c; end: 102dfa4af;  */

undefined8 FUN_102dfa46c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102dfa4b0; end: 102dfa4cb;  */

void FUN_102dfa4b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102df8aa4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102dfa4cc; end: 102dfa547;  */

undefined8 FUN_102dfa4cc(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102dfa548; end: 102dfa56f;  */

void FUN_102dfa548(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100ed9c6c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102dfa570; end: 102dfa5b3;  */

long FUN_102dfa570(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102dfa5b4; end: 102dfa607;  */

void FUN_102dfa5b4(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102dfa608;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102df6a30,0,0);
  return;
}



/* Entry: 102dfa608; end: 102dfa643;  */

void FUN_102dfa608(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102dfa640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102dfa644; end: 102dfa7c7;  */

/* WARNING: Possible PIC construction at 0x000102dfa76c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dfa770) */

void FUN_102dfa644(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  
  uVar8 = *unaff_x20;
  lVar1 = unaff_x20[2];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar2 = lVar1;
    func_0x000107c51c88(lVar1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    pcVar4 = FUN_102dfa7c8;
    func_0x0001000d5158(FUN_102dfa7c8,0,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar3);
    plVar5 = (long *)PTR___sSSSQsWP_11034da98;
    func_0x0001000c2068();
    func_0x000107c61574(pcVar4);
    puVar6 = &UNK_1105d5618;
    func_0x000107c613fc(&UNK_1105d5618,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    uVar8 = 0x102dfa94c;
    puVar7 = puVar6;
    (**(code **)(*plVar5 + 0x60))(0x102dfa94c);
    func_0x000107c61574(plVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c614f0(uVar8);
    (**(code **)(puVar7 + 0x10))(unaff_x20[4],uVar8,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  func_0x0001007d6c6c(3,0xd000000000000023,0x800000010f10e600,uVar8,&PTR_DAT_1105d55e8);
  return;
}



/* Entry: 102dfa7c8; end: 102dfa82f;  */

/* WARNING: Removing unreachable block (ram,0x000102dfa810) */

void FUN_102dfa7c8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fae8();
    func_0x000107c61170(lVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 102dfa830; end: 102dfa8d3;  */

void FUN_102dfa830(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(&uStack_58);
    func_0x000107c61574(uVar3);
    uVar3 = uStack_58;
    func_0x000107c614f0(uStack_58);
    (**(code **)(lStack_50 + 8))(uVar1,uVar2,uVar3,lStack_50);
    func_0x000107c615e8(uStack_58);
  }
  return;
}



/* Entry: 102dfa8d4; end: 102dfa927;  */

void FUN_102dfa8d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dfa928; end: 102dfa967;  */

void FUN_102dfa928(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102dfa938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102dfa968; end: 102dfa987;  */

void FUN_102dfa968(void)

{
  func_0x000107c61168(&PTR_PTR_112f1b8f0);
  return;
}



/* Entry: 102dfa988; end: 102dfaa0b;  */

long FUN_102dfa988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return unaff_x20;
}



/* Entry: 102dfaa0c; end: 102dfaa2b;  */

/* WARNING: Possible PIC construction at 0x000102df5f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102df5f74) */

long FUN_102dfaa0c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_2;
  lVar4 = param_2[1];
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  *param_1 = lVar1;
  param_1[1] = lVar4;
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  *(char *)(param_1 + 4) = (char)param_2[4];
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(lVar4);
    return lVar4;
  }
  return lVar1;
}



/* Entry: 102dfaa2c; end: 102dfaa9f;  */

uint FUN_102dfaa2c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar4 = *(undefined ***)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  ppuVar3 = &PTR____CFConstantStringClassReference_110f31158;
  func_0x000107c5faec();
  if (ppuVar4 == ppuVar3 && lVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(ppuVar4,lVar1,ppuVar3,param_2,0);
    uVar2 = (uint)ppuVar4;
  }
  func_0x000107c6142c(param_2);
  return uVar2 & 1;
}



/* Entry: 102dfaaa0; end: 102dfaaf3;  */

void FUN_102dfaaa0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102dfaafc();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102dfaaf4; end: 102dfaafb;  */

void FUN_102dfaaf4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102dfaafc();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102dfaafc; end: 102dfaba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dfaafc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fa40c0);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fa6458);
  lVar1 = 0;
  FUN_102df5e88();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  uVar2 = uVar4;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar1 + 0x18) = uVar4;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  FUN_102df59ac();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(long *)(unaff_x20 + 0x30) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102dfaba8; end: 102dfac0b;  */

undefined8 FUN_102dfaba8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 102dfac0c; end: 102dfac2b;  */

void FUN_102dfac0c(void)

{
  func_0x0001005def50();
  return;
}



/* Entry: 102dfac2c; end: 102dfac4f;  */

undefined8 FUN_102dfac2c(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x30);
  *(undefined8 *)(*unaff_x20 + 0x30) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 102dfac50; end: 102dfad1f;  */

void FUN_102dfac50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 102dfad20; end: 102dfad27;  */

void FUN_102dfad20(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112d6e3a8,&UNK_10d930310);
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  lVar2 = 0;
  FUN_102df6834();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *param_1 = lVar2;
  param_1[1] = (long)&PTR_DAT_1105d54b8;
  return;
}



/* Entry: 102dfad28; end: 102dfadff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dfad28(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_112f1bc70);
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  uVar3 = *(undefined8 *)(param_3 + _DAT_1130344b8);
  func_0x000107c6157c(uVar4);
  func_0x0001000bda74(uVar3);
  uVar1 = 0;
  FUN_102dfa968(0);
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x0001005dedc4(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_4);
  FUN_102dfaf04(uVar4,uVar3,param_4,uVar1,uVar2);
  *param_1 = uVar4;
  return;
}



/* Entry: 102dfae00; end: 102dfae67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dfae00(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1bc70);
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  uVar5 = *(undefined8 *)(lVar1 + _DAT_1130344b8);
  func_0x000107c6157c(uVar6);
  func_0x0001000bda74(uVar5);
  uVar2 = 0;
  FUN_102dfa968(0);
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x0001005dedc4(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  FUN_102dfaf04(uVar6,uVar5,uVar4,uVar2,uVar3);
  *param_1 = uVar6;
  return;
}



/* Entry: 102dfae68; end: 102dfae8b;  */

/* WARNING: Possible PIC construction at 0x000102dfae74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dfae78) */

void FUN_102dfae68(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102dfae8c; end: 102dfaf03;  */

void FUN_102dfae8c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dfaf04; end: 102dfb213;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_102dfaf04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x12;
  undefined1 uVar10;
  long lVar11;
  long alStack_a0 [2];
  undefined *apuStack_90 [4];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  lVar2 = 0;
  FUN_102df6960();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)apuStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar8 - extraout_x12;
  uVar3 = 0;
  FUN_102dfa968();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuStack_68 = &PTR_DAT_1105d5638;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  apuStack_90[1] = (undefined *)param_4;
  uStack_70 = uVar3;
  FUN_102df6854();
  apuStack_90[0] = puVar4;
  func_0x0001000285a8(0x112f1b500,&UNK_10db540e0);
  func_0x000107c613fc();
  ppuVar5 = apuStack_90;
  func_0x00010042e6a0();
  *(undefined ***)(param_5 + 0x50) = ppuVar5;
  puVar4 = puVar7;
  func_0x0001003d21d8();
  apuStack_90[0] = puVar4;
  func_0x0001000285a8(0x112f1b508,&UNK_10db542f0);
  func_0x000107c613fc();
  ppuVar5 = apuStack_90;
  func_0x00010042e6a0();
  *(undefined ***)(param_5 + 0x58) = ppuVar5;
  lVar6 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar11,1,1,lVar6);
  iVar1 = *(int *)(lVar2 + 0x14);
  puVar4 = puVar7;
  FUN_102df6854();
  *(undefined **)(lVar11 + iVar1) = puVar4;
  *(undefined **)(lVar11 + *(int *)(lVar2 + 0x18)) = PTR___swiftEmptySetSingleton_11034f1d8;
  iVar1 = *(int *)(lVar2 + 0x1c);
  func_0x0001003d21d8();
  *(undefined **)(lVar11 + iVar1) = puVar7;
  FUN_102dfb214(lVar11,lVar8);
  func_0x0001000285a8(0x112f1b668,&UNK_10db541c0);
  func_0x000107c613fc();
  func_0x00010006c248();
  func_0x000102dfb258(lVar11);
  *(long *)(param_5 + 0x60) = lVar8;
  apuStack_90[0] = (undefined *)0x0;
  func_0x0001000285a8(0x112f1b670,&UNK_10db54480);
  func_0x000107c613fc();
  ppuVar5 = apuStack_90;
  func_0x00010006c248();
  *(undefined ***)(param_5 + 0x68) = ppuVar5;
  *(undefined8 *)(param_5 + 0x70) = 0;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x0001000d224c(apuStack_90);
  puVar7 = apuStack_90[0];
  if (apuStack_90[0] == (undefined *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar4 = apuStack_90[0];
    func_0x000107c49c0c();
    uVar10 = SUB81(puVar4,0);
    func_0x000107c615e8(puVar7);
  }
  *(undefined1 *)(param_5 + 0x78) = uVar10;
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_3;
  FUN_102dfa570(apuStack_90 + 1,param_5 + 0x28);
  puVar7 = &UNK_1105d56f0;
  func_0x000107c613fc(&UNK_1105d56f0,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  *(undefined **)(lVar11 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar3 = 0xb;
  func_0x0001001ca524(0xb,4,0x38,4,0,0,&UNK_10db54488,puVar7);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(puVar7);
  func_0x0001000834e4(apuStack_90 + 1);
  uVar9 = *(undefined8 *)(param_5 + 0x70);
  *(undefined8 *)(param_5 + 0x70) = uVar3;
  func_0x000107c61574(uVar9);
  return param_5;
}



/* Entry: 102dfb214; end: 102dfb293;  */

undefined8 FUN_102dfb214(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102df6960();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102dfb294; end: 102dfb2e7;  */

void FUN_102dfb294(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102dfb2e8;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102df6a30,0,0);
  return;
}



/* Entry: 102dfb2e8; end: 102dfb323;  */

void FUN_102dfb2e8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102dfb320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102dfb324; end: 102dfb36b;  */

void FUN_102dfb324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 102dfb36c; end: 102dfb3c7;  */

undefined8 FUN_102dfb36c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 102dfb3c8; end: 102dfb3e7;  */

void FUN_102dfb3c8(void)

{
  func_0x0001005e0934();
  return;
}



/* Entry: 102dfb3e8; end: 102dfb443;  */

undefined8 FUN_102dfb3e8(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x28);
  *(undefined8 *)(*unaff_x20 + 0x28) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 102dfb444; end: 102dfb4eb;  */

long * FUN_102dfb444(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    param_1[2] = param_2[2];
    *(char *)(param_1 + 3) = (char)param_2[3];
    iVar2 = *(int *)(param_3 + 0x1c);
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61434(lVar4);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102dfb4ec; end: 102dfb52f;  */

void FUN_102dfb4ec(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000102dfb52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 102dfb530; end: 102dfb5ab;  */

undefined8 * FUN_102dfb530(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  iVar2 = *(int *)(param_3 + 0x1c);
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  (*pcVar4)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  return param_1;
}



/* Entry: 102dfb5ac; end: 102dfb70b;  */

undefined8 * FUN_102dfb5ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  iVar1 = *(int *)(param_3 + 0x1c);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 102dfb70c; end: 102dfb723;  */

void FUN_102dfb70c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102dfb724; end: 102dfb7fb;  */

void FUN_102dfb724(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_40 = &UNK_10db54518;
  puStack_30 = &UNK_10db54530;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 102dfb7fc; end: 102dfb85b; -[GamesActivityDataServices init] */

void FUN_102dfb7fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesActivityDataServices.GamesActivityDataServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102dfb828);
  (*pcVar1)();
}



/* Entry: 102dfb85c; end: 102dfb86b; -[GamesActivityDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dfb85c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f1bc70));
  return;
}



/* Entry: 102dfb86c; end: 102dfc15b;  */

/* WARNING: Possible PIC construction at 0x000102dfba84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dfbb18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dfbb28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dfbd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dfbda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dfbbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dfc0f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dfbbc0) */
/* WARNING: Removing unreachable block (ram,0x000102dfbda4) */
/* WARNING: Removing unreachable block (ram,0x000102dfbd8c) */
/* WARNING: Removing unreachable block (ram,0x000102dfbb2c) */
/* WARNING: Removing unreachable block (ram,0x000102dfbda8) */
/* WARNING: Removing unreachable block (ram,0x000102dfbb1c) */
/* WARNING: Removing unreachable block (ram,0x000102dfba88) */
/* WARNING: Removing unreachable block (ram,0x000102dfbb34) */
/* WARNING: Removing unreachable block (ram,0x000102dfba8c) */
/* WARNING: Removing unreachable block (ram,0x000102dfbb64) */
/* WARNING: Removing unreachable block (ram,0x000102dfbaa8) */
/* WARNING: Removing unreachable block (ram,0x000102dfbba0) */
/* WARNING: Removing unreachable block (ram,0x000102dfbadc) */
/* WARNING: Removing unreachable block (ram,0x000102dfbbc8) */
/* WARNING: Removing unreachable block (ram,0x000102dfbc54) */
/* WARNING: Removing unreachable block (ram,0x000102dfbc58) */
/* WARNING: Removing unreachable block (ram,0x000102dfbc60) */
/* WARNING: Removing unreachable block (ram,0x000102dfbc64) */
/* WARNING: Removing unreachable block (ram,0x000102dfbc9c) */
/* WARNING: Removing unreachable block (ram,0x000102dfbca0) */
/* WARNING: Removing unreachable block (ram,0x000102dfbca8) */
/* WARNING: Removing unreachable block (ram,0x000102dfbcac) */
/* WARNING: Removing unreachable block (ram,0x000102dfbcb4) */
/* WARNING: Removing unreachable block (ram,0x000102dfbcb8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102dfbb04) */
/* WARNING: Removing unreachable block (ram,0x000102dfbdf0) */
/* WARNING: Removing unreachable block (ram,0x000102dfbe98) */
/* WARNING: Removing unreachable block (ram,0x000102dfbee0) */
/* WARNING: Removing unreachable block (ram,0x000102dfbea0) */
/* WARNING: Removing unreachable block (ram,0x000102dfbf28) */
/* WARNING: Removing unreachable block (ram,0x000102dfbf30) */
/* WARNING: Removing unreachable block (ram,0x000102dfbea8) */
/* WARNING: Removing unreachable block (ram,0x000102dfbe74) */
/* WARNING: Removing unreachable block (ram,0x000102dfbec8) */
/* WARNING: Removing unreachable block (ram,0x000102dfbe78) */
/* WARNING: Removing unreachable block (ram,0x000102dfbf04) */
/* WARNING: Removing unreachable block (ram,0x000102dfc138) */
/* WARNING: Removing unreachable block (ram,0x000102dfbf0c) */
/* WARNING: Removing unreachable block (ram,0x000102dfbe80) */
/* WARNING: Removing unreachable block (ram,0x000102dfbf44) */
/* WARNING: Removing unreachable block (ram,0x000102dfbfa8) */
/* WARNING: Removing unreachable block (ram,0x000102dfbfac) */
/* WARNING: Removing unreachable block (ram,0x000102dfbfc4) */
/* WARNING: Removing unreachable block (ram,0x000102dfbfc8) */
/* WARNING: Removing unreachable block (ram,0x000102dfbfd0) */
/* WARNING: Removing unreachable block (ram,0x000102dfbfd4) */
/* WARNING: Removing unreachable block (ram,0x000102dfc034) */
/* WARNING: Removing unreachable block (ram,0x000102dfc040) */
/* WARNING: Removing unreachable block (ram,0x000102dfc118) */
/* WARNING: Removing unreachable block (ram,0x000102dfc0d8) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Removing unreachable block (ram,0x000102dfc0f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dfb86c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar3 = 0x6b6e696c70656564;
  func_0x000107c614f0();
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x2a);
  func_0x000107c6142c(uStack_68);
  uStack_70 = 0xd000000000000018;
  uStack_68 = 0x800000010f10e8a0;
  if (param_1 < 3) {
    if (param_1 == 0) {
      uVar2 = 0x800000010f10e7a0;
      uVar3 = 0xd000000000000012;
    }
    else if (param_1 == 1) {
      uVar2 = 0xe800000000000000;
    }
    else {
      if (param_1 != 2) {
LAB_102dfbdcc:
        lStack_78 = param_1;
        func_0x000107c60614(&UNK_1106a2d58,&lStack_78,&UNK_1106a2d58,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102dfbdf0);
        (*pcVar1)();
      }
      uVar2 = 0x800000010f10e780;
      uVar3 = 0xd000000000000011;
    }
  }
  else if (param_1 == 3) {
    uVar3 = 0x625f6e6f69746361;
    uVar2 = 0xef796172745f7261;
  }
  else if (param_1 == 4) {
    uVar3 = 0x6172645f74616863;
    uVar2 = 0xeb00000000726577;
  }
  else {
    if (param_1 != 5) goto LAB_102dfbdcc;
    uVar2 = 0x800000010f10e720;
    uVar3 = 0xd000000000000017;
  }
  func_0x000107c5fb78(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0x69446e4f73616820,0xee003d7373696d73);
  uVar3 = 0x4f4e;
  if (param_2 != 0) {
    uVar3 = 0x534559;
  }
  uVar2 = 0xe200000000000000;
  if (param_2 != 0) {
    uVar2 = 0xe300000000000000;
  }
  func_0x000107c5fb78(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  uVar3 = uStack_68;
  func_0x0001007d6c8c(1,uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  func_0x00010451338c();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102dfc15c; end: 102dfc1eb; -[_TtC34GamesExplorerLaunchingServicesImpl21GamesExplorerLauncher launchGamesExplorerWithSource:onDismiss:] */

void FUN_102dfc15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1105d58c8;
    func_0x000107c613fc(&UNK_1105d58c8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x102dfd4ac;
  }
  func_0x000107c61174(param_1);
  FUN_102dfb86c(param_3,uVar2,puVar1);
  func_0x000102dfce70(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102dfc1ec; end: 102dfc77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dfc1ec(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 unaff_x20;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  uVar13 = 0x6b6e696c70656564;
  uVar6 = unaff_x20;
  func_0x000107c614f0();
  uStack_70 = 0;
  lStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x2e);
  func_0x000107c6142c(lStack_68);
  uStack_70 = 0xd00000000000002b;
  lStack_68 = -0x7ffffffef0ef1910;
  if (param_2 < 3) {
    if (param_2 == 0) {
      uVar12 = 0x800000010f10e7a0;
      uVar13 = 0xd000000000000012;
    }
    else if (param_2 == 1) {
      uVar12 = 0xe800000000000000;
    }
    else {
      if (param_2 != 2) {
LAB_102dfc758:
        lStack_78 = param_2;
        func_0x000107c60614(&UNK_1106a2d58,&lStack_78,&UNK_1106a2d58,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102dfc77c);
        (*pcVar11)();
      }
      uVar12 = 0x800000010f10e780;
      uVar13 = 0xd000000000000011;
    }
  }
  else if (param_2 == 3) {
    uVar13 = 0x625f6e6f69746361;
    uVar12 = 0xef796172745f7261;
  }
  else if (param_2 == 4) {
    uVar13 = 0x6172645f74616863;
    uVar12 = 0xeb00000000726577;
  }
  else {
    if (param_2 != 5) goto LAB_102dfc758;
    uVar12 = 0x800000010f10e720;
    uVar13 = 0xd000000000000017;
  }
  func_0x000107c5fb78(uVar13,uVar12);
  func_0x000107c6142c(uVar12);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  lVar4 = lStack_68;
  uVar3 = uStack_70;
  uStack_70 = 0;
  lStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x13);
  func_0x000107c6142c(lStack_68);
  uStack_70 = 0xd000000000000010;
  lStack_68 = 0x800000010f10e740;
  uVar13 = 0x4f4e;
  if (param_3 != 0) {
    uVar13 = 0x534559;
  }
  uVar12 = 0xe200000000000000;
  if (param_3 != 0) {
    uVar12 = 0xe300000000000000;
  }
  func_0x000107c5fb78(uVar13,uVar12);
  func_0x000107c6142c(uVar12);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  lVar5 = lStack_68;
  uVar7 = uStack_70;
  uStack_70 = uVar3;
  lStack_68 = lVar4;
  func_0x000107c61434(lVar4);
  func_0x000107c5fb78(uVar7,lVar5);
  func_0x000107c6142c(lVar4);
  func_0x000107c6142c(lVar5);
  lVar4 = lStack_68;
  uVar3 = uStack_70;
  uStack_70 = 0x7369446e4f736168;
  lStack_68 = 0xed00003d7373696d;
  uVar13 = 0x4f4e;
  if (param_4 != 0) {
    uVar13 = 0x534559;
  }
  uVar12 = 0xe200000000000000;
  if (param_4 != 0) {
    uVar12 = 0xe300000000000000;
  }
  func_0x000107c5fb78(uVar13,uVar12);
  func_0x000107c6142c(uVar12);
  lVar5 = lStack_68;
  uVar7 = uStack_70;
  uStack_70 = uVar3;
  lStack_68 = lVar4;
  func_0x000107c61434(lVar4);
  func_0x000107c5fb78(uVar7,lVar5);
  func_0x000107c6142c(lVar4);
  func_0x000107c6142c(lVar5);
  lVar4 = lStack_68;
  func_0x0001007d6c8c(1,uStack_70,lStack_68,unaff_x20,uVar6,&PTR_DAT_1105d5820);
  func_0x000107c6142c(lVar4);
  func_0x0001000d224c(&uStack_70);
  lVar4 = lStack_68;
  uVar3 = uStack_70;
  if (uStack_70 == 0) {
    func_0x000102dfbdf0(param_2,param_4,param_5,2);
  }
  else {
    uVar7 = uStack_70;
    func_0x000107c614f0();
    uVar8 = uVar7;
    (**(code **)(lVar4 + 8))();
    if ((uVar8 & 1) == 0) {
      uStack_70 = 0;
      lStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x20);
      func_0x000107c6142c(lStack_68);
      uStack_70 = 0xd00000000000001e;
      lStack_68 = 0x800000010f10e760;
      uVar13 = 0xeb00000000726577;
      uVar12 = 0x6172645f74616863;
      if (param_2 != 4) {
        uVar13 = 0x800000010f10e720;
        uVar12 = 0xd000000000000017;
      }
      uVar1 = 0xef796172745f7261;
      uVar2 = 0x625f6e6f69746361;
      if (param_2 != 3) {
        uVar1 = uVar13;
        uVar2 = uVar12;
      }
      uVar13 = 0x6b6e696c70656564;
      if (param_2 != 1) {
        uVar13 = 0xd000000000000011;
      }
      uVar12 = 0xe800000000000000;
      if (param_2 != 1) {
        uVar12 = 0x800000010f10e780;
      }
      if (param_2 == 0) {
        uVar13 = 0xd000000000000012;
        uVar12 = 0x800000010f10e7a0;
      }
      if (param_2 < 3) {
        uVar1 = uVar12;
        uVar2 = uVar13;
      }
      func_0x000107c5fb78(uVar2,uVar1);
      func_0x000107c6142c(uVar1);
      lVar5 = lStack_68;
      func_0x0001007d6c8c(1,uStack_70,lStack_68,unaff_x20,uVar6,&PTR_DAT_1105d5820);
      func_0x000107c6142c(lVar5);
      puVar9 = &UNK_1105d5878;
      func_0x000107c613fc(&UNK_1105d5878,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,unaff_x20);
      puVar10 = &UNK_1105d58a0;
      func_0x000107c613fc(&UNK_1105d58a0,0x38,7);
      *(long *)(puVar10 + 0x10) = param_2;
      *(long *)(puVar10 + 0x18) = param_4;
      *(undefined8 *)(puVar10 + 0x20) = param_5;
      *(undefined **)(puVar10 + 0x28) = puVar9;
      *(undefined8 *)(puVar10 + 0x30) = uVar6;
      pcVar11 = *(code **)(lVar4 + 0x10);
      func_0x000102dfce94(param_4);
      func_0x000107c6157c(puVar9);
      (*pcVar11)(param_1,param_2,param_3,0x102dfce90,puVar10,uVar7,lVar4);
      func_0x000107c615e8(uVar3);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar10);
    }
    else {
      func_0x000102dfbdf0(param_2,param_4,param_5,3);
      func_0x000107c615e8(uVar3);
    }
  }
  return;
}



/* Entry: 102dfc77c; end: 102dfc853; -[_TtC34GamesExplorerLaunchingServicesImpl21GamesExplorerLauncher launchGamesExplorerWithContainer:source:conversationContext:onDismiss:] */

/* WARNING: Possible PIC construction at 0x000102dfc834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dfc838) */

void FUN_102dfc77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1105d5850;
    func_0x000107c613fc(&UNK_1105d5850,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    uVar3 = 0x102dfce80;
  }
  func_0x000107c615f0(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102dfc1ec(param_3,param_4,param_5,uVar3,puVar2);
  func_0x000102dfce70(uVar3,puVar2);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102dfc854; end: 102dfc8db;  */

void FUN_102dfc854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618(param_5);
  FUN_102dfc8dc(param_2,param_3,param_4,param_1,param_5);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 102dfc8dc; end: 102dfcd93;  */

void FUN_102dfc8dc(long param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar8 = 0x6b6e696c70656564;
  if (param_4 == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x2e);
    func_0x000107c6142c(uStack_68);
    uStack_70 = 0xd00000000000001a;
    uStack_68 = 0x800000010f10e7c0;
    if (param_1 < 3) {
      if (param_1 == 0) {
        uVar9 = 0x800000010f10e7a0;
        uVar8 = 0xd000000000000012;
      }
      else if (param_1 == 1) {
        uVar9 = 0xe800000000000000;
      }
      else {
        if (param_1 != 2) goto LAB_102dfcd70;
        uVar9 = 0x800000010f10e780;
        uVar8 = 0xd000000000000011;
      }
    }
    else if (param_1 == 3) {
      uVar8 = 0x625f6e6f69746361;
      uVar9 = 0xef796172745f7261;
    }
    else if (param_1 == 4) {
      uVar8 = 0x6172645f74616863;
      uVar9 = 0xeb00000000726577;
    }
    else {
      if (param_1 != 5) goto LAB_102dfcd70;
      uVar9 = 0x800000010f10e720;
      uVar8 = 0xd000000000000017;
    }
    func_0x000107c5fb78(uVar8,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5fb78(0xd000000000000012,0x800000010f10e7e0);
    uVar8 = uStack_68;
    func_0x0001007d6c8c(1,uStack_70,uStack_68,param_5);
    func_0x000107c6142c(uVar8);
    if (param_2 == (code *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    lVar4 = param_4;
    func_0x000107c5ed2c();
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(uStack_68);
    uStack_70 = 0xd00000000000001a;
    uStack_68 = 0x800000010f10e7c0;
    if (param_1 < 3) {
      if (param_1 == 0) {
        uVar9 = 0x800000010f10e7a0;
        uVar8 = 0xd000000000000012;
      }
      else if (param_1 == 1) {
        uVar9 = 0xe800000000000000;
      }
      else {
        if (param_1 != 2) {
LAB_102dfcd70:
          uStack_68 = 0x800000010f10e7c0;
          uStack_70 = 0xd00000000000001a;
          lStack_78 = param_1;
          func_0x000107c60614(&UNK_1106a2d58,&lStack_78,&UNK_1106a2d58,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102dfcd94);
          (*pcVar3)();
        }
        uVar9 = 0x800000010f10e780;
        uVar8 = 0xd000000000000011;
      }
    }
    else if (param_1 == 3) {
      uVar8 = 0x625f6e6f69746361;
      uVar9 = 0xef796172745f7261;
    }
    else if (param_1 == 4) {
      uVar8 = 0x6172645f74616863;
      uVar9 = 0xeb00000000726577;
    }
    else {
      if (param_1 != 5) goto LAB_102dfcd70;
      uVar9 = 0x800000010f10e720;
      uVar8 = 0xd000000000000017;
    }
    func_0x000107c5fb78(uVar8,uVar9);
    func_0x000107c6142c(uVar9);
    uVar9 = 0xef20726f7272653d;
    func_0x000107c5fb78(0x656d6f6374756f20,0xef20726f7272653d);
    uVar1 = uStack_68;
    uVar8 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x1b);
    func_0x000107c6142c(uStack_68);
    uStack_70 = 0x6d6f44726f727265;
    uStack_68 = 0xec0000003d6e6961;
    lVar5 = lVar4;
    func_0x000107c42210(lVar4);
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    func_0x000107c5fb78(lVar6,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5fb78(0x6f43726f72726520,0xeb000000003d6564);
    lVar5 = lVar4;
    func_0x000107c3fcb0();
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    lStack_78 = lVar5;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar7);
    uVar2 = uStack_68;
    uVar9 = uStack_70;
    uStack_70 = uVar8;
    uStack_68 = uVar1;
    func_0x000107c61434(uVar1);
    func_0x000107c5fb78(uVar9,uVar2);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar2);
    uVar8 = uStack_68;
    func_0x0001007d6c8c(3,uStack_70,uStack_68,param_5);
    func_0x000107c61170(lVar4);
    func_0x000107c6142c(uVar8);
    if (param_2 == (code *)0x0) {
      return;
    }
    func_0x000107c5ed2c(param_4);
  }
  (*param_2)(param_4);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 102dfcd94; end: 102dfcdf3; -[_TtC34GamesExplorerLaunchingServicesImpl21GamesExplorerLauncher init] */

void FUN_102dfcd94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerLaunchingServicesImpl.GamesExplorerLauncher",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102dfcdc0);
  (*pcVar1)();
}



/* Entry: 102dfcdf4; end: 102dfce2b; -[_TtC34GamesExplorerLaunchingServicesImpl21GamesExplorerLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dfcdf4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1bca0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f1bca8));
  return;
}



/* Entry: 102dfce2c; end: 102dfce4b;  */

void FUN_102dfce2c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a7150);
  return;
}



/* Entry: 102dfce4c; end: 102dfcea3;  */

void FUN_102dfce4c(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102dfce5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}


