/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c137ec; end: 102c1381b;  */

bool FUN_102c137ec(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102c1381c; end: 102c13987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1381c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  if (param_1 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + _DAT_11307abc8);
  if (*(long *)(lVar4 + 0x10) == 0) {
    return;
  }
  func_0x000107c61434(lVar4);
  lVar1 = 0x6f74735f736e656c;
  uVar3 = 0;
  func_0x000100029284(0x6f74735f736e656c);
  if ((uVar3 & 1) != 0) {
    func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar1 * 0x20,auStack_50);
    func_0x000107c6142c(lVar4);
    plVar2 = &lStack_60;
    func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)plVar2 & 1) == 0) {
      return;
    }
    lVar1 = lStack_60;
    func_0x000107c5fb5c(lStack_60,lStack_58);
    lVar4 = lStack_58;
    if ((0 < lVar1) && (param_2 != 0)) {
      lVar4 = lStack_60;
      func_0x000107c5fadc(lStack_60,lStack_58);
      func_0x000107c6142c(lStack_58);
      lVar1 = param_2;
      func_0x000107c4e9dc();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar1 == 0) {
        return;
      }
      func_0x000107c4125c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (param_2 == 0) {
        return;
      }
      puStack_68 = PTR_DAT_1126a1ed8;
      lVar4 = param_2;
      func_0x000107c61494(param_2,1,&puStack_68);
      if (lVar4 != 0) {
        return;
      }
      func_0x000107c61170(param_2);
      return;
    }
  }
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 102c13988; end: 102c1398f;  */

undefined8 FUN_102c13988(void)

{
  return 1;
}



/* Entry: 102c13990; end: 102c13a2f;  */

void FUN_102c13990(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102c13a30; end: 102c13a3f;  */

void FUN_102c13a30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102c13a40; end: 102c13a47; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_102c13a40(void)

{
  return 0;
}



/* Entry: 102c13a48; end: 102c13b27; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource canResolvePlaylistItemGroupDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102c13a48(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
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
  func_0x000100672b50(&uStack_40,auStack_80);
  if (lStack_68 == 0) {
    func_0x000107c61170(param_1);
    func_0x00010006e7f4(&uStack_40);
    func_0x00010006e7f4(auStack_80);
    uVar2 = 0;
  }
  else {
    func_0x000100102924(auStack_80,auStack_60);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112eff768);
    func_0x000107c614f0(uVar3);
    puVar1 = auStack_60;
    FUN_102c15664(puVar1,uVar3);
    uVar2 = (uint)puVar1;
    func_0x000102c14fa0(auStack_60);
    func_0x00010006e7f4(&uStack_40);
    func_0x000107c61170(param_1);
  }
  return uVar2 & 1;
}



/* Entry: 102c13b28; end: 102c13ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c13b28(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    func_0x000100102924(auStack_80,auStack_60);
    lVar5 = *(long *)(unaff_x20 + _DAT_112eff768);
    puVar1 = auStack_60;
    FUN_102c14f7c(puVar1,uStack_48);
    func_0x000107c605b0();
    func_0x000107c5bfd0();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    if (lVar5 != 0) {
      lVar2 = lVar5;
      func_0x000107c4b450(lVar5);
      func_0x000107c61180();
      lVar3 = lVar2;
      uVar4 = uStack_48;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      FUN_102c17e28(0);
      func_0x000107c610f8();
      lVar2 = lVar5;
      func_0x000107c615f0(lVar5);
      FUN_102c17e48();
      func_0x000107c615e8(lVar5);
      FUN_102c183d0(lVar2);
      func_0x000104445170(0);
      func_0x000107c610f8();
      func_0x000104444a48(lVar3,uVar4,0x726f7453736e654c,0xe900000000000079,1,1,1);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(lVar2);
      func_0x000102c14fa0(auStack_60);
      return lVar3;
    }
    func_0x000102c14fa0(auStack_60);
  }
  return 0;
}



/* Entry: 102c13ca8; end: 102c13d27; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource playlistItemGroupModelForDataModel:] */

void FUN_102c13ca8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
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
  FUN_102c13b28(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102c13d28; end: 102c140bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c13d28(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *apuStack_78 [3];
  
  lVar2 = param_1;
  func_0x000107c444d0();
  func_0x000107c61180();
  lVar12 = lVar2;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  lVar2 = lVar12;
  func_0x000107c5faec();
  func_0x000107c61170(lVar12);
  lVar12 = *(long *)(unaff_x20 + _DAT_112eff780);
  func_0x000107c61428(lVar12 + 0x38,apuStack_78,0x20,0);
  lVar12 = *(long *)(lVar12 + 0x38);
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61434(lVar12);
    uVar9 = param_2;
    func_0x000100029284();
    if ((uVar9 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(lVar12 + 0x38) + lVar2 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(apuStack_78);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar12);
      uVar3 = *(undefined8 *)(lVar2 + _DAT_112effa08);
      func_0x000107c4b450();
      func_0x000107c61180();
      uVar5 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      uVar14 = *(ulong *)(lVar2 + _DAT_112effa10);
      if (uVar14 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar14 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar14) {
          uVar15 = uVar14;
        }
        func_0x000107c60480();
      }
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar15 != 0) {
        apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar10 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
        FUN_102761580(0,uVar10,0);
        if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c140bc);
          (*pcVar1)();
        }
        uVar16 = 0;
        do {
          puVar6 = apuStack_78[0];
          if ((uVar14 & 0xc000000000000001) == 0) {
            uVar13 = *(ulong *)(uVar14 + uVar16 * 8 + 0x20);
            func_0x000107c615f0(uVar13);
            uVar11 = uVar10;
          }
          else {
            uVar13 = uVar16;
            uVar11 = uVar14;
            func_0x000102c16054(uVar16,uVar14);
          }
          uVar10 = uVar13;
          func_0x000107c4b40c(uVar13);
          func_0x000107c61180();
          uVar4 = uVar10;
          func_0x000107c5faec();
          func_0x000107c61170(uVar10);
          func_0x0001044443ac(0);
          func_0x000107c610f8();
          uVar3 = 0x726f7453736e654c;
          uVar10 = 0xed000070616e5379;
          func_0x00010444388c(0x726f7453736e654c,0xed000070616e5379,uVar4,uVar11,0);
          func_0x000107c615e8(uVar13);
          uVar11 = *(ulong *)(puVar6 + 0x10);
          uVar13 = uVar11 + 1;
          apuStack_78[0] = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
            uVar10 = uVar13;
            FUN_102761580(1 < *(ulong *)(puVar6 + 0x18),uVar13,1);
          }
          uVar16 = uVar16 + 1;
          *(ulong *)(apuStack_78[0] + 0x10) = uVar13;
          *(undefined8 *)(apuStack_78[0] + uVar11 * 8 + 0x20) = uVar3;
          puVar6 = apuStack_78[0];
        } while (uVar15 != uVar16);
      }
      uVar3 = 0;
      func_0x0001044443ac(0);
      func_0x000107c610f8();
      puVar7 = (undefined *)0x726f7453736e654c;
      func_0x00010444388c(0x726f7453736e654c,0xe900000000000079,uVar5,uVar9,puVar6);
      puVar8 = puVar7;
      FUN_102763dc4();
      func_0x000107c613fc();
      *(undefined8 *)(puVar8 + 0x18) = 3;
      *(undefined8 *)(puVar8 + 0x10) = 1;
      *(undefined **)(puVar8 + 0x20) = puVar7;
      func_0x000107c61174(puVar7);
      puVar6 = puVar8;
      func_0x000107c5fc48(puVar8,uVar3);
      func_0x000107c61574(puVar8);
      func_0x000107c505d4(param_1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar7);
      goto LAB_102c14078;
    }
    func_0x000107c6142c(lVar12);
  }
  func_0x000107c614a8(apuStack_78);
  func_0x000107c6142c(param_2);
  uVar5 = 0;
  func_0x0001044443ac(0);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar5);
  func_0x000107c505d4(param_1);
LAB_102c14078:
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 102c140bc; end: 102c14103; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_102c140bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102c13d28(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c14104; end: 102c14477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c14104(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x000107c615f0();
  func_0x000107c444d0();
  func_0x000107c61180();
  if (uVar1 == 0) {
    func_0x000107c615e8(param_1);
    return;
  }
  uVar7 = uVar1;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  uVar2 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  lVar6 = *(long *)(unaff_x20 + _DAT_112eff780);
  func_0x000107c61428(lVar6 + 0x38,auStack_68,0x20,0);
  uVar7 = *(ulong *)(lVar6 + 0x38);
  if (*(long *)(uVar7 + 0x10) == 0) {
    func_0x000107c614a8(auStack_68);
    func_0x000107c615e8(param_1);
    func_0x000107c615e8(uVar1);
  }
  else {
    func_0x000107c61434(uVar7);
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) == 0) {
      func_0x000107c614a8(auStack_68);
      func_0x000107c615e8(param_1);
      func_0x000107c615e8(uVar1);
      func_0x000107c6142c(param_2);
      param_2 = uVar7;
      goto LAB_102c14288;
    }
    lVar6 = *(long *)(*(long *)(uVar7 + 0x38) + uVar2 * 8);
    func_0x000107c61174();
    func_0x000107c614a8(auStack_68);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar7);
    uVar7 = param_1;
    func_0x000107c5d0f0();
    func_0x000107c61180();
    uVar2 = uVar7;
    func_0x000107c5faec();
    uVar5 = uVar4;
    func_0x000107c61170(uVar7);
    if ((uVar2 == 0x726f7453736e654c) && (uVar4 == 0xed000070616e5379)) {
      func_0x000107c6142c(0xed000070616e5379);
    }
    else {
      uVar5 = uVar4;
      func_0x000107c605b8(uVar2,uVar4,0x726f7453736e654c,0xed000070616e5379,0);
      func_0x000107c6142c(uVar4);
      if ((uVar2 & 1) == 0) {
        uVar7 = param_1;
        func_0x000107c5d0f0();
        func_0x000107c61180();
        uVar2 = uVar7;
        func_0x000107c5faec();
        func_0x000107c61170(uVar7);
        if ((uVar2 == 0x726f7453736e654c) && (uVar5 == 0xe900000000000079)) {
          func_0x000107c615e8(param_1);
          func_0x000107c6142c(0xe900000000000079);
          func_0x000107c615e8(uVar1);
          return;
        }
        func_0x000107c605b8(uVar2,uVar5,0x726f7453736e654c,0xe900000000000079,0);
        func_0x000107c615e8(param_1);
        func_0x000107c6142c(uVar5);
        func_0x000107c615e8(uVar1);
        if ((uVar2 & 1) != 0) {
          return;
        }
        goto LAB_102c143a0;
      }
    }
    uVar7 = param_1;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    uVar2 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    param_2 = *(ulong *)(lVar6 + _DAT_112effa20);
    if (*(long *)(param_2 + 0x10) == 0) {
      func_0x000107c615e8(param_1);
      func_0x000107c6142c(uVar5);
      func_0x000107c615e8(uVar1);
LAB_102c143a0:
      func_0x000107c61170(lVar6);
      return;
    }
    func_0x000107c61434(param_2);
    uVar7 = uVar5;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)(*(long *)(param_2 + 0x38) + uVar2 * 8);
      func_0x000107c615f0(lVar8);
      func_0x000107c615e8(param_1);
      func_0x000107c6142c(uVar5);
      func_0x000107c615e8(uVar1);
      func_0x000107c61170(lVar6);
      func_0x000107c6142c(param_2);
      puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
      func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
      lVar6 = lVar8;
      func_0x000107c6148c(lVar8,puVar3);
      if (lVar6 != 0) {
        return;
      }
      func_0x000107c615e8(lVar8);
      return;
    }
    func_0x000107c615e8(param_1);
    func_0x000107c6142c(uVar5);
    func_0x000107c615e8(uVar1);
    func_0x000107c61170(lVar6);
  }
LAB_102c14288:
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 102c14478; end: 102c14483; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource dataModelFor:] */

void FUN_102c14478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102c14104(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c14484; end: 102c145a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c14484(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c3b9ac();
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    lVar4 = *(long *)(unaff_x20 + _DAT_112eff780);
    func_0x000107c61428(lVar4 + 0x38,auStack_48,0x20,0);
    lVar4 = *(long *)(lVar4 + 0x38);
    if (*(long *)(lVar4 + 0x10) != 0) {
      func_0x000107c61434(lVar4);
      uVar3 = param_2;
      func_0x000100029284();
      if ((uVar3 & 1) != 0) {
        lVar1 = *(long *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
        func_0x000107c61174();
        func_0x000107c614a8(auStack_48);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(lVar4);
        lVar4 = *(long *)(lVar1 + _DAT_112effa08);
        func_0x000107c615f0(lVar4);
        func_0x000107c61170(lVar1);
        puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
        func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
        lVar1 = lVar4;
        func_0x000107c6148c(lVar4,puVar2);
        if (lVar1 != 0) {
          return;
        }
        func_0x000107c615e8(lVar4);
        return;
      }
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c614a8(auStack_48);
    func_0x000107c6142c(param_2);
  }
  return;
}



/* Entry: 102c145a4; end: 102c145af; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource dataModelForGroup:] */

void FUN_102c145a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102c14484(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c145b0; end: 102c1460f;  */

void FUN_102c145b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c14610; end: 102c14907;  */

/* WARNING: Possible PIC construction at 0x000102c147d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c148d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c147dc) */
/* WARNING: Removing unreachable block (ram,0x000102c14904) */
/* WARNING: Removing unreachable block (ram,0x000102c1482c) */
/* WARNING: Removing unreachable block (ram,0x000102c148d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c14610(long param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [40];
  
  if (param_1 != 0) {
    uVar2 = 0;
    FUN_102c17e28(0);
    lVar3 = param_1;
    func_0x000107c61480(param_1,uVar2);
    if (lVar3 != 0) {
      uVar7 = *(ulong *)(lVar3 + _DAT_112effa10);
      uVar8 = *(ulong *)(lVar3 + _DAT_112effa18);
      if ((uVar7 & 0xc000000000000001) == 0) {
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c14900);
          (*pcVar1)();
        }
        if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c14904);
          (*pcVar1)();
        }
        uVar8 = *(ulong *)(uVar7 + uVar8 * 8 + 0x20);
        func_0x000107c61174(param_1);
        func_0x000107c615f0(uVar8);
      }
      else {
        func_0x000107c61174(param_1);
        func_0x000102c16054(uVar8,uVar7);
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_112eff768);
      func_0x000107c4e23c();
      func_0x000107c61180();
      if (lVar4 == 0) {
        FUN_102c14f7c(unaff_x20 + _DAT_112eff778,*(undefined8 *)(unaff_x20 + _DAT_112eff778 + 0x18))
        ;
        FUN_102c16940(uVar8,lVar3,0);
        (*param_2)();
      }
      else {
        uVar2 = *(undefined8 *)(lVar3 + _DAT_112effa08);
        FUN_102c14ef0(unaff_x20 + _DAT_112eff778,auStack_88);
        puVar5 = &UNK_1105b2528;
        func_0x000107c613fc(&UNK_1105b2528,0x58,7);
        FUN_102c14f34(auStack_88,puVar5 + 0x10);
        *(ulong *)(puVar5 + 0x38) = uVar8;
        *(long *)(puVar5 + 0x40) = lVar3;
        *(code **)(puVar5 + 0x48) = param_2;
        *(undefined8 *)(puVar5 + 0x50) = param_3;
        puVar6 = &UNK_1105b2550;
        func_0x000107c613fc(&UNK_1105b2550,0x20,7);
        *(undefined8 *)(puVar6 + 0x10) = 0x102c14f4c;
        *(undefined **)(puVar6 + 0x18) = puVar5;
        pcStack_98 = FUN_102c14f5c;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        pcStack_a8 = FUN_102c14978;
        puStack_a0 = &UNK_1105b2568;
        puStack_90 = puVar6;
        func_0x000107c60bc4(&puStack_b8);
        puVar5 = puStack_90;
        func_0x000107c61174(param_1);
        func_0x000107c615f0(uVar2);
        func_0x000107c615f0(uVar8);
        func_0x000107c6157c(puVar6);
        func_0x000107c61574(puVar5);
        func_0x000107c4e238(lVar4);
        func_0x000107c615e8(lVar4);
      }
      goto code_r0x000107c61170;
    }
  }
  func_0x000104445474(0);
  func_0x000107c610f8();
  param_1 = 0;
  func_0x000104445210(0,0);
  (*param_2)();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c14908; end: 102c14977;  */

void FUN_102c14908(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  FUN_102c14f7c(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_102c16940(param_3,param_4,param_1);
  (*param_5)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102c14978; end: 102c149af;  */

void FUN_102c14978(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102c149b0; end: 102c14a1f; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource pageDataForDataModel:completion:] */

void FUN_102c149b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = param_3;
  uStack_40 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102c14610(param_3,0x102c14ee0,auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c14a20; end: 102c14c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c14a20(long param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  FUN_102c14104();
  if (param_1 != 0) {
    uVar2 = 0;
    FUN_102c17e28(0);
    lVar3 = param_1;
    func_0x000107c61480(param_1,uVar2);
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + _DAT_112effa10);
      uVar4 = *(ulong *)(lVar3 + _DAT_112effa18);
      if ((uVar8 & 0xc000000000000001) == 0) {
        if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c14c40);
          (*pcVar1)();
        }
        if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c14c44);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(uVar8 + uVar4 * 8 + 0x20);
        func_0x000107c615f0(uVar4);
      }
      else {
        func_0x000102c16054();
      }
      uVar8 = uVar4;
      FUN_102c18b84(uVar4);
      puVar7 = &UNK_1105b24d8;
      func_0x000107c613fc(&UNK_1105b24d8,0x28,7);
      *(code **)(puVar7 + 0x10) = param_4;
      *(undefined8 *)(puVar7 + 0x18) = param_5;
      *(undefined8 *)(puVar7 + 0x20) = 0x19;
      pcStack_60 = FUN_102c14e70;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101286f34;
      puStack_68 = &UNK_1105b24f0;
      puStack_58 = puVar7;
      func_0x000107c60bc4(&puStack_80);
      puVar7 = puStack_58;
      func_0x000102c14ed0(param_4,param_5);
      func_0x000107c61574(puVar7);
      pcVar6 = "prepareMedia(forItem:startWaitingForDownloadCallback:completion:)";
      func_0x0001000c10c0("prepareMedia(forItem:startWaitingForDownloadCallback:completion:)");
      func_0x000107c61180();
      func_0x000107c5dc64(uVar8);
      func_0x000107c615e8(pcVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(uVar4);
      func_0x000107c61170(uVar8);
      return;
    }
    func_0x000107c61170(param_1);
  }
  if (param_4 == (code *)0x0) {
    return;
  }
  FUN_102c14e30();
  puVar7 = &UNK_1105b2610;
  func_0x000107c613f8(&UNK_1105b2610,param_1,0,0);
  (*param_4)(2,puVar7,0x19);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar7);
  return;
}



/* Entry: 102c14c44; end: 102c14d3f; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_102c14c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_1105b24b0;
    func_0x000107c613fc(&UNK_1105b24b0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x102c14e24;
  }
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1105b2488;
    func_0x000107c613fc(&UNK_1105b2488,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    pcVar3 = FUN_102c14e1c;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102c14a20(param_3,uVar1,puVar2,pcVar3,puVar4);
  func_0x000100d1f590(pcVar3,puVar4);
  func_0x000100d1f590(uVar1,puVar2);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c14d40; end: 102c14d43; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource removeMediaForItem:] */

void FUN_102c14d40(void)

{
  return;
}



/* Entry: 102c14d44; end: 102c14da3; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource init] */

void FUN_102c14d44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensStoryOperaPlugin.LensStoryOperaDataSource",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c14d70);
  (*pcVar1)();
}



/* Entry: 102c14da4; end: 102c14dfb; -[_TtC22SCLensStoryOperaPlugin24LensStoryOperaDataSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c14dc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c14dc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c14da4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eff768));
  return;
}



/* Entry: 102c14dfc; end: 102c14e1b;  */

void FUN_102c14dfc(void)

{
  func_0x000107c61168(&PTR_PTR_1128971d0);
  return;
}



/* Entry: 102c14e1c; end: 102c14e2f;  */

void FUN_102c14e1c(undefined8 param_1,long param_2,undefined8 param_3)

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
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102c14e30; end: 102c14e6f;  */

void FUN_102c14e30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eff7b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db32d88;
  func_0x000107c61520(&UNK_10db32d88,&UNK_1105b2610);
  puRam0000000112eff7b0 = puVar1;
  return;
}



/* Entry: 102c14e70; end: 102c14eb3;  */

void FUN_102c14e70(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (pcVar1 == (code *)0x0) {
      return;
    }
    uVar2 = 0;
    param_2 = 0;
  }
  else {
    if (pcVar1 == (code *)0x0) {
      return;
    }
    uVar2 = 2;
  }
  (*pcVar1)(uVar2,param_2,*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102c14eb4; end: 102c14eef;  */

void FUN_102c14eb4(long param_1,long param_2)

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



/* Entry: 102c14ef0; end: 102c14f33;  */

long FUN_102c14ef0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c14f34; end: 102c14f5b;  */

undefined8 * FUN_102c14f34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102c14f5c; end: 102c14f7b;  */

void FUN_102c14f5c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c14f7c; end: 102c150af;  */

long * FUN_102c14f7c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 102c150b0; end: 102c150ef;  */

void FUN_102c150b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eff7b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db32d60;
  func_0x000107c61520(&UNK_10db32d60,&UNK_1105b2610);
  puRam0000000112eff7b8 = puVar1;
  return;
}



/* Entry: 102c150f0; end: 102c150f7;  */

void FUN_102c150f0(long param_1,long param_2)

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



/* Entry: 102c150f8; end: 102c15157; -[_TtC22SCLensStoryOperaPlugin26LensStoryOperaEventHandler init] */

void FUN_102c150f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensStoryOperaPlugin.LensStoryOperaEventHandler",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c15124);
  (*pcVar1)();
}



/* Entry: 102c15158; end: 102c1519f; -[_TtC22SCLensStoryOperaPlugin26LensStoryOperaEventHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c15184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c15188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c15158(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eff7c0));
  param_1 = param_1 + _DAT_112eff7c8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102c151a0; end: 102c151bf;  */

void FUN_102c151a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128972a8);
  return;
}



/* Entry: 102c151c0; end: 102c15277; -[_TtC22SCLensStoryOperaPlugin26LensStoryOperaEventHandler operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102c1525c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c15260) */

void FUN_102c151c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c15314(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c15278; end: 102c15313;  */

undefined8 * FUN_102c15278(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 10;
  puVar2[2] = 5;
  puVar3 = puVar2;
  func_0x000103bb9c00();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9c70();
  puVar3 = (undefined8 *)puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = puVar3;
  func_0x000107c61434();
  func_0x000103bb65d8();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[8] = *puVar3;
  puVar2[9] = puVar4;
  func_0x000107c61434();
  func_0x000103bb7f90();
  puVar3 = (undefined8 *)puVar4[1];
  puVar2[10] = *puVar4;
  puVar2[0xb] = puVar3;
  func_0x000107c61434();
  func_0x000103bb7ffc();
  uVar1 = puVar3[1];
  puVar2[0xc] = *puVar3;
  puVar2[0xd] = uVar1;
  func_0x000107c61434();
  return puVar2;
}



/* Entry: 102c15314; end: 102c15663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c15314(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long *plVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  uVar2 = 0;
  if (param_3 == 0) {
    return;
  }
  plVar7 = *(long **)(param_3 + _DAT_11307abc8);
  if (plVar7[2] == 0) {
    return;
  }
  func_0x000107c61434(plVar7);
  uVar6 = 0;
  lVar1 = -0x2fffffffffffffee;
  func_0x000100029284(0xd000000000000012);
  if ((uVar6 & 1) != 0) {
    func_0x0001000bb420(plVar7[7] + lVar1 * 0x20,auStack_60);
    func_0x000107c6142c(plVar7);
    func_0x000107c6147c(auStack_70,auStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x000107c6142c(uStack_68);
    plVar3 = (long *)(unaff_x20 + _DAT_112eff7c8);
    func_0x000107c61618();
    plVar7 = plVar3;
    FUN_102c1381c(param_3,plVar3);
    func_0x000107c615e8();
    if (param_3 == 0) {
      return;
    }
    func_0x000103bb9c00();
    if (((param_1 == (long *)*plVar3) && (param_2 == (long *)plVar3[1])) ||
       (plVar4 = param_1, plVar7 = param_2,
       func_0x000107c605b8(param_1,param_2,(long *)*plVar3,(long *)plVar3[1],0),
       ((ulong)plVar4 & 1) != 0)) {
      lVar1 = param_3;
      func_0x000107c4b450(param_3);
      func_0x000107c61180();
      lVar5 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      func_0x000102c18818(lVar5,plVar7);
      func_0x000107c6142c(plVar7);
LAB_102c15474:
      func_0x000107c615e8(param_3);
      return;
    }
    func_0x000103bb9c70();
    if (((param_1 == (long *)*plVar4) && (param_2 == (long *)plVar4[1])) ||
       (plVar3 = param_1, plVar7 = param_2,
       func_0x000107c605b8(param_1,param_2,(long *)*plVar4,(long *)plVar4[1],0),
       ((ulong)plVar3 & 1) != 0)) {
      lVar1 = param_3;
      func_0x000107c4b450(param_3);
      func_0x000107c61180();
      lVar5 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      func_0x000102c1893c(lVar5,plVar7);
    }
    else {
      func_0x000103bb65d8();
      if (((param_1 == (long *)*plVar3) && (param_2 == (long *)plVar3[1])) ||
         (plVar4 = param_1, plVar7 = param_2,
         func_0x000107c605b8(param_1,param_2,(long *)*plVar3,(long *)plVar3[1],0),
         ((ulong)plVar4 & 1) != 0)) {
        lVar1 = param_3;
        func_0x000107c4b450(param_3);
        func_0x000107c61180();
        lVar5 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        func_0x000102c18818(lVar5,plVar7);
      }
      else {
        func_0x000103bb7f90();
        if (((param_1 == (long *)*plVar4) && (param_2 == (long *)plVar4[1])) ||
           (plVar3 = param_1, plVar7 = param_2,
           func_0x000107c605b8(param_1,param_2,(long *)*plVar4,(long *)plVar4[1],0),
           ((ulong)plVar3 & 1) != 0)) {
          lVar1 = param_3;
          func_0x000107c4b450(param_3);
          func_0x000107c61180();
          lVar5 = lVar1;
          func_0x000107c5faec();
          func_0x000107c61170(lVar1);
          func_0x000102c1855c(lVar5,plVar7);
        }
        else {
          func_0x000103bb7ffc();
          if (((param_1 != (long *)*plVar3) || (param_2 != (long *)plVar3[1])) &&
             (func_0x000107c605b8(param_1,param_2,(long *)*plVar3,(long *)plVar3[1],0),
             plVar7 = param_2, ((ulong)param_1 & 1) == 0)) goto LAB_102c15474;
          lVar1 = param_3;
          func_0x000107c4b450(param_3);
          func_0x000107c61180();
          lVar5 = lVar1;
          func_0x000107c5faec();
          func_0x000107c61170(lVar1);
          func_0x000102c186e4(lVar5,plVar7);
        }
      }
    }
    func_0x000107c615e8(param_3);
  }
  func_0x000107c6142c(plVar7);
  return;
}



/* Entry: 102c15664; end: 102c156cf;  */

bool FUN_102c15664(long param_1)

{
  long unaff_x20;
  
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5bfd0();
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
  if (unaff_x20 != 0) {
    func_0x000107c615e8(unaff_x20);
  }
  return unaff_x20 != 0;
}



/* Entry: 102c156d0; end: 102c15943;  */

undefined8 FUN_102c156d0(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_68;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x10);
  uVar10 = uVar8 & 0xffffffffffffff8;
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar10 + 0x10);
  }
  else {
    uVar9 = uVar10;
    if (0x7fffffffffffffff < uVar8) {
      uVar9 = uVar8;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = 0;
  while( true ) {
    if (uVar9 == uVar11) {
      if ((ulong)puStack_68 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_68) {
          puVar5 = puStack_68;
        }
        func_0x000107c60480();
      }
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c6142c(puStack_68);
        uVar7 = 0;
      }
      else {
        if (((ulong)puStack_68 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c15944);
            (*pcVar1)();
          }
          uVar7 = *(undefined8 *)(puStack_68 + 0x20);
          func_0x000107c615f0(uVar7);
        }
        else {
          uVar7 = 0;
          func_0x000102c161f8(0,puStack_68);
        }
        func_0x000107c6142c(puStack_68);
      }
      return uVar7;
    }
    if ((uVar8 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar10 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c158d4);
        (*pcVar1)();
      }
      uVar12 = *(ulong *)(uVar8 + uVar11 * 8 + 0x20);
      func_0x000107c615f0(uVar12);
    }
    else {
      uVar12 = uVar11;
      func_0x000102c1639c(uVar11,uVar8);
    }
    if (SCARRY8(uVar11,1)) break;
    uVar6 = uVar11 + 1;
    lVar2 = param_1;
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    uVar3 = uVar12;
    func_0x000107c5bfd0();
    func_0x000107c61180();
    func_0x000107c615e8(uVar12);
    func_0x000107c615e8(lVar2);
    uVar11 = uVar11 + 1;
    if (uVar3 != 0) {
      puVar5 = puStack_68;
      func_0x000107c61550();
      if ((((int)puVar5 == 0) || ((long)puStack_68 < 0)) ||
         (puVar5 = puStack_68, ((ulong)puStack_68 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_68 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_68) {
            puVar4 = puStack_68;
          }
          func_0x000107c60480(puVar4);
        }
        puVar5 = (undefined *)0x0;
        FUN_102c166e4(0,puVar4 + 1,1,puStack_68,FUN_102c15f98,0x112eff8c0,&UNK_10db32e78);
      }
      uVar12 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar12 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
        puStack_68 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_102c166e4(puStack_68,uVar11 + 1,1,puVar5,FUN_102c15f98,0x112eff8c0,&UNK_10db32e78);
        uVar12 = (ulong)puStack_68 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
      *(ulong *)(uVar12 + uVar11 * 8 + 0x20) = uVar3;
      uVar11 = uVar6;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c158d0);
  (*pcVar1)();
}



/* Entry: 102c15944; end: 102c1594f; -[_TtC22SCLensStoryOperaPlugin37LensStoryOperaFeaturePluginAggregator storyDataModelFromFeatureStoryDataModel:] */

void FUN_102c15944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [32];
  
  puVar1 = auStack_50;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  FUN_102c156d0(auStack_50);
  func_0x000107c61574(param_1);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102c15950; end: 102c15bc3;  */

undefined8 FUN_102c15950(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_68;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x10);
  uVar10 = uVar8 & 0xffffffffffffff8;
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar10 + 0x10);
  }
  else {
    uVar9 = uVar10;
    if (0x7fffffffffffffff < uVar8) {
      uVar9 = uVar8;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = 0;
  while( true ) {
    if (uVar9 == uVar11) {
      if ((ulong)puStack_68 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_68) {
          puVar5 = puStack_68;
        }
        func_0x000107c60480();
      }
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c6142c(puStack_68);
        uVar7 = 0;
      }
      else {
        if (((ulong)puStack_68 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c15bc4);
            (*pcVar1)();
          }
          uVar7 = *(undefined8 *)(puStack_68 + 0x20);
          func_0x000107c615f0(uVar7);
        }
        else {
          uVar7 = 0;
          func_0x000102c16054(0,puStack_68);
        }
        func_0x000107c6142c(puStack_68);
      }
      return uVar7;
    }
    if ((uVar8 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar10 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c15b54);
        (*pcVar1)();
      }
      uVar12 = *(ulong *)(uVar8 + uVar11 * 8 + 0x20);
      func_0x000107c615f0(uVar12);
    }
    else {
      uVar12 = uVar11;
      func_0x000102c1639c(uVar11,uVar8);
    }
    if (SCARRY8(uVar11,1)) break;
    uVar6 = uVar11 + 1;
    lVar2 = param_1;
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    uVar3 = uVar12;
    func_0x000107c5b194();
    func_0x000107c61180();
    func_0x000107c615e8(uVar12);
    func_0x000107c615e8(lVar2);
    uVar11 = uVar11 + 1;
    if (uVar3 != 0) {
      puVar5 = puStack_68;
      func_0x000107c61550();
      if ((((int)puVar5 == 0) || ((long)puStack_68 < 0)) ||
         (puVar5 = puStack_68, ((ulong)puStack_68 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_68 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_68) {
            puVar4 = puStack_68;
          }
          func_0x000107c60480(puVar4);
        }
        puVar5 = (undefined *)0x0;
        FUN_102c166e4(0,puVar4 + 1,1,puStack_68,0x102c15fac,0x112eff8b0,&UNK_10db32f70);
      }
      uVar12 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar12 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
        puStack_68 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_102c166e4(puStack_68,uVar11 + 1,1,puVar5,0x102c15fac,0x112eff8b0,&UNK_10db32f70);
        uVar12 = (ulong)puStack_68 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
      *(ulong *)(uVar12 + uVar11 * 8 + 0x20) = uVar3;
      uVar11 = uVar6;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c15b50);
  (*pcVar1)();
}



/* Entry: 102c15bc4; end: 102c15bcf; -[_TtC22SCLensStoryOperaPlugin37LensStoryOperaFeaturePluginAggregator snapDataModelFromFeatureSnapDataModel:] */

void FUN_102c15bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [32];
  
  puVar1 = auStack_50;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  FUN_102c15950(auStack_50);
  func_0x000107c61574(param_1);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102c15bd0; end: 102c15c4b;  */

void FUN_102c15bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [32];
  
  puVar1 = auStack_50;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  (*param_4)(auStack_50);
  func_0x000107c61574(param_1);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102c15c4c; end: 102c15e83;  */

undefined8 FUN_102c15c4c(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x10);
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
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = 0;
  while( true ) {
    if (uVar9 == uVar11) {
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar4 = puVar5;
        }
        func_0x000107c60480();
      }
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c6142c(puVar5);
        uVar7 = 0;
      }
      else {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c15e84);
            (*pcVar1)();
          }
          uVar7 = *(undefined8 *)(puVar5 + 0x20);
          func_0x000107c615f0(uVar7);
        }
        else {
          uVar7 = 0;
          func_0x000102c16540(0,puVar5);
        }
        func_0x000107c6142c(puVar5);
      }
      return uVar7;
    }
    if ((uVar8 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c15e18);
        (*pcVar1)();
      }
      uVar12 = *(ulong *)(uVar8 + uVar11 * 8 + 0x20);
      func_0x000107c615f0(uVar12);
    }
    else {
      uVar12 = uVar11;
      func_0x000102c1639c(uVar11,uVar8);
    }
    if (SCARRY8(uVar11,1)) break;
    uVar10 = uVar11 + 1;
    uVar2 = uVar12;
    func_0x000107c4e23c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar12);
    uVar11 = uVar11 + 1;
    if (uVar2 != 0) {
      puVar4 = puVar5;
      func_0x000107c61550();
      if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
         (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar5 >> 0x3e == 0) {
          puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar5) {
            puVar3 = puVar5;
          }
          func_0x000107c60480(puVar3);
        }
        puVar4 = (undefined *)0x0;
        FUN_102c166e4(0,puVar3 + 1,1,puVar5,0x102c15fc0,0x112eff8a0,&UNK_10db32e58);
      }
      uVar12 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar12 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_102c166e4(puVar5,uVar11 + 1,1,puVar4,0x102c15fc0,0x112eff8a0,&UNK_10db32e58);
        uVar12 = (ulong)puVar5 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
      *(ulong *)(uVar12 + uVar11 * 8 + 0x20) = uVar2;
      uVar11 = uVar10;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c15e14);
  (*pcVar1)();
}



/* Entry: 102c15e84; end: 102c15edb; -[_TtC22SCLensStoryOperaPlugin37LensStoryOperaFeaturePluginAggregator pageDataProviderForSnapDataModel:] */

void FUN_102c15e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_102c15c4c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c15edc; end: 102c15f1f;  */

void FUN_102c15edc(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c15f20; end: 102c15f97;  */

/* WARNING: Possible PIC construction at 0x000102c15f54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c15f58) */
/* WARNING: Removing unreachable block (ram,0x000102c15f64) */
/* WARNING: Removing unreachable block (ram,0x000102c15f68) */

void FUN_102c15f20(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112eff8d0;
    plVar5 = (long *)&UNK_10db32e88;
  }
  else {
    puVar3 = (ulong *)0x112eff8d8;
    plVar5 = (long *)&UNK_10db32e90;
    unaff_x30 = 0x102c15f58;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 102c15f98; end: 102c15fd3;  */

void FUN_102c15f98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eff8c8 == (undefined *)0x0 || ((ulong)puRam0000000112eff8c8 & 1) != 0) {
    puVar1 = &UNK_10e94fb0e;
    func_0x000107c61518(&UNK_10e94fb0e,0x29,0,0);
    puRam0000000112eff8c8 = puVar1;
  }
  return;
}



/* Entry: 102c15fd4; end: 102c166e3;  */

undefined * FUN_102c15fd4(undefined *param_1,undefined *param_2,code *param_3)

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



/* Entry: 102c166e4; end: 102c1693f;  */

ulong FUN_102c166e4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c1682c);
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
  FUN_102c15fd4(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c16828);
      (*pcVar1)();
    }
    func_0x000102c1682c(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 102c16940; end: 102c1727f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_102c16940(undefined8 *****param_1,long param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 ***pppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 ***pppuVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  undefined8 ***pppuVar20;
  undefined8 *****pppppuVar21;
  undefined **ppuVar22;
  undefined1 auStack_98 [24];
  undefined8 ****ppppuStack_80;
  long lStack_78;
  undefined *puStack_68;
  
  uVar3 = 0;
  lVar19 = param_2;
  func_0x0001044410f4(0);
  uVar4 = uVar3;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c610f8(uVar3);
  func_0x000107c453e4();
  if (param_3 != 0) {
    lVar18 = *(long *)(param_3 + _DAT_113079c48);
    if (lVar18 == 0) {
      func_0x000107c61174(param_3);
    }
    else {
      func_0x000107c61174(param_3);
      lVar5 = lVar18;
      func_0x000107c61434(lVar18);
      func_0x00010018cc3c();
      func_0x000107c6142c(lVar18);
      lVar18 = lVar5;
      func_0x00010444072c(lVar5);
      func_0x000107c6142c(lVar5);
      func_0x000107c61170(lVar18);
    }
    lVar18 = *(long *)(param_3 + _DAT_113079c50);
    if (lVar18 != 0) {
      lVar5 = lVar18;
      func_0x000107c61434(lVar18);
      func_0x00010018cc3c();
      func_0x000107c6142c(lVar18);
      lVar18 = lVar5;
      func_0x00010444072c(lVar5);
      func_0x000107c6142c(lVar5);
      func_0x000107c61170(lVar18);
    }
    func_0x000107c61170(param_3);
  }
  pppppuVar21 = param_1;
  func_0x000107c4b450(param_1);
  func_0x000107c61180();
  pppppuVar6 = pppppuVar21;
  func_0x000107c5faec();
  func_0x000107c61170(pppppuVar21);
  lVar18 = lVar19;
  func_0x000104440658(pppppuVar6);
  func_0x000107c6142c(lVar19);
  func_0x000107c61170(pppppuVar6);
  pppppuVar21 = param_1;
  func_0x000107c4b40c();
  func_0x000107c61180();
  pppppuVar6 = pppppuVar21;
  func_0x000107c5faec();
  func_0x000107c61170(pppppuVar21);
  puVar15 = PTR___sSSN_11034da80;
  puStack_68 = PTR___sSSN_11034da80;
  uVar14 = 0xd000000000000012;
  ppppuStack_80 = pppppuVar6;
  lStack_78 = lVar18;
  func_0x000104440854(&ppppuStack_80,0xd000000000000012,0x800000010f0ff150);
  func_0x000107c61170();
  func_0x00010006e7f4(&ppppuStack_80);
  pppppuVar21 = param_1;
  func_0x000107c4b450();
  func_0x000107c61180();
  pppppuVar6 = pppppuVar21;
  func_0x000107c5faec();
  func_0x000107c61170(pppppuVar21);
  puStack_68 = puVar15;
  ppppuStack_80 = pppppuVar6;
  lStack_78 = uVar14;
  func_0x000104440854(&ppppuStack_80,0x6f74735f736e656c,0xed000064695f7972);
  func_0x000107c61170();
  pppppuVar21 = &ppppuStack_80;
  func_0x00010006e7f4();
  FUN_102c15f20();
  func_0x000107c613fc();
  pppppuVar21[3] = (undefined8 ****)0x2;
  pppppuVar21[2] = (undefined8 ****)0x1;
  ppppuVar7 = (undefined8 ****)0x0;
  FUN_102c1aa10();
  pppppuVar21[4] = ppppuVar7;
  uVar14 = 0x112eff980;
  puVar15 = &UNK_10db32f08;
  func_0x0001000285a8(0x112eff980,&UNK_10db32f08);
  ppuVar8 = &PTR____CFConstantStringClassReference_110f0e2b8;
  ppppuStack_80 = pppppuVar21;
  puStack_68 = (undefined *)uVar14;
  func_0x000107c5faec();
  pppppuVar21 = &ppppuStack_80;
  func_0x000104440854(pppppuVar21,ppuVar8,puVar15);
  func_0x000107c6142c(puVar15);
  func_0x000107c61170(pppppuVar21);
  func_0x00010006e7f4(&ppppuStack_80);
  lVar18 = *(long *)(unaff_x20 + 0x10);
  pppppuVar21 = param_1;
  func_0x000107c4b40c();
  func_0x000107c61180();
  pppppuVar6 = pppppuVar21;
  func_0x000107c5faec();
  func_0x000107c61170(pppppuVar21);
  lVar19 = _DAT_112effbe0;
  func_0x000107c61428(lVar18 + _DAT_112effbe0,auStack_98,0,0);
  lVar19 = *(long *)(lVar18 + lVar19);
  if (*(long *)(lVar19 + 0x10) == 0) {
    lVar18 = 1;
  }
  else {
    func_0x000107c61434(lVar19);
    ppuVar22 = ppuVar8;
    func_0x000100029284();
    if (((ulong)ppuVar22 & 1) == 0) {
      lVar18 = 1;
    }
    else {
      lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + (long)pppppuVar6 * 8);
    }
    func_0x000107c6142c(lVar19);
  }
  func_0x000107c6142c(ppuVar8);
  ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  uVar14 = 0x112d38c88;
  uVar9 = 0;
  FUN_102c172c4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar8 = &PTR____CFConstantStringClassReference_110f0bc38;
  ppppuStack_80 = ppppuVar7;
  puStack_68 = (undefined *)uVar9;
  func_0x000107c5faec();
  pppppuVar21 = &ppppuStack_80;
  func_0x000104440854(pppppuVar21,ppuVar8,uVar14);
  func_0x000107c6142c(uVar14);
  func_0x000107c61170(pppppuVar21);
  func_0x00010006e7f4(&ppppuStack_80);
  if (lVar18 == 2) {
    uVar14 = 0;
    FUN_102c172c4(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    pcVar10 = "Oops";
    uVar16 = 4;
    func_0x000107c60124("Oops",4,2);
    ppuVar22 = &PTR____CFConstantStringClassReference_110f0c8f8;
    ppuVar8 = ppuVar22;
    ppppuStack_80 = (undefined8 ****)pcVar10;
    puStack_68 = (undefined *)uVar14;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c8f8);
    pppppuVar21 = &ppppuStack_80;
    func_0x000104440854(pppppuVar21,ppuVar8,uVar16);
    func_0x000107c6142c(uVar16);
    func_0x000107c61170(pppppuVar21);
    func_0x00010006e7f4(&ppppuStack_80);
    pcVar10 = "Something is wrong!";
    uVar16 = 0x13;
    func_0x000107c60124("Something is wrong!",0x13,2);
    ppppuStack_80 = (undefined8 ****)pcVar10;
    puStack_68 = (undefined *)uVar14;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c8f8);
    pppppuVar21 = &ppppuStack_80;
    func_0x000104440854(pppppuVar21,ppuVar22,uVar16);
    func_0x000107c6142c(uVar16);
    func_0x000107c61170(pppppuVar21);
    func_0x00010006e7f4(&ppppuStack_80);
    pcVar10 = "Retry";
    uVar16 = 5;
    func_0x000107c60124("Retry",5,2);
    ppuVar8 = &PTR____CFConstantStringClassReference_110f0c938;
    ppppuStack_80 = (undefined8 ****)pcVar10;
    puStack_68 = (undefined *)uVar14;
    func_0x000107c5faec();
    pppppuVar21 = &ppppuStack_80;
    func_0x000104440854(pppppuVar21,ppuVar8,uVar16);
    func_0x000107c6142c(uVar16);
    func_0x000107c61170(pppppuVar21);
    func_0x00010006e7f4(&ppppuStack_80);
  }
  pppuVar20 = *(undefined8 ****)(param_2 + _DAT_112effa10);
  if ((ulong)pppuVar20 >> 0x3e == 0) {
    pppuVar11 = (undefined8 ***)((undefined8 ***)((ulong)pppuVar20 & 0xffffffffffffff8))[2];
  }
  else {
    pppuVar11 = (undefined8 ***)((ulong)pppuVar20 & 0xffffffffffffff8);
    if (((ulong)pppuVar20 & 0x8000000000000000) != 0) {
      pppuVar11 = pppuVar20;
    }
    func_0x000107c60480();
  }
  if (pppuVar11 != (undefined8 ***)0x0) {
    if (((ulong)pppuVar20 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)pppuVar20 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c17268);
        (*pcVar2)();
      }
      pppppuVar21 = (undefined8 *****)pppuVar20[4];
      func_0x000107c615f0(pppppuVar21);
      pppuVar11 = (undefined8 ***)ppuVar8;
    }
    else {
      pppppuVar21 = (undefined8 *****)0x0;
      pppuVar11 = pppuVar20;
      func_0x000102c16054();
    }
    pppppuVar6 = param_1;
    func_0x000107c4b40c();
    func_0x000107c61180();
    pppppuVar12 = pppppuVar6;
    func_0x000107c5faec();
    pppuVar17 = pppuVar11;
    func_0x000107c61170(pppppuVar6);
    pppppuVar6 = pppppuVar21;
    func_0x000107c4b40c();
    func_0x000107c61180();
    pppppuVar13 = pppppuVar6;
    func_0x000107c5faec();
    func_0x000107c61170(pppppuVar6);
    if ((pppppuVar12 == pppppuVar13) && (pppuVar11 == pppuVar17)) {
      func_0x000107c6142c(pppuVar11);
      func_0x000107c6142c(pppuVar17);
    }
    else {
      ppuVar8 = (undefined **)pppuVar11;
      func_0x000107c605b8(pppppuVar12,pppuVar11,pppppuVar13,pppuVar17,0);
      func_0x000107c6142c(pppuVar11);
      func_0x000107c6142c(pppuVar17);
      if (((ulong)pppppuVar12 & 1) == 0) {
        func_0x000107c615e8(pppppuVar21);
        goto LAB_102c16ff4;
      }
    }
    ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    ppppuStack_80 = ppppuVar7;
    puStack_68 = (undefined *)uVar9;
    func_0x000102c1aa3c();
    ppuVar8 = (undefined **)*ppppuVar7;
    pppuVar11 = ppppuVar7[1];
    func_0x000107c61434(pppuVar11);
    pppppuVar6 = &ppppuStack_80;
    func_0x000104440854(pppppuVar6,ppuVar8,pppuVar11);
    func_0x000107c6142c(pppuVar11);
    func_0x000107c61170(pppppuVar6);
    func_0x000107c615e8(pppppuVar21);
    func_0x00010006e7f4(&ppppuStack_80);
  }
LAB_102c16ff4:
  if ((ulong)pppuVar20 >> 0x3e == 0) {
    pppuVar11 = (undefined8 ***)((undefined8 ***)((ulong)pppuVar20 & 0xffffffffffffff8))[2];
    if (pppuVar11 == (undefined8 ***)0x0) {
      pppppuVar21 = (undefined8 *****)0x0;
      goto LAB_102c17164;
    }
  }
  else {
    pppuVar11 = (undefined8 ***)((ulong)pppuVar20 & 0xffffffffffffff8);
    if (((ulong)pppuVar20 & 0x8000000000000000) != 0) {
      pppuVar11 = pppuVar20;
    }
    func_0x000107c60480();
    pppppuVar21 = (undefined8 *****)0x0;
    if (pppuVar11 == (undefined8 ***)0x0) goto LAB_102c17164;
  }
  pppppuVar21 = (undefined8 *****)((long)pppuVar11 - 1);
  if (SBORROW8((long)pppuVar11,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c17264);
    (*pcVar2)();
  }
  if (((ulong)pppuVar20 & 0xc000000000000001) == 0) {
    if ((long)pppppuVar21 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c1727c);
      (*pcVar2)();
    }
    if (*(undefined8 ******)(((ulong)pppuVar20 & 0xffffffffffffff8) + 0x10) <= pppppuVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c17280);
      (*pcVar2)();
    }
    pppppuVar21 = (undefined8 *****)pppuVar20[(long)pppuVar11 + 3];
    func_0x000107c615f0(pppppuVar21);
    pppuVar20 = (undefined8 ***)ppuVar8;
  }
  else {
    func_0x000102c16054();
  }
  func_0x000107c4b40c();
  func_0x000107c61180();
  pppppuVar6 = param_1;
  func_0x000107c5faec();
  pppuVar11 = pppuVar20;
  func_0x000107c61170(param_1);
  pppppuVar12 = pppppuVar21;
  func_0x000107c4b40c();
  func_0x000107c61180();
  pppppuVar13 = pppppuVar12;
  func_0x000107c5faec();
  func_0x000107c61170(pppppuVar12);
  if ((pppppuVar6 == pppppuVar13) && (pppuVar20 == pppuVar11)) {
    func_0x000107c6142c(pppuVar20);
    func_0x000107c6142c(pppuVar11);
  }
  else {
    func_0x000107c605b8(pppppuVar6,pppuVar20,pppppuVar13,pppuVar11,0);
    func_0x000107c6142c(pppuVar20);
    func_0x000107c6142c(pppuVar11);
    if (((ulong)pppppuVar6 & 1) == 0) {
      func_0x000107c615e8(pppppuVar21);
      goto LAB_102c17164;
    }
  }
  ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  ppppuStack_80 = ppppuVar7;
  puStack_68 = (undefined *)uVar9;
  func_0x000102c1aa30();
  pppuVar20 = *ppppuVar7;
  pppuVar11 = ppppuVar7[1];
  func_0x000107c61434(pppuVar11);
  pppppuVar6 = &ppppuStack_80;
  func_0x000104440854(pppppuVar6,pppuVar20,pppuVar11);
  func_0x000107c6142c(pppuVar11);
  func_0x000107c61170(pppppuVar6);
  func_0x000107c615e8(pppppuVar21);
  pppppuVar21 = &ppppuStack_80;
  func_0x00010006e7f4(pppppuVar21);
LAB_102c17164:
  func_0x000104440b54();
  ppppuStack_80 = (undefined8 ****)0x0;
  func_0x000107c5f9e4();
  func_0x000107c61170(pppppuVar21);
  ppppuVar7 = ppppuStack_80;
  func_0x000104440b54();
  ppppuStack_80 = (undefined8 ****)0x0;
  func_0x000107c5f9e4();
  func_0x000107c61170(pppppuVar21);
  ppppuVar1 = ppppuStack_80;
  uVar14 = 0;
  func_0x000104445474(0);
  func_0x000107c610f8();
  func_0x000104445210(ppppuVar7,ppppuVar1,uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  return ppppuVar7;
}



/* Entry: 102c17280; end: 102c172c3;  */

void FUN_102c17280(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c172c4; end: 102c17303;  */

void FUN_102c172c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102c17304; end: 102c1732f; -[_TtC22SCLensStoryOperaPlugin20LensStoryOperaPlugin type] */

void FUN_102c17304(void)

{
  func_0x000107c5fadc(0x726f7453736e654c,0xe900000000000079);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c17330; end: 102c1734f; -[_TtC22SCLensStoryOperaPlugin20LensStoryOperaPlugin playlistDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c17330(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eff988));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c17350; end: 102c173ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c17350(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112eff7d0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112eff990);
  func_0x000107c61604(lVar3 + _DAT_112eff7d0,param_1);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    FUN_102c15278();
    lVar2 = lVar1;
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
    func_0x000107c3d744(lVar3);
    func_0x000107c615e8(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102c173f0; end: 102c17437; -[_TtC22SCLensStoryOperaPlugin20LensStoryOperaPlugin addEventListenersWithEventAnnouncing:] */

void FUN_102c173f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102c17350(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c17438; end: 102c1748f; -[_TtC22SCLensStoryOperaPlugin20LensStoryOperaPlugin setPlaylistItemController:] */

/* WARNING: Possible PIC construction at 0x000102c1746c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c17470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c17438(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (*(long *)(param_1 + _DAT_112eff990) + _DAT_112eff7c8,param_3);
  return;
}



/* Entry: 102c17490; end: 102c17493; -[_TtC22SCLensStoryOperaPlugin20LensStoryOperaPlugin teardown] */

void FUN_102c17490(void)

{
  return;
}



/* Entry: 102c17494; end: 102c174f3; -[_TtC22SCLensStoryOperaPlugin20LensStoryOperaPlugin init] */

void FUN_102c17494(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensStoryOperaPlugin.LensStoryOperaPlugin",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c174c0);
  (*pcVar1)();
}



/* Entry: 102c174f4; end: 102c1753b; -[_TtC22SCLensStoryOperaPlugin20LensStoryOperaPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c17510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c17514) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c174f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eff988));
  return;
}



/* Entry: 102c1753c; end: 102c1755b;  */

void FUN_102c1753c(void)

{
  func_0x000107c61168(&PTR_PTR_112897378);
  return;
}



/* Entry: 102c1755c; end: 102c1761b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1755c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112eff9c8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112eff9d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c1761c; end: 102c17883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c1761c(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar12 = &lStack_80;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112eff9c8);
  lVar3 = 0;
  func_0x000102c15f00();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar13;
  uVar4 = 0;
  FUN_102c19454();
  func_0x000107c610f8();
  func_0x000107c61434(uVar13);
  func_0x000107c453e4();
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112eff9d0);
  func_0x000107c4b354();
  func_0x000107c61180();
  lVar5 = 0;
  func_0x000102c1902c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar13;
  *(undefined8 *)(lVar5 + 0x18) = uVar4;
  *(undefined ***)(lVar5 + 0x20) = &PTR_DAT_1105b28d8;
  lVar6 = 0;
  func_0x000102c172a4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar4;
  *(undefined ***)(lVar6 + 0x18) = &PTR_DAT_1105b28d8;
  func_0x000102c18aa4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  lVar7 = lVar5;
  func_0x000107c6157c();
  func_0x000102c17bf0();
  func_0x000107c61574(lVar5);
  func_0x000107c6157c(lVar5);
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(lVar6);
  func_0x000107c6157c(lVar7);
  lVar8 = lVar3;
  func_0x000102c17aa4(lVar3,lVar5,lVar6,lVar7);
  lVar9 = 0;
  FUN_102c151a0();
  lVar10 = lVar9;
  func_0x000107c610f8();
  func_0x000107c61614(lVar10 + _DAT_112eff7c8,0);
  func_0x000107c61614(lVar10 + _DAT_112eff7d0,0);
  plVar11 = (long *)(lVar10 + _DAT_112eff7c0);
  *plVar11 = lVar7;
  plVar11[1] = (long)&PTR_DAT_1105b26f0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar10;
  lStack_68 = lVar9;
  func_0x000107c6157c(lVar7);
  plVar11 = &lStack_70;
  func_0x000107c61154(plVar11,puVar2);
  lVar9 = 0;
  FUN_102c1753c();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(long *)(lVar10 + _DAT_112eff988) = lVar8;
  plVar1 = (long *)(lVar10 + _DAT_112eff990);
  *plVar1 = (long)plVar11;
  plVar1[1] = (long)&PTR_DAT_1105b2680;
  plVar11 = (long *)(lVar10 + _DAT_112eff998);
  *plVar11 = lVar7;
  plVar11[1] = (long)&PTR_DAT_1105b26f0;
  lStack_80 = lVar10;
  lStack_78 = lVar9;
  func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
  func_0x000107c61574(lVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(lVar6);
  return (undefined1 *)plVar12;
}



/* Entry: 102c17884; end: 102c178c7;  */

void FUN_102c17884(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eff9d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_102c1753c(0xff);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112eff9d8 = puVar2;
  return;
}



/* Entry: 102c178c8; end: 102c179db; -[_TtC22SCLensStoryOperaPlugin31LensStoryOperaPluginRegistrator registerPlaylistPluginsWithContext:] */

void FUN_102c178c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_90 [10];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c1761c();
  lVar2 = 0x112d6aae0;
  func_0x0001000285a8(0x112d6aae0,&UNK_10d92e060);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = 0;
  auStack_90[0] = uVar1;
  FUN_102c1753c(0);
  uVar4 = uVar3;
  FUN_102c17884();
  func_0x000107c61174(uVar1);
  func_0x000107c602d4(lVar2 + 0x20,auStack_90,uVar3,uVar4);
  lVar5 = lVar2;
  func_0x00010090a6c0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x0001007bbff0(lVar2 + 0x20);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  lVar2 = lVar5;
  func_0x000107c5fe08(lVar5,PTR___ss11AnyHashableVN_11034e448,PTR___ss11AnyHashableVSHsWP_11034e450)
  ;
  func_0x000107c6142c(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 102c179dc; end: 102c17a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c179dc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eff9c8);
  *(undefined8 *)(unaff_x20 + _DAT_112eff9c8) = param_1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102c17a0c; end: 102c17a6b; -[_TtC22SCLensStoryOperaPlugin31LensStoryOperaPluginRegistrator init] */

void FUN_102c17a0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensStoryOperaPlugin.LensStoryOperaPluginRegistrator",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c17a38);
  (*pcVar1)();
}



/* Entry: 102c17a6c; end: 102c17aa3; -[_TtC22SCLensStoryOperaPlugin31LensStoryOperaPluginRegistrator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c17a6c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eff9d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eff9c8));
  return;
}



/* Entry: 102c17aa4; end: 102c17d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102c17aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar5;
  long alStack_b0 [5];
  long lStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar1 = 0;
  func_0x000102c172a4();
  ppuStack_58 = &PTR_DAT_1105b26b8;
  lVar2 = 0;
  auStack_78[0] = param_3;
  lStack_60 = lVar1;
  FUN_102c14dfc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_78,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  alStack_b0[2] = *puVar5;
  ppuStack_80 = &PTR_DAT_1105b26b8;
  *(undefined8 *)(lVar3 + _DAT_112eff768) = param_1;
  puVar5 = (undefined8 *)(lVar3 + _DAT_112eff770);
  *puVar5 = param_2;
  puVar5[1] = &PTR_DAT_1105b2748;
  lStack_88 = lVar1;
  FUN_102c14ef0(alStack_b0 + 2,lVar3 + _DAT_112eff778);
  puVar5 = (undefined8 *)(lVar3 + _DAT_112eff780);
  *puVar5 = param_4;
  puVar5[1] = &PTR_DAT_1105b26f0;
  plVar4 = alStack_b0;
  alStack_b0[0] = lVar3;
  alStack_b0[1] = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_b0 + 2);
  func_0x0001000834e4(auStack_78);
  return plVar4;
}



/* Entry: 102c17d30; end: 102c17d4f;  */

void FUN_102c17d30(void)

{
  func_0x000107c61168(&PTR_PTR_112897448);
  return;
}



/* Entry: 102c17d50; end: 102c17d57;  */

void FUN_102c17d50(void)

{
  FUN_102c18198();
  return;
}



/* Entry: 102c17d58; end: 102c17d7f;  */

void FUN_102c17d58(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 102c17d80; end: 102c17ddf; -[_TtC22SCLensStoryOperaPlugin27LensStoryOperaPlaybackGroup init] */

void FUN_102c17d80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensStoryOperaPlugin.LensStoryOperaPlaybackGroup",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c17dac);
  (*pcVar1)();
}



/* Entry: 102c17de0; end: 102c17e27; -[_TtC22SCLensStoryOperaPlugin27LensStoryOperaPlaybackGroup .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c17e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c17e10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c17de0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112effa08));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112effa10));
  return;
}



/* Entry: 102c17e28; end: 102c17e47;  */

void FUN_102c17e28(void)

{
  func_0x000107c61168(&PTR_PTR_112897510);
  return;
}



/* Entry: 102c17e48; end: 102c18177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c17e48(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_78 [16];
  undefined *puStack_68;
  
  func_0x000107c614f0();
  *(ulong *)(unaff_x20 + _DAT_112effa08) = param_1;
  uVar5 = param_1;
  func_0x000107c615f0();
  func_0x000107c5b538();
  func_0x000107c61180();
  uVar6 = 0x112eff8b0;
  func_0x0001000285a8(0x112eff8b0,&UNK_10db32f70);
  uVar14 = uVar5;
  func_0x000107c5fc54(uVar5,uVar6);
  func_0x000107c61170(uVar5);
  *(ulong *)(unaff_x20 + _DAT_112effa10) = uVar14;
  func_0x000107c5b538();
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  if (uVar5 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    puVar13 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar14 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar14 = uVar5;
    }
    func_0x000107c60480();
    puVar13 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar13;
  if (uVar14 != 0) {
    uVar16 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102c180e4);
          (*pcVar4)();
        }
        uVar17 = *(ulong *)(uVar5 + uVar16 * 8 + 0x20);
        func_0x000107c615f0(uVar17);
        uVar10 = uVar6;
      }
      else {
        uVar17 = uVar16;
        uVar10 = uVar5;
        func_0x000102c16054();
      }
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c180e0);
        (*pcVar4)();
      }
      uVar15 = uVar16 + 1;
      uVar6 = uVar17;
      func_0x000107c4b40c();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      func_0x000107c615f0(uVar17);
      puVar8 = puVar13;
      func_0x000107c61558();
      uVar9 = uVar7;
      uVar6 = uVar10;
      puStack_68 = puVar13;
      func_0x000100029284();
      uVar11 = (ulong)~(uint)uVar6 & 1;
      lVar1 = *(long *)(puVar13 + 0x10) + uVar11;
      if (SCARRY8(*(long *)(puVar13 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c180e8);
        (*pcVar4)();
      }
      if (*(long *)(puVar13 + 0x18) < lVar1) {
        FUN_102c19b54(lVar1,puVar8);
        uVar9 = uVar7;
        uVar11 = uVar10;
        func_0x000100029284();
        if (((uint)uVar6 & 1) != ((uint)uVar11 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102c18178);
          (*pcVar4)();
        }
joined_r0x000102c180d4:
        uVar3 = uVar6 & 1;
        uVar6 = uVar11;
        if (uVar3 != 0) goto LAB_102c17f40;
LAB_102c18060:
        puVar13 = puStack_68;
        *(ulong *)(puStack_68 + (uVar9 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_68 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puStack_68 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar7;
        puVar2[1] = uVar10;
        *(ulong *)(*(long *)(puStack_68 + 0x38) + uVar9 * 8) = uVar17;
        func_0x000107c615e8(uVar17);
        if (SCARRY8(*(long *)(puVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102c180ec);
          (*pcVar4)();
        }
        *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + 1;
        uVar6 = uVar11;
      }
      else {
        uVar11 = uVar6;
        if (((ulong)puVar8 & 1) == 0) {
          func_0x000102c1970c();
          goto joined_r0x000102c180d4;
        }
        if ((uVar6 & 1) == 0) goto LAB_102c18060;
LAB_102c17f40:
        puVar13 = puStack_68;
        uVar12 = *(undefined8 *)(*(long *)(puStack_68 + 0x38) + uVar9 * 8);
        *(ulong *)(*(long *)(puStack_68 + 0x38) + uVar9 * 8) = uVar17;
        func_0x000107c6142c(uVar10);
        func_0x000107c615e8(uVar17);
        func_0x000107c615e8(uVar12);
      }
      uVar16 = uVar16 + 1;
    } while (uVar15 != uVar14);
  }
  func_0x000107c6142c(uVar5);
  *(undefined **)(unaff_x20 + _DAT_112effa20) = puVar13;
  *(undefined8 *)(unaff_x20 + _DAT_112effa18) = param_2;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c18178; end: 102c18197;  */

void FUN_102c18178(void)

{
  FUN_102c18198();
  return;
}



/* Entry: 102c18198; end: 102c183cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c18198(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x38,auStack_78,0,0);
  lVar14 = *(long *)(unaff_x20 + 0x38);
  puVar8 = (ulong *)(lVar14 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar9 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar9 = uVar9 & *puVar8;
  func_0x000107c61438(lVar14,2);
  lVar12 = 0;
  lVar2 = lVar12;
  uVar1 = uVar9;
  while( true ) {
    while (uVar10 = uVar1, lVar13 = lVar2, uVar9 != 0) {
      uVar1 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 - 1 & uVar9;
      uVar5 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) | lVar12 << 6;
      lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + uVar5 * 8);
      lVar7 = *(long *)(lVar11 + _DAT_112effa20);
      lVar2 = lVar12;
      uVar1 = uVar9;
      if (*(long *)(lVar7 + 0x10) != 0) {
        uVar15 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar5 * 0x10 + 8);
        func_0x000107c61434(uVar15);
        func_0x000107c61174();
        func_0x000107c61434(lVar7);
        uVar5 = param_2;
        func_0x000100029284(param_1);
        if ((uVar5 & 1) != 0) {
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar7);
          FUN_102c18ac4(lVar14,puVar8,~uVar6,lVar13,uVar10);
          func_0x000107c6142c(uVar15);
          lVar14 = unaff_x20 + 0x30;
          func_0x000107c61618();
          if (lVar14 != 0) {
            lVar12 = *(long *)(lVar11 + _DAT_112effa08);
            func_0x000107c4b450();
            func_0x000107c61180();
            if (lVar12 == 0) {
              func_0x000107c5faec();
              func_0x000107c5fadc();
              func_0x000107c6142c(puVar8);
            }
            func_0x000107c4e9d0(lVar14);
            func_0x000107c615e8(lVar14);
            func_0x000107c61170(lVar12);
          }
          func_0x000107c61170(lVar11);
          return;
        }
        func_0x000107c61170(lVar11);
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(lVar7);
      }
    }
    bVar4 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar6 >> 6) <= lVar12) {
      func_0x000107c6142c(lVar14);
      FUN_102c18ac4(lVar14,puVar8,~uVar6,lVar13,0);
      return;
    }
    uVar9 = puVar8[lVar12];
    lVar2 = lVar13;
    uVar1 = uVar10;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102c183d0);
  (*pcVar3)();
}



/* Entry: 102c183d0; end: 102c186e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c183d0(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar7 = *(long *)(param_1 + _DAT_112effa08);
  lVar1 = lVar7;
  func_0x000107c4b450();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  puVar4 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x38,puVar4,0x20,0);
  puVar6 = *(undefined1 **)(unaff_x20 + 0x38);
  if (*(long *)(puVar6 + 0x10) != 0) {
    func_0x000107c61434(puVar6);
    puVar4 = param_2;
    func_0x000100029284();
    if (((ulong)puVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(puVar6 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar3);
      func_0x000107c614a8(auStack_58);
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(puVar6);
      return;
    }
    func_0x000107c6142c(param_2);
    param_2 = puVar6;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c614a8(auStack_58);
  func_0x000107c4b450(lVar7);
  func_0x000107c61180();
  lVar1 = lVar7;
  func_0x000107c5faec();
  func_0x000107c61170(lVar7);
  func_0x000107c61428(unaff_x20 + 0x38,auStack_58,0x21,0);
  func_0x000107c61174(param_1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61558(uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0x8000000000000000;
  FUN_102c19474(param_1,lVar1,puVar4,uVar3);
  func_0x000107c6142c(puVar4);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar5;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102c186e4; end: 102c18a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c186e4(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x38,auStack_48,0x20,0);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    func_0x000100029284();
    if ((param_2 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(lVar6 + 0x38) + param_1 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_48);
      func_0x000107c6142c(lVar6);
      uVar5 = *(ulong *)(lVar2 + _DAT_112effa18);
      if (0 < (long)uVar5) {
        lVar6 = uVar5 - 1;
        *(long *)(lVar2 + _DAT_112effa18) = lVar6;
        uVar4 = *(ulong *)(lVar2 + _DAT_112effa10);
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) < uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c18818);
            (*pcVar1)();
          }
          lVar6 = *(long *)(uVar4 + lVar6 * 8 + 0x20);
          func_0x000107c615f0(lVar6);
        }
        else {
          func_0x000102c16054();
        }
        lVar3 = lVar6;
        FUN_102c18c78(lVar6);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(lVar6);
        lVar2 = lVar3;
      }
      func_0x000107c61170(lVar2);
      return;
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 102c18a60; end: 102c18ac3;  */

void FUN_102c18a60(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000101c858d8(unaff_x20 + 0x30);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c18ac4; end: 102c18ad3;  */

void FUN_102c18ac4(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102c18ad4; end: 102c18b73;  */

void FUN_102c18ad4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102c18b74; end: 102c18b83;  */

void FUN_102c18b74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102c18b84; end: 102c18c77;  */

undefined * FUN_102c18b84(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar3 = puVar2;
    func_0x000102c1904c();
    puVar1 = &UNK_1105b2860;
    func_0x000107c613f8(&UNK_1105b2860,puVar3,0,0);
    param_1 = puVar1;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar1);
    func_0x000107c451ac(puVar2);
    func_0x000107c61180();
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    puVar2 = puVar1;
    func_0x000107c4ed1c(puVar1);
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102c18c78; end: 102c18eeb;  */

undefined * FUN_102c18c78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar7 = puVar6;
    func_0x000102c1904c();
    puVar8 = &UNK_1105b2860;
    func_0x000107c613f8(&UNK_1105b2860,puVar7,0,0);
    puVar7 = puVar8;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar8);
    func_0x000107c451ac(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
  }
  else {
    lVar2 = param_1;
    func_0x000107c4b40c(param_1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    uVar9 = param_2;
    FUN_102c1926c(lVar3,param_2,1);
    func_0x000107c6142c(param_2);
    puVar8 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar2 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar9);
    }
    lVar3 = lVar1;
    func_0x000107c3d084(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    puVar6 = &UNK_1105b2778;
    func_0x000107c613fc(&UNK_1105b2778,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar7 = &UNK_1105b27a0;
    func_0x000107c613fc(&UNK_1105b27a0,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar8;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    *(long *)(puVar7 + 0x20) = param_1;
    pcStack_60 = FUN_102c1908c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101286f34;
    puStack_68 = &UNK_1105b27b8;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000107c61174(puVar8);
    func_0x000107c615f0(param_1);
    func_0x000107c61574(puVar6);
    pcVar5 = "loadSnap(_:)";
    func_0x0001000c10c0("loadSnap(_:)");
    func_0x000107c61180();
    func_0x000107c5dc64(lVar3);
    func_0x000107c615e8(pcVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar3);
    puVar6 = puVar8;
    func_0x000107c43bf4(puVar8);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar8);
  }
  return puVar6;
}



/* Entry: 102c18eec; end: 102c18fff;  */

void FUN_102c18eec(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  if (param_2 == 0) {
    func_0x000107c3fefc(param_3,0,param_1);
  }
  else {
    func_0x000107c614b0(param_2);
    lVar2 = param_2;
    func_0x000107c5ed2c(param_2);
    func_0x000107c3fef8(param_3);
    func_0x000107c61170(lVar2);
    func_0x000107c614ac(param_2);
  }
  puVar4 = auStack_58;
  func_0x000107c61428(param_4 + 0x10,puVar4,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 2;
    }
    uVar5 = *(undefined8 *)(param_4 + 0x18);
    func_0x000107c615f0(uVar5);
    func_0x000107c4b40c(param_5);
    func_0x000107c61180();
    uVar3 = param_5;
    func_0x000107c5faec();
    func_0x000107c61170(param_5);
    FUN_102c1926c(uVar3,puVar4,uVar1);
    func_0x000107c61574(param_4);
    func_0x000107c615e8(uVar5);
    func_0x000107c6142c(puVar4);
  }
  return;
}



/* Entry: 102c19000; end: 102c1908b;  */

void FUN_102c19000(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c1908c; end: 102c191a3;  */

void FUN_102c1908c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_2 == 0) {
    func_0x000107c3fefc(uVar1,0,param_1);
  }
  else {
    func_0x000107c614b0(param_2);
    lVar2 = param_2;
    func_0x000107c5ed2c(param_2);
    func_0x000107c3fef8(uVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c614ac(param_2);
  }
  puVar5 = auStack_58;
  func_0x000107c61428(lVar3 + 0x10,puVar5,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 2;
    }
    uVar7 = *(undefined8 *)(lVar3 + 0x18);
    func_0x000107c615f0(uVar7);
    func_0x000107c4b40c(uVar6);
    func_0x000107c61180();
    uVar4 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    FUN_102c1926c(uVar4,puVar5,uVar1);
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(uVar7);
    func_0x000107c6142c(puVar5);
  }
  return;
}



/* Entry: 102c191a4; end: 102c191e3;  */

void FUN_102c191a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112effbd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db33074;
  func_0x000107c61520(&UNK_10db33074,&UNK_1105b2860);
  puRam0000000112effbd8 = puVar1;
  return;
}



/* Entry: 102c191e4; end: 102c1926b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c191e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112effbe8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112effbe8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = 0x112ea35b0;
    func_0x0001000285a8(0x112ea35b0,&UNK_10db33120);
    func_0x000107c613fc();
    func_0x0001000c2754();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 102c1926c; end: 102c1938b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1926c(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_80;
  ulong uStack_78;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112effbe0;
  func_0x000107c61428(unaff_x20 + _DAT_112effbe0,auStack_68,0,0);
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
      func_0x000107c6142c(lVar6);
      if (lVar7 == param_3) {
        return;
      }
    }
  }
  func_0x000107c61428(unaff_x20 + lVar1,&lStack_80,0x21,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar2);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  func_0x000102c195c4(param_3,param_1,param_2,uVar2);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  plVar3 = &lStack_80;
  func_0x000107c614a8(plVar3);
  FUN_102c191e4();
  lStack_80 = param_1;
  uStack_78 = param_2;
  func_0x0001002a64a8(&lStack_80);
  func_0x000107c61574(plVar3);
  return;
}



/* Entry: 102c1938c; end: 102c193eb; -[_TtC22SCLensStoryOperaPlugin39LensStoryOperaSnapsLoadingStatesManager init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1938c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = _DAT_112effbe0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102c1a420();
  *(undefined **)(param_1 + lVar1) = puVar2;
  *(undefined8 *)(param_1 + _DAT_112effbe8) = 0;
  FUN_102c19454();
  lStack_30 = param_1;
  puStack_28 = puVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c193ec; end: 102c1941b;  */

void FUN_102c193ec(void)

{
  FUN_102c19454();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


