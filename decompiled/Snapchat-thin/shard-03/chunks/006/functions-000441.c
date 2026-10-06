/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b313a0; end: 102b313bf;  */

void FUN_102b313a0(void)

{
  FUN_102b31240();
  return;
}



/* Entry: 102b313c0; end: 102b313df;  */

void FUN_102b313c0(void)

{
  func_0x000107c61168(&PTR_PTR_11288bfc0);
  return;
}



/* Entry: 102b313e0; end: 102b3142b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b313e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef4ff8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b3142c; end: 102b31553;  */

/* WARNING: Possible PIC construction at 0x000102b314f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3150c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3151c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b314f4) */
/* WARNING: Removing unreachable block (ram,0x000102b31510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3142c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef4ff8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c4b554();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar1 = -0x2fffffffffffffef;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f0f1ad0);
    func_0x000107c614cc(param_1,auStack_48,auStack_60);
    uVar3 = uStack_50;
    func_0x000107c60640(uStack_58,uStack_50);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
    func_0x000107c5e508(param_2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102b31554; end: 102b315b3; -[_TtC29LensCarouselFeaturesWorkflows23LensViewsGrapheneLogger init] */

void FUN_102b31554(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensViewsGrapheneLogger",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b31580);
  (*pcVar1)();
}



/* Entry: 102b315b4; end: 102b315c3; -[_TtC29LensCarouselFeaturesWorkflows23LensViewsGrapheneLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b315b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef4ff8));
  return;
}



/* Entry: 102b315c4; end: 102b3167b;  */

void FUN_102b315c4(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c8e20;
  func_0x000107c61168();
  func_0x000107c4b72c();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    FUN_102b3142c(param_1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b31620);
  (*pcVar1)();
}



/* Entry: 102b3167c; end: 102b3169b;  */

void FUN_102b3167c(void)

{
  func_0x000107c61168(&PTR_PTR_11288c080);
  return;
}



/* Entry: 102b3169c; end: 102b316f7; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarFavoritesPlugin init] */

void FUN_102b3169c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensActionBarFavoritesPlugin",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b316c8);
  (*pcVar1)();
}



/* Entry: 102b316f8; end: 102b317ef; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarFavoritesPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b316f8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef5028));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef5030));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef5038));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef5040));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef5048));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef5050));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef5058));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef5060));
  func_0x0001000834e4(param_1 + _DAT_112ef5068);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef5070));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef5078));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef5080));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef5088));
  param_1 = param_1 + _DAT_112ef5090;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102b317f0; end: 102b3180f;  */

void FUN_102b317f0(void)

{
  func_0x000107c61168(&PTR_PTR_11288c140);
  return;
}



/* Entry: 102b31810; end: 102b3189f;  */

void FUN_102b31810(byte param_1,long param_2,byte param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_1 != 2) && ((param_3 & 1) != (param_1 & 1))) {
      FUN_102b318a0((param_1 ^ 0xff) & 1,param_4);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102b318a0; end: 102b31c33;  */

/* WARNING: Possible PIC construction at 0x000102b318fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b31918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b31a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b319a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b31a3c) */
/* WARNING: Removing unreachable block (ram,0x000102b31900) */
/* WARNING: Removing unreachable block (ram,0x000102b319a4) */
/* WARNING: Removing unreachable block (ram,0x000102b31ac8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b318a0(uint param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  uVar2 = param_2;
  uVar9 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (uVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
  }
  else {
    uVar3 = uVar2;
    func_0x000107c5faec();
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar1 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c61174(uVar2);
    }
    else {
      lVar10 = *(long *)(unaff_x20 + _DAT_112ef5058);
      func_0x000107c61174(uVar2);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 != 0) {
        FUN_102b3328c(param_2,param_1 & 1);
        lVar4 = lVar10;
        if ((param_1 & 1) == 0) {
          func_0x000107c61170(uVar2);
          func_0x000107c5d214(lVar10);
        }
        else {
          func_0x000107c61170(uVar2);
          func_0x000107c42e0c(lVar10);
        }
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        puVar5 = &UNK_11059f7a0;
        func_0x000107c613fc(&UNK_11059f7a0,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        puVar6 = &UNK_11059f8b8;
        func_0x000107c613fc(&UNK_11059f8b8,0x30,7);
        *(ulong *)(puVar6 + 0x10) = uVar3;
        *(ulong *)(puVar6 + 0x18) = uVar9;
        *(undefined **)(puVar6 + 0x20) = puVar5;
        *(ulong *)(puVar6 + 0x28) = param_2;
        uStack_70 = 0x102b33e54;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1019eb2e0;
        puStack_78 = &UNK_11059f8d0;
        puStack_68 = puVar6;
        func_0x000107c60bc4(&puStack_90);
        puVar5 = puStack_68;
        func_0x000107c61174(param_2);
        func_0x000107c61574(puVar5);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ef5070);
        func_0x000107c4c18c(uVar8);
        func_0x000107c61180();
        func_0x000107c5dc68(lVar4);
        func_0x000107c615e8(uVar8);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(lVar4);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar9);
  return;
}



/* Entry: 102b31c34; end: 102b31daf;  */

/* WARNING: Possible PIC construction at 0x000102b31cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b31d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b31cc4) */
/* WARNING: Removing unreachable block (ram,0x000102b31d7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b31c34(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef5050);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4b138();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b31db0; end: 102b31e17; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarFavoritesPlugin lensActionBar:didTapActionItemForLens:] */

/* WARNING: Possible PIC construction at 0x000102b31e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b31e04) */

void FUN_102b31db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102b33b10(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102b31e18; end: 102b31e63; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarFavoritesPlugin lensActionBar:willActivateForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b31e18(undefined8 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = 1;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b31e64; end: 102b31ff3; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarFavoritesPlugin lensActionBar:shouldShowActionFutureForLens:] */

void FUN_102b31e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  FUN_102b33bf4(param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b31ff4; end: 102b32033;  */

void FUN_102b31ff4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 102b32034; end: 102b32067; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarFavoritesPlugin actionBarItem] */

void FUN_102b32034(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b31ed8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b32068; end: 102b323a7;  */

/* WARNING: Possible PIC construction at 0x000102b32214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3224c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b32234) */
/* WARNING: Removing unreachable block (ram,0x000102b32218) */
/* WARNING: Removing unreachable block (ram,0x000102b32254) */
/* WARNING: Removing unreachable block (ram,0x000102b32238) */
/* WARNING: Removing unreachable block (ram,0x000102b3225c) */
/* WARNING: Removing unreachable block (ram,0x000102b3221c) */
/* WARNING: Removing unreachable block (ram,0x000102b32250) */
/* WARNING: Removing unreachable block (ram,0x000102b32260) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b32068(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef5048);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ef5068 + 0x18);
    lVar2 = *(long *)(unaff_x20 + _DAT_112ef5068 + 0x20);
    param_2 = uVar1;
    func_0x0001000a8868();
    func_0x000107c61174();
    lVar3 = unaff_x20;
    func_0x000107c417f0();
    func_0x000107c61180();
    func_0x000107c5faec();
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(lVar3);
    uStack_80 = 0xd000000000000012;
    uStack_78 = 0x800000010f0f1b60;
    uStack_70 = 1;
    uStack_88 = param_2;
    (**(code **)(lVar2 + 8))(auStack_90,uVar1,lVar2);
  }
  else {
    lVar2 = param_1;
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    lVar2 = param_1;
    func_0x000107c44fb4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c3fcb0();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    func_0x000107c5fadc(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102b323a8; end: 102b324b3;  */

/* WARNING: Possible PIC construction at 0x000102b32418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3244c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3241c) */
/* WARNING: Removing unreachable block (ram,0x000102b32450) */

void FUN_102b323a8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61174(param_1);
    func_0x000107c4c194(puVar1);
    func_0x000107c61180();
    func_0x000107c51820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  if (param_2 != 0) {
    func_0x000107c614cc(param_2,auStack_58,auStack_70);
    func_0x000107c60640(uStack_68,uStack_60);
    func_0x000107c6142c(uStack_60);
  }
  return;
}



/* Entry: 102b324b4; end: 102b327d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b324b4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  func_0x000107c61604(unaff_x20 + _DAT_112ef5090,param_1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef5050);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112ef5088));
    lVar7 = lVar2;
    func_0x000107c4b130(lVar2);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ef5070);
    func_0x000107c4c18c(uVar3);
    func_0x000107c61180();
    lVar4 = lVar7;
    func_0x000107c4da8c(lVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c615e8(uVar3);
    puVar5 = &UNK_11059f7a0;
    func_0x000107c613fc(&UNK_11059f7a0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_102b32f50;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1019eb2dc;
    puStack_78 = &UNK_11059f7b8;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar7 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c3e924(lVar7);
    func_0x000107c61170(lVar7);
    lVar7 = *(long *)(unaff_x20 + _DAT_112ef5078);
    if (lVar7 != 0) {
      func_0x000107c4af90();
      func_0x000107c61180();
      lVar4 = lVar7;
      func_0x000107c421ac();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      puVar5 = &UNK_11059f7a0;
      func_0x000107c613fc(&UNK_11059f7a0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_70 = (code *)0x102b32f74;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100b5fdac;
      puStack_78 = &UNK_11059f7e0;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar7 = lVar4;
      func_0x000107c5c320(lVar4);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(lVar4);
      func_0x000107c3e924(lVar7);
      func_0x000107c61170(lVar7);
    }
    func_0x000107c615e8(lVar2);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ef5068 + 0x18);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef5068 + 0x20);
  uVar9 = uVar3;
  func_0x0001000a8868();
  func_0x000107c61174();
  lVar7 = unaff_x20;
  func_0x000107c417f0();
  func_0x000107c61180();
  func_0x000107c5faec();
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(lVar7);
  puStack_80 = (undefined *)0xd000000000000017;
  puStack_78 = (undefined *)0x800000010f0f1af0;
  pcStack_70 = (code *)CONCAT71(pcStack_70._1_7_,1);
  uStack_88 = uVar9;
  (**(code **)(lVar2 + 8))(&puStack_90,uVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar9);
  return;
}



/* Entry: 102b327d8; end: 102b32833;  */

void FUN_102b327d8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102b32834(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b32834; end: 102b32e77;  */

/* WARNING: Possible PIC construction at 0x000102b328ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b329c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b329d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b32a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b32b2c) */
/* WARNING: Removing unreachable block (ram,0x000102b32afc) */
/* WARNING: Removing unreachable block (ram,0x000102b32a3c) */
/* WARNING: Removing unreachable block (ram,0x000102b32b48) */
/* WARNING: Removing unreachable block (ram,0x000102b32a50) */
/* WARNING: Removing unreachable block (ram,0x000102b32cd8) */
/* WARNING: Removing unreachable block (ram,0x000102b32de4) */
/* WARNING: Removing unreachable block (ram,0x000102b32db4) */
/* WARNING: Removing unreachable block (ram,0x000102b32cf0) */
/* WARNING: Removing unreachable block (ram,0x000102b32e00) */
/* WARNING: Removing unreachable block (ram,0x000102b32e04) */
/* WARNING: Removing unreachable block (ram,0x000102b32d08) */
/* WARNING: Removing unreachable block (ram,0x000102b32cb0) */
/* WARNING: Removing unreachable block (ram,0x000102b32cbc) */
/* WARNING: Removing unreachable block (ram,0x000102b32c9c) */
/* WARNING: Removing unreachable block (ram,0x000102b32ce4) */
/* WARNING: Removing unreachable block (ram,0x000102b32ce8) */
/* WARNING: Removing unreachable block (ram,0x000102b32ca8) */
/* WARNING: Removing unreachable block (ram,0x000102b32c68) */
/* WARNING: Removing unreachable block (ram,0x000102b32c70) */
/* WARNING: Removing unreachable block (ram,0x000102b32cd0) */
/* WARNING: Removing unreachable block (ram,0x000102b32c78) */
/* WARNING: Removing unreachable block (ram,0x000102b32c40) */
/* WARNING: Removing unreachable block (ram,0x000102b32bc4) */
/* WARNING: Removing unreachable block (ram,0x000102b32e34) */
/* WARNING: Removing unreachable block (ram,0x000102b32e3c) */
/* WARNING: Removing unreachable block (ram,0x000102b32bcc) */
/* WARNING: Removing unreachable block (ram,0x000102b32e4c) */
/* WARNING: Removing unreachable block (ram,0x000102b32bd8) */
/* WARNING: Removing unreachable block (ram,0x000102b32be8) */
/* WARNING: Removing unreachable block (ram,0x000102b32cc0) */
/* WARNING: Removing unreachable block (ram,0x000102b32bf0) */
/* WARNING: Removing unreachable block (ram,0x000102b32e30) */
/* WARNING: Removing unreachable block (ram,0x000102b32c00) */
/* WARNING: Removing unreachable block (ram,0x000102b32c0c) */
/* WARNING: Removing unreachable block (ram,0x000102b32e2c) */
/* WARNING: Removing unreachable block (ram,0x000102b32c18) */
/* WARNING: Removing unreachable block (ram,0x000102b329dc) */
/* WARNING: Removing unreachable block (ram,0x000102b329e8) */
/* WARNING: Removing unreachable block (ram,0x000102b329c8) */
/* WARNING: Removing unreachable block (ram,0x000102b32a30) */
/* WARNING: Removing unreachable block (ram,0x000102b329d4) */
/* WARNING: Removing unreachable block (ram,0x000102b32994) */
/* WARNING: Removing unreachable block (ram,0x000102b3299c) */
/* WARNING: Removing unreachable block (ram,0x000102b32a1c) */
/* WARNING: Removing unreachable block (ram,0x000102b329a4) */
/* WARNING: Removing unreachable block (ram,0x000102b3296c) */
/* WARNING: Removing unreachable block (ram,0x000102b328f0) */
/* WARNING: Removing unreachable block (ram,0x000102b32b58) */
/* WARNING: Removing unreachable block (ram,0x000102b32b60) */
/* WARNING: Removing unreachable block (ram,0x000102b328f8) */
/* WARNING: Removing unreachable block (ram,0x000102b32b70) */
/* WARNING: Removing unreachable block (ram,0x000102b32904) */
/* WARNING: Removing unreachable block (ram,0x000102b32914) */
/* WARNING: Removing unreachable block (ram,0x000102b329ec) */
/* WARNING: Removing unreachable block (ram,0x000102b3291c) */
/* WARNING: Removing unreachable block (ram,0x000102b32b54) */
/* WARNING: Removing unreachable block (ram,0x000102b3292c) */
/* WARNING: Removing unreachable block (ram,0x000102b32938) */
/* WARNING: Removing unreachable block (ram,0x000102b32b50) */
/* WARNING: Removing unreachable block (ram,0x000102b32944) */
/* WARNING: Removing unreachable block (ram,0x000102b32a2c) */
/* WARNING: Removing unreachable block (ram,0x000102b32a34) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b32834(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112ef5090;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c40ebc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x000107c5b634();
      if (lVar1 == 3) {
        lVar1 = param_1;
        func_0x000107c42e10();
        func_0x000107c61180();
        if (lVar1 == 0) {
          func_0x000107c5d1c8();
          func_0x000107c61180();
          if (param_1 != 0) {
            uVar3 = 0;
            FUN_102b33ad0(0,0x112de84f8,&PTR_PTR_1126bbcc0);
            func_0x000107c5fc54(param_1,uVar3);
            lVar2 = param_1;
          }
        }
        else {
          uVar3 = 0;
          FUN_102b33ad0(0,0x112de84f8,&PTR_PTR_1126bbcc0);
          func_0x000107c5fc54(lVar1,uVar3);
          lVar2 = lVar1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 102b32e78; end: 102b32f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b32e78(byte param_1,long param_2)

{
  undefined8 uVar1;
  byte bStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ef5038);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c3ebcc();
    bStack_49 = param_1 ^ 1;
    func_0x0001002a64a8(&bStack_49);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 102b32f08; end: 102b32f4f; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarFavoritesPlugin lensActionBarHasBeedActivated:] */

void FUN_102b32f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102b324b4(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b32f50; end: 102b32f7b;  */

void FUN_102b32f50(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102b32834(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b32f7c; end: 102b331d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b32f7c(uint param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  
  puVar5 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar5,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar3 = param_3 + _DAT_112ef5090;
    func_0x000107c61618();
    if (uVar3 == 0) {
      func_0x000107c61170(param_3);
    }
    else {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar4 = param_4;
      func_0x000107c5faec();
      puVar6 = puVar5;
      func_0x000107c61170(param_4);
      uVar1 = uVar3;
      func_0x000107c40ebc();
      func_0x000107c61180();
      if (uVar1 != 0) {
        uVar2 = uVar1;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        func_0x000107c61170(uVar1);
        uVar1 = uVar2;
        func_0x000107c5faec();
        func_0x000107c61170(uVar2);
        if (uVar4 == uVar1 && puVar5 == puVar6) {
          func_0x000107c6142c(puVar5);
          func_0x000107c6142c(puVar6);
        }
        else {
          func_0x000107c605b8(uVar4,puVar5,uVar1,puVar6,0);
          func_0x000107c6142c(puVar5);
          func_0x000107c6142c(puVar6);
          if ((uVar4 & 1) == 0) goto LAB_102b330ac;
        }
        if ((param_1 & 0xff) == 2) {
          uVar7 = *(undefined8 *)(param_3 + _DAT_112ef5030);
          uStack_79 = 0;
          func_0x000107c6157c(uVar7);
          func_0x0001002a64a8(&uStack_79);
          func_0x000107c61574(uVar7);
          func_0x000107c615e8(uVar3);
          func_0x000107c61170(param_3);
          uVar3 = 0;
        }
        else {
          param_1 = param_1 & 1;
          uVar4 = (ulong)param_1;
          if (*(byte *)(param_3 + _DAT_112ef5098) == param_1) {
            func_0x000107c615e8(uVar3);
            func_0x000107c61170(param_3);
            uVar3 = 1;
          }
          else {
            *(char *)(param_3 + _DAT_112ef5098) = (char)param_1;
            uVar7 = *(undefined8 *)(param_3 + _DAT_112ef5028);
            FUN_102b339a4();
            func_0x000107c4d664(uVar7);
            func_0x000107c61170(param_3);
            func_0x000107c61170(uVar4);
            func_0x000107c615e8(uVar3);
            uVar3 = 1;
          }
        }
        goto LAB_102b330c8;
      }
      func_0x000107c6142c(puVar5);
LAB_102b330ac:
      func_0x000107c61170(param_3);
      func_0x000107c615e8(uVar3);
    }
  }
  uVar3 = (ulong)((param_1 & 0xff) != 2);
LAB_102b330c8:
  func_0x000107c5fca0(uVar3);
  func_0x000107c3fefc(param_2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102b331d4; end: 102b3328b;  */

void FUN_102b331d4(long param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c5bd00();
    if (lVar1 == 2) {
      uVar2 = 1;
    }
    else if (lVar1 == 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
    (*param_3)(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (param_2 != 0) {
    func_0x000107c614cc(param_2,auStack_38,auStack_50);
    func_0x000107c60640(uStack_48,uStack_40);
    func_0x000107c6142c(uStack_40);
  }
  (*param_3)(2);
  return;
}



/* Entry: 102b3328c; end: 102b339a3;  */

/* WARNING: Possible PIC construction at 0x000102b332dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b33330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3334c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b33388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b333a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b333e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b334e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b33500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b335cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b335dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b335ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3359c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b33580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b33564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b33548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b33440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3354c) */
/* WARNING: Removing unreachable block (ram,0x000102b33568) */
/* WARNING: Removing unreachable block (ram,0x000102b33584) */
/* WARNING: Removing unreachable block (ram,0x000102b335f0) */
/* WARNING: Removing unreachable block (ram,0x000102b3360c) */
/* WARNING: Removing unreachable block (ram,0x000102b335f8) */
/* WARNING: Removing unreachable block (ram,0x000102b3361c) */
/* WARNING: Removing unreachable block (ram,0x000102b335e0) */
/* WARNING: Removing unreachable block (ram,0x000102b335d0) */
/* WARNING: Removing unreachable block (ram,0x000102b33504) */
/* WARNING: Removing unreachable block (ram,0x000102b334e8) */
/* WARNING: Removing unreachable block (ram,0x000102b334ec) */
/* WARNING: Removing unreachable block (ram,0x000102b333ec) */
/* WARNING: Removing unreachable block (ram,0x000102b333a8) */
/* WARNING: Removing unreachable block (ram,0x000102b3338c) */
/* WARNING: Removing unreachable block (ram,0x000102b33390) */
/* WARNING: Removing unreachable block (ram,0x000102b33350) */
/* WARNING: Removing unreachable block (ram,0x000102b33334) */
/* WARNING: Removing unreachable block (ram,0x000102b33338) */
/* WARNING: Removing unreachable block (ram,0x000102b33444) */
/* WARNING: Removing unreachable block (ram,0x000102b3356c) */
/* WARNING: Removing unreachable block (ram,0x000102b33550) */
/* WARNING: Removing unreachable block (ram,0x000102b33588) */
/* WARNING: Removing unreachable block (ram,0x000102b33534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3328c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *unaff_x20;
  
  puVar1 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ef5060);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(puVar1);
      func_0x0001000a8868(unaff_x20 + _DAT_112ef5068,
                          *(undefined8 *)(unaff_x20 + _DAT_112ef5068 + 0x18));
      func_0x000107c61174();
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000107c5faec();
    }
    else {
      unaff_x20 = param_1;
      func_0x000107c5d2d8();
      func_0x000107c61180();
      if (unaff_x20 == (undefined *)0x0) {
        unaff_x20 = param_1;
        func_0x000107c5d2d8();
        func_0x000107c61180();
        if (unaff_x20 == (undefined *)0x0) {
          unaff_x20 = PTR_PTR_1126c83e0;
          func_0x000107c61168();
          func_0x000107c3d2e0();
          func_0x000107c61180();
          if (unaff_x20 == (undefined *)0x0) {
            func_0x000107c5d2d8();
            func_0x000107c61180();
            if (param_1 == (undefined *)0x0) {
              func_0x000107c610f8(PTR_PTR_1126c89d0);
              func_0x000107c47314();
              unaff_x20 = puVar1;
            }
            else {
              func_0x000107c3d470();
              func_0x000107c61180();
              unaff_x20 = param_1;
            }
          }
          else {
            func_0x000107c5faec();
          }
        }
        else {
          func_0x000107c4f8b8();
          func_0x000107c61180();
        }
      }
      else {
        func_0x000107c4f8bc();
        func_0x000107c61180();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
  func_0x000107c5faec();
  func_0x000107c5fadc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102b339a4; end: 102b33acf;  */

undefined * FUN_102b339a4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar6 = 0xd000000000000010;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  if ((param_1 & 1) == 0) {
    func_0x000107c5afb4(0x4038000000000000,0x4038000000000000);
    pcVar5 = "lab_lfb_value_yes";
    uVar6 = 0xd000000000000011;
  }
  else {
    func_0x000107c5afb4(0x4038000000000000,0x4038000000000000);
    pcVar5 = "lab_lfb_value_no";
  }
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126abfd0;
  func_0x000107c610f8(PTR_PTR_1126abfd0);
  uVar3 = 0x5f62666c5f62616c;
  func_0x000107c5fadc(0x5f62666c5f62616c,0xea00000000006469);
  func_0x000107c5fadc(uVar6,(ulong)(pcVar5 + -0x20) | 0x8000000000000000);
  func_0x000107c6142c((ulong)(pcVar5 + -0x20) | 0x8000000000000000);
  func_0x000107c454b4(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  puVar4 = PTR_PTR_1126abfd8;
  func_0x000107c610f8(PTR_PTR_1126abfd8);
  func_0x000107c46d10();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar4;
}



/* Entry: 102b33ad0; end: 102b33b0f;  */

void FUN_102b33ad0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b33b10; end: 102b33bf3;  */

/* WARNING: Possible PIC construction at 0x000102b33bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b33bdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b33b10(undefined8 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar1 = (*(byte *)(unaff_x20 + _DAT_112ef5098) ^ 0xffffffff) & 1;
  uVar5 = (ulong)uVar1;
  uVar2 = (undefined1)uVar1;
  *(undefined1 *)(unaff_x20 + _DAT_112ef5098) = uVar2;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef5028);
  FUN_102b339a4(uVar5);
  func_0x000107c4d664(uVar6);
  func_0x000107c61170(uVar5);
  puVar3 = &UNK_11059f7a0;
  func_0x000107c613fc(&UNK_11059f7a0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_11059f890;
  func_0x000107c613fc(&UNK_11059f890,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  puVar4[0x18] = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  func_0x000107c6157c(puVar3);
  func_0x000107c61174(param_1);
  FUN_102b31c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 102b33bf4; end: 102b33e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b33bf4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar1 = param_1;
  func_0x000107c49c88();
  if ((uVar1 & 1) == 0) {
    if (*(char *)(unaff_x20 + _DAT_112ef5098) == '\x01') {
      *(undefined1 *)(unaff_x20 + _DAT_112ef5098) = 0;
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ef5028);
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c5afb4(0x4038000000000000,0x4038000000000000);
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126abfd0;
      func_0x000107c610f8(PTR_PTR_1126abfd0);
      uVar5 = 0x5f62666c5f62616c;
      func_0x000107c5fadc(0x5f62666c5f62616c,0xea00000000006469);
      uVar6 = 0xd000000000000011;
      func_0x000107c5fadc(0xd000000000000011,0x800000010f0f19d0);
      func_0x000107c454b4(puVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      puVar2 = PTR_PTR_1126abfd8;
      func_0x000107c610f8(PTR_PTR_1126abfd8);
      func_0x000107c46d10();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c4d664(uVar7);
      func_0x000107c61170(puVar2);
    }
    puVar2 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar3 = &UNK_11059f7a0;
    func_0x000107c613fc(&UNK_11059f7a0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_11059f818;
    func_0x000107c613fc(&UNK_11059f818,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(ulong *)(puVar4 + 0x20) = param_1;
    func_0x000107c61174(puVar2);
    func_0x000107c6157c(puVar3);
    func_0x000107c61174(param_1);
    FUN_102b31c34();
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    puVar3 = puVar2;
    func_0x000107c43bf4(puVar2);
  }
  else {
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    FUN_102b33ad0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar2 = (undefined *)0x0;
    func_0x000107c6010c(0);
    func_0x000107c451b0(puVar3);
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102b33e30; end: 102b33e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b33e30(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar8 = *(ulong *)(unaff_x20 + 0x20);
  puVar6 = auStack_78;
  func_0x000107c61428(lVar2 + 0x10,puVar6,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = lVar2 + _DAT_112ef5090;
    func_0x000107c61618();
    if (uVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar4 = uVar8;
      func_0x000107c5faec();
      puVar7 = puVar6;
      func_0x000107c61170(uVar8);
      uVar8 = uVar3;
      func_0x000107c40ebc();
      func_0x000107c61180();
      if (uVar8 != 0) {
        uVar5 = uVar8;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        uVar8 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        if (uVar4 == uVar8 && puVar6 == puVar7) {
          func_0x000107c6142c(puVar6);
          func_0x000107c6142c(puVar7);
        }
        else {
          func_0x000107c605b8(uVar4,puVar6,uVar8,puVar7,0);
          func_0x000107c6142c(puVar6);
          func_0x000107c6142c(puVar7);
          if ((uVar4 & 1) == 0) goto LAB_102b330ac;
        }
        if ((param_1 & 0xff) == 2) {
          uVar9 = *(undefined8 *)(lVar2 + _DAT_112ef5030);
          uStack_79 = 0;
          func_0x000107c6157c(uVar9);
          func_0x0001002a64a8(&uStack_79);
          func_0x000107c61574(uVar9);
          func_0x000107c615e8(uVar3);
          func_0x000107c61170(lVar2);
          uVar8 = 0;
        }
        else {
          param_1 = param_1 & 1;
          uVar8 = (ulong)param_1;
          if (*(byte *)(lVar2 + _DAT_112ef5098) == param_1) {
            func_0x000107c615e8(uVar3);
            func_0x000107c61170(lVar2);
            uVar8 = 1;
          }
          else {
            *(char *)(lVar2 + _DAT_112ef5098) = (char)param_1;
            uVar9 = *(undefined8 *)(lVar2 + _DAT_112ef5028);
            FUN_102b339a4();
            func_0x000107c4d664(uVar9);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(uVar8);
            func_0x000107c615e8(uVar3);
            uVar8 = 1;
          }
        }
        goto LAB_102b330c8;
      }
      func_0x000107c6142c(puVar6);
LAB_102b330ac:
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(uVar3);
    }
  }
  uVar8 = (ulong)((param_1 & 0xff) != 2);
LAB_102b330c8:
  func_0x000107c5fca0(uVar8);
  func_0x000107c3fefc(uVar1);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 102b33e68; end: 102b33e9b;  */

void FUN_102b33e68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b33e9c; end: 102b33ea3;  */

/* WARNING: Possible PIC construction at 0x000102b32418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3244c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3241c) */
/* WARNING: Removing unreachable block (ram,0x000102b32450) */

void FUN_102b33e9c(long param_1,long param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10,param_2,
                        *(undefined8 *)(unaff_x20 + 0x10));
    func_0x000107c61174(param_1);
    func_0x000107c4c194(puVar1);
    func_0x000107c61180();
    func_0x000107c51820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  if (param_2 != 0) {
    func_0x000107c614cc(param_2,auStack_58,auStack_70);
    func_0x000107c60640(uStack_68,uStack_60);
    func_0x000107c6142c(uStack_60);
  }
  return;
}



/* Entry: 102b33ea4; end: 102b33ec7;  */

undefined8 FUN_102b33ea4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102b33ec8; end: 102b33ef3;  */

void FUN_102b33ec8(long param_1,long param_2)

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



/* Entry: 102b33ef4; end: 102b33f4f; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarLensViewsPlugin init] */

void FUN_102b33ef4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensActionBarLensViewsPlugin",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b33f20);
  (*pcVar1)();
}



/* Entry: 102b33f50; end: 102b33fd7; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarLensViewsPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b33f9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b33fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b33f50(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef50c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef50d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef50d8));
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112ef50e0))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef50e0));
  return;
}



/* Entry: 102b33fd8; end: 102b33ff7;  */

void FUN_102b33fd8(void)

{
  func_0x000107c61168(&PTR_PTR_11288c2b8);
  return;
}



/* Entry: 102b33ff8; end: 102b34087; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarLensViewsPlugin lensActionBar:didTapActionItemForLens:] */

/* WARNING: Possible PIC construction at 0x000102b34068: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3406c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b33ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = param_1 + _DAT_112ef50f8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  pcVar4 = *(code **)(lVar3 + 8);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*pcVar4)(param_4,uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102b34088; end: 102b3408b; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarLensViewsPlugin lensActionBar:willActivateForLens:] */

void FUN_102b34088(void)

{
  return;
}



/* Entry: 102b3408c; end: 102b3437b;  */

/* WARNING: Possible PIC construction at 0x000102b341d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b342ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b342d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3434c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b34328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b34350) */
/* WARNING: Removing unreachable block (ram,0x000102b342d4) */
/* WARNING: Removing unreachable block (ram,0x000102b342b0) */
/* WARNING: Removing unreachable block (ram,0x000102b341d4) */
/* WARNING: Removing unreachable block (ram,0x000102b3432c) */
/* WARNING: Removing unreachable block (ram,0x000102b34358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3408c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5d9c0();
  func_0x000107c61170(puVar1);
  puVar1 = &UNK_11059f9d0;
  func_0x000107c613fc(&UNK_11059f9d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar3 = &UNK_11059f9f8;
  uVar5 = 0x20;
  func_0x000107c613fc(&UNK_11059f9f8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar6 = uVar5;
  if (param_1 == 0) {
    func_0x000107c5faec();
    uVar6 = uVar5;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c5faec();
  lVar4 = *(long *)(unaff_x20 + _DAT_112ef50d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c6142c(uVar6);
    func_0x000107c61170(param_1);
    FUN_102b34a28(puVar1);
  }
  else {
    lVar4 = *(long *)(unaff_x20 + _DAT_112ef50d0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c6142c(uVar6);
      func_0x000107c61170(param_1);
      FUN_102b34a28(puVar1);
    }
    else {
      func_0x000107c51f40();
      func_0x000107c61180();
      puVar3 = puVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 102b3437c; end: 102b3451f; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarLensViewsPlugin lensActionBar:shouldShowActionFutureForLens:] */

void FUN_102b3437c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  FUN_102b34b74(param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b34520; end: 102b34553; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarLensViewsPlugin actionBarItem] */

void FUN_102b34520(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b343f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b34554; end: 102b34677;  */

/* WARNING: Possible PIC construction at 0x000102b345a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b34624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3464c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b34628) */
/* WARNING: Removing unreachable block (ram,0x000102b345ac) */
/* WARNING: Removing unreachable block (ram,0x000102b34650) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b34554(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c61604(unaff_x20 + _DAT_112ef50f0,param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5d9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102b34678; end: 102b346bf; -[_TtC29LensCarouselFeaturesWorkflows28LensActionBarLensViewsPlugin lensActionBarHasBeedActivated:] */

void FUN_102b34678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102b34554(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b346c0; end: 102b348bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b346c0(long param_1,long param_2,long param_3,long param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 == 0) {
    (*param_5)();
    return;
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      func_0x000107c61174();
      lVar3 = param_2;
      func_0x000107c49820();
      if (999 < lVar3) {
        func_0x000107c4223c(param_2);
        FUN_102b348c0(param_1,0,param_8);
        func_0x000107c4d664(*(undefined8 *)(param_4 + _DAT_112ef50c8));
        lVar3 = param_4 + _DAT_112ef50e0;
        uVar1 = *(undefined8 *)(lVar3 + 0x18);
        lVar2 = *(long *)(lVar3 + 0x20);
        func_0x0001000a8868(lVar3,uVar1);
        lVar3 = param_2;
        func_0x000107c4c0a8(param_2);
        (**(code **)(lVar2 + 8))(param_9,param_10,0,8,lVar3,uVar1,lVar2);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_2);
        goto LAB_102b347d4;
      }
      func_0x000107c61170(param_2);
    }
  }
  else {
    func_0x000107c602fc(0x45);
    func_0x000107c5fb78(0xd000000000000043,0x800000010f0f1be0);
    puVar4 = &UNK_10d918df0;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c60180();
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(0xe000000000000000);
    lVar3 = param_4 + _DAT_112ef50e8;
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    lVar2 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar1);
    (**(code **)(lVar2 + 8))(param_3,uVar1,lVar2);
  }
  (*param_5)();
  param_1 = param_4;
LAB_102b347d4:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b348c0; end: 102b34a27;  */

undefined * FUN_102b348c0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  
  uVar5 = (uint)param_2;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5afb4(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  if ((uVar5 & 0xff) == 1) {
    puVar6 = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b10c8;
    func_0x000107c61168(PTR_PTR_1126b10c8);
    func_0x000107c5ab24(param_1);
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR_PTR_1126abfd0;
  func_0x000107c610f8(PTR_PTR_1126abfd0);
  uVar3 = 0x776569765f62616c;
  func_0x000107c5fadc(0x776569765f62616c,0xec00000064695f73);
  func_0x000107c454b4(puVar2);
  func_0x000107c61170(uVar3);
  if (param_2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc(puVar6,param_2);
    func_0x000107c6142c(param_2);
  }
  puVar4 = PTR_PTR_1126abfd8;
  func_0x000107c610f8(PTR_PTR_1126abfd8);
  func_0x000107c46d10();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  return puVar4;
}



/* Entry: 102b34a28; end: 102b34b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b34a28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112ef50c8);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c61174(uVar5);
    func_0x000107c5afb4(0x4038000000000000,0x4038000000000000,puVar1);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126abfd0;
    func_0x000107c610f8(PTR_PTR_1126abfd0);
    uVar3 = 0x776569765f62616c;
    func_0x000107c5fadc(0x776569765f62616c,0xec00000064695f73);
    func_0x000107c454b4(puVar2);
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126abfd8;
    func_0x000107c610f8(PTR_PTR_1126abfd8);
    func_0x000107c46d10();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c4d664(uVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 102b34b74; end: 102b34c0b;  */

undefined * FUN_102b34b74(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c49c88();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x000107c4a4d8(), (uVar1 & 1) == 0)) {
    FUN_102b3408c(param_1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  puVar2 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x0001002ed07c(0);
  func_0x000107c6010c(uVar3);
  func_0x000107c451b0(puVar2,param_2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  return puVar2;
}



/* Entry: 102b34c0c; end: 102b34c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b34c0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(lVar5 + _DAT_112ef50c8);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c61174(uVar6);
    func_0x000107c5afb4(0x4038000000000000,0x4038000000000000,puVar1);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126abfd0;
    func_0x000107c610f8(PTR_PTR_1126abfd0);
    uVar3 = 0x776569765f62616c;
    func_0x000107c5fadc(0x776569765f62616c,0xec00000064695f73);
    func_0x000107c454b4(puVar2);
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126abfd8;
    func_0x000107c610f8(PTR_PTR_1126abfd8);
    func_0x000107c46d10();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c4d664(uVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 102b34c14; end: 102b34c43;  */

void FUN_102b34c14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_102b346c0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102b34c44; end: 102b34c5f;  */

void FUN_102b34c44(long param_1,long param_2)

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



/* Entry: 102b34c60; end: 102b34d1f;  */

void FUN_102b34c60(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    (*param_1)();
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11059fa70;
    pcStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
    func_0x000107c42058(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102b34d20; end: 102b34d63;  */

void FUN_102b34d20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b34d64; end: 102b34d83;  */

void FUN_102b34d64(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    (*param_1)();
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11059fa70;
    pcStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
    func_0x000107c42058(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102b34d84; end: 102b34dc3;  */

void FUN_102b34d84(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 102b34dc4; end: 102b34e23; -[_TtC29LensCarouselFeaturesWorkflows25LensActionBarSendToPlugin init] */

void FUN_102b34dc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensActionBarSendToPlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b34df0);
  (*pcVar1)();
}



/* Entry: 102b34e24; end: 102b34f1b; -[_TtC29LensCarouselFeaturesWorkflows25LensActionBarSendToPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b34e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b34e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b34ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b34ef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b34ed4) */
/* WARNING: Removing unreachable block (ram,0x000102b34e94) */
/* WARNING: Removing unreachable block (ram,0x000102b34e74) */
/* WARNING: Removing unreachable block (ram,0x000102b34ef4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b34e24(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef51c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef51d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef51d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef51e0));
  return;
}



/* Entry: 102b34f1c; end: 102b34f3b;  */

void FUN_102b34f1c(void)

{
  func_0x000107c61168(&PTR_PTR_11288c3c8);
  return;
}



/* Entry: 102b34f3c; end: 102b3523f;  */

/* WARNING: Possible PIC construction at 0x000102b35010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b351ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b35014) */
/* WARNING: Removing unreachable block (ram,0x000102b351f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b34f3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  code *pcVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar4 = unaff_x20 + _DAT_112ef5200;
  lVar1 = lVar4;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = param_2;
    uVar7 = param_2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    lVar4 = *(long *)(unaff_x20 + _DAT_112ef51f8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
      return;
    }
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    uVar2 = param_2;
    func_0x000102b35acc();
    lVar4 = *(long *)(unaff_x20 + _DAT_112ef5238);
    if (lVar4 == 0) {
      FUN_102b35918(uVar3,uVar7);
    }
    puVar5 = &UNK_11059faa8;
    func_0x000107c613fc(&UNK_11059faa8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,unaff_x20);
    puVar6 = &UNK_11059fb48;
    func_0x000107c613fc(&UNK_11059fb48,0x40,7);
    *(undefined8 *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = uVar3;
    *(undefined8 *)(puVar6 + 0x20) = uVar7;
    *(undefined **)(puVar6 + 0x28) = puVar5;
    *(undefined8 *)(puVar6 + 0x30) = param_2;
    *(undefined8 *)(puVar6 + 0x38) = uVar2;
    uStack_70 = 0x102b361d8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_10102ec58;
    puStack_78 = &UNK_11059fb60;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar5 = puStack_68;
    func_0x000107c61174(lVar4);
    func_0x000107c615f0(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(uVar2);
  }
  else {
    lVar8 = *(long *)(lVar4 + 8);
    lVar4 = lVar1;
    func_0x000107c614f0();
    puVar5 = &UNK_11059faa8;
    func_0x000107c613fc(&UNK_11059faa8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_11059fb20;
    func_0x000107c613fc(&UNK_11059fb20,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = param_1;
    *(undefined8 *)(puVar6 + 0x20) = param_2;
    pcVar9 = *(code **)(lVar8 + 8);
    func_0x000107c6157c(puVar5);
    func_0x000107c615f0(param_1);
    func_0x000107c61174(param_2);
    (*pcVar9)(FUN_102b361cc,puVar6,lVar4,lVar8);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 102b35240; end: 102b352af;  */

void FUN_102b35240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000102b35058(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b352b0; end: 102b3531b; -[_TtC29LensCarouselFeaturesWorkflows25LensActionBarSendToPlugin lensActionBar:didTapActionItemForLens:] */

/* WARNING: Possible PIC construction at 0x000102b35304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b35308) */

void FUN_102b352b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102b34f3c(param_3,param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102b3531c; end: 102b35367; -[_TtC29LensCarouselFeaturesWorkflows25LensActionBarSendToPlugin lensActionBar:willActivateForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3531c(undefined8 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = 1;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b35368; end: 102b3545f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b35368(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  FUN_102b35918(uVar1,param_2);
  func_0x000107c6142c(param_2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ef5238);
  *(undefined8 *)(unaff_x20 + _DAT_112ef5238) = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar3);
  pcStack_40 = FUN_102b35a30;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102b35a48;
  puStack_48 = &UNK_11059fae8;
  func_0x000107c60bc4(&puStack_60);
  uVar3 = uVar1;
  func_0x000107c4c280(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar1);
  return uVar3;
}



/* Entry: 102b35460; end: 102b356d7; -[_TtC29LensCarouselFeaturesWorkflows25LensActionBarSendToPlugin lensActionBar:shouldShowActionFutureForLens:] */

void FUN_102b35460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  puVar1 = param_4;
  func_0x000107c49c88();
  if ((int)puVar1 == 0) {
    puVar1 = param_4;
    FUN_102b35368(param_4);
  }
  else {
    puVar1 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x0001002ed07c(0);
    uVar2 = 0;
    func_0x000107c6010c(0);
    func_0x000107c451b0(puVar1,param_2,uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102b356d8; end: 102b3570b; -[_TtC29LensCarouselFeaturesWorkflows25LensActionBarSendToPlugin actionBarItem] */

void FUN_102b356d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b35520();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b3570c; end: 102b358cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3570c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  func_0x000107c61604(unaff_x20 + _DAT_112ef5230,param_1);
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112ef5220));
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef5208);
  if (lVar1 != 0) {
    func_0x000107c4af90();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c421ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar3 = &UNK_11059faa8;
    func_0x000107c613fc(&UNK_11059faa8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_40 = FUN_102b36168;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100b5fdac;
    puStack_48 = &UNK_11059fac0;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar1 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c3e924(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b358d0; end: 102b35917; -[_TtC29LensCarouselFeaturesWorkflows25LensActionBarSendToPlugin lensActionBarHasBeedActivated:] */

void FUN_102b358d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102b3570c(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b35918; end: 102b35a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_102b35918(undefined *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + _DAT_112ef51e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)PTR_PTR_1126ae558;
    func_0x000107c61168();
    puVar1 = puVar2;
    FUN_102b3618c();
    puVar3 = &UNK_1105a0070;
    func_0x000107c613f8(&UNK_1105a0070,puVar1,0,0);
    *puVar1 = 0xd000000000000019;
    puVar1[1] = 0x800000010db23e40;
    puVar1[2] = 0xd000000000000038;
    puVar1[3] = 0x800000010f0f1c70;
    *(undefined1 *)(puVar1 + 4) = 0;
    param_1 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    func_0x000107c451ac(puVar2);
    func_0x000107c61180();
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    puVar2 = puVar1;
    func_0x000107c43dc8(puVar1);
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102b35a30; end: 102b35a47;  */

void FUN_102b35a30(undefined1 *param_1)

{
  *(undefined **)(param_1 + 0x18) = PTR___sSbN_11034dd40;
  *param_1 = 1;
  return;
}



/* Entry: 102b35a48; end: 102b35be3;  */

void FUN_102b35a48(long param_1,undefined8 param_2)

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



/* Entry: 102b35be4; end: 102b35db3;  */

void FUN_102b35be4(long param_1,long param_2,ulong param_3,ulong param_4,long param_5,long param_6,
                  undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uStack_90 = param_7;
  uStack_88 = param_8;
  lStack_80 = param_2;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c40ebc();
  func_0x000107c61180();
  if (param_3 != 0) {
    uVar3 = param_3;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    if ((uVar4 == param_4) && (param_2 == param_5)) {
      func_0x000107c6142c(param_2);
    }
    else {
      func_0x000107c605b8(uVar4,param_2,param_4,param_5,0);
      func_0x000107c6142c(param_2);
      if ((uVar4 & 1) == 0) {
        return;
      }
    }
    func_0x000107c61428(param_6 + 0x10,auStack_78,0,0);
    param_6 = param_6 + 0x10;
    func_0x000107c61618();
    if (param_6 != 0) {
      if ((param_1 == 0) || (lStack_80 != 0)) {
        func_0x000107c61170();
      }
      else {
        func_0x000107c5edb4(lVar7,param_1);
        lVar5 = param_1;
        func_0x000107c61174(param_1);
        uVar1 = uStack_90;
        FUN_102b35db4(lVar7,uStack_90);
        pcVar6 = *(code **)(lVar8 + 8);
        (*pcVar6)(lVar7,lVar2);
        func_0x000107c5edb4(lVar7,param_1);
        func_0x000102b35e9c(lVar7,uVar1,uStack_88);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(param_6);
        (*pcVar6)(lVar7,lVar2);
      }
    }
  }
  return;
}



/* Entry: 102b35db4; end: 102b360e3;  */

/* WARNING: Possible PIC construction at 0x000102b35e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b35e60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b35e08) */
/* WARNING: Removing unreachable block (ram,0x000102b35e64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b35db4(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(char *)(unaff_x20 + _DAT_112ef5228) != '\x01') {
    return;
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef5218);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef5210);
    func_0x000107c5ed90();
    func_0x000107c3ed60(uVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102b360e4; end: 102b36167; -[_TtC29LensCarouselFeaturesWorkflows25LensActionBarSendToPlugin didFinishlensAutoCopyWorkflow] */

/* WARNING: Possible PIC construction at 0x000102b36120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3613c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b36124) */
/* WARNING: Removing unreachable block (ram,0x000102b36140) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b360e4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102b36168; end: 102b3618b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b36168(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  byte bStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ef51d0);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c3ebcc();
    bStack_49 = param_1 ^ 1;
    func_0x0001002a64a8(&bStack_49);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 102b3618c; end: 102b361cb;  */

void FUN_102b3618c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef5268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db24210;
  func_0x000107c61520(&UNK_10db24210,&UNK_1105a0070);
  puRam0000000112ef5268 = puVar1;
  return;
}



/* Entry: 102b361cc; end: 102b36207;  */

void FUN_102b361cc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000102b35058(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102b36208; end: 102b36277;  */

void FUN_102b36208(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102b36278; end: 102b36367;  */

/* WARNING: Possible PIC construction at 0x000102b36324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b364e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b366e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b36e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b36e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b36ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b36e6c) */
/* WARNING: Removing unreachable block (ram,0x000102b36e40) */
/* WARNING: Removing unreachable block (ram,0x000102b366e8) */
/* WARNING: Removing unreachable block (ram,0x000102b364e8) */
/* WARNING: Removing unreachable block (ram,0x000102b36520) */
/* WARNING: Removing unreachable block (ram,0x000102b36618) */
/* WARNING: Removing unreachable block (ram,0x000102b36578) */
/* WARNING: Removing unreachable block (ram,0x000102b36584) */
/* WARNING: Removing unreachable block (ram,0x000102b36664) */
/* WARNING: Removing unreachable block (ram,0x000102b365d8) */
/* WARNING: Removing unreachable block (ram,0x000102b36670) */
/* WARNING: Removing unreachable block (ram,0x000102b366b8) */
/* WARNING: Removing unreachable block (ram,0x000102b366fc) */
/* WARNING: Removing unreachable block (ram,0x000102b36728) */
/* WARNING: Removing unreachable block (ram,0x000102b36748) */
/* WARNING: Removing unreachable block (ram,0x000102b3675c) */
/* WARNING: Removing unreachable block (ram,0x000102b36798) */
/* WARNING: Removing unreachable block (ram,0x000102b36e88) */
/* WARNING: Removing unreachable block (ram,0x000102b3681c) */
/* WARNING: Removing unreachable block (ram,0x000102b36e94) */
/* WARNING: Removing unreachable block (ram,0x000102b36764) */
/* WARNING: Removing unreachable block (ram,0x000102b36838) */
/* WARNING: Removing unreachable block (ram,0x000102b3677c) */
/* WARNING: Removing unreachable block (ram,0x000102b36844) */
/* WARNING: Removing unreachable block (ram,0x000102b36868) */
/* WARNING: Removing unreachable block (ram,0x000102b36888) */
/* WARNING: Removing unreachable block (ram,0x000102b368c4) */
/* WARNING: Removing unreachable block (ram,0x000102b368a8) */
/* WARNING: Removing unreachable block (ram,0x000102b368d0) */
/* WARNING: Removing unreachable block (ram,0x000102b368e4) */
/* WARNING: Removing unreachable block (ram,0x000102b3691c) */
/* WARNING: Removing unreachable block (ram,0x000102b36904) */
/* WARNING: Removing unreachable block (ram,0x000102b36924) */
/* WARNING: Removing unreachable block (ram,0x000102b36938) */
/* WARNING: Removing unreachable block (ram,0x000102b36958) */
/* WARNING: Removing unreachable block (ram,0x000102b36998) */
/* WARNING: Removing unreachable block (ram,0x000102b36978) */
/* WARNING: Removing unreachable block (ram,0x000102b369a4) */
/* WARNING: Removing unreachable block (ram,0x000102b369b8) */
/* WARNING: Removing unreachable block (ram,0x000102b369f0) */
/* WARNING: Removing unreachable block (ram,0x000102b369d8) */
/* WARNING: Removing unreachable block (ram,0x000102b369f4) */
/* WARNING: Removing unreachable block (ram,0x000102b36a08) */
/* WARNING: Removing unreachable block (ram,0x000102b36a48) */
/* WARNING: Removing unreachable block (ram,0x000102b36a28) */
/* WARNING: Removing unreachable block (ram,0x000102b36a54) */
/* WARNING: Removing unreachable block (ram,0x000102b36a68) */
/* WARNING: Removing unreachable block (ram,0x000102b36aa8) */
/* WARNING: Removing unreachable block (ram,0x000102b36a88) */
/* WARNING: Removing unreachable block (ram,0x000102b36ab4) */
/* WARNING: Removing unreachable block (ram,0x000102b36af4) */
/* WARNING: Removing unreachable block (ram,0x000102b36ad4) */
/* WARNING: Removing unreachable block (ram,0x000102b36b00) */
/* WARNING: Removing unreachable block (ram,0x000102b36b64) */
/* WARNING: Removing unreachable block (ram,0x000102b36b14) */
/* WARNING: Removing unreachable block (ram,0x000102b36b7c) */
/* WARNING: Removing unreachable block (ram,0x000102b36b38) */
/* WARNING: Removing unreachable block (ram,0x000102b36b90) */
/* WARNING: Removing unreachable block (ram,0x000102b36b94) */
/* WARNING: Removing unreachable block (ram,0x000102b36c78) */
/* WARNING: Removing unreachable block (ram,0x000102b36bf4) */
/* WARNING: Removing unreachable block (ram,0x000102b36c80) */
/* WARNING: Removing unreachable block (ram,0x000102b36c14) */
/* WARNING: Removing unreachable block (ram,0x000102b36c88) */
/* WARNING: Removing unreachable block (ram,0x000102b36c34) */
/* WARNING: Removing unreachable block (ram,0x000102b36c94) */
/* WARNING: Removing unreachable block (ram,0x000102b36c58) */
/* WARNING: Removing unreachable block (ram,0x000102b36c98) */
/* WARNING: Removing unreachable block (ram,0x000102b36cc4) */
/* WARNING: Removing unreachable block (ram,0x000102b36ca4) */
/* WARNING: Removing unreachable block (ram,0x000102b36cc8) */
/* WARNING: Removing unreachable block (ram,0x000102b366e0) */
/* WARNING: Removing unreachable block (ram,0x000102b36328) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000102b36ea8) */
/* WARNING: Removing unreachable block (ram,0x000102b36ed0) */
/* WARNING: Removing unreachable block (ram,0x000102b36ed4) */

void FUN_102b36278(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_140 [104];
  undefined8 uStack_d8;
  undefined8 *puStack_c8;
  undefined1 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  
  puVar3 = unaff_x20 + 9;
  func_0x000107c61618();
  if (puVar3 == (undefined8 *)0x0) {
    uVar8 = *unaff_x20;
    lVar6 = 0;
    uStack_a0 = param_1;
    func_0x000107c5ede0();
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    puStack_b0 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lStack_a8 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar3 = (undefined8 *)unaff_x20[2];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    puVar4 = (undefined8 *)unaff_x20[3];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = puVar4;
      uStack_d8 = uVar8;
      func_0x000107c4d064();
      func_0x000107c61180();
      puVar3 = puVar4;
      puStack_c8 = puVar5;
    }
  }
  else {
    lVar6 = unaff_x20[10];
    puVar4 = puVar3;
    func_0x000107c614f0();
    puVar1 = &UNK_11059fbf8;
    func_0x000107c613fc(&UNK_11059fbf8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    puVar2 = &UNK_11059fc20;
    func_0x000107c613fc(&UNK_11059fc20,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    pcVar7 = *(code **)(lVar6 + 8);
    func_0x000107c6157c(puVar1);
    func_0x000107c61174(param_1);
    (*pcVar7)(FUN_102b370cc,puVar2,puVar4,lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar3);
  return;
}



/* Entry: 102b36368; end: 102b36ef7;  */

/* WARNING: Possible PIC construction at 0x000102b364e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b366e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b36e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b36ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b36e6c) */
/* WARNING: Removing unreachable block (ram,0x000102b366e8) */
/* WARNING: Removing unreachable block (ram,0x000102b364e8) */
/* WARNING: Removing unreachable block (ram,0x000102b36520) */
/* WARNING: Removing unreachable block (ram,0x000102b36618) */
/* WARNING: Removing unreachable block (ram,0x000102b36578) */
/* WARNING: Removing unreachable block (ram,0x000102b36584) */
/* WARNING: Removing unreachable block (ram,0x000102b36664) */
/* WARNING: Removing unreachable block (ram,0x000102b365d8) */
/* WARNING: Removing unreachable block (ram,0x000102b36670) */
/* WARNING: Removing unreachable block (ram,0x000102b366b8) */
/* WARNING: Removing unreachable block (ram,0x000102b366fc) */
/* WARNING: Removing unreachable block (ram,0x000102b36728) */
/* WARNING: Removing unreachable block (ram,0x000102b36748) */
/* WARNING: Removing unreachable block (ram,0x000102b3675c) */
/* WARNING: Removing unreachable block (ram,0x000102b36798) */
/* WARNING: Removing unreachable block (ram,0x000102b36e88) */
/* WARNING: Removing unreachable block (ram,0x000102b3681c) */
/* WARNING: Removing unreachable block (ram,0x000102b36e94) */
/* WARNING: Removing unreachable block (ram,0x000102b36764) */
/* WARNING: Removing unreachable block (ram,0x000102b36838) */
/* WARNING: Removing unreachable block (ram,0x000102b3677c) */
/* WARNING: Removing unreachable block (ram,0x000102b36844) */
/* WARNING: Removing unreachable block (ram,0x000102b36868) */
/* WARNING: Removing unreachable block (ram,0x000102b36888) */
/* WARNING: Removing unreachable block (ram,0x000102b368c4) */
/* WARNING: Removing unreachable block (ram,0x000102b368a8) */
/* WARNING: Removing unreachable block (ram,0x000102b368d0) */
/* WARNING: Removing unreachable block (ram,0x000102b368e4) */
/* WARNING: Removing unreachable block (ram,0x000102b3691c) */
/* WARNING: Removing unreachable block (ram,0x000102b36904) */
/* WARNING: Removing unreachable block (ram,0x000102b36924) */
/* WARNING: Removing unreachable block (ram,0x000102b36938) */
/* WARNING: Removing unreachable block (ram,0x000102b36958) */
/* WARNING: Removing unreachable block (ram,0x000102b36998) */
/* WARNING: Removing unreachable block (ram,0x000102b36978) */
/* WARNING: Removing unreachable block (ram,0x000102b369a4) */
/* WARNING: Removing unreachable block (ram,0x000102b369b8) */
/* WARNING: Removing unreachable block (ram,0x000102b369f0) */
/* WARNING: Removing unreachable block (ram,0x000102b369d8) */
/* WARNING: Removing unreachable block (ram,0x000102b369f4) */
/* WARNING: Removing unreachable block (ram,0x000102b36a08) */
/* WARNING: Removing unreachable block (ram,0x000102b36a48) */
/* WARNING: Removing unreachable block (ram,0x000102b36a28) */
/* WARNING: Removing unreachable block (ram,0x000102b36a54) */
/* WARNING: Removing unreachable block (ram,0x000102b36a68) */
/* WARNING: Removing unreachable block (ram,0x000102b36aa8) */
/* WARNING: Removing unreachable block (ram,0x000102b36a88) */
/* WARNING: Removing unreachable block (ram,0x000102b36ab4) */
/* WARNING: Removing unreachable block (ram,0x000102b36af4) */
/* WARNING: Removing unreachable block (ram,0x000102b36ad4) */
/* WARNING: Removing unreachable block (ram,0x000102b36b00) */
/* WARNING: Removing unreachable block (ram,0x000102b36b64) */
/* WARNING: Removing unreachable block (ram,0x000102b36b14) */
/* WARNING: Removing unreachable block (ram,0x000102b36b7c) */
/* WARNING: Removing unreachable block (ram,0x000102b36b38) */
/* WARNING: Removing unreachable block (ram,0x000102b36b90) */
/* WARNING: Removing unreachable block (ram,0x000102b36b94) */
/* WARNING: Removing unreachable block (ram,0x000102b36c78) */
/* WARNING: Removing unreachable block (ram,0x000102b36bf4) */
/* WARNING: Removing unreachable block (ram,0x000102b36c80) */
/* WARNING: Removing unreachable block (ram,0x000102b36c14) */
/* WARNING: Removing unreachable block (ram,0x000102b36c88) */
/* WARNING: Removing unreachable block (ram,0x000102b36c34) */
/* WARNING: Removing unreachable block (ram,0x000102b36c94) */
/* WARNING: Removing unreachable block (ram,0x000102b36c58) */
/* WARNING: Removing unreachable block (ram,0x000102b36c98) */
/* WARNING: Removing unreachable block (ram,0x000102b36cc4) */
/* WARNING: Removing unreachable block (ram,0x000102b36ca4) */
/* WARNING: Removing unreachable block (ram,0x000102b36cc8) */
/* WARNING: Removing unreachable block (ram,0x000102b366e0) */
/* WARNING: Removing unreachable block (ram,0x000102b36ea8) */
/* WARNING: Removing unreachable block (ram,0x000102b36ed0) */
/* WARNING: Removing unreachable block (ram,0x000102b36ed4) */

void FUN_102b36368(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4d064();
    func_0x000107c61180();
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 102b36ef8; end: 102b36f53;  */

void FUN_102b36ef8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_102b36368(param_2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102b36f54; end: 102b3704f;  */

void FUN_102b36f54(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  if (param_1 != 0) {
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_4,PTR_s_presentLensTopicModel_pageSessio_112620d78,param_5,0,0x51,param_1,0);
      return;
    }
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      FUN_102b370fc(param_3 + 0x20,auStack_80);
      func_0x000107c615f0(param_1);
      func_0x000107c614b0(param_2);
      func_0x000107c61574(param_3);
      func_0x0001000a8868(auStack_80,uStack_68);
      (**(code **)(lStack_60 + 0x10))(param_2,uStack_68,lStack_60);
      func_0x000107c615e8(param_1);
      func_0x000107c614ac(param_2);
      func_0x0001000834e4(auStack_80);
    }
  }
  return;
}



/* Entry: 102b37050; end: 102b370ab;  */

void FUN_102b37050(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000102b37140(unaff_x20 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b370ac; end: 102b370cb;  */

void FUN_102b370ac(void)

{
  FUN_102b36278();
  return;
}



/* Entry: 102b370cc; end: 102b370fb;  */

void FUN_102b370cc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_102b36368(uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 102b370fc; end: 102b37163;  */

long FUN_102b370fc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102b37164; end: 102b371c3; -[_TtC29LensCarouselFeaturesWorkflows28LensDeeplinkSendToController init] */

void FUN_102b37164(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensDeeplinkSendToController",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b37190);
  (*pcVar1)();
}



/* Entry: 102b371c4; end: 102b371fb; -[_TtC29LensCarouselFeaturesWorkflows28LensDeeplinkSendToController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b371c4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef5328));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ef5330));
  return;
}



/* Entry: 102b371fc; end: 102b3721b;  */

void FUN_102b371fc(void)

{
  func_0x000107c61168(&PTR_PTR_11288c4f8);
  return;
}



/* Entry: 102b3721c; end: 102b3732f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3721c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b1b30;
  func_0x000107c610f8(PTR_PTR_1126b1b30);
  func_0x000107c48f20();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef5330);
  *(undefined8 *)(unaff_x20 + _DAT_112ef5330) = param_1;
  func_0x000107c615e8(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef5328);
  func_0x000107c615f0(param_1);
  func_0x000107c42c1c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102b37330; end: 102b373e7; -[_TtC29LensCarouselFeaturesWorkflows28LensDeeplinkSendToController didDismissWithRecipientsCount:groupsCount:] */

/* WARNING: Possible PIC construction at 0x000102b37390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b373ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b37394) */
/* WARNING: Removing unreachable block (ram,0x000102b373b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b37330(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ef5328);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5d17c();
    func_0x000107c61180();
    func_0x000107c41864();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b373e8; end: 102b37433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b373e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef5360) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b37434; end: 102b37493; -[LensDeeplinkSendToControllingServices init] */

void FUN_102b37434(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensDeeplinkSendToControllingServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b37460);
  (*pcVar1)();
}



/* Entry: 102b37494; end: 102b374a3; -[LensDeeplinkSendToControllingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b37494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef5360));
  return;
}



/* Entry: 102b374a4; end: 102b37853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b374a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  if ((*(byte *)(param_2 + _DAT_113082448 + 1) >> 3 & 1) != 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    return unaff_x20;
  }
  if (*(ulong *)(param_2 + _DAT_113082420) < 3) {
LAB_102b37534:
    lVar1 = param_7;
    func_0x000107c4af44();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar2 != 0) {
      pcStack_80 = FUN_102b37854;
      puStack_78 = (undefined *)0x0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = (undefined *)0x102b378b4;
      puStack_88 = &UNK_11059fcb0;
      ppuVar3 = &puStack_a0;
      func_0x000107c60bc4();
      puVar4 = &UNK_11059fce8;
      func_0x000107c613fc(&UNK_11059fce8,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,unaff_x20);
      puVar5 = &UNK_11059fd10;
      func_0x000107c613fc(&UNK_11059fd10,0x40,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = param_3;
      *(undefined8 *)(puVar5 + 0x20) = param_5;
      *(undefined8 *)(puVar5 + 0x28) = param_4;
      *(long *)(puVar5 + 0x30) = lVar2;
      *(undefined8 *)(puVar5 + 0x38) = param_8;
      pcStack_80 = (code *)0x102b37e18;
      puStack_a0 = puVar7;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100ba5314;
      puStack_88 = &UNK_11059fd28;
      ppuVar6 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar7 = puStack_78;
      func_0x000107c61174(param_3);
      func_0x000107c61174();
      func_0x000107c61174(param_4);
      func_0x000107c615f0(lVar2);
      func_0x000107c61174(param_8);
      func_0x000107c61574(puVar7);
      func_0x000107c42c14(param_9);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar2);
      return unaff_x20;
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
  }
  else {
    if (*(ulong *)(param_2 + _DAT_113082420) == 8) {
      func_0x0001000d224c(&puStack_a0);
      FUN_102b380ec(&puStack_a0,puStack_88);
      puVar7 = puStack_88;
      (**(code **)((long)pcStack_80 + 0x40))(puStack_88,pcStack_80);
      func_0x000102b38110(&puStack_a0);
      if (((ulong)puVar7 & 1) != 0) goto LAB_102b37534;
    }
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  return unaff_x20;
}



/* Entry: 102b37854; end: 102b37937;  */

void FUN_102b37854(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126abfe8;
  func_0x000107c610f8();
  func_0x000107c47f70();
  uVar2 = 0;
  FUN_102b38130(0,0x112ef5438,&PTR_PTR_1126abfe8);
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}


