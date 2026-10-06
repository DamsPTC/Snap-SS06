/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fcf134; end: 108fcf13b; -[SCCollectionViewCarouselSection setEnableVirtualSectionSupport:] */

void FUN_108fcf134(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb1) = param_3;
  return;
}



/* Entry: 108fcf13c; end: 108fcf143; -[SCCollectionViewCarouselSection virtualSectionInterSectionSpacing] */

undefined8 FUN_108fcf13c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 108fcf144; end: 108fcf14b; -[SCCollectionViewCarouselSection setVirtualSectionInterSectionSpacing:] */

void FUN_108fcf144(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xe8) = param_1;
  return;
}



/* Entry: 108fcf14c; end: 108fcf153; -[SCCollectionViewCarouselSection virtualSectionCount] */

undefined8 FUN_108fcf14c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 108fcf154; end: 108fcf15b; -[SCCollectionViewCarouselSection canExpandVirtualSections] */

undefined1 FUN_108fcf154(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb2);
}



/* Entry: 108fcf15c; end: 108fcf163; -[SCCollectionViewCarouselSection areVirtualSectionsExpanded] */

undefined1 FUN_108fcf15c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb3);
}



/* Entry: 108fcf164; end: 108fcf16b; -[SCCollectionViewCarouselSection checkScrollEndOnVirtualItemDecrease] */

undefined1 FUN_108fcf164(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb4);
}



/* Entry: 108fcf16c; end: 108fcf173; -[SCCollectionViewCarouselSection setCheckScrollEndOnVirtualItemDecrease:] */

void FUN_108fcf16c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb4) = param_3;
  return;
}



/* Entry: 108fcf174; end: 108fcf17b; -[SCCollectionViewCarouselSection sectionDataProvider] */

undefined8 FUN_108fcf174(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 108fcf17c; end: 108fcf183; -[SCCollectionViewCarouselSection layoutCalculator] */

undefined8 FUN_108fcf17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 108fcf184; end: 108fcf18b; -[SCCollectionViewCarouselSection shouldResetCarouselContentOffset] */

undefined1 FUN_108fcf184(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb5);
}



/* Entry: 108fcf18c; end: 108fcf193; -[SCCollectionViewCarouselSection setShouldResetCarouselContentOffset:] */

void FUN_108fcf18c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb5) = param_3;
  return;
}



/* Entry: 108fcf194; end: 108fcf19b; -[SCCollectionViewCarouselSection bounces] */

undefined1 FUN_108fcf194(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb6);
}



/* Entry: 108fcf19c; end: 108fcf1a3; -[SCCollectionViewCarouselSection setBounces:] */

void FUN_108fcf19c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb6) = param_3;
  return;
}



/* Entry: 108fcf1a4; end: 108fcf1ab; -[SCCollectionViewCarouselSection scrollEnabled] */

undefined1 FUN_108fcf1a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb7);
}



/* Entry: 108fcf1ac; end: 108fcf1b3; -[SCCollectionViewCarouselSection setScrollEnabled:] */

void FUN_108fcf1ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb7) = param_3;
  return;
}



/* Entry: 108fcf1b4; end: 108fcf1bb; -[SCCollectionViewCarouselSection forceLayoutUpdateBeforeBatchUpdates] */

undefined1 FUN_108fcf1b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}



/* Entry: 108fcf1bc; end: 108fcf1c3; -[SCCollectionViewCarouselSection setForceLayoutUpdateBeforeBatchUpdates:] */

void FUN_108fcf1bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 108fcf1c4; end: 108fcf1db; -[SCCollectionViewCarouselSection dataProvidingScheduler] */

void FUN_108fcf1c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fcf1dc; end: 108fcf1e3; -[SCCollectionViewCarouselSection enableSectionConfigurationViewModelUpdate] */

undefined1 FUN_108fcf1dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb9);
}



/* Entry: 108fcf1e4; end: 108fcf1eb; -[SCCollectionViewCarouselSection setEnableSectionConfigurationViewModelUpdate:] */

void FUN_108fcf1e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb9) = param_3;
  return;
}



/* Entry: 108fcf1ec; end: 108fcf1f3; -[SCCollectionViewCarouselSection enableCarouselCollectionViewSetOnWillDisplayCell] */

undefined8 FUN_108fcf1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 108fcf1f4; end: 108fcf223; -[SCCollectionViewCarouselSection setEnableCarouselCollectionViewSetOnWillDisplayCell:] */

void FUN_108fcf1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fcf224; end: 108fcf357; -[SCCollectionViewCarouselSection .cxx_destruct] */

void FUN_108fcf224(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_destroyWeak(param_1 + 0x108);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fcf358; end: 108fcf547;  */

undefined8 FUN_108fcf358(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010c0720c0();
  if ((int)uVar2 != 0) {
    uVar2 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) {
      uVar2 = 1;
      goto LAB_108fcf3e4;
    }
  }
  uVar2 = param_1;
  func_0x00010c0720c0(param_1);
LAB_108fcf3e4:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108fcf548; end: 108fcf5ab;  */

void FUN_108fcf548(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  
  _objc_retain();
  func_0x00010bf4d5e0(param_3);
  dVar1 = param_1;
  func_0x00010bf20c00(param_3);
  _CGRectGetWidth();
  if (dVar1 <= param_1) {
    func_0x00010bf4c7c0(param_3);
    func_0x00010c1822e0(-param_2,0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fcf5ac; end: 108fcf5b7; +[SCCollectionViewListSection announcerIdentifier] */

undefined ** FUN_108fcf5ac(void)

{
  return &PTR____CFConstantStringClassReference_110f16478;
}



/* Entry: 108fcf5b8; end: 108fcf5bf; -[SCCollectionViewListSection addListener:] */

void FUN_108fcf5b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108fcf5c0; end: 108fcf5c7; -[SCCollectionViewListSection removeListener:] */

void FUN_108fcf5c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108fcf5c8; end: 108fcf5cf; -[SCCollectionViewListSection didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_108fcf5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 108fcf5d0; end: 108fcf6e7; -[SCCollectionViewListSection initWithSupplementaryViewProvider:] */

undefined1 * FUN_108fcf5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ffb48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126dcd68;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined **)((long)puVar1 + 200) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x98) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fcf6e8; end: 108fcf8db; -[SCCollectionViewListSection setSectionDataProvider:] */

void FUN_108fcf6e8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xc0) != param_3) {
    func_0x00010c1896c0();
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0xc0));
    func_0x00010c21c740(*(undefined8 *)(param_1 + 0xc0));
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(long *)(param_1 + 0xc0) = param_3;
    _objc_release(uVar1);
    func_0x00010c1896c0(*(undefined8 *)(param_1 + 0xc0));
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0xc0));
    func_0x00010c21c740(*(undefined8 *)(param_1 + 0xc0));
    func_0x00010bea6d80(param_1);
    uVar2 = *(ulong *)(param_1 + 0xc0);
    _objc_opt_respondsToSelector(uVar2,PTR_s_configurationBlocksByReuseIdenti_1125af330);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      func_0x00010bf46620();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      _objc_release(uVar6);
      _objc_release(uVar3);
    }
    uVar2 = *(ulong *)(param_1 + 0xc0);
    _objc_opt_respondsToSelector(uVar2,PTR_s_experimentalPagingMode_1125c4b28);
    if ((uVar2 & 1) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0xc0);
      func_0x00010bf9c600();
      *(undefined8 *)(param_1 + 0x98) = uVar1;
    }
    uVar2 = *(ulong *)(param_1 + 0xc0);
    _objc_opt_respondsToSelector(uVar2,PTR_s_modelCanUpdateComparator_1126119a0);
    if ((uVar2 & 1) == 0) {
      ppuVar4 = &PTR___NSConcreteGlobalBlock_110d622f0;
    }
    else {
      ppuVar4 = *(undefined ***)(param_1 + 0xc0);
      func_0x00010c0cfe20();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar5 = ppuVar4;
    _objc_retainBlock();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined ***)(param_1 + 0x28) = ppuVar5;
    _objc_release(uVar1);
    _objc_release(ppuVar4);
    if (*(char *)(param_1 + 0x38) == '\x01') {
      _objc_initWeak(auStack_38,param_1);
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c0f7fc0(uVar1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108fcf8dc; end: 108fcf90b;  */

void FUN_108fcf8dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fcf90c; end: 108fcf95b; -[SCCollectionViewListSection setDataProvidingScheduler:] */

void FUN_108fcf90c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xe0,param_3);
  _objc_retain();
  func_0x00010c0d0be0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fcf95c; end: 108fcf9c3; -[SCCollectionViewListSection setViewMoreProvider:] */

void FUN_108fcf95c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 200) != param_3) {
    func_0x00010c222a80(*(long *)(param_1 + 200),param_2,0);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 200);
    *(long *)(param_1 + 200) = param_3;
    _objc_release(uVar1);
    func_0x00010c222a80(*(undefined8 *)(param_1 + 200),param_2,param_1);
    func_0x00010bea6d80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fcf9c4; end: 108fcfaaf; -[SCCollectionViewListSection setActionHandler:] */

void FUN_108fcf9c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_DAT_1126a5538;
  lVar6 = *(long *)(param_1 + 0xb8);
  if (lVar6 != param_3) {
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x000107c318f8(lVar6,puVar2);
    lVar1 = lVar6;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar6);
    func_0x00010c12cf80(lVar1);
    _objc_release(lVar1);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb8) = param_3;
    _objc_release(uVar4);
    puVar2 = PTR_DAT_1126a5538;
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    _objc_retain(uVar7);
    uVar5 = uVar7;
    func_0x000107c318f8(uVar7,puVar2);
    uVar4 = uVar7;
    if ((int)uVar5 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar7);
    func_0x00010bef9980(uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fcfab0; end: 108fcfae7; -[SCCollectionViewListSection setLayoutCalculator:] */

void FUN_108fcfab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 108fcfae8; end: 108fcfbcb; -[SCCollectionViewListSection setUp] */

void FUN_108fcfae8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010be9cc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 108fcfbcc; end: 108fcfc0f;  */

void FUN_108fcfbcc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9cc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c120();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fcfc10; end: 108fcfd03; -[SCCollectionViewListSection tearDown] */

void FUN_108fcfc10(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010be594c0();
  uVar1 = param_1;
  func_0x00010be9cc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 108fcfd04; end: 108fcfd6b;  */

void FUN_108fcfd04(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be9cc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ab80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fcfd6c; end: 108fcfe53; -[SCCollectionViewListSection _logStuckLoadingAtTearDownIfNeeded] */

void FUN_108fcfd6c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  if ((*(char *)(param_1 + 7) == '\x01') && (param_1[6] == (undefined *)0x1)) {
    ppuVar2 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9cc60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = ppuVar3;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar3);
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126dcd10;
    _objc_opt_new(PTR_PTR_1126dcd10);
    FUN_108fe2e0c();
    _objc_release(ppuVar1);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
  return;
}



/* Entry: 108fcfe54; end: 108fcff47; -[SCCollectionViewListSection applyConfiguration:] */

void FUN_108fcfe54(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    _objc_retain(uVar5);
    _objc_retain(param_3);
    if (uVar5 == param_3) {
      _objc_release(param_3);
      _objc_release(uVar5);
    }
    else {
      if (param_3 == 0) {
        _objc_release(uVar5);
      }
      else {
        uVar3 = uVar5;
        func_0x00010c071ae0();
        _objc_release(param_3);
        _objc_release(uVar5);
        if ((uVar3 & 1) != 0) goto LAB_108fcff28;
      }
      uVar5 = param_3;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(param_1 + 8);
      *(ulong *)(param_1 + 8) = uVar5;
      _objc_release(uVar4);
      func_0x00010bee4680(param_1);
    }
  }
LAB_108fcff28:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fcff48; end: 108fcff6f; -[SCCollectionViewListSection reuseCellClassesByIdentifiers] */

void FUN_108fcff48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fcff70; end: 108fd0007; -[SCCollectionViewListSection collectionView:willDisplayCell:atIndexInSection:] */

void FUN_108fcff70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfed020(puVar1,param_2,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf405a0(param_1,param_2,param_3,param_4,puVar1,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108fd0008; end: 108fd01ef; -[SCCollectionViewListSection collectionView:willDisplayCell:atIndexPath:withIndexPathVisible:] */

void FUN_108fd0008(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  uVar1 = param_4;
  func_0x00010c070ea0();
  uVar2 = param_4;
  func_0x00010c070400();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  _objc_release(uVar4);
  _objc_initWeak(auStack_78,param_2);
  uVar4 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_108fd01f0;
  puStack_b8 = &UNK_110ad1db8;
  _objc_copyWeak(auStack_90,auStack_78);
  uStack_80 = (undefined1)uVar2;
  uStack_7f = (undefined1)uVar1;
  uStack_b0 = param_6;
  uStack_a8 = param_7;
  uStack_a0 = uVar3;
  uStack_98 = uVar5;
  uStack_88 = param_1;
  _objc_retain(uVar5);
  _objc_retain(uVar3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x000107c27d8c(uVar4,&puStack_d0);
  _objc_release(uVar4);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108fd01f0; end: 108fd0233;  */

void FUN_108fd01f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcb720(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fd0234; end: 108fd037f; -[SCCollectionViewListSection collectionViewDidEndDisplayingCell:atIndexInSection:] */

void FUN_108fd0234(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108fd0380;
  puStack_70 = &UNK_1108502a8;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_68 = uVar1;
  uStack_60 = uVar3;
  uStack_50 = param_4;
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  func_0x000107c27d8c(uVar2,&puStack_88);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108fd0380; end: 108fd03b7;  */

void FUN_108fd0380(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fd03b8; end: 108fd04f7; -[SCCollectionViewListSection collectionViewWillDisplaySupplementaryView:forElementKind:atIndexInSection:] */

void FUN_108fd03b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf51e00();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (param_5 < uVar2) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108fd04f8;
    puStack_68 = &UNK_110848218;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(uVar1);
    uStack_58 = uVar1;
    func_0x000107c27d8c(uVar3,&puStack_80);
    _objc_release(uVar3);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108fd04f8; end: 108fd052b;  */

void FUN_108fd04f8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fd052c; end: 108fd05ab; -[SCCollectionViewListSection numberOfCellsInSection] */

long FUN_108fd052c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf9c100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c230dc0();
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x70);
    func_0x00010c0ded60(lVar4);
    uVar5 = (uint)(lVar4 != 0);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfd9320(uVar3);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0(lVar4);
  return lVar4 + ((ulong)((uint)uVar3 | uVar5) & 1);
}



/* Entry: 108fd05ac; end: 108fd097f; -[SCCollectionViewListSection cellForItemAtIndexInSection:] */

void FUN_108fd05ac(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar2 = *(ulong *)(param_1 + 0x70);
  func_0x00010c0ded00();
  if (param_3 < uVar2) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (uVar2 <= param_3) {
      uVar11 = 0;
      goto LAB_108fd0964;
    }
    ppuVar3 = *(undefined ***)(param_1 + 0x10);
    func_0x00010c0dfd40(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1 + 0xa8;
    _objc_loadWeakRetained();
    ppuVar4 = ppuVar3;
    func_0x00010bf34020(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf40940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
    _objc_retain(uVar5);
    _objc_opt_class(puVar6);
    uVar2 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar11 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar11 = 0;
    }
    _objc_retain(uVar11);
    _objc_release(uVar5);
    lVar12 = *(long *)(param_1 + 0x20);
    ppuVar4 = ppuVar3;
    func_0x00010bf34020(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x10))(lVar12,uVar11);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0dfd40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf4ddc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar6 = PTR_DAT_1126a4e90;
    _objc_retain(uVar11);
    uVar2 = uVar11;
    func_0x000107c318f8(uVar11,puVar6);
    _objc_release(uVar11);
    puVar6 = PTR_DAT_1126a4e90;
    if (((int)uVar2 != 0) && (uVar11 != 0)) {
      _objc_retain(uVar5);
      uVar9 = uVar5;
      func_0x000107c318f8(uVar5,puVar6);
      uVar2 = uVar11;
      if ((int)uVar9 == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar5);
      func_0x00010c161980(uVar2);
      _objc_release(uVar2);
    }
    func_0x00010be34580();
    puVar6 = PTR_DAT_1126a5298;
    _objc_retain(uVar11);
    uVar9 = uVar11;
    func_0x000107c318f8(uVar11,puVar6);
    uVar2 = uVar11;
    if ((int)uVar9 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar11);
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bf12100();
    if ((iVar1 != 0) && (uVar2 != 0)) {
      func_0x00010c0ce5e0(param_1);
      func_0x00010c1ee980(uVar5);
    }
    puVar6 = PTR_DAT_1126a52a0;
    _objc_retain(uVar11);
    uVar10 = uVar11;
    func_0x000107c318f8(uVar11,puVar6);
    uVar9 = uVar11;
    if ((int)uVar10 == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar11);
    func_0x00010beb3820();
    if ((int)param_1 != 0) {
      func_0x00010c1fce20(uVar9);
    }
    _objc_retain(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar11);
    _objc_release(lVar12);
    _objc_release(uVar5);
  }
  else {
    ppuVar3 = *(undefined ***)(param_1 + 200);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110f16458;
    }
    else {
      _objc_opt_class();
      func_0x00010c29ddc0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = param_1 + 0xa8;
    _objc_loadWeakRetained();
    uVar11 = uVar2;
    func_0x00010bf40940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bde5ee0(param_1);
  }
  _objc_release(ppuVar3);
  puVar6 = PTR_DAT_1126a5538;
  _objc_retain(uVar11);
  uVar5 = uVar11;
  func_0x000107c318f8(uVar11,puVar6);
  uVar2 = uVar11;
  if ((int)uVar5 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar11);
  func_0x00010bef9980(uVar2);
  _objc_release(uVar2);
LAB_108fd0964:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 108fd0980; end: 108fd0ac3; -[SCCollectionViewListSection _configureViewMoreCell:] */

void FUN_108fd0980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5ba0);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c18b5e0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_DAT_1126a4e90;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x000107c318f8(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c161980(uVar1);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 200);
  func_0x00010c0dea60(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c0ded00(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c0dea60(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c29d7e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_DAT_1126a4fe8;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x000107c318f8(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c2226c0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fd0ac4; end: 108fd0b8f; -[SCCollectionViewListSection _hasRoundBottomForIndex:withExpansionTracker:] */

uint FUN_108fd0ac4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010c0ded00(param_4);
  lVar7 = param_4;
  func_0x00010bfd9320();
  lVar4 = param_4;
  func_0x00010c0ded60();
  _objc_release(param_4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9c100();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c230dc0();
  _objc_release(uVar5);
  uVar1 = ((uint)lVar7 ^ 1) & ((uint)(lVar4 == 0) | (uint)uVar6);
  lVar7 = *(long *)(param_1 + 200);
  uVar2 = lVar7 != 0 | uVar1;
  if ((lVar7 != 0) && ((uVar1 & 1) == 0)) {
    func_0x00010c232d40(lVar7);
    uVar2 = (uint)lVar7;
  }
  return param_3 == lVar3 + -1 & uVar2;
}



/* Entry: 108fd0b90; end: 108fd0dc7; -[SCCollectionViewListSection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16]
FUN_108fd0b90(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  lVar2 = param_5 + 0xa8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c156160();
  _objc_release(lVar2);
  param_4 = (param_1 - param_2) - param_4;
  uVar1 = *(ulong *)(param_5 + 0x70);
  func_0x00010c0ded00();
  if (param_7 < uVar1) {
    uVar1 = *(ulong *)(param_5 + 0x10);
    func_0x00010bf529e0();
    if (uVar1 <= param_7) {
LAB_108fd0d98:
      param_4 = *(double *)PTR__CGSizeZero_110347620;
      dVar8 = *(double *)(PTR__CGSizeZero_110347620 + 8);
      goto LAB_108fd0da4;
    }
    lVar2 = *(long *)(param_5 + 0x10);
    func_0x00010c0dfd40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 0x18);
    lVar3 = lVar2;
    func_0x00010bf34020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar6);
    lVar5 = lVar2;
    func_0x00010bf4ddc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = 1.79769313486232e+308;
    func_0x00010c23d6e0(param_4,0x7fefffffffffffff,uVar6);
    dVar7 = param_4;
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar3 = param_5 + 0xa8;
    _objc_loadWeakRetained();
    lVar5 = lVar3;
    func_0x00010bf40920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar4 = lVar5;
    func_0x000107c318f8(lVar5,PTR_DAT_1126a52a0);
    lVar3 = lVar5;
    if ((int)lVar4 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(lVar5);
    lVar5 = *(long *)(param_5 + 0x70);
    func_0x00010c0ded00();
    dVar9 = 0.0;
    if ((param_7 != lVar5 - 1U) && (func_0x00010beb3820(), (int)param_5 != 0)) {
      func_0x00010b816670();
      dVar9 = dVar7;
    }
    dVar8 = dVar8 + dVar9;
    _objc_release(lVar3);
  }
  else {
    lVar2 = *(long *)(param_5 + 200);
    if (lVar2 == 0) goto LAB_108fd0d98;
    func_0x00010c0dea60(*(undefined8 *)(param_5 + 0x70));
    func_0x00010c0ded00(*(undefined8 *)(param_5 + 0x70));
    func_0x00010c0dea60(*(undefined8 *)(param_5 + 0x70));
    func_0x00010c29d7e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(*(undefined8 *)(param_5 + 200));
    func_0x00010c29dd80();
    dVar8 = 1.79769313486232e+308;
    func_0x00010c23d6e0(param_4,0x7fefffffffffffff);
  }
  _objc_release(lVar2);
LAB_108fd0da4:
  auVar10._8_8_ = dVar8;
  auVar10._0_8_ = param_4;
  return auVar10;
}



/* Entry: 108fd0dc8; end: 108fd0dcf; -[SCCollectionViewListSection minimumSectionLineSpacing] */

undefined8 FUN_108fd0dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108fd0dd0; end: 108fd0dd7; -[SCCollectionViewListSection minimumSectionInteritemSpacing] */

undefined8 FUN_108fd0dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108fd0dd8; end: 108fd0ddf; -[SCCollectionViewListSection experimentalPagingMode] */

undefined8 FUN_108fd0dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108fd0de0; end: 108fd0e07; -[SCCollectionViewListSection sectionInfo] */

void FUN_108fd0de0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fd0e08; end: 108fd0e0f; -[SCCollectionViewListSection sectionInsets] */

void FUN_108fd0e08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c156150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_sectionInsets_112633270)
  ;
  return;
}



/* Entry: 108fd0e10; end: 108fd0e37; -[SCCollectionViewListSection supplementaryViewProvider] */

void FUN_108fd0e10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fd0e38; end: 108fd0e8f; -[SCCollectionViewListSection setSectionUpdateModel:] */

void FUN_108fd0e38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0) || (*(long *)(param_1 + 0xb0) != 0)) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    *(long *)(param_1 + 0xb0) = lVar1;
    _objc_release(uVar2);
    func_0x00010be8a480(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fd0e90; end: 108fd0ebf; -[SCCollectionViewListSection setSectionInfo:] */

void FUN_108fd0e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd0ec0; end: 108fd0f1f; -[SCCollectionViewListSection sectionDataProviderDidUpdateViewModels:] */

void FUN_108fd0ec0(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x30) = 1;
  lVar1 = param_1 + 0xe0;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0xe0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c150140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSectionDataModel_112595648);
  return;
}



/* Entry: 108fd0f20; end: 108fd0fef; -[SCCollectionViewListSection viewMoreProviderDidUpdateViewModel:] */

void FUN_108fd0f20(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010bf9c100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c230dc0();
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x70);
    func_0x00010c0ded60();
    bVar1 = lVar5 != 0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(uVar3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x70);
  func_0x00010bfd9320();
  if ((!bVar1) && (iVar2 == 0)) {
    return;
  }
  lVar5 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar5);
  puVar6 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  _objc_alloc(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf529e0(uVar7);
  func_0x00010c01d720(puVar6,param_2,uVar7);
  func_0x00010bf40900(lVar5,param_2,param_1,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 108fd0ff0; end: 108fd0ff3; -[SCCollectionViewListSection shouldUpdateDataModelsFromDataProviding] */

void FUN_108fd0ff0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSectionDataModel_112595648);
  return;
}



/* Entry: 108fd0ff4; end: 108fd109b; -[SCCollectionViewListSection _updateSectionDataModel] */

void FUN_108fd0ff4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108fd109c; end: 108fd10cb;  */

void FUN_108fd109c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fd10cc; end: 108fd10d3; -[SCCollectionViewListSection indexForItemWithQueryKey:] */

void FUN_108fd10cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfecb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd8),PTR_s_indexForItemWithQueryKey__1125d8c98);
  return;
}



/* Entry: 108fd10d4; end: 108fd1333; -[SCCollectionViewListSection handleActionWithSender:actionModel:fromSourceView:] */

undefined ** FUN_108fd10d4(long param_1,undefined8 param_2,undefined **param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar9 = param_3;
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0xb8));
  puVar1 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  ppuVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((ulong)ppuVar2 & 1) != 0) {
    puVar1 = (undefined *)(param_1 + 0xa8);
    _objc_loadWeakRetained();
    puVar3 = puVar1;
    func_0x00010bf40980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uStack_a0 = *(undefined8 *)(param_1 + 0x78);
    lVar4 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f8a838;
    puVar5 = *(undefined **)(param_1 + 0xc0);
    func_0x00010c1559c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar9 = &PTR____CFConstantStringClassReference_110f8a7b8;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f8a898;
    puVar6 = param_4;
    puStack_80 = puVar1;
    if (param_4 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f8a7f8;
    puVar7 = puVar3;
    puStack_78 = puVar6;
    if (puVar3 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uStack_a0);
    _objc_release(puVar8);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    if (param_4 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar1);
    }
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  ppuVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined **)0x1;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_108fd1334;
  puStack_c0 = param_4;
  ppuStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  _objc_initWeak(auStack_c8,ppuVar2);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_108fd13f0;
  puStack_d8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d0,auStack_c8);
  func_0x000107c312cc("APPSTORE",&puStack_f0);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(ppuVar9);
  return ppuVar9;
}



/* Entry: 108fd1334; end: 108fd13ef; -[SCCollectionViewListSection viewMoreCollectionViewCellDidTapViewMore:] */

void FUN_108fd1334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108fd13f0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108fd13f0; end: 108fd141b;  */

void FUN_108fd13f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fd141c; end: 108fd141f; -[SCCollectionViewListSection sizeForItemAtIndex:width:] */

void FUN_108fd141c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sizeForItemAtIndexInSection_with_11266cec0);
  return;
}



/* Entry: 108fd1420; end: 108fd1427; -[SCCollectionViewListSection totalNumberOfItems] */

void FUN_108fd1420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108fd1428; end: 108fd14f3; -[SCCollectionViewListSection _setReuseCellClassesByIdentifiers] */

void FUN_108fd1428(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010bf4bfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 200);
  if (lVar3 == 0) {
    puVar4 = PTR_PTR_1126dcd70;
    _objc_opt_class(PTR_PTR_1126dcd70);
    func_0x00010c1d0560(uVar2,param_2,puVar4,&PTR____CFConstantStringClassReference_110f16458);
  }
  else {
    _objc_opt_class();
    func_0x00010c29dd80();
    uVar1 = *(undefined8 *)(param_1 + 200);
    _objc_opt_class(uVar1);
    func_0x00010c29ddc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar2,param_2,lVar3,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = uVar2;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108fd14f4; end: 108fd153b; -[SCCollectionViewListSection _shouldEnableSeparator:] */

bool FUN_108fd14f4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_2 + 8);
  func_0x00010bf120e0();
  bVar1 = false;
  if ((param_4 != 0) && (iVar2 != 0)) {
    func_0x00010c0ce5e0(param_2);
    bVar1 = param_1 == 0.0;
  }
  return bVar1;
}



/* Entry: 108fd153c; end: 108fd1737; -[SCCollectionViewListSection _updateWithConfiguration] */

void FUN_108fd153c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  *(undefined1 *)(param_2 + 0x48) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d7938;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf9c100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce660();
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf9c100(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3680();
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf9c100(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec900();
  func_0x00010c02c200();
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  *(undefined **)(param_2 + 0x70) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bea2e60(param_2);
  *(undefined8 *)(param_2 + 0x30) = 1;
  puVar2 = PTR_PTR_1126b48b0;
  func_0x00010c128f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined **)(param_2 + 0xb0) = puVar2;
  _objc_release(uVar1);
  func_0x00010c0ce460(*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 0x88) = param_1;
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  _objc_initWeak(auStack_58,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  return;
}



/* Entry: 108fd1738; end: 108fd178b;  */

void FUN_108fd1738(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9cc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9220();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fd178c; end: 108fd179b; -[SCCollectionViewListSection _resetConfiguration] */

void FUN_108fd178c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd179c; end: 108fd1bef; -[SCCollectionViewListSection _updateWithSectionModelControllerWithShouldResetExpansion:] */

void FUN_108fd179c(long param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 uVar12;
  double dVar13;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte bStack_170;
  undefined1 uStack_16f;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 8) == 0) goto LAB_108fd1b48;
  uStack_f8 = 0;
  dVar13 = 1.02270250269256e-312;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_108fd1bf0;
  uStack_d8 = 0x108fd1c00;
  lStack_d0 = 0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_108fd1bf0;
  uStack_108 = 0x108fd1c00;
  uStack_100 = 0;
  puStack_f0 = &uStack_f8;
  _objc_initWeak(auStack_130,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_108fd1c08;
  puStack_150 = &UNK_1108ad760;
  puStack_148 = &uStack_f8;
  _objc_copyWeak(auStack_138,auStack_130);
  puStack_140 = &uStack_128;
  func_0x000107c27da4(PTR___dispatch_main_q_11034be20,&puStack_168);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c0deec0();
  lVar11 = puStack_f0[5];
  if ((param_3 & 1) == 0) {
    func_0x00010c0ded60(lVar11);
  }
  func_0x00010c0ded20();
  uVar3 = *(ulong *)(param_1 + 0xc0);
  _objc_opt_respondsToSelector(uVar3,PTR_s_dataLoadingStatus_1125b6908);
  if ((uVar3 & 1) == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010bf63d80();
  }
  uVar3 = *(ulong *)(param_1 + 0xc0);
  _objc_opt_respondsToSelector(uVar3,PTR_s_supplementaryViewModels_1126765b0);
  if ((uVar3 & 1) == 0) {
    lVar6 = puStack_120[5];
    func_0x00010c155e60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      uStack_90 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
      ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d18f0;
      uVar10 = puStack_120[5];
      func_0x00010c155e60();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_98 = uVar10;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_88 = puVar7;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar10);
    }
    _objc_release(lVar6);
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0xc0);
    func_0x00010c262e20();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(ulong *)(param_1 + 0xc0);
  _objc_opt_respondsToSelector(uVar3,PTR_s_minimumInteritemSpacing_112611330);
  if (((uVar3 & 1) == 0) ||
     (func_0x00010c0ce460(*(undefined8 *)(param_1 + 0xc0)), *(double *)(param_1 + 0x88) == dVar13))
  {
    uVar12 = 0;
    if (lVar11 != 0) goto LAB_108fd1a18;
LAB_108fd1a08:
    uVar10 = 0;
  }
  else {
    *(double *)(param_1 + 0x88) = dVar13;
    uVar12 = 1;
    if (lVar11 == 0) goto LAB_108fd1a08;
LAB_108fd1a18:
    puStack_c8 = puVar1;
    uStack_c0 = 0xc0000000;
    pcStack_b8 = FUN_108fd6d04;
    puStack_b0 = &UNK_110ad1ef8;
    uStack_a8 = 0;
    uVar8 = 0;
    func_0x00010bd86bb4(0,lVar11,&puStack_c8);
    uVar9 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010bf4ac00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf51e00();
    _objc_release(uVar9);
    _objc_release(uVar8);
  }
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  uStack_1a8 = 0x108fd1c80;
  puStack_1a0 = &UNK_110ab7ee0;
  _objc_copyWeak(auStack_188,auStack_130);
  _objc_retain(uVar10);
  uStack_198 = uVar10;
  uStack_180 = uVar2;
  uStack_178 = uVar4;
  bStack_170 = param_3;
  _objc_retain(puVar5);
  puStack_190 = puVar5;
  uStack_16f = uVar12;
  func_0x00010bcbe2c4("APPSTORE",&puStack_1b8);
  _objc_release(puStack_190);
  _objc_release(uStack_198);
  _objc_destroyWeak(auStack_188);
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_130);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  __Block_object_dispose(&uStack_f8,8);
  param_1 = lStack_d0;
  _objc_release();
LAB_108fd1b48:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_130);
  __Block_object_dispose(&uStack_128,8);
  lVar11 = 8;
  __Block_object_dispose(&uStack_f8);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return;
}



/* Entry: 108fd1bf0; end: 108fd1c07;  */

void FUN_108fd1bf0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108fd1c08; end: 108fd1cbf;  */

void FUN_108fd1c08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bde9a60();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bde9b00();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fd1cc0; end: 108fd1f0b; -[SCCollectionViewListSection _handleTapViewMore] */

void FUN_108fd1cc0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0ded80(uVar2,param_2,1);
  uVar3 = *(ulong *)(param_1 + 0x70);
  func_0x00010c0ded40();
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (uVar3 < uVar4) {
    lVar8 = 0;
    uVar4 = uVar3;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    uVar4 = uVar3 - lVar5;
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if ((lVar5 == 0) || (func_0x00010c11f4c0(), lVar5 != lVar8 || param_2 != uVar4)) {
    lVar5 = param_1;
    func_0x00010bea63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (uVar3 < uVar6) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c25e980(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed6ae0(param_1);
      _objc_release(uVar7);
    }
    else {
      _objc_initWeak(auStack_68,param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x80);
      puStack_b0 = puVar1;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_108fd1f0c;
      puStack_98 = &UNK_110842ea8;
      _objc_copyWeak(auStack_88,auStack_68);
      lStack_80 = lVar8;
      uStack_78 = uVar4;
      uStack_70 = uVar2;
      _objc_retain(lVar5);
      lStack_90 = lVar5;
      func_0x00010c0f7fc0(uVar7);
      _objc_release(lStack_90);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_68);
    }
    _objc_initWeak(auStack_68,param_1);
    uVar7 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x108fd20b0;
    puStack_c8 = &UNK_110846540;
    _objc_copyWeak(auStack_c0,auStack_68);
    uStack_b8 = uVar2;
    func_0x000107c27d8c(uVar7,&puStack_e0);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar5);
  }
  return;
}



/* Entry: 108fd1f0c; end: 108fd2073;  */

void FUN_108fd1f0c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010be9cc60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc0000000;
  pcStack_68 = FUN_108fd6d04;
  puStack_60 = &UNK_110ad1ef8;
  uStack_58 = 0;
  func_0x00010bd86bb4(uVar6,*(undefined8 *)(param_1 + 0x38),&puStack_78);
  lVar4 = lVar3;
  func_0x00010bf4ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf51e00();
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108fd2074;
  puStack_b0 = &UNK_110849e00;
  _objc_copyWeak(auStack_98,param_1 + 0x28);
  uStack_88 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(lVar5);
  uStack_80 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lStack_a8 = lVar5;
  _objc_retain(uVar6);
  uStack_a0 = uVar6;
  func_0x000107c312d0("APPSTORE",&puStack_c8);
  _objc_release(uStack_a0);
  _objc_release(lStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(lVar5);
  return;
}



/* Entry: 108fd2074; end: 108fd20eb;  */

void FUN_108fd2074(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fd20ec; end: 108fd24fb; -[SCCollectionViewListSection _updateDataSourceWithViewModelRange:containerCellViewModelsForRange:targetNumberOfExpansions:rangeUpdateID:] */

void FUN_108fd20ec(double param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 in_x4;
  ulong in_x6;
  ulong uVar14;
  
  _objc_retain(in_x4);
  _objc_retain(in_x6);
  uVar14 = *(ulong *)(param_2 + 0x68);
  _objc_retain(uVar14);
  _objc_retain(in_x6);
  if (uVar14 == in_x6) {
    _objc_release(in_x6);
    _objc_release(uVar14);
LAB_108fd2188:
    func_0x00010be93640(param_2);
    iVar1 = (int)*(undefined8 *)(param_2 + 0x70);
    func_0x00010bfd9320();
    uVar14 = *(ulong *)(param_2 + 0x70);
    func_0x00010bf51e00();
    func_0x00010c1cfaa0();
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d3c80();
    _objc_release(uVar2);
    func_0x00010befa160(uVar3);
    puVar4 = *(undefined **)(param_2 + 0x10);
    func_0x00010b813c80(puVar4,uVar3,*(undefined8 *)(param_2 + 0x28));
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010bf51e00();
    puVar5 = puVar4;
    func_0x00010c286820(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010be8aa20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0d3c80();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf6c000();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0d3c80();
    if (puVar6 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
      _objc_opt_new();
    }
    else {
      _objc_retain(puVar6);
      puVar8 = puVar6;
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    uVar11 = uVar14;
    func_0x00010bfd9320();
    if (iVar1 != (int)uVar11) {
      uVar9 = *(undefined8 *)(param_2 + 8);
      func_0x00010bf9c100();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c230dc0();
      puVar5 = puVar7;
      if ((int)uVar10 == 0) {
        _objc_release(uVar9);
      }
      else {
        uVar11 = uVar14;
        func_0x00010bfd9320();
        _objc_release(uVar9);
        if ((uVar11 & 1) == 0) {
          puVar5 = puVar8;
        }
      }
      func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x10));
      func_0x00010bef92c0(puVar5);
    }
    func_0x00010c0ce5e0(param_2);
    if ((ABS(param_1) < 2.2250738585072014e-308) ||
       (ABS(param_1) < ABS(param_1 + 0.0) * 2.220446049250313e-16)) {
      uVar11 = *(ulong *)(param_2 + 8);
      func_0x00010bf12100();
      if ((uVar11 & 1) == 0) {
        iVar1 = (int)*(undefined8 *)(param_2 + 8);
        func_0x00010bf120e0();
        if (iVar1 == 0) goto LAB_108fd23e4;
      }
      func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x10));
      puVar5 = puVar8;
      func_0x00010bf4b800();
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x10));
        func_0x00010bef92c0(puVar7);
      }
      puVar5 = puVar4;
      func_0x00010c066900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(in_x4);
      puVar6 = puVar5;
      func_0x00010bf4b800();
      _objc_release(puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        func_0x00010bf529e0(in_x4);
        func_0x00010bef92c0(puVar7);
      }
    }
LAB_108fd23e4:
    puVar5 = PTR_PTR_1126b48b0;
    puVar6 = puVar4;
    func_0x00010c066900(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010bf51e00(puVar8);
    puVar13 = puVar7;
    func_0x00010bf51e00(puVar7);
    func_0x00010bf34220(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf51e00(uVar3);
    func_0x00010bedf460(param_2);
    _objc_release(uVar10);
    _objc_release(puVar5);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  else if (in_x6 != 0) {
    uVar11 = uVar14;
    func_0x00010c071ae0();
    _objc_release(in_x6);
    _objc_release(uVar14);
    if ((int)uVar11 == 0) goto LAB_108fd24d0;
    goto LAB_108fd2188;
  }
  _objc_release(uVar14);
LAB_108fd24d0:
  _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 108fd24fc; end: 108fd2baf; -[SCCollectionViewListSection _updateDataSourceWithContainerViewModels:numberOfTotalElements:dataLoadingStatus:shouldResetExpansion:supplementaryViewModels:minimumInteritemSpacingHasChanged:] */

void FUN_108fd24fc(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,ulong param_6,undefined8 param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined *puVar26;
  uint uVar27;
  uint uStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x00010be93640(param_1);
  uVar5 = (uint)*(undefined8 *)(param_1 + 0x70);
  func_0x00010bfd9320();
  lVar8 = *(long *)(param_1 + 0x70);
  func_0x00010c0ded60();
  uVar9 = *(ulong *)(param_1 + 0x70);
  func_0x00010bf51e00();
  func_0x00010c1cf8a0();
  uVar10 = uVar9;
  func_0x00010bfd9320();
  uVar6 = (uint)uVar10;
  uVar24 = uVar9;
  func_0x00010c0ded60();
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00();
  uVar12 = *(ulong *)(param_1 + 0xc0);
  _objc_opt_respondsToSelector(uVar12,PTR_s_shouldRecalculateSectionHeightWi_11266a2f8);
  if ((uVar12 & 1) == 0) {
LAB_108fd25dc:
    uStack_88 = 0;
  }
  else {
    iVar7 = (int)*(undefined8 *)(param_1 + 0xc0);
    func_0x00010c232340();
    if (iVar7 == 0) goto LAB_108fd25dc;
    puVar13 = param_1;
    func_0x00010be350c0();
    uStack_88 = (uint)puVar13;
  }
  uVar14 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9c100();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c230dc0();
  uVar1 = (uint)(lVar8 != 0) & ((uint)uVar15 ^ 1);
  lVar3 = 2;
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  if (uVar5 != 0) {
    lVar3 = 1;
  }
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9c100();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c230dc0();
  uVar2 = (uint)(uVar24 != 0) & ((uint)uVar15 ^ 1);
  lVar4 = 2;
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  if (uVar6 != 0) {
    lVar4 = 1;
  }
  _objc_release(uVar14);
  uVar16 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf51e00();
  uVar12 = param_3;
  func_0x00010bf51e00();
  _objc_retain(uVar16);
  _objc_retain(uVar12);
  if (uVar16 == uVar12) {
    uVar27 = 0;
  }
  else if (uVar12 == 0) {
    uVar27 = 1;
  }
  else {
    uVar17 = uVar16;
    func_0x00010c071ae0();
    uVar27 = (uint)uVar17 ^ 1;
  }
  _objc_release(uVar12);
  _objc_release(uVar16);
  if (((((uVar27 & 1) == 0) && (((uVar5 ^ uVar6) & 1) == 0)) && ((lVar8 != 0) == (uVar24 != 0))) &&
     (*(long *)(param_1 + 0x30) == param_5)) {
    _objc_release(uVar12);
    _objc_release(uVar16);
    if ((uStack_88 & 1) == 0) goto LAB_108fd2b74;
  }
  else {
    _objc_release(uVar12);
    _objc_release(uVar16);
  }
  lVar8 = *(long *)(param_1 + 0x70);
  func_0x00010c0dea60();
  uVar24 = uVar9;
  func_0x00010c0dea60();
  if ((((param_6 & 1) == 0) && ((param_8 & 1) == 0)) &&
     ((lVar8 != 0) == (uVar24 != 0) && (uStack_88 & 1) == 0)) {
    puVar18 = *(undefined **)(param_1 + 0x10);
    func_0x00010b813c80(puVar18,param_3,*(undefined8 *)(param_1 + 0x28));
    puVar13 = puVar18;
    func_0x00010c066900();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar13;
    func_0x00010c0d3c80();
    if (puVar19 == (undefined *)0x0) {
      puVar20 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
      _objc_opt_new();
    }
    else {
      _objc_retain(puVar19);
      puVar20 = puVar19;
    }
    _objc_release(puVar19);
    _objc_release(puVar13);
    puVar13 = puVar18;
    func_0x00010bf6c000();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar13;
    func_0x00010c0d3c80();
    if (puVar19 == (undefined *)0x0) {
      puVar21 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
      _objc_opt_new();
    }
    else {
      _objc_retain(puVar19);
      puVar21 = puVar19;
    }
    _objc_release(puVar19);
    _objc_release(puVar13);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51e00();
    puVar13 = puVar18;
    func_0x00010c286820(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_1;
    func_0x00010be8aa20();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar19;
    func_0x00010c0d3c80();
    _objc_release(puVar19);
    _objc_release(puVar13);
    uVar23 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf9c100();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar23;
    func_0x00010c230dc0();
    _objc_release(uVar23);
    uVar6 = uVar6 | uVar2;
    uVar24 = param_3;
    if ((int)uVar15 == 0) {
      if (((((uVar5 | uVar1) & uVar6 & 1) == 0) || (puVar13 = puVar22, lVar3 == lVar4)) &&
         (puVar13 = puVar21, (lVar3 == 0) != 0 || ((uVar10 & 1) != 0 || uVar2 != 0))) {
        puVar13 = puVar20;
        if ((lVar3 == 0 & uVar6) != 0) goto LAB_108fd297c;
        puVar13 = puVar22;
        if ((*(long *)(param_1 + 200) != 0 & uVar6) != 1) goto LAB_108fd298c;
      }
LAB_108fd2978:
      uVar24 = *(ulong *)(param_1 + 0x10);
LAB_108fd297c:
      func_0x00010bf529e0(uVar24);
      func_0x00010bef92c0(puVar13);
    }
    else {
      puVar13 = puVar21;
      if ((lVar3 == 0) == 0 && ((uVar10 & 1) == 0 && uVar2 == 0)) goto LAB_108fd2978;
      puVar13 = puVar20;
      if ((lVar3 == 0 & uVar6) != 0) goto LAB_108fd297c;
    }
LAB_108fd298c:
    lVar8 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if ((lVar8 != 0) && (uVar10 = param_3, func_0x00010bf529e0(), uVar10 != 0)) {
      uVar12 = *(ulong *)(param_1 + 0x10);
      func_0x00010bf529e0();
      uVar10 = param_3;
      func_0x00010bf529e0();
      uVar24 = param_3;
      if (uVar12 <= uVar10) {
        uVar24 = *(ulong *)(param_1 + 0x10);
      }
      func_0x00010bf529e0(uVar24);
      puVar13 = param_1;
      func_0x00010be34580();
      puVar19 = param_1;
      func_0x00010be34580();
      puVar25 = puVar20;
      func_0x00010bf4b800();
      if (((((ulong)puVar25 & 1) == 0) &&
          (puVar25 = puVar21, func_0x00010bf4b800(), ((uint)puVar13 ^ (uint)puVar19) == 1)) &&
         (((ulong)puVar25 & 1) == 0)) {
        func_0x00010bef92c0(puVar22);
      }
    }
    puVar13 = puVar20;
    func_0x00010bf4b800();
    puVar19 = puVar21;
    func_0x00010bf4b800();
    if (((int)puVar13 != 0) && (((ulong)puVar19 & 1) == 0)) {
      lVar8 = *(long *)(param_1 + 0x70);
      func_0x00010c0dea60();
      if (lVar8 != 0) {
        func_0x00010bef92c0(puVar22);
      }
    }
    puVar13 = PTR_PTR_1126b48b0;
    puVar19 = puVar20;
    func_0x00010bf51e00(puVar20);
    puVar25 = puVar21;
    func_0x00010bf51e00(puVar21);
    puVar26 = puVar22;
    func_0x00010bf51e00(puVar22);
    func_0x00010bf34220(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar19);
    _objc_release(puVar22);
    _objc_release(uVar14);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar18);
  }
  else {
    puVar13 = PTR_PTR_1126b48b0;
    func_0x00010c128f60(PTR_PTR_1126b48b0);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar15 = param_7;
  func_0x00010bf51e00(param_7);
  func_0x00010c20fe40(*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar15);
  uVar10 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010bedf460(param_1);
  _objc_release(uVar10);
  _objc_release(puVar13);
LAB_108fd2b74:
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fd2bb0; end: 108fd2bb7; -[SCCollectionViewListSection dataLoadingStatus] */

undefined8 FUN_108fd2bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108fd2bb8; end: 108fd2d7f; -[SCCollectionViewListSection _updateSectionWithSectionUpdateModel:pendingContainerViewModels:expansionTracker:dataLoadingStatus:] */

void FUN_108fd2bb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x30) = param_6;
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010c0bf8a0(param_3);
  cVar1 = *(char *)(puStack_58 + 3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
    func_0x00010bea2e60(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = param_5;
    _objc_retain(param_5);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar3);
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = param_5;
    _objc_retain(param_5);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    _objc_release(uVar2);
    _objc_release(param_5);
    param_5 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_5);
    func_0x00010bf40a00();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108fd2d80; end: 108fd2da7; -[SCCollectionViewListSection _sectionDataProvider] */

void FUN_108fd2d80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fd2da8; end: 108fd2e33; -[SCCollectionViewListSection _setPendingUpdateWithRange:] */

void FUN_108fd2da8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108fd2e34; end: 108fd2e63; -[SCCollectionViewListSection _resetPendingUpdate] */

void FUN_108fd2e34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fd2e64; end: 108fd2fb7; -[SCCollectionViewListSection _announceViewMoreEventsWithIsViewMore:] */

void FUN_108fd2e64(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0xc0);
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar4,&PTR____CFConstantStringClassReference_110f8a838);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c1d0640(puVar2,param_2,lVar3,&PTR____CFConstantStringClassReference_110f8a838);
  }
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c156100();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010bef7f60(puVar2,param_2,lVar3);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  ppuVar1 = &PTR_PTR_110ad1e68;
  if (param_3 == 0) {
    ppuVar1 = &PTR_PTR_110ad1e70;
  }
  puVar5 = *ppuVar1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010bf7dbc0(uVar6,param_2,puVar5,param_1,puVar4);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108fd2fb8; end: 108fd3293; -[SCCollectionViewListSection _announceCellWillDisplayEventWithIndexPath:visibleIndexPath:eventTime:isDecelerating:isDragging:existingContainerViewModels:sectionDataModel:] */

void FUN_108fd2fb8(undefined8 param_1,long param_2,undefined **param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
                  undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = param_4;
  func_0x00010c0840e0();
  puVar2 = param_8;
  func_0x00010bf529e0();
  if (puVar1 < puVar2) {
    param_3 = &PTR___NSConcreteGlobalBlock_110ad1de8;
    puVar1 = param_8;
    func_0x000107c31908(param_8,&PTR___NSConcreteGlobalBlock_110ad1de8);
    uVar10 = *(undefined8 *)(param_2 + 0x78);
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_9;
    if (param_9 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = puVar1;
    func_0x00010bf51e00();
    puVar4 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    if (param_9 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release(param_2);
    _objc_release(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf4ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_contentViewModel_1125b1118);
  return;
}



/* Entry: 108fd3294; end: 108fd329b;  */

void FUN_108fd3294(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contentViewModel_1125b1118);
  return;
}



/* Entry: 108fd329c; end: 108fd34a7; -[SCCollectionViewListSection _announceDidEndDisplayingCellEventWithIndexPath:existingContainerViewModels:sectionDataModel:] */

void FUN_108fd329c(long param_1,undefined **param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010bf529e0();
  if (param_3 < puVar1) {
    param_2 = &PTR___NSConcreteGlobalBlock_110ad1e08;
    puVar1 = param_4;
    func_0x000107c31908(param_4,&PTR___NSConcreteGlobalBlock_110ad1e08);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_5;
    if (param_5 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf51e00();
    puVar5 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar8);
    _objc_release(puVar6);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (param_5 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release(param_1);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf4ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contentViewModel_1125b1118);
  return;
}



/* Entry: 108fd34a8; end: 108fd34af;  */

void FUN_108fd34a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contentViewModel_1125b1118);
  return;
}



/* Entry: 108fd34b0; end: 108fd360b; -[SCCollectionViewListSection _announceSupplementaryViewWillDisplayEventForElementKind:existingContainerViewModels:] */

void FUN_108fd34b0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar3 = &PTR___NSConcreteGlobalBlock_110ad1e28;
  func_0x000107c31908(param_4,&PTR___NSConcreteGlobalBlock_110ad1e28);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5);
  _objc_release(puVar2);
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf4ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar3,PTR_s_contentViewModel_1125b1118);
  return;
}



/* Entry: 108fd360c; end: 108fd3613;  */

void FUN_108fd360c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contentViewModel_1125b1118);
  return;
}


