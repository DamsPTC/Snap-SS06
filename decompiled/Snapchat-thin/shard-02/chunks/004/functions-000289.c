/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ceb7f0; end: 101ceb86f; -[_TtC31SCLensCollectionsImplementation35LensCollectionMetadataCachingMapper lensCollectionMetadataFromData:] */

void FUN_101ceb7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  FUN_101ceb638(param_3,param_2);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ceb870; end: 101ceb88b;  */

void FUN_101ceb870(void)

{
  long unaff_x20;
  
  FUN_101ceb508(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101ceb88c; end: 101ceb8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ceb88c(long param_1)

{
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    lStack_38 = param_1;
    func_0x000100087bd4(FUN_101ceb8b8,auStack_50,PTR___sytN_11034f1b0 + 8);
  }
  return;
}



/* Entry: 101ceb8b8; end: 101ceb8cf;  */

void FUN_101ceb8b8(void)

{
  long unaff_x20;
  
  FUN_101ceb380(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101ceb8d0; end: 101cec093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ceb8d0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  long unaff_x20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = 0;
  FUN_101cec184(0,0x112e1c1a8,&PTR_PTR_1126cd338);
  func_0x000107c614e8();
  func_0x000107c5ee20(param_1,param_2);
  uStack_70 = 0;
  func_0x000107c4e380();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar17 = uStack_70;
  if (uVar5 == 0) {
    uVar5 = uStack_70;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar17);
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    func_0x000107c614ac(uVar17);
LAB_101cebe2c:
    puVar18 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    puVar8 = puVar18;
    FUN_101cefd20();
    puVar19 = puVar8;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar8);
    func_0x000107c42d78(puVar18);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174();
    uVar17 = uVar5;
    func_0x000107c40dfc();
    func_0x000107c61180();
    if (uVar17 == 0) {
LAB_101cebe24:
      func_0x000107c61170(uVar5);
      goto LAB_101cebe2c;
    }
    uStack_70 = 0;
    uVar6 = 0;
    FUN_101cec184(0,0x112e1c1b0,&PTR_PTR_1126a9160);
    func_0x000107c5fc50(uVar17,&uStack_70,uVar6);
    func_0x000107c61170(uVar17);
    uVar17 = uStack_70;
    if (uStack_70 == 0) goto LAB_101cebe24;
    uVar7 = uVar5;
    func_0x000107c4b580();
    func_0x000107c61180();
    if (uVar7 == 0) {
LAB_101cebe1c:
      func_0x000107c6142c(uVar17);
      goto LAB_101cebe24;
    }
    uStack_70 = 0;
    uVar6 = 0;
    FUN_101cec184(0,0x112e1c1b8,&PTR_PTR_1126b37c8);
    func_0x000107c5fc50(uVar7,&uStack_70,uVar6);
    func_0x000107c61170(uVar7);
    uVar7 = uStack_70;
    if (uStack_70 == 0) goto LAB_101cebe1c;
    puVar8 = *(undefined **)(unaff_x20 + _DAT_112e1c178);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(uVar7);
      goto LAB_101cebe2c;
    }
    uVar20 = uVar5;
    func_0x000107c44fd8();
    puVar18 = PTR___ss5Int64VN_11034ee50;
    puVar19 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
    uStack_70 = uVar20;
    func_0x000107c6057c();
    uVar20 = uVar17 & 0xffffffffffffff8;
    if (uVar17 >> 0x3e == 0) {
      uStack_90 = *(ulong *)(uVar20 + 0x10);
    }
    else {
      uStack_90 = uVar17;
      if (-1 < (long)uVar17) {
        uStack_90 = uVar20;
      }
      func_0x000107c60480();
    }
    uStack_80 = 0;
    uVar22 = uVar7 & 0xffffffffffffff8;
    uVar2 = uVar7;
    if (-1 < (long)uVar7) {
      uVar2 = uVar22;
    }
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (uStack_80 != uStack_90) {
      if ((uVar17 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar20 + 0x10) <= uStack_80) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101cec068);
          (*pcVar3)();
        }
        uVar9 = *(ulong *)(uVar17 + 0x20 + uStack_80 * 8);
        func_0x000107c61174();
      }
      else {
        uVar9 = uStack_80;
        func_0x000101cef130(uStack_80,uVar17);
      }
      bVar4 = SCARRY8(uStack_80,1);
      uStack_80 = uStack_80 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101cec06c);
        (*pcVar3)();
      }
      if (uVar7 >> 0x3e == 0) {
        uVar21 = *(ulong *)(uVar22 + 0x10);
      }
      else {
        uVar21 = uVar2;
        func_0x000107c60480();
      }
      if (uVar21 != 0) {
        uVar23 = 0;
        do {
          if ((uVar7 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar22 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101cec064);
              (*pcVar3)();
            }
            uVar10 = *(ulong *)(uVar7 + uVar23 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar10 = uVar23;
            func_0x000101cef144(uVar23,uVar7);
          }
          uVar1 = uVar23 + 1;
          if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101cec060);
            (*pcVar3)();
          }
          uVar11 = uVar10;
          func_0x000107c4adb4();
          func_0x000107c61180();
          if (uVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101cec088);
            (*pcVar3)();
          }
          uVar12 = uVar11;
          func_0x000107c44fd8();
          func_0x000107c61170(uVar11);
          uVar11 = uVar9;
          func_0x000107c4b1dc();
          if (uVar12 == uVar11) {
            puVar15 = PTR_PTR_1126bbee8;
            func_0x000107c610f8(PTR_PTR_1126bbee8);
            func_0x000107c47408();
            puVar13 = puVar8;
            func_0x000107c4b270();
            func_0x000107c61180();
            func_0x000107c61170(uVar9);
            func_0x000107c61170(uVar10);
            func_0x000107c61170(puVar15);
            goto LAB_101cebd4c;
          }
          func_0x000107c61170(uVar10);
          uVar23 = uVar23 + 1;
        } while (uVar1 != uVar21);
      }
      puVar15 = PTR_PTR_1126b0820;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar21 = uVar9;
      func_0x000107c4b1dc();
      puVar13 = PTR___ss5Int64VN_11034ee50;
      puVar14 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      uStack_70 = uVar21;
      func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                          PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar14);
      puVar14 = puVar15;
      func_0x000107c5e650();
      func_0x000107c61180();
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar13);
      puVar15 = puVar14;
      func_0x000107c5e848();
      func_0x000107c61180();
      func_0x000107c61170(puVar14);
      puVar13 = puVar18;
      func_0x000107c5fadc(puVar18,puVar19);
      puVar14 = puVar15;
      func_0x000107c5e640();
      func_0x000107c61180();
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar13);
      uVar21 = uVar9;
      func_0x000107c44fb4(uVar9);
      func_0x000107c61180();
      puVar15 = puVar14;
      func_0x000107c5e59c();
      func_0x000107c61180();
      func_0x000107c61170(puVar14);
      func_0x000107c61170(uVar21);
      puVar13 = puVar15;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      func_0x000107c61170(puVar15);
      func_0x000107c61170(uVar9);
      if (puVar13 != (undefined *)0x0) {
LAB_101cebd4c:
        puVar15 = puVar16;
        func_0x000107c61550();
        if ((((int)puVar15 == 0) || ((long)puVar16 < 0)) ||
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
          func_0x000100fe2a60(0,puVar14 + 1,1,puVar16);
        }
        uVar21 = (ulong)puVar15 & 0xffffffffffffff8;
        uVar9 = *(ulong *)(uVar21 + 0x10);
        puVar16 = puVar15;
        if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar9) {
          puVar16 = (undefined *)(ulong)(1 < *(ulong *)(uVar21 + 0x18));
          func_0x000100fe2a60(puVar16,uVar9 + 1,1,puVar15);
          uVar21 = (ulong)puVar16 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar21 + 0x10) = uVar9 + 1;
        *(undefined **)(uVar21 + uVar9 * 8 + 0x20) = puVar13;
      }
    }
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c(uVar17);
    puVar15 = PTR_PTR_1126deb80;
    func_0x000107c610f8(PTR_PTR_1126deb80);
    func_0x000107c453e4();
    func_0x000107c5fadc(puVar18,puVar19);
    func_0x000107c6142c(puVar19);
    puVar19 = puVar15;
    func_0x000107c5e4bc(puVar15);
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar18);
    uVar17 = uVar5;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (uVar17 == 0) goto LAB_101cec08c;
    puVar18 = puVar19;
    func_0x000107c5e6f0(puVar19);
    func_0x000107c61180();
    func_0x000107c61170(puVar19);
    func_0x000107c61170(uVar17);
    uVar17 = uVar5;
    func_0x000107c5c994();
    func_0x000107c61180();
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101cec094);
      (*pcVar3)();
    }
    puVar19 = puVar18;
    func_0x000107c5e830(puVar18);
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    func_0x000107c61170(uVar17);
    uVar6 = 0;
    FUN_101cec184(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    puVar18 = puVar16;
    func_0x000107c5fc48(puVar16,uVar6);
    func_0x000107c6142c(puVar16);
    puVar16 = puVar19;
    func_0x000107c5e680(puVar19);
    func_0x000107c61180();
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar18);
    puVar19 = puVar16;
    func_0x000107c3ecc8(puVar16);
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    puVar18 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c5c3c8();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(puVar8);
  }
  func_0x000107c61170(puVar19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar18;
  }
  func_0x000107c60e78();
LAB_101cec08c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101cec090);
  (*pcVar3)();
}



/* Entry: 101cec094; end: 101cec113; -[_TtC31SCLensCollectionsImplementation28LensCollectionMetadataMapper lensCollectionMetadataFromData:] */

void FUN_101cec094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  FUN_101ceb8d0(param_3,param_2);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101cec114; end: 101cec173; -[_TtC31SCLensCollectionsImplementation28LensCollectionMetadataMapper init] */

void FUN_101cec114(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCollectionsImplementation.LensCollectionMetadataMapper",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cec140);
  (*pcVar1)();
}



/* Entry: 101cec174; end: 101cec183; -[_TtC31SCLensCollectionsImplementation28LensCollectionMetadataMapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cec174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e1c178));
  return;
}



/* Entry: 101cec184; end: 101cec1c3;  */

void FUN_101cec184(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101cec1c4; end: 101cec31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101cec1c4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined *puVar3;
  
  uVar1 = 0;
  func_0x0001007631a4(0);
  lVar2 = param_1;
  FUN_101ceb5c4(param_1,param_2,uVar1,&PTR_DAT_11046f808);
  if (lVar2 == 0) {
    puVar3 = *(undefined **)(unaff_x20 + _DAT_112e1c1c8);
    func_0x000107c5fadc(param_1,param_2);
    uVar1 = 0;
    FUN_101cec8d8(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c5fc48(param_3,uVar1);
    func_0x000107c4af78(puVar3);
    func_0x000107c61180();
  }
  else {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    param_3 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c61174(lVar2);
    func_0x000107c5c3c8(param_3);
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    param_1 = lVar2;
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar3;
}



/* Entry: 101cec31c; end: 101cec38b; -[_TtC31SCLensCollectionsImplementation32LensCollectionsLocalDataProvider lensCollectionForCollectionId:] */

void FUN_101cec31c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101cec1c4(param_3,param_2,PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101cec38c; end: 101cec427; -[_TtC31SCLensCollectionsImplementation32LensCollectionsLocalDataProvider lensCollectionForCollectionId:prefetchedLenses:] */

void FUN_101cec38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = 0;
  FUN_101cec8d8(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_1);
  FUN_101cec1c4(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101cec428; end: 101cec51b; -[_TtC31SCLensCollectionsImplementation32LensCollectionsLocalDataProvider lensesForLensCollectionId:] */

void FUN_101cec428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101cec1c4(param_3,param_2,PTR___swiftEmptyArrayStorage_11034f1c8);
  pcStack_50 = FUN_101cec5b8;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101cecc50;
  puStack_58 = &UNK_11046f910;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(uStack_48);
  uVar2 = param_3;
  func_0x000107c4c280(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101cec51c; end: 101cec5b7;  */

void FUN_101cec51c(undefined8 *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_2 == (undefined *)0x0) {
    FUN_101cec8d8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
  }
  else {
    func_0x000107c61174();
    puVar2 = param_2;
    func_0x000107c4b56c();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cec5b8);
      (*pcVar1)();
    }
    func_0x000107c61170(param_2);
  }
  uVar3 = 0;
  FUN_101cec8d8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  param_1[3] = uVar3;
  *param_1 = puVar2;
  return;
}



/* Entry: 101cec5b8; end: 101cec6db;  */

void FUN_101cec5b8(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_11046f8d0;
  func_0x000107c613fc(&UNK_11046f8d0,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101cec51c;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  uStack_50 = 0x101cec8d0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101ceca44;
  puStack_58 = &UNK_11046f8e8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x77,0x4e,0x1f,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = 0x112d657e8;
    func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
    param_1[3] = uVar5;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cec6dc);
  (*pcVar1)();
}



/* Entry: 101cec6dc; end: 101cec7fb; -[_TtC31SCLensCollectionsImplementation32LensCollectionsLocalDataProvider lensesForLensCollectionId:prefetchedLenses:] */

void FUN_101cec6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c5faec(param_3);
  uVar1 = 0;
  FUN_101cec8d8(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_1);
  FUN_101cec1c4(param_3,param_2,param_4);
  pcStack_50 = FUN_101cec5b8;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101cecc50;
  puStack_58 = &UNK_11046f898;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(uStack_48);
  uVar1 = param_3;
  func_0x000107c4c280(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101cec7fc; end: 101cec85b; -[_TtC31SCLensCollectionsImplementation32LensCollectionsLocalDataProvider init] */

void FUN_101cec7fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCollectionsImplementation.LensCollectionsLocalDataProvider",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cec828);
  (*pcVar1)();
}



/* Entry: 101cec85c; end: 101cec893; -[_TtC31SCLensCollectionsImplementation32LensCollectionsLocalDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101cec878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cec87c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cec85c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e1c1c0));
  return;
}



/* Entry: 101cec894; end: 101cec8b3;  */

void FUN_101cec894(void)

{
  func_0x000107c61168(&PTR_PTR_112801738);
  return;
}



/* Entry: 101cec8b4; end: 101cec8d7;  */

void FUN_101cec8b4(long param_1,long param_2)

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



/* Entry: 101cec8d8; end: 101cec917;  */

void FUN_101cec8d8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101cec918; end: 101cec927;  */

void FUN_101cec918(long param_1,long param_2)

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



/* Entry: 101cec928; end: 101cec947;  */

void FUN_101cec928(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 101cec948; end: 101ceca23;  */

void FUN_101cec948(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101ceca24; end: 101ceca43;  */

void FUN_101ceca24(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 101ceca44; end: 101cecc4f;  */

void FUN_101ceca44(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_60,param_2);
  func_0x000107c61170(uVar2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101cecc50; end: 101ceccd3;  */

void FUN_101cecc50(long param_1,undefined8 param_2)

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



/* Entry: 101ceccd4; end: 101cecd17;  */

void FUN_101ceccd4(void)

{
  undefined8 uVar1;
  
  func_0x000101cef8c4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar1 = 5;
  func_0x000107c60110();
  uRam0000000112e1c2a8 = uVar1;
  return;
}



/* Entry: 101cecd18; end: 101cece27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101cecd18(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_80 [16];
  undefined *puStack_48;
  
  FUN_101cef520();
  if ((param_1 & 1) == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    puVar4 = puVar3;
    func_0x000101cefe68();
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar4);
    func_0x000107c42d78(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c4a8a4(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  else {
    uVar1 = 0x112d5b0a0;
    func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
    func_0x000100087bd4(&puStack_48,FUN_101cef7fc,auStack_80,uVar1);
    puVar2 = puStack_48;
  }
  return puVar2;
}



/* Entry: 101cece28; end: 101cece97; -[_TtC31SCLensCollectionsImplementation33LensCollectionsRemoteDataProvider lensCollectionForCollectionId:] */

void FUN_101cece28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101cecd18(param_3,param_2,PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101cece98; end: 101cecffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cece98(long *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112e1c208;
  func_0x000107c61428(param_2 + _DAT_112e1c208,auStack_68,0x20,0);
  lVar6 = *(long *)(param_2 + lVar1);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    lVar2 = param_3;
    uVar4 = param_4;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(lVar6 + 0x38) + lVar2 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(lVar6);
      goto LAB_101cecfd8;
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_68);
  lVar2 = param_3;
  FUN_101cecffc(param_3,param_4,param_5);
  func_0x000107c61428(param_2 + lVar1,auStack_68,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000107c61174();
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  func_0x000107c61558(uVar3);
  uVar5 = *(undefined8 *)(param_2 + lVar1);
  *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
  FUN_101cee918(lVar2,param_3,param_4,uVar3,0x112d72920,&UNK_10daa3030);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(param_2 + lVar1) = uVar5;
  func_0x000107c614a8(auStack_68);
LAB_101cecfd8:
  *param_1 = lVar2;
  return;
}



/* Entry: 101cecffc; end: 101ced303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101cecffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e1c218);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = param_1;
    FUN_101ced81c(param_1,param_2,param_3);
    if (lVar3 != 0) {
      puVar9 = PTR_PTR_1126ae820;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar8 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      if (lRam0000000112e1c2a0 != -1) {
        func_0x000107c61568(0x112e1c2a0,FUN_101ceccd4);
      }
      uVar4 = uRam0000000112e1c2a8;
      puVar10 = PTR_PTR_1126b5730;
      func_0x000107c610f8(PTR_PTR_1126b5730);
      func_0x000107c61174(uVar4);
      func_0x000107c5fc48(uVar8,PTR___sSSN_11034da80);
      func_0x000107c46d5c(puVar10);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar8);
      lVar5 = *(long *)(unaff_x20 + _DAT_112e1c200);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar5 != 0) {
        puVar11 = &UNK_11046f9c0;
        func_0x000107c613fc(&UNK_11046f9c0,0x18,7);
        func_0x000107c61614(puVar11 + 0x10);
        puVar12 = &UNK_11046f9e8;
        func_0x000107c613fc(&UNK_11046f9e8,0x30,7);
        *(undefined **)(puVar12 + 0x10) = puVar11;
        *(long *)(puVar12 + 0x18) = param_1;
        *(undefined8 *)(puVar12 + 0x20) = param_2;
        *(undefined **)(puVar12 + 0x28) = puVar9;
        uStack_70 = 0x101cef818;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_101365b40;
        puStack_78 = &UNK_11046fa00;
        ppuVar6 = &puStack_90;
        puStack_68 = puVar12;
        func_0x000107c60bc4(ppuVar6);
        puVar11 = puStack_68;
        func_0x000107c61434(param_2);
        func_0x000107c61174(puVar9);
        func_0x000107c61574(puVar11);
        lVar7 = lVar2;
        func_0x000107c5c2f4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar5);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e1c210);
        *(long *)(unaff_x20 + _DAT_112e1c210) = lVar7;
        func_0x000107c615e8(uVar8);
        return puVar9;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ced304);
      (*pcVar1)();
    }
    func_0x000107c615e8(lVar2);
  }
  puVar9 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar10 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  puVar11 = puVar10;
  func_0x000101ceffb0();
  puVar12 = puVar11;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar11);
  func_0x000107c42d78(puVar10);
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  func_0x000107c4a8a4(puVar9);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  return puVar9;
}



/* Entry: 101ced304; end: 101ced39f; -[_TtC31SCLensCollectionsImplementation33LensCollectionsRemoteDataProvider lensCollectionForCollectionId:prefetchedLenses:] */

void FUN_101ced304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = 0;
  func_0x000101cef8c4(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_1);
  FUN_101cecd18(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101ced3a0; end: 101ced493; -[_TtC31SCLensCollectionsImplementation33LensCollectionsRemoteDataProvider lensesForLensCollectionId:] */

void FUN_101ced3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101cecd18(param_3,param_2,PTR___swiftEmptyArrayStorage_11034f1c8);
  uStack_50 = 0x101cecb2c;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101cecc50;
  puStack_58 = &UNK_11046fac8;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(uStack_48);
  uVar2 = param_3;
  func_0x000107c4c280(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101ced494; end: 101ced5b3; -[_TtC31SCLensCollectionsImplementation33LensCollectionsRemoteDataProvider lensesForLensCollectionId:prefetchedLenses:] */

void FUN_101ced494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c5faec(param_3);
  uVar1 = 0;
  func_0x000101cef8c4(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_1);
  FUN_101cecd18(param_3,param_2,param_4);
  uStack_50 = 0x101cecb2c;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101cecc50;
  puStack_58 = &UNK_11046f938;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(uStack_48);
  uVar1 = param_3;
  func_0x000107c4c280(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ced5b4; end: 101ced613; -[_TtC31SCLensCollectionsImplementation33LensCollectionsRemoteDataProvider init] */

void FUN_101ced5b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCollectionsImplementation.LensCollectionsRemoteDataProvider",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ced5e0);
  (*pcVar1)();
}



/* Entry: 101ced614; end: 101ced6bf; -[_TtC31SCLensCollectionsImplementation33LensCollectionsRemoteDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ced650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ced654) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ced614(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e1c1f8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e1c200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e1c208));
  return;
}



/* Entry: 101ced6c0; end: 101ced6df;  */

void FUN_101ced6c0(void)

{
  func_0x000107c61168(&PTR_PTR_112801800);
  return;
}



/* Entry: 101ced6e0; end: 101ced6fb;  */

void FUN_101ced6e0(long param_1,long param_2)

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



/* Entry: 101ced6fc; end: 101ced71b;  */

void FUN_101ced6fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ced71c; end: 101ced81b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ced71c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e1c208;
  func_0x000107c61428(param_1 + _DAT_112e1c208,auStack_58,0x21,0);
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61434(uVar4);
  func_0x000100029284();
  func_0x000107c6142c(uVar4);
  uVar4 = 0;
  if ((param_3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + lVar1);
    func_0x000107c61558();
    lVar3 = *(long *)(param_1 + lVar1);
    if ((uVar2 & 1) == 0) {
      FUN_101ceea8c(0x112d72920,&UNK_10daa3030);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 8);
    func_0x000101ceee80(param_2,lVar3);
    *(long *)(param_1 + lVar1) = lVar3;
  }
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101ced81c; end: 101cee85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ced81c(byte *param_1,ulong param_2,byte *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  byte **ppbVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  long lVar25;
  long unaff_x20;
  byte *pbVar26;
  ulong uVar27;
  undefined *puVar28;
  long lVar29;
  byte *pbVar30;
  long lVar31;
  byte *pbVar32;
  long lVar33;
  byte *pbVar34;
  long lVar35;
  byte *pbVar36;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  byte *pbStack_c0;
  undefined *puStack_b8;
  undefined *puStack_a8;
  byte *pbStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0x112d36580;
  pbStack_c0 = param_3;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  puStack_c8 = auStack_f0 + -extraout_x8;
  func_0x000107c5ede0();
  lVar33 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar33 + 0x40));
  lVar35 = (long)(auStack_f0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pbVar6 = (byte *)0x0;
  func_0x000107c5efa8();
  lVar31 = *(long *)(pbVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar31 + 0x40));
  lVar29 = lVar35 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(unaff_x20 + _DAT_112e1c220);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 == 0) {
    return;
  }
  puVar8 = PTR_PTR_1126ccfe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar16 = (ulong)param_1 & 0xffffffffffff;
  uVar22 = param_2 >> 0x38 & 0xf;
  uVar27 = uVar16;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar27 = uVar22;
  }
  if (uVar27 != 0) {
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          func_0x000107c60358();
          uVar16 = param_2;
        }
        else {
          param_1 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
        }
        if (*param_1 == 0x2b) {
          lVar21 = uVar16 - 1;
          if ((long)uVar16 < 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee48c);
            (*pcVar3)();
          }
          if (lVar21 != 0) {
            lVar20 = 0;
            while( true ) {
              param_1 = param_1 + 1;
              if ((9 < *param_1 - 0x30) ||
                 (lVar25 = lVar20 * 10, SUB168(SEXT816(lVar20) * SEXT816(10),8) != lVar25 >> 0x3f))
              break;
              uVar27 = (ulong)(byte)(*param_1 - 0x30);
              lVar20 = lVar25 + uVar27;
              if ((SCARRY8(lVar25,uVar27)) || (lVar21 = lVar21 + -1, lVar21 == 0)) break;
            }
          }
        }
        else if (*param_1 == 0x2d) {
          lVar21 = uVar16 - 1;
          if ((long)uVar16 < 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee484);
            (*pcVar3)();
          }
          if (lVar21 != 0) {
            lVar20 = 0;
            while( true ) {
              param_1 = param_1 + 1;
              if ((9 < *param_1 - 0x30) ||
                 (lVar25 = lVar20 * 10, SUB168(SEXT816(lVar20) * SEXT816(10),8) != lVar25 >> 0x3f))
              break;
              uVar27 = (ulong)(byte)(*param_1 - 0x30);
              lVar20 = lVar25 - uVar27;
              if ((SBORROW8(lVar25,uVar27)) || (lVar21 = lVar21 + -1, lVar21 == 0)) break;
            }
          }
        }
        else if ((uVar16 != 0) && (param_1 != (byte *)0x0)) {
          lVar21 = 0;
          do {
            if (((9 < *param_1 - 0x30) ||
                (lVar20 = lVar21 * 10, SUB168(SEXT816(lVar21) * SEXT816(10),8) != lVar20 >> 0x3f))
               || (uVar27 = (ulong)(byte)(*param_1 - 0x30), lVar21 = lVar20 + uVar27,
                  SCARRY8(lVar20,uVar27))) break;
            uVar16 = uVar16 - 1;
            param_1 = param_1 + 1;
          } while (uVar16 != 0);
        }
      }
      else {
        pbStack_90 = param_1;
        uStack_88 = param_2 & 0xffffffffffffff;
        uVar1 = (uint)param_1 & 0xff;
        if (uVar1 == 0x2b) {
          if (uVar22 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee490);
            (*pcVar3)();
          }
          lVar21 = uVar22 - 1;
          if (lVar21 != 0) {
            lVar20 = 0;
            pbVar17 = (byte *)((ulong)&pbStack_90 | 1);
            do {
              if (((9 < *pbVar17 - 0x30) ||
                  (lVar25 = lVar20 * 10, SUB168(SEXT816(lVar20) * SEXT816(10),8) != lVar25 >> 0x3f))
                 || (uVar27 = (ulong)(byte)(*pbVar17 - 0x30), lVar20 = lVar25 + uVar27,
                    SCARRY8(lVar25,uVar27))) break;
              lVar21 = lVar21 + -1;
              pbVar17 = pbVar17 + 1;
            } while (lVar21 != 0);
          }
        }
        else if (uVar1 == 0x2d) {
          if (uVar22 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee488);
            (*pcVar3)();
          }
          lVar21 = uVar22 - 1;
          if (lVar21 != 0) {
            lVar20 = 0;
            pbVar17 = (byte *)((ulong)&pbStack_90 | 1);
            while( true ) {
              if ((9 < *pbVar17 - 0x30) ||
                 (lVar25 = lVar20 * 10, SUB168(SEXT816(lVar20) * SEXT816(10),8) != lVar25 >> 0x3f))
              break;
              uVar27 = (ulong)(byte)(*pbVar17 - 0x30);
              lVar20 = lVar25 - uVar27;
              if ((SBORROW8(lVar25,uVar27)) ||
                 (lVar21 = lVar21 + -1, pbVar17 = pbVar17 + 1, lVar21 == 0)) break;
            }
          }
        }
        else if (uVar22 != 0) {
          lVar21 = 0;
          ppbVar15 = &pbStack_90;
          while( true ) {
            if ((9 < *(byte *)ppbVar15 - 0x30) ||
               (lVar20 = lVar21 * 10, SUB168(SEXT816(lVar21) * SEXT816(10),8) != lVar20 >> 0x3f))
            break;
            uVar27 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30);
            lVar21 = lVar20 + uVar27;
            if ((SCARRY8(lVar20,uVar27)) ||
               (uVar22 = uVar22 - 1, ppbVar15 = (byte **)((long)ppbVar15 + 1), uVar22 == 0)) break;
          }
        }
      }
    }
    else {
      func_0x000107c61434(param_2);
      uVar16 = param_2;
      FUN_101cef314(param_1,param_2,10,&UNK_100fb6c80);
      func_0x000107c6142c(param_2);
    }
  }
  lStack_e0 = lVar35;
  func_0x000107c55c9c(puVar8);
  puVar12 = PTR_PTR_1126c0370;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar28 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x000107c61168(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  func_0x000107c5c648();
  func_0x000107c61180();
  func_0x000107c5efa0(lVar29);
  func_0x000107c61170(puVar28);
  func_0x000107c5ef94();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar16);
  (**(code **)(lVar31 + 8))(lVar29);
  puStack_b8 = puVar12;
  func_0x000107c59d98(puVar12);
  func_0x000107c61170(puVar28);
  ppuVar9 = *(undefined ***)(unaff_x20 + _DAT_112e1c230);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (ppuVar9 == (undefined **)0x0) {
LAB_101cedc78:
    ppuVar9 = &PTR____CFConstantStringClassReference_110f13d78;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f13d78);
  }
  else {
    ppuVar10 = ppuVar9;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c615e8(ppuVar9);
    if (ppuVar10 == (undefined **)0x0) goto LAB_101cedc78;
    ppuVar9 = ppuVar10;
    func_0x000107c5faec(ppuVar10);
    func_0x000107c61170(ppuVar10);
  }
  pbVar17 = pbVar6;
  lStack_e8 = lVar7;
  lStack_d0 = lVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(pbVar6);
  func_0x000107c53a2c(puStack_b8);
  func_0x000107c61170(ppuVar9);
  func_0x000107c57ddc(puVar8);
  pbVar6 = pbStack_c0;
  pbVar32 = (byte *)((ulong)pbStack_c0 & 0xffffffffffffff8);
  lStack_d8 = lVar33;
  if ((ulong)pbStack_c0 >> 0x3e == 0) {
    pbVar36 = *(byte **)(pbVar32 + 0x10);
    if (pbVar36 != (byte *)0x0) goto LAB_101cedce8;
LAB_101cee0d0:
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pbVar36 = pbVar32;
    if ((byte *)0x7fffffffffffffff < pbStack_c0) {
      pbVar36 = pbStack_c0;
    }
    func_0x000107c60480();
    if (pbVar36 == (byte *)0x0) goto LAB_101cee0d0;
LAB_101cedce8:
    pbVar26 = (byte *)0x0;
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)pbVar6 & 0xc000000000000001) == 0) {
        if (*(byte **)(pbVar32 + 0x10) <= pbVar26) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee0a8);
          (*pcVar3)();
        }
        pbVar11 = *(byte **)(pbVar6 + (long)pbVar26 * 8 + 0x20);
        func_0x000107c61174();
        pbVar18 = pbVar17;
      }
      else {
        pbVar11 = pbVar26;
        pbVar18 = pbStack_c0;
        FUN_101cef158(pbVar26,pbStack_c0,&PTR_PTR_1126ae6a8,0x112d4d630);
      }
      bVar4 = SCARRY8((long)pbVar26,1);
      pbVar26 = pbVar26 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee0a4);
        (*pcVar3)();
      }
      pbVar17 = pbVar11;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      pbVar24 = pbVar17;
      func_0x000107c5faec();
      func_0x000107c61170(pbVar17);
      pbVar17 = (byte *)((ulong)pbVar24 & 0xffffffffffff);
      pbVar23 = (byte *)((ulong)pbVar18 >> 0x38 & 0xf);
      pbVar30 = pbVar17;
      if (((ulong)pbVar18 & 0x2000000000000000) != 0) {
        pbVar30 = pbVar23;
      }
      if (pbVar30 == (byte *)0x0) {
        func_0x000107c6142c(pbVar18);
        func_0x000107c61170(pbVar11);
      }
      else {
        if (((ulong)pbVar18 >> 0x3c & 1) == 0) {
          if (((ulong)pbVar18 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar24 >> 0x3c & 1) == 0) {
              pbVar17 = pbVar18;
              func_0x000107c60358();
            }
            else {
              pbVar24 = (byte *)(((ulong)pbVar18 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar24 == 0x2b) {
              if ((long)pbVar17 < 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee0b4);
                (*pcVar3)();
              }
              pbVar23 = pbVar17 + -1;
              if (pbVar23 == (byte *)0x0) goto LAB_101cedf8c;
              pbVar30 = (byte *)0x0;
              do {
                pbVar24 = pbVar24 + 1;
                if (((9 < *pbVar24 - 0x30) ||
                    (lVar5 = (long)pbVar30 * 10,
                    SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar5 >> 0x3f)) ||
                   (uVar27 = (ulong)(byte)(*pbVar24 - 0x30), pbVar30 = (byte *)(lVar5 + uVar27),
                   SCARRY8(lVar5,uVar27))) goto LAB_101cedf8c;
                pbVar34 = (byte *)0x0;
                pbVar23 = pbVar23 + -1;
              } while (pbVar23 != (byte *)0x0);
            }
            else if (*pbVar24 == 0x2d) {
              if ((long)pbVar17 < 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee0b8);
                (*pcVar3)();
              }
              pbVar23 = pbVar17 + -1;
              if (pbVar23 == (byte *)0x0) {
LAB_101cedf8c:
                pbVar30 = (byte *)0x0;
                pbVar34 = (byte *)0x1;
              }
              else {
                pbVar30 = (byte *)0x0;
                do {
                  pbVar24 = pbVar24 + 1;
                  if (((9 < *pbVar24 - 0x30) ||
                      (lVar5 = (long)pbVar30 * 10,
                      SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar5 >> 0x3f)) ||
                     (uVar27 = (ulong)(byte)(*pbVar24 - 0x30), pbVar30 = (byte *)(lVar5 - uVar27),
                     SBORROW8(lVar5,uVar27))) goto LAB_101cedf8c;
                  pbVar34 = (byte *)0x0;
                  pbVar23 = pbVar23 + -1;
                } while (pbVar23 != (byte *)0x0);
              }
            }
            else {
              if (pbVar17 == (byte *)0x0) goto LAB_101cedf8c;
              pbVar30 = (byte *)0x0;
              if (pbVar24 == (byte *)0x0) {
                pbVar34 = (byte *)0x0;
              }
              else {
                do {
                  if (((9 < *pbVar24 - 0x30) ||
                      (lVar5 = (long)pbVar30 * 10,
                      SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar5 >> 0x3f)) ||
                     (uVar27 = (ulong)(byte)(*pbVar24 - 0x30), pbVar30 = (byte *)(lVar5 + uVar27),
                     SCARRY8(lVar5,uVar27))) goto LAB_101cedf8c;
                  pbVar34 = (byte *)0x0;
                  pbVar17 = pbVar17 + -1;
                  pbVar24 = pbVar24 + 1;
                } while (pbVar17 != (byte *)0x0);
              }
            }
          }
          else {
            pbStack_90 = pbVar24;
            uStack_88 = (ulong)pbVar18 & 0xffffffffffffff;
            uVar1 = (uint)pbVar24 & 0xff;
            if (uVar1 == 0x2b) {
              if (pbVar23 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee0b0);
                (*pcVar3)();
              }
              pbVar23 = pbVar23 + -1;
              if (pbVar23 == (byte *)0x0) goto LAB_101cedf8c;
              pbVar30 = (byte *)0x0;
              pbVar24 = (byte *)((ulong)&pbStack_90 | 1);
              do {
                if (((9 < *pbVar24 - 0x30) ||
                    (lVar5 = (long)pbVar30 * 10,
                    SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar5 >> 0x3f)) ||
                   (uVar27 = (ulong)(byte)(*pbVar24 - 0x30), pbVar30 = (byte *)(lVar5 + uVar27),
                   SCARRY8(lVar5,uVar27))) goto LAB_101cedf8c;
                pbVar34 = (byte *)0x0;
                pbVar23 = pbVar23 + -1;
                pbVar24 = pbVar24 + 1;
              } while (pbVar23 != (byte *)0x0);
            }
            else if (uVar1 == 0x2d) {
              if (pbVar23 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee0ac);
                (*pcVar3)();
              }
              pbVar23 = pbVar23 + -1;
              if (pbVar23 == (byte *)0x0) goto LAB_101cedf8c;
              pbVar30 = (byte *)0x0;
              pbVar24 = (byte *)((ulong)&pbStack_90 | 1);
              do {
                if (((9 < *pbVar24 - 0x30) ||
                    (lVar5 = (long)pbVar30 * 10,
                    SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar5 >> 0x3f)) ||
                   (uVar27 = (ulong)(byte)(*pbVar24 - 0x30), pbVar30 = (byte *)(lVar5 - uVar27),
                   SBORROW8(lVar5,uVar27))) goto LAB_101cedf8c;
                pbVar34 = (byte *)0x0;
                pbVar23 = pbVar23 + -1;
                pbVar24 = pbVar24 + 1;
              } while (pbVar23 != (byte *)0x0);
            }
            else {
              if (pbVar23 == (byte *)0x0) goto LAB_101cedf8c;
              pbVar30 = (byte *)0x0;
              ppbVar15 = &pbStack_90;
              do {
                if (((9 < *(byte *)ppbVar15 - 0x30) ||
                    (lVar5 = (long)pbVar30 * 10,
                    SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar5 >> 0x3f)) ||
                   (uVar27 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                   pbVar30 = (byte *)(lVar5 + uVar27), SCARRY8(lVar5,uVar27))) goto LAB_101cedf8c;
                pbVar34 = (byte *)0x0;
                pbVar23 = pbVar23 + -1;
                ppbVar15 = (byte **)((long)ppbVar15 + 1);
              } while (pbVar23 != (byte *)0x0);
            }
          }
        }
        else {
          pbVar17 = pbVar18;
          FUN_101cef314(pbVar24,pbVar18,10,&UNK_100fb6c80);
          pbVar30 = pbVar24;
          pbVar34 = pbVar17;
        }
        func_0x000107c6142c(pbVar18);
        func_0x000107c61170(pbVar11);
        if (((uint)pbVar34 & 0xff) != 1) {
          puVar12 = puStack_a8;
          func_0x000107c61558();
          if (((ulong)puVar12 & 1) == 0) {
            pbVar17 = (byte *)(*(long *)(puStack_a8 + 0x10) + 1);
            puStack_a8 = (undefined *)0x0;
            FUN_101cef030(0,pbVar17,1);
          }
          uVar27 = *(ulong *)(puStack_a8 + 0x10);
          pbVar11 = (byte *)(uVar27 + 1);
          if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar27) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_a8 + 0x18));
            pbVar17 = pbVar11;
            FUN_101cef030(puVar12,pbVar11,1,puStack_a8);
            puStack_a8 = puVar12;
          }
          *(byte **)(puStack_a8 + 0x10) = pbVar11;
          *(byte **)(puStack_a8 + uVar27 * 8 + 0x20) = pbVar30;
        }
      }
    } while (pbVar26 != pbVar36);
  }
  puVar12 = PTR_PTR_1126c8ba8;
  func_0x000107c610f8(PTR_PTR_1126c8ba8);
  func_0x000107c45cd4();
  for (lVar5 = *(long *)(puStack_a8 + 0x10); lVar5 != 0; lVar5 = lVar5 + -1) {
    func_0x000107c3d93c(puVar12);
  }
  func_0x000107c6142c(puStack_a8);
  func_0x000107c55d7c(puVar8);
  lVar31 = lStack_d0;
  lVar29 = lStack_d8;
  lVar7 = lStack_e0;
  lVar5 = lStack_e8;
  uVar27 = ((ulong *)(unaff_x20 + _DAT_112e1c238))[1];
  if (uVar27 != 0) {
    pbVar6 = *(byte **)(unaff_x20 + _DAT_112e1c238);
    uVar16 = (ulong)pbVar6 & 0xffffffffffff;
    if ((uVar27 & 0x2000000000000000) != 0) {
      uVar16 = uVar27 >> 0x38 & 0xf;
    }
    if (uVar16 != 0) {
      func_0x000107c61434(uVar27);
      goto LAB_101cee194;
    }
  }
  uVar27 = 0x800000010f00b530;
  pbVar6 = (byte *)0xd000000000000028;
LAB_101cee194:
  pbStack_90 = pbVar6;
  uStack_88 = uVar27;
  func_0x000107c61434(uVar27);
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f00b560);
  func_0x000107c6142c(uVar27);
  uVar27 = uStack_88;
  puVar2 = puStack_c8;
  func_0x000107c5edd0(puStack_c8,pbStack_90,uStack_88);
  func_0x000107c6142c(uVar27);
  puVar13 = puVar2;
  (**(code **)(lVar29 + 0x30))(puVar2,1,lVar31);
  if ((int)puVar13 == 1) {
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puStack_b8);
    func_0x000101cef884(puVar2,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar29 + 0x20))(lVar7,puVar2,lVar31);
    lVar33 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61538();
    lVar35 = lVar33;
    func_0x0001001830b8();
    lVar33 = lVar33 + 0x20;
    func_0x000101cef884(lVar33,0x112d38308,&UNK_10d902040);
    func_0x000107c5ed90();
    lVar21 = lVar35;
    puVar19 = PTR___sSSN_11034da80;
    func_0x000107c5f9dc(lVar35,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar35);
    puVar28 = puVar8;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar28 == (undefined *)0x0) {
      puVar28 = (undefined *)0x0;
    }
    else {
      puVar14 = puVar28;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar28);
      puVar28 = puVar14;
      func_0x000107c5ee20(puVar14,puVar19);
      func_0x00010006c090(puVar14,puVar19);
    }
    uStack_70 = 0x101cee8dc;
    uStack_68 = 0;
    pbStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101365b04;
    puStack_78 = &UNK_11046faa0;
    ppbVar15 = &pbStack_90;
    func_0x000107c60bc4(ppbVar15);
    func_0x000107c61574(uStack_68);
    func_0x000107c3ecec(lVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppbVar15);
    func_0x000107c61170(puStack_b8);
    func_0x000107c61170(puVar12);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar33);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(puVar28);
    (**(code **)(lVar29 + 8))(lVar7,lVar31);
    uVar27 = 0;
    func_0x000107c61544(0,"",0x78,0xf5,0x1c,1);
    func_0x000107c61574(0);
    if ((uVar27 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101cee480);
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101cee85c; end: 101cee903;  */

void FUN_101cee85c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    func_0x000107c4b56c();
    func_0x000107c61180();
    uVar2 = 0;
    func_0x000101cef8c4(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    uVar3 = param_1;
    func_0x000107c5fc54(param_1,uVar2);
    func_0x000107c61170(param_1);
    if (uVar3 >> 0x3e != 0) {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  return;
}



/* Entry: 101cee904; end: 101cee917;  */

void FUN_101cee904(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ceea08);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101ceebec(lVar6,param_4 & 1,0x112e1c2f8,&UNK_10d9fd948);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cee9cc);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101ceea8c(0x112e1c2f8,&UNK_10d9fd948);
    lVar6 = *unaff_x20;
    goto joined_r0x000101ceea24;
  }
  lVar6 = *unaff_x20;
joined_r0x000101ceea24:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ceea8c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101cee918; end: 101ceea8b;  */

void FUN_101cee918(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ceea08);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101ceebec(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cee9cc);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101ceea8c(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000101ceea24;
  }
  lVar6 = *unaff_x20;
joined_r0x000101ceea24:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ceea8c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101ceea8c; end: 101ceebeb;  */

void FUN_101ceea8c(void)

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
    if (uVar8 == 0) goto LAB_101ceeb58;
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
LAB_101ceeb58:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101ceebec);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101ceebc4;
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
LAB_101ceebc4:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101ceebec; end: 101cef02f;  */

void FUN_101ceebec(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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
LAB_101ceee4c:
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
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101ceee7c);
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
          goto LAB_101ceee4c;
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
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101ceee80);
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



/* Entry: 101cef030; end: 101cef12f;  */

undefined * FUN_101cef030(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101cef130);
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
    puVar3 = (undefined *)0x112dc5810;
    func_0x0001000285a8(0x112dc5810,&UNK_10d9853c8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101cef130; end: 101cef157;  */

ulong FUN_101cef130(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cef23c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cef240);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a9160;
    func_0x000107c61168(PTR_PTR_1126a9160);
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
    puVar4 = PTR_PTR_1126a9160;
    func_0x000107c61168(PTR_PTR_1126a9160);
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
  func_0x000101cef8c4(0,0x112e1c1b0,&PTR_PTR_1126a9160);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101cef314);
  (*pcVar2)();
}



/* Entry: 101cef158; end: 101cef313;  */

ulong FUN_101cef158(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cef23c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cef240);
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
  func_0x000101cef8c4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101cef314);
  (*pcVar2)();
}



/* Entry: 101cef314; end: 101cef41f;  */

/* WARNING: Removing unreachable block (ram,0x000101cef414) */

undefined1  [16] FUN_101cef314(undefined8 ***param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_50;
  ulong uStack_48;
  
  ppuStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_50;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    func_0x000100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    (*param_4)(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_48 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_50;
    ppuStack_50 = pppuVar1;
    (*param_4)(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 101cef420; end: 101cef51f;  */

undefined * FUN_101cef420(long param_1)

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
    func_0x0001000285a8(0x112d72920,&UNK_10daa3030);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101cef51c);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101cef520);
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



/* Entry: 101cef520; end: 101cef7fb;  */

bool FUN_101cef520(byte *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  byte **ppbVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbStack_30;
  ulong uStack_28;
  
  uVar8 = (ulong)param_1 & 0xffffffffffff;
  uVar9 = param_2 >> 0x38 & 0xf;
  uVar13 = uVar8;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar13 = uVar9;
  }
  if (uVar13 == 0) {
    return false;
  }
  if ((param_2 >> 0x3c & 1) != 0) {
    func_0x000107c61434(param_2);
    uVar13 = param_2;
    FUN_101cef314(param_1,param_2,10,&UNK_10123df44);
    uVar15 = (uint)uVar13;
    func_0x000107c6142c(param_2);
    goto LAB_101cef788;
  }
  if ((param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1 >> 0x3c & 1) == 0) {
      func_0x000107c60358();
    }
    else {
      param_1 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
      param_2 = uVar8;
    }
    if (*param_1 == 0x2b) {
      lVar10 = param_2 - 1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101cef7f8);
        (*pcVar7)();
      }
      if (lVar10 != 0) {
        uVar13 = 0;
        do {
          param_1 = param_1 + 1;
          if (((9 < *param_1 - 0x30) ||
              (auVar3._8_8_ = 0, auVar3._0_8_ = uVar13, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
             (uVar8 = uVar13 * 10, uVar9 = (ulong)(byte)(*param_1 - 0x30), uVar13 = uVar8 + uVar9,
             CARRY8(uVar8,uVar9))) goto LAB_101cef784;
          uVar15 = 0;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        goto LAB_101cef788;
      }
    }
    else if (*param_1 == 0x2d) {
      lVar10 = param_2 - 1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101cef7f0);
        (*pcVar7)();
      }
      if (lVar10 != 0) {
        uVar13 = 0;
        do {
          param_1 = param_1 + 1;
          if (((9 < *param_1 - 0x30) ||
              (auVar1._8_8_ = 0, auVar1._0_8_ = uVar13, SUB168(auVar1 * ZEXT816(10),8) != 0)) ||
             (uVar8 = uVar13 * 10, uVar9 = (ulong)(byte)(*param_1 - 0x30), uVar13 = uVar8 - uVar9,
             uVar8 < uVar9)) goto LAB_101cef784;
          uVar15 = 0;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        goto LAB_101cef788;
      }
    }
    else if (param_2 != 0) {
      if (param_1 == (byte *)0x0) {
        uVar15 = 0;
      }
      else {
        uVar13 = 0;
        do {
          if (((9 < *param_1 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar13, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar8 = uVar13 * 10, uVar9 = (ulong)(byte)(*param_1 - 0x30), uVar13 = uVar8 + uVar9,
             CARRY8(uVar8,uVar9))) goto LAB_101cef784;
          uVar15 = 0;
          param_2 = param_2 - 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      goto LAB_101cef788;
    }
  }
  else {
    pbStack_30 = param_1;
    uStack_28 = param_2 & 0xffffffffffffff;
    uVar15 = (uint)param_1 & 0xff;
    if (uVar15 == 0x2b) {
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101cef7fc);
        (*pcVar7)();
      }
      lVar10 = uVar9 - 1;
      if (lVar10 != 0) {
        uVar13 = 0;
        pbVar11 = (byte *)((ulong)&pbStack_30 | 1);
        do {
          if (((9 < *pbVar11 - 0x30) ||
              (auVar4._8_8_ = 0, auVar4._0_8_ = uVar13, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
             (uVar8 = uVar13 * 10, uVar9 = (ulong)(byte)(*pbVar11 - 0x30), uVar13 = uVar8 + uVar9,
             CARRY8(uVar8,uVar9))) goto LAB_101cef784;
          uVar15 = 0;
          lVar10 = lVar10 + -1;
          pbVar11 = pbVar11 + 1;
        } while (lVar10 != 0);
        goto LAB_101cef788;
      }
    }
    else if (uVar15 == 0x2d) {
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101cef7f4);
        (*pcVar7)();
      }
      lVar10 = uVar9 - 1;
      if (lVar10 != 0) {
        uVar13 = 0;
        pbVar11 = (byte *)((ulong)&pbStack_30 | 1);
        do {
          if (((9 < *pbVar11 - 0x30) ||
              (auVar2._8_8_ = 0, auVar2._0_8_ = uVar13, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
             (uVar8 = uVar13 * 10, uVar9 = (ulong)(byte)(*pbVar11 - 0x30), uVar13 = uVar8 - uVar9,
             uVar8 < uVar9)) goto LAB_101cef784;
          uVar15 = 0;
          lVar10 = lVar10 + -1;
          pbVar11 = pbVar11 + 1;
        } while (lVar10 != 0);
        goto LAB_101cef788;
      }
    }
    else if (uVar9 != 0) {
      uVar13 = 0;
      ppbVar12 = &pbStack_30;
      do {
        if (((9 < *(byte *)ppbVar12 - 0x30) ||
            (auVar6._8_8_ = 0, auVar6._0_8_ = uVar13, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
           (uVar14 = uVar13 * 10, uVar8 = (ulong)(byte)(*(byte *)ppbVar12 - 0x30),
           uVar13 = uVar14 + uVar8, CARRY8(uVar14,uVar8))) goto LAB_101cef784;
        uVar15 = 0;
        uVar9 = uVar9 - 1;
        ppbVar12 = (byte **)((long)ppbVar12 + 1);
      } while (uVar9 != 0);
      goto LAB_101cef788;
    }
  }
LAB_101cef784:
  uVar15 = 1;
LAB_101cef788:
  return (uVar15 & 0xff) != 1;
}



/* Entry: 101cef7fc; end: 101cef85b;  */

void FUN_101cef7fc(void)

{
  long unaff_x20;
  
  FUN_101cece98(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101cef85c; end: 101cef863;  */

void FUN_101cef85c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  
  if (param_1 != 0) {
    func_0x000107c4b56c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
    ;
    func_0x000107c61180();
    uVar2 = 0;
    func_0x000101cef8c4(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    uVar3 = param_1;
    func_0x000107c5fc54(param_1,uVar2);
    func_0x000107c61170(param_1);
    if (uVar3 >> 0x3e != 0) {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  return;
}



/* Entry: 101cef864; end: 101cef903;  */

void FUN_101cef864(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101cef904; end: 101cef92b;  */

void FUN_101cef904(void)

{
  func_0x000101cef840();
  return;
}



/* Entry: 101cef92c; end: 101cef963;  */

void FUN_101cef92c(long param_1,long param_2)

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



/* Entry: 101cef964; end: 101cefcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cef964(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar5 = 0;
  lVar11 = param_2;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  if (param_1 != (long *)0x0) {
    func_0x000107c4af70();
    func_0x000107c61180();
    plVar6 = param_1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (plVar6 != (long *)0x0) {
      func_0x00010582fd0c();
      if (((ulong)param_1 & 1) != 0) goto LAB_101cefc40;
      func_0x000107c615e8(plVar6);
    }
  }
  lVar7 = param_2;
  lStack_90 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = lVar5;
  func_0x000107c44f4c();
  func_0x000107c61180();
  func_0x000107c44f60();
  func_0x000107c61180();
  func_0x000107c40870();
  func_0x000107c61180();
  if (param_5 == 0) {
    lVar5 = 0;
    lVar11 = 0;
  }
  else {
    func_0x000107c4af98();
    func_0x000107c61180();
    lVar5 = param_5;
    func_0x000107c5faec();
    func_0x000107c61170(param_5);
  }
  lVar8 = 0;
  FUN_101ced6c0();
  lStack_98 = lVar8;
  func_0x000107c610f8();
  lVar2 = _DAT_112e1c1f8;
  uVar9 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar8 + lVar2) = uVar9;
  lVar2 = _DAT_112e1c208;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101cef420();
  lVar4 = lStack_88;
  lVar3 = lStack_90;
  *(undefined **)(lVar8 + lVar2) = puVar10;
  *(undefined8 *)(lVar8 + _DAT_112e1c210) = 0;
  *(long *)(lVar8 + _DAT_112e1c218) = lVar7;
  *(long *)(lVar8 + _DAT_112e1c220) = param_2;
  *(undefined8 *)(lVar8 + _DAT_112e1c228) = param_3;
  *(undefined8 *)(lVar8 + _DAT_112e1c230) = param_4;
  plVar6 = (long *)(lVar8 + _DAT_112e1c238);
  *plVar6 = lVar5;
  plVar6[1] = lVar11;
  (**(code **)(lVar12 + 0x68))
            (lStack_90,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
             lStack_88);
  puVar10 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174();
  lStack_a0 = lVar7;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar9 = 0xd000000000000039;
  func_0x000107c5fadc(0xd000000000000039,0x800000010f00b580);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar9);
  (**(code **)(lVar12 + 8))(lVar3,lVar4);
  *(undefined **)(lVar8 + _DAT_112e1c200) = puVar10;
  lStack_68 = lStack_98;
  plVar6 = &lStack_70;
  lStack_70 = lVar8;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x000107c61170(lStack_a0);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
LAB_101cefc40:
  lVar5 = 0;
  FUN_101cec894();
  lVar11 = lVar5;
  func_0x000107c610f8();
  *(long **)(lVar11 + _DAT_112e1c1c8) = plVar6;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112e1c1c0);
  *puVar1 = param_3;
  puVar1[1] = &PTR_DAT_11046f808;
  puVar10 = PTR_s_init_1125d9248;
  lStack_80 = lVar11;
  lStack_78 = lVar5;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_80,puVar10);
  return;
}



/* Entry: 101cefcb0; end: 101cefcbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cefcb0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long extraout_x8;
  long unaff_x20;
  long lVar16;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar6 = *(long **)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar15 = *(long *)(unaff_x20 + 0x30);
  lVar5 = 0;
  lVar14 = lVar9;
  func_0x000107c5f804();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  if (plVar6 != (long *)0x0) {
    func_0x000107c4af70();
    func_0x000107c61180();
    plVar7 = plVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (plVar7 != (long *)0x0) {
      func_0x00010582fd0c();
      if (((ulong)plVar6 & 1) != 0) goto LAB_101cefc40;
      func_0x000107c615e8(plVar7);
    }
  }
  lVar8 = lVar9;
  lStack_90 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = lVar5;
  func_0x000107c44f4c();
  func_0x000107c61180();
  func_0x000107c44f60();
  func_0x000107c61180();
  func_0x000107c40870();
  func_0x000107c61180();
  if (lVar15 == 0) {
    lVar5 = 0;
    lVar14 = 0;
  }
  else {
    func_0x000107c4af98();
    func_0x000107c61180();
    lVar5 = lVar15;
    func_0x000107c5faec();
    func_0x000107c61170(lVar15);
  }
  lVar11 = 0;
  FUN_101ced6c0();
  lStack_98 = lVar11;
  func_0x000107c610f8();
  lVar15 = _DAT_112e1c1f8;
  uVar12 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar11 + lVar15) = uVar12;
  lVar15 = _DAT_112e1c208;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101cef420();
  lVar4 = lStack_88;
  lVar3 = lStack_90;
  *(undefined **)(lVar11 + lVar15) = puVar13;
  *(undefined8 *)(lVar11 + _DAT_112e1c210) = 0;
  *(long *)(lVar11 + _DAT_112e1c218) = lVar8;
  *(long *)(lVar11 + _DAT_112e1c220) = lVar9;
  *(undefined8 *)(lVar11 + _DAT_112e1c228) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_112e1c230) = uVar10;
  plVar6 = (long *)(lVar11 + _DAT_112e1c238);
  *plVar6 = lVar5;
  plVar6[1] = lVar14;
  (**(code **)(lVar16 + 0x68))
            (lStack_90,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
             lStack_88);
  puVar13 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174();
  lStack_a0 = lVar8;
  func_0x000107c61174(lVar9);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  uVar12 = 0xd000000000000039;
  func_0x000107c5fadc(0xd000000000000039,0x800000010f00b580);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar12);
  (**(code **)(lVar16 + 8))(lVar3,lVar4);
  *(undefined **)(lVar11 + _DAT_112e1c200) = puVar13;
  lStack_68 = lStack_98;
  plVar7 = &lStack_70;
  lStack_70 = lVar11;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  func_0x000107c61170(lStack_a0);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar10);
LAB_101cefc40:
  lVar14 = 0;
  FUN_101cec894();
  lVar9 = lVar14;
  func_0x000107c610f8();
  *(long **)(lVar9 + _DAT_112e1c1c8) = plVar7;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112e1c1c0);
  *puVar1 = uVar2;
  puVar1[1] = &PTR_DAT_11046f808;
  puVar13 = PTR_s_init_1125d9248;
  lStack_80 = lVar9;
  lStack_78 = lVar14;
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_80,puVar13);
  return;
}



/* Entry: 101cefcc0; end: 101cefcf7;  */

void FUN_101cefcc0(long param_1)

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



/* Entry: 101cefcf8; end: 101cefd1f;  */

void FUN_101cefcf8(void)

{
  return;
}



/* Entry: 101cefd20; end: 101cf00f7;  */

undefined * FUN_101cefd20(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = 0xd00000000000003a;
  *(undefined8 *)(lVar2 + 0x38) = 0x800000010f00b660;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f00b5c0);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 101cf00f8; end: 101cf0137;  */

void FUN_101cf00f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101cf0138; end: 101cf01a3;  */

void FUN_101cf0138(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c400d4(uVar1,param_3,7);
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 101cf01a4; end: 101cf01bb;  */

void FUN_101cf01a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  func_0x000100740458(0);
  func_0x000107c615f0(uVar2);
  func_0x000107c610f8(uVar1);
  func_0x000107c6157c();
  func_0x0001007404f4();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101cf01bc; end: 101cf01d7;  */

void FUN_101cf01bc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101cf01d8; end: 101cf0247;  */

void FUN_101cf01d8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cf0248; end: 101cf05e3;  */

undefined1  [16] FUN_101cf0248(ulong param_1)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar2 = 0xed00005241425f52;
  pcVar1 = (char *)0x415f5345534e454c;
  pcVar3 = (char *)(param_1 & 0xff);
  switch(pcVar3) {
  case (char *)0x0:
  case (char *)0x32:
  case (char *)0x3a:
    goto code_r0x000101cf0524;
  default:
    pcVar3 = "LENS_EXPLORER_FALLBACK_NAMESPACE_THEMES_CONFIG";
  case (char *)0x33:
  case (char *)0x3b:
    goto code_r0x000101cf0398;
  case (char *)0x2:
    pcVar3 = "Empty Friending Reliable Pinning Notification Processor";
  case (char *)0xc4:
  case (char *)0xe4:
  case (char *)0xec:
    pcVar3 = pcVar3 + 0xe40;
code_r0x000101cf0398:
    uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    pcVar3 = (char *)0xd00000000000002f;
code_r0x000101cf03a8:
    pcVar1 = pcVar3 + -1;
    goto code_r0x000101cf03ac;
  case (char *)0x3:
    pcVar3 = "Empty Friending Reliable Pinning Notification Processor";
  case (char *)0xff:
    pcVar3 = pcVar3 + 0x9a0;
code_r0x000101cf03c4:
    pcVar3 = pcVar3 + -0x20;
code_r0x000101cf03c8:
    auVar10._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar10._0_8_ = 0xd00000000000002a;
    return auVar10;
  case (char *)0x4:
    pcVar3 = "LENS_EXPERIENCE_PREVIEW_CAROUSEL_BAR_ANCHOR_IOS";
    goto code_r0x000101cf056c;
  case (char *)0x5:
  case (char *)0xd3:
    pcVar3 = "LENS_EXPERIENCE_INFOCARD_REMOVE_AFTER_REPORT_ALLOWED_IOS";
    break;
  case (char *)0x6:
    pcVar3 = "LENS_EXPERIENCE_INFOCARD_MINI_CAMERA_ENABLED_IOS";
    goto code_r0x000101cf04a4;
  case (char *)0x7:
    pcVar3 = "LENS_EXPERIENCE_INFOCARD_REDESIGN_ENABLED_IOS";
    goto code_r0x000101cf03e4;
  case (char *)0x8:
    pcVar3 = "LENS_EXPERIENCE_MINI_CAMERA_TRAY_CONTAINER_ENABLED_IOS";
    goto code_r0x000101cf04f0;
  case (char *)0x9:
  case (char *)0x60:
    uVar2 = 0x800000010f00b950;
  case (char *)0x68:
    auVar8._8_8_ = uVar2;
    auVar8._0_8_ = 0xd00000000000001a;
    return auVar8;
  case (char *)0xa:
  case (char *)0xb0:
    uVar2 = 0x800000010f00b9b0;
  case (char *)0x35:
    auVar17._8_8_ = uVar2;
    auVar17._0_8_ = 0xd000000000000025;
    return auVar17;
  case (char *)0xb:
    pcVar3 = "Empty Friending Reliable Pinning Notification Processor";
  case (char *)0x50:
    uVar2 = (ulong)(pcVar3 + 0x9e0) | 0x8000000000000000;
  case (char *)0x39:
    pcVar3 = (char *)0x2f;
  case (char *)0x31:
    auVar6._0_8_ = ((ulong)pcVar3 | 0xd000000000000000) - 0x11;
    auVar6._8_8_ = uVar2;
    return auVar6;
  case (char *)0xc:
    uVar2 = 0x800000010f00ba00;
  case (char *)0x58:
    auVar7._8_8_ = uVar2;
    auVar7._0_8_ = 0xd000000000000029;
    return auVar7;
  case (char *)0xd:
    pcVar3 = "LENS_PLUS_SUBSCRIPTION_CAROUSEL_REFRESH_ENABLED";
    goto code_r0x000101cf056c;
  case (char *)0xe:
    uVar2 = 0x800000010f00ba60;
  case (char *)0x38:
    auVar5._8_8_ = uVar2;
    auVar5._0_8_ = 0xd000000000000021;
    return auVar5;
  case (char *)0xf:
    pcVar3 = "LENS_PLUS_ELIGIBILITY_DIALOG_SUPPORT_URL";
  case (char *)0xc0:
  case (char *)0xe0:
code_r0x000101cf0470:
    auVar15._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar15._0_8_ = 0xd000000000000028;
    return auVar15;
  case (char *)0x10:
    uVar2 = 0x800000010f00bac0;
  case (char *)0x48:
    auVar4._8_8_ = uVar2;
    auVar4._0_8_ = 0xd000000000000022;
    return auVar4;
  case (char *)0x11:
  case (char *)0xc1:
  case (char *)0xe1:
  case (char *)0xea:
  case (char *)0xf8:
    pcVar3 = "Empty Friending Reliable Pinning Notification Processor";
  case (char *)0xc7:
  case (char *)0xef:
    pcVar3 = pcVar3 + 0xb10;
  case (char *)0xc9:
  case (char *)0xf1:
    pcVar3 = pcVar3 + -0x20;
  case (char *)0x98:
    uVar2 = (ulong)pcVar3 | 0x8000000000000000;
  case (char *)0xc8:
  case (char *)0xce:
  case (char *)0xf0:
  case (char *)0xf6:
    pcVar1 = (char *)0xd000000000000037;
  case (char *)0xd4:
  case (char *)0xeb:
    auVar13._8_8_ = uVar2;
    auVar13._0_8_ = pcVar1;
    return auVar13;
  case (char *)0x12:
    pcVar3 = "LENS_PLUS_UPSELL_GAMES_API_MIN_SECONDS_SINCE_LENS_OPEN";
code_r0x000101cf04f0:
    auVar18._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar18._0_8_ = 0xd000000000000036;
    return auVar18;
  case (char *)0x13:
    pcVar3 = "LENS_PLUS_GAME_LENS_IGNORE_UNLOCK_TOUCH_ENABLED";
    goto code_r0x000101cf056c;
  case (char *)0x14:
  case (char *)0xd2:
    pcVar3 = "Empty Friending Reliable Pinning Notification Processor";
  case (char *)0xc2:
  case (char *)0xc6:
  case (char *)0xd0:
  case (char *)0xe2:
  case (char *)0xee:
    pcVar3 = pcVar3 + 0xcb0;
  case (char *)0xc5:
  case (char *)0xcf:
  case (char *)0xe7:
  case (char *)0xed:
  case (char *)0xf4:
code_r0x000101cf04a4:
    pcVar3 = pcVar3 + -0x20;
code_r0x000101cf04a8:
    auVar16._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar16._0_8_ = 0xd000000000000030;
    return auVar16;
  case (char *)0x15:
  case (char *)0xa0:
    pcVar3 = "LENS_EXPERIENCE_UNIFIED_REPLY_CAMERA_IOS";
    goto code_r0x000101cf0470;
  case (char *)0x16:
    pcVar3 = "LENS_EXPERIENCE_UNIFIED_REPLY_CAMERA_CLOSE_BUTTON_HIDDEN_IOS";
    goto code_r0x000101cf0544;
  case (char *)0x17:
    pcVar3 = "LENS_EXPERIENCE_UNIFIED_REPLY_CAMERA_CLOSE_BUTTON_DIAMETER_IOS";
    goto code_r0x000101cf05cc;
  case (char *)0x18:
    pcVar3 = "Empty Friending Reliable Pinning Notification Processor";
  case (char *)0x70:
    pcVar3 = pcVar3 + 2000;
code_r0x000101cf0544:
    uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
code_r0x000101cf054c:
    auVar20._8_8_ = uVar2;
    auVar20._0_8_ = 0xd00000000000003c;
    return auVar20;
  case (char *)0x19:
    pcVar3 = "LENS_EXPERIENCE_REPLY_CAMERA_SWIPE_DOWN_COLLAPSES_LE_IOS";
    break;
  case (char *)0x1a:
    pcVar3 = "LENS_EXPERIENCE_UNIFIED_MODULAR_CAMERA_SWIPE_UP_LE_ENABLED_IOS";
code_r0x000101cf05cc:
    auVar24._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar24._0_8_ = 0xd00000000000003e;
    return auVar24;
  case (char *)0x1b:
    pcVar3 = "LENS_EXPERIENCE_UNIFIED_MODULAR_CAMERA_IOS";
    goto code_r0x000101cf03c4;
  case (char *)0x1c:
    auVar22._8_8_ = 0x800000010f00bcf0;
    auVar22._0_8_ = 0xd00000000000001b;
    return auVar22;
  case (char *)0x1d:
    pcVar3 = "Empty Friending Reliable Pinning Notification Processor";
  case (char *)0x34:
  case (char *)0x36:
    auVar23._8_8_ = (ulong)(pcVar3 + 0xd10) | 0x8000000000000000;
    auVar23._0_8_ = 0xd000000000000026;
    return auVar23;
  case (char *)0x1e:
    pcVar3 = "LENS_EXPERIENCE_PREVIEW_SPOTLIGHT_SUGGESTING_CATEGORIES_IOS";
    goto code_r0x000101cf0510;
  case (char *)0x1f:
    pcVar3 = "S_INJECTION_DISABLED_IOS";
  case (char *)0x90:
    uVar2 = (ulong)pcVar3 | 0x8000000000000000;
  case (char *)0xcc:
  case (char *)0xe5:
    pcVar1 = (char *)0xd00000000000003f;
  case (char *)0xf7:
    auVar12._8_8_ = uVar2;
    auVar12._0_8_ = pcVar1;
    return auVar12;
  case (char *)0x20:
    pcVar3 = "LENS_EXPERIENCE_NAMESPACE_DEEP_LINK_ENABLED_IOS";
code_r0x000101cf056c:
    auVar21._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar21._0_8_ = 0xd00000000000002f;
    return auVar21;
  case (char *)0x21:
    pcVar3 = "LENS_EXPERIENCE_AR_BAR_VIDEO_CALL_OPTIONS_IOS";
code_r0x000101cf03e4:
    pcVar3 = pcVar3 + -0x20;
code_r0x000101cf03e8:
    auVar11._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar11._0_8_ = 0xd00000000000002d;
    return auVar11;
  case (char *)0x22:
    pcVar3 = "LENS_EXPERIENCE_CHAT_DRAWER_GAMES_INJECTION_DISABLED_IOS";
    break;
  case (char *)0x23:
    pcVar3 = "LENS_EXPERIENCE_TALK_CAROUSEL_ASYNC_CAMERA_AUTH_ENABLED_IOS";
code_r0x000101cf0510:
    uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    pcVar1 = (char *)0xd00000000000003b;
code_r0x000101cf0524:
    auVar19._8_8_ = uVar2;
    auVar19._0_8_ = pcVar1;
    return auVar19;
  case (char *)0x30:
    goto code_r0x000101cf054c;
  case (char *)0x78:
    goto code_r0x000101cf03a8;
  case (char *)0x80:
  case (char *)0xf2:
    goto code_r0x000101cf03c8;
  case (char *)0x88:
    goto code_r0x000101cf03e8;
  case (char *)0xa8:
    goto code_r0x000101cf04a8;
  case (char *)0xc3:
  case (char *)0xe3:
  case (char *)0xe9:
    goto code_r0x000101cf0454;
  case (char *)0xcb:
  case (char *)0xe6:
  case (char *)0xf3:
  case (char *)0xf9:
    break;
  case (char *)0xcd:
code_r0x000101cf0458:
    pcVar3 = (char *)0x2f;
  case (char *)0xca:
  case (char *)0xe8:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
  case (char *)0xf5:
    auVar14._8_8_ = uVar2;
    auVar14._0_8_ = pcVar3 + 9;
    return auVar14;
  case (char *)0xd1:
code_r0x000101cf03ac:
    auVar9._8_8_ = uVar2;
    auVar9._0_8_ = pcVar1;
    return auVar9;
  }
  pcVar3 = pcVar3 + -0x20;
code_r0x000101cf0454:
  uVar2 = (ulong)pcVar3 | 0x8000000000000000;
  goto code_r0x000101cf0458;
}



/* Entry: 101cf05e4; end: 101cf0697;  */

void FUN_101cf05e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd000000000000019;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010efb92a0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd00000000000001b;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x800000010f00b6e0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0x1800000028;
  *(undefined4 *)(unaff_x20 + 0x38) = 0x40;
  *(undefined8 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined1 *)(unaff_x20 + 0x80) = 1;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined1 *)(unaff_x20 + 0x90) = 2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  *(undefined8 *)(unaff_x20 + 0x50) = param_3;
  return;
}



/* Entry: 101cf0698; end: 101cf07e3;  */

/* WARNING: Removing unreachable block (ram,0x000101cf07a0) */

long FUN_101cf0698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_48;
  
  uVar3 = param_2;
  func_0x0001000d224c(&lStack_48);
  FUN_101cf0248(param_2);
  uVar4 = uVar3;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  lVar1 = lStack_48;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(param_2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5ee30(lVar2);
      func_0x000107c61170(lVar2);
      FUN_101cf3bac(0,param_3,param_4);
      func_0x000107c614e8();
      func_0x000107c610f8();
      func_0x00010006c00c(lVar1,uVar4);
      lVar2 = lVar1;
      FUN_101cf3288(lVar1,uVar4);
      func_0x00010006c090(lVar1,uVar4);
      func_0x00010006c090(lVar1,uVar4);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 101cf07e4; end: 101cf097f;  */

long FUN_101cf07e4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x58);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = *(long *)(unaff_x20 + 0x48);
    FUN_101cf0698(lVar1,0,0x112e1c5a0,&PTR_PTR_1126bef50);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
    *(long *)(unaff_x20 + 0x58) = lVar1;
    func_0x000107c61174();
    func_0x000100ccdb48(uVar3);
  }
  func_0x000100ccdb58(lVar2);
  return lVar1;
}



/* Entry: 101cf0980; end: 101cf09b3;  */

undefined8 FUN_101cf0980(undefined8 param_1)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x70) == '\x01') {
    FUN_101cf09b4();
    *(undefined8 *)(unaff_x20 + 0x68) = param_1;
    *(undefined1 *)(unaff_x20 + 0x70) = 0;
    return param_1;
  }
  return *(undefined8 *)(unaff_x20 + 0x68);
}



/* Entry: 101cf09b4; end: 101cf0a57;  */

undefined8 FUN_101cf09b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  FUN_101cf4a7c();
  if (param_1 != -1) {
    func_0x000107c61428(0x112e1c6d8,&uStack_38,0,0);
    return uRam0000000112e1c6d8;
  }
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f00be20);
  uVar2 = uStack_38;
  func_0x000107c4c0d0(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101cf0a58; end: 101cf0e2f;  */

undefined * FUN_101cf0a58(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long extraout_x8;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_200 [8];
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [24];
  long lStack_100;
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
  undefined8 uStack_70;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar15 = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar14 = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000101cf0854();
  if (lVar5 == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  lVar6 = lVar5;
  func_0x000107c50964();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf0e30);
    (*pcVar3)();
  }
  lStack_1f8 = lVar6;
  lStack_1f0 = lVar5;
  lStack_1e8 = lVar15;
  func_0x000107c600f4(puVar14);
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_118,lVar4,lVar6);
  puVar2 = PTR___sypN_11034f1a8;
  if (lStack_100 == 0) {
    puStack_1e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_1e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_1d8 = puVar14;
    do {
      func_0x000100102924(auStack_118,auStack_138);
      func_0x0001000bb420(auStack_138,&uStack_1d0);
      uVar7 = 0;
      FUN_101cf3bac(0,0x112e1c3f0,&PTR_PTR_1126a9170);
      puVar8 = &uStack_140;
      puVar12 = &uStack_1d0;
      func_0x000107c6147c(puVar8,puVar12,puVar2 + 8,uVar7,6);
      uVar1 = uStack_140;
      if ((int)puVar8 == 0) {
        func_0x000100183ab8(auStack_138);
      }
      else {
        uVar9 = uStack_140;
        func_0x000107c42f24();
        func_0x000107c61180();
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf0e1c);
          (*pcVar3)();
        }
        uVar10 = uVar9;
        func_0x000107c5faec();
        puVar13 = puVar12;
        func_0x000107c61170(uVar9);
        func_0x000107c6142c(puVar12);
        uVar9 = uVar10 & 0xffffffffffff;
        if (((ulong)puVar12 & 0x2000000000000000) != 0) {
          uVar9 = (ulong)puVar12 >> 0x38 & 0xf;
        }
        if ((uVar9 != 0) && (uVar9 = uVar1, func_0x000107c44ba8(), (uVar9 & 1) != 0)) {
          uVar9 = uVar1;
          func_0x000107c5c8b8();
          func_0x000107c61180();
          if (uVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf0e20);
            (*pcVar3)();
          }
          uVar10 = uVar9;
          func_0x000107c44b90();
          func_0x000107c61170(uVar9);
          if ((uVar10 & 1) != 0) {
            uVar9 = uVar1;
            func_0x000107c5c8b8();
            func_0x000107c61180();
            if (uVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf0e2c);
              (*pcVar3)();
            }
            uVar10 = uVar9;
            func_0x000107c5c668();
            func_0x000107c61180();
            func_0x000107c61170(uVar9);
            if (uVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf0e28);
              (*pcVar3)();
            }
            FUN_101cf36fc(&uStack_f8,uVar10);
            func_0x000107c61170(uVar10);
            uVar9 = uVar1;
            func_0x000107c42f24();
            func_0x000107c61180();
            if (uVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf0e24);
              (*pcVar3)();
            }
            uVar10 = uVar9;
            func_0x000107c5faec();
            func_0x000107c61170(uVar9);
            func_0x000107c61170(uVar1);
            func_0x000100183ab8(auStack_138);
            uStack_168 = uStack_90;
            uStack_170 = uStack_98;
            uStack_158 = uStack_80;
            uStack_160 = uStack_88;
            uStack_148 = uStack_70;
            uStack_150 = uStack_78;
            uStack_1a8 = uStack_d0;
            uStack_1b0 = uStack_d8;
            uStack_198 = uStack_c0;
            uStack_1a0 = uStack_c8;
            uStack_188 = uStack_b0;
            uStack_190 = uStack_b8;
            uStack_178 = uStack_a0;
            uStack_180 = uStack_a8;
            uStack_1c8 = uStack_f0;
            uStack_1d0 = uStack_f8;
            uStack_1b8 = uStack_e0;
            uStack_1c0 = uStack_e8;
            puVar11 = puStack_1e0;
            func_0x000107c61558();
            if (((ulong)puVar11 & 1) == 0) {
              puVar11 = (undefined *)0x0;
              func_0x000101cf3050(0,*(long *)(puStack_1e0 + 0x10) + 1,1);
              puStack_1e0 = puVar11;
            }
            uVar1 = *(ulong *)(puStack_1e0 + 0x10);
            if (*(ulong *)(puStack_1e0 + 0x18) >> 1 <= uVar1) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_1e0 + 0x18));
              func_0x000101cf3050(puVar11,uVar1 + 1,1,puStack_1e0);
              puStack_1e0 = puVar11;
            }
            *(ulong *)(puStack_1e0 + 0x10) = uVar1 + 1;
            *(ulong *)(puStack_1e0 + uVar1 * 0xa0 + 0x20) = uVar10;
            *(undefined8 **)(puStack_1e0 + uVar1 * 0xa0 + 0x28) = puVar13;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x38) = uStack_1c8;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x30) = uStack_1d0;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x68) = uStack_198;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x60) = uStack_1a0;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x78) = uStack_188;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x70) = uStack_190;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x48) = uStack_1b8;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x40) = uStack_1c0;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x58) = uStack_1a8;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x50) = uStack_1b0;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0xa8) = uStack_158;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0xa0) = uStack_160;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0xb8) = uStack_148;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0xb0) = uStack_150;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x88) = uStack_178;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x80) = uStack_180;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x98) = uStack_168;
            *(undefined8 *)(puStack_1e0 + uVar1 * 0xa0 + 0x90) = uStack_170;
            puVar14 = puStack_1d8;
            goto LAB_101cf0b3c;
          }
        }
        func_0x000100183ab8(auStack_138);
        func_0x000107c61170(uVar1);
        puVar14 = puStack_1d8;
      }
LAB_101cf0b3c:
      func_0x000107c601c0(auStack_118,lVar4,lVar6);
    } while (lStack_100 != 0);
  }
  func_0x000107c61170(lStack_1f8);
  func_0x000107c61170(lStack_1f0);
  (**(code **)(lStack_1e8 + 8))(puVar14,lVar4);
  return puStack_1e0;
}



/* Entry: 101cf0e30; end: 101cf0ec3; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider unifiedReplyCameraEnabled] */

undefined8 FUN_101cf0e30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f00b700);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf0ec4; end: 101cf0f57; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider unifiedReplyCameraCloseButtonHidden] */

undefined8 FUN_101cf0ec4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000003c;
  func_0x000107c5fadc(0xd00000000000003c,0x800000010f00b730);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf0f58; end: 101cf0f63; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider unifiedReplyCameraCloseButtonDiameter] */

undefined8 FUN_101cf0f58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101cf0f64();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 101cf0f64; end: 101cf0ffb;  */

int FUN_101cf0f64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000003e;
  func_0x000107c5fadc(0xd00000000000003e,0x800000010f00b770);
  uVar2 = uStack_38;
  func_0x000107c4980c();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  iVar3 = (int)uVar2;
  if (iVar3 < 0x19) {
    iVar3 = 0x18;
  }
  if (0x3f < iVar3) {
    iVar3 = 0x40;
  }
  return iVar3;
}



/* Entry: 101cf0ffc; end: 101cf11a3; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider unifiedReplyCameraSwipeUpLensExplorerEnabled] */

undefined8 FUN_101cf0ffc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  FUN_101cf4d48();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000003c;
  func_0x000107c5fadc(0xd00000000000003c,0x800000010f00b7b0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf11a4; end: 101cf11d7; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider unifiedModularCameraSwipeUpLensExplorerEnabled] */

uint FUN_101cf11a4(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101cf11d8();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101cf11d8; end: 101cf12cb;  */

undefined8 FUN_101cf11d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f00b830);
  uVar2 = uVar3;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  if ((int)uVar2 != 0) {
    func_0x0001000d224c(&uStack_48,0);
    uVar2 = 0xd00000000000003e;
    func_0x000107c5fadc(0xd00000000000003e,0x800000010f00b860);
    uVar3 = uStack_48;
    func_0x000107c3ebd4(uStack_48);
    func_0x000107c615e8(uStack_48);
    func_0x000107c61170(uVar2);
  }
  return uVar3;
}



/* Entry: 101cf12cc; end: 101cf135f; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider unifiedModularCameraEnabled] */

undefined8 FUN_101cf12cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f00b830);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf1360; end: 101cf1507;  */

void FUN_101cf1360(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 101cf1508; end: 101cf15af;  */

void FUN_101cf1508(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_101cf159c;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_101cf159c:
  func_0x000107c6142c();
  *param_1 = uVar7;
  return;
}



/* Entry: 101cf15b0; end: 101cf1663;  */

void FUN_101cf15b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    FUN_101cf4d08();
    if (param_1 < 0) {
      func_0x0001000d224c(&uStack_38);
      uVar1 = 0xd00000000000002d;
      func_0x000107c5fadc(0xd00000000000002d,0x800000010f00bdf0);
      uVar2 = uStack_38;
      func_0x000107c4980c();
      func_0x000107c615e8(uStack_38);
      func_0x000107c61170(uVar1);
      param_1 = (long)(int)uVar2;
    }
    *(long *)(unaff_x20 + 0x78) = param_1;
    *(undefined1 *)(unaff_x20 + 0x80) = 0;
  }
  return;
}



/* Entry: 101cf1664; end: 101cf1697; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider arBarVideoCallExclusiveFilterEnabled] */

uint FUN_101cf1664(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101cf15b0();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101cf1698; end: 101cf1737;  */

ulong FUN_101cf1698(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uStack_38;
  
  FUN_101cf53dc();
  if ((param_1 & 0xff) == 0) {
    func_0x0001000d224c(&uStack_38);
    uVar2 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f00b920);
    uVar1 = uStack_38;
    func_0x000107c3ebd4(uStack_38);
    func_0x000107c615e8(uStack_38);
    func_0x000107c61170(uVar2);
  }
  else {
    uVar1 = (ulong)(((uint)param_1 & 0xff) == 1);
  }
  return uVar1;
}



/* Entry: 101cf1738; end: 101cf1743; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider exclusiveLensTierType] */

undefined8 FUN_101cf1738(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101cf177c();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 101cf1744; end: 101cf177b;  */

undefined8 FUN_101cf1744(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*param_3)();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 101cf177c; end: 101cf1873;  */

bool FUN_101cf177c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00b950);
  uVar2 = 0;
  uVar5 = 0xe000000000000000;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar3 = uStack_38;
  func_0x000107c5c1dc(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c5faec(uVar3);
  func_0x000107c61170(uVar3);
  lVar4 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar5);
  return lVar4 != 0;
}



/* Entry: 101cf1874; end: 101cf1907; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider isLensOverlayUpsellAnyActionEnabled] */

undefined8 FUN_101cf1874(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f00b980);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf1908; end: 101cf199b; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider lensPlusUpsellEligibilityCheckEnabled] */

undefined8 FUN_101cf1908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00b9b0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf199c; end: 101cf1a2f; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider lensPlusTrayPaywallEnabled] */

undefined8 FUN_101cf199c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00b9e0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf1a30; end: 101cf1ac3; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider lensPlusTrayPaywallOnPreviewEnabled] */

undefined8 FUN_101cf1a30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f00ba00);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf1ac4; end: 101cf1b57; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider lensPlusSubscriptionCarouselRefreshEnabled] */

undefined8 FUN_101cf1ac4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f00ba30);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf1b58; end: 101cf1beb; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider lensPlusEnableWebUpgrade] */

undefined8 FUN_101cf1b58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00ba60);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf1bec; end: 101cf1d03; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider lensPlusUpsellEligibilityDialogSupportURL] */

void FUN_101cf1bec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x000101cf1c44();
  func_0x000107c61574(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101cf1d04; end: 101cf1d97; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider lensPlusGameLensUpsellEnabled] */

undefined8 FUN_101cf1d04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f00bac0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf1d98; end: 101cf1f33; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider lensPlusGameLensTouchBypassUpsellTimeoutSeconds] */

double FUN_101cf1d98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f00baf0);
  uVar2 = uStack_38;
  func_0x000107c4980c(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (double)(int)uVar2;
}


