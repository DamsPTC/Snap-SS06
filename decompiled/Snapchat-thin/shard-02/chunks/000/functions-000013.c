/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016abddc; end: 1016abef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016abddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbfea0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dbfea8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dbfeb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dbfeb8) = 0;
  lVar2 = _DAT_112dbfec0;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dbfec8) = 0;
  lVar2 = _DAT_112dbfed0;
  uVar4 = 0x112dbfe70;
  func_0x0001000285a8(0x112dbfe70,&UNK_10d97c060);
  func_0x000107c61538();
  FUN_1016ab6a4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112dbff60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dbff68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dbff70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dbff78) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016abef4; end: 1016abf43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016abef4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112dbfec0));
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016abf44; end: 1016abfab; -[CaptionSuggestionStickerItemInstanceSource dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016abf44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dbfec0);
  func_0x000107c61174();
  func_0x000107c42194(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016abfac; end: 1016ac077; -[CaptionSuggestionStickerItemInstanceSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016ac01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016ac04c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ac020) */
/* WARNING: Removing unreachable block (ram,0x0001016ac050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016abfac(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112dbfea0),
                      ((undefined8 *)(param_1 + _DAT_112dbfea0))[1]);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbff68));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dbff70));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbfea8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbfeb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dbfeb8));
  return;
}



/* Entry: 1016ac078; end: 1016ac6a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016ac078(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined *puVar9;
  long lVar10;
  uint *puVar11;
  
  lVar2 = _DAT_112dbfeb8;
  puVar9 = *(undefined **)(unaff_x20 + _DAT_112dbfeb8);
  if (puVar9 == (undefined *)0x0) {
    func_0x0001016ac208();
    puVar3 = &DAT_112dbfec8;
    puVar4 = (undefined *)0x0;
    FUN_1016abc48();
    lVar10 = *(long *)(puVar3 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar10 != 0) {
      puVar11 = (uint *)(puVar3 + 0x20);
      do {
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar6 = (ulong)*puVar11;
          FUN_1016ad2a4();
          if (((ulong)puVar4 & 1) != 0) {
            uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar6 * 8);
            func_0x000107c61174();
            puVar5 = puVar9;
            func_0x000107c61550();
            if ((((int)puVar5 == 0) || ((long)puVar9 < 0)) ||
               (puVar5 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar9 >> 0x3e == 0) {
                puVar4 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar4 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar4 = puVar9;
                }
                func_0x000107c60480();
              }
              puVar4 = puVar4 + 1;
              puVar5 = (undefined *)0x0;
              FUN_1016acfe4(0,puVar4,1,puVar9);
            }
            uVar8 = (ulong)puVar5 & 0xffffffffffffff8;
            uVar6 = *(ulong *)(uVar8 + 0x10);
            puVar1 = (undefined *)(uVar6 + 1);
            puVar9 = puVar5;
            if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
              puVar4 = puVar1;
              FUN_1016acfe4(puVar9,puVar1,1,puVar5);
              uVar8 = (ulong)puVar9 & 0xffffffffffffff8;
            }
            *(undefined **)(uVar8 + 0x10) = puVar1;
            *(undefined8 *)(uVar8 + uVar6 * 8 + 0x20) = uVar7;
          }
        }
        puVar11 = puVar11 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    func_0x000107c6142c(param_1);
    func_0x000107c6142c(puVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined **)(unaff_x20 + lVar2) = puVar9;
    func_0x000107c61434(puVar9);
    func_0x000107c6142c(uVar7);
  }
  else {
    func_0x000107c61434(puVar9);
  }
  return puVar9;
}



/* Entry: 1016ac6a4; end: 1016ac707; -[CaptionSuggestionStickerItemInstanceSource availableStickerItems] */

void FUN_1016ac6a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1016ac078();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_1016adfec(0,0x112dbffa8,&PTR_PTR_1126b3800);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1016ac708; end: 1016ac7b7; -[CaptionSuggestionStickerItemInstanceSource setDidUpdateAvailableStickerItems:] */

/* WARNING: Possible PIC construction at 0x0001016ac790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ac794) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ac708(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar5 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1103f6670;
    func_0x000107c613fc(&UNK_1103f6670,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_1016addf0;
  }
  plVar1 = (long *)(param_1 + _DAT_112dbfea0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = (long)pcVar5;
  plVar1[1] = (long)puVar4;
  func_0x000107c61174(param_1);
  func_0x000100b64c10(pcVar5,puVar4);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1016ac7b8; end: 1016acb8b;  */

undefined * FUN_1016ac7b8(void)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  
  puVar6 = &DAT_112dbff60;
  puVar14 = (undefined *)0x1016abca8;
  FUN_1016abc48();
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar19 = 0;
  uVar16 = 1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((puVar6[0x20] & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)(puVar6 + 0x40);
  do {
    while( true ) {
      while (uVar20 == 0) {
        bVar5 = SCARRY8(lVar19,1);
        lVar19 = lVar19 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016acb74);
          (*pcVar4)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar19) {
          func_0x000107c61574(puVar6);
          return puVar3;
        }
        uVar20 = *(ulong *)((long)(puVar6 + 0x40) + lVar19 * 8);
      }
      uVar18 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar20 = uVar20 - 1 & uVar20;
      uVar2 = *(uint *)(*(long *)(puVar6 + 0x30) +
                       (lVar19 << 8 | LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) << 2));
      puVar7 = PTR_PTR_1126ba8f8;
      func_0x000107c610f8(PTR_PTR_1126ba8f8);
      func_0x000107c453e4();
      func_0x000107c5a0f8();
      puVar8 = PTR_PTR_1126b37c0;
      func_0x000107c610f8(PTR_PTR_1126b37c0);
      func_0x000107c453e4();
      func_0x000107c553a0();
      puVar9 = PTR_PTR_1126b0cb8;
      func_0x000107c610f8(PTR_PTR_1126b0cb8);
      func_0x000107c453e4();
      func_0x000107c545cc();
      puVar10 = PTR_PTR_1126b0cc0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c55900();
      func_0x000107c61174();
      func_0x000107c61174();
      puVar11 = puVar10;
      func_0x000107c41214();
      func_0x000107c61180();
      if (puVar11 != (undefined *)0x0) break;
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
LAB_1016ac870:
      uVar18 = (ulong)uVar2;
      FUN_1016ad2a4();
      if (((ulong)puVar14 & 1) != 0) {
        puVar14 = puVar3;
        func_0x000107c61558();
        if ((int)puVar14 == 0) {
          FUN_1016ad5c4();
        }
        func_0x000107c61170(*(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar18 * 8));
        puVar14 = puVar3;
        func_0x0001016adc18(uVar18);
      }
    }
    puVar12 = puVar11;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar11);
    puVar11 = PTR_PTR_1126b3800;
    func_0x000107c610f8();
    puVar13 = puVar12;
    func_0x000107c5ee20(puVar12,puVar14);
    func_0x000107c45ae0();
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    uVar18 = (ulong)uVar2;
    func_0x00010006c090(puVar12);
    func_0x000107c61170(puVar10);
    if (puVar11 == (undefined *)0x0) goto LAB_1016ac870;
    puVar7 = puVar3;
    func_0x000107c61558();
    FUN_1016ad2a4();
    uVar17 = (ulong)~(uint)puVar14 & 1;
    lVar1 = *(long *)(puVar3 + 0x10) + uVar17;
    if (SCARRY8(*(long *)(puVar3 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1016acb78);
      (*pcVar4)();
    }
    if (*(long *)(puVar3 + 0x18) < lVar1) {
      func_0x0001016ad994(lVar1);
      uVar18 = (ulong)uVar2;
      FUN_1016ad2a4();
      puVar8 = puVar7;
      if (((uint)puVar14 & 1) != ((uint)puVar7 & 1)) {
        func_0x0001016ab7a0(0);
        func_0x000107c60624();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016acb8c);
        (*pcVar4)();
      }
    }
    else {
      puVar8 = puVar14;
      if (((ulong)puVar7 & 1) == 0) {
        FUN_1016ad5c4();
      }
    }
    if (((ulong)puVar14 & 1) == 0) {
      *(ulong *)(puVar3 + (uVar18 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar3 + (uVar18 >> 6) * 8 + 0x40) | 1L << (uVar18 & 0x3f);
      *(uint *)(*(long *)(puVar3 + 0x30) + uVar18 * 4) = uVar2;
      *(undefined **)(*(long *)(puVar3 + 0x38) + uVar18 * 8) = puVar11;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016acb7c);
        (*pcVar4)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar14 = puVar8;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar18 * 8);
      *(undefined **)(*(long *)(puVar3 + 0x38) + uVar18 * 8) = puVar11;
      func_0x000107c61170(uVar15);
      puVar14 = puVar8;
    }
  } while( true );
}



/* Entry: 1016acb8c; end: 1016acd5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016acb8c(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar6 = *(long *)(unaff_x20 + _DAT_112dbfea8);
  if (lVar6 == 0 || param_1 != lVar6) {
    *(long *)(unaff_x20 + _DAT_112dbfea8) = param_1;
    func_0x000107c615e8(lVar6);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dbff68);
    func_0x000107c615f0(param_1);
    func_0x000107c453c4();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dbfeb0);
    *(undefined8 *)(unaff_x20 + _DAT_112dbfeb0) = uVar8;
    func_0x000107c615e8(uVar7);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dbfeb8);
    *(undefined8 *)(unaff_x20 + _DAT_112dbfeb8) = 0;
    func_0x000107c6142c(uVar8);
    func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112dbfec0));
    func_0x000107c453b8();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016acd5c);
      (*pcVar1)();
    }
    pcVar2 = "bindInfoStickerDataProvider(_:)";
    func_0x0001000c10c0("bindInfoStickerDataProvider(_:)");
    func_0x000107c61180();
    lVar6 = param_1;
    func_0x000107c4da8c(param_1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar2);
    puVar3 = &UNK_1103f6620;
    func_0x000107c613fc(&UNK_1103f6620,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = FUN_1016addac;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100b5fdac;
    puStack_58 = &UNK_1103f6638;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar5 = lVar6;
    func_0x000107c5c320(lVar6);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c3e924(lVar5);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1016acd5c; end: 1016ace03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016acd5c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112dbfeb8);
    *(undefined8 *)(param_2 + _DAT_112dbfeb8) = 0;
    func_0x000107c6142c(uVar1);
    pcVar2 = *(code **)(param_2 + _DAT_112dbfea0);
    if (pcVar2 == (code *)0x0) {
      func_0x000107c61170(param_2);
    }
    else {
      uVar1 = ((undefined8 *)(param_2 + _DAT_112dbfea0))[1];
      func_0x000107c6157c(uVar1);
      (*pcVar2)();
      func_0x000107c61170(param_2);
      func_0x00010058d43c(pcVar2,uVar1);
    }
  }
  return;
}



/* Entry: 1016ace04; end: 1016ace4b; -[CaptionSuggestionStickerItemInstanceSource bindInfoStickerDataProvider:] */

void FUN_1016ace04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1016acb8c(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016ace4c; end: 1016acee3; -[CaptionSuggestionStickerItemInstanceSource init] */

void FUN_1016ace4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptionStickerSuggestionsImpl.CaptionSuggestionStickerItemInstanceSource",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ace78);
  (*pcVar1)();
}



/* Entry: 1016acee4; end: 1016acfe3;  */

undefined * FUN_1016acee4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016acfe4);
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
    puVar3 = (undefined *)0x112dbffb8;
    func_0x0001000285a8(0x112dbffb8,&UNK_10d97c0b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 2);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 4 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1016acfe4; end: 1016ad10b;  */

ulong FUN_1016acfe4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ad10c);
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
  FUN_1016ad10c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ad108);
      (*pcVar1)();
    }
    FUN_1016ad18c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1016ad10c; end: 1016ad18b;  */

undefined * FUN_1016ad10c(undefined *param_1,undefined *param_2)

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
    func_0x0001016ace78();
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



/* Entry: 1016ad18c; end: 1016ad2a3;  */

long FUN_1016ad18c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016ad2a0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016ad2a4);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1016adfec(0,0x112dbffa8,&PTR_PTR_1126b3800);
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
      FUN_1016adfec(0,0x112dbffa8,&PTR_PTR_1126b3800);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016ad29c);
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



/* Entry: 1016ad2a4; end: 1016ad2fb;  */

void FUN_1016ad2a4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c6069c();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(int *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 4) == (int)param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1016ad2fc; end: 1016ad35f;  */

void FUN_1016ad2fc(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(int *)(*(long *)(unaff_x20 + 0x30) + param_2 * 4) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1016ad360; end: 1016ad477;  */

void FUN_1016ad360(undefined4 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1016ad2a4();
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ad40c);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_1016ad720(lVar5);
    uVar2 = param_2;
    FUN_1016ad2a4();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x0001016ab7a0(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ad3f0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1016ad478();
    lVar5 = *unaff_x20;
    goto joined_r0x0001016ad420;
  }
  lVar5 = *unaff_x20;
joined_r0x0001016ad420:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(int *)(*(long *)(lVar5 + 0x30) + uVar2 * 4) = (int)param_2;
    *(undefined4 *)(*(long *)(lVar5 + 0x38) + uVar2 * 4) = param_1;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ad478);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  else {
    *(undefined4 *)(*(long *)(lVar5 + 0x38) + uVar2 * 4) = param_1;
  }
  return;
}



/* Entry: 1016ad478; end: 1016ad5c3;  */

void FUN_1016ad478(void)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112dbfe90,&UNK_10d97c028);
  lVar10 = *unaff_x20;
  lVar4 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar10 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar6 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar10 + 0x40);
    lVar8 = lVar6;
    if (uVar5 == 0) goto LAB_1016ad550;
    do {
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 << 6;
      while( true ) {
        uVar2 = *(undefined4 *)(*(long *)(lVar10 + 0x38) + uVar9 * 4);
        *(undefined4 *)(*(long *)(lVar4 + 0x30) + uVar9 * 4) =
             *(undefined4 *)(*(long *)(lVar10 + 0x30) + uVar9 * 4);
        *(undefined4 *)(*(long *)(lVar4 + 0x38) + uVar9 * 4) = uVar2;
        lVar8 = lVar6;
        if (uVar5 != 0) break;
LAB_1016ad550:
        do {
          lVar6 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1016ad5c4);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar6) goto LAB_1016ad5a4;
          uVar5 = *(ulong *)(lVar1 + lVar6 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar5 == 0);
        uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 - 1 & uVar5;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 * 0x40;
      }
    } while( true );
  }
LAB_1016ad5a4:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1016ad5c4; end: 1016ad71f;  */

void FUN_1016ad5c4(void)

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
  
  func_0x0001000285a8(0x112dbfff8,&UNK_10d97c0b8);
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
    if (uVar6 == 0) goto LAB_1016ad6a0;
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
        *(undefined4 *)(*(long *)(lVar4 + 0x30) + uVar8 * 4) =
             *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar8 * 4);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_1016ad6a0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1016ad720);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1016ad6f8;
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
LAB_1016ad6f8:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1016ad720; end: 1016addab;  */

void FUN_1016ad720(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112dbfe90;
  func_0x0001000285a8(0x112dbfe90,&UNK_10d97c028);
  lVar7 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar6);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1016ad960:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar7;
    return;
  }
  puVar15 = (ulong *)(lVar13 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  lVar1 = lVar7 + 0x40;
  lVar9 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar17 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1016ad990);
          (*pcVar5)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
            if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
              *puVar15 = -1L << (uVar14 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar13 + 0x10) = 0;
          }
          goto LAB_1016ad960;
        }
        uVar14 = puVar15[lVar17];
        lVar9 = lVar9 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar17 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar17 << 6;
    uVar2 = *(uint *)(*(long *)(lVar13 + 0x30) + uVar8 * 4);
    uVar16 = (ulong)uVar2;
    uVar3 = *(undefined4 *)(*(long *)(lVar13 + 0x38) + uVar8 * 4);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    func_0x000107c6069c();
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar16 = uVar16 & (uVar12 ^ 0xffffffffffffffff);
    uVar10 = uVar16 >> 6;
    uVar8 = -1L << (uVar16 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar4 = false;
      uVar8 = 0x3f - uVar12 >> 6;
      do {
        uVar16 = uVar10 + 1;
        if ((uVar16 == uVar8) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1016ad994);
          (*pcVar5)();
        }
        uVar10 = 0;
        if (uVar16 != uVar8) {
          uVar10 = uVar16;
        }
        bVar4 = (bool)(uVar16 == uVar8 | bVar4);
        uVar16 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar16 == 0xffffffffffffffff);
      uVar16 = ~uVar16;
      uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
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
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar16 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(uint *)(*(long *)(lVar7 + 0x30) + uVar8 * 4) = uVar2;
    *(undefined4 *)(*(long *)(lVar7 + 0x38) + uVar8 * 4) = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar9 = lVar17;
  } while( true );
}



/* Entry: 1016addac; end: 1016addcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016addac(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112dbfeb8);
    *(undefined8 *)(lVar1 + _DAT_112dbfeb8) = 0;
    func_0x000107c6142c(uVar2);
    pcVar3 = *(code **)(lVar1 + _DAT_112dbfea0);
    if (pcVar3 == (code *)0x0) {
      func_0x000107c61170(lVar1);
    }
    else {
      uVar2 = ((undefined8 *)(lVar1 + _DAT_112dbfea0))[1];
      func_0x000107c6157c(uVar2);
      (*pcVar3)();
      func_0x000107c61170(lVar1);
      func_0x00010058d43c(pcVar3,uVar2);
    }
  }
  return;
}



/* Entry: 1016addd0; end: 1016addef;  */

void FUN_1016addd0(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5738);
  return;
}



/* Entry: 1016addf0; end: 1016addfb;  */

void FUN_1016addf0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001016addf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1016addfc; end: 1016adfeb;  */

undefined * FUN_1016addfc(undefined4 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_54;
  
  puVar3 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(uStack_70);
  puStack_78 = (undefined *)0xd000000000000013;
  uStack_70 = 0x800000010efb6560;
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  uStack_54 = param_1;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  uVar1 = uStack_70;
  puVar5 = puStack_78;
  if (puVar3 == (undefined *)0x0) {
    lVar4 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    lVar4 = 0;
    FUN_1016adfec(0,0x112d4ede8,&PTR_PTR_1126ba8d8);
  }
  puStack_78 = puVar3;
  lStack_60 = lVar4;
  func_0x000107c61174(puVar3);
  func_0x000107c5fadc(puVar5,uVar1);
  func_0x000107c6142c(uVar1);
  if (lVar4 == 0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(&puStack_78,lVar4);
    lVar9 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
    puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar9 + 0x10))(puVar8);
    puVar7 = puVar8;
    func_0x000107c605b0(puVar8,lVar4);
    (**(code **)(lVar9 + 8))(puVar8,lVar4);
    func_0x000100183ab8(&puStack_78);
  }
  puVar6 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(puVar7);
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c61170(puVar3);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016adfec);
  (*pcVar2)();
}



/* Entry: 1016adfec; end: 1016ae02b;  */

void FUN_1016adfec(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016ae02c; end: 1016ae097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ae02c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010020bfd0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dc0060) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1016ae098; end: 1016ae09f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ae098(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010020bfd0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dc0060) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1016ae0a0; end: 1016ae0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ae0a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc0060) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016ae0ec; end: 1016ae0ef; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_1016ae0ec(void)

{
  return;
}



/* Entry: 1016ae0f0; end: 1016ae14f; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl init] */

void FUN_1016ae0f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassStickerInjectorImpl.FanPassStickerInjectorImpl",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ae11c);
  (*pcVar1)();
}



/* Entry: 1016ae150; end: 1016ae15f; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ae150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc0060));
  return;
}



/* Entry: 1016ae160; end: 1016ae1bf; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl isConversionSupportedForCTPItem:] */

uint FUN_1016ae160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016ae81c(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1016ae1c0; end: 1016ae21b; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

uint FUN_1016ae1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016ae928(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1016ae21c; end: 1016ae28b; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_1016ae21c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016ae9c0();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  if (param_3 != 0) {
    func_0x000107c61170(param_3);
  }
  return param_3 != 0;
}



/* Entry: 1016ae28c; end: 1016ae33f; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl isConversionSupportedForStickerState:] */

bool FUN_1016ae28c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  func_0x000107c453d0();
  if (lVar1 == 0x15) {
    lVar2 = param_3;
    func_0x000107c4a790();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001016ae9c0();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    if (lVar3 == 0) {
      return false;
    }
  }
  else {
    func_0x000107c61170(param_3);
    lVar3 = param_1;
  }
  func_0x000107c61170(lVar3);
  return lVar1 == 0x15;
}



/* Entry: 1016ae340; end: 1016ae39b; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_1016ae340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016aed44(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016ae39c; end: 1016ae4a3; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_1016ae39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    uVar1 = 0;
    FUN_1016af6c0(0,0x112dc0090,&PTR_PTR_1126e0c80);
    func_0x000107c5fc54(param_4,uVar1);
  }
  if (param_6 != 0) {
    uVar1 = 0;
    FUN_1016af6c0(0,0x112dc0098,&PTR_PTR_1126bf730);
    func_0x000107c5fc54(param_6,uVar1);
  }
  func_0x000107c61174(param_3);
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1016aef1c(param_3,param_5,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016ae4a4; end: 1016ae51b; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_1016ae4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016aead8(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016ae51c; end: 1016ae5b3; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_1016ae51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = 0;
    FUN_1016af6c0(0,0x112dc0090,&PTR_PTR_1126e0c80);
    func_0x000107c5fc54(param_4,uVar1);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016af120(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016ae5b4; end: 1016ae5bb; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

void FUN_1016ae5b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1016ae5bc; end: 1016ae64f; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_1016ae5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    func_0x000107c5fc54(param_4,uVar1);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016af21c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016ae650; end: 1016ae6c3; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_1016ae650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016af2a8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016ae6c4; end: 1016ae74f; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_1016ae6c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016ae9c0();
  if (param_3 == 0) {
    func_0x000107c61170(lVar2);
    lVar2 = 0;
  }
  else {
    func_0x000107c61170();
    uVar1 = 0;
    func_0x000103edb0f8(0);
    func_0x000107c610f8();
    func_0x000103eda9a4(lVar2,uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016ae750; end: 1016ae7ab; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_1016ae750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016af4f8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016ae7ac; end: 1016ae7b3; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_1016ae7ac(void)

{
  return 1;
}



/* Entry: 1016ae7b4; end: 1016aead7; -[_TtC26FanPassStickerInjectorImpl26FanPassStickerInjectorImpl isStickerTypeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016ae7b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c40cf0(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1016aead8; end: 1016aed43;  */

long FUN_1016aead8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c4a764();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016aed34);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c42924();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016aed38);
    (*pcVar1)();
  }
  lVar2 = lVar3;
  func_0x000107c453b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016aed3c);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5d0f0();
  func_0x000107c61170(lVar2);
  if ((int)lVar3 == 0x18) {
    lVar2 = param_1;
    func_0x000107c4ce20();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016aed40);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c453bc();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016aed44);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c42dd8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      puVar4 = PTR_PTR_1126a7890;
      func_0x000107c610f8(PTR_PTR_1126a7890);
      func_0x000107c453e4();
      lVar3 = lVar2;
      func_0x000107c4153c(lVar2);
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c53f68(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar5);
      puVar5 = PTR_PTR_1126ba8b8;
      func_0x000107c610f8(PTR_PTR_1126ba8b8);
      func_0x000107c453e4();
      puVar6 = puVar4;
      func_0x000107c3ecc8(puVar4);
      func_0x000107c61180();
      puVar7 = puVar5;
      func_0x000107c548a4(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000105d0b830(param_1,param_2);
      func_0x000107c61180();
      func_0x000107c553ac();
      func_0x000107c61180();
      func_0x000107c61170();
      puVar6 = puVar5;
      func_0x000107c3ecc8(puVar5);
      func_0x000107c61180();
      lVar3 = param_1;
      func_0x000107c553a8(param_1);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar3);
      lVar3 = param_1;
      func_0x000107c3ecc8(param_1);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(param_1);
      return lVar3;
    }
  }
  else {
    func_0x000107c61170(param_1);
  }
  return 0;
}



/* Entry: 1016aed44; end: 1016aef1b;  */

undefined * FUN_1016aed44(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c61174();
  puVar5 = param_3;
  func_0x000107c453d0();
  if (puVar5 == (undefined *)0x15) {
    puVar5 = param_3;
    func_0x000107c4a790();
    func_0x000107c61180();
    puVar1 = puVar5;
    func_0x0001016ae9c0();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_3);
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    func_0x000107c61170(puVar1);
    puVar1 = param_3;
    func_0x000107c4a790();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    puVar5 = param_3;
    func_0x000107c5ce70();
    func_0x000107c61180();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 != (undefined *)0x0) {
      uVar2 = 0;
      FUN_1016af6c0(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
      puVar3 = puVar5;
      func_0x000107c5fc54(puVar5,uVar2);
      func_0x000107c61170(puVar5);
    }
    puVar4 = PTR_PTR_1126ba8a8;
    func_0x000107c61168(PTR_PTR_1126ba8a8);
    uVar2 = 0;
    FUN_1016af6c0(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
    puVar5 = puVar3;
    func_0x000107c5fc48(puVar3,uVar2);
    func_0x000107c6142c(puVar3);
    func_0x000107c4fd48(param_3);
    uVar2 = param_1;
    uVar8 = param_2;
    func_0x000107c3f74c(param_3);
    uVar6 = uVar2;
    func_0x000107c51820(param_3);
    uVar7 = uVar6;
    func_0x000107c508f4(param_3);
    func_0x000107c5bdd4(param_1,param_2,uVar2,uVar8,uVar6,uVar7,puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar1;
    FUN_1016aead8(puVar1,puVar4);
    func_0x000107c61170(puVar1);
    param_3 = puVar4;
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  func_0x000107c61170(param_3);
  return puVar5;
}



/* Entry: 1016aef1c; end: 1016af11f;  */

undefined * FUN_1016aef1c(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c453d4();
  if (lVar2 == 0x608165dd) {
    lVar2 = param_1;
    func_0x000107c453cc();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016af118);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c42dbc();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    if (lVar3 == 0) {
      return (undefined *)0x0;
    }
    func_0x000107c61170(lVar3);
    if (param_3 == 0) {
      return (undefined *)0x0;
    }
    func_0x000107c61174();
    lVar2 = param_1;
    func_0x000107c453d4();
    if (lVar2 == 0x608165dd) {
      lVar2 = param_1;
      func_0x000107c453cc();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016af11c);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      func_0x000107c42dbc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(param_1);
      if (lVar3 == 0) {
        return (undefined *)0x0;
      }
      lVar2 = lVar3;
      func_0x000107c41540();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016af120);
        (*pcVar1)();
      }
      func_0x000103ee3360(0);
      lVar4 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000103edff54(lVar4,param_2);
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(param_2);
      puVar5 = PTR_PTR_1126ba7d8;
      func_0x000107c61168(PTR_PTR_1126ba7d8);
      uVar6 = 0;
      FUN_1016af6c0(0,0x112dc0098,&PTR_PTR_1126bf730);
      func_0x000107c5fc48(param_3,uVar6);
      func_0x000107c453c8(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar4);
      return puVar5;
    }
  }
  func_0x000107c61170(param_1);
  return (undefined *)0x0;
}



/* Entry: 1016af120; end: 1016af21b;  */

long FUN_1016af120(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c453d4();
  if (lVar2 == 0x608165dd) {
    lVar2 = param_1;
    func_0x000107c453cc();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016af218);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c42dbc();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c41540();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000103ee3360(0);
        lVar4 = lVar2;
        func_0x000107c5faec(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000103edff54(lVar4,param_2);
        func_0x000107c61170(lVar3);
        func_0x000107c6142c(param_2);
        return lVar4;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016af21c);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107c61170(param_1);
  }
  return 0;
}



/* Entry: 1016af21c; end: 1016af6af;  */

void FUN_1016af21c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c453d0();
  if (lVar1 == 0x15) {
    lVar1 = param_1;
    func_0x000107c4a790();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001016ae9c0();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      func_0x000107c4a790(param_1);
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016af6b0; end: 1016af6bf;  */

undefined1  [16] FUN_1016af6b0(void)

{
  return ZEXT816(0x1103f6740);
}



/* Entry: 1016af6c0; end: 1016af6ff;  */

void FUN_1016af6c0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016af700; end: 1016af70f;  */

undefined1  [16] FUN_1016af700(void)

{
  return ZEXT816(0x1103f6760);
}



/* Entry: 1016af710; end: 1016af743;  */

void FUN_1016af710(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1016af744; end: 1016af7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016af744(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001001dd788();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dc00b8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1016af7b0; end: 1016af7b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016af7b0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001001dd788();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dc00b8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1016af7b8; end: 1016af803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016af7b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc00b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016af804; end: 1016af807; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_1016af804(void)

{
  return;
}



/* Entry: 1016af808; end: 1016af867; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl init] */

void FUN_1016af808(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlanStickerInjectorImpl.SCPlanStickerInjectorImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016af834);
  (*pcVar1)();
}



/* Entry: 1016af868; end: 1016af877; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016af868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc00b8));
  return;
}



/* Entry: 1016af878; end: 1016af8d3; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl isConversionSupportedForStickerState:] */

uint FUN_1016af878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016afe88(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1016af8d4; end: 1016af8db; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

undefined8 FUN_1016af8d4(void)

{
  return 0;
}



/* Entry: 1016af8dc; end: 1016af94b; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_1016af8dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1016afd70();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  if (param_3 != 0) {
    func_0x000107c61170(param_3);
  }
  return param_3 != 0;
}



/* Entry: 1016af94c; end: 1016af9ab; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl isConversionSupportedForCTPItem:] */

uint FUN_1016af94c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016aff08(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1016af9ac; end: 1016af9b3; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_1016af9ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1016af9b4; end: 1016afa47; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_1016af9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    func_0x000107c5fc54(param_4,uVar1);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016b0014(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016afa48; end: 1016afb27; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_1016afa48(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016aff08();
  if ((param_3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000103ee3360(0);
    uVar2 = 0;
    func_0x000103ee0268(0,0xe000000000000000,0,0,0,0,0,0,0,0);
    uVar3 = 0;
    func_0x000103b0c264(0);
    func_0x000107c610f8();
    func_0x000103b0b754(uVar2,uVar3);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016afb28; end: 1016afbb3; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_1016afb28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1016afd70();
  if (param_3 == 0) {
    func_0x000107c61170(lVar2);
    lVar2 = 0;
  }
  else {
    func_0x000107c61170();
    uVar1 = 0;
    func_0x000103b0c264(0);
    func_0x000107c610f8();
    func_0x000103b0b754(lVar2,uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016afbb4; end: 1016afc3b; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl isStickerTypeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016afbb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_11302ecd0);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  uVar1 = uVar2;
  func_0x000107c4a1c8(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar2);
  return uVar1;
}



/* Entry: 1016afc3c; end: 1016afc97; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_1016afc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016b00a0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016afc98; end: 1016afc9f; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_1016afc98(void)

{
  return 1;
}



/* Entry: 1016afca0; end: 1016afd03; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl ctpItemsForTestingInTarget:] */

void FUN_1016afca0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_1016b0258();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1016b02e4(0,0x112d4ede0,&PTR_PTR_1126baa60);
    lVar2 = param_3;
    func_0x000107c5fc48(param_3,uVar1);
    func_0x000107c6142c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016afd04; end: 1016afd6f;  */

void FUN_1016afd04(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1016b02e4(0,0x112d4ede0,&PTR_PTR_1126baa60);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dc00e8;
  plVar5 = (long *)&UNK_10d97c1e8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1016afd70; end: 1016b0257;  */

long FUN_1016afd70(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar3 = param_1;
    func_0x000107c4a764();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016afe78);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c42924();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016afe7c);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c453b4();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016afe80);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar3);
    if ((int)lVar2 == 0x1a) {
      lVar3 = param_1;
      func_0x000107c4ce20();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016afe84);
        (*pcVar1)();
      }
      lVar2 = lVar3;
      func_0x000107c453bc();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016afe88);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      func_0x000107c4e850(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c61170(param_1);
      lVar3 = 0;
    }
  }
  return lVar3;
}



/* Entry: 1016b0258; end: 1016b02d3;  */

long FUN_1016b0258(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000108ed0920();
  lVar2 = 0;
  if (((int)lVar1 != 0) && (param_1 == 0)) {
    FUN_1016afd04();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar3 = 0;
    func_0x000103b0e064();
    func_0x000103b0c2c4();
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
  }
  return lVar2;
}



/* Entry: 1016b02d4; end: 1016b02e3;  */

undefined1  [16] FUN_1016b02d4(void)

{
  return ZEXT816(0x1103f6828);
}



/* Entry: 1016b02e4; end: 1016b0323;  */

void FUN_1016b02e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016b0324; end: 1016b0327; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_1016b0324(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1016b0328; end: 1016b032b; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_1016b0328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1016b032c; end: 1016b032f; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

void FUN_1016b032c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1016b0330; end: 1016b0343; -[_TtC25SCPlanStickerInjectorImpl25SCPlanStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_1016b0330(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1016b0344; end: 1016b0377;  */

void FUN_1016b0344(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1016b0378; end: 1016b03e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b0378(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001001dea18();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dc0100) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1016b03e4; end: 1016b03eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b03e4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001001dea18();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dc0100) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1016b03ec; end: 1016b0437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b03ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc0100) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016b0438; end: 1016b043b; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_1016b0438(void)

{
  return;
}



/* Entry: 1016b043c; end: 1016b049b; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl init] */

void FUN_1016b043c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareYoursStickerInjectorImpl.ShareYoursStickerInjectorImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b0468);
  (*pcVar1)();
}



/* Entry: 1016b049c; end: 1016b04ab; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b049c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc0100));
  return;
}



/* Entry: 1016b04ac; end: 1016b050b; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl isConversionSupportedForCTPItem:] */

uint FUN_1016b04ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016b11f8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1016b050c; end: 1016b0567; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

uint FUN_1016b050c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016b1304(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1016b0568; end: 1016b05d7; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_1016b0568(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016b1394();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  if (param_3 != 0) {
    func_0x000107c61170(param_3);
  }
  return param_3 != 0;
}



/* Entry: 1016b05d8; end: 1016b0633; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl isConversionSupportedForStickerState:] */

uint FUN_1016b05d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016b14ac(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1016b0634; end: 1016b068f; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_1016b0634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016b1af0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b0690; end: 1016b0797; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_1016b0690(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    uVar1 = 0;
    FUN_1016b231c(0,0x112dc0090,&PTR_PTR_1126e0c80);
    func_0x000107c5fc54(param_4,uVar1);
  }
  if (param_6 != 0) {
    uVar1 = 0;
    FUN_1016b231c(0,0x112dc0098,&PTR_PTR_1126bf730);
    func_0x000107c5fc54(param_6,uVar1);
  }
  func_0x000107c61174(param_3);
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1016b1e64(param_3,param_5,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016b0798; end: 1016b080f; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_1016b0798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016b152c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b0810; end: 1016b08a7; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_1016b0810(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = 0;
    FUN_1016b231c(0,0x112dc0090,&PTR_PTR_1126e0c80);
    func_0x000107c5fc54(param_4,uVar1);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016b1cc8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b08a8; end: 1016b08af; -[_TtC29ShareYoursStickerInjectorImpl29ShareYoursStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

void FUN_1016b08a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}


