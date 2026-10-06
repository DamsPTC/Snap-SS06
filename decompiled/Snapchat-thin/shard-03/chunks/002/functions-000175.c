/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10268a7cc; end: 10268a9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10268a7cc(undefined8 param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lStack_68;
  long alStack_60 [3];
  long *plStack_48;
  
  lVar7 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,alStack_60);
  if (plStack_48 == (long *)0x0) {
    func_0x00010006e7f4(alStack_60);
  }
  else {
    plVar1 = &lStack_68;
    func_0x000107c6147c(plVar1,alStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar1 & 1) != 0) {
      plVar1 = *(long **)(unaff_x20 + _DAT_112eb3910);
      if (plVar1 == *(long **)(lStack_68 + _DAT_112eb3910) &&
          ((long *)(unaff_x20 + _DAT_112eb3910))[1] == ((long *)(lStack_68 + _DAT_112eb3910))[1]) {
        plVar3 = (long *)0x1;
      }
      else {
        func_0x000107c605b8();
        plVar3 = plVar1;
      }
      if (*(long *)(unaff_x20 + _DAT_112eb3918) == 0) {
        uVar6 = (uint)(*(long *)(lStack_68 + _DAT_112eb3918) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_68 + _DAT_112eb3918);
        if (lVar7 == 0) {
          plVar1 = (long *)0x0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          func_0x00010268b97c();
        }
        alStack_60[0] = lVar7;
        plStack_48 = plVar1;
        func_0x000107c61174(lVar7);
        uVar6 = 0;
        FUN_10268a9f4();
        plVar1 = alStack_60;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_112eb3920) == 0) {
        uVar2 = (uint)(*(long *)(lStack_68 + _DAT_112eb3920) == 0);
      }
      else {
        lVar7 = *(long *)(lStack_68 + _DAT_112eb3920);
        if (lVar7 == 0) {
          plVar1 = (long *)0x0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          func_0x00010268b95c();
        }
        alStack_60[0] = lVar7;
        plStack_48 = plVar1;
        func_0x000107c61174(lVar7);
        plVar1 = alStack_60;
        func_0x00010268aab4(plVar1);
        uVar2 = (uint)plVar1;
        plVar1 = alStack_60;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_112eb3928) == 0) {
        lVar5 = *(long *)(lStack_68 + _DAT_112eb3928);
        lVar7 = lVar5;
        func_0x000107c61174(lVar5);
        func_0x000107c61170(lStack_68);
        if (lVar5 == 0) {
          uVar4 = 1;
        }
        else {
          func_0x000107c61170(lVar7);
          uVar4 = 0;
        }
      }
      else {
        lVar7 = *(long *)(lStack_68 + _DAT_112eb3928);
        if (lVar7 == 0) {
          plVar1 = (long *)0x0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          func_0x00010268b93c();
        }
        alStack_60[0] = lVar7;
        plStack_48 = plVar1;
        func_0x000107c61174(lVar7);
        plVar1 = alStack_60;
        func_0x00010268ab98(plVar1);
        uVar4 = (uint)plVar1;
        func_0x000107c61170(lStack_68);
        func_0x00010006e7f4(alStack_60);
      }
      if (((uint)plVar3 & uVar6 & 1) != 0) {
        uVar2 = uVar2 & uVar4;
        goto LAB_10268a9d8;
      }
    }
  }
  uVar2 = 0;
LAB_10268a9d8:
  return uVar2 & 1;
}



/* Entry: 10268a9f4; end: 10268ac3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10268a9f4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
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
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb3930);
      uVar3 = *(undefined8 *)(lStack_58 + _DAT_112eb3930);
      func_0x000107c61174(uVar3);
      func_0x000107c49cec(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lStack_58);
      return uVar4;
    }
  }
  return 0;
}



/* Entry: 10268ac40; end: 10268ac4b; -[SCMapAdsPromotedPlaceBannerAction isEqual:] */

uint FUN_10268ac40(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_10268a7cc(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10268ac4c; end: 10268ad97;  */

/* WARNING: Possible PIC construction at 0x00010268aca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268acf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268ad3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268acf4) */
/* WARNING: Removing unreachable block (ram,0x00010268acac) */
/* WARNING: Removing unreachable block (ram,0x00010268ad40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268ac4c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb3910);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb3910))[1]);
  func_0x000107c5fadc(0x44495f4543414c50,0xe800000000000000);
  func_0x000107c42744(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10268ad98; end: 10268ade7; -[SCMapAdsPromotedPlaceBannerAction encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x00010268add0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268add4) */

void FUN_10268ad98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10268ac4c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10268ade8; end: 10268ae17;  */

void FUN_10268ade8(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_10268ae18(param_1);
  return;
}



/* Entry: 10268ae18; end: 10268b1a7;  */

undefined8 FUN_10268ae18(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar3;
  int iVar4;
  
  uVar7 = 0;
  iVar2 = (int)&uStack_b0;
  iVar3 = (int)&uStack_b0;
  iVar4 = (int)&uStack_b0;
  uVar5 = 0x44495f4543414c50;
  func_0x000107c5fadc(0x44495f4543414c50,0xe800000000000000);
  lVar6 = param_1;
  func_0x000107c41478();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&uStack_a0,lVar6);
    func_0x000107c615e8(lVar6);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x000107c61170(param_1);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    func_0x000107c6147c(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar5 = uStack_b0;
    if ((uVar7 & 1) != 0) {
      lVar8 = 0x5344415f50414e53;
      func_0x000107c5fadc(0x5344415f50414e53,0xe800000000000000);
      lVar6 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar6 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x000107c60234(&uStack_a0,lVar6);
        func_0x000107c615e8(lVar6);
        lVar8 = lVar6;
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar9 = 0;
      }
      else {
        func_0x00010268b97c();
        func_0x000107c6147c(&uStack_b0,&uStack_80,puVar1 + 8,lVar8,6);
        uVar9 = uStack_b0;
        if (iVar2 == 0) {
          uVar9 = 0;
        }
      }
      lVar8 = 0x52505f444e415242;
      func_0x000107c5fadc(0x52505f444e415242,0xed0000454c49464f);
      lVar6 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar6 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x000107c60234(&uStack_a0,lVar6);
        func_0x000107c615e8(lVar6);
        lVar8 = lVar6;
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar10 = 0;
      }
      else {
        func_0x00010268b95c();
        func_0x000107c6147c(&uStack_b0,&uStack_80,puVar1 + 8,lVar8,6);
        uVar10 = uStack_b0;
        if (iVar3 == 0) {
          uVar10 = 0;
        }
      }
      lVar8 = 0x415454415f415443;
      func_0x000107c5fadc(0x415454415f415443,0xee00544e454d4843);
      lVar6 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar6 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x000107c60234(&uStack_a0,lVar6);
        func_0x000107c615e8(lVar6);
        lVar8 = lVar6;
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar11 = 0;
      }
      else {
        func_0x00010268b93c();
        func_0x000107c6147c(&uStack_b0,&uStack_80,puVar1 + 8,lVar8,6);
        uVar11 = uStack_b0;
        if (iVar4 == 0) {
          uVar11 = 0;
        }
      }
      func_0x000107c5fadc(uVar5,uStack_a8);
      func_0x000107c6142c(uStack_a8);
      func_0x000107c47ee8();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar11);
      return unaff_x20;
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10268b1a8; end: 10268b1cf; -[SCMapAdsPromotedPlaceBannerAction initWithCoder:] */

void FUN_10268b1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10268ae18();
  return;
}



/* Entry: 10268b1d0; end: 10268b203; -[SCMapAdsPromotedPlaceBannerAction description] */

void FUN_10268b1d0(void)

{
  undefined1 auStack_48 [56];
  
  FUN_10268b99c(auStack_48);
  func_0x0001025e2474(auStack_48);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10268b204; end: 10268b24b; -[SCMapAdsPromotedPlaceBannerAction init] */

void FUN_10268b204(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MapAdsPromotedPlaceAdResponseParserServices/MapAdsPromotedPlaceBannerActionWrapper.swift"
                      ,0x58,2,0x5f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10268b24c);
  (*pcVar1)();
}



/* Entry: 10268b24c; end: 10268b24f;  */

void FUN_10268b24c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10268b250; end: 10268b2ab; -[SCMapAdsPromotedPlaceBannerAction .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010268b280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268b284) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b250(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb3910 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb3918));
  return;
}



/* Entry: 10268b2ac; end: 10268b2c7; -[SCMapAdsPromotedPlaceBannerActionSnapAds adResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b2ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb3930));
  return;
}



/* Entry: 10268b2c8; end: 10268b2d3; -[SCMapAdsPromotedPlaceBannerActionSnapAds initWithAdResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eb3930) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10268b2d4; end: 10268b2df; -[SCMapAdsPromotedPlaceBannerActionSnapAds hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10268b2d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eb3930);
  func_0x000107c61174(param_1);
  func_0x000107c44c3c(uVar1);
  func_0x000107c60690();
  func_0x000107c606a4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10268b2e0; end: 10268b2eb; -[SCMapAdsPromotedPlaceBannerActionSnapAds isEqual:] */

uint FUN_10268b2e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_10268a9f4(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10268b2ec; end: 10268b333; -[SCMapAdsPromotedPlaceBannerActionSnapAds init] */

void FUN_10268b2ec(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MapAdsPromotedPlaceAdResponseParserServices/MapAdsPromotedPlaceBannerActionWrapper.swift"
                      ,0x58,2,0x9a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10268b334);
  (*pcVar1)();
}



/* Entry: 10268b334; end: 10268b343; -[SCMapAdsPromotedPlaceBannerActionSnapAds .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb3930));
  return;
}



/* Entry: 10268b344; end: 10268b34f; -[SCMapAdsPromotedPlaceBannerActionBrandProfile profileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b344(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb3938);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb3938))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268b350; end: 10268b397;  */

void FUN_10268b350(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268b398; end: 10268b3ab; -[SCMapAdsPromotedPlaceBannerActionBrandProfile isPublisherProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10268b398(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112eb3940);
}



/* Entry: 10268b3ac; end: 10268b417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b3ac(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3938);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112eb3940) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10268b418; end: 10268b48b; -[SCMapAdsPromotedPlaceBannerActionBrandProfile initWithProfileId:isPublisherProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b418(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb3938);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_112eb3940) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10268b48c; end: 10268b4bf; -[SCMapAdsPromotedPlaceBannerActionBrandProfile hash] */

undefined8 FUN_10268b48c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10268a748();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10268b4c0; end: 10268b4cb; -[SCMapAdsPromotedPlaceBannerActionBrandProfile isEqual:] */

uint FUN_10268b4c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  (*(code *)0x10268aab4)(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10268b4cc; end: 10268b513; -[SCMapAdsPromotedPlaceBannerActionBrandProfile init] */

void FUN_10268b4cc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MapAdsPromotedPlaceAdResponseParserServices/MapAdsPromotedPlaceBannerActionWrapper.swift"
                      ,0x58,2,0xd8,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10268b514);
  (*pcVar1)();
}



/* Entry: 10268b514; end: 10268b527; -[SCMapAdsPromotedPlaceBannerActionBrandProfile .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb3938 + 8))
  ;
  return;
}



/* Entry: 10268b528; end: 10268b543; -[SCMapAdsPromotedPlaceBannerActionAttachment attachmentModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb3948));
  return;
}



/* Entry: 10268b544; end: 10268b597;  */

void FUN_10268b544(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10268b598; end: 10268b5a3; -[SCMapAdsPromotedPlaceBannerActionAttachment initWithAttachmentModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eb3948) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10268b5a4; end: 10268b603;  */

void FUN_10268b5a4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + *param_4) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10268b604; end: 10268b60f; -[SCMapAdsPromotedPlaceBannerActionAttachment hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10268b604(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eb3948);
  func_0x000107c61174(param_1);
  func_0x000107c44c3c(uVar1);
  func_0x000107c60690();
  func_0x000107c606a4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10268b610; end: 10268b683;  */

undefined8 FUN_10268b610(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar1 = *(undefined8 *)(param_1 + *param_3);
  func_0x000107c61174(param_1);
  func_0x000107c44c3c(uVar1);
  func_0x000107c60690();
  func_0x000107c606a4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10268b684; end: 10268b68f; -[SCMapAdsPromotedPlaceBannerActionAttachment isEqual:] */

uint FUN_10268b684(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  (*(code *)0x10268ab98)(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10268b690; end: 10268b71b;  */

uint FUN_10268b690(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  (*param_4)(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10268b71c; end: 10268b797; -[SCMapAdsPromotedPlaceBannerActionAttachment init] */

void FUN_10268b71c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MapAdsPromotedPlaceAdResponseParserServices/MapAdsPromotedPlaceBannerActionWrapper.swift"
                      ,0x58,2,0x111,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10268b764);
  (*pcVar1)();
}



/* Entry: 10268b798; end: 10268b7a7; -[SCMapAdsPromotedPlaceBannerActionAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb3948));
  return;
}



/* Entry: 10268b7a8; end: 10268b93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b7a8(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined1 ***pppuVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 **ppuStack_80;
  undefined1 **ppuStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_b0;
  lVar10 = unaff_x20;
  func_0x000107c614f0();
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb3910);
  puVar2[1] = uStack_58;
  *puVar2 = uStack_60;
  lVar9 = param_1[2];
  if (lVar9 == 0) {
    func_0x000107c61434(uStack_58);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    func_0x00010268b97c();
    func_0x000107c610f8();
    *(long *)(lVar10 + _DAT_112eb3930) = lVar9;
    func_0x000100402194(&uStack_60,auStack_a0);
    puVar3 = PTR_s_init_1125d9248;
    func_0x000107c61174(lVar9);
    func_0x000107c61154(auStack_b0,puVar3);
  }
  *(undefined1 **)(unaff_x20 + _DAT_112eb3918) = puVar4;
  lVar10 = param_1[4];
  if (lVar10 == 0) {
    ppuVar6 = (undefined1 **)0x0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 5);
    uVar11 = param_1[3];
    func_0x00010268b95c();
    puVar5 = puVar4;
    func_0x000107c610f8();
    puVar3 = PTR_s_init_1125d9248;
    *(undefined8 *)(puVar5 + _DAT_112eb3938) = uVar11;
    *(long *)((long)(puVar5 + _DAT_112eb3938) + 8) = lVar10;
    puVar5[_DAT_112eb3940] = bVar1 & 1;
    puStack_90 = puVar5;
    puStack_88 = puVar4;
    func_0x000107c61434(lVar10);
    ppuVar6 = &puStack_90;
    func_0x000107c61154(ppuVar6,puVar3);
  }
  *(undefined1 ***)(unaff_x20 + _DAT_112eb3920) = ppuVar6;
  lVar10 = param_1[6];
  if (lVar10 == 0) {
    pppuVar8 = (undefined1 ***)0x0;
  }
  else {
    func_0x00010268b93c();
    ppuVar7 = ppuVar6;
    func_0x000107c610f8();
    puVar3 = PTR_s_init_1125d9248;
    *(long *)((long)ppuVar7 + _DAT_112eb3948) = lVar10;
    ppuStack_80 = ppuVar7;
    ppuStack_78 = ppuVar6;
    func_0x000107c61174(lVar10);
    pppuVar8 = &ppuStack_80;
    func_0x000107c61154(pppuVar8,puVar3);
  }
  *(undefined1 ****)(unaff_x20 + _DAT_112eb3928) = pppuVar8;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10268b93c; end: 10268b99b;  */

void FUN_10268b93c(void)

{
  func_0x000107c61168(&PTR_PTR_112856f50);
  return;
}



/* Entry: 10268b99c; end: 10268ba97;  */

/* WARNING: Possible PIC construction at 0x00010268ba28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268ba2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268b99c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eb3910);
  uVar2 = ((undefined8 *)(param_2 + _DAT_112eb3910))[1];
  if (*(long *)(param_2 + _DAT_112eb3918) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + _DAT_112eb3918) + _DAT_112eb3930);
    func_0x000107c61174(uVar3);
  }
  if (*(long *)(param_2 + _DAT_112eb3920) == 0) {
    if (*(long *)(param_2 + _DAT_112eb3928) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_2 + _DAT_112eb3928) + _DAT_112eb3948);
      func_0x000107c61174(uVar4);
    }
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[6] = uVar4;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_2 + _DAT_112eb3920) + _DAT_112eb3938 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
  return;
}



/* Entry: 10268ba98; end: 10268bab7;  */

void FUN_10268ba98(void)

{
  func_0x000107c61168(&PTR_PTR_112856cd0);
  return;
}



/* Entry: 10268bab8; end: 10268babb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268bab8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3938);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112eb3940) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10268babc; end: 10268babf; -[SCMapAdsPromotedPlaceBannerActionSnapAds description] */

void FUN_10268babc(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10268bac0; end: 10268bac3; -[SCMapAdsPromotedPlaceBannerActionBrandProfile description] */

void FUN_10268bac0(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10268bac4; end: 10268bacf; -[SCMapAdsPromotedPlaceBannerActionAttachment description] */

void FUN_10268bac4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10268bad0; end: 10268bad3; -[SCMapAdsPromotedPlaceBannerActionSnapAds copyWithZone:] */

void FUN_10268bad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10268bad4; end: 10268bad7; -[SCMapAdsPromotedPlaceBannerAction copyWithZone:] */

void FUN_10268bad4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10268bad8; end: 10268badb; -[SCMapAdsPromotedPlaceBannerActionBrandProfile copyWithZone:] */

void FUN_10268bad8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10268badc; end: 10268baeb; -[SCMapAdsPromotedPlaceBannerActionAttachment copyWithZone:] */

void FUN_10268badc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10268baec; end: 10268baf7; -[SCMapAdsPromotedPlaceBannerMetadata placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268baec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb39f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb39f0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268baf8; end: 10268bb03; -[SCMapAdsPromotedPlaceBannerMetadata title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268baf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb39f8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb39f8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268bb04; end: 10268bb0f; -[SCMapAdsPromotedPlaceBannerMetadata imageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268bb04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb3a00);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb3a00))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268bb10; end: 10268bb1b; -[SCMapAdsPromotedPlaceBannerMetadata venueName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268bb10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb3a08);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb3a08))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268bb1c; end: 10268bb27; -[SCMapAdsPromotedPlaceBannerMetadata venueId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268bb1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb3a10);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb3a10))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268bb28; end: 10268bb37; -[SCMapAdsPromotedPlaceBannerMetadata bannerAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268bb28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb3a18));
  return;
}



/* Entry: 10268bb38; end: 10268bb43; -[SCMapAdsPromotedPlaceBannerMetadata adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268bb38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb3a20);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb3a20))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268bb44; end: 10268bb8b;  */

void FUN_10268bb44(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268bb8c; end: 10268bda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268bb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb39f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb39f8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3a00);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3a08);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3a10);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112eb3a18) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3a20);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10268bda4; end: 10268beff; -[SCMapAdsPromotedPlaceBannerMetadata initWithPlaceId:title:imageURL:venueName:venueId:bannerAction:adId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268bda4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c5faec();
  uVar5 = uVar4;
  func_0x000107c5faec();
  uVar6 = uVar5;
  func_0x000107c5faec();
  uVar7 = uVar6;
  func_0x000107c5faec();
  uVar8 = uVar7;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb39f0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb39f8);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb3a00);
  *puVar1 = param_5;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb3a08);
  *puVar1 = param_6;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb3a10);
  *puVar1 = param_7;
  puVar1[1] = uVar7;
  *(undefined8 *)(param_1 + _DAT_112eb3a18) = param_8;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb3a20);
  *puVar1 = param_9;
  puVar1[1] = uVar8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  func_0x000107c61174(param_8);
  func_0x000107c61154(&lStack_70,puVar2);
  return;
}



/* Entry: 10268bf00; end: 10268bf3f;  */

undefined8 FUN_10268bf00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_10268cf58(param_1);
  FUN_1025eb17c(param_1);
  return uVar1;
}



/* Entry: 10268bf40; end: 10268bf73; -[SCMapAdsPromotedPlaceBannerMetadata hash] */

undefined8 FUN_10268bf40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10268bf74();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10268bf74; end: 10268c0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268bf74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb39f0);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb39f0))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb39f8);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb39f8))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb3a00);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb3a00))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb3a08);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb3a08))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb3a10);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb3a10))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  FUN_10268a58c();
  func_0x000107c60690();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb3a20);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb3a20))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  func_0x000107c606a4();
  return;
}



/* Entry: 10268c100; end: 10268c35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10268c100(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar2 = &lStack_88;
    func_0x000107c6147c(plVar2,auStack_80,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112eb39f0);
      if (lVar1 == *(long *)(lStack_88 + _DAT_112eb39f0) &&
          ((long *)(unaff_x20 + _DAT_112eb39f0))[1] == ((long *)(lStack_88 + _DAT_112eb39f0))[1]) {
        uVar7 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar7 = (uint)lVar1 ^ 1;
      }
      lVar1 = *(long *)(unaff_x20 + _DAT_112eb39f8);
      if (lVar1 == *(long *)(lStack_88 + _DAT_112eb39f8) &&
          ((long *)(unaff_x20 + _DAT_112eb39f8))[1] == ((long *)(lStack_88 + _DAT_112eb39f8))[1]) {
        uVar8 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar8 = (uint)lVar1 ^ 1;
      }
      lVar1 = *(long *)(unaff_x20 + _DAT_112eb3a00);
      if (lVar1 == *(long *)(lStack_88 + _DAT_112eb3a00) &&
          ((long *)(unaff_x20 + _DAT_112eb3a00))[1] == ((long *)(lStack_88 + _DAT_112eb3a00))[1]) {
        uVar9 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar9 = (uint)lVar1 ^ 1;
      }
      lVar1 = *(long *)(unaff_x20 + _DAT_112eb3a08);
      if ((lVar1 == *(long *)(lStack_88 + _DAT_112eb3a08)) &&
         (((long *)(unaff_x20 + _DAT_112eb3a08))[1] == ((long *)(lStack_88 + _DAT_112eb3a08))[1])) {
        uVar10 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar10 = (uint)lVar1 ^ 1;
      }
      lVar1 = *(long *)(unaff_x20 + _DAT_112eb3a10);
      if ((lVar1 == *(long *)(lStack_88 + _DAT_112eb3a10)) &&
         (((long *)(unaff_x20 + _DAT_112eb3a10))[1] == ((long *)(lStack_88 + _DAT_112eb3a10))[1])) {
        uVar11 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar11 = (uint)lVar1 ^ 1;
      }
      uVar6 = *(undefined8 *)(lStack_88 + _DAT_112eb3a18);
      uVar3 = 0;
      FUN_10268ba98();
      auStack_80[0] = uVar6;
      lStack_68 = uVar3;
      func_0x000107c61174(uVar6);
      puVar4 = auStack_80;
      FUN_10268a7cc(puVar4);
      func_0x00010006e7f4(auStack_80);
      lVar1 = *(long *)(unaff_x20 + _DAT_112eb3a20);
      if ((lVar1 == *(long *)(lStack_88 + _DAT_112eb3a20)) &&
         (((long *)(unaff_x20 + _DAT_112eb3a20))[1] == ((long *)(lStack_88 + _DAT_112eb3a20))[1])) {
        uVar5 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar5 = (uint)lVar1;
      }
      func_0x000107c61170(lStack_88);
      if (((uVar7 | uVar8 | uVar9 | uVar10 | uVar11) & 1) == 0) {
        uVar5 = (uint)puVar4 & uVar5;
        goto LAB_10268c334;
      }
    }
  }
  uVar5 = 0;
LAB_10268c334:
  return uVar5 & 1;
}



/* Entry: 10268c360; end: 10268c3df; -[SCMapAdsPromotedPlaceBannerMetadata isEqual:] */

uint FUN_10268c360(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10268c100(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10268c3e0; end: 10268c3e3; -[SCMapAdsPromotedPlaceBannerMetadata copyWithZone:] */

void FUN_10268c3e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10268c3e4; end: 10268c647;  */

/* WARNING: Possible PIC construction at 0x00010268c440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268c490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268c4e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268c540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268c594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268c5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268c630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268c5ec) */
/* WARNING: Removing unreachable block (ram,0x00010268c598) */
/* WARNING: Removing unreachable block (ram,0x00010268c544) */
/* WARNING: Removing unreachable block (ram,0x00010268c4ec) */
/* WARNING: Removing unreachable block (ram,0x00010268c494) */
/* WARNING: Removing unreachable block (ram,0x00010268c444) */
/* WARNING: Removing unreachable block (ram,0x00010268c634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268c3e4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb39f0);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb39f0))[1]);
  func_0x000107c5fadc(0x44495f4543414c50,0xe800000000000000);
  func_0x000107c42744(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10268c648; end: 10268c697; -[SCMapAdsPromotedPlaceBannerMetadata encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x00010268c680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268c684) */

void FUN_10268c648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10268c3e4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10268c698; end: 10268c6c7;  */

void FUN_10268c698(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_10268c6c8(param_1);
  return;
}



/* Entry: 10268c6c8; end: 10268cd67;  */

undefined8 FUN_10268c6c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 unaff_x20;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0x44495f4543414c50;
  func_0x000107c5fadc(0x44495f4543414c50,0xe800000000000000);
  lVar3 = param_1;
  func_0x000107c41478();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&uStack_a0,lVar3);
    func_0x000107c615e8(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    plVar4 = &lStack_b0;
    func_0x000107c6147c(plVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_a8;
    lVar3 = lStack_b0;
    if (((ulong)plVar4 & 1) == 0) {
      func_0x000107c61170(param_1);
      goto LAB_10268cd28;
    }
    uVar5 = 0x454c544954;
    func_0x000107c5fadc(0x454c544954,0xe500000000000000);
    lVar6 = param_1;
    func_0x000107c41478();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (lVar6 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x000107c60234(&uStack_a0,lVar6);
      func_0x000107c615e8(lVar6);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      plVar4 = &lStack_b0;
      func_0x000107c6147c(plVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar5 = uStack_a8;
      lVar6 = lStack_b0;
      if (((ulong)plVar4 & 1) == 0) {
        func_0x000107c61170(param_1);
      }
      else {
        uVar7 = 0x52555f4547414d49;
        func_0x000107c5fadc(0x52555f4547414d49,0xe90000000000004c);
        lVar8 = param_1;
        func_0x000107c41478();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        if (lVar8 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          func_0x000107c60234(&uStack_a0,lVar8);
          func_0x000107c615e8(lVar8);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          func_0x000107c61170(param_1);
LAB_10268ccd4:
          func_0x000107c6142c(uVar5);
          goto LAB_10268ccdc;
        }
        plVar4 = &lStack_b0;
        func_0x000107c6147c(plVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
        uVar7 = uStack_a8;
        lVar8 = lStack_b0;
        if (((ulong)plVar4 & 1) == 0) {
          func_0x000107c61170(param_1);
        }
        else {
          uVar9 = 0x414e5f45554e4556;
          func_0x000107c5fadc(0x414e5f45554e4556,0xea0000000000454d);
          lVar10 = param_1;
          func_0x000107c41478();
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          if (lVar10 == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            func_0x000107c60234(&uStack_a0,lVar10);
            func_0x000107c615e8(lVar10);
          }
          uStack_78 = uStack_98;
          uStack_80 = uStack_a0;
          lStack_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 == 0) {
            func_0x000107c61170(param_1);
LAB_10268cccc:
            func_0x000107c6142c(uVar7);
            goto LAB_10268ccd4;
          }
          plVar4 = &lStack_b0;
          func_0x000107c6147c(plVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
          uVar9 = uStack_a8;
          lVar10 = lStack_b0;
          if (((ulong)plVar4 & 1) == 0) {
            func_0x000107c61170(param_1);
          }
          else {
            uVar11 = 0x44495f45554e4556;
            func_0x000107c5fadc(0x44495f45554e4556,0xe800000000000000);
            lVar12 = param_1;
            func_0x000107c41478();
            func_0x000107c61180();
            func_0x000107c61170(uVar11);
            if (lVar12 == 0) {
              uStack_98 = 0;
              uStack_a0 = 0;
              lStack_88 = 0;
              uStack_90 = 0;
            }
            else {
              func_0x000107c60234(&uStack_a0,lVar12);
              func_0x000107c615e8(lVar12);
            }
            uStack_78 = uStack_98;
            uStack_80 = uStack_a0;
            lStack_68 = lStack_88;
            uStack_70 = uStack_90;
            if (lStack_88 == 0) {
              func_0x000107c61170(param_1);
LAB_10268ccc4:
              func_0x000107c6142c(uVar9);
              goto LAB_10268cccc;
            }
            plVar4 = &lStack_b0;
            func_0x000107c6147c(plVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
            uVar11 = uStack_a8;
            lVar12 = lStack_b0;
            if (((ulong)plVar4 & 1) == 0) {
              func_0x000107c61170(param_1);
            }
            else {
              uVar13 = 0x415f52454e4e4142;
              func_0x000107c5fadc(0x415f52454e4e4142,0xed00004e4f495443);
              lVar14 = param_1;
              func_0x000107c41478();
              func_0x000107c61180();
              func_0x000107c61170(uVar13);
              if (lVar14 == 0) {
                uStack_98 = 0;
                uStack_a0 = 0;
                lStack_88 = 0;
                uStack_90 = 0;
              }
              else {
                func_0x000107c60234(&uStack_a0,lVar14);
                func_0x000107c615e8(lVar14);
              }
              uStack_78 = uStack_98;
              uStack_80 = uStack_a0;
              lStack_68 = lStack_88;
              uStack_70 = uStack_90;
              if (lStack_88 == 0) {
LAB_10268ccb8:
                func_0x000107c61170(param_1);
                func_0x000107c6142c(uVar11);
                goto LAB_10268ccc4;
              }
              uVar13 = 0;
              FUN_10268ba98(0);
              plVar4 = &lStack_b0;
              func_0x000107c6147c(plVar4,&uStack_80,puVar1 + 8,uVar13,6);
              lVar14 = lStack_b0;
              if (((ulong)plVar4 & 1) != 0) {
                uVar13 = 0x44495f4441;
                func_0x000107c5fadc(0x44495f4441,0xe500000000000000);
                lVar15 = param_1;
                func_0x000107c41478();
                func_0x000107c61180();
                func_0x000107c61170(uVar13);
                if (lVar15 == 0) {
                  uStack_98 = 0;
                  uStack_a0 = 0;
                  lStack_88 = 0;
                  uStack_90 = 0;
                }
                else {
                  func_0x000107c60234(&uStack_a0,lVar15);
                  func_0x000107c615e8(lVar15);
                }
                uStack_78 = uStack_98;
                uStack_80 = uStack_a0;
                lStack_68 = lStack_88;
                uStack_70 = uStack_90;
                if (lStack_88 == 0) {
                  func_0x000107c61170(param_1);
                  param_1 = lVar14;
                  goto LAB_10268ccb8;
                }
                plVar4 = &lStack_b0;
                func_0x000107c6147c(plVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
                if (((ulong)plVar4 & 1) != 0) {
                  func_0x000107c5fadc(lVar3,uVar2);
                  func_0x000107c6142c(uVar2);
                  func_0x000107c5fadc(lVar6,uVar5);
                  func_0x000107c6142c(uVar5);
                  func_0x000107c5fadc(lVar8,uVar7);
                  func_0x000107c6142c(uVar7);
                  func_0x000107c5fadc(lVar10,uVar9);
                  func_0x000107c6142c(uVar9);
                  func_0x000107c5fadc(lVar12,uVar11);
                  func_0x000107c6142c(uVar11);
                  lVar15 = lStack_b0;
                  func_0x000107c5fadc(lStack_b0,uStack_a8);
                  func_0x000107c6142c(uStack_a8);
                  func_0x000107c47ef4();
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar8);
                  func_0x000107c61170(lVar10);
                  func_0x000107c61170(lVar12);
                  func_0x000107c61170(lVar15);
                  func_0x000107c61170(param_1);
                  func_0x000107c61170(lVar14);
                  return unaff_x20;
                }
                func_0x000107c61170(param_1);
                param_1 = lVar14;
              }
              func_0x000107c61170(param_1);
              func_0x000107c6142c(uVar11);
            }
            func_0x000107c6142c(uVar9);
          }
          func_0x000107c6142c(uVar7);
        }
        func_0x000107c6142c(uVar5);
      }
      func_0x000107c6142c(uVar2);
      goto LAB_10268cd28;
    }
    func_0x000107c61170(param_1);
LAB_10268ccdc:
    func_0x000107c6142c(uVar2);
  }
  func_0x00010006e7f4(&uStack_80);
LAB_10268cd28:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10268cd68; end: 10268cd8f; -[SCMapAdsPromotedPlaceBannerMetadata initWithCoder:] */

void FUN_10268cd68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10268c6c8();
  return;
}



/* Entry: 10268cd90; end: 10268cdc3; -[SCMapAdsPromotedPlaceBannerMetadata description] */

void FUN_10268cd90(void)

{
  undefined1 auStack_a8 [152];
  
  FUN_10268d0b4(auStack_a8);
  FUN_1025eb17c(auStack_a8);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10268cdc4; end: 10268ce3b;  */

void FUN_10268cdc4(undefined8 *param_1,undefined8 param_2)

{
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10268d0b4(&uStack_b8);
  func_0x000107c61170(param_2);
  param_1[0xd] = uStack_50;
  param_1[0xc] = uStack_58;
  param_1[0xf] = uStack_40;
  param_1[0xe] = uStack_48;
  param_1[0x11] = uStack_30;
  param_1[0x10] = uStack_38;
  param_1[0x12] = uStack_28;
  param_1[5] = uStack_90;
  param_1[4] = uStack_98;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  param_1[9] = uStack_70;
  param_1[8] = uStack_78;
  param_1[0xb] = uStack_60;
  param_1[10] = uStack_68;
  param_1[1] = uStack_b0;
  *param_1 = uStack_b8;
  param_1[3] = uStack_a0;
  param_1[2] = uStack_a8;
  return;
}



/* Entry: 10268ce3c; end: 10268ceb7; -[SCMapAdsPromotedPlaceBannerMetadata init] */

void FUN_10268ce3c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MapAdsPromotedPlaceAdResponseParserServices/MapAdsPromotedPlaceBannerMetadataWrapper.swift"
                      ,0x5a,2,0x85,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10268ce84);
  (*pcVar1)();
}



/* Entry: 10268ceb8; end: 10268cf57; -[SCMapAdsPromotedPlaceBannerMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010268ced8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268cf00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268cf28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268cf04) */
/* WARNING: Removing unreachable block (ram,0x00010268cedc) */
/* WARNING: Removing unreachable block (ram,0x00010268cf2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268ceb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb39f0 + 8))
  ;
  return;
}



/* Entry: 10268cf58; end: 10268d0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268cf58(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_108 [56];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb39f0);
  puVar2[1] = uStack_48;
  *puVar2 = uStack_50;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb39f8);
  puVar2[1] = uStack_58;
  *puVar2 = uStack_60;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb3a00);
  puVar2[1] = uStack_68;
  *puVar2 = uStack_70;
  uVar3 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb3a08);
  puVar2[1] = param_1[7];
  *puVar2 = uVar3;
  uVar3 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb3a10);
  puVar2[1] = param_1[9];
  *puVar2 = uVar3;
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_a0 = param_1[0x10];
  FUN_10268ba98(0);
  func_0x000107c610f8();
  func_0x000100402194(&uStack_50,auStack_108);
  func_0x000100402194(&uStack_60,auStack_108);
  func_0x000100402194(&uStack_70,auStack_108);
  func_0x000100402194(&uStack_80,auStack_108);
  func_0x000100402194(&uStack_90,auStack_108);
  FUN_1025e2438(&uStack_d0,auStack_108);
  puVar2 = &uStack_d0;
  FUN_10268b7a8();
  func_0x0001025e2474(&uStack_d0);
  *(undefined8 **)(unaff_x20 + _DAT_112eb3a18) = puVar2;
  uVar3 = param_1[0x12];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb3a20);
  *puVar2 = param_1[0x11];
  puVar2[1] = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61434();
  func_0x000107c61154(&stack0xfffffffffffffee8,puVar1);
  return;
}



/* Entry: 10268d0b4; end: 10268d1e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268d0b4(undefined8 *param_1,long param_2)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eb39f0);
  uVar7 = ((undefined8 *)(param_2 + _DAT_112eb39f0))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_112eb39f8);
  uVar8 = ((undefined8 *)(param_2 + _DAT_112eb39f8))[1];
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eb3a00);
  uVar9 = ((undefined8 *)(param_2 + _DAT_112eb3a00))[1];
  uVar4 = *(undefined8 *)(param_2 + _DAT_112eb3a08);
  uVar10 = ((undefined8 *)(param_2 + _DAT_112eb3a08))[1];
  uVar5 = *(undefined8 *)(param_2 + _DAT_112eb3a10);
  uVar11 = ((undefined8 *)(param_2 + _DAT_112eb3a10))[1];
  FUN_10268b99c(&uStack_98,*(undefined8 *)(param_2 + _DAT_112eb3a18));
  uVar6 = *(undefined8 *)(param_2 + _DAT_112eb3a20);
  uVar12 = ((undefined8 *)(param_2 + _DAT_112eb3a20))[1];
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar12);
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  param_1[6] = uVar4;
  param_1[7] = uVar10;
  param_1[8] = uVar5;
  param_1[9] = uVar11;
  param_1[0xb] = uStack_90;
  param_1[10] = uStack_98;
  param_1[0xd] = uStack_80;
  param_1[0xc] = uStack_88;
  param_1[0xf] = uStack_70;
  param_1[0xe] = uStack_78;
  param_1[0x10] = uStack_68;
  param_1[0x11] = uVar6;
  param_1[0x12] = uVar12;
  return;
}



/* Entry: 10268d1e4; end: 10268d203;  */

void FUN_10268d1e4(void)

{
  func_0x000107c61168(&PTR_PTR_112857018);
  return;
}



/* Entry: 10268d204; end: 10268d20f; -[SCMapAdsPromotedPlacesProperties placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268d204(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb3a50);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb3a50))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268d210; end: 10268d21b; -[SCMapAdsPromotedPlacesProperties buildingDecoBoltId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268d210(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb3a58);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb3a58))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268d21c; end: 10268d227; -[SCMapAdsPromotedPlacesProperties mapEffectURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268d21c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb3a60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb3a60))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268d228; end: 10268d26f;  */

void FUN_10268d228(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10268d270; end: 10268d27f; -[SCMapAdsPromotedPlacesProperties collabAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10268d270(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112eb3a68);
}



/* Entry: 10268d280; end: 10268d32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268d280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3a50);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3a58);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3a60);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112eb3a68) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10268d32c; end: 10268d3f7; -[SCMapAdsPromotedPlacesProperties initWithPlaceId:buildingDecoBoltId:mapEffectURL:collabAd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268d32c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb3a50);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb3a58);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb3a60);
  *puVar1 = param_5;
  puVar1[1] = uVar4;
  *(undefined1 *)(param_1 + _DAT_112eb3a68) = param_6;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10268d3f8; end: 10268d4bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268d3f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c610f8();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3a50);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3a58);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3a60);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  func_0x000100402194(&uStack_40,auStack_70);
  func_0x000100402194(&uStack_50,auStack_70);
  func_0x000100402194(&uStack_60,auStack_70);
  FUN_10268d4bc(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112eb3a68) = *(undefined1 *)(param_1 + 6);
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10268d4bc; end: 10268d4ef;  */

undefined8 FUN_10268d4bc(undefined8 param_1)

{
  (*(code *)(undefined *)0x102689388)();
  return param_1;
}



/* Entry: 10268d4f0; end: 10268d523; -[SCMapAdsPromotedPlacesProperties hash] */

undefined8 FUN_10268d4f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10268d524();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10268d524; end: 10268d60f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268d524(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb3a50);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb3a50))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb3a58);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb3a58))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb3a60);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb3a60))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112eb3a68));
  func_0x000107c606a4();
  return;
}



/* Entry: 10268d610; end: 10268d777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10268d610(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long unaff_x20;
  uint uVar6;
  uint uVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    func_0x000107c6147c(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112eb3a50);
      if (lVar3 == *(long *)(lStack_68 + _DAT_112eb3a50) &&
          ((long *)(unaff_x20 + _DAT_112eb3a50))[1] == ((long *)(lStack_68 + _DAT_112eb3a50))[1]) {
        uVar6 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar6 = (uint)lVar3 ^ 1;
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_112eb3a58);
      if (lVar3 == *(long *)(lStack_68 + _DAT_112eb3a58) &&
          ((long *)(unaff_x20 + _DAT_112eb3a58))[1] == ((long *)(lStack_68 + _DAT_112eb3a58))[1]) {
        uVar7 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar7 = (uint)lVar3 ^ 1;
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_112eb3a60);
      if (lVar3 == *(long *)(lStack_68 + _DAT_112eb3a60) &&
          ((long *)(unaff_x20 + _DAT_112eb3a60))[1] == ((long *)(lStack_68 + _DAT_112eb3a60))[1]) {
        uVar5 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar5 = (uint)lVar3;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_112eb3a68);
      bVar2 = *(byte *)(lStack_68 + _DAT_112eb3a68);
      func_0x000107c61170(lStack_68);
      if (((uVar6 | uVar7) & 1) == 0) {
        uVar5 = uVar5 & ((bVar1 ^ bVar2) ^ 1);
        goto LAB_10268d74c;
      }
    }
  }
  uVar5 = 0;
LAB_10268d74c:
  return uVar5 & 1;
}



/* Entry: 10268d778; end: 10268d7f7; -[SCMapAdsPromotedPlacesProperties isEqual:] */

uint FUN_10268d778(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10268d610(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10268d7f8; end: 10268d7fb; -[SCMapAdsPromotedPlacesProperties copyWithZone:] */

void FUN_10268d7f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10268d7fc; end: 10268d96b;  */

/* WARNING: Possible PIC construction at 0x00010268d858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268d8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268d910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268d8b4) */
/* WARNING: Removing unreachable block (ram,0x00010268d85c) */
/* WARNING: Removing unreachable block (ram,0x00010268d914) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268d7fc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eb3a50);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112eb3a50))[1]);
  func_0x000107c5fadc(0x44495f4543414c50,0xe800000000000000);
  func_0x000107c42744(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10268d96c; end: 10268d9bb; -[SCMapAdsPromotedPlacesProperties encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x00010268d9a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268d9a8) */

void FUN_10268d96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10268d7fc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10268d9bc; end: 10268d9eb;  */

void FUN_10268d9bc(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_10268d9ec(param_1);
  return;
}



/* Entry: 10268d9ec; end: 10268dd53;  */

undefined8 FUN_10268d9ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = 0;
  uVar7 = 0;
  uVar9 = 0;
  uVar3 = 0x44495f4543414c50;
  func_0x000107c5fadc(0x44495f4543414c50,0xe800000000000000);
  lVar4 = param_1;
  func_0x000107c41478();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (lVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&uStack_a0,lVar4);
    func_0x000107c615e8(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c6147c(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar10 = uStack_a8;
    uVar3 = uStack_b0;
    if ((uVar5 & 1) == 0) {
      func_0x000107c61170(param_1);
      goto LAB_10268dcf8;
    }
    uVar6 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010f0b4e60);
    lVar4 = param_1;
    func_0x000107c41478();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (lVar4 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x000107c60234(&uStack_a0,lVar4);
      func_0x000107c615e8(lVar4);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      func_0x000107c6147c(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
      uVar2 = uStack_a8;
      uVar6 = uStack_b0;
      if ((uVar7 & 1) == 0) {
        func_0x000107c61170(param_1);
      }
      else {
        uVar8 = 0x454646455f50414d;
        func_0x000107c5fadc(0x454646455f50414d,0xee004c52555f5443);
        lVar4 = param_1;
        func_0x000107c41478();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        if (lVar4 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          func_0x000107c60234(&uStack_a0,lVar4);
          func_0x000107c615e8(lVar4);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          func_0x000107c61170(param_1);
          func_0x000107c6142c(uVar2);
          goto LAB_10268dce8;
        }
        func_0x000107c6147c(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
        if ((uVar9 & 1) != 0) {
          uVar8 = 0x415f42414c4c4f43;
          func_0x000107c5fadc(0x415f42414c4c4f43,0xe900000000000044);
          func_0x000107c41454(param_1);
          func_0x000107c61170(uVar8);
          func_0x000107c5fadc(uVar3,uVar10);
          func_0x000107c6142c(uVar10);
          func_0x000107c5fadc(uVar6,uVar2);
          func_0x000107c6142c(uVar2);
          uVar10 = uStack_b0;
          func_0x000107c5fadc(uStack_b0,uStack_a8);
          func_0x000107c6142c(uStack_a8);
          func_0x000107c47ed0();
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(param_1);
          return unaff_x20;
        }
        func_0x000107c61170(param_1);
        func_0x000107c6142c(uVar2);
      }
      func_0x000107c6142c(uVar10);
      goto LAB_10268dcf8;
    }
    func_0x000107c61170(param_1);
LAB_10268dce8:
    func_0x000107c6142c(uVar10);
  }
  func_0x00010006e7f4(&uStack_80);
LAB_10268dcf8:
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 10268dd54; end: 10268dd7b; -[SCMapAdsPromotedPlacesProperties initWithCoder:] */

void FUN_10268dd54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10268d9ec();
  return;
}



/* Entry: 10268dd7c; end: 10268dd97; -[SCMapAdsPromotedPlacesProperties description] */

void FUN_10268dd7c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10268dd98; end: 10268de13; -[SCMapAdsPromotedPlacesProperties init] */

void FUN_10268dd98(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MapAdsPromotedPlaceAdResponseParserServices/MapAdsPromotedPlacesPropertiesWrapper.swift"
                      ,0x57,2,0x5f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10268dde0);
  (*pcVar1)();
}



/* Entry: 10268de14; end: 10268de67; -[SCMapAdsPromotedPlacesProperties .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010268de34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268de38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268de14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb3a50 + 8))
  ;
  return;
}



/* Entry: 10268de68; end: 10268de87;  */

void FUN_10268de68(void)

{
  func_0x000107c61168(&PTR_PTR_112857118);
  return;
}


