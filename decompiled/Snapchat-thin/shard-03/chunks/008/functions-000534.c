/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d173e4; end: 102d176ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d173e4(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112f0da30;
  func_0x000107c61428(unaff_x20 + _DAT_112f0da30,auStack_58,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    lVar7 = param_1;
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(lVar6);
    }
    else {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + lVar7 * 8);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar6);
      lVar6 = lVar7 + -1;
      if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d17574);
        (*pcVar2)();
      }
      func_0x000107c61428(unaff_x20 + lVar1,auStack_58,0x21,0);
      uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
      func_0x000107c61558(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
      func_0x000101687ce0(lVar6,param_1,param_2,uVar3);
      *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
      func_0x000107c614a8(auStack_58);
      if (0 < lVar6) {
        return 0;
      }
      func_0x000107c61428(unaff_x20 + lVar1,auStack_58,0x21,0);
      func_0x000101fb034c(param_1,param_2);
    }
  }
  func_0x000107c614a8(auStack_58);
  func_0x000107c61428(unaff_x20 + _DAT_112f0da18,auStack_58,0x21,0);
  FUN_102d19654(param_1,param_2,0x112f0dab8,&UNK_10db40988);
  func_0x000107c614a8(auStack_58);
  func_0x000107c615e8(param_1);
  return 1;
}



/* Entry: 102d176ac; end: 102d176b7; -[AdOperaMediaManager removePreparedAdMediaForMediaId:] */

void FUN_102d176ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102d16350(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d176b8; end: 102d1778b; -[AdOperaMediaManager mediaExistInMap:mediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102d176b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112f0da38);
  if (lVar2 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c4f73c();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
      return lVar1 == 0;
    }
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  return true;
}



/* Entry: 102d1778c; end: 102d1789f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d1778c(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_48 [24];
  
  lVar7 = _DAT_112f0da10;
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0da10,auStack_48,0x20,0);
    lVar7 = *(long *)(unaff_x20 + lVar7);
    if (*(long *)(lVar7 + 0x10) != 0) {
      func_0x000107c61434(lVar7);
      func_0x000100029284();
      if ((param_2 & 1) != 0) {
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + param_1 * 0x10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        func_0x00010006c00c(uVar3,uVar4);
        func_0x000107c614a8(auStack_48);
        func_0x000107c6142c(lVar7);
        puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
        uVar6 = uVar3;
        func_0x000107c5ee20(uVar3,uVar4);
        func_0x000107c51770(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x00010006c090(uVar3,uVar4);
        return puVar5;
      }
      func_0x000107c6142c(lVar7);
    }
    func_0x000107c614a8(auStack_48);
  }
  return (undefined *)0x0;
}



/* Entry: 102d178a0; end: 102d178ab; -[AdOperaMediaManager imageForKeySync:] */

void FUN_102d178a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102d1778c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d178ac; end: 102d1790f; -[AdOperaMediaManager tearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d178ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f0da40);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4fd50();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102d17910; end: 102d17987; -[AdOperaMediaManager imageForKey:completion:] */

void FUN_102d17910(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102d1778c(param_3,param_2);
  (**(code **)(param_4 + 0x10))(param_4,param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d17988; end: 102d17d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d17988(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar4 = _DAT_112f0da20;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    return;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112f0da20,&uStack_68,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    uVar1 = param_1;
    uVar5 = param_2;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      func_0x000107c615f0(*(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar1 * 8));
      func_0x000107c614a8(&uStack_68);
      func_0x000107c6142c(lVar7);
      return;
    }
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c614a8(&uStack_68);
  lVar7 = _DAT_112f0da18;
  func_0x000107c61428(unaff_x20 + _DAT_112f0da18,&uStack_68,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_102d17b80:
    func_0x000107c614a8(&uStack_68);
    lVar4 = *(long *)(unaff_x20 + _DAT_112f0da60);
    if (lVar4 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        FUN_102d1c240(0,0x112dcf430,&PTR_PTR_1126b3e90);
        uVar6 = 0xc;
        func_0x000103dec308(0xc);
        uStack_68 = 0;
        uStack_60 = 0xe000000000000000;
        func_0x000107c602fc(0x29);
        func_0x000107c6142c(uStack_60);
        uStack_68 = 0xd000000000000027;
        uStack_60 = 0x800000010f10a600;
        func_0x000107c5fb78(param_1,param_2);
        uVar8 = uStack_60;
        uVar3 = uStack_68;
        func_0x000107c5fadc(uStack_68,uStack_60);
        func_0x000107c6142c(uVar8);
        uVar8 = 0xd00000000000001d;
        func_0x000107c5fadc(0xd00000000000001d,0x800000010f10a630);
        func_0x000107c3e200(lVar4);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar8);
      }
    }
    return;
  }
  func_0x000107c61434(lVar7);
  uVar1 = param_1;
  uVar5 = param_2;
  func_0x000100029284();
  if ((uVar5 & 1) == 0) {
    func_0x000107c6142c(lVar7);
    goto LAB_102d17b80;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar1 * 8);
  func_0x000107c615f0(uVar8);
  func_0x000107c614a8(&uStack_68);
  func_0x000107c6142c(lVar7);
  lVar7 = *(long *)(unaff_x20 + _DAT_112f0da40);
  if (lVar7 == 0) {
LAB_102d17c9c:
    func_0x000107c61428(unaff_x20 + lVar4,&uStack_68,0x21,0);
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 == 0) goto LAB_102d17c9c;
    uVar1 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    lVar2 = lVar7;
    func_0x000107c4093c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(uVar1);
    func_0x000107c61428(unaff_x20 + lVar4,&uStack_68,0x21,0);
    if (lVar2 != 0) {
      func_0x000107c61434(param_2);
      func_0x000107c615f0(lVar2);
      uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
      func_0x000107c61558(uVar3);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
      *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
      FUN_102d19934(lVar2,param_1,param_2,uVar3,0x112f0dab0,&UNK_10db40978);
      func_0x000107c6142c(param_2);
      *(undefined8 *)(unaff_x20 + lVar4) = uVar6;
      goto LAB_102d17cf0;
    }
  }
  func_0x000107c61434(param_2);
  FUN_102d19654(param_1,param_2,0x112f0dab0,&UNK_10db40978);
  func_0x000107c6142c(param_2);
  func_0x000107c615e8(param_1);
LAB_102d17cf0:
  func_0x000107c614a8(&uStack_68);
  func_0x000107c615e8(uVar8);
  return;
}



/* Entry: 102d17d20; end: 102d17db7; -[AdOperaMediaManager videoAssetFutureForKey:] */

void FUN_102d17d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c5faec(param_3);
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c61174(param_1);
  FUN_102d17988(param_3,param_2);
  func_0x000107c451b0(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102d17db8; end: 102d17dc3; -[AdOperaMediaManager videoAssetForKey:] */

void FUN_102d17db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102d17988(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d17dc4; end: 102d17e2b;  */

void FUN_102d17dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d17e2c; end: 102d17e37; -[AdOperaMediaManager resetVideoAssetForKey:] */

void FUN_102d17e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x102d17574)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d17e38; end: 102d17e93;  */

void FUN_102d17e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d17e94; end: 102d18987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d17e94(long param_1,long param_2,undefined8 param_3,undefined1 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined *unaff_x20;
  code *pcVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_218;
  undefined1 auStack_210 [16];
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 auStack_1e0 [16];
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 auStack_1b0 [16];
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 uStack_130;
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
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar12 = unaff_x20;
  func_0x000107c614f0();
  lVar13 = 0;
  puStack_268 = puVar12;
  func_0x0001041f5938();
  lStack_290 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar24 = (long)&uStack_2f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112d36580;
  puStack_2b0 = (undefined *)lVar24;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar24 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar24 - extraout_x12;
  lVar13 = 0;
  func_0x000107c5ede0();
  pcVar20 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
  (*pcVar20)(lVar21,1,1,lVar13);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  (*pcVar20)(lVar24,1,1,lVar13);
  puVar12 = &UNK_1105c2d38;
  func_0x000107c613fc(&UNK_1105c2d38,0x18,7);
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010b11e8();
  puVar25 = (undefined8 *)(puVar12 + 0x10);
  *puVar25 = puVar14;
  puVar14 = &UNK_1105c2d60;
  puStack_270 = puVar12;
  func_0x000107c613fc(&UNK_1105c2d60,0x18,7);
  puVar12 = puVar15;
  func_0x000102d1a774(puVar15,0x112f0dab8,&UNK_10db40988);
  *(undefined **)(puVar14 + 0x10) = puVar12;
  puVar12 = &UNK_1105c2d88;
  puStack_278 = puVar14;
  func_0x000107c613fc(&UNK_1105c2d88,0x18,7);
  func_0x000102d1a774(puVar15,0x112f0dab0,&UNK_10db40978);
  puStack_148 = (undefined8 *)(puVar12 + 0x10);
  *puStack_148 = puVar15;
  pcStack_150 = (code *)&uStack_78;
  puStack_140 = &uStack_90;
  puStack_138 = &uStack_a0;
  puStack_180 = &uStack_f8;
  puStack_190 = &uStack_b0;
  puStack_280 = puVar12;
  lStack_1d0 = lVar24;
  lStack_1a0 = param_2;
  uStack_198 = param_3;
  puStack_188 = puVar25;
  puStack_160 = (undefined *)param_2;
  puStack_158 = (undefined *)param_3;
  uStack_130 = param_4;
  func_0x0001041f9ea4(FUN_102d1b018,&puStack_170,FUN_102d1b058,auStack_1b0,FUN_102d1b158,auStack_1e0
                      ,FUN_102d19448,0);
  if (*(long *)(param_1 + _DAT_113069098) != 0) {
    pcStack_150 = (code *)&uStack_d0;
    puStack_190 = &uStack_c0;
    puStack_1c0 = &uStack_e0;
    puStack_1e8 = &uStack_e8;
    lStack_200 = param_2;
    uStack_1f8 = param_3;
    puStack_1f0 = puVar25;
    lStack_1d0 = param_2;
    uStack_1c8 = param_3;
    puStack_1b8 = puVar25;
    lStack_1a0 = param_2;
    uStack_198 = param_3;
    puStack_188 = puVar25;
    puStack_160 = (undefined *)param_2;
    puStack_158 = (undefined *)param_3;
    puStack_148 = puVar25;
    func_0x0001041f747c(FUN_102d1b7d4,&puStack_170,0x102d1b7f4,auStack_1b0,0x102d1b810,auStack_1e0,
                        FUN_102d1b8ec,auStack_210);
  }
  uVar22 = ((undefined8 *)(param_1 + _DAT_1130690a0))[1];
  uStack_2a8 = param_3;
  if (uVar22 >> 0x3c < 0xf) {
    uVar23 = *(undefined8 *)(param_1 + _DAT_1130690a0);
    if ((param_5 == 0) || ((*(byte *)(param_5 + _DAT_11308ee30) & 1) == 0)) {
      puStack_170 = (undefined *)0x5f656c69666f7270;
      uStack_168 = 0xed00002d6e6f6369;
      func_0x000100de78a0(uVar23,uVar22);
      func_0x000107c5fb78(param_2,param_3);
      uStack_218 = uStack_168;
      puVar12 = puStack_170;
      func_0x000107c61434(uStack_168);
      uVar16 = *puVar25;
      func_0x000107c61558(uVar16);
      puStack_170 = (undefined *)*puVar25;
      *puVar25 = 0x8000000000000000;
      puStack_2b8 = puVar12;
      func_0x0001010b8f18(uVar23,uVar22,puVar12,uStack_218,uVar16);
      func_0x000107c6142c(uStack_218);
      *puVar25 = puStack_170;
      goto LAB_102d18280;
    }
  }
  puStack_2b8 = (undefined *)0x0;
  uStack_218 = 0;
LAB_102d18280:
  puVar14 = puStack_2b0;
  lStack_288 = lVar21;
  func_0x000100029394(lVar21,puStack_2b0);
  uVar11 = uStack_70;
  uVar10 = uStack_78;
  uVar9 = uStack_80;
  uVar19 = uStack_88;
  uVar23 = uStack_90;
  uVar8 = uStack_98;
  uVar7 = uStack_a8;
  uVar6 = uStack_b8;
  uVar5 = uStack_c8;
  uVar4 = uStack_d8;
  uVar3 = uStack_e8;
  uVar16 = uStack_f0;
  lVar13 = lStack_290;
  uStack_2c0 = uStack_90;
  uStack_2f0 = uStack_a0;
  uStack_2e8 = uStack_b0;
  uStack_2e0 = uStack_c0;
  uStack_2d8 = uStack_d0;
  uStack_2d0 = uStack_e0;
  uStack_2c8 = uStack_f8;
  func_0x000100029394(lVar24,(long)puVar14 + (long)*(int *)(lStack_290 + 0x40));
  puVar25 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x14));
  *puVar25 = uVar10;
  puVar25[1] = uVar11;
  uStack_2a0 = uVar9;
  uStack_298 = uVar11;
  puVar25 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x18));
  *puVar25 = uVar19;
  puVar25[1] = uVar9;
  *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x1c)) = uVar23;
  puVar25 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x20));
  *puVar25 = uStack_2f0;
  *(undefined1 *)(puVar25 + 1) = uVar8;
  puVar25 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x24));
  *puVar25 = uStack_2e8;
  puVar25[1] = uVar7;
  puVar25 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x28));
  *puVar25 = uStack_2e0;
  puVar25[1] = uVar6;
  puVar25 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x2c));
  *puVar25 = uStack_2d8;
  puVar25[1] = uVar5;
  puVar25 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x30));
  *puVar25 = uStack_2d0;
  puVar25[1] = uVar4;
  *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x34)) = uVar3;
  puVar25 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x38));
  *puVar25 = puStack_2b8;
  puVar25[1] = uStack_218;
  puVar25 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar13 + 0x3c));
  *puVar25 = uStack_2c8;
  puVar25[1] = uVar16;
  func_0x0001041f96dc(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar16);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar9);
  uVar23 = uStack_2c0;
  func_0x000107c61174();
  lStack_290 = uVar23;
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uStack_218);
  func_0x0001041f834c();
  puStack_170 = (undefined *)0x0;
  uStack_168 = 0xe000000000000000;
  func_0x000107c602fc(0x1e);
  uVar23 = uStack_168;
  uVar19 = 0;
  puVar12 = puStack_268;
  func_0x000107c60714();
  func_0x000107c6142c(uVar23);
  puStack_170 = puVar12;
  uStack_168 = uVar19;
  func_0x000107c5fb78(0xd00000000000001c,0x800000010f10a6f0);
  puStack_2b8 = (undefined *)uStack_168;
  puStack_2b0 = puStack_170;
  puVar12 = &UNK_1105c2db0;
  func_0x000107c613fc(&UNK_1105c2db0,0x50,7);
  puVar2 = puStack_270;
  puVar1 = puStack_278;
  puVar15 = puStack_280;
  uVar23 = uStack_2a8;
  *(long *)(puVar12 + 0x10) = param_2;
  *(undefined8 *)(puVar12 + 0x18) = uStack_2a8;
  *(undefined **)(puVar12 + 0x20) = unaff_x20;
  *(undefined **)(puVar12 + 0x28) = puVar14;
  *(undefined **)(puVar12 + 0x30) = puStack_270;
  *(undefined **)(puVar12 + 0x38) = puStack_278;
  *(undefined **)(puVar12 + 0x40) = puStack_280;
  *(undefined **)(puVar12 + 0x48) = puStack_268;
  pcStack_150 = FUN_102d1b1c0;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0x42000000;
  puStack_160 = &UNK_1000f6b44;
  puStack_158 = &UNK_1105c2dc8;
  ppuVar17 = &puStack_170;
  puStack_148 = (undefined8 *)puVar12;
  func_0x000107c60bc4(ppuVar17);
  puVar25 = puStack_148;
  func_0x000107c61434(uVar23);
  func_0x000107c61174(unaff_x20);
  func_0x000107c61174(puVar14);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar15);
  func_0x000107c61574(puVar25);
  puVar12 = puStack_2b8;
  puVar18 = puStack_2b0;
  func_0x000107c5fb28(puStack_2b0,puStack_2b8);
  func_0x000107c6142c(puVar12);
  func_0x0001000d76cc(puVar18 + 0x20,ppuVar17);
  func_0x000107c6142c(uStack_218);
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(puVar18);
  func_0x0001000293e4(lVar24);
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar16);
  func_0x000107c61170(lStack_290);
  func_0x000107c6142c(uStack_2a0);
  func_0x000107c6142c(uStack_298);
  func_0x0001000293e4(lStack_288);
  return (long)puVar14;
}



/* Entry: 102d18988; end: 102d189ff;  */

/* WARNING: Possible PIC construction at 0x000102d189e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d189e8) */

void FUN_102d18988(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 102d18a00; end: 102d18a23;  */

void FUN_102d18a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_7;
  *(undefined8 *)(unaff_x22 + 200) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d18a24,0,0);
  return;
}



/* Entry: 102d18a24; end: 102d18b13;  */

void FUN_102d18a24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x22 + 0xb8));
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102d18b14;
  lVar4 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar4,0);
  uVar3 = 0x112f0dac8;
  func_0x0001000285a8(0x112f0dac8,&UNK_10db409a8);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_102d18bb0;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1105c2f08;
  *(long *)(unaff_x22 + 0x70) = lVar4;
  func_0x000107c5077c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102d18b14; end: 102d18b53;  */

void FUN_102d18b14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d18b54,0,0);
  return;
}



/* Entry: 102d18b54; end: 102d18baf;  */

void FUN_102d18b54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c61170(uVar1);
  func_0x000107c3fefc(uVar2,param_2,uVar3);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102d18bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102d18bb0; end: 102d18bf3;  */

void FUN_102d18bb0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar2 = *plVar1;
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = param_2;
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 102d18bf4; end: 102d18c43;  */

void FUN_102d18bf4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102d18c44; end: 102d19447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d18c44(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong *param_6,ulong *param_7,undefined8 *param_8,
                  ulong *param_9,uint param_10,long param_11,ulong *param_12,undefined8 param_13,
                  ulong *param_14,ulong *param_15,ulong *param_16)

{
  undefined8 *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puStack_c0;
  ulong *puStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&puStack_c0 - extraout_x8;
  uVar4 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(uVar4 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar9 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(ulong *)(param_3 + _DAT_113069138);
  lVar14 = *(long *)(param_3 + _DAT_113069140);
  uStack_a0 = param_5;
  lStack_98 = param_3;
  uStack_90 = param_4;
  if (lVar14 == 0) {
    puStack_c0 = param_8;
    puStack_b8 = param_9;
    lStack_b0 = lVar9;
    uStack_a8 = uVar4;
    if (uVar10 != 0) {
      uVar4 = uVar10;
      func_0x000107c615f0();
      iVar3 = (int)uVar4;
      func_0x000107c440cc();
      if ((iVar3 != 0) && ((param_10 & 1) == 0)) {
        uStack_88 = 0x6f65646976706f74;
        uStack_80 = 0xe90000000000002d;
        func_0x000107c5fb78(uStack_90,uStack_a0);
        uVar4 = uStack_80;
        uVar13 = uStack_88;
        uVar12 = param_6[1];
        *param_6 = uStack_88;
        param_6[1] = uStack_80;
        func_0x000107c61434(uStack_80);
        func_0x000107c6142c(uVar12);
        lVar9 = *(long *)(param_11 + _DAT_112f0da40);
        if (lVar9 == 0) {
LAB_102d192bc:
          func_0x000107c61434(uVar4);
          uVar12 = uVar13;
          FUN_102d19654(uVar13,uVar4,0x112f0dab0,&UNK_10db40978);
          func_0x000107c6142c(uVar4);
          func_0x000107c615e8(uVar12);
          lVar9 = 0;
          lVar16 = 0;
          param_1 = 0;
          param_2 = 0;
        }
        else {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar9 == 0) goto LAB_102d192bc;
          uVar12 = uVar13;
          func_0x000107c5fadc(uVar13,uVar4);
          lVar16 = lVar9;
          func_0x000107c4093c();
          func_0x000107c61180();
          func_0x000107c615e8(lVar9);
          func_0x000107c61170(uVar12);
          func_0x000107c61434(uVar4);
          func_0x000107c615f0(lVar16);
          uVar12 = *param_7;
          func_0x000107c61558(uVar12);
          uStack_88 = *param_7;
          *param_7 = 0x8000000000000000;
          FUN_102d19934(lVar16,uVar13,uVar4,uVar12,0x112f0dab0,&UNK_10db40978);
          func_0x000107c6142c(uVar4);
          *param_7 = uStack_88;
          lVar9 = lVar16;
          func_0x000107c4d444();
          func_0x000107c61180();
          lVar14 = lVar9;
          func_0x000107c61174();
          FUN_102d152c4();
          func_0x000107c61170(lVar14);
        }
        puVar1 = puStack_c0;
        puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x000107c61168();
        func_0x000107c5dc58(param_1,param_2);
        func_0x000107c61180();
        uVar8 = *puVar1;
        *puVar1 = puVar5;
        func_0x000107c61170(uVar8);
        puVar2 = puStack_b8;
        if (lVar9 == 0) {
          uStack_88 = 0;
          uStack_78 = 0;
          uVar12 = 0;
        }
        else {
          func_0x000107c42378(&uStack_88,lVar9);
          uVar12 = uStack_80;
        }
        uStack_80 = uVar12;
        func_0x000107c60a3c(&uStack_88);
        *puVar2 = uVar12;
        *(undefined1 *)(puVar2 + 1) = 0;
        func_0x000107c615f0(uVar10);
        uVar12 = *param_12;
        func_0x000107c61558(uVar12);
        uStack_88 = *param_12;
        *param_12 = 0x8000000000000000;
        FUN_102d19934(uVar10,uVar13,uVar4,uVar12,0x112f0dab8,&UNK_10db40988);
        func_0x000107c6142c(uVar4);
        *param_12 = uStack_88;
        func_0x000107c615e8(uVar10);
        func_0x000107c61170(lVar9);
        func_0x000107c615e8(lVar16);
        goto LAB_102d18e84;
      }
      func_0x000107c615e8(uVar10);
    }
    uVar8 = uStack_a0;
    FUN_102d1501c(lVar16,uVar10,uStack_90,uStack_a0,param_10 & 1);
    uVar4 = uStack_a8;
    uVar13 = 1;
    lVar14 = lVar16;
    (**(code **)(lVar15 + 0x30))(lVar16,1,uStack_a8);
    lVar9 = lStack_b0;
    if ((int)lVar14 == 1) {
      func_0x0001000293e4(lVar16);
    }
    else {
      (**(code **)(lVar15 + 0x20))(lStack_b0,lVar16,uVar4);
      puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      puVar6 = puVar5;
      func_0x000107c5ed90();
      func_0x000107c48fd4(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c42378(&uStack_88,puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c60a3c(&uStack_88);
      *puStack_b8 = param_1;
      *(undefined1 *)(puStack_b8 + 1) = 0;
      func_0x0001000293e4(param_13);
      (**(code **)(lVar15 + 0x10))(param_13,lVar9,uVar4);
      (**(code **)(lVar15 + 0x38))(param_13,0,1,uVar4);
      if (uVar10 == 0) {
        func_0x000107c61434(uVar8);
        uVar7 = uStack_90;
        FUN_102d19654(uStack_90,uVar8,0x112f0dab8,&UNK_10db40988);
        func_0x000107c6142c(uVar8);
        func_0x000107c615e8(uVar7);
      }
      else {
        func_0x000107c615f0(uVar10);
        func_0x000107c61434(uVar8);
        uVar4 = *param_12;
        func_0x000107c61558(uVar4);
        uStack_88 = *param_12;
        *param_12 = 0x8000000000000000;
        FUN_102d19934(uVar10,uStack_90,uVar8,uVar4,0x112f0dab8,&UNK_10db40988);
        func_0x000107c6142c(uVar8);
        *param_12 = uStack_88;
      }
      uVar13 = uStack_a8;
      (**(code **)(lVar15 + 8))(lStack_b0);
    }
  }
  else {
    uStack_88 = 0x6f65646976706f74;
    uStack_80 = 0xe90000000000002d;
    uStack_a8 = uVar10;
    func_0x000107c615f0(lVar14);
    func_0x000107c5fb78(param_4,param_5);
    uVar10 = uStack_80;
    uVar13 = uStack_88;
    uVar4 = param_6[1];
    *param_6 = uStack_88;
    param_6[1] = uStack_80;
    func_0x000107c61434(uStack_80);
    func_0x000107c6142c(uVar4);
    func_0x000107c615f0(lVar14);
    uVar4 = *param_7;
    func_0x000107c61558(uVar4);
    uStack_88 = *param_7;
    *param_7 = 0x8000000000000000;
    FUN_102d19934(lVar14,uVar13,uVar10,uVar4,0x112f0dab0,&UNK_10db40978);
    func_0x000107c6142c(uVar10);
    *param_7 = uStack_88;
    lVar9 = lVar14;
    func_0x000107c4d444(lVar14);
    func_0x000107c61180();
    FUN_102d152c4();
    func_0x000107c61170(lVar9);
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168();
    func_0x000107c5dc58(param_1,param_2);
    func_0x000107c61180();
    uVar8 = *param_8;
    *param_8 = puVar5;
    func_0x000107c61170(uVar8);
    lVar9 = lVar14;
    func_0x000107c4d444(lVar14);
    func_0x000107c61180();
    func_0x000107c42378(&uStack_88);
    uVar4 = uStack_80;
    uVar10 = uStack_88;
    func_0x000107c61170(lVar9);
    uStack_88 = uVar10;
    uStack_80 = uVar4;
    func_0x000107c60a3c(&uStack_88);
    func_0x000107c615e8(lVar14);
    *param_9 = param_1;
    *(undefined1 *)(param_9 + 1) = 0;
    uVar10 = uStack_a8;
  }
LAB_102d18e84:
  uVar4 = ((undefined8 *)(lStack_98 + _DAT_113069148))[1];
  if (uVar4 >> 0x3c < 0xf) {
    uVar8 = *(undefined8 *)(lStack_98 + _DAT_113069148);
    uStack_88 = 0xd000000000000014;
    uStack_80 = 0x800000010f10a710;
    func_0x000100de78a0(uVar8,uVar4);
    func_0x000107c5fb78(uStack_90,uStack_a0);
    uVar12 = uStack_80;
    uVar13 = uStack_88;
    uVar11 = param_14[1];
    *param_14 = uStack_88;
    param_14[1] = uStack_80;
    func_0x000107c61434(uStack_80);
    func_0x000107c6142c(uVar11);
    uVar11 = *param_15;
    func_0x000107c61558(uVar11);
    uStack_88 = *param_15;
    func_0x0001010b8f18(uVar8,uVar4,uVar13,uVar12,uVar11);
    func_0x000107c6142c(uVar12);
    *param_15 = uStack_88;
    uVar13 = uVar4;
  }
  if (uVar10 != 0) {
    func_0x000107c44144();
    func_0x000107c61180();
    uVar4 = uVar10;
    func_0x000107c3eba4();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar12 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar10);
      goto LAB_102d1910c;
    }
    func_0x000107c61170(uVar10);
  }
  uVar12 = 0;
  uVar13 = 0;
LAB_102d1910c:
  uVar10 = param_16[1];
  *param_16 = uVar12;
  param_16[1] = uVar13;
  func_0x000107c6142c(uVar10);
  return;
}



/* Entry: 102d19448; end: 102d1944b;  */

void FUN_102d19448(void)

{
  return;
}



/* Entry: 102d1944c; end: 102d1945f; -[AdOperaMediaManager didReceiveMediaServicesWereLostNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1944c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112f0da70) = 1;
  return;
}



/* Entry: 102d19460; end: 102d194ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d19460(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0da70;
  lVar3 = _DAT_112f0da20;
  if (*(char *)(unaff_x20 + _DAT_112f0da70) == '\x01') {
    func_0x000107c61428(unaff_x20 + _DAT_112f0da20,auStack_48,1,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c6142c(uVar2);
    lVar3 = *(long *)(unaff_x20 + _DAT_112f0da40);
    if (lVar3 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4fd50();
        func_0x000107c615e8(lVar3);
      }
    }
  }
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  return;
}



/* Entry: 102d19500; end: 102d19527; -[AdOperaMediaManager didReceiveMediaServicesWereResetNotification] */

void FUN_102d19500(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d19460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d19528; end: 102d1955b;  */

void FUN_102d19528(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d1955c; end: 102d19653; -[AdOperaMediaManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d195d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d195f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d19618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d19638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1961c) */
/* WARNING: Removing unreachable block (ram,0x000102d195fc) */
/* WARNING: Removing unreachable block (ram,0x000102d195dc) */
/* WARNING: Removing unreachable block (ram,0x000102d1963c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1955c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0da08));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0da10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0da18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0da20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0da28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0da30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0da38));
  return;
}



/* Entry: 102d19654; end: 102d19727;  */

undefined8 FUN_102d19654(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_102d19aa8(param_3,param_4);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x000102d1a2a8(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 102d19728; end: 102d197e3;  */

undefined8 FUN_102d19728(long param_1,ulong param_2)

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
      func_0x000102d19c08();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000102d1a458(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 102d197e4; end: 102d19933;  */

void FUN_102d197e4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d198bc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000102d1a00c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d19884);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102d19c08();
    lVar6 = *unaff_x20;
    goto joined_r0x000102d198d0;
  }
  lVar6 = *unaff_x20;
joined_r0x000102d198d0:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d19934);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102d19934; end: 102d19aa7;  */

void FUN_102d19934(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d19a24);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102d19d78(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d199e8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102d19aa8(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000102d19a40;
  }
  lVar6 = *unaff_x20;
joined_r0x000102d19a40:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d19aa8);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102d19aa8; end: 102d19d77;  */

void FUN_102d19aa8(void)

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
    if (uVar8 == 0) goto LAB_102d19b74;
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
        func_0x000107c615f0(uVar12);
        if (uVar8 != 0) break;
LAB_102d19b74:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102d19c08);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102d19be0;
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
LAB_102d19be0:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102d19d78; end: 102d1a607;  */

void FUN_102d19d78(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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
LAB_102d19fd8:
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
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102d1a008);
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
          goto LAB_102d19fd8;
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
      func_0x000107c615f0(uVar18);
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
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102d1a00c);
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



/* Entry: 102d1a608; end: 102d1a673;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_102d1a608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x000107c61434(uVar2);
  uVar5 = (uint)(uVar3 >> 0x3e);
  if (uVar5 == 1) {
    uVar4 = uVar3 & 0x3fffffffffffffff;
  }
  else if (uVar5 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar4);
  return;
}



/* Entry: 102d1a674; end: 102d1a867;  */

undefined * FUN_102d1a674(long param_1)

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
    func_0x0001000285a8(0x112f0dac0,&UNK_10db40990);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d1a770);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d1a774);
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



/* Entry: 102d1a868; end: 102d1a88f;  */

void FUN_102d1a868(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 102d1a890; end: 102d1a8bb;  */

void FUN_102d1a890(long param_1,long param_2)

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



/* Entry: 102d1a8bc; end: 102d1aa0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1a8bc(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(ulong *)(unaff_x20 + 0x20);
  pcVar5 = *(code **)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112f0da28;
  if (lVar6 != 0) {
    func_0x000107c61428(lVar6 + _DAT_112f0da28,auStack_90,0x20,0);
    lVar10 = *(long *)(lVar6 + lVar4);
    if (*(long *)(lVar10 + 0x10) == 0) {
      lVar11 = 0;
    }
    else {
      func_0x000107c61434(lVar10);
      lVar11 = lVar2;
      uVar8 = uVar1;
      func_0x000100029284();
      if ((uVar8 & 1) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + lVar11 * 8);
      }
      func_0x000107c6142c(lVar10);
    }
    func_0x000107c614a8(auStack_90);
    if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102d1aa0c);
      (*pcVar5)();
    }
    func_0x000107c61428(lVar6 + lVar4,auStack_90,0x21,0);
    uVar7 = *(undefined8 *)(lVar6 + lVar4);
    func_0x000107c61558(uVar7);
    uVar9 = *(undefined8 *)(lVar6 + lVar4);
    *(undefined8 *)(lVar6 + lVar4) = 0x8000000000000000;
    func_0x000101687ce0(lVar11 + 1,lVar2,uVar1,uVar7);
    *(undefined8 *)(lVar6 + lVar4) = uVar9;
    func_0x000107c614a8(auStack_90);
    (*pcVar5)(uVar3,0);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 102d1aa0c; end: 102d1aa1b;  */

void FUN_102d1aa0c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102d1aa1c; end: 102d1ab0b;  */

/* WARNING: Possible PIC construction at 0x000102d1aacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1aad0) */

void FUN_102d1aa1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c5ede0();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c4ff4c();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(0);
  return;
}



/* Entry: 102d1ab0c; end: 102d1ae07;  */

/* WARNING: Possible PIC construction at 0x000102d1ab9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1ac88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1ac5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1adb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1adc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1add4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1adc4) */
/* WARNING: Removing unreachable block (ram,0x000102d1adb4) */
/* WARNING: Removing unreachable block (ram,0x000102d1ac60) */
/* WARNING: Removing unreachable block (ram,0x000102d1ac8c) */
/* WARNING: Removing unreachable block (ram,0x000102d1aba0) */
/* WARNING: Removing unreachable block (ram,0x000102d1add8) */
/* WARNING: Removing unreachable block (ram,0x000102d1ad14) */
/* WARNING: Removing unreachable block (ram,0x000102d1ad64) */

void FUN_102d1ab0c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003c,0x800000010f10a680);
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    uVar2 = uStack_70;
    uVar1 = uStack_78;
    uStack_78 = 0x203a726f727265;
    uStack_70 = 0xe700000000000000;
    if (param_2 == 0) {
      func_0x000107c5fb78(0x296c6c756e28,0xe600000000000000);
      func_0x000107c6142c(0xe600000000000000);
      uVar5 = uStack_70;
      uVar4 = uStack_78;
      uStack_78 = uVar1;
      uStack_70 = uVar2;
      func_0x000107c61434(uVar2);
      func_0x000107c5fb78(uVar4,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar2);
      uVar2 = uStack_70;
      uVar1 = uStack_78;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f10a6c0);
      func_0x000107c5fadc(uVar1,uVar2);
      func_0x000107c6142c(uVar2);
      param_2 = 0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a60();
      func_0x000107c61180();
    }
    else {
      func_0x000107c614b0(param_2);
      func_0x000107c5ed2c(param_2);
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000107c5faec();
    }
  }
  else {
    uVar3 = *(undefined1 *)(unaff_x20 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    param_2 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c61428(param_2 + 0x10,&uStack_78,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    func_0x000107c61174(param_1);
    if (param_2 == 0) {
      func_0x000107c3fefc(uVar4);
      param_2 = 0;
    }
    else {
      FUN_102d17e94(param_1,uVar1,uVar2,uVar3,uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102d1ae08; end: 102d1aecb;  */

void FUN_102d1ae08(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 == 0) {
    if (param_2 == 0) {
      func_0x000102d1a8ac(pcVar2,uVar3);
    }
    else {
      func_0x000102d1a8ac(pcVar2,uVar3);
      func_0x000107c614b0(param_2);
      lVar1 = param_2;
      func_0x000107c5ed2c(param_2);
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar1);
      func_0x000107c614ac(param_2);
    }
  }
  else {
    func_0x000107c6157c(uVar3);
  }
  (*pcVar2)(param_1,param_2);
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102d1aecc; end: 102d1afef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1aecc(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 auStack_78 [24];
  
  lVar5 = _DAT_112f0da28;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  pcVar6 = *(code **)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar1 + _DAT_112f0da28,auStack_78,0x20,0);
  lVar10 = *(long *)(lVar1 + lVar5);
  if (*(long *)(lVar10 + 0x10) == 0) {
    lVar11 = 0;
  }
  else {
    func_0x000107c61434(lVar10);
    lVar11 = lVar3;
    uVar8 = uVar2;
    func_0x000100029284();
    if ((uVar8 & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + lVar11 * 8);
    }
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c614a8(auStack_78);
  if (!SCARRY8(lVar11,1)) {
    func_0x000107c61428(lVar1 + lVar5,auStack_78,0x21,0);
    uVar7 = *(undefined8 *)(lVar1 + lVar5);
    func_0x000107c61558(uVar7);
    uVar9 = *(undefined8 *)(lVar1 + lVar5);
    *(undefined8 *)(lVar1 + lVar5) = 0x8000000000000000;
    func_0x000101687ce0(lVar11 + 1,lVar3,uVar2,uVar7);
    *(undefined8 *)(lVar1 + lVar5) = uVar9;
    func_0x000107c614a8(auStack_78);
    (*pcVar6)(uVar4,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102d1aff0);
  (*pcVar6)();
}



/* Entry: 102d1aff0; end: 102d1b00f;  */

void FUN_102d1aff0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a0f18);
  return;
}



/* Entry: 102d1b010; end: 102d1b017;  */

void FUN_102d1b010(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102d1b018; end: 102d1b057;  */

void FUN_102d1b018(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102d18c44(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined1 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102d1b058; end: 102d1b157;  */

/* WARNING: Possible PIC construction at 0x000102d1b0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1b118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1b0d4) */
/* WARNING: Removing unreachable block (ram,0x000102d1b11c) */

void FUN_102d1b058(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x20);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = puVar1[1];
  *puVar1 = 0x6567616d69706f74;
  puVar1[1] = 0xe90000000000002d;
  func_0x000107c61434(0xe90000000000002d);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102d1b158; end: 102d1b1bf;  */

void FUN_102d1b158(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000293e4(uVar2);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(uVar2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000102d1b1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(uVar2,0,1,lVar1);
  return;
}



/* Entry: 102d1b1c0; end: 102d1b7d3;  */

/* WARNING: Removing unreachable block (ram,0x000102d1b7ac) */
/* WARNING: Removing unreachable block (ram,0x000102d1b7c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1b1c0(void)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x20;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_e0;
  long alStack_d8 [3];
  undefined8 auStack_c0 [4];
  undefined8 auStack_a0 [4];
  undefined1 auStack_80 [32];
  
  lVar18 = _DAT_112f0da08;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  lVar20 = *(long *)(unaff_x20 + 0x38);
  lVar15 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar3 + _DAT_112f0da08,auStack_80,0x21,0);
  func_0x000107c61434(uVar5);
  func_0x000107c61174(uVar11);
  uVar10 = *(undefined8 *)(lVar3 + lVar18);
  func_0x000107c61558(uVar10);
  auStack_a0[0] = *(undefined8 *)(lVar3 + lVar18);
  *(undefined8 *)(lVar3 + lVar18) = 0x8000000000000000;
  FUN_102d197e4(uVar11,lVar2,uVar5,uVar10);
  func_0x000107c6142c(uVar5);
  *(undefined8 *)(lVar3 + lVar18) = auStack_a0[0];
  func_0x000107c614a8(auStack_80);
  func_0x000107c61428(lVar4 + 0x10,auStack_a0,0,0);
  lVar18 = _DAT_112f0da10;
  uVar10 = *(undefined8 *)(lVar4 + 0x10);
  func_0x000107c61428(lVar3 + _DAT_112f0da10,auStack_80,0x21,0);
  func_0x000107c61434(uVar10);
  uVar11 = *(undefined8 *)(lVar3 + lVar18);
  func_0x000107c61558(uVar11);
  auStack_c0[0] = *(undefined8 *)(lVar3 + lVar18);
  *(undefined8 *)(lVar3 + lVar18) = 0x8000000000000000;
  FUN_102d1bcfc(uVar10,FUN_102d1a608,0,uVar11,auStack_c0);
  func_0x000107c6142c(uVar10);
  *(undefined8 *)(lVar3 + lVar18) = auStack_c0[0];
  func_0x000107c614a8(auStack_80);
  func_0x000107c61428(lVar20 + 0x10,auStack_c0,0,0);
  lVar4 = _DAT_112f0da18;
  lVar20 = *(long *)(lVar20 + 0x10);
  func_0x000107c61434(lVar20);
  func_0x000107c61428(lVar3 + lVar4,auStack_80,0x21,0);
  func_0x000107c61434(lVar20);
  uVar11 = *(undefined8 *)(lVar3 + lVar4);
  func_0x000107c61558(uVar11);
  alStack_d8[0] = *(long *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0x8000000000000000;
  FUN_102d1bfcc(lVar20,0x102d1cd90,0,uVar11,alStack_d8,0x112f0dab8,&UNK_10db40988);
  func_0x000107c6142c(lVar20);
  *(long *)(lVar3 + lVar4) = alStack_d8[0];
  func_0x000107c614a8(auStack_80);
  lVar4 = _DAT_112f0da30;
  uVar16 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar21 = 0xffffffffffffffff;
  if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
    uVar21 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar21 = uVar21 & *(ulong *)(lVar20 + 0x40);
  func_0x000107c61434(lVar20);
  lVar18 = 0;
  while( true ) {
    for (; uVar21 != 0; uVar21 = uVar21 - 1 & uVar21) {
      uVar7 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      puVar1 = (ulong *)(*(long *)(lVar20 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 0x10 +
                        lVar18 * 0x400);
      uVar7 = *puVar1;
      uVar6 = puVar1[1];
      func_0x000107c61428(lVar3 + lVar4,auStack_80,0x20,0);
      lVar19 = *(long *)(lVar3 + lVar4);
      lVar22 = *(long *)(lVar19 + 0x10);
      func_0x000107c61434(uVar6);
      lVar23 = 0;
      if (lVar22 != 0) {
        func_0x000107c61434(lVar19);
        uVar12 = uVar7;
        uVar14 = uVar6;
        func_0x000100029284();
        if ((uVar14 & 1) == 0) {
          lVar23 = 0;
        }
        else {
          lVar23 = *(long *)(*(long *)(lVar19 + 0x38) + uVar12 * 8);
        }
        func_0x000107c6142c(lVar19);
      }
      func_0x000107c614a8(auStack_80);
      if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x102d1b790);
        (*pcVar8)();
      }
      func_0x000107c61428(lVar3 + lVar4,auStack_80,0x21,0);
      uVar13 = *(ulong *)(lVar3 + lVar4);
      func_0x000107c61558();
      lVar22 = *(long *)(lVar3 + lVar4);
      *(undefined8 *)(lVar3 + lVar4) = 0x8000000000000000;
      uVar12 = uVar7;
      uVar14 = uVar6;
      alStack_d8[0] = lVar22;
      func_0x000100029284();
      uVar17 = (ulong)~(uint)uVar14 & 1;
      lVar19 = *(long *)(lVar22 + 0x10) + uVar17;
      if (SCARRY8(*(long *)(lVar22 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x102d1b794);
        (*pcVar8)();
      }
      if (*(long *)(lVar22 + 0x18) < lVar19) {
        func_0x00010113678c(lVar19,uVar13);
        lVar22 = alStack_d8[0];
        uVar12 = uVar7;
        uVar13 = uVar6;
        func_0x000100029284();
        if (((uint)uVar14 & 1) != ((uint)uVar13 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x102d1b7ac);
          (*pcVar8)();
        }
      }
      else if ((uVar13 & 1) == 0) {
        func_0x000101136368();
        lVar22 = alStack_d8[0];
      }
      if ((uVar14 & 1) == 0) {
        lVar19 = lVar22 + (uVar12 >> 6) * 8;
        *(ulong *)(lVar19 + 0x40) = *(ulong *)(lVar19 + 0x40) | 1L << (uVar12 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar22 + 0x30) + uVar12 * 0x10);
        *puVar1 = uVar7;
        puVar1[1] = uVar6;
        *(long *)(*(long *)(lVar22 + 0x38) + uVar12 * 8) = lVar23 + 1;
        if (SCARRY8(*(long *)(lVar22 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x102d1b798);
          (*pcVar8)();
        }
        *(long *)(lVar22 + 0x10) = *(long *)(lVar22 + 0x10) + 1;
      }
      else {
        *(long *)(*(long *)(lVar22 + 0x38) + uVar12 * 8) = lVar23 + 1;
        func_0x000107c6142c(uVar6);
      }
      *(long *)(lVar3 + lVar4) = lVar22;
      func_0x000107c614a8(auStack_80);
    }
    bVar9 = SCARRY8(lVar18,1);
    lVar18 = lVar18 + 1;
    if (bVar9) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x102d1b78c);
      (*pcVar8)();
    }
    if ((long)(uVar16 + 0x3f >> 6) <= lVar18) break;
    uVar21 = ((ulong *)(lVar20 + 0x40))[lVar18];
  }
  func_0x000107c61574(lVar20);
  func_0x000107c6142c(lVar20);
  func_0x000107c61428(lVar15 + 0x10,auStack_80,0,0);
  lVar4 = _DAT_112f0da20;
  uVar10 = *(undefined8 *)(lVar15 + 0x10);
  func_0x000107c61428(lVar3 + _DAT_112f0da20,alStack_d8,0x21,0);
  func_0x000107c61434(uVar10);
  uVar11 = *(undefined8 *)(lVar3 + lVar4);
  func_0x000107c61558(uVar11);
  uStack_e0 = *(undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0x8000000000000000;
  FUN_102d1bfcc(uVar10,0x102d1cd94,0,uVar11,&uStack_e0,0x112f0dab0,&UNK_10db40978);
  func_0x000107c6142c(uVar10);
  *(undefined8 *)(lVar3 + lVar4) = uStack_e0;
  func_0x000107c614a8(alStack_d8);
  lVar4 = _DAT_112f0da28;
  func_0x000107c61428(lVar3 + _DAT_112f0da28,alStack_d8,0x20,0);
  lVar20 = *(long *)(lVar3 + lVar4);
  if (*(long *)(lVar20 + 0x10) == 0) {
    lVar18 = 0;
  }
  else {
    func_0x000107c61434(lVar20);
    lVar18 = lVar2;
    uVar21 = uVar5;
    func_0x000100029284();
    if ((uVar21 & 1) == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(*(long *)(lVar20 + 0x38) + lVar18 * 8);
    }
    func_0x000107c6142c(lVar20);
  }
  func_0x000107c614a8(alStack_d8);
  if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x102d1b79c);
    (*pcVar8)();
  }
  func_0x000107c61428(lVar3 + lVar4,alStack_d8,0x21,0);
  uVar11 = *(undefined8 *)(lVar3 + lVar4);
  func_0x000107c61558(uVar11);
  uStack_e0 = *(undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0x8000000000000000;
  func_0x000101687ce0(lVar18 + 1,lVar2,uVar5,uVar11);
  *(undefined8 *)(lVar3 + lVar4) = uStack_e0;
  func_0x000107c614a8(alStack_d8);
  return;
}



/* Entry: 102d1b7d4; end: 102d1b82b;  */

void FUN_102d1b7d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x20);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x28);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar4 = puVar1[1];
  *puVar1 = 0x6174736e69707061;
  puVar1[1] = 0xeb000000002d6c6c;
  func_0x000107c61434(0xeb000000002d6c6c);
  func_0x000107c6142c(uVar4);
  func_0x00010006c00c(param_1,param_2);
  uVar4 = *puVar2;
  func_0x000107c61558(uVar4);
  uVar3 = *puVar2;
  *puVar2 = 0x8000000000000000;
  func_0x0001010b8f18(param_1,param_2,0x6174736e69707061,0xeb000000002d6c6c,uVar4);
  func_0x000107c6142c(0xeb000000002d6c6c);
  *puVar2 = uVar3;
  return;
}



/* Entry: 102d1b82c; end: 102d1b8eb;  */

void FUN_102d1b82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x20);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x28);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar4 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61434(param_4);
  func_0x000107c6142c(uVar4);
  func_0x00010006c00c(param_1,param_2);
  uVar4 = *puVar2;
  func_0x000107c61558(uVar4);
  uVar3 = *puVar2;
  *puVar2 = 0x8000000000000000;
  func_0x0001010b8f18(param_1,param_2,param_3,param_4,uVar4);
  func_0x000107c6142c(param_4);
  *puVar2 = uVar3;
  return;
}



/* Entry: 102d1b8ec; end: 102d1bcfb;  */

void FUN_102d1b8ec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long unaff_x20;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  puVar3 = *(ulong **)(unaff_x20 + 0x20);
  puVar6 = *(undefined8 **)(unaff_x20 + 0x28);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10254d420();
  uVar21 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar25 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar25 = ~(-1L << (uVar21 & 0x3f));
  }
  uVar25 = uVar25 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434(param_1);
  lVar24 = 0;
  do {
    while (uVar25 == 0) {
      bVar10 = SCARRY8(lVar24,1);
      lVar24 = lVar24 + 1;
      if (bVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102d1bccc);
        (*pcVar9)();
      }
      if ((long)(uVar21 + 0x3f >> 6) <= lVar24) {
        func_0x000107c61574(param_1);
        uVar16 = *puVar6;
        *puVar6 = puVar11;
        func_0x000107c6142c(uVar16);
        return;
      }
      uVar25 = ((ulong *)(param_1 + 0x40))[lVar24];
    }
    uVar20 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) | lVar24 << 6;
    uVar23 = *(ulong *)(*(long *)(param_1 + 0x30) + uVar20 * 8);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar20 * 0x10);
    uVar4 = *puVar1;
    uVar8 = puVar1[1];
    func_0x00010006c00c();
    puVar12 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar12);
    func_0x000107c5fb78(0x2d,0xe100000000000000);
    uVar15 = uVar5;
    func_0x000107c5fb78(uVar16);
    uVar20 = 0x697463656c6c6f63;
    uVar19 = 0xea00000000006e6f;
    uVar18 = 0x6e6f;
    func_0x000107c61434(0xea00000000006e6f);
    puVar12 = puVar11;
    func_0x000107c61558();
    uVar17 = (uint)puVar12;
    uVar13 = uVar23;
    func_0x00010035a314();
    uVar22 = (ulong)~(uint)uVar15 & 1;
    if (SCARRY8(*(long *)(puVar11 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x102d1bcd0);
      (*pcVar9)();
    }
    if (*(long *)(puVar11 + 0x18) < (long)(*(long *)(puVar11 + 0x10) + uVar22)) {
      func_0x000102a6d924();
      uVar13 = uVar23;
      func_0x00010035a314();
      if (((uint)uVar15 & 1) != (uVar17 & 1)) {
        func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102d1bcfc);
        (*pcVar9)();
      }
joined_r0x000102d1bb3c:
      if ((uVar15 & 1) == 0) goto LAB_102d1bb40;
LAB_102d1bb14:
      puVar1 = (undefined8 *)(*(long *)(puVar11 + 0x38) + uVar13 * 0x10);
      uVar14 = puVar1[1];
      *puVar1 = 0x697463656c6c6f63;
      puVar1[1] = 0xea00000000006e6f;
      func_0x000107c6142c(uVar14);
    }
    else {
      if (((ulong)puVar12 & 1) == 0) {
        FUN_102a6d1a0();
        goto joined_r0x000102d1bb3c;
      }
      if ((uVar15 & 1) != 0) goto LAB_102d1bb14;
LAB_102d1bb40:
      *(ulong *)(puVar11 + (uVar13 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar11 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
      *(ulong *)(*(long *)(puVar11 + 0x30) + uVar13 * 8) = uVar23;
      puVar1 = (undefined8 *)(*(long *)(puVar11 + 0x38) + uVar13 * 0x10);
      *puVar1 = 0x697463656c6c6f63;
      puVar1[1] = 0xea00000000006e6f;
      if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102d1bcd8);
        (*pcVar9)();
      }
      *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
    }
    func_0x00010006c00c(uVar4,uVar8);
    uVar15 = *puVar3;
    func_0x000107c61558();
    uVar23 = *puVar3;
    *puVar3 = 0x8000000000000000;
    uVar13 = uVar20;
    func_0x000100029284();
    uVar22 = (ulong)~(uint)uVar19 & 1;
    lVar2 = *(long *)(uVar23 + 0x10) + uVar22;
    if (SCARRY8(*(long *)(uVar23 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x102d1bcd4);
      (*pcVar9)();
    }
    if (*(long *)(uVar23 + 0x18) < lVar2) {
      func_0x0001010b91f8(lVar2,uVar15);
      func_0x000100029284();
      uVar13 = uVar20;
      if (((uint)uVar19 & 1) != (uVar18 & 1)) {
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102d1bcec);
        (*pcVar9)();
      }
LAB_102d1bc14:
      if ((uVar19 & 1) == 0) goto LAB_102d1bc18;
LAB_102d1b984:
      puVar1 = (undefined8 *)(*(long *)(uVar23 + 0x38) + uVar13 * 0x10);
      uVar14 = *puVar1;
      uVar7 = puVar1[1];
      *puVar1 = uVar4;
      puVar1[1] = uVar8;
      func_0x00010006c090(uVar14,uVar7);
      func_0x000107c6142c(0xea00000000006e6f);
      func_0x00010006c090(uVar4,uVar8);
    }
    else {
      if ((uVar15 & 1) != 0) goto LAB_102d1bc14;
      func_0x0001010b9074();
      if ((uVar19 & 1) != 0) goto LAB_102d1b984;
LAB_102d1bc18:
      lVar2 = uVar23 + (uVar13 >> 6) * 8;
      *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar13 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(uVar23 + 0x30) + uVar13 * 0x10);
      *puVar1 = 0x697463656c6c6f63;
      puVar1[1] = 0xea00000000006e6f;
      puVar1 = (undefined8 *)(*(long *)(uVar23 + 0x38) + uVar13 * 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar8;
      func_0x00010006c090(uVar4,uVar8);
      if (SCARRY8(*(long *)(uVar23 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102d1bcdc);
        (*pcVar9)();
      }
      *(long *)(uVar23 + 0x10) = *(long *)(uVar23 + 0x10) + 1;
    }
    uVar25 = uVar25 - 1 & uVar25;
    uVar20 = *puVar3;
    *puVar3 = uVar23;
    func_0x000107c6142c(uVar20);
  } while( true );
}



/* Entry: 102d1bcfc; end: 102d1bfcb;  */

void FUN_102d1bcfc(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar19 = (ulong *)(param_1 + 0x40);
  uVar15 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if (-uVar15 < 0x40) {
    uVar20 = ~(-1L << (-uVar15 & 0x3f));
  }
  uVar20 = uVar20 & *puVar19;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar18 = 0;
  uStack_a4 = param_4;
  uVar10 = uVar20;
  lVar17 = lVar18;
  while( true ) {
    while (uVar20 == 0) {
      bVar9 = SCARRY8(lVar18,1);
      lVar18 = lVar18 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x102d1bfb4);
        (*pcVar8)();
      }
      if ((long)(0x3f - uVar15 >> 6) <= lVar18) goto LAB_102d1bf6c;
      uVar20 = puVar19[lVar18];
    }
    uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = lVar18 << 10 | LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) << 4;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar12);
    uStack_a0 = *puVar1;
    uVar5 = puVar1[1];
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar12);
    uVar3 = *puVar1;
    uVar6 = puVar1[1];
    uStack_98 = uVar5;
    uStack_90 = uVar3;
    uStack_88 = uVar6;
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar3,uVar6);
    func_0x000107c61434(uVar5);
    func_0x00010006c00c(uVar3,uVar6);
    (*param_2)(&uStack_80,&uStack_a0);
    func_0x000107c6142c(uVar5);
    func_0x00010006c090(uVar3,uVar6);
    func_0x000107c6142c(uVar5);
    func_0x00010006c090(uVar3,uVar6);
    uVar5 = uStack_68;
    uVar3 = uStack_70;
    uVar7 = uStack_78;
    uVar12 = uStack_80;
    if (uStack_78 == 0) break;
    lVar16 = *param_5;
    uVar10 = uStack_80;
    uVar11 = uStack_78;
    func_0x000100029284();
    lVar13 = *(long *)(lVar16 + 0x10);
    uVar14 = (ulong)~(uint)uVar11 & 1;
    lVar17 = lVar13 + uVar14;
    if (SCARRY8(lVar13,uVar14)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x102d1bfb8);
      (*pcVar8)();
    }
    if (*(long *)(lVar16 + 0x18) < lVar17) {
      func_0x0001010b91f8(lVar17,uStack_a4 & 1);
      uVar10 = uVar12;
      uVar14 = uVar7;
      func_0x000100029284();
      if (((uint)uVar11 & 1) != ((uint)uVar14 & 1)) {
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x102d1bfcc);
        (*pcVar8)();
      }
    }
    else if ((uStack_a4 & 1) == 0) {
      func_0x0001010b9074();
    }
    uVar20 = uVar20 - 1 & uVar20;
    lVar17 = *param_5;
    if ((uVar11 & 1) == 0) {
      lVar13 = lVar17 + (uVar10 >> 6) * 8;
      *(ulong *)(lVar13 + 0x40) = *(ulong *)(lVar13 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar2 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar12;
      puVar2[1] = uVar7;
      puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x38) + uVar10 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      if (SCARRY8(*(long *)(lVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x102d1bfbc);
        (*pcVar8)();
      }
      *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
    }
    else {
      func_0x000107c6142c(uVar7);
      puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x38) + uVar10 * 0x10);
      uVar6 = *puVar1;
      uVar4 = puVar1[1];
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      func_0x00010006c090(uVar6,uVar4);
    }
    uStack_a4 = 1;
    uVar10 = uVar20;
    lVar17 = lVar18;
  }
LAB_102d1bf6c:
  FUN_102d1c238(param_1,puVar19,~uVar15,lVar17,uVar10);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 102d1bfcc; end: 102d1c237;  */

void FUN_102d1bfcc(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5,
                  undefined8 param_6,undefined8 param_7)

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
  ulong uVar16;
  long lVar17;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar16 != 0) {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar17 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_78 = *puVar1;
      uVar3 = puVar1[1];
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
      uStack_70 = uVar3;
      uStack_68 = uVar15;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar15);
      (*param_2)(&uStack_90,&uStack_78);
      func_0x000107c615e8(uVar15);
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
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102d1c224);
        (*pcVar5)();
      }
      if (*(long *)(lVar13 + 0x18) < lVar14) {
        FUN_102d19d78(lVar14,param_4 & 1,param_6,param_7);
        uVar7 = uVar9;
        uVar12 = uVar4;
        func_0x000100029284();
        if (((uint)uVar8 & 1) != ((uint)uVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102d1c238);
          (*pcVar5)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_102d19aa8(param_6,param_7);
      }
      uVar16 = uVar16 - 1 & uVar16;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102d1c228);
          (*pcVar5)();
        }
        *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar4);
        uVar15 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        func_0x000107c615e8(uVar15);
      }
      param_4 = 1;
    }
    bVar6 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102d1c220);
      (*pcVar5)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar17) break;
    uVar16 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 102d1c238; end: 102d1c23f;  */

void FUN_102d1c238(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102d1c240; end: 102d1c27f;  */

void FUN_102d1c240(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d1c280; end: 102d1c3a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1c280(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f0da38);
  if (lVar7 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      puVar8 = &UNK_1105c2ef0;
      func_0x000107c613fc(&UNK_1105c2ef0,0x48,7);
      *(long *)(puVar8 + 0x10) = lVar7;
      *(undefined8 *)(puVar8 + 0x18) = uVar1;
      *(undefined8 *)(puVar8 + 0x20) = uVar4;
      *(undefined8 *)(puVar8 + 0x28) = uVar2;
      *(undefined8 *)(puVar8 + 0x30) = uVar5;
      *(undefined8 *)(puVar8 + 0x38) = uVar3;
      *(undefined8 *)(puVar8 + 0x40) = uVar6;
      func_0x000107c61174(uVar4);
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar6);
      func_0x000107c615f0(lVar7);
      func_0x000107c61174(uVar1);
      func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db409a0,puVar8,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574();
      func_0x000107c61574(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar7);
      return;
    }
  }
  return;
}



/* Entry: 102d1c3a8; end: 102d1c567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1c3a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puVar5 = &UNK_1105c2ea0;
    func_0x000107c613fc(&UNK_1105c2ea0,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar2;
    lVar9 = *(long *)(lVar4 + _DAT_112f0da38);
    if (lVar9 == 0) {
      func_0x000107c61174(uVar2);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(lVar4);
    }
    else {
      func_0x000107c61174(uVar2);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 == 0) {
        func_0x000107c61170(lVar4);
        func_0x000107c61574(puVar5);
      }
      else {
        func_0x000107c5fadc(uVar6,uVar1);
        func_0x000107c5fc48(uVar7,PTR___sSSN_11034da80);
        pcStack_88 = FUN_102d1c568;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_102d18bf4;
        puStack_90 = &UNK_1105c2eb8;
        ppuVar8 = &puStack_a8;
        puStack_80 = puVar5;
        func_0x000107c60bc4(ppuVar8);
        puVar3 = puStack_80;
        func_0x000107c6157c(puVar5);
        func_0x000107c61574(puVar3);
        func_0x000107c4ecdc(lVar9);
        func_0x000107c61170(lVar4);
        func_0x000107c61574(puVar5);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar6);
        func_0x000107c615e8(lVar9);
      }
    }
  }
  return;
}



/* Entry: 102d1c568; end: 102d1c573;  */

void FUN_102d1c568(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_completeWithValue__1125ae900,param_1);
  return;
}



/* Entry: 102d1c574; end: 102d1c5fb;  */

void FUN_102d1c574(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102d1c5fc;
  plVar7[0x18] = lVar6;
  plVar7[0x19] = lVar8;
  plVar7[0x16] = lVar5;
  plVar7[0x17] = lVar3;
  plVar7[0x14] = lVar4;
  plVar7[0x15] = lVar2;
  plVar7[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d18a24,0,0);
  return;
}



/* Entry: 102d1c5fc; end: 102d1c637;  */

void FUN_102d1c5fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102d1c634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102d1c638; end: 102d1c64f;  */

long FUN_102d1c638(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102d1c650; end: 102d1c957;  */

/* WARNING: Possible PIC construction at 0x000102d1c6ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1c7d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1c7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1c900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1c924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1c914) */
/* WARNING: Removing unreachable block (ram,0x000102d1c904) */
/* WARNING: Removing unreachable block (ram,0x000102d1c7b0) */
/* WARNING: Removing unreachable block (ram,0x000102d1c7dc) */
/* WARNING: Removing unreachable block (ram,0x000102d1c6f0) */
/* WARNING: Removing unreachable block (ram,0x000102d1c928) */
/* WARNING: Removing unreachable block (ram,0x000102d1c864) */
/* WARNING: Removing unreachable block (ram,0x000102d1c8b4) */

void FUN_102d1c650(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x45);
    func_0x000107c5fb78(0xd000000000000041,0x800000010f10a790);
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    uVar2 = uStack_70;
    uVar1 = uStack_78;
    uStack_78 = 0x203a726f727265;
    uStack_70 = 0xe700000000000000;
    if (param_2 == 0) {
      func_0x000107c5fb78(0x296c6c756e28,0xe600000000000000);
      func_0x000107c6142c(0xe600000000000000);
      uVar3 = uStack_70;
      uVar5 = uStack_78;
      uStack_78 = uVar1;
      uStack_70 = uVar2;
      func_0x000107c61434(uVar2);
      func_0x000107c5fb78(uVar5,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(uVar2);
      uVar2 = uStack_70;
      uVar1 = uStack_78;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f10a6c0);
      func_0x000107c5fadc(uVar1,uVar2);
      func_0x000107c6142c(uVar2);
      param_2 = 0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c42a60();
      func_0x000107c61180();
    }
    else {
      func_0x000107c614b0(param_2);
      func_0x000107c5ed2c(param_2);
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000107c5faec();
    }
  }
  else {
    param_2 = *(long *)(unaff_x20 + 0x28);
    puVar4 = &uStack_78;
    func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    func_0x000107c61174(param_1);
    if (param_2 == 0) {
      func_0x000107c3fefc(uVar5);
      param_2 = 0;
    }
    else {
      func_0x000107c5ee30(param_1);
      func_0x000102d18608();
      func_0x00010006c090(param_1,puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102d1c958; end: 102d1ccdb;  */

/* WARNING: Removing unreachable block (ram,0x000102d1cb7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1c958(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(ulong *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112f0da08;
  if (lVar5 != 0) {
    func_0x000107c61428(lVar5 + _DAT_112f0da08,auStack_80,0x21,0);
    func_0x000107c61434(uVar1);
    func_0x000107c61174(uVar7);
    uVar6 = *(undefined8 *)(lVar5 + lVar3);
    func_0x000107c61558(uVar6);
    uStack_88 = *(undefined8 *)(lVar5 + lVar3);
    *(undefined8 *)(lVar5 + lVar3) = 0x8000000000000000;
    FUN_102d197e4(uVar7,lVar2,uVar1,uVar6);
    func_0x000107c6142c(uVar1);
    *(undefined8 *)(lVar5 + lVar3) = uStack_88;
    func_0x000107c614a8(auStack_80);
    lVar3 = _DAT_112f0da10;
    func_0x000107c61428(lVar5 + _DAT_112f0da10,auStack_80,0x21,0);
    func_0x000107c61434(uVar11);
    uVar7 = *(undefined8 *)(lVar5 + lVar3);
    func_0x000107c61558(uVar7);
    uStack_88 = *(undefined8 *)(lVar5 + lVar3);
    *(undefined8 *)(lVar5 + lVar3) = 0x8000000000000000;
    FUN_102d1bcfc(uVar11,FUN_102d1a608,0,uVar7,&uStack_88);
    func_0x000107c6142c(uVar11);
    *(undefined8 *)(lVar5 + lVar3) = uStack_88;
    func_0x000107c614a8(auStack_80);
    lVar3 = _DAT_112f0da28;
    func_0x000107c61428(lVar5 + _DAT_112f0da28,auStack_80,0x20,0);
    lVar9 = *(long *)(lVar5 + lVar3);
    if (*(long *)(lVar9 + 0x10) == 0) {
      lVar10 = 0;
    }
    else {
      func_0x000107c61434(lVar9);
      lVar10 = lVar2;
      uVar8 = uVar1;
      func_0x000100029284();
      if ((uVar8 & 1) == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + lVar10 * 8);
      }
      func_0x000107c6142c(lVar9);
    }
    func_0x000107c614a8(auStack_80);
    if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102d1cb7c);
      (*pcVar4)();
    }
    func_0x000107c61428(lVar5 + lVar3,auStack_80,0x21,0);
    uVar7 = *(undefined8 *)(lVar5 + lVar3);
    func_0x000107c61558(uVar7);
    uStack_88 = *(undefined8 *)(lVar5 + lVar3);
    *(undefined8 *)(lVar5 + lVar3) = 0x8000000000000000;
    func_0x000101687ce0(lVar10 + 1,lVar2,uVar1,uVar7);
    *(undefined8 *)(lVar5 + lVar3) = uStack_88;
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102d1ccdc; end: 102d1cd23;  */

void FUN_102d1ccdc(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  func_0x000107c3fefc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d1cd24; end: 102d1cd97;  */

void FUN_102d1cd24(long param_1,long param_2)

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



/* Entry: 102d1cd98; end: 102d1cda3; -[AdOperaMediaManager removeProfileIconForMediaId:] */

void FUN_102d1cd98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102d16350(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d1cda4; end: 102d1dd67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d1cda4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *aplStack_108 [3];
  long *plStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 auStack_c8 [3];
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  lVar11 = _DAT_113068e88;
  puVar1 = (undefined8 *)(param_1 + _DAT_113068e80);
  uVar17 = *puVar1;
  uVar10 = puVar1[1];
  uVar18 = *(undefined8 *)(param_1 + _DAT_113068e88);
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar16 = *(undefined8 *)(param_7 + _DAT_11308b850);
  func_0x000107c61434(uVar10);
  func_0x000107c615f0(uVar18);
  func_0x000107c61174();
  uVar19 = uVar16;
  func_0x0001000bda74();
  func_0x000107c61170(uVar16);
  lVar8 = _DAT_113068ea0;
  uVar20 = *(undefined8 *)(param_1 + _DAT_113068ea0);
  puVar3 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar20);
  func_0x000107c453e4();
  lVar4 = 0;
  FUN_102d20a60();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar13 = _DAT_112f0dcb0;
  uVar16 = 0x112f09670;
  func_0x0001000285a8(0x112f09670,&UNK_10db3c3b8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar5 + lVar13) = uVar16;
  lVar13 = _DAT_112f0dcb8;
  uVar16 = 0x112f0dad0;
  func_0x0001000285a8(0x112f0dad0,&UNK_10db409b0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar5 + lVar13) = uVar16;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f0dc88);
  *puVar2 = uVar17;
  puVar2[1] = uVar10;
  *(undefined8 *)(lVar5 + _DAT_112f0dc90) = uVar18;
  *(undefined8 *)(lVar5 + _DAT_112f0dc98) = uVar19;
  *(undefined8 *)(lVar5 + _DAT_112f0dca0) = uVar20;
  *(undefined **)(lVar5 + _DAT_112f0dca8) = puVar3;
  plVar6 = &lStack_78;
  lStack_78 = lVar5;
  lStack_70 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + 0x18) = plVar6;
  lVar5 = _DAT_112f0ded0;
  uVar21 = *(undefined8 *)(param_1 + lVar11);
  uVar18 = *(undefined8 *)(param_1 + lVar8);
  uVar16 = *puVar1;
  uVar17 = puVar1[1];
  uVar19 = *(undefined8 *)(param_6 + _DAT_112f0ded0);
  lVar7 = 0;
  FUN_102d21f34();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar13 = _DAT_112f0ddc0;
  uVar20 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x000107c615f0(uVar18);
  func_0x000107c6157c(uVar19);
  func_0x000107c61174();
  func_0x000107c61434(uVar17);
  uVar10 = uVar21;
  func_0x000107c615f0();
  func_0x0001000c6580();
  *(undefined8 *)(lVar8 + lVar13) = uVar10;
  puVar2 = (undefined8 *)(lVar8 + _DAT_112f0dda8);
  *puVar2 = uVar16;
  puVar2[1] = uVar17;
  *(undefined8 *)(lVar8 + _DAT_112f0ddb0) = uVar21;
  *(undefined8 *)(lVar8 + _DAT_112f0ddb8) = uVar18;
  puVar3 = PTR_s_init_1125d9248;
  lStack_88 = lVar8;
  lStack_80 = lVar7;
  func_0x000107c615f0(uVar21);
  func_0x000107c615f0(uVar18);
  plVar9 = &lStack_88;
  func_0x000107c61154(plVar9,puVar3);
  func_0x000107c61174();
  func_0x0001000d224c(aplStack_108);
  func_0x0001000a8868(aplStack_108,plStack_f0);
  plVar12 = plStack_f0;
  (**(code **)((long)ppuStack_e8 + 8))(plStack_f0,ppuStack_e8);
  puVar3 = &UNK_1105c3128;
  func_0x000107c613fc(&UNK_1105c3128,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,plVar9);
  uVar16 = 0x102d1de5c;
  puVar14 = puVar3;
  (**(code **)(*plVar12 + 0x60))(0x102d1de5c);
  func_0x000107c61574(plVar12);
  func_0x000107c61574(puVar3);
  FUN_102d1dea8(aplStack_108);
  func_0x000107c614f0(uVar16);
  uVar17 = *(undefined8 *)((long)plVar9 + _DAT_112f0ddc0);
  pcVar15 = *(code **)(puVar14 + 0x10);
  func_0x000107c6157c(uVar17);
  (*pcVar15)();
  func_0x000107c61170(plVar9);
  func_0x000107c615e8(uVar21);
  func_0x000107c615e8(uVar18);
  func_0x000107c61574(uVar19);
  func_0x000107c615e8(uVar16);
  func_0x000107c61574(uVar17);
  uVar18 = *(undefined8 *)(param_7 + _DAT_11308b848);
  *(long **)(unaff_x20 + 0x20) = plVar9;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar18;
  lVar8 = _DAT_113068e98;
  uVar16 = *puVar1;
  uVar17 = puVar1[1];
  uVar23 = *(undefined8 *)(param_1 + lVar11);
  uVar10 = 0;
  FUN_102d21228();
  uVar19 = uVar10;
  func_0x000107c613fc();
  uVar22 = *(undefined8 *)(param_6 + lVar5);
  func_0x0001000285a8(0x112f0dad8,&UNK_10db409b8);
  uVar21 = *(undefined8 *)(param_8 + _DAT_113053888);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  func_0x000107c61434(uVar17);
  func_0x000107c615f0(uVar23);
  func_0x000107c6157c(uVar22);
  func_0x000107c61174();
  uVar18 = uVar21;
  func_0x0001000bda74();
  func_0x000107c61170(uVar21);
  func_0x0001000d224c(&uStack_a0);
  uVar21 = *(undefined8 *)(param_3 + _DAT_113078b50);
  ppuStack_e8 = &PTR_DAT_1105c31f8;
  ppuStack_a8 = &PTR_DAT_1105c3230;
  lVar11 = 0;
  aplStack_108[0] = plVar6;
  plStack_f0 = (long *)lVar4;
  auStack_c8[0] = uVar19;
  uStack_b0 = uVar10;
  FUN_102d1f68c();
  lVar5 = lVar11;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112f0dbe0,0);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f0dbe8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_112f0dbf0) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f0dbf8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_112f0dc00) = 0;
  *(undefined1 *)(lVar5 + _DAT_112f0dc08) = 0;
  *(undefined1 *)(lVar5 + _DAT_112f0dc10) = 0;
  lVar13 = _DAT_112f0dc18;
  func_0x000107c613fc(uVar20,0x20,7);
  func_0x000107c61174();
  func_0x000107c615f0(uVar21);
  uVar10 = uVar19;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar5 + lVar13) = uVar10;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f0db98);
  *puVar1 = uVar16;
  puVar1[1] = uVar17;
  *(undefined8 *)(lVar5 + _DAT_112f0dba0) = uVar23;
  FUN_102d1de64(aplStack_108,lVar5 + _DAT_112f0dba8);
  FUN_102d1de64(param_1 + lVar8,lVar5 + _DAT_112f0dbb0);
  FUN_102d1de64(auStack_c8,lVar5 + _DAT_112f0dbb8);
  *(undefined8 *)(lVar5 + _DAT_112f0dbc0) = uVar22;
  *(undefined8 *)(lVar5 + _DAT_112f0dbc8) = uVar18;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f0dbd0);
  puVar1[1] = uStack_98;
  *puVar1 = uStack_a0;
  *(undefined8 *)(lVar5 + _DAT_112f0dbd8) = uVar21;
  plVar12 = &lStack_d8;
  lStack_d8 = lVar5;
  lStack_d0 = lVar11;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar19);
  func_0x000107c61170(plVar6);
  FUN_102d1dea8(auStack_c8);
  FUN_102d1dea8(aplStack_108);
  *(long **)(unaff_x20 + 0x10) = plVar12;
  lVar13 = _DAT_113069018;
  func_0x000107c61428(param_2 + _DAT_113069018,auStack_c8,0,0);
  lVar13 = param_2 + lVar13;
  func_0x000107c61618(lVar13);
  func_0x000107c61604((long)plVar12 + _DAT_112f0dbe0,lVar13);
  func_0x000107c615e8(lVar13);
  lVar13 = param_4 + _DAT_113068e50;
  uVar16 = *(undefined8 *)(lVar13 + 0x18);
  lVar5 = *(long *)(lVar13 + 0x20);
  func_0x0001000a8868(lVar13,uVar16);
  ppuStack_e8 = &PTR_DAT_1105c3188;
  ppuStack_e0 = &PTR_DAT_1105c3160;
  pcVar15 = *(code **)(lVar5 + 0x10);
  aplStack_108[0] = plVar12;
  plStack_f0 = (long *)lVar11;
  func_0x000107c61174(plVar12);
  (*pcVar15)(aplStack_108,uVar16,lVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(plVar6);
  FUN_102d1dea8(aplStack_108);
  return unaff_x20;
}



/* Entry: 102d1dd68; end: 102d1ddbf;  */

void FUN_102d1dd68(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_102d1deec();
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c3e7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102d1ddc0; end: 102d1ddfb;  */

void FUN_102d1ddc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d1ddfc; end: 102d1de53;  */

void FUN_102d1ddfc(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  FUN_102d1deec();
  lVar1 = *(long *)(lVar1 + 0x28);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c3e7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102d1de54; end: 102d1de63;  */

undefined8 FUN_102d1de54(void)

{
  return 0;
}



/* Entry: 102d1de64; end: 102d1dea7;  */

long FUN_102d1de64(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102d1dea8; end: 102d1dec7;  */

void FUN_102d1dea8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102d1debc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102d1dec8; end: 102d1dee7;  */

void FUN_102d1dec8(void)

{
  func_0x000107c61168(&PTR_PTR_112f0db20);
  return;
}



/* Entry: 102d1dee8; end: 102d1deeb;  */

void FUN_102d1dee8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(alStack_48,&UNK_1105c4480,uVar1,&UNK_1105c4480,uVar2,&PTR_DAT_1105c33f8,param_1);
  if (alStack_48[0] != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,alStack_48,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c6142c(uStack_38);
    }
    else {
      lVar4 = alStack_48[0];
      func_0x000107c61174(alStack_48[0]);
      FUN_102d21aa8();
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(uStack_38);
      func_0x000107c61170(lVar4);
      alStack_48[0] = lVar4;
    }
    func_0x000107c61170(alStack_48[0]);
  }
  return;
}



/* Entry: 102d1deec; end: 102d1e22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1deec(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  func_0x0001000d224c(alStack_88);
  func_0x0001000a8868(alStack_88,plStack_70);
  plVar3 = plStack_70;
  (**(code **)(lStack_68 + 8))(plStack_70,lStack_68);
  puVar4 = &UNK_1105c31a8;
  func_0x000107c613fc(&UNK_1105c31a8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcVar5 = FUN_102d1fd48;
  puVar10 = puVar4;
  (**(code **)(*plVar3 + 0x60))(FUN_102d1fd48);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  func_0x0001000834e4(alStack_88);
  pcVar6 = pcVar5;
  func_0x000107c614f0(pcVar5);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f0dc18);
  (**(code **)(puVar10 + 0x10))(uVar14,pcVar6,puVar10);
  func_0x000107c615e8(pcVar5);
  func_0x0001000d224c(alStack_88);
  if (alStack_88[0] != 0) {
    func_0x000107c4fc5c(alStack_88[0]);
    func_0x000107c615e8(alStack_88[0]);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f0dbd0);
  uVar11 = ((undefined8 *)(unaff_x20 + _DAT_112f0dbd0))[1];
  func_0x000107c614f0(uVar7);
  uVar8 = 0xd000000000000027;
  func_0x00010403c628(0xd000000000000027,0x800000010f10a860,uVar7,uVar11);
  if ((uVar8 & 1) != 0) {
    lVar1 = unaff_x20 + _DAT_112f0dbb0;
    lVar9 = *(long *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,lVar9);
    (**(code **)(lVar2 + 8))(lVar9,lVar2);
    if (lVar9 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f0db98);
      uVar11 = ((undefined8 *)(unaff_x20 + _DAT_112f0db98))[1];
      puVar4 = &UNK_1105c31d0;
      func_0x000107c613fc(&UNK_1105c31d0,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar7;
      *(undefined8 *)(puVar4 + 0x18) = uVar11;
      func_0x000107c61434(uVar11);
      uVar7 = 0x102d1fd50;
      func_0x0001000c0ebc(0x102d1fd50,puVar4);
      func_0x000107c61574(puVar4);
      pcVar5 = FUN_102d1f050;
      func_0x0001000c0ebc(FUN_102d1f050,0);
      puVar4 = &UNK_1105c31a8;
      puVar10 = puVar4;
      func_0x000107c613fc(&UNK_1105c31a8,0x18,7);
      func_0x000107c61614(puVar10 + 0x10);
      uVar11 = 0x102d1fd58;
      puVar13 = puVar10;
      (**(code **)(*(long *)pcVar5 + 0x60))(0x102d1fd58);
      func_0x000107c61574(pcVar5);
      func_0x000107c61574(puVar10);
      uVar12 = uVar11;
      func_0x000107c614f0(uVar11);
      (**(code **)(puVar13 + 0x10))(uVar14,uVar12,puVar13);
      func_0x000107c615e8(uVar11);
      pcVar5 = FUN_102d1f0d8;
      func_0x0001000c0ebc(FUN_102d1f0d8,0);
      func_0x000107c613fc(&UNK_1105c31a8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      uVar11 = 0x102d1fd60;
      puVar10 = puVar4;
      (**(code **)(*(long *)pcVar5 + 0x60))(0x102d1fd60);
      func_0x000107c61574(pcVar5);
      func_0x000107c61574(puVar4);
      uVar12 = uVar11;
      func_0x000107c614f0(uVar11);
      (**(code **)(puVar10 + 0x10))(uVar14,uVar12,puVar10);
      func_0x000107c61574(lVar9);
      func_0x000107c61574(uVar7);
      func_0x000107c615e8(uVar11);
    }
  }
  return;
}



/* Entry: 102d1e22c; end: 102d1e6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1e22c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(&lStack_68,&UNK_1105c41d8,uVar1,&UNK_1105c41d8,uVar2,&PTR_DAT_1105c33a8,lVar4);
  if (lStack_48 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&lStack_68,&UNK_1105c4278,uVar1,&UNK_1105c4278,uVar2,&PTR_DAT_1105c33c8,lVar4);
    if (lStack_68 != 0) {
      func_0x000107c61428(param_2 + 0x10,&lStack_68,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 != 0) {
        func_0x000102d1e928(lStack_68);
        func_0x000107c6142c(lStack_58);
        func_0x000107c6142c(lStack_68);
        goto LAB_102d1e37c;
      }
      func_0x000107c6142c(lStack_58);
      lVar4 = lStack_68;
      goto LAB_102d1e2d8;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&lStack_68,&UNK_1105c37f8,uVar1,&UNK_1105c37f8,uVar2,&PTR_DAT_1105c32f0,lVar4);
    if (lStack_58 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar4 = param_1;
      func_0x0001000a8868(param_1,uVar1);
      FUN_102d24050(&lStack_68,&UNK_1105c4208,uVar1,&UNK_1105c4208,uVar2,&PTR_DAT_1105c33b0,lVar4);
      if (lStack_58 == 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        lVar4 = param_1;
        func_0x0001000a8868(param_1,uVar1);
        FUN_102d24050(&lStack_68,&UNK_1105c4230,uVar1,&UNK_1105c4230,uVar2,&PTR_DAT_1105c33b8,lVar4)
        ;
        if (lStack_60 != 0) {
          func_0x000107c6142c();
          func_0x000107c61428(param_2 + 0x10,&lStack_68,0,0);
          param_2 = param_2 + 0x10;
          func_0x000107c61618();
          if (param_2 == 0) {
            return;
          }
          FUN_102d1ec70();
LAB_102d1e37c:
          func_0x000107c61170();
          return;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        lVar4 = param_1;
        func_0x0001000a8868(param_1,uVar1);
        FUN_102d24050(&lStack_68,&UNK_1105c4250,uVar1,&UNK_1105c4250,uVar2,&PTR_DAT_1105c33c0,lVar4)
        ;
        if (lStack_58 == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x18);
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          lVar4 = param_1;
          func_0x0001000a8868(param_1,uVar1);
          FUN_102d24050(&lStack_68,&UNK_1105c4158,uVar1,&UNK_1105c4158,uVar2,&PTR_DAT_1105c33a0,
                        lVar4);
          if (lStack_58 == 0) {
            uVar1 = *(undefined8 *)(param_1 + 0x18);
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            func_0x0001000a8868(param_1,uVar1);
            FUN_102d24050(&lStack_68,&UNK_1105c3898,uVar1,&UNK_1105c3898,uVar2,&PTR_DAT_1105c3300,
                          param_1);
            if (lStack_58 == 0) {
              return;
            }
            func_0x000107c6142c();
            func_0x000107c61428(param_2 + 0x10,&lStack_68,0,0);
            param_2 = param_2 + 0x10;
            func_0x000107c61618();
            if (param_2 == 0) {
              return;
            }
            if (*(char *)(param_2 + _DAT_112f0dc08) == '\x01') {
              lVar4 = *(long *)(param_2 + _DAT_112f0dbd8);
              func_0x000107c5dec4();
              func_0x000107c61180();
              if (lVar4 != 0) {
                func_0x000107c54188();
                func_0x000107c615e8(lVar4);
              }
            }
            goto LAB_102d1e37c;
          }
          func_0x000107c61428(param_2 + 0x10,&lStack_68,0,0);
          param_2 = param_2 + 0x10;
          func_0x000107c61618();
          lVar4 = lStack_58;
          if (param_2 != 0) {
            *(undefined1 *)(param_2 + _DAT_112f0dc08) = 1;
            *(byte *)(param_2 + _DAT_112f0dc10) = (byte)lStack_68 & 1;
            lVar3 = *(long *)(param_2 + _DAT_112f0dbd8);
            func_0x000107c5dec4();
            func_0x000107c61180();
            if (lVar3 != 0) {
              func_0x000107c54188();
              func_0x000107c615e8(lVar3);
            }
            func_0x000107c61170(param_2);
          }
          goto LAB_102d1e2d8;
        }
        func_0x000107c61428(param_2 + 0x10,&lStack_68,0,0);
        param_2 = param_2 + 0x10;
        func_0x000107c61618();
        lVar4 = lStack_58;
        if (param_2 == 0) goto LAB_102d1e2d8;
        FUN_102d1edfc(lStack_68);
      }
      else {
        func_0x000107c61428(param_2 + 0x10,&lStack_68,0,0);
        param_2 = param_2 + 0x10;
        func_0x000107c61618();
        lVar4 = lStack_58;
        if (param_2 == 0) goto LAB_102d1e2d8;
        func_0x000102d1eacc(lStack_68);
      }
    }
    else {
      func_0x000107c61428(param_2 + 0x10,&lStack_68,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      lVar4 = lStack_58;
      if (param_2 == 0) goto LAB_102d1e2d8;
      FUN_102d1fa8c();
    }
  }
  else {
    func_0x000107c61428(param_2 + 0x10,&lStack_68,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    lVar4 = lStack_48;
    if (param_2 == 0) goto LAB_102d1e2d8;
    FUN_102d1e6f4(lStack_68,lStack_60,(uint)lStack_58 & 1);
    lStack_58 = lStack_48;
  }
  func_0x000107c61170(param_2);
  lVar4 = lStack_58;
LAB_102d1e2d8:
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 102d1e6f4; end: 102d1ec6f;  */

/* WARNING: Possible PIC construction at 0x000102d1e7bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1e7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1e848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1e918: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1f510) */
/* WARNING: Removing unreachable block (ram,0x000102d1f550) */
/* WARNING: Removing unreachable block (ram,0x000102d1f514) */
/* WARNING: Removing unreachable block (ram,0x000102d1f528) */
/* WARNING: Removing unreachable block (ram,0x000102d1f53c) */
/* WARNING: Removing unreachable block (ram,0x000102d1e84c) */
/* WARNING: Removing unreachable block (ram,0x000102d1e7e0) */
/* WARNING: Removing unreachable block (ram,0x000102d1e7e4) */
/* WARNING: Removing unreachable block (ram,0x000102d1e808) */
/* WARNING: Removing unreachable block (ram,0x000102d1e8b4) */
/* WARNING: Removing unreachable block (ram,0x000102d1e844) */
/* WARNING: Removing unreachable block (ram,0x000102d1e7c0) */
/* WARNING: Removing unreachable block (ram,0x000102d1e7c4) */
/* WARNING: Removing unreachable block (ram,0x000102d1e91c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1e6f4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  if (param_1 == 1) {
    FUN_102d1f200(param_2);
  }
  else if (param_1 == 0) {
    if (*(char *)(unaff_x20 + _DAT_112f0dc08) == '\x01') {
      *(undefined1 *)(unaff_x20 + _DAT_112f0dc08) = 0;
      *(undefined1 *)(unaff_x20 + _DAT_112f0dc10) = 0;
      lVar3 = *(long *)(unaff_x20 + _DAT_112f0dbd8);
      func_0x000107c5dec4();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c54188();
        func_0x000107c615e8(lVar3);
      }
    }
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0dba0);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0db98);
    func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112f0db98))[1]);
    func_0x000107c3d368(uVar5);
    func_0x000107c61180();
    goto code_r0x000107c61170;
  }
  plVar1 = (long *)(unaff_x20 + _DAT_112f0dbe8);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f0dbf8);
  *puVar2 = param_2;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(bool *)(unaff_x20 + _DAT_112f0dbf0) = param_1 == 1;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0dba0);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0db98);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112f0db98))[1]);
  func_0x000107c4a784(uVar5);
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 102d1ec70; end: 102d1edfb;  */

/* WARNING: Possible PIC construction at 0x000102d1eccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1ece0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1ed3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1eddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1ed40) */
/* WARNING: Removing unreachable block (ram,0x000102d1ed7c) */
/* WARNING: Removing unreachable block (ram,0x000102d1ece4) */
/* WARNING: Removing unreachable block (ram,0x000102d1ece8) */
/* WARNING: Removing unreachable block (ram,0x000102d1ed48) */
/* WARNING: Removing unreachable block (ram,0x000102d1ed0c) */
/* WARNING: Removing unreachable block (ram,0x000102d1ecd0) */
/* WARNING: Removing unreachable block (ram,0x000102d1ed64) */
/* WARNING: Removing unreachable block (ram,0x000102d1ecd4) */
/* WARNING: Removing unreachable block (ram,0x000102d1ede0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1ec70(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0dba0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f0db98);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f0db98))[1]);
  func_0x000107c3d368(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d1edfc; end: 102d1ef9f;  */

/* WARNING: Possible PIC construction at 0x000102d1ee60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1ee74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1eed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1ef7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1eed4) */
/* WARNING: Removing unreachable block (ram,0x000102d1ef18) */
/* WARNING: Removing unreachable block (ram,0x000102d1ee78) */
/* WARNING: Removing unreachable block (ram,0x000102d1ee7c) */
/* WARNING: Removing unreachable block (ram,0x000102d1eedc) */
/* WARNING: Removing unreachable block (ram,0x000102d1eea0) */
/* WARNING: Removing unreachable block (ram,0x000102d1ee64) */
/* WARNING: Removing unreachable block (ram,0x000102d1eefc) */
/* WARNING: Removing unreachable block (ram,0x000102d1ee68) */
/* WARNING: Removing unreachable block (ram,0x000102d1ef80) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1edfc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0dba0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f0db98);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f0db98))[1]);
  func_0x000107c3d368(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d1efa0; end: 102d1f04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102d1efa0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = *(long *)(*param_1 + _DAT_11308c0c0);
  lVar3 = param_2;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    if (lVar2 == param_2 && lVar3 == param_3) {
      uVar4 = 1;
    }
    else {
      func_0x000107c605b8(lVar2,lVar3,param_2,param_3,0);
      uVar4 = (uint)lVar2;
    }
    func_0x000107c6142c(lVar3);
  }
  return uVar4 & 1;
}



/* Entry: 102d1f050; end: 102d1f07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102d1f050(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c(uVar1);
  return (int)uVar1 == 3;
}



/* Entry: 102d1f080; end: 102d1f0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1f080(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + _DAT_112f0dc00) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102d1f0d8; end: 102d1f107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102d1f0d8(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c(uVar1);
  return (int)uVar1 == 8;
}



/* Entry: 102d1f108; end: 102d1f1ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1f108(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112f0dc00) = 0;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if ((lVar1 != 0) &&
     (lVar2 = *(long *)(lVar1 + _DAT_112f0dbe8), lVar1 = ((long *)(lVar1 + _DAT_112f0dbe8))[1],
     func_0x000107c61170(), (char)lVar1 != '\x01' && lVar2 == 1)) {
    func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar1 = param_2 + _DAT_112f0dbe0;
      func_0x000107c61618();
      func_0x000107c61170(param_2);
      if (lVar1 != 0) {
        func_0x000107c4e470(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  return;
}



/* Entry: 102d1f200; end: 102d1f4bb;  */

/* WARNING: Possible PIC construction at 0x000102d1f270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1f3ec) */
/* WARNING: Removing unreachable block (ram,0x000102d1f388) */
/* WARNING: Removing unreachable block (ram,0x000102d1f38c) */
/* WARNING: Removing unreachable block (ram,0x000102d1f3b0) */
/* WARNING: Removing unreachable block (ram,0x000102d1f3f0) */
/* WARNING: Removing unreachable block (ram,0x000102d1f3e4) */
/* WARNING: Removing unreachable block (ram,0x000102d1f374) */
/* WARNING: Removing unreachable block (ram,0x000102d1f378) */
/* WARNING: Removing unreachable block (ram,0x000102d1f288) */
/* WARNING: Removing unreachable block (ram,0x000102d1f28c) */
/* WARNING: Removing unreachable block (ram,0x000102d1f338) */
/* WARNING: Removing unreachable block (ram,0x000102d1f300) */
/* WARNING: Removing unreachable block (ram,0x000102d1f344) */
/* WARNING: Removing unreachable block (ram,0x000102d1f274) */
/* WARNING: Removing unreachable block (ram,0x000102d1f318) */
/* WARNING: Removing unreachable block (ram,0x000102d1f278) */
/* WARNING: Removing unreachable block (ram,0x000102d1f488) */
/* WARNING: Removing unreachable block (ram,0x000102d1f490) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1f200(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0dba0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f0db98);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f0db98))[1]);
  func_0x000107c3d368(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d1f4bc; end: 102d1f55f;  */

/* WARNING: Possible PIC construction at 0x000102d1f50c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1f510) */
/* WARNING: Removing unreachable block (ram,0x000102d1f550) */
/* WARNING: Removing unreachable block (ram,0x000102d1f514) */
/* WARNING: Removing unreachable block (ram,0x000102d1f528) */
/* WARNING: Removing unreachable block (ram,0x000102d1f53c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1f4bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0dba0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f0db98);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f0db98))[1]);
  func_0x000107c4a784(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d1f560; end: 102d1f5bf; -[_TtC23AdEndCardImplementation25AdComposerEndCardWorkflow init] */

void FUN_102d1f560(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdEndCardImplementation.AdComposerEndCardWorkflow",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d1f58c);
  (*pcVar1)();
}



/* Entry: 102d1f5c0; end: 102d1f68b; -[_TtC23AdEndCardImplementation25AdComposerEndCardWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d1f630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1f634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1f5c0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0db98 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0dba0));
  func_0x0001000834e4(param_1 + _DAT_112f0dba8);
  func_0x0001000834e4(param_1 + _DAT_112f0dbb0);
  func_0x0001000834e4(param_1 + _DAT_112f0dbb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0dbc0));
  return;
}



/* Entry: 102d1f68c; end: 102d1f6ab;  */

void FUN_102d1f68c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1050);
  return;
}



/* Entry: 102d1f6ac; end: 102d1f93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1f6ac(long param_1)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar10 = *(long *)(unaff_x20 + _DAT_112f0dba0);
  plVar4 = *(long **)(unaff_x20 + _DAT_112f0db98);
  func_0x000107c5fadc(plVar4,((undefined8 *)(unaff_x20 + _DAT_112f0db98))[1]);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar10 != 0) {
    func_0x00010404c15c();
    if (*(long *)(param_1 + 0x10) == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      lVar5 = *plVar4;
      uVar1 = plVar4[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(param_1);
      uVar9 = uVar1;
      func_0x000100029284(lVar5);
      if ((uVar9 & 1) == 0) {
        func_0x000107c6142c(param_1);
        uStack_58 = 0;
        uStack_60 = 0;
        lStack_48 = 0;
        uStack_50 = 0;
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar5 * 0x20,&uStack_60);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(param_1);
        if (lStack_48 != 0) {
          uVar6 = 0;
          FUN_102d1fcc4(0);
          puVar7 = &uStack_68;
          func_0x000107c6147c(puVar7,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar6,6);
          if (((ulong)puVar7 & 1) != 0) {
            lVar5 = unaff_x20 + _DAT_112f0dbb8;
            uVar6 = *(undefined8 *)(lVar5 + 0x18);
            lVar2 = *(long *)(lVar5 + 0x20);
            func_0x0001000a8868(lVar5,uVar6);
            lVar5 = lVar10;
            (**(code **)(lVar2 + 8))(lVar10,uVar6,lVar2);
            if (lVar5 != 0) {
              func_0x000107c53b8c(uStack_68);
              func_0x000107c61170(lVar5);
            }
            bVar3 = *(byte *)(unaff_x20 + _DAT_112f0dbf0);
            if (bVar3 == 2) {
              func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
              func_0x000107c61170(lVar10);
              func_0x000107c61170(uStack_68);
              return;
            }
            puVar7 = (undefined8 *)0x112d4b5e8;
            func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
            func_0x000107c61534();
            puVar7[3] = 2;
            puVar7[2] = 1;
            puVar8 = puVar7;
            func_0x000103b98628();
            uVar6 = puVar8[1];
            puVar7[4] = *puVar8;
            puVar7[5] = uVar6;
            puVar7[9] = PTR___sSbN_11034dd40;
            *(byte *)(puVar7 + 6) = bVar3 & 1;
            func_0x000107c61434();
            func_0x000100214a84(puVar7);
            func_0x000107c61588(puVar7);
            FUN_102d1fd08(puVar7 + 4,0x112d4b5f0,&UNK_10d9127d0);
            func_0x000107c61170(uStack_68);
            func_0x000107c61170(lVar10);
            return;
          }
          func_0x000107c61170(lVar10);
          goto LAB_102d1f870;
        }
      }
    }
    func_0x000107c61170(lVar10);
    FUN_102d1fd08(&uStack_60,0x112d387f8,&UNK_10d902650);
  }
LAB_102d1f870:
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 102d1f93c; end: 102d1f977;  */

void FUN_102d1f93c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f0dc48;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f0dc48,&UNK_10db40a70);
  func_0x000107c5fb18(&uStack_18,uVar1);
  return;
}



/* Entry: 102d1f978; end: 102d1f997;  */

void FUN_102d1f978(void)

{
  FUN_102d1f6ac();
  return;
}



/* Entry: 102d1f998; end: 102d1f9ab;  */

undefined * FUN_102d1f998(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102d1f9ac; end: 102d1fa8b; -[_TtC23AdEndCardImplementation25AdComposerEndCardWorkflow getJiraLabelsByProject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1f9ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = (int)*(undefined8 *)(param_1 + _DAT_112f0dba0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f0db98);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f0db98))[1];
  func_0x000107c61174();
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c4a164();
  func_0x000107c61170(uVar2);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((iVar5 != 0) && (*(char *)(param_1 + _DAT_112f0dbe8 + 8) != '\x01')) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
  }
  func_0x000107c61170(param_1);
  puVar4 = puVar3;
  func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 102d1fa8c; end: 102d1fcc3;  */

/* WARNING: Possible PIC construction at 0x000102d1fb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1fb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1fbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1f484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d1fc90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1f488) */
/* WARNING: Removing unreachable block (ram,0x000102d1f3ec) */
/* WARNING: Removing unreachable block (ram,0x000102d1f388) */
/* WARNING: Removing unreachable block (ram,0x000102d1f38c) */
/* WARNING: Removing unreachable block (ram,0x000102d1f3b0) */
/* WARNING: Removing unreachable block (ram,0x000102d1f3f0) */
/* WARNING: Removing unreachable block (ram,0x000102d1f3e4) */
/* WARNING: Removing unreachable block (ram,0x000102d1f374) */
/* WARNING: Removing unreachable block (ram,0x000102d1f490) */
/* WARNING: Removing unreachable block (ram,0x000102d1f378) */
/* WARNING: Removing unreachable block (ram,0x000102d1f288) */
/* WARNING: Removing unreachable block (ram,0x000102d1f28c) */
/* WARNING: Removing unreachable block (ram,0x000102d1f338) */
/* WARNING: Removing unreachable block (ram,0x000102d1f300) */
/* WARNING: Removing unreachable block (ram,0x000102d1f344) */
/* WARNING: Removing unreachable block (ram,0x000102d1f274) */
/* WARNING: Removing unreachable block (ram,0x000102d1f318) */
/* WARNING: Removing unreachable block (ram,0x000102d1f278) */
/* WARNING: Removing unreachable block (ram,0x000102d1fb94) */
/* WARNING: Removing unreachable block (ram,0x000102d1fb98) */
/* WARNING: Removing unreachable block (ram,0x000102d1fbbc) */
/* WARNING: Removing unreachable block (ram,0x000102d1fc2c) */
/* WARNING: Removing unreachable block (ram,0x000102d1fbf8) */
/* WARNING: Removing unreachable block (ram,0x000102d1fb74) */
/* WARNING: Removing unreachable block (ram,0x000102d1fc00) */
/* WARNING: Removing unreachable block (ram,0x000102d1fb78) */
/* WARNING: Removing unreachable block (ram,0x000102d1fc94) */
/* WARNING: Removing unreachable block (ram,0x000102d1fc08) */
/* WARNING: Removing unreachable block (ram,0x000102d1f200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1fa8c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if ((*(char *)(unaff_x20 + _DAT_112f0dbe8 + 8) != '\x01') &&
     (*(char *)(unaff_x20 + _DAT_112f0dbf8 + 8) != '\x01')) {
    if (*(char *)(unaff_x20 + _DAT_112f0dc08) == '\x01') {
      lVar1 = *(long *)(unaff_x20 + _DAT_112f0dbd8);
      func_0x000107c5dec4();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c54188();
        func_0x000107c615e8(lVar1);
      }
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0dba0);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0db98);
    func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112f0db98))[1]);
    func_0x000107c3d368(uVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102d1fcc4; end: 102d1fd07;  */

void FUN_102d1fcc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efcdc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ca4e0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112efcdc0 = puVar1;
  return;
}



/* Entry: 102d1fd08; end: 102d1fd47;  */

undefined8 FUN_102d1fd08(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}


