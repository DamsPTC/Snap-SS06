/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023b6e80; end: 1023b6e9f;  */

void FUN_1023b6e80(void)

{
  func_0x000107c61168(&PTR_PTR_112839e48);
  return;
}



/* Entry: 1023b6ea0; end: 1023b6fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b6ea0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e92820);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c4a8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c498d0(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1023b6fd0; end: 1023b7027; -[_TtC39PreviewFiltersLegacyImplementationSwift35PreviewFilterOverlayCompositionImpl hasStaticOverlayFilters] */

long FUN_1023b6fd0(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1023b6ea0();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c44b4c();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return lVar2;
}



/* Entry: 1023b7028; end: 1023b7113; -[_TtC39PreviewFiltersLegacyImplementationSwift35PreviewFilterOverlayCompositionImpl staticOverlayFiltersImage] */

void FUN_1023b7028(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023b705c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023b7114; end: 1023b71cf;  */

/* WARNING: Possible PIC construction at 0x0001023b715c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b7178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b7160) */
/* WARNING: Removing unreachable block (ram,0x0001023b717c) */
/* WARNING: Removing unreachable block (ram,0x0001023b7180) */
/* WARNING: Removing unreachable block (ram,0x0001023b71a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7114(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e92820);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5c4a8();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1023b71d0; end: 1023b71ff; -[_TtC39PreviewFiltersLegacyImplementationSwift35PreviewFilterOverlayCompositionImpl drawStaticOverlayFiltersInCurrentContextWithBackgroundPlacement:] */

void FUN_1023b71d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1023b7114(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023b7200; end: 1023b734b; -[_TtC39PreviewFiltersLegacyImplementationSwift35PreviewFilterOverlayCompositionImpl animatedOverlayFiltersVideoTrackedImages] */

void FUN_1023b7200(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023b7260();
  func_0x000107c61170(param_1);
  uVar2 = 0x112d74dc8;
  func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1023b734c; end: 1023b74c3; -[_TtC39PreviewFiltersLegacyImplementationSwift35PreviewFilterOverlayCompositionImpl singleDrawnGeoFilterOverlayImageData] */

void FUN_1023b734c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023b73c0();
  func_0x000107c61170(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    func_0x000107c5ee20(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1023b74c4; end: 1023b7643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023b74c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e92820);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c4a8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      uVar6 = 0;
      if (param_3 != 0) {
        func_0x000107c5fadc(param_2,param_3);
        uVar6 = param_2;
      }
      puVar4 = &UNK_1104fcf70;
      func_0x000107c613fc(&UNK_1104fcf70,0x18,7);
      *(undefined **)(puVar4 + 0x10) = puVar1;
      pcStack_60 = FUN_1023b7644;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_10130cf28;
      puStack_68 = &UNK_1104fcf88;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c61174(puVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c43520(param_1,lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar6);
    }
  }
  puVar4 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 1023b7644; end: 1023b765b;  */

void FUN_1023b7644(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001023b7840(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023b765c; end: 1023b7677;  */

void FUN_1023b765c(long param_1,long param_2)

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



/* Entry: 1023b7678; end: 1023b76ff; -[_TtC39PreviewFiltersLegacyImplementationSwift35PreviewFilterOverlayCompositionImpl generateFilteredImageWithCroppingAspectRatio:transcodingTaskId:] */

void FUN_1023b7678(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_2);
  FUN_1023b74c4(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1023b7700; end: 1023b78af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023b7700(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e92820);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c4a8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      puVar4 = &UNK_1104fcfc0;
      func_0x000107c613fc(&UNK_1104fcfc0,0x18,7);
      *(undefined **)(puVar4 + 0x10) = puVar1;
      uStack_40 = 0x1023b7978;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_10130cf28;
      puStack_48 = &UNK_1104fcfd8;
      puStack_38 = puVar4;
      func_0x000107c60bc4(&puStack_60);
      puVar4 = puStack_38;
      func_0x000107c61174(puVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c5d148(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
    }
  }
  puVar4 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 1023b78b0; end: 1023b78e3; -[_TtC39PreviewFiltersLegacyImplementationSwift35PreviewFilterOverlayCompositionImpl generateUcoAppliedImage] */

void FUN_1023b78b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023b7700();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023b78e4; end: 1023b7943; -[_TtC39PreviewFiltersLegacyImplementationSwift35PreviewFilterOverlayCompositionImpl init] */

void FUN_1023b78e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFiltersLegacyImplementationSwift.PreviewFilterOverlayCompositionImpl",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023b7910);
  (*pcVar1)();
}



/* Entry: 1023b7944; end: 1023b7953; -[_TtC39PreviewFiltersLegacyImplementationSwift35PreviewFilterOverlayCompositionImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e92820));
  return;
}



/* Entry: 1023b7954; end: 1023b7973;  */

void FUN_1023b7954(void)

{
  func_0x000107c61168(&PTR_PTR_112839f08);
  return;
}



/* Entry: 1023b7974; end: 1023b797f;  */

void FUN_1023b7974(long param_1,long param_2)

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



/* Entry: 1023b7980; end: 1023b7a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7980(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e92850) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023b7a18; end: 1023b7a4b; -[_TtC39PreviewFiltersLegacyImplementationSwift39PreviewFilterProcessCommandProviderImpl lensCommandMetadataProvider] */

void FUN_1023b7a18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023b7a4c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023b7a4c; end: 1023b7b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7a4c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e92850);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c4a8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c498d0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c4afa8(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1023b7b08; end: 1023b7b3b; -[_TtC39PreviewFiltersLegacyImplementationSwift39PreviewFilterProcessCommandProviderImpl currentLensCommand] */

void FUN_1023b7b08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1023b7b3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023b7b3c; end: 1023b7bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7b3c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e92850);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c4a8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c498d0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c40f68(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1023b7bf8; end: 1023b7c57; -[_TtC39PreviewFiltersLegacyImplementationSwift39PreviewFilterProcessCommandProviderImpl init] */

void FUN_1023b7bf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFiltersLegacyImplementationSwift.PreviewFilterProcessCommandProviderImpl"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023b7c24);
  (*pcVar1)();
}



/* Entry: 1023b7c58; end: 1023b7c67; -[_TtC39PreviewFiltersLegacyImplementationSwift39PreviewFilterProcessCommandProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e92850));
  return;
}



/* Entry: 1023b7c68; end: 1023b7c87;  */

void FUN_1023b7c68(void)

{
  func_0x000107c61168(&PTR_PTR_112839fc8);
  return;
}



/* Entry: 1023b7c88; end: 1023b7cd3; -[_TtC23DpaLensSnapAdConfigImpl23DpaLensSnapAdConfigImpl resetDpaLensSnapAdConfig] */

/* WARNING: Possible PIC construction at 0x0001023b7cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b7cbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7c88(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e92880);
  uVar2 = puVar1[1];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1023b7cd4; end: 1023b7d1f; -[_TtC23DpaLensSnapAdConfigImpl23DpaLensSnapAdConfigImpl setLaunchSourceAdIdWithAdId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7cd4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112e92880);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1023b7d20; end: 1023b7d67; -[_TtC23DpaLensSnapAdConfigImpl23DpaLensSnapAdConfigImpl setLensIdWithLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  lVar1 = param_1 + _DAT_112e92880;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1023b7d68; end: 1023b7db3; -[_TtC23DpaLensSnapAdConfigImpl23DpaLensSnapAdConfigImpl setRawAdDataWithRawAdData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7d68(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  param_1 = param_1 + _DAT_112e92880;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1023b7db4; end: 1023b7e2f; -[_TtC23DpaLensSnapAdConfigImpl23DpaLensSnapAdConfigImpl getDpaLensSnapAdConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7db4(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_90 [16];
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
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e92880);
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  uStack_68 = puVar1[3];
  uStack_70 = puVar1[2];
  uStack_58 = puVar1[5];
  uStack_60 = puVar1[4];
  uStack_50 = uStack_80;
  uStack_48 = uStack_78;
  uStack_40 = uStack_70;
  uStack_38 = uStack_68;
  uStack_30 = uStack_60;
  uStack_28 = uStack_58;
  func_0x000103e1b9bc(0);
  func_0x000107c610f8();
  func_0x000101223174(&uStack_50,auStack_90);
  func_0x000101223174(&uStack_40,auStack_90);
  func_0x000101223174(&uStack_30,auStack_90);
  func_0x000103e1b860(&uStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023b7e30; end: 1023b7e5f;  */

void FUN_1023b7e30(void)

{
  func_0x00010042d2d8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023b7e60; end: 1023b7e9f; -[_TtC23DpaLensSnapAdConfigImpl23DpaLensSnapAdConfigImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023b7e84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b7e88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e92880 + 8))
  ;
  return;
}



/* Entry: 1023b7ea0; end: 1023b7ebf;  */

void FUN_1023b7ea0(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1023b7ec0; end: 1023b7ecf;  */

void FUN_1023b7ec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023b7ed0; end: 1023b7f83;  */

void FUN_1023b7ed0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010042d2d8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001001b8300(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x00010042d398();
  *param_1 = uVar1;
  return;
}



/* Entry: 1023b7f84; end: 1023b80fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b7f84(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_2;
  func_0x000107c4bff8();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
LAB_1023b80a0:
    func_0x000107c61170(param_3);
  }
  else {
    lVar2 = *(long *)(param_3 + _DAT_113013008);
    func_0x000107c4402c();
    func_0x000107c61180();
    lVar4 = ((long *)(lVar2 + _DAT_113013038))[1];
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar2 + _DAT_113013038);
      func_0x000107c61434(lVar4);
      lVar3 = lVar5;
      func_0x000107c5fb5c(lVar5,lVar4);
      if (0 < lVar3) {
        lVar3 = lVar1;
        func_0x000107c4e340(lVar1);
        func_0x000107c61180();
        func_0x000107c5fadc(lVar5,lVar4);
        func_0x000107c6142c(lVar4);
        lVar4 = lVar3;
        func_0x000107c5e62c(lVar3);
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        goto LAB_1023b80a0;
      }
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1023b80fc; end: 1023b8117;  */

void FUN_1023b80fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023b8118; end: 1023b8137;  */

void FUN_1023b8118(void)

{
  func_0x000107c61168(&PTR_PTR_112e929b8);
  return;
}



/* Entry: 1023b8138; end: 1023b83b7;  */

undefined * FUN_1023b8138(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  if (*(char *)(unaff_x20 + 0x20) != '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d4();
    if (*(char *)(unaff_x20 + 0x30) == '\x01') {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
    }
    if (*(char *)(unaff_x20 + 0x68) == '\x01') {
      puVar5 = (undefined *)0x0;
      lVar8 = *(long *)(unaff_x20 + 0x48);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d4();
      lVar8 = *(long *)(unaff_x20 + 0x48);
    }
    if (lVar8 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      puVar7 = (undefined *)0x0;
      if (lVar6 != 0) {
        uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
        uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
        FUN_1023b87d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61434(lVar8);
        func_0x000107c61434(lVar6);
        uVar2 = uVar9;
        func_0x000107c5fb5c(uVar9,lVar8);
        func_0x000107c60110();
        uVar3 = uVar11;
        func_0x000107c5fb5c(uVar11,lVar6);
        func_0x000107c60110();
        func_0x0001031bff60(uVar9,lVar8,uVar11,lVar6);
        func_0x000107c6142c(lVar8);
        func_0x000107c6142c(lVar6);
        func_0x000107c60110(uVar9);
        puVar7 = PTR_PTR_1126aa6e0;
        func_0x000107c610f8(PTR_PTR_1126aa6e0);
        func_0x000107c46e90();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar9);
      }
    }
    lVar8 = *(long *)(unaff_x20 + 0x70);
    if (lVar8 == 0) {
      func_0x000107c61174(puVar1);
      lVar6 = 0;
    }
    else {
      FUN_1023b87d8(0,0x112dd7968,&PTR_PTR_1126a7e90);
      func_0x000107c61174(puVar1);
      lVar6 = lVar8;
      func_0x000107c61434(lVar8);
      func_0x000107c5fc48();
      func_0x000107c6142c(lVar8);
    }
    puVar4 = PTR_PTR_1126a7e98;
    func_0x000107c610f8(PTR_PTR_1126a7e98);
    func_0x000107c46b10();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar6);
    return puVar4;
  }
  return (undefined *)0x0;
}



/* Entry: 1023b83b8; end: 1023b8477;  */

void FUN_1023b83b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  lVar1 = 0x112dd7968;
  FUN_1023b8760(0x112dd7968,&PTR_PTR_1126a7e90,0x112dd79d8,&UNK_10d99a990);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  puVar2 = PTR_PTR_1126a7e90;
  func_0x000107c610f8();
  func_0x000107c470f0();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  *(long *)(unaff_x20 + 0x70) = lVar1;
  func_0x000107c6142c(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1023b8478; end: 1023b84fb;  */

void FUN_1023b8478(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c5ccf8();
  *(long *)(unaff_x20 + 0x38) = lVar2;
  func_0x000107c4aadc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1023b87d8(0,0x112dd7968,&PTR_PTR_1126a7e90);
    lVar2 = param_1;
    func_0x000107c5fc54(param_1,uVar1);
    func_0x000107c61170(param_1);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(long *)(unaff_x20 + 0x70) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1023b84fc; end: 1023b854b;  */

/* WARNING: Possible PIC construction at 0x0001023b852c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b8530) */

void FUN_1023b84fc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1023b854c; end: 1023b85ab;  */

/* WARNING: Possible PIC construction at 0x0001023b8574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b852c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b8578) */
/* WARNING: Removing unreachable block (ram,0x0001023b8588) */
/* WARNING: Removing unreachable block (ram,0x0001023b85a0) */
/* WARNING: Removing unreachable block (ram,0x0001023b84fc) */
/* WARNING: Removing unreachable block (ram,0x0001023b8530) */

void FUN_1023b854c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x60) = 1;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1023b85ac; end: 1023b8657;  */

/* WARNING: Possible PIC construction at 0x0001023b852c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b8530) */

void FUN_1023b85ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = param_1;
  func_0x000107c5ed2c();
  lVar3 = lVar2;
  func_0x000107c3fcb0();
  func_0x000107c61170();
  if (lVar3 == 0x3ee) {
    *(undefined8 *)(unaff_x20 + 0x18) = 1;
    *(undefined1 *)(unaff_x20 + 0x20) = 0;
    FUN_1023b8138();
  }
  else {
    *(undefined8 *)(unaff_x20 + 0x18) = 2;
    *(undefined1 *)(unaff_x20 + 0x20) = 0;
    func_0x000107c5ed2c();
    lVar2 = param_1;
    func_0x000107c3fcb0();
    func_0x000107c61170();
    *(long *)(unaff_x20 + 0x28) = lVar2;
    *(undefined1 *)(unaff_x20 + 0x30) = 0;
    FUN_1023b8138();
    lVar2 = param_1;
  }
  if (lVar2 != 0) {
    func_0x000107c4bc98(*(undefined8 *)(unaff_x20 + 0x10),param_2,lVar2);
    func_0x000107c61170(lVar2);
  }
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1023b8658; end: 1023b86af;  */

/* WARNING: Possible PIC construction at 0x0001023b8680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b852c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b8684) */
/* WARNING: Removing unreachable block (ram,0x0001023b868c) */
/* WARNING: Removing unreachable block (ram,0x0001023b86a4) */
/* WARNING: Removing unreachable block (ram,0x0001023b84fc) */
/* WARNING: Removing unreachable block (ram,0x0001023b8530) */

void FUN_1023b8658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1023b86b0; end: 1023b870b;  */

void FUN_1023b86b0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023b870c; end: 1023b875f;  */

bool FUN_1023b870c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1023b8760; end: 1023b87d7;  */

void FUN_1023b8760(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1023b87d8(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1023b87d8; end: 1023b8817;  */

void FUN_1023b87d8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023b8818; end: 1023b882b;  */

void FUN_1023b8818(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104fd1f8;
  if (lRam0000000112e92af8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e92af8 = param_1;
  }
  return;
}



/* Entry: 1023b882c; end: 1023b886f;  */

void FUN_1023b882c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1023b8870; end: 1023b88cf; -[_TtC26SCMagicCaptionServicesImpl18MagicCaptionLogger init] */

void FUN_1023b8870(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMagicCaptionServicesImpl.MagicCaptionLogger",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023b889c);
  (*pcVar1)();
}



/* Entry: 1023b88d0; end: 1023b894b; -[_TtC26SCMagicCaptionServicesImpl18MagicCaptionLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023b8920: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b8924) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b88d0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e92b00));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e92b08));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e92b10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e92b18 + 8))
  ;
  return;
}



/* Entry: 1023b894c; end: 1023b896b;  */

void FUN_1023b894c(void)

{
  func_0x000107c61168(&PTR_PTR_11283a180);
  return;
}



/* Entry: 1023b896c; end: 1023b89b7; -[_TtC26SCMagicCaptionServicesImpl18MagicCaptionLogger setCreativeToolsEditSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b896c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112e92b18);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1023b89b8; end: 1023b8ad7;  */

/* WARNING: Possible PIC construction at 0x0001023b8a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8a94: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b89b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126e22f0;
  func_0x000107c610f8(PTR_PTR_1126e22f0);
  func_0x000107c453e4();
  func_0x000107c52140();
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112e92b10);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x000107c3f5f4();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c53200(puVar1);
      puVar1 = puVar2;
      goto code_r0x000107c61170;
    }
    func_0x000107c5b3e4();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      func_0x000107c59478(puVar1);
      puVar1 = puVar3;
      goto code_r0x000107c61170;
    }
  }
  lVar4 = ((undefined8 *)(unaff_x20 + _DAT_112e92b18))[1];
  if (lVar4 == 0) {
    func_0x000107c543f8(puVar1);
    func_0x000107c59e9c(puVar1);
    func_0x000107c4bfb0(*(undefined8 *)(unaff_x20 + _DAT_112e92b00));
  }
  else {
    puVar3 = *(undefined **)(unaff_x20 + _DAT_112e92b18);
    func_0x000107c61434(lVar4);
    func_0x000107c5fadc(puVar3,lVar4);
    func_0x000107c6142c(lVar4);
    func_0x000107c53ae8(puVar1);
    puVar1 = puVar3;
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1023b8ad8; end: 1023b8aff; -[_TtC26SCMagicCaptionServicesImpl18MagicCaptionLogger logMagicCaptionButtonImpression] */

void FUN_1023b8ad8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023b89b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023b8b00; end: 1023b8e77;  */

/* WARNING: Possible PIC construction at 0x0001023b8b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b8d40) */
/* WARNING: Removing unreachable block (ram,0x0001023b8d90) */
/* WARNING: Removing unreachable block (ram,0x0001023b8d60) */
/* WARNING: Removing unreachable block (ram,0x0001023b8d0c) */
/* WARNING: Removing unreachable block (ram,0x0001023b8e74) */
/* WARNING: Removing unreachable block (ram,0x0001023b8d2c) */
/* WARNING: Removing unreachable block (ram,0x0001023b8de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b8b00(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126e22f8;
  func_0x000107c610f8(PTR_PTR_1126e22f8);
  func_0x000107c453e4();
  func_0x000107c52140();
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112e92b10);
  if (puVar4 != (undefined *)0x0) {
    puVar6 = puVar4;
    func_0x000107c3f5f4();
    func_0x000107c61180();
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c53200(puVar2);
      goto code_r0x000107c61170;
    }
    func_0x000107c5b3e4();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c59478(puVar2);
      puVar6 = puVar4;
      goto code_r0x000107c61170;
    }
  }
  lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112e92b18))[1];
  if (lVar5 == 0) {
    func_0x000107c543f8(puVar2);
    func_0x000107c59e9c(puVar2);
    puVar6 = param_1;
    func_0x000107c43d74();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = param_1;
      func_0x000107c42b84();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        puVar6 = param_1;
        func_0x000107c42a34();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          func_0x000107c5ccf8(param_1);
          func_0x000107c59f7c(puVar2);
          puVar6 = param_1;
          func_0x000107c4c120();
          func_0x000107c61180();
          if (puVar6 == (undefined *)0x0) {
            func_0x000107c4aadc();
            func_0x000107c61180();
            if (param_1 == (undefined *)0x0) {
              func_0x000107c4bfb0(*(undefined8 *)(unaff_x20 + _DAT_112e92b00));
              puVar6 = puVar2;
            }
            else {
              uVar3 = 0;
              FUN_1023ba304(0,0x112dd7968,&PTR_PTR_1126a7e90);
              func_0x000107c5fc54(param_1,uVar3);
              puVar6 = param_1;
            }
          }
          else {
            func_0x000107c610f8(PTR_PTR_1126e1c00);
            func_0x000107c453e4();
            func_0x000107c49650();
            func_0x000107c61180();
            if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1023b8e74);
              (*pcVar1)();
            }
            func_0x000107c49820();
          }
        }
        else {
          func_0x000107c49820();
          func_0x000107c5465c(puVar2);
        }
      }
      else {
        puVar4 = puVar6;
        func_0x000107c5d388();
        if (puVar4 < (undefined *)0x2) {
          func_0x000107c54df8(puVar2);
        }
      }
    }
    else {
      puVar4 = puVar6;
      func_0x000107c5d388();
      if (puVar4 < (undefined *)0x4) {
        func_0x000107c54e00(puVar2);
      }
    }
  }
  else {
    puVar6 = *(undefined **)(unaff_x20 + _DAT_112e92b18);
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(puVar6,lVar5);
    func_0x000107c6142c(lVar5);
    func_0x000107c53ae8(puVar2);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1023b8e78; end: 1023b8ec7; -[_TtC26SCMagicCaptionServicesImpl18MagicCaptionLogger logMagicCaptionInteraction:] */

/* WARNING: Possible PIC construction at 0x0001023b8eb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b8eb4) */

void FUN_1023b8e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1023b8b00(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1023b8ec8; end: 1023b8feb;  */

/* WARNING: Possible PIC construction at 0x0001023b8f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023b8f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023b8f80) */
/* WARNING: Removing unreachable block (ram,0x0001023b8f58) */
/* WARNING: Removing unreachable block (ram,0x0001023b8fc0) */
/* WARNING: Removing unreachable block (ram,0x0001023b8f5c) */
/* WARNING: Removing unreachable block (ram,0x0001023b8fdc) */
/* WARNING: Removing unreachable block (ram,0x0001023b8f70) */
/* WARNING: Removing unreachable block (ram,0x0001023b8f24) */
/* WARNING: Removing unreachable block (ram,0x0001023b8f9c) */
/* WARNING: Removing unreachable block (ram,0x0001023b8fa8) */

void FUN_1023b8ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  if (param_1 == 0) {
    uVar1 = *unaff_x20;
    func_0x000107c61434(uVar1);
    func_0x000100029284(param_2,param_3);
  }
  else {
    uVar1 = *unaff_x20;
    func_0x000107c61558(uVar1);
    FUN_1023b9aa4(param_1,param_2,param_3,uVar1);
    uVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1023b8fec; end: 1023b90ab; -[_TtC26SCMagicCaptionServicesImpl18MagicCaptionLogger logMagicCaptionAddToTextField:requestId:captionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b8fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec(param_3);
  puVar1 = PTR_PTR_1126aa6e8;
  func_0x000107c610f8(PTR_PTR_1126aa6e8);
  func_0x000107c61174(param_1);
  func_0x000107c46b2c(puVar1);
  func_0x000107c61428(param_1 + _DAT_112e92b20,auStack_58,0x21,0);
  FUN_1023b8ec8(puVar1,param_3,param_2);
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1023b90ac; end: 1023b9327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023b90ac(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_78 [24];
  
  lVar7 = _DAT_112e92b20;
  func_0x000107c61428(unaff_x20 + _DAT_112e92b20,auStack_78,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    lVar2 = param_1;
    uVar5 = param_2;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(lVar7 + 0x38) + lVar2 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar7);
      lVar7 = lVar2;
      func_0x000107c43e28();
      func_0x000107c61180();
      if (lVar7 == 0) {
        lVar10 = 0;
        uVar8 = 0;
        uVar11 = uVar5;
      }
      else {
        lVar10 = lVar7;
        func_0x000107c5faec();
        uVar11 = uVar5;
        func_0x000107c61170(lVar7);
        uVar8 = uVar5;
      }
      lVar7 = lVar2;
      func_0x000107c51c58();
      func_0x000107c61180();
      if (lVar7 == 0) {
        lVar9 = 0;
        uVar11 = 0;
      }
      else {
        lVar9 = lVar7;
        func_0x000107c5faec();
        func_0x000107c61170(lVar7);
      }
      if (uVar8 == 0) {
        lVar10 = 0;
      }
      else {
        func_0x000107c5fadc(lVar10,uVar8);
        func_0x000107c6142c(uVar8);
      }
      if (uVar11 == 0) {
        lVar9 = 0;
      }
      else {
        func_0x000107c5fadc(lVar9,uVar11);
        func_0x000107c6142c(uVar11);
      }
      puVar3 = PTR_PTR_1126aa6e8;
      func_0x000107c610f8();
      func_0x000107c46b2c();
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar9);
      lVar7 = _DAT_112e92b28;
      func_0x000107c61428(unaff_x20 + _DAT_112e92b28,auStack_78,0x21,0);
      func_0x000107c61434(param_2);
      if (puVar3 == (undefined *)0x0) {
        func_0x0001023b99e8(param_1,param_2);
        func_0x000107c6142c(param_2);
        func_0x000107c61170(param_1);
      }
      else {
        uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
        func_0x000107c61558(uVar4);
        uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
        *(undefined8 *)(unaff_x20 + lVar7) = 0x8000000000000000;
        FUN_1023b9aa4(puVar3,param_1,param_2,uVar4);
        func_0x000107c6142c(param_2);
        *(undefined8 *)(unaff_x20 + lVar7) = uVar6;
      }
      func_0x000107c614a8(auStack_78);
      func_0x000107c61170(lVar2);
      if ((param_4 & 1) == 0) {
        return;
      }
      if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112e92b30),1)) {
        *(long *)(unaff_x20 + _DAT_112e92b30) = *(long *)(unaff_x20 + _DAT_112e92b30) + 1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023b9328);
      (*pcVar1)();
    }
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c614a8(auStack_78);
  return;
}



/* Entry: 1023b9328; end: 1023b939b; -[_TtC26SCMagicCaptionServicesImpl18MagicCaptionLogger logMagicCaptionEditEnd:addedToSnap:isNewCaption:] */

void FUN_1023b9328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1023b90ac(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023b939c; end: 1023b996f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023b939c(undefined8 *param_1)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  lVar20 = _DAT_112e92b28;
  puVar8 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112e92b28,puVar8,0,0);
  if (*(long *)(*(long *)(unaff_x20 + lVar20) + 0x10) == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar23 = *(undefined8 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar23 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined8 *)0x7fffffffffffffff < param_1) {
        puVar23 = param_1;
      }
      func_0x000107c60480();
    }
    if (puVar23 != (undefined8 *)0x0) {
      lVar21 = 0;
      lVar12 = 4;
      do {
        uVar14 = lVar12 - 4;
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1023b9848);
            (*pcVar2)();
          }
          uVar22 = param_1[lVar12];
          func_0x000107c615f0(uVar22);
          puVar9 = puVar8;
        }
        else {
          uVar22 = uVar14;
          puVar9 = param_1;
          FUN_1023bbda8();
        }
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023b9844);
          (*pcVar2)();
        }
        puVar24 = (undefined8 *)(lVar12 + -3);
        uVar14 = uVar22;
        func_0x000107c43e18();
        func_0x000107c61180();
        puVar8 = puVar9;
        if (uVar14 == 0) {
LAB_1023b9440:
          func_0x000107c615e8(uVar22);
        }
        else {
          uVar4 = uVar14;
          func_0x000107c5faec();
          func_0x000107c61170(uVar14);
          puVar8 = &uStack_a0;
          func_0x000107c61428(unaff_x20 + lVar20,puVar8,0x20,0);
          lVar15 = *(long *)(unaff_x20 + lVar20);
          if (*(long *)(lVar15 + 0x10) == 0) {
LAB_1023b942c:
            func_0x000107c614a8(&uStack_a0);
            func_0x000107c6142c(puVar9);
            goto LAB_1023b9440;
          }
          func_0x000107c61434(lVar15);
          uVar14 = uVar4;
          puVar8 = puVar9;
          func_0x000100029284();
          if (((ulong)puVar8 & 1) == 0) {
            func_0x000107c6142c(lVar15);
            goto LAB_1023b942c;
          }
          lVar5 = *(long *)(*(long *)(lVar15 + 0x38) + uVar14 * 8);
          func_0x000107c61174();
          func_0x000107c614a8(&uStack_a0);
          func_0x000107c6142c(lVar15);
          lVar15 = lVar5;
          func_0x000107c43e28();
          func_0x000107c61180();
          if (lVar15 == 0) {
            lVar18 = 0;
            puVar16 = (undefined8 *)0x0;
            puVar19 = puVar8;
          }
          else {
            lVar18 = lVar15;
            func_0x000107c5faec();
            puVar19 = puVar8;
            func_0x000107c61170(lVar15);
            puVar16 = puVar8;
          }
          lVar15 = lVar5;
          func_0x000107c51c58();
          func_0x000107c61180();
          if (lVar15 == 0) {
            lVar17 = 0;
            puVar19 = (undefined8 *)0x0;
            if (puVar16 == (undefined8 *)0x0) goto LAB_1023b95d8;
LAB_1023b9594:
            func_0x000107c5fadc(lVar18,puVar16);
            func_0x000107c6142c(puVar16);
            if (puVar19 != (undefined8 *)0x0) goto LAB_1023b95b0;
LAB_1023b95e0:
            lVar17 = 0;
          }
          else {
            lVar17 = lVar15;
            func_0x000107c5faec();
            func_0x000107c61170(lVar15);
            if (puVar16 != (undefined8 *)0x0) goto LAB_1023b9594;
LAB_1023b95d8:
            lVar18 = 0;
            if (puVar19 == (undefined8 *)0x0) goto LAB_1023b95e0;
LAB_1023b95b0:
            func_0x000107c5fadc(lVar17,puVar19);
            func_0x000107c6142c(puVar19);
          }
          puVar13 = PTR_PTR_1126aa6e8;
          func_0x000107c610f8();
          func_0x000107c46b2c();
          func_0x000107c61170(lVar18);
          func_0x000107c61170(lVar17);
          func_0x000107c61428(unaff_x20 + lVar20,&uStack_a0,0x21,0);
          if (puVar13 == (undefined *)0x0) {
            uVar10 = *(undefined8 *)(unaff_x20 + lVar20);
            func_0x000107c61434(uVar10);
            puVar19 = puVar9;
            func_0x000100029284();
            puVar8 = puVar19;
            func_0x000107c6142c(uVar10);
            if (((ulong)puVar19 & 1) == 0) {
              func_0x000107c6142c(puVar9);
            }
            else {
              uVar14 = *(ulong *)(unaff_x20 + lVar20);
              func_0x000107c61558();
              puVar19 = *(undefined8 **)(unaff_x20 + lVar20);
              *(undefined8 *)(unaff_x20 + lVar20) = 0x8000000000000000;
              if ((uVar14 & 1) == 0) {
                func_0x0001023b9bf4();
              }
              func_0x000107c6142c(*(undefined8 *)(puVar19[6] + uVar4 * 0x10 + 8));
              uVar10 = *(undefined8 *)(puVar19[7] + uVar4 * 8);
              puVar8 = puVar19;
              func_0x0001023ba000(uVar4);
              *(undefined8 **)(unaff_x20 + lVar20) = puVar19;
              func_0x000107c6142c(puVar9);
              func_0x000107c61170(uVar10);
            }
          }
          else {
            puVar6 = puVar13;
            func_0x000107c61174();
            uVar7 = *(ulong *)(unaff_x20 + lVar20);
            func_0x000107c61558();
            lVar18 = *(long *)(unaff_x20 + lVar20);
            *(undefined8 *)(unaff_x20 + lVar20) = 0x8000000000000000;
            uVar14 = uVar4;
            puVar8 = puVar9;
            func_0x000100029284();
            uVar11 = (ulong)~(uint)puVar8 & 1;
            lVar15 = *(long *)(lVar18 + 0x10) + uVar11;
            if (SCARRY8(*(long *)(lVar18 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1023b9850);
              (*pcVar2)();
            }
            if (*(long *)(lVar18 + 0x18) < lVar15) {
              FUN_1023b9d64(lVar15,uVar7);
              uVar14 = uVar4;
              puVar19 = puVar9;
              func_0x000100029284();
              if (((uint)puVar8 & 1) != ((uint)puVar19 & 1)) {
                func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1023b9970);
                (*pcVar2)();
              }
joined_r0x0001023b97a4:
              uVar7 = (ulong)puVar8 & 1;
              puVar8 = puVar19;
              if (uVar7 != 0) goto LAB_1023b9768;
LAB_1023b97a8:
              lVar15 = lVar18 + (uVar14 >> 6) * 8;
              *(ulong *)(lVar15 + 0x40) = *(ulong *)(lVar15 + 0x40) | 1L << (uVar14 & 0x3f);
              puVar1 = (ulong *)(*(long *)(lVar18 + 0x30) + uVar14 * 0x10);
              *puVar1 = uVar4;
              puVar1[1] = (ulong)puVar9;
              *(undefined **)(*(long *)(lVar18 + 0x38) + uVar14 * 8) = puVar6;
              if (SCARRY8(*(long *)(lVar18 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1023b9854);
                (*pcVar2)();
              }
              *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + 1;
              puVar8 = puVar19;
            }
            else {
              puVar19 = puVar8;
              if ((uVar7 & 1) == 0) {
                func_0x0001023b9bf4();
                goto joined_r0x0001023b97a4;
              }
              if (((ulong)puVar8 & 1) == 0) goto LAB_1023b97a8;
LAB_1023b9768:
              uVar10 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + uVar14 * 8);
              *(undefined **)(*(long *)(lVar18 + 0x38) + uVar14 * 8) = puVar6;
              func_0x000107c6142c(puVar9);
              func_0x000107c61170(uVar10);
            }
            *(long *)(unaff_x20 + lVar20) = lVar18;
          }
          func_0x000107c614a8(&uStack_a0);
          func_0x000107c615e8(uVar22);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(puVar13);
          bVar3 = SCARRY8(lVar21,1);
          lVar21 = lVar21 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1023b984c);
            (*pcVar2)();
          }
        }
        lVar12 = lVar12 + 1;
      } while (puVar24 != puVar23);
    }
    lVar20 = *(long *)(unaff_x20 + lVar20);
    puVar23 = *(undefined8 **)(lVar20 + 0x10);
    puVar8 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar23 != (undefined8 *)0x0) {
      func_0x000107c61434(lVar20);
      puVar8 = puVar23;
      FUN_1023bbab8(puVar23,0);
      puVar9 = &uStack_a0;
      func_0x0001023ba1b0(puVar9,puVar8 + 4,puVar23,lVar20);
      FUN_1023ba2fc(uStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
      if (puVar9 != puVar23) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023b98c8);
        (*pcVar2)();
      }
    }
    puVar13 = PTR_PTR_1126aa6f0;
    func_0x000107c610f8(PTR_PTR_1126aa6f0);
    uVar10 = 0;
    FUN_1023ba304(0,0x112e92af0,&PTR_PTR_1126aa6e8);
    puVar23 = puVar8;
    func_0x000107c5fc48(puVar8,uVar10);
    func_0x000107c61574(puVar8);
    func_0x000107c45cd8(puVar13);
    func_0x000107c61170(puVar23);
  }
  return puVar13;
}



/* Entry: 1023b9970; end: 1023b9aa3; -[_TtC26SCMagicCaptionServicesImpl18MagicCaptionLogger magicCaptionLogginParamsWithUsedCaptions:] */

void FUN_1023b9970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e92b60;
  func_0x0001000285a8(0x112e92b60,&UNK_10da9e9d8);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1023b939c(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023b9aa4; end: 1023b9d63;  */

void FUN_1023b9aa4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1023b9b7c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1023b9d64(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023b9b44);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001023b9bf4();
    lVar6 = *unaff_x20;
    goto joined_r0x0001023b9b90;
  }
  lVar6 = *unaff_x20;
joined_r0x0001023b9b90:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1023b9bf4);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1023b9d64; end: 1023ba2fb;  */

void FUN_1023b9d64(long param_1,ulong param_2)

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
  uVar6 = 0x112e92b68;
  func_0x0001000285a8(0x112e92b68,&UNK_10da9e9e0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1023b9fcc:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1023b9ffc);
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
          goto LAB_1023b9fcc;
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
      func_0x000107c61174(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1023ba000);
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



/* Entry: 1023ba2fc; end: 1023ba303;  */

void FUN_1023ba2fc(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1023ba304; end: 1023ba343;  */

void FUN_1023ba304(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023ba344; end: 1023ba4b3;  */

undefined1  [16] FUN_1023ba344(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar3 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar3 = param_2 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    func_0x000107c61434(param_2);
  }
  else {
    uVar3 = param_3;
    FUN_1023baad4(param_3,param_4,param_1,param_2);
    uVar6 = param_4 >> 0x38 & 0xf;
    uVar5 = (uint)(param_3 >> 0x3b) & 1;
    if ((uVar3 & 1) == 0) {
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_2);
    }
    else {
      uVar3 = param_3;
      if ((param_4 & 0x2000000000000000) != 0) {
        uVar3 = uVar6;
      }
      uVar2 = uVar5;
      if ((param_4 & 0x1000000000000000) == 0) {
        uVar2 = 1;
      }
      uVar1 = 7;
      if (uVar2 == 0) {
        uVar1 = 0xb;
      }
      uVar4 = 0xf;
      func_0x000101ee55a0(0xf,uVar1 | uVar3 << 0x10,param_3,param_4);
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_2);
      FUN_1023ba4b4(uVar4);
    }
    uVar3 = param_3;
    FUN_1023ba5d4(param_3,param_4,param_1,param_2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c6142c(param_4);
    }
    else {
      uVar3 = param_3;
      if ((param_4 & 0x2000000000000000) != 0) {
        uVar3 = uVar6;
      }
      if ((param_4 & 0x1000000000000000) == 0) {
        uVar5 = 1;
      }
      uVar6 = 7;
      if (uVar5 == 0) {
        uVar6 = 0xb;
      }
      func_0x000101ee55a0(0xf,uVar6 | uVar3 << 0x10,param_3,param_4);
      FUN_1023ba530();
      func_0x000107c6142c(param_4);
    }
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 1023ba4b4; end: 1023ba52f;  */

void FUN_1023ba4b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  if (-1 < param_1) {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    uVar5 = (uint)(*unaff_x20 >> 0x3b) & 1;
    if ((uVar2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar2 = 7;
    if (uVar5 == 0) {
      uVar2 = 0xb;
    }
    uVar4 = 0xf;
    func_0x000107c5fb68(0xf,param_1,uVar2 | uVar1 << 0x10);
    if (((uint)param_1 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb7838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS14removeSubrangeyySnySS5IndexVGF_11034d920)(0xf,uVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023ba530);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1023ba52c);
  (*pcVar3)();
}



/* Entry: 1023ba530; end: 1023ba5d3;  */

void FUN_1023ba530(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  if (-1 < param_1) {
    uVar4 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    uVar3 = (uint)(*unaff_x20 >> 0x3b) & 1;
    if ((uVar4 & 0x1000000000000000) == 0) {
      uVar3 = 1;
    }
    uVar4 = 7;
    if (uVar3 == 0) {
      uVar4 = 0xb;
    }
    uVar4 = uVar4 | uVar1 << 0x10;
    param_1 = -param_1;
    func_0x000107c5fb68(uVar4,param_1,0xf);
    if (((uint)param_1 & 0xff) != 1) {
      if (uVar4 >> 0xe <= uVar1 << 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb7838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sSS14removeSubrangeyySnySS5IndexVGF_11034d920)();
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ba5d0);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ba5d4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ba5cc);
  (*pcVar2)();
}



/* Entry: 1023ba5d4; end: 1023baad3;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1023ba5d4(undefined8 *******param_1,ulong param_2,undefined8 *******param_3,ulong param_4)

{
  undefined8 *******pppppppuVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  code *pcVar6;
  undefined8 *******pppppppuVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uStack_78;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  
  uVar3 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar3 = param_2 >> 0x38 & 0xf;
  }
  uVar4 = (ulong)param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar4 = param_4 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    if (uVar3 == 0) {
      return true;
    }
    if ((param_2 >> 0x3c & 1) != 0) {
      lVar17 = 0;
      goto LAB_1023baa98;
    }
    if ((param_2 & 0x2000000000000000) != 0 || ((ulong)param_1 & 0x1000000000000000) != 0) {
      return false;
    }
  }
  else {
    lVar17 = 0;
    uVar8 = (uint)((ulong)param_3 >> 0x3b) & 1;
    if ((param_4 & 0x1000000000000000) == 0) {
      uVar8 = 1;
    }
    uVar14 = 7;
    if (uVar8 == 0) {
      uVar14 = 0xb;
    }
    uVar13 = 4L << uVar8;
    uStack_78 = param_4 & 0xffffffffffffff;
    pppppppuVar1 = (undefined8 *******)((param_4 & 0xfffffffffffffff) + 0x20);
    uVar14 = uVar14 | uVar4 << 0x10;
    do {
      if ((uVar14 & 0xc) == uVar13 || (uVar14 & 1) == 0) {
        if ((uVar14 & 0xc) == uVar13) {
          func_0x000100e36e7c(uVar14,param_3,param_4);
        }
        if (uVar4 < uVar14 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1023baa60);
          (*pcVar6)();
        }
        if ((uVar14 & 1) == 0) {
          uVar15 = uVar14;
          func_0x000100eda254(uVar14,param_3,param_4);
          uVar14 = uVar14 & 0xc | uVar15 & 0xfffffffffffffff3 | 1;
        }
        if (uVar14 < 0x4000) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1023baa2c);
          (*pcVar6)();
        }
      }
      else if (uVar4 < uVar14 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1023baa64);
        (*pcVar6)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        uVar15 = uVar14 >> 0x10;
        if ((param_4 >> 0x3d & 1) == 0) {
          pppppppuVar7 = pppppppuVar1;
          if (((ulong)param_3 >> 0x3c & 1) == 0) {
            pppppppuVar7 = param_3;
            func_0x000107c60358(param_3,param_4);
          }
          uVar8 = (uint)*(byte *)((long)pppppppuVar7 + (uVar15 - 1));
          if (uVar8 == 0xffffffbf || SCARRY4(uVar8,0x41)) {
            lVar10 = -2;
            do {
              lVar9 = lVar10;
              lVar10 = lVar9 + -1;
            } while (*(char *)((long)pppppppuVar7 + lVar9 + uVar15) < -0x40);
          }
          else {
LAB_1023ba75c:
            lVar9 = -1;
          }
        }
        else {
          pppppppuStack_70 = param_3;
          uStack_68 = uStack_78;
          if (-0x41 < *(char *)((long)&uStack_78 + uVar15 + 7)) goto LAB_1023ba75c;
          lVar10 = -2;
          do {
            lVar9 = lVar10;
            lVar10 = lVar9 + -1;
          } while (*(char *)((long)&pppppppuStack_70 + lVar9 + uVar15) < -0x40);
        }
        uVar14 = uVar14 + lVar9 * 0x10000 & 0xffffffffffff0000 | 5;
      }
      else {
        func_0x000107c5fb44(uVar14,param_3,param_4);
      }
      uVar15 = uVar14;
      if ((uVar14 & 0xc) == uVar13 || (uVar14 & 1) == 0) {
        if ((uVar14 & 0xc) == uVar13) {
          func_0x000100e36e7c(uVar14,param_3,param_4);
        }
        uVar16 = uVar15 >> 0x10;
        if (uVar4 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1023baa6c);
          (*pcVar6)();
        }
        if ((uVar15 & 1) == 0) {
          func_0x000100eda254();
          uVar16 = uVar15 >> 0x10;
        }
      }
      else {
        uVar16 = uVar14 >> 0x10;
        if (uVar4 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1023baa68);
          (*pcVar6)();
        }
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          pppppppuVar7 = pppppppuVar1;
          if (((ulong)param_3 >> 0x3c & 1) == 0) {
            pppppppuVar7 = param_3;
            func_0x000107c60358(param_3,param_4);
          }
          pbVar2 = (byte *)((long)pppppppuVar7 + uVar16);
          bVar5 = *pbVar2;
        }
        else {
          pppppppuStack_70 = param_3;
          uStack_68 = uStack_78;
          pbVar2 = (byte *)((long)&pppppppuStack_70 + uVar16);
          bVar5 = *pbVar2;
        }
        uVar8 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          uVar8 = (uint)bVar5;
          uVar11 = (uint)LZCOUNT(uVar8 << 0x18 ^ 0xffffffff);
          if (uVar11 < 3) {
            if (uVar11 != 1) {
              uVar8 = pbVar2[1] & 0x3f | (uVar8 & 0x1f) << 6;
            }
          }
          else {
            if (uVar11 == 3) {
              bVar5 = pbVar2[2];
              uVar8 = (uVar8 & 0xf) << 0xc | (pbVar2[1] & 0x3f) << 6;
            }
            else {
              bVar5 = pbVar2[3];
              uVar8 = (uVar8 & 0xf) << 0x12 | (pbVar2[1] & 0x3f) << 0xc | (pbVar2[2] & 0x3f) << 6;
            }
            uVar8 = uVar8 | bVar5 & 0x3f;
          }
        }
      }
      else {
        uVar15 = uVar15 & 0xffffffffffff0000;
        func_0x000107c602f8(uVar15,param_3,param_4);
        uVar8 = (uint)uVar15;
      }
      if ((long)uVar3 <= lVar17) {
        return (long)uVar3 <= lVar17;
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pppppppuVar7 = (undefined8 *******)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pppppppuVar7 = param_1;
            func_0x000107c60358(param_1,param_2);
          }
        }
        else {
          pppppppuStack_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          pppppppuVar7 = &pppppppuStack_70;
        }
        pbVar2 = (byte *)((long)pppppppuVar7 + lVar17);
        uVar11 = (uint)*pbVar2;
        if ((char)*pbVar2 < '\0') {
          uVar12 = (uint)LZCOUNT(uVar11 << 0x18 ^ 0xffffffff);
          if (uVar12 < 3) {
            if (uVar12 == 1) goto LAB_1023ba8e4;
            uVar11 = pbVar2[1] & 0x3f | (uVar11 & 0x1f) << 6;
            pppppppuVar7 = (undefined8 *******)0x2;
          }
          else if (uVar12 == 3) {
            uVar11 = (uVar11 & 0xf) << 0xc | (pbVar2[1] & 0x3f) << 6 | pbVar2[2] & 0x3f;
            pppppppuVar7 = (undefined8 *******)0x3;
          }
          else {
            uVar11 = (uVar11 & 0xf) << 0x12 | (pbVar2[1] & 0x3f) << 0xc | (pbVar2[2] & 0x3f) << 6 |
                     pbVar2[3] & 0x3f;
            pppppppuVar7 = (undefined8 *******)0x4;
          }
        }
        else {
LAB_1023ba8e4:
          pppppppuVar7 = (undefined8 *******)0x1;
        }
      }
      else {
        lVar10 = lVar17 << 0x10;
        pppppppuVar7 = param_1;
        func_0x000107c602f8(lVar10,param_1,param_2);
        uVar11 = (uint)lVar10;
      }
      if (uVar8 != uVar11) {
        return (long)uVar3 <= lVar17;
      }
      lVar17 = (long)pppppppuVar7 + lVar17;
    } while (uVar14 >> 0xe != 0);
    if ((long)uVar3 <= lVar17) {
      return true;
    }
    if ((param_2 >> 0x3c & 1) != 0) {
LAB_1023baa98:
      func_0x000107c602f8(lVar17 << 0x10,param_1,param_2);
      return false;
    }
    if ((param_2 & 0x2000000000000000) != 0 || ((ulong)param_1 & 0x1000000000000000) != 0) {
      return false;
    }
  }
  func_0x000107c60358(param_1,param_2);
  return false;
}



/* Entry: 1023baad4; end: 1023bade7;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1023baad4(undefined8 *******param_1,ulong param_2,undefined8 *******param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *******pppppppuVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  undefined8 *******pppppppuVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar2 = (ulong)param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar2 = param_4 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    if (uVar1 == 0) {
      return true;
    }
    if ((param_2 >> 0x3c & 1) != 0) {
      lVar11 = 0;
      goto LAB_1023badac;
    }
    if ((param_2 & 0x2000000000000000) != 0 || ((ulong)param_1 & 0x1000000000000000) != 0) {
      return false;
    }
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    do {
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          pppppppuVar4 = (undefined8 *******)((param_4 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_3 >> 0x3c & 1) == 0) {
            pppppppuVar4 = param_3;
            func_0x000107c60358(param_3,param_4);
          }
        }
        else {
          pppppppuStack_70 = param_3;
          uStack_68 = param_4 & 0xffffffffffffff;
          pppppppuVar4 = &pppppppuStack_70;
        }
        pbVar5 = (byte *)((long)pppppppuVar4 + lVar10);
        uVar3 = (uint)*pbVar5;
        if ((char)*pbVar5 < '\0') {
          uVar7 = (uint)LZCOUNT(uVar3 << 0x18 ^ 0xffffffff);
          if (uVar7 < 3) {
            if (uVar7 == 1) goto LAB_1023baba0;
            uVar3 = pbVar5[1] & 0x3f | (uVar3 & 0x1f) << 6;
            pppppppuVar4 = (undefined8 *******)0x2;
          }
          else if (uVar7 == 3) {
            uVar3 = (uVar3 & 0xf) << 0xc | (pbVar5[1] & 0x3f) << 6 | pbVar5[2] & 0x3f;
            pppppppuVar4 = (undefined8 *******)0x3;
          }
          else {
            uVar3 = (uVar3 & 0xf) << 0x12 | (pbVar5[1] & 0x3f) << 0xc | (pbVar5[2] & 0x3f) << 6 |
                    pbVar5[3] & 0x3f;
            pppppppuVar4 = (undefined8 *******)0x4;
          }
        }
        else {
LAB_1023baba0:
          pppppppuVar4 = (undefined8 *******)0x1;
        }
      }
      else {
        lVar6 = lVar10 << 0x10;
        pppppppuVar4 = param_3;
        func_0x000107c602f8(lVar6,param_3,param_4);
        uVar3 = (uint)lVar6;
      }
      if ((long)uVar1 <= lVar11) {
        return (long)uVar1 <= lVar11;
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pppppppuVar8 = (undefined8 *******)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pppppppuVar8 = param_1;
            func_0x000107c60358(param_1,param_2);
          }
        }
        else {
          pppppppuStack_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          pppppppuVar8 = &pppppppuStack_70;
        }
        pbVar5 = (byte *)((long)pppppppuVar8 + lVar11);
        uVar7 = (uint)*pbVar5;
        if ((char)*pbVar5 < '\0') {
          uVar9 = (uint)LZCOUNT(uVar7 << 0x18 ^ 0xffffffff);
          if (uVar9 < 3) {
            if (uVar9 == 1) goto LAB_1023bac00;
            uVar7 = pbVar5[1] & 0x3f | (uVar7 & 0x1f) << 6;
            pppppppuVar8 = (undefined8 *******)0x2;
          }
          else if (uVar9 == 3) {
            uVar7 = (uVar7 & 0xf) << 0xc | (pbVar5[1] & 0x3f) << 6 | pbVar5[2] & 0x3f;
            pppppppuVar8 = (undefined8 *******)0x3;
          }
          else {
            uVar7 = (uVar7 & 0xf) << 0x12 | (pbVar5[1] & 0x3f) << 0xc | (pbVar5[2] & 0x3f) << 6 |
                    pbVar5[3] & 0x3f;
            pppppppuVar8 = (undefined8 *******)0x4;
          }
        }
        else {
LAB_1023bac00:
          pppppppuVar8 = (undefined8 *******)0x1;
        }
      }
      else {
        lVar6 = lVar11 << 0x10;
        pppppppuVar8 = param_1;
        func_0x000107c602f8(lVar6,param_1,param_2);
        uVar7 = (uint)lVar6;
      }
      if (uVar3 != uVar7) {
        return (long)uVar1 <= lVar11;
      }
      lVar10 = (long)pppppppuVar4 + lVar10;
      lVar11 = (long)pppppppuVar8 + lVar11;
    } while (lVar10 < (long)uVar2);
    if ((long)uVar1 <= lVar11) {
      return true;
    }
    if ((param_2 >> 0x3c & 1) != 0) {
LAB_1023badac:
      func_0x000107c602f8(lVar11 << 0x10,param_1,param_2);
      return false;
    }
    if ((param_2 & 0x2000000000000000) != 0 || ((ulong)param_1 & 0x1000000000000000) != 0) {
      return false;
    }
  }
  func_0x000107c60358(param_1,param_2);
  return false;
}



/* Entry: 1023bade8; end: 1023bae93;  */

/* WARNING: Possible PIC construction at 0x0001023bae50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023bae54) */

void FUN_1023bade8(long param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c4a704();
  if ((int)lVar1 == 0) {
    func_0x000107c43bb0();
  }
  else {
    func_0x000107c5ddac();
  }
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61174();
    FUN_1023bb894();
    (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  (*param_2)();
  return;
}



/* Entry: 1023bae94; end: 1023bb893;  */

/* WARNING: Possible PIC construction at 0x0001023baf40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bafb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bb114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bb2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bb2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bb3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bb3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bb3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bb40c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023bb3d8) */
/* WARNING: Removing unreachable block (ram,0x0001023bb3c8) */
/* WARNING: Removing unreachable block (ram,0x0001023bb3b8) */
/* WARNING: Removing unreachable block (ram,0x0001023bb2e8) */
/* WARNING: Removing unreachable block (ram,0x0001023bb2ac) */
/* WARNING: Removing unreachable block (ram,0x0001023bb3f8) */
/* WARNING: Removing unreachable block (ram,0x0001023bb2b0) */
/* WARNING: Removing unreachable block (ram,0x0001023bb490) */
/* WARNING: Removing unreachable block (ram,0x0001023bb2c4) */
/* WARNING: Removing unreachable block (ram,0x0001023bb118) */
/* WARNING: Removing unreachable block (ram,0x0001023bb124) */
/* WARNING: Removing unreachable block (ram,0x0001023bafb8) */
/* WARNING: Removing unreachable block (ram,0x0001023bafc0) */
/* WARNING: Removing unreachable block (ram,0x0001023bafcc) */
/* WARNING: Removing unreachable block (ram,0x0001023bafd0) */
/* WARNING: Removing unreachable block (ram,0x0001023bafd4) */
/* WARNING: Removing unreachable block (ram,0x0001023bb098) */
/* WARNING: Removing unreachable block (ram,0x0001023bb0a0) */
/* WARNING: Removing unreachable block (ram,0x0001023bafdc) */
/* WARNING: Removing unreachable block (ram,0x0001023bafe4) */
/* WARNING: Removing unreachable block (ram,0x0001023bb014) */
/* WARNING: Removing unreachable block (ram,0x0001023bb05c) */
/* WARNING: Removing unreachable block (ram,0x0001023bb028) */
/* WARNING: Removing unreachable block (ram,0x0001023baf44) */
/* WARNING: Removing unreachable block (ram,0x0001023bb1f4) */
/* WARNING: Removing unreachable block (ram,0x0001023bb1f8) */
/* WARNING: Removing unreachable block (ram,0x0001023baf54) */
/* WARNING: Removing unreachable block (ram,0x0001023baf58) */
/* WARNING: Removing unreachable block (ram,0x0001023baf68) */
/* WARNING: Removing unreachable block (ram,0x0001023bb0ac) */
/* WARNING: Removing unreachable block (ram,0x0001023bb208) */
/* WARNING: Removing unreachable block (ram,0x0001023bb20c) */
/* WARNING: Removing unreachable block (ram,0x0001023bb0c0) */
/* WARNING: Removing unreachable block (ram,0x0001023bb21c) */
/* WARNING: Removing unreachable block (ram,0x0001023bb0c8) */
/* WARNING: Removing unreachable block (ram,0x0001023bb0d8) */
/* WARNING: Removing unreachable block (ram,0x0001023bb188) */
/* WARNING: Removing unreachable block (ram,0x0001023bb0dc) */
/* WARNING: Removing unreachable block (ram,0x0001023bb1f0) */
/* WARNING: Removing unreachable block (ram,0x0001023bb0e8) */
/* WARNING: Removing unreachable block (ram,0x0001023bb0f4) */
/* WARNING: Removing unreachable block (ram,0x0001023bb1ec) */
/* WARNING: Removing unreachable block (ram,0x0001023bb100) */
/* WARNING: Removing unreachable block (ram,0x0001023bb128) */
/* WARNING: Removing unreachable block (ram,0x0001023bb138) */
/* WARNING: Removing unreachable block (ram,0x0001023bb15c) */
/* WARNING: Removing unreachable block (ram,0x0001023bb1a8) */
/* WARNING: Removing unreachable block (ram,0x0001023bb16c) */
/* WARNING: Removing unreachable block (ram,0x0001023bb224) */
/* WARNING: Removing unreachable block (ram,0x0001023bb230) */
/* WARNING: Removing unreachable block (ram,0x0001023bb420) */
/* WARNING: Removing unreachable block (ram,0x0001023bb234) */
/* WARNING: Removing unreachable block (ram,0x0001023bb42c) */
/* WARNING: Removing unreachable block (ram,0x0001023bb23c) */
/* WARNING: Removing unreachable block (ram,0x0001023bb464) */
/* WARNING: Removing unreachable block (ram,0x0001023bb244) */
/* WARNING: Removing unreachable block (ram,0x0001023bb484) */
/* WARNING: Removing unreachable block (ram,0x0001023bb24c) */
/* WARNING: Removing unreachable block (ram,0x0001023bb254) */
/* WARNING: Removing unreachable block (ram,0x0001023bb488) */
/* WARNING: Removing unreachable block (ram,0x0001023bb274) */
/* WARNING: Removing unreachable block (ram,0x0001023bb48c) */
/* WARNING: Removing unreachable block (ram,0x0001023bb288) */
/* WARNING: Removing unreachable block (ram,0x0001023bb180) */
/* WARNING: Removing unreachable block (ram,0x0001023bb110) */
/* WARNING: Removing unreachable block (ram,0x0001023baf70) */
/* WARNING: Removing unreachable block (ram,0x0001023bb03c) */
/* WARNING: Removing unreachable block (ram,0x0001023baf74) */
/* WARNING: Removing unreachable block (ram,0x0001023bb1e8) */
/* WARNING: Removing unreachable block (ram,0x0001023baf80) */
/* WARNING: Removing unreachable block (ram,0x0001023baf8c) */
/* WARNING: Removing unreachable block (ram,0x0001023bb1e4) */
/* WARNING: Removing unreachable block (ram,0x0001023baf98) */
/* WARNING: Removing unreachable block (ram,0x0001023bb410) */

void FUN_1023bae94(undefined8 param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126affe8;
  func_0x000107c61168();
  func_0x000107c4b838();
  func_0x000107c61180();
  func_0x000107c4e914();
  func_0x000107c61180();
  if (param_2 == (undefined *)0x0) {
    (*param_3)();
  }
  else {
    uVar2 = 0;
    FUN_1023bc16c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c5fc54(param_2,uVar2);
    puVar1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1023bb894; end: 1023bb9a3;  */

void FUN_1023bb894(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f096120);
  func_0x000107c4980c();
  func_0x000107c61170(uVar1);
  if (0 < iVar2) {
    dVar6 = (double)iVar2;
    func_0x000107c5b078(param_3);
    if ((dVar6 < param_1) && (func_0x000107c5b078(param_3), dVar6 < param_2)) {
      func_0x000107c5b078(param_3);
      dVar3 = param_1;
      dVar5 = param_2;
      func_0x000107c5b078(param_3);
      func_0x000107c5b078(param_3);
      if (param_2 <= param_1) {
        dVar4 = (dVar3 / dVar5) * dVar6;
      }
      else {
        dVar4 = dVar6;
        dVar6 = dVar6 / (dVar3 / dVar5);
      }
      func_0x0001090129f0(dVar4,dVar6,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1023bb9a4; end: 1023bba5b;  */

/* WARNING: Possible PIC construction at 0x0001023bba14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023bba18) */

void FUN_1023bb9a4(void)

{
  undefined *puVar1;
  long in_x3;
  long in_stack_00000000;
  code *in_stack_00000008;
  
  if ((in_x3 != 0) && (in_stack_00000000 == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c61174(in_x3);
    func_0x000107c45af0(puVar1);
    FUN_1023bb894();
    (*in_stack_00000008)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(in_x3);
    return;
  }
  (*in_stack_00000008)(0,5);
  return;
}



/* Entry: 1023bba5c; end: 1023bbab7;  */

void FUN_1023bba5c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023bbab8; end: 1023bbac3;  */

undefined * FUN_1023bbab8(undefined *param_1,undefined *param_2)

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
    (*(code *)0x1023b873c)();
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



/* Entry: 1023bbac4; end: 1023bbb43;  */

undefined * FUN_1023bbac4(undefined *param_1,undefined *param_2,code *param_3)

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



/* Entry: 1023bbb44; end: 1023bbda7;  */

ulong FUN_1023bbb44(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023bbc8c);
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
  FUN_1023bbac4(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023bbc88);
      (*pcVar1)();
    }
    func_0x0001023bbc8c(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 1023bbda8; end: 1023bbf4f;  */

ulong FUN_1023bbda8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bbe84);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bbe88);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x6f69747061434353,0xe90000000000006e);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bbf50);
  (*pcVar2)();
}



/* Entry: 1023bbf50; end: 1023bc10b;  */

ulong FUN_1023bbf50(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bc034);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bc038);
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
  FUN_1023bc16c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bc10c);
  (*pcVar2)();
}



/* Entry: 1023bc10c; end: 1023bc137;  */

void FUN_1023bc10c(long param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long extraout_x8;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar18 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar5 + 0x10,auStack_78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    if (param_1 != 0) {
      lVar6 = param_1;
      uStack_c0 = uVar14;
      uStack_b0 = uVar12;
      func_0x000107c61174();
      lVar7 = lVar6;
      func_0x000107c4e430();
      func_0x000107c61180();
      if (lVar7 != 0) {
        lStack_b8 = lVar6;
        if (param_2 == 0) {
          func_0x000107c4ca5c();
          if (iVar3 == 3) {
            func_0x000107c61170(lVar7);
            func_0x000107c5edb4(lVar18,param_1);
            puVar8 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
            func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
            puVar9 = puVar8;
            func_0x000107c5ed90();
            func_0x000107c48fd4(puVar8);
            func_0x000107c61170(puVar9);
            (**(code **)(lVar16 + 8))(lVar18,lVar4);
            puVar10 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
            func_0x000107c610f8();
            func_0x000107c457a0();
            func_0x000107c52860();
            puVar17 = *(undefined **)PTR__kCMTimeZero_110348670;
            puVar1 = (undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
            uVar14 = *puVar1;
            uVar12 = *puVar1;
            uStack_a0 = *puVar1;
            uVar15 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
            puStack_a8 = puVar17;
            puStack_98 = (undefined *)uVar15;
            func_0x000107c57e18(puVar10);
            puVar9 = puVar10;
            puStack_a8 = puVar17;
            uStack_a0 = uVar12;
            puStack_98 = (undefined *)uVar15;
            func_0x000107c57e14();
            func_0x000100f95ddc();
            func_0x000107c613fc();
            *(undefined8 *)(puVar9 + 0x18) = 3;
            *(undefined8 *)(puVar9 + 0x10) = 1;
            puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x000107c61168();
            puStack_a8 = puVar17;
            uStack_a0 = uVar14;
            puStack_98 = (undefined *)uVar15;
            func_0x000107c5dc5c();
            func_0x000107c61180();
            *(undefined **)(puVar9 + 0x20) = puVar11;
            uVar12 = 0;
            FUN_1023bc16c(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
            puVar11 = puVar9;
            func_0x000107c5fc48(puVar9,uVar12);
            func_0x000107c61574(puVar9);
            puVar9 = &UNK_1104fd2c0;
            func_0x000107c613fc(&UNK_1104fd2c0,0x30,7);
            uVar12 = uStack_b0;
            *(code **)(puVar9 + 0x10) = pcVar2;
            *(undefined8 *)(puVar9 + 0x18) = uStack_b0;
            *(long *)(puVar9 + 0x20) = lVar5;
            *(undefined8 *)(puVar9 + 0x28) = uStack_c0;
            pcStack_88 = FUN_1023bc138;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_100f728b4;
            puStack_90 = &UNK_1104fd2d8;
            ppuVar13 = &puStack_a8;
            puStack_80 = puVar9;
            func_0x000107c60bc4(ppuVar13);
            puVar9 = puStack_80;
            func_0x000107c6157c(uVar12);
            func_0x000107c6157c(lVar5);
            func_0x000107c61574(puVar9);
            func_0x000107c43d9c(puVar10);
            func_0x000107c60bd0(ppuVar13);
            func_0x000107c61574(lVar5);
            func_0x000107c61170(lStack_b8);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar11);
            return;
          }
          if (iVar3 == 2) {
            puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
            func_0x000107c610f8();
            func_0x000107c46110();
            func_0x000107c61170(lVar7);
            lVar4 = lStack_b8;
            if (puVar9 != (undefined *)0x0) {
              puVar8 = puVar9;
              FUN_1023bb894(puVar9);
              (*pcVar2)();
              func_0x000107c61574(lVar5);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar8);
              return;
            }
            (*pcVar2)(0,4);
            func_0x000107c61574(lVar5);
            func_0x000107c61170(lVar4);
            return;
          }
          func_0x000107c61170(lVar7);
          (*pcVar2)(0,6);
          func_0x000107c61574(lVar5);
          func_0x000107c61170(lStack_b8);
          return;
        }
        func_0x000107c61170(lVar6);
        lVar6 = lVar7;
      }
      func_0x000107c61170(lVar6);
    }
    (*pcVar2)(0,3);
    func_0x000107c61574(lVar5);
  }
  return;
}



/* Entry: 1023bc138; end: 1023bc16b;  */

void FUN_1023bc138(void)

{
  FUN_1023bb9a4();
  return;
}



/* Entry: 1023bc16c; end: 1023bc1ab;  */

void FUN_1023bc16c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023bc1ac; end: 1023bc1b3;  */

void FUN_1023bc1ac(long param_1,long param_2)

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



/* Entry: 1023bc1b4; end: 1023bc1d3; -[_TtC26SCMagicCaptionServicesImpl20MagicCaptionProvider delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bc1b4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112e92c28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023bc1d4; end: 1023bc1e7; -[_TtC26SCMagicCaptionServicesImpl20MagicCaptionProvider setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bc1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e92c28,param_3);
  return;
}



/* Entry: 1023bc1e8; end: 1023bc207; -[_TtC26SCMagicCaptionServicesImpl20MagicCaptionProvider magicCaptionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bc1e8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e92c30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023bc208; end: 1023bc2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1023bc208(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e92ca0;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112e92ca0);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainQueuePerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 1023bc300; end: 1023bc35f; -[_TtC26SCMagicCaptionServicesImpl20MagicCaptionProvider init] */

void FUN_1023bc300(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMagicCaptionServicesImpl.MagicCaptionProvider",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023bc32c);
  (*pcVar1)();
}



/* Entry: 1023bc360; end: 1023bc4d7; -[_TtC26SCMagicCaptionServicesImpl20MagicCaptionProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023bc41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bc44c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023bc420) */
/* WARNING: Removing unreachable block (ram,0x0001023bc450) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bc360(long param_1)

{
  func_0x0001023bffa8(param_1 + _DAT_112e92c28);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e92c30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e92c38));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e92c40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e92c48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e92c50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e92c58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e92c60));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e92c68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e92c70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e92c78));
  return;
}



/* Entry: 1023bc4d8; end: 1023bc4f7;  */

void FUN_1023bc4d8(void)

{
  func_0x000107c61168(&PTR_PTR_11283a270);
  return;
}



/* Entry: 1023bc4f8; end: 1023bc5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bc4f8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1;
  func_0x0001023bc278();
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e92c98);
    puVar2 = &UNK_1104fd310;
    func_0x000107c613fc(&UNK_1104fd310,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1104fd3d8;
    func_0x000107c613fc(&UNK_1104fd3d8,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    uStack_50 = 0x1023bfc0c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1104fd3f0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
  }
  return;
}



/* Entry: 1023bc5f0; end: 1023bc72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bc5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(char *)(param_1 + _DAT_112e92cb0) == '\x01') &&
       ((*(byte *)(param_1 + _DAT_112e92cb8) & 1) == 0)) {
      *(undefined1 *)(param_1 + _DAT_112e92cb8) = 1;
      lVar1 = param_1;
      FUN_1023bc208();
      puVar2 = &UNK_1104fd428;
      func_0x000107c613fc(&UNK_1104fd428,0x18,7);
      *(long *)(puVar2 + 0x10) = param_1;
      pcStack_58 = FUN_1023bfc18;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1104fd440;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_50;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(lVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar1);
    }
    else {
      FUN_1023bc72c(param_2,param_3);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1023bc72c; end: 1023bca43;  */

/* WARNING: Removing unreachable block (ram,0x0001023bcd24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bc72c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  lVar9 = unaff_x20;
  func_0x000107c614f0();
  lVar10 = _DAT_112e92cb0;
  if (*(long *)(unaff_x20 + _DAT_112e92ca8) != 0) {
    ppuVar4 = &puStack_70;
    lVar9 = *(long *)(unaff_x20 + _DAT_112e92ca8);
    if (lVar9 != 0) {
      lVar8 = lVar9;
      func_0x000107c615f0(lVar9);
      func_0x000107c3f474();
      *(undefined1 *)(unaff_x20 + lVar10) = 0;
      *(undefined1 *)(unaff_x20 + _DAT_112e92cb8) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_112e92cc8) = 0;
      FUN_1023bc208();
      puVar5 = &UNK_1104fd388;
      func_0x000107c613fc(&UNK_1104fd388,0x18,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_68 = (undefined *)0x42000000;
      pcStack_60 = (code *)&UNK_1000f6b44;
      puStack_58 = &UNK_1104fd3a0;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61174(unaff_x20);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(lVar8);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar9);
      func_0x000107c615e8(lVar8);
    }
    return;
  }
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112e92c68);
  func_0x000107c4c11c();
  func_0x000107c61180();
  if (uVar1 == 0) {
    FUN_1023bc208();
    puVar5 = &UNK_1104fd478;
    func_0x000107c613fc(&UNK_1104fd478,0x38,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar5 + 0x18) = 0xd000000000000019;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x20) = 0x800000010f096150;
    pcStack_60 = FUN_1023bfc30;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1104fd490;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar5 = puStack_58;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar1);
    func_0x000107c60bd0(ppuVar6);
    goto LAB_1023bca24;
  }
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112e92c70);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 == 0) {
LAB_1023bc804:
    lVar10 = *(long *)(unaff_x20 + _DAT_112e92cd0);
    uVar3 = uVar1;
    func_0x000107c43934();
    if ((int)uVar3 <= lVar10) {
      FUN_1023bc208();
      puVar5 = &UNK_1104fd4c8;
      func_0x000107c613fc(&UNK_1104fd4c8,0x18,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      pcStack_60 = (code *)0x1023bfc3c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1104fd4e0;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      puVar5 = puStack_58;
      func_0x000107c61174();
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(uVar3);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(uVar1);
      uVar1 = uVar3;
      goto LAB_1023bca24;
    }
  }
  else {
    uVar3 = uVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = uVar3;
    func_0x000107c4a564();
    func_0x000107c61170(uVar3);
    if ((uVar2 & 1) == 0) goto LAB_1023bc804;
  }
  FUN_1023bc208();
  puVar5 = &UNK_1104fd518;
  func_0x000107c613fc(&UNK_1104fd518,0x38,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  *(ulong *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  *(long *)(puVar5 + 0x30) = lVar9;
  pcStack_60 = (code *)0x1023bfc44;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1104fd530;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
LAB_1023bca24:
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 1023bca44; end: 1023bca9f; -[_TtC26SCMagicCaptionServicesImpl20MagicCaptionProvider generateMagicCaptionWithEditingCaptionText:] */

void FUN_1023bca44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1023bc4f8(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}


