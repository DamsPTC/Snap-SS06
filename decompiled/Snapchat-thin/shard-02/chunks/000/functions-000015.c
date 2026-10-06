/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016b499c; end: 1016b499f; -[_TtC17ShareYoursSticker21ShareYoursStickerView packId] */

void FUN_1016b499c(void)

{
  func_0x000107c5fadc(0x4f595f4552414853,0xeb00000000535255);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016b49a0; end: 1016b49a3; -[_TtC17ShareYoursSticker21ShareYoursStickerView shortLoggingName] */

void FUN_1016b49a0(void)

{
  func_0x000107c5fadc(0x4f595f4552414853,0xeb00000000535255);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016b49a4; end: 1016b4a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b49a4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001001deb5c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dc0200) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1016b4a10; end: 1016b4a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b4a10(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001001deb5c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dc0200) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1016b4a18; end: 1016b4a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b4a18(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc0200) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016b4a64; end: 1016b4a67; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_1016b4a64(void)

{
  return;
}



/* Entry: 1016b4a68; end: 1016b4ac7; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl init] */

void FUN_1016b4a68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapMeStickerInjectorImpl.SnapMeStickerInjectorImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b4a94);
  (*pcVar1)();
}



/* Entry: 1016b4ac8; end: 1016b4ad7; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b4ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc0200));
  return;
}



/* Entry: 1016b4ad8; end: 1016b4b37; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl isConversionSupportedForCTPItem:] */

uint FUN_1016b4ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1016b519c(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1016b4b38; end: 1016b4b93; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl isConversionSupportedForSOJUGallerySticker:] */

uint FUN_1016b4b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016b52a8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1016b4b94; end: 1016b4c03; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl isConversionSupportedForCTItemInstance:] */

bool FUN_1016b4b94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016b5338();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  if (param_3 != 0) {
    func_0x000107c61170(param_3);
  }
  return param_3 != 0;
}



/* Entry: 1016b4c04; end: 1016b4c5f; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl sojuGalleryStickerForStickerState:] */

void FUN_1016b4c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016b56bc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b4c60; end: 1016b4d67; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_1016b4c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    uVar1 = 0;
    FUN_1016b5ee4(0,0x112dc0090,&PTR_PTR_1126e0c80);
    func_0x000107c5fc54(param_4,uVar1);
  }
  if (param_6 != 0) {
    uVar1 = 0;
    FUN_1016b5ee4(0,0x112dc0098,&PTR_PTR_1126bf730);
    func_0x000107c5fc54(param_6,uVar1);
  }
  func_0x000107c61174(param_3);
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1016b5894(param_3,param_5,param_6,param_7);
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



/* Entry: 1016b4d68; end: 1016b4ddf; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_1016b4d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016b5450(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b4de0; end: 1016b4e77; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_1016b4de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = 0;
    FUN_1016b5ee4(0,0x112dc0090,&PTR_PTR_1126e0c80);
    func_0x000107c5fc54(param_4,uVar1);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016b5a48(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b4e78; end: 1016b4f0b; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_1016b4e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  FUN_1016b5b3c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b4f0c; end: 1016b4faf; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl stickerForCTPItem:presentationModelProviderType:] */

void FUN_1016b4f0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1016b519c();
  if ((param_3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000103ee3360(0);
    uVar2 = 0;
    func_0x000103ee0004(0,0xe000000000000000);
    uVar3 = 0;
    FUN_1016b6730(0);
    func_0x000107c610f8();
    func_0x0001016b5fe0(uVar2,uVar3);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016b4fb0; end: 1016b503b; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_1016b4fb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001016b5338();
  if (param_3 == 0) {
    func_0x000107c61170(lVar2);
    lVar2 = 0;
  }
  else {
    func_0x000107c61170();
    uVar1 = 0;
    FUN_1016b6730(0);
    func_0x000107c610f8();
    func_0x0001016b5fe0(lVar2,uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b503c; end: 1016b50c3; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl isStickerTypeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016b503c(undefined8 param_1)

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
  func_0x000107c4a49c(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uVar2);
  return uVar1;
}



/* Entry: 1016b50c4; end: 1016b511f; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl tappableElementActionForItemInstance:] */

void FUN_1016b50c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016b5bc8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b5120; end: 1016b5127; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl tappableElementTypeForItemInstance:] */

undefined8 FUN_1016b5120(void)

{
  return 10;
}



/* Entry: 1016b5128; end: 1016b512f; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_1016b5128(void)

{
  return 0;
}



/* Entry: 1016b5130; end: 1016b5193; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl ctpItemsForTestingInTarget:] */

void FUN_1016b5130(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x0001016b5dac();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1016b5ee4(0,0x112d4ede0,&PTR_PTR_1126baa60);
    lVar2 = param_3;
    func_0x000107c5fc48(param_3,uVar1);
    func_0x000107c6142c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b5194; end: 1016b519b; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl shouldDisplayValdiEditingViewForItemInstance:] */

undefined8 FUN_1016b5194(void)

{
  return 1;
}



/* Entry: 1016b519c; end: 1016b544f;  */

bool FUN_1016b519c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c42934();
    if (lVar1 == 4) {
      lVar1 = param_1;
      func_0x000107c42924();
      func_0x000107c61180();
      if (lVar1 == 0) {
        uStack_68 = 0;
        uStack_70 = 0;
        lStack_58 = 0;
        uStack_60 = 0;
      }
      else {
        func_0x000107c60234(&uStack_70);
        func_0x000107c615e8(lVar1);
      }
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      lStack_38 = lStack_58;
      uStack_40 = uStack_60;
      if (lStack_58 == 0) {
        func_0x00010006e7f4(&uStack_50);
      }
      else {
        uVar2 = 0;
        FUN_1016b5ee4(0,0x112d4ede8,&PTR_PTR_1126ba8d8);
        plVar3 = &lStack_78;
        func_0x000107c6147c(plVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
        if (((ulong)plVar3 & 1) != 0) {
          lVar1 = lStack_78;
          func_0x000107c61174(lStack_78);
          lVar4 = lVar1;
          func_0x000107c453d0();
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(param_1);
          return lVar4 == 0x19;
        }
      }
    }
    func_0x000107c61170(param_1);
  }
  return false;
}



/* Entry: 1016b5450; end: 1016b56bb;  */

long FUN_1016b5450(long param_1,undefined8 param_2)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b56ac);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c42924();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b56b0);
    (*pcVar1)();
  }
  lVar2 = lVar3;
  func_0x000107c453b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b56b4);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5d0f0();
  func_0x000107c61170(lVar2);
  if ((int)lVar3 == 0x19) {
    lVar2 = param_1;
    func_0x000107c4ce20();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b56b8);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c453bc();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b56bc);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c5b33c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      puVar4 = PTR_PTR_1126a78b8;
      func_0x000107c610f8(PTR_PTR_1126a78b8);
      func_0x000107c453e4();
      lVar3 = lVar2;
      func_0x000107c4f4c8(lVar2);
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c57958(puVar4);
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
      func_0x000107c59408(puVar5);
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



/* Entry: 1016b56bc; end: 1016b5893;  */

undefined * FUN_1016b56bc(undefined8 param_1,undefined8 param_2,undefined *param_3)

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
  if (puVar5 == (undefined *)0x17) {
    puVar5 = param_3;
    func_0x000107c4a790();
    func_0x000107c61180();
    puVar1 = puVar5;
    func_0x0001016b5338();
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
      FUN_1016b5ee4(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
      puVar3 = puVar5;
      func_0x000107c5fc54(puVar5,uVar2);
      func_0x000107c61170(puVar5);
    }
    puVar4 = PTR_PTR_1126ba8a8;
    func_0x000107c61168(PTR_PTR_1126ba8a8);
    uVar2 = 0;
    FUN_1016b5ee4(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
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
    FUN_1016b5450(puVar1,puVar4);
    func_0x000107c61170(puVar1);
    param_3 = puVar4;
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  func_0x000107c61170(param_3);
  return puVar5;
}



/* Entry: 1016b5894; end: 1016b5a47;  */

undefined * FUN_1016b5894(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  func_0x000107c61174();
  lVar3 = param_1;
  func_0x000107c453d4();
  if (lVar3 == -0x508705d3) {
    lVar3 = param_1;
    func_0x000107c453cc();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5b324();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_1);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c4f470();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000103ee3360(0);
        lVar5 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000103ee0004(lVar5,param_2);
        func_0x000107c6142c(param_2);
        puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (param_3 != (undefined *)0x0) {
          puVar1 = param_3;
        }
        puVar6 = PTR_PTR_1126ba7d8;
        func_0x000107c61168(PTR_PTR_1126ba7d8);
        uVar7 = 0;
        FUN_1016b5ee4(0,0x112dc0098,&PTR_PTR_1126bf730);
        func_0x000107c61434(param_3);
        puVar8 = puVar1;
        func_0x000107c5fc48(puVar1,uVar7);
        func_0x000107c6142c(puVar1);
        func_0x000107c453c8(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(lVar4);
        return puVar6;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016b5a48);
      (*pcVar2)();
    }
  }
  else {
    func_0x000107c61170(param_1);
  }
  return (undefined *)0x0;
}



/* Entry: 1016b5a48; end: 1016b5b3b;  */

long FUN_1016b5a48(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c453d4();
  if (lVar2 == -0x508705d3) {
    lVar2 = param_1;
    func_0x000107c453cc();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5b324();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c4f470();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000103ee3360(0);
        lVar4 = lVar2;
        func_0x000107c5faec(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000103ee0004(lVar4,param_2);
        func_0x000107c61170(lVar3);
        func_0x000107c6142c(param_2);
        return lVar4;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b5b3c);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107c61170(param_1);
  }
  return 0;
}



/* Entry: 1016b5b3c; end: 1016b5ed3;  */

void FUN_1016b5b3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c453d0();
  if (lVar1 == 0x17) {
    lVar1 = param_1;
    func_0x000107c4a790();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001016b5338();
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



/* Entry: 1016b5ed4; end: 1016b5ee3;  */

undefined1  [16] FUN_1016b5ed4(void)

{
  return ZEXT816(0x1103f6d30);
}



/* Entry: 1016b5ee4; end: 1016b5f23;  */

void FUN_1016b5ee4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016b5f24; end: 1016b5f27; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl isContextUnlockSupportedForStickerState:] */

uint FUN_1016b5f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016b5d2c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1016b5f28; end: 1016b5f2b; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl isConversionSupportedForStickerState:] */

uint FUN_1016b5f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001016b5d2c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1016b5f2c; end: 1016b5f2f; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl sojuGalleryInfoFilterForCTItemInstance:] */

void FUN_1016b5f2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1016b5f30; end: 1016b5f43; -[_TtC25SnapMeStickerInjectorImpl25SnapMeStickerInjectorImpl prepareItemInstanceForContextAction:] */

void FUN_1016b5f30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1016b5f44; end: 1016b5f77;  */

void FUN_1016b5f44(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1016b5f78; end: 1016b6047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b5f78(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112dc0238;
  lVar2 = unaff_x20;
  FUN_1016b744c();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112dc0240) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016b6048; end: 1016b60bb; -[SCSnapMeSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b6048(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112dc0238;
  func_0x000107c61174();
  uVar3 = param_3;
  FUN_1016b744c();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112dc0240) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016b60bc; end: 1016b612b; -[SCSnapMeSticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b60bc(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112dc0238;
  lVar3 = param_1;
  FUN_1016b744c();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCSnapMeSticker/SnapMeSticker.swift",0x23,2,0x18,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016b612c);
  (*pcVar2)();
}



/* Entry: 1016b612c; end: 1016b620b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1016b612c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x0001016b66f0(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dc0240);
      uVar3 = *(undefined8 *)(lStack_58 + _DAT_112dc0240);
      func_0x000107c61174(uVar3);
      func_0x000107c60118(uVar5,uVar3);
      uVar4 = (uint)uVar5;
      func_0x000107c61170(lStack_58);
      func_0x000107c61170(uVar3);
      goto LAB_1016b61f4;
    }
  }
  uVar4 = 0;
LAB_1016b61f4:
  return uVar4 & 1;
}



/* Entry: 1016b620c; end: 1016b628b; -[SCSnapMeSticker isEqual:] */

uint FUN_1016b620c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1016b612c(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1016b628c; end: 1016b62b7; -[SCSnapMeSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1016b628c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112dc0240);
  func_0x000107c44c3c(uVar1);
  return uVar1 ^ 0x23147f9;
}



/* Entry: 1016b62b8; end: 1016b62bf; -[SCSnapMeSticker infoType] */

undefined8 FUN_1016b62b8(void)

{
  return 0x17;
}



/* Entry: 1016b62c0; end: 1016b62cb; -[SCSnapMeSticker stickerId] */

void FUN_1016b62c0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x454d5f50414e53;
  uVar3 = 0xe700000000000000;
  func_0x000107c5fadc(0x454d5f50414e53,0xe700000000000000);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb990)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b62cc; end: 1016b62d7; -[SCSnapMeSticker shortLoggingName] */

void FUN_1016b62cc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x454d5f50414e53;
  uVar3 = 0xe700000000000000;
  func_0x000107c5fadc(0x454d5f50414e53,0xe700000000000000);
  lVar2 = lVar1;
  (*(code *)&SUB_108ebb9cc)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b62d8; end: 1016b634f;  */

void FUN_1016b62d8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x454d5f50414e53;
  uVar3 = 0xe700000000000000;
  func_0x000107c5fadc(0x454d5f50414e53,0xe700000000000000);
  lVar2 = lVar1;
  (*param_3)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016b6350; end: 1016b635f; -[SCSnapMeSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b6350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dc0238));
  return;
}



/* Entry: 1016b6360; end: 1016b636f; -[SCSnapMeSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b6360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dc0240));
  return;
}



/* Entry: 1016b6370; end: 1016b6377; -[SCSnapMeSticker supportedFlows] */

undefined8 FUN_1016b6370(void)

{
  return 0;
}



/* Entry: 1016b6378; end: 1016b6383; -[SCSnapMeSticker intrinsicSize] */

undefined1  [16] FUN_1016b6378(void)

{
  return ZEXT816(0);
}



/* Entry: 1016b6384; end: 1016b6533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1016b6384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5d0f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dc0238);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc0240);
  puVar1 = PTR_PTR_1126ba898;
  func_0x000107c610f8(PTR_PTR_1126ba898);
  uVar2 = 0;
  func_0x0001016b66f0(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c5fc48(param_7,uVar2);
  uVar2 = 0;
  func_0x0001016b66f0(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc48(param_10,uVar2);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  return puVar1;
}



/* Entry: 1016b6534; end: 1016b6657; -[SCSnapMeSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_1016b6534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001016b66f0(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0;
  func_0x0001016b66f0(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc54(param_12,uVar1);
  func_0x000107c61174(param_7);
  uVar1 = param_9;
  FUN_1016b6384(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b6658; end: 1016b66b7; -[SCSnapMeSticker init] */

void FUN_1016b6658(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapMeSticker.SnapMeSticker",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b6684);
  (*pcVar1)();
}



/* Entry: 1016b66b8; end: 1016b672f; -[SCSnapMeSticker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016b66d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b66d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b66b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc0238));
  return;
}



/* Entry: 1016b6730; end: 1016b674f;  */

void FUN_1016b6730(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5e80);
  return;
}



/* Entry: 1016b6750; end: 1016b6763;  */

void FUN_1016b6750(void)

{
  uRam0000000113802c38 = 0x405d7cb780346dc6;
  uRam0000000113802c30 = 0x40739a1cac083127;
  return;
}



/* Entry: 1016b6764; end: 1016b6c1f;  */

/* WARNING: Possible PIC construction at 0x0001016b6850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b6888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b68a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b68c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b68e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b6994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b69d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b6aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b6bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b6bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b6bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b694c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b6bd0) */
/* WARNING: Removing unreachable block (ram,0x0001016b6bc0) */
/* WARNING: Removing unreachable block (ram,0x0001016b6bb0) */
/* WARNING: Removing unreachable block (ram,0x0001016b6aa8) */
/* WARNING: Removing unreachable block (ram,0x0001016b69d4) */
/* WARNING: Removing unreachable block (ram,0x0001016b6998) */
/* WARNING: Removing unreachable block (ram,0x0001016b68ec) */
/* WARNING: Removing unreachable block (ram,0x0001016b68cc) */
/* WARNING: Removing unreachable block (ram,0x0001016b6948) */
/* WARNING: Removing unreachable block (ram,0x0001016b68d4) */
/* WARNING: Removing unreachable block (ram,0x0001016b68ac) */
/* WARNING: Removing unreachable block (ram,0x0001016b6c1c) */
/* WARNING: Removing unreachable block (ram,0x0001016b68b0) */
/* WARNING: Removing unreachable block (ram,0x0001016b688c) */
/* WARNING: Removing unreachable block (ram,0x0001016b6c18) */
/* WARNING: Removing unreachable block (ram,0x0001016b6890) */
/* WARNING: Removing unreachable block (ram,0x0001016b6854) */
/* WARNING: Removing unreachable block (ram,0x0001016b6c14) */
/* WARNING: Removing unreachable block (ram,0x0001016b6870) */
/* WARNING: Removing unreachable block (ram,0x0001016b6950) */
/* WARNING: Removing unreachable block (ram,0x0001016b6958) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b6764(undefined *param_1,long param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [24];
  
  if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
    param_1 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c42d78();
    func_0x000107c61180();
    (*param_3)();
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(param_2);
    FUN_1016b744c();
    lVar4 = 0;
    FUN_1016b8804();
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112dc02a0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112dc02a8);
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000103ede3d8(lVar4,param_1,param_2);
    lVar4 = lRam0000000112dc0270;
    func_0x000107c61174();
    if (lVar4 != -1) {
      func_0x000107c61568(0x112dc0270,FUN_1016b6750);
    }
    uVar3 = uRam0000000113802c38;
    uVar2 = uRam0000000113802c30;
    puVar1 = (undefined8 *)(param_1 + _DAT_11302c858);
    func_0x000107c61428(puVar1,auStack_88,1,0);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016b6c20; end: 1016b6d3f;  */

void FUN_1016b6c20(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_1103f6e18;
  func_0x000107c613fc(&UNK_1103f6e18,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar2 = &UNK_1103f7048;
  func_0x000107c613fc(&UNK_1103f7048,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_1103f7070;
  func_0x000107c613fc(&UNK_1103f7070,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d97c4f8;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c6157c(param_2);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0xce;
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10d97c500,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1016b6d40; end: 1016b6daf;  */

void FUN_1016b6d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b6db0,uVar1,uVar2);
  return;
}



/* Entry: 1016b6db0; end: 1016b6e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b6db0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar1 = (undefined8 *)(lVar6 + _DAT_11302c880);
    func_0x000107c61428(puVar1,unaff_x22 + 0x28,1,0);
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    func_0x000107c6157c(uVar4);
    FUN_1016b3d9c(uVar3,uVar5);
    func_0x000107c61170(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0001016b6e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar6 == 0);
  return;
}



/* Entry: 1016b6e70; end: 1016b6eb3;  */

void FUN_1016b6e70(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001016b6eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1016b6eb4; end: 1016b6fcb;  */

void FUN_1016b6eb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_1103f6e18;
  func_0x000107c613fc(&UNK_1103f6e18,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar2 = &UNK_1103f6ff8;
  func_0x000107c613fc(&UNK_1103f6ff8,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_1103f7020;
  func_0x000107c613fc(&UNK_1103f7020,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d97c4d0;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0xce;
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10d97c4e0,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1016b6fcc; end: 1016b703b;  */

void FUN_1016b6fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b703c,uVar1,uVar2);
  return;
}



/* Entry: 1016b703c; end: 1016b7157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b703c(void)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    uVar4 = 1;
  }
  else {
    dVar9 = *(double *)(unaff_x22 + 0x48);
    dVar8 = *(double *)(unaff_x22 + 0x50);
    pdVar1 = (double *)(lVar5 + _DAT_11302c858);
    func_0x000107c61428(pdVar1,unaff_x22 + 0x28,1,0);
    dVar6 = *pdVar1;
    dVar7 = pdVar1[1];
    bVar2 = false;
    if ((dVar9 == dVar6) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
      bVar2 = dVar8 == dVar7;
    }
    if (!bVar2) {
      dVar8 = *(double *)(unaff_x22 + 0x50);
      *pdVar1 = *(double *)(unaff_x22 + 0x48);
      pdVar1[1] = dVar8;
      func_0x000107c3f74c(lVar5);
      func_0x000107c3ec60(lVar5);
      func_0x000107c52e44(lVar5);
      func_0x000107c532b4(dVar6,dVar7,lVar5);
      lVar3 = lVar5;
      func_0x000107c5b07c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4f1b4();
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61170(lVar5);
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001016b7154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 1016b7158; end: 1016b723b;  */

/* WARNING: Possible PIC construction at 0x0001016b721c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b7220) */

void FUN_1016b7158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_1103f6fa8;
  func_0x000107c613fc(&UNK_1103f6fa8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  puVar2 = &UNK_1103f6fd0;
  func_0x000107c613fc(&UNK_1103f6fd0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d97c4b0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10d97c4c0,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1016b723c; end: 1016b72ab;  */

void FUN_1016b723c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b72ac,uVar1,uVar2);
  return;
}



/* Entry: 1016b72ac; end: 1016b7327;  */

void FUN_1016b72ac(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  pcVar2 = *(code **)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000103ede508(uVar1);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  (*pcVar2)();
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001016b7324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016b7328; end: 1016b7363;  */

void FUN_1016b7328(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016b7360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016b7364; end: 1016b73db; +[SCSnapMeStickerHelpers snapMeStickerViewFromItemInstance:runtime:completion:] */

void FUN_1016b7364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  FUN_1016b76f0(param_3,param_4,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
  return;
}



/* Entry: 1016b73dc; end: 1016b7417; -[SCSnapMeStickerHelpers init] */

void FUN_1016b73dc(undefined8 param_1)

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



/* Entry: 1016b7418; end: 1016b744b;  */

void FUN_1016b7418(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016b744c; end: 1016b75cb;  */

undefined * FUN_1016b744c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    FUN_1016b7f50(0,0x112d4ede8,&PTR_PTR_1126ba8d8);
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  func_0x000107c61174();
  uVar4 = 0x454d5f50414e53;
  func_0x000107c5fadc(0x454d5f50414e53,0xe700000000000000);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b75cc);
  (*pcVar1)();
}



/* Entry: 1016b75cc; end: 1016b7697;  */

undefined1  [16] FUN_1016b75cc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (param_1 != 0) {
    func_0x000107c4ce20();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b7690);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c453bc();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b7694);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5b33c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b7698);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c4f4c8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      param_1 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      goto LAB_1016b767c;
    }
    param_1 = 0;
  }
  param_2 = 0xe000000000000000;
LAB_1016b767c:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1016b7698; end: 1016b76cf;  */

void FUN_1016b7698(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_1103f6e18;
  func_0x000107c613fc(&UNK_1103f6e18,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c61170(lVar2);
  puVar3 = &UNK_1103f7048;
  func_0x000107c613fc(&UNK_1103f7048,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar1 = &UNK_1103f7070;
  func_0x000107c613fc(&UNK_1103f7070,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d97c4f8;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  func_0x000107c6157c(param_2);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar5 = 0xce;
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10d97c500,puVar1,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 1016b76d0; end: 1016b76ef;  */

void FUN_1016b76d0(void)

{
  func_0x000107c61168(&PTR_PTR_1127e5f48);
  return;
}



/* Entry: 1016b76f0; end: 1016b7c17;  */

/* WARNING: Possible PIC construction at 0x0001016b7804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b783c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b785c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b787c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b7898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b7964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b79a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b7a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b7b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b7b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b7bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016b791c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b7bb0) */
/* WARNING: Removing unreachable block (ram,0x0001016b7ba0) */
/* WARNING: Removing unreachable block (ram,0x0001016b7b90) */
/* WARNING: Removing unreachable block (ram,0x0001016b7a78) */
/* WARNING: Removing unreachable block (ram,0x0001016b79a4) */
/* WARNING: Removing unreachable block (ram,0x0001016b7968) */
/* WARNING: Removing unreachable block (ram,0x0001016b789c) */
/* WARNING: Removing unreachable block (ram,0x0001016b7880) */
/* WARNING: Removing unreachable block (ram,0x0001016b7918) */
/* WARNING: Removing unreachable block (ram,0x0001016b7884) */
/* WARNING: Removing unreachable block (ram,0x0001016b7860) */
/* WARNING: Removing unreachable block (ram,0x0001016b7c0c) */
/* WARNING: Removing unreachable block (ram,0x0001016b7864) */
/* WARNING: Removing unreachable block (ram,0x0001016b7840) */
/* WARNING: Removing unreachable block (ram,0x0001016b7c00) */
/* WARNING: Removing unreachable block (ram,0x0001016b7844) */
/* WARNING: Removing unreachable block (ram,0x0001016b7808) */
/* WARNING: Removing unreachable block (ram,0x0001016b7bf4) */
/* WARNING: Removing unreachable block (ram,0x0001016b7824) */
/* WARNING: Removing unreachable block (ram,0x0001016b7920) */
/* WARNING: Removing unreachable block (ram,0x0001016b7928) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b76f0(undefined *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_88 [24];
  
  puVar4 = &UNK_1103f6ee0;
  func_0x000107c613fc(&UNK_1103f6ee0,0x18,7);
  *(long *)(puVar4 + 0x10) = param_3;
  if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
    param_1 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c60bc4(param_3);
    func_0x000107c42d78(param_1);
    func_0x000107c61180();
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    func_0x000107c61574(puVar4);
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c60bc4(param_3);
    func_0x000107c615f0(param_2);
    FUN_1016b744c();
    lVar5 = 0;
    FUN_1016b8804();
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar5 + _DAT_112dc02a0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112dc02a8);
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000103ede3d8(lVar5,param_1,param_2);
    lVar5 = lRam0000000112dc0270;
    func_0x000107c61174();
    if (lVar5 != -1) {
      func_0x000107c61568(0x112dc0270,FUN_1016b6750);
    }
    uVar3 = uRam0000000113802c38;
    uVar2 = uRam0000000113802c30;
    puVar1 = (undefined8 *)(param_1 + _DAT_11302c858);
    func_0x000107c61428(puVar1,auStack_88,1,0);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016b7c18; end: 1016b7c27;  */

void FUN_1016b7c18(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001016b7c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1016b7c28; end: 1016b7c5b;  */

void FUN_1016b7c28(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016b7c5c; end: 1016b7cbf;  */

void FUN_1016b7c5c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1016b7cc0;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = lVar4;
  plVar5[3] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b72ac,lVar3,lVar4);
  return;
}



/* Entry: 1016b7cc0; end: 1016b7cfb;  */

void FUN_1016b7cc0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016b7cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016b7cfc; end: 1016b7d6b;  */

void FUN_1016b7cfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016b7fc8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1016b7d6c; end: 1016b7dcb;  */

void FUN_1016b7d6c(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016b7dcc;
  plVar1[9] = lVar3;
  plVar1[10] = lVar4;
  plVar1[8] = lVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[0xb] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b703c,lVar3,lVar2);
  return;
}



/* Entry: 1016b7dcc; end: 1016b7e0f;  */

void FUN_1016b7dcc(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016b7e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1016b7e10; end: 1016b7e7f;  */

void FUN_1016b7e10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016b7fcc;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1016b7e80; end: 1016b7edf;  */

void FUN_1016b7e80(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016b7fc4;
  plVar3[9] = lVar1;
  plVar3[10] = lVar4;
  plVar3[8] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xb] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016b6db0,lVar1,lVar2);
  return;
}



/* Entry: 1016b7ee0; end: 1016b7f4f;  */

void FUN_1016b7ee0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016b7fd0;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1016b7f50; end: 1016b7f8f;  */

void FUN_1016b7f50(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1016b7f90; end: 1016b7fd3;  */

void FUN_1016b7f90(long param_1,long param_2)

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



/* Entry: 1016b7fd4; end: 1016b8033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b7fd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc02a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc02a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000103ede3d8(param_1,param_2);
  return;
}



/* Entry: 1016b8034; end: 1016b8167; -[_TtC15SCSnapMeSticker17SnapMeStickerView text] */

void FUN_1016b8034(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001016b808c();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016b8168; end: 1016b81c3; -[_TtC15SCSnapMeSticker17SnapMeStickerView setText:] */

void FUN_1016b8168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1016b81c4(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016b81c4; end: 1016b8387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b81c4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar6 = _DAT_11302c890;
  func_0x000107c61428(unaff_x20 + _DAT_11302c890,auStack_58,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  if (lVar6 != 0) {
    puVar2 = PTR_PTR_1126a78d0;
    func_0x000107c61168(PTR_PTR_1126a78d0);
    lVar3 = lVar6;
    func_0x000107c6148c(lVar6,puVar2);
    if (lVar3 != 0) {
      lVar7 = *(long *)(unaff_x20 + _DAT_11302c868);
      if (lVar7 == 0) {
        func_0x000107c61174(lVar6);
      }
      else {
        func_0x000107c61174(lVar6);
        func_0x000107c4ce20();
        func_0x000107c61180();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b8380);
          (*pcVar1)();
        }
        lVar4 = lVar7;
        func_0x000107c453bc();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b8384);
          (*pcVar1)();
        }
        lVar7 = lVar4;
        func_0x000107c5b33c();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b8388);
          (*pcVar1)();
        }
        uVar5 = param_1;
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c57988(lVar7);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uVar5);
      }
      puVar2 = PTR_PTR_1126a78c0;
      func_0x000107c610f8(PTR_PTR_1126a78c0);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c48190(puVar2);
      func_0x000107c61170(param_1);
      FUN_1016b8824(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = 1;
      func_0x000107c6010c(1);
      func_0x000107c557dc(puVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c5a588(lVar3);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 1016b8388; end: 1016b83a3; -[_TtC15SCSnapMeSticker17SnapMeStickerView textInputDidChangeBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b8388(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112dc02a0);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100c75f50;
    puStack_60 = &UNK_1103f7100;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1016b83a4; end: 1016b845f; -[_TtC15SCSnapMeSticker17SnapMeStickerView setTextInputDidChangeBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b83a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1103f70e8;
    func_0x000107c613fc(&UNK_1103f70e8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_1016b888c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112dc02a0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100cb94dc(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1016b8460; end: 1016b847b; -[_TtC15SCSnapMeSticker17SnapMeStickerView textInputDidReturnBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b8460(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112dc02a8);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1103f70b0;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1016b847c; end: 1016b851f;  */

void FUN_1016b847c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + *param_3);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    ppuVar3 = &puStack_78;
    uStack_68 = param_4;
    uStack_60 = param_5;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1016b8520; end: 1016b85db; -[_TtC15SCSnapMeSticker17SnapMeStickerView setTextInputDidReturnBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b8520(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1103f7098;
    func_0x000107c613fc(&UNK_1103f7098,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_1016b8864;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112dc02a8);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100cb94dc(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1016b85dc; end: 1016b8643;  */

/* WARNING: Possible PIC construction at 0x0001016b85f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b85f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b85dc(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112dc02a0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(unaff_x20 + _DAT_112dc02a0))[1]);
    return;
  }
  return;
}



/* Entry: 1016b8644; end: 1016b8683; -[_TtC15SCSnapMeSticker17SnapMeStickerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016b8664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016b8668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b8644(long param_1)

{
  if (*(long *)(param_1 + _DAT_112dc02a0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112dc02a0))[1]);
    return;
  }
  return;
}


