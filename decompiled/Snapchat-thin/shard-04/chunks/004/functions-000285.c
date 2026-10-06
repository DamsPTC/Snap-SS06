/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103466ad4; end: 103466ae7;  */

void FUN_103466ad4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103466ae8; end: 103466b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103466ae8(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_113081bf8) + _DAT_113081a30) - 1;
  if (7 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 103466b18; end: 103466b1f;  */

void FUN_103466b18(void)

{
  return;
}



/* Entry: 103466b20; end: 103466cfb;  */

/* WARNING: Possible PIC construction at 0x000103466b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103466bb0) */
/* WARNING: Removing unreachable block (ram,0x000103466bf4) */
/* WARNING: Removing unreachable block (ram,0x000103466bbc) */
/* WARNING: Removing unreachable block (ram,0x000103466b9c) */
/* WARNING: Removing unreachable block (ram,0x000103466b6c) */
/* WARNING: Removing unreachable block (ram,0x000103466bcc) */

void FUN_103466b20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001044f74f0(0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = uVar2;
  func_0x000107c61174(uVar2);
  func_0x0001044f6a10(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103466cfc; end: 103466def;  */

/* WARNING: Possible PIC construction at 0x000103466d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103466d8c) */
/* WARNING: Removing unreachable block (ram,0x000103466dd0) */
/* WARNING: Removing unreachable block (ram,0x000103466d98) */
/* WARNING: Removing unreachable block (ram,0x000103466d80) */
/* WARNING: Removing unreachable block (ram,0x000103466d50) */
/* WARNING: Removing unreachable block (ram,0x000103466da8) */

void FUN_103466cfc(undefined8 param_1,undefined8 param_2)

{
  long in_x5;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(in_x5 + 0x20);
  func_0x000100c7f35c(0);
  func_0x000107c49c88(param_1);
  func_0x0001044f76f4();
  func_0x000107c4d664(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103466df0; end: 103466df7;  */

void FUN_103466df0(void)

{
  return;
}



/* Entry: 103466df8; end: 103466eb7;  */

/* WARNING: Possible PIC construction at 0x000103466e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466e6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103466e54) */
/* WARNING: Removing unreachable block (ram,0x000103466e98) */
/* WARNING: Removing unreachable block (ram,0x000103466e60) */
/* WARNING: Removing unreachable block (ram,0x000103466e48) */
/* WARNING: Removing unreachable block (ram,0x000103466e70) */

void FUN_103466df8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001044f74f0(0);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = uVar2;
  func_0x000107c61174(uVar2);
  func_0x0001044f6a10(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103466eb8; end: 103466ec7;  */

void FUN_103466eb8(void)

{
  return;
}



/* Entry: 103466ec8; end: 103466f1b;  */

void FUN_103466ec8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103466f1c; end: 103466f23; -[_TtC30LensCarouselPreviewIntegration35LensSessionLensCarouselDataProvider dataObservable] */

void FUN_103466f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 103466f24; end: 103466f2b; -[_TtC30LensCarouselPreviewIntegration35LensSessionLensCarouselDataProvider trackingEventObservable] */

void FUN_103466f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 103466f2c; end: 10346702b;  */

/* WARNING: Possible PIC construction at 0x000103466f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466fe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103466fc8) */
/* WARNING: Removing unreachable block (ram,0x00010346700c) */
/* WARNING: Removing unreachable block (ram,0x000103466fd4) */
/* WARNING: Removing unreachable block (ram,0x000103466fbc) */
/* WARNING: Removing unreachable block (ram,0x000103466fa8) */
/* WARNING: Removing unreachable block (ram,0x000103466f78) */
/* WARNING: Removing unreachable block (ram,0x000103466fe4) */

void FUN_103466f2c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001044f74f0(0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c61174(uVar2);
  func_0x0001044f6a10(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10346702c; end: 1034671bf;  */

undefined * FUN_10346702c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *unaff_x20;
  undefined8 uVar5;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c434f8(puVar1,param_2,param_1);
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    puVar4 = puVar1;
    func_0x000107c3e1cc();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    if (puVar4 != (undefined *)0x0) {
      return puVar4;
    }
  }
  lVar2 = param_1;
  func_0x000107c4a664();
  if ((int)lVar2 == 0) {
    puVar1 = PTR_PTR_1126b0820;
    func_0x000107c610f8(PTR_PTR_1126b0820);
    func_0x000107c453e4();
    lVar2 = param_1;
    func_0x000107c434c4();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x000107c434dc(param_1);
      func_0x000107c61180();
    }
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    func_0x000107c5fadc(lVar3,param_2);
    func_0x000107c6142c(param_2);
    puVar4 = puVar1;
    func_0x000107c5e650(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c434f0();
    puVar1 = puVar4;
    func_0x000107c5e848(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c4a4c0(param_1);
    puVar4 = puVar1;
    func_0x000107c5e608(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = puVar4;
    func_0x000107c3ecc8(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    return puVar1;
  }
  puVar4 = *(undefined **)(unaff_x20 + 0x20);
  puVar1 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar1 = unaff_x20;
    func_0x00010346721c();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined **)(unaff_x20 + 0x20) = puVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    puVar4 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar4);
  return puVar1;
}



/* Entry: 1034671c0; end: 10346731b;  */

long FUN_1034671c0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    func_0x00010346721c();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 10346731c; end: 10346736f;  */

void FUN_10346731c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103467370; end: 10346737b; -[SCLensCarouselPreviewViewModelCreatingServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467370(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e618;
  func_0x000107c61428(param_1 + _DAT_112f6e618,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10346737c; end: 103467387; -[SCLensCarouselPreviewViewModelCreatingServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346737c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e618;
  func_0x000107c61428(param_1 + _DAT_112f6e618,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103467388; end: 103467393; -[SCLensCarouselPreviewViewModelCreatingServiceProvider previewScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467388(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e620;
  func_0x000107c61428(param_1 + _DAT_112f6e620,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103467394; end: 10346739f; -[SCLensCarouselPreviewViewModelCreatingServiceProvider setPreviewScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467394(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e620;
  func_0x000107c61428(param_1 + _DAT_112f6e620,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034673a0; end: 1034673ab; -[SCLensCarouselPreviewViewModelCreatingServiceProvider lensCarouselDataProviderControllingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034673a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e628;
  func_0x000107c61428(param_1 + _DAT_112f6e628,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034673ac; end: 1034673b7; -[SCLensCarouselPreviewViewModelCreatingServiceProvider setLensCarouselDataProviderControllingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034673ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e628;
  func_0x000107c61428(param_1 + _DAT_112f6e628,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034673b8; end: 1034673c3; -[SCLensCarouselPreviewViewModelCreatingServiceProvider lensCarouselContextConfiguratorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034673b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e630;
  func_0x000107c61428(param_1 + _DAT_112f6e630,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034673c4; end: 1034673cf; -[SCLensCarouselPreviewViewModelCreatingServiceProvider setLensCarouselContextConfiguratorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034673c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e630;
  func_0x000107c61428(param_1 + _DAT_112f6e630,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034673d0; end: 1034673db; -[SCLensCarouselPreviewViewModelCreatingServiceProvider scopedLensFeaturesVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034673d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e638;
  func_0x000107c61428(param_1 + _DAT_112f6e638,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034673dc; end: 10346741f;  */

void FUN_1034673dc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103467420; end: 10346742b; -[SCLensCarouselPreviewViewModelCreatingServiceProvider setScopedLensFeaturesVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467420(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e638;
  func_0x000107c61428(param_1 + _DAT_112f6e638,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10346742c; end: 10346747f;  */

void FUN_10346742c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103467480; end: 10346771b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467480(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4f180();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4ae64();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4ae60();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c519b0();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = 0;
            func_0x000103459fb0();
            func_0x000107c613fc();
            uVar10 = *(undefined8 *)(lVar5 + _DAT_113082920);
            uVar12 = *(undefined8 *)(*(long *)(lVar3 + _DAT_113038be0) + _DAT_113038cc0);
            uVar11 = *(undefined8 *)(lVar4 + _DAT_113038858);
            puVar7 = &UNK_1106591c0;
            func_0x000107c613fc(&UNK_1106591c0,0x28,7);
            *(undefined8 *)(puVar7 + 0x10) = uVar12;
            *(undefined8 *)(puVar7 + 0x18) = uVar10;
            *(undefined8 *)(puVar7 + 0x20) = uVar11;
            func_0x0001000285a8(0x112f420e8,&UNK_10db8f0b0);
            func_0x000107c613fc();
            func_0x000107c61174();
            func_0x000107c61580(uVar12,2);
            func_0x000107c61580(uVar11,2);
            func_0x000107c61174();
            pcVar8 = FUN_10346771c;
            func_0x0001000bdd8c(FUN_10346771c,puVar7);
            uVar9 = 0;
            FUN_103475eb8(0);
            func_0x000107c610f8();
            func_0x000103475dfc(pcVar8,uVar9);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61574(uVar11);
            func_0x000107c61170(uVar10);
            func_0x000107c61574(uVar12);
            *(code **)(lVar6 + 0x10) = pcVar8;
            uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f6e640);
            *(long *)(unaff_x20 + _DAT_112f6e640) = lVar6;
            func_0x000107c6157c(lVar6);
            func_0x000107c61574(uVar10);
            func_0x000107c61174(*(undefined8 *)(lVar6 + 0x10));
            func_0x000107c61574(lVar6);
            return;
          }
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          lVar1 = lVar4;
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10346771c; end: 103467727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346771c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  uVar2 = 0x10345a038;
  func_0x0001000bdd8c(0x10345a038,uVar6);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_1130828e8);
  func_0x0001000bda74(uVar3);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  uVar5 = 0;
  func_0x000103464d44(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar6 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x000104886440();
  uVar7 = 0;
  FUN_103476260();
  uVar8 = uVar7;
  func_0x000107c613fc();
  FUN_103475f30(uVar2,uVar3,uVar4,uVar5,uVar6,uVar8);
  func_0x0001000834e4(auStack_78);
  param_1[3] = uVar7;
  param_1[4] = &PTR_DAT_11065a420;
  *param_1 = uVar2;
  return;
}



/* Entry: 103467728; end: 1034677b3; -[SCLensCarouselPreviewViewModelCreatingServiceProvider provide] */

void FUN_103467728(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_103467480();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "LensCarouselPreviewIntegration/SCLensCarouselPreviewViewModelCreatingServiceProvider.swift"
                      ,0x5a,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034677b4);
  (*pcVar1)();
}



/* Entry: 1034677b4; end: 1034677e7; -[SCLensCarouselPreviewViewModelCreatingServiceProvider __safeProvide] */

void FUN_1034677b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103467480();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034677e8; end: 10346782b; -[SCLensCarouselPreviewViewModelCreatingServiceProvider end] */

void FUN_1034677e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10346782c; end: 103467b0f;  */

void FUN_10346782c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == 0x5377656976657270) && (param_3 == -0x13ffffff9a8f909d)) ||
         (func_0x000107c605b8(0x5377656976657270,0xec00000065706f63,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c577c8();
      }
      else {
        uVar2 = 0xd00000000000002b;
        if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0ed9910)) ||
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f1266f0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55c24();
        }
        else {
          uVar2 = 0xd000000000000027;
          if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef0ed98e0)) ||
             (func_0x000107c605b8(0xd000000000000027,0x800000010f126720,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c20();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0f0da40)) &&
               (func_0x000107c605b8(0xd00000000000002e,0x800000010f0f25c0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "LensCarouselPreviewIntegration/SCLensCarouselPreviewViewModelCreatingServiceProvider.swift"
                                  ,0x5a,2,0x3d,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103467b10);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58c94();
          }
        }
      }
      goto LAB_1034678c0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_1034678c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103467b10; end: 103467bbb; -[SCLensCarouselPreviewViewModelCreatingServiceProvider setValue:forIvarName:] */

void FUN_103467b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10346782c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103467bbc; end: 103467c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467bbc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f6e618,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e620,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e628,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e630,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e638,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f6e640) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103467c6c; end: 103467c8b; -[SCLensCarouselPreviewViewModelCreatingServiceProvider init] */

void FUN_103467c6c(void)

{
  FUN_103467bbc();
  return;
}



/* Entry: 103467c8c; end: 103467cbf;  */

void FUN_103467c8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103467cc0; end: 103467d37; -[SCLensCarouselPreviewViewModelCreatingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467cc0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f6e618);
  func_0x000107c61610(param_1 + _DAT_112f6e620);
  func_0x000107c61610(param_1 + _DAT_112f6e628);
  func_0x000107c61610(param_1 + _DAT_112f6e630);
  func_0x000107c61610(param_1 + _DAT_112f6e638);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f6e640));
  return;
}



/* Entry: 103467d38; end: 103467d57;  */

void FUN_103467d38(void)

{
  func_0x000107c61168(&PTR_PTR_112f6e688);
  return;
}



/* Entry: 103467d58; end: 103467d63; -[SCLensCarouselPreviewContextConfiguratorServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467d58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e708;
  func_0x000107c61428(param_1 + _DAT_112f6e708,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103467d64; end: 103467d6f; -[SCLensCarouselPreviewContextConfiguratorServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e708;
  func_0x000107c61428(param_1 + _DAT_112f6e708,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103467d70; end: 103467d7b; -[SCLensCarouselPreviewContextConfiguratorServiceProvider previewScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467d70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e710;
  func_0x000107c61428(param_1 + _DAT_112f6e710,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103467d7c; end: 103467dbf;  */

void FUN_103467d7c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103467dc0; end: 103467dcb; -[SCLensCarouselPreviewContextConfiguratorServiceProvider setPreviewScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103467dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e710;
  func_0x000107c61428(param_1 + _DAT_112f6e710,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103467dcc; end: 103467e1f;  */

void FUN_103467dcc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103467e20; end: 1034680bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103467e20(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f180();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103458a48();
      func_0x000107c613fc();
      func_0x0001000285a8(0x112f41da8,&UNK_10db8ef70);
      func_0x000107c613fc();
      pcVar1 = FUN_1034589d8;
      func_0x0001000bdd8c(FUN_1034589d8,0);
      uVar5 = 0;
      func_0x000103f94e34(0);
      func_0x000107c610f8();
      func_0x000103f94d78(pcVar1,uVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      *(code **)(lVar4 + 0x10) = pcVar1;
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f6e718);
      *(long *)(unaff_x20 + _DAT_112f6e718) = lVar4;
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      uVar5 = *(undefined8 *)(lVar4 + 0x10);
      func_0x000107c61174(uVar5);
      func_0x000107c61574(lVar4);
      return uVar5;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "LensCarouselPreviewIntegration/SCLensCarouselPreviewContextConfiguratorServiceProvider.swift"
                      ,0x5c,2,0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103467f94);
  (*pcVar1)();
}



/* Entry: 1034680bc; end: 1034680ef; -[SCLensCarouselPreviewContextConfiguratorServiceProvider provide] */

void FUN_1034680bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103467e20();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1034680f0; end: 103468123; -[SCLensCarouselPreviewContextConfiguratorServiceProvider __safeProvide] */

void FUN_1034680f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103467f94();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103468124; end: 103468167; -[SCLensCarouselPreviewContextConfiguratorServiceProvider end] */

void FUN_103468124(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103468168; end: 103468307;  */

void FUN_103468168(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 != 0x5377656976657270) || (param_3 != -0x13ffffff9a8f909d)) &&
         (func_0x000107c605b8(0x5377656976657270,0xec00000065706f63,param_2,param_3,0),
         (uVar2 & 1) == 0)) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensCarouselPreviewIntegration/SCLensCarouselPreviewContextConfiguratorServiceProvider.swift"
                            ,0x5c,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103468308);
        (*pcVar1)();
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c577c8();
      goto LAB_103468270;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103468270:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103468308; end: 1034683b3; -[SCLensCarouselPreviewContextConfiguratorServiceProvider setValue:forIvarName:] */

void FUN_103468308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103468168(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1034683b4; end: 103468427; -[SCLensCarouselPreviewContextConfiguratorServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034683b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f6e708,0);
  func_0x000107c61614(param_1 + _DAT_112f6e710,0);
  *(undefined8 *)(param_1 + _DAT_112f6e718) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103468428; end: 10346845b;  */

void FUN_103468428(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10346845c; end: 1034684a3; -[SCLensCarouselPreviewContextConfiguratorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346845c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f6e708);
  func_0x000107c61610(param_1 + _DAT_112f6e710);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f6e718));
  return;
}



/* Entry: 1034684a4; end: 1034684c3;  */

void FUN_1034684a4(void)

{
  func_0x000107c61168(&PTR_PTR_112f6e760);
  return;
}



/* Entry: 1034684c4; end: 1034684cf; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034684c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e7c8;
  func_0x000107c61428(param_1 + _DAT_112f6e7c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034684d0; end: 1034684db; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034684d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e7c8;
  func_0x000107c61428(param_1 + _DAT_112f6e7c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034684dc; end: 1034684e7; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint previewScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034684dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e7d0;
  func_0x000107c61428(param_1 + _DAT_112f6e7d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034684e8; end: 1034684f3; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setPreviewScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034684e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e7d0;
  func_0x000107c61428(param_1 + _DAT_112f6e7d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034684f4; end: 1034684ff; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint loggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034684f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e7d8;
  func_0x000107c61428(param_1 + _DAT_112f6e7d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103468500; end: 10346850b; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468500(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e7d8;
  func_0x000107c61428(param_1 + _DAT_112f6e7d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10346850c; end: 103468517; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346850c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e7e0;
  func_0x000107c61428(param_1 + _DAT_112f6e7e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103468518; end: 103468523; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468518(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e7e0;
  func_0x000107c61428(param_1 + _DAT_112f6e7e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103468524; end: 10346852f; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint lensCarouselSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468524(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e7e8;
  func_0x000107c61428(param_1 + _DAT_112f6e7e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103468530; end: 10346853b; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setLensCarouselSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468530(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e7e8;
  func_0x000107c61428(param_1 + _DAT_112f6e7e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10346853c; end: 103468547; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346853c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e7f0;
  func_0x000107c61428(param_1 + _DAT_112f6e7f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103468548; end: 103468553; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468548(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e7f0;
  func_0x000107c61428(param_1 + _DAT_112f6e7f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103468554; end: 10346855f; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint previewFeatureLensExplorerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468554(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e7f8;
  func_0x000107c61428(param_1 + _DAT_112f6e7f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103468560; end: 10346856b; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setPreviewFeatureLensExplorerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468560(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e7f8;
  func_0x000107c61428(param_1 + _DAT_112f6e7f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10346856c; end: 103468577; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint scopedLensFeaturesVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346856c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e800;
  func_0x000107c61428(param_1 + _DAT_112f6e800,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103468578; end: 103468583; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setScopedLensFeaturesVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468578(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e800;
  func_0x000107c61428(param_1 + _DAT_112f6e800,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103468584; end: 10346858f; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint previewFeaturePlusSnapModesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468584(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e808;
  func_0x000107c61428(param_1 + _DAT_112f6e808,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103468590; end: 10346859b; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setPreviewFeaturePlusSnapModesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468590(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e808;
  func_0x000107c61428(param_1 + _DAT_112f6e808,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10346859c; end: 1034685a7; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint previewLensIconImpressionLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346859c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e810;
  func_0x000107c61428(param_1 + _DAT_112f6e810,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034685a8; end: 1034685eb;  */

void FUN_1034685a8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034685ec; end: 1034685f7; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setPreviewLensIconImpressionLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034685ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e810;
  func_0x000107c61428(param_1 + _DAT_112f6e810,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034685f8; end: 10346864b;  */

void FUN_1034685f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10346864c; end: 103468e8b;  */

/* WARNING: Possible PIC construction at 0x0001034687c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034688f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034688c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034688d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034688e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034688a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103468834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103468858) */
/* WARNING: Removing unreachable block (ram,0x000103468848) */
/* WARNING: Removing unreachable block (ram,0x000103468878) */
/* WARNING: Removing unreachable block (ram,0x000103468868) */
/* WARNING: Removing unreachable block (ram,0x0001034688a8) */
/* WARNING: Removing unreachable block (ram,0x000103468898) */
/* WARNING: Removing unreachable block (ram,0x0001034688e8) */
/* WARNING: Removing unreachable block (ram,0x0001034688d8) */
/* WARNING: Removing unreachable block (ram,0x0001034688c8) */
/* WARNING: Removing unreachable block (ram,0x000103468928) */
/* WARNING: Removing unreachable block (ram,0x000103468918) */
/* WARNING: Removing unreachable block (ram,0x000103468908) */
/* WARNING: Removing unreachable block (ram,0x0001034688f8) */
/* WARNING: Removing unreachable block (ram,0x000103468968) */
/* WARNING: Removing unreachable block (ram,0x000103468958) */
/* WARNING: Removing unreachable block (ram,0x000103468948) */
/* WARNING: Removing unreachable block (ram,0x000103468938) */
/* WARNING: Removing unreachable block (ram,0x000103468e48) */
/* WARNING: Removing unreachable block (ram,0x000103468e38) */
/* WARNING: Removing unreachable block (ram,0x000103468e28) */
/* WARNING: Removing unreachable block (ram,0x000103468e18) */
/* WARNING: Removing unreachable block (ram,0x000103468e08) */
/* WARNING: Removing unreachable block (ram,0x000103468df8) */
/* WARNING: Removing unreachable block (ram,0x000103468de0) */
/* WARNING: Removing unreachable block (ram,0x000103468cf8) */
/* WARNING: Removing unreachable block (ram,0x000103468e88) */
/* WARNING: Removing unreachable block (ram,0x000103468d0c) */
/* WARNING: Removing unreachable block (ram,0x000103468d88) */
/* WARNING: Removing unreachable block (ram,0x000103468dc8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103468cb4) */
/* WARNING: Removing unreachable block (ram,0x000103468c78) */
/* WARNING: Removing unreachable block (ram,0x000103468c64) */
/* WARNING: Removing unreachable block (ram,0x000103468c1c) */
/* WARNING: Removing unreachable block (ram,0x000103468ae4) */
/* WARNING: Removing unreachable block (ram,0x000103468a68) */
/* WARNING: Removing unreachable block (ram,0x000103468a9c) */
/* WARNING: Removing unreachable block (ram,0x000103468a80) */
/* WARNING: Removing unreachable block (ram,0x000103468aa0) */
/* WARNING: Removing unreachable block (ram,0x0001034687cc) */
/* WARNING: Removing unreachable block (ram,0x000103468994) */
/* WARNING: Removing unreachable block (ram,0x0001034687d0) */
/* WARNING: Removing unreachable block (ram,0x0001034689ac) */
/* WARNING: Removing unreachable block (ram,0x0001034689f0) */
/* WARNING: Removing unreachable block (ram,0x0001034689c4) */
/* WARNING: Removing unreachable block (ram,0x0001034689e0) */
/* WARNING: Removing unreachable block (ram,0x0001034689e8) */
/* WARNING: Removing unreachable block (ram,0x0001034689f4) */
/* WARNING: Removing unreachable block (ram,0x000103468838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346864c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c4f180();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c4bff0();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar4);
        lVar4 = lVar1;
      }
      else {
        lVar2 = unaff_x20;
        func_0x000107c4b2f4();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar4);
          lVar4 = lVar1;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c4af34();
          func_0x000107c61180();
          if (lVar3 != 0) {
            lVar3 = unaff_x20;
            func_0x000107c4af24();
            func_0x000107c61180();
            if (lVar3 != 0) {
              lVar3 = unaff_x20;
              func_0x000107c4f0ec();
              func_0x000107c61180();
              if (lVar3 == 0) {
                func_0x000107c61170(lVar4);
                lVar4 = lVar1;
              }
              else {
                lVar3 = unaff_x20;
                func_0x000107c519b0();
                func_0x000107c61180();
                if (lVar3 == 0) {
                  func_0x000107c61170(lVar4);
                  lVar4 = lVar1;
                }
                else {
                  lVar1 = unaff_x20;
                  func_0x000107c4f0f0();
                  func_0x000107c61180();
                  if (lVar1 != 0) {
                    func_0x000107c4f150();
                    func_0x000107c61180();
                    if (unaff_x20 != 0) {
                      lVar4 = 0;
                      FUN_103459b98();
                      func_0x000107c613fc();
                      *(undefined8 *)(lVar4 + 0x18) = 0;
                      *(undefined8 *)(lVar4 + 0x10) = 0;
                      *(undefined8 *)(lVar4 + 0x28) = 0;
                      *(undefined8 *)(lVar4 + 0x20) = 0;
                      func_0x000107c61174();
                      func_0x000107c4b2ec(lVar2);
                      func_0x000107c61180();
                      func_0x000107c5c734();
                      func_0x000107c61180();
                      lVar4 = lVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 103468e8c; end: 103468e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468e8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113081978) + _DAT_113081858);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103468e94; end: 103468ebb; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint begin] */

void FUN_103468e94(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10346864c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103468ebc; end: 103468f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103468ebc(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112f6e818);
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x10);
    if (lVar2 == 0) {
      func_0x000107c6157c(lVar3);
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
      lVar1 = lVar2;
      func_0x000107c614f0(lVar2);
      func_0x000107c6157c(lVar3);
      func_0x000107c615f0(lVar2);
      func_0x000103f6ac34(lVar1,uVar4);
      func_0x000107c615e8(lVar2);
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
    }
    *(long *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    func_0x000107c61574(lVar3);
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 103468f90; end: 103468fc3; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint end] */

void FUN_103468f90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103468ebc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103468fc4; end: 1034694b7;  */

void FUN_103468fc4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == 0x5377656976657270) && (param_3 == -0x13ffffff9a8f909d)) ||
         (func_0x000107c605b8(0x5377656976657270,0xec00000065706f63,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c577c8();
      }
      else {
        uVar2 = 0;
        if (((param_2 == 0x6553726567676f6c) && (param_3 == -0x11ff8c9a9c96898e)) ||
           (func_0x000107c605b8(0x6553726567676f6c,0xee00736563697672,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c560e0();
        }
        else {
          uVar2 = 0xd000000000000015;
          if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a10)) ||
             (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55df4();
          }
          else {
            uVar2 = 0xd00000000000001b;
            if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef0f24660)) ||
               (func_0x000107c605b8(0xd00000000000001b,0x800000010f0db9a0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55c84();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef10da6a0)) ||
                 (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55c80();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0f785b0)) ||
                   (func_0x000107c605b8(0xd000000000000022,0x800000010f087a50,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5778c();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffd2) && (param_3 == -0x7ffffffef0f0da40)) ||
                     (func_0x000107c605b8(0xd00000000000002e,0x800000010f0f25c0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c58c94();
                  }
                  else {
                    uVar2 = 0xd000000000000023;
                    if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef0f77230)) ||
                       (func_0x000107c605b8(0xd000000000000023,0x800000010f088dd0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c57790();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0ead7b0)) &&
                         (func_0x000107c605b8(0xd000000000000028,0x800000010f152850,param_2,param_3,
                                              0), (uVar2 & 1) == 0)) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "LensCarouselPreviewIntegration/SCLensCarouselPreviewLensSessionWorkflowEntryPoint.swift"
                                            ,0x57,2,0x51,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034694b8);
                        (*pcVar1)();
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c577b0();
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_103469058;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103469058:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1034694b8; end: 103469563; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint setValue:forIvarName:] */

void FUN_1034694b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103468fc4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103469564; end: 103469677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103469564(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f6e7c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e7d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e7d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e7e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e7e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e7f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e7f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e800,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e808,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f6e810,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f6e818) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103469678; end: 103469697; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint init] */

void FUN_103469678(void)

{
  FUN_103469564();
  return;
}



/* Entry: 103469698; end: 1034696cb;  */

void FUN_103469698(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034696cc; end: 103469793; -[SCLensCarouselPreviewLensSessionWorkflowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034696cc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f6e7c8);
  func_0x000107c61610(param_1 + _DAT_112f6e7d0);
  func_0x000107c61610(param_1 + _DAT_112f6e7d8);
  func_0x000107c61610(param_1 + _DAT_112f6e7e0);
  func_0x000107c61610(param_1 + _DAT_112f6e7e8);
  func_0x000107c61610(param_1 + _DAT_112f6e7f0);
  func_0x000107c61610(param_1 + _DAT_112f6e7f8);
  func_0x000107c61610(param_1 + _DAT_112f6e800);
  func_0x000107c61610(param_1 + _DAT_112f6e808);
  func_0x000107c61610(param_1 + _DAT_112f6e810);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f6e818));
  return;
}



/* Entry: 103469794; end: 1034697b3;  */

void FUN_103469794(void)

{
  func_0x000107c61168(&PTR_PTR_1128dc408);
  return;
}



/* Entry: 1034697b4; end: 1034697bf; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034697b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e848;
  func_0x000107c61428(param_1 + _DAT_112f6e848,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034697c0; end: 1034697cb; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034697c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e848;
  func_0x000107c61428(param_1 + _DAT_112f6e848,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034697cc; end: 1034697d7; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider snapEditorScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034697cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e850;
  func_0x000107c61428(param_1 + _DAT_112f6e850,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034697d8; end: 1034697e3; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider setSnapEditorScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034697d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e850;
  func_0x000107c61428(param_1 + _DAT_112f6e850,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034697e4; end: 1034697ef; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider lensCarouselDataProviderControllingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034697e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e858;
  func_0x000107c61428(param_1 + _DAT_112f6e858,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034697f0; end: 1034697fb; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider setLensCarouselDataProviderControllingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034697f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e858;
  func_0x000107c61428(param_1 + _DAT_112f6e858,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034697fc; end: 103469807; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider lensCarouselContextConfiguratorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034697fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e860;
  func_0x000107c61428(param_1 + _DAT_112f6e860,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103469808; end: 103469813; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider setLensCarouselContextConfiguratorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103469808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e860;
  func_0x000107c61428(param_1 + _DAT_112f6e860,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103469814; end: 10346981f; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider snapEditorScopedLensFeaturesVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103469814(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f6e868;
  func_0x000107c61428(param_1 + _DAT_112f6e868,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103469820; end: 103469863;  */

void FUN_103469820(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103469864; end: 10346986f; -[SCLensCarouselSnapEditorViewModelCreatingServiceProvider setSnapEditorScopedLensFeaturesVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103469864(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f6e868;
  func_0x000107c61428(param_1 + _DAT_112f6e868,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


