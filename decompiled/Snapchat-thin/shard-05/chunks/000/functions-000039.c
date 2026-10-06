/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a73088; end: 103a7309f; -[SCMemoriesFacetKey .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a73088(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112fd9ff0);
  uVar2 = puVar1[1];
  if (*(char *)(puVar1 + 2) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return uVar2;
  }
  return *puVar1;
}



/* Entry: 103a730a0; end: 103a730bf;  */

void FUN_103a730a0(void)

{
  func_0x000107c61168(&PTR_PTR_112919988);
  return;
}



/* Entry: 103a730c0; end: 103a730c7; +[MemoriesFacetMatcher maximumMonthAmbiguity] */

undefined8 FUN_103a730c0(void)

{
  return 2;
}



/* Entry: 103a730c8; end: 103a73267;  */

undefined8 FUN_103a730c8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined *puStack_58;
  
  lVar3 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_70 + -extraout_x8;
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar4 + -8);
  lVar3 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_60 = param_1;
  puStack_58 = (undefined *)param_2;
  func_0x000107c5eb88(lVar11);
  func_0x000100e8b654();
  puVar2 = PTR___sSSN_11034da80;
  lVar5 = lVar11;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c601f0(lVar11,PTR___sSSN_11034da80,lVar3);
  (**(code **)(lVar12 + 8))(lVar11,lVar4);
  lVar4 = 0;
  lStack_60 = lVar5;
  puStack_58 = puVar8;
  func_0x000107c5ef14();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar10,1,1,lVar4);
  uVar6 = 0x181;
  puVar9 = puVar10;
  func_0x000107c60228(0x181,puVar10,puVar2,lVar3);
  func_0x000100eca640(puVar10);
  func_0x000107c6142c(puVar8);
  uVar1 = uVar6 & 0xffffffffffff;
  if (((ulong)puVar9 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar9 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c6142c(puVar9);
    uVar7 = 2;
  }
  else {
    FUN_103a735e8(uVar6,puVar9);
    func_0x000107c6142c(puVar9);
    uVar7 = 1;
    if ((uVar6 & 1) == 0) {
      uVar7 = 2;
    }
  }
  return uVar7;
}



/* Entry: 103a73268; end: 103a7327b;  */

void FUN_103a73268(void)

{
  puRam0000000112fda028 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 103a7327c; end: 103a732e7; +[MemoriesFacetMatcher setKeyboardLanguageIdentifiers:] */

void FUN_103a7327c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  if (lRam0000000112fda020 != -1) {
    func_0x000107c61568(0x112fda020,FUN_103a73268);
  }
  uVar1 = uRam0000000112fda028;
  uRam0000000112fda028 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103a732e8; end: 103a732f7;  */

uint FUN_103a732e8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    func_0x000107c61174(param_3);
    lVar1 = param_3;
    FUN_103a74968();
    func_0x000103a75310(param_1,param_2,param_3,lVar1,0);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(lVar1);
    return (uint)param_1 & 1;
  }
  return 0;
}



/* Entry: 103a732f8; end: 103a73307; +[MemoriesFacetMatcher query:matchesFacetKey:] */

uint FUN_103a732f8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    if (param_4 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c61174(param_4);
      func_0x000107c61174();
      lVar1 = param_4;
      FUN_103a74968();
      func_0x000103a75310(param_3,param_2,param_4,lVar1,0);
      uVar2 = (uint)param_3;
      func_0x000107c6142c(param_2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_4);
      param_2 = lVar1;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar2 & 1;
}



/* Entry: 103a73308; end: 103a7338f;  */

uint FUN_103a73308(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    func_0x000107c61174(param_3);
    lVar1 = param_3;
    FUN_103a74968();
    func_0x000103a75310(param_1,param_2,param_3,lVar1,param_4 & 1);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(lVar1);
    return (uint)param_1 & 1;
  }
  return 0;
}



/* Entry: 103a73390; end: 103a73397; +[MemoriesFacetMatcher query:wholeMatchesFacetKey:] */

uint FUN_103a73390(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    if (param_4 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c61174(param_4);
      func_0x000107c61174();
      lVar1 = param_4;
      FUN_103a74968();
      func_0x000103a75310(param_3,param_2,param_4,lVar1,1);
      uVar2 = (uint)param_3;
      func_0x000107c6142c(param_2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_4);
      param_2 = lVar1;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar2 & 1;
}



/* Entry: 103a73398; end: 103a7344b;  */

uint FUN_103a73398(undefined8 param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    if (param_4 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c61174(param_4);
      func_0x000107c61174();
      lVar1 = param_4;
      FUN_103a74968();
      func_0x000103a75310(param_3,param_2,param_4,lVar1,param_5 & 1);
      uVar2 = (uint)param_3;
      func_0x000107c6142c(param_2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_4);
      param_2 = lVar1;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar2 & 1;
}



/* Entry: 103a7344c; end: 103a734f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103a7344c(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar2 = 0;
    lVar4 = 0;
  }
  else {
    uVar2 = 0;
    puVar3 = (undefined8 *)(param_3 + _DAT_112fd9ff0);
    bVar1 = *(byte *)(puVar3 + 2);
    lVar4 = 0;
    if (bVar1 < 2) {
      if (bVar1 == 0) goto LAB_103a734e4;
    }
    else {
      if (bVar1 != 2) goto LAB_103a734e4;
      puVar3 = puVar3 + 1;
    }
    uVar5 = *puVar3;
    FUN_103a74968(0);
    func_0x000103a75658(param_1,param_2,uVar5,uVar2);
    func_0x000107c6142c(uVar2);
    uVar2 = param_1;
    lVar4 = param_2;
  }
LAB_103a734e4:
  auVar6._8_8_ = lVar4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 103a734f8; end: 103a735e7; +[MemoriesFacetMatcher displayLanguageIdentifierForQuery:matchingMonthKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a734f8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
LAB_103a735cc:
    lVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    lVar4 = 0;
    if (param_4 != 0) {
      puVar3 = (undefined8 *)(param_4 + _DAT_112fd9ff0);
      bVar1 = *(byte *)(puVar3 + 2);
      if (bVar1 < 2) {
        if (bVar1 != 0) {
LAB_103a73554:
          uVar5 = *puVar3;
          func_0x000107c61174(param_4);
          lVar4 = param_4;
          FUN_103a74968();
          lVar2 = param_2;
          func_0x000103a75658(param_3,param_2,uVar5,lVar4);
          func_0x000107c61170(param_4);
          func_0x000107c6142c(param_2);
          func_0x000107c6142c(lVar4);
          if (lVar2 == 0) goto LAB_103a735cc;
          func_0x000107c5fadc(param_3,lVar2);
          param_2 = lVar2;
          lVar4 = param_3;
        }
      }
      else if (bVar1 == 2) {
        puVar3 = puVar3 + 1;
        goto LAB_103a73554;
      }
    }
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 103a735e8; end: 103a7374f;  */

bool FUN_103a735e8(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puStack_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          ppuVar5 = (undefined1 **)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            ppuVar5 = (undefined1 **)param_1;
            func_0x000107c60358(param_1,param_2);
          }
        }
        else {
          puStack_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          ppuVar5 = &puStack_70;
        }
        pbVar7 = (byte *)((long)ppuVar5 + (long)puVar9);
        uVar3 = (uint)*pbVar7;
        if ((char)*pbVar7 < '\0') {
          uVar8 = (uint)LZCOUNT(uVar3 << 0x18 ^ 0xffffffff);
          if (uVar8 < 3) {
            if (uVar8 == 1) goto LAB_103a73680;
            uVar3 = pbVar7[1] & 0x3f | (uVar3 & 0x1f) << 6;
            puVar6 = (undefined1 *)0x2;
          }
          else if (uVar8 == 3) {
            uVar3 = (uVar3 & 0xf) << 0xc | (pbVar7[1] & 0x3f) << 6 | pbVar7[2] & 0x3f;
            puVar6 = (undefined1 *)0x3;
          }
          else {
            uVar3 = (uVar3 & 0xf) << 0x12 | (pbVar7[1] & 0x3f) << 0xc | (pbVar7[2] & 0x3f) << 6 |
                    pbVar7[3] & 0x3f;
            puVar6 = (undefined1 *)0x4;
          }
        }
        else {
LAB_103a73680:
          puVar6 = (undefined1 *)0x1;
        }
      }
      else {
        lVar4 = (long)puVar9 << 0x10;
        puVar6 = param_1;
        func_0x000107c602f8(lVar4,param_1,param_2);
        uVar3 = (uint)lVar4;
      }
      bVar2 = 0x7f < uVar3;
    } while ((uVar3 < 0x80) && (puVar9 = puVar6 + (long)puVar9, (long)puVar9 < (long)uVar1));
  }
  return bVar2;
}



/* Entry: 103a73750; end: 103a7392f;  */

uint FUN_103a73750(undefined8 ****param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long extraout_x8;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)&pppuStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    uStack_78 = param_2 & 0xffffffffffffff;
    pppuStack_80 = (undefined8 ***)((param_2 & 0xfffffffffffffff) + 0x20);
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          ppppuVar9 = (undefined8 ****)pppuStack_80;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            ppppuVar9 = param_1;
            func_0x000107c60358(param_1,param_2);
          }
        }
        else {
          pppuStack_70 = param_1;
          uStack_68 = uStack_78;
          ppppuVar9 = &pppuStack_70;
        }
        pbVar4 = (byte *)((long)ppppuVar9 + lVar6);
        bVar2 = *pbVar4;
        uVar8 = (ulong)(uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar5 = (uint)LZCOUNT((uint)bVar2 << 0x18 ^ 0xffffffff);
          if (uVar5 < 3) {
            if (uVar5 == 1) goto LAB_103a73830;
            uVar8 = (ulong)(pbVar4[1] & 0x3f);
            ppppuVar9 = (undefined8 ****)0x2;
          }
          else if (uVar5 == 3) {
            uVar8 = (ulong)(pbVar4[2] & 0x3f);
            ppppuVar9 = (undefined8 ****)0x3;
          }
          else {
            uVar8 = (ulong)(pbVar4[3] & 0x3f);
            ppppuVar9 = (undefined8 ****)0x4;
          }
        }
        else {
LAB_103a73830:
          ppppuVar9 = (undefined8 ****)0x1;
        }
      }
      else {
        uVar8 = lVar6 << 0x10;
        ppppuVar9 = param_1;
        func_0x000107c602f8(uVar8,param_1,param_2);
      }
      func_0x000107c5eb74(lVar7);
      func_0x000107c5eb90();
      (**(code **)(lVar10 + 8))(lVar7,lVar3);
    } while (((uVar8 & 1) != 0) && (lVar6 = (long)ppppuVar9 + lVar6, lVar6 < (long)uVar1));
    uVar5 = (uint)uVar8 ^ 1;
  }
  return uVar5 & 1;
}



/* Entry: 103a73930; end: 103a73943;  */

void FUN_103a73930(void)

{
  puRam0000000112fda060 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return;
}



/* Entry: 103a73944; end: 103a740af;  */

void FUN_103a73944(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long extraout_x8;
  undefined1 *puVar15;
  long lVar16;
  long extraout_x8_00;
  long lVar17;
  undefined8 *puVar18;
  code *pcVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  code *pcVar28;
  long lStack_170;
  
  lVar6 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = &stack0xfffffffffffffe50 + -extraout_x8;
  lVar6 = 0;
  func_0x000107c5eb9c();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar26 = *(ulong *)(param_1 + 0x10);
  uVar27 = *(ulong *)(param_2 + 0x10);
  uVar1 = uVar27;
  if (uVar26 <= uVar27) {
    uVar1 = uVar26;
  }
  func_0x000103a746a0(0,uVar1,0);
  if (uVar1 != 0) {
    puVar18 = (undefined8 *)(param_2 + 0x28);
    puVar20 = (undefined8 *)(param_1 + 0x28);
    uVar22 = uVar1;
    uVar24 = uVar26;
    uVar25 = uVar27;
    do {
      if (uVar24 == 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x103a740a4);
        (*pcVar19)();
      }
      if (uVar25 == 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x103a740a8);
        (*pcVar19)();
      }
      uVar3 = *puVar20;
      uVar4 = *puVar18;
      lVar21 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61534();
      *(undefined8 *)(lVar21 + 0x18) = 4;
      *(undefined8 *)(lVar21 + 0x10) = 2;
      func_0x000107c61434(uVar3);
      uVar7 = uVar4;
      func_0x000107c61434(uVar4);
      func_0x000107c5eb88(lVar17);
      func_0x000100e8b654();
      puVar14 = PTR___sSSN_11034da80;
      puVar12 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar17,PTR___sSSN_11034da80,uVar7);
      pcVar19 = *(code **)(lVar16 + 8);
      (*pcVar19)(lVar17,lVar6);
      lVar8 = 0;
      func_0x000107c5ef14();
      pcVar28 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
      (*pcVar28)(puVar15,1,1,lVar8);
      uVar9 = 0x181;
      puVar13 = puVar15;
      func_0x000107c60228(0x181,puVar15,puVar14,uVar7);
      func_0x000100eca640(puVar15);
      func_0x000107c6142c(puVar12);
      *(undefined8 *)(lVar21 + 0x20) = uVar9;
      *(undefined1 **)(lVar21 + 0x28) = puVar13;
      func_0x000107c5eb88(lVar17);
      puVar12 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar17,PTR___sSSN_11034da80,uVar7);
      (*pcVar19)(lVar17,lVar6);
      (*pcVar28)(puVar15,1,1,lVar8);
      puVar14 = PTR___sSSN_11034da80;
      uVar9 = 0x181;
      puVar13 = puVar15;
      func_0x000107c60228(0x181,puVar15,PTR___sSSN_11034da80,uVar7);
      func_0x000100eca640(puVar15);
      func_0x000107c6142c(puVar12);
      *(undefined8 *)(lVar21 + 0x30) = uVar9;
      *(undefined1 **)(lVar21 + 0x38) = puVar13;
      lVar8 = lVar21;
      func_0x000100403a6c();
      func_0x000107c61588(lVar21);
      func_0x000107c61408((undefined8 *)(lVar21 + 0x20),2,puVar14);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar2 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        func_0x000103a746a0(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      uVar25 = uVar25 - 1;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(long *)(puVar5 + uVar2 * 8 + 0x20) = lVar8;
      uVar24 = uVar24 - 1;
      puVar18 = puVar18 + 2;
      puVar20 = puVar20 + 2;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if (uVar27 < uVar26) {
    lVar21 = uVar27 - uVar1;
    uVar22 = uVar1;
    if ((long)uVar1 <= (long)uVar27) {
      uVar22 = uVar27;
    }
    lVar23 = uVar22 - uVar1;
    lVar8 = uVar26 - uVar1;
    lStack_170 = param_1;
    do {
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x103a740ac);
        (*pcVar19)();
      }
      if (lVar21 == 0) {
        return;
      }
      if (lVar23 == 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x103a740b0);
        (*pcVar19)();
      }
      uVar3 = *(undefined8 *)(lStack_170 + uVar1 * 0x10 + 0x28);
      uVar4 = *(undefined8 *)(param_2 + uVar1 * 0x10 + 0x28);
      lVar10 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61534();
      *(undefined8 *)(lVar10 + 0x18) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 2;
      func_0x000107c61434(uVar3);
      uVar7 = uVar4;
      func_0x000107c61434(uVar4);
      func_0x000107c5eb88(lVar17);
      func_0x000100e8b654();
      puVar14 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar17,PTR___sSSN_11034da80,uVar7);
      pcVar19 = *(code **)(lVar16 + 8);
      (*pcVar19)(lVar17,lVar6);
      lVar11 = 0;
      func_0x000107c5ef14();
      pcVar28 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
      (*pcVar28)(puVar15,1,1,lVar11);
      uVar9 = 0x181;
      puVar13 = puVar15;
      func_0x000107c60228(0x181,puVar15,PTR___sSSN_11034da80,uVar7);
      func_0x000100eca640(puVar15);
      func_0x000107c6142c(puVar14);
      *(undefined8 *)(lVar10 + 0x20) = uVar9;
      *(undefined1 **)(lVar10 + 0x28) = puVar13;
      func_0x000107c5eb88(lVar17);
      puVar12 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar17,PTR___sSSN_11034da80,uVar7);
      (*pcVar19)(lVar17,lVar6);
      (*pcVar28)(puVar15,1,1,lVar11);
      puVar14 = PTR___sSSN_11034da80;
      uVar9 = 0x181;
      puVar13 = puVar15;
      func_0x000107c60228(0x181,puVar15,PTR___sSSN_11034da80,uVar7);
      func_0x000100eca640(puVar15);
      func_0x000107c6142c(puVar12);
      *(undefined8 *)(lVar10 + 0x30) = uVar9;
      *(undefined1 **)(lVar10 + 0x38) = puVar13;
      lVar11 = lVar10;
      func_0x000100403a6c();
      func_0x000107c61588(lVar10);
      func_0x000107c61408((undefined8 *)(lVar10 + 0x20),2,puVar14);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar26 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar26) {
        func_0x000103a746a0(1 < *(ulong *)(puVar5 + 0x18),uVar26 + 1,1);
      }
      lVar23 = lVar23 + -1;
      *(ulong *)(puVar5 + 0x10) = uVar26 + 1;
      *(long *)(puVar5 + uVar26 * 8 + 0x20) = lVar11;
      lVar21 = lVar21 + -1;
      lStack_170 = lStack_170 + 0x10;
      param_2 = param_2 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 103a740b0; end: 103a740b3;  */

undefined * FUN_103a740b0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [48];
  
  lVar4 = 0;
  func_0x000107c5ef14();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = (undefined *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  puVar9 = auStack_90;
  puVar5 = puVar8;
  func_0x000107c61534();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar7 = puVar5;
  func_0x000107c5ef04((long)puVar10 - extraout_x12);
  func_0x000107c5eed4();
  (**(code **)(lVar11 + 8))((long)puVar10 - extraout_x12,lVar4);
  *(undefined **)(puVar5 + 0x20) = puVar7;
  *(undefined1 **)(puVar5 + 0x28) = puVar9;
  func_0x000107c5eefc();
  puStack_b0 = puVar5;
  func_0x00010109a32c();
  puStack_98 = puStack_b0;
  if (lRam0000000112fda020 != -1) {
    func_0x000107c61568(0x112fda020,FUN_103a73268);
  }
  func_0x000107c61434(uRam0000000112fda028);
  func_0x00010109a32c();
  func_0x000107c61538(puVar8,0x112fda080);
  func_0x00010109a32c();
  puStack_a0 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar13 = *(long *)(puStack_98 + 0x10);
  puStack_b8 = puStack_98;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar13 != 0) {
    puVar12 = (undefined8 *)(puStack_98 + 0x28);
    do {
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      func_0x000107c61438(uVar3,2);
      ppuVar6 = &puStack_b0;
      func_0x000100403b00(ppuVar6,uVar1,uVar3);
      func_0x000107c6142c(uStack_a8);
      if (((ulong)ppuVar6 & 1) == 0) {
        func_0x000107c6142c(uVar3);
      }
      else {
        puVar5 = puVar8;
        func_0x000107c61558();
        puVar7 = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar2 = *(ulong *)(puVar7 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          func_0x0001000d182c(puVar8,uVar2 + 1,1,puVar7);
        }
        *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x20) = uVar1;
        *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x28) = uVar3;
      }
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  func_0x000107c6142c(puStack_b8);
  puVar5 = puStack_a0;
  lVar13 = *(long *)(puVar8 + 0x10);
  if (lVar13 == 0) {
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(puVar5);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_103a74684(0,lVar13,0);
    puVar12 = (undefined8 *)(puVar8 + 0x28);
    puVar5 = puStack_b0;
    do {
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      func_0x000107c61434(uVar3);
      func_0x000107c5eed0(puVar10,uVar1,uVar3);
      uVar2 = *(ulong *)(puVar5 + 0x10);
      puStack_b0 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        FUN_103a74684(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      puVar5 = puStack_b0;
      puVar12 = puVar12 + 2;
      *(ulong *)(puStack_b0 + 0x10) = uVar2 + 1;
      (**(code **)(lVar11 + 0x20))
                (puStack_b0 +
                 *(long *)(lVar11 + 0x48) * uVar2 +
                 ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)),puVar10,lVar4);
      puVar7 = puStack_a0;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(puVar7);
  }
  return puVar5;
}



/* Entry: 103a740b4; end: 103a740ef; -[MemoriesFacetMatcher init] */

void FUN_103a740b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a740f0; end: 103a74123;  */

void FUN_103a740f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a74124; end: 103a74127; -[MemoriesFacetMatcher .cxx_destruct] */

void FUN_103a74124(void)

{
  return;
}



/* Entry: 103a74128; end: 103a743e7;  */

void FUN_103a74128(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103a74200);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_103a743e8(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103a741c8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103a74278();
    lVar6 = *unaff_x20;
    goto joined_r0x000103a74214;
  }
  lVar6 = *unaff_x20;
joined_r0x000103a74214:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103a74278);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103a743e8; end: 103a74683;  */

void FUN_103a743e8(long param_1,ulong param_2)

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
  uVar6 = 0x112fda068;
  func_0x0001000285a8(0x112fda068,&UNK_10dc44438);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103a74650:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103a74680);
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
          goto LAB_103a74650;
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
      func_0x000107c61434(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103a74684);
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



/* Entry: 103a74684; end: 103a746bb;  */

void FUN_103a74684(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103a746bc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103a746bc; end: 103a74837;  */

undefined * FUN_103a746bc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103a74838);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112fda0b0;
    func_0x0001000285a8(0x112fda0b0,&UNK_10dc44450);
    lVar5 = 0;
    func_0x000107c5ef14();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103a74830);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103a74834);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x000107c5ef14();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 103a74838; end: 103a74967;  */

undefined * FUN_103a74838(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103a74968);
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
    puVar3 = (undefined *)0x112fda070;
    func_0x0001000285a8(0x112fda070,&UNK_10dc44440);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d5d480;
    func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
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



/* Entry: 103a74968; end: 103a75ac3;  */

undefined * FUN_103a74968(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [48];
  
  lVar4 = 0;
  func_0x000107c5ef14();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = (undefined *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  puVar9 = auStack_90;
  puVar5 = puVar8;
  func_0x000107c61534();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar7 = puVar5;
  func_0x000107c5ef04((long)puVar10 - extraout_x12);
  func_0x000107c5eed4();
  (**(code **)(lVar11 + 8))((long)puVar10 - extraout_x12,lVar4);
  *(undefined **)(puVar5 + 0x20) = puVar7;
  *(undefined1 **)(puVar5 + 0x28) = puVar9;
  func_0x000107c5eefc();
  puStack_b0 = puVar5;
  func_0x00010109a32c();
  puStack_98 = puStack_b0;
  if (lRam0000000112fda020 != -1) {
    func_0x000107c61568(0x112fda020,FUN_103a73268);
  }
  func_0x000107c61434(uRam0000000112fda028);
  func_0x00010109a32c();
  func_0x000107c61538(puVar8,0x112fda080);
  func_0x00010109a32c();
  puStack_a0 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar13 = *(long *)(puStack_98 + 0x10);
  puStack_b8 = puStack_98;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar13 != 0) {
    puVar12 = (undefined8 *)(puStack_98 + 0x28);
    do {
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      func_0x000107c61438(uVar3,2);
      ppuVar6 = &puStack_b0;
      func_0x000100403b00(ppuVar6,uVar1,uVar3);
      func_0x000107c6142c(uStack_a8);
      if (((ulong)ppuVar6 & 1) == 0) {
        func_0x000107c6142c(uVar3);
      }
      else {
        puVar5 = puVar8;
        func_0x000107c61558();
        puVar7 = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar2 = *(ulong *)(puVar7 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          func_0x0001000d182c(puVar8,uVar2 + 1,1,puVar7);
        }
        *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x20) = uVar1;
        *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x28) = uVar3;
      }
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  func_0x000107c6142c(puStack_b8);
  puVar5 = puStack_a0;
  lVar13 = *(long *)(puVar8 + 0x10);
  if (lVar13 == 0) {
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(puVar5);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_103a74684(0,lVar13,0);
    puVar12 = (undefined8 *)(puVar8 + 0x28);
    puVar5 = puStack_b0;
    do {
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      func_0x000107c61434(uVar3);
      func_0x000107c5eed0(puVar10,uVar1,uVar3);
      uVar2 = *(ulong *)(puVar5 + 0x10);
      puStack_b0 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        FUN_103a74684(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      puVar5 = puStack_b0;
      puVar12 = puVar12 + 2;
      *(ulong *)(puStack_b0 + 0x10) = uVar2 + 1;
      (**(code **)(lVar11 + 0x20))
                (puStack_b0 +
                 *(long *)(lVar11 + 0x48) * uVar2 +
                 ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)),puVar10,lVar4);
      puVar7 = puStack_a0;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(puVar7);
  }
  return puVar5;
}



/* Entry: 103a75ac4; end: 103a75ae3;  */

void FUN_103a75ac4(void)

{
  func_0x000107c61168(&PTR_PTR_112919a48);
  return;
}



/* Entry: 103a75ae4; end: 103a75b33;  */

uint FUN_103a75ae4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  lVar2 = param_1[1];
  uVar1 = *param_2;
  lVar3 = param_2[1];
  uVar4 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c60118(uVar5,uVar1,uVar4);
  return (uint)uVar5 & (uint)(lVar2 == lVar3);
}



/* Entry: 103a75b34; end: 103a75c4b; -[SCMemoriesFacetSuggestionData fieldIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a75b34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar3 = lRam0000000112fd9fb8;
  lVar2 = lRam0000000112fd9fb0;
  lVar1 = lRam0000000112fd9fa8;
  uVar4 = (uint)*(byte *)(*(long *)(param_1 + _DAT_112fda0f0) + _DAT_112fd9ff0 + 0x10);
  if (uVar4 - 1 < 2) {
    func_0x000107c61174(param_1);
    if (lVar2 != -1) {
      func_0x000107c61568(0x112fd9fb0,0x103a71d48);
    }
    puVar5 = (undefined8 *)0x11380cc88;
  }
  else if (uVar4 == 0) {
    func_0x000107c61174(param_1);
    if (lVar1 != -1) {
      func_0x000107c61568(0x112fd9fa8,FUN_103a71d14);
    }
    puVar5 = (undefined8 *)0x11380cc80;
  }
  else {
    func_0x000107c61174(param_1);
    if (lVar3 != -1) {
      func_0x000107c61568(0x112fd9fb8,FUN_103a71dc4);
    }
    puVar5 = (undefined8 *)0x11380cc90;
  }
  uVar6 = *puVar5;
  func_0x000107c6117c(uVar6);
  func_0x000107c61170(param_1);
  return uVar6;
}



/* Entry: 103a75c4c; end: 103a75d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a75c4c(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  uVar1 = (uint)*(byte *)(*(long *)(unaff_x20 + _DAT_112fda0f0) + _DAT_112fd9ff0 + 0x10);
  if (uVar1 - 1 < 2) {
    if (lRam0000000112fd9fb0 != -1) {
      func_0x000107c61568(0x112fd9fb0,0x103a71d48);
    }
    puVar2 = (undefined8 *)0x11380cc88;
  }
  else if (uVar1 == 0) {
    if (lRam0000000112fd9fa8 != -1) {
      func_0x000107c61568(0x112fd9fa8,FUN_103a71d14);
    }
    puVar2 = (undefined8 *)0x11380cc80;
  }
  else {
    if (lRam0000000112fd9fb8 != -1) {
      func_0x000107c61568(0x112fd9fb8,FUN_103a71dc4);
    }
    puVar2 = (undefined8 *)0x11380cc90;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*puVar2);
  return;
}



/* Entry: 103a75d2c; end: 103a75d33;  */

void FUN_103a75d2c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 103a75d34; end: 103a75d7f;  */

undefined8 * FUN_103a75d34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 103a75d80; end: 103a75dbb;  */

undefined8 * FUN_103a75d80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 103a75dbc; end: 103a75e57;  */

int FUN_103a75dbc(ulong *param_1,int param_2)

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



/* Entry: 103a75e58; end: 103a75ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a75e58(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010028d3e4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fda0c0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103a75ec4; end: 103a75ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a75ec4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010028d3e4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fda0c0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103a75ecc; end: 103a75f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a75ecc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fda0c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a75f18; end: 103a75f5f; -[_TtC33MemoriesSemanticSearchServicesAPI30MemoriesSemanticSearchServices semanticSearchManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a75f18(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 103a75f60; end: 103a75fbf; -[_TtC33MemoriesSemanticSearchServicesAPI30MemoriesSemanticSearchServices init] */

void FUN_103a75f60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSemanticSearchServicesAPI.MemoriesSemanticSearchServices",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a75f8c);
  (*pcVar1)();
}



/* Entry: 103a75fc0; end: 103a75fcf;  */

undefined1  [16] FUN_103a75fc0(void)

{
  return ZEXT816(0x1106c4b70);
}



/* Entry: 103a75fd0; end: 103a75fdf; -[_TtC33MemoriesSemanticSearchServicesAPI30MemoriesSemanticSearchServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a75fd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fda0c0));
  return;
}



/* Entry: 103a75fe0; end: 103a75fef; -[SCMemoriesFacetSuggestionData key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a75fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fda0f0));
  return;
}



/* Entry: 103a75ff0; end: 103a76007; -[SCMemoriesFacetSuggestionData snapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a75ff0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fda0f8);
}



/* Entry: 103a76008; end: 103a7613f; -[SCMemoriesFacetSuggestionData initWithKey:snapCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76008(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fda0f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fda0f8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103a76140; end: 103a761bb; -[SCMemoriesFacetSuggestionData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a76140(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  func_0x000107c606ac(auStack_68);
  func_0x000107c61174();
  FUN_103a72ef4();
  func_0x000107c60690();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fda0f8);
  func_0x000107c60690(uVar1);
  func_0x000107c606a4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103a761bc; end: 103a762a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103a761bc(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    func_0x000107c6147c(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar5 = *(undefined8 *)(lStack_58 + _DAT_112fda0f0);
      uVar2 = 0;
      FUN_103a730a0();
      auStack_50[0] = uVar5;
      lStack_38 = uVar2;
      func_0x000107c61174(uVar5);
      puVar3 = auStack_50;
      FUN_103a72ca0(puVar3);
      func_0x00010006e7f4(auStack_50);
      lVar4 = *(long *)(unaff_x20 + _DAT_112fda0f8);
      lVar6 = *(long *)(lStack_58 + _DAT_112fda0f8);
      func_0x000107c61170(lStack_58);
      return (uint)puVar3 & (uint)(lVar4 == lVar6);
    }
  }
  return 0;
}



/* Entry: 103a762a4; end: 103a76323; -[SCMemoriesFacetSuggestionData isEqual:] */

uint FUN_103a762a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103a761bc(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103a76324; end: 103a76327; -[SCMemoriesFacetSuggestionData copyWithZone:] */

void FUN_103a76324(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103a76328; end: 103a76343; -[SCMemoriesFacetSuggestionData description] */

void FUN_103a76328(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a76344; end: 103a763bf; -[SCMemoriesFacetSuggestionData init] */

void FUN_103a76344(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MemoriesSemanticSearchServicesAPI/MemoriesFacetSuggestionDataWrapper.swift",
                      0x4a,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a7638c);
  (*pcVar1)();
}



/* Entry: 103a763c0; end: 103a763cf; -[SCMemoriesFacetSuggestionData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a763c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fda0f0));
  return;
}



/* Entry: 103a763d0; end: 103a763ef;  */

void FUN_103a763d0(void)

{
  func_0x000107c61168(&PTR_PTR_112919bb8);
  return;
}



/* Entry: 103a763f0; end: 103a76407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a763f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fda0f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fda0f8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a76408; end: 103a764b3;  */

void FUN_103a76408(void)

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



/* Entry: 103a764b4; end: 103a764ff; -[MemoriesAPISnap snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a764b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fda128);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fda128))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a76500; end: 103a76647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda128);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda130);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112fda138) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fda140) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a76648; end: 103a766a7; -[MemoriesAPISnap init] */

void FUN_103a76648(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesDataAPI.MemoriesAPISnap",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a76674);
  (*pcVar1)();
}



/* Entry: 103a766a8; end: 103a766e7; -[MemoriesAPISnap .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a766a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fda128 + 8));
  uVar2 = *(ulong *)(param_1 + _DAT_112fda130);
  uVar1 = ((ulong *)(param_1 + _DAT_112fda130))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103a766e8; end: 103a766eb;  */

void FUN_103a766e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fda148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc44530;
  func_0x000107c61520(&UNK_10dc44530,&UNK_1106c4c80);
  puRam0000000112fda148 = puVar1;
  return;
}



/* Entry: 103a766ec; end: 103a7672b;  */

void FUN_103a766ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fda148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc44530;
  func_0x000107c61520(&UNK_10dc44530,&UNK_1106c4c80);
  puRam0000000112fda148 = puVar1;
  return;
}



/* Entry: 103a7672c; end: 103a7688f;  */

int FUN_103a7672c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a767a8;
        goto LAB_103a7678c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a7678c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103a767a8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a76890; end: 103a768af;  */

void FUN_103a76890(void)

{
  func_0x000107c61168(&PTR_PTR_112919c88);
  return;
}



/* Entry: 103a768b0; end: 103a768c3;  */

bool FUN_103a768b0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a768c4; end: 103a7696f;  */

void FUN_103a768c4(void)

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



/* Entry: 103a76970; end: 103a76973;  */

void FUN_103a76970(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fda178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc445e0;
  func_0x000107c61520(&UNK_10dc445e0,&UNK_1106c4d48);
  puRam0000000112fda178 = puVar1;
  return;
}



/* Entry: 103a76974; end: 103a769b3;  */

void FUN_103a76974(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fda178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc445e0;
  func_0x000107c61520(&UNK_10dc445e0,&UNK_1106c4d48);
  puRam0000000112fda178 = puVar1;
  return;
}



/* Entry: 103a769b4; end: 103a76b27;  */

void FUN_103a769b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a76b28; end: 103a76ba3; +[MemoriesDataProvidingDefaults taskAttribution] */

void FUN_103a76b28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  func_0x0001048cd7f0(0);
  uVar1 = 0;
  func_0x0001048cd7d0(0);
  func_0x0001048cc908();
  uVar2 = uVar1;
  func_0x0001048ccc5c();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x0001048ba888(uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a76ba4; end: 103a76bdf; -[MemoriesDataProvidingDefaults init] */

void FUN_103a76ba4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a76be0; end: 103a76c33;  */

void FUN_103a76be0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a76c34; end: 103a76c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76c34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fda1a8);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112fda1a8))[1];
  uVar3 = uVar1;
  func_0x000107c614f0();
  param_1[3] = uVar3;
  param_1[4] = uVar2;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar1);
  return;
}



/* Entry: 103a76c7c; end: 103a76c9b; -[_TtC15MemoriesDataAPI20MemoriesDataServices dataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76c7c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fda1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a76c9c; end: 103a76cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76c9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + _DAT_112fda1a8));
  return;
}



/* Entry: 103a76cac; end: 103a76d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76cac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda1a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a76d64; end: 103a76dc3; -[_TtC15MemoriesDataAPI20MemoriesDataServices init] */

void FUN_103a76d64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesDataAPI.MemoriesDataServices",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a76d90);
  (*pcVar1)();
}



/* Entry: 103a76dc4; end: 103a76dd3; -[_TtC15MemoriesDataAPI20MemoriesDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fda1a8));
  return;
}



/* Entry: 103a76dd4; end: 103a76de3; -[_TtC28SCMemoriesPickerUtilServices28SCMemoriesPickerUtilServices importer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fda1d8));
  return;
}



/* Entry: 103a76de4; end: 103a76e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76de4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fda1d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a76e30; end: 103a76e87; -[_TtC28SCMemoriesPickerUtilServices28SCMemoriesPickerUtilServices initWithImporter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112fda1d8) = param_3;
  lVar2 = param_1;
  func_0x00010029f90c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103a76e88; end: 103a76ee3; -[_TtC28SCMemoriesPickerUtilServices28SCMemoriesPickerUtilServices init] */

void FUN_103a76e88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesPickerUtilServices.SCMemoriesPickerUtilServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a76eb4);
  (*pcVar1)();
}



/* Entry: 103a76ee4; end: 103a76ef3; -[_TtC28SCMemoriesPickerUtilServices28SCMemoriesPickerUtilServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fda1d8));
  return;
}



/* Entry: 103a76ef4; end: 103a7708f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a76ef4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fda208) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fda210) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fda218) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112fda220) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112fda228) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fda230) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112fda238) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda240);
  *puVar1 = param_8;
  *(undefined1 *)(puVar1 + 1) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fda248) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda250);
  *puVar1 = param_12;
  *(undefined1 *)(puVar1 + 1) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112fda258) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112fda260) = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda268);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda270);
  *puVar1 = param_19;
  *(undefined1 *)(puVar1 + 1) = param_20;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a77090; end: 103a771bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77090(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fda208) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fda210) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fda218) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112fda220) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112fda228) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fda230) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112fda238) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda240);
  *puVar1 = param_8;
  *(undefined1 *)(puVar1 + 1) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fda248) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda250);
  *puVar1 = param_12;
  *(undefined1 *)(puVar1 + 1) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112fda258) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112fda260) = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda268);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda270);
  *puVar1 = param_19;
  *(undefined1 *)(puVar1 + 1) = param_20;
  func_0x000103a771a0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a771c0; end: 103a7721b; -[SCMemoriesSnapDocCommonLoggingParams init] */

void FUN_103a771c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapDocParsingServices.MemoriesSnapDocCommonLoggingParams",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a771ec);
  (*pcVar1)();
}



/* Entry: 103a7721c; end: 103a77257; -[SCMemoriesSnapDocCommonLoggingParams .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a77238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a7723c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7721c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fda248));
  return;
}



/* Entry: 103a77258; end: 103a77277;  */

void FUN_103a77258(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a77278; end: 103a77287; -[_TtC32SCMemoriesSnapDocParsingServices30MemoriesSnapDocParsingServices snapDocParser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fda2a8));
  return;
}



/* Entry: 103a77288; end: 103a7738f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a77288(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fda2a0) = param_1;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_103a7745c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103a77390;
  puStack_58 = &UNK_1106c4f58;
  ppuVar3 = &puStack_70;
  uStack_48 = param_1;
  func_0x000107c60bc4(ppuVar3);
  uVar1 = uStack_48;
  func_0x000107c61580(param_1,2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + _DAT_112fda2a8) = puVar2;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 103a77390; end: 103a773c7;  */

void FUN_103a77390(long param_1)

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



/* Entry: 103a773c8; end: 103a77423; -[_TtC32SCMemoriesSnapDocParsingServices30MemoriesSnapDocParsingServices init] */

void FUN_103a773c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapDocParsingServices.MemoriesSnapDocParsingServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a773f4);
  (*pcVar1)();
}



/* Entry: 103a77424; end: 103a7745b; -[_TtC32SCMemoriesSnapDocParsingServices30MemoriesSnapDocParsingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77424(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fda2a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fda2a8));
  return;
}



/* Entry: 103a7745c; end: 103a7747f;  */

undefined8 FUN_103a7745c(void)

{
  undefined8 uStack_18;
  
  func_0x0001000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 103a77480; end: 103a7748f;  */

void FUN_103a77480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 103a77490; end: 103a7749f; -[SCMemoriesSnapDocTranscodedMediaTypeImage image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fda2d8));
  return;
}



/* Entry: 103a774a0; end: 103a77537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a774a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fda2d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a77538; end: 103a77563; -[SCMemoriesSnapDocTranscodedMediaTypeImage init] */

void FUN_103a77538(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapDocTranscodingServices.MemoriesSnapDocTranscodedMediaTypeImage"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a77564);
  (*pcVar1)();
}



/* Entry: 103a77564; end: 103a77567;  */

void FUN_103a77564(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a77568; end: 103a77577; -[SCMemoriesSnapDocTranscodedMediaTypeImage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fda2d8));
  return;
}



/* Entry: 103a77578; end: 103a7760f; -[SCMemoriesSnapDocTranscodedMediaTypeVideo videoURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77578(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_11380cc98,lVar1);
  func_0x000107c5ed90();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


